#include "nitc__separate_compiler.sep.0.h"
/* method separate_compiler$SeparateCompiler$compile_type_to_c for (self: SeparateCompiler, MType) */
void nitc___nitc__SeparateCompiler___compile_type_to_c(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : nullable RapidTypeAnalysis */;
val* var6 /* : nullable RapidTypeAnalysis */;
val* var7 /* : HashSet[MClassType] */;
val* var9 /* : HashSet[MClassType] */;
short int var10 /* : Bool */;
short int var_is_live /* var is_live: Bool */;
val* var11 /* : nullable RapidTypeAnalysis */;
val* var13 /* : nullable RapidTypeAnalysis */;
val* var14 /* : HashSet[MType] */;
val* var16 /* : HashSet[MType] */;
short int var17 /* : Bool */;
short int var_is_cast_live /* var is_cast_live: Bool */;
val* var18 /* : String */;
val* var_c_name /* var c_name: String */;
val* var19 /* : SeparateCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var20 /* : NativeArray[String] */;
static val* varonce;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var40 /* : NativeArray[String] */;
static val* varonce39;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
val* var49 /* : String */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Bool */;
val* var67 /* : nullable Bool */;
val* var68 /* : String */;
val* var70 /* : NativeArray[String] */;
static val* varonce69;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Bool */;
val* var78 /* : nullable Bool */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
val* var87 /* : String */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Bool */;
val* var97 /* : nullable Bool */;
val* var98 /* : Map[MType, Int] */;
val* var100 /* : Map[MType, Int] */;
val* var101 /* : nullable Object */;
val* var102 /* : String */;
long var103 /* : Int */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
val* var114 /* : NativeArray[String] */;
static val* varonce113;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : CString */;
val* var118 /* : String */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Int */;
val* var121 /* : nullable Bool */;
val* var122 /* : nullable Bool */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : CString */;
val* var126 /* : String */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Bool */;
val* var130 /* : nullable Bool */;
val* var131 /* : String */;
val* var132 /* : String */;
val* var134 /* : NativeArray[String] */;
static val* varonce133;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Bool */;
val* var142 /* : nullable Bool */;
val* var143 /* : Map[MType, Int] */;
val* var145 /* : Map[MType, Int] */;
val* var146 /* : nullable Object */;
val* var147 /* : String */;
long var148 /* : Int */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Bool */;
val* var157 /* : nullable Bool */;
short int var158 /* : Bool */;
int cltype159;
int idtype160;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : CString */;
val* var164 /* : String */;
val* var165 /* : nullable Int */;
val* var166 /* : nullable Int */;
val* var167 /* : nullable Bool */;
val* var168 /* : nullable Bool */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : CString */;
val* var172 /* : String */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Int */;
val* var175 /* : nullable Bool */;
val* var176 /* : nullable Bool */;
val* var177 /* : MType */;
val* var_mclass_type /* var mclass_type: MType */;
short int var178 /* : Bool */;
int cltype179;
int idtype180;
val* var181 /* : Map[MClassType, Array[nullable MType]] */;
val* var183 /* : Map[MClassType, Array[nullable MType]] */;
val* var184 /* : nullable Object */;
short int var185 /* : Bool */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : CString */;
val* var189 /* : String */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Int */;
val* var192 /* : nullable Bool */;
val* var193 /* : nullable Bool */;
val* var195 /* : NativeArray[String] */;
static val* varonce194;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Bool */;
val* var203 /* : nullable Bool */;
val* var204 /* : String */;
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
val* var223 /* : String */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : CString */;
val* var227 /* : String */;
val* var228 /* : nullable Int */;
val* var229 /* : nullable Int */;
val* var230 /* : nullable Bool */;
val* var231 /* : nullable Bool */;
val* var233 /* : NativeArray[String] */;
static val* varonce232;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : CString */;
val* var237 /* : String */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Int */;
val* var240 /* : nullable Bool */;
val* var241 /* : nullable Bool */;
val* var242 /* : Map[MType, Array[nullable MType]] */;
val* var244 /* : Map[MType, Array[nullable MType]] */;
val* var245 /* : nullable Object */;
long var246 /* : Int */;
long var248 /* : Int */;
val* var249 /* : String */;
val* var250 /* : String */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : CString */;
val* var254 /* : String */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Int */;
val* var257 /* : nullable Bool */;
val* var258 /* : nullable Bool */;
val* var259 /* : Map[MType, Array[nullable MType]] */;
val* var261 /* : Map[MType, Array[nullable MType]] */;
val* var262 /* : nullable Object */;
val* var_263 /* var : Array[nullable MType] */;
val* var264 /* : IndexedIterator[nullable Object] */;
val* var_265 /* var : IndexedIterator[nullable MType] */;
short int var266 /* : Bool */;
val* var267 /* : nullable Object */;
val* var_stype /* var stype: nullable MType */;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var271 /* : Bool */;
short int var273 /* : Bool */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : CString */;
val* var277 /* : String */;
val* var278 /* : nullable Int */;
val* var279 /* : nullable Int */;
val* var280 /* : nullable Bool */;
val* var281 /* : nullable Bool */;
val* var283 /* : NativeArray[String] */;
static val* varonce282;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : CString */;
val* var287 /* : String */;
val* var288 /* : nullable Int */;
val* var289 /* : nullable Int */;
val* var290 /* : nullable Bool */;
val* var291 /* : nullable Bool */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : CString */;
val* var295 /* : String */;
val* var296 /* : nullable Int */;
val* var297 /* : nullable Int */;
val* var298 /* : nullable Bool */;
val* var299 /* : nullable Bool */;
val* var300 /* : Map[MType, Int] */;
val* var302 /* : Map[MType, Int] */;
val* var303 /* : nullable Object */;
val* var304 /* : String */;
long var305 /* : Int */;
val* var306 /* : String */;
val* var307 /* : String */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : CString */;
val* var311 /* : String */;
val* var312 /* : nullable Int */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Bool */;
val* var315 /* : nullable Bool */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : CString */;
val* var319 /* : String */;
val* var320 /* : nullable Int */;
val* var321 /* : nullable Int */;
val* var322 /* : nullable Bool */;
val* var323 /* : nullable Bool */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : CString */;
val* var327 /* : String */;
val* var328 /* : nullable Int */;
val* var329 /* : nullable Int */;
val* var330 /* : nullable Bool */;
val* var331 /* : nullable Bool */;
var_mtype = p0;
{
var = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var1 = !var;
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 708);
fatal_exit(1);
}
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline separate_compiler$SeparateCompiler$runtime_type_analysis (self) on <self:SeparateCompiler> */
var6 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 709);
fatal_exit(1);
} else {
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_types (var4) on <var4:nullable RapidTypeAnalysis> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var9 = var4->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var4:nullable RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = core___core__HashSet___core__abstract_collection__Collection__has(var7, var_mtype);
}
var2 = var10;
} else {
var2 = var_;
}
var_is_live = var2;
{
{ /* Inline separate_compiler$SeparateCompiler$runtime_type_analysis (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 710);
fatal_exit(1);
} else {
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_cast_types (var11) on <var11:nullable RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var16 = var11->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <var11:nullable RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__HashSet___core__abstract_collection__Collection__has(var14, var_mtype);
}
var_is_cast_live = var17;
{
var18 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
var_c_name = var18;
var19 = NEW_nitc__SeparateCompilerVisitor(&type_nitc__SeparateCompilerVisitor);
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(var19, self); /* compiler= on <var19:SeparateCompilerVisitor>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_core__kernel__Object__init]))(var19); /* init on <var19:SeparateCompilerVisitor>*/
}
var_v = var19;
if (unlikely(varonce==NULL)) {
var20 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "/* runtime type ";
var25 = (val*)(16l<<2|1);
var26 = (val*)(16l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var20)->values[0]=var22;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " */";
var33 = (val*)(3l<<2|1);
var34 = (val*)(3l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var20)->values[2]=var30;
} else {
var20 = varonce;
varonce = NULL;
}
{
var37 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var20)->values[1]=var37;
{
var38 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce = var20;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var38); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "type_";
var45 = (val*)(5l<<2|1);
var46 = (val*)(5l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_core__NativeArray*)var40)->values[1]=var_c_name;
{
var49 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "extern const struct type type_";
var56 = (val*)(30l<<2|1);
var57 = (val*)(30l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ";";
var64 = (val*)(1l<<2|1);
var65 = (val*)(1l<<2|1);
var66 = (val*)((long)(0)<<2|3);
var67 = (val*)((long)(0)<<2|3);
var63 = core__flat___CString___to_s_unsafe(var62, var64, var65, var66, var67);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var51)->values[2]=var61;
} else {
var51 = varonce50;
varonce50 = NULL;
}
((struct instance_core__NativeArray*)var51)->values[1]=var_c_name;
{
var68 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var49, var68); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce69==NULL)) {
var70 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "const struct type type_";
var75 = (val*)(23l<<2|1);
var76 = (val*)(23l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
((struct instance_core__NativeArray*)var70)->values[0]=var72;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = " = {";
var83 = (val*)(4l<<2|1);
var84 = (val*)(4l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var70)->values[2]=var80;
} else {
var70 = varonce69;
varonce69 = NULL;
}
((struct instance_core__NativeArray*)var70)->values[1]=var_c_name;
{
var87 = ((val*(*)(val* self))(var70->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var70); /* native_to_s on <var70:NativeArray[String]>*/
}
varonce69 = var70;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var87); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_cast_live){
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = ",";
var94 = (val*)(1l<<2|1);
var95 = (val*)(1l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[1]=var91;
} else {
var89 = varonce88;
varonce88 = NULL;
}
{
{ /* Inline separate_compiler$SeparateCompiler$type_ids (self) on <self:SeparateCompiler> */
var100 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var100 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 149);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = ((val*(*)(val* self, val* p0))((((long)var98&3)?class_info[((long)var98&3)]:var98->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var98, var_mtype); /* [] on <var98:Map[MType, Int]>*/
}
var103 = (long)(var101)>>2;
var102 = core__flat___Int___core__abstract_text__Object__to_s(var103);
((struct instance_core__NativeArray*)var89)->values[0]=var102;
{
var104 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var104); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "-1, /*CAST DEAD*/";
var109 = (val*)(17l<<2|1);
var110 = (val*)(17l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var106); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (unlikely(varonce113==NULL)) {
var114 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "\"";
var119 = (val*)(1l<<2|1);
var120 = (val*)(1l<<2|1);
var121 = (val*)((long)(0)<<2|3);
var122 = (val*)((long)(0)<<2|3);
var118 = core__flat___CString___to_s_unsafe(var117, var119, var120, var121, var122);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var114)->values[0]=var116;
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "\", /* class_name_string */";
var127 = (val*)(26l<<2|1);
var128 = (val*)(26l<<2|1);
var129 = (val*)((long)(0)<<2|3);
var130 = (val*)((long)(0)<<2|3);
var126 = core__flat___CString___to_s_unsafe(var125, var127, var128, var129, var130);
var124 = var126;
varonce123 = var124;
}
((struct instance_core__NativeArray*)var114)->values[2]=var124;
} else {
var114 = varonce113;
varonce113 = NULL;
}
{
var131 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var114)->values[1]=var131;
{
var132 = ((val*(*)(val* self))(var114->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var114); /* native_to_s on <var114:NativeArray[String]>*/
}
varonce113 = var114;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var132); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_cast_live){
if (unlikely(varonce133==NULL)) {
var134 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = ",";
var139 = (val*)(1l<<2|1);
var140 = (val*)(1l<<2|1);
var141 = (val*)((long)(0)<<2|3);
var142 = (val*)((long)(0)<<2|3);
var138 = core__flat___CString___to_s_unsafe(var137, var139, var140, var141, var142);
var136 = var138;
varonce135 = var136;
}
((struct instance_core__NativeArray*)var134)->values[1]=var136;
} else {
var134 = varonce133;
varonce133 = NULL;
}
{
{ /* Inline separate_compiler$SeparateCompiler$type_colors (self) on <self:SeparateCompiler> */
var145 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_colors].val; /* _type_colors on <self:SeparateCompiler> */
if (unlikely(var145 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 150);
fatal_exit(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
var146 = ((val*(*)(val* self, val* p0))((((long)var143&3)?class_info[((long)var143&3)]:var143->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var143, var_mtype); /* [] on <var143:Map[MType, Int]>*/
}
var148 = (long)(var146)>>2;
var147 = core__flat___Int___core__abstract_text__Object__to_s(var148);
((struct instance_core__NativeArray*)var134)->values[0]=var147;
{
var149 = ((val*(*)(val* self))(var134->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var134); /* native_to_s on <var134:NativeArray[String]>*/
}
varonce133 = var134;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var149); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "-1, /*CAST DEAD*/";
var154 = (val*)(17l<<2|1);
var155 = (val*)(17l<<2|1);
var156 = (val*)((long)(0)<<2|3);
var157 = (val*)((long)(0)<<2|3);
var153 = core__flat___CString___to_s_unsafe(var152, var154, var155, var156, var157);
var151 = var153;
varonce150 = var151;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var151); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
/* <var_mtype:MType> isa MNullableType */
cltype159 = type_nitc__MNullableType.color;
idtype160 = type_nitc__MNullableType.id;
if(cltype159 >= var_mtype->type->table_size) {
var158 = 0;
} else {
var158 = var_mtype->type->type_table[cltype159] == idtype160;
}
if (var158){
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "1,";
var165 = (val*)(2l<<2|1);
var166 = (val*)(2l<<2|1);
var167 = (val*)((long)(0)<<2|3);
var168 = (val*)((long)(0)<<2|3);
var164 = core__flat___CString___to_s_unsafe(var163, var165, var166, var167, var168);
var162 = var164;
varonce161 = var162;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var162); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "0,";
var173 = (val*)(2l<<2|1);
var174 = (val*)(2l<<2|1);
var175 = (val*)((long)(0)<<2|3);
var176 = (val*)((long)(0)<<2|3);
var172 = core__flat___CString___to_s_unsafe(var171, var173, var174, var175, var176);
var170 = var172;
varonce169 = var170;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var170); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (var_is_live){
{
var177 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mclass_type = var177;
/* <var_mclass_type:MType> isa MClassType */
cltype179 = type_nitc__MClassType.color;
idtype180 = type_nitc__MClassType.id;
if(cltype179 >= var_mclass_type->type->table_size) {
var178 = 0;
} else {
var178 = var_mclass_type->type->type_table[cltype179] == idtype180;
}
if (unlikely(!var178)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 748);
fatal_exit(1);
}
{
{ /* Inline separate_compiler$SeparateCompiler$resolution_tables (self) on <self:SeparateCompiler> */
var183 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var183 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1072);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
var184 = ((val*(*)(val* self, val* p0))((((long)var181&3)?class_info[((long)var181&3)]:var181->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var181, var_mclass_type); /* [] on <var181:Map[MClassType, Array[nullable MType]]>*/
}
{
var185 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var184);
}
if (var185){
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "NULL, /*NO RESOLUTIONS*/";
var190 = (val*)(24l<<2|1);
var191 = (val*)(24l<<2|1);
var192 = (val*)((long)(0)<<2|3);
var193 = (val*)((long)(0)<<2|3);
var189 = core__flat___CString___to_s_unsafe(var188, var190, var191, var192, var193);
var187 = var189;
varonce186 = var187;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var187); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
nitc___nitc__SeparateCompiler___compile_type_resolution_table(self, var_mtype); /* Direct call separate_compiler$SeparateCompiler$compile_type_resolution_table on <self:SeparateCompiler>*/
}
if (unlikely(varonce194==NULL)) {
var195 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "resolution_table_";
var200 = (val*)(17l<<2|1);
var201 = (val*)(17l<<2|1);
var202 = (val*)((long)(0)<<2|3);
var203 = (val*)((long)(0)<<2|3);
var199 = core__flat___CString___to_s_unsafe(var198, var200, var201, var202, var203);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var195)->values[0]=var197;
} else {
var195 = varonce194;
varonce194 = NULL;
}
((struct instance_core__NativeArray*)var195)->values[1]=var_c_name;
{
var204 = ((val*(*)(val* self))(var195->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var195); /* native_to_s on <var195:NativeArray[String]>*/
}
varonce194 = var195;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var204); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce205==NULL)) {
var206 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = "&resolution_table_";
var211 = (val*)(18l<<2|1);
var212 = (val*)(18l<<2|1);
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
var217 = ",";
var219 = (val*)(1l<<2|1);
var220 = (val*)(1l<<2|1);
var221 = (val*)((long)(0)<<2|3);
var222 = (val*)((long)(0)<<2|3);
var218 = core__flat___CString___to_s_unsafe(var217, var219, var220, var221, var222);
var216 = var218;
varonce215 = var216;
}
((struct instance_core__NativeArray*)var206)->values[2]=var216;
} else {
var206 = varonce205;
varonce205 = NULL;
}
((struct instance_core__NativeArray*)var206)->values[1]=var_c_name;
{
var223 = ((val*(*)(val* self))(var206->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var206); /* native_to_s on <var206:NativeArray[String]>*/
}
varonce205 = var206;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var223); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
} else {
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = "NULL, /*DEAD*/";
var228 = (val*)(14l<<2|1);
var229 = (val*)(14l<<2|1);
var230 = (val*)((long)(0)<<2|3);
var231 = (val*)((long)(0)<<2|3);
var227 = core__flat___CString___to_s_unsafe(var226, var228, var229, var230, var231);
var225 = var227;
varonce224 = var225;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var225); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (var_is_live){
if (unlikely(varonce232==NULL)) {
var233 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce234!=NULL)) {
var235 = varonce234;
} else {
var236 = ",";
var238 = (val*)(1l<<2|1);
var239 = (val*)(1l<<2|1);
var240 = (val*)((long)(0)<<2|3);
var241 = (val*)((long)(0)<<2|3);
var237 = core__flat___CString___to_s_unsafe(var236, var238, var239, var240, var241);
var235 = var237;
varonce234 = var235;
}
((struct instance_core__NativeArray*)var233)->values[1]=var235;
} else {
var233 = varonce232;
varonce232 = NULL;
}
{
{ /* Inline separate_compiler$SeparateCompiler$type_tables (self) on <self:SeparateCompiler> */
var244 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var244 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1071);
fatal_exit(1);
}
var242 = var244;
RET_LABEL243:(void)0;
}
}
{
var245 = ((val*(*)(val* self, val* p0))((((long)var242&3)?class_info[((long)var242&3)]:var242->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var242, var_mtype); /* [] on <var242:Map[MType, Array[nullable MType]]>*/
}
{
{ /* Inline array$AbstractArrayRead$length (var245) on <var245:nullable Object(Array[nullable MType])> */
var248 = var245->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var245:nullable Object(Array[nullable MType])> */
var246 = var248;
RET_LABEL247:(void)0;
}
}
var249 = core__flat___Int___core__abstract_text__Object__to_s(var246);
((struct instance_core__NativeArray*)var233)->values[0]=var249;
{
var250 = ((val*(*)(val* self))(var233->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var233); /* native_to_s on <var233:NativeArray[String]>*/
}
varonce232 = var233;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var250); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "{";
var255 = (val*)(1l<<2|1);
var256 = (val*)(1l<<2|1);
var257 = (val*)((long)(0)<<2|3);
var258 = (val*)((long)(0)<<2|3);
var254 = core__flat___CString___to_s_unsafe(var253, var255, var256, var257, var258);
var252 = var254;
varonce251 = var252;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var252); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler$SeparateCompiler$type_tables (self) on <self:SeparateCompiler> */
var261 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var261 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1071);
fatal_exit(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
var262 = ((val*(*)(val* self, val* p0))((((long)var259&3)?class_info[((long)var259&3)]:var259->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var259, var_mtype); /* [] on <var259:Map[MType, Array[nullable MType]]>*/
}
var_263 = var262;
{
var264 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_263);
}
var_265 = var264;
for(;;) {
{
var266 = ((short int(*)(val* self))((((long)var_265&3)?class_info[((long)var_265&3)]:var_265->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_265); /* is_ok on <var_265:IndexedIterator[nullable MType]>*/
}
if (var266){
} else {
goto BREAK_label;
}
{
var267 = ((val*(*)(val* self))((((long)var_265&3)?class_info[((long)var_265&3)]:var_265->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_265); /* item on <var_265:IndexedIterator[nullable MType]>*/
}
var_stype = var267;
if (var_stype == NULL) {
var268 = 1; /* is null */
} else {
var268 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_stype,((val*)NULL)) on <var_stype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_stype,var_other) on <var_stype:nullable MType(MType)> */
var273 = var_stype == var_other;
var271 = var273;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
}
var269 = var271;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
var268 = var269;
}
if (var268){
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "-1, /* empty */";
var278 = (val*)(15l<<2|1);
var279 = (val*)(15l<<2|1);
var280 = (val*)((long)(0)<<2|3);
var281 = (val*)((long)(0)<<2|3);
var277 = core__flat___CString___to_s_unsafe(var276, var278, var279, var280, var281);
var275 = var277;
varonce274 = var275;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var275); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce282==NULL)) {
var283 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = ", /* ";
var288 = (val*)(5l<<2|1);
var289 = (val*)(5l<<2|1);
var290 = (val*)((long)(0)<<2|3);
var291 = (val*)((long)(0)<<2|3);
var287 = core__flat___CString___to_s_unsafe(var286, var288, var289, var290, var291);
var285 = var287;
varonce284 = var285;
}
((struct instance_core__NativeArray*)var283)->values[1]=var285;
if (likely(varonce292!=NULL)) {
var293 = varonce292;
} else {
var294 = " */";
var296 = (val*)(3l<<2|1);
var297 = (val*)(3l<<2|1);
var298 = (val*)((long)(0)<<2|3);
var299 = (val*)((long)(0)<<2|3);
var295 = core__flat___CString___to_s_unsafe(var294, var296, var297, var298, var299);
var293 = var295;
varonce292 = var293;
}
((struct instance_core__NativeArray*)var283)->values[3]=var293;
} else {
var283 = varonce282;
varonce282 = NULL;
}
{
{ /* Inline separate_compiler$SeparateCompiler$type_ids (self) on <self:SeparateCompiler> */
var302 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var302 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 149);
fatal_exit(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
{
var303 = ((val*(*)(val* self, val* p0))((((long)var300&3)?class_info[((long)var300&3)]:var300->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var300, var_stype); /* [] on <var300:Map[MType, Int]>*/
}
var305 = (long)(var303)>>2;
var304 = core__flat___Int___core__abstract_text__Object__to_s(var305);
((struct instance_core__NativeArray*)var283)->values[0]=var304;
{
var306 = ((val*(*)(val* self))(var_stype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_stype); /* to_s on <var_stype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var283)->values[2]=var306;
{
var307 = ((val*(*)(val* self))(var283->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var283); /* native_to_s on <var283:NativeArray[String]>*/
}
varonce282 = var283;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var307); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_265&3)?class_info[((long)var_265&3)]:var_265->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_265); /* next on <var_265:IndexedIterator[nullable MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_265&3)?class_info[((long)var_265&3)]:var_265->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_265); /* finish on <var_265:IndexedIterator[nullable MType]>*/
}
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = "},";
var312 = (val*)(2l<<2|1);
var313 = (val*)(2l<<2|1);
var314 = (val*)((long)(0)<<2|3);
var315 = (val*)((long)(0)<<2|3);
var311 = core__flat___CString___to_s_unsafe(var310, var312, var313, var314, var315);
var309 = var311;
varonce308 = var309;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var309); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "-1, {}, /*DEAD TYPE*/";
var320 = (val*)(21l<<2|1);
var321 = (val*)(21l<<2|1);
var322 = (val*)((long)(0)<<2|3);
var323 = (val*)((long)(0)<<2|3);
var319 = core__flat___CString___to_s_unsafe(var318, var320, var321, var322, var323);
var317 = var319;
varonce316 = var317;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var317); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = "};";
var328 = (val*)(2l<<2|1);
var329 = (val*)(2l<<2|1);
var330 = (val*)((long)(0)<<2|3);
var331 = (val*)((long)(0)<<2|3);
var327 = core__flat___CString___to_s_unsafe(var326, var328, var329, var330, var331);
var325 = var327;
varonce324 = var325;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var325); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$compile_type_resolution_table for (self: SeparateCompiler, MType) */
void nitc___nitc__SeparateCompiler___compile_type_resolution_table(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var14 /* : NativeArray[String] */;
static val* varonce13;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
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
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
val* var52 /* : String */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
val* var70 /* : Map[MClassType, Array[nullable MType]] */;
val* var72 /* : Map[MClassType, Array[nullable MType]] */;
val* var73 /* : nullable Object */;
val* var_ /* var : Array[nullable MType] */;
val* var74 /* : IndexedIterator[nullable Object] */;
val* var_75 /* var : IndexedIterator[nullable MType] */;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_t /* var t: nullable MType */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
val* var92 /* : MModule */;
val* var94 /* : MModule */;
val* var95 /* : MType */;
val* var_tv /* var tv: MType */;
val* var96 /* : Map[MType, Int] */;
val* var98 /* : Map[MType, Int] */;
short int var99 /* : Bool */;
val* var101 /* : NativeArray[String] */;
static val* varonce100;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Bool */;
val* var109 /* : nullable Bool */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Bool */;
val* var121 /* : nullable Bool */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Bool */;
val* var129 /* : nullable Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Bool */;
val* var137 /* : nullable Bool */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Bool */;
val* var145 /* : nullable Bool */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : String */;
val* var149 /* : String */;
val* var151 /* : NativeArray[String] */;
static val* varonce150;
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
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Bool */;
val* var175 /* : nullable Bool */;
val* var176 /* : String */;
val* var177 /* : String */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : CString */;
val* var182 /* : String */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Int */;
val* var185 /* : nullable Bool */;
val* var186 /* : nullable Bool */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : CString */;
val* var190 /* : String */;
val* var191 /* : nullable Int */;
val* var192 /* : nullable Int */;
val* var193 /* : nullable Bool */;
val* var194 /* : nullable Bool */;
var_mtype = p0;
{
var = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
/* <var:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 781);
fatal_exit(1);
}
var_mclass_type = var;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "resolution_table_";
var7 = (val*)(17l<<2|1);
var8 = (val*)(17l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
} else {
var2 = varonce;
varonce = NULL;
}
{
var11 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var2)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
if (unlikely(varonce13==NULL)) {
var14 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "extern const struct types resolution_table_";
var19 = (val*)(43l<<2|1);
var20 = (val*)(43l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ";";
var27 = (val*)(1l<<2|1);
var28 = (val*)(1l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var14)->values[2]=var24;
} else {
var14 = varonce13;
varonce13 = NULL;
}
{
var31 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var14)->values[1]=var31;
{
var32 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce13 = var14;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var12, var32); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateCompiler>*/
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var33;
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "const struct types resolution_table_";
var40 = (val*)(36l<<2|1);
var41 = (val*)(36l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[0]=var37;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = " = {";
var48 = (val*)(4l<<2|1);
var49 = (val*)(4l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var35)->values[2]=var45;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
var52 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var35)->values[1]=var52;
{
var53 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var53); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "0, /* dummy */";
var58 = (val*)(14l<<2|1);
var59 = (val*)(14l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var55); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "{";
var66 = (val*)(1l<<2|1);
var67 = (val*)(1l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var63); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler$SeparateCompiler$resolution_tables (self) on <self:SeparateCompiler> */
var72 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1072);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = ((val*(*)(val* self, val* p0))((((long)var70&3)?class_info[((long)var70&3)]:var70->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var70, var_mclass_type); /* [] on <var70:Map[MClassType, Array[nullable MType]]>*/
}
var_ = var73;
{
var74 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_75 = var74;
for(;;) {
{
var76 = ((short int(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_75); /* is_ok on <var_75:IndexedIterator[nullable MType]>*/
}
if (var76){
} else {
goto BREAK_label;
}
{
var77 = ((val*(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_75); /* item on <var_75:IndexedIterator[nullable MType]>*/
}
var_t = var77;
if (var_t == NULL) {
var78 = 1; /* is null */
} else {
var78 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var83 = var_t == var_other;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "NULL, /* empty */";
var88 = (val*)(17l<<2|1);
var89 = (val*)(17l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var85); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateCompiler> */
var94 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_t->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_t, var_mclass_type, var_mclass_type, var92, 1); /* resolve_for on <var_t:nullable MType(MType)>*/
}
var_tv = var95;
{
{ /* Inline separate_compiler$SeparateCompiler$type_ids (self) on <self:SeparateCompiler> */
var98 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 149);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = ((short int(*)(val* self, val* p0))((((long)var96&3)?class_info[((long)var96&3)]:var96->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var96, var_tv); /* has_key on <var96:Map[MType, Int]>*/
}
if (var99){
if (unlikely(varonce100==NULL)) {
var101 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "type_";
var106 = (val*)(5l<<2|1);
var107 = (val*)(5l<<2|1);
var108 = (val*)((long)(0)<<2|3);
var109 = (val*)((long)(0)<<2|3);
var105 = core__flat___CString___to_s_unsafe(var104, var106, var107, var108, var109);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var101)->values[0]=var103;
} else {
var101 = varonce100;
varonce100 = NULL;
}
{
var110 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_tv); /* c_name on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var101)->values[1]=var110;
{
var111 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var111); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce112==NULL)) {
var113 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "&type_";
var118 = (val*)(6l<<2|1);
var119 = (val*)(6l<<2|1);
var120 = (val*)((long)(0)<<2|3);
var121 = (val*)((long)(0)<<2|3);
var117 = core__flat___CString___to_s_unsafe(var116, var118, var119, var120, var121);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var113)->values[0]=var115;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = ", /* ";
var126 = (val*)(5l<<2|1);
var127 = (val*)(5l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var113)->values[2]=var123;
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = ": ";
var134 = (val*)(2l<<2|1);
var135 = (val*)(2l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var113)->values[4]=var131;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = " */";
var142 = (val*)(3l<<2|1);
var143 = (val*)(3l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var113)->values[6]=var139;
} else {
var113 = varonce112;
varonce112 = NULL;
}
{
var146 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_tv); /* c_name on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var113)->values[1]=var146;
{
var147 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var113)->values[3]=var147;
{
var148 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_tv); /* to_s on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var113)->values[5]=var148;
{
var149 = ((val*(*)(val* self))(var113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var149); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce150==NULL)) {
var151 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "NULL, /* empty (";
var156 = (val*)(16l<<2|1);
var157 = (val*)(16l<<2|1);
var158 = (val*)((long)(0)<<2|3);
var159 = (val*)((long)(0)<<2|3);
var155 = core__flat___CString___to_s_unsafe(var154, var156, var157, var158, var159);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var151)->values[0]=var153;
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = ": ";
var164 = (val*)(2l<<2|1);
var165 = (val*)(2l<<2|1);
var166 = (val*)((long)(0)<<2|3);
var167 = (val*)((long)(0)<<2|3);
var163 = core__flat___CString___to_s_unsafe(var162, var164, var165, var166, var167);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var151)->values[2]=var161;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = " not a live type) */";
var172 = (val*)(20l<<2|1);
var173 = (val*)(20l<<2|1);
var174 = (val*)((long)(0)<<2|3);
var175 = (val*)((long)(0)<<2|3);
var171 = core__flat___CString___to_s_unsafe(var170, var172, var173, var174, var175);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var151)->values[4]=var169;
} else {
var151 = varonce150;
varonce150 = NULL;
}
{
var176 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var151)->values[1]=var176;
{
var177 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_tv); /* to_s on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var151)->values[3]=var177;
{
var178 = ((val*(*)(val* self))(var151->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var151); /* native_to_s on <var151:NativeArray[String]>*/
}
varonce150 = var151;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var178); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
}
{
((void(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_75); /* next on <var_75:IndexedIterator[nullable MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_75); /* finish on <var_75:IndexedIterator[nullable MType]>*/
}
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "}";
var183 = (val*)(1l<<2|1);
var184 = (val*)(1l<<2|1);
var185 = (val*)((long)(0)<<2|3);
var186 = (val*)((long)(0)<<2|3);
var182 = core__flat___CString___to_s_unsafe(var181, var183, var184, var185, var186);
var180 = var182;
varonce179 = var180;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var180); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "};";
var191 = (val*)(2l<<2|1);
var192 = (val*)(2l<<2|1);
var193 = (val*)((long)(0)<<2|3);
var194 = (val*)((long)(0)<<2|3);
var190 = core__flat___CString___to_s_unsafe(var189, var191, var192, var193, var194);
var188 = var190;
varonce187 = var188;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var188); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$compile_class_to_c for (self: SeparateCompiler, MClass) */
void nitc___nitc__SeparateCompiler___compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var9 /* : String */;
val* var_c_name /* var c_name: String */;
val* var10 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var11 /* : nullable RapidTypeAnalysis */;
val* var13 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
val* var20 /* : HashSet[MClass] */;
val* var22 /* : HashSet[MClass] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var_is_dead /* var is_dead: Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
val* var31 /* : MClassKind */;
val* var33 /* : MClassKind */;
val* var34 /* : Sys */;
val* var35 /* : MClassKind */;
short int var36 /* : Bool */;
val* var_other38 /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
val* var43 /* : MClassKind */;
val* var45 /* : MClassKind */;
val* var46 /* : Sys */;
val* var47 /* : MClassKind */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var_need_corpse /* var need_corpse: Bool */;
val* var53 /* : NativeArray[String] */;
static val* varonce;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Bool */;
val* var93 /* : nullable Bool */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var_100 /* var : Bool */;
val* var102 /* : NativeArray[String] */;
static val* varonce101;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Int */;
val* var109 /* : nullable Bool */;
val* var110 /* : nullable Bool */;
val* var111 /* : String */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Bool */;
val* var121 /* : nullable Bool */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Bool */;
val* var129 /* : nullable Bool */;
val* var130 /* : String */;
val* var132 /* : NativeArray[String] */;
static val* varonce131;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Bool */;
val* var140 /* : nullable Bool */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Bool */;
val* var148 /* : nullable Bool */;
val* var149 /* : String */;
val* var151 /* : NativeArray[String] */;
static val* varonce150;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : CString */;
val* var155 /* : String */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Int */;
val* var158 /* : nullable Bool */;
val* var159 /* : nullable Bool */;
long var160 /* : Int */;
val* var161 /* : String */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Bool */;
val* var170 /* : nullable Bool */;
val* var171 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var173 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var174 /* : nullable Object */;
val* var_vft /* var vft: nullable Array[nullable MPropDef] */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
long var_i /* var i: Int */;
long var180 /* : Int */;
long var182 /* : Int */;
long var_183 /* var : Int */;
short int var184 /* : Bool */;
short int var186 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var187 /* : Bool */;
val* var188 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
short int var194 /* : Bool */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : CString */;
val* var198 /* : String */;
val* var199 /* : nullable Int */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Bool */;
val* var202 /* : nullable Bool */;
short int var203 /* : Bool */;
int cltype204;
int idtype205;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
short int var_212 /* var : Bool */;
val* var213 /* : HashSet[MMethodDef] */;
val* var215 /* : HashSet[MMethodDef] */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
val* var219 /* : NativeArray[String] */;
static val* varonce218;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : CString */;
val* var223 /* : String */;
val* var224 /* : nullable Int */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Bool */;
val* var227 /* : nullable Bool */;
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
val* var252 /* : MModule */;
val* var254 /* : MModule */;
val* var255 /* : String */;
val* var256 /* : String */;
val* var257 /* : String */;
val* var258 /* : String */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
short int var264 /* : Bool */;
short int var_265 /* var : Bool */;
val* var266 /* : nullable MSignature */;
val* var268 /* : nullable MSignature */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
short int var_275 /* var : Bool */;
val* var276 /* : MProperty */;
val* var278 /* : MProperty */;
short int var279 /* : Bool */;
short int var281 /* : Bool */;
val* var283 /* : NativeArray[String] */;
static val* varonce282;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : CString */;
val* var287 /* : String */;
val* var288 /* : nullable Int */;
val* var289 /* : nullable Int */;
val* var290 /* : nullable Bool */;
val* var291 /* : nullable Bool */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : CString */;
val* var295 /* : String */;
val* var296 /* : nullable Int */;
val* var297 /* : nullable Int */;
val* var298 /* : nullable Bool */;
val* var299 /* : nullable Bool */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : CString */;
val* var303 /* : String */;
val* var304 /* : nullable Int */;
val* var305 /* : nullable Int */;
val* var306 /* : nullable Bool */;
val* var307 /* : nullable Bool */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : CString */;
val* var311 /* : String */;
val* var312 /* : nullable Int */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Bool */;
val* var315 /* : nullable Bool */;
val* var316 /* : MModule */;
val* var318 /* : MModule */;
val* var319 /* : String */;
val* var320 /* : String */;
val* var321 /* : String */;
val* var322 /* : String */;
val* var323 /* : SeparateRuntimeFunction */;
val* var_rf /* var rf: SeparateRuntimeFunction */;
val* var324 /* : String */;
val* var326 /* : NativeArray[String] */;
static val* varonce325;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : CString */;
val* var330 /* : String */;
val* var331 /* : nullable Int */;
val* var332 /* : nullable Int */;
val* var333 /* : nullable Bool */;
val* var334 /* : nullable Bool */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : CString */;
val* var338 /* : String */;
val* var339 /* : nullable Int */;
val* var340 /* : nullable Int */;
val* var341 /* : nullable Bool */;
val* var342 /* : nullable Bool */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : CString */;
val* var346 /* : String */;
val* var347 /* : nullable Int */;
val* var348 /* : nullable Int */;
val* var349 /* : nullable Bool */;
val* var350 /* : nullable Bool */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : CString */;
val* var354 /* : String */;
val* var355 /* : nullable Int */;
val* var356 /* : nullable Int */;
val* var357 /* : nullable Bool */;
val* var358 /* : nullable Bool */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : CString */;
val* var362 /* : String */;
val* var363 /* : nullable Int */;
val* var364 /* : nullable Int */;
val* var365 /* : nullable Bool */;
val* var366 /* : nullable Bool */;
val* var367 /* : String */;
val* var368 /* : MModule */;
val* var370 /* : MModule */;
val* var371 /* : String */;
val* var372 /* : String */;
val* var373 /* : String */;
val* var374 /* : String */;
long var375 /* : Int */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : CString */;
val* var379 /* : String */;
val* var380 /* : nullable Int */;
val* var381 /* : nullable Int */;
val* var382 /* : nullable Bool */;
val* var383 /* : nullable Bool */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : CString */;
val* var387 /* : String */;
val* var388 /* : nullable Int */;
val* var389 /* : nullable Int */;
val* var390 /* : nullable Bool */;
val* var391 /* : nullable Bool */;
short int var392 /* : Bool */;
short int var393 /* : Bool */;
short int var_394 /* var : Bool */;
val* var395 /* : MClass */;
val* var397 /* : MClass */;
val* var398 /* : String */;
val* var400 /* : String */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : CString */;
val* var404 /* : String */;
val* var405 /* : nullable Int */;
val* var406 /* : nullable Int */;
val* var407 /* : nullable Bool */;
val* var408 /* : nullable Bool */;
short int var409 /* : Bool */;
short int var410 /* : Bool */;
short int var412 /* : Bool */;
val* var413 /* : CodeWriter */;
val* var415 /* : CodeWriter */;
val* var417 /* : NativeArray[String] */;
static val* varonce416;
static val* varonce418;
val* var419 /* : String */;
char* var420 /* : CString */;
val* var421 /* : String */;
val* var422 /* : nullable Int */;
val* var423 /* : nullable Int */;
val* var424 /* : nullable Bool */;
val* var425 /* : nullable Bool */;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : CString */;
val* var429 /* : String */;
val* var430 /* : nullable Int */;
val* var431 /* : nullable Int */;
val* var432 /* : nullable Bool */;
val* var433 /* : nullable Bool */;
val* var434 /* : String */;
val* var435 /* : CodeWriter */;
val* var437 /* : CodeWriter */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : CString */;
val* var441 /* : String */;
val* var442 /* : nullable Int */;
val* var443 /* : nullable Int */;
val* var444 /* : nullable Bool */;
val* var445 /* : nullable Bool */;
val* var446 /* : CodeWriter */;
val* var448 /* : CodeWriter */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : CString */;
val* var452 /* : String */;
val* var453 /* : nullable Int */;
val* var454 /* : nullable Int */;
val* var455 /* : nullable Bool */;
val* var456 /* : nullable Bool */;
val* var457 /* : CodeWriter */;
val* var459 /* : CodeWriter */;
val* var461 /* : NativeArray[String] */;
static val* varonce460;
static val* varonce462;
val* var463 /* : String */;
char* var464 /* : CString */;
val* var465 /* : String */;
val* var466 /* : nullable Int */;
val* var467 /* : nullable Int */;
val* var468 /* : nullable Bool */;
val* var469 /* : nullable Bool */;
val* var470 /* : String */;
val* var471 /* : String */;
val* var472 /* : CodeWriter */;
val* var474 /* : CodeWriter */;
static val* varonce475;
val* var476 /* : String */;
char* var477 /* : CString */;
val* var478 /* : String */;
val* var479 /* : nullable Int */;
val* var480 /* : nullable Int */;
val* var481 /* : nullable Bool */;
val* var482 /* : nullable Bool */;
short int var483 /* : Bool */;
short int var_484 /* var : Bool */;
val* var485 /* : MClass */;
val* var487 /* : MClass */;
val* var488 /* : String */;
val* var490 /* : String */;
static val* varonce491;
val* var492 /* : String */;
char* var493 /* : CString */;
val* var494 /* : String */;
val* var495 /* : nullable Int */;
val* var496 /* : nullable Int */;
val* var497 /* : nullable Bool */;
val* var498 /* : nullable Bool */;
short int var499 /* : Bool */;
short int var501 /* : Bool */;
short int var502 /* : Bool */;
val* var504 /* : NativeArray[String] */;
static val* varonce503;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : CString */;
val* var508 /* : String */;
val* var509 /* : nullable Int */;
val* var510 /* : nullable Int */;
val* var511 /* : nullable Bool */;
val* var512 /* : nullable Bool */;
val* var513 /* : String */;
val* var515 /* : NativeArray[String] */;
static val* varonce514;
static val* varonce516;
val* var517 /* : String */;
char* var518 /* : CString */;
val* var519 /* : String */;
val* var520 /* : nullable Int */;
val* var521 /* : nullable Int */;
val* var522 /* : nullable Bool */;
val* var523 /* : nullable Bool */;
static val* varonce524;
val* var525 /* : String */;
char* var526 /* : CString */;
val* var527 /* : String */;
val* var528 /* : nullable Int */;
val* var529 /* : nullable Int */;
val* var530 /* : nullable Bool */;
val* var531 /* : nullable Bool */;
static val* varonce532;
val* var533 /* : String */;
char* var534 /* : CString */;
val* var535 /* : String */;
val* var536 /* : nullable Int */;
val* var537 /* : nullable Int */;
val* var538 /* : nullable Bool */;
val* var539 /* : nullable Bool */;
val* var540 /* : String */;
val* var541 /* : String */;
val* var543 /* : NativeArray[String] */;
static val* varonce542;
static val* varonce544;
val* var545 /* : String */;
char* var546 /* : CString */;
val* var547 /* : String */;
val* var548 /* : nullable Int */;
val* var549 /* : nullable Int */;
val* var550 /* : nullable Bool */;
val* var551 /* : nullable Bool */;
static val* varonce552;
val* var553 /* : String */;
char* var554 /* : CString */;
val* var555 /* : String */;
val* var556 /* : nullable Int */;
val* var557 /* : nullable Int */;
val* var558 /* : nullable Bool */;
val* var559 /* : nullable Bool */;
val* var560 /* : String */;
val* var561 /* : String */;
val* var563 /* : NativeArray[String] */;
static val* varonce562;
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : CString */;
val* var567 /* : String */;
val* var568 /* : nullable Int */;
val* var569 /* : nullable Int */;
val* var570 /* : nullable Bool */;
val* var571 /* : nullable Bool */;
static val* varonce572;
val* var573 /* : String */;
char* var574 /* : CString */;
val* var575 /* : String */;
val* var576 /* : nullable Int */;
val* var577 /* : nullable Int */;
val* var578 /* : nullable Bool */;
val* var579 /* : nullable Bool */;
static val* varonce580;
val* var581 /* : String */;
char* var582 /* : CString */;
val* var583 /* : String */;
val* var584 /* : nullable Int */;
val* var585 /* : nullable Int */;
val* var586 /* : nullable Bool */;
val* var587 /* : nullable Bool */;
val* var588 /* : String */;
val* var589 /* : String */;
val* var590 /* : String */;
val* var592 /* : NativeArray[String] */;
static val* varonce591;
static val* varonce593;
val* var594 /* : String */;
char* var595 /* : CString */;
val* var596 /* : String */;
val* var597 /* : nullable Int */;
val* var598 /* : nullable Int */;
val* var599 /* : nullable Bool */;
val* var600 /* : nullable Bool */;
static val* varonce601;
val* var602 /* : String */;
char* var603 /* : CString */;
val* var604 /* : String */;
val* var605 /* : nullable Int */;
val* var606 /* : nullable Int */;
val* var607 /* : nullable Bool */;
val* var608 /* : nullable Bool */;
val* var609 /* : String */;
val* var610 /* : String */;
val* var611 /* : String */;
val* var_alloc /* var alloc: String */;
val* var613 /* : NativeArray[String] */;
static val* varonce612;
static val* varonce614;
val* var615 /* : String */;
char* var616 /* : CString */;
val* var617 /* : String */;
val* var618 /* : nullable Int */;
val* var619 /* : nullable Int */;
val* var620 /* : nullable Bool */;
val* var621 /* : nullable Bool */;
static val* varonce622;
val* var623 /* : String */;
char* var624 /* : CString */;
val* var625 /* : String */;
val* var626 /* : nullable Int */;
val* var627 /* : nullable Int */;
val* var628 /* : nullable Bool */;
val* var629 /* : nullable Bool */;
static val* varonce630;
val* var631 /* : String */;
char* var632 /* : CString */;
val* var633 /* : String */;
val* var634 /* : nullable Int */;
val* var635 /* : nullable Int */;
val* var636 /* : nullable Bool */;
val* var637 /* : nullable Bool */;
val* var638 /* : String */;
val* var639 /* : AbstractCompiler */;
val* var641 /* : AbstractCompiler */;
val* var642 /* : Set[MType] */;
val* var644 /* : Set[MType] */;
val* var646 /* : NativeArray[String] */;
static val* varonce645;
static val* varonce647;
val* var648 /* : String */;
char* var649 /* : CString */;
val* var650 /* : String */;
val* var651 /* : nullable Int */;
val* var652 /* : nullable Int */;
val* var653 /* : nullable Bool */;
val* var654 /* : nullable Bool */;
val* var655 /* : String */;
val* var657 /* : NativeArray[String] */;
static val* varonce656;
static val* varonce658;
val* var659 /* : String */;
char* var660 /* : CString */;
val* var661 /* : String */;
val* var662 /* : nullable Int */;
val* var663 /* : nullable Int */;
val* var664 /* : nullable Bool */;
val* var665 /* : nullable Bool */;
static val* varonce666;
val* var667 /* : String */;
char* var668 /* : CString */;
val* var669 /* : String */;
val* var670 /* : nullable Int */;
val* var671 /* : nullable Int */;
val* var672 /* : nullable Bool */;
val* var673 /* : nullable Bool */;
val* var674 /* : String */;
val* var676 /* : NativeArray[String] */;
static val* varonce675;
static val* varonce677;
val* var678 /* : String */;
char* var679 /* : CString */;
val* var680 /* : String */;
val* var681 /* : nullable Int */;
val* var682 /* : nullable Int */;
val* var683 /* : nullable Bool */;
val* var684 /* : nullable Bool */;
val* var685 /* : String */;
val* var687 /* : NativeArray[String] */;
static val* varonce686;
static val* varonce688;
val* var689 /* : String */;
char* var690 /* : CString */;
val* var691 /* : String */;
val* var692 /* : nullable Int */;
val* var693 /* : nullable Int */;
val* var694 /* : nullable Bool */;
val* var695 /* : nullable Bool */;
static val* varonce696;
val* var697 /* : String */;
char* var698 /* : CString */;
val* var699 /* : String */;
val* var700 /* : nullable Int */;
val* var701 /* : nullable Int */;
val* var702 /* : nullable Bool */;
val* var703 /* : nullable Bool */;
val* var704 /* : String */;
static val* varonce705;
val* var706 /* : String */;
char* var707 /* : CString */;
val* var708 /* : String */;
val* var709 /* : nullable Int */;
val* var710 /* : nullable Int */;
val* var711 /* : nullable Bool */;
val* var712 /* : nullable Bool */;
static val* varonce713;
val* var714 /* : String */;
char* var715 /* : CString */;
val* var716 /* : String */;
val* var717 /* : nullable Int */;
val* var718 /* : nullable Int */;
val* var719 /* : nullable Bool */;
val* var720 /* : nullable Bool */;
static val* varonce721;
val* var722 /* : String */;
char* var723 /* : CString */;
val* var724 /* : String */;
val* var725 /* : nullable Int */;
val* var726 /* : nullable Int */;
val* var727 /* : nullable Bool */;
val* var728 /* : nullable Bool */;
val* var729 /* : MClass */;
val* var731 /* : MClass */;
val* var732 /* : String */;
val* var734 /* : String */;
static val* varonce735;
val* var736 /* : String */;
char* var737 /* : CString */;
val* var738 /* : String */;
val* var739 /* : nullable Int */;
val* var740 /* : nullable Int */;
val* var741 /* : nullable Bool */;
val* var742 /* : nullable Bool */;
short int var743 /* : Bool */;
short int var745 /* : Bool */;
short int var746 /* : Bool */;
val* var747 /* : AbstractCompilerVisitor */;
val* var749 /* : NativeArray[String] */;
static val* varonce748;
static val* varonce750;
val* var751 /* : String */;
char* var752 /* : CString */;
val* var753 /* : String */;
val* var754 /* : nullable Int */;
val* var755 /* : nullable Int */;
val* var756 /* : nullable Bool */;
val* var757 /* : nullable Bool */;
val* var758 /* : String */;
val* var760 /* : NativeArray[String] */;
static val* varonce759;
static val* varonce761;
val* var762 /* : String */;
char* var763 /* : CString */;
val* var764 /* : String */;
val* var765 /* : nullable Int */;
val* var766 /* : nullable Int */;
val* var767 /* : nullable Bool */;
val* var768 /* : nullable Bool */;
static val* varonce769;
val* var770 /* : String */;
char* var771 /* : CString */;
val* var772 /* : String */;
val* var773 /* : nullable Int */;
val* var774 /* : nullable Int */;
val* var775 /* : nullable Bool */;
val* var776 /* : nullable Bool */;
val* var777 /* : String */;
val* var778 /* : String */;
val* var780 /* : NativeArray[String] */;
static val* varonce779;
static val* varonce781;
val* var782 /* : String */;
char* var783 /* : CString */;
val* var784 /* : String */;
val* var785 /* : nullable Int */;
val* var786 /* : nullable Int */;
val* var787 /* : nullable Bool */;
val* var788 /* : nullable Bool */;
static val* varonce789;
val* var790 /* : String */;
char* var791 /* : CString */;
val* var792 /* : String */;
val* var793 /* : nullable Int */;
val* var794 /* : nullable Int */;
val* var795 /* : nullable Bool */;
val* var796 /* : nullable Bool */;
val* var797 /* : String */;
val* var798 /* : String */;
val* var800 /* : NativeArray[String] */;
static val* varonce799;
static val* varonce801;
val* var802 /* : String */;
char* var803 /* : CString */;
val* var804 /* : String */;
val* var805 /* : nullable Int */;
val* var806 /* : nullable Int */;
val* var807 /* : nullable Bool */;
val* var808 /* : nullable Bool */;
static val* varonce809;
val* var810 /* : String */;
char* var811 /* : CString */;
val* var812 /* : String */;
val* var813 /* : nullable Int */;
val* var814 /* : nullable Int */;
val* var815 /* : nullable Bool */;
val* var816 /* : nullable Bool */;
val* var817 /* : String */;
val* var818 /* : String */;
val* var820 /* : NativeArray[String] */;
static val* varonce819;
static val* varonce821;
val* var822 /* : String */;
char* var823 /* : CString */;
val* var824 /* : String */;
val* var825 /* : nullable Int */;
val* var826 /* : nullable Int */;
val* var827 /* : nullable Bool */;
val* var828 /* : nullable Bool */;
val* var829 /* : String */;
val* var830 /* : String */;
static val* varonce831;
val* var832 /* : String */;
char* var833 /* : CString */;
val* var834 /* : String */;
val* var835 /* : nullable Int */;
val* var836 /* : nullable Int */;
val* var837 /* : nullable Bool */;
val* var838 /* : nullable Bool */;
val* var839 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var842 /* : NativeArray[String] */;
static val* varonce841;
static val* varonce843;
val* var844 /* : String */;
char* var845 /* : CString */;
val* var846 /* : String */;
val* var847 /* : nullable Int */;
val* var848 /* : nullable Int */;
val* var849 /* : nullable Bool */;
val* var850 /* : nullable Bool */;
static val* varonce851;
val* var852 /* : String */;
char* var853 /* : CString */;
val* var854 /* : String */;
val* var855 /* : nullable Int */;
val* var856 /* : nullable Int */;
val* var857 /* : nullable Bool */;
val* var858 /* : nullable Bool */;
val* var859 /* : String */;
val* var860 /* : String */;
val* var861 /* : String */;
val* var862 /* : String */;
val* var864 /* : NativeArray[String] */;
static val* varonce863;
static val* varonce865;
val* var866 /* : String */;
char* var867 /* : CString */;
val* var868 /* : String */;
val* var869 /* : nullable Int */;
val* var870 /* : nullable Int */;
val* var871 /* : nullable Bool */;
val* var872 /* : nullable Bool */;
static val* varonce873;
val* var874 /* : String */;
char* var875 /* : CString */;
val* var876 /* : String */;
val* var877 /* : nullable Int */;
val* var878 /* : nullable Int */;
val* var879 /* : nullable Bool */;
val* var880 /* : nullable Bool */;
val* var881 /* : String */;
val* var882 /* : String */;
val* var884 /* : NativeArray[String] */;
static val* varonce883;
static val* varonce885;
val* var886 /* : String */;
char* var887 /* : CString */;
val* var888 /* : String */;
val* var889 /* : nullable Int */;
val* var890 /* : nullable Int */;
val* var891 /* : nullable Bool */;
val* var892 /* : nullable Bool */;
val* var893 /* : String */;
val* var894 /* : String */;
static val* varonce895;
val* var896 /* : String */;
char* var897 /* : CString */;
val* var898 /* : String */;
val* var899 /* : nullable Int */;
val* var900 /* : nullable Int */;
val* var901 /* : nullable Bool */;
val* var902 /* : nullable Bool */;
val* var904 /* : NativeArray[String] */;
static val* varonce903;
static val* varonce905;
val* var906 /* : String */;
char* var907 /* : CString */;
val* var908 /* : String */;
val* var909 /* : nullable Int */;
val* var910 /* : nullable Int */;
val* var911 /* : nullable Bool */;
val* var912 /* : nullable Bool */;
val* var913 /* : String */;
val* var915 /* : NativeArray[String] */;
static val* varonce914;
static val* varonce916;
val* var917 /* : String */;
char* var918 /* : CString */;
val* var919 /* : String */;
val* var920 /* : nullable Int */;
val* var921 /* : nullable Int */;
val* var922 /* : nullable Bool */;
val* var923 /* : nullable Bool */;
static val* varonce924;
val* var925 /* : String */;
char* var926 /* : CString */;
val* var927 /* : String */;
val* var928 /* : nullable Int */;
val* var929 /* : nullable Int */;
val* var930 /* : nullable Bool */;
val* var931 /* : nullable Bool */;
val* var932 /* : String */;
val* var933 /* : String */;
val* var935 /* : NativeArray[String] */;
static val* varonce934;
static val* varonce936;
val* var937 /* : String */;
char* var938 /* : CString */;
val* var939 /* : String */;
val* var940 /* : nullable Int */;
val* var941 /* : nullable Int */;
val* var942 /* : nullable Bool */;
val* var943 /* : nullable Bool */;
static val* varonce944;
val* var945 /* : String */;
char* var946 /* : CString */;
val* var947 /* : String */;
val* var948 /* : nullable Int */;
val* var949 /* : nullable Int */;
val* var950 /* : nullable Bool */;
val* var951 /* : nullable Bool */;
static val* varonce952;
val* var953 /* : String */;
char* var954 /* : CString */;
val* var955 /* : String */;
val* var956 /* : nullable Int */;
val* var957 /* : nullable Int */;
val* var958 /* : nullable Bool */;
val* var959 /* : nullable Bool */;
val* var960 /* : String */;
val* var961 /* : String */;
val* var962 /* : String */;
val* var964 /* : NativeArray[String] */;
static val* varonce963;
static val* varonce965;
val* var966 /* : String */;
char* var967 /* : CString */;
val* var968 /* : String */;
val* var969 /* : nullable Int */;
val* var970 /* : nullable Int */;
val* var971 /* : nullable Bool */;
val* var972 /* : nullable Bool */;
static val* varonce973;
val* var974 /* : String */;
char* var975 /* : CString */;
val* var976 /* : String */;
val* var977 /* : nullable Int */;
val* var978 /* : nullable Int */;
val* var979 /* : nullable Bool */;
val* var980 /* : nullable Bool */;
val* var981 /* : String */;
val* var982 /* : String */;
static val* varonce983;
val* var984 /* : String */;
char* var985 /* : CString */;
val* var986 /* : String */;
val* var987 /* : nullable Int */;
val* var988 /* : nullable Int */;
val* var989 /* : nullable Bool */;
val* var990 /* : nullable Bool */;
val* var991 /* : String */;
val* var993 /* : String */;
static val* varonce994;
val* var995 /* : String */;
char* var996 /* : CString */;
val* var997 /* : String */;
val* var998 /* : nullable Int */;
val* var999 /* : nullable Int */;
val* var1000 /* : nullable Bool */;
val* var1001 /* : nullable Bool */;
short int var1002 /* : Bool */;
val* var1003 /* : CodeWriter */;
val* var1005 /* : CodeWriter */;
val* var1007 /* : NativeArray[String] */;
static val* varonce1006;
static val* varonce1008;
val* var1009 /* : String */;
char* var1010 /* : CString */;
val* var1011 /* : String */;
val* var1012 /* : nullable Int */;
val* var1013 /* : nullable Int */;
val* var1014 /* : nullable Bool */;
val* var1015 /* : nullable Bool */;
static val* varonce1016;
val* var1017 /* : String */;
char* var1018 /* : CString */;
val* var1019 /* : String */;
val* var1020 /* : nullable Int */;
val* var1021 /* : nullable Int */;
val* var1022 /* : nullable Bool */;
val* var1023 /* : nullable Bool */;
val* var1024 /* : String */;
val* var1025 /* : CodeWriter */;
val* var1027 /* : CodeWriter */;
static val* varonce1028;
val* var1029 /* : String */;
char* var1030 /* : CString */;
val* var1031 /* : String */;
val* var1032 /* : nullable Int */;
val* var1033 /* : nullable Int */;
val* var1034 /* : nullable Bool */;
val* var1035 /* : nullable Bool */;
val* var1036 /* : CodeWriter */;
val* var1038 /* : CodeWriter */;
static val* varonce1039;
val* var1040 /* : String */;
char* var1041 /* : CString */;
val* var1042 /* : String */;
val* var1043 /* : nullable Int */;
val* var1044 /* : nullable Int */;
val* var1045 /* : nullable Bool */;
val* var1046 /* : nullable Bool */;
val* var1047 /* : CodeWriter */;
val* var1049 /* : CodeWriter */;
static val* varonce1050;
val* var1051 /* : String */;
char* var1052 /* : CString */;
val* var1053 /* : String */;
val* var1054 /* : nullable Int */;
val* var1055 /* : nullable Int */;
val* var1056 /* : nullable Bool */;
val* var1057 /* : nullable Bool */;
val* var1058 /* : CodeWriter */;
val* var1060 /* : CodeWriter */;
static val* varonce1061;
val* var1062 /* : String */;
char* var1063 /* : CString */;
val* var1064 /* : String */;
val* var1065 /* : nullable Int */;
val* var1066 /* : nullable Int */;
val* var1067 /* : nullable Bool */;
val* var1068 /* : nullable Bool */;
val* var1069 /* : CodeWriter */;
val* var1071 /* : CodeWriter */;
static val* varonce1072;
val* var1073 /* : String */;
char* var1074 /* : CString */;
val* var1075 /* : String */;
val* var1076 /* : nullable Int */;
val* var1077 /* : nullable Int */;
val* var1078 /* : nullable Bool */;
val* var1079 /* : nullable Bool */;
val* var1081 /* : NativeArray[String] */;
static val* varonce1080;
static val* varonce1082;
val* var1083 /* : String */;
char* var1084 /* : CString */;
val* var1085 /* : String */;
val* var1086 /* : nullable Int */;
val* var1087 /* : nullable Int */;
val* var1088 /* : nullable Bool */;
val* var1089 /* : nullable Bool */;
val* var1090 /* : String */;
val* var1092 /* : NativeArray[String] */;
static val* varonce1091;
static val* varonce1093;
val* var1094 /* : String */;
char* var1095 /* : CString */;
val* var1096 /* : String */;
val* var1097 /* : nullable Int */;
val* var1098 /* : nullable Int */;
val* var1099 /* : nullable Bool */;
val* var1100 /* : nullable Bool */;
static val* varonce1101;
val* var1102 /* : String */;
char* var1103 /* : CString */;
val* var1104 /* : String */;
val* var1105 /* : nullable Int */;
val* var1106 /* : nullable Int */;
val* var1107 /* : nullable Bool */;
val* var1108 /* : nullable Bool */;
val* var1109 /* : String */;
val* var1110 /* : String */;
val* var1112 /* : NativeArray[String] */;
static val* varonce1111;
static val* varonce1113;
val* var1114 /* : String */;
char* var1115 /* : CString */;
val* var1116 /* : String */;
val* var1117 /* : nullable Int */;
val* var1118 /* : nullable Int */;
val* var1119 /* : nullable Bool */;
val* var1120 /* : nullable Bool */;
static val* varonce1121;
val* var1122 /* : String */;
char* var1123 /* : CString */;
val* var1124 /* : String */;
val* var1125 /* : nullable Int */;
val* var1126 /* : nullable Int */;
val* var1127 /* : nullable Bool */;
val* var1128 /* : nullable Bool */;
val* var1129 /* : String */;
val* var1130 /* : String */;
val* var1132 /* : NativeArray[String] */;
static val* varonce1131;
static val* varonce1133;
val* var1134 /* : String */;
char* var1135 /* : CString */;
val* var1136 /* : String */;
val* var1137 /* : nullable Int */;
val* var1138 /* : nullable Int */;
val* var1139 /* : nullable Bool */;
val* var1140 /* : nullable Bool */;
static val* varonce1141;
val* var1142 /* : String */;
char* var1143 /* : CString */;
val* var1144 /* : String */;
val* var1145 /* : nullable Int */;
val* var1146 /* : nullable Int */;
val* var1147 /* : nullable Bool */;
val* var1148 /* : nullable Bool */;
val* var1149 /* : String */;
val* var1150 /* : String */;
static val* varonce1151;
val* var1152 /* : String */;
char* var1153 /* : CString */;
val* var1154 /* : String */;
val* var1155 /* : nullable Int */;
val* var1156 /* : nullable Int */;
val* var1157 /* : nullable Bool */;
val* var1158 /* : nullable Bool */;
val* var1159 /* : String */;
val* var_res1160 /* var res: String */;
val* var1162 /* : NativeArray[String] */;
static val* varonce1161;
static val* varonce1163;
val* var1164 /* : String */;
char* var1165 /* : CString */;
val* var1166 /* : String */;
val* var1167 /* : nullable Int */;
val* var1168 /* : nullable Int */;
val* var1169 /* : nullable Bool */;
val* var1170 /* : nullable Bool */;
static val* varonce1171;
val* var1172 /* : String */;
char* var1173 /* : CString */;
val* var1174 /* : String */;
val* var1175 /* : nullable Int */;
val* var1176 /* : nullable Int */;
val* var1177 /* : nullable Bool */;
val* var1178 /* : nullable Bool */;
static val* varonce1179;
val* var1180 /* : String */;
char* var1181 /* : CString */;
val* var1182 /* : String */;
val* var1183 /* : nullable Int */;
val* var1184 /* : nullable Int */;
val* var1185 /* : nullable Bool */;
val* var1186 /* : nullable Bool */;
val* var1187 /* : String */;
val* var1188 /* : Array[MType] */;
val* var1189 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
val* var1191 /* : NativeArray[String] */;
static val* varonce1190;
static val* varonce1192;
val* var1193 /* : String */;
char* var1194 /* : CString */;
val* var1195 /* : String */;
val* var1196 /* : nullable Int */;
val* var1197 /* : nullable Int */;
val* var1198 /* : nullable Bool */;
val* var1199 /* : nullable Bool */;
static val* varonce1200;
val* var1201 /* : String */;
char* var1202 /* : CString */;
val* var1203 /* : String */;
val* var1204 /* : nullable Int */;
val* var1205 /* : nullable Int */;
val* var1206 /* : nullable Bool */;
val* var1207 /* : nullable Bool */;
static val* varonce1208;
val* var1209 /* : String */;
char* var1210 /* : CString */;
val* var1211 /* : String */;
val* var1212 /* : nullable Int */;
val* var1213 /* : nullable Int */;
val* var1214 /* : nullable Bool */;
val* var1215 /* : nullable Bool */;
val* var1216 /* : String */;
val* var1217 /* : String */;
val* var1218 /* : String */;
val* var1219 /* : String */;
val* var_alloc1220 /* var alloc: String */;
val* var1222 /* : NativeArray[String] */;
static val* varonce1221;
static val* varonce1223;
val* var1224 /* : String */;
char* var1225 /* : CString */;
val* var1226 /* : String */;
val* var1227 /* : nullable Int */;
val* var1228 /* : nullable Int */;
val* var1229 /* : nullable Bool */;
val* var1230 /* : nullable Bool */;
static val* varonce1231;
val* var1232 /* : String */;
char* var1233 /* : CString */;
val* var1234 /* : String */;
val* var1235 /* : nullable Int */;
val* var1236 /* : nullable Int */;
val* var1237 /* : nullable Bool */;
val* var1238 /* : nullable Bool */;
val* var1239 /* : String */;
val* var1241 /* : NativeArray[String] */;
static val* varonce1240;
static val* varonce1242;
val* var1243 /* : String */;
char* var1244 /* : CString */;
val* var1245 /* : String */;
val* var1246 /* : nullable Int */;
val* var1247 /* : nullable Int */;
val* var1248 /* : nullable Bool */;
val* var1249 /* : nullable Bool */;
val* var1250 /* : String */;
static val* varonce1251;
val* var1252 /* : String */;
char* var1253 /* : CString */;
val* var1254 /* : String */;
val* var1255 /* : nullable Int */;
val* var1256 /* : nullable Int */;
val* var1257 /* : nullable Bool */;
val* var1258 /* : nullable Bool */;
val* var1260 /* : NativeArray[String] */;
static val* varonce1259;
static val* varonce1261;
val* var1262 /* : String */;
char* var1263 /* : CString */;
val* var1264 /* : String */;
val* var1265 /* : nullable Int */;
val* var1266 /* : nullable Int */;
val* var1267 /* : nullable Bool */;
val* var1268 /* : nullable Bool */;
val* var1269 /* : String */;
val* var1271 /* : NativeArray[String] */;
static val* varonce1270;
static val* varonce1272;
val* var1273 /* : String */;
char* var1274 /* : CString */;
val* var1275 /* : String */;
val* var1276 /* : nullable Int */;
val* var1277 /* : nullable Int */;
val* var1278 /* : nullable Bool */;
val* var1279 /* : nullable Bool */;
static val* varonce1280;
val* var1281 /* : String */;
char* var1282 /* : CString */;
val* var1283 /* : String */;
val* var1284 /* : nullable Int */;
val* var1285 /* : nullable Int */;
val* var1286 /* : nullable Bool */;
val* var1287 /* : nullable Bool */;
val* var1288 /* : String */;
val* var1290 /* : NativeArray[String] */;
static val* varonce1289;
static val* varonce1291;
val* var1292 /* : String */;
char* var1293 /* : CString */;
val* var1294 /* : String */;
val* var1295 /* : nullable Int */;
val* var1296 /* : nullable Int */;
val* var1297 /* : nullable Bool */;
val* var1298 /* : nullable Bool */;
val* var1299 /* : String */;
val* var1301 /* : NativeArray[String] */;
static val* varonce1300;
static val* varonce1302;
val* var1303 /* : String */;
char* var1304 /* : CString */;
val* var1305 /* : String */;
val* var1306 /* : nullable Int */;
val* var1307 /* : nullable Int */;
val* var1308 /* : nullable Bool */;
val* var1309 /* : nullable Bool */;
static val* varonce1310;
val* var1311 /* : String */;
char* var1312 /* : CString */;
val* var1313 /* : String */;
val* var1314 /* : nullable Int */;
val* var1315 /* : nullable Int */;
val* var1316 /* : nullable Bool */;
val* var1317 /* : nullable Bool */;
val* var1318 /* : String */;
static val* varonce1319;
val* var1320 /* : String */;
char* var1321 /* : CString */;
val* var1322 /* : String */;
val* var1323 /* : nullable Int */;
val* var1324 /* : nullable Int */;
val* var1325 /* : nullable Bool */;
val* var1326 /* : nullable Bool */;
short int var1327 /* : Bool */;
val* var1328 /* : MClass */;
val* var1330 /* : MClass */;
val* var1331 /* : MClassKind */;
val* var1333 /* : MClassKind */;
val* var1334 /* : Sys */;
val* var1335 /* : MClassKind */;
short int var1336 /* : Bool */;
short int var1338 /* : Bool */;
short int var1340 /* : Bool */;
short int var_1341 /* var : Bool */;
val* var1342 /* : MClass */;
val* var1344 /* : MClass */;
val* var1345 /* : String */;
val* var1347 /* : String */;
static val* varonce1348;
val* var1349 /* : String */;
char* var1350 /* : CString */;
val* var1351 /* : String */;
val* var1352 /* : nullable Int */;
val* var1353 /* : nullable Int */;
val* var1354 /* : nullable Bool */;
val* var1355 /* : nullable Bool */;
short int var1356 /* : Bool */;
short int var1358 /* : Bool */;
short int var1359 /* : Bool */;
val* var1360 /* : MModule */;
val* var1362 /* : MModule */;
val* var1363 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var1365 /* : NativeArray[String] */;
static val* varonce1364;
static val* varonce1366;
val* var1367 /* : String */;
char* var1368 /* : CString */;
val* var1369 /* : String */;
val* var1370 /* : nullable Int */;
val* var1371 /* : nullable Int */;
val* var1372 /* : nullable Bool */;
val* var1373 /* : nullable Bool */;
val* var1374 /* : String */;
val* var1376 /* : NativeArray[String] */;
static val* varonce1375;
static val* varonce1377;
val* var1378 /* : String */;
char* var1379 /* : CString */;
val* var1380 /* : String */;
val* var1381 /* : nullable Int */;
val* var1382 /* : nullable Int */;
val* var1383 /* : nullable Bool */;
val* var1384 /* : nullable Bool */;
static val* varonce1385;
val* var1386 /* : String */;
char* var1387 /* : CString */;
val* var1388 /* : String */;
val* var1389 /* : nullable Int */;
val* var1390 /* : nullable Int */;
val* var1391 /* : nullable Bool */;
val* var1392 /* : nullable Bool */;
val* var1393 /* : String */;
val* var1394 /* : String */;
val* var1396 /* : NativeArray[String] */;
static val* varonce1395;
static val* varonce1397;
val* var1398 /* : String */;
char* var1399 /* : CString */;
val* var1400 /* : String */;
val* var1401 /* : nullable Int */;
val* var1402 /* : nullable Int */;
val* var1403 /* : nullable Bool */;
val* var1404 /* : nullable Bool */;
static val* varonce1405;
val* var1406 /* : String */;
char* var1407 /* : CString */;
val* var1408 /* : String */;
val* var1409 /* : nullable Int */;
val* var1410 /* : nullable Int */;
val* var1411 /* : nullable Bool */;
val* var1412 /* : nullable Bool */;
val* var1413 /* : String */;
val* var1414 /* : String */;
val* var1416 /* : NativeArray[String] */;
static val* varonce1415;
static val* varonce1417;
val* var1418 /* : String */;
char* var1419 /* : CString */;
val* var1420 /* : String */;
val* var1421 /* : nullable Int */;
val* var1422 /* : nullable Int */;
val* var1423 /* : nullable Bool */;
val* var1424 /* : nullable Bool */;
static val* varonce1425;
val* var1426 /* : String */;
char* var1427 /* : CString */;
val* var1428 /* : String */;
val* var1429 /* : nullable Int */;
val* var1430 /* : nullable Int */;
val* var1431 /* : nullable Bool */;
val* var1432 /* : nullable Bool */;
val* var1433 /* : String */;
val* var1434 /* : String */;
val* var1436 /* : NativeArray[String] */;
static val* varonce1435;
static val* varonce1437;
val* var1438 /* : String */;
char* var1439 /* : CString */;
val* var1440 /* : String */;
val* var1441 /* : nullable Int */;
val* var1442 /* : nullable Int */;
val* var1443 /* : nullable Bool */;
val* var1444 /* : nullable Bool */;
val* var1445 /* : String */;
val* var1446 /* : String */;
static val* varonce1447;
val* var1448 /* : String */;
char* var1449 /* : CString */;
val* var1450 /* : String */;
val* var1451 /* : nullable Int */;
val* var1452 /* : nullable Int */;
val* var1453 /* : nullable Bool */;
val* var1454 /* : nullable Bool */;
val* var1455 /* : RuntimeVariable */;
val* var_res1456 /* var res: RuntimeVariable */;
val* var1459 /* : NativeArray[String] */;
static val* varonce1458;
static val* varonce1460;
val* var1461 /* : String */;
char* var1462 /* : CString */;
val* var1463 /* : String */;
val* var1464 /* : nullable Int */;
val* var1465 /* : nullable Int */;
val* var1466 /* : nullable Bool */;
val* var1467 /* : nullable Bool */;
static val* varonce1468;
val* var1469 /* : String */;
char* var1470 /* : CString */;
val* var1471 /* : String */;
val* var1472 /* : nullable Int */;
val* var1473 /* : nullable Int */;
val* var1474 /* : nullable Bool */;
val* var1475 /* : nullable Bool */;
val* var1476 /* : String */;
val* var1477 /* : String */;
val* var1478 /* : String */;
val* var1479 /* : String */;
val* var_alloc1480 /* var alloc: String */;
val* var1482 /* : NativeArray[String] */;
static val* varonce1481;
static val* varonce1483;
val* var1484 /* : String */;
char* var1485 /* : CString */;
val* var1486 /* : String */;
val* var1487 /* : nullable Int */;
val* var1488 /* : nullable Int */;
val* var1489 /* : nullable Bool */;
val* var1490 /* : nullable Bool */;
static val* varonce1491;
val* var1492 /* : String */;
char* var1493 /* : CString */;
val* var1494 /* : String */;
val* var1495 /* : nullable Int */;
val* var1496 /* : nullable Int */;
val* var1497 /* : nullable Bool */;
val* var1498 /* : nullable Bool */;
val* var1499 /* : String */;
val* var1500 /* : String */;
val* var1502 /* : NativeArray[String] */;
static val* varonce1501;
static val* varonce1503;
val* var1504 /* : String */;
char* var1505 /* : CString */;
val* var1506 /* : String */;
val* var1507 /* : nullable Int */;
val* var1508 /* : nullable Int */;
val* var1509 /* : nullable Bool */;
val* var1510 /* : nullable Bool */;
val* var1511 /* : String */;
val* var1512 /* : String */;
static val* varonce1513;
val* var1514 /* : String */;
char* var1515 /* : CString */;
val* var1516 /* : String */;
val* var1517 /* : nullable Int */;
val* var1518 /* : nullable Int */;
val* var1519 /* : nullable Bool */;
val* var1520 /* : nullable Bool */;
val* var1522 /* : NativeArray[String] */;
static val* varonce1521;
static val* varonce1523;
val* var1524 /* : String */;
char* var1525 /* : CString */;
val* var1526 /* : String */;
val* var1527 /* : nullable Int */;
val* var1528 /* : nullable Int */;
val* var1529 /* : nullable Bool */;
val* var1530 /* : nullable Bool */;
val* var1531 /* : String */;
val* var1533 /* : NativeArray[String] */;
static val* varonce1532;
static val* varonce1534;
val* var1535 /* : String */;
char* var1536 /* : CString */;
val* var1537 /* : String */;
val* var1538 /* : nullable Int */;
val* var1539 /* : nullable Int */;
val* var1540 /* : nullable Bool */;
val* var1541 /* : nullable Bool */;
static val* varonce1542;
val* var1543 /* : String */;
char* var1544 /* : CString */;
val* var1545 /* : String */;
val* var1546 /* : nullable Int */;
val* var1547 /* : nullable Int */;
val* var1548 /* : nullable Bool */;
val* var1549 /* : nullable Bool */;
val* var1550 /* : String */;
val* var1551 /* : String */;
val* var1553 /* : NativeArray[String] */;
static val* varonce1552;
static val* varonce1554;
val* var1555 /* : String */;
char* var1556 /* : CString */;
val* var1557 /* : String */;
val* var1558 /* : nullable Int */;
val* var1559 /* : nullable Int */;
val* var1560 /* : nullable Bool */;
val* var1561 /* : nullable Bool */;
static val* varonce1562;
val* var1563 /* : String */;
char* var1564 /* : CString */;
val* var1565 /* : String */;
val* var1566 /* : nullable Int */;
val* var1567 /* : nullable Int */;
val* var1568 /* : nullable Bool */;
val* var1569 /* : nullable Bool */;
static val* varonce1570;
val* var1571 /* : String */;
char* var1572 /* : CString */;
val* var1573 /* : String */;
val* var1574 /* : nullable Int */;
val* var1575 /* : nullable Int */;
val* var1576 /* : nullable Bool */;
val* var1577 /* : nullable Bool */;
val* var1578 /* : String */;
val* var1579 /* : String */;
val* var1580 /* : String */;
val* var1582 /* : NativeArray[String] */;
static val* varonce1581;
static val* varonce1583;
val* var1584 /* : String */;
char* var1585 /* : CString */;
val* var1586 /* : String */;
val* var1587 /* : nullable Int */;
val* var1588 /* : nullable Int */;
val* var1589 /* : nullable Bool */;
val* var1590 /* : nullable Bool */;
static val* varonce1591;
val* var1592 /* : String */;
char* var1593 /* : CString */;
val* var1594 /* : String */;
val* var1595 /* : nullable Int */;
val* var1596 /* : nullable Int */;
val* var1597 /* : nullable Bool */;
val* var1598 /* : nullable Bool */;
val* var1599 /* : String */;
val* var1600 /* : String */;
static val* varonce1601;
val* var1602 /* : String */;
char* var1603 /* : CString */;
val* var1604 /* : String */;
val* var1605 /* : nullable Int */;
val* var1606 /* : nullable Int */;
val* var1607 /* : nullable Bool */;
val* var1608 /* : nullable Bool */;
val* var1610 /* : NativeArray[String] */;
static val* varonce1609;
static val* varonce1611;
val* var1612 /* : String */;
char* var1613 /* : CString */;
val* var1614 /* : String */;
val* var1615 /* : nullable Int */;
val* var1616 /* : nullable Int */;
val* var1617 /* : nullable Bool */;
val* var1618 /* : nullable Bool */;
val* var1619 /* : String */;
val* var1621 /* : NativeArray[String] */;
static val* varonce1620;
static val* varonce1622;
val* var1623 /* : String */;
char* var1624 /* : CString */;
val* var1625 /* : String */;
val* var1626 /* : nullable Int */;
val* var1627 /* : nullable Int */;
val* var1628 /* : nullable Bool */;
val* var1629 /* : nullable Bool */;
static val* varonce1630;
val* var1631 /* : String */;
char* var1632 /* : CString */;
val* var1633 /* : String */;
val* var1634 /* : nullable Int */;
val* var1635 /* : nullable Int */;
val* var1636 /* : nullable Bool */;
val* var1637 /* : nullable Bool */;
val* var1638 /* : String */;
val* var1639 /* : String */;
val* var1641 /* : NativeArray[String] */;
static val* varonce1640;
static val* varonce1642;
val* var1643 /* : String */;
char* var1644 /* : CString */;
val* var1645 /* : String */;
val* var1646 /* : nullable Int */;
val* var1647 /* : nullable Int */;
val* var1648 /* : nullable Bool */;
val* var1649 /* : nullable Bool */;
static val* varonce1650;
val* var1651 /* : String */;
char* var1652 /* : CString */;
val* var1653 /* : String */;
val* var1654 /* : nullable Int */;
val* var1655 /* : nullable Int */;
val* var1656 /* : nullable Bool */;
val* var1657 /* : nullable Bool */;
val* var1658 /* : String */;
val* var1659 /* : String */;
val* var1661 /* : NativeArray[String] */;
static val* varonce1660;
static val* varonce1662;
val* var1663 /* : String */;
char* var1664 /* : CString */;
val* var1665 /* : String */;
val* var1666 /* : nullable Int */;
val* var1667 /* : nullable Int */;
val* var1668 /* : nullable Bool */;
val* var1669 /* : nullable Bool */;
static val* varonce1670;
val* var1671 /* : String */;
char* var1672 /* : CString */;
val* var1673 /* : String */;
val* var1674 /* : nullable Int */;
val* var1675 /* : nullable Int */;
val* var1676 /* : nullable Bool */;
val* var1677 /* : nullable Bool */;
val* var1678 /* : String */;
val* var1679 /* : String */;
val* var1681 /* : NativeArray[String] */;
static val* varonce1680;
static val* varonce1682;
val* var1683 /* : String */;
char* var1684 /* : CString */;
val* var1685 /* : String */;
val* var1686 /* : nullable Int */;
val* var1687 /* : nullable Int */;
val* var1688 /* : nullable Bool */;
val* var1689 /* : nullable Bool */;
val* var1690 /* : String */;
val* var1691 /* : String */;
static val* varonce1692;
val* var1693 /* : String */;
char* var1694 /* : CString */;
val* var1695 /* : String */;
val* var1696 /* : nullable Int */;
val* var1697 /* : nullable Int */;
val* var1698 /* : nullable Bool */;
val* var1699 /* : nullable Bool */;
val* var1700 /* : RuntimeVariable */;
val* var_res1701 /* var res: RuntimeVariable */;
val* var1703 /* : Map[MClass, Array[nullable MProperty]] */;
val* var1705 /* : Map[MClass, Array[nullable MProperty]] */;
val* var1706 /* : nullable Object */;
val* var_attrs /* var attrs: nullable Array[nullable MProperty] */;
short int var1707 /* : Bool */;
short int var1708 /* : Bool */;
static val* varonce1709;
val* var1710 /* : String */;
char* var1711 /* : CString */;
val* var1712 /* : String */;
val* var1713 /* : nullable Int */;
val* var1714 /* : nullable Int */;
val* var1715 /* : nullable Bool */;
val* var1716 /* : nullable Bool */;
val* var1717 /* : String */;
val* var1718 /* : String */;
val* var_alloc1719 /* var alloc: String */;
val* var1721 /* : NativeArray[String] */;
static val* varonce1720;
static val* varonce1722;
val* var1723 /* : String */;
char* var1724 /* : CString */;
val* var1725 /* : String */;
val* var1726 /* : nullable Int */;
val* var1727 /* : nullable Int */;
val* var1728 /* : nullable Bool */;
val* var1729 /* : nullable Bool */;
static val* varonce1730;
val* var1731 /* : String */;
char* var1732 /* : CString */;
val* var1733 /* : String */;
val* var1734 /* : nullable Int */;
val* var1735 /* : nullable Int */;
val* var1736 /* : nullable Bool */;
val* var1737 /* : nullable Bool */;
val* var1738 /* : String */;
val* var1739 /* : String */;
val* var1741 /* : NativeArray[String] */;
static val* varonce1740;
static val* varonce1742;
val* var1743 /* : String */;
char* var1744 /* : CString */;
val* var1745 /* : String */;
val* var1746 /* : nullable Int */;
val* var1747 /* : nullable Int */;
val* var1748 /* : nullable Bool */;
val* var1749 /* : nullable Bool */;
static val* varonce1750;
val* var1751 /* : String */;
char* var1752 /* : CString */;
val* var1753 /* : String */;
val* var1754 /* : nullable Int */;
val* var1755 /* : nullable Int */;
val* var1756 /* : nullable Bool */;
val* var1757 /* : nullable Bool */;
long var1758 /* : Int */;
long var1760 /* : Int */;
val* var1761 /* : String */;
val* var1762 /* : String */;
val* var1763 /* : String */;
val* var1764 /* : String */;
val* var_alloc1765 /* var alloc: String */;
val* var1767 /* : NativeArray[String] */;
static val* varonce1766;
static val* varonce1768;
val* var1769 /* : String */;
char* var1770 /* : CString */;
val* var1771 /* : String */;
val* var1772 /* : nullable Int */;
val* var1773 /* : nullable Int */;
val* var1774 /* : nullable Bool */;
val* var1775 /* : nullable Bool */;
static val* varonce1776;
val* var1777 /* : String */;
char* var1778 /* : CString */;
val* var1779 /* : String */;
val* var1780 /* : nullable Int */;
val* var1781 /* : nullable Int */;
val* var1782 /* : nullable Bool */;
val* var1783 /* : nullable Bool */;
val* var1784 /* : String */;
val* var1785 /* : String */;
val* var1787 /* : NativeArray[String] */;
static val* varonce1786;
static val* varonce1788;
val* var1789 /* : String */;
char* var1790 /* : CString */;
val* var1791 /* : String */;
val* var1792 /* : nullable Int */;
val* var1793 /* : nullable Int */;
val* var1794 /* : nullable Bool */;
val* var1795 /* : nullable Bool */;
val* var1796 /* : String */;
val* var1797 /* : String */;
static val* varonce1798;
val* var1799 /* : String */;
char* var1800 /* : CString */;
val* var1801 /* : String */;
val* var1802 /* : nullable Int */;
val* var1803 /* : nullable Int */;
val* var1804 /* : nullable Bool */;
val* var1805 /* : nullable Bool */;
val* var1807 /* : NativeArray[String] */;
static val* varonce1806;
static val* varonce1808;
val* var1809 /* : String */;
char* var1810 /* : CString */;
val* var1811 /* : String */;
val* var1812 /* : nullable Int */;
val* var1813 /* : nullable Int */;
val* var1814 /* : nullable Bool */;
val* var1815 /* : nullable Bool */;
val* var1816 /* : String */;
val* var1818 /* : NativeArray[String] */;
static val* varonce1817;
static val* varonce1819;
val* var1820 /* : String */;
char* var1821 /* : CString */;
val* var1822 /* : String */;
val* var1823 /* : nullable Int */;
val* var1824 /* : nullable Int */;
val* var1825 /* : nullable Bool */;
val* var1826 /* : nullable Bool */;
static val* varonce1827;
val* var1828 /* : String */;
char* var1829 /* : CString */;
val* var1830 /* : String */;
val* var1831 /* : nullable Int */;
val* var1832 /* : nullable Int */;
val* var1833 /* : nullable Bool */;
val* var1834 /* : nullable Bool */;
val* var1835 /* : String */;
val* var1836 /* : String */;
short int var1837 /* : Bool */;
short int var1838 /* : Bool */;
short int var1840 /* : Bool */;
short int var1841 /* : Bool */;
val* var1843 /* : NativeArray[String] */;
static val* varonce1842;
static val* varonce1844;
val* var1845 /* : String */;
char* var1846 /* : CString */;
val* var1847 /* : String */;
val* var1848 /* : nullable Int */;
val* var1849 /* : nullable Int */;
val* var1850 /* : nullable Bool */;
val* var1851 /* : nullable Bool */;
static val* varonce1852;
val* var1853 /* : String */;
char* var1854 /* : CString */;
val* var1855 /* : String */;
val* var1856 /* : nullable Int */;
val* var1857 /* : nullable Int */;
val* var1858 /* : nullable Bool */;
val* var1859 /* : nullable Bool */;
val* var1860 /* : String */;
val* var1861 /* : String */;
static val* varonce1862;
val* var1863 /* : String */;
char* var1864 /* : CString */;
val* var1865 /* : String */;
val* var1866 /* : nullable Int */;
val* var1867 /* : nullable Int */;
val* var1868 /* : nullable Bool */;
val* var1869 /* : nullable Bool */;
var_mclass = p0;
{
{ /* Inline model_base$MEntity$is_broken (var_mclass) on <var_mclass:MClass> */
var2 = var_mclass->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mclass:MClass> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$intro (var_mclass) on <var_mclass:MClass> */
var5 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mtype = var6;
{
var9 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
var_c_name = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var10;
{
{ /* Inline separate_compiler$SeparateCompiler$runtime_type_analysis (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_rta = var11;
if (var_rta == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var_ = var15;
if (var15){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var22 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = core___core__HashSet___core__abstract_collection__Collection__has(var20, var_mclass);
}
var24 = !var23;
var14 = var24;
} else {
var14 = var_;
}
var_is_dead = var14;
var_28 = var_is_dead;
if (var_is_dead){
{
var29 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var27 = var29;
} else {
var27 = var_28;
}
var_30 = var27;
if (var27){
var26 = var_30;
} else {
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:MClass> */
var33 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = glob_sys;
{
var35 = nitc__model___core__Sys___extern_kind(var34);
}
{
{ /* Inline kernel$Object$== (var31,var35) on <var31:MClassKind> */
var_other38 = var35;
{
{ /* Inline kernel$Object$is_same_instance (var31,var_other38) on <var31:MClassKind> */
var41 = var31 == var_other38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var26 = var36;
}
var_42 = var26;
if (var26){
var25 = var_42;
} else {
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:MClass> */
var45 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var46 = glob_sys;
{
var47 = nitc__model___core__Sys___enum_kind(var46);
}
{
{ /* Inline kernel$Object$== (var43,var47) on <var43:MClassKind> */
var_other38 = var47;
{
{ /* Inline kernel$Object$is_same_instance (var43,var_other38) on <var43:MClassKind> */
var52 = var43 == var_other38;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var25 = var48;
}
var_need_corpse = var25;
if (unlikely(varonce==NULL)) {
var53 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "/* runtime class ";
var58 = (val*)(17l<<2|1);
var59 = (val*)(17l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[0]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = ": ";
var66 = (val*)(2l<<2|1);
var67 = (val*)(2l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var53)->values[2]=var63;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = " (dead=";
var74 = (val*)(7l<<2|1);
var75 = (val*)(7l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var53)->values[4]=var71;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "; need_corpse=";
var82 = (val*)(14l<<2|1);
var83 = (val*)(14l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var53)->values[6]=var79;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ")*/";
var90 = (val*)(3l<<2|1);
var91 = (val*)(3l<<2|1);
var92 = (val*)((long)(0)<<2|3);
var93 = (val*)((long)(0)<<2|3);
var89 = core__flat___CString___to_s_unsafe(var88, var90, var91, var92, var93);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var53)->values[8]=var87;
} else {
var53 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var53)->values[1]=var_c_name;
{
var94 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
((struct instance_core__NativeArray*)var53)->values[3]=var94;
var95 = core__abstract_text___Bool___Object__to_s(var_is_dead);
((struct instance_core__NativeArray*)var53)->values[5]=var95;
var96 = core__abstract_text___Bool___Object__to_s(var_need_corpse);
((struct instance_core__NativeArray*)var53)->values[7]=var96;
{
var97 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce = var53;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var97); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
var99 = !var_is_dead;
var_100 = var99;
if (var99){
var98 = var_100;
} else {
var98 = var_need_corpse;
}
if (var98){
if (unlikely(varonce101==NULL)) {
var102 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "class_";
var107 = (val*)(6l<<2|1);
var108 = (val*)(6l<<2|1);
var109 = (val*)((long)(0)<<2|3);
var110 = (val*)((long)(0)<<2|3);
var106 = core__flat___CString___to_s_unsafe(var105, var107, var108, var109, var110);
var104 = var106;
varonce103 = var104;
}
((struct instance_core__NativeArray*)var102)->values[0]=var104;
} else {
var102 = varonce101;
varonce101 = NULL;
}
((struct instance_core__NativeArray*)var102)->values[1]=var_c_name;
{
var111 = ((val*(*)(val* self))(var102->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var102); /* native_to_s on <var102:NativeArray[String]>*/
}
varonce101 = var102;
if (unlikely(varonce112==NULL)) {
var113 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "extern const struct class class_";
var118 = (val*)(32l<<2|1);
var119 = (val*)(32l<<2|1);
var120 = (val*)((long)(0)<<2|3);
var121 = (val*)((long)(0)<<2|3);
var117 = core__flat___CString___to_s_unsafe(var116, var118, var119, var120, var121);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var113)->values[0]=var115;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = ";";
var126 = (val*)(1l<<2|1);
var127 = (val*)(1l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var113)->values[2]=var123;
} else {
var113 = varonce112;
varonce112 = NULL;
}
((struct instance_core__NativeArray*)var113)->values[1]=var_c_name;
{
var130 = ((val*(*)(val* self))(var113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var111, var130); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce131==NULL)) {
var132 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "const struct class class_";
var137 = (val*)(25l<<2|1);
var138 = (val*)(25l<<2|1);
var139 = (val*)((long)(0)<<2|3);
var140 = (val*)((long)(0)<<2|3);
var136 = core__flat___CString___to_s_unsafe(var135, var137, var138, var139, var140);
var134 = var136;
varonce133 = var134;
}
((struct instance_core__NativeArray*)var132)->values[0]=var134;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = " = {";
var145 = (val*)(4l<<2|1);
var146 = (val*)(4l<<2|1);
var147 = (val*)((long)(0)<<2|3);
var148 = (val*)((long)(0)<<2|3);
var144 = core__flat___CString___to_s_unsafe(var143, var145, var146, var147, var148);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var132)->values[2]=var142;
} else {
var132 = varonce131;
varonce131 = NULL;
}
((struct instance_core__NativeArray*)var132)->values[1]=var_c_name;
{
var149 = ((val*(*)(val* self))(var132->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var132); /* native_to_s on <var132:NativeArray[String]>*/
}
varonce131 = var132;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var149); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce150==NULL)) {
var151 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = ", /* box_kind */";
var156 = (val*)(16l<<2|1);
var157 = (val*)(16l<<2|1);
var158 = (val*)((long)(0)<<2|3);
var159 = (val*)((long)(0)<<2|3);
var155 = core__flat___CString___to_s_unsafe(var154, var156, var157, var158, var159);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var151)->values[1]=var153;
} else {
var151 = varonce150;
varonce150 = NULL;
}
{
var160 = nitc___nitc__SeparateCompiler___box_kind_of(self, var_mclass);
}
var161 = core__flat___Int___core__abstract_text__Object__to_s(var160);
((struct instance_core__NativeArray*)var151)->values[0]=var161;
{
var162 = ((val*(*)(val* self))(var151->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var151); /* native_to_s on <var151:NativeArray[String]>*/
}
varonce150 = var151;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var162); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "{";
var167 = (val*)(1l<<2|1);
var168 = (val*)(1l<<2|1);
var169 = (val*)((long)(0)<<2|3);
var170 = (val*)((long)(0)<<2|3);
var166 = core__flat___CString___to_s_unsafe(var165, var167, var168, var169, var170);
var164 = var166;
varonce163 = var164;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var164); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler$SeparateCompiler$method_tables (self) on <self:SeparateCompiler> */
var173 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var173 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1073);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
var174 = ((val*(*)(val* self, val* p0))((((long)var171&3)?class_info[((long)var171&3)]:var171->class)->vft[COLOR_core__abstract_collection__MapRead__get_or_null]))(var171, var_mclass); /* get_or_null on <var171:Map[MClass, Array[nullable MPropDef]]>*/
}
var_vft = var174;
if (var_vft == NULL) {
var175 = 0; /* is null */
} else {
var175 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_vft,((val*)NULL)) on <var_vft:nullable Array[nullable MPropDef]> */
var_other = ((val*)NULL);
{
var178 = ((short int(*)(val* self, val* p0))(var_vft->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_vft, var_other); /* == on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])>*/
}
var179 = !var178;
var176 = var179;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
var175 = var176;
}
if (var175){
var_i = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_vft) on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var182 = var_vft->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var180 = var182;
RET_LABEL181:(void)0;
}
}
var_183 = var180;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_183) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_183:Int> isa OTHER */
/* <var_183:Int> isa OTHER */
var186 = 1; /* easy <var_183:Int> isa OTHER*/
if (unlikely(!var186)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var187 = var_i < var_183;
var184 = var187;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
if (var184){
} else {
goto BREAK_label;
}
{
var188 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_vft, var_i);
}
var_mpropdef = var188;
if (var_mpropdef == NULL) {
var189 = 1; /* is null */
} else {
var189 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MPropDef> */
var_other38 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other38) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var194 = var_mpropdef == var_other38;
var192 = var194;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
}
var190 = var192;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
var189 = var190;
}
if (var189){
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "NULL, /* empty */";
var199 = (val*)(17l<<2|1);
var200 = (val*)(17l<<2|1);
var201 = (val*)((long)(0)<<2|3);
var202 = (val*)((long)(0)<<2|3);
var198 = core__flat___CString___to_s_unsafe(var197, var199, var200, var201, var202);
var196 = var198;
varonce195 = var196;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var196); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype204 = type_nitc__MMethodDef.color;
idtype205 = type_nitc__MMethodDef.id;
if(cltype204 >= var_mpropdef->type->table_size) {
var203 = 0;
} else {
var203 = var_mpropdef->type->type_table[cltype204] == idtype205;
}
if (unlikely(!var203)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 844);
fatal_exit(1);
}
if (var_rta == NULL) {
var207 = 0; /* is null */
} else {
var207 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var210 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var211 = !var210;
var208 = var211;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
var207 = var208;
}
var_212 = var207;
if (var207){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var215 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var215 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
{
var216 = core___core__HashSet___core__abstract_collection__Collection__has(var213, var_mpropdef);
}
var217 = !var216;
var206 = var217;
} else {
var206 = var_212;
}
if (var206){
if (unlikely(varonce218==NULL)) {
var219 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "NULL, /* DEAD ";
var224 = (val*)(14l<<2|1);
var225 = (val*)(14l<<2|1);
var226 = (val*)((long)(0)<<2|3);
var227 = (val*)((long)(0)<<2|3);
var223 = core__flat___CString___to_s_unsafe(var222, var224, var225, var226, var227);
var221 = var223;
varonce220 = var221;
}
((struct instance_core__NativeArray*)var219)->values[0]=var221;
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = ":";
var232 = (val*)(1l<<2|1);
var233 = (val*)(1l<<2|1);
var234 = (val*)((long)(0)<<2|3);
var235 = (val*)((long)(0)<<2|3);
var231 = core__flat___CString___to_s_unsafe(var230, var232, var233, var234, var235);
var229 = var231;
varonce228 = var229;
}
((struct instance_core__NativeArray*)var219)->values[2]=var229;
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = ":";
var240 = (val*)(1l<<2|1);
var241 = (val*)(1l<<2|1);
var242 = (val*)((long)(0)<<2|3);
var243 = (val*)((long)(0)<<2|3);
var239 = core__flat___CString___to_s_unsafe(var238, var240, var241, var242, var243);
var237 = var239;
varonce236 = var237;
}
((struct instance_core__NativeArray*)var219)->values[4]=var237;
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = " */";
var248 = (val*)(3l<<2|1);
var249 = (val*)(3l<<2|1);
var250 = (val*)((long)(0)<<2|3);
var251 = (val*)((long)(0)<<2|3);
var247 = core__flat___CString___to_s_unsafe(var246, var248, var249, var250, var251);
var245 = var247;
varonce244 = var245;
}
((struct instance_core__NativeArray*)var219)->values[6]=var245;
} else {
var219 = varonce218;
varonce218 = NULL;
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var254 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var254 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
var255 = ((val*(*)(val* self))(var252->class->vft[COLOR_core__abstract_text__Object__to_s]))(var252); /* to_s on <var252:MModule>*/
}
((struct instance_core__NativeArray*)var219)->values[1]=var255;
{
var256 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var219)->values[3]=var256;
{
var257 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var219)->values[5]=var257;
{
var258 = ((val*(*)(val* self))(var219->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var219); /* native_to_s on <var219:NativeArray[String]>*/
}
varonce218 = var219;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var258); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label259;
} else {
{
{ /* Inline model_base$MEntity$is_broken (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var264 = var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var262 = var264;
RET_LABEL263:(void)0;
}
}
var_265 = var262;
if (var262){
var261 = var_265;
} else {
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var268 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var266 = var268;
RET_LABEL267:(void)0;
}
}
if (var266 == NULL) {
var269 = 1; /* is null */
} else {
var269 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var266,((val*)NULL)) on <var266:nullable MSignature> */
var_other38 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var266,var_other38) on <var266:nullable MSignature(MSignature)> */
var274 = var266 == var_other38;
var272 = var274;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
var270 = var272;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
var269 = var270;
}
var261 = var269;
}
var_275 = var261;
if (var261){
var260 = var_275;
} else {
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var278 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var278 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var276 = var278;
RET_LABEL277:(void)0;
}
}
{
{ /* Inline model_base$MEntity$is_broken (var276) on <var276:MProperty(MMethod)> */
var281 = var276->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var276:MProperty(MMethod)> */
var279 = var281;
RET_LABEL280:(void)0;
}
}
var260 = var279;
}
if (var260){
if (unlikely(varonce282==NULL)) {
var283 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = "NULL, /* DEAD (BROKEN) ";
var288 = (val*)(23l<<2|1);
var289 = (val*)(23l<<2|1);
var290 = (val*)((long)(0)<<2|3);
var291 = (val*)((long)(0)<<2|3);
var287 = core__flat___CString___to_s_unsafe(var286, var288, var289, var290, var291);
var285 = var287;
varonce284 = var285;
}
((struct instance_core__NativeArray*)var283)->values[0]=var285;
if (likely(varonce292!=NULL)) {
var293 = varonce292;
} else {
var294 = ":";
var296 = (val*)(1l<<2|1);
var297 = (val*)(1l<<2|1);
var298 = (val*)((long)(0)<<2|3);
var299 = (val*)((long)(0)<<2|3);
var295 = core__flat___CString___to_s_unsafe(var294, var296, var297, var298, var299);
var293 = var295;
varonce292 = var293;
}
((struct instance_core__NativeArray*)var283)->values[2]=var293;
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = ":";
var304 = (val*)(1l<<2|1);
var305 = (val*)(1l<<2|1);
var306 = (val*)((long)(0)<<2|3);
var307 = (val*)((long)(0)<<2|3);
var303 = core__flat___CString___to_s_unsafe(var302, var304, var305, var306, var307);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var283)->values[4]=var301;
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = " */";
var312 = (val*)(3l<<2|1);
var313 = (val*)(3l<<2|1);
var314 = (val*)((long)(0)<<2|3);
var315 = (val*)((long)(0)<<2|3);
var311 = core__flat___CString___to_s_unsafe(var310, var312, var313, var314, var315);
var309 = var311;
varonce308 = var309;
}
((struct instance_core__NativeArray*)var283)->values[6]=var309;
} else {
var283 = varonce282;
varonce282 = NULL;
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var318 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var318 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var316 = var318;
RET_LABEL317:(void)0;
}
}
{
var319 = ((val*(*)(val* self))(var316->class->vft[COLOR_core__abstract_text__Object__to_s]))(var316); /* to_s on <var316:MModule>*/
}
((struct instance_core__NativeArray*)var283)->values[1]=var319;
{
var320 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var283)->values[3]=var320;
{
var321 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var283)->values[5]=var321;
{
var322 = ((val*(*)(val* self))(var283->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var283); /* native_to_s on <var283:NativeArray[String]>*/
}
varonce282 = var283;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var322); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label259;
} else {
}
}
{
var323 = nitc__separate_compiler___MMethodDef___virtual_runtime_function(var_mpropdef);
}
var_rf = var323;
{
var324 = nitc___nitc__AbstractRuntimeFunction___c_name(var_rf);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var324); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce325==NULL)) {
var326 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce327!=NULL)) {
var328 = varonce327;
} else {
var329 = "(nitmethod_t)";
var331 = (val*)(13l<<2|1);
var332 = (val*)(13l<<2|1);
var333 = (val*)((long)(0)<<2|3);
var334 = (val*)((long)(0)<<2|3);
var330 = core__flat___CString___to_s_unsafe(var329, var331, var332, var333, var334);
var328 = var330;
varonce327 = var328;
}
((struct instance_core__NativeArray*)var326)->values[0]=var328;
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = ", /* pointer to ";
var339 = (val*)(16l<<2|1);
var340 = (val*)(16l<<2|1);
var341 = (val*)((long)(0)<<2|3);
var342 = (val*)((long)(0)<<2|3);
var338 = core__flat___CString___to_s_unsafe(var337, var339, var340, var341, var342);
var336 = var338;
varonce335 = var336;
}
((struct instance_core__NativeArray*)var326)->values[2]=var336;
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = ":";
var347 = (val*)(1l<<2|1);
var348 = (val*)(1l<<2|1);
var349 = (val*)((long)(0)<<2|3);
var350 = (val*)((long)(0)<<2|3);
var346 = core__flat___CString___to_s_unsafe(var345, var347, var348, var349, var350);
var344 = var346;
varonce343 = var344;
}
((struct instance_core__NativeArray*)var326)->values[4]=var344;
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = ":";
var355 = (val*)(1l<<2|1);
var356 = (val*)(1l<<2|1);
var357 = (val*)((long)(0)<<2|3);
var358 = (val*)((long)(0)<<2|3);
var354 = core__flat___CString___to_s_unsafe(var353, var355, var356, var357, var358);
var352 = var354;
varonce351 = var352;
}
((struct instance_core__NativeArray*)var326)->values[6]=var352;
if (likely(varonce359!=NULL)) {
var360 = varonce359;
} else {
var361 = " */";
var363 = (val*)(3l<<2|1);
var364 = (val*)(3l<<2|1);
var365 = (val*)((long)(0)<<2|3);
var366 = (val*)((long)(0)<<2|3);
var362 = core__flat___CString___to_s_unsafe(var361, var363, var364, var365, var366);
var360 = var362;
varonce359 = var360;
}
((struct instance_core__NativeArray*)var326)->values[8]=var360;
} else {
var326 = varonce325;
varonce325 = NULL;
}
{
var367 = nitc___nitc__AbstractRuntimeFunction___c_name(var_rf);
}
((struct instance_core__NativeArray*)var326)->values[1]=var367;
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var370 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var370 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var368 = var370;
RET_LABEL369:(void)0;
}
}
{
var371 = ((val*(*)(val* self))(var368->class->vft[COLOR_core__abstract_text__Object__to_s]))(var368); /* to_s on <var368:MModule>*/
}
((struct instance_core__NativeArray*)var326)->values[3]=var371;
{
var372 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var326)->values[5]=var372;
{
var373 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var326)->values[7]=var373;
{
var374 = ((val*(*)(val* self))(var326->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var326); /* native_to_s on <var326:NativeArray[String]>*/
}
varonce325 = var326;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var374); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
BREAK_label259: (void)0;
{
var375 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var375;
}
BREAK_label: (void)0;
} else {
}
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = "}";
var380 = (val*)(1l<<2|1);
var381 = (val*)(1l<<2|1);
var382 = (val*)((long)(0)<<2|3);
var383 = (val*)((long)(0)<<2|3);
var379 = core__flat___CString___to_s_unsafe(var378, var380, var381, var382, var383);
var377 = var379;
varonce376 = var377;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var377); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce384!=NULL)) {
var385 = varonce384;
} else {
var386 = "};";
var388 = (val*)(2l<<2|1);
var389 = (val*)(2l<<2|1);
var390 = (val*)((long)(0)<<2|3);
var391 = (val*)((long)(0)<<2|3);
var387 = core__flat___CString___to_s_unsafe(var386, var388, var389, var390, var391);
var385 = var387;
varonce384 = var385;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var385); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
{
var393 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var_394 = var393;
if (var393){
var392 = var_394;
} else {
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var397 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var397 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var395 = var397;
RET_LABEL396:(void)0;
}
}
{
{ /* Inline model$MClass$name (var395) on <var395:MClass> */
var400 = var395->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var395:MClass> */
if (unlikely(var400 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var398 = var400;
RET_LABEL399:(void)0;
}
}
if (likely(varonce401!=NULL)) {
var402 = varonce401;
} else {
var403 = "Pointer";
var405 = (val*)(7l<<2|1);
var406 = (val*)(7l<<2|1);
var407 = (val*)((long)(0)<<2|3);
var408 = (val*)((long)(0)<<2|3);
var404 = core__flat___CString___to_s_unsafe(var403, var405, var406, var407, var408);
var402 = var404;
varonce401 = var402;
}
{
var409 = ((short int(*)(val* self, val* p0))(var398->class->vft[COLOR_core__kernel__Object___61d_61d]))(var398, var402); /* == on <var398:String>*/
}
var392 = var409;
}
if (var392){
{
{ /* Inline separate_compiler$MType$is_tagged (var_mtype) on <var_mtype:MClassType> */
var412 = var_mtype->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MClassType> */
var410 = var412;
RET_LABEL411:(void)0;
}
}
if (var410){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var415 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var415 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var413 = var415;
RET_LABEL414:(void)0;
}
}
if (unlikely(varonce416==NULL)) {
var417 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce418!=NULL)) {
var419 = varonce418;
} else {
var420 = "struct instance_";
var422 = (val*)(16l<<2|1);
var423 = (val*)(16l<<2|1);
var424 = (val*)((long)(0)<<2|3);
var425 = (val*)((long)(0)<<2|3);
var421 = core__flat___CString___to_s_unsafe(var420, var422, var423, var424, var425);
var419 = var421;
varonce418 = var419;
}
((struct instance_core__NativeArray*)var417)->values[0]=var419;
if (likely(varonce426!=NULL)) {
var427 = varonce426;
} else {
var428 = " {";
var430 = (val*)(2l<<2|1);
var431 = (val*)(2l<<2|1);
var432 = (val*)((long)(0)<<2|3);
var433 = (val*)((long)(0)<<2|3);
var429 = core__flat___CString___to_s_unsafe(var428, var430, var431, var432, var433);
var427 = var429;
varonce426 = var427;
}
((struct instance_core__NativeArray*)var417)->values[2]=var427;
} else {
var417 = varonce416;
varonce416 = NULL;
}
((struct instance_core__NativeArray*)var417)->values[1]=var_c_name;
{
var434 = ((val*(*)(val* self))(var417->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var417); /* native_to_s on <var417:NativeArray[String]>*/
}
varonce416 = var417;
{
nitc___nitc__CodeWriter___add_decl(var413, var434); /* Direct call abstract_compiler$CodeWriter$add_decl on <var413:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var437 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var437 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var435 = var437;
RET_LABEL436:(void)0;
}
}
if (likely(varonce438!=NULL)) {
var439 = varonce438;
} else {
var440 = "const struct type *type;";
var442 = (val*)(24l<<2|1);
var443 = (val*)(24l<<2|1);
var444 = (val*)((long)(0)<<2|3);
var445 = (val*)((long)(0)<<2|3);
var441 = core__flat___CString___to_s_unsafe(var440, var442, var443, var444, var445);
var439 = var441;
varonce438 = var439;
}
{
nitc___nitc__CodeWriter___add_decl(var435, var439); /* Direct call abstract_compiler$CodeWriter$add_decl on <var435:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var448 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var448 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var446 = var448;
RET_LABEL447:(void)0;
}
}
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = "const struct class *class;";
var453 = (val*)(26l<<2|1);
var454 = (val*)(26l<<2|1);
var455 = (val*)((long)(0)<<2|3);
var456 = (val*)((long)(0)<<2|3);
var452 = core__flat___CString___to_s_unsafe(var451, var453, var454, var455, var456);
var450 = var452;
varonce449 = var450;
}
{
nitc___nitc__CodeWriter___add_decl(var446, var450); /* Direct call abstract_compiler$CodeWriter$add_decl on <var446:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var459 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var459 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var457 = var459;
RET_LABEL458:(void)0;
}
}
if (unlikely(varonce460==NULL)) {
var461 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce462!=NULL)) {
var463 = varonce462;
} else {
var464 = " value;";
var466 = (val*)(7l<<2|1);
var467 = (val*)(7l<<2|1);
var468 = (val*)((long)(0)<<2|3);
var469 = (val*)((long)(0)<<2|3);
var465 = core__flat___CString___to_s_unsafe(var464, var466, var467, var468, var469);
var463 = var465;
varonce462 = var463;
}
((struct instance_core__NativeArray*)var461)->values[1]=var463;
} else {
var461 = varonce460;
varonce460 = NULL;
}
{
var470 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var461)->values[0]=var470;
{
var471 = ((val*(*)(val* self))(var461->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var461); /* native_to_s on <var461:NativeArray[String]>*/
}
varonce460 = var461;
{
nitc___nitc__CodeWriter___add_decl(var457, var471); /* Direct call abstract_compiler$CodeWriter$add_decl on <var457:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var474 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var474 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var472 = var474;
RET_LABEL473:(void)0;
}
}
if (likely(varonce475!=NULL)) {
var476 = varonce475;
} else {
var477 = "};";
var479 = (val*)(2l<<2|1);
var480 = (val*)(2l<<2|1);
var481 = (val*)((long)(0)<<2|3);
var482 = (val*)((long)(0)<<2|3);
var478 = core__flat___CString___to_s_unsafe(var477, var479, var480, var481, var482);
var476 = var478;
varonce475 = var476;
}
{
nitc___nitc__CodeWriter___add_decl(var472, var476); /* Direct call abstract_compiler$CodeWriter$add_decl on <var472:CodeWriter>*/
}
var_484 = var_is_dead;
if (var_is_dead){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var487 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var487 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var485 = var487;
RET_LABEL486:(void)0;
}
}
{
{ /* Inline model$MClass$name (var485) on <var485:MClass> */
var490 = var485->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var485:MClass> */
if (unlikely(var490 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var488 = var490;
RET_LABEL489:(void)0;
}
}
if (likely(varonce491!=NULL)) {
var492 = varonce491;
} else {
var493 = "Pointer";
var495 = (val*)(7l<<2|1);
var496 = (val*)(7l<<2|1);
var497 = (val*)((long)(0)<<2|3);
var498 = (val*)((long)(0)<<2|3);
var494 = core__flat___CString___to_s_unsafe(var493, var495, var496, var497, var498);
var492 = var494;
varonce491 = var492;
}
{
{ /* Inline kernel$Object$!= (var488,var492) on <var488:String> */
var_other = var492;
{
var501 = ((short int(*)(val* self, val* p0))(var488->class->vft[COLOR_core__kernel__Object___61d_61d]))(var488, var_other); /* == on <var488:String>*/
}
var502 = !var501;
var499 = var502;
goto RET_LABEL500;
RET_LABEL500:(void)0;
}
}
var483 = var499;
} else {
var483 = var_484;
}
if (var483){
goto RET_LABEL;
} else {
}
if (unlikely(varonce503==NULL)) {
var504 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce505!=NULL)) {
var506 = varonce505;
} else {
var507 = "BOX_";
var509 = (val*)(4l<<2|1);
var510 = (val*)(4l<<2|1);
var511 = (val*)((long)(0)<<2|3);
var512 = (val*)((long)(0)<<2|3);
var508 = core__flat___CString___to_s_unsafe(var507, var509, var510, var511, var512);
var506 = var508;
varonce505 = var506;
}
((struct instance_core__NativeArray*)var504)->values[0]=var506;
} else {
var504 = varonce503;
varonce503 = NULL;
}
((struct instance_core__NativeArray*)var504)->values[1]=var_c_name;
{
var513 = ((val*(*)(val* self))(var504->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var504); /* native_to_s on <var504:NativeArray[String]>*/
}
varonce503 = var504;
if (unlikely(varonce514==NULL)) {
var515 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce516!=NULL)) {
var517 = varonce516;
} else {
var518 = "val* BOX_";
var520 = (val*)(9l<<2|1);
var521 = (val*)(9l<<2|1);
var522 = (val*)((long)(0)<<2|3);
var523 = (val*)((long)(0)<<2|3);
var519 = core__flat___CString___to_s_unsafe(var518, var520, var521, var522, var523);
var517 = var519;
varonce516 = var517;
}
((struct instance_core__NativeArray*)var515)->values[0]=var517;
if (likely(varonce524!=NULL)) {
var525 = varonce524;
} else {
var526 = "(";
var528 = (val*)(1l<<2|1);
var529 = (val*)(1l<<2|1);
var530 = (val*)((long)(0)<<2|3);
var531 = (val*)((long)(0)<<2|3);
var527 = core__flat___CString___to_s_unsafe(var526, var528, var529, var530, var531);
var525 = var527;
varonce524 = var525;
}
((struct instance_core__NativeArray*)var515)->values[2]=var525;
if (likely(varonce532!=NULL)) {
var533 = varonce532;
} else {
var534 = ");";
var536 = (val*)(2l<<2|1);
var537 = (val*)(2l<<2|1);
var538 = (val*)((long)(0)<<2|3);
var539 = (val*)((long)(0)<<2|3);
var535 = core__flat___CString___to_s_unsafe(var534, var536, var537, var538, var539);
var533 = var535;
varonce532 = var533;
}
((struct instance_core__NativeArray*)var515)->values[4]=var533;
} else {
var515 = varonce514;
varonce514 = NULL;
}
((struct instance_core__NativeArray*)var515)->values[1]=var_c_name;
{
var540 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var515)->values[3]=var540;
{
var541 = ((val*(*)(val* self))(var515->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var515); /* native_to_s on <var515:NativeArray[String]>*/
}
varonce514 = var515;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var513, var541); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce542==NULL)) {
var543 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce544!=NULL)) {
var545 = varonce544;
} else {
var546 = "/* allocate ";
var548 = (val*)(12l<<2|1);
var549 = (val*)(12l<<2|1);
var550 = (val*)((long)(0)<<2|3);
var551 = (val*)((long)(0)<<2|3);
var547 = core__flat___CString___to_s_unsafe(var546, var548, var549, var550, var551);
var545 = var547;
varonce544 = var545;
}
((struct instance_core__NativeArray*)var543)->values[0]=var545;
if (likely(varonce552!=NULL)) {
var553 = varonce552;
} else {
var554 = " */";
var556 = (val*)(3l<<2|1);
var557 = (val*)(3l<<2|1);
var558 = (val*)((long)(0)<<2|3);
var559 = (val*)((long)(0)<<2|3);
var555 = core__flat___CString___to_s_unsafe(var554, var556, var557, var558, var559);
var553 = var555;
varonce552 = var553;
}
((struct instance_core__NativeArray*)var543)->values[2]=var553;
} else {
var543 = varonce542;
varonce542 = NULL;
}
{
var560 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var543)->values[1]=var560;
{
var561 = ((val*(*)(val* self))(var543->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var543); /* native_to_s on <var543:NativeArray[String]>*/
}
varonce542 = var543;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var561); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce562==NULL)) {
var563 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce564!=NULL)) {
var565 = varonce564;
} else {
var566 = "val* BOX_";
var568 = (val*)(9l<<2|1);
var569 = (val*)(9l<<2|1);
var570 = (val*)((long)(0)<<2|3);
var571 = (val*)((long)(0)<<2|3);
var567 = core__flat___CString___to_s_unsafe(var566, var568, var569, var570, var571);
var565 = var567;
varonce564 = var565;
}
((struct instance_core__NativeArray*)var563)->values[0]=var565;
if (likely(varonce572!=NULL)) {
var573 = varonce572;
} else {
var574 = "(";
var576 = (val*)(1l<<2|1);
var577 = (val*)(1l<<2|1);
var578 = (val*)((long)(0)<<2|3);
var579 = (val*)((long)(0)<<2|3);
var575 = core__flat___CString___to_s_unsafe(var574, var576, var577, var578, var579);
var573 = var575;
varonce572 = var573;
}
((struct instance_core__NativeArray*)var563)->values[2]=var573;
if (likely(varonce580!=NULL)) {
var581 = varonce580;
} else {
var582 = " value) {";
var584 = (val*)(9l<<2|1);
var585 = (val*)(9l<<2|1);
var586 = (val*)((long)(0)<<2|3);
var587 = (val*)((long)(0)<<2|3);
var583 = core__flat___CString___to_s_unsafe(var582, var584, var585, var586, var587);
var581 = var583;
varonce580 = var581;
}
((struct instance_core__NativeArray*)var563)->values[4]=var581;
} else {
var563 = varonce562;
varonce562 = NULL;
}
{
var588 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var563)->values[1]=var588;
{
var589 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var563)->values[3]=var589;
{
var590 = ((val*(*)(val* self))(var563->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var563); /* native_to_s on <var563:NativeArray[String]>*/
}
varonce562 = var563;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var590); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce591==NULL)) {
var592 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce593!=NULL)) {
var594 = varonce593;
} else {
var595 = "sizeof(struct instance_";
var597 = (val*)(23l<<2|1);
var598 = (val*)(23l<<2|1);
var599 = (val*)((long)(0)<<2|3);
var600 = (val*)((long)(0)<<2|3);
var596 = core__flat___CString___to_s_unsafe(var595, var597, var598, var599, var600);
var594 = var596;
varonce593 = var594;
}
((struct instance_core__NativeArray*)var592)->values[0]=var594;
if (likely(varonce601!=NULL)) {
var602 = varonce601;
} else {
var603 = ")";
var605 = (val*)(1l<<2|1);
var606 = (val*)(1l<<2|1);
var607 = (val*)((long)(0)<<2|3);
var608 = (val*)((long)(0)<<2|3);
var604 = core__flat___CString___to_s_unsafe(var603, var605, var606, var607, var608);
var602 = var604;
varonce601 = var602;
}
((struct instance_core__NativeArray*)var592)->values[2]=var602;
} else {
var592 = varonce591;
varonce591 = NULL;
}
((struct instance_core__NativeArray*)var592)->values[1]=var_c_name;
{
var609 = ((val*(*)(val* self))(var592->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var592); /* native_to_s on <var592:NativeArray[String]>*/
}
varonce591 = var592;
{
var610 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var611 = nitc___nitc__AbstractCompilerVisitor___nit_alloc(var_v, var609, var610);
}
var_alloc = var611;
if (unlikely(varonce612==NULL)) {
var613 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce614!=NULL)) {
var615 = varonce614;
} else {
var616 = "struct instance_";
var618 = (val*)(16l<<2|1);
var619 = (val*)(16l<<2|1);
var620 = (val*)((long)(0)<<2|3);
var621 = (val*)((long)(0)<<2|3);
var617 = core__flat___CString___to_s_unsafe(var616, var618, var619, var620, var621);
var615 = var617;
varonce614 = var615;
}
((struct instance_core__NativeArray*)var613)->values[0]=var615;
if (likely(varonce622!=NULL)) {
var623 = varonce622;
} else {
var624 = "*res = ";
var626 = (val*)(7l<<2|1);
var627 = (val*)(7l<<2|1);
var628 = (val*)((long)(0)<<2|3);
var629 = (val*)((long)(0)<<2|3);
var625 = core__flat___CString___to_s_unsafe(var624, var626, var627, var628, var629);
var623 = var625;
varonce622 = var623;
}
((struct instance_core__NativeArray*)var613)->values[2]=var623;
if (likely(varonce630!=NULL)) {
var631 = varonce630;
} else {
var632 = ";";
var634 = (val*)(1l<<2|1);
var635 = (val*)(1l<<2|1);
var636 = (val*)((long)(0)<<2|3);
var637 = (val*)((long)(0)<<2|3);
var633 = core__flat___CString___to_s_unsafe(var632, var634, var635, var636, var637);
var631 = var633;
varonce630 = var631;
}
((struct instance_core__NativeArray*)var613)->values[4]=var631;
} else {
var613 = varonce612;
varonce612 = NULL;
}
((struct instance_core__NativeArray*)var613)->values[1]=var_c_name;
((struct instance_core__NativeArray*)var613)->values[3]=var_alloc;
{
var638 = ((val*(*)(val* self))(var613->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var613); /* native_to_s on <var613:NativeArray[String]>*/
}
varonce612 = var613;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var638); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var641 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var641 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var639 = var641;
RET_LABEL640:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var639) on <var639:AbstractCompiler(SeparateCompiler)> */
var644 = var639->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var639:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var644 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var642 = var644;
RET_LABEL643:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var642&3)?class_info[((long)var642&3)]:var642->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var642, var_mtype); /* add on <var642:Set[MType]>*/
}
if (unlikely(varonce645==NULL)) {
var646 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce647!=NULL)) {
var648 = varonce647;
} else {
var649 = "type_";
var651 = (val*)(5l<<2|1);
var652 = (val*)(5l<<2|1);
var653 = (val*)((long)(0)<<2|3);
var654 = (val*)((long)(0)<<2|3);
var650 = core__flat___CString___to_s_unsafe(var649, var651, var652, var653, var654);
var648 = var650;
varonce647 = var648;
}
((struct instance_core__NativeArray*)var646)->values[0]=var648;
} else {
var646 = varonce645;
varonce645 = NULL;
}
((struct instance_core__NativeArray*)var646)->values[1]=var_c_name;
{
var655 = ((val*(*)(val* self))(var646->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var646); /* native_to_s on <var646:NativeArray[String]>*/
}
varonce645 = var646;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var655); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce656==NULL)) {
var657 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce658!=NULL)) {
var659 = varonce658;
} else {
var660 = "res->type = &type_";
var662 = (val*)(18l<<2|1);
var663 = (val*)(18l<<2|1);
var664 = (val*)((long)(0)<<2|3);
var665 = (val*)((long)(0)<<2|3);
var661 = core__flat___CString___to_s_unsafe(var660, var662, var663, var664, var665);
var659 = var661;
varonce658 = var659;
}
((struct instance_core__NativeArray*)var657)->values[0]=var659;
if (likely(varonce666!=NULL)) {
var667 = varonce666;
} else {
var668 = ";";
var670 = (val*)(1l<<2|1);
var671 = (val*)(1l<<2|1);
var672 = (val*)((long)(0)<<2|3);
var673 = (val*)((long)(0)<<2|3);
var669 = core__flat___CString___to_s_unsafe(var668, var670, var671, var672, var673);
var667 = var669;
varonce666 = var667;
}
((struct instance_core__NativeArray*)var657)->values[2]=var667;
} else {
var657 = varonce656;
varonce656 = NULL;
}
((struct instance_core__NativeArray*)var657)->values[1]=var_c_name;
{
var674 = ((val*(*)(val* self))(var657->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var657); /* native_to_s on <var657:NativeArray[String]>*/
}
varonce656 = var657;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var674); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce675==NULL)) {
var676 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce677!=NULL)) {
var678 = varonce677;
} else {
var679 = "class_";
var681 = (val*)(6l<<2|1);
var682 = (val*)(6l<<2|1);
var683 = (val*)((long)(0)<<2|3);
var684 = (val*)((long)(0)<<2|3);
var680 = core__flat___CString___to_s_unsafe(var679, var681, var682, var683, var684);
var678 = var680;
varonce677 = var678;
}
((struct instance_core__NativeArray*)var676)->values[0]=var678;
} else {
var676 = varonce675;
varonce675 = NULL;
}
((struct instance_core__NativeArray*)var676)->values[1]=var_c_name;
{
var685 = ((val*(*)(val* self))(var676->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var676); /* native_to_s on <var676:NativeArray[String]>*/
}
varonce675 = var676;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var685); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce686==NULL)) {
var687 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce688!=NULL)) {
var689 = varonce688;
} else {
var690 = "res->class = &class_";
var692 = (val*)(20l<<2|1);
var693 = (val*)(20l<<2|1);
var694 = (val*)((long)(0)<<2|3);
var695 = (val*)((long)(0)<<2|3);
var691 = core__flat___CString___to_s_unsafe(var690, var692, var693, var694, var695);
var689 = var691;
varonce688 = var689;
}
((struct instance_core__NativeArray*)var687)->values[0]=var689;
if (likely(varonce696!=NULL)) {
var697 = varonce696;
} else {
var698 = ";";
var700 = (val*)(1l<<2|1);
var701 = (val*)(1l<<2|1);
var702 = (val*)((long)(0)<<2|3);
var703 = (val*)((long)(0)<<2|3);
var699 = core__flat___CString___to_s_unsafe(var698, var700, var701, var702, var703);
var697 = var699;
varonce696 = var697;
}
((struct instance_core__NativeArray*)var687)->values[2]=var697;
} else {
var687 = varonce686;
varonce686 = NULL;
}
((struct instance_core__NativeArray*)var687)->values[1]=var_c_name;
{
var704 = ((val*(*)(val* self))(var687->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var687); /* native_to_s on <var687:NativeArray[String]>*/
}
varonce686 = var687;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var704); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce705!=NULL)) {
var706 = varonce705;
} else {
var707 = "res->value = value;";
var709 = (val*)(19l<<2|1);
var710 = (val*)(19l<<2|1);
var711 = (val*)((long)(0)<<2|3);
var712 = (val*)((long)(0)<<2|3);
var708 = core__flat___CString___to_s_unsafe(var707, var709, var710, var711, var712);
var706 = var708;
varonce705 = var706;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var706); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce713!=NULL)) {
var714 = varonce713;
} else {
var715 = "return (val*)res;";
var717 = (val*)(17l<<2|1);
var718 = (val*)(17l<<2|1);
var719 = (val*)((long)(0)<<2|3);
var720 = (val*)((long)(0)<<2|3);
var716 = core__flat___CString___to_s_unsafe(var715, var717, var718, var719, var720);
var714 = var716;
varonce713 = var714;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var714); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce721!=NULL)) {
var722 = varonce721;
} else {
var723 = "}";
var725 = (val*)(1l<<2|1);
var726 = (val*)(1l<<2|1);
var727 = (val*)((long)(0)<<2|3);
var728 = (val*)((long)(0)<<2|3);
var724 = core__flat___CString___to_s_unsafe(var723, var725, var726, var727, var728);
var722 = var724;
varonce721 = var722;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var722); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var731 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var731 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var729 = var731;
RET_LABEL730:(void)0;
}
}
{
{ /* Inline model$MClass$name (var729) on <var729:MClass> */
var734 = var729->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var729:MClass> */
if (unlikely(var734 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var732 = var734;
RET_LABEL733:(void)0;
}
}
if (likely(varonce735!=NULL)) {
var736 = varonce735;
} else {
var737 = "Pointer";
var739 = (val*)(7l<<2|1);
var740 = (val*)(7l<<2|1);
var741 = (val*)((long)(0)<<2|3);
var742 = (val*)((long)(0)<<2|3);
var738 = core__flat___CString___to_s_unsafe(var737, var739, var740, var741, var742);
var736 = var738;
varonce735 = var736;
}
{
{ /* Inline kernel$Object$!= (var732,var736) on <var732:String> */
var_other = var736;
{
var745 = ((short int(*)(val* self, val* p0))(var732->class->vft[COLOR_core__kernel__Object___61d_61d]))(var732, var_other); /* == on <var732:String>*/
}
var746 = !var745;
var743 = var746;
goto RET_LABEL744;
RET_LABEL744:(void)0;
}
}
if (var743){
goto RET_LABEL;
} else {
}
{
var747 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var747;
if (unlikely(varonce748==NULL)) {
var749 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce750!=NULL)) {
var751 = varonce750;
} else {
var752 = "NEW_";
var754 = (val*)(4l<<2|1);
var755 = (val*)(4l<<2|1);
var756 = (val*)((long)(0)<<2|3);
var757 = (val*)((long)(0)<<2|3);
var753 = core__flat___CString___to_s_unsafe(var752, var754, var755, var756, var757);
var751 = var753;
varonce750 = var751;
}
((struct instance_core__NativeArray*)var749)->values[0]=var751;
} else {
var749 = varonce748;
varonce748 = NULL;
}
((struct instance_core__NativeArray*)var749)->values[1]=var_c_name;
{
var758 = ((val*(*)(val* self))(var749->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var749); /* native_to_s on <var749:NativeArray[String]>*/
}
varonce748 = var749;
if (unlikely(varonce759==NULL)) {
var760 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce761!=NULL)) {
var762 = varonce761;
} else {
var763 = " NEW_";
var765 = (val*)(5l<<2|1);
var766 = (val*)(5l<<2|1);
var767 = (val*)((long)(0)<<2|3);
var768 = (val*)((long)(0)<<2|3);
var764 = core__flat___CString___to_s_unsafe(var763, var765, var766, var767, var768);
var762 = var764;
varonce761 = var762;
}
((struct instance_core__NativeArray*)var760)->values[1]=var762;
if (likely(varonce769!=NULL)) {
var770 = varonce769;
} else {
var771 = "(const struct type* type);";
var773 = (val*)(26l<<2|1);
var774 = (val*)(26l<<2|1);
var775 = (val*)((long)(0)<<2|3);
var776 = (val*)((long)(0)<<2|3);
var772 = core__flat___CString___to_s_unsafe(var771, var773, var774, var775, var776);
var770 = var772;
varonce769 = var770;
}
((struct instance_core__NativeArray*)var760)->values[3]=var770;
} else {
var760 = varonce759;
varonce759 = NULL;
}
{
var777 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var760)->values[0]=var777;
((struct instance_core__NativeArray*)var760)->values[2]=var_c_name;
{
var778 = ((val*(*)(val* self))(var760->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var760); /* native_to_s on <var760:NativeArray[String]>*/
}
varonce759 = var760;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var758, var778); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce779==NULL)) {
var780 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce781!=NULL)) {
var782 = varonce781;
} else {
var783 = "/* allocate ";
var785 = (val*)(12l<<2|1);
var786 = (val*)(12l<<2|1);
var787 = (val*)((long)(0)<<2|3);
var788 = (val*)((long)(0)<<2|3);
var784 = core__flat___CString___to_s_unsafe(var783, var785, var786, var787, var788);
var782 = var784;
varonce781 = var782;
}
((struct instance_core__NativeArray*)var780)->values[0]=var782;
if (likely(varonce789!=NULL)) {
var790 = varonce789;
} else {
var791 = " */";
var793 = (val*)(3l<<2|1);
var794 = (val*)(3l<<2|1);
var795 = (val*)((long)(0)<<2|3);
var796 = (val*)((long)(0)<<2|3);
var792 = core__flat___CString___to_s_unsafe(var791, var793, var794, var795, var796);
var790 = var792;
varonce789 = var790;
}
((struct instance_core__NativeArray*)var780)->values[2]=var790;
} else {
var780 = varonce779;
varonce779 = NULL;
}
{
var797 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var780)->values[1]=var797;
{
var798 = ((val*(*)(val* self))(var780->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var780); /* native_to_s on <var780:NativeArray[String]>*/
}
varonce779 = var780;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var798); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce799==NULL)) {
var800 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce801!=NULL)) {
var802 = varonce801;
} else {
var803 = " NEW_";
var805 = (val*)(5l<<2|1);
var806 = (val*)(5l<<2|1);
var807 = (val*)((long)(0)<<2|3);
var808 = (val*)((long)(0)<<2|3);
var804 = core__flat___CString___to_s_unsafe(var803, var805, var806, var807, var808);
var802 = var804;
varonce801 = var802;
}
((struct instance_core__NativeArray*)var800)->values[1]=var802;
if (likely(varonce809!=NULL)) {
var810 = varonce809;
} else {
var811 = "(const struct type* type) {";
var813 = (val*)(27l<<2|1);
var814 = (val*)(27l<<2|1);
var815 = (val*)((long)(0)<<2|3);
var816 = (val*)((long)(0)<<2|3);
var812 = core__flat___CString___to_s_unsafe(var811, var813, var814, var815, var816);
var810 = var812;
varonce809 = var810;
}
((struct instance_core__NativeArray*)var800)->values[3]=var810;
} else {
var800 = varonce799;
varonce799 = NULL;
}
{
var817 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var800)->values[0]=var817;
((struct instance_core__NativeArray*)var800)->values[2]=var_c_name;
{
var818 = ((val*(*)(val* self))(var800->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var800); /* native_to_s on <var800:NativeArray[String]>*/
}
varonce799 = var800;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var818); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce819==NULL)) {
var820 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce821!=NULL)) {
var822 = varonce821;
} else {
var823 = " is DEAD";
var825 = (val*)(8l<<2|1);
var826 = (val*)(8l<<2|1);
var827 = (val*)((long)(0)<<2|3);
var828 = (val*)((long)(0)<<2|3);
var824 = core__flat___CString___to_s_unsafe(var823, var825, var826, var827, var828);
var822 = var824;
varonce821 = var822;
}
((struct instance_core__NativeArray*)var820)->values[1]=var822;
} else {
var820 = varonce819;
varonce819 = NULL;
}
{
var829 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var820)->values[0]=var829;
{
var830 = ((val*(*)(val* self))(var820->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var820); /* native_to_s on <var820:NativeArray[String]>*/
}
varonce819 = var820;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var830); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce831!=NULL)) {
var832 = varonce831;
} else {
var833 = "self";
var835 = (val*)(4l<<2|1);
var836 = (val*)(4l<<2|1);
var837 = (val*)((long)(0)<<2|3);
var838 = (val*)((long)(0)<<2|3);
var834 = core__flat___CString___to_s_unsafe(var833, var835, var836, var837, var838);
var832 = var834;
varonce831 = var832;
}
{
var839 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var832);
}
var_res = var839;
{
{ /* Inline abstract_compiler$RuntimeVariable$is_exact= (var_res,1) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL840:(void)0;
}
}
if (unlikely(varonce841==NULL)) {
var842 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce843!=NULL)) {
var844 = varonce843;
} else {
var845 = "sizeof(struct instance_";
var847 = (val*)(23l<<2|1);
var848 = (val*)(23l<<2|1);
var849 = (val*)((long)(0)<<2|3);
var850 = (val*)((long)(0)<<2|3);
var846 = core__flat___CString___to_s_unsafe(var845, var847, var848, var849, var850);
var844 = var846;
varonce843 = var844;
}
((struct instance_core__NativeArray*)var842)->values[0]=var844;
if (likely(varonce851!=NULL)) {
var852 = varonce851;
} else {
var853 = ")";
var855 = (val*)(1l<<2|1);
var856 = (val*)(1l<<2|1);
var857 = (val*)((long)(0)<<2|3);
var858 = (val*)((long)(0)<<2|3);
var854 = core__flat___CString___to_s_unsafe(var853, var855, var856, var857, var858);
var852 = var854;
varonce851 = var852;
}
((struct instance_core__NativeArray*)var842)->values[2]=var852;
} else {
var842 = varonce841;
varonce841 = NULL;
}
{
var859 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var842)->values[1]=var859;
{
var860 = ((val*(*)(val* self))(var842->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var842); /* native_to_s on <var842:NativeArray[String]>*/
}
varonce841 = var842;
{
var861 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var862 = nitc___nitc__AbstractCompilerVisitor___nit_alloc(var_v, var860, var861);
}
var_alloc = var862;
if (unlikely(varonce863==NULL)) {
var864 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce865!=NULL)) {
var866 = varonce865;
} else {
var867 = " = ";
var869 = (val*)(3l<<2|1);
var870 = (val*)(3l<<2|1);
var871 = (val*)((long)(0)<<2|3);
var872 = (val*)((long)(0)<<2|3);
var868 = core__flat___CString___to_s_unsafe(var867, var869, var870, var871, var872);
var866 = var868;
varonce865 = var866;
}
((struct instance_core__NativeArray*)var864)->values[1]=var866;
if (likely(varonce873!=NULL)) {
var874 = varonce873;
} else {
var875 = ";";
var877 = (val*)(1l<<2|1);
var878 = (val*)(1l<<2|1);
var879 = (val*)((long)(0)<<2|3);
var880 = (val*)((long)(0)<<2|3);
var876 = core__flat___CString___to_s_unsafe(var875, var877, var878, var879, var880);
var874 = var876;
varonce873 = var874;
}
((struct instance_core__NativeArray*)var864)->values[3]=var874;
} else {
var864 = varonce863;
varonce863 = NULL;
}
{
var881 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var864)->values[0]=var881;
((struct instance_core__NativeArray*)var864)->values[2]=var_alloc;
{
var882 = ((val*(*)(val* self))(var864->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var864); /* native_to_s on <var864:NativeArray[String]>*/
}
varonce863 = var864;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var882); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce883==NULL)) {
var884 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce885!=NULL)) {
var886 = varonce885;
} else {
var887 = "->type = type;";
var889 = (val*)(14l<<2|1);
var890 = (val*)(14l<<2|1);
var891 = (val*)((long)(0)<<2|3);
var892 = (val*)((long)(0)<<2|3);
var888 = core__flat___CString___to_s_unsafe(var887, var889, var890, var891, var892);
var886 = var888;
varonce885 = var886;
}
((struct instance_core__NativeArray*)var884)->values[1]=var886;
} else {
var884 = varonce883;
varonce883 = NULL;
}
{
var893 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var884)->values[0]=var893;
{
var894 = ((val*(*)(val* self))(var884->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var884); /* native_to_s on <var884:NativeArray[String]>*/
}
varonce883 = var884;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var894); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce895!=NULL)) {
var896 = varonce895;
} else {
var897 = "type";
var899 = (val*)(4l<<2|1);
var900 = (val*)(4l<<2|1);
var901 = (val*)((long)(0)<<2|3);
var902 = (val*)((long)(0)<<2|3);
var898 = core__flat___CString___to_s_unsafe(var897, var899, var900, var901, var902);
var896 = var898;
varonce895 = var896;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var896); /* Direct call separate_compiler$SeparateCompiler$hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce903==NULL)) {
var904 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce905!=NULL)) {
var906 = varonce905;
} else {
var907 = "class_";
var909 = (val*)(6l<<2|1);
var910 = (val*)(6l<<2|1);
var911 = (val*)((long)(0)<<2|3);
var912 = (val*)((long)(0)<<2|3);
var908 = core__flat___CString___to_s_unsafe(var907, var909, var910, var911, var912);
var906 = var908;
varonce905 = var906;
}
((struct instance_core__NativeArray*)var904)->values[0]=var906;
} else {
var904 = varonce903;
varonce903 = NULL;
}
((struct instance_core__NativeArray*)var904)->values[1]=var_c_name;
{
var913 = ((val*(*)(val* self))(var904->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var904); /* native_to_s on <var904:NativeArray[String]>*/
}
varonce903 = var904;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var913); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce914==NULL)) {
var915 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce916!=NULL)) {
var917 = varonce916;
} else {
var918 = "->class = &class_";
var920 = (val*)(17l<<2|1);
var921 = (val*)(17l<<2|1);
var922 = (val*)((long)(0)<<2|3);
var923 = (val*)((long)(0)<<2|3);
var919 = core__flat___CString___to_s_unsafe(var918, var920, var921, var922, var923);
var917 = var919;
varonce916 = var917;
}
((struct instance_core__NativeArray*)var915)->values[1]=var917;
if (likely(varonce924!=NULL)) {
var925 = varonce924;
} else {
var926 = ";";
var928 = (val*)(1l<<2|1);
var929 = (val*)(1l<<2|1);
var930 = (val*)((long)(0)<<2|3);
var931 = (val*)((long)(0)<<2|3);
var927 = core__flat___CString___to_s_unsafe(var926, var928, var929, var930, var931);
var925 = var927;
varonce924 = var925;
}
((struct instance_core__NativeArray*)var915)->values[3]=var925;
} else {
var915 = varonce914;
varonce914 = NULL;
}
{
var932 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var915)->values[0]=var932;
((struct instance_core__NativeArray*)var915)->values[2]=var_c_name;
{
var933 = ((val*(*)(val* self))(var915->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var915); /* native_to_s on <var915:NativeArray[String]>*/
}
varonce914 = var915;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var933); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce934==NULL)) {
var935 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce936!=NULL)) {
var937 = varonce936;
} else {
var938 = "((struct instance_";
var940 = (val*)(18l<<2|1);
var941 = (val*)(18l<<2|1);
var942 = (val*)((long)(0)<<2|3);
var943 = (val*)((long)(0)<<2|3);
var939 = core__flat___CString___to_s_unsafe(var938, var940, var941, var942, var943);
var937 = var939;
varonce936 = var937;
}
((struct instance_core__NativeArray*)var935)->values[0]=var937;
if (likely(varonce944!=NULL)) {
var945 = varonce944;
} else {
var946 = "*)";
var948 = (val*)(2l<<2|1);
var949 = (val*)(2l<<2|1);
var950 = (val*)((long)(0)<<2|3);
var951 = (val*)((long)(0)<<2|3);
var947 = core__flat___CString___to_s_unsafe(var946, var948, var949, var950, var951);
var945 = var947;
varonce944 = var945;
}
((struct instance_core__NativeArray*)var935)->values[2]=var945;
if (likely(varonce952!=NULL)) {
var953 = varonce952;
} else {
var954 = ")->value = NULL;";
var956 = (val*)(16l<<2|1);
var957 = (val*)(16l<<2|1);
var958 = (val*)((long)(0)<<2|3);
var959 = (val*)((long)(0)<<2|3);
var955 = core__flat___CString___to_s_unsafe(var954, var956, var957, var958, var959);
var953 = var955;
varonce952 = var953;
}
((struct instance_core__NativeArray*)var935)->values[4]=var953;
} else {
var935 = varonce934;
varonce934 = NULL;
}
{
var960 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var935)->values[1]=var960;
{
var961 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var935)->values[3]=var961;
{
var962 = ((val*(*)(val* self))(var935->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var935); /* native_to_s on <var935:NativeArray[String]>*/
}
varonce934 = var935;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var962); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce963==NULL)) {
var964 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce965!=NULL)) {
var966 = varonce965;
} else {
var967 = "return ";
var969 = (val*)(7l<<2|1);
var970 = (val*)(7l<<2|1);
var971 = (val*)((long)(0)<<2|3);
var972 = (val*)((long)(0)<<2|3);
var968 = core__flat___CString___to_s_unsafe(var967, var969, var970, var971, var972);
var966 = var968;
varonce965 = var966;
}
((struct instance_core__NativeArray*)var964)->values[0]=var966;
if (likely(varonce973!=NULL)) {
var974 = varonce973;
} else {
var975 = ";";
var977 = (val*)(1l<<2|1);
var978 = (val*)(1l<<2|1);
var979 = (val*)((long)(0)<<2|3);
var980 = (val*)((long)(0)<<2|3);
var976 = core__flat___CString___to_s_unsafe(var975, var977, var978, var979, var980);
var974 = var976;
varonce973 = var974;
}
((struct instance_core__NativeArray*)var964)->values[2]=var974;
} else {
var964 = varonce963;
varonce963 = NULL;
}
{
var981 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var964)->values[1]=var981;
{
var982 = ((val*(*)(val* self))(var964->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var964); /* native_to_s on <var964:NativeArray[String]>*/
}
varonce963 = var964;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var982); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce983!=NULL)) {
var984 = varonce983;
} else {
var985 = "}";
var987 = (val*)(1l<<2|1);
var988 = (val*)(1l<<2|1);
var989 = (val*)((long)(0)<<2|3);
var990 = (val*)((long)(0)<<2|3);
var986 = core__flat___CString___to_s_unsafe(var985, var987, var988, var989, var990);
var984 = var986;
varonce983 = var984;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var984); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model$MClass$name (var_mclass) on <var_mclass:MClass> */
var993 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var993 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var991 = var993;
RET_LABEL992:(void)0;
}
}
if (likely(varonce994!=NULL)) {
var995 = varonce994;
} else {
var996 = "NativeArray";
var998 = (val*)(11l<<2|1);
var999 = (val*)(11l<<2|1);
var1000 = (val*)((long)(0)<<2|3);
var1001 = (val*)((long)(0)<<2|3);
var997 = core__flat___CString___to_s_unsafe(var996, var998, var999, var1000, var1001);
var995 = var997;
varonce994 = var995;
}
{
var1002 = ((short int(*)(val* self, val* p0))(var991->class->vft[COLOR_core__kernel__Object___61d_61d]))(var991, var995); /* == on <var991:String>*/
}
if (var1002){
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var1005 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var1005 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var1003 = var1005;
RET_LABEL1004:(void)0;
}
}
if (unlikely(varonce1006==NULL)) {
var1007 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1008!=NULL)) {
var1009 = varonce1008;
} else {
var1010 = "struct instance_";
var1012 = (val*)(16l<<2|1);
var1013 = (val*)(16l<<2|1);
var1014 = (val*)((long)(0)<<2|3);
var1015 = (val*)((long)(0)<<2|3);
var1011 = core__flat___CString___to_s_unsafe(var1010, var1012, var1013, var1014, var1015);
var1009 = var1011;
varonce1008 = var1009;
}
((struct instance_core__NativeArray*)var1007)->values[0]=var1009;
if (likely(varonce1016!=NULL)) {
var1017 = varonce1016;
} else {
var1018 = " {";
var1020 = (val*)(2l<<2|1);
var1021 = (val*)(2l<<2|1);
var1022 = (val*)((long)(0)<<2|3);
var1023 = (val*)((long)(0)<<2|3);
var1019 = core__flat___CString___to_s_unsafe(var1018, var1020, var1021, var1022, var1023);
var1017 = var1019;
varonce1016 = var1017;
}
((struct instance_core__NativeArray*)var1007)->values[2]=var1017;
} else {
var1007 = varonce1006;
varonce1006 = NULL;
}
((struct instance_core__NativeArray*)var1007)->values[1]=var_c_name;
{
var1024 = ((val*(*)(val* self))(var1007->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1007); /* native_to_s on <var1007:NativeArray[String]>*/
}
varonce1006 = var1007;
{
nitc___nitc__CodeWriter___add_decl(var1003, var1024); /* Direct call abstract_compiler$CodeWriter$add_decl on <var1003:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var1027 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var1027 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var1025 = var1027;
RET_LABEL1026:(void)0;
}
}
if (likely(varonce1028!=NULL)) {
var1029 = varonce1028;
} else {
var1030 = "const struct type *type;";
var1032 = (val*)(24l<<2|1);
var1033 = (val*)(24l<<2|1);
var1034 = (val*)((long)(0)<<2|3);
var1035 = (val*)((long)(0)<<2|3);
var1031 = core__flat___CString___to_s_unsafe(var1030, var1032, var1033, var1034, var1035);
var1029 = var1031;
varonce1028 = var1029;
}
{
nitc___nitc__CodeWriter___add_decl(var1025, var1029); /* Direct call abstract_compiler$CodeWriter$add_decl on <var1025:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var1038 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var1038 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var1036 = var1038;
RET_LABEL1037:(void)0;
}
}
if (likely(varonce1039!=NULL)) {
var1040 = varonce1039;
} else {
var1041 = "const struct class *class;";
var1043 = (val*)(26l<<2|1);
var1044 = (val*)(26l<<2|1);
var1045 = (val*)((long)(0)<<2|3);
var1046 = (val*)((long)(0)<<2|3);
var1042 = core__flat___CString___to_s_unsafe(var1041, var1043, var1044, var1045, var1046);
var1040 = var1042;
varonce1039 = var1040;
}
{
nitc___nitc__CodeWriter___add_decl(var1036, var1040); /* Direct call abstract_compiler$CodeWriter$add_decl on <var1036:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var1049 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var1049 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var1047 = var1049;
RET_LABEL1048:(void)0;
}
}
if (likely(varonce1050!=NULL)) {
var1051 = varonce1050;
} else {
var1052 = "int length;";
var1054 = (val*)(11l<<2|1);
var1055 = (val*)(11l<<2|1);
var1056 = (val*)((long)(0)<<2|3);
var1057 = (val*)((long)(0)<<2|3);
var1053 = core__flat___CString___to_s_unsafe(var1052, var1054, var1055, var1056, var1057);
var1051 = var1053;
varonce1050 = var1051;
}
{
nitc___nitc__CodeWriter___add_decl(var1047, var1051); /* Direct call abstract_compiler$CodeWriter$add_decl on <var1047:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var1060 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var1060 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var1058 = var1060;
RET_LABEL1059:(void)0;
}
}
if (likely(varonce1061!=NULL)) {
var1062 = varonce1061;
} else {
var1063 = "val* values[0];";
var1065 = (val*)(15l<<2|1);
var1066 = (val*)(15l<<2|1);
var1067 = (val*)((long)(0)<<2|3);
var1068 = (val*)((long)(0)<<2|3);
var1064 = core__flat___CString___to_s_unsafe(var1063, var1065, var1066, var1067, var1068);
var1062 = var1064;
varonce1061 = var1062;
}
{
nitc___nitc__CodeWriter___add_decl(var1058, var1062); /* Direct call abstract_compiler$CodeWriter$add_decl on <var1058:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var1071 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var1071 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var1069 = var1071;
RET_LABEL1070:(void)0;
}
}
if (likely(varonce1072!=NULL)) {
var1073 = varonce1072;
} else {
var1074 = "};";
var1076 = (val*)(2l<<2|1);
var1077 = (val*)(2l<<2|1);
var1078 = (val*)((long)(0)<<2|3);
var1079 = (val*)((long)(0)<<2|3);
var1075 = core__flat___CString___to_s_unsafe(var1074, var1076, var1077, var1078, var1079);
var1073 = var1075;
varonce1072 = var1073;
}
{
nitc___nitc__CodeWriter___add_decl(var1069, var1073); /* Direct call abstract_compiler$CodeWriter$add_decl on <var1069:CodeWriter>*/
}
if (unlikely(varonce1080==NULL)) {
var1081 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1082!=NULL)) {
var1083 = varonce1082;
} else {
var1084 = "NEW_";
var1086 = (val*)(4l<<2|1);
var1087 = (val*)(4l<<2|1);
var1088 = (val*)((long)(0)<<2|3);
var1089 = (val*)((long)(0)<<2|3);
var1085 = core__flat___CString___to_s_unsafe(var1084, var1086, var1087, var1088, var1089);
var1083 = var1085;
varonce1082 = var1083;
}
((struct instance_core__NativeArray*)var1081)->values[0]=var1083;
} else {
var1081 = varonce1080;
varonce1080 = NULL;
}
((struct instance_core__NativeArray*)var1081)->values[1]=var_c_name;
{
var1090 = ((val*(*)(val* self))(var1081->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1081); /* native_to_s on <var1081:NativeArray[String]>*/
}
varonce1080 = var1081;
if (unlikely(varonce1091==NULL)) {
var1092 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1093!=NULL)) {
var1094 = varonce1093;
} else {
var1095 = " NEW_";
var1097 = (val*)(5l<<2|1);
var1098 = (val*)(5l<<2|1);
var1099 = (val*)((long)(0)<<2|3);
var1100 = (val*)((long)(0)<<2|3);
var1096 = core__flat___CString___to_s_unsafe(var1095, var1097, var1098, var1099, var1100);
var1094 = var1096;
varonce1093 = var1094;
}
((struct instance_core__NativeArray*)var1092)->values[1]=var1094;
if (likely(varonce1101!=NULL)) {
var1102 = varonce1101;
} else {
var1103 = "(int length, const struct type* type);";
var1105 = (val*)(38l<<2|1);
var1106 = (val*)(38l<<2|1);
var1107 = (val*)((long)(0)<<2|3);
var1108 = (val*)((long)(0)<<2|3);
var1104 = core__flat___CString___to_s_unsafe(var1103, var1105, var1106, var1107, var1108);
var1102 = var1104;
varonce1101 = var1102;
}
((struct instance_core__NativeArray*)var1092)->values[3]=var1102;
} else {
var1092 = varonce1091;
varonce1091 = NULL;
}
{
var1109 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1092)->values[0]=var1109;
((struct instance_core__NativeArray*)var1092)->values[2]=var_c_name;
{
var1110 = ((val*(*)(val* self))(var1092->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1092); /* native_to_s on <var1092:NativeArray[String]>*/
}
varonce1091 = var1092;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var1090, var1110); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce1111==NULL)) {
var1112 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1113!=NULL)) {
var1114 = varonce1113;
} else {
var1115 = "/* allocate ";
var1117 = (val*)(12l<<2|1);
var1118 = (val*)(12l<<2|1);
var1119 = (val*)((long)(0)<<2|3);
var1120 = (val*)((long)(0)<<2|3);
var1116 = core__flat___CString___to_s_unsafe(var1115, var1117, var1118, var1119, var1120);
var1114 = var1116;
varonce1113 = var1114;
}
((struct instance_core__NativeArray*)var1112)->values[0]=var1114;
if (likely(varonce1121!=NULL)) {
var1122 = varonce1121;
} else {
var1123 = " */";
var1125 = (val*)(3l<<2|1);
var1126 = (val*)(3l<<2|1);
var1127 = (val*)((long)(0)<<2|3);
var1128 = (val*)((long)(0)<<2|3);
var1124 = core__flat___CString___to_s_unsafe(var1123, var1125, var1126, var1127, var1128);
var1122 = var1124;
varonce1121 = var1122;
}
((struct instance_core__NativeArray*)var1112)->values[2]=var1122;
} else {
var1112 = varonce1111;
varonce1111 = NULL;
}
{
var1129 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var1112)->values[1]=var1129;
{
var1130 = ((val*(*)(val* self))(var1112->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1112); /* native_to_s on <var1112:NativeArray[String]>*/
}
varonce1111 = var1112;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1130); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1131==NULL)) {
var1132 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1133!=NULL)) {
var1134 = varonce1133;
} else {
var1135 = " NEW_";
var1137 = (val*)(5l<<2|1);
var1138 = (val*)(5l<<2|1);
var1139 = (val*)((long)(0)<<2|3);
var1140 = (val*)((long)(0)<<2|3);
var1136 = core__flat___CString___to_s_unsafe(var1135, var1137, var1138, var1139, var1140);
var1134 = var1136;
varonce1133 = var1134;
}
((struct instance_core__NativeArray*)var1132)->values[1]=var1134;
if (likely(varonce1141!=NULL)) {
var1142 = varonce1141;
} else {
var1143 = "(int length, const struct type* type) {";
var1145 = (val*)(39l<<2|1);
var1146 = (val*)(39l<<2|1);
var1147 = (val*)((long)(0)<<2|3);
var1148 = (val*)((long)(0)<<2|3);
var1144 = core__flat___CString___to_s_unsafe(var1143, var1145, var1146, var1147, var1148);
var1142 = var1144;
varonce1141 = var1142;
}
((struct instance_core__NativeArray*)var1132)->values[3]=var1142;
} else {
var1132 = varonce1131;
varonce1131 = NULL;
}
{
var1149 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1132)->values[0]=var1149;
((struct instance_core__NativeArray*)var1132)->values[2]=var_c_name;
{
var1150 = ((val*(*)(val* self))(var1132->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1132); /* native_to_s on <var1132:NativeArray[String]>*/
}
varonce1131 = var1132;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1150); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce1151!=NULL)) {
var1152 = varonce1151;
} else {
var1153 = "self";
var1155 = (val*)(4l<<2|1);
var1156 = (val*)(4l<<2|1);
var1157 = (val*)((long)(0)<<2|3);
var1158 = (val*)((long)(0)<<2|3);
var1154 = core__flat___CString___to_s_unsafe(var1153, var1155, var1156, var1157, var1158);
var1152 = var1154;
varonce1151 = var1152;
}
{
var1159 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var1152);
}
var_res1160 = var1159;
if (unlikely(varonce1161==NULL)) {
var1162 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce1163!=NULL)) {
var1164 = varonce1163;
} else {
var1165 = "struct instance_";
var1167 = (val*)(16l<<2|1);
var1168 = (val*)(16l<<2|1);
var1169 = (val*)((long)(0)<<2|3);
var1170 = (val*)((long)(0)<<2|3);
var1166 = core__flat___CString___to_s_unsafe(var1165, var1167, var1168, var1169, var1170);
var1164 = var1166;
varonce1163 = var1164;
}
((struct instance_core__NativeArray*)var1162)->values[0]=var1164;
if (likely(varonce1171!=NULL)) {
var1172 = varonce1171;
} else {
var1173 = " *";
var1175 = (val*)(2l<<2|1);
var1176 = (val*)(2l<<2|1);
var1177 = (val*)((long)(0)<<2|3);
var1178 = (val*)((long)(0)<<2|3);
var1174 = core__flat___CString___to_s_unsafe(var1173, var1175, var1176, var1177, var1178);
var1172 = var1174;
varonce1171 = var1172;
}
((struct instance_core__NativeArray*)var1162)->values[2]=var1172;
if (likely(varonce1179!=NULL)) {
var1180 = varonce1179;
} else {
var1181 = ";";
var1183 = (val*)(1l<<2|1);
var1184 = (val*)(1l<<2|1);
var1185 = (val*)((long)(0)<<2|3);
var1186 = (val*)((long)(0)<<2|3);
var1182 = core__flat___CString___to_s_unsafe(var1181, var1183, var1184, var1185, var1186);
var1180 = var1182;
varonce1179 = var1180;
}
((struct instance_core__NativeArray*)var1162)->values[4]=var1180;
} else {
var1162 = varonce1161;
varonce1161 = NULL;
}
((struct instance_core__NativeArray*)var1162)->values[1]=var_c_name;
((struct instance_core__NativeArray*)var1162)->values[3]=var_res1160;
{
var1187 = ((val*(*)(val* self))(var1162->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1162); /* native_to_s on <var1162:NativeArray[String]>*/
}
varonce1161 = var1162;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1187); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var1188 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var1189 = core___core__SequenceRead___Collection__first(var1188);
}
var_mtype_elt = var1189;
if (unlikely(varonce1190==NULL)) {
var1191 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce1192!=NULL)) {
var1193 = varonce1192;
} else {
var1194 = "sizeof(struct instance_";
var1196 = (val*)(23l<<2|1);
var1197 = (val*)(23l<<2|1);
var1198 = (val*)((long)(0)<<2|3);
var1199 = (val*)((long)(0)<<2|3);
var1195 = core__flat___CString___to_s_unsafe(var1194, var1196, var1197, var1198, var1199);
var1193 = var1195;
varonce1192 = var1193;
}
((struct instance_core__NativeArray*)var1191)->values[0]=var1193;
if (likely(varonce1200!=NULL)) {
var1201 = varonce1200;
} else {
var1202 = ") + length*sizeof(";
var1204 = (val*)(18l<<2|1);
var1205 = (val*)(18l<<2|1);
var1206 = (val*)((long)(0)<<2|3);
var1207 = (val*)((long)(0)<<2|3);
var1203 = core__flat___CString___to_s_unsafe(var1202, var1204, var1205, var1206, var1207);
var1201 = var1203;
varonce1200 = var1201;
}
((struct instance_core__NativeArray*)var1191)->values[2]=var1201;
if (likely(varonce1208!=NULL)) {
var1209 = varonce1208;
} else {
var1210 = ")";
var1212 = (val*)(1l<<2|1);
var1213 = (val*)(1l<<2|1);
var1214 = (val*)((long)(0)<<2|3);
var1215 = (val*)((long)(0)<<2|3);
var1211 = core__flat___CString___to_s_unsafe(var1210, var1212, var1213, var1214, var1215);
var1209 = var1211;
varonce1208 = var1209;
}
((struct instance_core__NativeArray*)var1191)->values[4]=var1209;
} else {
var1191 = varonce1190;
varonce1190 = NULL;
}
((struct instance_core__NativeArray*)var1191)->values[1]=var_c_name;
{
var1216 = ((val*(*)(val* self))(var_mtype_elt->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype_elt); /* ctype on <var_mtype_elt:MType>*/
}
((struct instance_core__NativeArray*)var1191)->values[3]=var1216;
{
var1217 = ((val*(*)(val* self))(var1191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1191); /* native_to_s on <var1191:NativeArray[String]>*/
}
varonce1190 = var1191;
{
var1218 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var1219 = nitc___nitc__AbstractCompilerVisitor___nit_alloc(var_v, var1217, var1218);
}
var_alloc1220 = var1219;
if (unlikely(varonce1221==NULL)) {
var1222 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1223!=NULL)) {
var1224 = varonce1223;
} else {
var1225 = " = ";
var1227 = (val*)(3l<<2|1);
var1228 = (val*)(3l<<2|1);
var1229 = (val*)((long)(0)<<2|3);
var1230 = (val*)((long)(0)<<2|3);
var1226 = core__flat___CString___to_s_unsafe(var1225, var1227, var1228, var1229, var1230);
var1224 = var1226;
varonce1223 = var1224;
}
((struct instance_core__NativeArray*)var1222)->values[1]=var1224;
if (likely(varonce1231!=NULL)) {
var1232 = varonce1231;
} else {
var1233 = ";";
var1235 = (val*)(1l<<2|1);
var1236 = (val*)(1l<<2|1);
var1237 = (val*)((long)(0)<<2|3);
var1238 = (val*)((long)(0)<<2|3);
var1234 = core__flat___CString___to_s_unsafe(var1233, var1235, var1236, var1237, var1238);
var1232 = var1234;
varonce1231 = var1232;
}
((struct instance_core__NativeArray*)var1222)->values[3]=var1232;
} else {
var1222 = varonce1221;
varonce1221 = NULL;
}
((struct instance_core__NativeArray*)var1222)->values[0]=var_res1160;
((struct instance_core__NativeArray*)var1222)->values[2]=var_alloc1220;
{
var1239 = ((val*(*)(val* self))(var1222->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1222); /* native_to_s on <var1222:NativeArray[String]>*/
}
varonce1221 = var1222;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1239); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1240==NULL)) {
var1241 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1242!=NULL)) {
var1243 = varonce1242;
} else {
var1244 = "->type = type;";
var1246 = (val*)(14l<<2|1);
var1247 = (val*)(14l<<2|1);
var1248 = (val*)((long)(0)<<2|3);
var1249 = (val*)((long)(0)<<2|3);
var1245 = core__flat___CString___to_s_unsafe(var1244, var1246, var1247, var1248, var1249);
var1243 = var1245;
varonce1242 = var1243;
}
((struct instance_core__NativeArray*)var1241)->values[1]=var1243;
} else {
var1241 = varonce1240;
varonce1240 = NULL;
}
((struct instance_core__NativeArray*)var1241)->values[0]=var_res1160;
{
var1250 = ((val*(*)(val* self))(var1241->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1241); /* native_to_s on <var1241:NativeArray[String]>*/
}
varonce1240 = var1241;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1250); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce1251!=NULL)) {
var1252 = varonce1251;
} else {
var1253 = "type";
var1255 = (val*)(4l<<2|1);
var1256 = (val*)(4l<<2|1);
var1257 = (val*)((long)(0)<<2|3);
var1258 = (val*)((long)(0)<<2|3);
var1254 = core__flat___CString___to_s_unsafe(var1253, var1255, var1256, var1257, var1258);
var1252 = var1254;
varonce1251 = var1252;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var1252); /* Direct call separate_compiler$SeparateCompiler$hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce1259==NULL)) {
var1260 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1261!=NULL)) {
var1262 = varonce1261;
} else {
var1263 = "class_";
var1265 = (val*)(6l<<2|1);
var1266 = (val*)(6l<<2|1);
var1267 = (val*)((long)(0)<<2|3);
var1268 = (val*)((long)(0)<<2|3);
var1264 = core__flat___CString___to_s_unsafe(var1263, var1265, var1266, var1267, var1268);
var1262 = var1264;
varonce1261 = var1262;
}
((struct instance_core__NativeArray*)var1260)->values[0]=var1262;
} else {
var1260 = varonce1259;
varonce1259 = NULL;
}
((struct instance_core__NativeArray*)var1260)->values[1]=var_c_name;
{
var1269 = ((val*(*)(val* self))(var1260->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1260); /* native_to_s on <var1260:NativeArray[String]>*/
}
varonce1259 = var1260;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var1269); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1270==NULL)) {
var1271 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1272!=NULL)) {
var1273 = varonce1272;
} else {
var1274 = "->class = &class_";
var1276 = (val*)(17l<<2|1);
var1277 = (val*)(17l<<2|1);
var1278 = (val*)((long)(0)<<2|3);
var1279 = (val*)((long)(0)<<2|3);
var1275 = core__flat___CString___to_s_unsafe(var1274, var1276, var1277, var1278, var1279);
var1273 = var1275;
varonce1272 = var1273;
}
((struct instance_core__NativeArray*)var1271)->values[1]=var1273;
if (likely(varonce1280!=NULL)) {
var1281 = varonce1280;
} else {
var1282 = ";";
var1284 = (val*)(1l<<2|1);
var1285 = (val*)(1l<<2|1);
var1286 = (val*)((long)(0)<<2|3);
var1287 = (val*)((long)(0)<<2|3);
var1283 = core__flat___CString___to_s_unsafe(var1282, var1284, var1285, var1286, var1287);
var1281 = var1283;
varonce1280 = var1281;
}
((struct instance_core__NativeArray*)var1271)->values[3]=var1281;
} else {
var1271 = varonce1270;
varonce1270 = NULL;
}
((struct instance_core__NativeArray*)var1271)->values[0]=var_res1160;
((struct instance_core__NativeArray*)var1271)->values[2]=var_c_name;
{
var1288 = ((val*(*)(val* self))(var1271->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1271); /* native_to_s on <var1271:NativeArray[String]>*/
}
varonce1270 = var1271;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1288); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1289==NULL)) {
var1290 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1291!=NULL)) {
var1292 = varonce1291;
} else {
var1293 = "->length = length;";
var1295 = (val*)(18l<<2|1);
var1296 = (val*)(18l<<2|1);
var1297 = (val*)((long)(0)<<2|3);
var1298 = (val*)((long)(0)<<2|3);
var1294 = core__flat___CString___to_s_unsafe(var1293, var1295, var1296, var1297, var1298);
var1292 = var1294;
varonce1291 = var1292;
}
((struct instance_core__NativeArray*)var1290)->values[1]=var1292;
} else {
var1290 = varonce1289;
varonce1289 = NULL;
}
((struct instance_core__NativeArray*)var1290)->values[0]=var_res1160;
{
var1299 = ((val*(*)(val* self))(var1290->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1290); /* native_to_s on <var1290:NativeArray[String]>*/
}
varonce1289 = var1290;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1299); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1300==NULL)) {
var1301 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1302!=NULL)) {
var1303 = varonce1302;
} else {
var1304 = "return (val*)";
var1306 = (val*)(13l<<2|1);
var1307 = (val*)(13l<<2|1);
var1308 = (val*)((long)(0)<<2|3);
var1309 = (val*)((long)(0)<<2|3);
var1305 = core__flat___CString___to_s_unsafe(var1304, var1306, var1307, var1308, var1309);
var1303 = var1305;
varonce1302 = var1303;
}
((struct instance_core__NativeArray*)var1301)->values[0]=var1303;
if (likely(varonce1310!=NULL)) {
var1311 = varonce1310;
} else {
var1312 = ";";
var1314 = (val*)(1l<<2|1);
var1315 = (val*)(1l<<2|1);
var1316 = (val*)((long)(0)<<2|3);
var1317 = (val*)((long)(0)<<2|3);
var1313 = core__flat___CString___to_s_unsafe(var1312, var1314, var1315, var1316, var1317);
var1311 = var1313;
varonce1310 = var1311;
}
((struct instance_core__NativeArray*)var1301)->values[2]=var1311;
} else {
var1301 = varonce1300;
varonce1300 = NULL;
}
((struct instance_core__NativeArray*)var1301)->values[1]=var_res1160;
{
var1318 = ((val*(*)(val* self))(var1301->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1301); /* native_to_s on <var1301:NativeArray[String]>*/
}
varonce1300 = var1301;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1318); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce1319!=NULL)) {
var1320 = varonce1319;
} else {
var1321 = "}";
var1323 = (val*)(1l<<2|1);
var1324 = (val*)(1l<<2|1);
var1325 = (val*)((long)(0)<<2|3);
var1326 = (val*)((long)(0)<<2|3);
var1322 = core__flat___CString___to_s_unsafe(var1321, var1323, var1324, var1325, var1326);
var1320 = var1322;
varonce1319 = var1320;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1320); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var1330 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var1330 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1328 = var1330;
RET_LABEL1329:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var1328) on <var1328:MClass> */
var1333 = var1328->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var1328:MClass> */
if (unlikely(var1333 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var1331 = var1333;
RET_LABEL1332:(void)0;
}
}
var1334 = glob_sys;
{
var1335 = nitc__model___core__Sys___extern_kind(var1334);
}
{
{ /* Inline kernel$Object$== (var1331,var1335) on <var1331:MClassKind> */
var_other38 = var1335;
{
{ /* Inline kernel$Object$is_same_instance (var1331,var_other38) on <var1331:MClassKind> */
var1340 = var1331 == var_other38;
var1338 = var1340;
goto RET_LABEL1339;
RET_LABEL1339:(void)0;
}
}
var1336 = var1338;
goto RET_LABEL1337;
RET_LABEL1337:(void)0;
}
}
var_1341 = var1336;
if (var1336){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var1344 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var1344 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1342 = var1344;
RET_LABEL1343:(void)0;
}
}
{
{ /* Inline model$MClass$name (var1342) on <var1342:MClass> */
var1347 = var1342->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var1342:MClass> */
if (unlikely(var1347 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var1345 = var1347;
RET_LABEL1346:(void)0;
}
}
if (likely(varonce1348!=NULL)) {
var1349 = varonce1348;
} else {
var1350 = "CString";
var1352 = (val*)(7l<<2|1);
var1353 = (val*)(7l<<2|1);
var1354 = (val*)((long)(0)<<2|3);
var1355 = (val*)((long)(0)<<2|3);
var1351 = core__flat___CString___to_s_unsafe(var1350, var1352, var1353, var1354, var1355);
var1349 = var1351;
varonce1348 = var1349;
}
{
{ /* Inline kernel$Object$!= (var1345,var1349) on <var1345:String> */
var_other = var1349;
{
var1358 = ((short int(*)(val* self, val* p0))(var1345->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1345, var_other); /* == on <var1345:String>*/
}
var1359 = !var1358;
var1356 = var1359;
goto RET_LABEL1357;
RET_LABEL1357:(void)0;
}
}
var1327 = var1356;
} else {
var1327 = var_1341;
}
if (var1327){
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateCompiler> */
var1362 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var1362 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var1360 = var1362;
RET_LABEL1361:(void)0;
}
}
{
var1363 = nitc__model___MModule___pointer_type(var1360);
}
var_pointer_type = var1363;
if (unlikely(varonce1364==NULL)) {
var1365 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1366!=NULL)) {
var1367 = varonce1366;
} else {
var1368 = "NEW_";
var1370 = (val*)(4l<<2|1);
var1371 = (val*)(4l<<2|1);
var1372 = (val*)((long)(0)<<2|3);
var1373 = (val*)((long)(0)<<2|3);
var1369 = core__flat___CString___to_s_unsafe(var1368, var1370, var1371, var1372, var1373);
var1367 = var1369;
varonce1366 = var1367;
}
((struct instance_core__NativeArray*)var1365)->values[0]=var1367;
} else {
var1365 = varonce1364;
varonce1364 = NULL;
}
((struct instance_core__NativeArray*)var1365)->values[1]=var_c_name;
{
var1374 = ((val*(*)(val* self))(var1365->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1365); /* native_to_s on <var1365:NativeArray[String]>*/
}
varonce1364 = var1365;
if (unlikely(varonce1375==NULL)) {
var1376 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1377!=NULL)) {
var1378 = varonce1377;
} else {
var1379 = " NEW_";
var1381 = (val*)(5l<<2|1);
var1382 = (val*)(5l<<2|1);
var1383 = (val*)((long)(0)<<2|3);
var1384 = (val*)((long)(0)<<2|3);
var1380 = core__flat___CString___to_s_unsafe(var1379, var1381, var1382, var1383, var1384);
var1378 = var1380;
varonce1377 = var1378;
}
((struct instance_core__NativeArray*)var1376)->values[1]=var1378;
if (likely(varonce1385!=NULL)) {
var1386 = varonce1385;
} else {
var1387 = "(const struct type* type);";
var1389 = (val*)(26l<<2|1);
var1390 = (val*)(26l<<2|1);
var1391 = (val*)((long)(0)<<2|3);
var1392 = (val*)((long)(0)<<2|3);
var1388 = core__flat___CString___to_s_unsafe(var1387, var1389, var1390, var1391, var1392);
var1386 = var1388;
varonce1385 = var1386;
}
((struct instance_core__NativeArray*)var1376)->values[3]=var1386;
} else {
var1376 = varonce1375;
varonce1375 = NULL;
}
{
var1393 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1376)->values[0]=var1393;
((struct instance_core__NativeArray*)var1376)->values[2]=var_c_name;
{
var1394 = ((val*(*)(val* self))(var1376->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1376); /* native_to_s on <var1376:NativeArray[String]>*/
}
varonce1375 = var1376;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var1374, var1394); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce1395==NULL)) {
var1396 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1397!=NULL)) {
var1398 = varonce1397;
} else {
var1399 = "/* allocate extern ";
var1401 = (val*)(19l<<2|1);
var1402 = (val*)(19l<<2|1);
var1403 = (val*)((long)(0)<<2|3);
var1404 = (val*)((long)(0)<<2|3);
var1400 = core__flat___CString___to_s_unsafe(var1399, var1401, var1402, var1403, var1404);
var1398 = var1400;
varonce1397 = var1398;
}
((struct instance_core__NativeArray*)var1396)->values[0]=var1398;
if (likely(varonce1405!=NULL)) {
var1406 = varonce1405;
} else {
var1407 = " */";
var1409 = (val*)(3l<<2|1);
var1410 = (val*)(3l<<2|1);
var1411 = (val*)((long)(0)<<2|3);
var1412 = (val*)((long)(0)<<2|3);
var1408 = core__flat___CString___to_s_unsafe(var1407, var1409, var1410, var1411, var1412);
var1406 = var1408;
varonce1405 = var1406;
}
((struct instance_core__NativeArray*)var1396)->values[2]=var1406;
} else {
var1396 = varonce1395;
varonce1395 = NULL;
}
{
var1413 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var1396)->values[1]=var1413;
{
var1414 = ((val*(*)(val* self))(var1396->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1396); /* native_to_s on <var1396:NativeArray[String]>*/
}
varonce1395 = var1396;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1414); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1415==NULL)) {
var1416 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1417!=NULL)) {
var1418 = varonce1417;
} else {
var1419 = " NEW_";
var1421 = (val*)(5l<<2|1);
var1422 = (val*)(5l<<2|1);
var1423 = (val*)((long)(0)<<2|3);
var1424 = (val*)((long)(0)<<2|3);
var1420 = core__flat___CString___to_s_unsafe(var1419, var1421, var1422, var1423, var1424);
var1418 = var1420;
varonce1417 = var1418;
}
((struct instance_core__NativeArray*)var1416)->values[1]=var1418;
if (likely(varonce1425!=NULL)) {
var1426 = varonce1425;
} else {
var1427 = "(const struct type* type) {";
var1429 = (val*)(27l<<2|1);
var1430 = (val*)(27l<<2|1);
var1431 = (val*)((long)(0)<<2|3);
var1432 = (val*)((long)(0)<<2|3);
var1428 = core__flat___CString___to_s_unsafe(var1427, var1429, var1430, var1431, var1432);
var1426 = var1428;
varonce1425 = var1426;
}
((struct instance_core__NativeArray*)var1416)->values[3]=var1426;
} else {
var1416 = varonce1415;
varonce1415 = NULL;
}
{
var1433 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1416)->values[0]=var1433;
((struct instance_core__NativeArray*)var1416)->values[2]=var_c_name;
{
var1434 = ((val*(*)(val* self))(var1416->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1416); /* native_to_s on <var1416:NativeArray[String]>*/
}
varonce1415 = var1416;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1434); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce1435==NULL)) {
var1436 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1437!=NULL)) {
var1438 = varonce1437;
} else {
var1439 = " is DEAD";
var1441 = (val*)(8l<<2|1);
var1442 = (val*)(8l<<2|1);
var1443 = (val*)((long)(0)<<2|3);
var1444 = (val*)((long)(0)<<2|3);
var1440 = core__flat___CString___to_s_unsafe(var1439, var1441, var1442, var1443, var1444);
var1438 = var1440;
varonce1437 = var1438;
}
((struct instance_core__NativeArray*)var1436)->values[1]=var1438;
} else {
var1436 = varonce1435;
varonce1435 = NULL;
}
{
var1445 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var1436)->values[0]=var1445;
{
var1446 = ((val*(*)(val* self))(var1436->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1436); /* native_to_s on <var1436:NativeArray[String]>*/
}
varonce1435 = var1436;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var1446); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce1447!=NULL)) {
var1448 = varonce1447;
} else {
var1449 = "self";
var1451 = (val*)(4l<<2|1);
var1452 = (val*)(4l<<2|1);
var1453 = (val*)((long)(0)<<2|3);
var1454 = (val*)((long)(0)<<2|3);
var1450 = core__flat___CString___to_s_unsafe(var1449, var1451, var1452, var1453, var1454);
var1448 = var1450;
varonce1447 = var1448;
}
{
var1455 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1448);
}
var_res1456 = var1455;
{
{ /* Inline abstract_compiler$RuntimeVariable$is_exact= (var_res1456,1) on <var_res1456:RuntimeVariable> */
var_res1456->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res1456:RuntimeVariable> */
RET_LABEL1457:(void)0;
}
}
if (unlikely(varonce1458==NULL)) {
var1459 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1460!=NULL)) {
var1461 = varonce1460;
} else {
var1462 = "sizeof(struct instance_";
var1464 = (val*)(23l<<2|1);
var1465 = (val*)(23l<<2|1);
var1466 = (val*)((long)(0)<<2|3);
var1467 = (val*)((long)(0)<<2|3);
var1463 = core__flat___CString___to_s_unsafe(var1462, var1464, var1465, var1466, var1467);
var1461 = var1463;
varonce1460 = var1461;
}
((struct instance_core__NativeArray*)var1459)->values[0]=var1461;
if (likely(varonce1468!=NULL)) {
var1469 = varonce1468;
} else {
var1470 = ")";
var1472 = (val*)(1l<<2|1);
var1473 = (val*)(1l<<2|1);
var1474 = (val*)((long)(0)<<2|3);
var1475 = (val*)((long)(0)<<2|3);
var1471 = core__flat___CString___to_s_unsafe(var1470, var1472, var1473, var1474, var1475);
var1469 = var1471;
varonce1468 = var1469;
}
((struct instance_core__NativeArray*)var1459)->values[2]=var1469;
} else {
var1459 = varonce1458;
varonce1458 = NULL;
}
{
var1476 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var1459)->values[1]=var1476;
{
var1477 = ((val*(*)(val* self))(var1459->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1459); /* native_to_s on <var1459:NativeArray[String]>*/
}
varonce1458 = var1459;
{
var1478 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var1479 = nitc___nitc__AbstractCompilerVisitor___nit_alloc(var_v, var1477, var1478);
}
var_alloc1480 = var1479;
if (unlikely(varonce1481==NULL)) {
var1482 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1483!=NULL)) {
var1484 = varonce1483;
} else {
var1485 = " = ";
var1487 = (val*)(3l<<2|1);
var1488 = (val*)(3l<<2|1);
var1489 = (val*)((long)(0)<<2|3);
var1490 = (val*)((long)(0)<<2|3);
var1486 = core__flat___CString___to_s_unsafe(var1485, var1487, var1488, var1489, var1490);
var1484 = var1486;
varonce1483 = var1484;
}
((struct instance_core__NativeArray*)var1482)->values[1]=var1484;
if (likely(varonce1491!=NULL)) {
var1492 = varonce1491;
} else {
var1493 = ";";
var1495 = (val*)(1l<<2|1);
var1496 = (val*)(1l<<2|1);
var1497 = (val*)((long)(0)<<2|3);
var1498 = (val*)((long)(0)<<2|3);
var1494 = core__flat___CString___to_s_unsafe(var1493, var1495, var1496, var1497, var1498);
var1492 = var1494;
varonce1491 = var1492;
}
((struct instance_core__NativeArray*)var1482)->values[3]=var1492;
} else {
var1482 = varonce1481;
varonce1481 = NULL;
}
{
var1499 = ((val*(*)(val* self))(var_res1456->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1456); /* to_s on <var_res1456:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1482)->values[0]=var1499;
((struct instance_core__NativeArray*)var1482)->values[2]=var_alloc1480;
{
var1500 = ((val*(*)(val* self))(var1482->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1482); /* native_to_s on <var1482:NativeArray[String]>*/
}
varonce1481 = var1482;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1500); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1501==NULL)) {
var1502 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1503!=NULL)) {
var1504 = varonce1503;
} else {
var1505 = "->type = type;";
var1507 = (val*)(14l<<2|1);
var1508 = (val*)(14l<<2|1);
var1509 = (val*)((long)(0)<<2|3);
var1510 = (val*)((long)(0)<<2|3);
var1506 = core__flat___CString___to_s_unsafe(var1505, var1507, var1508, var1509, var1510);
var1504 = var1506;
varonce1503 = var1504;
}
((struct instance_core__NativeArray*)var1502)->values[1]=var1504;
} else {
var1502 = varonce1501;
varonce1501 = NULL;
}
{
var1511 = ((val*(*)(val* self))(var_res1456->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1456); /* to_s on <var_res1456:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1502)->values[0]=var1511;
{
var1512 = ((val*(*)(val* self))(var1502->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1502); /* native_to_s on <var1502:NativeArray[String]>*/
}
varonce1501 = var1502;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1512); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce1513!=NULL)) {
var1514 = varonce1513;
} else {
var1515 = "type";
var1517 = (val*)(4l<<2|1);
var1518 = (val*)(4l<<2|1);
var1519 = (val*)((long)(0)<<2|3);
var1520 = (val*)((long)(0)<<2|3);
var1516 = core__flat___CString___to_s_unsafe(var1515, var1517, var1518, var1519, var1520);
var1514 = var1516;
varonce1513 = var1514;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var1514); /* Direct call separate_compiler$SeparateCompiler$hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce1521==NULL)) {
var1522 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1523!=NULL)) {
var1524 = varonce1523;
} else {
var1525 = "class_";
var1527 = (val*)(6l<<2|1);
var1528 = (val*)(6l<<2|1);
var1529 = (val*)((long)(0)<<2|3);
var1530 = (val*)((long)(0)<<2|3);
var1526 = core__flat___CString___to_s_unsafe(var1525, var1527, var1528, var1529, var1530);
var1524 = var1526;
varonce1523 = var1524;
}
((struct instance_core__NativeArray*)var1522)->values[0]=var1524;
} else {
var1522 = varonce1521;
varonce1521 = NULL;
}
((struct instance_core__NativeArray*)var1522)->values[1]=var_c_name;
{
var1531 = ((val*(*)(val* self))(var1522->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1522); /* native_to_s on <var1522:NativeArray[String]>*/
}
varonce1521 = var1522;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var1531); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1532==NULL)) {
var1533 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1534!=NULL)) {
var1535 = varonce1534;
} else {
var1536 = "->class = &class_";
var1538 = (val*)(17l<<2|1);
var1539 = (val*)(17l<<2|1);
var1540 = (val*)((long)(0)<<2|3);
var1541 = (val*)((long)(0)<<2|3);
var1537 = core__flat___CString___to_s_unsafe(var1536, var1538, var1539, var1540, var1541);
var1535 = var1537;
varonce1534 = var1535;
}
((struct instance_core__NativeArray*)var1533)->values[1]=var1535;
if (likely(varonce1542!=NULL)) {
var1543 = varonce1542;
} else {
var1544 = ";";
var1546 = (val*)(1l<<2|1);
var1547 = (val*)(1l<<2|1);
var1548 = (val*)((long)(0)<<2|3);
var1549 = (val*)((long)(0)<<2|3);
var1545 = core__flat___CString___to_s_unsafe(var1544, var1546, var1547, var1548, var1549);
var1543 = var1545;
varonce1542 = var1543;
}
((struct instance_core__NativeArray*)var1533)->values[3]=var1543;
} else {
var1533 = varonce1532;
varonce1532 = NULL;
}
{
var1550 = ((val*(*)(val* self))(var_res1456->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1456); /* to_s on <var_res1456:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1533)->values[0]=var1550;
((struct instance_core__NativeArray*)var1533)->values[2]=var_c_name;
{
var1551 = ((val*(*)(val* self))(var1533->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1533); /* native_to_s on <var1533:NativeArray[String]>*/
}
varonce1532 = var1533;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1551); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1552==NULL)) {
var1553 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce1554!=NULL)) {
var1555 = varonce1554;
} else {
var1556 = "((struct instance_";
var1558 = (val*)(18l<<2|1);
var1559 = (val*)(18l<<2|1);
var1560 = (val*)((long)(0)<<2|3);
var1561 = (val*)((long)(0)<<2|3);
var1557 = core__flat___CString___to_s_unsafe(var1556, var1558, var1559, var1560, var1561);
var1555 = var1557;
varonce1554 = var1555;
}
((struct instance_core__NativeArray*)var1553)->values[0]=var1555;
if (likely(varonce1562!=NULL)) {
var1563 = varonce1562;
} else {
var1564 = "*)";
var1566 = (val*)(2l<<2|1);
var1567 = (val*)(2l<<2|1);
var1568 = (val*)((long)(0)<<2|3);
var1569 = (val*)((long)(0)<<2|3);
var1565 = core__flat___CString___to_s_unsafe(var1564, var1566, var1567, var1568, var1569);
var1563 = var1565;
varonce1562 = var1563;
}
((struct instance_core__NativeArray*)var1553)->values[2]=var1563;
if (likely(varonce1570!=NULL)) {
var1571 = varonce1570;
} else {
var1572 = ")->value = NULL;";
var1574 = (val*)(16l<<2|1);
var1575 = (val*)(16l<<2|1);
var1576 = (val*)((long)(0)<<2|3);
var1577 = (val*)((long)(0)<<2|3);
var1573 = core__flat___CString___to_s_unsafe(var1572, var1574, var1575, var1576, var1577);
var1571 = var1573;
varonce1570 = var1571;
}
((struct instance_core__NativeArray*)var1553)->values[4]=var1571;
} else {
var1553 = varonce1552;
varonce1552 = NULL;
}
{
var1578 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var1553)->values[1]=var1578;
{
var1579 = ((val*(*)(val* self))(var_res1456->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1456); /* to_s on <var_res1456:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1553)->values[3]=var1579;
{
var1580 = ((val*(*)(val* self))(var1553->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1553); /* native_to_s on <var1553:NativeArray[String]>*/
}
varonce1552 = var1553;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1580); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1581==NULL)) {
var1582 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1583!=NULL)) {
var1584 = varonce1583;
} else {
var1585 = "return ";
var1587 = (val*)(7l<<2|1);
var1588 = (val*)(7l<<2|1);
var1589 = (val*)((long)(0)<<2|3);
var1590 = (val*)((long)(0)<<2|3);
var1586 = core__flat___CString___to_s_unsafe(var1585, var1587, var1588, var1589, var1590);
var1584 = var1586;
varonce1583 = var1584;
}
((struct instance_core__NativeArray*)var1582)->values[0]=var1584;
if (likely(varonce1591!=NULL)) {
var1592 = varonce1591;
} else {
var1593 = ";";
var1595 = (val*)(1l<<2|1);
var1596 = (val*)(1l<<2|1);
var1597 = (val*)((long)(0)<<2|3);
var1598 = (val*)((long)(0)<<2|3);
var1594 = core__flat___CString___to_s_unsafe(var1593, var1595, var1596, var1597, var1598);
var1592 = var1594;
varonce1591 = var1592;
}
((struct instance_core__NativeArray*)var1582)->values[2]=var1592;
} else {
var1582 = varonce1581;
varonce1581 = NULL;
}
{
var1599 = ((val*(*)(val* self))(var_res1456->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1456); /* to_s on <var_res1456:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1582)->values[1]=var1599;
{
var1600 = ((val*(*)(val* self))(var1582->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1582); /* native_to_s on <var1582:NativeArray[String]>*/
}
varonce1581 = var1582;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1600); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce1601!=NULL)) {
var1602 = varonce1601;
} else {
var1603 = "}";
var1605 = (val*)(1l<<2|1);
var1606 = (val*)(1l<<2|1);
var1607 = (val*)((long)(0)<<2|3);
var1608 = (val*)((long)(0)<<2|3);
var1604 = core__flat___CString___to_s_unsafe(var1603, var1605, var1606, var1607, var1608);
var1602 = var1604;
varonce1601 = var1602;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1602); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
if (unlikely(varonce1609==NULL)) {
var1610 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1611!=NULL)) {
var1612 = varonce1611;
} else {
var1613 = "NEW_";
var1615 = (val*)(4l<<2|1);
var1616 = (val*)(4l<<2|1);
var1617 = (val*)((long)(0)<<2|3);
var1618 = (val*)((long)(0)<<2|3);
var1614 = core__flat___CString___to_s_unsafe(var1613, var1615, var1616, var1617, var1618);
var1612 = var1614;
varonce1611 = var1612;
}
((struct instance_core__NativeArray*)var1610)->values[0]=var1612;
} else {
var1610 = varonce1609;
varonce1609 = NULL;
}
((struct instance_core__NativeArray*)var1610)->values[1]=var_c_name;
{
var1619 = ((val*(*)(val* self))(var1610->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1610); /* native_to_s on <var1610:NativeArray[String]>*/
}
varonce1609 = var1610;
if (unlikely(varonce1620==NULL)) {
var1621 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1622!=NULL)) {
var1623 = varonce1622;
} else {
var1624 = " NEW_";
var1626 = (val*)(5l<<2|1);
var1627 = (val*)(5l<<2|1);
var1628 = (val*)((long)(0)<<2|3);
var1629 = (val*)((long)(0)<<2|3);
var1625 = core__flat___CString___to_s_unsafe(var1624, var1626, var1627, var1628, var1629);
var1623 = var1625;
varonce1622 = var1623;
}
((struct instance_core__NativeArray*)var1621)->values[1]=var1623;
if (likely(varonce1630!=NULL)) {
var1631 = varonce1630;
} else {
var1632 = "(const struct type* type);";
var1634 = (val*)(26l<<2|1);
var1635 = (val*)(26l<<2|1);
var1636 = (val*)((long)(0)<<2|3);
var1637 = (val*)((long)(0)<<2|3);
var1633 = core__flat___CString___to_s_unsafe(var1632, var1634, var1635, var1636, var1637);
var1631 = var1633;
varonce1630 = var1631;
}
((struct instance_core__NativeArray*)var1621)->values[3]=var1631;
} else {
var1621 = varonce1620;
varonce1620 = NULL;
}
{
var1638 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1621)->values[0]=var1638;
((struct instance_core__NativeArray*)var1621)->values[2]=var_c_name;
{
var1639 = ((val*(*)(val* self))(var1621->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1621); /* native_to_s on <var1621:NativeArray[String]>*/
}
varonce1620 = var1621;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var1619, var1639); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce1640==NULL)) {
var1641 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1642!=NULL)) {
var1643 = varonce1642;
} else {
var1644 = "/* allocate ";
var1646 = (val*)(12l<<2|1);
var1647 = (val*)(12l<<2|1);
var1648 = (val*)((long)(0)<<2|3);
var1649 = (val*)((long)(0)<<2|3);
var1645 = core__flat___CString___to_s_unsafe(var1644, var1646, var1647, var1648, var1649);
var1643 = var1645;
varonce1642 = var1643;
}
((struct instance_core__NativeArray*)var1641)->values[0]=var1643;
if (likely(varonce1650!=NULL)) {
var1651 = varonce1650;
} else {
var1652 = " */";
var1654 = (val*)(3l<<2|1);
var1655 = (val*)(3l<<2|1);
var1656 = (val*)((long)(0)<<2|3);
var1657 = (val*)((long)(0)<<2|3);
var1653 = core__flat___CString___to_s_unsafe(var1652, var1654, var1655, var1656, var1657);
var1651 = var1653;
varonce1650 = var1651;
}
((struct instance_core__NativeArray*)var1641)->values[2]=var1651;
} else {
var1641 = varonce1640;
varonce1640 = NULL;
}
{
var1658 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var1641)->values[1]=var1658;
{
var1659 = ((val*(*)(val* self))(var1641->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1641); /* native_to_s on <var1641:NativeArray[String]>*/
}
varonce1640 = var1641;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1659); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1660==NULL)) {
var1661 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1662!=NULL)) {
var1663 = varonce1662;
} else {
var1664 = " NEW_";
var1666 = (val*)(5l<<2|1);
var1667 = (val*)(5l<<2|1);
var1668 = (val*)((long)(0)<<2|3);
var1669 = (val*)((long)(0)<<2|3);
var1665 = core__flat___CString___to_s_unsafe(var1664, var1666, var1667, var1668, var1669);
var1663 = var1665;
varonce1662 = var1663;
}
((struct instance_core__NativeArray*)var1661)->values[1]=var1663;
if (likely(varonce1670!=NULL)) {
var1671 = varonce1670;
} else {
var1672 = "(const struct type* type) {";
var1674 = (val*)(27l<<2|1);
var1675 = (val*)(27l<<2|1);
var1676 = (val*)((long)(0)<<2|3);
var1677 = (val*)((long)(0)<<2|3);
var1673 = core__flat___CString___to_s_unsafe(var1672, var1674, var1675, var1676, var1677);
var1671 = var1673;
varonce1670 = var1671;
}
((struct instance_core__NativeArray*)var1661)->values[3]=var1671;
} else {
var1661 = varonce1660;
varonce1660 = NULL;
}
{
var1678 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1661)->values[0]=var1678;
((struct instance_core__NativeArray*)var1661)->values[2]=var_c_name;
{
var1679 = ((val*(*)(val* self))(var1661->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1661); /* native_to_s on <var1661:NativeArray[String]>*/
}
varonce1660 = var1661;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1679); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce1680==NULL)) {
var1681 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1682!=NULL)) {
var1683 = varonce1682;
} else {
var1684 = " is DEAD";
var1686 = (val*)(8l<<2|1);
var1687 = (val*)(8l<<2|1);
var1688 = (val*)((long)(0)<<2|3);
var1689 = (val*)((long)(0)<<2|3);
var1685 = core__flat___CString___to_s_unsafe(var1684, var1686, var1687, var1688, var1689);
var1683 = var1685;
varonce1682 = var1683;
}
((struct instance_core__NativeArray*)var1681)->values[1]=var1683;
} else {
var1681 = varonce1680;
varonce1680 = NULL;
}
{
var1690 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var1681)->values[0]=var1690;
{
var1691 = ((val*(*)(val* self))(var1681->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1681); /* native_to_s on <var1681:NativeArray[String]>*/
}
varonce1680 = var1681;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var1691); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce1692!=NULL)) {
var1693 = varonce1692;
} else {
var1694 = "self";
var1696 = (val*)(4l<<2|1);
var1697 = (val*)(4l<<2|1);
var1698 = (val*)((long)(0)<<2|3);
var1699 = (val*)((long)(0)<<2|3);
var1695 = core__flat___CString___to_s_unsafe(var1694, var1696, var1697, var1698, var1699);
var1693 = var1695;
varonce1692 = var1693;
}
{
var1700 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1693);
}
var_res1701 = var1700;
{
{ /* Inline abstract_compiler$RuntimeVariable$is_exact= (var_res1701,1) on <var_res1701:RuntimeVariable> */
var_res1701->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res1701:RuntimeVariable> */
RET_LABEL1702:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$attr_tables (self) on <self:SeparateCompiler> */
var1705 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var1705 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1074);
fatal_exit(1);
}
var1703 = var1705;
RET_LABEL1704:(void)0;
}
}
{
var1706 = ((val*(*)(val* self, val* p0))((((long)var1703&3)?class_info[((long)var1703&3)]:var1703->class)->vft[COLOR_core__abstract_collection__MapRead__get_or_null]))(var1703, var_mclass); /* get_or_null on <var1703:Map[MClass, Array[nullable MProperty]]>*/
}
var_attrs = var1706;
if (var_attrs == NULL) {
var1707 = 1; /* is null */
} else {
var1707 = 0; /* arg is null but recv is not */
}
if (0) {
var1708 = core___core__Array___core__kernel__Object___61d_61d(var_attrs, ((val*)NULL));
var1707 = var1708;
}
if (var1707){
if (likely(varonce1709!=NULL)) {
var1710 = varonce1709;
} else {
var1711 = "sizeof(struct instance)";
var1713 = (val*)(23l<<2|1);
var1714 = (val*)(23l<<2|1);
var1715 = (val*)((long)(0)<<2|3);
var1716 = (val*)((long)(0)<<2|3);
var1712 = core__flat___CString___to_s_unsafe(var1711, var1713, var1714, var1715, var1716);
var1710 = var1712;
varonce1709 = var1710;
}
{
var1717 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var1718 = nitc___nitc__AbstractCompilerVisitor___nit_alloc(var_v, var1710, var1717);
}
var_alloc1719 = var1718;
if (unlikely(varonce1720==NULL)) {
var1721 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1722!=NULL)) {
var1723 = varonce1722;
} else {
var1724 = " = ";
var1726 = (val*)(3l<<2|1);
var1727 = (val*)(3l<<2|1);
var1728 = (val*)((long)(0)<<2|3);
var1729 = (val*)((long)(0)<<2|3);
var1725 = core__flat___CString___to_s_unsafe(var1724, var1726, var1727, var1728, var1729);
var1723 = var1725;
varonce1722 = var1723;
}
((struct instance_core__NativeArray*)var1721)->values[1]=var1723;
if (likely(varonce1730!=NULL)) {
var1731 = varonce1730;
} else {
var1732 = ";";
var1734 = (val*)(1l<<2|1);
var1735 = (val*)(1l<<2|1);
var1736 = (val*)((long)(0)<<2|3);
var1737 = (val*)((long)(0)<<2|3);
var1733 = core__flat___CString___to_s_unsafe(var1732, var1734, var1735, var1736, var1737);
var1731 = var1733;
varonce1730 = var1731;
}
((struct instance_core__NativeArray*)var1721)->values[3]=var1731;
} else {
var1721 = varonce1720;
varonce1720 = NULL;
}
{
var1738 = ((val*(*)(val* self))(var_res1701->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1701); /* to_s on <var_res1701:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1721)->values[0]=var1738;
((struct instance_core__NativeArray*)var1721)->values[2]=var_alloc1719;
{
var1739 = ((val*(*)(val* self))(var1721->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1721); /* native_to_s on <var1721:NativeArray[String]>*/
}
varonce1720 = var1721;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1739); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce1740==NULL)) {
var1741 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1742!=NULL)) {
var1743 = varonce1742;
} else {
var1744 = "sizeof(struct instance) + ";
var1746 = (val*)(26l<<2|1);
var1747 = (val*)(26l<<2|1);
var1748 = (val*)((long)(0)<<2|3);
var1749 = (val*)((long)(0)<<2|3);
var1745 = core__flat___CString___to_s_unsafe(var1744, var1746, var1747, var1748, var1749);
var1743 = var1745;
varonce1742 = var1743;
}
((struct instance_core__NativeArray*)var1741)->values[0]=var1743;
if (likely(varonce1750!=NULL)) {
var1751 = varonce1750;
} else {
var1752 = "*sizeof(nitattribute_t)";
var1754 = (val*)(23l<<2|1);
var1755 = (val*)(23l<<2|1);
var1756 = (val*)((long)(0)<<2|3);
var1757 = (val*)((long)(0)<<2|3);
var1753 = core__flat___CString___to_s_unsafe(var1752, var1754, var1755, var1756, var1757);
var1751 = var1753;
varonce1750 = var1751;
}
((struct instance_core__NativeArray*)var1741)->values[2]=var1751;
} else {
var1741 = varonce1740;
varonce1740 = NULL;
}
{
{ /* Inline array$AbstractArrayRead$length (var_attrs) on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1760 = var_attrs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1758 = var1760;
RET_LABEL1759:(void)0;
}
}
var1761 = core__flat___Int___core__abstract_text__Object__to_s(var1758);
((struct instance_core__NativeArray*)var1741)->values[1]=var1761;
{
var1762 = ((val*(*)(val* self))(var1741->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1741); /* native_to_s on <var1741:NativeArray[String]>*/
}
varonce1740 = var1741;
{
var1763 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var1764 = nitc___nitc__AbstractCompilerVisitor___nit_alloc(var_v, var1762, var1763);
}
var_alloc1765 = var1764;
if (unlikely(varonce1766==NULL)) {
var1767 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1768!=NULL)) {
var1769 = varonce1768;
} else {
var1770 = " = ";
var1772 = (val*)(3l<<2|1);
var1773 = (val*)(3l<<2|1);
var1774 = (val*)((long)(0)<<2|3);
var1775 = (val*)((long)(0)<<2|3);
var1771 = core__flat___CString___to_s_unsafe(var1770, var1772, var1773, var1774, var1775);
var1769 = var1771;
varonce1768 = var1769;
}
((struct instance_core__NativeArray*)var1767)->values[1]=var1769;
if (likely(varonce1776!=NULL)) {
var1777 = varonce1776;
} else {
var1778 = ";";
var1780 = (val*)(1l<<2|1);
var1781 = (val*)(1l<<2|1);
var1782 = (val*)((long)(0)<<2|3);
var1783 = (val*)((long)(0)<<2|3);
var1779 = core__flat___CString___to_s_unsafe(var1778, var1780, var1781, var1782, var1783);
var1777 = var1779;
varonce1776 = var1777;
}
((struct instance_core__NativeArray*)var1767)->values[3]=var1777;
} else {
var1767 = varonce1766;
varonce1766 = NULL;
}
{
var1784 = ((val*(*)(val* self))(var_res1701->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1701); /* to_s on <var_res1701:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1767)->values[0]=var1784;
((struct instance_core__NativeArray*)var1767)->values[2]=var_alloc1765;
{
var1785 = ((val*(*)(val* self))(var1767->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1767); /* native_to_s on <var1767:NativeArray[String]>*/
}
varonce1766 = var1767;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1785); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
}
if (unlikely(varonce1786==NULL)) {
var1787 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1788!=NULL)) {
var1789 = varonce1788;
} else {
var1790 = "->type = type;";
var1792 = (val*)(14l<<2|1);
var1793 = (val*)(14l<<2|1);
var1794 = (val*)((long)(0)<<2|3);
var1795 = (val*)((long)(0)<<2|3);
var1791 = core__flat___CString___to_s_unsafe(var1790, var1792, var1793, var1794, var1795);
var1789 = var1791;
varonce1788 = var1789;
}
((struct instance_core__NativeArray*)var1787)->values[1]=var1789;
} else {
var1787 = varonce1786;
varonce1786 = NULL;
}
{
var1796 = ((val*(*)(val* self))(var_res1701->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1701); /* to_s on <var_res1701:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1787)->values[0]=var1796;
{
var1797 = ((val*(*)(val* self))(var1787->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1787); /* native_to_s on <var1787:NativeArray[String]>*/
}
varonce1786 = var1787;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1797); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce1798!=NULL)) {
var1799 = varonce1798;
} else {
var1800 = "type";
var1802 = (val*)(4l<<2|1);
var1803 = (val*)(4l<<2|1);
var1804 = (val*)((long)(0)<<2|3);
var1805 = (val*)((long)(0)<<2|3);
var1801 = core__flat___CString___to_s_unsafe(var1800, var1802, var1803, var1804, var1805);
var1799 = var1801;
varonce1798 = var1799;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var1799); /* Direct call separate_compiler$SeparateCompiler$hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce1806==NULL)) {
var1807 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1808!=NULL)) {
var1809 = varonce1808;
} else {
var1810 = "class_";
var1812 = (val*)(6l<<2|1);
var1813 = (val*)(6l<<2|1);
var1814 = (val*)((long)(0)<<2|3);
var1815 = (val*)((long)(0)<<2|3);
var1811 = core__flat___CString___to_s_unsafe(var1810, var1812, var1813, var1814, var1815);
var1809 = var1811;
varonce1808 = var1809;
}
((struct instance_core__NativeArray*)var1807)->values[0]=var1809;
} else {
var1807 = varonce1806;
varonce1806 = NULL;
}
((struct instance_core__NativeArray*)var1807)->values[1]=var_c_name;
{
var1816 = ((val*(*)(val* self))(var1807->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1807); /* native_to_s on <var1807:NativeArray[String]>*/
}
varonce1806 = var1807;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var1816); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1817==NULL)) {
var1818 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce1819!=NULL)) {
var1820 = varonce1819;
} else {
var1821 = "->class = &class_";
var1823 = (val*)(17l<<2|1);
var1824 = (val*)(17l<<2|1);
var1825 = (val*)((long)(0)<<2|3);
var1826 = (val*)((long)(0)<<2|3);
var1822 = core__flat___CString___to_s_unsafe(var1821, var1823, var1824, var1825, var1826);
var1820 = var1822;
varonce1819 = var1820;
}
((struct instance_core__NativeArray*)var1818)->values[1]=var1820;
if (likely(varonce1827!=NULL)) {
var1828 = varonce1827;
} else {
var1829 = ";";
var1831 = (val*)(1l<<2|1);
var1832 = (val*)(1l<<2|1);
var1833 = (val*)((long)(0)<<2|3);
var1834 = (val*)((long)(0)<<2|3);
var1830 = core__flat___CString___to_s_unsafe(var1829, var1831, var1832, var1833, var1834);
var1828 = var1830;
varonce1827 = var1828;
}
((struct instance_core__NativeArray*)var1818)->values[3]=var1828;
} else {
var1818 = varonce1817;
varonce1817 = NULL;
}
{
var1835 = ((val*(*)(val* self))(var_res1701->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1701); /* to_s on <var_res1701:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1818)->values[0]=var1835;
((struct instance_core__NativeArray*)var1818)->values[2]=var_c_name;
{
var1836 = ((val*(*)(val* self))(var1818->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1818); /* native_to_s on <var1818:NativeArray[String]>*/
}
varonce1817 = var1818;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1836); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (var_attrs == NULL) {
var1837 = 0; /* is null */
} else {
var1837 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_attrs,((val*)NULL)) on <var_attrs:nullable Array[nullable MProperty]> */
var_other = ((val*)NULL);
{
var1840 = ((short int(*)(val* self, val* p0))(var_attrs->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_attrs, var_other); /* == on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])>*/
}
var1841 = !var1840;
var1838 = var1841;
goto RET_LABEL1839;
RET_LABEL1839:(void)0;
}
var1837 = var1838;
}
if (var1837){
{
nitc___nitc__AbstractCompiler___generate_init_attr(self, var_v, var_res1701, var_mtype); /* Direct call abstract_compiler$AbstractCompiler$generate_init_attr on <self:SeparateCompiler>*/
}
{
nitc___nitc__AbstractCompilerVisitor___set_finalizer(var_v, var_res1701); /* Direct call abstract_compiler$AbstractCompilerVisitor$set_finalizer on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce1842==NULL)) {
var1843 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1844!=NULL)) {
var1845 = varonce1844;
} else {
var1846 = "return ";
var1848 = (val*)(7l<<2|1);
var1849 = (val*)(7l<<2|1);
var1850 = (val*)((long)(0)<<2|3);
var1851 = (val*)((long)(0)<<2|3);
var1847 = core__flat___CString___to_s_unsafe(var1846, var1848, var1849, var1850, var1851);
var1845 = var1847;
varonce1844 = var1845;
}
((struct instance_core__NativeArray*)var1843)->values[0]=var1845;
if (likely(varonce1852!=NULL)) {
var1853 = varonce1852;
} else {
var1854 = ";";
var1856 = (val*)(1l<<2|1);
var1857 = (val*)(1l<<2|1);
var1858 = (val*)((long)(0)<<2|3);
var1859 = (val*)((long)(0)<<2|3);
var1855 = core__flat___CString___to_s_unsafe(var1854, var1856, var1857, var1858, var1859);
var1853 = var1855;
varonce1852 = var1853;
}
((struct instance_core__NativeArray*)var1843)->values[2]=var1853;
} else {
var1843 = varonce1842;
varonce1842 = NULL;
}
{
var1860 = ((val*(*)(val* self))(var_res1701->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1701); /* to_s on <var_res1701:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1843)->values[1]=var1860;
{
var1861 = ((val*(*)(val* self))(var1843->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1843); /* native_to_s on <var1843:NativeArray[String]>*/
}
varonce1842 = var1843;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1861); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce1862!=NULL)) {
var1863 = varonce1862;
} else {
var1864 = "}";
var1866 = (val*)(1l<<2|1);
var1867 = (val*)(1l<<2|1);
var1868 = (val*)((long)(0)<<2|3);
var1869 = (val*)((long)(0)<<2|3);
var1865 = core__flat___CString___to_s_unsafe(var1864, var1866, var1867, var1868, var1869);
var1863 = var1865;
varonce1862 = var1863;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1863); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$compile_class_infos for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___compile_class_infos(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : Array[nullable MClass] */;
val* var_class_info /* var class_info: Array[nullable MClass] */;
val* var14 /* : HashMap[MClass, Int] */;
val* var16 /* : HashMap[MClass, Int] */;
val* var17 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[MClass] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[MClass] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_t /* var t: MClass */;
val* var22 /* : String */;
val* var24 /* : String */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
short int var32 /* : Bool */;
val* var33 /* : MClassType */;
val* var35 /* : MClassType */;
val* var37 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
short int var48 /* : Bool */;
val* var49 /* : MClassType */;
val* var51 /* : MClassType */;
val* var53 /* : String */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Bool */;
short int var64 /* : Bool */;
val* var65 /* : MClassType */;
val* var67 /* : MClassType */;
val* var70 /* : MClassType */;
val* var72 /* : MClassType */;
val* var74 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
val* var_83 /* var : Array[nullable MClass] */;
val* var84 /* : IndexedIterator[nullable Object] */;
val* var_85 /* var : IndexedIterator[nullable MClass] */;
short int var86 /* : Bool */;
val* var88 /* : nullable Object */;
val* var_t89 /* var t: nullable MClass */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Bool */;
val* var103 /* : nullable Bool */;
val* var105 /* : NativeArray[String] */;
static val* varonce104;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Bool */;
val* var113 /* : nullable Bool */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var_s /* var s: String */;
val* var117 /* : NativeArray[String] */;
static val* varonce116;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Bool */;
val* var125 /* : nullable Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Bool */;
val* var133 /* : nullable Bool */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Bool */;
val* var142 /* : nullable Bool */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : CString */;
val* var146 /* : String */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Bool */;
val* var150 /* : nullable Bool */;
val* var_151 /* var : Array[nullable MClass] */;
val* var152 /* : IndexedIterator[nullable Object] */;
val* var_153 /* var : IndexedIterator[nullable MClass] */;
short int var154 /* : Bool */;
val* var156 /* : nullable Object */;
val* var_t157 /* var t: nullable MClass */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Int */;
val* var170 /* : nullable Bool */;
val* var171 /* : nullable Bool */;
val* var173 /* : NativeArray[String] */;
static val* varonce172;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : CString */;
val* var177 /* : String */;
val* var178 /* : nullable Int */;
val* var179 /* : nullable Int */;
val* var180 /* : nullable Bool */;
val* var181 /* : nullable Bool */;
val* var182 /* : String */;
val* var183 /* : String */;
val* var_s184 /* var s: String */;
val* var185 /* : Set[MType] */;
val* var187 /* : Set[MType] */;
val* var188 /* : MClassType */;
val* var190 /* : MClassType */;
val* var192 /* : NativeArray[String] */;
static val* varonce191;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
val* var197 /* : nullable Int */;
val* var198 /* : nullable Int */;
val* var199 /* : nullable Bool */;
val* var200 /* : nullable Bool */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : CString */;
val* var204 /* : String */;
val* var205 /* : nullable Int */;
val* var206 /* : nullable Int */;
val* var207 /* : nullable Bool */;
val* var208 /* : nullable Bool */;
val* var209 /* : String */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
val* var214 /* : nullable Int */;
val* var215 /* : nullable Int */;
val* var216 /* : nullable Bool */;
val* var217 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts$Option$value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = (short int)((long)(var9)>>2);
if (var12){
goto RET_LABEL;
} else {
}
var13 = NEW_core__Array(&type_core__Array__nullable__nitc__MClass);
{
core___core__Array___filled_with(var13, ((val*)NULL), 4l); /* Direct call array$Array$filled_with on <var13:Array[nullable MClass]>*/
}
var_class_info = var13;
{
{ /* Inline separate_compiler$SeparateCompiler$box_kinds (self) on <self:SeparateCompiler> */
var16 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 264);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__HashMap___core__abstract_collection__MapRead__keys(var14);
}
var_ = var17;
{
var18 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[MClass]>*/
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:Iterator[MClass]>*/
}
if (var20){
} else {
goto BREAK_label;
}
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:Iterator[MClass]>*/
}
var_t = var21;
{
{ /* Inline model$MClass$name (var_t) on <var_t:MClass> */
var24 = var_t->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "Int";
var28 = (val*)(3l<<2|1);
var29 = (val*)(3l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce = var25;
}
{
var32 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_core__kernel__Object___61d_61d]))(var22, var25); /* == on <var22:String>*/
}
if (var32){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_class_info, 1l, var_t); /* Direct call array$Array$[]= on <var_class_info:Array[nullable MClass]>*/
}
{
{ /* Inline model$MClass$mclass_type (var_t) on <var_t:MClass> */
var35 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline separate_compiler$MType$tag_value= (var33,1l) on <var33:MClassType> */
var33->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 1l; /* _tag_value on <var33:MClassType> */
RET_LABEL36:(void)0;
}
}
} else {
{
{ /* Inline model$MClass$name (var_t) on <var_t:MClass> */
var39 = var_t->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Char";
var44 = (val*)(4l<<2|1);
var45 = (val*)(4l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
{
var48 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_core__kernel__Object___61d_61d]))(var37, var41); /* == on <var37:String>*/
}
if (var48){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_class_info, 2l, var_t); /* Direct call array$Array$[]= on <var_class_info:Array[nullable MClass]>*/
}
{
{ /* Inline model$MClass$mclass_type (var_t) on <var_t:MClass> */
var51 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline separate_compiler$MType$tag_value= (var49,2l) on <var49:MClassType> */
var49->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 2l; /* _tag_value on <var49:MClassType> */
RET_LABEL52:(void)0;
}
}
} else {
{
{ /* Inline model$MClass$name (var_t) on <var_t:MClass> */
var55 = var_t->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "Bool";
var60 = (val*)(4l<<2|1);
var61 = (val*)(4l<<2|1);
var62 = (val*)((long)(0)<<2|3);
var63 = (val*)((long)(0)<<2|3);
var59 = core__flat___CString___to_s_unsafe(var58, var60, var61, var62, var63);
var57 = var59;
varonce56 = var57;
}
{
var64 = ((short int(*)(val* self, val* p0))(var53->class->vft[COLOR_core__kernel__Object___61d_61d]))(var53, var57); /* == on <var53:String>*/
}
if (var64){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_class_info, 3l, var_t); /* Direct call array$Array$[]= on <var_class_info:Array[nullable MClass]>*/
}
{
{ /* Inline model$MClass$mclass_type (var_t) on <var_t:MClass> */
var67 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline separate_compiler$MType$tag_value= (var65,3l) on <var65:MClassType> */
var65->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 3l; /* _tag_value on <var65:MClassType> */
RET_LABEL68:(void)0;
}
}
} else {
goto BREAK_label69;
}
}
}
{
{ /* Inline model$MClass$mclass_type (var_t) on <var_t:MClass> */
var72 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline separate_compiler$MType$is_tagged= (var70,1) on <var70:MClassType> */
var70->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 1; /* _is_tagged on <var70:MClassType> */
RET_LABEL73:(void)0;
}
}
BREAK_label69: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:Iterator[MClass]>*/
}
{
var74 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var74;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "const struct class *class_info[4] = {";
var79 = (val*)(37l<<2|1);
var80 = (val*)(37l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var76); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_83 = var_class_info;
{
var84 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_83);
}
var_85 = var84;
for(;;) {
{
var86 = ((short int(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_85); /* is_ok on <var_85:IndexedIterator[nullable MClass]>*/
}
if (var86){
} else {
goto BREAK_label87;
}
{
var88 = ((val*(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_85); /* item on <var_85:IndexedIterator[nullable MClass]>*/
}
var_t89 = var88;
if (var_t89 == NULL) {
var90 = 1; /* is null */
} else {
var90 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t89,((val*)NULL)) on <var_t89:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t89,var_other) on <var_t89:nullable MClass(MClass)> */
var95 = var_t89 == var_other;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
if (var90){
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "NULL,";
var100 = (val*)(5l<<2|1);
var101 = (val*)(5l<<2|1);
var102 = (val*)((long)(0)<<2|3);
var103 = (val*)((long)(0)<<2|3);
var99 = core__flat___CString___to_s_unsafe(var98, var100, var101, var102, var103);
var97 = var99;
varonce96 = var97;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var97); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce104==NULL)) {
var105 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "class_";
var110 = (val*)(6l<<2|1);
var111 = (val*)(6l<<2|1);
var112 = (val*)((long)(0)<<2|3);
var113 = (val*)((long)(0)<<2|3);
var109 = core__flat___CString___to_s_unsafe(var108, var110, var111, var112, var113);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var105)->values[0]=var107;
} else {
var105 = varonce104;
varonce104 = NULL;
}
{
var114 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_t89);
}
((struct instance_core__NativeArray*)var105)->values[1]=var114;
{
var115 = ((val*(*)(val* self))(var105->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var105); /* native_to_s on <var105:NativeArray[String]>*/
}
varonce104 = var105;
var_s = var115;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var_s); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce116==NULL)) {
var117 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "&";
var122 = (val*)(1l<<2|1);
var123 = (val*)(1l<<2|1);
var124 = (val*)((long)(0)<<2|3);
var125 = (val*)((long)(0)<<2|3);
var121 = core__flat___CString___to_s_unsafe(var120, var122, var123, var124, var125);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var117)->values[0]=var119;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = ",";
var130 = (val*)(1l<<2|1);
var131 = (val*)(1l<<2|1);
var132 = (val*)((long)(0)<<2|3);
var133 = (val*)((long)(0)<<2|3);
var129 = core__flat___CString___to_s_unsafe(var128, var130, var131, var132, var133);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var117)->values[2]=var127;
} else {
var117 = varonce116;
varonce116 = NULL;
}
((struct instance_core__NativeArray*)var117)->values[1]=var_s;
{
var134 = ((val*(*)(val* self))(var117->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var117); /* native_to_s on <var117:NativeArray[String]>*/
}
varonce116 = var117;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var134); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_85); /* next on <var_85:IndexedIterator[nullable MClass]>*/
}
}
BREAK_label87: (void)0;
{
((void(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_85); /* finish on <var_85:IndexedIterator[nullable MClass]>*/
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "};";
var139 = (val*)(2l<<2|1);
var140 = (val*)(2l<<2|1);
var141 = (val*)((long)(0)<<2|3);
var142 = (val*)((long)(0)<<2|3);
var138 = core__flat___CString___to_s_unsafe(var137, var139, var140, var141, var142);
var136 = var138;
varonce135 = var136;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var136); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "const struct type *type_info[4] = {";
var147 = (val*)(35l<<2|1);
var148 = (val*)(35l<<2|1);
var149 = (val*)((long)(0)<<2|3);
var150 = (val*)((long)(0)<<2|3);
var146 = core__flat___CString___to_s_unsafe(var145, var147, var148, var149, var150);
var144 = var146;
varonce143 = var144;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var144); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_151 = var_class_info;
{
var152 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_151);
}
var_153 = var152;
for(;;) {
{
var154 = ((short int(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_153); /* is_ok on <var_153:IndexedIterator[nullable MClass]>*/
}
if (var154){
} else {
goto BREAK_label155;
}
{
var156 = ((val*(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_153); /* item on <var_153:IndexedIterator[nullable MClass]>*/
}
var_t157 = var156;
if (var_t157 == NULL) {
var158 = 1; /* is null */
} else {
var158 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t157,((val*)NULL)) on <var_t157:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t157,var_other) on <var_t157:nullable MClass(MClass)> */
var163 = var_t157 == var_other;
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
if (var158){
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "NULL,";
var168 = (val*)(5l<<2|1);
var169 = (val*)(5l<<2|1);
var170 = (val*)((long)(0)<<2|3);
var171 = (val*)((long)(0)<<2|3);
var167 = core__flat___CString___to_s_unsafe(var166, var168, var169, var170, var171);
var165 = var167;
varonce164 = var165;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var165); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce172==NULL)) {
var173 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce174!=NULL)) {
var175 = varonce174;
} else {
var176 = "type_";
var178 = (val*)(5l<<2|1);
var179 = (val*)(5l<<2|1);
var180 = (val*)((long)(0)<<2|3);
var181 = (val*)((long)(0)<<2|3);
var177 = core__flat___CString___to_s_unsafe(var176, var178, var179, var180, var181);
var175 = var177;
varonce174 = var175;
}
((struct instance_core__NativeArray*)var173)->values[0]=var175;
} else {
var173 = varonce172;
varonce172 = NULL;
}
{
var182 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_t157);
}
((struct instance_core__NativeArray*)var173)->values[1]=var182;
{
var183 = ((val*(*)(val* self))(var173->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var173); /* native_to_s on <var173:NativeArray[String]>*/
}
varonce172 = var173;
var_s184 = var183;
{
{ /* Inline separate_compiler$SeparateCompiler$undead_types (self) on <self:SeparateCompiler> */
var187 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <self:SeparateCompiler> */
if (unlikely(var187 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var_t157) on <var_t157:nullable MClass(MClass)> */
var190 = var_t157->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t157:nullable MClass(MClass)> */
if (unlikely(var190 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var185&3)?class_info[((long)var185&3)]:var185->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var185, var188); /* add on <var185:Set[MType]>*/
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var_s184); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce191==NULL)) {
var192 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "&";
var197 = (val*)(1l<<2|1);
var198 = (val*)(1l<<2|1);
var199 = (val*)((long)(0)<<2|3);
var200 = (val*)((long)(0)<<2|3);
var196 = core__flat___CString___to_s_unsafe(var195, var197, var198, var199, var200);
var194 = var196;
varonce193 = var194;
}
((struct instance_core__NativeArray*)var192)->values[0]=var194;
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = ",";
var205 = (val*)(1l<<2|1);
var206 = (val*)(1l<<2|1);
var207 = (val*)((long)(0)<<2|3);
var208 = (val*)((long)(0)<<2|3);
var204 = core__flat___CString___to_s_unsafe(var203, var205, var206, var207, var208);
var202 = var204;
varonce201 = var202;
}
((struct instance_core__NativeArray*)var192)->values[2]=var202;
} else {
var192 = varonce191;
varonce191 = NULL;
}
((struct instance_core__NativeArray*)var192)->values[1]=var_s184;
{
var209 = ((val*(*)(val* self))(var192->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var192); /* native_to_s on <var192:NativeArray[String]>*/
}
varonce191 = var192;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var209); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_153); /* next on <var_153:IndexedIterator[nullable MClass]>*/
}
}
BREAK_label155: (void)0;
{
((void(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_153); /* finish on <var_153:IndexedIterator[nullable MClass]>*/
}
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "};";
var214 = (val*)(2l<<2|1);
var215 = (val*)(2l<<2|1);
var216 = (val*)((long)(0)<<2|3);
var217 = (val*)((long)(0)<<2|3);
var213 = core__flat___CString___to_s_unsafe(var212, var214, var215, var216, var217);
var211 = var213;
varonce210 = var211;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var211); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$hardening_live_type for (self: SeparateCompiler, SeparateCompilerVisitor, String) */
void nitc___nitc__SeparateCompiler___hardening_live_type(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var_t /* var t: String */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
val* var70 /* : String */;
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
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Bool */;
val* var97 /* : nullable Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
/* Covariant cast for argument 0 (v) <p0:SeparateCompilerVisitor> isa VISITOR */
/* <p0:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1054);
fatal_exit(1);
}
var_v = p0;
var_t = p1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler(SeparateCompiler)> */
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
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_hardening (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 46);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts$Option$value (var10) on <var10:OptionBool> */
var15 = var10->attrs[COLOR_opts__Option___value].val; /* _value on <var10:OptionBool> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = (short int)((long)(var13)>>2);
var17 = !var16;
if (var17){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "if(";
var23 = (val*)(3l<<2|1);
var24 = (val*)(3l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " == NULL) {";
var31 = (val*)(11l<<2|1);
var32 = (val*)(11l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var18)->values[2]=var28;
} else {
var18 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var18)->values[1]=var_t;
{
var35 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var35); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "type null";
var40 = (val*)(9l<<2|1);
var41 = (val*)(9l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var37); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "}";
var48 = (val*)(1l<<2|1);
var49 = (val*)(1l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var45); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce52==NULL)) {
var53 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "if(";
var58 = (val*)(3l<<2|1);
var59 = (val*)(3l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[0]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "->table_size < 0) {";
var66 = (val*)(19l<<2|1);
var67 = (val*)(19l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var53)->values[2]=var63;
} else {
var53 = varonce52;
varonce52 = NULL;
}
((struct instance_core__NativeArray*)var53)->values[1]=var_t;
{
var70 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var70); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "PRINT_ERROR(\"Instantiation of a dead type: %s\\n\", ";
var77 = (val*)(50l<<2|1);
var78 = (val*)(50l<<2|1);
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
var83 = "->name);";
var85 = (val*)(8l<<2|1);
var86 = (val*)(8l<<2|1);
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
((struct instance_core__NativeArray*)var72)->values[1]=var_t;
{
var89 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var89); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "type dead";
var94 = (val*)(9l<<2|1);
var95 = (val*)(9l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var91); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "}";
var102 = (val*)(1l<<2|1);
var103 = (val*)(1l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var99); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$new_visitor for (self: SeparateCompiler): SeparateCompilerVisitor */
val* nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_nitc__SeparateCompilerVisitor(&type_nitc__SeparateCompilerVisitor);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(var1, self); /* compiler= on <var1:SeparateCompilerVisitor>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:SeparateCompilerVisitor>*/
}
/* <var1:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1067);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompiler$type_tables for (self: SeparateCompiler): Map[MType, Array[nullable MType]] */
val* nitc___nitc__SeparateCompiler___type_tables(val* self) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var1 /* : Map[MType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1071);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompiler$type_tables= for (self: SeparateCompiler, Map[MType, Array[nullable MType]]) */
void nitc___nitc__SeparateCompiler___type_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val = p0; /* _type_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$resolution_tables for (self: SeparateCompiler): Map[MClassType, Array[nullable MType]] */
val* nitc___nitc__SeparateCompiler___resolution_tables(val* self) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var1 /* : Map[MClassType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1072);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompiler$resolution_tables= for (self: SeparateCompiler, Map[MClassType, Array[nullable MType]]) */
void nitc___nitc__SeparateCompiler___resolution_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val = p0; /* _resolution_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$method_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MPropDef]] */
val* nitc___nitc__SeparateCompiler___method_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1073);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompiler$method_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MPropDef]]) */
void nitc___nitc__SeparateCompiler___method_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val = p0; /* _method_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$attr_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MProperty]] */
val* nitc___nitc__SeparateCompiler___attr_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MProperty]] */;
val* var1 /* : Map[MClass, Array[nullable MProperty]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1074);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompiler$attr_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MProperty]]) */
void nitc___nitc__SeparateCompiler___attr_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val = p0; /* _attr_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
