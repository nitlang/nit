#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler$MClassType$ctype for (self: MClassType): String */
val* nitc__abstract_compiler___MClassType___MType__ctype(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : MClass */;
val* var29 /* : MClass */;
val* var30 /* : String */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
short int var41 /* : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : MClass */;
val* var52 /* : MClass */;
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
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Bool */;
val* var72 /* : nullable Bool */;
val* var73 /* : MClass */;
val* var75 /* : MClass */;
val* var76 /* : String */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
val* var96 /* : MClass */;
val* var98 /* : MClass */;
val* var99 /* : String */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Bool */;
val* var109 /* : nullable Bool */;
short int var110 /* : Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
val* var119 /* : MClass */;
val* var121 /* : MClass */;
val* var122 /* : String */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Bool */;
val* var132 /* : nullable Bool */;
short int var133 /* : Bool */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
val* var142 /* : MClass */;
val* var144 /* : MClass */;
val* var145 /* : String */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
val* var152 /* : nullable Int */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Bool */;
val* var155 /* : nullable Bool */;
short int var156 /* : Bool */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : CString */;
val* var160 /* : String */;
val* var161 /* : nullable Int */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Bool */;
val* var164 /* : nullable Bool */;
val* var165 /* : MClass */;
val* var167 /* : MClass */;
val* var168 /* : String */;
val* var170 /* : String */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : CString */;
val* var174 /* : String */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Int */;
val* var177 /* : nullable Bool */;
val* var178 /* : nullable Bool */;
short int var179 /* : Bool */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : CString */;
val* var183 /* : String */;
val* var184 /* : nullable Int */;
val* var185 /* : nullable Int */;
val* var186 /* : nullable Bool */;
val* var187 /* : nullable Bool */;
val* var188 /* : MClass */;
val* var190 /* : MClass */;
val* var191 /* : String */;
val* var193 /* : String */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : CString */;
val* var197 /* : String */;
val* var198 /* : nullable Int */;
val* var199 /* : nullable Int */;
val* var200 /* : nullable Bool */;
val* var201 /* : nullable Bool */;
short int var202 /* : Bool */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : CString */;
val* var206 /* : String */;
val* var207 /* : nullable Int */;
val* var208 /* : nullable Int */;
val* var209 /* : nullable Bool */;
val* var210 /* : nullable Bool */;
val* var211 /* : MClass */;
val* var213 /* : MClass */;
val* var214 /* : String */;
val* var216 /* : String */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : CString */;
val* var220 /* : String */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Int */;
val* var223 /* : nullable Bool */;
val* var224 /* : nullable Bool */;
short int var225 /* : Bool */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : CString */;
val* var229 /* : String */;
val* var230 /* : nullable Int */;
val* var231 /* : nullable Int */;
val* var232 /* : nullable Bool */;
val* var233 /* : nullable Bool */;
val* var234 /* : MClass */;
val* var236 /* : MClass */;
val* var237 /* : String */;
val* var239 /* : String */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : CString */;
val* var243 /* : String */;
val* var244 /* : nullable Int */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Bool */;
val* var247 /* : nullable Bool */;
short int var248 /* : Bool */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : CString */;
val* var252 /* : String */;
val* var253 /* : nullable Int */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Bool */;
val* var256 /* : nullable Bool */;
val* var257 /* : MClass */;
val* var259 /* : MClass */;
val* var260 /* : String */;
val* var262 /* : String */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : CString */;
val* var266 /* : String */;
val* var267 /* : nullable Int */;
val* var268 /* : nullable Int */;
val* var269 /* : nullable Bool */;
val* var270 /* : nullable Bool */;
short int var271 /* : Bool */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : CString */;
val* var275 /* : String */;
val* var276 /* : nullable Int */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Bool */;
val* var279 /* : nullable Bool */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : CString */;
val* var283 /* : String */;
val* var284 /* : nullable Int */;
val* var285 /* : nullable Int */;
val* var286 /* : nullable Bool */;
val* var287 /* : nullable Bool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__MClassType___ctype].val != NULL; /* _ctype on <self:MClassType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__abstract_compiler__MClassType___ctype].val; /* _ctype on <self:MClassType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ctype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2069);
fatal_exit(1);
}
} else {
{
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var7 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MClass$name (var5) on <var5:MClass> */
var10 = var5->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var5:MClass> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Int";
var14 = (val*)(3l<<2|1);
var15 = (val*)(3l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce = var11;
}
{
var18 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var11); /* == on <var8:String>*/
}
if (var18){
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "long";
var23 = (val*)(4l<<2|1);
var24 = (val*)(4l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
var3 = var20;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var29 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model$MClass$name (var27) on <var27:MClass> */
var32 = var27->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var27:MClass> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "Bool";
var37 = (val*)(4l<<2|1);
var38 = (val*)(4l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce33 = var34;
}
{
var41 = ((short int(*)(val* self, val* p0))(var30->class->vft[COLOR_core__kernel__Object___61d_61d]))(var30, var34); /* == on <var30:String>*/
}
if (var41){
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "short int";
var46 = (val*)(9l<<2|1);
var47 = (val*)(9l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
var3 = var43;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var52 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model$MClass$name (var50) on <var50:MClass> */
var55 = var50->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var50:MClass> */
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
var58 = "Char";
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
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "uint32_t";
var69 = (val*)(8l<<2|1);
var70 = (val*)(8l<<2|1);
var71 = (val*)((long)(0)<<2|3);
var72 = (val*)((long)(0)<<2|3);
var68 = core__flat___CString___to_s_unsafe(var67, var69, var70, var71, var72);
var66 = var68;
varonce65 = var66;
}
var3 = var66;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var75 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model$MClass$name (var73) on <var73:MClass> */
var78 = var73->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var73:MClass> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "Float";
var83 = (val*)(5l<<2|1);
var84 = (val*)(5l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
{
var87 = ((short int(*)(val* self, val* p0))(var76->class->vft[COLOR_core__kernel__Object___61d_61d]))(var76, var80); /* == on <var76:String>*/
}
if (var87){
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "double";
var92 = (val*)(6l<<2|1);
var93 = (val*)(6l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
var3 = var89;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var98 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model$MClass$name (var96) on <var96:MClass> */
var101 = var96->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var96:MClass> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "Int8";
var106 = (val*)(4l<<2|1);
var107 = (val*)(4l<<2|1);
var108 = (val*)((long)(0)<<2|3);
var109 = (val*)((long)(0)<<2|3);
var105 = core__flat___CString___to_s_unsafe(var104, var106, var107, var108, var109);
var103 = var105;
varonce102 = var103;
}
{
var110 = ((short int(*)(val* self, val* p0))(var99->class->vft[COLOR_core__kernel__Object___61d_61d]))(var99, var103); /* == on <var99:String>*/
}
if (var110){
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "int8_t";
var115 = (val*)(6l<<2|1);
var116 = (val*)(6l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
var3 = var112;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var121 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var121 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline model$MClass$name (var119) on <var119:MClass> */
var124 = var119->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var119:MClass> */
if (unlikely(var124 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "Byte";
var129 = (val*)(4l<<2|1);
var130 = (val*)(4l<<2|1);
var131 = (val*)((long)(0)<<2|3);
var132 = (val*)((long)(0)<<2|3);
var128 = core__flat___CString___to_s_unsafe(var127, var129, var130, var131, var132);
var126 = var128;
varonce125 = var126;
}
{
var133 = ((short int(*)(val* self, val* p0))(var122->class->vft[COLOR_core__kernel__Object___61d_61d]))(var122, var126); /* == on <var122:String>*/
}
if (var133){
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "unsigned char";
var138 = (val*)(13l<<2|1);
var139 = (val*)(13l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
var3 = var135;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var144 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var144 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline model$MClass$name (var142) on <var142:MClass> */
var147 = var142->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var142:MClass> */
if (unlikely(var147 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "Int16";
var152 = (val*)(5l<<2|1);
var153 = (val*)(5l<<2|1);
var154 = (val*)((long)(0)<<2|3);
var155 = (val*)((long)(0)<<2|3);
var151 = core__flat___CString___to_s_unsafe(var150, var152, var153, var154, var155);
var149 = var151;
varonce148 = var149;
}
{
var156 = ((short int(*)(val* self, val* p0))(var145->class->vft[COLOR_core__kernel__Object___61d_61d]))(var145, var149); /* == on <var145:String>*/
}
if (var156){
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "int16_t";
var161 = (val*)(7l<<2|1);
var162 = (val*)(7l<<2|1);
var163 = (val*)((long)(0)<<2|3);
var164 = (val*)((long)(0)<<2|3);
var160 = core__flat___CString___to_s_unsafe(var159, var161, var162, var163, var164);
var158 = var160;
varonce157 = var158;
}
var3 = var158;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var167 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var167 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
{ /* Inline model$MClass$name (var165) on <var165:MClass> */
var170 = var165->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var165:MClass> */
if (unlikely(var170 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "UInt16";
var175 = (val*)(6l<<2|1);
var176 = (val*)(6l<<2|1);
var177 = (val*)((long)(0)<<2|3);
var178 = (val*)((long)(0)<<2|3);
var174 = core__flat___CString___to_s_unsafe(var173, var175, var176, var177, var178);
var172 = var174;
varonce171 = var172;
}
{
var179 = ((short int(*)(val* self, val* p0))(var168->class->vft[COLOR_core__kernel__Object___61d_61d]))(var168, var172); /* == on <var168:String>*/
}
if (var179){
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "uint16_t";
var184 = (val*)(8l<<2|1);
var185 = (val*)(8l<<2|1);
var186 = (val*)((long)(0)<<2|3);
var187 = (val*)((long)(0)<<2|3);
var183 = core__flat___CString___to_s_unsafe(var182, var184, var185, var186, var187);
var181 = var183;
varonce180 = var181;
}
var3 = var181;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var190 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var190 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
{ /* Inline model$MClass$name (var188) on <var188:MClass> */
var193 = var188->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var188:MClass> */
if (unlikely(var193 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "Int32";
var198 = (val*)(5l<<2|1);
var199 = (val*)(5l<<2|1);
var200 = (val*)((long)(0)<<2|3);
var201 = (val*)((long)(0)<<2|3);
var197 = core__flat___CString___to_s_unsafe(var196, var198, var199, var200, var201);
var195 = var197;
varonce194 = var195;
}
{
var202 = ((short int(*)(val* self, val* p0))(var191->class->vft[COLOR_core__kernel__Object___61d_61d]))(var191, var195); /* == on <var191:String>*/
}
if (var202){
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "int32_t";
var207 = (val*)(7l<<2|1);
var208 = (val*)(7l<<2|1);
var209 = (val*)((long)(0)<<2|3);
var210 = (val*)((long)(0)<<2|3);
var206 = core__flat___CString___to_s_unsafe(var205, var207, var208, var209, var210);
var204 = var206;
varonce203 = var204;
}
var3 = var204;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var213 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var213 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline model$MClass$name (var211) on <var211:MClass> */
var216 = var211->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var211:MClass> */
if (unlikely(var216 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = "UInt32";
var221 = (val*)(6l<<2|1);
var222 = (val*)(6l<<2|1);
var223 = (val*)((long)(0)<<2|3);
var224 = (val*)((long)(0)<<2|3);
var220 = core__flat___CString___to_s_unsafe(var219, var221, var222, var223, var224);
var218 = var220;
varonce217 = var218;
}
{
var225 = ((short int(*)(val* self, val* p0))(var214->class->vft[COLOR_core__kernel__Object___61d_61d]))(var214, var218); /* == on <var214:String>*/
}
if (var225){
if (likely(varonce226!=NULL)) {
var227 = varonce226;
} else {
var228 = "uint32_t";
var230 = (val*)(8l<<2|1);
var231 = (val*)(8l<<2|1);
var232 = (val*)((long)(0)<<2|3);
var233 = (val*)((long)(0)<<2|3);
var229 = core__flat___CString___to_s_unsafe(var228, var230, var231, var232, var233);
var227 = var229;
varonce226 = var227;
}
var3 = var227;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var236 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var236 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline model$MClass$name (var234) on <var234:MClass> */
var239 = var234->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var234:MClass> */
if (unlikely(var239 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "CString";
var244 = (val*)(7l<<2|1);
var245 = (val*)(7l<<2|1);
var246 = (val*)((long)(0)<<2|3);
var247 = (val*)((long)(0)<<2|3);
var243 = core__flat___CString___to_s_unsafe(var242, var244, var245, var246, var247);
var241 = var243;
varonce240 = var241;
}
{
var248 = ((short int(*)(val* self, val* p0))(var237->class->vft[COLOR_core__kernel__Object___61d_61d]))(var237, var241); /* == on <var237:String>*/
}
if (var248){
if (likely(varonce249!=NULL)) {
var250 = varonce249;
} else {
var251 = "char*";
var253 = (val*)(5l<<2|1);
var254 = (val*)(5l<<2|1);
var255 = (val*)((long)(0)<<2|3);
var256 = (val*)((long)(0)<<2|3);
var252 = core__flat___CString___to_s_unsafe(var251, var253, var254, var255, var256);
var250 = var252;
varonce249 = var250;
}
var3 = var250;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var259 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var259 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline model$MClass$name (var257) on <var257:MClass> */
var262 = var257->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var257:MClass> */
if (unlikely(var262 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = "NativeArray";
var267 = (val*)(11l<<2|1);
var268 = (val*)(11l<<2|1);
var269 = (val*)((long)(0)<<2|3);
var270 = (val*)((long)(0)<<2|3);
var266 = core__flat___CString___to_s_unsafe(var265, var267, var268, var269, var270);
var264 = var266;
varonce263 = var264;
}
{
var271 = ((short int(*)(val* self, val* p0))(var260->class->vft[COLOR_core__kernel__Object___61d_61d]))(var260, var264); /* == on <var260:String>*/
}
if (var271){
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "val*";
var276 = (val*)(4l<<2|1);
var277 = (val*)(4l<<2|1);
var278 = (val*)((long)(0)<<2|3);
var279 = (val*)((long)(0)<<2|3);
var275 = core__flat___CString___to_s_unsafe(var274, var276, var277, var278, var279);
var273 = var275;
varonce272 = var273;
}
var3 = var273;
goto RET_LABEL4;
} else {
if (likely(varonce280!=NULL)) {
var281 = varonce280;
} else {
var282 = "val*";
var284 = (val*)(4l<<2|1);
var285 = (val*)(4l<<2|1);
var286 = (val*)((long)(0)<<2|3);
var287 = (val*)((long)(0)<<2|3);
var283 = core__flat___CString___to_s_unsafe(var282, var284, var285, var286, var287);
var281 = var283;
varonce280 = var281;
}
var3 = var281;
goto RET_LABEL4;
}
}
}
}
}
}
}
}
}
}
}
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__abstract_compiler__MClassType___ctype].val = var3; /* _ctype on <self:MClassType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MClassType$is_c_primitive for (self: MClassType): Bool */
short int nitc__abstract_compiler___MClassType___MType__is_c_primitive(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__MClassType__lazy_32d_is_c_primitive].s; /* lazy _is_c_primitive on <self:MClassType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__abstract_compiler__MClassType___is_c_primitive].s; /* _is_c_primitive on <self:MClassType> */
} else {
{
{
var5 = nitc__abstract_compiler___MClassType___MType__ctype(self);
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "val*";
var9 = (val*)(4l<<2|1);
var10 = (val*)(4l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
{ /* Inline kernel$Object$!= (var5,var6) on <var5:String> */
var_other = var6;
{
var15 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:String>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var3 = var13;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__abstract_compiler__MClassType___is_c_primitive].s = var3; /* _is_c_primitive on <self:MClassType> */
var2 = var3;
self->attrs[COLOR_nitc__abstract_compiler__MClassType__lazy_32d_is_c_primitive].s = 1; /* lazy _is_c_primitive on <self:MClassType> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MClassType$ctype_extern for (self: MClassType): String */
val* nitc__abstract_compiler___MClassType___MType__ctype_extern(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MClassKind */;
val* var6 /* : MClassKind */;
val* var7 /* : Sys */;
val* var8 /* : MClassKind */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var1:MClass> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = glob_sys;
{
var8 = nitc__model___core__Sys___extern_kind(var7);
}
{
{ /* Inline kernel$Object$== (var4,var8) on <var4:MClassKind> */
var_other = var8;
{
{ /* Inline kernel$Object$is_same_instance (var4,var_other) on <var4:MClassKind> */
var13 = var4 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "void*";
var17 = (val*)(5l<<2|1);
var18 = (val*)(5l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce = var14;
}
var = var14;
goto RET_LABEL;
} else {
{
var21 = nitc__abstract_compiler___MClassType___MType__ctype(self);
}
var = var21;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$MClassType$ctypename for (self: MClassType): String */
val* nitc__abstract_compiler___MClassType___MType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : MClass */;
val* var25 /* : MClass */;
val* var26 /* : String */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable Bool */;
val* var46 /* : MClass */;
val* var48 /* : MClass */;
val* var49 /* : String */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
short int var60 /* : Bool */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Bool */;
val* var68 /* : nullable Bool */;
val* var69 /* : MClass */;
val* var71 /* : MClass */;
val* var72 /* : String */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
short int var83 /* : Bool */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
val* var92 /* : MClass */;
val* var94 /* : MClass */;
val* var95 /* : String */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
short int var106 /* : Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Bool */;
val* var114 /* : nullable Bool */;
val* var115 /* : MClass */;
val* var117 /* : MClass */;
val* var118 /* : String */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Bool */;
val* var128 /* : nullable Bool */;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Bool */;
val* var137 /* : nullable Bool */;
val* var138 /* : MClass */;
val* var140 /* : MClass */;
val* var141 /* : String */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : CString */;
val* var147 /* : String */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Bool */;
val* var151 /* : nullable Bool */;
short int var152 /* : Bool */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
val* var157 /* : nullable Int */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Bool */;
val* var160 /* : nullable Bool */;
val* var161 /* : MClass */;
val* var163 /* : MClass */;
val* var164 /* : String */;
val* var166 /* : String */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
short int var175 /* : Bool */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Bool */;
val* var183 /* : nullable Bool */;
val* var184 /* : MClass */;
val* var186 /* : MClass */;
val* var187 /* : String */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : CString */;
val* var193 /* : String */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Int */;
val* var196 /* : nullable Bool */;
val* var197 /* : nullable Bool */;
short int var198 /* : Bool */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : CString */;
val* var202 /* : String */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Bool */;
val* var206 /* : nullable Bool */;
val* var207 /* : MClass */;
val* var209 /* : MClass */;
val* var210 /* : String */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : CString */;
val* var216 /* : String */;
val* var217 /* : nullable Int */;
val* var218 /* : nullable Int */;
val* var219 /* : nullable Bool */;
val* var220 /* : nullable Bool */;
short int var221 /* : Bool */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : CString */;
val* var225 /* : String */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Int */;
val* var228 /* : nullable Bool */;
val* var229 /* : nullable Bool */;
val* var230 /* : MClass */;
val* var232 /* : MClass */;
val* var233 /* : String */;
val* var235 /* : String */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : CString */;
val* var239 /* : String */;
val* var240 /* : nullable Int */;
val* var241 /* : nullable Int */;
val* var242 /* : nullable Bool */;
val* var243 /* : nullable Bool */;
short int var244 /* : Bool */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : CString */;
val* var248 /* : String */;
val* var249 /* : nullable Int */;
val* var250 /* : nullable Int */;
val* var251 /* : nullable Bool */;
val* var252 /* : nullable Bool */;
val* var253 /* : MClass */;
val* var255 /* : MClass */;
val* var256 /* : String */;
val* var258 /* : String */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : CString */;
val* var262 /* : String */;
val* var263 /* : nullable Int */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Bool */;
val* var266 /* : nullable Bool */;
short int var267 /* : Bool */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : CString */;
val* var271 /* : String */;
val* var272 /* : nullable Int */;
val* var273 /* : nullable Int */;
val* var274 /* : nullable Bool */;
val* var275 /* : nullable Bool */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : CString */;
val* var279 /* : String */;
val* var280 /* : nullable Int */;
val* var281 /* : nullable Int */;
val* var282 /* : nullable Bool */;
val* var283 /* : nullable Bool */;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "Int";
var10 = (val*)(3l<<2|1);
var11 = (val*)(3l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce = var7;
}
{
var14 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var7); /* == on <var4:String>*/
}
if (var14){
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "l";
var19 = (val*)(1l<<2|1);
var20 = (val*)(1l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
var = var16;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var25 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model$MClass$name (var23) on <var23:MClass> */
var28 = var23->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var23:MClass> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "Bool";
var33 = (val*)(4l<<2|1);
var34 = (val*)(4l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
{
var37 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_core__kernel__Object___61d_61d]))(var26, var30); /* == on <var26:String>*/
}
if (var37){
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "s";
var42 = (val*)(1l<<2|1);
var43 = (val*)(1l<<2|1);
var44 = (val*)((long)(0)<<2|3);
var45 = (val*)((long)(0)<<2|3);
var41 = core__flat___CString___to_s_unsafe(var40, var42, var43, var44, var45);
var39 = var41;
varonce38 = var39;
}
var = var39;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var48 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model$MClass$name (var46) on <var46:MClass> */
var51 = var46->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var46:MClass> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Char";
var56 = (val*)(4l<<2|1);
var57 = (val*)(4l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
{
var60 = ((short int(*)(val* self, val* p0))(var49->class->vft[COLOR_core__kernel__Object___61d_61d]))(var49, var53); /* == on <var49:String>*/
}
if (var60){
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "c";
var65 = (val*)(1l<<2|1);
var66 = (val*)(1l<<2|1);
var67 = (val*)((long)(0)<<2|3);
var68 = (val*)((long)(0)<<2|3);
var64 = core__flat___CString___to_s_unsafe(var63, var65, var66, var67, var68);
var62 = var64;
varonce61 = var62;
}
var = var62;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var71 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline model$MClass$name (var69) on <var69:MClass> */
var74 = var69->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var69:MClass> */
if (unlikely(var74 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Float";
var79 = (val*)(5l<<2|1);
var80 = (val*)(5l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
{
var83 = ((short int(*)(val* self, val* p0))(var72->class->vft[COLOR_core__kernel__Object___61d_61d]))(var72, var76); /* == on <var72:String>*/
}
if (var83){
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "d";
var88 = (val*)(1l<<2|1);
var89 = (val*)(1l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
var = var85;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var94 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline model$MClass$name (var92) on <var92:MClass> */
var97 = var92->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var92:MClass> */
if (unlikely(var97 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "Int8";
var102 = (val*)(4l<<2|1);
var103 = (val*)(4l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
{
var106 = ((short int(*)(val* self, val* p0))(var95->class->vft[COLOR_core__kernel__Object___61d_61d]))(var95, var99); /* == on <var95:String>*/
}
if (var106){
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "i8";
var111 = (val*)(2l<<2|1);
var112 = (val*)(2l<<2|1);
var113 = (val*)((long)(0)<<2|3);
var114 = (val*)((long)(0)<<2|3);
var110 = core__flat___CString___to_s_unsafe(var109, var111, var112, var113, var114);
var108 = var110;
varonce107 = var108;
}
var = var108;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var117 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var117 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline model$MClass$name (var115) on <var115:MClass> */
var120 = var115->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var115:MClass> */
if (unlikely(var120 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "Byte";
var125 = (val*)(4l<<2|1);
var126 = (val*)(4l<<2|1);
var127 = (val*)((long)(0)<<2|3);
var128 = (val*)((long)(0)<<2|3);
var124 = core__flat___CString___to_s_unsafe(var123, var125, var126, var127, var128);
var122 = var124;
varonce121 = var122;
}
{
var129 = ((short int(*)(val* self, val* p0))(var118->class->vft[COLOR_core__kernel__Object___61d_61d]))(var118, var122); /* == on <var118:String>*/
}
if (var129){
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "b";
var134 = (val*)(1l<<2|1);
var135 = (val*)(1l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
var = var131;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var140 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var140 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline model$MClass$name (var138) on <var138:MClass> */
var143 = var138->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var138:MClass> */
if (unlikely(var143 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "Int16";
var148 = (val*)(5l<<2|1);
var149 = (val*)(5l<<2|1);
var150 = (val*)((long)(0)<<2|3);
var151 = (val*)((long)(0)<<2|3);
var147 = core__flat___CString___to_s_unsafe(var146, var148, var149, var150, var151);
var145 = var147;
varonce144 = var145;
}
{
var152 = ((short int(*)(val* self, val* p0))(var141->class->vft[COLOR_core__kernel__Object___61d_61d]))(var141, var145); /* == on <var141:String>*/
}
if (var152){
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "i16";
var157 = (val*)(3l<<2|1);
var158 = (val*)(3l<<2|1);
var159 = (val*)((long)(0)<<2|3);
var160 = (val*)((long)(0)<<2|3);
var156 = core__flat___CString___to_s_unsafe(var155, var157, var158, var159, var160);
var154 = var156;
varonce153 = var154;
}
var = var154;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var163 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var163 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline model$MClass$name (var161) on <var161:MClass> */
var166 = var161->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var161:MClass> */
if (unlikely(var166 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "UInt16";
var171 = (val*)(6l<<2|1);
var172 = (val*)(6l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
{
var175 = ((short int(*)(val* self, val* p0))(var164->class->vft[COLOR_core__kernel__Object___61d_61d]))(var164, var168); /* == on <var164:String>*/
}
if (var175){
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "u16";
var180 = (val*)(3l<<2|1);
var181 = (val*)(3l<<2|1);
var182 = (val*)((long)(0)<<2|3);
var183 = (val*)((long)(0)<<2|3);
var179 = core__flat___CString___to_s_unsafe(var178, var180, var181, var182, var183);
var177 = var179;
varonce176 = var177;
}
var = var177;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var186 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var186 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
{ /* Inline model$MClass$name (var184) on <var184:MClass> */
var189 = var184->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var184:MClass> */
if (unlikely(var189 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = "Int32";
var194 = (val*)(5l<<2|1);
var195 = (val*)(5l<<2|1);
var196 = (val*)((long)(0)<<2|3);
var197 = (val*)((long)(0)<<2|3);
var193 = core__flat___CString___to_s_unsafe(var192, var194, var195, var196, var197);
var191 = var193;
varonce190 = var191;
}
{
var198 = ((short int(*)(val* self, val* p0))(var187->class->vft[COLOR_core__kernel__Object___61d_61d]))(var187, var191); /* == on <var187:String>*/
}
if (var198){
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "i32";
var203 = (val*)(3l<<2|1);
var204 = (val*)(3l<<2|1);
var205 = (val*)((long)(0)<<2|3);
var206 = (val*)((long)(0)<<2|3);
var202 = core__flat___CString___to_s_unsafe(var201, var203, var204, var205, var206);
var200 = var202;
varonce199 = var200;
}
var = var200;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var209 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var209 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
{ /* Inline model$MClass$name (var207) on <var207:MClass> */
var212 = var207->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var207:MClass> */
if (unlikely(var212 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = "UInt32";
var217 = (val*)(6l<<2|1);
var218 = (val*)(6l<<2|1);
var219 = (val*)((long)(0)<<2|3);
var220 = (val*)((long)(0)<<2|3);
var216 = core__flat___CString___to_s_unsafe(var215, var217, var218, var219, var220);
var214 = var216;
varonce213 = var214;
}
{
var221 = ((short int(*)(val* self, val* p0))(var210->class->vft[COLOR_core__kernel__Object___61d_61d]))(var210, var214); /* == on <var210:String>*/
}
if (var221){
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = "u32";
var226 = (val*)(3l<<2|1);
var227 = (val*)(3l<<2|1);
var228 = (val*)((long)(0)<<2|3);
var229 = (val*)((long)(0)<<2|3);
var225 = core__flat___CString___to_s_unsafe(var224, var226, var227, var228, var229);
var223 = var225;
varonce222 = var223;
}
var = var223;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var232 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var232 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
{ /* Inline model$MClass$name (var230) on <var230:MClass> */
var235 = var230->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var230:MClass> */
if (unlikely(var235 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = "CString";
var240 = (val*)(7l<<2|1);
var241 = (val*)(7l<<2|1);
var242 = (val*)((long)(0)<<2|3);
var243 = (val*)((long)(0)<<2|3);
var239 = core__flat___CString___to_s_unsafe(var238, var240, var241, var242, var243);
var237 = var239;
varonce236 = var237;
}
{
var244 = ((short int(*)(val* self, val* p0))(var233->class->vft[COLOR_core__kernel__Object___61d_61d]))(var233, var237); /* == on <var233:String>*/
}
if (var244){
if (likely(varonce245!=NULL)) {
var246 = varonce245;
} else {
var247 = "str";
var249 = (val*)(3l<<2|1);
var250 = (val*)(3l<<2|1);
var251 = (val*)((long)(0)<<2|3);
var252 = (val*)((long)(0)<<2|3);
var248 = core__flat___CString___to_s_unsafe(var247, var249, var250, var251, var252);
var246 = var248;
varonce245 = var246;
}
var = var246;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var255 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var255 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
{
{ /* Inline model$MClass$name (var253) on <var253:MClass> */
var258 = var253->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var253:MClass> */
if (unlikely(var258 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "NativeArray";
var263 = (val*)(11l<<2|1);
var264 = (val*)(11l<<2|1);
var265 = (val*)((long)(0)<<2|3);
var266 = (val*)((long)(0)<<2|3);
var262 = core__flat___CString___to_s_unsafe(var261, var263, var264, var265, var266);
var260 = var262;
varonce259 = var260;
}
{
var267 = ((short int(*)(val* self, val* p0))(var256->class->vft[COLOR_core__kernel__Object___61d_61d]))(var256, var260); /* == on <var256:String>*/
}
if (var267){
if (likely(varonce268!=NULL)) {
var269 = varonce268;
} else {
var270 = "val";
var272 = (val*)(3l<<2|1);
var273 = (val*)(3l<<2|1);
var274 = (val*)((long)(0)<<2|3);
var275 = (val*)((long)(0)<<2|3);
var271 = core__flat___CString___to_s_unsafe(var270, var272, var273, var274, var275);
var269 = var271;
varonce268 = var269;
}
var = var269;
goto RET_LABEL;
} else {
if (likely(varonce276!=NULL)) {
var277 = varonce276;
} else {
var278 = "val";
var280 = (val*)(3l<<2|1);
var281 = (val*)(3l<<2|1);
var282 = (val*)((long)(0)<<2|3);
var283 = (val*)((long)(0)<<2|3);
var279 = core__flat___CString___to_s_unsafe(var278, var280, var281, var282, var283);
var277 = var279;
varonce276 = var277;
}
var = var277;
goto RET_LABEL;
}
}
}
}
}
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$MMethodDef$can_inline for (self: MMethodDef, AbstractCompilerVisitor): Bool */
short int nitc__abstract_compiler___MMethodDef___can_inline(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AbstractCompiler */;
val* var12 /* : AbstractCompiler */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var16 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__MPropDef__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2148);
fatal_exit(1);
}
var_v = p0;
{
{ /* Inline model$MMethodDef$is_abstract (self) on <self:MMethodDef> */
var4 = self->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MMethodDef$constant_value (self) on <self:MMethodDef> */
var7 = self->attrs[COLOR_nitc__model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var5, ((val*)NULL)); /* != on <var5:nullable Object>*/
var8 = var9;
}
if (var8){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var12 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var10) on <var10:AbstractCompiler> */
var15 = var10->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var10:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_modelbuilder = var13;
{
var16 = nitc__modelize_property___ModelBuilder___mpropdef2node(var_modelbuilder, self);
}
var_node = var16;
/* <var_node:nullable ANode> isa APropdef */
cltype18 = type_nitc__APropdef.color;
idtype19 = type_nitc__APropdef.id;
if(var_node == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_node->type->table_size) {
var17 = 0;
} else {
var17 = var_node->type->type_table[cltype18] == idtype19;
}
}
if (var17){
{
var20 = ((short int(*)(val* self))(var_node->class->vft[COLOR_nitc__abstract_compiler__APropdef__can_inline]))(var_node); /* can_inline on <var_node:nullable ANode(APropdef)>*/
}
var = var20;
goto RET_LABEL;
} else {
/* <var_node:nullable ANode> isa AClassdef */
cltype22 = type_nitc__AClassdef.color;
idtype23 = type_nitc__AClassdef.id;
if(var_node == NULL) {
var21 = 0;
} else {
if(cltype22 >= var_node->type->table_size) {
var21 = 0;
} else {
var21 = var_node->type->type_table[cltype22] == idtype23;
}
}
if (var21){
var = 1;
goto RET_LABEL;
} else {
if (var_node == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var29 = var_node == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
var = 1;
goto RET_LABEL;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2163);
fatal_exit(1);
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$MMethodDef$compile_inside_to_c for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc__abstract_compiler___MMethodDef___compile_inside_to_c(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : ModelBuilder */;
val* var7 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var8 /* : nullable Object */;
val* var10 /* : nullable Object */;
val* var_val /* var val: nullable Object */;
val* var11 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var16 /* : String */;
val* var_cn /* var cn: String */;
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
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
val* var43 /* : MProperty */;
val* var45 /* : MProperty */;
val* var46 /* : String */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
val* var54 /* : nullable ANode */;
val* var56 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
val* var62 /* : nullable ANode */;
val* var64 /* : nullable ANode */;
val* var_oldnode65 /* var oldnode: nullable ANode */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : RuntimeVariable */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__MPropDef__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2167);
fatal_exit(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var4 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_modelbuilder = var5;
{
{ /* Inline model$MMethodDef$constant_value (self) on <self:MMethodDef> */
var10 = self->attrs[COLOR_nitc__model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_val = var8;
{
var11 = nitc__modelize_property___ModelBuilder___mpropdef2node(var_modelbuilder, self);
}
var_node = var11;
{
{ /* Inline model$MMethodDef$is_abstract (self) on <self:MMethodDef> */
var14 = self->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12){
{
var15 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var16 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var15); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_cn = var16;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL17:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "PRINT_ERROR(\"Runtime error: Abstract method `%s` called on `%s`\", \"";
var23 = (val*)(67l<<2|1);
var24 = (val*)(67l<<2|1);
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
var29 = "\", ";
var31 = (val*)(3l<<2|1);
var32 = (val*)(3l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var18)->values[2]=var28;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = ");";
var39 = (val*)(2l<<2|1);
var40 = (val*)(2l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var18)->values[4]=var36;
} else {
var18 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MMethodDef> */
var45 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var43) on <var43:MProperty(MMethod)> */
var48 = var43->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var43:MProperty(MMethod)> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var46); /* escape_to_c on <var46:String>*/
}
((struct instance_core__NativeArray*)var18)->values[1]=var49;
((struct instance_core__NativeArray*)var18)->values[3]=var_cn;
{
var50 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___add_raw_abort(var_v); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_raw_abort on <var_v:AbstractCompilerVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
/* <var_node:nullable ANode> isa APropdef */
cltype52 = type_nitc__APropdef.color;
idtype53 = type_nitc__APropdef.id;
if(var_node == NULL) {
var51 = 0;
} else {
if(cltype52 >= var_node->type->table_size) {
var51 = 0;
} else {
var51 = var_node->type->type_table[cltype52] == idtype53;
}
}
if (var51){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var56 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_oldnode = var54;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL57:(void)0;
}
}
{
nitc__abstract_compiler___MMethodDef___compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler$MMethodDef$compile_parameter_check on <self:MMethodDef>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_node->class->vft[COLOR_nitc__abstract_compiler__APropdef__compile_to_c]))(var_node, var_v, self, var_arguments); /* compile_to_c on <var_node:nullable ANode(APropdef)>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL58:(void)0;
}
}
} else {
/* <var_node:nullable ANode> isa AClassdef */
cltype60 = type_nitc__AClassdef.color;
idtype61 = type_nitc__AClassdef.id;
if(var_node == NULL) {
var59 = 0;
} else {
if(cltype60 >= var_node->type->table_size) {
var59 = 0;
} else {
var59 = var_node->type->type_table[cltype60] == idtype61;
}
}
if (var59){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var64 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_oldnode65 = var62;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL66:(void)0;
}
}
{
nitc__abstract_compiler___MMethodDef___compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler$MMethodDef$compile_parameter_check on <self:MMethodDef>*/
}
{
nitc__abstract_compiler___AClassdef___compile_to_c(var_node, var_v, self, var_arguments); /* Direct call abstract_compiler$AClassdef$compile_to_c on <var_node:nullable ANode(AClassdef)>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_oldnode65) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode65; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL67:(void)0;
}
}
} else {
if (var_val == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (0) {
var69 = ((short int(*)(val* self, val* p0))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_val, ((val*)NULL)); /* != on <var_val:nullable Object>*/
var68 = var69;
}
if (var68){
{
var70 = nitc___nitc__AbstractCompilerVisitor___value_instance(var_v, var_val);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var70); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2197);
fatal_exit(1);
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MMethodDef$compile_parameter_check for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void nitc__abstract_compiler___MMethodDef___compile_parameter_check(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
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
val* var17 /* : nullable MSignature */;
val* var19 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
long var_i /* var i: Int */;
long var20 /* : Int */;
long var_ /* var : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : Array[MParameter] */;
val* var30 /* : Array[MParameter] */;
val* var31 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var36 /* : MProperty */;
val* var38 /* : MProperty */;
val* var39 /* : MPropDef */;
val* var41 /* : MPropDef */;
val* var42 /* : nullable MSignature */;
val* var44 /* : nullable MSignature */;
val* var45 /* : Array[MParameter] */;
val* var47 /* : Array[MParameter] */;
val* var48 /* : nullable Object */;
val* var49 /* : MType */;
val* var51 /* : MType */;
val* var_origmtype /* var origmtype: MType */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var57 /* : NativeArray[String] */;
static val* varonce;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Bool */;
val* var81 /* : nullable Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Bool */;
val* var97 /* : nullable Bool */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var101 /* : String */;
long var102 /* : Int */;
short int var104 /* : Bool */;
int cltype105;
int idtype106;
const char* var_class_name107;
long var108 /* : Int */;
val* var109 /* : nullable Object */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var112 /* : String */;
long var113 /* : Int */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
const char* var_class_name118;
long var119 /* : Int */;
val* var120 /* : nullable Object */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Bool */;
val* var128 /* : nullable Bool */;
long var129 /* : Int */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__MPropDef__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2202);
fatal_exit(1);
}
var_v = p0;
var_arguments = p1;
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
{ /* Inline abstract_compiler$ToolContext$opt_no_check_covariance (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 48);
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
if (var16){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MMethodDef$msignature (self) on <self:MMethodDef> */
var19 = self->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2207);
fatal_exit(1);
}
var_msignature = var17;
var_i = 0l;
{
var20 = nitc___nitc__MSignature___arity(var_msignature);
}
var_ = var20;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var23 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var27 = var_i < var_;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var30 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var28, var_i);
}
var_mp = var31;
{
{ /* Inline model$MParameter$is_vararg (var_mp) on <var_mp:MParameter> */
var34 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32){
goto BREAK_label35;
} else {
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MMethodDef> */
var38 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var36) on <var36:MProperty(MMethod)> */
var41 = var36->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var36:MProperty(MMethod)> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var39) on <var39:MPropDef(MMethodDef)> */
var44 = var39->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var39:MPropDef(MMethodDef)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2215);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$mparameters (var42) on <var42:nullable MSignature> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var47 = var42->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var42:nullable MSignature> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var45, var_i);
}
{
{ /* Inline model$MParameter$mtype (var48) on <var48:nullable Object(MParameter)> */
var51 = var48->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var48:nullable Object(MParameter)> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_origmtype = var49;
{
var52 = ((short int(*)(val* self))(var_origmtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_origmtype); /* need_anchor on <var_origmtype:MType>*/
}
var53 = !var52;
if (var53){
goto BREAK_label35;
} else {
}
{
{ /* Inline model$MParameter$mtype (var_mp) on <var_mp:MParameter> */
var56 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_mtype = var54;
if (unlikely(varonce==NULL)) {
var57 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "/* Covariant cast for argument ";
var62 = (val*)(31l<<2|1);
var63 = (val*)(31l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var57)->values[0]=var59;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = " (";
var70 = (val*)(2l<<2|1);
var71 = (val*)(2l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var57)->values[2]=var67;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = ") ";
var78 = (val*)(2l<<2|1);
var79 = (val*)(2l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var57)->values[4]=var75;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = " isa ";
var86 = (val*)(5l<<2|1);
var87 = (val*)(5l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var57)->values[6]=var83;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " */";
var94 = (val*)(3l<<2|1);
var95 = (val*)(3l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var57)->values[8]=var91;
} else {
var57 = varonce;
varonce = NULL;
}
var98 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var57)->values[1]=var98;
{
{ /* Inline model$MParameter$name (var_mp) on <var_mp:MParameter> */
var101 = var_mp->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_mp:MParameter> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
((struct instance_core__NativeArray*)var57)->values[3]=var99;
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var104 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var104)) {
var_class_name107 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name107);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var108 = var_i + 1l;
var102 = var108;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
{
var109 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var102);
}
{
var110 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var109);
}
((struct instance_core__NativeArray*)var57)->values[5]=var110;
{
var111 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var57)->values[7]=var111;
{
var112 = ((val*(*)(val* self))(var57->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce = var57;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var112); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var115 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var115)) {
var_class_name118 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name118);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var119 = var_i + 1l;
var113 = var119;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
{
var120 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var113);
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "covariance";
var125 = (val*)(10l<<2|1);
var126 = (val*)(10l<<2|1);
var127 = (val*)((long)(0)<<2|3);
var128 = (val*)((long)(0)<<2|3);
var124 = core__flat___CString___to_s_unsafe(var123, var125, var126, var127, var128);
var122 = var124;
varonce121 = var122;
}
{
nitc___nitc__AbstractCompilerVisitor___add_cast(var_v, var120, var_mtype, var122); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_cast on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label35: (void)0;
{
var129 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var129;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_compiler$APropdef$compile_to_c for (self: APropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc__abstract_compiler___APropdef___compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
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
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
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
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : Location */;
val* var37 /* : Location */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var5 = (val*)(33l<<2|1);
var6 = (val*)(33l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " ";
var13 = (val*)(1l<<2|1);
var14 = (val*)(1l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var)->values[2]=var10;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " at ";
var21 = (val*)(4l<<2|1);
var22 = (val*)(4l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var)->values[4]=var18;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "\\n\");";
var29 = (val*)(5l<<2|1);
var30 = (val*)(5l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var)->values[6]=var26;
} else {
var = varonce;
varonce = NULL;
}
{
var33 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var)->values[1]=var33;
{
var34 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var)->values[3]=var34;
{
{ /* Inline parser_nodes$ANode$location (self) on <self:APropdef> */
var37 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:APropdef> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nitc___nitc__Location___core__abstract_text__Object__to_s(var35);
}
((struct instance_core__NativeArray*)var)->values[5]=var38;
{
var39 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var39); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Not yet implemented";
var44 = (val*)(19l<<2|1);
var45 = (val*)(19l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
{
nitc___nitc__ANode___debug(self, var41); /* Direct call parser_nodes$ANode$debug on <self:APropdef>*/
}
RET_LABEL:;
}
/* method abstract_compiler$APropdef$can_inline for (self: APropdef): Bool */
short int nitc__abstract_compiler___APropdef___can_inline(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AMethPropdef$compile_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc__abstract_compiler___AMethPropdef___APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable Array[CallSite] */;
val* var2 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var9 /* : nullable Object */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var_10 /* var : Array[CallSite] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[CallSite] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var15 /* : MMethod */;
val* var17 /* : MMethod */;
val* var18 /* : MProperty */;
val* var20 /* : MProperty */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
long var_i /* var i: Int */;
val* var25 /* : MSignature */;
val* var27 /* : MSignature */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var32 /* : Int */;
long var_33 /* var : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
val* var42 /* : nullable Object */;
long var43 /* : Int */;
val* var44 /* : MMethod */;
val* var46 /* : MMethod */;
val* var47 /* : MProperty */;
val* var49 /* : MProperty */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable RuntimeVariable */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var59 /* : MType */;
val* var61 /* : MType */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
val* var66 /* : nullable RuntimeVariable */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : MProperty */;
val* var76 /* : MProperty */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : nullable AExpr */;
val* var84 /* : nullable AExpr */;
val* var_n_block /* var n_block: nullable AExpr */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
long var_i90 /* var i: Int */;
val* var91 /* : nullable MSignature */;
val* var93 /* : nullable MSignature */;
long var94 /* : Int */;
long var_95 /* var : Int */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
short int var102 /* : Bool */;
val* var104 /* : nullable ASignature */;
val* var106 /* : nullable ASignature */;
val* var107 /* : ANodes[AParam] */;
val* var109 /* : ANodes[AParam] */;
val* var110 /* : ANode */;
val* var111 /* : nullable Variable */;
val* var113 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var114 /* : RuntimeVariable */;
long var115 /* : Int */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
const char* var_class_name120;
long var121 /* : Int */;
val* var122 /* : nullable Object */;
long var123 /* : Int */;
val* var124 /* : nullable Object */;
val* var125 /* : String */;
val* var_cn /* var cn: String */;
val* var126 /* : NativeArray[String] */;
static val* varonce;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Bool */;
val* var134 /* : nullable Bool */;
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
val* var151 /* : MProperty */;
val* var153 /* : MProperty */;
val* var154 /* : String */;
val* var156 /* : String */;
val* var157 /* : String */;
val* var158 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline auto_super_init$AMethPropdef$auto_super_inits (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_auto_super_inits = var;
if (var_auto_super_inits == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_auto_super_inits,((val*)NULL)) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_auto_super_inits, var_other); /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var8 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var8, 1l); /* Direct call array$Array$with_capacity on <var8:Array[RuntimeVariable]>*/
}
var_ = var8;
{
var9 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var9); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
var_10 = var_auto_super_inits;
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_10);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[CallSite]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[CallSite]>*/
}
var_auto_super_init = var14;
{
{ /* Inline typing$CallSite$mproperty (var_auto_super_init) on <var_auto_super_init:CallSite> */
var17 = var_auto_super_init->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_auto_super_init:CallSite> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var20 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var15,var18) on <var15:MMethod> */
var_other = var18;
{
var23 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_core__kernel__Object___61d_61d]))(var15, var_other); /* == on <var15:MMethod>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (unlikely(!var21)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2249);
fatal_exit(1);
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_args); /* Direct call array$AbstractArray$clear on <var_args:Array[RuntimeVariable]>*/
}
var_i = 0l;
{
{ /* Inline typing$CallSite$msignature (var_auto_super_init) on <var_auto_super_init:CallSite> */
var27 = var_auto_super_init->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_auto_super_init:CallSite> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nitc___nitc__MSignature___arity(var25);
}
{
{ /* Inline kernel$Int$+ (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var32 = var28 + 1l;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_33 = var29;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_33) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_33:Int> isa OTHER */
/* <var_33:Int> isa OTHER */
var36 = 1; /* easy <var_33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var40 = var_i < var_33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
} else {
goto BREAK_label41;
}
{
var42 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var42); /* Direct call array$Array$add on <var_args:Array[RuntimeVariable]>*/
}
{
var43 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var43;
}
BREAK_label41: (void)0;
{
{ /* Inline typing$CallSite$mproperty (var_auto_super_init) on <var_auto_super_init:CallSite> */
var46 = var_auto_super_init->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_auto_super_init:CallSite> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var49 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var44,var47) on <var44:MMethod> */
var_other = var47;
{
var52 = ((short int(*)(val* self, val* p0))(var44->class->vft[COLOR_core__kernel__Object___61d_61d]))(var44, var_other); /* == on <var44:MMethod>*/
}
var53 = !var52;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (unlikely(!var50)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2254);
fatal_exit(1);
}
{
var54 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_auto_super_init, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[CallSite]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[CallSite]>*/
}
} else {
}
{
{ /* Inline auto_super_init$AMethPropdef$auto_super_call (self) on <self:AMethPropdef> */
var57 = self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:AMethPropdef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55){
{
var58 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var58) on <var58:nullable Object(RuntimeVariable)> */
var61 = var58->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var58:nullable Object(RuntimeVariable)> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
/* <var59:MType> isa MClassType */
cltype63 = type_nitc__MClassType.color;
idtype64 = type_nitc__MClassType.id;
if(cltype63 >= var59->type->table_size) {
var62 = 0;
} else {
var62 = var59->type->type_table[cltype63] == idtype64;
}
if (unlikely(!var62)) {
var_class_name65 = var59 == NULL ? "null" : var59->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2259);
fatal_exit(1);
}
{
var66 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var59, var_arguments);
}
} else {
}
{
{ /* Inline model$MMethodDef$is_intern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var69 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_intern].s; /* _is_intern on <var_mpropdef:MMethodDef> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (var67){
{
var70 = nitc__abstract_compiler___AMethPropdef___compile_intern_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var70){
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline model$MMethodDef$is_extern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var73 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_mpropdef:MMethodDef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71){
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var76 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var74) on <var74:MProperty(MMethod)> */
var79 = var74->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var74:MProperty(MMethod)> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
if (var77){
{
var80 = nitc__light___AMethPropdef___compile_externinit_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var80){
goto RET_LABEL;
} else {
}
} else {
{
var81 = nitc__light___AMethPropdef___compile_externmeth_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var81){
goto RET_LABEL;
} else {
}
}
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_block (self) on <self:AMethPropdef> */
var84 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_n_block = var82;
if (var_n_block == NULL) {
var85 = 0; /* is null */
} else {
var85 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
var_other = ((val*)NULL);
{
var88 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_block, var_other); /* == on <var_n_block:nullable AExpr(AExpr)>*/
}
var89 = !var88;
var86 = var89;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
var_i90 = 0l;
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var93 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2277);
fatal_exit(1);
} else {
var94 = nitc___nitc__MSignature___arity(var91);
}
var_95 = var94;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i90,var_95) on <var_i90:Int> */
/* Covariant cast for argument 0 (i) <var_95:Int> isa OTHER */
/* <var_95:Int> isa OTHER */
var98 = 1; /* easy <var_95:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var102 = var_i90 < var_95;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
if (var96){
} else {
goto BREAK_label103;
}
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var106 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (var104 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2278);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_params (var104) on <var104:nullable ASignature> */
if (unlikely(var104 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var109 = var104->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var104:nullable ASignature> */
if (unlikely(var109 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
var110 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var107, var_i90);
}
{
{ /* Inline scope$AParam$variable (var110) on <var110:ANode(AParam)> */
var113 = var110->attrs[COLOR_nitc__scope__AParam___variable].val; /* _variable on <var110:ANode(AParam)> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2278);
fatal_exit(1);
}
var_variable = var111;
{
var114 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
{ /* Inline kernel$Int$+ (var_i90,1l) on <var_i90:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var117 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var117)) {
var_class_name120 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name120);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var121 = var_i90 + 1l;
var115 = var121;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
{
var122 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var115);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var114, var122); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
{
var123 = core___core__Int___Discrete__successor(var_i90, 1l);
}
var_i90 = var123;
}
BREAK_label103: (void)0;
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_n_block); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var124 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var125 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var124); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_cn = var125;
if (unlikely(varonce==NULL)) {
var126 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "PRINT_ERROR(\"Runtime error: uncompiled method `%s` called on `%s`. NOT YET IMPLEMENTED\", \"";
var131 = (val*)(90l<<2|1);
var132 = (val*)(90l<<2|1);
var133 = (val*)((long)(0)<<2|3);
var134 = (val*)((long)(0)<<2|3);
var130 = core__flat___CString___to_s_unsafe(var129, var131, var132, var133, var134);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var126)->values[0]=var128;
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "\", ";
var139 = (val*)(3l<<2|1);
var140 = (val*)(3l<<2|1);
var141 = (val*)((long)(0)<<2|3);
var142 = (val*)((long)(0)<<2|3);
var138 = core__flat___CString___to_s_unsafe(var137, var139, var140, var141, var142);
var136 = var138;
varonce135 = var136;
}
((struct instance_core__NativeArray*)var126)->values[2]=var136;
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = ");";
var147 = (val*)(2l<<2|1);
var148 = (val*)(2l<<2|1);
var149 = (val*)((long)(0)<<2|3);
var150 = (val*)((long)(0)<<2|3);
var146 = core__flat___CString___to_s_unsafe(var145, var147, var148, var149, var150);
var144 = var146;
varonce143 = var144;
}
((struct instance_core__NativeArray*)var126)->values[4]=var144;
} else {
var126 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var153 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var153 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var151) on <var151:MProperty(MMethod)> */
var156 = var151->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var151:MProperty(MMethod)> */
if (unlikely(var156 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
var157 = ((val*(*)(val* self))(var154->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var154); /* escape_to_c on <var154:String>*/
}
((struct instance_core__NativeArray*)var126)->values[1]=var157;
((struct instance_core__NativeArray*)var126)->values[3]=var_cn;
{
var158 = ((val*(*)(val* self))(var126->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var126); /* native_to_s on <var126:NativeArray[String]>*/
}
varonce = var126;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var158); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___add_raw_abort(var_v); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_raw_abort on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AMethPropdef$can_inline for (self: AMethPropdef): Bool */
short int nitc__abstract_compiler___AMethPropdef___APropdef__can_inline(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Array[CallSite] */;
val* var3 /* : nullable Array[CallSite] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AExpr */;
val* var11 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable MPropDef */;
val* var23 /* : nullable MPropDef */;
val* var24 /* : MProperty */;
val* var26 /* : MProperty */;
val* var27 /* : String */;
val* var29 /* : String */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
short int var37 /* : Bool */;
short int var_ /* var : Bool */;
val* var38 /* : nullable MPropDef */;
val* var40 /* : nullable MPropDef */;
val* var41 /* : MProperty */;
val* var43 /* : MProperty */;
val* var44 /* : String */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
short int var55 /* : Bool */;
short int var_56 /* var : Bool */;
val* var57 /* : nullable MPropDef */;
val* var59 /* : nullable MPropDef */;
val* var60 /* : MClassDef */;
val* var62 /* : MClassDef */;
val* var63 /* : MClass */;
val* var65 /* : MClass */;
val* var66 /* : String */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
int cltype;
int idtype;
short int var_80 /* var : Bool */;
val* var81 /* : ANodes[AExpr] */;
val* var83 /* : ANodes[AExpr] */;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
{
{ /* Inline auto_super_init$AMethPropdef$auto_super_inits (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable Array[CallSite]> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable Array[CallSite](Array[CallSite])>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_block (self) on <self:AMethPropdef> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_nblock = var9;
if (var_nblock == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other15 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nblock,var_other15) on <var_nblock:nullable AExpr(AExpr)> */
var18 = var_nblock == var_other15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var23 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2296);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var21) on <var21:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var26 = var21->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var21:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var24) on <var24:MProperty(MMethod)> */
var29 = var24->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var24:MProperty(MMethod)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "==";
var33 = (val*)(2l<<2|1);
var34 = (val*)(2l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce = var30;
}
{
var37 = ((short int(*)(val* self, val* p0))(var27->class->vft[COLOR_core__kernel__Object___61d_61d]))(var27, var30); /* == on <var27:String>*/
}
var_ = var37;
if (var37){
var20 = var_;
} else {
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var40 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2296);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var38) on <var38:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var43 = var38->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var38:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var41) on <var41:MProperty(MMethod)> */
var46 = var41->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var41:MProperty(MMethod)> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "!=";
var51 = (val*)(2l<<2|1);
var52 = (val*)(2l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
{
var55 = ((short int(*)(val* self, val* p0))(var44->class->vft[COLOR_core__kernel__Object___61d_61d]))(var44, var48); /* == on <var44:String>*/
}
var20 = var55;
}
var_56 = var20;
if (var20){
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var59 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2296);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mclassdef (var57) on <var57:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var62 = var57->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var57:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var60) on <var60:MClassDef> */
var65 = var60->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var60:MClassDef> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline model$MClass$name (var63) on <var63:MClass> */
var68 = var63->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var63:MClass> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "Object";
var73 = (val*)(6l<<2|1);
var74 = (val*)(6l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
{
var77 = ((short int(*)(val* self, val* p0))(var66->class->vft[COLOR_core__kernel__Object___61d_61d]))(var66, var70); /* == on <var66:String>*/
}
var19 = var77;
} else {
var19 = var_56;
}
if (var19){
var = 1;
goto RET_LABEL;
} else {
}
/* <var_nblock:nullable AExpr(AExpr)> isa ABlockExpr */
cltype = type_nitc__ABlockExpr.color;
idtype = type_nitc__ABlockExpr.id;
if(cltype >= var_nblock->type->table_size) {
var79 = 0;
} else {
var79 = var_nblock->type->type_table[cltype] == idtype;
}
var_80 = var79;
if (var79){
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (var_nblock) on <var_nblock:nullable AExpr(ABlockExpr)> */
var83 = var_nblock->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nblock:nullable AExpr(ABlockExpr)> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var81);
}
{
{ /* Inline kernel$Int$== (var84,0l) on <var84:Int> */
var87 = var84 == 0l;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var78 = var85;
} else {
var78 = var_80;
}
if (var78){
var = 1;
goto RET_LABEL;
} else {
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
