#include "nitc__light.sep.0.h"
/* method light$MModule$nitni_ccu for (self: MModule): nullable CCompilationUnit */
val* nitc__light___MModule___nitni_ccu(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : nullable CCompilationUnit */;
var1 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method light$MModule$nitni_ccu= for (self: MModule, nullable CCompilationUnit) */
void nitc__light___MModule___nitni_ccu_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val = p0; /* _nitni_ccu on <self:MModule> */
RET_LABEL:;
}
/* method light$MModule$nmodule for (self: MModule, AbstractCompilerVisitor): nullable AModule */
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
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
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
/* method light$MModule$finalize_ffi for (self: MModule, AbstractCompiler) */
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
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Bool */;
val* var52 /* : nullable Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Bool */;
val* var60 /* : nullable Bool */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : nullable CCompilationUnit */;
val* var65 /* : nullable CCompilationUnit */;
val* var66 /* : Template */;
val* var68 /* : Template */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable CCompilationUnit */;
val* var79 /* : nullable CCompilationUnit */;
val* var80 /* : Template */;
val* var82 /* : Template */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
val* var91 /* : MultiHashMap[String, String] */;
val* var93 /* : MultiHashMap[String, String] */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Bool */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Object */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Int */;
val* var109 /* : nullable Bool */;
val* var110 /* : nullable Bool */;
val* var111 /* : String */;
val* var_cflags /* var cflags: String */;
val* var112 /* : nullable CCompilationUnit */;
val* var114 /* : nullable CCompilationUnit */;
val* var115 /* : AbstractCompiler */;
val* var117 /* : AbstractCompiler */;
val* var118 /* : Toolchain */;
val* var120 /* : Toolchain */;
val* var121 /* : String */;
val* var122 /* : nullable CCompilationUnit */;
val* var124 /* : nullable CCompilationUnit */;
val* var125 /* : Array[String] */;
val* var127 /* : Array[String] */;
val* var_128 /* var : Array[String] */;
val* var129 /* : IndexedIterator[nullable Object] */;
val* var_130 /* var : IndexedIterator[String] */;
short int var131 /* : Bool */;
val* var133 /* : nullable Object */;
val* var_file134 /* var file: String */;
val* var135 /* : ExternCFile */;
val* var_f /* var f: ExternCFile */;
val* var136 /* : Array[String] */;
val* var138 /* : Array[String] */;
val* var139 /* : Array[String] */;
val* var141 /* : Array[String] */;
val* var142 /* : AbstractCompiler */;
val* var144 /* : AbstractCompiler */;
val* var145 /* : Array[ExternFile] */;
val* var147 /* : Array[ExternFile] */;
val* var149 /* : HashSet[AMethPropdef] */;
val* var151 /* : HashSet[AMethPropdef] */;
val* var153 /* : Array[ExternFile] */;
val* var155 /* : Array[ExternFile] */;
var_compiler = p0;
{
{ /* Inline light_ffi$MModule$uses_ffi (self) on <self:MModule> */
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
{ /* Inline kernel$Object$== (var_n,((val*)NULL)) on <var_n:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_n,var_other) on <var_n:nullable AModule(AModule)> */
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
nitc__light_ffi___AModule___ensure_compile_ffi_wrapper(var_n); /* Direct call light_ffi$AModule$ensure_compile_ffi_wrapper on <var_n:nullable AModule(AModule)>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var14 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$toolchain (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 555);
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
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var21 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var19) on <var19:AbstractCompiler> */
var24 = var19->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var19:AbstractCompiler> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nitc__light_ffi___MModule___finalize_ffi_wrapper(self, var18, var22); /* Direct call light_ffi$MModule$finalize_ffi_wrapper on <self:MModule>*/
}
{
{ /* Inline light_ffi_base$MModule$ffi_files (self) on <self:MModule> */
var27 = self->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <self:MModule> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var34 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$extern_bodies (var32) on <var32:AbstractCompiler> */
var37 = var32->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var32:AbstractCompiler> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1075);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var35, var_file); /* Direct call array$Array$add on <var35:Array[ExternFile]>*/
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
nitc__light___MModule___ensure_compile_nitni_base(self, var_v); /* Direct call light$MModule$ensure_compile_nitni_base on <self:MModule>*/
}
{
{ /* Inline light$MModule$nitni_ccu (self) on <self:MModule> */
var40 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 45);
fatal_exit(1);
} else {
{ /* Inline c_tools$CCompilationUnit$header_c_types (var38) on <var38:nullable CCompilationUnit> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var43 = var38->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <var38:nullable CCompilationUnit> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var44 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "#include \"";
var49 = (val*)(10l<<2|1);
var50 = (val*)(10l<<2|1);
var51 = (val*)((long)(0)<<2|3);
var52 = (val*)((long)(0)<<2|3);
var48 = core__flat___CString___to_s_unsafe(var47, var49, var50, var51, var52);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var44)->values[0]=var46;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "._ffi.h\"\n";
var57 = (val*)(9l<<2|1);
var58 = (val*)(9l<<2|1);
var59 = (val*)((long)(0)<<2|3);
var60 = (val*)((long)(0)<<2|3);
var56 = core__flat___CString___to_s_unsafe(var55, var57, var58, var59, var60);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var44)->values[2]=var54;
} else {
var44 = varonce;
varonce = NULL;
}
{
var61 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(self);
}
((struct instance_core__NativeArray*)var44)->values[1]=var61;
{
var62 = ((val*(*)(val* self))(var44->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce = var44;
{
template___template__Template___add(var41, var62); /* Direct call template$Template$add on <var41:Template>*/
}
{
{ /* Inline light$MModule$nitni_ccu (self) on <self:MModule> */
var65 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (var63 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 46);
fatal_exit(1);
} else {
{ /* Inline c_tools$CCompilationUnit$header_c_types (var63) on <var63:nullable CCompilationUnit> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var68 = var63->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <var63:nullable CCompilationUnit> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "#include <stdint.h>\n";
var73 = (val*)(20l<<2|1);
var74 = (val*)(20l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
{
template___template__Template___add(var66, var70); /* Direct call template$Template$add on <var66:Template>*/
}
{
{ /* Inline light$MModule$nitni_ccu (self) on <self:MModule> */
var79 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
if (var77 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 47);
fatal_exit(1);
} else {
{ /* Inline c_tools$CCompilationUnit$header_c_types (var77) on <var77:nullable CCompilationUnit> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var82 = var77->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <var77:nullable CCompilationUnit> */
if (unlikely(var82 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "extern void nitni_global_ref_incr(void*);\nextern void nitni_global_ref_decr(void*);\n";
var87 = (val*)(84l<<2|1);
var88 = (val*)(84l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
{
template___template__Template___add(var80, var84); /* Direct call template$Template$add on <var80:Template>*/
}
{
{ /* Inline light_c$MModule$cflags (self) on <self:MModule> */
var93 = self->attrs[COLOR_nitc__light_c__MModule___cflags].val; /* _cflags on <self:MModule> */
if (unlikely(var93 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 77);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "";
var98 = (val*)(0l<<2|1);
var99 = (val*)(0l<<2|1);
var100 = (val*)((long)(0)<<2|3);
var101 = (val*)((long)(0)<<2|3);
var97 = core__flat___CString___to_s_unsafe(var96, var98, var99, var100, var101);
var95 = var97;
varonce94 = var95;
}
{
var102 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var91, var95);
}
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = " ";
var107 = (val*)(1l<<2|1);
var108 = (val*)(1l<<2|1);
var109 = (val*)((long)(0)<<2|3);
var110 = (val*)((long)(0)<<2|3);
var106 = core__flat___CString___to_s_unsafe(var105, var107, var108, var109, var110);
var104 = var106;
varonce103 = var104;
}
{
var111 = core__abstract_text___Collection___join(var102, var104, ((val*)NULL));
}
var_cflags = var111;
{
{ /* Inline light$MModule$nitni_ccu (self) on <self:MModule> */
var114 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var117 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var117 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$toolchain (var115) on <var115:AbstractCompiler> */
var120 = var115->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <var115:AbstractCompiler> */
if (unlikely(var120 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 555);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
var121 = nitc___nitc__Toolchain___compile_dir(var118);
}
if (var112 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 53);
fatal_exit(1);
} else {
nitc__light___CCompilationUnit___write_as_nitni(var112, self, var121); /* Direct call light$CCompilationUnit$write_as_nitni on <var112:nullable CCompilationUnit>*/
}
{
{ /* Inline light$MModule$nitni_ccu (self) on <self:MModule> */
var124 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
if (var122 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 55);
fatal_exit(1);
} else {
{ /* Inline c_tools$CCompilationUnit$files (var122) on <var122:nullable CCompilationUnit> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var127 = var122->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <var122:nullable CCompilationUnit> */
if (unlikely(var127 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
var_128 = var125;
{
var129 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_128);
}
var_130 = var129;
for(;;) {
{
var131 = ((short int(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_130); /* is_ok on <var_130:IndexedIterator[String]>*/
}
if (var131){
} else {
goto BREAK_label132;
}
{
var133 = ((val*(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_130); /* item on <var_130:IndexedIterator[String]>*/
}
var_file134 = var133;
var135 = NEW_nitc__ExternCFile(&type_nitc__ExternCFile);
{
((void(*)(val* self, val* p0))(var135->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var135, var_file134); /* filename= on <var135:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var135->class->vft[COLOR_nitc__c_tools__ExternCFile__cflags_61d]))(var135, var_cflags); /* cflags= on <var135:ExternCFile>*/
}
{
((void(*)(val* self))(var135->class->vft[COLOR_core__kernel__Object__init]))(var135); /* init on <var135:ExternCFile>*/
}
var_f = var135;
{
{ /* Inline c_tools$ExternFile$pkgconfigs (var_f) on <var_f:ExternCFile> */
var138 = var_f->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_f:ExternCFile> */
if (unlikely(var138 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline light_c$MModule$pkgconfigs (self) on <self:MModule> */
var141 = self->attrs[COLOR_nitc__light_c__MModule___pkgconfigs].val; /* _pkgconfigs on <self:MModule> */
if (unlikely(var141 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 83);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var136, var139); /* Direct call array$Array$add_all on <var136:Array[String]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var144 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var144 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$extern_bodies (var142) on <var142:AbstractCompiler> */
var147 = var142->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var142:AbstractCompiler> */
if (unlikely(var147 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1075);
fatal_exit(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var145, var_f); /* Direct call array$Array$add on <var145:Array[ExternFile]>*/
}
{
((void(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_130); /* next on <var_130:IndexedIterator[String]>*/
}
}
BREAK_label132: (void)0;
{
((void(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_130); /* finish on <var_130:IndexedIterator[String]>*/
}
{
{ /* Inline light$MModule$nitni_ccu= (self,((val*)NULL)) on <self:MModule> */
self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val = ((val*)NULL); /* _nitni_ccu on <self:MModule> */
RET_LABEL148:(void)0;
}
}
{
{ /* Inline light_ffi$MModule$compiled_ffi_methods (self) on <self:MModule> */
var151 = self->attrs[COLOR_nitc__light_ffi__MModule___compiled_ffi_methods].val; /* _compiled_ffi_methods on <self:MModule> */
if (unlikely(var151 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_ffi_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 66);
fatal_exit(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__RemovableCollection__clear(var149); /* Direct call hash_collection$HashSet$clear on <var149:HashSet[AMethPropdef]>*/
}
{
{ /* Inline light_ffi$MModule$ffi_ccu= (self,((val*)NULL)) on <self:MModule> */
self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val = ((val*)NULL); /* _ffi_ccu on <self:MModule> */
RET_LABEL152:(void)0;
}
}
{
{ /* Inline light_ffi_base$MModule$ffi_files (self) on <self:MModule> */
var155 = self->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <self:MModule> */
if (unlikely(var155 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 82);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var153); /* Direct call array$AbstractArray$clear on <var153:Array[ExternFile]>*/
}
RET_LABEL:;
}
/* method light$MModule$ensure_compile_nitni_base for (self: MModule, AbstractCompilerVisitor) */
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
{ /* Inline light$MModule$nitni_ccu (self) on <self:MModule> */
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
{ /* Inline kernel$Object$!= (var,((val*)NULL)) on <var:nullable CCompilationUnit> */
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
{ /* Inline kernel$Object$init (var8) on <var8:CCompilationUnit> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline light$MModule$nitni_ccu= (self,var8) on <self:MModule> */
self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val = var8; /* _nitni_ccu on <self:MModule> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method light$MModule$collect_linker_libs for (self: MModule): nullable Array[String] */
val* nitc__light___MModule___collect_linker_libs(val* self) {
val* var /* : nullable Array[String] */;
val* var1 /* : MultiHashMap[String, String] */;
val* var3 /* : MultiHashMap[String, String] */;
val* var4 /* : RemovableCollection[nullable Object] */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MultiHashMap[String, String] */;
val* var16 /* : MultiHashMap[String, String] */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Object */;
{
{ /* Inline light_c$MModule$ldflags (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__light_c__MModule___ldflags].val; /* _ldflags on <self:MModule> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var8 = (val*)(0l<<2|1);
var9 = (val*)(0l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
var5 = var7;
varonce = var5;
}
{
var12 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var4, var5); /* has on <var4:RemovableCollection[nullable Object](RemovableCollection[String])>*/
}
var13 = !var12;
if (var13){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline light_c$MModule$ldflags (self) on <self:MModule> */
var16 = self->attrs[COLOR_nitc__light_c__MModule___ldflags].val; /* _ldflags on <self:MModule> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 80);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "";
var21 = (val*)(0l<<2|1);
var22 = (val*)(0l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
{
var25 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var14, var18);
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light$AMethPropdef$compile_ffi_support_to_c for (self: AMethPropdef, AbstractCompilerVisitor) */
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
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var38 /* : Sys */;
val* var39 /* : SignatureLength */;
val* var40 /* : Sys */;
val* var41 /* : CallContext */;
val* var42 /* : String */;
val* var_csignature /* var csignature: String */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Bool */;
val* var52 /* : nullable Bool */;
val* var53 /* : String */;
var_v = p0;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 86);
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
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mmodule = var6;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var11 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var9) on <var9:AbstractCompiler> */
var14 = var9->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var9:AbstractCompiler> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
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
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var18 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 88);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mclassdef (var16) on <var16:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var21 = var16->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var16:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var19) on <var19:MClassDef> */
var24 = var19->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var19:MClassDef> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_mclass_type = var22;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var27 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 91);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var25) on <var25:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var30 = var25->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var25:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
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
var34 = (val*)(7l<<2|1);
var35 = (val*)(7l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce = var31;
}
var38 = glob_sys;
{
var39 = nitc__nitni_utilities___core__Sys___long_signature(var38);
}
var40 = glob_sys;
{
var41 = nitc__nitni_utilities___core__Sys___internal_call_context(var40);
}
{
var42 = nitc__nitni_utilities___MMethod___build_csignature(var28, var_mclass_type, var_mmodule, var31, var39, var41);
}
var_csignature = var42;
if (unlikely(varonce43==NULL)) {
var44 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = ";";
var49 = (val*)(1l<<2|1);
var50 = (val*)(1l<<2|1);
var51 = (val*)((long)(0)<<2|3);
var52 = (val*)((long)(0)<<2|3);
var48 = core__flat___CString___to_s_unsafe(var47, var49, var50, var51, var52);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var44)->values[1]=var46;
} else {
var44 = varonce43;
varonce43 = NULL;
}
((struct instance_core__NativeArray*)var44)->values[0]=var_csignature;
{
var53 = ((val*(*)(val* self))(var44->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
nitc___nitc__AbstractCompilerVisitor___declare_once(var_v, var53); /* Direct call abstract_compiler$AbstractCompilerVisitor$declare_once on <var_v:AbstractCompilerVisitor>*/
}
if (var_amodule == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 95);
fatal_exit(1);
} else {
nitc__light_ffi___AModule___ensure_compile_ffi_wrapper(var_amodule); /* Direct call light_ffi$AModule$ensure_compile_ffi_wrapper on <var_amodule:nullable AModule>*/
}
{
nitc__light_ffi___AMethPropdef___compile_ffi_method(self, var_mmodule); /* Direct call light_ffi$AMethPropdef$compile_ffi_method on <self:AMethPropdef>*/
}
{
nitc__light___MModule___ensure_compile_nitni_base(var_mmodule, var_v); /* Direct call light$MModule$ensure_compile_nitni_base on <var_mmodule:MModule>*/
}
RET_LABEL:;
}
/* method light$AMethPropdef$compile_externmeth_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
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
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
val* var42 /* : Sys */;
val* var43 /* : SignatureLength */;
val* var44 /* : String */;
val* var_externname /* var externname: String */;
val* var_recv_var /* var recv_var: nullable RuntimeVariable */;
val* var45 /* : nullable MSignature */;
val* var47 /* : nullable MSignature */;
val* var48 /* : nullable MType */;
val* var50 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var_other54 /* var other: nullable Object */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : MType */;
val* var58 /* : RuntimeVariable */;
val* var59 /* : Array[String] */;
val* var_arguments_for_c /* var arguments_for_c: Array[String] */;
long var_a /* var a: Int */;
long var60 /* : Int */;
long var62 /* : Int */;
long var_ /* var : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : MClassDef */;
val* var73 /* : MClassDef */;
val* var74 /* : MClass */;
val* var76 /* : MClass */;
val* var77 /* : MClassType */;
val* var79 /* : MClassType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var80 /* : nullable MSignature */;
val* var82 /* : nullable MSignature */;
val* var83 /* : Array[MParameter] */;
val* var85 /* : Array[MParameter] */;
long var86 /* : Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
long var92 /* : Int */;
val* var93 /* : nullable Object */;
val* var94 /* : MType */;
val* var96 /* : MType */;
val* var97 /* : MType */;
short int var98 /* : Bool */;
val* var99 /* : String */;
val* var101 /* : String */;
val* var103 /* : NativeArray[String] */;
static val* varonce102;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
val* var108 /* : nullable Int */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Bool */;
val* var111 /* : nullable Bool */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Bool */;
val* var119 /* : nullable Bool */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var123 /* : NativeArray[String] */;
static val* varonce122;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Bool */;
val* var131 /* : nullable Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Bool */;
val* var139 /* : nullable Bool */;
val* var140 /* : String */;
val* var141 /* : String */;
val* var143 /* : NativeArray[String] */;
static val* varonce142;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : CString */;
val* var147 /* : String */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Bool */;
val* var151 /* : nullable Bool */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : CString */;
val* var155 /* : String */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Int */;
val* var158 /* : nullable Bool */;
val* var159 /* : nullable Bool */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Int */;
val* var166 /* : nullable Bool */;
val* var167 /* : nullable Bool */;
val* var168 /* : String */;
val* var169 /* : String */;
val* var171 /* : String */;
val* var172 /* : String */;
val* var174 /* : NativeArray[String] */;
static val* varonce173;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : CString */;
val* var178 /* : String */;
val* var179 /* : nullable Int */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Bool */;
val* var182 /* : nullable Bool */;
val* var183 /* : String */;
val* var184 /* : String */;
long var185 /* : Int */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
val* var193 /* : NativeArray[String] */;
static val* varonce192;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : CString */;
val* var197 /* : String */;
val* var198 /* : nullable Int */;
val* var199 /* : nullable Int */;
val* var200 /* : nullable Bool */;
val* var201 /* : nullable Bool */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : CString */;
val* var205 /* : String */;
val* var206 /* : nullable Int */;
val* var207 /* : nullable Int */;
val* var208 /* : nullable Bool */;
val* var209 /* : nullable Bool */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
val* var214 /* : nullable Int */;
val* var215 /* : nullable Int */;
val* var216 /* : nullable Bool */;
val* var217 /* : nullable Bool */;
val* var218 /* : String */;
val* var219 /* : String */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
val* var227 /* : NativeArray[String] */;
static val* varonce226;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : CString */;
val* var231 /* : String */;
val* var232 /* : nullable Int */;
val* var233 /* : nullable Int */;
val* var234 /* : nullable Bool */;
val* var235 /* : nullable Bool */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : CString */;
val* var239 /* : String */;
val* var240 /* : nullable Int */;
val* var241 /* : nullable Int */;
val* var242 /* : nullable Bool */;
val* var243 /* : nullable Bool */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : CString */;
val* var247 /* : String */;
val* var248 /* : nullable Int */;
val* var249 /* : nullable Int */;
val* var250 /* : nullable Bool */;
val* var251 /* : nullable Bool */;
val* var252 /* : String */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : CString */;
val* var256 /* : String */;
val* var257 /* : nullable Int */;
val* var258 /* : nullable Int */;
val* var259 /* : nullable Bool */;
val* var260 /* : nullable Bool */;
val* var261 /* : String */;
val* var262 /* : String */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : CString */;
val* var266 /* : String */;
val* var267 /* : nullable Int */;
val* var268 /* : nullable Int */;
val* var269 /* : nullable Bool */;
val* var270 /* : nullable Bool */;
val* var272 /* : NativeArray[String] */;
static val* varonce271;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : CString */;
val* var276 /* : String */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Int */;
val* var279 /* : nullable Bool */;
val* var280 /* : nullable Bool */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : CString */;
val* var284 /* : String */;
val* var285 /* : nullable Int */;
val* var286 /* : nullable Int */;
val* var287 /* : nullable Bool */;
val* var288 /* : nullable Bool */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : CString */;
val* var292 /* : String */;
val* var293 /* : nullable Int */;
val* var294 /* : nullable Int */;
val* var295 /* : nullable Bool */;
val* var296 /* : nullable Bool */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : CString */;
val* var300 /* : String */;
val* var301 /* : nullable Int */;
val* var302 /* : nullable Int */;
val* var303 /* : nullable Bool */;
val* var304 /* : nullable Bool */;
val* var305 /* : String */;
val* var306 /* : String */;
val* var308 /* : NativeArray[String] */;
static val* varonce307;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : CString */;
val* var312 /* : String */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Int */;
val* var315 /* : nullable Bool */;
val* var316 /* : nullable Bool */;
val* var317 /* : String */;
val* var318 /* : String */;
val* var319 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline parser_nodes$AMethPropdef$n_extern_code_block (self) on <self:AMethPropdef> */
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
{ /* Inline kernel$Object$== (var1,((val*)NULL)) on <var1:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable AExternCodeBlock(AExternCodeBlock)> */
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
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var15 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var13) on <var13:MClassDef> */
var18 = var13->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var13:MClassDef> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mmodule = var16;
{
{ /* Inline light_ffi$MModule$uses_ffi= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s = 1; /* _uses_ffi on <var_mmodule:MModule> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var22 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var20) on <var20:MClassDef> */
var25 = var20->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var20:MClassDef> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_mclass_type = var23;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var28 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var31 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var29) on <var29:MClassDef> */
var34 = var29->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var29:MClassDef> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
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
var38 = (val*)(7l<<2|1);
var39 = (val*)(7l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce = var35;
}
var42 = glob_sys;
{
var43 = nitc__nitni_utilities___core__Sys___long_signature(var42);
}
{
var44 = nitc__nitni_utilities___MMethod___build_cname(var26, var32, var_mmodule, var35, var43);
}
var_externname = var44;
var_recv_var = ((val*)NULL);
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var47 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 122);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$return_mtype (var45) on <var45:nullable MSignature> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var50 = var45->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var45:nullable MSignature> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
var_return_mtype = var48;
if (var_return_mtype == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_return_mtype,((val*)NULL)) on <var_return_mtype:nullable MType> */
var_other54 = ((val*)NULL);
{
var55 = ((short int(*)(val* self, val* p0))(var_return_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_return_mtype, var_other54); /* == on <var_return_mtype:nullable MType(MType)>*/
}
var56 = !var55;
var52 = var56;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
{
var57 = ((val*(*)(val* self, val* p0, val* p1))(var_return_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_return_mtype, var_mmodule, var_mclass_type); /* anchor_to on <var_return_mtype:nullable MType(MType)>*/
}
var_return_mtype = var57;
{
var58 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_return_mtype);
}
var_recv_var = var58;
} else {
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
var59 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var59); /* Direct call array$Array$init on <var59:Array[String]>*/
}
var_arguments_for_c = var59;
var_a = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var62 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
var_ = var60;
for(;;) {
{
{ /* Inline kernel$Int$< (var_a,var_) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var65 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var66 = var_a < var_;
var63 = var66;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
} else {
goto BREAK_label;
}
{
var67 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_a);
}
var_arg = var67;
{
{ /* Inline kernel$Int$== (var_a,0l) on <var_a:Int> */
var70 = var_a == 0l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var73 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var73 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var71) on <var71:MClassDef> */
var76 = var71->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var71:MClassDef> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var74) on <var74:MClass> */
var79 = var74->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var74:MClass> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_param_mtype = var77;
} else {
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var82 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
if (var80 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 137);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$mparameters (var80) on <var80:nullable MSignature> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var85 = var80->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var80:nullable MSignature> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_a,1l) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var88 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var92 = var_a - 1l;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
{
var93 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var83, var86);
}
{
{ /* Inline model$MParameter$mtype (var93) on <var93:nullable Object(MParameter)> */
var96 = var93->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var93:nullable Object(MParameter)> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
var_param_mtype = var94;
}
{
var97 = ((val*(*)(val* self, val* p0, val* p1))(var_param_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_param_mtype, var_mmodule, var_mclass_type); /* anchor_to on <var_param_mtype:MType>*/
}
var_param_mtype = var97;
{
var98 = ((short int(*)(val* self))(var_param_mtype->class->vft[COLOR_nitc__nitni_base__MType__is_cprimitive]))(var_param_mtype); /* is_cprimitive on <var_param_mtype:MType>*/
}
if (var98){
{
{ /* Inline abstract_compiler$RuntimeVariable$name (var_arg) on <var_arg:RuntimeVariable> */
var101 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1980);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments_for_c, var99); /* Direct call array$Array$add on <var_arguments_for_c:Array[String]>*/
}
} else {
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "struct nitni_instance* var_for_c_";
var108 = (val*)(33l<<2|1);
var109 = (val*)(33l<<2|1);
var110 = (val*)((long)(0)<<2|3);
var111 = (val*)((long)(0)<<2|3);
var107 = core__flat___CString___to_s_unsafe(var106, var108, var109, var110, var111);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var103)->values[0]=var105;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = ";";
var116 = (val*)(1l<<2|1);
var117 = (val*)(1l<<2|1);
var118 = (val*)((long)(0)<<2|3);
var119 = (val*)((long)(0)<<2|3);
var115 = core__flat___CString___to_s_unsafe(var114, var116, var117, var118, var119);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var103)->values[2]=var113;
} else {
var103 = varonce102;
varonce102 = NULL;
}
var120 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var103)->values[1]=var120;
{
var121 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var121); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce122==NULL)) {
var123 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "var_for_c_";
var128 = (val*)(10l<<2|1);
var129 = (val*)(10l<<2|1);
var130 = (val*)((long)(0)<<2|3);
var131 = (val*)((long)(0)<<2|3);
var127 = core__flat___CString___to_s_unsafe(var126, var128, var129, var130, var131);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var123)->values[0]=var125;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = " = nit_alloc(sizeof(struct nitni_instance));";
var136 = (val*)(44l<<2|1);
var137 = (val*)(44l<<2|1);
var138 = (val*)((long)(0)<<2|3);
var139 = (val*)((long)(0)<<2|3);
var135 = core__flat___CString___to_s_unsafe(var134, var136, var137, var138, var139);
var133 = var135;
varonce132 = var133;
}
((struct instance_core__NativeArray*)var123)->values[2]=var133;
} else {
var123 = varonce122;
varonce122 = NULL;
}
var140 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var123)->values[1]=var140;
{
var141 = ((val*(*)(val* self))(var123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var123); /* native_to_s on <var123:NativeArray[String]>*/
}
varonce122 = var123;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var141); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce142==NULL)) {
var143 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "var_for_c_";
var148 = (val*)(10l<<2|1);
var149 = (val*)(10l<<2|1);
var150 = (val*)((long)(0)<<2|3);
var151 = (val*)((long)(0)<<2|3);
var147 = core__flat___CString___to_s_unsafe(var146, var148, var149, var150, var151);
var145 = var147;
varonce144 = var145;
}
((struct instance_core__NativeArray*)var143)->values[0]=var145;
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "->value = ";
var156 = (val*)(10l<<2|1);
var157 = (val*)(10l<<2|1);
var158 = (val*)((long)(0)<<2|3);
var159 = (val*)((long)(0)<<2|3);
var155 = core__flat___CString___to_s_unsafe(var154, var156, var157, var158, var159);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var143)->values[2]=var153;
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = ";";
var164 = (val*)(1l<<2|1);
var165 = (val*)(1l<<2|1);
var166 = (val*)((long)(0)<<2|3);
var167 = (val*)((long)(0)<<2|3);
var163 = core__flat___CString___to_s_unsafe(var162, var164, var165, var166, var167);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var143)->values[4]=var161;
} else {
var143 = varonce142;
varonce142 = NULL;
}
var168 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var143)->values[1]=var168;
{
{ /* Inline abstract_compiler$RuntimeVariable$name (var_arg) on <var_arg:RuntimeVariable> */
var171 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var171 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1980);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
((struct instance_core__NativeArray*)var143)->values[3]=var169;
{
var172 = ((val*(*)(val* self))(var143->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var143); /* native_to_s on <var143:NativeArray[String]>*/
}
varonce142 = var143;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var172); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce173==NULL)) {
var174 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "var_for_c_";
var179 = (val*)(10l<<2|1);
var180 = (val*)(10l<<2|1);
var181 = (val*)((long)(0)<<2|3);
var182 = (val*)((long)(0)<<2|3);
var178 = core__flat___CString___to_s_unsafe(var177, var179, var180, var181, var182);
var176 = var178;
varonce175 = var176;
}
((struct instance_core__NativeArray*)var174)->values[0]=var176;
} else {
var174 = varonce173;
varonce173 = NULL;
}
var183 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var174)->values[1]=var183;
{
var184 = ((val*(*)(val* self))(var174->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var174); /* native_to_s on <var174:NativeArray[String]>*/
}
varonce173 = var174;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments_for_c, var184); /* Direct call array$Array$add on <var_arguments_for_c:Array[String]>*/
}
}
{
var185 = core___core__Int___Discrete__successor(var_a, 1l);
}
var_a = var185;
}
BREAK_label: (void)0;
if (var_recv_var == NULL) {
var186 = 1; /* is null */
} else {
var186 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_recv_var,((val*)NULL)) on <var_recv_var:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_recv_var,var_other) on <var_recv_var:nullable RuntimeVariable(RuntimeVariable)> */
var191 = var_recv_var == var_other;
var189 = var191;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
var187 = var189;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
var186 = var187;
}
if (var186){
if (unlikely(varonce192==NULL)) {
var193 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "(";
var198 = (val*)(1l<<2|1);
var199 = (val*)(1l<<2|1);
var200 = (val*)((long)(0)<<2|3);
var201 = (val*)((long)(0)<<2|3);
var197 = core__flat___CString___to_s_unsafe(var196, var198, var199, var200, var201);
var195 = var197;
varonce194 = var195;
}
((struct instance_core__NativeArray*)var193)->values[1]=var195;
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = ");";
var206 = (val*)(2l<<2|1);
var207 = (val*)(2l<<2|1);
var208 = (val*)((long)(0)<<2|3);
var209 = (val*)((long)(0)<<2|3);
var205 = core__flat___CString___to_s_unsafe(var204, var206, var207, var208, var209);
var203 = var205;
varonce202 = var203;
}
((struct instance_core__NativeArray*)var193)->values[3]=var203;
} else {
var193 = varonce192;
varonce192 = NULL;
}
((struct instance_core__NativeArray*)var193)->values[0]=var_externname;
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = ", ";
var214 = (val*)(2l<<2|1);
var215 = (val*)(2l<<2|1);
var216 = (val*)((long)(0)<<2|3);
var217 = (val*)((long)(0)<<2|3);
var213 = core__flat___CString___to_s_unsafe(var212, var214, var215, var216, var217);
var211 = var213;
varonce210 = var211;
}
{
var218 = core__abstract_text___Collection___join(var_arguments_for_c, var211, ((val*)NULL));
}
((struct instance_core__NativeArray*)var193)->values[2]=var218;
{
var219 = ((val*(*)(val* self))(var193->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var193); /* native_to_s on <var193:NativeArray[String]>*/
}
varonce192 = var193;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var219); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (var_return_mtype == NULL) {
var220 = 0; /* is null */
} else {
var220 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_return_mtype,((val*)NULL)) on <var_return_mtype:nullable MType> */
var_other54 = ((val*)NULL);
{
var223 = ((short int(*)(val* self, val* p0))(var_return_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_return_mtype, var_other54); /* == on <var_return_mtype:nullable MType(MType)>*/
}
var224 = !var223;
var221 = var224;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
var220 = var221;
}
if (unlikely(!var220)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 154);
fatal_exit(1);
}
{
var225 = ((short int(*)(val* self))(var_return_mtype->class->vft[COLOR_nitc__nitni_base__MType__is_cprimitive]))(var_return_mtype); /* is_cprimitive on <var_return_mtype:nullable MType(MType)>*/
}
if (var225){
if (unlikely(varonce226==NULL)) {
var227 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = " = ";
var232 = (val*)(3l<<2|1);
var233 = (val*)(3l<<2|1);
var234 = (val*)((long)(0)<<2|3);
var235 = (val*)((long)(0)<<2|3);
var231 = core__flat___CString___to_s_unsafe(var230, var232, var233, var234, var235);
var229 = var231;
varonce228 = var229;
}
((struct instance_core__NativeArray*)var227)->values[1]=var229;
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = "(";
var240 = (val*)(1l<<2|1);
var241 = (val*)(1l<<2|1);
var242 = (val*)((long)(0)<<2|3);
var243 = (val*)((long)(0)<<2|3);
var239 = core__flat___CString___to_s_unsafe(var238, var240, var241, var242, var243);
var237 = var239;
varonce236 = var237;
}
((struct instance_core__NativeArray*)var227)->values[3]=var237;
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = ");";
var248 = (val*)(2l<<2|1);
var249 = (val*)(2l<<2|1);
var250 = (val*)((long)(0)<<2|3);
var251 = (val*)((long)(0)<<2|3);
var247 = core__flat___CString___to_s_unsafe(var246, var248, var249, var250, var251);
var245 = var247;
varonce244 = var245;
}
((struct instance_core__NativeArray*)var227)->values[5]=var245;
} else {
var227 = varonce226;
varonce226 = NULL;
}
{
var252 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var227)->values[0]=var252;
((struct instance_core__NativeArray*)var227)->values[2]=var_externname;
if (likely(varonce253!=NULL)) {
var254 = varonce253;
} else {
var255 = ", ";
var257 = (val*)(2l<<2|1);
var258 = (val*)(2l<<2|1);
var259 = (val*)((long)(0)<<2|3);
var260 = (val*)((long)(0)<<2|3);
var256 = core__flat___CString___to_s_unsafe(var255, var257, var258, var259, var260);
var254 = var256;
varonce253 = var254;
}
{
var261 = core__abstract_text___Collection___join(var_arguments_for_c, var254, ((val*)NULL));
}
((struct instance_core__NativeArray*)var227)->values[4]=var261;
{
var262 = ((val*(*)(val* self))(var227->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var227); /* native_to_s on <var227:NativeArray[String]>*/
}
varonce226 = var227;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var262); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = "struct nitni_instance* ret_var;";
var267 = (val*)(31l<<2|1);
var268 = (val*)(31l<<2|1);
var269 = (val*)((long)(0)<<2|3);
var270 = (val*)((long)(0)<<2|3);
var266 = core__flat___CString___to_s_unsafe(var265, var267, var268, var269, var270);
var264 = var266;
varonce263 = var264;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var264); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce271==NULL)) {
var272 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "ret_var = ";
var277 = (val*)(10l<<2|1);
var278 = (val*)(10l<<2|1);
var279 = (val*)((long)(0)<<2|3);
var280 = (val*)((long)(0)<<2|3);
var276 = core__flat___CString___to_s_unsafe(var275, var277, var278, var279, var280);
var274 = var276;
varonce273 = var274;
}
((struct instance_core__NativeArray*)var272)->values[0]=var274;
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "(";
var285 = (val*)(1l<<2|1);
var286 = (val*)(1l<<2|1);
var287 = (val*)((long)(0)<<2|3);
var288 = (val*)((long)(0)<<2|3);
var284 = core__flat___CString___to_s_unsafe(var283, var285, var286, var287, var288);
var282 = var284;
varonce281 = var282;
}
((struct instance_core__NativeArray*)var272)->values[2]=var282;
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = ");";
var293 = (val*)(2l<<2|1);
var294 = (val*)(2l<<2|1);
var295 = (val*)((long)(0)<<2|3);
var296 = (val*)((long)(0)<<2|3);
var292 = core__flat___CString___to_s_unsafe(var291, var293, var294, var295, var296);
var290 = var292;
varonce289 = var290;
}
((struct instance_core__NativeArray*)var272)->values[4]=var290;
} else {
var272 = varonce271;
varonce271 = NULL;
}
((struct instance_core__NativeArray*)var272)->values[1]=var_externname;
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = ", ";
var301 = (val*)(2l<<2|1);
var302 = (val*)(2l<<2|1);
var303 = (val*)((long)(0)<<2|3);
var304 = (val*)((long)(0)<<2|3);
var300 = core__flat___CString___to_s_unsafe(var299, var301, var302, var303, var304);
var298 = var300;
varonce297 = var298;
}
{
var305 = core__abstract_text___Collection___join(var_arguments_for_c, var298, ((val*)NULL));
}
((struct instance_core__NativeArray*)var272)->values[3]=var305;
{
var306 = ((val*(*)(val* self))(var272->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var272); /* native_to_s on <var272:NativeArray[String]>*/
}
varonce271 = var272;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var306); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce307==NULL)) {
var308 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = " = ret_var->value;";
var313 = (val*)(18l<<2|1);
var314 = (val*)(18l<<2|1);
var315 = (val*)((long)(0)<<2|3);
var316 = (val*)((long)(0)<<2|3);
var312 = core__flat___CString___to_s_unsafe(var311, var313, var314, var315, var316);
var310 = var312;
varonce309 = var310;
}
((struct instance_core__NativeArray*)var308)->values[1]=var310;
} else {
var308 = varonce307;
varonce307 = NULL;
}
{
var317 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var308)->values[0]=var317;
{
var318 = ((val*(*)(val* self))(var308->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var308); /* native_to_s on <var308:NativeArray[String]>*/
}
varonce307 = var308;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var318); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
}
{
var319 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_recv_var, var_return_mtype); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_recv_var = var319;
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var_recv_var); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
}
{
nitc__light___AMethPropdef___compile_ffi_support_to_c(self, var_v); /* Direct call light$AMethPropdef$compile_ffi_support_to_c on <self:AMethPropdef>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light$AMethPropdef$compile_externinit_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
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
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
val* var42 /* : Sys */;
val* var43 /* : SignatureLength */;
val* var44 /* : String */;
val* var_externname /* var externname: String */;
val* var45 /* : nullable Object */;
val* var46 /* : MType */;
val* var48 /* : MType */;
val* var_return_mtype /* var return_mtype: MType */;
val* var49 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
val* var50 /* : nullable Object */;
val* var51 /* : Array[String] */;
val* var_arguments_for_c /* var arguments_for_c: Array[String] */;
long var_a /* var a: Int */;
long var52 /* : Int */;
long var54 /* : Int */;
long var_ /* var : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var58 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var60 /* : nullable MSignature */;
val* var62 /* : nullable MSignature */;
val* var63 /* : Array[MParameter] */;
val* var65 /* : Array[MParameter] */;
val* var66 /* : nullable Object */;
val* var67 /* : MType */;
val* var69 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var70 /* : MType */;
short int var71 /* : Bool */;
val* var72 /* : String */;
val* var74 /* : String */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Bool */;
val* var84 /* : nullable Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var96 /* : NativeArray[String] */;
static val* varonce95;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
val* var104 /* : nullable Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var116 /* : NativeArray[String] */;
static val* varonce115;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
val* var121 /* : nullable Int */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Bool */;
val* var124 /* : nullable Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Bool */;
val* var132 /* : nullable Bool */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Bool */;
val* var140 /* : nullable Bool */;
val* var141 /* : String */;
val* var142 /* : String */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var147 /* : NativeArray[String] */;
static val* varonce146;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
val* var152 /* : nullable Int */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Bool */;
val* var155 /* : nullable Bool */;
val* var156 /* : String */;
val* var157 /* : String */;
long var158 /* : Int */;
short int var159 /* : Bool */;
val* var161 /* : NativeArray[String] */;
static val* varonce160;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : CString */;
val* var165 /* : String */;
val* var166 /* : nullable Int */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Bool */;
val* var169 /* : nullable Bool */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : CString */;
val* var173 /* : String */;
val* var174 /* : nullable Int */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Bool */;
val* var177 /* : nullable Bool */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Bool */;
val* var185 /* : nullable Bool */;
val* var186 /* : String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : CString */;
val* var190 /* : String */;
val* var191 /* : nullable Int */;
val* var192 /* : nullable Int */;
val* var193 /* : nullable Bool */;
val* var194 /* : nullable Bool */;
val* var195 /* : String */;
val* var196 /* : String */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : CString */;
val* var200 /* : String */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Bool */;
val* var204 /* : nullable Bool */;
val* var206 /* : NativeArray[String] */;
static val* varonce205;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : CString */;
val* var210 /* : String */;
val* var211 /* : nullable Int */;
val* var212 /* : nullable Int */;
val* var213 /* : nullable Bool */;
val* var214 /* : nullable Bool */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : CString */;
val* var218 /* : String */;
val* var219 /* : nullable Int */;
val* var220 /* : nullable Int */;
val* var221 /* : nullable Bool */;
val* var222 /* : nullable Bool */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : CString */;
val* var226 /* : String */;
val* var227 /* : nullable Int */;
val* var228 /* : nullable Int */;
val* var229 /* : nullable Bool */;
val* var230 /* : nullable Bool */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : CString */;
val* var234 /* : String */;
val* var235 /* : nullable Int */;
val* var236 /* : nullable Int */;
val* var237 /* : nullable Bool */;
val* var238 /* : nullable Bool */;
val* var239 /* : String */;
val* var240 /* : String */;
val* var242 /* : NativeArray[String] */;
static val* varonce241;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : CString */;
val* var246 /* : String */;
val* var247 /* : nullable Int */;
val* var248 /* : nullable Int */;
val* var249 /* : nullable Bool */;
val* var250 /* : nullable Bool */;
val* var251 /* : String */;
val* var252 /* : String */;
val* var253 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline parser_nodes$AMethPropdef$n_extern_code_block (self) on <self:AMethPropdef> */
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
{ /* Inline kernel$Object$== (var1,((val*)NULL)) on <var1:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable AExternCodeBlock(AExternCodeBlock)> */
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
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var15 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var13) on <var13:MClassDef> */
var18 = var13->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var13:MClassDef> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mmodule = var16;
{
{ /* Inline light_ffi$MModule$uses_ffi= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s = 1; /* _uses_ffi on <var_mmodule:MModule> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var22 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var20) on <var20:MClassDef> */
var25 = var20->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var20:MClassDef> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_mclass_type = var23;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var28 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var31 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var29) on <var29:MClassDef> */
var34 = var29->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var29:MClassDef> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
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
var38 = (val*)(7l<<2|1);
var39 = (val*)(7l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce = var35;
}
var42 = glob_sys;
{
var43 = nitc__nitni_utilities___core__Sys___long_signature(var42);
}
{
var44 = nitc__nitni_utilities___MMethod___build_cname(var26, var32, var_mmodule, var35, var43);
}
var_externname = var44;
{
var45 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var45) on <var45:nullable Object(RuntimeVariable)> */
var48 = var45->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var45:nullable Object(RuntimeVariable)> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_return_mtype = var46;
{
var49 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_return_mtype);
}
var_recv_var = var49;
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
{
var50 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_arguments);
}
var51 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var51); /* Direct call array$Array$init on <var51:Array[String]>*/
}
var_arguments_for_c = var51;
var_a = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var54 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_ = var52;
for(;;) {
{
{ /* Inline kernel$Int$< (var_a,var_) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var57 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var58 = var_a < var_;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
} else {
goto BREAK_label;
}
{
var59 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_a);
}
var_arg = var59;
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var62 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (var60 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 195);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$mparameters (var60) on <var60:nullable MSignature> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var65 = var60->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var60:nullable MSignature> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var63, var_a);
}
{
{ /* Inline model$MParameter$mtype (var66) on <var66:nullable Object(MParameter)> */
var69 = var66->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var66:nullable Object(MParameter)> */
if (unlikely(var69 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_param_mtype = var67;
{
var70 = ((val*(*)(val* self, val* p0, val* p1))(var_param_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_param_mtype, var_mmodule, var_mclass_type); /* anchor_to on <var_param_mtype:MType>*/
}
var_param_mtype = var70;
{
var71 = ((short int(*)(val* self))(var_param_mtype->class->vft[COLOR_nitc__nitni_base__MType__is_cprimitive]))(var_param_mtype); /* is_cprimitive on <var_param_mtype:MType>*/
}
if (var71){
{
{ /* Inline abstract_compiler$RuntimeVariable$name (var_arg) on <var_arg:RuntimeVariable> */
var74 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var74 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1980);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments_for_c, var72); /* Direct call array$Array$add on <var_arguments_for_c:Array[String]>*/
}
} else {
if (unlikely(varonce75==NULL)) {
var76 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "struct nitni_instance* var_for_c_";
var81 = (val*)(33l<<2|1);
var82 = (val*)(33l<<2|1);
var83 = (val*)((long)(0)<<2|3);
var84 = (val*)((long)(0)<<2|3);
var80 = core__flat___CString___to_s_unsafe(var79, var81, var82, var83, var84);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var76)->values[0]=var78;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = ";";
var89 = (val*)(1l<<2|1);
var90 = (val*)(1l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var76)->values[2]=var86;
} else {
var76 = varonce75;
varonce75 = NULL;
}
var93 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var76)->values[1]=var93;
{
var94 = ((val*(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var94); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce95==NULL)) {
var96 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "var_for_c_";
var101 = (val*)(10l<<2|1);
var102 = (val*)(10l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var96)->values[0]=var98;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = " = nit_alloc(sizeof(struct nitni_instance));";
var109 = (val*)(44l<<2|1);
var110 = (val*)(44l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var96)->values[2]=var106;
} else {
var96 = varonce95;
varonce95 = NULL;
}
var113 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var96)->values[1]=var113;
{
var114 = ((val*(*)(val* self))(var96->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var96); /* native_to_s on <var96:NativeArray[String]>*/
}
varonce95 = var96;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var114); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce115==NULL)) {
var116 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "var_for_c_";
var121 = (val*)(10l<<2|1);
var122 = (val*)(10l<<2|1);
var123 = (val*)((long)(0)<<2|3);
var124 = (val*)((long)(0)<<2|3);
var120 = core__flat___CString___to_s_unsafe(var119, var121, var122, var123, var124);
var118 = var120;
varonce117 = var118;
}
((struct instance_core__NativeArray*)var116)->values[0]=var118;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "->value = ";
var129 = (val*)(10l<<2|1);
var130 = (val*)(10l<<2|1);
var131 = (val*)((long)(0)<<2|3);
var132 = (val*)((long)(0)<<2|3);
var128 = core__flat___CString___to_s_unsafe(var127, var129, var130, var131, var132);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var116)->values[2]=var126;
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = ";";
var137 = (val*)(1l<<2|1);
var138 = (val*)(1l<<2|1);
var139 = (val*)((long)(0)<<2|3);
var140 = (val*)((long)(0)<<2|3);
var136 = core__flat___CString___to_s_unsafe(var135, var137, var138, var139, var140);
var134 = var136;
varonce133 = var134;
}
((struct instance_core__NativeArray*)var116)->values[4]=var134;
} else {
var116 = varonce115;
varonce115 = NULL;
}
var141 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var116)->values[1]=var141;
{
{ /* Inline abstract_compiler$RuntimeVariable$name (var_arg) on <var_arg:RuntimeVariable> */
var144 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var144 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1980);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
((struct instance_core__NativeArray*)var116)->values[3]=var142;
{
var145 = ((val*(*)(val* self))(var116->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var116); /* native_to_s on <var116:NativeArray[String]>*/
}
varonce115 = var116;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var145); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce146==NULL)) {
var147 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "var_for_c_";
var152 = (val*)(10l<<2|1);
var153 = (val*)(10l<<2|1);
var154 = (val*)((long)(0)<<2|3);
var155 = (val*)((long)(0)<<2|3);
var151 = core__flat___CString___to_s_unsafe(var150, var152, var153, var154, var155);
var149 = var151;
varonce148 = var149;
}
((struct instance_core__NativeArray*)var147)->values[0]=var149;
} else {
var147 = varonce146;
varonce146 = NULL;
}
var156 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var147)->values[1]=var156;
{
var157 = ((val*(*)(val* self))(var147->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var147); /* native_to_s on <var147:NativeArray[String]>*/
}
varonce146 = var147;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments_for_c, var157); /* Direct call array$Array$add on <var_arguments_for_c:Array[String]>*/
}
}
{
var158 = core___core__Int___Discrete__successor(var_a, 1l);
}
var_a = var158;
}
BREAK_label: (void)0;
{
var159 = ((short int(*)(val* self))(var_return_mtype->class->vft[COLOR_nitc__nitni_base__MType__is_cprimitive]))(var_return_mtype); /* is_cprimitive on <var_return_mtype:MType>*/
}
if (var159){
if (unlikely(varonce160==NULL)) {
var161 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = " = ";
var166 = (val*)(3l<<2|1);
var167 = (val*)(3l<<2|1);
var168 = (val*)((long)(0)<<2|3);
var169 = (val*)((long)(0)<<2|3);
var165 = core__flat___CString___to_s_unsafe(var164, var166, var167, var168, var169);
var163 = var165;
varonce162 = var163;
}
((struct instance_core__NativeArray*)var161)->values[1]=var163;
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "(";
var174 = (val*)(1l<<2|1);
var175 = (val*)(1l<<2|1);
var176 = (val*)((long)(0)<<2|3);
var177 = (val*)((long)(0)<<2|3);
var173 = core__flat___CString___to_s_unsafe(var172, var174, var175, var176, var177);
var171 = var173;
varonce170 = var171;
}
((struct instance_core__NativeArray*)var161)->values[3]=var171;
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = ");";
var182 = (val*)(2l<<2|1);
var183 = (val*)(2l<<2|1);
var184 = (val*)((long)(0)<<2|3);
var185 = (val*)((long)(0)<<2|3);
var181 = core__flat___CString___to_s_unsafe(var180, var182, var183, var184, var185);
var179 = var181;
varonce178 = var179;
}
((struct instance_core__NativeArray*)var161)->values[5]=var179;
} else {
var161 = varonce160;
varonce160 = NULL;
}
{
var186 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var161)->values[0]=var186;
((struct instance_core__NativeArray*)var161)->values[2]=var_externname;
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = ", ";
var191 = (val*)(2l<<2|1);
var192 = (val*)(2l<<2|1);
var193 = (val*)((long)(0)<<2|3);
var194 = (val*)((long)(0)<<2|3);
var190 = core__flat___CString___to_s_unsafe(var189, var191, var192, var193, var194);
var188 = var190;
varonce187 = var188;
}
{
var195 = core__abstract_text___Collection___join(var_arguments_for_c, var188, ((val*)NULL));
}
((struct instance_core__NativeArray*)var161)->values[4]=var195;
{
var196 = ((val*(*)(val* self))(var161->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var161); /* native_to_s on <var161:NativeArray[String]>*/
}
varonce160 = var161;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var196); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "struct nitni_instance* ret_var;";
var201 = (val*)(31l<<2|1);
var202 = (val*)(31l<<2|1);
var203 = (val*)((long)(0)<<2|3);
var204 = (val*)((long)(0)<<2|3);
var200 = core__flat___CString___to_s_unsafe(var199, var201, var202, var203, var204);
var198 = var200;
varonce197 = var198;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var198); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce205==NULL)) {
var206 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = "ret_var = ";
var211 = (val*)(10l<<2|1);
var212 = (val*)(10l<<2|1);
var213 = (val*)((long)(0)<<2|3);
var214 = (val*)((long)(0)<<2|3);
var210 = core__flat___CString___to_s_unsafe(var209, var211, var212, var213, var214);
var208 = var210;
varonce207 = var208;
}
((struct instance_core__NativeArray*)var206)->values[0]=var208;
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "(";
var219 = (val*)(1l<<2|1);
var220 = (val*)(1l<<2|1);
var221 = (val*)((long)(0)<<2|3);
var222 = (val*)((long)(0)<<2|3);
var218 = core__flat___CString___to_s_unsafe(var217, var219, var220, var221, var222);
var216 = var218;
varonce215 = var216;
}
((struct instance_core__NativeArray*)var206)->values[2]=var216;
if (likely(varonce223!=NULL)) {
var224 = varonce223;
} else {
var225 = ");";
var227 = (val*)(2l<<2|1);
var228 = (val*)(2l<<2|1);
var229 = (val*)((long)(0)<<2|3);
var230 = (val*)((long)(0)<<2|3);
var226 = core__flat___CString___to_s_unsafe(var225, var227, var228, var229, var230);
var224 = var226;
varonce223 = var224;
}
((struct instance_core__NativeArray*)var206)->values[4]=var224;
} else {
var206 = varonce205;
varonce205 = NULL;
}
((struct instance_core__NativeArray*)var206)->values[1]=var_externname;
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = ", ";
var235 = (val*)(2l<<2|1);
var236 = (val*)(2l<<2|1);
var237 = (val*)((long)(0)<<2|3);
var238 = (val*)((long)(0)<<2|3);
var234 = core__flat___CString___to_s_unsafe(var233, var235, var236, var237, var238);
var232 = var234;
varonce231 = var232;
}
{
var239 = core__abstract_text___Collection___join(var_arguments_for_c, var232, ((val*)NULL));
}
((struct instance_core__NativeArray*)var206)->values[3]=var239;
{
var240 = ((val*(*)(val* self))(var206->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var206); /* native_to_s on <var206:NativeArray[String]>*/
}
varonce205 = var206;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var240); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce241==NULL)) {
var242 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = " = ret_var->value;";
var247 = (val*)(18l<<2|1);
var248 = (val*)(18l<<2|1);
var249 = (val*)((long)(0)<<2|3);
var250 = (val*)((long)(0)<<2|3);
var246 = core__flat___CString___to_s_unsafe(var245, var247, var248, var249, var250);
var244 = var246;
varonce243 = var244;
}
((struct instance_core__NativeArray*)var242)->values[1]=var244;
} else {
var242 = varonce241;
varonce241 = NULL;
}
{
var251 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var242)->values[0]=var251;
{
var252 = ((val*(*)(val* self))(var242->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var242); /* native_to_s on <var242:NativeArray[String]>*/
}
varonce241 = var242;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var252); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
}
{
var253 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_recv_var, var_return_mtype); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_recv_var = var253;
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var_recv_var); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
{
nitc__light___AMethPropdef___compile_ffi_support_to_c(self, var_v); /* Direct call light$AMethPropdef$compile_ffi_support_to_c on <self:AMethPropdef>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light$CCompilationUnit$write_as_nitni for (self: CCompilationUnit, MModule, String) */
void nitc__light___CCompilationUnit___write_as_nitni(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_compdir /* var compdir: String */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_base_name /* var base_name: String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var_h_file /* var h_file: String */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : String */;
val* var33 /* : Array[String] */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : Text */;
val* var47 /* : String */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
val* var58 /* : String */;
val* var_c_file /* var c_file: String */;
val* var60 /* : NativeArray[String] */;
static val* varonce59;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Bool */;
val* var68 /* : nullable Bool */;
val* var69 /* : String */;
val* var70 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Bool */;
val* var80 /* : nullable Bool */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Bool */;
val* var88 /* : nullable Bool */;
val* var89 /* : String */;
val* var90 /* : Array[String] */;
val* var92 /* : Array[String] */;
val* var94 /* : NativeArray[String] */;
static val* varonce93;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Bool */;
val* var103 /* : String */;
var_mmodule = p0;
var_compdir = p1;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "._nitni";
var5 = (val*)(7l<<2|1);
var6 = (val*)(7l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[1]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var9 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
}
((struct instance_core__NativeArray*)var)->values[0]=var9;
{
var10 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
var_base_name = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ".h";
var17 = (val*)(2l<<2|1);
var18 = (val*)(2l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[1]=var14;
} else {
var12 = varonce11;
varonce11 = NULL;
}
((struct instance_core__NativeArray*)var12)->values[0]=var_base_name;
{
var21 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
var_h_file = var21;
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "/";
var28 = (val*)(1l<<2|1);
var29 = (val*)(1l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[1]=var25;
} else {
var23 = varonce22;
varonce22 = NULL;
}
((struct instance_core__NativeArray*)var23)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var23)->values[2]=var_h_file;
{
var32 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
var33 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var33); /* Direct call array$Array$init on <var33:Array[String]>*/
}
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "_NITG_NITNI_H";
var40 = (val*)(13l<<2|1);
var41 = (val*)(13l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[1]=var37;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
var44 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
}
{
var45 = core___core__String___Object__to_s(var44);
}
{
var46 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__Text__to_upper]))(var45); /* to_upper on <var45:String>*/
}
((struct instance_core__NativeArray*)var35)->values[0]=var46;
{
var47 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
nitc__light_ffi_base___CCompilationUnit___write_header_to_file(self, var_mmodule, var32, var33, var47); /* Direct call light_ffi_base$CCompilationUnit$write_header_to_file on <self:CCompilationUnit>*/
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ".c";
var54 = (val*)(2l<<2|1);
var55 = (val*)(2l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var49)->values[1]=var51;
} else {
var49 = varonce48;
varonce48 = NULL;
}
((struct instance_core__NativeArray*)var49)->values[0]=var_base_name;
{
var58 = ((val*(*)(val* self))(var49->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
var_c_file = var58;
if (unlikely(varonce59==NULL)) {
var60 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "/";
var65 = (val*)(1l<<2|1);
var66 = (val*)(1l<<2|1);
var67 = (val*)((long)(0)<<2|3);
var68 = (val*)((long)(0)<<2|3);
var64 = core__flat___CString___to_s_unsafe(var63, var65, var66, var67, var68);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var60)->values[1]=var62;
} else {
var60 = varonce59;
varonce59 = NULL;
}
((struct instance_core__NativeArray*)var60)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var60)->values[2]=var_c_file;
{
var69 = ((val*(*)(val* self))(var60->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var60); /* native_to_s on <var60:NativeArray[String]>*/
}
varonce59 = var60;
var70 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var70, 1l); /* Direct call array$Array$with_capacity on <var70:Array[String]>*/
}
var_ = var70;
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "\"";
var77 = (val*)(1l<<2|1);
var78 = (val*)(1l<<2|1);
var79 = (val*)((long)(0)<<2|3);
var80 = (val*)((long)(0)<<2|3);
var76 = core__flat___CString___to_s_unsafe(var75, var77, var78, var79, var80);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var72)->values[0]=var74;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "\"";
var85 = (val*)(1l<<2|1);
var86 = (val*)(1l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var72)->values[2]=var82;
} else {
var72 = varonce71;
varonce71 = NULL;
}
((struct instance_core__NativeArray*)var72)->values[1]=var_h_file;
{
var89 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var89); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
{
nitc__light_ffi_base___CCompilationUnit___write_body_to_file(self, var_mmodule, var69, var_); /* Direct call light_ffi_base$CCompilationUnit$write_body_to_file on <self:CCompilationUnit>*/
}
{
{ /* Inline c_tools$CCompilationUnit$files (self) on <self:CCompilationUnit> */
var92 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <self:CCompilationUnit> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (unlikely(varonce93==NULL)) {
var94 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "/";
var99 = (val*)(1l<<2|1);
var100 = (val*)(1l<<2|1);
var101 = (val*)((long)(0)<<2|3);
var102 = (val*)((long)(0)<<2|3);
var98 = core__flat___CString___to_s_unsafe(var97, var99, var100, var101, var102);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var94)->values[1]=var96;
} else {
var94 = varonce93;
varonce93 = NULL;
}
((struct instance_core__NativeArray*)var94)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var94)->values[2]=var_c_file;
{
var103 = ((val*(*)(val* self))(var94->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var94); /* native_to_s on <var94:NativeArray[String]>*/
}
varonce93 = var94;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var90, var103); /* Direct call array$Array$add on <var90:Array[String]>*/
}
RET_LABEL:;
}
