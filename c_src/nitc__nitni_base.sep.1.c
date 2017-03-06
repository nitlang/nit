#include "nitc__nitni_base.sep.0.h"
/* method nitni_base$MMethod$short_cname for (self: MMethod): String */
val* nitc__nitni_base___MMethod___short_cname(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var_nit_name /* var nit_name: String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
short int var45 /* : Bool */;
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
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Bool */;
val* var70 /* : nullable Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Bool */;
val* var78 /* : nullable Bool */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Bool */;
val* var87 /* : nullable Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
short int var96 /* : Bool */;
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
short int var113 /* : Bool */;
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
short int var130 /* : Bool */;
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
short int var147 /* : Bool */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
val* var152 /* : nullable Int */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Bool */;
val* var155 /* : nullable Bool */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : CString */;
val* var159 /* : String */;
val* var160 /* : nullable Int */;
val* var161 /* : nullable Int */;
val* var162 /* : nullable Bool */;
val* var163 /* : nullable Bool */;
short int var164 /* : Bool */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : CString */;
val* var168 /* : String */;
val* var169 /* : nullable Int */;
val* var170 /* : nullable Int */;
val* var171 /* : nullable Bool */;
val* var172 /* : nullable Bool */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : CString */;
val* var176 /* : String */;
val* var177 /* : nullable Int */;
val* var178 /* : nullable Int */;
val* var179 /* : nullable Bool */;
val* var180 /* : nullable Bool */;
short int var181 /* : Bool */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : CString */;
val* var185 /* : String */;
val* var186 /* : nullable Int */;
val* var187 /* : nullable Int */;
val* var188 /* : nullable Bool */;
val* var189 /* : nullable Bool */;
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
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : CString */;
val* var210 /* : String */;
val* var211 /* : nullable Int */;
val* var212 /* : nullable Int */;
val* var213 /* : nullable Bool */;
val* var214 /* : nullable Bool */;
short int var215 /* : Bool */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : nullable Int */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Bool */;
val* var223 /* : nullable Bool */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : CString */;
val* var227 /* : String */;
val* var228 /* : nullable Int */;
val* var229 /* : nullable Int */;
val* var230 /* : nullable Bool */;
val* var231 /* : nullable Bool */;
short int var232 /* : Bool */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Bool */;
val* var240 /* : nullable Bool */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
short int var249 /* : Bool */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : CString */;
val* var253 /* : String */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Bool */;
val* var257 /* : nullable Bool */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : CString */;
val* var261 /* : String */;
val* var262 /* : nullable Int */;
val* var263 /* : nullable Int */;
val* var264 /* : nullable Bool */;
val* var265 /* : nullable Bool */;
short int var266 /* : Bool */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : CString */;
val* var270 /* : String */;
val* var271 /* : nullable Int */;
val* var272 /* : nullable Int */;
val* var273 /* : nullable Bool */;
val* var274 /* : nullable Bool */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : CString */;
val* var278 /* : String */;
val* var279 /* : nullable Int */;
val* var280 /* : nullable Int */;
val* var281 /* : nullable Bool */;
val* var282 /* : nullable Bool */;
short int var283 /* : Bool */;
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
short int var300 /* : Bool */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : CString */;
val* var304 /* : String */;
val* var305 /* : nullable Int */;
val* var306 /* : nullable Int */;
val* var307 /* : nullable Bool */;
val* var308 /* : nullable Bool */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : CString */;
val* var312 /* : String */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Int */;
val* var315 /* : nullable Bool */;
val* var316 /* : nullable Bool */;
short int var317 /* : Bool */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : CString */;
val* var321 /* : String */;
val* var322 /* : nullable Int */;
val* var323 /* : nullable Int */;
val* var324 /* : nullable Bool */;
val* var325 /* : nullable Bool */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : CString */;
val* var329 /* : String */;
val* var330 /* : nullable Int */;
val* var331 /* : nullable Int */;
val* var332 /* : nullable Bool */;
val* var333 /* : nullable Bool */;
short int var334 /* : Bool */;
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
short int var351 /* : Bool */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : CString */;
val* var355 /* : String */;
val* var356 /* : nullable Int */;
val* var357 /* : nullable Int */;
val* var358 /* : nullable Bool */;
val* var359 /* : nullable Bool */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : CString */;
val* var363 /* : String */;
val* var364 /* : nullable Int */;
val* var365 /* : nullable Int */;
val* var366 /* : nullable Bool */;
val* var367 /* : nullable Bool */;
short int var368 /* : Bool */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : CString */;
val* var372 /* : String */;
val* var373 /* : nullable Int */;
val* var374 /* : nullable Int */;
val* var375 /* : nullable Bool */;
val* var376 /* : nullable Bool */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : CString */;
val* var380 /* : String */;
val* var381 /* : nullable Int */;
val* var382 /* : nullable Int */;
val* var383 /* : nullable Bool */;
val* var384 /* : nullable Bool */;
short int var385 /* : Bool */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : CString */;
val* var389 /* : String */;
val* var390 /* : nullable Int */;
val* var391 /* : nullable Int */;
val* var392 /* : nullable Bool */;
val* var393 /* : nullable Bool */;
val* var394 /* : SequenceRead[Char] */;
val* var395 /* : nullable Object */;
short int var396 /* : Bool */;
short int var398 /* : Bool */;
uint32_t var399 /* : Char */;
val* var401 /* : NativeArray[String] */;
static val* varonce400;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : CString */;
val* var405 /* : String */;
val* var406 /* : nullable Int */;
val* var407 /* : nullable Int */;
val* var408 /* : nullable Bool */;
val* var409 /* : nullable Bool */;
long var410 /* : Int */;
long var411 /* : Int */;
short int var413 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var414 /* : Int */;
val* var415 /* : Text */;
val* var416 /* : String */;
{
{ /* Inline model$MProperty$name (self) on <self:MMethod> */
var3 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MMethod> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_nit_name = var1;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "+";
var7 = (val*)(1l<<2|1);
var8 = (val*)(1l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
{
var11 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var4); /* == on <var_nit_name:String>*/
}
if (var11){
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "_plus";
var16 = (val*)(5l<<2|1);
var17 = (val*)(5l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
var = var13;
goto RET_LABEL;
} else {
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "-";
var24 = (val*)(1l<<2|1);
var25 = (val*)(1l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
{
var28 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var21); /* == on <var_nit_name:String>*/
}
if (var28){
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "_minus";
var33 = (val*)(6l<<2|1);
var34 = (val*)(6l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
var = var30;
goto RET_LABEL;
} else {
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "unary -";
var41 = (val*)(7l<<2|1);
var42 = (val*)(7l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
{
var45 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var38); /* == on <var_nit_name:String>*/
}
if (var45){
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "_unary_minus";
var50 = (val*)(12l<<2|1);
var51 = (val*)(12l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
var = var47;
goto RET_LABEL;
} else {
}
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "unary +";
var58 = (val*)(7l<<2|1);
var59 = (val*)(7l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
{
var62 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var55); /* == on <var_nit_name:String>*/
}
if (var62){
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "_unary_plus";
var67 = (val*)(11l<<2|1);
var68 = (val*)(11l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
var = var64;
goto RET_LABEL;
} else {
}
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "unary ~";
var75 = (val*)(7l<<2|1);
var76 = (val*)(7l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
{
var79 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var72); /* == on <var_nit_name:String>*/
}
if (var79){
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "_unary_tilde";
var84 = (val*)(12l<<2|1);
var85 = (val*)(12l<<2|1);
var86 = (val*)((long)(0)<<2|3);
var87 = (val*)((long)(0)<<2|3);
var83 = core__flat___CString___to_s_unsafe(var82, var84, var85, var86, var87);
var81 = var83;
varonce80 = var81;
}
var = var81;
goto RET_LABEL;
} else {
}
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "*";
var92 = (val*)(1l<<2|1);
var93 = (val*)(1l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
{
var96 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var89); /* == on <var_nit_name:String>*/
}
if (var96){
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "_star";
var101 = (val*)(5l<<2|1);
var102 = (val*)(5l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
var = var98;
goto RET_LABEL;
} else {
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "/";
var109 = (val*)(1l<<2|1);
var110 = (val*)(1l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
{
var113 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var106); /* == on <var_nit_name:String>*/
}
if (var113){
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "_slash";
var118 = (val*)(6l<<2|1);
var119 = (val*)(6l<<2|1);
var120 = (val*)((long)(0)<<2|3);
var121 = (val*)((long)(0)<<2|3);
var117 = core__flat___CString___to_s_unsafe(var116, var118, var119, var120, var121);
var115 = var117;
varonce114 = var115;
}
var = var115;
goto RET_LABEL;
} else {
}
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "%";
var126 = (val*)(1l<<2|1);
var127 = (val*)(1l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
{
var130 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var123); /* == on <var_nit_name:String>*/
}
if (var130){
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "_percent";
var135 = (val*)(8l<<2|1);
var136 = (val*)(8l<<2|1);
var137 = (val*)((long)(0)<<2|3);
var138 = (val*)((long)(0)<<2|3);
var134 = core__flat___CString___to_s_unsafe(var133, var135, var136, var137, var138);
var132 = var134;
varonce131 = var132;
}
var = var132;
goto RET_LABEL;
} else {
}
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "[]";
var143 = (val*)(2l<<2|1);
var144 = (val*)(2l<<2|1);
var145 = (val*)((long)(0)<<2|3);
var146 = (val*)((long)(0)<<2|3);
var142 = core__flat___CString___to_s_unsafe(var141, var143, var144, var145, var146);
var140 = var142;
varonce139 = var140;
}
{
var147 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var140); /* == on <var_nit_name:String>*/
}
if (var147){
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "_index";
var152 = (val*)(6l<<2|1);
var153 = (val*)(6l<<2|1);
var154 = (val*)((long)(0)<<2|3);
var155 = (val*)((long)(0)<<2|3);
var151 = core__flat___CString___to_s_unsafe(var150, var152, var153, var154, var155);
var149 = var151;
varonce148 = var149;
}
var = var149;
goto RET_LABEL;
} else {
}
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "[]=";
var160 = (val*)(3l<<2|1);
var161 = (val*)(3l<<2|1);
var162 = (val*)((long)(0)<<2|3);
var163 = (val*)((long)(0)<<2|3);
var159 = core__flat___CString___to_s_unsafe(var158, var160, var161, var162, var163);
var157 = var159;
varonce156 = var157;
}
{
var164 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var157); /* == on <var_nit_name:String>*/
}
if (var164){
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "_index_assign";
var169 = (val*)(13l<<2|1);
var170 = (val*)(13l<<2|1);
var171 = (val*)((long)(0)<<2|3);
var172 = (val*)((long)(0)<<2|3);
var168 = core__flat___CString___to_s_unsafe(var167, var169, var170, var171, var172);
var166 = var168;
varonce165 = var166;
}
var = var166;
goto RET_LABEL;
} else {
}
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "==";
var177 = (val*)(2l<<2|1);
var178 = (val*)(2l<<2|1);
var179 = (val*)((long)(0)<<2|3);
var180 = (val*)((long)(0)<<2|3);
var176 = core__flat___CString___to_s_unsafe(var175, var177, var178, var179, var180);
var174 = var176;
varonce173 = var174;
}
{
var181 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var174); /* == on <var_nit_name:String>*/
}
if (var181){
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = "_equal";
var186 = (val*)(6l<<2|1);
var187 = (val*)(6l<<2|1);
var188 = (val*)((long)(0)<<2|3);
var189 = (val*)((long)(0)<<2|3);
var185 = core__flat___CString___to_s_unsafe(var184, var186, var187, var188, var189);
var183 = var185;
varonce182 = var183;
}
var = var183;
goto RET_LABEL;
} else {
}
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = "<";
var194 = (val*)(1l<<2|1);
var195 = (val*)(1l<<2|1);
var196 = (val*)((long)(0)<<2|3);
var197 = (val*)((long)(0)<<2|3);
var193 = core__flat___CString___to_s_unsafe(var192, var194, var195, var196, var197);
var191 = var193;
varonce190 = var191;
}
{
var198 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var191); /* == on <var_nit_name:String>*/
}
if (var198){
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "_less";
var203 = (val*)(5l<<2|1);
var204 = (val*)(5l<<2|1);
var205 = (val*)((long)(0)<<2|3);
var206 = (val*)((long)(0)<<2|3);
var202 = core__flat___CString___to_s_unsafe(var201, var203, var204, var205, var206);
var200 = var202;
varonce199 = var200;
}
var = var200;
goto RET_LABEL;
} else {
}
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = ">";
var211 = (val*)(1l<<2|1);
var212 = (val*)(1l<<2|1);
var213 = (val*)((long)(0)<<2|3);
var214 = (val*)((long)(0)<<2|3);
var210 = core__flat___CString___to_s_unsafe(var209, var211, var212, var213, var214);
var208 = var210;
varonce207 = var208;
}
{
var215 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var208); /* == on <var_nit_name:String>*/
}
if (var215){
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "_greater";
var220 = (val*)(8l<<2|1);
var221 = (val*)(8l<<2|1);
var222 = (val*)((long)(0)<<2|3);
var223 = (val*)((long)(0)<<2|3);
var219 = core__flat___CString___to_s_unsafe(var218, var220, var221, var222, var223);
var217 = var219;
varonce216 = var217;
}
var = var217;
goto RET_LABEL;
} else {
}
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = "<=";
var228 = (val*)(2l<<2|1);
var229 = (val*)(2l<<2|1);
var230 = (val*)((long)(0)<<2|3);
var231 = (val*)((long)(0)<<2|3);
var227 = core__flat___CString___to_s_unsafe(var226, var228, var229, var230, var231);
var225 = var227;
varonce224 = var225;
}
{
var232 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var225); /* == on <var_nit_name:String>*/
}
if (var232){
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "_less_or_equal";
var237 = (val*)(14l<<2|1);
var238 = (val*)(14l<<2|1);
var239 = (val*)((long)(0)<<2|3);
var240 = (val*)((long)(0)<<2|3);
var236 = core__flat___CString___to_s_unsafe(var235, var237, var238, var239, var240);
var234 = var236;
varonce233 = var234;
}
var = var234;
goto RET_LABEL;
} else {
}
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = ">=";
var245 = (val*)(2l<<2|1);
var246 = (val*)(2l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
{
var249 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var242); /* == on <var_nit_name:String>*/
}
if (var249){
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "_greater_or_equal";
var254 = (val*)(17l<<2|1);
var255 = (val*)(17l<<2|1);
var256 = (val*)((long)(0)<<2|3);
var257 = (val*)((long)(0)<<2|3);
var253 = core__flat___CString___to_s_unsafe(var252, var254, var255, var256, var257);
var251 = var253;
varonce250 = var251;
}
var = var251;
goto RET_LABEL;
} else {
}
if (likely(varonce258!=NULL)) {
var259 = varonce258;
} else {
var260 = "!=";
var262 = (val*)(2l<<2|1);
var263 = (val*)(2l<<2|1);
var264 = (val*)((long)(0)<<2|3);
var265 = (val*)((long)(0)<<2|3);
var261 = core__flat___CString___to_s_unsafe(var260, var262, var263, var264, var265);
var259 = var261;
varonce258 = var259;
}
{
var266 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var259); /* == on <var_nit_name:String>*/
}
if (var266){
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = "_not_equal";
var271 = (val*)(10l<<2|1);
var272 = (val*)(10l<<2|1);
var273 = (val*)((long)(0)<<2|3);
var274 = (val*)((long)(0)<<2|3);
var270 = core__flat___CString___to_s_unsafe(var269, var271, var272, var273, var274);
var268 = var270;
varonce267 = var268;
}
var = var268;
goto RET_LABEL;
} else {
}
if (likely(varonce275!=NULL)) {
var276 = varonce275;
} else {
var277 = "<<";
var279 = (val*)(2l<<2|1);
var280 = (val*)(2l<<2|1);
var281 = (val*)((long)(0)<<2|3);
var282 = (val*)((long)(0)<<2|3);
var278 = core__flat___CString___to_s_unsafe(var277, var279, var280, var281, var282);
var276 = var278;
varonce275 = var276;
}
{
var283 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var276); /* == on <var_nit_name:String>*/
}
if (var283){
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = "_left";
var288 = (val*)(5l<<2|1);
var289 = (val*)(5l<<2|1);
var290 = (val*)((long)(0)<<2|3);
var291 = (val*)((long)(0)<<2|3);
var287 = core__flat___CString___to_s_unsafe(var286, var288, var289, var290, var291);
var285 = var287;
varonce284 = var285;
}
var = var285;
goto RET_LABEL;
} else {
}
if (likely(varonce292!=NULL)) {
var293 = varonce292;
} else {
var294 = ">>";
var296 = (val*)(2l<<2|1);
var297 = (val*)(2l<<2|1);
var298 = (val*)((long)(0)<<2|3);
var299 = (val*)((long)(0)<<2|3);
var295 = core__flat___CString___to_s_unsafe(var294, var296, var297, var298, var299);
var293 = var295;
varonce292 = var293;
}
{
var300 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var293); /* == on <var_nit_name:String>*/
}
if (var300){
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = "_right";
var305 = (val*)(6l<<2|1);
var306 = (val*)(6l<<2|1);
var307 = (val*)((long)(0)<<2|3);
var308 = (val*)((long)(0)<<2|3);
var304 = core__flat___CString___to_s_unsafe(var303, var305, var306, var307, var308);
var302 = var304;
varonce301 = var302;
}
var = var302;
goto RET_LABEL;
} else {
}
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = "<=>";
var313 = (val*)(3l<<2|1);
var314 = (val*)(3l<<2|1);
var315 = (val*)((long)(0)<<2|3);
var316 = (val*)((long)(0)<<2|3);
var312 = core__flat___CString___to_s_unsafe(var311, var313, var314, var315, var316);
var310 = var312;
varonce309 = var310;
}
{
var317 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var310); /* == on <var_nit_name:String>*/
}
if (var317){
if (likely(varonce318!=NULL)) {
var319 = varonce318;
} else {
var320 = "_starship";
var322 = (val*)(9l<<2|1);
var323 = (val*)(9l<<2|1);
var324 = (val*)((long)(0)<<2|3);
var325 = (val*)((long)(0)<<2|3);
var321 = core__flat___CString___to_s_unsafe(var320, var322, var323, var324, var325);
var319 = var321;
varonce318 = var319;
}
var = var319;
goto RET_LABEL;
} else {
}
if (likely(varonce326!=NULL)) {
var327 = varonce326;
} else {
var328 = "|";
var330 = (val*)(1l<<2|1);
var331 = (val*)(1l<<2|1);
var332 = (val*)((long)(0)<<2|3);
var333 = (val*)((long)(0)<<2|3);
var329 = core__flat___CString___to_s_unsafe(var328, var330, var331, var332, var333);
var327 = var329;
varonce326 = var327;
}
{
var334 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var327); /* == on <var_nit_name:String>*/
}
if (var334){
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = "_pipe";
var339 = (val*)(5l<<2|1);
var340 = (val*)(5l<<2|1);
var341 = (val*)((long)(0)<<2|3);
var342 = (val*)((long)(0)<<2|3);
var338 = core__flat___CString___to_s_unsafe(var337, var339, var340, var341, var342);
var336 = var338;
varonce335 = var336;
}
var = var336;
goto RET_LABEL;
} else {
}
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = "^";
var347 = (val*)(1l<<2|1);
var348 = (val*)(1l<<2|1);
var349 = (val*)((long)(0)<<2|3);
var350 = (val*)((long)(0)<<2|3);
var346 = core__flat___CString___to_s_unsafe(var345, var347, var348, var349, var350);
var344 = var346;
varonce343 = var344;
}
{
var351 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var344); /* == on <var_nit_name:String>*/
}
if (var351){
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = "_caret";
var356 = (val*)(6l<<2|1);
var357 = (val*)(6l<<2|1);
var358 = (val*)((long)(0)<<2|3);
var359 = (val*)((long)(0)<<2|3);
var355 = core__flat___CString___to_s_unsafe(var354, var356, var357, var358, var359);
var353 = var355;
varonce352 = var353;
}
var = var353;
goto RET_LABEL;
} else {
}
if (likely(varonce360!=NULL)) {
var361 = varonce360;
} else {
var362 = "&";
var364 = (val*)(1l<<2|1);
var365 = (val*)(1l<<2|1);
var366 = (val*)((long)(0)<<2|3);
var367 = (val*)((long)(0)<<2|3);
var363 = core__flat___CString___to_s_unsafe(var362, var364, var365, var366, var367);
var361 = var363;
varonce360 = var361;
}
{
var368 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var361); /* == on <var_nit_name:String>*/
}
if (var368){
if (likely(varonce369!=NULL)) {
var370 = varonce369;
} else {
var371 = "_amp";
var373 = (val*)(4l<<2|1);
var374 = (val*)(4l<<2|1);
var375 = (val*)((long)(0)<<2|3);
var376 = (val*)((long)(0)<<2|3);
var372 = core__flat___CString___to_s_unsafe(var371, var373, var374, var375, var376);
var370 = var372;
varonce369 = var370;
}
var = var370;
goto RET_LABEL;
} else {
}
if (likely(varonce377!=NULL)) {
var378 = varonce377;
} else {
var379 = "~";
var381 = (val*)(1l<<2|1);
var382 = (val*)(1l<<2|1);
var383 = (val*)((long)(0)<<2|3);
var384 = (val*)((long)(0)<<2|3);
var380 = core__flat___CString___to_s_unsafe(var379, var381, var382, var383, var384);
var378 = var380;
varonce377 = var378;
}
{
var385 = ((short int(*)(val* self, val* p0))(var_nit_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_name, var378); /* == on <var_nit_name:String>*/
}
if (var385){
if (likely(varonce386!=NULL)) {
var387 = varonce386;
} else {
var388 = "_tilde";
var390 = (val*)(6l<<2|1);
var391 = (val*)(6l<<2|1);
var392 = (val*)((long)(0)<<2|3);
var393 = (val*)((long)(0)<<2|3);
var389 = core__flat___CString___to_s_unsafe(var388, var390, var391, var392, var393);
var387 = var389;
varonce386 = var387;
}
var = var387;
goto RET_LABEL;
} else {
}
{
var394 = ((val*(*)(val* self))(var_nit_name->class->vft[COLOR_core__abstract_text__Text__chars]))(var_nit_name); /* chars on <var_nit_name:String>*/
}
{
var395 = ((val*(*)(val* self))((((long)var394&3)?class_info[((long)var394&3)]:var394->class)->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var394); /* last on <var394:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var395,'=') on <var395:nullable Object(Char)> */
var399 = (uint32_t)((long)(var395)>>2);
var398 = var399 == '=';
var396 = var398;
goto RET_LABEL397;
RET_LABEL397:(void)0;
}
}
if (var396){
if (unlikely(varonce400==NULL)) {
var401 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce402!=NULL)) {
var403 = varonce402;
} else {
var404 = "__assign";
var406 = (val*)(8l<<2|1);
var407 = (val*)(8l<<2|1);
var408 = (val*)((long)(0)<<2|3);
var409 = (val*)((long)(0)<<2|3);
var405 = core__flat___CString___to_s_unsafe(var404, var406, var407, var408, var409);
var403 = var405;
varonce402 = var403;
}
((struct instance_core__NativeArray*)var401)->values[1]=var403;
} else {
var401 = varonce400;
varonce400 = NULL;
}
{
var410 = ((long(*)(val* self))(var_nit_name->class->vft[COLOR_core__abstract_text__Text__length]))(var_nit_name); /* length on <var_nit_name:String>*/
}
{
{ /* Inline kernel$Int$- (var410,1l) on <var410:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var413 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var413)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var414 = var410 - 1l;
var411 = var414;
goto RET_LABEL412;
RET_LABEL412:(void)0;
}
}
{
var415 = ((val*(*)(val* self, long p0, long p1))(var_nit_name->class->vft[COLOR_core__abstract_text__Text__substring]))(var_nit_name, 0l, var411); /* substring on <var_nit_name:String>*/
}
((struct instance_core__NativeArray*)var401)->values[0]=var415;
{
var416 = ((val*(*)(val* self))(var401->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var401); /* native_to_s on <var401:NativeArray[String]>*/
}
varonce400 = var401;
var = var416;
goto RET_LABEL;
} else {
}
var = var_nit_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MType$cname for (self: MType): String */
val* nitc__nitni_base___MType___cname(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_base__MType__cname_normal_class]))(self); /* cname_normal_class on <self:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MType$cname_blind for (self: MType): String */
val* nitc__nitni_base___MType___cname_blind(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "struct nitni_instance *";
var4 = (val*)(23l<<2|1);
var5 = (val*)(23l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MType$mangled_cname for (self: MType): String */
val* nitc__nitni_base___MType___mangled_cname(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "mangled_cname", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_base, 76);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method nitni_base$MType$is_cprimitive for (self: MType): Bool */
short int nitc__nitni_base___MType___is_cprimitive(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MType$cname_normal_class for (self: MType): String */
val* nitc__nitni_base___MType___cname_normal_class(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(self); /* mangled_cname on <self:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MClassType$cname for (self: MClassType): String */
val* nitc__nitni_base___MClassType___MType__cname(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
val* var_name /* var name: String */;
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
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
short int var31 /* : Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
short int var48 /* : Bool */;
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
short int var65 /* : Bool */;
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
short int var82 /* : Bool */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Bool */;
val* var98 /* : nullable Bool */;
short int var99 /* : Bool */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Bool */;
val* var107 /* : nullable Bool */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Bool */;
val* var115 /* : nullable Bool */;
short int var116 /* : Bool */;
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
short int var133 /* : Bool */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Bool */;
val* var149 /* : nullable Bool */;
short int var150 /* : Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : CString */;
val* var154 /* : String */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Bool */;
val* var158 /* : nullable Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Bool */;
val* var166 /* : nullable Bool */;
short int var167 /* : Bool */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Bool */;
val* var175 /* : nullable Bool */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Bool */;
val* var183 /* : nullable Bool */;
short int var184 /* : Bool */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable Bool */;
val* var193 /* : MClass */;
val* var195 /* : MClass */;
val* var196 /* : MClassKind */;
val* var198 /* : MClassKind */;
val* var199 /* : Sys */;
val* var200 /* : MClassKind */;
short int var201 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
val* var206 /* : MClass */;
val* var208 /* : MClass */;
val* var209 /* : nullable String */;
val* var_ctype /* var ctype: nullable String */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
val* var_other213 /* var other: nullable Object */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
val* var216 /* : String */;
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
var_name = var4;
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "Bool";
var10 = (val*)(4l<<2|1);
var11 = (val*)(4l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce = var7;
}
{
var14 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var7); /* == on <var_name:String>*/
}
if (var14){
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "int";
var19 = (val*)(3l<<2|1);
var20 = (val*)(3l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
var = var16;
goto RET_LABEL;
} else {
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Char";
var27 = (val*)(4l<<2|1);
var28 = (val*)(4l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
{
var31 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var24); /* == on <var_name:String>*/
}
if (var31){
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "uint32_t";
var36 = (val*)(8l<<2|1);
var37 = (val*)(8l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
var = var33;
goto RET_LABEL;
} else {
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Float";
var44 = (val*)(5l<<2|1);
var45 = (val*)(5l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
{
var48 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var41); /* == on <var_name:String>*/
}
if (var48){
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "double";
var53 = (val*)(6l<<2|1);
var54 = (val*)(6l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
var = var50;
goto RET_LABEL;
} else {
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "Int";
var61 = (val*)(3l<<2|1);
var62 = (val*)(3l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
{
var65 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var58); /* == on <var_name:String>*/
}
if (var65){
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "long";
var70 = (val*)(4l<<2|1);
var71 = (val*)(4l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
var = var67;
goto RET_LABEL;
} else {
}
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "Byte";
var78 = (val*)(4l<<2|1);
var79 = (val*)(4l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
{
var82 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var75); /* == on <var_name:String>*/
}
if (var82){
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "unsigned char";
var87 = (val*)(13l<<2|1);
var88 = (val*)(13l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
var = var84;
goto RET_LABEL;
} else {
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "Int8";
var95 = (val*)(4l<<2|1);
var96 = (val*)(4l<<2|1);
var97 = (val*)((long)(0)<<2|3);
var98 = (val*)((long)(0)<<2|3);
var94 = core__flat___CString___to_s_unsafe(var93, var95, var96, var97, var98);
var92 = var94;
varonce91 = var92;
}
{
var99 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var92); /* == on <var_name:String>*/
}
if (var99){
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "int8_t";
var104 = (val*)(6l<<2|1);
var105 = (val*)(6l<<2|1);
var106 = (val*)((long)(0)<<2|3);
var107 = (val*)((long)(0)<<2|3);
var103 = core__flat___CString___to_s_unsafe(var102, var104, var105, var106, var107);
var101 = var103;
varonce100 = var101;
}
var = var101;
goto RET_LABEL;
} else {
}
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "Int16";
var112 = (val*)(5l<<2|1);
var113 = (val*)(5l<<2|1);
var114 = (val*)((long)(0)<<2|3);
var115 = (val*)((long)(0)<<2|3);
var111 = core__flat___CString___to_s_unsafe(var110, var112, var113, var114, var115);
var109 = var111;
varonce108 = var109;
}
{
var116 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var109); /* == on <var_name:String>*/
}
if (var116){
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "int16_t";
var121 = (val*)(7l<<2|1);
var122 = (val*)(7l<<2|1);
var123 = (val*)((long)(0)<<2|3);
var124 = (val*)((long)(0)<<2|3);
var120 = core__flat___CString___to_s_unsafe(var119, var121, var122, var123, var124);
var118 = var120;
varonce117 = var118;
}
var = var118;
goto RET_LABEL;
} else {
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "UInt16";
var129 = (val*)(6l<<2|1);
var130 = (val*)(6l<<2|1);
var131 = (val*)((long)(0)<<2|3);
var132 = (val*)((long)(0)<<2|3);
var128 = core__flat___CString___to_s_unsafe(var127, var129, var130, var131, var132);
var126 = var128;
varonce125 = var126;
}
{
var133 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var126); /* == on <var_name:String>*/
}
if (var133){
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "uint16_t";
var138 = (val*)(8l<<2|1);
var139 = (val*)(8l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
var = var135;
goto RET_LABEL;
} else {
}
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "Int32";
var146 = (val*)(5l<<2|1);
var147 = (val*)(5l<<2|1);
var148 = (val*)((long)(0)<<2|3);
var149 = (val*)((long)(0)<<2|3);
var145 = core__flat___CString___to_s_unsafe(var144, var146, var147, var148, var149);
var143 = var145;
varonce142 = var143;
}
{
var150 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var143); /* == on <var_name:String>*/
}
if (var150){
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "int32_t";
var155 = (val*)(7l<<2|1);
var156 = (val*)(7l<<2|1);
var157 = (val*)((long)(0)<<2|3);
var158 = (val*)((long)(0)<<2|3);
var154 = core__flat___CString___to_s_unsafe(var153, var155, var156, var157, var158);
var152 = var154;
varonce151 = var152;
}
var = var152;
goto RET_LABEL;
} else {
}
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "UInt32";
var163 = (val*)(6l<<2|1);
var164 = (val*)(6l<<2|1);
var165 = (val*)((long)(0)<<2|3);
var166 = (val*)((long)(0)<<2|3);
var162 = core__flat___CString___to_s_unsafe(var161, var163, var164, var165, var166);
var160 = var162;
varonce159 = var160;
}
{
var167 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var160); /* == on <var_name:String>*/
}
if (var167){
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "uint32_t";
var172 = (val*)(8l<<2|1);
var173 = (val*)(8l<<2|1);
var174 = (val*)((long)(0)<<2|3);
var175 = (val*)((long)(0)<<2|3);
var171 = core__flat___CString___to_s_unsafe(var170, var172, var173, var174, var175);
var169 = var171;
varonce168 = var169;
}
var = var169;
goto RET_LABEL;
} else {
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "CString";
var180 = (val*)(7l<<2|1);
var181 = (val*)(7l<<2|1);
var182 = (val*)((long)(0)<<2|3);
var183 = (val*)((long)(0)<<2|3);
var179 = core__flat___CString___to_s_unsafe(var178, var180, var181, var182, var183);
var177 = var179;
varonce176 = var177;
}
{
var184 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var177); /* == on <var_name:String>*/
}
if (var184){
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "char*";
var189 = (val*)(5l<<2|1);
var190 = (val*)(5l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
var = var186;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var195 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var195 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var193) on <var193:MClass> */
var198 = var193->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var193:MClass> */
if (unlikely(var198 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
var199 = glob_sys;
{
var200 = nitc__model___core__Sys___extern_kind(var199);
}
{
{ /* Inline kernel$Object$== (var196,var200) on <var196:MClassKind> */
var_other = var200;
{
{ /* Inline kernel$Object$is_same_instance (var196,var_other) on <var196:MClassKind> */
var205 = var196 == var_other;
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
}
var201 = var203;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
}
if (var201){
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var208 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var208 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var206 = var208;
RET_LABEL207:(void)0;
}
}
{
var209 = nitc__extern_classes___MClass___ctype(var206);
}
var_ctype = var209;
if (var_ctype == NULL) {
var210 = 0; /* is null */
} else {
var210 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ctype,((val*)NULL)) on <var_ctype:nullable String> */
var_other213 = ((val*)NULL);
{
var214 = ((short int(*)(val* self, val* p0))(var_ctype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ctype, var_other213); /* == on <var_ctype:nullable String(String)>*/
}
var215 = !var214;
var211 = var215;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
var210 = var211;
}
if (unlikely(!var210)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_base, 108);
fatal_exit(1);
}
var = var_ctype;
goto RET_LABEL;
} else {
}
{
var216 = nitc__light_only___MClassType___nitc__nitni_base__MType__cname_normal_class(self);
}
var = var216;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MClassType$cname_blind for (self: MClassType): String */
val* nitc__nitni_base___MClassType___MType__cname_blind(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
val* var_name /* var name: String */;
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
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
short int var31 /* : Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
short int var48 /* : Bool */;
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
short int var65 /* : Bool */;
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
short int var82 /* : Bool */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Bool */;
val* var98 /* : nullable Bool */;
short int var99 /* : Bool */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Bool */;
val* var107 /* : nullable Bool */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Bool */;
val* var115 /* : nullable Bool */;
short int var116 /* : Bool */;
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
short int var133 /* : Bool */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Bool */;
val* var149 /* : nullable Bool */;
short int var150 /* : Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : CString */;
val* var154 /* : String */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Bool */;
val* var158 /* : nullable Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Bool */;
val* var166 /* : nullable Bool */;
short int var167 /* : Bool */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Bool */;
val* var175 /* : nullable Bool */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Bool */;
val* var183 /* : nullable Bool */;
short int var184 /* : Bool */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable Bool */;
val* var193 /* : MClass */;
val* var195 /* : MClass */;
val* var196 /* : MClassKind */;
val* var198 /* : MClassKind */;
val* var199 /* : Sys */;
val* var200 /* : MClassKind */;
short int var201 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : CString */;
val* var209 /* : String */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Int */;
val* var212 /* : nullable Bool */;
val* var213 /* : nullable Bool */;
val* var214 /* : String */;
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
var_name = var4;
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "Bool";
var10 = (val*)(4l<<2|1);
var11 = (val*)(4l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce = var7;
}
{
var14 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var7); /* == on <var_name:String>*/
}
if (var14){
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "int";
var19 = (val*)(3l<<2|1);
var20 = (val*)(3l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
var = var16;
goto RET_LABEL;
} else {
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Char";
var27 = (val*)(4l<<2|1);
var28 = (val*)(4l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
{
var31 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var24); /* == on <var_name:String>*/
}
if (var31){
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "uint32_t";
var36 = (val*)(8l<<2|1);
var37 = (val*)(8l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
var = var33;
goto RET_LABEL;
} else {
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Float";
var44 = (val*)(5l<<2|1);
var45 = (val*)(5l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
{
var48 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var41); /* == on <var_name:String>*/
}
if (var48){
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "double";
var53 = (val*)(6l<<2|1);
var54 = (val*)(6l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
var = var50;
goto RET_LABEL;
} else {
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "Int";
var61 = (val*)(3l<<2|1);
var62 = (val*)(3l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
{
var65 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var58); /* == on <var_name:String>*/
}
if (var65){
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "long";
var70 = (val*)(4l<<2|1);
var71 = (val*)(4l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
var = var67;
goto RET_LABEL;
} else {
}
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "Byte";
var78 = (val*)(4l<<2|1);
var79 = (val*)(4l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
{
var82 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var75); /* == on <var_name:String>*/
}
if (var82){
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "unsigned char";
var87 = (val*)(13l<<2|1);
var88 = (val*)(13l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
var = var84;
goto RET_LABEL;
} else {
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "Int8";
var95 = (val*)(4l<<2|1);
var96 = (val*)(4l<<2|1);
var97 = (val*)((long)(0)<<2|3);
var98 = (val*)((long)(0)<<2|3);
var94 = core__flat___CString___to_s_unsafe(var93, var95, var96, var97, var98);
var92 = var94;
varonce91 = var92;
}
{
var99 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var92); /* == on <var_name:String>*/
}
if (var99){
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "int8_t";
var104 = (val*)(6l<<2|1);
var105 = (val*)(6l<<2|1);
var106 = (val*)((long)(0)<<2|3);
var107 = (val*)((long)(0)<<2|3);
var103 = core__flat___CString___to_s_unsafe(var102, var104, var105, var106, var107);
var101 = var103;
varonce100 = var101;
}
var = var101;
goto RET_LABEL;
} else {
}
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "Int16";
var112 = (val*)(5l<<2|1);
var113 = (val*)(5l<<2|1);
var114 = (val*)((long)(0)<<2|3);
var115 = (val*)((long)(0)<<2|3);
var111 = core__flat___CString___to_s_unsafe(var110, var112, var113, var114, var115);
var109 = var111;
varonce108 = var109;
}
{
var116 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var109); /* == on <var_name:String>*/
}
if (var116){
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "int16_t";
var121 = (val*)(7l<<2|1);
var122 = (val*)(7l<<2|1);
var123 = (val*)((long)(0)<<2|3);
var124 = (val*)((long)(0)<<2|3);
var120 = core__flat___CString___to_s_unsafe(var119, var121, var122, var123, var124);
var118 = var120;
varonce117 = var118;
}
var = var118;
goto RET_LABEL;
} else {
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "UInt16";
var129 = (val*)(6l<<2|1);
var130 = (val*)(6l<<2|1);
var131 = (val*)((long)(0)<<2|3);
var132 = (val*)((long)(0)<<2|3);
var128 = core__flat___CString___to_s_unsafe(var127, var129, var130, var131, var132);
var126 = var128;
varonce125 = var126;
}
{
var133 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var126); /* == on <var_name:String>*/
}
if (var133){
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "uint16_t";
var138 = (val*)(8l<<2|1);
var139 = (val*)(8l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
var = var135;
goto RET_LABEL;
} else {
}
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "Int32";
var146 = (val*)(5l<<2|1);
var147 = (val*)(5l<<2|1);
var148 = (val*)((long)(0)<<2|3);
var149 = (val*)((long)(0)<<2|3);
var145 = core__flat___CString___to_s_unsafe(var144, var146, var147, var148, var149);
var143 = var145;
varonce142 = var143;
}
{
var150 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var143); /* == on <var_name:String>*/
}
if (var150){
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "int32_t";
var155 = (val*)(7l<<2|1);
var156 = (val*)(7l<<2|1);
var157 = (val*)((long)(0)<<2|3);
var158 = (val*)((long)(0)<<2|3);
var154 = core__flat___CString___to_s_unsafe(var153, var155, var156, var157, var158);
var152 = var154;
varonce151 = var152;
}
var = var152;
goto RET_LABEL;
} else {
}
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "UInt32";
var163 = (val*)(6l<<2|1);
var164 = (val*)(6l<<2|1);
var165 = (val*)((long)(0)<<2|3);
var166 = (val*)((long)(0)<<2|3);
var162 = core__flat___CString___to_s_unsafe(var161, var163, var164, var165, var166);
var160 = var162;
varonce159 = var160;
}
{
var167 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var160); /* == on <var_name:String>*/
}
if (var167){
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "uint32_t";
var172 = (val*)(8l<<2|1);
var173 = (val*)(8l<<2|1);
var174 = (val*)((long)(0)<<2|3);
var175 = (val*)((long)(0)<<2|3);
var171 = core__flat___CString___to_s_unsafe(var170, var172, var173, var174, var175);
var169 = var171;
varonce168 = var169;
}
var = var169;
goto RET_LABEL;
} else {
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "CString";
var180 = (val*)(7l<<2|1);
var181 = (val*)(7l<<2|1);
var182 = (val*)((long)(0)<<2|3);
var183 = (val*)((long)(0)<<2|3);
var179 = core__flat___CString___to_s_unsafe(var178, var180, var181, var182, var183);
var177 = var179;
varonce176 = var177;
}
{
var184 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var177); /* == on <var_name:String>*/
}
if (var184){
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "char*";
var189 = (val*)(5l<<2|1);
var190 = (val*)(5l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
var = var186;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var195 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var195 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var193) on <var193:MClass> */
var198 = var193->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var193:MClass> */
if (unlikely(var198 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
var199 = glob_sys;
{
var200 = nitc__model___core__Sys___extern_kind(var199);
}
{
{ /* Inline kernel$Object$== (var196,var200) on <var196:MClassKind> */
var_other = var200;
{
{ /* Inline kernel$Object$is_same_instance (var196,var_other) on <var196:MClassKind> */
var205 = var196 == var_other;
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
}
var201 = var203;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
}
if (var201){
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = "void*";
var210 = (val*)(5l<<2|1);
var211 = (val*)(5l<<2|1);
var212 = (val*)((long)(0)<<2|3);
var213 = (val*)((long)(0)<<2|3);
var209 = core__flat___CString___to_s_unsafe(var208, var210, var211, var212, var213);
var207 = var209;
varonce206 = var207;
}
var = var207;
goto RET_LABEL;
} else {
}
{
var214 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_base___MClassType___MType__cname_blind]))(self); /* cname_blind on <self:MClassType>*/
}
var = var214;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MClassType$mangled_cname for (self: MClassType): String */
val* nitc__nitni_base___MClassType___MType__mangled_cname(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
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
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MClassType$is_cprimitive for (self: MClassType): Bool */
short int nitc__nitni_base___MClassType___MType__is_cprimitive(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : MClass */;
val* var4 /* : MClass */;
val* var5 /* : MClassKind */;
val* var7 /* : MClassKind */;
val* var8 /* : Sys */;
val* var9 /* : MClassKind */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce;
static int varonce_guard;
val* var15 /* : Array[String] */;
val* var16 /* : Array[String] */;
val* var_17 /* var : Array[String] */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
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
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
val* var106 /* : MClass */;
val* var108 /* : MClass */;
val* var109 /* : String */;
val* var111 /* : String */;
short int var112 /* : Bool */;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var4 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var2) on <var2:MClass> */
var7 = var2->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var2:MClass> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = glob_sys;
{
var9 = nitc__model___core__Sys___extern_kind(var8);
}
{
{ /* Inline kernel$Object$== (var5,var9) on <var5:MClassKind> */
var_other = var9;
{
{ /* Inline kernel$Object$is_same_instance (var5,var_other) on <var5:MClassKind> */
var14 = var5 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ = var10;
if (var10){
var1 = var_;
} else {
if (likely(varonce_guard)) {
var15 = varonce;
} else {
var16 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var16, 11l); /* Direct call array$Array$with_capacity on <var16:Array[String]>*/
}
var_17 = var16;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "Bool";
var22 = (val*)(4l<<2|1);
var23 = (val*)(4l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var19); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Char";
var30 = (val*)(4l<<2|1);
var31 = (val*)(4l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var27); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Float";
var38 = (val*)(5l<<2|1);
var39 = (val*)(5l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var35); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Int";
var46 = (val*)(3l<<2|1);
var47 = (val*)(3l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var43); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "CString";
var54 = (val*)(7l<<2|1);
var55 = (val*)(7l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var51); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "Byte";
var62 = (val*)(4l<<2|1);
var63 = (val*)(4l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var59); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "Int8";
var70 = (val*)(4l<<2|1);
var71 = (val*)(4l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var67); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "Int16";
var78 = (val*)(5l<<2|1);
var79 = (val*)(5l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var75); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "UInt16";
var86 = (val*)(6l<<2|1);
var87 = (val*)(6l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var83); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "Int32";
var94 = (val*)(5l<<2|1);
var95 = (val*)(5l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var91); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "UInt32";
var102 = (val*)(6l<<2|1);
var103 = (val*)(6l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_17, var99); /* Direct call array$AbstractArray$push on <var_17:Array[String]>*/
}
var15 = var_17;
varonce = var15;
varonce_guard = 1;
}
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var108 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var108 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline model$MClass$name (var106) on <var106:MClass> */
var111 = var106->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var106:MClass> */
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
var112 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var15, var109);
}
var1 = var112;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MNullableType$mangled_cname for (self: MNullableType): String */
val* nitc__nitni_base___MNullableType___MType__mangled_cname(val* self) {
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
val* var10 /* : MType */;
val* var12 /* : MType */;
val* var13 /* : String */;
val* var14 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "nullable_";
var6 = (val*)(9l<<2|1);
var7 = (val*)(9l<<2|1);
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
{ /* Inline model$MProxyType$mtype (self) on <self:MNullableType> */
var12 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val*(*)(val* self))(var10->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var10); /* mangled_cname on <var10:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MFormalType$mangled_cname for (self: MFormalType): String */
val* nitc__nitni_base___MFormalType___MType__mangled_cname(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:MFormalType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_base$MGenericType$mangled_cname for (self: MGenericType): String */
val* nitc__nitni_base___MGenericType___MType__mangled_cname(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var_base /* var base: String */;
val* var2 /* : Array[String] */;
val* var_params /* var params: Array[String] */;
val* var3 /* : Array[MType] */;
val* var5 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var6 /* : IndexedIterator[nullable Object] */;
val* var_7 /* var : IndexedIterator[MType] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_arg /* var arg: MType */;
val* var10 /* : String */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : String */;
val* var29 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_base___MGenericType___MType__mangled_cname]))(self); /* mangled_cname on <self:MGenericType>*/
}
var_base = var1;
var2 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[String]>*/
}
var_params = var2;
{
{ /* Inline model$MGenericType$arguments (self) on <self:MGenericType> */
var5 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:IndexedIterator[MType]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:IndexedIterator[MType]>*/
}
var_arg = var9;
{
var10 = ((val*(*)(val* self))(var_arg->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_arg); /* mangled_cname on <var_arg:MType>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_params, var10); /* Direct call array$Array$add on <var_params:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:IndexedIterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:IndexedIterator[MType]>*/
}
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "_of_";
var16 = (val*)(4l<<2|1);
var17 = (val*)(4l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[1]=var13;
} else {
var11 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var11)->values[0]=var_base;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "_";
var24 = (val*)(1l<<2|1);
var25 = (val*)(1l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
{
var28 = core__abstract_text___Collection___join(var_params, var21, ((val*)NULL));
}
((struct instance_core__NativeArray*)var11)->values[2]=var28;
{
var29 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
var = var29;
goto RET_LABEL;
RET_LABEL:;
return var;
}
