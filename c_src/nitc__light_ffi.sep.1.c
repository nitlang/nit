#include "nitc__light_ffi.sep.0.h"
/* method light_ffi#MModule#uses_ffi for (self: MModule): Bool */
short int nitc__light_ffi___MModule___uses_ffi(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s; /* _uses_ffi on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi#MModule#uses_ffi= for (self: MModule, Bool) */
void nitc__light_ffi___MModule___uses_ffi_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s = p0; /* _uses_ffi on <self:MModule> */
RET_LABEL:;
}
/* method light_ffi#MModule#ffi_ccu for (self: MModule): nullable CCompilationUnit */
val* nitc__light_ffi___MModule___ffi_ccu(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : nullable CCompilationUnit */;
var1 = self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi#MModule#ffi_ccu= for (self: MModule, nullable CCompilationUnit) */
void nitc__light_ffi___MModule___ffi_ccu_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val = p0; /* _ffi_ccu on <self:MModule> */
RET_LABEL:;
}
/* method light_ffi#MModule#present_languages for (self: MModule): HashSet[FFILanguage] */
val* nitc__light_ffi___MModule___present_languages(val* self) {
val* var /* : HashSet[FFILanguage] */;
val* var1 /* : HashSet[FFILanguage] */;
var1 = self->attrs[COLOR_nitc__light_ffi__MModule___present_languages].val; /* _present_languages on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _present_languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi#MModule#finalize_ffi_wrapper for (self: MModule, String, MModule) */
void nitc__light_ffi___MModule___finalize_ffi_wrapper(val* self, val* p0, val* p1) {
val* var_compdir /* var compdir: String */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var /* : MultiHashMap[String, String] */;
val* var2 /* : MultiHashMap[String, String] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : nullable Object */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var_cflags /* var cflags: String */;
val* var12 /* : nullable CCompilationUnit */;
val* var14 /* : nullable CCompilationUnit */;
val* var15 /* : nullable CCompilationUnit */;
val* var17 /* : nullable CCompilationUnit */;
val* var18 /* : Array[String] */;
val* var20 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var21 /* : IndexedIterator[nullable Object] */;
val* var_22 /* var : IndexedIterator[String] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_filename /* var filename: String */;
val* var25 /* : ExternCFile */;
val* var_f /* var f: ExternCFile */;
val* var26 /* : Array[String] */;
val* var28 /* : Array[String] */;
val* var29 /* : Array[String] */;
val* var31 /* : Array[String] */;
val* var32 /* : Array[ExternFile] */;
val* var34 /* : Array[ExternFile] */;
var_compdir = p0;
var_mainmodule = p1;
{
{ /* Inline light_c#MModule#cflags (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__light_c__MModule___cflags].val; /* _cflags on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 77);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "";
var5 = core__flat___NativeString___to_s_full(var4, 0l, 0l);
var3 = var5;
varonce = var3;
}
{
var6 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var, var3);
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = " ";
var10 = core__flat___NativeString___to_s_full(var9, 1l, 1l);
var8 = var10;
varonce7 = var8;
}
{
var11 = core__abstract_text___Collection___join(var6, var8);
}
var_cflags = var11;
{
{ /* Inline light_ffi#MModule#ffi_ccu (self) on <self:MModule> */
var14 = self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <self:MModule> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 58);
fatal_exit(1);
} else {
nitc__light_ffi_base___CCompilationUnit___write_as_impl(var12, self, var_compdir); /* Direct call light_ffi_base#CCompilationUnit#write_as_impl on <var12:nullable CCompilationUnit>*/
}
{
{ /* Inline light_ffi#MModule#ffi_ccu (self) on <self:MModule> */
var17 = self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <self:MModule> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 59);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#files (var15) on <var15:nullable CCompilationUnit> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var20 = var15->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <var15:nullable CCompilationUnit> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ = var18;
{
var21 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:IndexedIterator[String]>*/
}
if (var23){
} else {
goto BREAK_label;
}
{
var24 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:IndexedIterator[String]>*/
}
var_filename = var24;
var25 = NEW_nitc__ExternCFile(&type_nitc__ExternCFile);
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var25, var_filename); /* filename= on <var25:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nitc__c_tools__ExternCFile__cflags_61d]))(var25, var_cflags); /* cflags= on <var25:ExternCFile>*/
}
{
((void(*)(val* self))(var25->class->vft[COLOR_core__kernel__Object__init]))(var25); /* init on <var25:ExternCFile>*/
}
var_f = var25;
{
{ /* Inline c_tools#ExternFile#pkgconfigs (var_f) on <var_f:ExternCFile> */
var28 = var_f->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_f:ExternCFile> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline light_c#MModule#pkgconfigs (self) on <self:MModule> */
var31 = self->attrs[COLOR_nitc__light_c__MModule___pkgconfigs].val; /* _pkgconfigs on <self:MModule> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 83);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var26, var29); /* Direct call array#Array#add_all on <var26:Array[String]>*/
}
{
{ /* Inline light_ffi_base#MModule#ffi_files (self) on <self:MModule> */
var34 = self->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <self:MModule> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 82);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var32, var_f); /* Direct call array#Array#add on <var32:Array[ExternFile]>*/
}
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:IndexedIterator[String]>*/
}
RET_LABEL:;
}
/* method light_ffi#MModule#compiled_ffi_methods for (self: MModule): HashSet[AMethPropdef] */
val* nitc__light_ffi___MModule___compiled_ffi_methods(val* self) {
val* var /* : HashSet[AMethPropdef] */;
val* var1 /* : HashSet[AMethPropdef] */;
var1 = self->attrs[COLOR_nitc__light_ffi__MModule___compiled_ffi_methods].val; /* _compiled_ffi_methods on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_ffi_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 66);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi#AModule#ensure_compile_ffi_wrapper for (self: AModule) */
void nitc__light_ffi___AModule___ensure_compile_ffi_wrapper(val* self) {
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable CCompilationUnit */;
val* var12 /* : nullable CCompilationUnit */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other16 /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : CCompilationUnit */;
val* var_ffi_ccu /* var ffi_ccu: CCompilationUnit */;
val* var22 /* : ANodes[AExternCodeBlock] */;
val* var24 /* : ANodes[AExternCodeBlock] */;
val* var_25 /* var : ANodes[AExternCodeBlock] */;
val* var26 /* : Iterator[ANode] */;
val* var_27 /* var : Iterator[AExternCodeBlock] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_block /* var block: AExternCodeBlock */;
val* var30 /* : nullable FFILanguage */;
val* var32 /* : nullable FFILanguage */;
val* var_language /* var language: nullable FFILanguage */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : HashSet[FFILanguage] */;
val* var40 /* : HashSet[FFILanguage] */;
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
val* var55 /* : Template */;
val* var57 /* : Template */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : Template */;
val* var64 /* : Template */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : String */;
val* var69 /* : Template */;
val* var71 /* : Template */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : String */;
val* var76 /* : Template */;
val* var78 /* : Template */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : String */;
val* var83 /* : Template */;
val* var85 /* : Template */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
val* var90 /* : Template */;
val* var92 /* : Template */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : String */;
val* var97 /* : ANodes[AClassdef] */;
val* var99 /* : ANodes[AClassdef] */;
val* var_100 /* var : ANodes[AClassdef] */;
val* var101 /* : Iterator[ANode] */;
val* var_102 /* var : Iterator[AClassdef] */;
short int var103 /* : Bool */;
val* var105 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
int cltype;
int idtype;
short int var_108 /* var : Bool */;
val* var109 /* : nullable AExternCodeBlock */;
val* var111 /* : nullable AExternCodeBlock */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
val* var118 /* : nullable AExternCodeBlock */;
val* var120 /* : nullable AExternCodeBlock */;
val* var121 /* : nullable FFILanguage */;
val* var123 /* : nullable FFILanguage */;
val* var_language124 /* var language: nullable FFILanguage */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : HashSet[FFILanguage] */;
val* var132 /* : HashSet[FFILanguage] */;
val* var133 /* : nullable AExternCodeBlock */;
val* var135 /* : nullable AExternCodeBlock */;
val* var136 /* : nullable FFILanguage */;
val* var138 /* : nullable FFILanguage */;
val* var139 /* : nullable AExternCodeBlock */;
val* var141 /* : nullable AExternCodeBlock */;
val* var_block143 /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_mmodule144 /* var mmodule: MModule */;
{
{ /* Inline loader#AModule#mmodule (self) on <self:AModule> */
var2 = self->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <self:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mmodule = var;
if (var_mmodule == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var9 = var_mmodule == var_other;
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
var_ = var4;
if (var4){
var3 = var_;
} else {
{
{ /* Inline light_ffi#MModule#ffi_ccu (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var12 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <var_mmodule:nullable MModule(MModule)> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var10,((val*)NULL)) on <var10:nullable CCompilationUnit> */
var_other16 = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var_other16); /* == on <var10:nullable CCompilationUnit(CCompilationUnit)>*/
}
var18 = !var17;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var3 = var13;
}
if (var3){
goto RET_LABEL;
} else {
}
var19 = NEW_nitc__CCompilationUnit(&type_nitc__CCompilationUnit);
{
{ /* Inline kernel#Object#init (var19) on <var19:CCompilationUnit> */
RET_LABEL20:(void)0;
}
}
var_ffi_ccu = var19;
{
{ /* Inline light_ffi#MModule#ffi_ccu= (var_mmodule,var_ffi_ccu) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val = var_ffi_ccu; /* _ffi_ccu on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline parser_nodes#AModule#n_extern_code_blocks (self) on <self:AModule> */
var24 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1059);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_25 = var22;
{
var26 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_25);
}
var_27 = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_27); /* is_ok on <var_27:Iterator[AExternCodeBlock]>*/
}
if (var28){
} else {
goto BREAK_label;
}
{
var29 = ((val*(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_27); /* item on <var_27:Iterator[AExternCodeBlock]>*/
}
var_block = var29;
{
{ /* Inline light_ffi_base#AExternCodeBlock#language (var_block) on <var_block:AExternCodeBlock> */
var32 = var_block->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val; /* _language on <var_block:AExternCodeBlock> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_language = var30;
if (var_language == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_language,((val*)NULL)) on <var_language:nullable FFILanguage> */
var_other16 = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var_language->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_language, var_other16); /* == on <var_language:nullable FFILanguage(FFILanguage)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 88);
fatal_exit(1);
}
{
{ /* Inline light_ffi#MModule#present_languages (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var40 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___present_languages].val; /* _present_languages on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _present_languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 50);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var38, var_language); /* Direct call hash_collection#HashSet#add on <var38:HashSet[FFILanguage]>*/
}
{
nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block(var_language, var_block, var_ffi_ccu, var_mmodule); /* Direct call light_c#CLanguage#compile_module_block on <var_language:nullable FFILanguage(FFILanguage)>*/
}
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_27); /* next on <var_27:Iterator[AExternCodeBlock]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_27); /* finish on <var_27:Iterator[AExternCodeBlock]>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_c_base (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var43 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_base].val; /* _header_c_base on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_base");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 24);
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
var51 = "._nitni.h\"\n";
var52 = core__flat___NativeString___to_s_full(var51, 11l, 11l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var44)->values[2]=var50;
} else {
var44 = varonce;
varonce = NULL;
}
{
var53 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
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
{ /* Inline c_tools#CCompilationUnit#body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var57 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "#ifdef ANDROID\n";
var61 = core__flat___NativeString___to_s_full(var60, 15l, 15l);
var59 = var61;
varonce58 = var59;
}
{
template___template__Template___add(var55, var59); /* Direct call template#Template#add on <var55:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var64 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "\t#include <android/log.h>\n";
var68 = core__flat___NativeString___to_s_full(var67, 26l, 26l);
var66 = var68;
varonce65 = var66;
}
{
template___template__Template___add(var62, var66); /* Direct call template#Template#add on <var62:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var71 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "\t#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, \"Nit\", __VA_ARGS__)\n";
var75 = core__flat___NativeString___to_s_full(var74, 90l, 90l);
var73 = var75;
varonce72 = var73;
}
{
template___template__Template___add(var69, var73); /* Direct call template#Template#add on <var69:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var78 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "#else\n";
var82 = core__flat___NativeString___to_s_full(var81, 6l, 6l);
var80 = var82;
varonce79 = var80;
}
{
template___template__Template___add(var76, var80); /* Direct call template#Template#add on <var76:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var85 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "\t#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)\n";
var89 = core__flat___NativeString___to_s_full(var88, 55l, 55l);
var87 = var89;
varonce86 = var87;
}
{
template___template__Template___add(var83, var87); /* Direct call template#Template#add on <var83:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var92 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "#endif\n";
var96 = core__flat___NativeString___to_s_full(var95, 7l, 7l);
var94 = var96;
varonce93 = var94;
}
{
template___template__Template___add(var90, var94); /* Direct call template#Template#add on <var90:Template>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (self) on <self:AModule> */
var99 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
var_100 = var97;
{
var101 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_100);
}
var_102 = var101;
for(;;) {
{
var103 = ((short int(*)(val* self))((((long)var_102&3)?class_info[((long)var_102&3)]:var_102->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_102); /* is_ok on <var_102:Iterator[AClassdef]>*/
}
if (var103){
} else {
goto BREAK_label104;
}
{
var105 = ((val*(*)(val* self))((((long)var_102&3)?class_info[((long)var_102&3)]:var_102->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_102); /* item on <var_102:Iterator[AClassdef]>*/
}
var_nclassdef = var105;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var107 = 0;
} else {
var107 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_108 = var107;
if (var107){
{
{ /* Inline parser_nodes#AStdClassdef#n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var111 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
if (var109 == NULL) {
var112 = 0; /* is null */
} else {
var112 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var109,((val*)NULL)) on <var109:nullable AExternCodeBlock> */
var_other16 = ((val*)NULL);
{
var115 = ((short int(*)(val* self, val* p0))(var109->class->vft[COLOR_core__kernel__Object___61d_61d]))(var109, var_other16); /* == on <var109:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
var116 = !var115;
var113 = var116;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
var112 = var113;
}
var106 = var112;
} else {
var106 = var_108;
}
if (var106){
{
{ /* Inline light_ffi#MModule#uses_ffi= (var_mmodule,1) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s = 1; /* _uses_ffi on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL117:(void)0;
}
}
{
{ /* Inline parser_nodes#AStdClassdef#n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var120 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (var118 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 106);
fatal_exit(1);
} else {
{ /* Inline light_ffi_base#AExternCodeBlock#language (var118) on <var118:nullable AExternCodeBlock> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 102);
fatal_exit(1);
}
var123 = var118->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val; /* _language on <var118:nullable AExternCodeBlock> */
var121 = var123;
RET_LABEL122:(void)0;
}
}
var_language124 = var121;
if (var_language124 == NULL) {
var125 = 0; /* is null */
} else {
var125 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_language124,((val*)NULL)) on <var_language124:nullable FFILanguage> */
var_other16 = ((val*)NULL);
{
var128 = ((short int(*)(val* self, val* p0))(var_language124->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_language124, var_other16); /* == on <var_language124:nullable FFILanguage(FFILanguage)>*/
}
var129 = !var128;
var126 = var129;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
var125 = var126;
}
if (unlikely(!var125)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 107);
fatal_exit(1);
}
{
{ /* Inline light_ffi#MModule#present_languages (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var132 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___present_languages].val; /* _present_languages on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _present_languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 50);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var130, var_language124); /* Direct call hash_collection#HashSet#add on <var130:HashSet[FFILanguage]>*/
}
{
{ /* Inline parser_nodes#AStdClassdef#n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var135 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
if (var133 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 109);
fatal_exit(1);
} else {
{ /* Inline light_ffi_base#AExternCodeBlock#language (var133) on <var133:nullable AExternCodeBlock> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 102);
fatal_exit(1);
}
var138 = var133->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val; /* _language on <var133:nullable AExternCodeBlock> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline parser_nodes#AStdClassdef#n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var141 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var139 = var141;
RET_LABEL140:(void)0;
}
}
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 110);
fatal_exit(1);
}
if (var136 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 109);
fatal_exit(1);
} else {
{ /* Inline light_c#CLanguage#compile_extern_class (var136,var139,var_nclassdef,var_ffi_ccu,var_mmodule) on <var136:nullable FFILanguage> */
var_block143 = var139;
var_m = var_nclassdef;
var_ecc = var_ffi_ccu;
var_mmodule144 = var_mmodule;
RET_LABEL142:(void)0;
}
}
} else {
}
{
((void(*)(val* self))((((long)var_102&3)?class_info[((long)var_102&3)]:var_102->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_102); /* next on <var_102:Iterator[AClassdef]>*/
}
}
BREAK_label104: (void)0;
{
((void(*)(val* self))((((long)var_102&3)?class_info[((long)var_102&3)]:var_102->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_102); /* finish on <var_102:Iterator[AClassdef]>*/
}
RET_LABEL:;
}
/* method light_ffi#AMethPropdef#compile_ffi_method for (self: AMethPropdef, MModule) */
void nitc__light_ffi___AMethPropdef___compile_ffi_method(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable AExternCodeBlock */;
val* var2 /* : nullable AExternCodeBlock */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : HashSet[AMethPropdef] */;
val* var10 /* : HashSet[AMethPropdef] */;
short int var11 /* : Bool */;
val* var12 /* : HashSet[AMethPropdef] */;
val* var14 /* : HashSet[AMethPropdef] */;
val* var15 /* : nullable AExternCodeBlock */;
val* var17 /* : nullable AExternCodeBlock */;
val* var18 /* : nullable FFILanguage */;
val* var20 /* : nullable FFILanguage */;
val* var_language /* var language: nullable FFILanguage */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : HashSet[FFILanguage] */;
val* var28 /* : HashSet[FFILanguage] */;
val* var29 /* : nullable AExternCodeBlock */;
val* var31 /* : nullable AExternCodeBlock */;
val* var32 /* : nullable FFILanguage */;
val* var34 /* : nullable FFILanguage */;
val* var35 /* : nullable AExternCodeBlock */;
val* var37 /* : nullable AExternCodeBlock */;
val* var38 /* : nullable CCompilationUnit */;
val* var40 /* : nullable CCompilationUnit */;
var_mmodule = p0;
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
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
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 120);
fatal_exit(1);
}
{
{ /* Inline light_ffi#MModule#compiled_ffi_methods (var_mmodule) on <var_mmodule:MModule> */
var10 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___compiled_ffi_methods].val; /* _compiled_ffi_methods on <var_mmodule:MModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_ffi_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 66);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = core___core__HashSet___core__abstract_collection__Collection__has(var8, self);
}
if (var11){
goto RET_LABEL;
} else {
}
{
{ /* Inline light_ffi#MModule#compiled_ffi_methods (var_mmodule) on <var_mmodule:MModule> */
var14 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___compiled_ffi_methods].val; /* _compiled_ffi_methods on <var_mmodule:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_ffi_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 66);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var12, self); /* Direct call hash_collection#HashSet#add on <var12:HashSet[AMethPropdef]>*/
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 125);
fatal_exit(1);
} else {
{ /* Inline light_ffi_base#AExternCodeBlock#language (var15) on <var15:nullable AExternCodeBlock> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 102);
fatal_exit(1);
}
var20 = var15->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val; /* _language on <var15:nullable AExternCodeBlock> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_language = var18;
if (var_language == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_language,((val*)NULL)) on <var_language:nullable FFILanguage> */
var_other = ((val*)NULL);
{
var24 = ((short int(*)(val* self, val* p0))(var_language->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_language, var_other); /* == on <var_language:nullable FFILanguage(FFILanguage)>*/
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 126);
fatal_exit(1);
}
{
{ /* Inline light_ffi#MModule#present_languages (var_mmodule) on <var_mmodule:MModule> */
var28 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___present_languages].val; /* _present_languages on <var_mmodule:MModule> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _present_languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 50);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var26, var_language); /* Direct call hash_collection#HashSet#add on <var26:HashSet[FFILanguage]>*/
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var31 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 128);
fatal_exit(1);
} else {
{ /* Inline light_ffi_base#AExternCodeBlock#language (var29) on <var29:nullable AExternCodeBlock> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 102);
fatal_exit(1);
}
var34 = var29->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val; /* _language on <var29:nullable AExternCodeBlock> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var37 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 129);
fatal_exit(1);
}
{
{ /* Inline light_ffi#MModule#ffi_ccu (var_mmodule) on <var_mmodule:MModule> */
var40 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <var_mmodule:MModule> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 129);
fatal_exit(1);
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 128);
fatal_exit(1);
} else {
nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method(var32, var35, self, var38, var_mmodule); /* Direct call light_c#CLanguage#compile_extern_method on <var32:nullable FFILanguage>*/
}
RET_LABEL:;
}
