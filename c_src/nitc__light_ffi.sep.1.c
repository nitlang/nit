#include "nitc__light_ffi.sep.0.h"
/* method light_ffi$MModule$uses_ffi for (self: MModule): Bool */
short int nitc__light_ffi___MModule___uses_ffi(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s; /* _uses_ffi on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi$MModule$uses_ffi= for (self: MModule, Bool) */
void nitc__light_ffi___MModule___uses_ffi_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s = p0; /* _uses_ffi on <self:MModule> */
RET_LABEL:;
}
/* method light_ffi$MModule$ffi_ccu for (self: MModule): nullable CCompilationUnit */
val* nitc__light_ffi___MModule___ffi_ccu(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : nullable CCompilationUnit */;
var1 = self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi$MModule$ffi_ccu= for (self: MModule, nullable CCompilationUnit) */
void nitc__light_ffi___MModule___ffi_ccu_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val = p0; /* _ffi_ccu on <self:MModule> */
RET_LABEL:;
}
/* method light_ffi$MModule$present_languages for (self: MModule): HashSet[FFILanguage] */
val* nitc__light_ffi___MModule___present_languages(val* self) {
val* var /* : HashSet[FFILanguage] */;
val* var1 /* : HashSet[FFILanguage] */;
var1 = self->attrs[COLOR_nitc__light_ffi__MModule___present_languages].val; /* _present_languages on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _present_languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi$MModule$finalize_ffi_wrapper for (self: MModule, String, MModule) */
void nitc__light_ffi___MModule___finalize_ffi_wrapper(val* self, val* p0, val* p1) {
val* var_compdir /* var compdir: String */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var /* : MultiHashMap[String, String] */;
val* var2 /* : MultiHashMap[String, String] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Object */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
val* var19 /* : String */;
val* var_cflags /* var cflags: String */;
val* var20 /* : nullable CCompilationUnit */;
val* var22 /* : nullable CCompilationUnit */;
val* var23 /* : nullable CCompilationUnit */;
val* var25 /* : nullable CCompilationUnit */;
val* var26 /* : Array[String] */;
val* var28 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var29 /* : IndexedIterator[nullable Object] */;
val* var_30 /* var : IndexedIterator[String] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_filename /* var filename: String */;
val* var33 /* : ExternCFile */;
val* var_f /* var f: ExternCFile */;
val* var34 /* : Array[String] */;
val* var36 /* : Array[String] */;
val* var37 /* : Array[String] */;
val* var39 /* : Array[String] */;
val* var40 /* : Array[ExternFile] */;
val* var42 /* : Array[ExternFile] */;
var_compdir = p0;
var_mainmodule = p1;
{
{ /* Inline light_c$MModule$cflags (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__light_c__MModule___cflags].val; /* _cflags on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var6 = (val*)(0l<<2|1);
var7 = (val*)(0l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var, var3);
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = " ";
var15 = (val*)(1l<<2|1);
var16 = (val*)(1l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
{
var19 = core__abstract_text___Collection___join(var10, var12, ((val*)NULL));
}
var_cflags = var19;
{
{ /* Inline light_ffi$MModule$ffi_ccu (self) on <self:MModule> */
var22 = self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <self:MModule> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 58);
fatal_exit(1);
} else {
nitc__light_ffi_base___CCompilationUnit___write_as_impl(var20, self, var_compdir); /* Direct call light_ffi_base$CCompilationUnit$write_as_impl on <var20:nullable CCompilationUnit>*/
}
{
{ /* Inline light_ffi$MModule$ffi_ccu (self) on <self:MModule> */
var25 = self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <self:MModule> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 59);
fatal_exit(1);
} else {
{ /* Inline c_tools$CCompilationUnit$files (var23) on <var23:nullable CCompilationUnit> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <var23:nullable CCompilationUnit> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_ = var26;
{
var29 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_30 = var29;
for(;;) {
{
var31 = ((short int(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_30); /* is_ok on <var_30:IndexedIterator[String]>*/
}
if (var31){
} else {
goto BREAK_label;
}
{
var32 = ((val*(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_30); /* item on <var_30:IndexedIterator[String]>*/
}
var_filename = var32;
var33 = NEW_nitc__ExternCFile(&type_nitc__ExternCFile);
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var33, var_filename); /* filename= on <var33:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_nitc__c_tools__ExternCFile__cflags_61d]))(var33, var_cflags); /* cflags= on <var33:ExternCFile>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_core__kernel__Object__init]))(var33); /* init on <var33:ExternCFile>*/
}
var_f = var33;
{
{ /* Inline c_tools$ExternFile$pkgconfigs (var_f) on <var_f:ExternCFile> */
var36 = var_f->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_f:ExternCFile> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline light_c$MModule$pkgconfigs (self) on <self:MModule> */
var39 = self->attrs[COLOR_nitc__light_c__MModule___pkgconfigs].val; /* _pkgconfigs on <self:MModule> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 83);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var34, var37); /* Direct call array$Array$add_all on <var34:Array[String]>*/
}
{
{ /* Inline light_ffi_base$MModule$ffi_files (self) on <self:MModule> */
var42 = self->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <self:MModule> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 82);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var40, var_f); /* Direct call array$Array$add on <var40:Array[ExternFile]>*/
}
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_30); /* next on <var_30:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_30); /* finish on <var_30:IndexedIterator[String]>*/
}
RET_LABEL:;
}
/* method light_ffi$MModule$compiled_ffi_methods for (self: MModule): HashSet[AMethPropdef] */
val* nitc__light_ffi___MModule___compiled_ffi_methods(val* self) {
val* var /* : HashSet[AMethPropdef] */;
val* var1 /* : HashSet[AMethPropdef] */;
var1 = self->attrs[COLOR_nitc__light_ffi__MModule___compiled_ffi_methods].val; /* _compiled_ffi_methods on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_ffi_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 66);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi$AModule$ensure_compile_ffi_wrapper for (self: AModule) */
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
val* var63 /* : Template */;
val* var65 /* : Template */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
val* var74 /* : Template */;
val* var76 /* : Template */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Bool */;
val* var84 /* : nullable Bool */;
val* var85 /* : Template */;
val* var87 /* : Template */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
val* var96 /* : Template */;
val* var98 /* : Template */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Bool */;
val* var107 /* : Template */;
val* var109 /* : Template */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Bool */;
val* var117 /* : nullable Bool */;
val* var118 /* : Template */;
val* var120 /* : Template */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Bool */;
val* var128 /* : nullable Bool */;
val* var129 /* : ANodes[AClassdef] */;
val* var131 /* : ANodes[AClassdef] */;
val* var_132 /* var : ANodes[AClassdef] */;
val* var133 /* : Iterator[ANode] */;
val* var_134 /* var : Iterator[AClassdef] */;
short int var135 /* : Bool */;
val* var137 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
int cltype;
int idtype;
short int var_140 /* var : Bool */;
val* var141 /* : nullable AExternCodeBlock */;
val* var143 /* : nullable AExternCodeBlock */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
val* var150 /* : nullable AExternCodeBlock */;
val* var152 /* : nullable AExternCodeBlock */;
val* var153 /* : nullable FFILanguage */;
val* var155 /* : nullable FFILanguage */;
val* var_language156 /* var language: nullable FFILanguage */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
val* var162 /* : HashSet[FFILanguage] */;
val* var164 /* : HashSet[FFILanguage] */;
val* var165 /* : nullable AExternCodeBlock */;
val* var167 /* : nullable AExternCodeBlock */;
val* var168 /* : nullable FFILanguage */;
val* var170 /* : nullable FFILanguage */;
val* var171 /* : nullable AExternCodeBlock */;
val* var173 /* : nullable AExternCodeBlock */;
val* var_block175 /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_mmodule176 /* var mmodule: MModule */;
{
{ /* Inline loader$AModule$mmodule (self) on <self:AModule> */
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
{ /* Inline kernel$Object$== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
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
{ /* Inline light_ffi$MModule$ffi_ccu (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
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
{ /* Inline kernel$Object$!= (var10,((val*)NULL)) on <var10:nullable CCompilationUnit> */
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
{ /* Inline kernel$Object$init (var19) on <var19:CCompilationUnit> */
RET_LABEL20:(void)0;
}
}
var_ffi_ccu = var19;
{
{ /* Inline light_ffi$MModule$ffi_ccu= (var_mmodule,var_ffi_ccu) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val = var_ffi_ccu; /* _ffi_ccu on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline parser_nodes$AModule$n_extern_code_blocks (self) on <self:AModule> */
var24 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1122);
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
{ /* Inline light_ffi_base$AExternCodeBlock$language (var_block) on <var_block:AExternCodeBlock> */
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
{ /* Inline kernel$Object$!= (var_language,((val*)NULL)) on <var_language:nullable FFILanguage> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 88);
fatal_exit(1);
}
{
{ /* Inline light_ffi$MModule$present_languages (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var40 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___present_languages].val; /* _present_languages on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _present_languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 50);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var38, var_language); /* Direct call hash_collection$HashSet$add on <var38:HashSet[FFILanguage]>*/
}
{
nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block(var_language, var_block, var_ffi_ccu, var_mmodule); /* Direct call light_c$CLanguage$compile_module_block on <var_language:nullable FFILanguage(FFILanguage)>*/
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
{ /* Inline c_tools$CCompilationUnit$header_c_base (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var43 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_base].val; /* _header_c_base on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_base");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 24);
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
var55 = "._nitni.h\"\n";
var57 = (val*)(11l<<2|1);
var58 = (val*)(11l<<2|1);
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
var61 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
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
{ /* Inline c_tools$CCompilationUnit$body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var65 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "#ifdef ANDROID\n";
var70 = (val*)(15l<<2|1);
var71 = (val*)(15l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
{
template___template__Template___add(var63, var67); /* Direct call template$Template$add on <var63:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var76 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "\t#include <android/log.h>\n";
var81 = (val*)(26l<<2|1);
var82 = (val*)(26l<<2|1);
var83 = (val*)((long)(0)<<2|3);
var84 = (val*)((long)(0)<<2|3);
var80 = core__flat___CString___to_s_unsafe(var79, var81, var82, var83, var84);
var78 = var80;
varonce77 = var78;
}
{
template___template__Template___add(var74, var78); /* Direct call template$Template$add on <var74:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var87 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var87 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "\t#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, \"Nit\", __VA_ARGS__)\n";
var92 = (val*)(90l<<2|1);
var93 = (val*)(90l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
{
template___template__Template___add(var85, var89); /* Direct call template$Template$add on <var85:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var98 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "#else\n";
var103 = (val*)(6l<<2|1);
var104 = (val*)(6l<<2|1);
var105 = (val*)((long)(0)<<2|3);
var106 = (val*)((long)(0)<<2|3);
var102 = core__flat___CString___to_s_unsafe(var101, var103, var104, var105, var106);
var100 = var102;
varonce99 = var100;
}
{
template___template__Template___add(var96, var100); /* Direct call template$Template$add on <var96:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var109 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var109 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "\t#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)\n";
var114 = (val*)(55l<<2|1);
var115 = (val*)(55l<<2|1);
var116 = (val*)((long)(0)<<2|3);
var117 = (val*)((long)(0)<<2|3);
var113 = core__flat___CString___to_s_unsafe(var112, var114, var115, var116, var117);
var111 = var113;
varonce110 = var111;
}
{
template___template__Template___add(var107, var111); /* Direct call template$Template$add on <var107:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var120 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var120 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "#endif\n";
var125 = (val*)(7l<<2|1);
var126 = (val*)(7l<<2|1);
var127 = (val*)((long)(0)<<2|3);
var128 = (val*)((long)(0)<<2|3);
var124 = core__flat___CString___to_s_unsafe(var123, var125, var126, var127, var128);
var122 = var124;
varonce121 = var122;
}
{
template___template__Template___add(var118, var122); /* Direct call template$Template$add on <var118:Template>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (self) on <self:AModule> */
var131 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var131 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
var_132 = var129;
{
var133 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_132);
}
var_134 = var133;
for(;;) {
{
var135 = ((short int(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_134); /* is_ok on <var_134:Iterator[AClassdef]>*/
}
if (var135){
} else {
goto BREAK_label136;
}
{
var137 = ((val*(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_134); /* item on <var_134:Iterator[AClassdef]>*/
}
var_nclassdef = var137;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var139 = 0;
} else {
var139 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_140 = var139;
if (var139){
{
{ /* Inline parser_nodes$AStdClassdef$n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var143 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
if (var141 == NULL) {
var144 = 0; /* is null */
} else {
var144 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var141,((val*)NULL)) on <var141:nullable AExternCodeBlock> */
var_other16 = ((val*)NULL);
{
var147 = ((short int(*)(val* self, val* p0))(var141->class->vft[COLOR_core__kernel__Object___61d_61d]))(var141, var_other16); /* == on <var141:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
var148 = !var147;
var145 = var148;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
var144 = var145;
}
var138 = var144;
} else {
var138 = var_140;
}
if (var138){
{
{ /* Inline light_ffi$MModule$uses_ffi= (var_mmodule,1) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s = 1; /* _uses_ffi on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL149:(void)0;
}
}
{
{ /* Inline parser_nodes$AStdClassdef$n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var152 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var150 = var152;
RET_LABEL151:(void)0;
}
}
if (var150 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 106);
fatal_exit(1);
} else {
{ /* Inline light_ffi_base$AExternCodeBlock$language (var150) on <var150:nullable AExternCodeBlock> */
if (unlikely(var150 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 102);
fatal_exit(1);
}
var155 = var150->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val; /* _language on <var150:nullable AExternCodeBlock> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
var_language156 = var153;
if (var_language156 == NULL) {
var157 = 0; /* is null */
} else {
var157 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_language156,((val*)NULL)) on <var_language156:nullable FFILanguage> */
var_other16 = ((val*)NULL);
{
var160 = ((short int(*)(val* self, val* p0))(var_language156->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_language156, var_other16); /* == on <var_language156:nullable FFILanguage(FFILanguage)>*/
}
var161 = !var160;
var158 = var161;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
var157 = var158;
}
if (unlikely(!var157)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 107);
fatal_exit(1);
}
{
{ /* Inline light_ffi$MModule$present_languages (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var164 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___present_languages].val; /* _present_languages on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var164 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _present_languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 50);
fatal_exit(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var162, var_language156); /* Direct call hash_collection$HashSet$add on <var162:HashSet[FFILanguage]>*/
}
{
{ /* Inline parser_nodes$AStdClassdef$n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var167 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var165 = var167;
RET_LABEL166:(void)0;
}
}
if (var165 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 109);
fatal_exit(1);
} else {
{ /* Inline light_ffi_base$AExternCodeBlock$language (var165) on <var165:nullable AExternCodeBlock> */
if (unlikely(var165 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 102);
fatal_exit(1);
}
var170 = var165->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val; /* _language on <var165:nullable AExternCodeBlock> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
{ /* Inline parser_nodes$AStdClassdef$n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var173 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var171 = var173;
RET_LABEL172:(void)0;
}
}
if (unlikely(var171 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 110);
fatal_exit(1);
}
if (var168 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 109);
fatal_exit(1);
} else {
{ /* Inline light_c$CLanguage$compile_extern_class (var168,var171,var_nclassdef,var_ffi_ccu,var_mmodule) on <var168:nullable FFILanguage> */
var_block175 = var171;
var_m = var_nclassdef;
var_ecc = var_ffi_ccu;
var_mmodule176 = var_mmodule;
RET_LABEL174:(void)0;
}
}
} else {
}
{
((void(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_134); /* next on <var_134:Iterator[AClassdef]>*/
}
}
BREAK_label136: (void)0;
{
((void(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_134); /* finish on <var_134:Iterator[AClassdef]>*/
}
RET_LABEL:;
}
/* method light_ffi$AMethPropdef$compile_ffi_method for (self: AMethPropdef, MModule) */
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
{ /* Inline parser_nodes$AMethPropdef$n_extern_code_block (self) on <self:AMethPropdef> */
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
{ /* Inline kernel$Object$!= (var,((val*)NULL)) on <var:nullable AExternCodeBlock> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 120);
fatal_exit(1);
}
{
{ /* Inline light_ffi$MModule$compiled_ffi_methods (var_mmodule) on <var_mmodule:MModule> */
var10 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___compiled_ffi_methods].val; /* _compiled_ffi_methods on <var_mmodule:MModule> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline light_ffi$MModule$compiled_ffi_methods (var_mmodule) on <var_mmodule:MModule> */
var14 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___compiled_ffi_methods].val; /* _compiled_ffi_methods on <var_mmodule:MModule> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_ffi_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 66);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var12, self); /* Direct call hash_collection$HashSet$add on <var12:HashSet[AMethPropdef]>*/
}
{
{ /* Inline parser_nodes$AMethPropdef$n_extern_code_block (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 125);
fatal_exit(1);
} else {
{ /* Inline light_ffi_base$AExternCodeBlock$language (var15) on <var15:nullable AExternCodeBlock> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline kernel$Object$!= (var_language,((val*)NULL)) on <var_language:nullable FFILanguage> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 126);
fatal_exit(1);
}
{
{ /* Inline light_ffi$MModule$present_languages (var_mmodule) on <var_mmodule:MModule> */
var28 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___present_languages].val; /* _present_languages on <var_mmodule:MModule> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _present_languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 50);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var26, var_language); /* Direct call hash_collection$HashSet$add on <var26:HashSet[FFILanguage]>*/
}
{
{ /* Inline parser_nodes$AMethPropdef$n_extern_code_block (self) on <self:AMethPropdef> */
var31 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 128);
fatal_exit(1);
} else {
{ /* Inline light_ffi_base$AExternCodeBlock$language (var29) on <var29:nullable AExternCodeBlock> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline parser_nodes$AMethPropdef$n_extern_code_block (self) on <self:AMethPropdef> */
var37 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 129);
fatal_exit(1);
}
{
{ /* Inline light_ffi$MModule$ffi_ccu (var_mmodule) on <var_mmodule:MModule> */
var40 = var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <var_mmodule:MModule> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 129);
fatal_exit(1);
}
if (var32 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 128);
fatal_exit(1);
} else {
nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method(var32, var35, self, var38, var_mmodule); /* Direct call light_c$CLanguage$compile_extern_method on <var32:nullable FFILanguage>*/
}
RET_LABEL:;
}
