#include "nit__light.sep.0.h"
/* method light#MModule#nitni_ccu for (self: MModule): nullable CCompilationUnit */
val* nit__light___MModule___nitni_ccu(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : nullable CCompilationUnit */;
var1 = self->attrs[COLOR_nit__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method light#MModule#nitni_ccu= for (self: MModule, nullable CCompilationUnit) */
void nit__light___MModule___nitni_ccu_61d(val* self, val* p0) {
self->attrs[COLOR_nit__light__MModule___nitni_ccu].val = p0; /* _nitni_ccu on <self:MModule> */
RET_LABEL:;
}
/* method light#MModule#nmodule for (self: MModule, AbstractCompilerVisitor): nullable AModule */
val* nit__light___MModule___nmodule(val* self, val* p0) {
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
var3 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__loader___ModelBuilder___mmodule2node(var4, self);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light#MModule#finalize_ffi for (self: MModule, AbstractCompiler) */
void nit__light___MModule___finalize_ffi(val* self, val* p0) {
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
val* var28 /* : ArrayIterator[nullable Object] */;
val* var_29 /* var : ArrayIterator[ExternFile] */;
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
val* var48 /* : FlatString */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : nullable CCompilationUnit */;
val* var57 /* : nullable CCompilationUnit */;
val* var58 /* : Template */;
val* var60 /* : Template */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
val* var65 /* : nullable CCompilationUnit */;
val* var67 /* : nullable CCompilationUnit */;
val* var68 /* : Template */;
val* var70 /* : Template */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
val* var75 /* : MultiHashMap[String, String] */;
val* var77 /* : MultiHashMap[String, String] */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
val* var82 /* : nullable Object */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
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
val* var105 /* : ArrayIterator[nullable Object] */;
val* var_106 /* var : ArrayIterator[String] */;
short int var107 /* : Bool */;
val* var108 /* : nullable Object */;
val* var_file109 /* var file: String */;
val* var110 /* : ExternCFile */;
val* var_f /* var f: ExternCFile */;
val* var111 /* : Array[String] */;
val* var113 /* : Array[String] */;
val* var114 /* : Array[String] */;
val* var116 /* : Array[String] */;
val* var117 /* : AbstractCompiler */;
val* var119 /* : AbstractCompiler */;
val* var120 /* : Array[ExternFile] */;
val* var122 /* : Array[ExternFile] */;
val* var125 /* : HashSet[AMethPropdef] */;
val* var127 /* : HashSet[AMethPropdef] */;
val* var129 /* : Array[ExternFile] */;
val* var131 /* : Array[ExternFile] */;
var_compiler = p0;
{
{ /* Inline light_ffi#MModule#uses_ffi (self) on <self:MModule> */
var2 = self->attrs[COLOR_nit__light_ffi__MModule___uses_ffi].s; /* _uses_ffi on <self:MModule> */
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
var4 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:AbstractCompiler>*/
}
var_v = var4;
{
var5 = nit__light___MModule___nmodule(self, var_v);
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
nit__light_ffi___AModule___ensure_compile_ffi_wrapper(var_n); /* Direct call light_ffi#AModule#ensure_compile_ffi_wrapper on <var_n:nullable AModule(AModule)>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var14 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#toolchain (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 525);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__Toolchain___compile_dir(var15);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var21 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var19) on <var19:AbstractCompiler> */
var24 = var19->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var19:AbstractCompiler> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nit__light_ffi___MModule___finalize_ffi_wrapper(self, var18, var22); /* Direct call light_ffi#MModule#finalize_ffi_wrapper on <self:MModule>*/
}
{
{ /* Inline light_ffi_base#MModule#ffi_files (self) on <self:MModule> */
var27 = self->attrs[COLOR_nit__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <self:MModule> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 82);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_ = var25;
{
var28 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_29 = var28;
for(;;) {
{
var30 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_29);
}
if (var30){
{
var31 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_29);
}
var_file = var31;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var34 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var32) on <var32:AbstractCompiler> */
var37 = var32->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var32:AbstractCompiler> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 979);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var35, var_file); /* Direct call array#Array#add on <var35:Array[ExternFile]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_29); /* Direct call array#ArrayIterator#next on <var_29:ArrayIterator[ExternFile]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_29); /* Direct call array#ArrayIterator#finish on <var_29:ArrayIterator[ExternFile]>*/
}
{
nit__light___MModule___ensure_compile_nitni_base(self, var_v); /* Direct call light#MModule#ensure_compile_nitni_base on <self:MModule>*/
}
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var40 = self->attrs[COLOR_nit__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 45);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_c_types (var38) on <var38:nullable CCompilationUnit> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 31);
fatal_exit(1);
}
var43 = var38->attrs[COLOR_nit__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <var38:nullable CCompilationUnit> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 31);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var44 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "#include \"";
var48 = standard___standard__NativeString___to_s_with_length(var47, 10l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "._ffi.h\"\n";
var52 = standard___standard__NativeString___to_s_with_length(var51, 9l);
var50 = var52;
varonce49 = var50;
}
((struct instance_standard__NativeArray*)var44)->values[2]=var50;
} else {
var44 = varonce;
varonce = NULL;
}
{
var53 = nit___nit__MModule___nit__model_base__MEntity__c_name(self);
}
((struct instance_standard__NativeArray*)var44)->values[1]=var53;
{
var54 = ((val*(*)(val* self))(var44->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce = var44;
{
template___template__Template___add(var41, var54); /* Direct call template#Template#add on <var41:Template>*/
}
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var57 = self->attrs[COLOR_nit__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 46);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_c_types (var55) on <var55:nullable CCompilationUnit> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 31);
fatal_exit(1);
}
var60 = var55->attrs[COLOR_nit__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <var55:nullable CCompilationUnit> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 31);
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
var64 = standard___standard__NativeString___to_s_with_length(var63, 20l);
var62 = var64;
varonce61 = var62;
}
{
template___template__Template___add(var58, var62); /* Direct call template#Template#add on <var58:Template>*/
}
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var67 = self->attrs[COLOR_nit__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (var65 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 47);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_c_types (var65) on <var65:nullable CCompilationUnit> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 31);
fatal_exit(1);
}
var70 = var65->attrs[COLOR_nit__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <var65:nullable CCompilationUnit> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 31);
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
var74 = standard___standard__NativeString___to_s_with_length(var73, 84l);
var72 = var74;
varonce71 = var72;
}
{
template___template__Template___add(var68, var72); /* Direct call template#Template#add on <var68:Template>*/
}
{
{ /* Inline light_c#MModule#cflags (self) on <self:MModule> */
var77 = self->attrs[COLOR_nit__light_c__MModule___cflags].val; /* _cflags on <self:MModule> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 77);
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
var81 = standard___standard__NativeString___to_s_with_length(var80, 0l);
var79 = var81;
varonce78 = var79;
}
{
var82 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var75, var79);
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = " ";
var86 = standard___standard__NativeString___to_s_with_length(var85, 1l);
var84 = var86;
varonce83 = var84;
}
{
var87 = standard__string___Collection___join(var82, var84);
}
var_cflags = var87;
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var90 = self->attrs[COLOR_nit__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var93 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#toolchain (var91) on <var91:AbstractCompiler> */
var96 = var91->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <var91:AbstractCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 525);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = nit___nit__Toolchain___compile_dir(var94);
}
if (var88 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 53);
fatal_exit(1);
} else {
nit__light___CCompilationUnit___write_as_nitni(var88, self, var97); /* Direct call light#CCompilationUnit#write_as_nitni on <var88:nullable CCompilationUnit>*/
}
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var100 = self->attrs[COLOR_nit__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (var98 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 55);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#files (var98) on <var98:nullable CCompilationUnit> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 47);
fatal_exit(1);
}
var103 = var98->attrs[COLOR_nit__c_tools__CCompilationUnit___files].val; /* _files on <var98:nullable CCompilationUnit> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 47);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
var_104 = var101;
{
var105 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_104);
}
var_106 = var105;
for(;;) {
{
var107 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_106);
}
if (var107){
{
var108 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_106);
}
var_file109 = var108;
var110 = NEW_nit__ExternCFile(&type_nit__ExternCFile);
{
((void(*)(val* self, val* p0))(var110->class->vft[COLOR_nit__c_tools__ExternFile__filename_61d]))(var110, var_file109); /* filename= on <var110:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var110->class->vft[COLOR_nit__c_tools__ExternCFile__cflags_61d]))(var110, var_cflags); /* cflags= on <var110:ExternCFile>*/
}
{
((void(*)(val* self))(var110->class->vft[COLOR_standard__kernel__Object__init]))(var110); /* init on <var110:ExternCFile>*/
}
var_f = var110;
{
{ /* Inline c_tools#ExternFile#pkgconfigs (var_f) on <var_f:ExternCFile> */
var113 = var_f->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_f:ExternCFile> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 123);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline light_c#MModule#pkgconfigs (self) on <self:MModule> */
var116 = self->attrs[COLOR_nit__light_c__MModule___pkgconfigs].val; /* _pkgconfigs on <self:MModule> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 83);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var111, var114); /* Direct call array#Array#add_all on <var111:Array[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var119 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var117) on <var117:AbstractCompiler> */
var122 = var117->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var117:AbstractCompiler> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 979);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var120, var_f); /* Direct call array#Array#add on <var120:Array[ExternFile]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_106); /* Direct call array#ArrayIterator#next on <var_106:ArrayIterator[String]>*/
}
} else {
goto BREAK_label123;
}
}
BREAK_label123: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_106); /* Direct call array#ArrayIterator#finish on <var_106:ArrayIterator[String]>*/
}
{
{ /* Inline light#MModule#nitni_ccu= (self,((val*)NULL)) on <self:MModule> */
self->attrs[COLOR_nit__light__MModule___nitni_ccu].val = ((val*)NULL); /* _nitni_ccu on <self:MModule> */
RET_LABEL124:(void)0;
}
}
{
{ /* Inline light_ffi#MModule#compiled_ffi_methods (self) on <self:MModule> */
var127 = self->attrs[COLOR_nit__light_ffi__MModule___compiled_ffi_methods].val; /* _compiled_ffi_methods on <self:MModule> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_ffi_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi, 66);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__clear(var125); /* Direct call hash_collection#HashSet#clear on <var125:HashSet[AMethPropdef]>*/
}
{
{ /* Inline light_ffi#MModule#ffi_ccu= (self,((val*)NULL)) on <self:MModule> */
self->attrs[COLOR_nit__light_ffi__MModule___ffi_ccu].val = ((val*)NULL); /* _ffi_ccu on <self:MModule> */
RET_LABEL128:(void)0;
}
}
{
{ /* Inline light_ffi_base#MModule#ffi_files (self) on <self:MModule> */
var131 = self->attrs[COLOR_nit__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <self:MModule> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 82);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var129); /* Direct call array#AbstractArray#clear on <var129:Array[ExternFile]>*/
}
RET_LABEL:;
}
/* method light#MModule#ensure_compile_nitni_base for (self: MModule, AbstractCompilerVisitor) */
void nit__light___MModule___ensure_compile_nitni_base(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nit__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
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
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable CCompilationUnit(CCompilationUnit)>*/
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
var8 = NEW_nit__CCompilationUnit(&type_nit__CCompilationUnit);
{
{ /* Inline kernel#Object#init (var8) on <var8:CCompilationUnit> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline light#MModule#nitni_ccu= (self,var8) on <self:MModule> */
self->attrs[COLOR_nit__light__MModule___nitni_ccu].val = var8; /* _nitni_ccu on <self:MModule> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method light#MModule#collect_linker_libs for (self: MModule): nullable Array[String] */
val* nit__light___MModule___collect_linker_libs(val* self) {
val* var /* : nullable Array[String] */;
val* var1 /* : MultiHashMap[String, String] */;
val* var3 /* : MultiHashMap[String, String] */;
val* var4 /* : RemovableCollection[nullable Object] */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MultiHashMap[String, String] */;
val* var12 /* : MultiHashMap[String, String] */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : nullable Object */;
{
{ /* Inline light_c#MModule#ldflags (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__light_c__MModule___ldflags].val; /* _ldflags on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 80);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__keys(var1);
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "";
var7 = standard___standard__NativeString___to_s_with_length(var6, 0l);
var5 = var7;
varonce = var5;
}
{
var8 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var4, var5); /* has on <var4:RemovableCollection[nullable Object](RemovableCollection[String])>*/
}
var9 = !var8;
if (var9){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline light_c#MModule#ldflags (self) on <self:MModule> */
var12 = self->attrs[COLOR_nit__light_c__MModule___ldflags].val; /* _ldflags on <self:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 80);
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
var16 = standard___standard__NativeString___to_s_with_length(var15, 0l);
var14 = var16;
varonce13 = var14;
}
{
var17 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var10, var14);
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light#AMethPropdef#compile_ffi_support_to_c for (self: AMethPropdef, AbstractCompilerVisitor) */
void nit__light___AMethPropdef___compile_ffi_support_to_c(val* self, val* p0) {
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
val* var33 /* : FlatString */;
val* var34 /* : SignatureLength */;
val* var35 /* : CallContext */;
val* var36 /* : String */;
val* var_csignature /* var csignature: String */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
val* var43 /* : String */;
var_v = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 86);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var) on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mmodule = var6;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var11 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var9) on <var9:AbstractCompiler> */
var14 = var9->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var9:AbstractCompiler> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nit__loader___ModelBuilder___mmodule2node(var12, var_mmodule);
}
var_amodule = var15;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var18 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 88);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var16) on <var16:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var21 = var16->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var16:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var19) on <var19:MClassDef> */
var24 = var19->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var19:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_mclass_type = var22;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var27 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 91);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var25) on <var25:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var30 = var25->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var25:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
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
var33 = standard___standard__NativeString___to_s_with_length(var32, 7l);
var31 = var33;
varonce = var31;
}
{
var34 = nit__nitni_utilities___standard__Object___long_signature(self);
}
{
var35 = nit__nitni_utilities___standard__Object___internal_call_context(self);
}
{
var36 = nit__nitni_utilities___MMethod___build_csignature(var28, var_mclass_type, var_mmodule, var31, var34, var35);
}
var_csignature = var36;
if (unlikely(varonce37==NULL)) {
var38 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = ";";
var42 = standard___standard__NativeString___to_s_with_length(var41, 1l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var38)->values[1]=var40;
} else {
var38 = varonce37;
varonce37 = NULL;
}
((struct instance_standard__NativeArray*)var38)->values[0]=var_csignature;
{
var43 = ((val*(*)(val* self))(var38->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
nit___nit__AbstractCompilerVisitor___declare_once(var_v, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <var_v:AbstractCompilerVisitor>*/
}
if (var_amodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 95);
fatal_exit(1);
} else {
nit__light_ffi___AModule___ensure_compile_ffi_wrapper(var_amodule); /* Direct call light_ffi#AModule#ensure_compile_ffi_wrapper on <var_amodule:nullable AModule>*/
}
{
nit__light_ffi___AMethPropdef___compile_ffi_method(self, var_mmodule); /* Direct call light_ffi#AMethPropdef#compile_ffi_method on <self:AMethPropdef>*/
}
{
nit__light___MModule___ensure_compile_nitni_base(var_mmodule, var_v); /* Direct call light#MModule#ensure_compile_nitni_base on <var_mmodule:MModule>*/
}
RET_LABEL:;
}
/* method light#AMethPropdef#compile_externmeth_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nit__light___AMethPropdef___compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2) {
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
val* var37 /* : FlatString */;
val* var38 /* : SignatureLength */;
val* var39 /* : String */;
val* var_externname /* var externname: String */;
val* var_recv_var /* var recv_var: nullable RuntimeVariable */;
val* var40 /* : nullable MSignature */;
val* var42 /* : nullable MSignature */;
val* var43 /* : nullable MType */;
val* var45 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_other49 /* var other: nullable Object */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : MType */;
val* var53 /* : RuntimeVariable */;
val* var54 /* : Array[String] */;
val* var_arguments_for_c /* var arguments_for_c: Array[String] */;
long var_a /* var a: Int */;
long var55 /* : Int */;
long var57 /* : Int */;
long var_ /* var : Int */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : MClassDef */;
val* var68 /* : MClassDef */;
val* var69 /* : MClass */;
val* var71 /* : MClass */;
val* var72 /* : MClassType */;
val* var74 /* : MClassType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var75 /* : nullable MSignature */;
val* var77 /* : nullable MSignature */;
val* var78 /* : Array[MParameter] */;
val* var80 /* : Array[MParameter] */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
val* var88 /* : nullable Object */;
val* var89 /* : MType */;
val* var91 /* : MType */;
val* var92 /* : MType */;
short int var93 /* : Bool */;
val* var94 /* : String */;
val* var96 /* : String */;
val* var98 /* : NativeArray[String] */;
static val* varonce97;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : FlatString */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var110 /* : NativeArray[String] */;
static val* varonce109;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var122 /* : NativeArray[String] */;
static val* varonce121;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : FlatString */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : FlatString */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var141 /* : NativeArray[String] */;
static val* varonce140;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : FlatString */;
val* var146 /* : String */;
val* var147 /* : String */;
long var148 /* : Int */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
val* var156 /* : NativeArray[String] */;
static val* varonce155;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
val* var160 /* : FlatString */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
val* var164 /* : FlatString */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : FlatString */;
val* var169 /* : String */;
val* var170 /* : String */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
val* var178 /* : NativeArray[String] */;
static val* varonce177;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : FlatString */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : FlatString */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : FlatString */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
val* var195 /* : FlatString */;
val* var196 /* : String */;
val* var197 /* : String */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : FlatString */;
val* var203 /* : NativeArray[String] */;
static val* varonce202;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
val* var207 /* : FlatString */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
val* var211 /* : FlatString */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
val* var215 /* : FlatString */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
val* var219 /* : FlatString */;
val* var220 /* : String */;
val* var221 /* : String */;
val* var223 /* : NativeArray[String] */;
static val* varonce222;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
val* var227 /* : FlatString */;
val* var228 /* : String */;
val* var229 /* : String */;
val* var230 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
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
var10 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__light___AMethPropdef___compile_externmeth_to_c]))(self, p0, p1, p2); /* compile_externmeth_to_c on <self:AMethPropdef>*/
}
var = var10;
goto RET_LABEL;
} else {
}
{
var11 = nit__light_only___AMethPropdef___accept_externmeth(self);
}
var12 = !var11;
if (var12){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var15 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var13) on <var13:MClassDef> */
var18 = var13->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var13:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mmodule = var16;
{
{ /* Inline light_ffi#MModule#uses_ffi= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nit__light_ffi__MModule___uses_ffi].s = 1; /* _uses_ffi on <var_mmodule:MModule> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var22 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var20) on <var20:MClassDef> */
var25 = var20->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var20:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_mclass_type = var23;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var28 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var31 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var29) on <var29:MClassDef> */
var34 = var29->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var29:MClassDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
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
var37 = standard___standard__NativeString___to_s_with_length(var36, 7l);
var35 = var37;
varonce = var35;
}
{
var38 = nit__nitni_utilities___standard__Object___long_signature(self);
}
{
var39 = nit__nitni_utilities___MMethod___build_cname(var26, var32, var_mmodule, var35, var38);
}
var_externname = var39;
var_recv_var = ((val*)NULL);
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var42 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (var40 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 122);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var40) on <var40:nullable MSignature> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
fatal_exit(1);
}
var45 = var40->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var40:nullable MSignature> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_return_mtype = var43;
if (var_return_mtype == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_return_mtype,((val*)NULL)) on <var_return_mtype:nullable MType> */
var_other49 = ((val*)NULL);
{
var50 = ((short int(*)(val* self, val* p0))(var_return_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_return_mtype, var_other49); /* == on <var_return_mtype:nullable MType(MType)>*/
}
var51 = !var50;
var47 = var51;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
{
var52 = ((val*(*)(val* self, val* p0, val* p1))(var_return_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_return_mtype, var_mmodule, var_mclass_type); /* anchor_to on <var_return_mtype:nullable MType(MType)>*/
}
var_return_mtype = var52;
{
var53 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var_return_mtype);
}
var_recv_var = var53;
} else {
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
var54 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var54); /* Direct call array#Array#init on <var54:Array[String]>*/
}
var_arguments_for_c = var54;
var_a = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var57 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
var_ = var55;
for(;;) {
{
{ /* Inline kernel#Int#< (var_a,var_) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var60 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var61 = var_a < var_;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
{
var62 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var_a);
}
var_arg = var62;
{
{ /* Inline kernel#Int#== (var_a,0l) on <var_a:Int> */
var65 = var_a == 0l;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var68 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var66) on <var66:MClassDef> */
var71 = var66->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var66:MClassDef> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var69) on <var69:MClass> */
var74 = var69->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var69:MClass> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_param_mtype = var72;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var77 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 137);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var75) on <var75:nullable MSignature> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var80 = var75->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var75:nullable MSignature> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_a,1l) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var83 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var87 = var_a - 1l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
var88 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var78, var81);
}
{
{ /* Inline model#MParameter#mtype (var88) on <var88:nullable Object(MParameter)> */
var91 = var88->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var88:nullable Object(MParameter)> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
var_param_mtype = var89;
}
{
var92 = ((val*(*)(val* self, val* p0, val* p1))(var_param_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_param_mtype, var_mmodule, var_mclass_type); /* anchor_to on <var_param_mtype:MType>*/
}
var_param_mtype = var92;
{
var93 = ((short int(*)(val* self))(var_param_mtype->class->vft[COLOR_nit__nitni_base__MType__is_cprimitive]))(var_param_mtype); /* is_cprimitive on <var_param_mtype:MType>*/
}
if (var93){
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_arg) on <var_arg:RuntimeVariable> */
var96 = var_arg->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1781);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_arguments_for_c, var94); /* Direct call array#Array#add on <var_arguments_for_c:Array[String]>*/
}
} else {
if (unlikely(varonce97==NULL)) {
var98 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "struct nitni_instance* var_for_c_";
var102 = standard___standard__NativeString___to_s_with_length(var101, 33l);
var100 = var102;
varonce99 = var100;
}
((struct instance_standard__NativeArray*)var98)->values[0]=var100;
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = ";";
var106 = standard___standard__NativeString___to_s_with_length(var105, 1l);
var104 = var106;
varonce103 = var104;
}
((struct instance_standard__NativeArray*)var98)->values[2]=var104;
} else {
var98 = varonce97;
varonce97 = NULL;
}
var107 = standard__string___Int___Object__to_s(var_a);
((struct instance_standard__NativeArray*)var98)->values[1]=var107;
{
var108 = ((val*(*)(val* self))(var98->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var98); /* native_to_s on <var98:NativeArray[String]>*/
}
varonce97 = var98;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var108); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce109==NULL)) {
var110 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "var_for_c_";
var114 = standard___standard__NativeString___to_s_with_length(var113, 10l);
var112 = var114;
varonce111 = var112;
}
((struct instance_standard__NativeArray*)var110)->values[0]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = " = nit_alloc(sizeof(struct nitni_instance));";
var118 = standard___standard__NativeString___to_s_with_length(var117, 44l);
var116 = var118;
varonce115 = var116;
}
((struct instance_standard__NativeArray*)var110)->values[2]=var116;
} else {
var110 = varonce109;
varonce109 = NULL;
}
var119 = standard__string___Int___Object__to_s(var_a);
((struct instance_standard__NativeArray*)var110)->values[1]=var119;
{
var120 = ((val*(*)(val* self))(var110->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce121==NULL)) {
var122 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "var_for_c_";
var126 = standard___standard__NativeString___to_s_with_length(var125, 10l);
var124 = var126;
varonce123 = var124;
}
((struct instance_standard__NativeArray*)var122)->values[0]=var124;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "->value = ";
var130 = standard___standard__NativeString___to_s_with_length(var129, 10l);
var128 = var130;
varonce127 = var128;
}
((struct instance_standard__NativeArray*)var122)->values[2]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = ";";
var134 = standard___standard__NativeString___to_s_with_length(var133, 1l);
var132 = var134;
varonce131 = var132;
}
((struct instance_standard__NativeArray*)var122)->values[4]=var132;
} else {
var122 = varonce121;
varonce121 = NULL;
}
var135 = standard__string___Int___Object__to_s(var_a);
((struct instance_standard__NativeArray*)var122)->values[1]=var135;
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_arg) on <var_arg:RuntimeVariable> */
var138 = var_arg->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1781);
fatal_exit(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
((struct instance_standard__NativeArray*)var122)->values[3]=var136;
{
var139 = ((val*(*)(val* self))(var122->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var122); /* native_to_s on <var122:NativeArray[String]>*/
}
varonce121 = var122;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var139); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce140==NULL)) {
var141 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "var_for_c_";
var145 = standard___standard__NativeString___to_s_with_length(var144, 10l);
var143 = var145;
varonce142 = var143;
}
((struct instance_standard__NativeArray*)var141)->values[0]=var143;
} else {
var141 = varonce140;
varonce140 = NULL;
}
var146 = standard__string___Int___Object__to_s(var_a);
((struct instance_standard__NativeArray*)var141)->values[1]=var146;
{
var147 = ((val*(*)(val* self))(var141->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var141); /* native_to_s on <var141:NativeArray[String]>*/
}
varonce140 = var141;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_arguments_for_c, var147); /* Direct call array#Array#add on <var_arguments_for_c:Array[String]>*/
}
}
{
var148 = standard___standard__Int___Discrete__successor(var_a, 1l);
}
var_a = var148;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (var_recv_var == NULL) {
var149 = 1; /* is null */
} else {
var149 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recv_var,((val*)NULL)) on <var_recv_var:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_recv_var,var_other) on <var_recv_var:nullable RuntimeVariable(RuntimeVariable)> */
var154 = var_recv_var == var_other;
var152 = var154;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
var149 = var150;
}
if (var149){
if (unlikely(varonce155==NULL)) {
var156 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "(";
var160 = standard___standard__NativeString___to_s_with_length(var159, 1l);
var158 = var160;
varonce157 = var158;
}
((struct instance_standard__NativeArray*)var156)->values[1]=var158;
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = ");";
var164 = standard___standard__NativeString___to_s_with_length(var163, 2l);
var162 = var164;
varonce161 = var162;
}
((struct instance_standard__NativeArray*)var156)->values[3]=var162;
} else {
var156 = varonce155;
varonce155 = NULL;
}
((struct instance_standard__NativeArray*)var156)->values[0]=var_externname;
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = ", ";
var168 = standard___standard__NativeString___to_s_with_length(var167, 2l);
var166 = var168;
varonce165 = var166;
}
{
var169 = standard__string___Collection___join(var_arguments_for_c, var166);
}
((struct instance_standard__NativeArray*)var156)->values[2]=var169;
{
var170 = ((val*(*)(val* self))(var156->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var156); /* native_to_s on <var156:NativeArray[String]>*/
}
varonce155 = var156;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var170); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (var_return_mtype == NULL) {
var171 = 0; /* is null */
} else {
var171 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_return_mtype,((val*)NULL)) on <var_return_mtype:nullable MType> */
var_other49 = ((val*)NULL);
{
var174 = ((short int(*)(val* self, val* p0))(var_return_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_return_mtype, var_other49); /* == on <var_return_mtype:nullable MType(MType)>*/
}
var175 = !var174;
var172 = var175;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
var171 = var172;
}
if (unlikely(!var171)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 154);
fatal_exit(1);
}
{
var176 = ((short int(*)(val* self))(var_return_mtype->class->vft[COLOR_nit__nitni_base__MType__is_cprimitive]))(var_return_mtype); /* is_cprimitive on <var_return_mtype:nullable MType(MType)>*/
}
if (var176){
if (unlikely(varonce177==NULL)) {
var178 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = " = ";
var182 = standard___standard__NativeString___to_s_with_length(var181, 3l);
var180 = var182;
varonce179 = var180;
}
((struct instance_standard__NativeArray*)var178)->values[1]=var180;
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "(";
var186 = standard___standard__NativeString___to_s_with_length(var185, 1l);
var184 = var186;
varonce183 = var184;
}
((struct instance_standard__NativeArray*)var178)->values[3]=var184;
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = ");";
var190 = standard___standard__NativeString___to_s_with_length(var189, 2l);
var188 = var190;
varonce187 = var188;
}
((struct instance_standard__NativeArray*)var178)->values[5]=var188;
} else {
var178 = varonce177;
varonce177 = NULL;
}
{
var191 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_standard__string__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var178)->values[0]=var191;
((struct instance_standard__NativeArray*)var178)->values[2]=var_externname;
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = ", ";
var195 = standard___standard__NativeString___to_s_with_length(var194, 2l);
var193 = var195;
varonce192 = var193;
}
{
var196 = standard__string___Collection___join(var_arguments_for_c, var193);
}
((struct instance_standard__NativeArray*)var178)->values[4]=var196;
{
var197 = ((val*(*)(val* self))(var178->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var178); /* native_to_s on <var178:NativeArray[String]>*/
}
varonce177 = var178;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var197); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "struct nitni_instance* ret_var;";
var201 = standard___standard__NativeString___to_s_with_length(var200, 31l);
var199 = var201;
varonce198 = var199;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var199); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce202==NULL)) {
var203 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "ret_var = ";
var207 = standard___standard__NativeString___to_s_with_length(var206, 10l);
var205 = var207;
varonce204 = var205;
}
((struct instance_standard__NativeArray*)var203)->values[0]=var205;
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = "(";
var211 = standard___standard__NativeString___to_s_with_length(var210, 1l);
var209 = var211;
varonce208 = var209;
}
((struct instance_standard__NativeArray*)var203)->values[2]=var209;
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = ");";
var215 = standard___standard__NativeString___to_s_with_length(var214, 2l);
var213 = var215;
varonce212 = var213;
}
((struct instance_standard__NativeArray*)var203)->values[4]=var213;
} else {
var203 = varonce202;
varonce202 = NULL;
}
((struct instance_standard__NativeArray*)var203)->values[1]=var_externname;
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = ", ";
var219 = standard___standard__NativeString___to_s_with_length(var218, 2l);
var217 = var219;
varonce216 = var217;
}
{
var220 = standard__string___Collection___join(var_arguments_for_c, var217);
}
((struct instance_standard__NativeArray*)var203)->values[3]=var220;
{
var221 = ((val*(*)(val* self))(var203->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var203); /* native_to_s on <var203:NativeArray[String]>*/
}
varonce202 = var203;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var221); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce222==NULL)) {
var223 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = " = ret_var->value;";
var227 = standard___standard__NativeString___to_s_with_length(var226, 18l);
var225 = var227;
varonce224 = var225;
}
((struct instance_standard__NativeArray*)var223)->values[1]=var225;
} else {
var223 = varonce222;
varonce222 = NULL;
}
{
var228 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_standard__string__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var223)->values[0]=var228;
{
var229 = ((val*(*)(val* self))(var223->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var223); /* native_to_s on <var223:NativeArray[String]>*/
}
varonce222 = var223;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var229); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
}
{
var230 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_recv_var, var_return_mtype); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_recv_var = var230;
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var_recv_var); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
}
{
nit__light___AMethPropdef___compile_ffi_support_to_c(self, var_v); /* Direct call light#AMethPropdef#compile_ffi_support_to_c on <self:AMethPropdef>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light#AMethPropdef#compile_externinit_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nit__light___AMethPropdef___compile_externinit_to_c(val* self, val* p0, val* p1, val* p2) {
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
val* var37 /* : FlatString */;
val* var38 /* : SignatureLength */;
val* var39 /* : String */;
val* var_externname /* var externname: String */;
val* var40 /* : nullable Object */;
val* var41 /* : MType */;
val* var43 /* : MType */;
val* var_return_mtype /* var return_mtype: MType */;
val* var44 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
val* var45 /* : nullable Object */;
val* var46 /* : Array[String] */;
val* var_arguments_for_c /* var arguments_for_c: Array[String] */;
long var_a /* var a: Int */;
long var47 /* : Int */;
long var49 /* : Int */;
long var_ /* var : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var55 /* : nullable MSignature */;
val* var57 /* : nullable MSignature */;
val* var58 /* : Array[MParameter] */;
val* var60 /* : Array[MParameter] */;
val* var61 /* : nullable Object */;
val* var62 /* : MType */;
val* var64 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var65 /* : MType */;
short int var66 /* : Bool */;
val* var67 /* : String */;
val* var69 /* : String */;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var83 /* : NativeArray[String] */;
static val* varonce82;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
val* var87 /* : FlatString */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
val* var91 /* : FlatString */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var95 /* : NativeArray[String] */;
static val* varonce94;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : FlatString */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : FlatString */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var114 /* : NativeArray[String] */;
static val* varonce113;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
val* var119 /* : String */;
val* var120 /* : String */;
long var121 /* : Int */;
short int var122 /* : Bool */;
val* var124 /* : NativeArray[String] */;
static val* varonce123;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
val* var142 /* : String */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
val* var147 /* : FlatString */;
val* var149 /* : NativeArray[String] */;
static val* varonce148;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : FlatString */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : FlatString */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
val* var161 /* : FlatString */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
val* var165 /* : FlatString */;
val* var166 /* : String */;
val* var167 /* : String */;
val* var169 /* : NativeArray[String] */;
static val* varonce168;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : FlatString */;
val* var174 /* : String */;
val* var175 /* : String */;
val* var176 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
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
var10 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__light___AMethPropdef___compile_externinit_to_c]))(self, p0, p1, p2); /* compile_externinit_to_c on <self:AMethPropdef>*/
}
var = var10;
goto RET_LABEL;
} else {
}
{
var11 = nit__light_only___AMethPropdef___accept_externmeth(self);
}
var12 = !var11;
if (var12){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var15 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var13) on <var13:MClassDef> */
var18 = var13->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var13:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mmodule = var16;
{
{ /* Inline light_ffi#MModule#uses_ffi= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nit__light_ffi__MModule___uses_ffi].s = 1; /* _uses_ffi on <var_mmodule:MModule> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var22 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var20) on <var20:MClassDef> */
var25 = var20->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var20:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_mclass_type = var23;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var28 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var31 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var29) on <var29:MClassDef> */
var34 = var29->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var29:MClassDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
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
var37 = standard___standard__NativeString___to_s_with_length(var36, 7l);
var35 = var37;
varonce = var35;
}
{
var38 = nit__nitni_utilities___standard__Object___long_signature(self);
}
{
var39 = nit__nitni_utilities___MMethod___build_cname(var26, var32, var_mmodule, var35, var38);
}
var_externname = var39;
{
var40 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var40) on <var40:nullable Object(RuntimeVariable)> */
var43 = var40->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var40:nullable Object(RuntimeVariable)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_return_mtype = var41;
{
var44 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var_return_mtype);
}
var_recv_var = var44;
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
{
var45 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(var_arguments);
}
var46 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var46); /* Direct call array#Array#init on <var46:Array[String]>*/
}
var_arguments_for_c = var46;
var_a = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var49 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_ = var47;
for(;;) {
{
{ /* Inline kernel#Int#< (var_a,var_) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var52 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var53 = var_a < var_;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
{
var54 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var_a);
}
var_arg = var54;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var57 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light, 195);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var55) on <var55:nullable MSignature> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var60 = var55->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var55:nullable MSignature> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var58, var_a);
}
{
{ /* Inline model#MParameter#mtype (var61) on <var61:nullable Object(MParameter)> */
var64 = var61->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var61:nullable Object(MParameter)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_param_mtype = var62;
{
var65 = ((val*(*)(val* self, val* p0, val* p1))(var_param_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_param_mtype, var_mmodule, var_mclass_type); /* anchor_to on <var_param_mtype:MType>*/
}
var_param_mtype = var65;
{
var66 = ((short int(*)(val* self))(var_param_mtype->class->vft[COLOR_nit__nitni_base__MType__is_cprimitive]))(var_param_mtype); /* is_cprimitive on <var_param_mtype:MType>*/
}
if (var66){
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_arg) on <var_arg:RuntimeVariable> */
var69 = var_arg->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1781);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_arguments_for_c, var67); /* Direct call array#Array#add on <var_arguments_for_c:Array[String]>*/
}
} else {
if (unlikely(varonce70==NULL)) {
var71 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "struct nitni_instance* var_for_c_";
var75 = standard___standard__NativeString___to_s_with_length(var74, 33l);
var73 = var75;
varonce72 = var73;
}
((struct instance_standard__NativeArray*)var71)->values[0]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = ";";
var79 = standard___standard__NativeString___to_s_with_length(var78, 1l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var71)->values[2]=var77;
} else {
var71 = varonce70;
varonce70 = NULL;
}
var80 = standard__string___Int___Object__to_s(var_a);
((struct instance_standard__NativeArray*)var71)->values[1]=var80;
{
var81 = ((val*(*)(val* self))(var71->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce82==NULL)) {
var83 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "var_for_c_";
var87 = standard___standard__NativeString___to_s_with_length(var86, 10l);
var85 = var87;
varonce84 = var85;
}
((struct instance_standard__NativeArray*)var83)->values[0]=var85;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = " = nit_alloc(sizeof(struct nitni_instance));";
var91 = standard___standard__NativeString___to_s_with_length(var90, 44l);
var89 = var91;
varonce88 = var89;
}
((struct instance_standard__NativeArray*)var83)->values[2]=var89;
} else {
var83 = varonce82;
varonce82 = NULL;
}
var92 = standard__string___Int___Object__to_s(var_a);
((struct instance_standard__NativeArray*)var83)->values[1]=var92;
{
var93 = ((val*(*)(val* self))(var83->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var83); /* native_to_s on <var83:NativeArray[String]>*/
}
varonce82 = var83;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var93); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce94==NULL)) {
var95 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "var_for_c_";
var99 = standard___standard__NativeString___to_s_with_length(var98, 10l);
var97 = var99;
varonce96 = var97;
}
((struct instance_standard__NativeArray*)var95)->values[0]=var97;
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "->value = ";
var103 = standard___standard__NativeString___to_s_with_length(var102, 10l);
var101 = var103;
varonce100 = var101;
}
((struct instance_standard__NativeArray*)var95)->values[2]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = ";";
var107 = standard___standard__NativeString___to_s_with_length(var106, 1l);
var105 = var107;
varonce104 = var105;
}
((struct instance_standard__NativeArray*)var95)->values[4]=var105;
} else {
var95 = varonce94;
varonce94 = NULL;
}
var108 = standard__string___Int___Object__to_s(var_a);
((struct instance_standard__NativeArray*)var95)->values[1]=var108;
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_arg) on <var_arg:RuntimeVariable> */
var111 = var_arg->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1781);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
((struct instance_standard__NativeArray*)var95)->values[3]=var109;
{
var112 = ((val*(*)(val* self))(var95->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var95); /* native_to_s on <var95:NativeArray[String]>*/
}
varonce94 = var95;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var112); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce113==NULL)) {
var114 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "var_for_c_";
var118 = standard___standard__NativeString___to_s_with_length(var117, 10l);
var116 = var118;
varonce115 = var116;
}
((struct instance_standard__NativeArray*)var114)->values[0]=var116;
} else {
var114 = varonce113;
varonce113 = NULL;
}
var119 = standard__string___Int___Object__to_s(var_a);
((struct instance_standard__NativeArray*)var114)->values[1]=var119;
{
var120 = ((val*(*)(val* self))(var114->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var114); /* native_to_s on <var114:NativeArray[String]>*/
}
varonce113 = var114;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_arguments_for_c, var120); /* Direct call array#Array#add on <var_arguments_for_c:Array[String]>*/
}
}
{
var121 = standard___standard__Int___Discrete__successor(var_a, 1l);
}
var_a = var121;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var122 = ((short int(*)(val* self))(var_return_mtype->class->vft[COLOR_nit__nitni_base__MType__is_cprimitive]))(var_return_mtype); /* is_cprimitive on <var_return_mtype:MType>*/
}
if (var122){
if (unlikely(varonce123==NULL)) {
var124 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = " = ";
var128 = standard___standard__NativeString___to_s_with_length(var127, 3l);
var126 = var128;
varonce125 = var126;
}
((struct instance_standard__NativeArray*)var124)->values[1]=var126;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "(";
var132 = standard___standard__NativeString___to_s_with_length(var131, 1l);
var130 = var132;
varonce129 = var130;
}
((struct instance_standard__NativeArray*)var124)->values[3]=var130;
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = ");";
var136 = standard___standard__NativeString___to_s_with_length(var135, 2l);
var134 = var136;
varonce133 = var134;
}
((struct instance_standard__NativeArray*)var124)->values[5]=var134;
} else {
var124 = varonce123;
varonce123 = NULL;
}
{
var137 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_standard__string__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var124)->values[0]=var137;
((struct instance_standard__NativeArray*)var124)->values[2]=var_externname;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = ", ";
var141 = standard___standard__NativeString___to_s_with_length(var140, 2l);
var139 = var141;
varonce138 = var139;
}
{
var142 = standard__string___Collection___join(var_arguments_for_c, var139);
}
((struct instance_standard__NativeArray*)var124)->values[4]=var142;
{
var143 = ((val*(*)(val* self))(var124->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var124); /* native_to_s on <var124:NativeArray[String]>*/
}
varonce123 = var124;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "struct nitni_instance* ret_var;";
var147 = standard___standard__NativeString___to_s_with_length(var146, 31l);
var145 = var147;
varonce144 = var145;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var145); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce148==NULL)) {
var149 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "ret_var = ";
var153 = standard___standard__NativeString___to_s_with_length(var152, 10l);
var151 = var153;
varonce150 = var151;
}
((struct instance_standard__NativeArray*)var149)->values[0]=var151;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "(";
var157 = standard___standard__NativeString___to_s_with_length(var156, 1l);
var155 = var157;
varonce154 = var155;
}
((struct instance_standard__NativeArray*)var149)->values[2]=var155;
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = ");";
var161 = standard___standard__NativeString___to_s_with_length(var160, 2l);
var159 = var161;
varonce158 = var159;
}
((struct instance_standard__NativeArray*)var149)->values[4]=var159;
} else {
var149 = varonce148;
varonce148 = NULL;
}
((struct instance_standard__NativeArray*)var149)->values[1]=var_externname;
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = ", ";
var165 = standard___standard__NativeString___to_s_with_length(var164, 2l);
var163 = var165;
varonce162 = var163;
}
{
var166 = standard__string___Collection___join(var_arguments_for_c, var163);
}
((struct instance_standard__NativeArray*)var149)->values[3]=var166;
{
var167 = ((val*(*)(val* self))(var149->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var149); /* native_to_s on <var149:NativeArray[String]>*/
}
varonce148 = var149;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var167); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce168==NULL)) {
var169 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = " = ret_var->value;";
var173 = standard___standard__NativeString___to_s_with_length(var172, 18l);
var171 = var173;
varonce170 = var171;
}
((struct instance_standard__NativeArray*)var169)->values[1]=var171;
} else {
var169 = varonce168;
varonce168 = NULL;
}
{
var174 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_standard__string__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var169)->values[0]=var174;
{
var175 = ((val*(*)(val* self))(var169->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var169); /* native_to_s on <var169:NativeArray[String]>*/
}
varonce168 = var169;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var175); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
}
{
var176 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_recv_var, var_return_mtype); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_recv_var = var176;
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var_recv_var); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
{
nit__light___AMethPropdef___compile_ffi_support_to_c(self, var_v); /* Direct call light#AMethPropdef#compile_ffi_support_to_c on <self:AMethPropdef>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light#CCompilationUnit#write_as_nitni for (self: CCompilationUnit, MModule, String) */
void nit__light___CCompilationUnit___write_as_nitni(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_compdir /* var compdir: String */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var_base_name /* var base_name: String */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
val* var_h_file /* var h_file: String */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
val* var21 /* : Array[String] */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var_c_file /* var c_file: String */;
val* var40 /* : NativeArray[String] */;
static val* varonce39;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
val* var46 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
val* var58 /* : Array[String] */;
val* var60 /* : Array[String] */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
val* var67 /* : String */;
var_mmodule = p0;
var_compdir = p1;
if (unlikely(varonce==NULL)) {
var = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "._nitni";
var4 = standard___standard__NativeString___to_s_with_length(var3, 7l);
var2 = var4;
varonce1 = var2;
}
((struct instance_standard__NativeArray*)var)->values[1]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var5 = nit___nit__MModule___nit__model_base__MEntity__c_name(var_mmodule);
}
((struct instance_standard__NativeArray*)var)->values[0]=var5;
{
var6 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
var_base_name = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ".h";
var12 = standard___standard__NativeString___to_s_with_length(var11, 2l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var8)->values[1]=var10;
} else {
var8 = varonce7;
varonce7 = NULL;
}
((struct instance_standard__NativeArray*)var8)->values[0]=var_base_name;
{
var13 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
var_h_file = var13;
if (unlikely(varonce14==NULL)) {
var15 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "/";
var19 = standard___standard__NativeString___to_s_with_length(var18, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[1]=var17;
} else {
var15 = varonce14;
varonce14 = NULL;
}
((struct instance_standard__NativeArray*)var15)->values[0]=var_compdir;
((struct instance_standard__NativeArray*)var15)->values[2]=var_h_file;
{
var20 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
var21 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var21); /* Direct call array#Array#init on <var21:Array[String]>*/
}
if (unlikely(varonce22==NULL)) {
var23 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "_NITG_NITNI_H";
var27 = standard___standard__NativeString___to_s_with_length(var26, 13l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var23)->values[1]=var25;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var28 = nit___nit__MModule___nit__model_base__MEntity__c_name(var_mmodule);
}
{
var29 = standard___standard__String___Object__to_s(var28);
}
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__String__to_upper]))(var29); /* to_upper on <var29:String>*/
}
((struct instance_standard__NativeArray*)var23)->values[0]=var30;
{
var31 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
nit__light_ffi_base___CCompilationUnit___write_header_to_file(self, var_mmodule, var20, var21, var31); /* Direct call light_ffi_base#CCompilationUnit#write_header_to_file on <self:CCompilationUnit>*/
}
if (unlikely(varonce32==NULL)) {
var33 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ".c";
var37 = standard___standard__NativeString___to_s_with_length(var36, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[1]=var35;
} else {
var33 = varonce32;
varonce32 = NULL;
}
((struct instance_standard__NativeArray*)var33)->values[0]=var_base_name;
{
var38 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
var_c_file = var38;
if (unlikely(varonce39==NULL)) {
var40 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "/";
var44 = standard___standard__NativeString___to_s_with_length(var43, 1l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var40)->values[1]=var42;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_standard__NativeArray*)var40)->values[0]=var_compdir;
((struct instance_standard__NativeArray*)var40)->values[2]=var_c_file;
{
var45 = ((val*(*)(val* self))(var40->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
var46 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___with_capacity(var46, 1l); /* Direct call array#Array#with_capacity on <var46:Array[String]>*/
}
var_ = var46;
if (unlikely(varonce47==NULL)) {
var48 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "\"";
var52 = standard___standard__NativeString___to_s_with_length(var51, 1l);
var50 = var52;
varonce49 = var50;
}
((struct instance_standard__NativeArray*)var48)->values[0]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "\"";
var56 = standard___standard__NativeString___to_s_with_length(var55, 1l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var48)->values[2]=var54;
} else {
var48 = varonce47;
varonce47 = NULL;
}
((struct instance_standard__NativeArray*)var48)->values[1]=var_h_file;
{
var57 = ((val*(*)(val* self))(var48->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var57); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
nit__light_ffi_base___CCompilationUnit___write_body_to_file(self, var_mmodule, var45, var_); /* Direct call light_ffi_base#CCompilationUnit#write_body_to_file on <self:CCompilationUnit>*/
}
{
{ /* Inline c_tools#CCompilationUnit#files (self) on <self:CCompilationUnit> */
var60 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___files].val; /* _files on <self:CCompilationUnit> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 47);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "/";
var66 = standard___standard__NativeString___to_s_with_length(var65, 1l);
var64 = var66;
varonce63 = var64;
}
((struct instance_standard__NativeArray*)var62)->values[1]=var64;
} else {
var62 = varonce61;
varonce61 = NULL;
}
((struct instance_standard__NativeArray*)var62)->values[0]=var_compdir;
((struct instance_standard__NativeArray*)var62)->values[2]=var_c_file;
{
var67 = ((val*(*)(val* self))(var62->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var58, var67); /* Direct call array#Array#add on <var58:Array[String]>*/
}
RET_LABEL:;
}
