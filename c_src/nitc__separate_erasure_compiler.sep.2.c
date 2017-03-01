#include "nitc__separate_erasure_compiler.sep.0.h"
/* method separate_erasure_compiler$SeparateErasureCompiler$display_sizes for (self: SeparateErasureCompiler) */
void nitc___nitc__SeparateErasureCompiler___nitc__separate_compiler__SeparateCompiler__display_sizes(val* self) {
val* var /* : Sys */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : Sys */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
long var_total /* var total: Int */;
long var_holes /* var holes: Int */;
val* var17 /* : Map[MClass, Array[nullable MClass]] */;
val* var19 /* : Map[MClass, Array[nullable MClass]] */;
val* var_ /* var : Map[MClass, Array[nullable MClass]] */;
val* var20 /* : MapIterator[nullable Object, nullable Object] */;
val* var_21 /* var : MapIterator[MClass, Array[nullable MClass]] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_t /* var t: MClass */;
val* var24 /* : nullable Object */;
val* var_table /* var table: Array[nullable MClass] */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var31 /* : Int */;
val* var_32 /* var : Array[nullable MClass] */;
val* var33 /* : IndexedIterator[nullable Object] */;
val* var_34 /* var : IndexedIterator[nullable MClass] */;
short int var35 /* : Bool */;
val* var37 /* : nullable Object */;
val* var_e /* var e: nullable MClass */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
val* var52 /* : Sys */;
val* var54 /* : NativeArray[String] */;
static val* varonce53;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Bool */;
val* var70 /* : nullable Bool */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : Sys */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
val* var83 /* : Sys */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
val* var92 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var94 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_95 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var96 /* : MapIterator[nullable Object, nullable Object] */;
val* var_97 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var98 /* : Bool */;
val* var100 /* : nullable Object */;
val* var_t101 /* var t: MClass */;
val* var102 /* : nullable Object */;
val* var_table103 /* var table: Array[nullable MPropDef] */;
long var104 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
long var113 /* : Int */;
val* var_114 /* var : Array[nullable MPropDef] */;
val* var115 /* : IndexedIterator[nullable Object] */;
val* var_116 /* var : IndexedIterator[nullable MPropDef] */;
short int var117 /* : Bool */;
val* var119 /* : nullable Object */;
val* var_e120 /* var e: nullable MPropDef */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
long var127 /* : Int */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
long var133 /* : Int */;
val* var135 /* : Sys */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Bool */;
val* var145 /* : nullable Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Bool */;
val* var153 /* : nullable Bool */;
val* var154 /* : String */;
val* var155 /* : String */;
val* var156 /* : String */;
val* var157 /* : Sys */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Bool */;
val* var165 /* : nullable Bool */;
val* var166 /* : Sys */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
val* var175 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var177 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_178 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var179 /* : MapIterator[nullable Object, nullable Object] */;
val* var_180 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var181 /* : Bool */;
val* var183 /* : nullable Object */;
val* var_t184 /* var t: MClass */;
val* var185 /* : nullable Object */;
val* var_table186 /* var table: Array[nullable MPropDef] */;
long var187 /* : Int */;
long var189 /* : Int */;
long var190 /* : Int */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
const char* var_class_name195;
long var196 /* : Int */;
val* var_197 /* var : Array[nullable MPropDef] */;
val* var198 /* : IndexedIterator[nullable Object] */;
val* var_199 /* var : IndexedIterator[nullable MPropDef] */;
short int var200 /* : Bool */;
val* var202 /* : nullable Object */;
val* var_e203 /* var e: nullable MPropDef */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
short int var209 /* : Bool */;
long var210 /* : Int */;
short int var212 /* : Bool */;
int cltype213;
int idtype214;
const char* var_class_name215;
long var216 /* : Int */;
val* var218 /* : Sys */;
val* var220 /* : NativeArray[String] */;
static val* varonce219;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : CString */;
val* var224 /* : String */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Bool */;
val* var228 /* : nullable Bool */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : CString */;
val* var232 /* : String */;
val* var233 /* : nullable Int */;
val* var234 /* : nullable Int */;
val* var235 /* : nullable Bool */;
val* var236 /* : nullable Bool */;
val* var237 /* : String */;
val* var238 /* : String */;
val* var239 /* : String */;
val* var240 /* : Sys */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
val* var249 /* : Sys */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : CString */;
val* var253 /* : String */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Bool */;
val* var257 /* : nullable Bool */;
val* var258 /* : Map[MClass, Array[nullable MProperty]] */;
val* var260 /* : Map[MClass, Array[nullable MProperty]] */;
val* var_261 /* var : Map[MClass, Array[nullable MProperty]] */;
val* var262 /* : MapIterator[nullable Object, nullable Object] */;
val* var_263 /* var : MapIterator[MClass, Array[nullable MProperty]] */;
short int var264 /* : Bool */;
val* var266 /* : nullable Object */;
val* var_t267 /* var t: MClass */;
val* var268 /* : nullable Object */;
val* var_table269 /* var table: Array[nullable MProperty] */;
long var270 /* : Int */;
long var272 /* : Int */;
long var273 /* : Int */;
short int var275 /* : Bool */;
int cltype276;
int idtype277;
const char* var_class_name278;
long var279 /* : Int */;
val* var_280 /* var : Array[nullable MProperty] */;
val* var281 /* : IndexedIterator[nullable Object] */;
val* var_282 /* var : IndexedIterator[nullable MProperty] */;
short int var283 /* : Bool */;
val* var285 /* : nullable Object */;
val* var_e286 /* var e: nullable MProperty */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
short int var290 /* : Bool */;
short int var292 /* : Bool */;
long var293 /* : Int */;
short int var295 /* : Bool */;
int cltype296;
int idtype297;
const char* var_class_name298;
long var299 /* : Int */;
val* var301 /* : Sys */;
val* var303 /* : NativeArray[String] */;
static val* varonce302;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : CString */;
val* var307 /* : String */;
val* var308 /* : nullable Int */;
val* var309 /* : nullable Int */;
val* var310 /* : nullable Bool */;
val* var311 /* : nullable Bool */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : CString */;
val* var315 /* : String */;
val* var316 /* : nullable Int */;
val* var317 /* : nullable Int */;
val* var318 /* : nullable Bool */;
val* var319 /* : nullable Bool */;
val* var320 /* : String */;
val* var321 /* : String */;
val* var322 /* : String */;
var = glob_sys;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "# size of subtyping tables";
var4 = (val*)(26l<<2|1);
var5 = (val*)(26l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
core__file___Sys___print(var, var1); /* Direct call file$Sys$print on <var:Sys>*/
}
var8 = glob_sys;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "\ttotal \tholes";
var13 = (val*)(13l<<2|1);
var14 = (val*)(13l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce9 = var10;
}
{
core__file___Sys___print(var8, var10); /* Direct call file$Sys$print on <var8:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$class_tables (self) on <self:SeparateErasureCompiler> */
var19 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables].val; /* _class_tables on <self:SeparateErasureCompiler> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 427);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ = var17;
{
var20 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:Map[MClass, Array[nullable MClass]]>*/
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_21); /* is_ok on <var_21:MapIterator[MClass, Array[nullable MClass]]>*/
}
if (var22){
} else {
goto BREAK_label;
}
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_21); /* key on <var_21:MapIterator[MClass, Array[nullable MClass]]>*/
}
var_t = var23;
{
var24 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_21); /* item on <var_21:MapIterator[MClass, Array[nullable MClass]]>*/
}
var_table = var24;
{
{ /* Inline array$AbstractArrayRead$length (var_table) on <var_table:Array[nullable MClass]> */
var27 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MClass]> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_total,var25) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var30 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var31 = var_total + var25;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_total = var28;
var_32 = var_table;
{
var33 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_32);
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:IndexedIterator[nullable MClass]>*/
}
if (var35){
} else {
goto BREAK_label36;
}
{
var37 = ((val*(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:IndexedIterator[nullable MClass]>*/
}
var_e = var37;
if (var_e == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_e,((val*)NULL)) on <var_e:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_e,var_other) on <var_e:nullable MClass(MClass)> */
var43 = var_e == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
{ /* Inline kernel$Int$+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_holes + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_holes = var44;
} else {
}
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:IndexedIterator[nullable MClass]>*/
}
}
BREAK_label36: (void)0;
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:IndexedIterator[nullable MClass]>*/
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_21); /* next on <var_21:MapIterator[MClass, Array[nullable MClass]]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_21) on <var_21:MapIterator[MClass, Array[nullable MClass]]> */
RET_LABEL51:(void)0;
}
}
var52 = glob_sys;
if (unlikely(varonce53==NULL)) {
var54 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "\t";
var59 = (val*)(1l<<2|1);
var60 = (val*)(1l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var54)->values[0]=var56;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "\t";
var67 = (val*)(1l<<2|1);
var68 = (val*)(1l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var54)->values[2]=var64;
} else {
var54 = varonce53;
varonce53 = NULL;
}
var71 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var54)->values[1]=var71;
var72 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var54)->values[3]=var72;
{
var73 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var54); /* native_to_s on <var54:NativeArray[String]>*/
}
varonce53 = var54;
{
core__file___Sys___print(var52, var73); /* Direct call file$Sys$print on <var52:Sys>*/
}
var74 = glob_sys;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "# size of resolution tables";
var79 = (val*)(27l<<2|1);
var80 = (val*)(27l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
{
core__file___Sys___print(var74, var76); /* Direct call file$Sys$print on <var74:Sys>*/
}
var83 = glob_sys;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "\ttotal \tholes";
var88 = (val*)(13l<<2|1);
var89 = (val*)(13l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
{
core__file___Sys___print(var83, var85); /* Direct call file$Sys$print on <var83:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_erasure_compiler$SeparateErasureCompiler$vt_tables (self) on <self:SeparateErasureCompiler> */
var94 = self->attrs[COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables].val; /* _vt_tables on <self:SeparateErasureCompiler> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vt_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 428);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
var_95 = var92;
{
var96 = ((val*(*)(val* self))((((long)var_95&3)?class_info[((long)var_95&3)]:var_95->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_95); /* iterator on <var_95:Map[MClass, Array[nullable MPropDef]]>*/
}
var_97 = var96;
for(;;) {
{
var98 = ((short int(*)(val* self))((((long)var_97&3)?class_info[((long)var_97&3)]:var_97->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_97); /* is_ok on <var_97:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
if (var98){
} else {
goto BREAK_label99;
}
{
var100 = ((val*(*)(val* self))((((long)var_97&3)?class_info[((long)var_97&3)]:var_97->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_97); /* key on <var_97:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_t101 = var100;
{
var102 = ((val*(*)(val* self))((((long)var_97&3)?class_info[((long)var_97&3)]:var_97->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_97); /* item on <var_97:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_table103 = var102;
{
{ /* Inline array$AbstractArrayRead$length (var_table103) on <var_table103:Array[nullable MPropDef]> */
var106 = var_table103->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table103:Array[nullable MPropDef]> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_total,var104) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var104:Int> isa OTHER */
/* <var104:Int> isa OTHER */
var109 = 1; /* easy <var104:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var113 = var_total + var104;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var_total = var107;
var_114 = var_table103;
{
var115 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_114);
}
var_116 = var115;
for(;;) {
{
var117 = ((short int(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_116); /* is_ok on <var_116:IndexedIterator[nullable MPropDef]>*/
}
if (var117){
} else {
goto BREAK_label118;
}
{
var119 = ((val*(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_116); /* item on <var_116:IndexedIterator[nullable MPropDef]>*/
}
var_e120 = var119;
if (var_e120 == NULL) {
var121 = 1; /* is null */
} else {
var121 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_e120,((val*)NULL)) on <var_e120:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_e120,var_other) on <var_e120:nullable MPropDef(MPropDef)> */
var126 = var_e120 == var_other;
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
var121 = var122;
}
if (var121){
{
{ /* Inline kernel$Int$+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var129 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var133 = var_holes + 1l;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
var_holes = var127;
} else {
}
{
((void(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_116); /* next on <var_116:IndexedIterator[nullable MPropDef]>*/
}
}
BREAK_label118: (void)0;
{
((void(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_116); /* finish on <var_116:IndexedIterator[nullable MPropDef]>*/
}
{
((void(*)(val* self))((((long)var_97&3)?class_info[((long)var_97&3)]:var_97->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_97); /* next on <var_97:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
}
BREAK_label99: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_97) on <var_97:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL134:(void)0;
}
}
var135 = glob_sys;
if (unlikely(varonce136==NULL)) {
var137 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "\t";
var142 = (val*)(1l<<2|1);
var143 = (val*)(1l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var137)->values[0]=var139;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "\t";
var150 = (val*)(1l<<2|1);
var151 = (val*)(1l<<2|1);
var152 = (val*)((long)(0)<<2|3);
var153 = (val*)((long)(0)<<2|3);
var149 = core__flat___CString___to_s_unsafe(var148, var150, var151, var152, var153);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var137)->values[2]=var147;
} else {
var137 = varonce136;
varonce136 = NULL;
}
var154 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var137)->values[1]=var154;
var155 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var137)->values[3]=var155;
{
var156 = ((val*(*)(val* self))(var137->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
{
core__file___Sys___print(var135, var156); /* Direct call file$Sys$print on <var135:Sys>*/
}
var157 = glob_sys;
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "# size of methods tables";
var162 = (val*)(24l<<2|1);
var163 = (val*)(24l<<2|1);
var164 = (val*)((long)(0)<<2|3);
var165 = (val*)((long)(0)<<2|3);
var161 = core__flat___CString___to_s_unsafe(var160, var162, var163, var164, var165);
var159 = var161;
varonce158 = var159;
}
{
core__file___Sys___print(var157, var159); /* Direct call file$Sys$print on <var157:Sys>*/
}
var166 = glob_sys;
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "\ttotal \tholes";
var171 = (val*)(13l<<2|1);
var172 = (val*)(13l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
{
core__file___Sys___print(var166, var168); /* Direct call file$Sys$print on <var166:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler$SeparateCompiler$method_tables (self) on <self:SeparateErasureCompiler> */
var177 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateErasureCompiler> */
if (unlikely(var177 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1073);
fatal_exit(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
var_178 = var175;
{
var179 = ((val*(*)(val* self))((((long)var_178&3)?class_info[((long)var_178&3)]:var_178->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_178); /* iterator on <var_178:Map[MClass, Array[nullable MPropDef]]>*/
}
var_180 = var179;
for(;;) {
{
var181 = ((short int(*)(val* self))((((long)var_180&3)?class_info[((long)var_180&3)]:var_180->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_180); /* is_ok on <var_180:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
if (var181){
} else {
goto BREAK_label182;
}
{
var183 = ((val*(*)(val* self))((((long)var_180&3)?class_info[((long)var_180&3)]:var_180->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_180); /* key on <var_180:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_t184 = var183;
{
var185 = ((val*(*)(val* self))((((long)var_180&3)?class_info[((long)var_180&3)]:var_180->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_180); /* item on <var_180:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_table186 = var185;
{
{ /* Inline array$AbstractArrayRead$length (var_table186) on <var_table186:Array[nullable MPropDef]> */
var189 = var_table186->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table186:Array[nullable MPropDef]> */
var187 = var189;
RET_LABEL188:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_total,var187) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var187:Int> isa OTHER */
/* <var187:Int> isa OTHER */
var192 = 1; /* easy <var187:Int> isa OTHER*/
if (unlikely(!var192)) {
var_class_name195 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name195);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var196 = var_total + var187;
var190 = var196;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
}
var_total = var190;
var_197 = var_table186;
{
var198 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_197);
}
var_199 = var198;
for(;;) {
{
var200 = ((short int(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_199); /* is_ok on <var_199:IndexedIterator[nullable MPropDef]>*/
}
if (var200){
} else {
goto BREAK_label201;
}
{
var202 = ((val*(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_199); /* item on <var_199:IndexedIterator[nullable MPropDef]>*/
}
var_e203 = var202;
if (var_e203 == NULL) {
var204 = 1; /* is null */
} else {
var204 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_e203,((val*)NULL)) on <var_e203:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_e203,var_other) on <var_e203:nullable MPropDef(MPropDef)> */
var209 = var_e203 == var_other;
var207 = var209;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
}
var205 = var207;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
var204 = var205;
}
if (var204){
{
{ /* Inline kernel$Int$+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var212 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var212)) {
var_class_name215 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name215);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var216 = var_holes + 1l;
var210 = var216;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
var_holes = var210;
} else {
}
{
((void(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_199); /* next on <var_199:IndexedIterator[nullable MPropDef]>*/
}
}
BREAK_label201: (void)0;
{
((void(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_199); /* finish on <var_199:IndexedIterator[nullable MPropDef]>*/
}
{
((void(*)(val* self))((((long)var_180&3)?class_info[((long)var_180&3)]:var_180->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_180); /* next on <var_180:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
}
BREAK_label182: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_180) on <var_180:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL217:(void)0;
}
}
var218 = glob_sys;
if (unlikely(varonce219==NULL)) {
var220 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "\t";
var225 = (val*)(1l<<2|1);
var226 = (val*)(1l<<2|1);
var227 = (val*)((long)(0)<<2|3);
var228 = (val*)((long)(0)<<2|3);
var224 = core__flat___CString___to_s_unsafe(var223, var225, var226, var227, var228);
var222 = var224;
varonce221 = var222;
}
((struct instance_core__NativeArray*)var220)->values[0]=var222;
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "\t";
var233 = (val*)(1l<<2|1);
var234 = (val*)(1l<<2|1);
var235 = (val*)((long)(0)<<2|3);
var236 = (val*)((long)(0)<<2|3);
var232 = core__flat___CString___to_s_unsafe(var231, var233, var234, var235, var236);
var230 = var232;
varonce229 = var230;
}
((struct instance_core__NativeArray*)var220)->values[2]=var230;
} else {
var220 = varonce219;
varonce219 = NULL;
}
var237 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var220)->values[1]=var237;
var238 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var220)->values[3]=var238;
{
var239 = ((val*(*)(val* self))(var220->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var220); /* native_to_s on <var220:NativeArray[String]>*/
}
varonce219 = var220;
{
core__file___Sys___print(var218, var239); /* Direct call file$Sys$print on <var218:Sys>*/
}
var240 = glob_sys;
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "# size of attributes tables";
var245 = (val*)(27l<<2|1);
var246 = (val*)(27l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
{
core__file___Sys___print(var240, var242); /* Direct call file$Sys$print on <var240:Sys>*/
}
var249 = glob_sys;
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "\ttotal \tholes";
var254 = (val*)(13l<<2|1);
var255 = (val*)(13l<<2|1);
var256 = (val*)((long)(0)<<2|3);
var257 = (val*)((long)(0)<<2|3);
var253 = core__flat___CString___to_s_unsafe(var252, var254, var255, var256, var257);
var251 = var253;
varonce250 = var251;
}
{
core__file___Sys___print(var249, var251); /* Direct call file$Sys$print on <var249:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler$SeparateCompiler$attr_tables (self) on <self:SeparateErasureCompiler> */
var260 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateErasureCompiler> */
if (unlikely(var260 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1074);
fatal_exit(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
var_261 = var258;
{
var262 = ((val*(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_261); /* iterator on <var_261:Map[MClass, Array[nullable MProperty]]>*/
}
var_263 = var262;
for(;;) {
{
var264 = ((short int(*)(val* self))((((long)var_263&3)?class_info[((long)var_263&3)]:var_263->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_263); /* is_ok on <var_263:MapIterator[MClass, Array[nullable MProperty]]>*/
}
if (var264){
} else {
goto BREAK_label265;
}
{
var266 = ((val*(*)(val* self))((((long)var_263&3)?class_info[((long)var_263&3)]:var_263->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_263); /* key on <var_263:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_t267 = var266;
{
var268 = ((val*(*)(val* self))((((long)var_263&3)?class_info[((long)var_263&3)]:var_263->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_263); /* item on <var_263:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_table269 = var268;
{
{ /* Inline array$AbstractArrayRead$length (var_table269) on <var_table269:Array[nullable MProperty]> */
var272 = var_table269->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table269:Array[nullable MProperty]> */
var270 = var272;
RET_LABEL271:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_total,var270) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var270:Int> isa OTHER */
/* <var270:Int> isa OTHER */
var275 = 1; /* easy <var270:Int> isa OTHER*/
if (unlikely(!var275)) {
var_class_name278 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name278);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var279 = var_total + var270;
var273 = var279;
goto RET_LABEL274;
RET_LABEL274:(void)0;
}
}
var_total = var273;
var_280 = var_table269;
{
var281 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_280);
}
var_282 = var281;
for(;;) {
{
var283 = ((short int(*)(val* self))((((long)var_282&3)?class_info[((long)var_282&3)]:var_282->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_282); /* is_ok on <var_282:IndexedIterator[nullable MProperty]>*/
}
if (var283){
} else {
goto BREAK_label284;
}
{
var285 = ((val*(*)(val* self))((((long)var_282&3)?class_info[((long)var_282&3)]:var_282->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_282); /* item on <var_282:IndexedIterator[nullable MProperty]>*/
}
var_e286 = var285;
if (var_e286 == NULL) {
var287 = 1; /* is null */
} else {
var287 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_e286,((val*)NULL)) on <var_e286:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_e286,var_other) on <var_e286:nullable MProperty(MProperty)> */
var292 = var_e286 == var_other;
var290 = var292;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
}
var288 = var290;
goto RET_LABEL289;
RET_LABEL289:(void)0;
}
var287 = var288;
}
if (var287){
{
{ /* Inline kernel$Int$+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var295 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var295)) {
var_class_name298 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name298);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var299 = var_holes + 1l;
var293 = var299;
goto RET_LABEL294;
RET_LABEL294:(void)0;
}
}
var_holes = var293;
} else {
}
{
((void(*)(val* self))((((long)var_282&3)?class_info[((long)var_282&3)]:var_282->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_282); /* next on <var_282:IndexedIterator[nullable MProperty]>*/
}
}
BREAK_label284: (void)0;
{
((void(*)(val* self))((((long)var_282&3)?class_info[((long)var_282&3)]:var_282->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_282); /* finish on <var_282:IndexedIterator[nullable MProperty]>*/
}
{
((void(*)(val* self))((((long)var_263&3)?class_info[((long)var_263&3)]:var_263->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_263); /* next on <var_263:MapIterator[MClass, Array[nullable MProperty]]>*/
}
}
BREAK_label265: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_263) on <var_263:MapIterator[MClass, Array[nullable MProperty]]> */
RET_LABEL300:(void)0;
}
}
var301 = glob_sys;
if (unlikely(varonce302==NULL)) {
var303 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "\t";
var308 = (val*)(1l<<2|1);
var309 = (val*)(1l<<2|1);
var310 = (val*)((long)(0)<<2|3);
var311 = (val*)((long)(0)<<2|3);
var307 = core__flat___CString___to_s_unsafe(var306, var308, var309, var310, var311);
var305 = var307;
varonce304 = var305;
}
((struct instance_core__NativeArray*)var303)->values[0]=var305;
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "\t";
var316 = (val*)(1l<<2|1);
var317 = (val*)(1l<<2|1);
var318 = (val*)((long)(0)<<2|3);
var319 = (val*)((long)(0)<<2|3);
var315 = core__flat___CString___to_s_unsafe(var314, var316, var317, var318, var319);
var313 = var315;
varonce312 = var313;
}
((struct instance_core__NativeArray*)var303)->values[2]=var313;
} else {
var303 = varonce302;
varonce302 = NULL;
}
var320 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var303)->values[1]=var320;
var321 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var303)->values[3]=var321;
{
var322 = ((val*(*)(val* self))(var303->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var303); /* native_to_s on <var303:NativeArray[String]>*/
}
varonce302 = var303;
{
core__file___Sys___print(var301, var322); /* Direct call file$Sys$print on <var301:Sys>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler$SeparateErasureCompilerVisitor$compile_callsite for (self: SeparateErasureCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var10 /* : ModelBuilder */;
val* var12 /* : ModelBuilder */;
val* var13 /* : ToolContext */;
val* var15 /* : ToolContext */;
val* var16 /* : OptionBool */;
val* var18 /* : OptionBool */;
val* var19 /* : nullable Object */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MSignature */;
val* var31 /* : MSignature */;
val* var32 /* : nullable MType */;
val* var34 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : NativeArray[String] */;
static val* varonce;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
val* var76 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var78 /* : NativeArray[String] */;
static val* varonce77;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
val* var95 /* : String */;
val* var96 /* : String */;
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
var_callsite = p0;
var_arguments = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, p0, p1); /* compile_callsite on <self:SeparateErasureCompilerVisitor>*/
}
var_res = var1;
{
{ /* Inline typing$CallSite$erasure_cast (var_callsite) on <var_callsite:CallSite> */
var5 = var_callsite->attrs[COLOR_nitc__typing__CallSite___erasure_cast].s; /* _erasure_cast on <var_callsite:CallSite> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var6:AbstractCompiler(SeparateCompiler)> isa SeparateErasureCompiler */
cltype = type_nitc__SeparateErasureCompiler.color;
idtype = type_nitc__SeparateErasureCompiler.id;
if(cltype >= var6->type->table_size) {
var9 = 0;
} else {
var9 = var6->type->type_table[cltype] == idtype;
}
if (unlikely(!var9)) {
var_class_name = var6 == NULL ? "null" : var6->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SeparateErasureCompiler", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 480);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var6) on <var6:AbstractCompiler(SeparateErasureCompiler)> */
var12 = var6->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:AbstractCompiler(SeparateErasureCompiler)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var10) on <var10:ModelBuilder> */
var15 = var10->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var10:ModelBuilder> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler$ToolContext$opt_no_check_erasure_cast (var13) on <var13:ToolContext> */
var18 = var13->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val; /* _opt_no_check_erasure_cast on <var13:ToolContext> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_erasure_cast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 26);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline opts$Option$value (var16) on <var16:OptionBool> */
var21 = var16->attrs[COLOR_opts__Option___value].val; /* _value on <var16:OptionBool> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = (short int)((long)(var19)>>2);
var23 = !var22;
var2 = var23;
} else {
var2 = var_;
}
if (var2){
if (var_res == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var27 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (unlikely(!var24)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 481);
fatal_exit(1);
}
{
{ /* Inline typing$CallSite$msignature (var_callsite) on <var_callsite:CallSite> */
var31 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:CallSite> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var29) on <var29:MSignature> */
var34 = var29->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var29:MSignature> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_mtype = var32;
if (var_mtype == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (unlikely(!var35)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 483);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var40 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "/* Erasure cast for return ";
var45 = (val*)(27l<<2|1);
var46 = (val*)(27l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = " isa ";
var53 = (val*)(5l<<2|1);
var54 = (val*)(5l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var40)->values[2]=var50;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = " */";
var61 = (val*)(3l<<2|1);
var62 = (val*)(3l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var40)->values[4]=var58;
} else {
var40 = varonce;
varonce = NULL;
}
{
var65 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var40)->values[1]=var65;
{
var66 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var40)->values[3]=var66;
{
var67 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce = var40;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var67); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "erasure";
var72 = (val*)(7l<<2|1);
var73 = (val*)(7l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
{
var76 = nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__type_test(self, var_res, var_mtype, var69);
}
var_cond = var76;
if (unlikely(varonce77==NULL)) {
var78 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "if (!";
var83 = (val*)(5l<<2|1);
var84 = (val*)(5l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var78)->values[0]=var80;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = ") {";
var91 = (val*)(3l<<2|1);
var92 = (val*)(3l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var78)->values[2]=var88;
} else {
var78 = varonce77;
varonce77 = NULL;
}
{
var95 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var78)->values[1]=var95;
{
var96 = ((val*(*)(val* self))(var78->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var96); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "Cast failed";
var101 = (val*)(11l<<2|1);
var102 = (val*)(11l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var98); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "}";
var109 = (val*)(1l<<2|1);
var110 = (val*)(1l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var106); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompilerVisitor$init_instance for (self: SeparateErasureCompilerVisitor, MClassType): RuntimeVariable */
val* nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
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
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
val* var33 /* : MClass */;
val* var35 /* : MClass */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : RuntimeVariable */;
var_mtype = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "NEW_";
var6 = (val*)(4l<<2|1);
var7 = (val*)(4l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var12 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var10);
}
((struct instance_core__NativeArray*)var1)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var14); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "NEW_";
var21 = (val*)(4l<<2|1);
var22 = (val*)(4l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[0]=var18;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "()";
var29 = (val*)(2l<<2|1);
var30 = (val*)(2l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var16)->values[2]=var26;
} else {
var16 = varonce15;
varonce15 = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var35 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var33);
}
((struct instance_core__NativeArray*)var16)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
{
var38 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var37, var_mtype);
}
var = var38;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompilerVisitor$type_test for (self: SeparateErasureCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
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
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : MClassType */;
val* var30 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
val* var39 /* : String */;
val* var_cltype /* var cltype: String */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
val* var67 /* : String */;
val* var_idtype /* var idtype: String */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
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
val* var86 /* : String */;
short int var87 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
val* var_accept_null /* var accept_null: String */;
short int var96 /* : Bool */;
int cltype;
int idtype;
val* var97 /* : MType */;
val* var99 /* : MType */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Bool */;
val* var107 /* : nullable Bool */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
val* var111 /* : nullable StaticFrame */;
val* var113 /* : nullable StaticFrame */;
val* var114 /* : MPropDef */;
val* var116 /* : MPropDef */;
val* var117 /* : MClassDef */;
val* var119 /* : MClassDef */;
val* var120 /* : MClassType */;
val* var122 /* : MClassType */;
val* var123 /* : nullable StaticFrame */;
val* var125 /* : nullable StaticFrame */;
val* var126 /* : MPropDef */;
val* var128 /* : MPropDef */;
val* var129 /* : MClassDef */;
val* var131 /* : MClassDef */;
val* var132 /* : MClassType */;
val* var134 /* : MClassType */;
val* var135 /* : nullable StaticFrame */;
val* var137 /* : nullable StaticFrame */;
val* var138 /* : MPropDef */;
val* var140 /* : MPropDef */;
val* var141 /* : MClassDef */;
val* var143 /* : MClassDef */;
val* var144 /* : MModule */;
val* var146 /* : MModule */;
val* var147 /* : MType */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
val* var151 /* : MType */;
val* var153 /* : MType */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Bool */;
val* var161 /* : nullable Bool */;
val* var162 /* : MType */;
val* var164 /* : MType */;
val* var165 /* : nullable StaticFrame */;
val* var167 /* : nullable StaticFrame */;
val* var168 /* : MPropDef */;
val* var170 /* : MPropDef */;
val* var171 /* : MClassDef */;
val* var173 /* : MClassDef */;
val* var174 /* : MModule */;
val* var176 /* : MModule */;
val* var177 /* : nullable StaticFrame */;
val* var179 /* : nullable StaticFrame */;
val* var180 /* : MPropDef */;
val* var182 /* : MPropDef */;
val* var183 /* : MClassDef */;
val* var185 /* : MClassDef */;
val* var186 /* : MClassType */;
val* var188 /* : MClassType */;
short int var189 /* : Bool */;
val* var191 /* : NativeArray[String] */;
static val* varonce190;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : CString */;
val* var195 /* : String */;
val* var196 /* : nullable Int */;
val* var197 /* : nullable Int */;
val* var198 /* : nullable Bool */;
val* var199 /* : nullable Bool */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : CString */;
val* var203 /* : String */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Int */;
val* var206 /* : nullable Bool */;
val* var207 /* : nullable Bool */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : CString */;
val* var211 /* : String */;
val* var212 /* : nullable Int */;
val* var213 /* : nullable Int */;
val* var214 /* : nullable Bool */;
val* var215 /* : nullable Bool */;
val* var216 /* : String */;
val* var217 /* : String */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var220 /* : AbstractCompiler */;
val* var222 /* : AbstractCompiler */;
val* var223 /* : ModelBuilder */;
val* var225 /* : ModelBuilder */;
val* var226 /* : ToolContext */;
val* var228 /* : ToolContext */;
val* var229 /* : OptionBool */;
val* var231 /* : OptionBool */;
val* var232 /* : nullable Object */;
val* var234 /* : nullable Object */;
short int var235 /* : Bool */;
val* var236 /* : AbstractCompiler */;
val* var238 /* : AbstractCompiler */;
val* var239 /* : HashMap[String, Int] */;
val* var241 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
val* var_242 /* var : String */;
val* var243 /* : nullable Object */;
long var244 /* : Int */;
short int var246 /* : Bool */;
int cltype247;
int idtype248;
const char* var_class_name;
long var249 /* : Int */;
long var250 /* : Int */;
val* var251 /* : nullable Object */;
val* var253 /* : NativeArray[String] */;
static val* varonce252;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : CString */;
val* var257 /* : String */;
val* var258 /* : nullable Int */;
val* var259 /* : nullable Int */;
val* var260 /* : nullable Bool */;
val* var261 /* : nullable Bool */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : CString */;
val* var265 /* : String */;
val* var266 /* : nullable Int */;
val* var267 /* : nullable Int */;
val* var268 /* : nullable Bool */;
val* var269 /* : nullable Bool */;
val* var270 /* : String */;
val* var271 /* : MType */;
val* var273 /* : MType */;
short int var274 /* : Bool */;
short int var275 /* : Bool */;
val* var277 /* : NativeArray[String] */;
static val* varonce276;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : CString */;
val* var281 /* : String */;
val* var282 /* : nullable Int */;
val* var283 /* : nullable Int */;
val* var284 /* : nullable Bool */;
val* var285 /* : nullable Bool */;
val* var286 /* : String */;
val* var287 /* : String */;
val* var_class_ptr /* var class_ptr: nullable Object */;
val* var288 /* : MType */;
val* var290 /* : MType */;
short int var291 /* : Bool */;
int cltype292;
int idtype293;
const char* var_class_name294;
val* var295 /* : MClass */;
val* var297 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var299 /* : NativeArray[String] */;
static val* varonce298;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : CString */;
val* var303 /* : String */;
val* var304 /* : nullable Int */;
val* var305 /* : nullable Int */;
val* var306 /* : nullable Bool */;
val* var307 /* : nullable Bool */;
val* var308 /* : String */;
val* var309 /* : String */;
val* var311 /* : NativeArray[String] */;
static val* varonce310;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : CString */;
val* var315 /* : String */;
val* var316 /* : nullable Int */;
val* var317 /* : nullable Int */;
val* var318 /* : nullable Bool */;
val* var319 /* : nullable Bool */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : CString */;
val* var323 /* : String */;
val* var324 /* : nullable Int */;
val* var325 /* : nullable Int */;
val* var326 /* : nullable Bool */;
val* var327 /* : nullable Bool */;
val* var328 /* : String */;
val* var329 /* : String */;
short int var330 /* : Bool */;
int cltype331;
int idtype332;
val* var334 /* : NativeArray[String] */;
static val* varonce333;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : CString */;
val* var338 /* : String */;
val* var339 /* : nullable Int */;
val* var340 /* : nullable Int */;
val* var341 /* : nullable Bool */;
val* var342 /* : nullable Bool */;
val* var343 /* : MClass */;
val* var345 /* : MClass */;
val* var346 /* : String */;
val* var347 /* : String */;
val* var349 /* : NativeArray[String] */;
static val* varonce348;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : CString */;
val* var353 /* : String */;
val* var354 /* : nullable Int */;
val* var355 /* : nullable Int */;
val* var356 /* : nullable Bool */;
val* var357 /* : nullable Bool */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : CString */;
val* var361 /* : String */;
val* var362 /* : nullable Int */;
val* var363 /* : nullable Int */;
val* var364 /* : nullable Bool */;
val* var365 /* : nullable Bool */;
val* var366 /* : MClass */;
val* var368 /* : MClass */;
val* var369 /* : String */;
val* var370 /* : String */;
val* var372 /* : NativeArray[String] */;
static val* varonce371;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : CString */;
val* var376 /* : String */;
val* var377 /* : nullable Int */;
val* var378 /* : nullable Int */;
val* var379 /* : nullable Bool */;
val* var380 /* : nullable Bool */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : CString */;
val* var384 /* : String */;
val* var385 /* : nullable Int */;
val* var386 /* : nullable Int */;
val* var387 /* : nullable Bool */;
val* var388 /* : nullable Bool */;
val* var389 /* : MClass */;
val* var391 /* : MClass */;
val* var392 /* : String */;
val* var393 /* : String */;
val* var394 /* : AbstractCompiler */;
val* var396 /* : AbstractCompiler */;
val* var397 /* : ModelBuilder */;
val* var399 /* : ModelBuilder */;
val* var400 /* : ToolContext */;
val* var402 /* : ToolContext */;
val* var403 /* : OptionBool */;
val* var405 /* : OptionBool */;
val* var406 /* : nullable Object */;
val* var408 /* : nullable Object */;
short int var409 /* : Bool */;
val* var410 /* : AbstractCompiler */;
val* var412 /* : AbstractCompiler */;
val* var413 /* : HashMap[String, Int] */;
val* var415 /* : HashMap[String, Int] */;
val* var_416 /* var : HashMap[String, Int] */;
val* var_417 /* var : String */;
val* var418 /* : nullable Object */;
long var419 /* : Int */;
short int var421 /* : Bool */;
int cltype422;
int idtype423;
const char* var_class_name424;
long var425 /* : Int */;
long var426 /* : Int */;
val* var427 /* : nullable Object */;
val* var429 /* : NativeArray[String] */;
static val* varonce428;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : CString */;
val* var433 /* : String */;
val* var434 /* : nullable Int */;
val* var435 /* : nullable Int */;
val* var436 /* : nullable Bool */;
val* var437 /* : nullable Bool */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : CString */;
val* var441 /* : String */;
val* var442 /* : nullable Int */;
val* var443 /* : nullable Int */;
val* var444 /* : nullable Bool */;
val* var445 /* : nullable Bool */;
val* var446 /* : String */;
short int var447 /* : Bool */;
int cltype448;
int idtype449;
val* var450 /* : nullable StaticFrame */;
val* var452 /* : nullable StaticFrame */;
val* var453 /* : Array[RuntimeVariable] */;
val* var455 /* : Array[RuntimeVariable] */;
val* var456 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var457 /* : MType */;
val* var459 /* : MType */;
short int var460 /* : Bool */;
short int var461 /* : Bool */;
val* var463 /* : NativeArray[String] */;
static val* varonce462;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : CString */;
val* var467 /* : String */;
val* var468 /* : nullable Int */;
val* var469 /* : nullable Int */;
val* var470 /* : nullable Bool */;
val* var471 /* : nullable Bool */;
val* var472 /* : String */;
val* var473 /* : String */;
val* var_recv_ptr /* var recv_ptr: nullable Object */;
val* var474 /* : MType */;
val* var476 /* : MType */;
short int var477 /* : Bool */;
int cltype478;
int idtype479;
const char* var_class_name480;
val* var481 /* : MClass */;
val* var483 /* : MClass */;
val* var_mclass484 /* var mclass: MClass */;
val* var486 /* : NativeArray[String] */;
static val* varonce485;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : CString */;
val* var490 /* : String */;
val* var491 /* : nullable Int */;
val* var492 /* : nullable Int */;
val* var493 /* : nullable Bool */;
val* var494 /* : nullable Bool */;
val* var495 /* : String */;
val* var496 /* : String */;
val* var498 /* : NativeArray[String] */;
static val* varonce497;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : CString */;
val* var502 /* : String */;
val* var503 /* : nullable Int */;
val* var504 /* : nullable Int */;
val* var505 /* : nullable Bool */;
val* var506 /* : nullable Bool */;
static val* varonce507;
val* var508 /* : String */;
char* var509 /* : CString */;
val* var510 /* : String */;
val* var511 /* : nullable Int */;
val* var512 /* : nullable Int */;
val* var513 /* : nullable Bool */;
val* var514 /* : nullable Bool */;
val* var515 /* : String */;
val* var516 /* : String */;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : CString */;
val* var520 /* : String */;
val* var521 /* : nullable Int */;
val* var522 /* : nullable Int */;
val* var523 /* : nullable Bool */;
val* var524 /* : nullable Bool */;
val* var525 /* : String */;
val* var_entry /* var entry: String */;
val* var527 /* : NativeArray[String] */;
static val* varonce526;
static val* varonce528;
val* var529 /* : String */;
char* var530 /* : CString */;
val* var531 /* : String */;
val* var532 /* : nullable Int */;
val* var533 /* : nullable Int */;
val* var534 /* : nullable Bool */;
val* var535 /* : nullable Bool */;
static val* varonce536;
val* var537 /* : String */;
char* var538 /* : CString */;
val* var539 /* : String */;
val* var540 /* : nullable Int */;
val* var541 /* : nullable Int */;
val* var542 /* : nullable Bool */;
val* var543 /* : nullable Bool */;
val* var544 /* : String */;
val* var545 /* : MVirtualTypeProp */;
val* var547 /* : MVirtualTypeProp */;
val* var548 /* : String */;
val* var550 /* : NativeArray[String] */;
static val* varonce549;
static val* varonce551;
val* var552 /* : String */;
char* var553 /* : CString */;
val* var554 /* : String */;
val* var555 /* : nullable Int */;
val* var556 /* : nullable Int */;
val* var557 /* : nullable Bool */;
val* var558 /* : nullable Bool */;
static val* varonce559;
val* var560 /* : String */;
char* var561 /* : CString */;
val* var562 /* : String */;
val* var563 /* : nullable Int */;
val* var564 /* : nullable Int */;
val* var565 /* : nullable Bool */;
val* var566 /* : nullable Bool */;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : CString */;
val* var570 /* : String */;
val* var571 /* : nullable Int */;
val* var572 /* : nullable Int */;
val* var573 /* : nullable Bool */;
val* var574 /* : nullable Bool */;
val* var575 /* : MVirtualTypeProp */;
val* var577 /* : MVirtualTypeProp */;
val* var578 /* : String */;
val* var579 /* : String */;
val* var581 /* : NativeArray[String] */;
static val* varonce580;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : CString */;
val* var585 /* : String */;
val* var586 /* : nullable Int */;
val* var587 /* : nullable Int */;
val* var588 /* : nullable Bool */;
val* var589 /* : nullable Bool */;
static val* varonce590;
val* var591 /* : String */;
char* var592 /* : CString */;
val* var593 /* : String */;
val* var594 /* : nullable Int */;
val* var595 /* : nullable Int */;
val* var596 /* : nullable Bool */;
val* var597 /* : nullable Bool */;
val* var598 /* : String */;
val* var600 /* : NativeArray[String] */;
static val* varonce599;
static val* varonce601;
val* var602 /* : String */;
char* var603 /* : CString */;
val* var604 /* : String */;
val* var605 /* : nullable Int */;
val* var606 /* : nullable Int */;
val* var607 /* : nullable Bool */;
val* var608 /* : nullable Bool */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : CString */;
val* var612 /* : String */;
val* var613 /* : nullable Int */;
val* var614 /* : nullable Int */;
val* var615 /* : nullable Bool */;
val* var616 /* : nullable Bool */;
val* var617 /* : String */;
short int var618 /* : Bool */;
short int var_619 /* var : Bool */;
static val* varonce620;
val* var621 /* : String */;
char* var622 /* : CString */;
val* var623 /* : String */;
val* var624 /* : nullable Int */;
val* var625 /* : nullable Int */;
val* var626 /* : nullable Bool */;
val* var627 /* : nullable Bool */;
short int var628 /* : Bool */;
static val* varonce629;
val* var630 /* : String */;
char* var631 /* : CString */;
val* var632 /* : String */;
val* var633 /* : nullable Int */;
val* var634 /* : nullable Int */;
val* var635 /* : nullable Bool */;
val* var636 /* : nullable Bool */;
val* var637 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
val* var639 /* : NativeArray[String] */;
static val* varonce638;
static val* varonce640;
val* var641 /* : String */;
char* var642 /* : CString */;
val* var643 /* : String */;
val* var644 /* : nullable Int */;
val* var645 /* : nullable Int */;
val* var646 /* : nullable Bool */;
val* var647 /* : nullable Bool */;
static val* varonce648;
val* var649 /* : String */;
char* var650 /* : CString */;
val* var651 /* : String */;
val* var652 /* : nullable Int */;
val* var653 /* : nullable Int */;
val* var654 /* : nullable Bool */;
val* var655 /* : nullable Bool */;
val* var656 /* : String */;
val* var658 /* : NativeArray[String] */;
static val* varonce657;
static val* varonce659;
val* var660 /* : String */;
char* var661 /* : CString */;
val* var662 /* : String */;
val* var663 /* : nullable Int */;
val* var664 /* : nullable Int */;
val* var665 /* : nullable Bool */;
val* var666 /* : nullable Bool */;
static val* varonce667;
val* var668 /* : String */;
char* var669 /* : CString */;
val* var670 /* : String */;
val* var671 /* : nullable Int */;
val* var672 /* : nullable Int */;
val* var673 /* : nullable Bool */;
val* var674 /* : nullable Bool */;
val* var675 /* : String */;
val* var676 /* : String */;
val* var677 /* : AbstractCompiler */;
val* var679 /* : AbstractCompiler */;
val* var680 /* : ModelBuilder */;
val* var682 /* : ModelBuilder */;
val* var683 /* : ToolContext */;
val* var685 /* : ToolContext */;
val* var686 /* : OptionBool */;
val* var688 /* : OptionBool */;
val* var689 /* : nullable Object */;
val* var691 /* : nullable Object */;
short int var692 /* : Bool */;
val* var693 /* : AbstractCompiler */;
val* var695 /* : AbstractCompiler */;
val* var696 /* : HashMap[String, Int] */;
val* var698 /* : HashMap[String, Int] */;
val* var_699 /* var : HashMap[String, Int] */;
val* var_700 /* var : String */;
val* var701 /* : nullable Object */;
long var702 /* : Int */;
short int var704 /* : Bool */;
int cltype705;
int idtype706;
const char* var_class_name707;
long var708 /* : Int */;
long var709 /* : Int */;
val* var710 /* : nullable Object */;
val* var712 /* : NativeArray[String] */;
static val* varonce711;
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
val* var729 /* : String */;
val* var731 /* : NativeArray[String] */;
static val* varonce730;
static val* varonce732;
val* var733 /* : String */;
char* var734 /* : CString */;
val* var735 /* : String */;
val* var736 /* : nullable Int */;
val* var737 /* : nullable Int */;
val* var738 /* : nullable Bool */;
val* var739 /* : nullable Bool */;
static val* varonce740;
val* var741 /* : String */;
char* var742 /* : CString */;
val* var743 /* : String */;
val* var744 /* : nullable Int */;
val* var745 /* : nullable Int */;
val* var746 /* : nullable Bool */;
val* var747 /* : nullable Bool */;
static val* varonce748;
val* var749 /* : String */;
char* var750 /* : CString */;
val* var751 /* : String */;
val* var752 /* : nullable Int */;
val* var753 /* : nullable Int */;
val* var754 /* : nullable Bool */;
val* var755 /* : nullable Bool */;
val* var756 /* : String */;
val* var757 /* : String */;
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
static val* varonce799;
val* var800 /* : String */;
char* var801 /* : CString */;
val* var802 /* : String */;
val* var803 /* : nullable Int */;
val* var804 /* : nullable Int */;
val* var805 /* : nullable Bool */;
val* var806 /* : nullable Bool */;
val* var808 /* : NativeArray[String] */;
static val* varonce807;
static val* varonce809;
val* var810 /* : String */;
char* var811 /* : CString */;
val* var812 /* : String */;
val* var813 /* : nullable Int */;
val* var814 /* : nullable Int */;
val* var815 /* : nullable Bool */;
val* var816 /* : nullable Bool */;
static val* varonce817;
val* var818 /* : String */;
char* var819 /* : CString */;
val* var820 /* : String */;
val* var821 /* : nullable Int */;
val* var822 /* : nullable Int */;
val* var823 /* : nullable Bool */;
val* var824 /* : nullable Bool */;
static val* varonce825;
val* var826 /* : String */;
char* var827 /* : CString */;
val* var828 /* : String */;
val* var829 /* : nullable Int */;
val* var830 /* : nullable Int */;
val* var831 /* : nullable Bool */;
val* var832 /* : nullable Bool */;
val* var833 /* : String */;
val* var835 /* : NativeArray[String] */;
static val* varonce834;
static val* varonce836;
val* var837 /* : String */;
char* var838 /* : CString */;
val* var839 /* : String */;
val* var840 /* : nullable Int */;
val* var841 /* : nullable Int */;
val* var842 /* : nullable Bool */;
val* var843 /* : nullable Bool */;
val* var844 /* : String */;
val* var845 /* : String */;
static val* varonce846;
val* var847 /* : String */;
char* var848 /* : CString */;
val* var849 /* : String */;
val* var850 /* : nullable Int */;
val* var851 /* : nullable Int */;
val* var852 /* : nullable Bool */;
val* var853 /* : nullable Bool */;
val* var855 /* : NativeArray[String] */;
static val* varonce854;
static val* varonce856;
val* var857 /* : String */;
char* var858 /* : CString */;
val* var859 /* : String */;
val* var860 /* : nullable Int */;
val* var861 /* : nullable Int */;
val* var862 /* : nullable Bool */;
val* var863 /* : nullable Bool */;
static val* varonce864;
val* var865 /* : String */;
char* var866 /* : CString */;
val* var867 /* : String */;
val* var868 /* : nullable Int */;
val* var869 /* : nullable Int */;
val* var870 /* : nullable Bool */;
val* var871 /* : nullable Bool */;
static val* varonce872;
val* var873 /* : String */;
char* var874 /* : CString */;
val* var875 /* : String */;
val* var876 /* : nullable Int */;
val* var877 /* : nullable Int */;
val* var878 /* : nullable Bool */;
val* var879 /* : nullable Bool */;
static val* varonce880;
val* var881 /* : String */;
char* var882 /* : CString */;
val* var883 /* : String */;
val* var884 /* : nullable Int */;
val* var885 /* : nullable Int */;
val* var886 /* : nullable Bool */;
val* var887 /* : nullable Bool */;
val* var888 /* : String */;
val* var889 /* : String */;
static val* varonce890;
val* var891 /* : String */;
char* var892 /* : CString */;
val* var893 /* : String */;
val* var894 /* : nullable Int */;
val* var895 /* : nullable Int */;
val* var896 /* : nullable Bool */;
val* var897 /* : nullable Bool */;
static val* varonce898;
val* var899 /* : String */;
char* var900 /* : CString */;
val* var901 /* : String */;
val* var902 /* : nullable Int */;
val* var903 /* : nullable Int */;
val* var904 /* : nullable Bool */;
val* var905 /* : nullable Bool */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "/* type test for ";
var6 = (val*)(17l<<2|1);
var7 = (val*)(17l<<2|1);
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
var12 = " isa ";
var14 = (val*)(5l<<2|1);
var15 = (val*)(5l<<2|1);
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
var20 = " */";
var22 = (val*)(3l<<2|1);
var23 = (val*)(3l<<2|1);
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
var26 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_value);
}
((struct instance_core__NativeArray*)var1)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[3]=var27;
{
var28 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var28); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
{
var29 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var30 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var29);
}
var_res = var30;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "cltype";
var35 = (val*)(6l<<2|1);
var36 = (val*)(6l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce31 = var32;
}
{
var39 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var32);
}
var_cltype = var39;
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "int ";
var46 = (val*)(4l<<2|1);
var47 = (val*)(4l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ";";
var54 = (val*)(1l<<2|1);
var55 = (val*)(1l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var41)->values[2]=var51;
} else {
var41 = varonce40;
varonce40 = NULL;
}
((struct instance_core__NativeArray*)var41)->values[1]=var_cltype;
{
var58 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var58); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "idtype";
var63 = (val*)(6l<<2|1);
var64 = (val*)(6l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
{
var67 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var60);
}
var_idtype = var67;
if (unlikely(varonce68==NULL)) {
var69 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "int ";
var74 = (val*)(4l<<2|1);
var75 = (val*)(4l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[0]=var71;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = ";";
var82 = (val*)(1l<<2|1);
var83 = (val*)(1l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var69)->values[2]=var79;
} else {
var69 = varonce68;
varonce68 = NULL;
}
((struct instance_core__NativeArray*)var69)->values[1]=var_idtype;
{
var86 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var86); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:SeparateErasureCompilerVisitor>*/
}
{
var87 = nitc___nitc__SeparateCompilerVisitor___maybe_null(self, var_value);
}
var_maybe_null = var87;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "0";
var92 = (val*)(1l<<2|1);
var93 = (val*)(1l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
var_accept_null = var89;
/* <var_mtype:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var96 = 0;
} else {
var96 = var_mtype->type->type_table[cltype] == idtype;
}
if (var96){
{
{ /* Inline model$MProxyType$mtype (var_mtype) on <var_mtype:MType(MNullableType)> */
var99 = var_mtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_mtype:MType(MNullableType)> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
var_mtype = var97;
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "1";
var104 = (val*)(1l<<2|1);
var105 = (val*)(1l<<2|1);
var106 = (val*)((long)(0)<<2|3);
var107 = (val*)((long)(0)<<2|3);
var103 = core__flat___CString___to_s_unsafe(var102, var104, var105, var106, var107);
var101 = var103;
varonce100 = var101;
}
var_accept_null = var101;
} else {
}
/* <var_mtype:MType> isa MParameterType */
cltype109 = type_nitc__MParameterType.color;
idtype110 = type_nitc__MParameterType.id;
if(cltype109 >= var_mtype->type->table_size) {
var108 = 0;
} else {
var108 = var_mtype->type->type_table[cltype109] == idtype110;
}
if (var108){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateErasureCompilerVisitor> */
var113 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (var111 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 521);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var111) on <var111:nullable StaticFrame> */
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var116 = var111->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var111:nullable StaticFrame> */
if (unlikely(var116 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var114) on <var114:MPropDef> */
var119 = var114->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var114:MPropDef> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var117) on <var117:MClassDef> */
var122 = var117->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var117:MClassDef> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateErasureCompilerVisitor> */
var125 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
if (var123 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 521);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var123) on <var123:nullable StaticFrame> */
if (unlikely(var123 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var128 = var123->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var123:nullable StaticFrame> */
if (unlikely(var128 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var126) on <var126:MPropDef> */
var131 = var126->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var126:MPropDef> */
if (unlikely(var131 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var129) on <var129:MClassDef> */
var134 = var129->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var129:MClassDef> */
if (unlikely(var134 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateErasureCompilerVisitor> */
var137 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var135 = var137;
RET_LABEL136:(void)0;
}
}
if (var135 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 521);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var135) on <var135:nullable StaticFrame> */
if (unlikely(var135 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var140 = var135->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var135:nullable StaticFrame> */
if (unlikely(var140 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var138) on <var138:MPropDef> */
var143 = var138->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var138:MPropDef> */
if (unlikely(var143 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var141) on <var141:MClassDef> */
var146 = var141->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var141:MClassDef> */
if (unlikely(var146 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = nitc___nitc__MParameterType___MType__resolve_for(var_mtype, var120, var132, var144, 0);
}
var_mtype = var147;
/* <var_mtype:MType> isa MNullableType */
cltype149 = type_nitc__MNullableType.color;
idtype150 = type_nitc__MNullableType.id;
if(cltype149 >= var_mtype->type->table_size) {
var148 = 0;
} else {
var148 = var_mtype->type->type_table[cltype149] == idtype150;
}
if (var148){
{
{ /* Inline model$MProxyType$mtype (var_mtype) on <var_mtype:MType(MNullableType)> */
var153 = var_mtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_mtype:MType(MNullableType)> */
if (unlikely(var153 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_mtype = var151;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "1";
var158 = (val*)(1l<<2|1);
var159 = (val*)(1l<<2|1);
var160 = (val*)((long)(0)<<2|3);
var161 = (val*)((long)(0)<<2|3);
var157 = core__flat___CString___to_s_unsafe(var156, var158, var159, var160, var161);
var155 = var157;
varonce154 = var155;
}
var_accept_null = var155;
} else {
}
} else {
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var164 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var164 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateErasureCompilerVisitor> */
var167 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var165 = var167;
RET_LABEL166:(void)0;
}
}
if (var165 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 528);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var165) on <var165:nullable StaticFrame> */
if (unlikely(var165 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var170 = var165->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var165:nullable StaticFrame> */
if (unlikely(var170 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var168) on <var168:MPropDef> */
var173 = var168->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var168:MPropDef> */
if (unlikely(var173 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var171) on <var171:MClassDef> */
var176 = var171->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var171:MClassDef> */
if (unlikely(var176 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateErasureCompilerVisitor> */
var179 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var177 = var179;
RET_LABEL178:(void)0;
}
}
if (var177 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 528);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var177) on <var177:nullable StaticFrame> */
if (unlikely(var177 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var182 = var177->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var177:nullable StaticFrame> */
if (unlikely(var182 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var180) on <var180:MPropDef> */
var185 = var180->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var180:MPropDef> */
if (unlikely(var185 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var183) on <var183:MClassDef> */
var188 = var183->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var183:MClassDef> */
if (unlikely(var188 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
var189 = nitc___nitc__MType___is_subtype(var162, var174, var186, var_mtype);
}
if (var189){
if (unlikely(varonce190==NULL)) {
var191 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = " = 1; /* easy ";
var196 = (val*)(14l<<2|1);
var197 = (val*)(14l<<2|1);
var198 = (val*)((long)(0)<<2|3);
var199 = (val*)((long)(0)<<2|3);
var195 = core__flat___CString___to_s_unsafe(var194, var196, var197, var198, var199);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var191)->values[1]=var193;
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = " isa ";
var204 = (val*)(5l<<2|1);
var205 = (val*)(5l<<2|1);
var206 = (val*)((long)(0)<<2|3);
var207 = (val*)((long)(0)<<2|3);
var203 = core__flat___CString___to_s_unsafe(var202, var204, var205, var206, var207);
var201 = var203;
varonce200 = var201;
}
((struct instance_core__NativeArray*)var191)->values[3]=var201;
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = "*/";
var212 = (val*)(2l<<2|1);
var213 = (val*)(2l<<2|1);
var214 = (val*)((long)(0)<<2|3);
var215 = (val*)((long)(0)<<2|3);
var211 = core__flat___CString___to_s_unsafe(var210, var212, var213, var214, var215);
var209 = var211;
varonce208 = var209;
}
((struct instance_core__NativeArray*)var191)->values[5]=var209;
} else {
var191 = varonce190;
varonce190 = NULL;
}
{
var216 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var191)->values[0]=var216;
{
var217 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_value);
}
((struct instance_core__NativeArray*)var191)->values[2]=var217;
{
var218 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var191)->values[4]=var218;
{
var219 = ((val*(*)(val* self))(var191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var191); /* native_to_s on <var191:NativeArray[String]>*/
}
varonce190 = var191;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var219); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var222 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var222 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var220) on <var220:AbstractCompiler(SeparateCompiler)> */
var225 = var220->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var220:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var225 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var223) on <var223:ModelBuilder> */
var228 = var223->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var223:ModelBuilder> */
if (unlikely(var228 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var226) on <var226:ToolContext> */
var231 = var226->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var226:ToolContext> */
if (unlikely(var231 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
{ /* Inline opts$Option$value (var229) on <var229:OptionBool> */
var234 = var229->attrs[COLOR_opts__Option___value].val; /* _value on <var229:OptionBool> */
var232 = var234;
RET_LABEL233:(void)0;
}
}
var235 = (short int)((long)(var232)>>2);
if (var235){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var238 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var238 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (var236) on <var236:AbstractCompiler(SeparateCompiler)> */
var241 = var236->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <var236:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var241 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
var_ = var239;
var_242 = var_tag;
{
var243 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_, var_242);
}
{
{ /* Inline kernel$Int$+ (var243,1l) on <var243:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var246 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var246)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var249 = (long)(var243)>>2;
var250 = var249 + 1l;
var244 = var250;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
}
{
var251 = (val*)(var244<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_, var_242, var251); /* Direct call hash_collection$HashMap$[]= on <var_:HashMap[String, Int]>*/
}
if (unlikely(varonce252==NULL)) {
var253 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce254!=NULL)) {
var255 = varonce254;
} else {
var256 = "count_type_test_skipped_";
var258 = (val*)(24l<<2|1);
var259 = (val*)(24l<<2|1);
var260 = (val*)((long)(0)<<2|3);
var261 = (val*)((long)(0)<<2|3);
var257 = core__flat___CString___to_s_unsafe(var256, var258, var259, var260, var261);
var255 = var257;
varonce254 = var255;
}
((struct instance_core__NativeArray*)var253)->values[0]=var255;
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = "++;";
var266 = (val*)(3l<<2|1);
var267 = (val*)(3l<<2|1);
var268 = (val*)((long)(0)<<2|3);
var269 = (val*)((long)(0)<<2|3);
var265 = core__flat___CString___to_s_unsafe(var264, var266, var267, var268, var269);
var263 = var265;
varonce262 = var263;
}
((struct instance_core__NativeArray*)var253)->values[2]=var263;
} else {
var253 = varonce252;
varonce252 = NULL;
}
((struct instance_core__NativeArray*)var253)->values[1]=var_tag;
{
var270 = ((val*(*)(val* self))(var253->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var253); /* native_to_s on <var253:NativeArray[String]>*/
}
varonce252 = var253;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var270); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var273 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var273 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var271 = var273;
RET_LABEL272:(void)0;
}
}
{
var274 = ((short int(*)(val* self))(var271->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var271); /* is_c_primitive on <var271:MType>*/
}
var275 = !var274;
if (var275){
if (unlikely(varonce276==NULL)) {
var277 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "->class->";
var282 = (val*)(9l<<2|1);
var283 = (val*)(9l<<2|1);
var284 = (val*)((long)(0)<<2|3);
var285 = (val*)((long)(0)<<2|3);
var281 = core__flat___CString___to_s_unsafe(var280, var282, var283, var284, var285);
var279 = var281;
varonce278 = var279;
}
((struct instance_core__NativeArray*)var277)->values[1]=var279;
} else {
var277 = varonce276;
varonce276 = NULL;
}
{
var286 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var277)->values[0]=var286;
{
var287 = ((val*(*)(val* self))(var277->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var277); /* native_to_s on <var277:NativeArray[String]>*/
}
varonce276 = var277;
var_class_ptr = var287;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var290 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var290 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var288 = var290;
RET_LABEL289:(void)0;
}
}
/* <var288:MType> isa MClassType */
cltype292 = type_nitc__MClassType.color;
idtype293 = type_nitc__MClassType.id;
if(cltype292 >= var288->type->table_size) {
var291 = 0;
} else {
var291 = var288->type->type_table[cltype292] == idtype293;
}
if (unlikely(!var291)) {
var_class_name294 = var288 == NULL ? "null" : var288->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name294);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 541);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var288) on <var288:MType(MClassType)> */
var297 = var288->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var288:MType(MClassType)> */
if (unlikely(var297 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var295 = var297;
RET_LABEL296:(void)0;
}
}
var_mclass = var295;
if (unlikely(varonce298==NULL)) {
var299 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = "class_";
var304 = (val*)(6l<<2|1);
var305 = (val*)(6l<<2|1);
var306 = (val*)((long)(0)<<2|3);
var307 = (val*)((long)(0)<<2|3);
var303 = core__flat___CString___to_s_unsafe(var302, var304, var305, var306, var307);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var299)->values[0]=var301;
} else {
var299 = varonce298;
varonce298 = NULL;
}
{
var308 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
((struct instance_core__NativeArray*)var299)->values[1]=var308;
{
var309 = ((val*(*)(val* self))(var299->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var299); /* native_to_s on <var299:NativeArray[String]>*/
}
varonce298 = var299;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var309); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce310==NULL)) {
var311 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "class_";
var316 = (val*)(6l<<2|1);
var317 = (val*)(6l<<2|1);
var318 = (val*)((long)(0)<<2|3);
var319 = (val*)((long)(0)<<2|3);
var315 = core__flat___CString___to_s_unsafe(var314, var316, var317, var318, var319);
var313 = var315;
varonce312 = var313;
}
((struct instance_core__NativeArray*)var311)->values[0]=var313;
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = ".";
var324 = (val*)(1l<<2|1);
var325 = (val*)(1l<<2|1);
var326 = (val*)((long)(0)<<2|3);
var327 = (val*)((long)(0)<<2|3);
var323 = core__flat___CString___to_s_unsafe(var322, var324, var325, var326, var327);
var321 = var323;
varonce320 = var321;
}
((struct instance_core__NativeArray*)var311)->values[2]=var321;
} else {
var311 = varonce310;
varonce310 = NULL;
}
{
var328 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
((struct instance_core__NativeArray*)var311)->values[1]=var328;
{
var329 = ((val*(*)(val* self))(var311->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var311); /* native_to_s on <var311:NativeArray[String]>*/
}
varonce310 = var311;
var_class_ptr = var329;
}
/* <var_mtype:MType> isa MClassType */
cltype331 = type_nitc__MClassType.color;
idtype332 = type_nitc__MClassType.id;
if(cltype331 >= var_mtype->type->table_size) {
var330 = 0;
} else {
var330 = var_mtype->type->type_table[cltype331] == idtype332;
}
if (var330){
if (unlikely(varonce333==NULL)) {
var334 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = "class_";
var339 = (val*)(6l<<2|1);
var340 = (val*)(6l<<2|1);
var341 = (val*)((long)(0)<<2|3);
var342 = (val*)((long)(0)<<2|3);
var338 = core__flat___CString___to_s_unsafe(var337, var339, var340, var341, var342);
var336 = var338;
varonce335 = var336;
}
((struct instance_core__NativeArray*)var334)->values[0]=var336;
} else {
var334 = varonce333;
varonce333 = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var345 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var345 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var343 = var345;
RET_LABEL344:(void)0;
}
}
{
var346 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var343);
}
((struct instance_core__NativeArray*)var334)->values[1]=var346;
{
var347 = ((val*(*)(val* self))(var334->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var334); /* native_to_s on <var334:NativeArray[String]>*/
}
varonce333 = var334;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var347); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce348==NULL)) {
var349 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce350!=NULL)) {
var351 = varonce350;
} else {
var352 = " = class_";
var354 = (val*)(9l<<2|1);
var355 = (val*)(9l<<2|1);
var356 = (val*)((long)(0)<<2|3);
var357 = (val*)((long)(0)<<2|3);
var353 = core__flat___CString___to_s_unsafe(var352, var354, var355, var356, var357);
var351 = var353;
varonce350 = var351;
}
((struct instance_core__NativeArray*)var349)->values[1]=var351;
if (likely(varonce358!=NULL)) {
var359 = varonce358;
} else {
var360 = ".color;";
var362 = (val*)(7l<<2|1);
var363 = (val*)(7l<<2|1);
var364 = (val*)((long)(0)<<2|3);
var365 = (val*)((long)(0)<<2|3);
var361 = core__flat___CString___to_s_unsafe(var360, var362, var363, var364, var365);
var359 = var361;
varonce358 = var359;
}
((struct instance_core__NativeArray*)var349)->values[3]=var359;
} else {
var349 = varonce348;
varonce348 = NULL;
}
((struct instance_core__NativeArray*)var349)->values[0]=var_cltype;
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var368 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var368 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var366 = var368;
RET_LABEL367:(void)0;
}
}
{
var369 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var366);
}
((struct instance_core__NativeArray*)var349)->values[2]=var369;
{
var370 = ((val*(*)(val* self))(var349->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var349); /* native_to_s on <var349:NativeArray[String]>*/
}
varonce348 = var349;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var370); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce371==NULL)) {
var372 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce373!=NULL)) {
var374 = varonce373;
} else {
var375 = " = class_";
var377 = (val*)(9l<<2|1);
var378 = (val*)(9l<<2|1);
var379 = (val*)((long)(0)<<2|3);
var380 = (val*)((long)(0)<<2|3);
var376 = core__flat___CString___to_s_unsafe(var375, var377, var378, var379, var380);
var374 = var376;
varonce373 = var374;
}
((struct instance_core__NativeArray*)var372)->values[1]=var374;
if (likely(varonce381!=NULL)) {
var382 = varonce381;
} else {
var383 = ".id;";
var385 = (val*)(4l<<2|1);
var386 = (val*)(4l<<2|1);
var387 = (val*)((long)(0)<<2|3);
var388 = (val*)((long)(0)<<2|3);
var384 = core__flat___CString___to_s_unsafe(var383, var385, var386, var387, var388);
var382 = var384;
varonce381 = var382;
}
((struct instance_core__NativeArray*)var372)->values[3]=var382;
} else {
var372 = varonce371;
varonce371 = NULL;
}
((struct instance_core__NativeArray*)var372)->values[0]=var_idtype;
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var391 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var391 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var389 = var391;
RET_LABEL390:(void)0;
}
}
{
var392 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var389);
}
((struct instance_core__NativeArray*)var372)->values[2]=var392;
{
var393 = ((val*(*)(val* self))(var372->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var372); /* native_to_s on <var372:NativeArray[String]>*/
}
varonce371 = var372;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var393); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var396 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var396 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var394 = var396;
RET_LABEL395:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var394) on <var394:AbstractCompiler(SeparateCompiler)> */
var399 = var394->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var394:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var399 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var397 = var399;
RET_LABEL398:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var397) on <var397:ModelBuilder> */
var402 = var397->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var397:ModelBuilder> */
if (unlikely(var402 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var400 = var402;
RET_LABEL401:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var400) on <var400:ToolContext> */
var405 = var400->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var400:ToolContext> */
if (unlikely(var405 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var403 = var405;
RET_LABEL404:(void)0;
}
}
{
{ /* Inline opts$Option$value (var403) on <var403:OptionBool> */
var408 = var403->attrs[COLOR_opts__Option___value].val; /* _value on <var403:OptionBool> */
var406 = var408;
RET_LABEL407:(void)0;
}
}
var409 = (short int)((long)(var406)>>2);
if (var409){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var412 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var412 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var410 = var412;
RET_LABEL411:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (var410) on <var410:AbstractCompiler(SeparateCompiler)> */
var415 = var410->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <var410:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var415 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var413 = var415;
RET_LABEL414:(void)0;
}
}
var_416 = var413;
var_417 = var_tag;
{
var418 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_416, var_417);
}
{
{ /* Inline kernel$Int$+ (var418,1l) on <var418:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var421 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var421)) {
var_class_name424 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name424);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var425 = (long)(var418)>>2;
var426 = var425 + 1l;
var419 = var426;
goto RET_LABEL420;
RET_LABEL420:(void)0;
}
}
{
var427 = (val*)(var419<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_416, var_417, var427); /* Direct call hash_collection$HashMap$[]= on <var_416:HashMap[String, Int]>*/
}
if (unlikely(varonce428==NULL)) {
var429 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce430!=NULL)) {
var431 = varonce430;
} else {
var432 = "count_type_test_resolved_";
var434 = (val*)(25l<<2|1);
var435 = (val*)(25l<<2|1);
var436 = (val*)((long)(0)<<2|3);
var437 = (val*)((long)(0)<<2|3);
var433 = core__flat___CString___to_s_unsafe(var432, var434, var435, var436, var437);
var431 = var433;
varonce430 = var431;
}
((struct instance_core__NativeArray*)var429)->values[0]=var431;
if (likely(varonce438!=NULL)) {
var439 = varonce438;
} else {
var440 = "++;";
var442 = (val*)(3l<<2|1);
var443 = (val*)(3l<<2|1);
var444 = (val*)((long)(0)<<2|3);
var445 = (val*)((long)(0)<<2|3);
var441 = core__flat___CString___to_s_unsafe(var440, var442, var443, var444, var445);
var439 = var441;
varonce438 = var439;
}
((struct instance_core__NativeArray*)var429)->values[2]=var439;
} else {
var429 = varonce428;
varonce428 = NULL;
}
((struct instance_core__NativeArray*)var429)->values[1]=var_tag;
{
var446 = ((val*(*)(val* self))(var429->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var429); /* native_to_s on <var429:NativeArray[String]>*/
}
varonce428 = var429;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var446); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype448 = type_nitc__MVirtualType.color;
idtype449 = type_nitc__MVirtualType.id;
if(cltype448 >= var_mtype->type->table_size) {
var447 = 0;
} else {
var447 = var_mtype->type->type_table[cltype448] == idtype449;
}
if (var447){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateErasureCompilerVisitor> */
var452 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var450 = var452;
RET_LABEL451:(void)0;
}
}
if (var450 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 555);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$arguments (var450) on <var450:nullable StaticFrame> */
if (unlikely(var450 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var455 = var450->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var450:nullable StaticFrame> */
if (unlikely(var455 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var453 = var455;
RET_LABEL454:(void)0;
}
}
{
var456 = core___core__SequenceRead___Collection__first(var453);
}
var_recv = var456;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_recv) on <var_recv:RuntimeVariable> */
var459 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var459 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var457 = var459;
RET_LABEL458:(void)0;
}
}
{
var460 = ((short int(*)(val* self))(var457->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var457); /* is_c_primitive on <var457:MType>*/
}
var461 = !var460;
if (var461){
if (unlikely(varonce462==NULL)) {
var463 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce464!=NULL)) {
var465 = varonce464;
} else {
var466 = "->class->";
var468 = (val*)(9l<<2|1);
var469 = (val*)(9l<<2|1);
var470 = (val*)((long)(0)<<2|3);
var471 = (val*)((long)(0)<<2|3);
var467 = core__flat___CString___to_s_unsafe(var466, var468, var469, var470, var471);
var465 = var467;
varonce464 = var465;
}
((struct instance_core__NativeArray*)var463)->values[1]=var465;
} else {
var463 = varonce462;
varonce462 = NULL;
}
{
var472 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var463)->values[0]=var472;
{
var473 = ((val*(*)(val* self))(var463->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var463); /* native_to_s on <var463:NativeArray[String]>*/
}
varonce462 = var463;
var_recv_ptr = var473;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_recv) on <var_recv:RuntimeVariable> */
var476 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var476 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var474 = var476;
RET_LABEL475:(void)0;
}
}
/* <var474:MType> isa MClassType */
cltype478 = type_nitc__MClassType.color;
idtype479 = type_nitc__MClassType.id;
if(cltype478 >= var474->type->table_size) {
var477 = 0;
} else {
var477 = var474->type->type_table[cltype478] == idtype479;
}
if (unlikely(!var477)) {
var_class_name480 = var474 == NULL ? "null" : var474->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name480);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 560);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var474) on <var474:MType(MClassType)> */
var483 = var474->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var474:MType(MClassType)> */
if (unlikely(var483 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var481 = var483;
RET_LABEL482:(void)0;
}
}
var_mclass484 = var481;
if (unlikely(varonce485==NULL)) {
var486 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce487!=NULL)) {
var488 = varonce487;
} else {
var489 = "class_";
var491 = (val*)(6l<<2|1);
var492 = (val*)(6l<<2|1);
var493 = (val*)((long)(0)<<2|3);
var494 = (val*)((long)(0)<<2|3);
var490 = core__flat___CString___to_s_unsafe(var489, var491, var492, var493, var494);
var488 = var490;
varonce487 = var488;
}
((struct instance_core__NativeArray*)var486)->values[0]=var488;
} else {
var486 = varonce485;
varonce485 = NULL;
}
{
var495 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass484);
}
((struct instance_core__NativeArray*)var486)->values[1]=var495;
{
var496 = ((val*(*)(val* self))(var486->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var486); /* native_to_s on <var486:NativeArray[String]>*/
}
varonce485 = var486;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var496); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce497==NULL)) {
var498 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce499!=NULL)) {
var500 = varonce499;
} else {
var501 = "class_";
var503 = (val*)(6l<<2|1);
var504 = (val*)(6l<<2|1);
var505 = (val*)((long)(0)<<2|3);
var506 = (val*)((long)(0)<<2|3);
var502 = core__flat___CString___to_s_unsafe(var501, var503, var504, var505, var506);
var500 = var502;
varonce499 = var500;
}
((struct instance_core__NativeArray*)var498)->values[0]=var500;
if (likely(varonce507!=NULL)) {
var508 = varonce507;
} else {
var509 = ".";
var511 = (val*)(1l<<2|1);
var512 = (val*)(1l<<2|1);
var513 = (val*)((long)(0)<<2|3);
var514 = (val*)((long)(0)<<2|3);
var510 = core__flat___CString___to_s_unsafe(var509, var511, var512, var513, var514);
var508 = var510;
varonce507 = var508;
}
((struct instance_core__NativeArray*)var498)->values[2]=var508;
} else {
var498 = varonce497;
varonce497 = NULL;
}
{
var515 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass484);
}
((struct instance_core__NativeArray*)var498)->values[1]=var515;
{
var516 = ((val*(*)(val* self))(var498->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var498); /* native_to_s on <var498:NativeArray[String]>*/
}
varonce497 = var498;
var_recv_ptr = var516;
}
if (likely(varonce517!=NULL)) {
var518 = varonce517;
} else {
var519 = "entry";
var521 = (val*)(5l<<2|1);
var522 = (val*)(5l<<2|1);
var523 = (val*)((long)(0)<<2|3);
var524 = (val*)((long)(0)<<2|3);
var520 = core__flat___CString___to_s_unsafe(var519, var521, var522, var523, var524);
var518 = var520;
varonce517 = var518;
}
{
var525 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var518);
}
var_entry = var525;
if (unlikely(varonce526==NULL)) {
var527 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce528!=NULL)) {
var529 = varonce528;
} else {
var530 = "struct vts_entry ";
var532 = (val*)(17l<<2|1);
var533 = (val*)(17l<<2|1);
var534 = (val*)((long)(0)<<2|3);
var535 = (val*)((long)(0)<<2|3);
var531 = core__flat___CString___to_s_unsafe(var530, var532, var533, var534, var535);
var529 = var531;
varonce528 = var529;
}
((struct instance_core__NativeArray*)var527)->values[0]=var529;
if (likely(varonce536!=NULL)) {
var537 = varonce536;
} else {
var538 = ";";
var540 = (val*)(1l<<2|1);
var541 = (val*)(1l<<2|1);
var542 = (val*)((long)(0)<<2|3);
var543 = (val*)((long)(0)<<2|3);
var539 = core__flat___CString___to_s_unsafe(var538, var540, var541, var542, var543);
var537 = var539;
varonce536 = var537;
}
((struct instance_core__NativeArray*)var527)->values[2]=var537;
} else {
var527 = varonce526;
varonce526 = NULL;
}
((struct instance_core__NativeArray*)var527)->values[1]=var_entry;
{
var544 = ((val*(*)(val* self))(var527->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var527); /* native_to_s on <var527:NativeArray[String]>*/
}
varonce526 = var527;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var544); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline model$MVirtualType$mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var547 = var_mtype->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var547 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var545 = var547;
RET_LABEL546:(void)0;
}
}
{
var548 = nitc__separate_compiler___MEntity___const_color(var545);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var548); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce549==NULL)) {
var550 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce551!=NULL)) {
var552 = varonce551;
} else {
var553 = " = ";
var555 = (val*)(3l<<2|1);
var556 = (val*)(3l<<2|1);
var557 = (val*)((long)(0)<<2|3);
var558 = (val*)((long)(0)<<2|3);
var554 = core__flat___CString___to_s_unsafe(var553, var555, var556, var557, var558);
var552 = var554;
varonce551 = var552;
}
((struct instance_core__NativeArray*)var550)->values[1]=var552;
if (likely(varonce559!=NULL)) {
var560 = varonce559;
} else {
var561 = "vts_table->vts[";
var563 = (val*)(15l<<2|1);
var564 = (val*)(15l<<2|1);
var565 = (val*)((long)(0)<<2|3);
var566 = (val*)((long)(0)<<2|3);
var562 = core__flat___CString___to_s_unsafe(var561, var563, var564, var565, var566);
var560 = var562;
varonce559 = var560;
}
((struct instance_core__NativeArray*)var550)->values[3]=var560;
if (likely(varonce567!=NULL)) {
var568 = varonce567;
} else {
var569 = "];";
var571 = (val*)(2l<<2|1);
var572 = (val*)(2l<<2|1);
var573 = (val*)((long)(0)<<2|3);
var574 = (val*)((long)(0)<<2|3);
var570 = core__flat___CString___to_s_unsafe(var569, var571, var572, var573, var574);
var568 = var570;
varonce567 = var568;
}
((struct instance_core__NativeArray*)var550)->values[5]=var568;
} else {
var550 = varonce549;
varonce549 = NULL;
}
((struct instance_core__NativeArray*)var550)->values[0]=var_entry;
((struct instance_core__NativeArray*)var550)->values[2]=var_recv_ptr;
{
{ /* Inline model$MVirtualType$mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var577 = var_mtype->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var577 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var575 = var577;
RET_LABEL576:(void)0;
}
}
{
var578 = nitc__separate_compiler___MEntity___const_color(var575);
}
((struct instance_core__NativeArray*)var550)->values[4]=var578;
{
var579 = ((val*(*)(val* self))(var550->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var550); /* native_to_s on <var550:NativeArray[String]>*/
}
varonce549 = var550;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var579); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce580==NULL)) {
var581 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce582!=NULL)) {
var583 = varonce582;
} else {
var584 = " = ";
var586 = (val*)(3l<<2|1);
var587 = (val*)(3l<<2|1);
var588 = (val*)((long)(0)<<2|3);
var589 = (val*)((long)(0)<<2|3);
var585 = core__flat___CString___to_s_unsafe(var584, var586, var587, var588, var589);
var583 = var585;
varonce582 = var583;
}
((struct instance_core__NativeArray*)var581)->values[1]=var583;
if (likely(varonce590!=NULL)) {
var591 = varonce590;
} else {
var592 = ".class->color;";
var594 = (val*)(14l<<2|1);
var595 = (val*)(14l<<2|1);
var596 = (val*)((long)(0)<<2|3);
var597 = (val*)((long)(0)<<2|3);
var593 = core__flat___CString___to_s_unsafe(var592, var594, var595, var596, var597);
var591 = var593;
varonce590 = var591;
}
((struct instance_core__NativeArray*)var581)->values[3]=var591;
} else {
var581 = varonce580;
varonce580 = NULL;
}
((struct instance_core__NativeArray*)var581)->values[0]=var_cltype;
((struct instance_core__NativeArray*)var581)->values[2]=var_entry;
{
var598 = ((val*(*)(val* self))(var581->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var581); /* native_to_s on <var581:NativeArray[String]>*/
}
varonce580 = var581;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var598); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce599==NULL)) {
var600 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce601!=NULL)) {
var602 = varonce601;
} else {
var603 = " = ";
var605 = (val*)(3l<<2|1);
var606 = (val*)(3l<<2|1);
var607 = (val*)((long)(0)<<2|3);
var608 = (val*)((long)(0)<<2|3);
var604 = core__flat___CString___to_s_unsafe(var603, var605, var606, var607, var608);
var602 = var604;
varonce601 = var602;
}
((struct instance_core__NativeArray*)var600)->values[1]=var602;
if (likely(varonce609!=NULL)) {
var610 = varonce609;
} else {
var611 = ".class->id;";
var613 = (val*)(11l<<2|1);
var614 = (val*)(11l<<2|1);
var615 = (val*)((long)(0)<<2|3);
var616 = (val*)((long)(0)<<2|3);
var612 = core__flat___CString___to_s_unsafe(var611, var613, var614, var615, var616);
var610 = var612;
varonce609 = var610;
}
((struct instance_core__NativeArray*)var600)->values[3]=var610;
} else {
var600 = varonce599;
varonce599 = NULL;
}
((struct instance_core__NativeArray*)var600)->values[0]=var_idtype;
((struct instance_core__NativeArray*)var600)->values[2]=var_entry;
{
var617 = ((val*(*)(val* self))(var600->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var600); /* native_to_s on <var600:NativeArray[String]>*/
}
varonce599 = var600;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var617); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
var_619 = var_maybe_null;
if (var_maybe_null){
if (likely(varonce620!=NULL)) {
var621 = varonce620;
} else {
var622 = "0";
var624 = (val*)(1l<<2|1);
var625 = (val*)(1l<<2|1);
var626 = (val*)((long)(0)<<2|3);
var627 = (val*)((long)(0)<<2|3);
var623 = core__flat___CString___to_s_unsafe(var622, var624, var625, var626, var627);
var621 = var623;
varonce620 = var621;
}
{
var628 = ((short int(*)(val* self, val* p0))(var_accept_null->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_accept_null, var621); /* == on <var_accept_null:String>*/
}
var618 = var628;
} else {
var618 = var_619;
}
if (var618){
if (likely(varonce629!=NULL)) {
var630 = varonce629;
} else {
var631 = "is_nullable";
var633 = (val*)(11l<<2|1);
var634 = (val*)(11l<<2|1);
var635 = (val*)((long)(0)<<2|3);
var636 = (val*)((long)(0)<<2|3);
var632 = core__flat___CString___to_s_unsafe(var631, var633, var634, var635, var636);
var630 = var632;
varonce629 = var630;
}
{
var637 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var630);
}
var_is_nullable = var637;
if (unlikely(varonce638==NULL)) {
var639 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce640!=NULL)) {
var641 = varonce640;
} else {
var642 = "short int ";
var644 = (val*)(10l<<2|1);
var645 = (val*)(10l<<2|1);
var646 = (val*)((long)(0)<<2|3);
var647 = (val*)((long)(0)<<2|3);
var643 = core__flat___CString___to_s_unsafe(var642, var644, var645, var646, var647);
var641 = var643;
varonce640 = var641;
}
((struct instance_core__NativeArray*)var639)->values[0]=var641;
if (likely(varonce648!=NULL)) {
var649 = varonce648;
} else {
var650 = ";";
var652 = (val*)(1l<<2|1);
var653 = (val*)(1l<<2|1);
var654 = (val*)((long)(0)<<2|3);
var655 = (val*)((long)(0)<<2|3);
var651 = core__flat___CString___to_s_unsafe(var650, var652, var653, var654, var655);
var649 = var651;
varonce648 = var649;
}
((struct instance_core__NativeArray*)var639)->values[2]=var649;
} else {
var639 = varonce638;
varonce638 = NULL;
}
((struct instance_core__NativeArray*)var639)->values[1]=var_is_nullable;
{
var656 = ((val*(*)(val* self))(var639->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var639); /* native_to_s on <var639:NativeArray[String]>*/
}
varonce638 = var639;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var656); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce657==NULL)) {
var658 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce659!=NULL)) {
var660 = varonce659;
} else {
var661 = " = ";
var663 = (val*)(3l<<2|1);
var664 = (val*)(3l<<2|1);
var665 = (val*)((long)(0)<<2|3);
var666 = (val*)((long)(0)<<2|3);
var662 = core__flat___CString___to_s_unsafe(var661, var663, var664, var665, var666);
var660 = var662;
varonce659 = var660;
}
((struct instance_core__NativeArray*)var658)->values[1]=var660;
if (likely(varonce667!=NULL)) {
var668 = varonce667;
} else {
var669 = ".is_nullable;";
var671 = (val*)(13l<<2|1);
var672 = (val*)(13l<<2|1);
var673 = (val*)((long)(0)<<2|3);
var674 = (val*)((long)(0)<<2|3);
var670 = core__flat___CString___to_s_unsafe(var669, var671, var672, var673, var674);
var668 = var670;
varonce667 = var668;
}
((struct instance_core__NativeArray*)var658)->values[3]=var668;
} else {
var658 = varonce657;
varonce657 = NULL;
}
((struct instance_core__NativeArray*)var658)->values[0]=var_is_nullable;
((struct instance_core__NativeArray*)var658)->values[2]=var_entry;
{
var675 = ((val*(*)(val* self))(var658->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var658); /* native_to_s on <var658:NativeArray[String]>*/
}
varonce657 = var658;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var675); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
{
var676 = core___core__String___Object__to_s(var_is_nullable);
}
var_accept_null = var676;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var679 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var679 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var677 = var679;
RET_LABEL678:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var677) on <var677:AbstractCompiler(SeparateCompiler)> */
var682 = var677->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var677:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var682 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var680 = var682;
RET_LABEL681:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var680) on <var680:ModelBuilder> */
var685 = var680->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var680:ModelBuilder> */
if (unlikely(var685 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var683 = var685;
RET_LABEL684:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var683) on <var683:ToolContext> */
var688 = var683->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var683:ToolContext> */
if (unlikely(var688 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var686 = var688;
RET_LABEL687:(void)0;
}
}
{
{ /* Inline opts$Option$value (var686) on <var686:OptionBool> */
var691 = var686->attrs[COLOR_opts__Option___value].val; /* _value on <var686:OptionBool> */
var689 = var691;
RET_LABEL690:(void)0;
}
}
var692 = (short int)((long)(var689)>>2);
if (var692){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var695 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var695 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var693 = var695;
RET_LABEL694:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (var693) on <var693:AbstractCompiler(SeparateCompiler)> */
var698 = var693->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <var693:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var698 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1112);
fatal_exit(1);
}
var696 = var698;
RET_LABEL697:(void)0;
}
}
var_699 = var696;
var_700 = var_tag;
{
var701 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_699, var_700);
}
{
{ /* Inline kernel$Int$+ (var701,1l) on <var701:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var704 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var704)) {
var_class_name707 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name707);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var708 = (long)(var701)>>2;
var709 = var708 + 1l;
var702 = var709;
goto RET_LABEL703;
RET_LABEL703:(void)0;
}
}
{
var710 = (val*)(var702<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_699, var_700, var710); /* Direct call hash_collection$HashMap$[]= on <var_699:HashMap[String, Int]>*/
}
if (unlikely(varonce711==NULL)) {
var712 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce713!=NULL)) {
var714 = varonce713;
} else {
var715 = "count_type_test_unresolved_";
var717 = (val*)(27l<<2|1);
var718 = (val*)(27l<<2|1);
var719 = (val*)((long)(0)<<2|3);
var720 = (val*)((long)(0)<<2|3);
var716 = core__flat___CString___to_s_unsafe(var715, var717, var718, var719, var720);
var714 = var716;
varonce713 = var714;
}
((struct instance_core__NativeArray*)var712)->values[0]=var714;
if (likely(varonce721!=NULL)) {
var722 = varonce721;
} else {
var723 = "++;";
var725 = (val*)(3l<<2|1);
var726 = (val*)(3l<<2|1);
var727 = (val*)((long)(0)<<2|3);
var728 = (val*)((long)(0)<<2|3);
var724 = core__flat___CString___to_s_unsafe(var723, var725, var726, var727, var728);
var722 = var724;
varonce721 = var722;
}
((struct instance_core__NativeArray*)var712)->values[2]=var722;
} else {
var712 = varonce711;
varonce711 = NULL;
}
((struct instance_core__NativeArray*)var712)->values[1]=var_tag;
{
var729 = ((val*(*)(val* self))(var712->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var712); /* native_to_s on <var712:NativeArray[String]>*/
}
varonce711 = var712;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var729); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
} else {
if (unlikely(varonce730==NULL)) {
var731 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce732!=NULL)) {
var733 = varonce732;
} else {
var734 = "type_test(";
var736 = (val*)(10l<<2|1);
var737 = (val*)(10l<<2|1);
var738 = (val*)((long)(0)<<2|3);
var739 = (val*)((long)(0)<<2|3);
var735 = core__flat___CString___to_s_unsafe(var734, var736, var737, var738, var739);
var733 = var735;
varonce732 = var733;
}
((struct instance_core__NativeArray*)var731)->values[0]=var733;
if (likely(varonce740!=NULL)) {
var741 = varonce740;
} else {
var742 = ", ";
var744 = (val*)(2l<<2|1);
var745 = (val*)(2l<<2|1);
var746 = (val*)((long)(0)<<2|3);
var747 = (val*)((long)(0)<<2|3);
var743 = core__flat___CString___to_s_unsafe(var742, var744, var745, var746, var747);
var741 = var743;
varonce740 = var741;
}
((struct instance_core__NativeArray*)var731)->values[2]=var741;
if (likely(varonce748!=NULL)) {
var749 = varonce748;
} else {
var750 = ")";
var752 = (val*)(1l<<2|1);
var753 = (val*)(1l<<2|1);
var754 = (val*)((long)(0)<<2|3);
var755 = (val*)((long)(0)<<2|3);
var751 = core__flat___CString___to_s_unsafe(var750, var752, var753, var754, var755);
var749 = var751;
varonce748 = var749;
}
((struct instance_core__NativeArray*)var731)->values[4]=var749;
} else {
var731 = varonce730;
varonce730 = NULL;
}
{
var756 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_value);
}
((struct instance_core__NativeArray*)var731)->values[1]=var756;
{
var757 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var731)->values[3]=var757;
{
var758 = ((val*(*)(val* self))(var731->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var731); /* native_to_s on <var731:NativeArray[String]>*/
}
varonce730 = var731;
{
nitc___nitc__AbstractCompilerVisitor___debug(self, var758); /* Direct call abstract_compiler$AbstractCompilerVisitor$debug on <self:SeparateErasureCompilerVisitor>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 582);
fatal_exit(1);
}
}
if (var_maybe_null){
if (unlikely(varonce759==NULL)) {
var760 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce761!=NULL)) {
var762 = varonce761;
} else {
var763 = "if(";
var765 = (val*)(3l<<2|1);
var766 = (val*)(3l<<2|1);
var767 = (val*)((long)(0)<<2|3);
var768 = (val*)((long)(0)<<2|3);
var764 = core__flat___CString___to_s_unsafe(var763, var765, var766, var767, var768);
var762 = var764;
varonce761 = var762;
}
((struct instance_core__NativeArray*)var760)->values[0]=var762;
if (likely(varonce769!=NULL)) {
var770 = varonce769;
} else {
var771 = " == NULL) {";
var773 = (val*)(11l<<2|1);
var774 = (val*)(11l<<2|1);
var775 = (val*)((long)(0)<<2|3);
var776 = (val*)((long)(0)<<2|3);
var772 = core__flat___CString___to_s_unsafe(var771, var773, var774, var775, var776);
var770 = var772;
varonce769 = var770;
}
((struct instance_core__NativeArray*)var760)->values[2]=var770;
} else {
var760 = varonce759;
varonce759 = NULL;
}
{
var777 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var760)->values[1]=var777;
{
var778 = ((val*(*)(val* self))(var760->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var760); /* native_to_s on <var760:NativeArray[String]>*/
}
varonce759 = var760;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var778); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce779==NULL)) {
var780 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce781!=NULL)) {
var782 = varonce781;
} else {
var783 = " = ";
var785 = (val*)(3l<<2|1);
var786 = (val*)(3l<<2|1);
var787 = (val*)((long)(0)<<2|3);
var788 = (val*)((long)(0)<<2|3);
var784 = core__flat___CString___to_s_unsafe(var783, var785, var786, var787, var788);
var782 = var784;
varonce781 = var782;
}
((struct instance_core__NativeArray*)var780)->values[1]=var782;
if (likely(varonce789!=NULL)) {
var790 = varonce789;
} else {
var791 = ";";
var793 = (val*)(1l<<2|1);
var794 = (val*)(1l<<2|1);
var795 = (val*)((long)(0)<<2|3);
var796 = (val*)((long)(0)<<2|3);
var792 = core__flat___CString___to_s_unsafe(var791, var793, var794, var795, var796);
var790 = var792;
varonce789 = var790;
}
((struct instance_core__NativeArray*)var780)->values[3]=var790;
} else {
var780 = varonce779;
varonce779 = NULL;
}
{
var797 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var780)->values[0]=var797;
((struct instance_core__NativeArray*)var780)->values[2]=var_accept_null;
{
var798 = ((val*(*)(val* self))(var780->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var780); /* native_to_s on <var780:NativeArray[String]>*/
}
varonce779 = var780;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var798); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce799!=NULL)) {
var800 = varonce799;
} else {
var801 = "} else {";
var803 = (val*)(8l<<2|1);
var804 = (val*)(8l<<2|1);
var805 = (val*)((long)(0)<<2|3);
var806 = (val*)((long)(0)<<2|3);
var802 = core__flat___CString___to_s_unsafe(var801, var803, var804, var805, var806);
var800 = var802;
varonce799 = var800;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var800); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce807==NULL)) {
var808 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce809!=NULL)) {
var810 = varonce809;
} else {
var811 = "if(";
var813 = (val*)(3l<<2|1);
var814 = (val*)(3l<<2|1);
var815 = (val*)((long)(0)<<2|3);
var816 = (val*)((long)(0)<<2|3);
var812 = core__flat___CString___to_s_unsafe(var811, var813, var814, var815, var816);
var810 = var812;
varonce809 = var810;
}
((struct instance_core__NativeArray*)var808)->values[0]=var810;
if (likely(varonce817!=NULL)) {
var818 = varonce817;
} else {
var819 = " >= ";
var821 = (val*)(4l<<2|1);
var822 = (val*)(4l<<2|1);
var823 = (val*)((long)(0)<<2|3);
var824 = (val*)((long)(0)<<2|3);
var820 = core__flat___CString___to_s_unsafe(var819, var821, var822, var823, var824);
var818 = var820;
varonce817 = var818;
}
((struct instance_core__NativeArray*)var808)->values[2]=var818;
if (likely(varonce825!=NULL)) {
var826 = varonce825;
} else {
var827 = "type_table->size) {";
var829 = (val*)(19l<<2|1);
var830 = (val*)(19l<<2|1);
var831 = (val*)((long)(0)<<2|3);
var832 = (val*)((long)(0)<<2|3);
var828 = core__flat___CString___to_s_unsafe(var827, var829, var830, var831, var832);
var826 = var828;
varonce825 = var826;
}
((struct instance_core__NativeArray*)var808)->values[4]=var826;
} else {
var808 = varonce807;
varonce807 = NULL;
}
((struct instance_core__NativeArray*)var808)->values[1]=var_cltype;
((struct instance_core__NativeArray*)var808)->values[3]=var_class_ptr;
{
var833 = ((val*(*)(val* self))(var808->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var808); /* native_to_s on <var808:NativeArray[String]>*/
}
varonce807 = var808;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var833); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce834==NULL)) {
var835 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce836!=NULL)) {
var837 = varonce836;
} else {
var838 = " = 0;";
var840 = (val*)(5l<<2|1);
var841 = (val*)(5l<<2|1);
var842 = (val*)((long)(0)<<2|3);
var843 = (val*)((long)(0)<<2|3);
var839 = core__flat___CString___to_s_unsafe(var838, var840, var841, var842, var843);
var837 = var839;
varonce836 = var837;
}
((struct instance_core__NativeArray*)var835)->values[1]=var837;
} else {
var835 = varonce834;
varonce834 = NULL;
}
{
var844 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var835)->values[0]=var844;
{
var845 = ((val*(*)(val* self))(var835->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var835); /* native_to_s on <var835:NativeArray[String]>*/
}
varonce834 = var835;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var845); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce846!=NULL)) {
var847 = varonce846;
} else {
var848 = "} else {";
var850 = (val*)(8l<<2|1);
var851 = (val*)(8l<<2|1);
var852 = (val*)((long)(0)<<2|3);
var853 = (val*)((long)(0)<<2|3);
var849 = core__flat___CString___to_s_unsafe(var848, var850, var851, var852, var853);
var847 = var849;
varonce846 = var847;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var847); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce854==NULL)) {
var855 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce856!=NULL)) {
var857 = varonce856;
} else {
var858 = " = ";
var860 = (val*)(3l<<2|1);
var861 = (val*)(3l<<2|1);
var862 = (val*)((long)(0)<<2|3);
var863 = (val*)((long)(0)<<2|3);
var859 = core__flat___CString___to_s_unsafe(var858, var860, var861, var862, var863);
var857 = var859;
varonce856 = var857;
}
((struct instance_core__NativeArray*)var855)->values[1]=var857;
if (likely(varonce864!=NULL)) {
var865 = varonce864;
} else {
var866 = "type_table->table[";
var868 = (val*)(18l<<2|1);
var869 = (val*)(18l<<2|1);
var870 = (val*)((long)(0)<<2|3);
var871 = (val*)((long)(0)<<2|3);
var867 = core__flat___CString___to_s_unsafe(var866, var868, var869, var870, var871);
var865 = var867;
varonce864 = var865;
}
((struct instance_core__NativeArray*)var855)->values[3]=var865;
if (likely(varonce872!=NULL)) {
var873 = varonce872;
} else {
var874 = "] == ";
var876 = (val*)(5l<<2|1);
var877 = (val*)(5l<<2|1);
var878 = (val*)((long)(0)<<2|3);
var879 = (val*)((long)(0)<<2|3);
var875 = core__flat___CString___to_s_unsafe(var874, var876, var877, var878, var879);
var873 = var875;
varonce872 = var873;
}
((struct instance_core__NativeArray*)var855)->values[5]=var873;
if (likely(varonce880!=NULL)) {
var881 = varonce880;
} else {
var882 = ";";
var884 = (val*)(1l<<2|1);
var885 = (val*)(1l<<2|1);
var886 = (val*)((long)(0)<<2|3);
var887 = (val*)((long)(0)<<2|3);
var883 = core__flat___CString___to_s_unsafe(var882, var884, var885, var886, var887);
var881 = var883;
varonce880 = var881;
}
((struct instance_core__NativeArray*)var855)->values[7]=var881;
} else {
var855 = varonce854;
varonce854 = NULL;
}
{
var888 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var855)->values[0]=var888;
((struct instance_core__NativeArray*)var855)->values[2]=var_class_ptr;
((struct instance_core__NativeArray*)var855)->values[4]=var_cltype;
((struct instance_core__NativeArray*)var855)->values[6]=var_idtype;
{
var889 = ((val*(*)(val* self))(var855->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var855); /* native_to_s on <var855:NativeArray[String]>*/
}
varonce854 = var855;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var889); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce890!=NULL)) {
var891 = varonce890;
} else {
var892 = "}";
var894 = (val*)(1l<<2|1);
var895 = (val*)(1l<<2|1);
var896 = (val*)((long)(0)<<2|3);
var897 = (val*)((long)(0)<<2|3);
var893 = core__flat___CString___to_s_unsafe(var892, var894, var895, var896, var897);
var891 = var893;
varonce890 = var891;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var891); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (var_maybe_null){
if (likely(varonce898!=NULL)) {
var899 = varonce898;
} else {
var900 = "}";
var902 = (val*)(1l<<2|1);
var903 = (val*)(1l<<2|1);
var904 = (val*)((long)(0)<<2|3);
var905 = (val*)((long)(0)<<2|3);
var901 = core__flat___CString___to_s_unsafe(var900, var902, var903, var904, var905);
var899 = var901;
varonce898 = var899;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var899); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompilerVisitor$unbox_extern for (self: SeparateErasureCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
short int var31 /* : Bool */;
val* var_other33 /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : AbstractCompiler */;
val* var38 /* : AbstractCompiler */;
val* var39 /* : MModule */;
val* var41 /* : MModule */;
val* var42 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var43 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
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
val* var78 /* : String */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var81 /* : MType */;
val* var83 /* : MType */;
val* var84 /* : String */;
val* var85 /* : String */;
var_value = p0;
var_mtype = p1;
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
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nitc__model___core__Sys___extern_kind(var10);
}
{
{ /* Inline kernel$Object$== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:MClassKind> */
var16 = var7 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClass$name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "CString";
var27 = (val*)(7l<<2|1);
var28 = (val*)(7l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel$Object$!= (var21,var24) on <var21:String> */
var_other33 = var24;
{
var34 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___61d_61d]))(var21, var_other33); /* == on <var21:String>*/
}
var35 = !var34;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var1 = var31;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var38 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var36) on <var36:AbstractCompiler(SeparateCompiler)> */
var41 = var36->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var36:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = nitc__model___MModule___pointer_type(var39);
}
var_pointer_type = var42;
{
var43 = nitc___nitc__AbstractCompilerVisitor___new_var_extern(self, var_mtype);
}
var_res = var43;
if (unlikely(varonce44==NULL)) {
var45 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " = ((struct instance_";
var50 = (val*)(21l<<2|1);
var51 = (val*)(21l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[1]=var47;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "*)";
var58 = (val*)(2l<<2|1);
var59 = (val*)(2l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var45)->values[3]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = ")->value; /* unboxing ";
var66 = (val*)(22l<<2|1);
var67 = (val*)(22l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var45)->values[5]=var63;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = " */";
var74 = (val*)(3l<<2|1);
var75 = (val*)(3l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var45)->values[7]=var71;
} else {
var45 = varonce44;
varonce44 = NULL;
}
{
var78 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var45)->values[0]=var78;
{
var79 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var45)->values[2]=var79;
{
var80 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var45)->values[4]=var80;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var83 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = ((val*(*)(val* self))(var81->class->vft[COLOR_core__abstract_text__Object__to_s]))(var81); /* to_s on <var81:MType>*/
}
((struct instance_core__NativeArray*)var45)->values[6]=var84;
{
var85 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var85); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
var = var_value;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompilerVisitor$box_extern for (self: SeparateErasureCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__box_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
short int var31 /* : Bool */;
val* var_other33 /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : AbstractCompiler */;
val* var38 /* : AbstractCompiler */;
val* var39 /* : MModule */;
val* var41 /* : MModule */;
val* var42 /* : MClassType */;
val* var_valtype /* var valtype: MClassType */;
val* var43 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var44 /* : Bool */;
val* var45 /* : AbstractCompiler */;
val* var47 /* : AbstractCompiler */;
val* var48 /* : nullable RapidTypeAnalysis */;
val* var50 /* : nullable RapidTypeAnalysis */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var_56 /* var : Bool */;
val* var57 /* : AbstractCompiler */;
val* var59 /* : AbstractCompiler */;
val* var60 /* : nullable RapidTypeAnalysis */;
val* var62 /* : nullable RapidTypeAnalysis */;
val* var63 /* : HashSet[MClassType] */;
val* var65 /* : HashSet[MClassType] */;
val* var66 /* : MType */;
val* var68 /* : MType */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var75 /* : NativeArray[String] */;
static val* varonce74;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Bool */;
val* var83 /* : nullable Bool */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : CString */;
val* var95 /* : String */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Bool */;
val* var99 /* : nullable Bool */;
val* var100 /* : MType */;
val* var102 /* : MType */;
val* var103 /* : String */;
val* var104 /* : MType */;
val* var106 /* : MType */;
val* var107 /* : String */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Bool */;
val* var116 /* : nullable Bool */;
val* var118 /* : NativeArray[String] */;
static val* varonce117;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var130 /* : NativeArray[String] */;
static val* varonce129;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Bool */;
val* var138 /* : nullable Bool */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Bool */;
val* var146 /* : nullable Bool */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : CString */;
val* var150 /* : String */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Int */;
val* var153 /* : nullable Bool */;
val* var154 /* : nullable Bool */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : CString */;
val* var158 /* : String */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Int */;
val* var161 /* : nullable Bool */;
val* var162 /* : nullable Bool */;
val* var163 /* : String */;
val* var164 /* : String */;
val* var165 /* : String */;
val* var166 /* : MType */;
val* var168 /* : MType */;
val* var169 /* : String */;
val* var170 /* : String */;
val* var172 /* : NativeArray[String] */;
static val* varonce171;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : CString */;
val* var176 /* : String */;
val* var177 /* : nullable Int */;
val* var178 /* : nullable Int */;
val* var179 /* : nullable Bool */;
val* var180 /* : nullable Bool */;
val* var181 /* : String */;
val* var182 /* : String */;
val* var184 /* : NativeArray[String] */;
static val* varonce183;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable Bool */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
val* var197 /* : nullable Int */;
val* var198 /* : nullable Int */;
val* var199 /* : nullable Bool */;
val* var200 /* : nullable Bool */;
val* var201 /* : String */;
val* var202 /* : String */;
val* var203 /* : String */;
var_value = p0;
var_mtype = p1;
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
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nitc__model___core__Sys___extern_kind(var10);
}
{
{ /* Inline kernel$Object$== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:MClassKind> */
var16 = var7 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClass$name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "CString";
var27 = (val*)(7l<<2|1);
var28 = (val*)(7l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel$Object$!= (var21,var24) on <var21:String> */
var_other33 = var24;
{
var34 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___61d_61d]))(var21, var_other33); /* == on <var21:String>*/
}
var35 = !var34;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var1 = var31;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var38 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var36) on <var36:AbstractCompiler(SeparateCompiler)> */
var41 = var36->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var36:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = nitc__model___MModule___pointer_type(var39);
}
var_valtype = var42;
{
var43 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var43;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var47 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$runtime_type_analysis (var45) on <var45:AbstractCompiler(SeparateCompiler)> */
var50 = var45->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var45:AbstractCompiler(SeparateCompiler)> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (var48 == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var48,((val*)NULL)) on <var48:nullable RapidTypeAnalysis> */
var_other33 = ((val*)NULL);
{
var54 = ((short int(*)(val* self, val* p0))(var48->class->vft[COLOR_core__kernel__Object___61d_61d]))(var48, var_other33); /* == on <var48:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var55 = !var54;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
var_56 = var51;
if (var51){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateErasureCompilerVisitor> */
var59 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$runtime_type_analysis (var57) on <var57:AbstractCompiler(SeparateCompiler)> */
var62 = var57->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var57:AbstractCompiler(SeparateCompiler)> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (var60 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 622);
fatal_exit(1);
} else {
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_types (var60) on <var60:nullable RapidTypeAnalysis> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var65 = var60->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var60:nullable RapidTypeAnalysis> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var68 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
/* <var66:MType> isa MClassType */
cltype70 = type_nitc__MClassType.color;
idtype71 = type_nitc__MClassType.id;
if(cltype70 >= var66->type->table_size) {
var69 = 0;
} else {
var69 = var66->type->type_table[cltype70] == idtype71;
}
if (unlikely(!var69)) {
var_class_name = var66 == NULL ? "null" : var66->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 622);
fatal_exit(1);
}
{
var72 = core___core__HashSet___core__abstract_collection__Collection__has(var63, var66);
}
var73 = !var72;
var44 = var73;
} else {
var44 = var_56;
}
if (var44){
if (unlikely(varonce74==NULL)) {
var75 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "/*no boxing of ";
var80 = (val*)(15l<<2|1);
var81 = (val*)(15l<<2|1);
var82 = (val*)((long)(0)<<2|3);
var83 = (val*)((long)(0)<<2|3);
var79 = core__flat___CString___to_s_unsafe(var78, var80, var81, var82, var83);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = ": ";
var88 = (val*)(2l<<2|1);
var89 = (val*)(2l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var75)->values[2]=var85;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = " is not live! */";
var96 = (val*)(16l<<2|1);
var97 = (val*)(16l<<2|1);
var98 = (val*)((long)(0)<<2|3);
var99 = (val*)((long)(0)<<2|3);
var95 = core__flat___CString___to_s_unsafe(var94, var96, var97, var98, var99);
var93 = var95;
varonce92 = var93;
}
((struct instance_core__NativeArray*)var75)->values[4]=var93;
} else {
var75 = varonce74;
varonce74 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var102 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var102 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = ((val*(*)(val* self))(var100->class->vft[COLOR_core__abstract_text__Object__to_s]))(var100); /* to_s on <var100:MType>*/
}
((struct instance_core__NativeArray*)var75)->values[1]=var103;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var106 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var106 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
var107 = ((val*(*)(val* self))(var104->class->vft[COLOR_core__abstract_text__Object__to_s]))(var104); /* to_s on <var104:MType>*/
}
((struct instance_core__NativeArray*)var75)->values[3]=var107;
{
var108 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce74 = var75;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var108); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "PRINT_ERROR(\"Dead code executed!\\n\"); fatal_exit(1);";
var113 = (val*)(52l<<2|1);
var114 = (val*)(52l<<2|1);
var115 = (val*)((long)(0)<<2|3);
var116 = (val*)((long)(0)<<2|3);
var112 = core__flat___CString___to_s_unsafe(var111, var113, var114, var115, var116);
var110 = var112;
varonce109 = var110;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var110); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce117==NULL)) {
var118 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "BOX_";
var123 = (val*)(4l<<2|1);
var124 = (val*)(4l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var118)->values[0]=var120;
} else {
var118 = varonce117;
varonce117 = NULL;
}
{
var127 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var118)->values[1]=var127;
{
var128 = ((val*(*)(val* self))(var118->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var118); /* native_to_s on <var118:NativeArray[String]>*/
}
varonce117 = var118;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var128); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce129==NULL)) {
var130 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = " = BOX_";
var135 = (val*)(7l<<2|1);
var136 = (val*)(7l<<2|1);
var137 = (val*)((long)(0)<<2|3);
var138 = (val*)((long)(0)<<2|3);
var134 = core__flat___CString___to_s_unsafe(var133, var135, var136, var137, var138);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var130)->values[1]=var132;
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "(";
var143 = (val*)(1l<<2|1);
var144 = (val*)(1l<<2|1);
var145 = (val*)((long)(0)<<2|3);
var146 = (val*)((long)(0)<<2|3);
var142 = core__flat___CString___to_s_unsafe(var141, var143, var144, var145, var146);
var140 = var142;
varonce139 = var140;
}
((struct instance_core__NativeArray*)var130)->values[3]=var140;
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "); /* boxing ";
var151 = (val*)(13l<<2|1);
var152 = (val*)(13l<<2|1);
var153 = (val*)((long)(0)<<2|3);
var154 = (val*)((long)(0)<<2|3);
var150 = core__flat___CString___to_s_unsafe(var149, var151, var152, var153, var154);
var148 = var150;
varonce147 = var148;
}
((struct instance_core__NativeArray*)var130)->values[5]=var148;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = " */";
var159 = (val*)(3l<<2|1);
var160 = (val*)(3l<<2|1);
var161 = (val*)((long)(0)<<2|3);
var162 = (val*)((long)(0)<<2|3);
var158 = core__flat___CString___to_s_unsafe(var157, var159, var160, var161, var162);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var130)->values[7]=var156;
} else {
var130 = varonce129;
varonce129 = NULL;
}
{
var163 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var130)->values[0]=var163;
{
var164 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var130)->values[2]=var164;
{
var165 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var130)->values[4]=var165;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var168 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var168 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
var169 = ((val*(*)(val* self))(var166->class->vft[COLOR_core__abstract_text__Object__to_s]))(var166); /* to_s on <var166:MType>*/
}
((struct instance_core__NativeArray*)var130)->values[6]=var169;
{
var170 = ((val*(*)(val* self))(var130->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var130); /* native_to_s on <var130:NativeArray[String]>*/
}
varonce129 = var130;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var170); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce171==NULL)) {
var172 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "class_";
var177 = (val*)(6l<<2|1);
var178 = (val*)(6l<<2|1);
var179 = (val*)((long)(0)<<2|3);
var180 = (val*)((long)(0)<<2|3);
var176 = core__flat___CString___to_s_unsafe(var175, var177, var178, var179, var180);
var174 = var176;
varonce173 = var174;
}
((struct instance_core__NativeArray*)var172)->values[0]=var174;
} else {
var172 = varonce171;
varonce171 = NULL;
}
{
var181 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var172)->values[1]=var181;
{
var182 = ((val*(*)(val* self))(var172->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var172); /* native_to_s on <var172:NativeArray[String]>*/
}
varonce171 = var172;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var182); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce183==NULL)) {
var184 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "->class = &class_";
var189 = (val*)(17l<<2|1);
var190 = (val*)(17l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var184)->values[1]=var186;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = ";";
var197 = (val*)(1l<<2|1);
var198 = (val*)(1l<<2|1);
var199 = (val*)((long)(0)<<2|3);
var200 = (val*)((long)(0)<<2|3);
var196 = core__flat___CString___to_s_unsafe(var195, var197, var198, var199, var200);
var194 = var196;
varonce193 = var194;
}
((struct instance_core__NativeArray*)var184)->values[3]=var194;
} else {
var184 = varonce183;
varonce183 = NULL;
}
{
var201 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var184)->values[0]=var201;
{
var202 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var184)->values[2]=var202;
{
var203 = ((val*(*)(val* self))(var184->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var184); /* native_to_s on <var184:NativeArray[String]>*/
}
varonce183 = var184;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var203); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
var = var_value;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompilerVisitor$class_name_string for (self: SeparateErasureCompilerVisitor, RuntimeVariable): String */
val* nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : String */;
val* var_res /* var res: String */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : String */;
val* var28 /* : MType */;
val* var30 /* : MType */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : String */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Bool */;
val* var71 /* : nullable Bool */;
val* var72 /* : MType */;
val* var74 /* : MType */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var78 /* : NativeArray[String] */;
static val* varonce77;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
val* var95 /* : MType */;
val* var97 /* : MType */;
val* var98 /* : String */;
val* var99 /* : String */;
var_value = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "var_class_name";
var4 = (val*)(14l<<2|1);
var5 = (val*)(14l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var1);
}
var_res = var8;
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "const char* ";
var15 = (val*)(12l<<2|1);
var16 = (val*)(12l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ";";
var23 = (val*)(1l<<2|1);
var24 = (val*)(1l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var10)->values[2]=var20;
} else {
var10 = varonce9;
varonce9 = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_res;
{
var27 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var27); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var30 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = ((short int(*)(val* self))(var28->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var28); /* is_c_primitive on <var28:MType>*/
}
var32 = !var31;
if (var32){
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = " = ";
var39 = (val*)(3l<<2|1);
var40 = (val*)(3l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[1]=var36;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = " == NULL ? \"null\" : ";
var47 = (val*)(20l<<2|1);
var48 = (val*)(20l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var34)->values[3]=var44;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "->class->name;";
var55 = (val*)(14l<<2|1);
var56 = (val*)(14l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var34)->values[5]=var52;
} else {
var34 = varonce33;
varonce33 = NULL;
}
((struct instance_core__NativeArray*)var34)->values[0]=var_res;
{
var59 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var34)->values[2]=var59;
{
var60 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var34)->values[4]=var60;
{
var61 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var61); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
if (unlikely(varonce62==NULL)) {
var63 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "class_";
var68 = (val*)(6l<<2|1);
var69 = (val*)(6l<<2|1);
var70 = (val*)((long)(0)<<2|3);
var71 = (val*)((long)(0)<<2|3);
var67 = core__flat___CString___to_s_unsafe(var66, var68, var69, var70, var71);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var63)->values[0]=var65;
} else {
var63 = varonce62;
varonce62 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var74 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var74 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = ((val*(*)(val* self))(var72->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var72); /* c_name on <var72:MType>*/
}
((struct instance_core__NativeArray*)var63)->values[1]=var75;
{
var76 = ((val*(*)(val* self))(var63->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var76); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce77==NULL)) {
var78 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = " = class_";
var83 = (val*)(9l<<2|1);
var84 = (val*)(9l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var78)->values[1]=var80;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = ".name;";
var91 = (val*)(6l<<2|1);
var92 = (val*)(6l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var78)->values[3]=var88;
} else {
var78 = varonce77;
varonce77 = NULL;
}
((struct instance_core__NativeArray*)var78)->values[0]=var_res;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var97 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var97 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = ((val*(*)(val* self))(var95->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var95); /* c_name on <var95:MType>*/
}
((struct instance_core__NativeArray*)var78)->values[2]=var98;
{
var99 = ((val*(*)(val* self))(var78->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var99); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler$SeparateErasureCompilerVisitor$native_array_instance for (self: SeparateErasureCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_elttype /* var elttype: MType */;
val* var_length /* var length: RuntimeVariable */;
val* var1 /* : MModule */;
val* var2 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var3 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var4 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var5 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
val* var16 /* : String */;
val* var17 /* : String */;
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
val* var46 /* : String */;
val* var47 /* : String */;
var_elttype = p0;
var_length = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___native_array_class(var1);
}
var_nclass = var2;
var3 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var3, 1l); /* Direct call array$Array$with_capacity on <var3:Array[MType]>*/
}
var_ = var3;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_elttype); /* Direct call array$AbstractArray$push on <var_:Array[MType]>*/
}
{
var4 = nitc___nitc__MClass___get_mtype(var_nclass, var_);
}
var_mtype = var4;
{
var5 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var5;
{
{ /* Inline abstract_compiler$RuntimeVariable$is_exact= (var_res,1) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL6:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "NEW_";
var12 = (val*)(4l<<2|1);
var13 = (val*)(4l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
} else {
var7 = varonce;
varonce = NULL;
}
{
var16 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var7)->values[1]=var16;
{
var17 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var17); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce18==NULL)) {
var19 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = " = NEW_";
var24 = (val*)(7l<<2|1);
var25 = (val*)(7l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[1]=var21;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "(";
var32 = (val*)(1l<<2|1);
var33 = (val*)(1l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var19)->values[3]=var29;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ");";
var40 = (val*)(2l<<2|1);
var41 = (val*)(2l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var19)->values[5]=var37;
} else {
var19 = varonce18;
varonce18 = NULL;
}
{
var44 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var19)->values[0]=var44;
{
var45 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var19)->values[2]=var45;
{
var46 = ((val*(*)(val* self))(var_length->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_length); /* to_s on <var_length:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var19)->values[4]=var46;
{
var47 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var47); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateErasureCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
