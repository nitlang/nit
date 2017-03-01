#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler$AbstractCompiler$compile_header for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_header(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : CodeWriter */;
val* var12 /* : CodeWriter */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : CodeWriter */;
val* var23 /* : CodeWriter */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : CodeWriter */;
val* var34 /* : CodeWriter */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
val* var43 /* : CodeWriter */;
val* var45 /* : CodeWriter */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
val* var54 /* : CodeWriter */;
val* var56 /* : CodeWriter */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
val* var65 /* : CodeWriter */;
val* var67 /* : CodeWriter */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
val* var76 /* : CodeWriter */;
val* var78 /* : CodeWriter */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
val* var87 /* : CodeWriter */;
val* var89 /* : CodeWriter */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Bool */;
val* var97 /* : nullable Bool */;
val* var98 /* : CodeWriter */;
val* var100 /* : CodeWriter */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : CString */;
val* var104 /* : String */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Bool */;
val* var108 /* : nullable Bool */;
val* var109 /* : CodeWriter */;
val* var111 /* : CodeWriter */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Bool */;
val* var119 /* : nullable Bool */;
val* var120 /* : CodeWriter */;
val* var122 /* : CodeWriter */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : CString */;
val* var126 /* : String */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Bool */;
val* var130 /* : nullable Bool */;
val* var131 /* : CodeWriter */;
val* var133 /* : CodeWriter */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
val* var142 /* : CodeWriter */;
val* var144 /* : CodeWriter */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
val* var153 /* : CodeWriter */;
val* var155 /* : CodeWriter */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : CString */;
val* var159 /* : String */;
val* var160 /* : nullable Int */;
val* var161 /* : nullable Int */;
val* var162 /* : nullable Bool */;
val* var163 /* : nullable Bool */;
val* var164 /* : CodeWriter */;
val* var166 /* : CodeWriter */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
val* var175 /* : CodeWriter */;
val* var177 /* : CodeWriter */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Bool */;
val* var185 /* : nullable Bool */;
val* var186 /* : CodeWriter */;
val* var188 /* : CodeWriter */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : CString */;
val* var192 /* : String */;
val* var193 /* : nullable Int */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Bool */;
val* var196 /* : nullable Bool */;
val* var197 /* : CodeWriter */;
val* var199 /* : CodeWriter */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : CString */;
val* var203 /* : String */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Int */;
val* var206 /* : nullable Bool */;
val* var207 /* : nullable Bool */;
val* var208 /* : CodeWriter */;
val* var210 /* : CodeWriter */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : CString */;
val* var214 /* : String */;
val* var215 /* : nullable Int */;
val* var216 /* : nullable Int */;
val* var217 /* : nullable Bool */;
val* var218 /* : nullable Bool */;
val* var219 /* : CodeWriter */;
val* var221 /* : CodeWriter */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : CString */;
val* var225 /* : String */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Int */;
val* var228 /* : nullable Bool */;
val* var229 /* : nullable Bool */;
val* var230 /* : CodeWriter */;
val* var232 /* : CodeWriter */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Bool */;
val* var240 /* : nullable Bool */;
val* var241 /* : CodeWriter */;
val* var243 /* : CodeWriter */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : CString */;
val* var247 /* : String */;
val* var248 /* : nullable Int */;
val* var249 /* : nullable Int */;
val* var250 /* : nullable Bool */;
val* var251 /* : nullable Bool */;
val* var252 /* : CodeWriter */;
val* var254 /* : CodeWriter */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : CString */;
val* var258 /* : String */;
val* var259 /* : nullable Int */;
val* var260 /* : nullable Int */;
val* var261 /* : nullable Bool */;
val* var262 /* : nullable Bool */;
val* var263 /* : CodeWriter */;
val* var265 /* : CodeWriter */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : CString */;
val* var269 /* : String */;
val* var270 /* : nullable Int */;
val* var271 /* : nullable Int */;
val* var272 /* : nullable Bool */;
val* var273 /* : nullable Bool */;
val* var274 /* : CodeWriter */;
val* var276 /* : CodeWriter */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : CString */;
val* var280 /* : String */;
val* var281 /* : nullable Int */;
val* var282 /* : nullable Int */;
val* var283 /* : nullable Bool */;
val* var284 /* : nullable Bool */;
val* var285 /* : CodeWriter */;
val* var287 /* : CodeWriter */;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : CString */;
val* var291 /* : String */;
val* var292 /* : nullable Int */;
val* var293 /* : nullable Int */;
val* var294 /* : nullable Bool */;
val* var295 /* : nullable Bool */;
val* var296 /* : CodeWriter */;
val* var298 /* : CodeWriter */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : CString */;
val* var302 /* : String */;
val* var303 /* : nullable Int */;
val* var304 /* : nullable Int */;
val* var305 /* : nullable Bool */;
val* var306 /* : nullable Bool */;
val* var307 /* : CodeWriter */;
val* var309 /* : CodeWriter */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : CString */;
val* var313 /* : String */;
val* var314 /* : nullable Int */;
val* var315 /* : nullable Int */;
val* var316 /* : nullable Bool */;
val* var317 /* : nullable Bool */;
val* var318 /* : CodeWriter */;
val* var320 /* : CodeWriter */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : CString */;
val* var324 /* : String */;
val* var325 /* : nullable Int */;
val* var326 /* : nullable Int */;
val* var327 /* : nullable Bool */;
val* var328 /* : nullable Bool */;
val* var329 /* : CodeWriter */;
val* var331 /* : CodeWriter */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : CString */;
val* var335 /* : String */;
val* var336 /* : nullable Int */;
val* var337 /* : nullable Int */;
val* var338 /* : nullable Bool */;
val* var339 /* : nullable Bool */;
val* var340 /* : CodeWriter */;
val* var342 /* : CodeWriter */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : CString */;
val* var346 /* : String */;
val* var347 /* : nullable Int */;
val* var348 /* : nullable Int */;
val* var349 /* : nullable Bool */;
val* var350 /* : nullable Bool */;
val* var351 /* : CodeWriter */;
val* var353 /* : CodeWriter */;
static val* varonce354;
val* var355 /* : String */;
char* var356 /* : CString */;
val* var357 /* : String */;
val* var358 /* : nullable Int */;
val* var359 /* : nullable Int */;
val* var360 /* : nullable Bool */;
val* var361 /* : nullable Bool */;
val* var362 /* : CodeWriter */;
val* var364 /* : CodeWriter */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : CString */;
val* var368 /* : String */;
val* var369 /* : nullable Int */;
val* var370 /* : nullable Int */;
val* var371 /* : nullable Bool */;
val* var372 /* : nullable Bool */;
val* var373 /* : CodeWriter */;
val* var375 /* : CodeWriter */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : CString */;
val* var379 /* : String */;
val* var380 /* : nullable Int */;
val* var381 /* : nullable Int */;
val* var382 /* : nullable Bool */;
val* var383 /* : nullable Bool */;
val* var384 /* : CodeWriter */;
val* var386 /* : CodeWriter */;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : CString */;
val* var390 /* : String */;
val* var391 /* : nullable Int */;
val* var392 /* : nullable Int */;
val* var393 /* : nullable Bool */;
val* var394 /* : nullable Bool */;
val* var395 /* : ModelBuilder */;
val* var397 /* : ModelBuilder */;
val* var398 /* : ToolContext */;
val* var400 /* : ToolContext */;
val* var401 /* : OptionArray */;
val* var403 /* : OptionArray */;
val* var404 /* : nullable Object */;
val* var406 /* : nullable Object */;
val* var_gccd_disable /* var gccd_disable: Array[String] */;
short int var407 /* : Bool */;
static val* varonce408;
val* var409 /* : String */;
char* var410 /* : CString */;
val* var411 /* : String */;
val* var412 /* : nullable Int */;
val* var413 /* : nullable Int */;
val* var414 /* : nullable Bool */;
val* var415 /* : nullable Bool */;
short int var416 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : CString */;
val* var420 /* : String */;
val* var421 /* : nullable Int */;
val* var422 /* : nullable Int */;
val* var423 /* : nullable Bool */;
val* var424 /* : nullable Bool */;
short int var425 /* : Bool */;
val* var426 /* : CodeWriter */;
val* var428 /* : CodeWriter */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : CString */;
val* var432 /* : String */;
val* var433 /* : nullable Int */;
val* var434 /* : nullable Int */;
val* var435 /* : nullable Bool */;
val* var436 /* : nullable Bool */;
val* var437 /* : CodeWriter */;
val* var439 /* : CodeWriter */;
static val* varonce440;
val* var441 /* : String */;
char* var442 /* : CString */;
val* var443 /* : String */;
val* var444 /* : nullable Int */;
val* var445 /* : nullable Int */;
val* var446 /* : nullable Bool */;
val* var447 /* : nullable Bool */;
short int var448 /* : Bool */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : CString */;
val* var452 /* : String */;
val* var453 /* : nullable Int */;
val* var454 /* : nullable Int */;
val* var455 /* : nullable Bool */;
val* var456 /* : nullable Bool */;
short int var457 /* : Bool */;
short int var_458 /* var : Bool */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : CString */;
val* var462 /* : String */;
val* var463 /* : nullable Int */;
val* var464 /* : nullable Int */;
val* var465 /* : nullable Bool */;
val* var466 /* : nullable Bool */;
short int var467 /* : Bool */;
val* var468 /* : CodeWriter */;
val* var470 /* : CodeWriter */;
static val* varonce471;
val* var472 /* : String */;
char* var473 /* : CString */;
val* var474 /* : String */;
val* var475 /* : nullable Int */;
val* var476 /* : nullable Int */;
val* var477 /* : nullable Bool */;
val* var478 /* : nullable Bool */;
val* var479 /* : CodeWriter */;
val* var481 /* : CodeWriter */;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : CString */;
val* var485 /* : String */;
val* var486 /* : nullable Int */;
val* var487 /* : nullable Int */;
val* var488 /* : nullable Bool */;
val* var489 /* : nullable Bool */;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : CString */;
val* var493 /* : String */;
val* var494 /* : nullable Int */;
val* var495 /* : nullable Int */;
val* var496 /* : nullable Bool */;
val* var497 /* : nullable Bool */;
short int var498 /* : Bool */;
val* var499 /* : CodeWriter */;
val* var501 /* : CodeWriter */;
static val* varonce502;
val* var503 /* : String */;
char* var504 /* : CString */;
val* var505 /* : String */;
val* var506 /* : nullable Int */;
val* var507 /* : nullable Int */;
val* var508 /* : nullable Bool */;
val* var509 /* : nullable Bool */;
val* var510 /* : CodeWriter */;
val* var512 /* : CodeWriter */;
static val* varonce513;
val* var514 /* : String */;
char* var515 /* : CString */;
val* var516 /* : String */;
val* var517 /* : nullable Int */;
val* var518 /* : nullable Int */;
val* var519 /* : nullable Bool */;
val* var520 /* : nullable Bool */;
val* var521 /* : CodeWriter */;
val* var523 /* : CodeWriter */;
static val* varonce524;
val* var525 /* : String */;
char* var526 /* : CString */;
val* var527 /* : String */;
val* var528 /* : nullable Int */;
val* var529 /* : nullable Int */;
val* var530 /* : nullable Bool */;
val* var531 /* : nullable Bool */;
val* var532 /* : CodeWriter */;
val* var534 /* : CodeWriter */;
static val* varonce535;
val* var536 /* : String */;
char* var537 /* : CString */;
val* var538 /* : String */;
val* var539 /* : nullable Int */;
val* var540 /* : nullable Int */;
val* var541 /* : nullable Bool */;
val* var542 /* : nullable Bool */;
val* var543 /* : CodeWriter */;
val* var545 /* : CodeWriter */;
static val* varonce546;
val* var547 /* : String */;
char* var548 /* : CString */;
val* var549 /* : String */;
val* var550 /* : nullable Int */;
val* var551 /* : nullable Int */;
val* var552 /* : nullable Bool */;
val* var553 /* : nullable Bool */;
val* var554 /* : CodeWriter */;
val* var556 /* : CodeWriter */;
static val* varonce557;
val* var558 /* : String */;
char* var559 /* : CString */;
val* var560 /* : String */;
val* var561 /* : nullable Int */;
val* var562 /* : nullable Int */;
val* var563 /* : nullable Bool */;
val* var564 /* : nullable Bool */;
val* var565 /* : CodeWriter */;
val* var567 /* : CodeWriter */;
static val* varonce568;
val* var569 /* : String */;
char* var570 /* : CString */;
val* var571 /* : String */;
val* var572 /* : nullable Int */;
val* var573 /* : nullable Int */;
val* var574 /* : nullable Bool */;
val* var575 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "#include <stdlib.h>";
var6 = (val*)(19l<<2|1);
var7 = (val*)(19l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler$CodeWriter$add_decl on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "#include <stdio.h>";
var17 = (val*)(18l<<2|1);
var18 = (val*)(18l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
{
nitc___nitc__CodeWriter___add_decl(var10, var14); /* Direct call abstract_compiler$CodeWriter$add_decl on <var10:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var23 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "#include <string.h>";
var28 = (val*)(19l<<2|1);
var29 = (val*)(19l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
{
nitc___nitc__CodeWriter___add_decl(var21, var25); /* Direct call abstract_compiler$CodeWriter$add_decl on <var21:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "#include <setjmp.h>\n";
var39 = (val*)(20l<<2|1);
var40 = (val*)(20l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
{
nitc___nitc__CodeWriter___add_decl(var32, var36); /* Direct call abstract_compiler$CodeWriter$add_decl on <var32:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var45 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "#include <sys/types.h>\n";
var50 = (val*)(23l<<2|1);
var51 = (val*)(23l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
{
nitc___nitc__CodeWriter___add_decl(var43, var47); /* Direct call abstract_compiler$CodeWriter$add_decl on <var43:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var56 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "#include <unistd.h>\n";
var61 = (val*)(20l<<2|1);
var62 = (val*)(20l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
{
nitc___nitc__CodeWriter___add_decl(var54, var58); /* Direct call abstract_compiler$CodeWriter$add_decl on <var54:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var67 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "#include <stdint.h>\n";
var72 = (val*)(20l<<2|1);
var73 = (val*)(20l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
{
nitc___nitc__CodeWriter___add_decl(var65, var69); /* Direct call abstract_compiler$CodeWriter$add_decl on <var65:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var78 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "#ifdef __linux__";
var83 = (val*)(16l<<2|1);
var84 = (val*)(16l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
{
nitc___nitc__CodeWriter___add_decl(var76, var80); /* Direct call abstract_compiler$CodeWriter$add_decl on <var76:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var89 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var89 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "\t#include <endian.h>";
var94 = (val*)(20l<<2|1);
var95 = (val*)(20l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
{
nitc___nitc__CodeWriter___add_decl(var87, var91); /* Direct call abstract_compiler$CodeWriter$add_decl on <var87:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var100 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var100 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "#endif";
var105 = (val*)(6l<<2|1);
var106 = (val*)(6l<<2|1);
var107 = (val*)((long)(0)<<2|3);
var108 = (val*)((long)(0)<<2|3);
var104 = core__flat___CString___to_s_unsafe(var103, var105, var106, var107, var108);
var102 = var104;
varonce101 = var102;
}
{
nitc___nitc__CodeWriter___add_decl(var98, var102); /* Direct call abstract_compiler$CodeWriter$add_decl on <var98:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var111 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "#include <inttypes.h>\n";
var116 = (val*)(22l<<2|1);
var117 = (val*)(22l<<2|1);
var118 = (val*)((long)(0)<<2|3);
var119 = (val*)((long)(0)<<2|3);
var115 = core__flat___CString___to_s_unsafe(var114, var116, var117, var118, var119);
var113 = var115;
varonce112 = var113;
}
{
nitc___nitc__CodeWriter___add_decl(var109, var113); /* Direct call abstract_compiler$CodeWriter$add_decl on <var109:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var122 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "#include \"gc_chooser.h\"";
var127 = (val*)(23l<<2|1);
var128 = (val*)(23l<<2|1);
var129 = (val*)((long)(0)<<2|3);
var130 = (val*)((long)(0)<<2|3);
var126 = core__flat___CString___to_s_unsafe(var125, var127, var128, var129, var130);
var124 = var126;
varonce123 = var124;
}
{
nitc___nitc__CodeWriter___add_decl(var120, var124); /* Direct call abstract_compiler$CodeWriter$add_decl on <var120:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var133 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var133 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "#ifdef __APPLE__";
var138 = (val*)(16l<<2|1);
var139 = (val*)(16l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
{
nitc___nitc__CodeWriter___add_decl(var131, var135); /* Direct call abstract_compiler$CodeWriter$add_decl on <var131:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var144 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var144 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "\t#include <TargetConditionals.h>";
var149 = (val*)(32l<<2|1);
var150 = (val*)(32l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
{
nitc___nitc__CodeWriter___add_decl(var142, var146); /* Direct call abstract_compiler$CodeWriter$add_decl on <var142:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var155 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var155 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "\t#include <syslog.h>";
var160 = (val*)(20l<<2|1);
var161 = (val*)(20l<<2|1);
var162 = (val*)((long)(0)<<2|3);
var163 = (val*)((long)(0)<<2|3);
var159 = core__flat___CString___to_s_unsafe(var158, var160, var161, var162, var163);
var157 = var159;
varonce156 = var157;
}
{
nitc___nitc__CodeWriter___add_decl(var153, var157); /* Direct call abstract_compiler$CodeWriter$add_decl on <var153:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var166 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var166 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "\t#include <libkern/OSByteOrder.h>";
var171 = (val*)(33l<<2|1);
var172 = (val*)(33l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
{
nitc___nitc__CodeWriter___add_decl(var164, var168); /* Direct call abstract_compiler$CodeWriter$add_decl on <var164:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var177 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var177 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "\t#define be32toh(x) OSSwapBigToHostInt32(x)";
var182 = (val*)(43l<<2|1);
var183 = (val*)(43l<<2|1);
var184 = (val*)((long)(0)<<2|3);
var185 = (val*)((long)(0)<<2|3);
var181 = core__flat___CString___to_s_unsafe(var180, var182, var183, var184, var185);
var179 = var181;
varonce178 = var179;
}
{
nitc___nitc__CodeWriter___add_decl(var175, var179); /* Direct call abstract_compiler$CodeWriter$add_decl on <var175:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var188 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var188 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "#endif";
var193 = (val*)(6l<<2|1);
var194 = (val*)(6l<<2|1);
var195 = (val*)((long)(0)<<2|3);
var196 = (val*)((long)(0)<<2|3);
var192 = core__flat___CString___to_s_unsafe(var191, var193, var194, var195, var196);
var190 = var192;
varonce189 = var190;
}
{
nitc___nitc__CodeWriter___add_decl(var186, var190); /* Direct call abstract_compiler$CodeWriter$add_decl on <var186:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var199 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var199 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = "#ifdef _WIN32";
var204 = (val*)(13l<<2|1);
var205 = (val*)(13l<<2|1);
var206 = (val*)((long)(0)<<2|3);
var207 = (val*)((long)(0)<<2|3);
var203 = core__flat___CString___to_s_unsafe(var202, var204, var205, var206, var207);
var201 = var203;
varonce200 = var201;
}
{
nitc___nitc__CodeWriter___add_decl(var197, var201); /* Direct call abstract_compiler$CodeWriter$add_decl on <var197:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var210 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var210 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "\t#define be32toh(val) _byteswap_ulong(val)";
var215 = (val*)(42l<<2|1);
var216 = (val*)(42l<<2|1);
var217 = (val*)((long)(0)<<2|3);
var218 = (val*)((long)(0)<<2|3);
var214 = core__flat___CString___to_s_unsafe(var213, var215, var216, var217, var218);
var212 = var214;
varonce211 = var212;
}
{
nitc___nitc__CodeWriter___add_decl(var208, var212); /* Direct call abstract_compiler$CodeWriter$add_decl on <var208:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var221 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var221 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = "#endif";
var226 = (val*)(6l<<2|1);
var227 = (val*)(6l<<2|1);
var228 = (val*)((long)(0)<<2|3);
var229 = (val*)((long)(0)<<2|3);
var225 = core__flat___CString___to_s_unsafe(var224, var226, var227, var228, var229);
var223 = var225;
varonce222 = var223;
}
{
nitc___nitc__CodeWriter___add_decl(var219, var223); /* Direct call abstract_compiler$CodeWriter$add_decl on <var219:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var232 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var232 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "#ifdef __pnacl__";
var237 = (val*)(16l<<2|1);
var238 = (val*)(16l<<2|1);
var239 = (val*)((long)(0)<<2|3);
var240 = (val*)((long)(0)<<2|3);
var236 = core__flat___CString___to_s_unsafe(var235, var237, var238, var239, var240);
var234 = var236;
varonce233 = var234;
}
{
nitc___nitc__CodeWriter___add_decl(var230, var234); /* Direct call abstract_compiler$CodeWriter$add_decl on <var230:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var243 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var243 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var241 = var243;
RET_LABEL242:(void)0;
}
}
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = "\t#define be16toh(val) (((val) >> 8) | ((val) << 8))";
var248 = (val*)(51l<<2|1);
var249 = (val*)(51l<<2|1);
var250 = (val*)((long)(0)<<2|3);
var251 = (val*)((long)(0)<<2|3);
var247 = core__flat___CString___to_s_unsafe(var246, var248, var249, var250, var251);
var245 = var247;
varonce244 = var245;
}
{
nitc___nitc__CodeWriter___add_decl(var241, var245); /* Direct call abstract_compiler$CodeWriter$add_decl on <var241:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var254 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var254 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = "\t#define be32toh(val) ((be16toh((val) << 16) | (be16toh((val) >> 16))))";
var259 = (val*)(71l<<2|1);
var260 = (val*)(71l<<2|1);
var261 = (val*)((long)(0)<<2|3);
var262 = (val*)((long)(0)<<2|3);
var258 = core__flat___CString___to_s_unsafe(var257, var259, var260, var261, var262);
var256 = var258;
varonce255 = var256;
}
{
nitc___nitc__CodeWriter___add_decl(var252, var256); /* Direct call abstract_compiler$CodeWriter$add_decl on <var252:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var265 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var265 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var263 = var265;
RET_LABEL264:(void)0;
}
}
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "#endif";
var270 = (val*)(6l<<2|1);
var271 = (val*)(6l<<2|1);
var272 = (val*)((long)(0)<<2|3);
var273 = (val*)((long)(0)<<2|3);
var269 = core__flat___CString___to_s_unsafe(var268, var270, var271, var272, var273);
var267 = var269;
varonce266 = var267;
}
{
nitc___nitc__CodeWriter___add_decl(var263, var267); /* Direct call abstract_compiler$CodeWriter$add_decl on <var263:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var276 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var276 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "#ifdef ANDROID";
var281 = (val*)(14l<<2|1);
var282 = (val*)(14l<<2|1);
var283 = (val*)((long)(0)<<2|3);
var284 = (val*)((long)(0)<<2|3);
var280 = core__flat___CString___to_s_unsafe(var279, var281, var282, var283, var284);
var278 = var280;
varonce277 = var278;
}
{
nitc___nitc__CodeWriter___add_decl(var274, var278); /* Direct call abstract_compiler$CodeWriter$add_decl on <var274:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var287 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var287 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var285 = var287;
RET_LABEL286:(void)0;
}
}
if (likely(varonce288!=NULL)) {
var289 = varonce288;
} else {
var290 = "\t#ifndef be32toh";
var292 = (val*)(16l<<2|1);
var293 = (val*)(16l<<2|1);
var294 = (val*)((long)(0)<<2|3);
var295 = (val*)((long)(0)<<2|3);
var291 = core__flat___CString___to_s_unsafe(var290, var292, var293, var294, var295);
var289 = var291;
varonce288 = var289;
}
{
nitc___nitc__CodeWriter___add_decl(var285, var289); /* Direct call abstract_compiler$CodeWriter$add_decl on <var285:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var298 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var298 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = "\t\t#define be32toh(val) betoh32(val)";
var303 = (val*)(35l<<2|1);
var304 = (val*)(35l<<2|1);
var305 = (val*)((long)(0)<<2|3);
var306 = (val*)((long)(0)<<2|3);
var302 = core__flat___CString___to_s_unsafe(var301, var303, var304, var305, var306);
var300 = var302;
varonce299 = var300;
}
{
nitc___nitc__CodeWriter___add_decl(var296, var300); /* Direct call abstract_compiler$CodeWriter$add_decl on <var296:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var309 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var309 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "\t#endif";
var314 = (val*)(7l<<2|1);
var315 = (val*)(7l<<2|1);
var316 = (val*)((long)(0)<<2|3);
var317 = (val*)((long)(0)<<2|3);
var313 = core__flat___CString___to_s_unsafe(var312, var314, var315, var316, var317);
var311 = var313;
varonce310 = var311;
}
{
nitc___nitc__CodeWriter___add_decl(var307, var311); /* Direct call abstract_compiler$CodeWriter$add_decl on <var307:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var320 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var320 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = "\t#include <android/log.h>";
var325 = (val*)(25l<<2|1);
var326 = (val*)(25l<<2|1);
var327 = (val*)((long)(0)<<2|3);
var328 = (val*)((long)(0)<<2|3);
var324 = core__flat___CString___to_s_unsafe(var323, var325, var326, var327, var328);
var322 = var324;
varonce321 = var322;
}
{
nitc___nitc__CodeWriter___add_decl(var318, var322); /* Direct call abstract_compiler$CodeWriter$add_decl on <var318:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var331 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var331 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var329 = var331;
RET_LABEL330:(void)0;
}
}
if (likely(varonce332!=NULL)) {
var333 = varonce332;
} else {
var334 = "\t#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, \"Nit\", __VA_ARGS__)";
var336 = (val*)(89l<<2|1);
var337 = (val*)(89l<<2|1);
var338 = (val*)((long)(0)<<2|3);
var339 = (val*)((long)(0)<<2|3);
var335 = core__flat___CString___to_s_unsafe(var334, var336, var337, var338, var339);
var333 = var335;
varonce332 = var333;
}
{
nitc___nitc__CodeWriter___add_decl(var329, var333); /* Direct call abstract_compiler$CodeWriter$add_decl on <var329:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var342 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var342 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var340 = var342;
RET_LABEL341:(void)0;
}
}
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = "#elif TARGET_OS_IPHONE";
var347 = (val*)(22l<<2|1);
var348 = (val*)(22l<<2|1);
var349 = (val*)((long)(0)<<2|3);
var350 = (val*)((long)(0)<<2|3);
var346 = core__flat___CString___to_s_unsafe(var345, var347, var348, var349, var350);
var344 = var346;
varonce343 = var344;
}
{
nitc___nitc__CodeWriter___add_decl(var340, var344); /* Direct call abstract_compiler$CodeWriter$add_decl on <var340:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var353 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var353 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var351 = var353;
RET_LABEL352:(void)0;
}
}
if (likely(varonce354!=NULL)) {
var355 = varonce354;
} else {
var356 = "\t#define PRINT_ERROR(...) syslog(LOG_ERR, __VA_ARGS__)";
var358 = (val*)(54l<<2|1);
var359 = (val*)(54l<<2|1);
var360 = (val*)((long)(0)<<2|3);
var361 = (val*)((long)(0)<<2|3);
var357 = core__flat___CString___to_s_unsafe(var356, var358, var359, var360, var361);
var355 = var357;
varonce354 = var355;
}
{
nitc___nitc__CodeWriter___add_decl(var351, var355); /* Direct call abstract_compiler$CodeWriter$add_decl on <var351:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var364 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var364 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var362 = var364;
RET_LABEL363:(void)0;
}
}
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = "#else";
var369 = (val*)(5l<<2|1);
var370 = (val*)(5l<<2|1);
var371 = (val*)((long)(0)<<2|3);
var372 = (val*)((long)(0)<<2|3);
var368 = core__flat___CString___to_s_unsafe(var367, var369, var370, var371, var372);
var366 = var368;
varonce365 = var366;
}
{
nitc___nitc__CodeWriter___add_decl(var362, var366); /* Direct call abstract_compiler$CodeWriter$add_decl on <var362:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var375 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var375 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var373 = var375;
RET_LABEL374:(void)0;
}
}
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = "\t#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)";
var380 = (val*)(54l<<2|1);
var381 = (val*)(54l<<2|1);
var382 = (val*)((long)(0)<<2|3);
var383 = (val*)((long)(0)<<2|3);
var379 = core__flat___CString___to_s_unsafe(var378, var380, var381, var382, var383);
var377 = var379;
varonce376 = var377;
}
{
nitc___nitc__CodeWriter___add_decl(var373, var377); /* Direct call abstract_compiler$CodeWriter$add_decl on <var373:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var386 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var386 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var384 = var386;
RET_LABEL385:(void)0;
}
}
if (likely(varonce387!=NULL)) {
var388 = varonce387;
} else {
var389 = "#endif";
var391 = (val*)(6l<<2|1);
var392 = (val*)(6l<<2|1);
var393 = (val*)((long)(0)<<2|3);
var394 = (val*)((long)(0)<<2|3);
var390 = core__flat___CString___to_s_unsafe(var389, var391, var392, var393, var394);
var388 = var390;
varonce387 = var388;
}
{
nitc___nitc__CodeWriter___add_decl(var384, var388); /* Direct call abstract_compiler$CodeWriter$add_decl on <var384:CodeWriter>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__compile_header_structs]))(self); /* compile_header_structs on <self:AbstractCompiler>*/
}
{
nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs(self); /* Direct call separate_compiler$SeparateCompiler$compile_nitni_structs on <self:AbstractCompiler>*/
}
{
nitc___nitc__AbstractCompiler___compile_catch_stack(self); /* Direct call abstract_compiler$AbstractCompiler$compile_catch_stack on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var397 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var397 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var395 = var397;
RET_LABEL396:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var395) on <var395:ModelBuilder> */
var400 = var395->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var395:ModelBuilder> */
if (unlikely(var400 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var398 = var400;
RET_LABEL399:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_gcc_directive (var398) on <var398:ToolContext> */
var403 = var398->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <var398:ToolContext> */
if (unlikely(var403 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 68);
fatal_exit(1);
}
var401 = var403;
RET_LABEL402:(void)0;
}
}
{
{ /* Inline opts$Option$value (var401) on <var401:OptionArray> */
var406 = var401->attrs[COLOR_opts__Option___value].val; /* _value on <var401:OptionArray> */
var404 = var406;
RET_LABEL405:(void)0;
}
}
var_gccd_disable = var404;
if (likely(varonce408!=NULL)) {
var409 = varonce408;
} else {
var410 = "noreturn";
var412 = (val*)(8l<<2|1);
var413 = (val*)(8l<<2|1);
var414 = (val*)((long)(0)<<2|3);
var415 = (val*)((long)(0)<<2|3);
var411 = core__flat___CString___to_s_unsafe(var410, var412, var413, var414, var415);
var409 = var411;
varonce408 = var409;
}
{
var416 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var409);
}
var_ = var416;
if (var416){
var407 = var_;
} else {
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "all";
var421 = (val*)(3l<<2|1);
var422 = (val*)(3l<<2|1);
var423 = (val*)((long)(0)<<2|3);
var424 = (val*)((long)(0)<<2|3);
var420 = core__flat___CString___to_s_unsafe(var419, var421, var422, var423, var424);
var418 = var420;
varonce417 = var418;
}
{
var425 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var418);
}
var407 = var425;
}
if (var407){
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var428 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var428 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var426 = var428;
RET_LABEL427:(void)0;
}
}
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "void fatal_exit(int);";
var433 = (val*)(21l<<2|1);
var434 = (val*)(21l<<2|1);
var435 = (val*)((long)(0)<<2|3);
var436 = (val*)((long)(0)<<2|3);
var432 = core__flat___CString___to_s_unsafe(var431, var433, var434, var435, var436);
var430 = var432;
varonce429 = var430;
}
{
nitc___nitc__CodeWriter___add_decl(var426, var430); /* Direct call abstract_compiler$CodeWriter$add_decl on <var426:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var439 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var439 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var437 = var439;
RET_LABEL438:(void)0;
}
}
if (likely(varonce440!=NULL)) {
var441 = varonce440;
} else {
var442 = "void fatal_exit(int) __attribute__ ((noreturn));";
var444 = (val*)(48l<<2|1);
var445 = (val*)(48l<<2|1);
var446 = (val*)((long)(0)<<2|3);
var447 = (val*)((long)(0)<<2|3);
var443 = core__flat___CString___to_s_unsafe(var442, var444, var445, var446, var447);
var441 = var443;
varonce440 = var441;
}
{
nitc___nitc__CodeWriter___add_decl(var437, var441); /* Direct call abstract_compiler$CodeWriter$add_decl on <var437:CodeWriter>*/
}
}
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = "likely";
var453 = (val*)(6l<<2|1);
var454 = (val*)(6l<<2|1);
var455 = (val*)((long)(0)<<2|3);
var456 = (val*)((long)(0)<<2|3);
var452 = core__flat___CString___to_s_unsafe(var451, var453, var454, var455, var456);
var450 = var452;
varonce449 = var450;
}
{
var457 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var450);
}
var_458 = var457;
if (var457){
var448 = var_458;
} else {
if (likely(varonce459!=NULL)) {
var460 = varonce459;
} else {
var461 = "all";
var463 = (val*)(3l<<2|1);
var464 = (val*)(3l<<2|1);
var465 = (val*)((long)(0)<<2|3);
var466 = (val*)((long)(0)<<2|3);
var462 = core__flat___CString___to_s_unsafe(var461, var463, var464, var465, var466);
var460 = var462;
varonce459 = var460;
}
{
var467 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var460);
}
var448 = var467;
}
if (var448){
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var470 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var470 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var468 = var470;
RET_LABEL469:(void)0;
}
}
if (likely(varonce471!=NULL)) {
var472 = varonce471;
} else {
var473 = "#define likely(x)       (x)";
var475 = (val*)(27l<<2|1);
var476 = (val*)(27l<<2|1);
var477 = (val*)((long)(0)<<2|3);
var478 = (val*)((long)(0)<<2|3);
var474 = core__flat___CString___to_s_unsafe(var473, var475, var476, var477, var478);
var472 = var474;
varonce471 = var472;
}
{
nitc___nitc__CodeWriter___add_decl(var468, var472); /* Direct call abstract_compiler$CodeWriter$add_decl on <var468:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var481 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var481 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var479 = var481;
RET_LABEL480:(void)0;
}
}
if (likely(varonce482!=NULL)) {
var483 = varonce482;
} else {
var484 = "#define unlikely(x)     (x)";
var486 = (val*)(27l<<2|1);
var487 = (val*)(27l<<2|1);
var488 = (val*)((long)(0)<<2|3);
var489 = (val*)((long)(0)<<2|3);
var485 = core__flat___CString___to_s_unsafe(var484, var486, var487, var488, var489);
var483 = var485;
varonce482 = var483;
}
{
nitc___nitc__CodeWriter___add_decl(var479, var483); /* Direct call abstract_compiler$CodeWriter$add_decl on <var479:CodeWriter>*/
}
} else {
if (likely(varonce490!=NULL)) {
var491 = varonce490;
} else {
var492 = "correct-likely";
var494 = (val*)(14l<<2|1);
var495 = (val*)(14l<<2|1);
var496 = (val*)((long)(0)<<2|3);
var497 = (val*)((long)(0)<<2|3);
var493 = core__flat___CString___to_s_unsafe(var492, var494, var495, var496, var497);
var491 = var493;
varonce490 = var491;
}
{
var498 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var491);
}
if (var498){
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var501 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var501 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var499 = var501;
RET_LABEL500:(void)0;
}
}
if (likely(varonce502!=NULL)) {
var503 = varonce502;
} else {
var504 = "#define likely(x)       __builtin_expect((x),0)";
var506 = (val*)(47l<<2|1);
var507 = (val*)(47l<<2|1);
var508 = (val*)((long)(0)<<2|3);
var509 = (val*)((long)(0)<<2|3);
var505 = core__flat___CString___to_s_unsafe(var504, var506, var507, var508, var509);
var503 = var505;
varonce502 = var503;
}
{
nitc___nitc__CodeWriter___add_decl(var499, var503); /* Direct call abstract_compiler$CodeWriter$add_decl on <var499:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var512 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var512 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var510 = var512;
RET_LABEL511:(void)0;
}
}
if (likely(varonce513!=NULL)) {
var514 = varonce513;
} else {
var515 = "#define unlikely(x)     __builtin_expect((x),1)";
var517 = (val*)(47l<<2|1);
var518 = (val*)(47l<<2|1);
var519 = (val*)((long)(0)<<2|3);
var520 = (val*)((long)(0)<<2|3);
var516 = core__flat___CString___to_s_unsafe(var515, var517, var518, var519, var520);
var514 = var516;
varonce513 = var514;
}
{
nitc___nitc__CodeWriter___add_decl(var510, var514); /* Direct call abstract_compiler$CodeWriter$add_decl on <var510:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var523 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var523 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var521 = var523;
RET_LABEL522:(void)0;
}
}
if (likely(varonce524!=NULL)) {
var525 = varonce524;
} else {
var526 = "#define likely(x)       __builtin_expect((x),1)";
var528 = (val*)(47l<<2|1);
var529 = (val*)(47l<<2|1);
var530 = (val*)((long)(0)<<2|3);
var531 = (val*)((long)(0)<<2|3);
var527 = core__flat___CString___to_s_unsafe(var526, var528, var529, var530, var531);
var525 = var527;
varonce524 = var525;
}
{
nitc___nitc__CodeWriter___add_decl(var521, var525); /* Direct call abstract_compiler$CodeWriter$add_decl on <var521:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var534 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var534 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var532 = var534;
RET_LABEL533:(void)0;
}
}
if (likely(varonce535!=NULL)) {
var536 = varonce535;
} else {
var537 = "#define unlikely(x)     __builtin_expect((x),0)";
var539 = (val*)(47l<<2|1);
var540 = (val*)(47l<<2|1);
var541 = (val*)((long)(0)<<2|3);
var542 = (val*)((long)(0)<<2|3);
var538 = core__flat___CString___to_s_unsafe(var537, var539, var540, var541, var542);
var536 = var538;
varonce535 = var536;
}
{
nitc___nitc__CodeWriter___add_decl(var532, var536); /* Direct call abstract_compiler$CodeWriter$add_decl on <var532:CodeWriter>*/
}
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var545 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var545 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var543 = var545;
RET_LABEL544:(void)0;
}
}
if (likely(varonce546!=NULL)) {
var547 = varonce546;
} else {
var548 = "extern int glob_argc;";
var550 = (val*)(21l<<2|1);
var551 = (val*)(21l<<2|1);
var552 = (val*)((long)(0)<<2|3);
var553 = (val*)((long)(0)<<2|3);
var549 = core__flat___CString___to_s_unsafe(var548, var550, var551, var552, var553);
var547 = var549;
varonce546 = var547;
}
{
nitc___nitc__CodeWriter___add_decl(var543, var547); /* Direct call abstract_compiler$CodeWriter$add_decl on <var543:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var556 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var556 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var554 = var556;
RET_LABEL555:(void)0;
}
}
if (likely(varonce557!=NULL)) {
var558 = varonce557;
} else {
var559 = "extern char **glob_argv;";
var561 = (val*)(24l<<2|1);
var562 = (val*)(24l<<2|1);
var563 = (val*)((long)(0)<<2|3);
var564 = (val*)((long)(0)<<2|3);
var560 = core__flat___CString___to_s_unsafe(var559, var561, var562, var563, var564);
var558 = var560;
varonce557 = var558;
}
{
nitc___nitc__CodeWriter___add_decl(var554, var558); /* Direct call abstract_compiler$CodeWriter$add_decl on <var554:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var567 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var567 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var565 = var567;
RET_LABEL566:(void)0;
}
}
if (likely(varonce568!=NULL)) {
var569 = varonce568;
} else {
var570 = "extern val *glob_sys;";
var572 = (val*)(21l<<2|1);
var573 = (val*)(21l<<2|1);
var574 = (val*)((long)(0)<<2|3);
var575 = (val*)((long)(0)<<2|3);
var571 = core__flat___CString___to_s_unsafe(var570, var572, var573, var574, var575);
var569 = var571;
varonce568 = var569;
}
{
nitc___nitc__CodeWriter___add_decl(var565, var569); /* Direct call abstract_compiler$CodeWriter$add_decl on <var565:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_catch_stack for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_catch_stack(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "struct catch_stack_t {\n\tint cursor;\n\tjmp_buf envs[100];\n};\nextern struct catch_stack_t catchStack;\n";
var6 = (val*)(99l<<2|1);
var7 = (val*)(99l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler$CodeWriter$add_decl on <var:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_nitni_structs for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "/* Native reference to Nit objects */\n/* This structure is used to represent every Nit type in extern methods and custom C code. */\nstruct nitni_ref {\n\tstruct nitni_ref *next,\n\t\t*prev; /* adjacent global references in global list */\n\tint count; /* number of time this global reference has been marked */\n};\n\n/* List of global references from C code to Nit objects */\n/* Instanciated empty at init of Nit system and filled explicitly by user in C code */\nstruct nitni_global_ref_list_t {\n\tstruct nitni_ref *head, *tail;\n};\nextern struct nitni_global_ref_list_t *nitni_global_ref_list;\n\n/* Initializer of global reference list */\nextern void nitni_global_ref_list_init();\n\n/* Intern function to add a global reference to the list */\nextern void nitni_global_ref_add( struct nitni_ref *ref );\n\n/* Intern function to remove a global reference from the list */\nextern void nitni_global_ref_remove( struct nitni_ref *ref );\n\n/* Increase count on an existing global reference */\nextern void nitni_global_ref_incr( struct nitni_ref *ref );\n\n/* Decrease count on an existing global reference */\nextern void nitni_global_ref_decr( struct nitni_ref *ref );\n";
var6 = (val*)(1146l<<2|1);
var7 = (val*)(1146l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler$CodeWriter$add_decl on <var:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_finalizer_function for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_finalizer_function(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
val* var20 /* : MClass */;
val* var22 /* : MClass */;
val* var23 /* : nullable MMethod */;
val* var_finalize_meth /* var finalize_meth: nullable MMethod */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : ModelBuilder */;
val* var32 /* : ModelBuilder */;
val* var33 /* : ToolContext */;
val* var35 /* : ToolContext */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
val* var44 /* : Message */;
val* var45 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
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
val* var62 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var63 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var64 /* : nullable RuntimeVariable */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Bool */;
val* var72 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__model___MModule___finalizable_type(var);
}
var_finalizable_type = var3;
if (var_finalizable_type == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_finalizable_type,var_other) on <var_finalizable_type:nullable MClassType(MClassType)> */
var9 = var_finalizable_type == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "finalize";
var16 = (val*)(8l<<2|1);
var17 = (val*)(8l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce = var13;
}
{
{ /* Inline model$MClassType$mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var22 = var_finalizable_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc__model___MModule___try_get_primitive_method(var10, var13, var20);
}
var_finalize_meth = var23;
if (var_finalize_meth == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_finalize_meth,((val*)NULL)) on <var_finalize_meth:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_finalize_meth,var_other) on <var_finalize_meth:nullable MMethod(MMethod)> */
var29 = var_finalize_meth == var_other;
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
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var32 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var30) on <var30:ModelBuilder> */
var35 = var30->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var30:ModelBuilder> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Error: the `Finalizable` class does not declare the `finalize` method.";
var40 = (val*)(70l<<2|1);
var41 = (val*)(70l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
var44 = nitc___nitc__ToolContext___error(var33, ((val*)NULL), var37);
}
goto RET_LABEL;
} else {
}
{
var45 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var45;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "void gc_finalize (void *obj, void *client_data) {";
var50 = (val*)(49l<<2|1);
var51 = (val*)(49l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var47); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "obj";
var58 = (val*)(3l<<2|1);
var59 = (val*)(3l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
{
var62 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var55, var_finalizable_type);
}
var_recv = var62;
var63 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var63, 1l); /* Direct call array$Array$with_capacity on <var63:Array[RuntimeVariable]>*/
}
var_ = var63;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var64 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_finalize_meth, var_);
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "}";
var69 = (val*)(1l<<2|1);
var70 = (val*)(1l<<2|1);
var71 = (val*)((long)(0)<<2|3);
var72 = (val*)((long)(0)<<2|3);
var68 = core__flat___CString___to_s_unsafe(var67, var69, var70, var71, var72);
var66 = var68;
varonce65 = var66;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var66); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_before_main for (self: AbstractCompiler, AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompiler___compile_before_main(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 803);
fatal_exit(1);
}
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_begin_main for (self: AbstractCompiler, AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompiler___compile_begin_main(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 810);
fatal_exit(1);
}
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_main_function for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_main_function(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : Platform */;
val* var10 /* : Platform */;
val* var_platform /* var platform: Platform */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : OptionBool */;
val* var21 /* : OptionBool */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
short int var_no_main /* var no_main: Bool */;
short int var26 /* : Bool */;
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
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
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
val* var99 /* : ModelBuilder */;
val* var101 /* : ModelBuilder */;
val* var102 /* : ToolContext */;
val* var104 /* : ToolContext */;
val* var105 /* : OptionBool */;
val* var107 /* : OptionBool */;
val* var108 /* : nullable Object */;
val* var110 /* : nullable Object */;
short int var111 /* : Bool */;
val* var112 /* : Array[String] */;
val* var114 /* : Array[String] */;
val* var_115 /* var : Array[String] */;
val* var116 /* : IndexedIterator[nullable Object] */;
val* var_117 /* var : IndexedIterator[String] */;
short int var118 /* : Bool */;
val* var119 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var121 /* : NativeArray[String] */;
static val* varonce120;
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
val* var138 /* : String */;
val* var140 /* : NativeArray[String] */;
static val* varonce139;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Bool */;
val* var148 /* : nullable Bool */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : CString */;
val* var152 /* : String */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Bool */;
val* var156 /* : nullable Bool */;
val* var157 /* : String */;
val* var159 /* : NativeArray[String] */;
static val* varonce158;
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
val* var177 /* : AbstractCompiler */;
val* var179 /* : AbstractCompiler */;
val* var180 /* : CodeWriter */;
val* var182 /* : CodeWriter */;
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
val* var202 /* : AbstractCompiler */;
val* var204 /* : AbstractCompiler */;
val* var205 /* : CodeWriter */;
val* var207 /* : CodeWriter */;
val* var209 /* : NativeArray[String] */;
static val* varonce208;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
val* var214 /* : nullable Int */;
val* var215 /* : nullable Int */;
val* var216 /* : nullable Bool */;
val* var217 /* : nullable Bool */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : CString */;
val* var221 /* : String */;
val* var222 /* : nullable Int */;
val* var223 /* : nullable Int */;
val* var224 /* : nullable Bool */;
val* var225 /* : nullable Bool */;
val* var226 /* : String */;
val* var227 /* : AbstractCompiler */;
val* var229 /* : AbstractCompiler */;
val* var230 /* : CodeWriter */;
val* var232 /* : CodeWriter */;
val* var234 /* : NativeArray[String] */;
static val* varonce233;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : CString */;
val* var238 /* : String */;
val* var239 /* : nullable Int */;
val* var240 /* : nullable Int */;
val* var241 /* : nullable Bool */;
val* var242 /* : nullable Bool */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : CString */;
val* var246 /* : String */;
val* var247 /* : nullable Int */;
val* var248 /* : nullable Int */;
val* var249 /* : nullable Bool */;
val* var250 /* : nullable Bool */;
val* var251 /* : String */;
val* var252 /* : ModelBuilder */;
val* var254 /* : ModelBuilder */;
val* var255 /* : ToolContext */;
val* var257 /* : ToolContext */;
val* var258 /* : OptionBool */;
val* var260 /* : OptionBool */;
val* var261 /* : nullable Object */;
val* var263 /* : nullable Object */;
short int var264 /* : Bool */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : CString */;
val* var268 /* : String */;
val* var269 /* : nullable Int */;
val* var270 /* : nullable Int */;
val* var271 /* : nullable Bool */;
val* var272 /* : nullable Bool */;
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
val* var289 /* : AbstractCompiler */;
val* var291 /* : AbstractCompiler */;
val* var292 /* : CodeWriter */;
val* var294 /* : CodeWriter */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : CString */;
val* var298 /* : String */;
val* var299 /* : nullable Int */;
val* var300 /* : nullable Int */;
val* var301 /* : nullable Bool */;
val* var302 /* : nullable Bool */;
val* var303 /* : AbstractCompiler */;
val* var305 /* : AbstractCompiler */;
val* var306 /* : CodeWriter */;
val* var308 /* : CodeWriter */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : CString */;
val* var312 /* : String */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Int */;
val* var315 /* : nullable Bool */;
val* var316 /* : nullable Bool */;
val* var317 /* : AbstractCompiler */;
val* var319 /* : AbstractCompiler */;
val* var320 /* : CodeWriter */;
val* var322 /* : CodeWriter */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : CString */;
val* var326 /* : String */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Int */;
val* var329 /* : nullable Bool */;
val* var330 /* : nullable Bool */;
val* var331 /* : ModelBuilder */;
val* var333 /* : ModelBuilder */;
val* var334 /* : ToolContext */;
val* var336 /* : ToolContext */;
val* var337 /* : OptionBool */;
val* var339 /* : OptionBool */;
val* var340 /* : nullable Object */;
val* var342 /* : nullable Object */;
short int var343 /* : Bool */;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : CString */;
val* var347 /* : String */;
val* var348 /* : nullable Int */;
val* var349 /* : nullable Int */;
val* var350 /* : nullable Bool */;
val* var351 /* : nullable Bool */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : CString */;
val* var355 /* : String */;
val* var356 /* : nullable Int */;
val* var357 /* : nullable Int */;
val* var358 /* : nullable Bool */;
val* var359 /* : nullable Bool */;
val* var360 /* : AbstractCompiler */;
val* var362 /* : AbstractCompiler */;
val* var363 /* : CodeWriter */;
val* var365 /* : CodeWriter */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : CString */;
val* var369 /* : String */;
val* var370 /* : nullable Int */;
val* var371 /* : nullable Int */;
val* var372 /* : nullable Bool */;
val* var373 /* : nullable Bool */;
val* var374 /* : AbstractCompiler */;
val* var376 /* : AbstractCompiler */;
val* var377 /* : CodeWriter */;
val* var379 /* : CodeWriter */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : CString */;
val* var383 /* : String */;
val* var384 /* : nullable Int */;
val* var385 /* : nullable Int */;
val* var386 /* : nullable Bool */;
val* var387 /* : nullable Bool */;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : CString */;
val* var391 /* : String */;
val* var392 /* : nullable Int */;
val* var393 /* : nullable Int */;
val* var394 /* : nullable Bool */;
val* var395 /* : nullable Bool */;
short int var396 /* : Bool */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : CString */;
val* var400 /* : String */;
val* var401 /* : nullable Int */;
val* var402 /* : nullable Int */;
val* var403 /* : nullable Bool */;
val* var404 /* : nullable Bool */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : CString */;
val* var408 /* : String */;
val* var409 /* : nullable Int */;
val* var410 /* : nullable Int */;
val* var411 /* : nullable Bool */;
val* var412 /* : nullable Bool */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : CString */;
val* var416 /* : String */;
val* var417 /* : nullable Int */;
val* var418 /* : nullable Int */;
val* var419 /* : nullable Bool */;
val* var420 /* : nullable Bool */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : CString */;
val* var424 /* : String */;
val* var425 /* : nullable Int */;
val* var426 /* : nullable Int */;
val* var427 /* : nullable Bool */;
val* var428 /* : nullable Bool */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : CString */;
val* var432 /* : String */;
val* var433 /* : nullable Int */;
val* var434 /* : nullable Int */;
val* var435 /* : nullable Bool */;
val* var436 /* : nullable Bool */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : CString */;
val* var440 /* : String */;
val* var441 /* : nullable Int */;
val* var442 /* : nullable Int */;
val* var443 /* : nullable Bool */;
val* var444 /* : nullable Bool */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : CString */;
val* var448 /* : String */;
val* var449 /* : nullable Int */;
val* var450 /* : nullable Int */;
val* var451 /* : nullable Bool */;
val* var452 /* : nullable Bool */;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : CString */;
val* var456 /* : String */;
val* var457 /* : nullable Int */;
val* var458 /* : nullable Int */;
val* var459 /* : nullable Bool */;
val* var460 /* : nullable Bool */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : CString */;
val* var464 /* : String */;
val* var465 /* : nullable Int */;
val* var466 /* : nullable Int */;
val* var467 /* : nullable Bool */;
val* var468 /* : nullable Bool */;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : CString */;
val* var472 /* : String */;
val* var473 /* : nullable Int */;
val* var474 /* : nullable Int */;
val* var475 /* : nullable Bool */;
val* var476 /* : nullable Bool */;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : CString */;
val* var480 /* : String */;
val* var481 /* : nullable Int */;
val* var482 /* : nullable Int */;
val* var483 /* : nullable Bool */;
val* var484 /* : nullable Bool */;
static val* varonce485;
val* var486 /* : String */;
char* var487 /* : CString */;
val* var488 /* : String */;
val* var489 /* : nullable Int */;
val* var490 /* : nullable Int */;
val* var491 /* : nullable Bool */;
val* var492 /* : nullable Bool */;
static val* varonce493;
val* var494 /* : String */;
char* var495 /* : CString */;
val* var496 /* : String */;
val* var497 /* : nullable Int */;
val* var498 /* : nullable Int */;
val* var499 /* : nullable Bool */;
val* var500 /* : nullable Bool */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : CString */;
val* var504 /* : String */;
val* var505 /* : nullable Int */;
val* var506 /* : nullable Int */;
val* var507 /* : nullable Bool */;
val* var508 /* : nullable Bool */;
static val* varonce509;
val* var510 /* : String */;
char* var511 /* : CString */;
val* var512 /* : String */;
val* var513 /* : nullable Int */;
val* var514 /* : nullable Int */;
val* var515 /* : nullable Bool */;
val* var516 /* : nullable Bool */;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : CString */;
val* var520 /* : String */;
val* var521 /* : nullable Int */;
val* var522 /* : nullable Int */;
val* var523 /* : nullable Bool */;
val* var524 /* : nullable Bool */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : CString */;
val* var528 /* : String */;
val* var529 /* : nullable Int */;
val* var530 /* : nullable Int */;
val* var531 /* : nullable Bool */;
val* var532 /* : nullable Bool */;
static val* varonce533;
val* var534 /* : String */;
char* var535 /* : CString */;
val* var536 /* : String */;
val* var537 /* : nullable Int */;
val* var538 /* : nullable Int */;
val* var539 /* : nullable Bool */;
val* var540 /* : nullable Bool */;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : CString */;
val* var544 /* : String */;
val* var545 /* : nullable Int */;
val* var546 /* : nullable Int */;
val* var547 /* : nullable Bool */;
val* var548 /* : nullable Bool */;
static val* varonce549;
val* var550 /* : String */;
char* var551 /* : CString */;
val* var552 /* : String */;
val* var553 /* : nullable Int */;
val* var554 /* : nullable Int */;
val* var555 /* : nullable Bool */;
val* var556 /* : nullable Bool */;
static val* varonce557;
val* var558 /* : String */;
char* var559 /* : CString */;
val* var560 /* : String */;
val* var561 /* : nullable Int */;
val* var562 /* : nullable Int */;
val* var563 /* : nullable Bool */;
val* var564 /* : nullable Bool */;
static val* varonce565;
val* var566 /* : String */;
char* var567 /* : CString */;
val* var568 /* : String */;
val* var569 /* : nullable Int */;
val* var570 /* : nullable Int */;
val* var571 /* : nullable Bool */;
val* var572 /* : nullable Bool */;
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : CString */;
val* var576 /* : String */;
val* var577 /* : nullable Int */;
val* var578 /* : nullable Int */;
val* var579 /* : nullable Bool */;
val* var580 /* : nullable Bool */;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : CString */;
val* var584 /* : String */;
val* var585 /* : nullable Int */;
val* var586 /* : nullable Int */;
val* var587 /* : nullable Bool */;
val* var588 /* : nullable Bool */;
static val* varonce589;
val* var590 /* : String */;
char* var591 /* : CString */;
val* var592 /* : String */;
val* var593 /* : nullable Int */;
val* var594 /* : nullable Int */;
val* var595 /* : nullable Bool */;
val* var596 /* : nullable Bool */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : CString */;
val* var600 /* : String */;
val* var601 /* : nullable Int */;
val* var602 /* : nullable Int */;
val* var603 /* : nullable Bool */;
val* var604 /* : nullable Bool */;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : CString */;
val* var608 /* : String */;
val* var609 /* : nullable Int */;
val* var610 /* : nullable Int */;
val* var611 /* : nullable Bool */;
val* var612 /* : nullable Bool */;
static val* varonce613;
val* var614 /* : String */;
char* var615 /* : CString */;
val* var616 /* : String */;
val* var617 /* : nullable Int */;
val* var618 /* : nullable Int */;
val* var619 /* : nullable Bool */;
val* var620 /* : nullable Bool */;
static val* varonce621;
val* var622 /* : String */;
char* var623 /* : CString */;
val* var624 /* : String */;
val* var625 /* : nullable Int */;
val* var626 /* : nullable Int */;
val* var627 /* : nullable Bool */;
val* var628 /* : nullable Bool */;
static val* varonce629;
val* var630 /* : String */;
char* var631 /* : CString */;
val* var632 /* : String */;
val* var633 /* : nullable Int */;
val* var634 /* : nullable Int */;
val* var635 /* : nullable Bool */;
val* var636 /* : nullable Bool */;
static val* varonce637;
val* var638 /* : String */;
char* var639 /* : CString */;
val* var640 /* : String */;
val* var641 /* : nullable Int */;
val* var642 /* : nullable Int */;
val* var643 /* : nullable Bool */;
val* var644 /* : nullable Bool */;
static val* varonce645;
val* var646 /* : String */;
char* var647 /* : CString */;
val* var648 /* : String */;
val* var649 /* : nullable Int */;
val* var650 /* : nullable Int */;
val* var651 /* : nullable Bool */;
val* var652 /* : nullable Bool */;
static val* varonce653;
val* var654 /* : String */;
char* var655 /* : CString */;
val* var656 /* : String */;
val* var657 /* : nullable Int */;
val* var658 /* : nullable Int */;
val* var659 /* : nullable Bool */;
val* var660 /* : nullable Bool */;
static val* varonce661;
val* var662 /* : String */;
char* var663 /* : CString */;
val* var664 /* : String */;
val* var665 /* : nullable Int */;
val* var666 /* : nullable Int */;
val* var667 /* : nullable Bool */;
val* var668 /* : nullable Bool */;
static val* varonce669;
val* var670 /* : String */;
char* var671 /* : CString */;
val* var672 /* : String */;
val* var673 /* : nullable Int */;
val* var674 /* : nullable Int */;
val* var675 /* : nullable Bool */;
val* var676 /* : nullable Bool */;
static val* varonce677;
val* var678 /* : String */;
char* var679 /* : CString */;
val* var680 /* : String */;
val* var681 /* : nullable Int */;
val* var682 /* : nullable Int */;
val* var683 /* : nullable Bool */;
val* var684 /* : nullable Bool */;
static val* varonce685;
val* var686 /* : String */;
char* var687 /* : CString */;
val* var688 /* : String */;
val* var689 /* : nullable Int */;
val* var690 /* : nullable Int */;
val* var691 /* : nullable Bool */;
val* var692 /* : nullable Bool */;
static val* varonce693;
val* var694 /* : String */;
char* var695 /* : CString */;
val* var696 /* : String */;
val* var697 /* : nullable Int */;
val* var698 /* : nullable Int */;
val* var699 /* : nullable Bool */;
val* var700 /* : nullable Bool */;
static val* varonce701;
val* var702 /* : String */;
char* var703 /* : CString */;
val* var704 /* : String */;
val* var705 /* : nullable Int */;
val* var706 /* : nullable Int */;
val* var707 /* : nullable Bool */;
val* var708 /* : nullable Bool */;
static val* varonce709;
val* var710 /* : String */;
char* var711 /* : CString */;
val* var712 /* : String */;
val* var713 /* : nullable Int */;
val* var714 /* : nullable Int */;
val* var715 /* : nullable Bool */;
val* var716 /* : nullable Bool */;
static val* varonce717;
val* var718 /* : String */;
char* var719 /* : CString */;
val* var720 /* : String */;
val* var721 /* : nullable Int */;
val* var722 /* : nullable Int */;
val* var723 /* : nullable Bool */;
val* var724 /* : nullable Bool */;
static val* varonce725;
val* var726 /* : String */;
char* var727 /* : CString */;
val* var728 /* : String */;
val* var729 /* : nullable Int */;
val* var730 /* : nullable Int */;
val* var731 /* : nullable Bool */;
val* var732 /* : nullable Bool */;
short int var734 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v735 /* var v: AbstractCompilerVisitor */;
static val* varonce736;
val* var737 /* : String */;
char* var738 /* : CString */;
val* var739 /* : String */;
val* var740 /* : nullable Int */;
val* var741 /* : nullable Int */;
val* var742 /* : nullable Bool */;
val* var743 /* : nullable Bool */;
static val* varonce744;
val* var745 /* : String */;
char* var746 /* : CString */;
val* var747 /* : String */;
val* var748 /* : nullable Int */;
val* var749 /* : nullable Int */;
val* var750 /* : nullable Bool */;
val* var751 /* : nullable Bool */;
short int var753 /* : Bool */;
int cltype754;
int idtype755;
const struct type* type_struct756;
const char* var_class_name757;
val* var_v758 /* var v: AbstractCompilerVisitor */;
static val* varonce759;
val* var760 /* : String */;
char* var761 /* : CString */;
val* var762 /* : String */;
val* var763 /* : nullable Int */;
val* var764 /* : nullable Int */;
val* var765 /* : nullable Bool */;
val* var766 /* : nullable Bool */;
static val* varonce767;
val* var768 /* : String */;
char* var769 /* : CString */;
val* var770 /* : String */;
val* var771 /* : nullable Int */;
val* var772 /* : nullable Int */;
val* var773 /* : nullable Bool */;
val* var774 /* : nullable Bool */;
static val* varonce775;
val* var776 /* : String */;
char* var777 /* : CString */;
val* var778 /* : String */;
val* var779 /* : nullable Int */;
val* var780 /* : nullable Int */;
val* var781 /* : nullable Bool */;
val* var782 /* : nullable Bool */;
static val* varonce783;
val* var784 /* : String */;
char* var785 /* : CString */;
val* var786 /* : String */;
val* var787 /* : nullable Int */;
val* var788 /* : nullable Int */;
val* var789 /* : nullable Bool */;
val* var790 /* : nullable Bool */;
static val* varonce791;
val* var792 /* : String */;
char* var793 /* : CString */;
val* var794 /* : String */;
val* var795 /* : nullable Int */;
val* var796 /* : nullable Int */;
val* var797 /* : nullable Bool */;
val* var798 /* : nullable Bool */;
static val* varonce799;
val* var800 /* : String */;
char* var801 /* : CString */;
val* var802 /* : String */;
val* var803 /* : nullable Int */;
val* var804 /* : nullable Int */;
val* var805 /* : nullable Bool */;
val* var806 /* : nullable Bool */;
static val* varonce807;
val* var808 /* : String */;
char* var809 /* : CString */;
val* var810 /* : String */;
val* var811 /* : nullable Int */;
val* var812 /* : nullable Int */;
val* var813 /* : nullable Bool */;
val* var814 /* : nullable Bool */;
static val* varonce815;
val* var816 /* : String */;
char* var817 /* : CString */;
val* var818 /* : String */;
val* var819 /* : nullable Int */;
val* var820 /* : nullable Int */;
val* var821 /* : nullable Bool */;
val* var822 /* : nullable Bool */;
static val* varonce823;
val* var824 /* : String */;
char* var825 /* : CString */;
val* var826 /* : String */;
val* var827 /* : nullable Int */;
val* var828 /* : nullable Int */;
val* var829 /* : nullable Bool */;
val* var830 /* : nullable Bool */;
static val* varonce831;
val* var832 /* : String */;
char* var833 /* : CString */;
val* var834 /* : String */;
val* var835 /* : nullable Int */;
val* var836 /* : nullable Int */;
val* var837 /* : nullable Bool */;
val* var838 /* : nullable Bool */;
static val* varonce839;
val* var840 /* : String */;
char* var841 /* : CString */;
val* var842 /* : String */;
val* var843 /* : nullable Int */;
val* var844 /* : nullable Int */;
val* var845 /* : nullable Bool */;
val* var846 /* : nullable Bool */;
static val* varonce847;
val* var848 /* : String */;
char* var849 /* : CString */;
val* var850 /* : String */;
val* var851 /* : nullable Int */;
val* var852 /* : nullable Int */;
val* var853 /* : nullable Bool */;
val* var854 /* : nullable Bool */;
static val* varonce855;
val* var856 /* : String */;
char* var857 /* : CString */;
val* var858 /* : String */;
val* var859 /* : nullable Int */;
val* var860 /* : nullable Int */;
val* var861 /* : nullable Bool */;
val* var862 /* : nullable Bool */;
static val* varonce863;
val* var864 /* : String */;
char* var865 /* : CString */;
val* var866 /* : String */;
val* var867 /* : nullable Int */;
val* var868 /* : nullable Int */;
val* var869 /* : nullable Bool */;
val* var870 /* : nullable Bool */;
static val* varonce871;
val* var872 /* : String */;
char* var873 /* : CString */;
val* var874 /* : String */;
val* var875 /* : nullable Int */;
val* var876 /* : nullable Int */;
val* var877 /* : nullable Bool */;
val* var878 /* : nullable Bool */;
val* var879 /* : MModule */;
val* var881 /* : MModule */;
val* var882 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
short int var883 /* : Bool */;
short int var884 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var886 /* : Bool */;
short int var887 /* : Bool */;
val* var888 /* : AbstractCompiler */;
val* var890 /* : AbstractCompiler */;
val* var891 /* : MModule */;
val* var893 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var894 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
val* var896 /* : NativeArray[String] */;
static val* varonce895;
static val* varonce897;
val* var898 /* : String */;
char* var899 /* : CString */;
val* var900 /* : String */;
val* var901 /* : nullable Int */;
val* var902 /* : nullable Int */;
val* var903 /* : nullable Bool */;
val* var904 /* : nullable Bool */;
static val* varonce905;
val* var906 /* : String */;
char* var907 /* : CString */;
val* var908 /* : String */;
val* var909 /* : nullable Int */;
val* var910 /* : nullable Int */;
val* var911 /* : nullable Bool */;
val* var912 /* : nullable Bool */;
val* var913 /* : String */;
val* var914 /* : String */;
static val* varonce915;
val* var916 /* : String */;
char* var917 /* : CString */;
val* var918 /* : String */;
val* var919 /* : nullable Int */;
val* var920 /* : nullable Int */;
val* var921 /* : nullable Bool */;
val* var922 /* : nullable Bool */;
val* var923 /* : MClass */;
val* var925 /* : MClass */;
val* var926 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
short int var927 /* : Bool */;
short int var928 /* : Bool */;
short int var930 /* : Bool */;
short int var931 /* : Bool */;
val* var932 /* : Array[RuntimeVariable] */;
val* var_933 /* var : Array[RuntimeVariable] */;
val* var934 /* : nullable RuntimeVariable */;
val* var935 /* : nullable MMethod */;
static val* varonce936;
val* var937 /* : String */;
char* var938 /* : CString */;
val* var939 /* : String */;
val* var940 /* : nullable Int */;
val* var941 /* : nullable Int */;
val* var942 /* : nullable Bool */;
val* var943 /* : nullable Bool */;
val* var944 /* : MClass */;
val* var946 /* : MClass */;
val* var947 /* : nullable MMethod */;
static val* varonce948;
val* var949 /* : String */;
char* var950 /* : CString */;
val* var951 /* : String */;
val* var952 /* : nullable Int */;
val* var953 /* : nullable Int */;
val* var954 /* : nullable Bool */;
val* var955 /* : nullable Bool */;
val* var956 /* : MClass */;
val* var958 /* : MClass */;
val* var959 /* : nullable MMethod */;
val* var_main_method /* var main_method: nullable MMethod */;
short int var960 /* : Bool */;
short int var961 /* : Bool */;
short int var963 /* : Bool */;
short int var964 /* : Bool */;
val* var965 /* : Array[RuntimeVariable] */;
val* var_966 /* var : Array[RuntimeVariable] */;
val* var967 /* : nullable RuntimeVariable */;
val* var968 /* : ModelBuilder */;
val* var970 /* : ModelBuilder */;
val* var971 /* : ToolContext */;
val* var973 /* : ToolContext */;
val* var974 /* : OptionBool */;
val* var976 /* : OptionBool */;
val* var977 /* : nullable Object */;
val* var979 /* : nullable Object */;
short int var980 /* : Bool */;
static val* varonce981;
val* var982 /* : String */;
char* var983 /* : CString */;
val* var984 /* : String */;
val* var985 /* : nullable Int */;
val* var986 /* : nullable Int */;
val* var987 /* : nullable Bool */;
val* var988 /* : nullable Bool */;
static val* varonce989;
val* var990 /* : String */;
char* var991 /* : CString */;
val* var992 /* : String */;
val* var993 /* : nullable Int */;
val* var994 /* : nullable Int */;
val* var995 /* : nullable Bool */;
val* var996 /* : nullable Bool */;
static val* varonce997;
val* var998 /* : String */;
char* var999 /* : CString */;
val* var1000 /* : String */;
val* var1001 /* : nullable Int */;
val* var1002 /* : nullable Int */;
val* var1003 /* : nullable Bool */;
val* var1004 /* : nullable Bool */;
static val* varonce1005;
val* var1006 /* : String */;
char* var1007 /* : CString */;
val* var1008 /* : String */;
val* var1009 /* : nullable Int */;
val* var1010 /* : nullable Int */;
val* var1011 /* : nullable Bool */;
val* var1012 /* : nullable Bool */;
val* var1013 /* : Array[String] */;
val* var1015 /* : Array[String] */;
val* var_1016 /* var : Array[String] */;
val* var1017 /* : IndexedIterator[nullable Object] */;
val* var_1018 /* var : IndexedIterator[String] */;
short int var1019 /* : Bool */;
val* var1021 /* : nullable Object */;
val* var_tag1022 /* var tag: String */;
val* var1024 /* : NativeArray[String] */;
static val* varonce1023;
static val* varonce1025;
val* var1026 /* : String */;
char* var1027 /* : CString */;
val* var1028 /* : String */;
val* var1029 /* : nullable Int */;
val* var1030 /* : nullable Int */;
val* var1031 /* : nullable Bool */;
val* var1032 /* : nullable Bool */;
static val* varonce1033;
val* var1034 /* : String */;
char* var1035 /* : CString */;
val* var1036 /* : String */;
val* var1037 /* : nullable Int */;
val* var1038 /* : nullable Int */;
val* var1039 /* : nullable Bool */;
val* var1040 /* : nullable Bool */;
val* var1041 /* : String */;
val* var1043 /* : NativeArray[String] */;
static val* varonce1042;
static val* varonce1044;
val* var1045 /* : String */;
char* var1046 /* : CString */;
val* var1047 /* : String */;
val* var1048 /* : nullable Int */;
val* var1049 /* : nullable Int */;
val* var1050 /* : nullable Bool */;
val* var1051 /* : nullable Bool */;
static val* varonce1052;
val* var1053 /* : String */;
char* var1054 /* : CString */;
val* var1055 /* : String */;
val* var1056 /* : nullable Int */;
val* var1057 /* : nullable Int */;
val* var1058 /* : nullable Bool */;
val* var1059 /* : nullable Bool */;
static val* varonce1060;
val* var1061 /* : String */;
char* var1062 /* : CString */;
val* var1063 /* : String */;
val* var1064 /* : nullable Int */;
val* var1065 /* : nullable Int */;
val* var1066 /* : nullable Bool */;
val* var1067 /* : nullable Bool */;
static val* varonce1068;
val* var1069 /* : String */;
char* var1070 /* : CString */;
val* var1071 /* : String */;
val* var1072 /* : nullable Int */;
val* var1073 /* : nullable Int */;
val* var1074 /* : nullable Bool */;
val* var1075 /* : nullable Bool */;
static val* varonce1076;
val* var1077 /* : String */;
char* var1078 /* : CString */;
val* var1079 /* : String */;
val* var1080 /* : nullable Int */;
val* var1081 /* : nullable Int */;
val* var1082 /* : nullable Bool */;
val* var1083 /* : nullable Bool */;
val* var1084 /* : String */;
val* var1086 /* : NativeArray[String] */;
static val* varonce1085;
static val* varonce1087;
val* var1088 /* : String */;
char* var1089 /* : CString */;
val* var1090 /* : String */;
val* var1091 /* : nullable Int */;
val* var1092 /* : nullable Int */;
val* var1093 /* : nullable Bool */;
val* var1094 /* : nullable Bool */;
static val* varonce1095;
val* var1096 /* : String */;
char* var1097 /* : CString */;
val* var1098 /* : String */;
val* var1099 /* : nullable Int */;
val* var1100 /* : nullable Int */;
val* var1101 /* : nullable Bool */;
val* var1102 /* : nullable Bool */;
val* var1103 /* : String */;
val* var1105 /* : NativeArray[String] */;
static val* varonce1104;
static val* varonce1106;
val* var1107 /* : String */;
char* var1108 /* : CString */;
val* var1109 /* : String */;
val* var1110 /* : nullable Int */;
val* var1111 /* : nullable Int */;
val* var1112 /* : nullable Bool */;
val* var1113 /* : nullable Bool */;
static val* varonce1114;
val* var1115 /* : String */;
char* var1116 /* : CString */;
val* var1117 /* : String */;
val* var1118 /* : nullable Int */;
val* var1119 /* : nullable Int */;
val* var1120 /* : nullable Bool */;
val* var1121 /* : nullable Bool */;
val* var1122 /* : String */;
val* var1124 /* : NativeArray[String] */;
static val* varonce1123;
static val* varonce1125;
val* var1126 /* : String */;
char* var1127 /* : CString */;
val* var1128 /* : String */;
val* var1129 /* : nullable Int */;
val* var1130 /* : nullable Int */;
val* var1131 /* : nullable Bool */;
val* var1132 /* : nullable Bool */;
static val* varonce1133;
val* var1134 /* : String */;
char* var1135 /* : CString */;
val* var1136 /* : String */;
val* var1137 /* : nullable Int */;
val* var1138 /* : nullable Int */;
val* var1139 /* : nullable Bool */;
val* var1140 /* : nullable Bool */;
val* var1141 /* : String */;
val* var1143 /* : NativeArray[String] */;
static val* varonce1142;
static val* varonce1144;
val* var1145 /* : String */;
char* var1146 /* : CString */;
val* var1147 /* : String */;
val* var1148 /* : nullable Int */;
val* var1149 /* : nullable Int */;
val* var1150 /* : nullable Bool */;
val* var1151 /* : nullable Bool */;
static val* varonce1152;
val* var1153 /* : String */;
char* var1154 /* : CString */;
val* var1155 /* : String */;
val* var1156 /* : nullable Int */;
val* var1157 /* : nullable Int */;
val* var1158 /* : nullable Bool */;
val* var1159 /* : nullable Bool */;
val* var1160 /* : String */;
static val* varonce1161;
val* var1162 /* : String */;
char* var1163 /* : CString */;
val* var1164 /* : String */;
val* var1165 /* : nullable Int */;
val* var1166 /* : nullable Int */;
val* var1167 /* : nullable Bool */;
val* var1168 /* : nullable Bool */;
static val* varonce1169;
val* var1170 /* : String */;
char* var1171 /* : CString */;
val* var1172 /* : String */;
val* var1173 /* : nullable Int */;
val* var1174 /* : nullable Int */;
val* var1175 /* : nullable Bool */;
val* var1176 /* : nullable Bool */;
val* var1177 /* : Array[String] */;
val* var1179 /* : Array[String] */;
val* var1180 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce1181;
val* var1182 /* : String */;
char* var1183 /* : CString */;
val* var1184 /* : String */;
val* var1185 /* : nullable Int */;
val* var1186 /* : nullable Int */;
val* var1187 /* : nullable Bool */;
val* var1188 /* : nullable Bool */;
val* var_1189 /* var : Array[String] */;
val* var1190 /* : IndexedIterator[nullable Object] */;
val* var_1191 /* var : IndexedIterator[String] */;
short int var1192 /* : Bool */;
val* var1194 /* : nullable Object */;
val* var_tag1195 /* var tag: String */;
val* var1197 /* : NativeArray[String] */;
static val* varonce1196;
static val* varonce1198;
val* var1199 /* : String */;
char* var1200 /* : CString */;
val* var1201 /* : String */;
val* var1202 /* : nullable Int */;
val* var1203 /* : nullable Int */;
val* var1204 /* : nullable Bool */;
val* var1205 /* : nullable Bool */;
static val* varonce1206;
val* var1207 /* : String */;
char* var1208 /* : CString */;
val* var1209 /* : String */;
val* var1210 /* : nullable Int */;
val* var1211 /* : nullable Int */;
val* var1212 /* : nullable Bool */;
val* var1213 /* : nullable Bool */;
val* var1214 /* : String */;
val* var1216 /* : NativeArray[String] */;
static val* varonce1215;
static val* varonce1217;
val* var1218 /* : String */;
char* var1219 /* : CString */;
val* var1220 /* : String */;
val* var1221 /* : nullable Int */;
val* var1222 /* : nullable Int */;
val* var1223 /* : nullable Bool */;
val* var1224 /* : nullable Bool */;
static val* varonce1225;
val* var1226 /* : String */;
char* var1227 /* : CString */;
val* var1228 /* : String */;
val* var1229 /* : nullable Int */;
val* var1230 /* : nullable Int */;
val* var1231 /* : nullable Bool */;
val* var1232 /* : nullable Bool */;
static val* varonce1233;
val* var1234 /* : String */;
char* var1235 /* : CString */;
val* var1236 /* : String */;
val* var1237 /* : nullable Int */;
val* var1238 /* : nullable Int */;
val* var1239 /* : nullable Bool */;
val* var1240 /* : nullable Bool */;
val* var1241 /* : String */;
val* var1243 /* : NativeArray[String] */;
static val* varonce1242;
static val* varonce1244;
val* var1245 /* : String */;
char* var1246 /* : CString */;
val* var1247 /* : String */;
val* var1248 /* : nullable Int */;
val* var1249 /* : nullable Int */;
val* var1250 /* : nullable Bool */;
val* var1251 /* : nullable Bool */;
static val* varonce1252;
val* var1253 /* : String */;
char* var1254 /* : CString */;
val* var1255 /* : String */;
val* var1256 /* : nullable Int */;
val* var1257 /* : nullable Int */;
val* var1258 /* : nullable Bool */;
val* var1259 /* : nullable Bool */;
static val* varonce1260;
val* var1261 /* : String */;
char* var1262 /* : CString */;
val* var1263 /* : String */;
val* var1264 /* : nullable Int */;
val* var1265 /* : nullable Int */;
val* var1266 /* : nullable Bool */;
val* var1267 /* : nullable Bool */;
val* var1268 /* : String */;
val* var1270 /* : NativeArray[String] */;
static val* varonce1269;
static val* varonce1271;
val* var1272 /* : String */;
char* var1273 /* : CString */;
val* var1274 /* : String */;
val* var1275 /* : nullable Int */;
val* var1276 /* : nullable Int */;
val* var1277 /* : nullable Bool */;
val* var1278 /* : nullable Bool */;
static val* varonce1279;
val* var1280 /* : String */;
char* var1281 /* : CString */;
val* var1282 /* : String */;
val* var1283 /* : nullable Int */;
val* var1284 /* : nullable Int */;
val* var1285 /* : nullable Bool */;
val* var1286 /* : nullable Bool */;
static val* varonce1287;
val* var1288 /* : String */;
char* var1289 /* : CString */;
val* var1290 /* : String */;
val* var1291 /* : nullable Int */;
val* var1292 /* : nullable Int */;
val* var1293 /* : nullable Bool */;
val* var1294 /* : nullable Bool */;
val* var1295 /* : String */;
val* var1297 /* : NativeArray[String] */;
static val* varonce1296;
static val* varonce1298;
val* var1299 /* : String */;
char* var1300 /* : CString */;
val* var1301 /* : String */;
val* var1302 /* : nullable Int */;
val* var1303 /* : nullable Int */;
val* var1304 /* : nullable Bool */;
val* var1305 /* : nullable Bool */;
static val* varonce1306;
val* var1307 /* : String */;
char* var1308 /* : CString */;
val* var1309 /* : String */;
val* var1310 /* : nullable Int */;
val* var1311 /* : nullable Int */;
val* var1312 /* : nullable Bool */;
val* var1313 /* : nullable Bool */;
static val* varonce1314;
val* var1315 /* : String */;
char* var1316 /* : CString */;
val* var1317 /* : String */;
val* var1318 /* : nullable Int */;
val* var1319 /* : nullable Int */;
val* var1320 /* : nullable Bool */;
val* var1321 /* : nullable Bool */;
val* var1322 /* : String */;
val* var1323 /* : ModelBuilder */;
val* var1325 /* : ModelBuilder */;
val* var1326 /* : ToolContext */;
val* var1328 /* : ToolContext */;
val* var1329 /* : OptionBool */;
val* var1331 /* : OptionBool */;
val* var1332 /* : nullable Object */;
val* var1334 /* : nullable Object */;
short int var1335 /* : Bool */;
static val* varonce1336;
val* var1337 /* : String */;
char* var1338 /* : CString */;
val* var1339 /* : String */;
val* var1340 /* : nullable Int */;
val* var1341 /* : nullable Int */;
val* var1342 /* : nullable Bool */;
val* var1343 /* : nullable Bool */;
static val* varonce1344;
val* var1345 /* : String */;
char* var1346 /* : CString */;
val* var1347 /* : String */;
val* var1348 /* : nullable Int */;
val* var1349 /* : nullable Int */;
val* var1350 /* : nullable Bool */;
val* var1351 /* : nullable Bool */;
static val* varonce1352;
val* var1353 /* : String */;
char* var1354 /* : CString */;
val* var1355 /* : String */;
val* var1356 /* : nullable Int */;
val* var1357 /* : nullable Int */;
val* var1358 /* : nullable Bool */;
val* var1359 /* : nullable Bool */;
static val* varonce1360;
val* var1361 /* : String */;
char* var1362 /* : CString */;
val* var1363 /* : String */;
val* var1364 /* : nullable Int */;
val* var1365 /* : nullable Int */;
val* var1366 /* : nullable Bool */;
val* var1367 /* : nullable Bool */;
static val* varonce1368;
val* var1369 /* : String */;
char* var1370 /* : CString */;
val* var1371 /* : String */;
val* var1372 /* : nullable Int */;
val* var1373 /* : nullable Int */;
val* var1374 /* : nullable Bool */;
val* var1375 /* : nullable Bool */;
static val* varonce1376;
val* var1377 /* : String */;
char* var1378 /* : CString */;
val* var1379 /* : String */;
val* var1380 /* : nullable Int */;
val* var1381 /* : nullable Int */;
val* var1382 /* : nullable Bool */;
val* var1383 /* : nullable Bool */;
val* var1384 /* : ModelBuilder */;
val* var1386 /* : ModelBuilder */;
val* var1387 /* : ToolContext */;
val* var1389 /* : ToolContext */;
val* var1390 /* : OptionBool */;
val* var1392 /* : OptionBool */;
val* var1393 /* : nullable Object */;
val* var1395 /* : nullable Object */;
short int var1396 /* : Bool */;
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
static val* varonce1413;
val* var1414 /* : String */;
char* var1415 /* : CString */;
val* var1416 /* : String */;
val* var1417 /* : nullable Int */;
val* var1418 /* : nullable Int */;
val* var1419 /* : nullable Bool */;
val* var1420 /* : nullable Bool */;
static val* varonce1421;
val* var1422 /* : String */;
char* var1423 /* : CString */;
val* var1424 /* : String */;
val* var1425 /* : nullable Int */;
val* var1426 /* : nullable Int */;
val* var1427 /* : nullable Bool */;
val* var1428 /* : nullable Bool */;
val* var1429 /* : MModule */;
val* var1431 /* : MModule */;
val* var1432 /* : POSetElement[MModule] */;
val* var1434 /* : POSetElement[MModule] */;
val* var1435 /* : Collection[nullable Object] */;
val* var_1436 /* var : Collection[MModule] */;
val* var1437 /* : Iterator[nullable Object] */;
val* var_1438 /* var : Iterator[MModule] */;
short int var1439 /* : Bool */;
val* var1441 /* : nullable Object */;
val* var_m /* var m: MModule */;
static val* varonce1442;
val* var1443 /* : String */;
char* var1444 /* : CString */;
val* var1445 /* : String */;
val* var1446 /* : nullable Int */;
val* var1447 /* : nullable Int */;
val* var1448 /* : nullable Bool */;
val* var1449 /* : nullable Bool */;
val* var1450 /* : String */;
val* var1451 /* : Text */;
val* var_f /* var f: String */;
val* var1453 /* : NativeArray[String] */;
static val* varonce1452;
static val* varonce1454;
val* var1455 /* : String */;
char* var1456 /* : CString */;
val* var1457 /* : String */;
val* var1458 /* : nullable Int */;
val* var1459 /* : nullable Int */;
val* var1460 /* : nullable Bool */;
val* var1461 /* : nullable Bool */;
static val* varonce1462;
val* var1463 /* : String */;
char* var1464 /* : CString */;
val* var1465 /* : String */;
val* var1466 /* : nullable Int */;
val* var1467 /* : nullable Int */;
val* var1468 /* : nullable Bool */;
val* var1469 /* : nullable Bool */;
static val* varonce1470;
val* var1471 /* : String */;
char* var1472 /* : CString */;
val* var1473 /* : String */;
val* var1474 /* : nullable Int */;
val* var1475 /* : nullable Int */;
val* var1476 /* : nullable Bool */;
val* var1477 /* : nullable Bool */;
val* var1478 /* : Location */;
val* var1480 /* : Location */;
val* var1481 /* : nullable SourceFile */;
val* var1483 /* : nullable SourceFile */;
val* var1484 /* : String */;
val* var1486 /* : String */;
val* var1487 /* : String */;
val* var1488 /* : String */;
val* var1490 /* : NativeArray[String] */;
static val* varonce1489;
static val* varonce1491;
val* var1492 /* : String */;
char* var1493 /* : CString */;
val* var1494 /* : String */;
val* var1495 /* : nullable Int */;
val* var1496 /* : nullable Int */;
val* var1497 /* : nullable Bool */;
val* var1498 /* : nullable Bool */;
static val* varonce1499;
val* var1500 /* : String */;
char* var1501 /* : CString */;
val* var1502 /* : String */;
val* var1503 /* : nullable Int */;
val* var1504 /* : nullable Int */;
val* var1505 /* : nullable Bool */;
val* var1506 /* : nullable Bool */;
val* var1507 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "#include <signal.h>";
var4 = (val*)(19l<<2|1);
var5 = (val*)(19l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$target_platform (self) on <self:AbstractCompiler> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <self:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 563);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_platform = var8;
{
var12 = nitc___nitc__Platform___no_main(var_platform);
}
var_ = var12;
if (var12){
var11 = var_;
} else {
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
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
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var13) on <var13:ModelBuilder> */
var18 = var13->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var13:ModelBuilder> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_main (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 36);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts$Option$value (var19) on <var19:OptionBool> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionBool> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = (short int)((long)(var22)>>2);
var11 = var25;
}
var_no_main = var11;
{
var26 = nitc___nitc__Platform___supports_libunwind(var_platform);
}
if (var26){
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "#ifndef NO_STACKTRACE";
var31 = (val*)(21l<<2|1);
var32 = (val*)(21l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var28); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "#define UNW_LOCAL_ONLY";
var39 = (val*)(22l<<2|1);
var40 = (val*)(22l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var36); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "#include <libunwind.h>";
var47 = (val*)(22l<<2|1);
var48 = (val*)(22l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var44); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "#include \"c_functions_hash.h\"";
var55 = (val*)(29l<<2|1);
var56 = (val*)(29l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var52); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "#endif";
var63 = (val*)(6l<<2|1);
var64 = (val*)(6l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var60); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "int glob_argc;";
var71 = (val*)(14l<<2|1);
var72 = (val*)(14l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var68); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "char **glob_argv;";
var79 = (val*)(17l<<2|1);
var80 = (val*)(17l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var76); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "val *glob_sys;";
var87 = (val*)(14l<<2|1);
var88 = (val*)(14l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var84); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "struct catch_stack_t catchStack;";
var95 = (val*)(32l<<2|1);
var96 = (val*)(32l<<2|1);
var97 = (val*)((long)(0)<<2|3);
var98 = (val*)((long)(0)<<2|3);
var94 = core__flat___CString___to_s_unsafe(var93, var95, var96, var97, var98);
var92 = var94;
varonce91 = var92;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var92); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var101 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var99) on <var99:ModelBuilder> */
var104 = var99->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var99:ModelBuilder> */
if (unlikely(var104 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var102) on <var102:ToolContext> */
var107 = var102->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var102:ToolContext> */
if (unlikely(var107 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline opts$Option$value (var105) on <var105:OptionBool> */
var110 = var105->attrs[COLOR_opts__Option___value].val; /* _value on <var105:OptionBool> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
var111 = (short int)((long)(var108)>>2);
if (var111){
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var114 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var114 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1110);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
var_115 = var112;
{
var116 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_115);
}
var_117 = var116;
for(;;) {
{
var118 = ((short int(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_117); /* is_ok on <var_117:IndexedIterator[String]>*/
}
if (var118){
} else {
goto BREAK_label;
}
{
var119 = ((val*(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_117); /* item on <var_117:IndexedIterator[String]>*/
}
var_tag = var119;
if (unlikely(varonce120==NULL)) {
var121 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "long count_type_test_resolved_";
var126 = (val*)(30l<<2|1);
var127 = (val*)(30l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var121)->values[0]=var123;
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = ";";
var134 = (val*)(1l<<2|1);
var135 = (val*)(1l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var121)->values[2]=var131;
} else {
var121 = varonce120;
varonce120 = NULL;
}
((struct instance_core__NativeArray*)var121)->values[1]=var_tag;
{
var138 = ((val*(*)(val* self))(var121->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var121); /* native_to_s on <var121:NativeArray[String]>*/
}
varonce120 = var121;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var138); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce139==NULL)) {
var140 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "long count_type_test_unresolved_";
var145 = (val*)(32l<<2|1);
var146 = (val*)(32l<<2|1);
var147 = (val*)((long)(0)<<2|3);
var148 = (val*)((long)(0)<<2|3);
var144 = core__flat___CString___to_s_unsafe(var143, var145, var146, var147, var148);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var140)->values[0]=var142;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = ";";
var153 = (val*)(1l<<2|1);
var154 = (val*)(1l<<2|1);
var155 = (val*)((long)(0)<<2|3);
var156 = (val*)((long)(0)<<2|3);
var152 = core__flat___CString___to_s_unsafe(var151, var153, var154, var155, var156);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var140)->values[2]=var150;
} else {
var140 = varonce139;
varonce139 = NULL;
}
((struct instance_core__NativeArray*)var140)->values[1]=var_tag;
{
var157 = ((val*(*)(val* self))(var140->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var140); /* native_to_s on <var140:NativeArray[String]>*/
}
varonce139 = var140;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var157); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce158==NULL)) {
var159 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "long count_type_test_skipped_";
var164 = (val*)(29l<<2|1);
var165 = (val*)(29l<<2|1);
var166 = (val*)((long)(0)<<2|3);
var167 = (val*)((long)(0)<<2|3);
var163 = core__flat___CString___to_s_unsafe(var162, var164, var165, var166, var167);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var159)->values[0]=var161;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = ";";
var172 = (val*)(1l<<2|1);
var173 = (val*)(1l<<2|1);
var174 = (val*)((long)(0)<<2|3);
var175 = (val*)((long)(0)<<2|3);
var171 = core__flat___CString___to_s_unsafe(var170, var172, var173, var174, var175);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var159)->values[2]=var169;
} else {
var159 = varonce158;
varonce158 = NULL;
}
((struct instance_core__NativeArray*)var159)->values[1]=var_tag;
{
var176 = ((val*(*)(val* self))(var159->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var159); /* native_to_s on <var159:NativeArray[String]>*/
}
varonce158 = var159;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var176); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var179 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var179 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var177) on <var177:AbstractCompiler> */
var182 = var177->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var177:AbstractCompiler> */
if (unlikely(var182 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
if (unlikely(varonce183==NULL)) {
var184 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "extern long count_type_test_resolved_";
var189 = (val*)(37l<<2|1);
var190 = (val*)(37l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var184)->values[0]=var186;
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
((struct instance_core__NativeArray*)var184)->values[2]=var194;
} else {
var184 = varonce183;
varonce183 = NULL;
}
((struct instance_core__NativeArray*)var184)->values[1]=var_tag;
{
var201 = ((val*(*)(val* self))(var184->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var184); /* native_to_s on <var184:NativeArray[String]>*/
}
varonce183 = var184;
{
nitc___nitc__CodeWriter___add_decl(var180, var201); /* Direct call abstract_compiler$CodeWriter$add_decl on <var180:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var204 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var204 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var202) on <var202:AbstractCompiler> */
var207 = var202->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var202:AbstractCompiler> */
if (unlikely(var207 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
if (unlikely(varonce208==NULL)) {
var209 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "extern long count_type_test_unresolved_";
var214 = (val*)(39l<<2|1);
var215 = (val*)(39l<<2|1);
var216 = (val*)((long)(0)<<2|3);
var217 = (val*)((long)(0)<<2|3);
var213 = core__flat___CString___to_s_unsafe(var212, var214, var215, var216, var217);
var211 = var213;
varonce210 = var211;
}
((struct instance_core__NativeArray*)var209)->values[0]=var211;
if (likely(varonce218!=NULL)) {
var219 = varonce218;
} else {
var220 = ";";
var222 = (val*)(1l<<2|1);
var223 = (val*)(1l<<2|1);
var224 = (val*)((long)(0)<<2|3);
var225 = (val*)((long)(0)<<2|3);
var221 = core__flat___CString___to_s_unsafe(var220, var222, var223, var224, var225);
var219 = var221;
varonce218 = var219;
}
((struct instance_core__NativeArray*)var209)->values[2]=var219;
} else {
var209 = varonce208;
varonce208 = NULL;
}
((struct instance_core__NativeArray*)var209)->values[1]=var_tag;
{
var226 = ((val*(*)(val* self))(var209->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var209); /* native_to_s on <var209:NativeArray[String]>*/
}
varonce208 = var209;
{
nitc___nitc__CodeWriter___add_decl(var205, var226); /* Direct call abstract_compiler$CodeWriter$add_decl on <var205:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var229 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var229 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var227 = var229;
RET_LABEL228:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var227) on <var227:AbstractCompiler> */
var232 = var227->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var227:AbstractCompiler> */
if (unlikely(var232 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
if (unlikely(varonce233==NULL)) {
var234 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce235!=NULL)) {
var236 = varonce235;
} else {
var237 = "extern long count_type_test_skipped_";
var239 = (val*)(36l<<2|1);
var240 = (val*)(36l<<2|1);
var241 = (val*)((long)(0)<<2|3);
var242 = (val*)((long)(0)<<2|3);
var238 = core__flat___CString___to_s_unsafe(var237, var239, var240, var241, var242);
var236 = var238;
varonce235 = var236;
}
((struct instance_core__NativeArray*)var234)->values[0]=var236;
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = ";";
var247 = (val*)(1l<<2|1);
var248 = (val*)(1l<<2|1);
var249 = (val*)((long)(0)<<2|3);
var250 = (val*)((long)(0)<<2|3);
var246 = core__flat___CString___to_s_unsafe(var245, var247, var248, var249, var250);
var244 = var246;
varonce243 = var244;
}
((struct instance_core__NativeArray*)var234)->values[2]=var244;
} else {
var234 = varonce233;
varonce233 = NULL;
}
((struct instance_core__NativeArray*)var234)->values[1]=var_tag;
{
var251 = ((val*(*)(val* self))(var234->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var234); /* native_to_s on <var234:NativeArray[String]>*/
}
varonce233 = var234;
{
nitc___nitc__CodeWriter___add_decl(var230, var251); /* Direct call abstract_compiler$CodeWriter$add_decl on <var230:CodeWriter>*/
}
{
((void(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_117); /* next on <var_117:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_117); /* finish on <var_117:IndexedIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var254 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var254 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var252) on <var252:ModelBuilder> */
var257 = var252->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var252:ModelBuilder> */
if (unlikely(var257 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (var255) on <var255:ToolContext> */
var260 = var255->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var255:ToolContext> */
if (unlikely(var260 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
{ /* Inline opts$Option$value (var258) on <var258:OptionBool> */
var263 = var258->attrs[COLOR_opts__Option___value].val; /* _value on <var258:OptionBool> */
var261 = var263;
RET_LABEL262:(void)0;
}
}
var264 = (short int)((long)(var261)>>2);
if (var264){
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "long count_invoke_by_tables;";
var269 = (val*)(28l<<2|1);
var270 = (val*)(28l<<2|1);
var271 = (val*)((long)(0)<<2|3);
var272 = (val*)((long)(0)<<2|3);
var268 = core__flat___CString___to_s_unsafe(var267, var269, var270, var271, var272);
var266 = var268;
varonce265 = var266;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var266); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "long count_invoke_by_direct;";
var277 = (val*)(28l<<2|1);
var278 = (val*)(28l<<2|1);
var279 = (val*)((long)(0)<<2|3);
var280 = (val*)((long)(0)<<2|3);
var276 = core__flat___CString___to_s_unsafe(var275, var277, var278, var279, var280);
var274 = var276;
varonce273 = var274;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var274); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "long count_invoke_by_inline;";
var285 = (val*)(28l<<2|1);
var286 = (val*)(28l<<2|1);
var287 = (val*)((long)(0)<<2|3);
var288 = (val*)((long)(0)<<2|3);
var284 = core__flat___CString___to_s_unsafe(var283, var285, var286, var287, var288);
var282 = var284;
varonce281 = var282;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var282); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var291 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var291 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var289 = var291;
RET_LABEL290:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var289) on <var289:AbstractCompiler> */
var294 = var289->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var289:AbstractCompiler> */
if (unlikely(var294 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "extern long count_invoke_by_tables;";
var299 = (val*)(35l<<2|1);
var300 = (val*)(35l<<2|1);
var301 = (val*)((long)(0)<<2|3);
var302 = (val*)((long)(0)<<2|3);
var298 = core__flat___CString___to_s_unsafe(var297, var299, var300, var301, var302);
var296 = var298;
varonce295 = var296;
}
{
nitc___nitc__CodeWriter___add_decl(var292, var296); /* Direct call abstract_compiler$CodeWriter$add_decl on <var292:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var305 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var305 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var303) on <var303:AbstractCompiler> */
var308 = var303->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var303:AbstractCompiler> */
if (unlikely(var308 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = "extern long count_invoke_by_direct;";
var313 = (val*)(35l<<2|1);
var314 = (val*)(35l<<2|1);
var315 = (val*)((long)(0)<<2|3);
var316 = (val*)((long)(0)<<2|3);
var312 = core__flat___CString___to_s_unsafe(var311, var313, var314, var315, var316);
var310 = var312;
varonce309 = var310;
}
{
nitc___nitc__CodeWriter___add_decl(var306, var310); /* Direct call abstract_compiler$CodeWriter$add_decl on <var306:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var319 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var319 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var317 = var319;
RET_LABEL318:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var317) on <var317:AbstractCompiler> */
var322 = var317->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var317:AbstractCompiler> */
if (unlikely(var322 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = "extern long count_invoke_by_inline;";
var327 = (val*)(35l<<2|1);
var328 = (val*)(35l<<2|1);
var329 = (val*)((long)(0)<<2|3);
var330 = (val*)((long)(0)<<2|3);
var326 = core__flat___CString___to_s_unsafe(var325, var327, var328, var329, var330);
var324 = var326;
varonce323 = var324;
}
{
nitc___nitc__CodeWriter___add_decl(var320, var324); /* Direct call abstract_compiler$CodeWriter$add_decl on <var320:CodeWriter>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var333 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var333 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var331) on <var331:ModelBuilder> */
var336 = var331->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var331:ModelBuilder> */
if (unlikely(var336 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_isset_checks_metrics (var334) on <var334:ToolContext> */
var339 = var334->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var334:ToolContext> */
if (unlikely(var339 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
{
{ /* Inline opts$Option$value (var337) on <var337:OptionBool> */
var342 = var337->attrs[COLOR_opts__Option___value].val; /* _value on <var337:OptionBool> */
var340 = var342;
RET_LABEL341:(void)0;
}
}
var343 = (short int)((long)(var340)>>2);
if (var343){
if (likely(varonce344!=NULL)) {
var345 = varonce344;
} else {
var346 = "long count_attr_reads = 0;";
var348 = (val*)(26l<<2|1);
var349 = (val*)(26l<<2|1);
var350 = (val*)((long)(0)<<2|3);
var351 = (val*)((long)(0)<<2|3);
var347 = core__flat___CString___to_s_unsafe(var346, var348, var349, var350, var351);
var345 = var347;
varonce344 = var345;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var345); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = "long count_isset_checks = 0;";
var356 = (val*)(28l<<2|1);
var357 = (val*)(28l<<2|1);
var358 = (val*)((long)(0)<<2|3);
var359 = (val*)((long)(0)<<2|3);
var355 = core__flat___CString___to_s_unsafe(var354, var356, var357, var358, var359);
var353 = var355;
varonce352 = var353;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var353); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var362 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var362 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var360 = var362;
RET_LABEL361:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var360) on <var360:AbstractCompiler> */
var365 = var360->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var360:AbstractCompiler> */
if (unlikely(var365 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var363 = var365;
RET_LABEL364:(void)0;
}
}
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = "extern long count_attr_reads;";
var370 = (val*)(29l<<2|1);
var371 = (val*)(29l<<2|1);
var372 = (val*)((long)(0)<<2|3);
var373 = (val*)((long)(0)<<2|3);
var369 = core__flat___CString___to_s_unsafe(var368, var370, var371, var372, var373);
var367 = var369;
varonce366 = var367;
}
{
nitc___nitc__CodeWriter___add_decl(var363, var367); /* Direct call abstract_compiler$CodeWriter$add_decl on <var363:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var376 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var376 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var374 = var376;
RET_LABEL375:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var374) on <var374:AbstractCompiler> */
var379 = var374->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var374:AbstractCompiler> */
if (unlikely(var379 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var377 = var379;
RET_LABEL378:(void)0;
}
}
if (likely(varonce380!=NULL)) {
var381 = varonce380;
} else {
var382 = "extern long count_isset_checks;";
var384 = (val*)(31l<<2|1);
var385 = (val*)(31l<<2|1);
var386 = (val*)((long)(0)<<2|3);
var387 = (val*)((long)(0)<<2|3);
var383 = core__flat___CString___to_s_unsafe(var382, var384, var385, var386, var387);
var381 = var383;
varonce380 = var381;
}
{
nitc___nitc__CodeWriter___add_decl(var377, var381); /* Direct call abstract_compiler$CodeWriter$add_decl on <var377:CodeWriter>*/
}
} else {
}
if (likely(varonce388!=NULL)) {
var389 = varonce388;
} else {
var390 = "static void show_backtrace(void) {";
var392 = (val*)(34l<<2|1);
var393 = (val*)(34l<<2|1);
var394 = (val*)((long)(0)<<2|3);
var395 = (val*)((long)(0)<<2|3);
var391 = core__flat___CString___to_s_unsafe(var390, var392, var393, var394, var395);
var389 = var391;
varonce388 = var389;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var389); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var396 = nitc___nitc__Platform___supports_libunwind(var_platform);
}
if (var396){
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "#ifndef NO_STACKTRACE";
var401 = (val*)(21l<<2|1);
var402 = (val*)(21l<<2|1);
var403 = (val*)((long)(0)<<2|3);
var404 = (val*)((long)(0)<<2|3);
var400 = core__flat___CString___to_s_unsafe(var399, var401, var402, var403, var404);
var398 = var400;
varonce397 = var398;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var398); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "char* opt = getenv(\"NIT_NO_STACK\");";
var409 = (val*)(35l<<2|1);
var410 = (val*)(35l<<2|1);
var411 = (val*)((long)(0)<<2|3);
var412 = (val*)((long)(0)<<2|3);
var408 = core__flat___CString___to_s_unsafe(var407, var409, var410, var411, var412);
var406 = var408;
varonce405 = var406;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var406); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "unw_cursor_t cursor;";
var417 = (val*)(20l<<2|1);
var418 = (val*)(20l<<2|1);
var419 = (val*)((long)(0)<<2|3);
var420 = (val*)((long)(0)<<2|3);
var416 = core__flat___CString___to_s_unsafe(var415, var417, var418, var419, var420);
var414 = var416;
varonce413 = var414;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var414); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = "if(opt==NULL){";
var425 = (val*)(14l<<2|1);
var426 = (val*)(14l<<2|1);
var427 = (val*)((long)(0)<<2|3);
var428 = (val*)((long)(0)<<2|3);
var424 = core__flat___CString___to_s_unsafe(var423, var425, var426, var427, var428);
var422 = var424;
varonce421 = var422;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var422); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "unw_context_t uc;";
var433 = (val*)(17l<<2|1);
var434 = (val*)(17l<<2|1);
var435 = (val*)((long)(0)<<2|3);
var436 = (val*)((long)(0)<<2|3);
var432 = core__flat___CString___to_s_unsafe(var431, var433, var434, var435, var436);
var430 = var432;
varonce429 = var430;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var430); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce437!=NULL)) {
var438 = varonce437;
} else {
var439 = "unw_word_t ip;";
var441 = (val*)(14l<<2|1);
var442 = (val*)(14l<<2|1);
var443 = (val*)((long)(0)<<2|3);
var444 = (val*)((long)(0)<<2|3);
var440 = core__flat___CString___to_s_unsafe(var439, var441, var442, var443, var444);
var438 = var440;
varonce437 = var438;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var438); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = "char* procname = malloc(sizeof(char) * 100);";
var449 = (val*)(44l<<2|1);
var450 = (val*)(44l<<2|1);
var451 = (val*)((long)(0)<<2|3);
var452 = (val*)((long)(0)<<2|3);
var448 = core__flat___CString___to_s_unsafe(var447, var449, var450, var451, var452);
var446 = var448;
varonce445 = var446;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var446); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce453!=NULL)) {
var454 = varonce453;
} else {
var455 = "unw_getcontext(&uc);";
var457 = (val*)(20l<<2|1);
var458 = (val*)(20l<<2|1);
var459 = (val*)((long)(0)<<2|3);
var460 = (val*)((long)(0)<<2|3);
var456 = core__flat___CString___to_s_unsafe(var455, var457, var458, var459, var460);
var454 = var456;
varonce453 = var454;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var454); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce461!=NULL)) {
var462 = varonce461;
} else {
var463 = "unw_init_local(&cursor, &uc);";
var465 = (val*)(29l<<2|1);
var466 = (val*)(29l<<2|1);
var467 = (val*)((long)(0)<<2|3);
var468 = (val*)((long)(0)<<2|3);
var464 = core__flat___CString___to_s_unsafe(var463, var465, var466, var467, var468);
var462 = var464;
varonce461 = var462;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var462); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce469!=NULL)) {
var470 = varonce469;
} else {
var471 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var473 = (val*)(67l<<2|1);
var474 = (val*)(67l<<2|1);
var475 = (val*)((long)(0)<<2|3);
var476 = (val*)((long)(0)<<2|3);
var472 = core__flat___CString___to_s_unsafe(var471, var473, var474, var475, var476);
var470 = var472;
varonce469 = var470;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var470); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce477!=NULL)) {
var478 = varonce477;
} else {
var479 = "PRINT_ERROR(\"--   Stack Trace   ------------------------------\\n\");";
var481 = (val*)(67l<<2|1);
var482 = (val*)(67l<<2|1);
var483 = (val*)((long)(0)<<2|3);
var484 = (val*)((long)(0)<<2|3);
var480 = core__flat___CString___to_s_unsafe(var479, var481, var482, var483, var484);
var478 = var480;
varonce477 = var478;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var478); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce485!=NULL)) {
var486 = varonce485;
} else {
var487 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var489 = (val*)(67l<<2|1);
var490 = (val*)(67l<<2|1);
var491 = (val*)((long)(0)<<2|3);
var492 = (val*)((long)(0)<<2|3);
var488 = core__flat___CString___to_s_unsafe(var487, var489, var490, var491, var492);
var486 = var488;
varonce485 = var486;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var486); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce493!=NULL)) {
var494 = varonce493;
} else {
var495 = "while (unw_step(&cursor) > 0) {";
var497 = (val*)(31l<<2|1);
var498 = (val*)(31l<<2|1);
var499 = (val*)((long)(0)<<2|3);
var500 = (val*)((long)(0)<<2|3);
var496 = core__flat___CString___to_s_unsafe(var495, var497, var498, var499, var500);
var494 = var496;
varonce493 = var494;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var494); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce501!=NULL)) {
var502 = varonce501;
} else {
var503 = "\tunw_get_proc_name(&cursor, procname, 100, &ip);";
var505 = (val*)(48l<<2|1);
var506 = (val*)(48l<<2|1);
var507 = (val*)((long)(0)<<2|3);
var508 = (val*)((long)(0)<<2|3);
var504 = core__flat___CString___to_s_unsafe(var503, var505, var506, var507, var508);
var502 = var504;
varonce501 = var502;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var502); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce509!=NULL)) {
var510 = varonce509;
} else {
var511 = "\tconst char* recv = get_nit_name(procname, strlen(procname));";
var513 = (val*)(61l<<2|1);
var514 = (val*)(61l<<2|1);
var515 = (val*)((long)(0)<<2|3);
var516 = (val*)((long)(0)<<2|3);
var512 = core__flat___CString___to_s_unsafe(var511, var513, var514, var515, var516);
var510 = var512;
varonce509 = var510;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var510); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce517!=NULL)) {
var518 = varonce517;
} else {
var519 = "\tif (recv != NULL){";
var521 = (val*)(19l<<2|1);
var522 = (val*)(19l<<2|1);
var523 = (val*)((long)(0)<<2|3);
var524 = (val*)((long)(0)<<2|3);
var520 = core__flat___CString___to_s_unsafe(var519, var521, var522, var523, var524);
var518 = var520;
varonce517 = var518;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var518); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce525!=NULL)) {
var526 = varonce525;
} else {
var527 = "\t\tPRINT_ERROR(\"` %s\\n\", recv);";
var529 = (val*)(30l<<2|1);
var530 = (val*)(30l<<2|1);
var531 = (val*)((long)(0)<<2|3);
var532 = (val*)((long)(0)<<2|3);
var528 = core__flat___CString___to_s_unsafe(var527, var529, var530, var531, var532);
var526 = var528;
varonce525 = var526;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var526); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce533!=NULL)) {
var534 = varonce533;
} else {
var535 = "\t}else{";
var537 = (val*)(7l<<2|1);
var538 = (val*)(7l<<2|1);
var539 = (val*)((long)(0)<<2|3);
var540 = (val*)((long)(0)<<2|3);
var536 = core__flat___CString___to_s_unsafe(var535, var537, var538, var539, var540);
var534 = var536;
varonce533 = var534;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var534); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce541!=NULL)) {
var542 = varonce541;
} else {
var543 = "\t\tPRINT_ERROR(\"` %s\\n\", procname);";
var545 = (val*)(34l<<2|1);
var546 = (val*)(34l<<2|1);
var547 = (val*)((long)(0)<<2|3);
var548 = (val*)((long)(0)<<2|3);
var544 = core__flat___CString___to_s_unsafe(var543, var545, var546, var547, var548);
var542 = var544;
varonce541 = var542;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var542); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce549!=NULL)) {
var550 = varonce549;
} else {
var551 = "\t}";
var553 = (val*)(2l<<2|1);
var554 = (val*)(2l<<2|1);
var555 = (val*)((long)(0)<<2|3);
var556 = (val*)((long)(0)<<2|3);
var552 = core__flat___CString___to_s_unsafe(var551, var553, var554, var555, var556);
var550 = var552;
varonce549 = var550;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var550); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce557!=NULL)) {
var558 = varonce557;
} else {
var559 = "}";
var561 = (val*)(1l<<2|1);
var562 = (val*)(1l<<2|1);
var563 = (val*)((long)(0)<<2|3);
var564 = (val*)((long)(0)<<2|3);
var560 = core__flat___CString___to_s_unsafe(var559, var561, var562, var563, var564);
var558 = var560;
varonce557 = var558;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var558); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce565!=NULL)) {
var566 = varonce565;
} else {
var567 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var569 = (val*)(67l<<2|1);
var570 = (val*)(67l<<2|1);
var571 = (val*)((long)(0)<<2|3);
var572 = (val*)((long)(0)<<2|3);
var568 = core__flat___CString___to_s_unsafe(var567, var569, var570, var571, var572);
var566 = var568;
varonce565 = var566;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var566); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce573!=NULL)) {
var574 = varonce573;
} else {
var575 = "free(procname);";
var577 = (val*)(15l<<2|1);
var578 = (val*)(15l<<2|1);
var579 = (val*)((long)(0)<<2|3);
var580 = (val*)((long)(0)<<2|3);
var576 = core__flat___CString___to_s_unsafe(var575, var577, var578, var579, var580);
var574 = var576;
varonce573 = var574;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var574); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce581!=NULL)) {
var582 = varonce581;
} else {
var583 = "}";
var585 = (val*)(1l<<2|1);
var586 = (val*)(1l<<2|1);
var587 = (val*)((long)(0)<<2|3);
var588 = (val*)((long)(0)<<2|3);
var584 = core__flat___CString___to_s_unsafe(var583, var585, var586, var587, var588);
var582 = var584;
varonce581 = var582;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var582); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce589!=NULL)) {
var590 = varonce589;
} else {
var591 = "#endif /* NO_STACKTRACE */";
var593 = (val*)(26l<<2|1);
var594 = (val*)(26l<<2|1);
var595 = (val*)((long)(0)<<2|3);
var596 = (val*)((long)(0)<<2|3);
var592 = core__flat___CString___to_s_unsafe(var591, var593, var594, var595, var596);
var590 = var592;
varonce589 = var590;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var590); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce597!=NULL)) {
var598 = varonce597;
} else {
var599 = "}";
var601 = (val*)(1l<<2|1);
var602 = (val*)(1l<<2|1);
var603 = (val*)((long)(0)<<2|3);
var604 = (val*)((long)(0)<<2|3);
var600 = core__flat___CString___to_s_unsafe(var599, var601, var602, var603, var604);
var598 = var600;
varonce597 = var598;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var598); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce605!=NULL)) {
var606 = varonce605;
} else {
var607 = "void sig_handler(int signo){";
var609 = (val*)(28l<<2|1);
var610 = (val*)(28l<<2|1);
var611 = (val*)((long)(0)<<2|3);
var612 = (val*)((long)(0)<<2|3);
var608 = core__flat___CString___to_s_unsafe(var607, var609, var610, var611, var612);
var606 = var608;
varonce605 = var606;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var606); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce613!=NULL)) {
var614 = varonce613;
} else {
var615 = "#ifdef _WIN32";
var617 = (val*)(13l<<2|1);
var618 = (val*)(13l<<2|1);
var619 = (val*)((long)(0)<<2|3);
var620 = (val*)((long)(0)<<2|3);
var616 = core__flat___CString___to_s_unsafe(var615, var617, var618, var619, var620);
var614 = var616;
varonce613 = var614;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var614); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce621!=NULL)) {
var622 = varonce621;
} else {
var623 = "PRINT_ERROR(\"Caught signal : %s\\n\", signo);";
var625 = (val*)(43l<<2|1);
var626 = (val*)(43l<<2|1);
var627 = (val*)((long)(0)<<2|3);
var628 = (val*)((long)(0)<<2|3);
var624 = core__flat___CString___to_s_unsafe(var623, var625, var626, var627, var628);
var622 = var624;
varonce621 = var622;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var622); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce629!=NULL)) {
var630 = varonce629;
} else {
var631 = "#else";
var633 = (val*)(5l<<2|1);
var634 = (val*)(5l<<2|1);
var635 = (val*)((long)(0)<<2|3);
var636 = (val*)((long)(0)<<2|3);
var632 = core__flat___CString___to_s_unsafe(var631, var633, var634, var635, var636);
var630 = var632;
varonce629 = var630;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var630); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce637!=NULL)) {
var638 = varonce637;
} else {
var639 = "PRINT_ERROR(\"Caught signal : %s\\n\", strsignal(signo));";
var641 = (val*)(54l<<2|1);
var642 = (val*)(54l<<2|1);
var643 = (val*)((long)(0)<<2|3);
var644 = (val*)((long)(0)<<2|3);
var640 = core__flat___CString___to_s_unsafe(var639, var641, var642, var643, var644);
var638 = var640;
varonce637 = var638;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var638); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce645!=NULL)) {
var646 = varonce645;
} else {
var647 = "#endif";
var649 = (val*)(6l<<2|1);
var650 = (val*)(6l<<2|1);
var651 = (val*)((long)(0)<<2|3);
var652 = (val*)((long)(0)<<2|3);
var648 = core__flat___CString___to_s_unsafe(var647, var649, var650, var651, var652);
var646 = var648;
varonce645 = var646;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var646); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce653!=NULL)) {
var654 = varonce653;
} else {
var655 = "show_backtrace();";
var657 = (val*)(17l<<2|1);
var658 = (val*)(17l<<2|1);
var659 = (val*)((long)(0)<<2|3);
var660 = (val*)((long)(0)<<2|3);
var656 = core__flat___CString___to_s_unsafe(var655, var657, var658, var659, var660);
var654 = var656;
varonce653 = var654;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var654); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce661!=NULL)) {
var662 = varonce661;
} else {
var663 = "signal(signo, SIG_DFL);";
var665 = (val*)(23l<<2|1);
var666 = (val*)(23l<<2|1);
var667 = (val*)((long)(0)<<2|3);
var668 = (val*)((long)(0)<<2|3);
var664 = core__flat___CString___to_s_unsafe(var663, var665, var666, var667, var668);
var662 = var664;
varonce661 = var662;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var662); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce669!=NULL)) {
var670 = varonce669;
} else {
var671 = "#ifndef _WIN32";
var673 = (val*)(14l<<2|1);
var674 = (val*)(14l<<2|1);
var675 = (val*)((long)(0)<<2|3);
var676 = (val*)((long)(0)<<2|3);
var672 = core__flat___CString___to_s_unsafe(var671, var673, var674, var675, var676);
var670 = var672;
varonce669 = var670;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var670); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce677!=NULL)) {
var678 = varonce677;
} else {
var679 = "kill(getpid(), signo);";
var681 = (val*)(22l<<2|1);
var682 = (val*)(22l<<2|1);
var683 = (val*)((long)(0)<<2|3);
var684 = (val*)((long)(0)<<2|3);
var680 = core__flat___CString___to_s_unsafe(var679, var681, var682, var683, var684);
var678 = var680;
varonce677 = var678;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var678); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce685!=NULL)) {
var686 = varonce685;
} else {
var687 = "#endif";
var689 = (val*)(6l<<2|1);
var690 = (val*)(6l<<2|1);
var691 = (val*)((long)(0)<<2|3);
var692 = (val*)((long)(0)<<2|3);
var688 = core__flat___CString___to_s_unsafe(var687, var689, var690, var691, var692);
var686 = var688;
varonce685 = var686;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var686); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce693!=NULL)) {
var694 = varonce693;
} else {
var695 = "}";
var697 = (val*)(1l<<2|1);
var698 = (val*)(1l<<2|1);
var699 = (val*)((long)(0)<<2|3);
var700 = (val*)((long)(0)<<2|3);
var696 = core__flat___CString___to_s_unsafe(var695, var697, var698, var699, var700);
var694 = var696;
varonce693 = var694;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var694); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce701!=NULL)) {
var702 = varonce701;
} else {
var703 = "void fatal_exit(int status) {";
var705 = (val*)(29l<<2|1);
var706 = (val*)(29l<<2|1);
var707 = (val*)((long)(0)<<2|3);
var708 = (val*)((long)(0)<<2|3);
var704 = core__flat___CString___to_s_unsafe(var703, var705, var706, var707, var708);
var702 = var704;
varonce701 = var702;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var702); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce709!=NULL)) {
var710 = varonce709;
} else {
var711 = "show_backtrace();";
var713 = (val*)(17l<<2|1);
var714 = (val*)(17l<<2|1);
var715 = (val*)((long)(0)<<2|3);
var716 = (val*)((long)(0)<<2|3);
var712 = core__flat___CString___to_s_unsafe(var711, var713, var714, var715, var716);
var710 = var712;
varonce709 = var710;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var710); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce717!=NULL)) {
var718 = varonce717;
} else {
var719 = "exit(status);";
var721 = (val*)(13l<<2|1);
var722 = (val*)(13l<<2|1);
var723 = (val*)((long)(0)<<2|3);
var724 = (val*)((long)(0)<<2|3);
var720 = core__flat___CString___to_s_unsafe(var719, var721, var722, var723, var724);
var718 = var720;
varonce717 = var718;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var718); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce725!=NULL)) {
var726 = varonce725;
} else {
var727 = "}";
var729 = (val*)(1l<<2|1);
var730 = (val*)(1l<<2|1);
var731 = (val*)((long)(0)<<2|3);
var732 = (val*)((long)(0)<<2|3);
var728 = core__flat___CString___to_s_unsafe(var727, var729, var730, var731, var732);
var726 = var728;
varonce725 = var726;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var726); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$compile_before_main (self,var_v) on <self:AbstractCompiler> */
/* Covariant cast for argument 0 (v) <var_v:AbstractCompilerVisitor> isa VISITOR */
/* <var_v:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_v->type->table_size) {
var734 = 0;
} else {
var734 = var_v->type->type_table[cltype] == idtype;
}
if (unlikely(!var734)) {
var_class_name = var_v == NULL ? "null" : var_v->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 803);
fatal_exit(1);
}
var_v735 = var_v;
RET_LABEL733:(void)0;
}
}
if (var_no_main){
if (likely(varonce736!=NULL)) {
var737 = varonce736;
} else {
var738 = "int nit_main(int argc, char** argv) {";
var740 = (val*)(37l<<2|1);
var741 = (val*)(37l<<2|1);
var742 = (val*)((long)(0)<<2|3);
var743 = (val*)((long)(0)<<2|3);
var739 = core__flat___CString___to_s_unsafe(var738, var740, var741, var742, var743);
var737 = var739;
varonce736 = var737;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var737); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce744!=NULL)) {
var745 = varonce744;
} else {
var746 = "int main(int argc, char** argv) {";
var748 = (val*)(33l<<2|1);
var749 = (val*)(33l<<2|1);
var750 = (val*)((long)(0)<<2|3);
var751 = (val*)((long)(0)<<2|3);
var747 = core__flat___CString___to_s_unsafe(var746, var748, var749, var750, var751);
var745 = var747;
varonce744 = var745;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var745); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$compile_begin_main (self,var_v) on <self:AbstractCompiler> */
/* Covariant cast for argument 0 (v) <var_v:AbstractCompilerVisitor> isa VISITOR */
/* <var_v:AbstractCompilerVisitor> isa VISITOR */
type_struct756 = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype754 = type_struct756->color;
idtype755 = type_struct756->id;
if(cltype754 >= var_v->type->table_size) {
var753 = 0;
} else {
var753 = var_v->type->type_table[cltype754] == idtype755;
}
if (unlikely(!var753)) {
var_class_name757 = var_v == NULL ? "null" : var_v->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name757);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 810);
fatal_exit(1);
}
var_v758 = var_v;
RET_LABEL752:(void)0;
}
}
if (likely(varonce759!=NULL)) {
var760 = varonce759;
} else {
var761 = "#if !defined(__ANDROID__) && !defined(TARGET_OS_IPHONE)";
var763 = (val*)(55l<<2|1);
var764 = (val*)(55l<<2|1);
var765 = (val*)((long)(0)<<2|3);
var766 = (val*)((long)(0)<<2|3);
var762 = core__flat___CString___to_s_unsafe(var761, var763, var764, var765, var766);
var760 = var762;
varonce759 = var760;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var760); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce767!=NULL)) {
var768 = varonce767;
} else {
var769 = "signal(SIGABRT, sig_handler);";
var771 = (val*)(29l<<2|1);
var772 = (val*)(29l<<2|1);
var773 = (val*)((long)(0)<<2|3);
var774 = (val*)((long)(0)<<2|3);
var770 = core__flat___CString___to_s_unsafe(var769, var771, var772, var773, var774);
var768 = var770;
varonce767 = var768;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var768); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce775!=NULL)) {
var776 = varonce775;
} else {
var777 = "signal(SIGFPE, sig_handler);";
var779 = (val*)(28l<<2|1);
var780 = (val*)(28l<<2|1);
var781 = (val*)((long)(0)<<2|3);
var782 = (val*)((long)(0)<<2|3);
var778 = core__flat___CString___to_s_unsafe(var777, var779, var780, var781, var782);
var776 = var778;
varonce775 = var776;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var776); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce783!=NULL)) {
var784 = varonce783;
} else {
var785 = "signal(SIGILL, sig_handler);";
var787 = (val*)(28l<<2|1);
var788 = (val*)(28l<<2|1);
var789 = (val*)((long)(0)<<2|3);
var790 = (val*)((long)(0)<<2|3);
var786 = core__flat___CString___to_s_unsafe(var785, var787, var788, var789, var790);
var784 = var786;
varonce783 = var784;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var784); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce791!=NULL)) {
var792 = varonce791;
} else {
var793 = "signal(SIGINT, sig_handler);";
var795 = (val*)(28l<<2|1);
var796 = (val*)(28l<<2|1);
var797 = (val*)((long)(0)<<2|3);
var798 = (val*)((long)(0)<<2|3);
var794 = core__flat___CString___to_s_unsafe(var793, var795, var796, var797, var798);
var792 = var794;
varonce791 = var792;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var792); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce799!=NULL)) {
var800 = varonce799;
} else {
var801 = "signal(SIGTERM, sig_handler);";
var803 = (val*)(29l<<2|1);
var804 = (val*)(29l<<2|1);
var805 = (val*)((long)(0)<<2|3);
var806 = (val*)((long)(0)<<2|3);
var802 = core__flat___CString___to_s_unsafe(var801, var803, var804, var805, var806);
var800 = var802;
varonce799 = var800;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var800); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce807!=NULL)) {
var808 = varonce807;
} else {
var809 = "signal(SIGSEGV, sig_handler);";
var811 = (val*)(29l<<2|1);
var812 = (val*)(29l<<2|1);
var813 = (val*)((long)(0)<<2|3);
var814 = (val*)((long)(0)<<2|3);
var810 = core__flat___CString___to_s_unsafe(var809, var811, var812, var813, var814);
var808 = var810;
varonce807 = var808;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var808); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce815!=NULL)) {
var816 = varonce815;
} else {
var817 = "#endif";
var819 = (val*)(6l<<2|1);
var820 = (val*)(6l<<2|1);
var821 = (val*)((long)(0)<<2|3);
var822 = (val*)((long)(0)<<2|3);
var818 = core__flat___CString___to_s_unsafe(var817, var819, var820, var821, var822);
var816 = var818;
varonce815 = var816;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var816); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce823!=NULL)) {
var824 = varonce823;
} else {
var825 = "#ifndef _WIN32";
var827 = (val*)(14l<<2|1);
var828 = (val*)(14l<<2|1);
var829 = (val*)((long)(0)<<2|3);
var830 = (val*)((long)(0)<<2|3);
var826 = core__flat___CString___to_s_unsafe(var825, var827, var828, var829, var830);
var824 = var826;
varonce823 = var824;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var824); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce831!=NULL)) {
var832 = varonce831;
} else {
var833 = "signal(SIGPIPE, SIG_IGN);";
var835 = (val*)(25l<<2|1);
var836 = (val*)(25l<<2|1);
var837 = (val*)((long)(0)<<2|3);
var838 = (val*)((long)(0)<<2|3);
var834 = core__flat___CString___to_s_unsafe(var833, var835, var836, var837, var838);
var832 = var834;
varonce831 = var832;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var832); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce839!=NULL)) {
var840 = varonce839;
} else {
var841 = "#endif";
var843 = (val*)(6l<<2|1);
var844 = (val*)(6l<<2|1);
var845 = (val*)((long)(0)<<2|3);
var846 = (val*)((long)(0)<<2|3);
var842 = core__flat___CString___to_s_unsafe(var841, var843, var844, var845, var846);
var840 = var842;
varonce839 = var840;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var840); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce847!=NULL)) {
var848 = varonce847;
} else {
var849 = "glob_argc = argc; glob_argv = argv;";
var851 = (val*)(35l<<2|1);
var852 = (val*)(35l<<2|1);
var853 = (val*)((long)(0)<<2|3);
var854 = (val*)((long)(0)<<2|3);
var850 = core__flat___CString___to_s_unsafe(var849, var851, var852, var853, var854);
var848 = var850;
varonce847 = var848;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var848); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce855!=NULL)) {
var856 = varonce855;
} else {
var857 = "catchStack.cursor = -1;";
var859 = (val*)(23l<<2|1);
var860 = (val*)(23l<<2|1);
var861 = (val*)((long)(0)<<2|3);
var862 = (val*)((long)(0)<<2|3);
var858 = core__flat___CString___to_s_unsafe(var857, var859, var860, var861, var862);
var856 = var858;
varonce855 = var856;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var856); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce863!=NULL)) {
var864 = varonce863;
} else {
var865 = "initialize_gc_option();";
var867 = (val*)(23l<<2|1);
var868 = (val*)(23l<<2|1);
var869 = (val*)((long)(0)<<2|3);
var870 = (val*)((long)(0)<<2|3);
var866 = core__flat___CString___to_s_unsafe(var865, var867, var868, var869, var870);
var864 = var866;
varonce863 = var864;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var864); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce871!=NULL)) {
var872 = varonce871;
} else {
var873 = "initialize_nitni_global_refs();";
var875 = (val*)(31l<<2|1);
var876 = (val*)(31l<<2|1);
var877 = (val*)((long)(0)<<2|3);
var878 = (val*)((long)(0)<<2|3);
var874 = core__flat___CString___to_s_unsafe(var873, var875, var876, var877, var878);
var872 = var874;
varonce871 = var872;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var872); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var881 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var881 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var879 = var881;
RET_LABEL880:(void)0;
}
}
{
var882 = nitc__model___MModule___sys_type(var879);
}
var_main_type = var882;
if (var_main_type == NULL) {
var883 = 0; /* is null */
} else {
var883 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_main_type,((val*)NULL)) on <var_main_type:nullable MClassType> */
var_other = ((val*)NULL);
{
var886 = ((short int(*)(val* self, val* p0))(var_main_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_type, var_other); /* == on <var_main_type:nullable MClassType(MClassType)>*/
}
var887 = !var886;
var884 = var887;
goto RET_LABEL885;
RET_LABEL885:(void)0;
}
var883 = var884;
}
if (var883){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var890 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var890 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var888 = var890;
RET_LABEL889:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var888) on <var888:AbstractCompiler> */
var893 = var888->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var888:AbstractCompiler> */
if (unlikely(var893 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var891 = var893;
RET_LABEL892:(void)0;
}
}
var_mainmodule = var891;
{
var894 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_glob_sys = var894;
if (unlikely(varonce895==NULL)) {
var896 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce897!=NULL)) {
var898 = varonce897;
} else {
var899 = "glob_sys = ";
var901 = (val*)(11l<<2|1);
var902 = (val*)(11l<<2|1);
var903 = (val*)((long)(0)<<2|3);
var904 = (val*)((long)(0)<<2|3);
var900 = core__flat___CString___to_s_unsafe(var899, var901, var902, var903, var904);
var898 = var900;
varonce897 = var898;
}
((struct instance_core__NativeArray*)var896)->values[0]=var898;
if (likely(varonce905!=NULL)) {
var906 = varonce905;
} else {
var907 = ";";
var909 = (val*)(1l<<2|1);
var910 = (val*)(1l<<2|1);
var911 = (val*)((long)(0)<<2|3);
var912 = (val*)((long)(0)<<2|3);
var908 = core__flat___CString___to_s_unsafe(var907, var909, var910, var911, var912);
var906 = var908;
varonce905 = var906;
}
((struct instance_core__NativeArray*)var896)->values[2]=var906;
} else {
var896 = varonce895;
varonce895 = NULL;
}
{
var913 = ((val*(*)(val* self))(var_glob_sys->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_glob_sys); /* to_s on <var_glob_sys:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var896)->values[1]=var913;
{
var914 = ((val*(*)(val* self))(var896->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var896); /* native_to_s on <var896:NativeArray[String]>*/
}
varonce895 = var896;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var914); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce915!=NULL)) {
var916 = varonce915;
} else {
var917 = "init";
var919 = (val*)(4l<<2|1);
var920 = (val*)(4l<<2|1);
var921 = (val*)((long)(0)<<2|3);
var922 = (val*)((long)(0)<<2|3);
var918 = core__flat___CString___to_s_unsafe(var917, var919, var920, var921, var922);
var916 = var918;
varonce915 = var916;
}
{
{ /* Inline model$MClassType$mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var925 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var925 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var923 = var925;
RET_LABEL924:(void)0;
}
}
{
var926 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var916, var923);
}
var_main_init = var926;
if (var_main_init == NULL) {
var927 = 0; /* is null */
} else {
var927 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_main_init,((val*)NULL)) on <var_main_init:nullable MMethod> */
var_other = ((val*)NULL);
{
var930 = ((short int(*)(val* self, val* p0))(var_main_init->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_init, var_other); /* == on <var_main_init:nullable MMethod(MMethod)>*/
}
var931 = !var930;
var928 = var931;
goto RET_LABEL929;
RET_LABEL929:(void)0;
}
var927 = var928;
}
if (var927){
var932 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var932, 1l); /* Direct call array$Array$with_capacity on <var932:Array[RuntimeVariable]>*/
}
var_933 = var932;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_933, var_glob_sys); /* Direct call array$AbstractArray$push on <var_933:Array[RuntimeVariable]>*/
}
{
var934 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_main_init, var_933);
}
} else {
}
if (likely(varonce936!=NULL)) {
var937 = varonce936;
} else {
var938 = "run";
var940 = (val*)(3l<<2|1);
var941 = (val*)(3l<<2|1);
var942 = (val*)((long)(0)<<2|3);
var943 = (val*)((long)(0)<<2|3);
var939 = core__flat___CString___to_s_unsafe(var938, var940, var941, var942, var943);
var937 = var939;
varonce936 = var937;
}
{
{ /* Inline model$MClassType$mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var946 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var946 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var944 = var946;
RET_LABEL945:(void)0;
}
}
{
var947 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var937, var944);
}
if (var947!=NULL) {
var935 = var947;
} else {
if (likely(varonce948!=NULL)) {
var949 = varonce948;
} else {
var950 = "main";
var952 = (val*)(4l<<2|1);
var953 = (val*)(4l<<2|1);
var954 = (val*)((long)(0)<<2|3);
var955 = (val*)((long)(0)<<2|3);
var951 = core__flat___CString___to_s_unsafe(var950, var952, var953, var954, var955);
var949 = var951;
varonce948 = var949;
}
{
{ /* Inline model$MClassType$mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var958 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var958 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var956 = var958;
RET_LABEL957:(void)0;
}
}
{
var959 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var949, var956);
}
var935 = var959;
}
var_main_method = var935;
if (var_main_method == NULL) {
var960 = 0; /* is null */
} else {
var960 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_main_method,((val*)NULL)) on <var_main_method:nullable MMethod> */
var_other = ((val*)NULL);
{
var963 = ((short int(*)(val* self, val* p0))(var_main_method->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_method, var_other); /* == on <var_main_method:nullable MMethod(MMethod)>*/
}
var964 = !var963;
var961 = var964;
goto RET_LABEL962;
RET_LABEL962:(void)0;
}
var960 = var961;
}
if (var960){
var965 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var965, 1l); /* Direct call array$Array$with_capacity on <var965:Array[RuntimeVariable]>*/
}
var_966 = var965;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_966, var_glob_sys); /* Direct call array$AbstractArray$push on <var_966:Array[RuntimeVariable]>*/
}
{
var967 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_main_method, var_966);
}
} else {
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var970 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var970 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var968 = var970;
RET_LABEL969:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var968) on <var968:ModelBuilder> */
var973 = var968->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var968:ModelBuilder> */
if (unlikely(var973 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var971 = var973;
RET_LABEL972:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var971) on <var971:ToolContext> */
var976 = var971->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var971:ToolContext> */
if (unlikely(var976 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var974 = var976;
RET_LABEL975:(void)0;
}
}
{
{ /* Inline opts$Option$value (var974) on <var974:OptionBool> */
var979 = var974->attrs[COLOR_opts__Option___value].val; /* _value on <var974:OptionBool> */
var977 = var979;
RET_LABEL978:(void)0;
}
}
var980 = (short int)((long)(var977)>>2);
if (var980){
if (likely(varonce981!=NULL)) {
var982 = varonce981;
} else {
var983 = "long count_type_test_resolved_total = 0;";
var985 = (val*)(40l<<2|1);
var986 = (val*)(40l<<2|1);
var987 = (val*)((long)(0)<<2|3);
var988 = (val*)((long)(0)<<2|3);
var984 = core__flat___CString___to_s_unsafe(var983, var985, var986, var987, var988);
var982 = var984;
varonce981 = var982;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var982); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce989!=NULL)) {
var990 = varonce989;
} else {
var991 = "long count_type_test_unresolved_total = 0;";
var993 = (val*)(42l<<2|1);
var994 = (val*)(42l<<2|1);
var995 = (val*)((long)(0)<<2|3);
var996 = (val*)((long)(0)<<2|3);
var992 = core__flat___CString___to_s_unsafe(var991, var993, var994, var995, var996);
var990 = var992;
varonce989 = var990;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var990); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce997!=NULL)) {
var998 = varonce997;
} else {
var999 = "long count_type_test_skipped_total = 0;";
var1001 = (val*)(39l<<2|1);
var1002 = (val*)(39l<<2|1);
var1003 = (val*)((long)(0)<<2|3);
var1004 = (val*)((long)(0)<<2|3);
var1000 = core__flat___CString___to_s_unsafe(var999, var1001, var1002, var1003, var1004);
var998 = var1000;
varonce997 = var998;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var998); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce1005!=NULL)) {
var1006 = varonce1005;
} else {
var1007 = "long count_type_test_total_total = 0;";
var1009 = (val*)(37l<<2|1);
var1010 = (val*)(37l<<2|1);
var1011 = (val*)((long)(0)<<2|3);
var1012 = (val*)((long)(0)<<2|3);
var1008 = core__flat___CString___to_s_unsafe(var1007, var1009, var1010, var1011, var1012);
var1006 = var1008;
varonce1005 = var1006;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1006); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var1015 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var1015 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1110);
fatal_exit(1);
}
var1013 = var1015;
RET_LABEL1014:(void)0;
}
}
var_1016 = var1013;
{
var1017 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_1016);
}
var_1018 = var1017;
for(;;) {
{
var1019 = ((short int(*)(val* self))((((long)var_1018&3)?class_info[((long)var_1018&3)]:var_1018->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_1018); /* is_ok on <var_1018:IndexedIterator[String]>*/
}
if (var1019){
} else {
goto BREAK_label1020;
}
{
var1021 = ((val*(*)(val* self))((((long)var_1018&3)?class_info[((long)var_1018&3)]:var_1018->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_1018); /* item on <var_1018:IndexedIterator[String]>*/
}
var_tag1022 = var1021;
if (unlikely(varonce1023==NULL)) {
var1024 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1025!=NULL)) {
var1026 = varonce1025;
} else {
var1027 = "long count_type_test_total_";
var1029 = (val*)(27l<<2|1);
var1030 = (val*)(27l<<2|1);
var1031 = (val*)((long)(0)<<2|3);
var1032 = (val*)((long)(0)<<2|3);
var1028 = core__flat___CString___to_s_unsafe(var1027, var1029, var1030, var1031, var1032);
var1026 = var1028;
varonce1025 = var1026;
}
((struct instance_core__NativeArray*)var1024)->values[0]=var1026;
if (likely(varonce1033!=NULL)) {
var1034 = varonce1033;
} else {
var1035 = ";";
var1037 = (val*)(1l<<2|1);
var1038 = (val*)(1l<<2|1);
var1039 = (val*)((long)(0)<<2|3);
var1040 = (val*)((long)(0)<<2|3);
var1036 = core__flat___CString___to_s_unsafe(var1035, var1037, var1038, var1039, var1040);
var1034 = var1036;
varonce1033 = var1034;
}
((struct instance_core__NativeArray*)var1024)->values[2]=var1034;
} else {
var1024 = varonce1023;
varonce1023 = NULL;
}
((struct instance_core__NativeArray*)var1024)->values[1]=var_tag1022;
{
var1041 = ((val*(*)(val* self))(var1024->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1024); /* native_to_s on <var1024:NativeArray[String]>*/
}
varonce1023 = var1024;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1041); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce1042==NULL)) {
var1043 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce1044!=NULL)) {
var1045 = varonce1044;
} else {
var1046 = "count_type_test_total_";
var1048 = (val*)(22l<<2|1);
var1049 = (val*)(22l<<2|1);
var1050 = (val*)((long)(0)<<2|3);
var1051 = (val*)((long)(0)<<2|3);
var1047 = core__flat___CString___to_s_unsafe(var1046, var1048, var1049, var1050, var1051);
var1045 = var1047;
varonce1044 = var1045;
}
((struct instance_core__NativeArray*)var1043)->values[0]=var1045;
if (likely(varonce1052!=NULL)) {
var1053 = varonce1052;
} else {
var1054 = " = count_type_test_resolved_";
var1056 = (val*)(28l<<2|1);
var1057 = (val*)(28l<<2|1);
var1058 = (val*)((long)(0)<<2|3);
var1059 = (val*)((long)(0)<<2|3);
var1055 = core__flat___CString___to_s_unsafe(var1054, var1056, var1057, var1058, var1059);
var1053 = var1055;
varonce1052 = var1053;
}
((struct instance_core__NativeArray*)var1043)->values[2]=var1053;
if (likely(varonce1060!=NULL)) {
var1061 = varonce1060;
} else {
var1062 = " + count_type_test_unresolved_";
var1064 = (val*)(30l<<2|1);
var1065 = (val*)(30l<<2|1);
var1066 = (val*)((long)(0)<<2|3);
var1067 = (val*)((long)(0)<<2|3);
var1063 = core__flat___CString___to_s_unsafe(var1062, var1064, var1065, var1066, var1067);
var1061 = var1063;
varonce1060 = var1061;
}
((struct instance_core__NativeArray*)var1043)->values[4]=var1061;
if (likely(varonce1068!=NULL)) {
var1069 = varonce1068;
} else {
var1070 = " + count_type_test_skipped_";
var1072 = (val*)(27l<<2|1);
var1073 = (val*)(27l<<2|1);
var1074 = (val*)((long)(0)<<2|3);
var1075 = (val*)((long)(0)<<2|3);
var1071 = core__flat___CString___to_s_unsafe(var1070, var1072, var1073, var1074, var1075);
var1069 = var1071;
varonce1068 = var1069;
}
((struct instance_core__NativeArray*)var1043)->values[6]=var1069;
if (likely(varonce1076!=NULL)) {
var1077 = varonce1076;
} else {
var1078 = ";";
var1080 = (val*)(1l<<2|1);
var1081 = (val*)(1l<<2|1);
var1082 = (val*)((long)(0)<<2|3);
var1083 = (val*)((long)(0)<<2|3);
var1079 = core__flat___CString___to_s_unsafe(var1078, var1080, var1081, var1082, var1083);
var1077 = var1079;
varonce1076 = var1077;
}
((struct instance_core__NativeArray*)var1043)->values[8]=var1077;
} else {
var1043 = varonce1042;
varonce1042 = NULL;
}
((struct instance_core__NativeArray*)var1043)->values[1]=var_tag1022;
((struct instance_core__NativeArray*)var1043)->values[3]=var_tag1022;
((struct instance_core__NativeArray*)var1043)->values[5]=var_tag1022;
((struct instance_core__NativeArray*)var1043)->values[7]=var_tag1022;
{
var1084 = ((val*(*)(val* self))(var1043->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1043); /* native_to_s on <var1043:NativeArray[String]>*/
}
varonce1042 = var1043;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1084); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce1085==NULL)) {
var1086 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1087!=NULL)) {
var1088 = varonce1087;
} else {
var1089 = "count_type_test_resolved_total += count_type_test_resolved_";
var1091 = (val*)(59l<<2|1);
var1092 = (val*)(59l<<2|1);
var1093 = (val*)((long)(0)<<2|3);
var1094 = (val*)((long)(0)<<2|3);
var1090 = core__flat___CString___to_s_unsafe(var1089, var1091, var1092, var1093, var1094);
var1088 = var1090;
varonce1087 = var1088;
}
((struct instance_core__NativeArray*)var1086)->values[0]=var1088;
if (likely(varonce1095!=NULL)) {
var1096 = varonce1095;
} else {
var1097 = ";";
var1099 = (val*)(1l<<2|1);
var1100 = (val*)(1l<<2|1);
var1101 = (val*)((long)(0)<<2|3);
var1102 = (val*)((long)(0)<<2|3);
var1098 = core__flat___CString___to_s_unsafe(var1097, var1099, var1100, var1101, var1102);
var1096 = var1098;
varonce1095 = var1096;
}
((struct instance_core__NativeArray*)var1086)->values[2]=var1096;
} else {
var1086 = varonce1085;
varonce1085 = NULL;
}
((struct instance_core__NativeArray*)var1086)->values[1]=var_tag1022;
{
var1103 = ((val*(*)(val* self))(var1086->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1086); /* native_to_s on <var1086:NativeArray[String]>*/
}
varonce1085 = var1086;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1103); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce1104==NULL)) {
var1105 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1106!=NULL)) {
var1107 = varonce1106;
} else {
var1108 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var1110 = (val*)(63l<<2|1);
var1111 = (val*)(63l<<2|1);
var1112 = (val*)((long)(0)<<2|3);
var1113 = (val*)((long)(0)<<2|3);
var1109 = core__flat___CString___to_s_unsafe(var1108, var1110, var1111, var1112, var1113);
var1107 = var1109;
varonce1106 = var1107;
}
((struct instance_core__NativeArray*)var1105)->values[0]=var1107;
if (likely(varonce1114!=NULL)) {
var1115 = varonce1114;
} else {
var1116 = ";";
var1118 = (val*)(1l<<2|1);
var1119 = (val*)(1l<<2|1);
var1120 = (val*)((long)(0)<<2|3);
var1121 = (val*)((long)(0)<<2|3);
var1117 = core__flat___CString___to_s_unsafe(var1116, var1118, var1119, var1120, var1121);
var1115 = var1117;
varonce1114 = var1115;
}
((struct instance_core__NativeArray*)var1105)->values[2]=var1115;
} else {
var1105 = varonce1104;
varonce1104 = NULL;
}
((struct instance_core__NativeArray*)var1105)->values[1]=var_tag1022;
{
var1122 = ((val*(*)(val* self))(var1105->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1105); /* native_to_s on <var1105:NativeArray[String]>*/
}
varonce1104 = var1105;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1122); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce1123==NULL)) {
var1124 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1125!=NULL)) {
var1126 = varonce1125;
} else {
var1127 = "count_type_test_skipped_total += count_type_test_skipped_";
var1129 = (val*)(57l<<2|1);
var1130 = (val*)(57l<<2|1);
var1131 = (val*)((long)(0)<<2|3);
var1132 = (val*)((long)(0)<<2|3);
var1128 = core__flat___CString___to_s_unsafe(var1127, var1129, var1130, var1131, var1132);
var1126 = var1128;
varonce1125 = var1126;
}
((struct instance_core__NativeArray*)var1124)->values[0]=var1126;
if (likely(varonce1133!=NULL)) {
var1134 = varonce1133;
} else {
var1135 = ";";
var1137 = (val*)(1l<<2|1);
var1138 = (val*)(1l<<2|1);
var1139 = (val*)((long)(0)<<2|3);
var1140 = (val*)((long)(0)<<2|3);
var1136 = core__flat___CString___to_s_unsafe(var1135, var1137, var1138, var1139, var1140);
var1134 = var1136;
varonce1133 = var1134;
}
((struct instance_core__NativeArray*)var1124)->values[2]=var1134;
} else {
var1124 = varonce1123;
varonce1123 = NULL;
}
((struct instance_core__NativeArray*)var1124)->values[1]=var_tag1022;
{
var1141 = ((val*(*)(val* self))(var1124->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1124); /* native_to_s on <var1124:NativeArray[String]>*/
}
varonce1123 = var1124;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1141); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce1142==NULL)) {
var1143 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1144!=NULL)) {
var1145 = varonce1144;
} else {
var1146 = "count_type_test_total_total += count_type_test_total_";
var1148 = (val*)(53l<<2|1);
var1149 = (val*)(53l<<2|1);
var1150 = (val*)((long)(0)<<2|3);
var1151 = (val*)((long)(0)<<2|3);
var1147 = core__flat___CString___to_s_unsafe(var1146, var1148, var1149, var1150, var1151);
var1145 = var1147;
varonce1144 = var1145;
}
((struct instance_core__NativeArray*)var1143)->values[0]=var1145;
if (likely(varonce1152!=NULL)) {
var1153 = varonce1152;
} else {
var1154 = ";";
var1156 = (val*)(1l<<2|1);
var1157 = (val*)(1l<<2|1);
var1158 = (val*)((long)(0)<<2|3);
var1159 = (val*)((long)(0)<<2|3);
var1155 = core__flat___CString___to_s_unsafe(var1154, var1156, var1157, var1158, var1159);
var1153 = var1155;
varonce1152 = var1153;
}
((struct instance_core__NativeArray*)var1143)->values[2]=var1153;
} else {
var1143 = varonce1142;
varonce1142 = NULL;
}
((struct instance_core__NativeArray*)var1143)->values[1]=var_tag1022;
{
var1160 = ((val*(*)(val* self))(var1143->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1143); /* native_to_s on <var1143:NativeArray[String]>*/
}
varonce1142 = var1143;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1160); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_1018&3)?class_info[((long)var_1018&3)]:var_1018->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_1018); /* next on <var_1018:IndexedIterator[String]>*/
}
}
BREAK_label1020: (void)0;
{
((void(*)(val* self))((((long)var_1018&3)?class_info[((long)var_1018&3)]:var_1018->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_1018); /* finish on <var_1018:IndexedIterator[String]>*/
}
if (likely(varonce1161!=NULL)) {
var1162 = varonce1161;
} else {
var1163 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var1165 = (val*)(48l<<2|1);
var1166 = (val*)(48l<<2|1);
var1167 = (val*)((long)(0)<<2|3);
var1168 = (val*)((long)(0)<<2|3);
var1164 = core__flat___CString___to_s_unsafe(var1163, var1165, var1166, var1167, var1168);
var1162 = var1164;
varonce1161 = var1162;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1162); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce1169!=NULL)) {
var1170 = varonce1169;
} else {
var1171 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var1173 = (val*)(51l<<2|1);
var1174 = (val*)(51l<<2|1);
var1175 = (val*)((long)(0)<<2|3);
var1176 = (val*)((long)(0)<<2|3);
var1172 = core__flat___CString___to_s_unsafe(var1171, var1173, var1174, var1175, var1176);
var1170 = var1172;
varonce1169 = var1170;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1170); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var1179 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var1179 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1110);
fatal_exit(1);
}
var1177 = var1179;
RET_LABEL1178:(void)0;
}
}
{
var1180 = core__array___Collection___to_a(var1177);
}
var_tags = var1180;
if (likely(varonce1181!=NULL)) {
var1182 = varonce1181;
} else {
var1183 = "total";
var1185 = (val*)(5l<<2|1);
var1186 = (val*)(5l<<2|1);
var1187 = (val*)((long)(0)<<2|3);
var1188 = (val*)((long)(0)<<2|3);
var1184 = core__flat___CString___to_s_unsafe(var1183, var1185, var1186, var1187, var1188);
var1182 = var1184;
varonce1181 = var1182;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tags, var1182); /* Direct call array$Array$add on <var_tags:Array[String]>*/
}
var_1189 = var_tags;
{
var1190 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_1189);
}
var_1191 = var1190;
for(;;) {
{
var1192 = ((short int(*)(val* self))((((long)var_1191&3)?class_info[((long)var_1191&3)]:var_1191->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_1191); /* is_ok on <var_1191:IndexedIterator[String]>*/
}
if (var1192){
} else {
goto BREAK_label1193;
}
{
var1194 = ((val*(*)(val* self))((((long)var_1191&3)?class_info[((long)var_1191&3)]:var_1191->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_1191); /* item on <var_1191:IndexedIterator[String]>*/
}
var_tag1195 = var1194;
if (unlikely(varonce1196==NULL)) {
var1197 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1198!=NULL)) {
var1199 = varonce1198;
} else {
var1200 = "printf(\"";
var1202 = (val*)(8l<<2|1);
var1203 = (val*)(8l<<2|1);
var1204 = (val*)((long)(0)<<2|3);
var1205 = (val*)((long)(0)<<2|3);
var1201 = core__flat___CString___to_s_unsafe(var1200, var1202, var1203, var1204, var1205);
var1199 = var1201;
varonce1198 = var1199;
}
((struct instance_core__NativeArray*)var1197)->values[0]=var1199;
if (likely(varonce1206!=NULL)) {
var1207 = varonce1206;
} else {
var1208 = "\");";
var1210 = (val*)(3l<<2|1);
var1211 = (val*)(3l<<2|1);
var1212 = (val*)((long)(0)<<2|3);
var1213 = (val*)((long)(0)<<2|3);
var1209 = core__flat___CString___to_s_unsafe(var1208, var1210, var1211, var1212, var1213);
var1207 = var1209;
varonce1206 = var1207;
}
((struct instance_core__NativeArray*)var1197)->values[2]=var1207;
} else {
var1197 = varonce1196;
varonce1196 = NULL;
}
((struct instance_core__NativeArray*)var1197)->values[1]=var_tag1195;
{
var1214 = ((val*(*)(val* self))(var1197->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1197); /* native_to_s on <var1197:NativeArray[String]>*/
}
varonce1196 = var1197;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1214); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce1215==NULL)) {
var1216 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce1217!=NULL)) {
var1218 = varonce1217;
} else {
var1219 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var1221 = (val*)(50l<<2|1);
var1222 = (val*)(50l<<2|1);
var1223 = (val*)((long)(0)<<2|3);
var1224 = (val*)((long)(0)<<2|3);
var1220 = core__flat___CString___to_s_unsafe(var1219, var1221, var1222, var1223, var1224);
var1218 = var1220;
varonce1217 = var1218;
}
((struct instance_core__NativeArray*)var1216)->values[0]=var1218;
if (likely(varonce1225!=NULL)) {
var1226 = varonce1225;
} else {
var1227 = ", 100.0*count_type_test_resolved_";
var1229 = (val*)(33l<<2|1);
var1230 = (val*)(33l<<2|1);
var1231 = (val*)((long)(0)<<2|3);
var1232 = (val*)((long)(0)<<2|3);
var1228 = core__flat___CString___to_s_unsafe(var1227, var1229, var1230, var1231, var1232);
var1226 = var1228;
varonce1225 = var1226;
}
((struct instance_core__NativeArray*)var1216)->values[2]=var1226;
if (likely(varonce1233!=NULL)) {
var1234 = varonce1233;
} else {
var1235 = "/count_type_test_total_total);";
var1237 = (val*)(30l<<2|1);
var1238 = (val*)(30l<<2|1);
var1239 = (val*)((long)(0)<<2|3);
var1240 = (val*)((long)(0)<<2|3);
var1236 = core__flat___CString___to_s_unsafe(var1235, var1237, var1238, var1239, var1240);
var1234 = var1236;
varonce1233 = var1234;
}
((struct instance_core__NativeArray*)var1216)->values[4]=var1234;
} else {
var1216 = varonce1215;
varonce1215 = NULL;
}
((struct instance_core__NativeArray*)var1216)->values[1]=var_tag1195;
((struct instance_core__NativeArray*)var1216)->values[3]=var_tag1195;
{
var1241 = ((val*(*)(val* self))(var1216->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1216); /* native_to_s on <var1216:NativeArray[String]>*/
}
varonce1215 = var1216;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1241); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce1242==NULL)) {
var1243 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce1244!=NULL)) {
var1245 = varonce1244;
} else {
var1246 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var1248 = (val*)(52l<<2|1);
var1249 = (val*)(52l<<2|1);
var1250 = (val*)((long)(0)<<2|3);
var1251 = (val*)((long)(0)<<2|3);
var1247 = core__flat___CString___to_s_unsafe(var1246, var1248, var1249, var1250, var1251);
var1245 = var1247;
varonce1244 = var1245;
}
((struct instance_core__NativeArray*)var1243)->values[0]=var1245;
if (likely(varonce1252!=NULL)) {
var1253 = varonce1252;
} else {
var1254 = ", 100.0*count_type_test_unresolved_";
var1256 = (val*)(35l<<2|1);
var1257 = (val*)(35l<<2|1);
var1258 = (val*)((long)(0)<<2|3);
var1259 = (val*)((long)(0)<<2|3);
var1255 = core__flat___CString___to_s_unsafe(var1254, var1256, var1257, var1258, var1259);
var1253 = var1255;
varonce1252 = var1253;
}
((struct instance_core__NativeArray*)var1243)->values[2]=var1253;
if (likely(varonce1260!=NULL)) {
var1261 = varonce1260;
} else {
var1262 = "/count_type_test_total_total);";
var1264 = (val*)(30l<<2|1);
var1265 = (val*)(30l<<2|1);
var1266 = (val*)((long)(0)<<2|3);
var1267 = (val*)((long)(0)<<2|3);
var1263 = core__flat___CString___to_s_unsafe(var1262, var1264, var1265, var1266, var1267);
var1261 = var1263;
varonce1260 = var1261;
}
((struct instance_core__NativeArray*)var1243)->values[4]=var1261;
} else {
var1243 = varonce1242;
varonce1242 = NULL;
}
((struct instance_core__NativeArray*)var1243)->values[1]=var_tag1195;
((struct instance_core__NativeArray*)var1243)->values[3]=var_tag1195;
{
var1268 = ((val*(*)(val* self))(var1243->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1243); /* native_to_s on <var1243:NativeArray[String]>*/
}
varonce1242 = var1243;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1268); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce1269==NULL)) {
var1270 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce1271!=NULL)) {
var1272 = varonce1271;
} else {
var1273 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var1275 = (val*)(49l<<2|1);
var1276 = (val*)(49l<<2|1);
var1277 = (val*)((long)(0)<<2|3);
var1278 = (val*)((long)(0)<<2|3);
var1274 = core__flat___CString___to_s_unsafe(var1273, var1275, var1276, var1277, var1278);
var1272 = var1274;
varonce1271 = var1272;
}
((struct instance_core__NativeArray*)var1270)->values[0]=var1272;
if (likely(varonce1279!=NULL)) {
var1280 = varonce1279;
} else {
var1281 = ", 100.0*count_type_test_skipped_";
var1283 = (val*)(32l<<2|1);
var1284 = (val*)(32l<<2|1);
var1285 = (val*)((long)(0)<<2|3);
var1286 = (val*)((long)(0)<<2|3);
var1282 = core__flat___CString___to_s_unsafe(var1281, var1283, var1284, var1285, var1286);
var1280 = var1282;
varonce1279 = var1280;
}
((struct instance_core__NativeArray*)var1270)->values[2]=var1280;
if (likely(varonce1287!=NULL)) {
var1288 = varonce1287;
} else {
var1289 = "/count_type_test_total_total);";
var1291 = (val*)(30l<<2|1);
var1292 = (val*)(30l<<2|1);
var1293 = (val*)((long)(0)<<2|3);
var1294 = (val*)((long)(0)<<2|3);
var1290 = core__flat___CString___to_s_unsafe(var1289, var1291, var1292, var1293, var1294);
var1288 = var1290;
varonce1287 = var1288;
}
((struct instance_core__NativeArray*)var1270)->values[4]=var1288;
} else {
var1270 = varonce1269;
varonce1269 = NULL;
}
((struct instance_core__NativeArray*)var1270)->values[1]=var_tag1195;
((struct instance_core__NativeArray*)var1270)->values[3]=var_tag1195;
{
var1295 = ((val*(*)(val* self))(var1270->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1270); /* native_to_s on <var1270:NativeArray[String]>*/
}
varonce1269 = var1270;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1295); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce1296==NULL)) {
var1297 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce1298!=NULL)) {
var1299 = varonce1298;
} else {
var1300 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var1302 = (val*)(49l<<2|1);
var1303 = (val*)(49l<<2|1);
var1304 = (val*)((long)(0)<<2|3);
var1305 = (val*)((long)(0)<<2|3);
var1301 = core__flat___CString___to_s_unsafe(var1300, var1302, var1303, var1304, var1305);
var1299 = var1301;
varonce1298 = var1299;
}
((struct instance_core__NativeArray*)var1297)->values[0]=var1299;
if (likely(varonce1306!=NULL)) {
var1307 = varonce1306;
} else {
var1308 = ", 100.0*count_type_test_total_";
var1310 = (val*)(30l<<2|1);
var1311 = (val*)(30l<<2|1);
var1312 = (val*)((long)(0)<<2|3);
var1313 = (val*)((long)(0)<<2|3);
var1309 = core__flat___CString___to_s_unsafe(var1308, var1310, var1311, var1312, var1313);
var1307 = var1309;
varonce1306 = var1307;
}
((struct instance_core__NativeArray*)var1297)->values[2]=var1307;
if (likely(varonce1314!=NULL)) {
var1315 = varonce1314;
} else {
var1316 = "/count_type_test_total_total);";
var1318 = (val*)(30l<<2|1);
var1319 = (val*)(30l<<2|1);
var1320 = (val*)((long)(0)<<2|3);
var1321 = (val*)((long)(0)<<2|3);
var1317 = core__flat___CString___to_s_unsafe(var1316, var1318, var1319, var1320, var1321);
var1315 = var1317;
varonce1314 = var1315;
}
((struct instance_core__NativeArray*)var1297)->values[4]=var1315;
} else {
var1297 = varonce1296;
varonce1296 = NULL;
}
((struct instance_core__NativeArray*)var1297)->values[1]=var_tag1195;
((struct instance_core__NativeArray*)var1297)->values[3]=var_tag1195;
{
var1322 = ((val*(*)(val* self))(var1297->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1297); /* native_to_s on <var1297:NativeArray[String]>*/
}
varonce1296 = var1297;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1322); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_1191&3)?class_info[((long)var_1191&3)]:var_1191->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_1191); /* next on <var_1191:IndexedIterator[String]>*/
}
}
BREAK_label1193: (void)0;
{
((void(*)(val* self))((((long)var_1191&3)?class_info[((long)var_1191&3)]:var_1191->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_1191); /* finish on <var_1191:IndexedIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var1325 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var1325 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var1323 = var1325;
RET_LABEL1324:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var1323) on <var1323:ModelBuilder> */
var1328 = var1323->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var1323:ModelBuilder> */
if (unlikely(var1328 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var1326 = var1328;
RET_LABEL1327:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (var1326) on <var1326:ToolContext> */
var1331 = var1326->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var1326:ToolContext> */
if (unlikely(var1331 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var1329 = var1331;
RET_LABEL1330:(void)0;
}
}
{
{ /* Inline opts$Option$value (var1329) on <var1329:OptionBool> */
var1334 = var1329->attrs[COLOR_opts__Option___value].val; /* _value on <var1329:OptionBool> */
var1332 = var1334;
RET_LABEL1333:(void)0;
}
}
var1335 = (short int)((long)(var1332)>>2);
if (var1335){
if (likely(varonce1336!=NULL)) {
var1337 = varonce1336;
} else {
var1338 = "long count_invoke_total;";
var1340 = (val*)(24l<<2|1);
var1341 = (val*)(24l<<2|1);
var1342 = (val*)((long)(0)<<2|3);
var1343 = (val*)((long)(0)<<2|3);
var1339 = core__flat___CString___to_s_unsafe(var1338, var1340, var1341, var1342, var1343);
var1337 = var1339;
varonce1336 = var1337;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1337); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce1344!=NULL)) {
var1345 = varonce1344;
} else {
var1346 = "count_invoke_total = count_invoke_by_tables + count_invoke_by_direct + count_invoke_by_inline;";
var1348 = (val*)(94l<<2|1);
var1349 = (val*)(94l<<2|1);
var1350 = (val*)((long)(0)<<2|3);
var1351 = (val*)((long)(0)<<2|3);
var1347 = core__flat___CString___to_s_unsafe(var1346, var1348, var1349, var1350, var1351);
var1345 = var1347;
varonce1344 = var1345;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1345); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce1352!=NULL)) {
var1353 = varonce1352;
} else {
var1354 = "printf(\"# dynamic count_invocation: total %ld\\n\", count_invoke_total);";
var1356 = (val*)(70l<<2|1);
var1357 = (val*)(70l<<2|1);
var1358 = (val*)((long)(0)<<2|3);
var1359 = (val*)((long)(0)<<2|3);
var1355 = core__flat___CString___to_s_unsafe(var1354, var1356, var1357, var1358, var1359);
var1353 = var1355;
varonce1352 = var1353;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1353); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce1360!=NULL)) {
var1361 = varonce1360;
} else {
var1362 = "printf(\"by table: %ld (%.2f%%)\\n\", count_invoke_by_tables, 100.0*count_invoke_by_tables/count_invoke_total);";
var1364 = (val*)(108l<<2|1);
var1365 = (val*)(108l<<2|1);
var1366 = (val*)((long)(0)<<2|3);
var1367 = (val*)((long)(0)<<2|3);
var1363 = core__flat___CString___to_s_unsafe(var1362, var1364, var1365, var1366, var1367);
var1361 = var1363;
varonce1360 = var1361;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1361); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce1368!=NULL)) {
var1369 = varonce1368;
} else {
var1370 = "printf(\"direct:   %ld (%.2f%%)\\n\", count_invoke_by_direct, 100.0*count_invoke_by_direct/count_invoke_total);";
var1372 = (val*)(108l<<2|1);
var1373 = (val*)(108l<<2|1);
var1374 = (val*)((long)(0)<<2|3);
var1375 = (val*)((long)(0)<<2|3);
var1371 = core__flat___CString___to_s_unsafe(var1370, var1372, var1373, var1374, var1375);
var1369 = var1371;
varonce1368 = var1369;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1369); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce1376!=NULL)) {
var1377 = varonce1376;
} else {
var1378 = "printf(\"inlined:  %ld (%.2f%%)\\n\", count_invoke_by_inline, 100.0*count_invoke_by_inline/count_invoke_total);";
var1380 = (val*)(108l<<2|1);
var1381 = (val*)(108l<<2|1);
var1382 = (val*)((long)(0)<<2|3);
var1383 = (val*)((long)(0)<<2|3);
var1379 = core__flat___CString___to_s_unsafe(var1378, var1380, var1381, var1382, var1383);
var1377 = var1379;
varonce1376 = var1377;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1377); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var1386 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var1386 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var1384 = var1386;
RET_LABEL1385:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var1384) on <var1384:ModelBuilder> */
var1389 = var1384->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var1384:ModelBuilder> */
if (unlikely(var1389 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var1387 = var1389;
RET_LABEL1388:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_isset_checks_metrics (var1387) on <var1387:ToolContext> */
var1392 = var1387->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var1387:ToolContext> */
if (unlikely(var1392 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var1390 = var1392;
RET_LABEL1391:(void)0;
}
}
{
{ /* Inline opts$Option$value (var1390) on <var1390:OptionBool> */
var1395 = var1390->attrs[COLOR_opts__Option___value].val; /* _value on <var1390:OptionBool> */
var1393 = var1395;
RET_LABEL1394:(void)0;
}
}
var1396 = (short int)((long)(var1393)>>2);
if (var1396){
if (likely(varonce1397!=NULL)) {
var1398 = varonce1397;
} else {
var1399 = "printf(\"# dynamic attribute reads: %ld\\n\", count_attr_reads);";
var1401 = (val*)(61l<<2|1);
var1402 = (val*)(61l<<2|1);
var1403 = (val*)((long)(0)<<2|3);
var1404 = (val*)((long)(0)<<2|3);
var1400 = core__flat___CString___to_s_unsafe(var1399, var1401, var1402, var1403, var1404);
var1398 = var1400;
varonce1397 = var1398;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1398); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce1405!=NULL)) {
var1406 = varonce1405;
} else {
var1407 = "printf(\"# dynamic isset checks: %ld\\n\", count_isset_checks);";
var1409 = (val*)(60l<<2|1);
var1410 = (val*)(60l<<2|1);
var1411 = (val*)((long)(0)<<2|3);
var1412 = (val*)((long)(0)<<2|3);
var1408 = core__flat___CString___to_s_unsafe(var1407, var1409, var1410, var1411, var1412);
var1406 = var1408;
varonce1405 = var1406;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1406); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce1413!=NULL)) {
var1414 = varonce1413;
} else {
var1415 = "return 0;";
var1417 = (val*)(9l<<2|1);
var1418 = (val*)(9l<<2|1);
var1419 = (val*)((long)(0)<<2|3);
var1420 = (val*)((long)(0)<<2|3);
var1416 = core__flat___CString___to_s_unsafe(var1415, var1417, var1418, var1419, var1420);
var1414 = var1416;
varonce1413 = var1414;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1414); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce1421!=NULL)) {
var1422 = varonce1421;
} else {
var1423 = "}";
var1425 = (val*)(1l<<2|1);
var1426 = (val*)(1l<<2|1);
var1427 = (val*)((long)(0)<<2|3);
var1428 = (val*)((long)(0)<<2|3);
var1424 = core__flat___CString___to_s_unsafe(var1423, var1425, var1426, var1427, var1428);
var1422 = var1424;
varonce1421 = var1422;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1422); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var1431 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var1431 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var1429 = var1431;
RET_LABEL1430:(void)0;
}
}
{
{ /* Inline mmodule$MModule$in_importation (var1429) on <var1429:MModule> */
var1434 = var1429->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var1429:MModule> */
if (unlikely(var1434 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var1432 = var1434;
RET_LABEL1433:(void)0;
}
}
{
var1435 = poset___poset__POSetElement___greaters(var1432);
}
var_1436 = var1435;
{
var1437 = ((val*(*)(val* self))((((long)var_1436&3)?class_info[((long)var_1436&3)]:var_1436->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_1436); /* iterator on <var_1436:Collection[MModule]>*/
}
var_1438 = var1437;
for(;;) {
{
var1439 = ((short int(*)(val* self))((((long)var_1438&3)?class_info[((long)var_1438&3)]:var_1438->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_1438); /* is_ok on <var_1438:Iterator[MModule]>*/
}
if (var1439){
} else {
goto BREAK_label1440;
}
{
var1441 = ((val*(*)(val* self))((((long)var_1438&3)?class_info[((long)var_1438&3)]:var_1438->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_1438); /* item on <var_1438:Iterator[MModule]>*/
}
var_m = var1441;
if (likely(varonce1442!=NULL)) {
var1443 = varonce1442;
} else {
var1444 = "FILE_";
var1446 = (val*)(5l<<2|1);
var1447 = (val*)(5l<<2|1);
var1448 = (val*)((long)(0)<<2|3);
var1449 = (val*)((long)(0)<<2|3);
var1445 = core__flat___CString___to_s_unsafe(var1444, var1446, var1447, var1448, var1449);
var1443 = var1445;
varonce1442 = var1443;
}
{
var1450 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_m);
}
{
var1451 = ((val*(*)(val* self, val* p0))(var1443->class->vft[COLOR_core__abstract_text__Text___43d]))(var1443, var1450); /* + on <var1443:String>*/
}
var_f = var1451;
if (unlikely(varonce1452==NULL)) {
var1453 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce1454!=NULL)) {
var1455 = varonce1454;
} else {
var1456 = "const char ";
var1458 = (val*)(11l<<2|1);
var1459 = (val*)(11l<<2|1);
var1460 = (val*)((long)(0)<<2|3);
var1461 = (val*)((long)(0)<<2|3);
var1457 = core__flat___CString___to_s_unsafe(var1456, var1458, var1459, var1460, var1461);
var1455 = var1457;
varonce1454 = var1455;
}
((struct instance_core__NativeArray*)var1453)->values[0]=var1455;
if (likely(varonce1462!=NULL)) {
var1463 = varonce1462;
} else {
var1464 = "[] = \"";
var1466 = (val*)(6l<<2|1);
var1467 = (val*)(6l<<2|1);
var1468 = (val*)((long)(0)<<2|3);
var1469 = (val*)((long)(0)<<2|3);
var1465 = core__flat___CString___to_s_unsafe(var1464, var1466, var1467, var1468, var1469);
var1463 = var1465;
varonce1462 = var1463;
}
((struct instance_core__NativeArray*)var1453)->values[2]=var1463;
if (likely(varonce1470!=NULL)) {
var1471 = varonce1470;
} else {
var1472 = "\";";
var1474 = (val*)(2l<<2|1);
var1475 = (val*)(2l<<2|1);
var1476 = (val*)((long)(0)<<2|3);
var1477 = (val*)((long)(0)<<2|3);
var1473 = core__flat___CString___to_s_unsafe(var1472, var1474, var1475, var1476, var1477);
var1471 = var1473;
varonce1470 = var1471;
}
((struct instance_core__NativeArray*)var1453)->values[4]=var1471;
} else {
var1453 = varonce1452;
varonce1452 = NULL;
}
((struct instance_core__NativeArray*)var1453)->values[1]=var_f;
{
{ /* Inline mmodule$MModule$location (var_m) on <var_m:MModule> */
var1480 = var_m->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_m:MModule> */
if (unlikely(var1480 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var1478 = var1480;
RET_LABEL1479:(void)0;
}
}
{
{ /* Inline location$Location$file (var1478) on <var1478:Location> */
var1483 = var1478->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var1478:Location> */
var1481 = var1483;
RET_LABEL1482:(void)0;
}
}
if (var1481 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1009);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$filename (var1481) on <var1481:nullable SourceFile> */
if (unlikely(var1481 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var1486 = var1481->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var1481:nullable SourceFile> */
if (unlikely(var1486 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var1484 = var1486;
RET_LABEL1485:(void)0;
}
}
{
var1487 = ((val*(*)(val* self))(var1484->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var1484); /* escape_to_c on <var1484:String>*/
}
((struct instance_core__NativeArray*)var1453)->values[3]=var1487;
{
var1488 = ((val*(*)(val* self))(var1453->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1453); /* native_to_s on <var1453:NativeArray[String]>*/
}
varonce1452 = var1453;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1488); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce1489==NULL)) {
var1490 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1491!=NULL)) {
var1492 = varonce1491;
} else {
var1493 = "extern const char ";
var1495 = (val*)(18l<<2|1);
var1496 = (val*)(18l<<2|1);
var1497 = (val*)((long)(0)<<2|3);
var1498 = (val*)((long)(0)<<2|3);
var1494 = core__flat___CString___to_s_unsafe(var1493, var1495, var1496, var1497, var1498);
var1492 = var1494;
varonce1491 = var1492;
}
((struct instance_core__NativeArray*)var1490)->values[0]=var1492;
if (likely(varonce1499!=NULL)) {
var1500 = varonce1499;
} else {
var1501 = "[];";
var1503 = (val*)(3l<<2|1);
var1504 = (val*)(3l<<2|1);
var1505 = (val*)((long)(0)<<2|3);
var1506 = (val*)((long)(0)<<2|3);
var1502 = core__flat___CString___to_s_unsafe(var1501, var1503, var1504, var1505, var1506);
var1500 = var1502;
varonce1499 = var1500;
}
((struct instance_core__NativeArray*)var1490)->values[2]=var1500;
} else {
var1490 = varonce1489;
varonce1489 = NULL;
}
((struct instance_core__NativeArray*)var1490)->values[1]=var_f;
{
var1507 = ((val*(*)(val* self))(var1490->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1490); /* native_to_s on <var1490:NativeArray[String]>*/
}
varonce1489 = var1490;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var_f, var1507); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:AbstractCompiler>*/
}
{
((void(*)(val* self))((((long)var_1438&3)?class_info[((long)var_1438&3)]:var_1438->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_1438); /* next on <var_1438:Iterator[MModule]>*/
}
}
BREAK_label1440: (void)0;
{
((void(*)(val* self))((((long)var_1438&3)?class_info[((long)var_1438&3)]:var_1438->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_1438); /* finish on <var_1438:Iterator[MModule]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_nitni_global_ref_functions for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_nitni_global_ref_functions(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "struct nitni_global_ref_list_t *nitni_global_ref_list;\nvoid initialize_nitni_global_refs() {\n\tnitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));\n\tnitni_global_ref_list->head = NULL;\n\tnitni_global_ref_list->tail = NULL;\n}\n\nvoid nitni_global_ref_add( struct nitni_ref *ref ) {\n\tif ( nitni_global_ref_list->head == NULL ) {\n\t\tnitni_global_ref_list->head = ref;\n\t\tref->prev = NULL;\n\t} else {\n\t\tnitni_global_ref_list->tail->next = ref;\n\t\tref->prev = nitni_global_ref_list->tail;\n\t}\n\tnitni_global_ref_list->tail = ref;\n\n\tref->next = NULL;\n}\n\nvoid nitni_global_ref_remove( struct nitni_ref *ref ) {\n\tif ( ref->prev == NULL ) {\n\t\tnitni_global_ref_list->head = ref->next;\n\t} else {\n\t\tref->prev->next = ref->next;\n\t}\n\n\tif ( ref->next == NULL ) {\n\t\tnitni_global_ref_list->tail = ref->prev;\n\t} else {\n\t\tref->next->prev = ref->prev;\n\t}\n}\n\nextern void nitni_global_ref_incr( struct nitni_ref *ref ) {\n\tif ( ref->count == 0 ) /* not registered */\n\t{\n\t\t/* add to list */\n\t\tnitni_global_ref_add( ref );\n\t}\n\n\tref->count ++;\n}\n\nextern void nitni_global_ref_decr( struct nitni_ref *ref ) {\n\tif ( ref->count == 1 ) /* was last reference */\n\t{\n\t\t/* remove from list */\n\t\tnitni_global_ref_remove( ref );\n\t}\n\n\tref->count --;\n}\n";
var4 = (val*)(1260l<<2|1);
var5 = (val*)(1260l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$extern_bodies for (self: AbstractCompiler): Array[ExternFile] */
val* nitc___nitc__AbstractCompiler___extern_bodies(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1075);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$files_to_copy for (self: AbstractCompiler): Array[String] */
val* nitc___nitc__AbstractCompiler___files_to_copy(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1078);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$seen_extern for (self: AbstractCompiler): ArraySet[String] */
val* nitc___nitc__AbstractCompiler___seen_extern(val* self) {
val* var /* : ArraySet[String] */;
val* var1 /* : ArraySet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1081);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$generate_init_attr for (self: AbstractCompiler, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void nitc___nitc__AbstractCompiler___generate_init_attr(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : Set[MClassDef] */;
val* var5 /* : Array[nullable Object] */;
val* var_cds /* var cds: Array[MClassDef] */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_ /* var : Array[MClassDef] */;
val* var9 /* : IndexedIterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[MClassDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : Array[AAttrPropdef] */;
val* var_17 /* var : Array[AAttrPropdef] */;
val* var18 /* : IndexedIterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[AAttrPropdef] */;
short int var20 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_npropdef /* var npropdef: AAttrPropdef */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1084);
fatal_exit(1);
}
var_v = p0;
var_recv = p1;
var_mtype = p2;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MClassType___MType__collect_mclassdefs(var_mtype, var1);
}
{
var5 = core__array___Collection___to_a(var4);
}
var_cds = var5;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nitc__model___MModule___linearize_mclassdefs(var6, var_cds); /* Direct call model$MModule$linearize_mclassdefs on <var6:MModule>*/
}
var_ = var_cds;
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[MClassDef]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[MClassDef]>*/
}
var_cd = var12;
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
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
{
var16 = nitc__modelize_property___ModelBuilder___collect_attr_propdef(var13, var_cd);
}
var_17 = var16;
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_17);
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:IndexedIterator[AAttrPropdef]>*/
}
if (var20){
} else {
goto BREAK_label21;
}
{
var22 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:IndexedIterator[AAttrPropdef]>*/
}
var_npropdef = var22;
{
nitc__separate_compiler___AAttrPropdef___init_expr(var_npropdef, var_v, var_recv); /* Direct call separate_compiler$AAttrPropdef$init_expr on <var_npropdef:AAttrPropdef>*/
}
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:IndexedIterator[AAttrPropdef]>*/
}
}
BREAK_label21: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:IndexedIterator[AAttrPropdef]>*/
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[MClassDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[MClassDef]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$count_type_test_tags for (self: AbstractCompiler): Array[String] */
val* nitc___nitc__AbstractCompiler___count_type_test_tags(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1110);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$count_type_test_resolved for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_resolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$count_type_test_unresolved for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_unresolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1112);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$count_type_test_skipped for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_skipped(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$init_count_type_test_tags for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___init_count_type_test_tags(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
val* var_res /* var res: HashMap[String, Int] */;
val* var2 /* : Array[String] */;
val* var4 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var5 /* : IndexedIterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[String] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var9 /* : nullable Object */;
var1 = NEW_core__HashMap(&type_core__HashMap__core__String__core__Int);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[String, Int]>*/
}
var_res = var1;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1110);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[String]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[String]>*/
}
var_tag = var8;
{
var9 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_res, var_tag, var9); /* Direct call hash_collection$HashMap$[]= on <var_res:HashMap[String, Int]>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$display_stats for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : Sys */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : Sys */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Bool */;
val* var29 /* : nullable Bool */;
val* var30 /* : HashMap[String, Int] */;
val* var_count_type_test_total /* var count_type_test_total: HashMap[String, Int] */;
val* var31 /* : HashMap[String, Int] */;
val* var33 /* : HashMap[String, Int] */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Object */;
val* var43 /* : HashMap[String, Int] */;
val* var45 /* : HashMap[String, Int] */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Object */;
val* var55 /* : HashMap[String, Int] */;
val* var57 /* : HashMap[String, Int] */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Object */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Object */;
val* var76 /* : Array[String] */;
val* var78 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var79 /* : IndexedIterator[nullable Object] */;
val* var_80 /* var : IndexedIterator[String] */;
short int var81 /* : Bool */;
val* var82 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var83 /* : HashMap[String, Int] */;
val* var85 /* : HashMap[String, Int] */;
val* var86 /* : nullable Object */;
val* var87 /* : HashMap[String, Int] */;
val* var89 /* : HashMap[String, Int] */;
val* var90 /* : nullable Object */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var94 /* : Int */;
long var95 /* : Int */;
long var96 /* : Int */;
val* var97 /* : HashMap[String, Int] */;
val* var99 /* : HashMap[String, Int] */;
val* var100 /* : nullable Object */;
long var101 /* : Int */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
long var107 /* : Int */;
long var108 /* : Int */;
val* var109 /* : nullable Object */;
val* var110 /* : HashMap[String, Int] */;
val* var112 /* : HashMap[String, Int] */;
val* var_113 /* var : HashMap[String, Int] */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Bool */;
val* var121 /* : nullable Bool */;
val* var_122 /* var : String */;
val* var123 /* : nullable Object */;
val* var124 /* : HashMap[String, Int] */;
val* var126 /* : HashMap[String, Int] */;
val* var127 /* : nullable Object */;
long var128 /* : Int */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
long var134 /* : Int */;
long var135 /* : Int */;
long var136 /* : Int */;
val* var137 /* : nullable Object */;
val* var138 /* : HashMap[String, Int] */;
val* var140 /* : HashMap[String, Int] */;
val* var_141 /* var : HashMap[String, Int] */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Bool */;
val* var149 /* : nullable Bool */;
val* var_150 /* var : String */;
val* var151 /* : nullable Object */;
val* var152 /* : HashMap[String, Int] */;
val* var154 /* : HashMap[String, Int] */;
val* var155 /* : nullable Object */;
long var156 /* : Int */;
short int var158 /* : Bool */;
int cltype159;
int idtype160;
const char* var_class_name161;
long var162 /* : Int */;
long var163 /* : Int */;
long var164 /* : Int */;
val* var165 /* : nullable Object */;
val* var166 /* : HashMap[String, Int] */;
val* var168 /* : HashMap[String, Int] */;
val* var_169 /* var : HashMap[String, Int] */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : CString */;
val* var173 /* : String */;
val* var174 /* : nullable Int */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Bool */;
val* var177 /* : nullable Bool */;
val* var_178 /* var : String */;
val* var179 /* : nullable Object */;
val* var180 /* : HashMap[String, Int] */;
val* var182 /* : HashMap[String, Int] */;
val* var183 /* : nullable Object */;
long var184 /* : Int */;
short int var186 /* : Bool */;
int cltype187;
int idtype188;
const char* var_class_name189;
long var190 /* : Int */;
long var191 /* : Int */;
long var192 /* : Int */;
val* var193 /* : nullable Object */;
val* var_194 /* var : HashMap[String, Int] */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : CString */;
val* var198 /* : String */;
val* var199 /* : nullable Int */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Bool */;
val* var202 /* : nullable Bool */;
val* var_203 /* var : String */;
val* var204 /* : nullable Object */;
val* var205 /* : nullable Object */;
long var206 /* : Int */;
short int var208 /* : Bool */;
int cltype209;
int idtype210;
const char* var_class_name211;
long var212 /* : Int */;
long var213 /* : Int */;
long var214 /* : Int */;
val* var215 /* : nullable Object */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : nullable Int */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Bool */;
val* var223 /* : nullable Bool */;
val* var224 /* : nullable Object */;
long var225 /* : Int */;
long var_count_type_test /* var count_type_test: Int */;
val* var226 /* : Array[String] */;
val* var228 /* : Array[String] */;
val* var229 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : CString */;
val* var233 /* : String */;
val* var234 /* : nullable Int */;
val* var235 /* : nullable Int */;
val* var236 /* : nullable Bool */;
val* var237 /* : nullable Bool */;
val* var_238 /* var : Array[String] */;
val* var239 /* : IndexedIterator[nullable Object] */;
val* var_240 /* var : IndexedIterator[String] */;
short int var241 /* : Bool */;
val* var243 /* : nullable Object */;
val* var_tag244 /* var tag: String */;
val* var245 /* : Sys */;
val* var246 /* : Array[Object] */;
val* var247 /* : NativeArray[Object] */;
val* var248 /* : Sys */;
val* var250 /* : NativeArray[String] */;
static val* varonce249;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : CString */;
val* var254 /* : String */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Int */;
val* var257 /* : nullable Bool */;
val* var258 /* : nullable Bool */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : CString */;
val* var262 /* : String */;
val* var263 /* : nullable Int */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Bool */;
val* var266 /* : nullable Bool */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : CString */;
val* var270 /* : String */;
val* var271 /* : nullable Int */;
val* var272 /* : nullable Int */;
val* var273 /* : nullable Bool */;
val* var274 /* : nullable Bool */;
val* var275 /* : HashMap[String, Int] */;
val* var277 /* : HashMap[String, Int] */;
val* var278 /* : nullable Object */;
val* var279 /* : String */;
long var280 /* : Int */;
val* var281 /* : Sys */;
val* var282 /* : HashMap[String, Int] */;
val* var284 /* : HashMap[String, Int] */;
val* var285 /* : nullable Object */;
val* var286 /* : String */;
long var287 /* : Int */;
val* var288 /* : String */;
val* var289 /* : Array[Object] */;
val* var290 /* : NativeArray[Object] */;
val* var291 /* : Sys */;
val* var293 /* : NativeArray[String] */;
static val* varonce292;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : CString */;
val* var297 /* : String */;
val* var298 /* : nullable Int */;
val* var299 /* : nullable Int */;
val* var300 /* : nullable Bool */;
val* var301 /* : nullable Bool */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : CString */;
val* var305 /* : String */;
val* var306 /* : nullable Int */;
val* var307 /* : nullable Int */;
val* var308 /* : nullable Bool */;
val* var309 /* : nullable Bool */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : CString */;
val* var313 /* : String */;
val* var314 /* : nullable Int */;
val* var315 /* : nullable Int */;
val* var316 /* : nullable Bool */;
val* var317 /* : nullable Bool */;
val* var318 /* : HashMap[String, Int] */;
val* var320 /* : HashMap[String, Int] */;
val* var321 /* : nullable Object */;
val* var322 /* : String */;
long var323 /* : Int */;
val* var324 /* : Sys */;
val* var325 /* : HashMap[String, Int] */;
val* var327 /* : HashMap[String, Int] */;
val* var328 /* : nullable Object */;
val* var329 /* : String */;
long var330 /* : Int */;
val* var331 /* : String */;
val* var332 /* : Array[Object] */;
val* var333 /* : NativeArray[Object] */;
val* var334 /* : Sys */;
val* var336 /* : NativeArray[String] */;
static val* varonce335;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : CString */;
val* var340 /* : String */;
val* var341 /* : nullable Int */;
val* var342 /* : nullable Int */;
val* var343 /* : nullable Bool */;
val* var344 /* : nullable Bool */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : CString */;
val* var348 /* : String */;
val* var349 /* : nullable Int */;
val* var350 /* : nullable Int */;
val* var351 /* : nullable Bool */;
val* var352 /* : nullable Bool */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : CString */;
val* var356 /* : String */;
val* var357 /* : nullable Int */;
val* var358 /* : nullable Int */;
val* var359 /* : nullable Bool */;
val* var360 /* : nullable Bool */;
val* var361 /* : HashMap[String, Int] */;
val* var363 /* : HashMap[String, Int] */;
val* var364 /* : nullable Object */;
val* var365 /* : String */;
long var366 /* : Int */;
val* var367 /* : Sys */;
val* var368 /* : HashMap[String, Int] */;
val* var370 /* : HashMap[String, Int] */;
val* var371 /* : nullable Object */;
val* var372 /* : String */;
long var373 /* : Int */;
val* var374 /* : String */;
val* var375 /* : Array[Object] */;
val* var376 /* : NativeArray[Object] */;
val* var377 /* : Sys */;
val* var379 /* : NativeArray[String] */;
static val* varonce378;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : CString */;
val* var383 /* : String */;
val* var384 /* : nullable Int */;
val* var385 /* : nullable Int */;
val* var386 /* : nullable Bool */;
val* var387 /* : nullable Bool */;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : CString */;
val* var391 /* : String */;
val* var392 /* : nullable Int */;
val* var393 /* : nullable Int */;
val* var394 /* : nullable Bool */;
val* var395 /* : nullable Bool */;
static val* varonce396;
val* var397 /* : String */;
char* var398 /* : CString */;
val* var399 /* : String */;
val* var400 /* : nullable Int */;
val* var401 /* : nullable Int */;
val* var402 /* : nullable Bool */;
val* var403 /* : nullable Bool */;
val* var404 /* : nullable Object */;
val* var405 /* : String */;
long var406 /* : Int */;
val* var407 /* : Sys */;
val* var408 /* : nullable Object */;
val* var409 /* : String */;
long var410 /* : Int */;
val* var411 /* : String */;
val* var412 /* : Array[Object] */;
val* var413 /* : NativeArray[Object] */;
val* var414 /* : Sys */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : CString */;
val* var418 /* : String */;
val* var419 /* : nullable Int */;
val* var420 /* : nullable Int */;
val* var421 /* : nullable Bool */;
val* var422 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
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
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
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
var13 = glob_sys;
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "# static count_type_test";
var17 = (val*)(24l<<2|1);
var18 = (val*)(24l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce = var14;
}
{
core__file___Sys___print(var13, var14); /* Direct call file$Sys$print on <var13:Sys>*/
}
var21 = glob_sys;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "\tresolved:\tunresolved\tskipped\ttotal";
var26 = (val*)(35l<<2|1);
var27 = (val*)(35l<<2|1);
var28 = (val*)((long)(0)<<2|3);
var29 = (val*)((long)(0)<<2|3);
var25 = core__flat___CString___to_s_unsafe(var24, var26, var27, var28, var29);
var23 = var25;
varonce22 = var23;
}
{
core__file___Sys___print(var21, var23); /* Direct call file$Sys$print on <var21:Sys>*/
}
{
var30 = nitc___nitc__AbstractCompiler___init_count_type_test_tags(self);
}
var_count_type_test_total = var30;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var33 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "total";
var38 = (val*)(5l<<2|1);
var39 = (val*)(5l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
{
var42 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var31, var35, var42); /* Direct call hash_collection$HashMap$[]= on <var31:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var45 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1112);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "total";
var50 = (val*)(5l<<2|1);
var51 = (val*)(5l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
{
var54 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var43, var47, var54); /* Direct call hash_collection$HashMap$[]= on <var43:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var57 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "total";
var62 = (val*)(5l<<2|1);
var63 = (val*)(5l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
{
var66 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var55, var59, var66); /* Direct call hash_collection$HashMap$[]= on <var55:HashMap[String, Int]>*/
}
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "total";
var71 = (val*)(5l<<2|1);
var72 = (val*)(5l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
{
var75 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var68, var75); /* Direct call hash_collection$HashMap$[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var78 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1110);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
var_ = var76;
{
var79 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_80 = var79;
for(;;) {
{
var81 = ((short int(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_80); /* is_ok on <var_80:IndexedIterator[String]>*/
}
if (var81){
} else {
goto BREAK_label;
}
{
var82 = ((val*(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_80); /* item on <var_80:IndexedIterator[String]>*/
}
var_tag = var82;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var85 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var83, var_tag);
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var89 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var89 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1112);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var87, var_tag);
}
{
{ /* Inline kernel$Int$+ (var86,var90) on <var86:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var90:nullable Object(Int)> isa OTHER */
/* <var90:nullable Object(Int)> isa OTHER */
var93 = 1; /* easy <var90:nullable Object(Int)> isa OTHER*/
if (unlikely(!var93)) {
var_class_name = var90 == NULL ? "null" : (((long)var90&3)?type_info[((long)var90&3)]:var90->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var94 = (long)(var86)>>2;
var95 = (long)(var90)>>2;
var96 = var94 + var95;
var91 = var96;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var99 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var97, var_tag);
}
{
{ /* Inline kernel$Int$+ (var91,var100) on <var91:Int> */
/* Covariant cast for argument 0 (i) <var100:nullable Object(Int)> isa OTHER */
/* <var100:nullable Object(Int)> isa OTHER */
var103 = 1; /* easy <var100:nullable Object(Int)> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = var100 == NULL ? "null" : (((long)var100&3)?type_info[((long)var100&3)]:var100->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var107 = (long)(var100)>>2;
var108 = var91 + var107;
var101 = var108;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
{
var109 = (val*)(var101<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var_tag, var109); /* Direct call hash_collection$HashMap$[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var112 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var112 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
var_113 = var110;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "total";
var118 = (val*)(5l<<2|1);
var119 = (val*)(5l<<2|1);
var120 = (val*)((long)(0)<<2|3);
var121 = (val*)((long)(0)<<2|3);
var117 = core__flat___CString___to_s_unsafe(var116, var118, var119, var120, var121);
var115 = var117;
varonce114 = var115;
}
var_122 = var115;
{
var123 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_113, var_122);
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var126 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var126 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
var127 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var124, var_tag);
}
{
{ /* Inline kernel$Int$+ (var123,var127) on <var123:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var127:nullable Object(Int)> isa OTHER */
/* <var127:nullable Object(Int)> isa OTHER */
var130 = 1; /* easy <var127:nullable Object(Int)> isa OTHER*/
if (unlikely(!var130)) {
var_class_name133 = var127 == NULL ? "null" : (((long)var127&3)?type_info[((long)var127&3)]:var127->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var134 = (long)(var123)>>2;
var135 = (long)(var127)>>2;
var136 = var134 + var135;
var128 = var136;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
{
var137 = (val*)(var128<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_113, var_122, var137); /* Direct call hash_collection$HashMap$[]= on <var_113:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var140 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var140 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1112);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
var_141 = var138;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "total";
var146 = (val*)(5l<<2|1);
var147 = (val*)(5l<<2|1);
var148 = (val*)((long)(0)<<2|3);
var149 = (val*)((long)(0)<<2|3);
var145 = core__flat___CString___to_s_unsafe(var144, var146, var147, var148, var149);
var143 = var145;
varonce142 = var143;
}
var_150 = var143;
{
var151 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_141, var_150);
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var154 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var154 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1112);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
var155 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var152, var_tag);
}
{
{ /* Inline kernel$Int$+ (var151,var155) on <var151:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var155:nullable Object(Int)> isa OTHER */
/* <var155:nullable Object(Int)> isa OTHER */
var158 = 1; /* easy <var155:nullable Object(Int)> isa OTHER*/
if (unlikely(!var158)) {
var_class_name161 = var155 == NULL ? "null" : (((long)var155&3)?type_info[((long)var155&3)]:var155->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name161);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var162 = (long)(var151)>>2;
var163 = (long)(var155)>>2;
var164 = var162 + var163;
var156 = var164;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
{
var165 = (val*)(var156<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_141, var_150, var165); /* Direct call hash_collection$HashMap$[]= on <var_141:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var168 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var168 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
var_169 = var166;
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "total";
var174 = (val*)(5l<<2|1);
var175 = (val*)(5l<<2|1);
var176 = (val*)((long)(0)<<2|3);
var177 = (val*)((long)(0)<<2|3);
var173 = core__flat___CString___to_s_unsafe(var172, var174, var175, var176, var177);
var171 = var173;
varonce170 = var171;
}
var_178 = var171;
{
var179 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_169, var_178);
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var182 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var182 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
var183 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var180, var_tag);
}
{
{ /* Inline kernel$Int$+ (var179,var183) on <var179:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var183:nullable Object(Int)> isa OTHER */
/* <var183:nullable Object(Int)> isa OTHER */
var186 = 1; /* easy <var183:nullable Object(Int)> isa OTHER*/
if (unlikely(!var186)) {
var_class_name189 = var183 == NULL ? "null" : (((long)var183&3)?type_info[((long)var183&3)]:var183->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name189);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var190 = (long)(var179)>>2;
var191 = (long)(var183)>>2;
var192 = var190 + var191;
var184 = var192;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
{
var193 = (val*)(var184<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_169, var_178, var193); /* Direct call hash_collection$HashMap$[]= on <var_169:HashMap[String, Int]>*/
}
var_194 = var_count_type_test_total;
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "total";
var199 = (val*)(5l<<2|1);
var200 = (val*)(5l<<2|1);
var201 = (val*)((long)(0)<<2|3);
var202 = (val*)((long)(0)<<2|3);
var198 = core__flat___CString___to_s_unsafe(var197, var199, var200, var201, var202);
var196 = var198;
varonce195 = var196;
}
var_203 = var196;
{
var204 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_194, var_203);
}
{
var205 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag);
}
{
{ /* Inline kernel$Int$+ (var204,var205) on <var204:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var205:nullable Object(Int)> isa OTHER */
/* <var205:nullable Object(Int)> isa OTHER */
var208 = 1; /* easy <var205:nullable Object(Int)> isa OTHER*/
if (unlikely(!var208)) {
var_class_name211 = var205 == NULL ? "null" : (((long)var205&3)?type_info[((long)var205&3)]:var205->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name211);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var212 = (long)(var204)>>2;
var213 = (long)(var205)>>2;
var214 = var212 + var213;
var206 = var214;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
}
{
var215 = (val*)(var206<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_194, var_203, var215); /* Direct call hash_collection$HashMap$[]= on <var_194:HashMap[String, Int]>*/
}
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_80); /* next on <var_80:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_80); /* finish on <var_80:IndexedIterator[String]>*/
}
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "total";
var220 = (val*)(5l<<2|1);
var221 = (val*)(5l<<2|1);
var222 = (val*)((long)(0)<<2|3);
var223 = (val*)((long)(0)<<2|3);
var219 = core__flat___CString___to_s_unsafe(var218, var220, var221, var222, var223);
var217 = var219;
varonce216 = var217;
}
{
var224 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var217);
}
var225 = (long)(var224)>>2;
var_count_type_test = var225;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var228 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var228 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1110);
fatal_exit(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
var229 = core__array___Collection___to_a(var226);
}
var_tags = var229;
if (likely(varonce230!=NULL)) {
var231 = varonce230;
} else {
var232 = "total";
var234 = (val*)(5l<<2|1);
var235 = (val*)(5l<<2|1);
var236 = (val*)((long)(0)<<2|3);
var237 = (val*)((long)(0)<<2|3);
var233 = core__flat___CString___to_s_unsafe(var232, var234, var235, var236, var237);
var231 = var233;
varonce230 = var231;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tags, var231); /* Direct call array$Array$add on <var_tags:Array[String]>*/
}
var_238 = var_tags;
{
var239 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_238);
}
var_240 = var239;
for(;;) {
{
var241 = ((short int(*)(val* self))((((long)var_240&3)?class_info[((long)var_240&3)]:var_240->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_240); /* is_ok on <var_240:IndexedIterator[String]>*/
}
if (var241){
} else {
goto BREAK_label242;
}
{
var243 = ((val*(*)(val* self))((((long)var_240&3)?class_info[((long)var_240&3)]:var_240->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_240); /* item on <var_240:IndexedIterator[String]>*/
}
var_tag244 = var243;
var245 = glob_sys;
var246 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var246 = array_instance Array[Object] */
var247 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var247)->values[0] = (val*) var_tag244;
{
((void(*)(val* self, val* p0, long p1))(var246->class->vft[COLOR_core__array__Array__with_native]))(var246, var247, 1l); /* with_native on <var246:Array[Object]>*/
}
}
{
core__file___Sys___printn(var245, var246); /* Direct call file$Sys$printn on <var245:Sys>*/
}
var248 = glob_sys;
if (unlikely(varonce249==NULL)) {
var250 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "\t";
var255 = (val*)(1l<<2|1);
var256 = (val*)(1l<<2|1);
var257 = (val*)((long)(0)<<2|3);
var258 = (val*)((long)(0)<<2|3);
var254 = core__flat___CString___to_s_unsafe(var253, var255, var256, var257, var258);
var252 = var254;
varonce251 = var252;
}
((struct instance_core__NativeArray*)var250)->values[0]=var252;
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = " (";
var263 = (val*)(2l<<2|1);
var264 = (val*)(2l<<2|1);
var265 = (val*)((long)(0)<<2|3);
var266 = (val*)((long)(0)<<2|3);
var262 = core__flat___CString___to_s_unsafe(var261, var263, var264, var265, var266);
var260 = var262;
varonce259 = var260;
}
((struct instance_core__NativeArray*)var250)->values[2]=var260;
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = "%)";
var271 = (val*)(2l<<2|1);
var272 = (val*)(2l<<2|1);
var273 = (val*)((long)(0)<<2|3);
var274 = (val*)((long)(0)<<2|3);
var270 = core__flat___CString___to_s_unsafe(var269, var271, var272, var273, var274);
var268 = var270;
varonce267 = var268;
}
((struct instance_core__NativeArray*)var250)->values[4]=var268;
} else {
var250 = varonce249;
varonce249 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var277 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var277 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
var278 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var275, var_tag244);
}
var280 = (long)(var278)>>2;
var279 = core__flat___Int___core__abstract_text__Object__to_s(var280);
((struct instance_core__NativeArray*)var250)->values[1]=var279;
var281 = glob_sys;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var284 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var284 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var282 = var284;
RET_LABEL283:(void)0;
}
}
{
var285 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var282, var_tag244);
}
{
var287 = (long)(var285)>>2;
var286 = counter___core__Sys___div(var281, var287, var_count_type_test);
}
((struct instance_core__NativeArray*)var250)->values[3]=var286;
{
var288 = ((val*(*)(val* self))(var250->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var250); /* native_to_s on <var250:NativeArray[String]>*/
}
varonce249 = var250;
var289 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var289 = array_instance Array[Object] */
var290 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var290)->values[0] = (val*) var288;
{
((void(*)(val* self, val* p0, long p1))(var289->class->vft[COLOR_core__array__Array__with_native]))(var289, var290, 1l); /* with_native on <var289:Array[Object]>*/
}
}
{
core__file___Sys___printn(var248, var289); /* Direct call file$Sys$printn on <var248:Sys>*/
}
var291 = glob_sys;
if (unlikely(varonce292==NULL)) {
var293 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce294!=NULL)) {
var295 = varonce294;
} else {
var296 = "\t";
var298 = (val*)(1l<<2|1);
var299 = (val*)(1l<<2|1);
var300 = (val*)((long)(0)<<2|3);
var301 = (val*)((long)(0)<<2|3);
var297 = core__flat___CString___to_s_unsafe(var296, var298, var299, var300, var301);
var295 = var297;
varonce294 = var295;
}
((struct instance_core__NativeArray*)var293)->values[0]=var295;
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = " (";
var306 = (val*)(2l<<2|1);
var307 = (val*)(2l<<2|1);
var308 = (val*)((long)(0)<<2|3);
var309 = (val*)((long)(0)<<2|3);
var305 = core__flat___CString___to_s_unsafe(var304, var306, var307, var308, var309);
var303 = var305;
varonce302 = var303;
}
((struct instance_core__NativeArray*)var293)->values[2]=var303;
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "%)";
var314 = (val*)(2l<<2|1);
var315 = (val*)(2l<<2|1);
var316 = (val*)((long)(0)<<2|3);
var317 = (val*)((long)(0)<<2|3);
var313 = core__flat___CString___to_s_unsafe(var312, var314, var315, var316, var317);
var311 = var313;
varonce310 = var311;
}
((struct instance_core__NativeArray*)var293)->values[4]=var311;
} else {
var293 = varonce292;
varonce292 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var320 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var320 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1112);
fatal_exit(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
{
var321 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var318, var_tag244);
}
var323 = (long)(var321)>>2;
var322 = core__flat___Int___core__abstract_text__Object__to_s(var323);
((struct instance_core__NativeArray*)var293)->values[1]=var322;
var324 = glob_sys;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var327 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var327 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1112);
fatal_exit(1);
}
var325 = var327;
RET_LABEL326:(void)0;
}
}
{
var328 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var325, var_tag244);
}
{
var330 = (long)(var328)>>2;
var329 = counter___core__Sys___div(var324, var330, var_count_type_test);
}
((struct instance_core__NativeArray*)var293)->values[3]=var329;
{
var331 = ((val*(*)(val* self))(var293->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var293); /* native_to_s on <var293:NativeArray[String]>*/
}
varonce292 = var293;
var332 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var332 = array_instance Array[Object] */
var333 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var333)->values[0] = (val*) var331;
{
((void(*)(val* self, val* p0, long p1))(var332->class->vft[COLOR_core__array__Array__with_native]))(var332, var333, 1l); /* with_native on <var332:Array[Object]>*/
}
}
{
core__file___Sys___printn(var291, var332); /* Direct call file$Sys$printn on <var291:Sys>*/
}
var334 = glob_sys;
if (unlikely(varonce335==NULL)) {
var336 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "\t";
var341 = (val*)(1l<<2|1);
var342 = (val*)(1l<<2|1);
var343 = (val*)((long)(0)<<2|3);
var344 = (val*)((long)(0)<<2|3);
var340 = core__flat___CString___to_s_unsafe(var339, var341, var342, var343, var344);
var338 = var340;
varonce337 = var338;
}
((struct instance_core__NativeArray*)var336)->values[0]=var338;
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = " (";
var349 = (val*)(2l<<2|1);
var350 = (val*)(2l<<2|1);
var351 = (val*)((long)(0)<<2|3);
var352 = (val*)((long)(0)<<2|3);
var348 = core__flat___CString___to_s_unsafe(var347, var349, var350, var351, var352);
var346 = var348;
varonce345 = var346;
}
((struct instance_core__NativeArray*)var336)->values[2]=var346;
if (likely(varonce353!=NULL)) {
var354 = varonce353;
} else {
var355 = "%)";
var357 = (val*)(2l<<2|1);
var358 = (val*)(2l<<2|1);
var359 = (val*)((long)(0)<<2|3);
var360 = (val*)((long)(0)<<2|3);
var356 = core__flat___CString___to_s_unsafe(var355, var357, var358, var359, var360);
var354 = var356;
varonce353 = var354;
}
((struct instance_core__NativeArray*)var336)->values[4]=var354;
} else {
var336 = varonce335;
varonce335 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var363 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var363 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var361 = var363;
RET_LABEL362:(void)0;
}
}
{
var364 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var361, var_tag244);
}
var366 = (long)(var364)>>2;
var365 = core__flat___Int___core__abstract_text__Object__to_s(var366);
((struct instance_core__NativeArray*)var336)->values[1]=var365;
var367 = glob_sys;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var370 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var370 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var368 = var370;
RET_LABEL369:(void)0;
}
}
{
var371 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var368, var_tag244);
}
{
var373 = (long)(var371)>>2;
var372 = counter___core__Sys___div(var367, var373, var_count_type_test);
}
((struct instance_core__NativeArray*)var336)->values[3]=var372;
{
var374 = ((val*(*)(val* self))(var336->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var336); /* native_to_s on <var336:NativeArray[String]>*/
}
varonce335 = var336;
var375 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var375 = array_instance Array[Object] */
var376 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var376)->values[0] = (val*) var374;
{
((void(*)(val* self, val* p0, long p1))(var375->class->vft[COLOR_core__array__Array__with_native]))(var375, var376, 1l); /* with_native on <var375:Array[Object]>*/
}
}
{
core__file___Sys___printn(var334, var375); /* Direct call file$Sys$printn on <var334:Sys>*/
}
var377 = glob_sys;
if (unlikely(varonce378==NULL)) {
var379 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce380!=NULL)) {
var381 = varonce380;
} else {
var382 = "\t";
var384 = (val*)(1l<<2|1);
var385 = (val*)(1l<<2|1);
var386 = (val*)((long)(0)<<2|3);
var387 = (val*)((long)(0)<<2|3);
var383 = core__flat___CString___to_s_unsafe(var382, var384, var385, var386, var387);
var381 = var383;
varonce380 = var381;
}
((struct instance_core__NativeArray*)var379)->values[0]=var381;
if (likely(varonce388!=NULL)) {
var389 = varonce388;
} else {
var390 = " (";
var392 = (val*)(2l<<2|1);
var393 = (val*)(2l<<2|1);
var394 = (val*)((long)(0)<<2|3);
var395 = (val*)((long)(0)<<2|3);
var391 = core__flat___CString___to_s_unsafe(var390, var392, var393, var394, var395);
var389 = var391;
varonce388 = var389;
}
((struct instance_core__NativeArray*)var379)->values[2]=var389;
if (likely(varonce396!=NULL)) {
var397 = varonce396;
} else {
var398 = "%)";
var400 = (val*)(2l<<2|1);
var401 = (val*)(2l<<2|1);
var402 = (val*)((long)(0)<<2|3);
var403 = (val*)((long)(0)<<2|3);
var399 = core__flat___CString___to_s_unsafe(var398, var400, var401, var402, var403);
var397 = var399;
varonce396 = var397;
}
((struct instance_core__NativeArray*)var379)->values[4]=var397;
} else {
var379 = varonce378;
varonce378 = NULL;
}
{
var404 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag244);
}
var406 = (long)(var404)>>2;
var405 = core__flat___Int___core__abstract_text__Object__to_s(var406);
((struct instance_core__NativeArray*)var379)->values[1]=var405;
var407 = glob_sys;
{
var408 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag244);
}
{
var410 = (long)(var408)>>2;
var409 = counter___core__Sys___div(var407, var410, var_count_type_test);
}
((struct instance_core__NativeArray*)var379)->values[3]=var409;
{
var411 = ((val*(*)(val* self))(var379->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var379); /* native_to_s on <var379:NativeArray[String]>*/
}
varonce378 = var379;
var412 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var412 = array_instance Array[Object] */
var413 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var413)->values[0] = (val*) var411;
{
((void(*)(val* self, val* p0, long p1))(var412->class->vft[COLOR_core__array__Array__with_native]))(var412, var413, 1l); /* with_native on <var412:Array[Object]>*/
}
}
{
core__file___Sys___printn(var377, var412); /* Direct call file$Sys$printn on <var377:Sys>*/
}
var414 = glob_sys;
if (likely(varonce415!=NULL)) {
var416 = varonce415;
} else {
var417 = "";
var419 = (val*)(0l<<2|1);
var420 = (val*)(0l<<2|1);
var421 = (val*)((long)(0)<<2|3);
var422 = (val*)((long)(0)<<2|3);
var418 = core__flat___CString___to_s_unsafe(var417, var419, var420, var421, var422);
var416 = var418;
varonce415 = var416;
}
{
core__file___Sys___print(var414, var416); /* Direct call file$Sys$print on <var414:Sys>*/
}
{
((void(*)(val* self))((((long)var_240&3)?class_info[((long)var_240&3)]:var_240->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_240); /* next on <var_240:IndexedIterator[String]>*/
}
}
BREAK_label242: (void)0;
{
((void(*)(val* self))((((long)var_240&3)?class_info[((long)var_240&3)]:var_240->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_240); /* finish on <var_240:IndexedIterator[String]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$finalize_ffi_for_module for (self: AbstractCompiler, MModule) */
void nitc___nitc__AbstractCompiler___finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
var_mmodule = p0;
{
nitc__light___MModule___finalize_ffi(var_mmodule, self); /* Direct call light$MModule$finalize_ffi on <var_mmodule:MModule>*/
}
RET_LABEL:;
}
/* method abstract_compiler$CodeFile$name for (self: CodeFile): String */
val* nitc___nitc__CodeFile___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1170);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeFile$name= for (self: CodeFile, String) */
void nitc___nitc__CodeFile___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val = p0; /* _name on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler$CodeFile$writers for (self: CodeFile): Array[CodeWriter] */
val* nitc___nitc__CodeFile___writers(val* self) {
val* var /* : Array[CodeWriter] */;
val* var1 /* : Array[CodeWriter] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val; /* _writers on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1173);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeFile$required_declarations for (self: CodeFile): HashSet[String] */
val* nitc___nitc__CodeFile___required_declarations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1176);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeFile$init for (self: CodeFile) */
void nitc___nitc__CodeFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CodeFile___core__kernel__Object__init]))(self); /* init on <self:CodeFile>*/
}
RET_LABEL:;
}
/* method abstract_compiler$CodeWriter$file for (self: CodeWriter): CodeFile */
val* nitc___nitc__CodeWriter___file(val* self) {
val* var /* : CodeFile */;
val* var1 /* : CodeFile */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1186);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeWriter$file= for (self: CodeWriter, CodeFile) */
void nitc___nitc__CodeWriter___file_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val = p0; /* _file on <self:CodeWriter> */
RET_LABEL:;
}
/* method abstract_compiler$CodeWriter$lines for (self: CodeWriter): Array[String] */
val* nitc___nitc__CodeWriter___lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1189);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeWriter$decl_lines for (self: CodeWriter): Array[String] */
val* nitc___nitc__CodeWriter___decl_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1192);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeWriter$add_decl for (self: CodeWriter, String) */
void nitc___nitc__CodeWriter___add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : Array[String] */;
val* var2 /* : Array[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler$CodeWriter$decl_lines (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1192);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var, var_s); /* Direct call array$Array$add on <var:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$CodeWriter$init for (self: CodeWriter) */
void nitc___nitc__CodeWriter___core__kernel__Object__init(val* self) {
val* var /* : CodeFile */;
val* var2 /* : CodeFile */;
val* var3 /* : Array[CodeWriter] */;
val* var5 /* : Array[CodeWriter] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CodeWriter___core__kernel__Object__init]))(self); /* init on <self:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$CodeWriter$file (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1186);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeFile$writers (var) on <var:CodeFile> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val; /* _writers on <var:CodeFile> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1173);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array$Array$add on <var3:Array[CodeWriter]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$compiler for (self: AbstractCompilerVisitor): AbstractCompiler */
val* nitc___nitc__AbstractCompilerVisitor___compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$compiler= for (self: AbstractCompilerVisitor, AbstractCompiler) */
void nitc___nitc__AbstractCompilerVisitor___compiler_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__COMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val = p0; /* _compiler on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$current_node for (self: AbstractCompilerVisitor): nullable ANode */
val* nitc___nitc__AbstractCompilerVisitor___current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$current_node= for (self: AbstractCompilerVisitor, nullable ANode) */
void nitc___nitc__AbstractCompilerVisitor___current_node_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = p0; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$frame for (self: AbstractCompilerVisitor): nullable StaticFrame */
val* nitc___nitc__AbstractCompilerVisitor___frame(val* self) {
val* var /* : nullable StaticFrame */;
val* var1 /* : nullable StaticFrame */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$frame= for (self: AbstractCompilerVisitor, nullable StaticFrame) */
void nitc___nitc__AbstractCompilerVisitor___frame_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = p0; /* _frame on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$object_type for (self: AbstractCompilerVisitor): MClassType */
val* nitc___nitc__AbstractCompilerVisitor___object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__model___MModule___object_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$bool_type for (self: AbstractCompilerVisitor): MClassType */
val* nitc___nitc__AbstractCompilerVisitor___bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__model___MModule___bool_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$writer for (self: AbstractCompilerVisitor): CodeWriter */
val* nitc___nitc__AbstractCompilerVisitor___writer(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1229);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$writer= for (self: AbstractCompilerVisitor, CodeWriter) */
void nitc___nitc__AbstractCompilerVisitor___writer_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val = p0; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$init for (self: AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : Array[CodeFile] */;
val* var6 /* : Array[CodeFile] */;
val* var7 /* : nullable Object */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init]))(self); /* init on <self:AbstractCompilerVisitor>*/
}
var = NEW_nitc__CodeWriter(&type_nitc__CodeWriter);
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$files (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 592);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__SequenceRead___last(var4);
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__abstract_compiler__CodeWriter__file_61d]))(var, var7); /* file= on <var:CodeWriter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$writer= (self,var) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val = var; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
