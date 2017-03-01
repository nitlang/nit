#include "nitc__separate_compiler.sep.0.h"
/* method separate_compiler$SeparateCompilerVisitor$table_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable], MEntity): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___table_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var_mentity /* var mentity: MEntity */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var_ /* var : ModelBuilder */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
val* var15 /* : AbstractCompiler */;
val* var17 /* : AbstractCompiler */;
val* var18 /* : ModelBuilder */;
val* var20 /* : ModelBuilder */;
val* var21 /* : ToolContext */;
val* var23 /* : ToolContext */;
val* var24 /* : OptionBool */;
val* var26 /* : OptionBool */;
val* var27 /* : nullable Object */;
val* var29 /* : nullable Object */;
short int var30 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
long var38 /* : Int */;
long var40 /* : Int */;
val* var41 /* : MPropDef */;
val* var43 /* : MPropDef */;
val* var44 /* : nullable MSignature */;
val* var46 /* : nullable MSignature */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
val* var59 /* : NativeArray[String] */;
static val* varonce58;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Bool */;
val* var67 /* : nullable Bool */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Bool */;
val* var83 /* : nullable Bool */;
val* var84 /* : String */;
long var85 /* : Int */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var91 /* : MPropDef */;
val* var93 /* : MPropDef */;
val* var94 /* : SeparateRuntimeFunction */;
val* var_runtime_function /* var runtime_function: SeparateRuntimeFunction */;
val* var95 /* : MSignature */;
val* var97 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var98 /* : MPropDef */;
val* var100 /* : MPropDef */;
val* var101 /* : nullable MType */;
val* var103 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var110 /* : RuntimeVariable */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
val* var119 /* : String */;
val* var_ss /* var ss: String */;
val* var120 /* : String */;
val* var_const_color /* var const_color: String */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var_other124 /* var other: nullable Object */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
val* var128 /* : NativeArray[String] */;
static val* varonce127;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Bool */;
val* var136 /* : nullable Bool */;
val* var137 /* : String */;
val* var138 /* : String */;
val* var_ress /* var ress: nullable Object */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Bool */;
val* var146 /* : nullable Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
short int var_151 /* var : Bool */;
val* var152 /* : AbstractCompiler */;
val* var154 /* : AbstractCompiler */;
val* var155 /* : ModelBuilder */;
val* var157 /* : ModelBuilder */;
val* var158 /* : ToolContext */;
val* var160 /* : ToolContext */;
val* var161 /* : OptionBool */;
val* var163 /* : OptionBool */;
val* var164 /* : nullable Object */;
val* var166 /* : nullable Object */;
short int var167 /* : Bool */;
val* var168 /* : AbstractCompiler */;
val* var170 /* : AbstractCompiler */;
val* var171 /* : nullable MMethodDef */;
val* var_md /* var md: nullable MMethodDef */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
val* var177 /* : SeparateRuntimeFunction */;
val* var178 /* : String */;
val* var_callsym /* var callsym: String */;
val* var180 /* : NativeArray[String] */;
static val* varonce179;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : CString */;
val* var184 /* : String */;
val* var185 /* : nullable Int */;
val* var186 /* : nullable Int */;
val* var187 /* : nullable Bool */;
val* var188 /* : nullable Bool */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : CString */;
val* var192 /* : String */;
val* var193 /* : nullable Int */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Bool */;
val* var196 /* : nullable Bool */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : CString */;
val* var200 /* : String */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Bool */;
val* var204 /* : nullable Bool */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Bool */;
val* var212 /* : nullable Bool */;
val* var213 /* : String */;
val* var214 /* : nullable Object */;
val* var215 /* : String */;
val* var216 /* : String */;
val* var218 /* : NativeArray[String] */;
static val* varonce217;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : CString */;
val* var222 /* : String */;
val* var223 /* : nullable Int */;
val* var224 /* : nullable Int */;
val* var225 /* : nullable Bool */;
val* var226 /* : nullable Bool */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : CString */;
val* var230 /* : String */;
val* var231 /* : nullable Int */;
val* var232 /* : nullable Int */;
val* var233 /* : nullable Bool */;
val* var234 /* : nullable Bool */;
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
val* var275 /* : String */;
val* var276 /* : nullable Object */;
val* var277 /* : String */;
val* var278 /* : String */;
val* var279 /* : nullable Object */;
val* var280 /* : String */;
val* var281 /* : String */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
int cltype284;
int idtype285;
short int var_286 /* var : Bool */;
val* var287 /* : AbstractCompiler */;
val* var289 /* : AbstractCompiler */;
val* var290 /* : ModelBuilder */;
val* var292 /* : ModelBuilder */;
val* var293 /* : ToolContext */;
val* var295 /* : ToolContext */;
val* var296 /* : OptionBool */;
val* var298 /* : OptionBool */;
val* var299 /* : nullable Object */;
val* var301 /* : nullable Object */;
short int var302 /* : Bool */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : CString */;
val* var306 /* : String */;
val* var307 /* : nullable Int */;
val* var308 /* : nullable Int */;
val* var309 /* : nullable Bool */;
val* var310 /* : nullable Bool */;
val* var311 /* : Text */;
val* var_callsym312 /* var callsym: String */;
val* var314 /* : NativeArray[String] */;
static val* varonce313;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : CString */;
val* var318 /* : String */;
val* var319 /* : nullable Int */;
val* var320 /* : nullable Int */;
val* var321 /* : nullable Bool */;
val* var322 /* : nullable Bool */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : CString */;
val* var326 /* : String */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Int */;
val* var329 /* : nullable Bool */;
val* var330 /* : nullable Bool */;
val* var331 /* : String */;
val* var333 /* : NativeArray[String] */;
static val* varonce332;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : CString */;
val* var337 /* : String */;
val* var338 /* : nullable Int */;
val* var339 /* : nullable Int */;
val* var340 /* : nullable Bool */;
val* var341 /* : nullable Bool */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : CString */;
val* var345 /* : String */;
val* var346 /* : nullable Int */;
val* var347 /* : nullable Int */;
val* var348 /* : nullable Bool */;
val* var349 /* : nullable Bool */;
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
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : CString */;
val* var369 /* : String */;
val* var370 /* : nullable Int */;
val* var371 /* : nullable Int */;
val* var372 /* : nullable Bool */;
val* var373 /* : nullable Bool */;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : CString */;
val* var377 /* : String */;
val* var378 /* : nullable Int */;
val* var379 /* : nullable Int */;
val* var380 /* : nullable Bool */;
val* var381 /* : nullable Bool */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : CString */;
val* var385 /* : String */;
val* var386 /* : nullable Int */;
val* var387 /* : nullable Int */;
val* var388 /* : nullable Bool */;
val* var389 /* : nullable Bool */;
val* var390 /* : String */;
val* var391 /* : nullable Object */;
val* var392 /* : String */;
val* var393 /* : String */;
val* var394 /* : nullable Object */;
val* var395 /* : String */;
val* var396 /* : String */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : CString */;
val* var400 /* : String */;
val* var401 /* : nullable Int */;
val* var402 /* : nullable Int */;
val* var403 /* : nullable Bool */;
val* var404 /* : nullable Bool */;
val* var406 /* : NativeArray[String] */;
static val* varonce405;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : CString */;
val* var410 /* : String */;
val* var411 /* : nullable Int */;
val* var412 /* : nullable Int */;
val* var413 /* : nullable Bool */;
val* var414 /* : nullable Bool */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : CString */;
val* var418 /* : String */;
val* var419 /* : nullable Int */;
val* var420 /* : nullable Int */;
val* var421 /* : nullable Bool */;
val* var422 /* : nullable Bool */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : CString */;
val* var426 /* : String */;
val* var427 /* : nullable Int */;
val* var428 /* : nullable Int */;
val* var429 /* : nullable Bool */;
val* var430 /* : nullable Bool */;
static val* varonce431;
val* var432 /* : String */;
char* var433 /* : CString */;
val* var434 /* : String */;
val* var435 /* : nullable Int */;
val* var436 /* : nullable Int */;
val* var437 /* : nullable Bool */;
val* var438 /* : nullable Bool */;
val* var439 /* : String */;
val* var440 /* : nullable Object */;
val* var441 /* : String */;
val* var442 /* : String */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : CString */;
val* var446 /* : String */;
val* var447 /* : nullable Int */;
val* var448 /* : nullable Int */;
val* var449 /* : nullable Bool */;
val* var450 /* : nullable Bool */;
short int var451 /* : Bool */;
short int var452 /* : Bool */;
int cltype453;
int idtype454;
short int var_455 /* var : Bool */;
val* var456 /* : AbstractCompiler */;
val* var458 /* : AbstractCompiler */;
val* var459 /* : ModelBuilder */;
val* var461 /* : ModelBuilder */;
val* var462 /* : ToolContext */;
val* var464 /* : ToolContext */;
val* var465 /* : OptionBool */;
val* var467 /* : OptionBool */;
val* var468 /* : nullable Object */;
val* var470 /* : nullable Object */;
short int var471 /* : Bool */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : CString */;
val* var475 /* : String */;
val* var476 /* : nullable Int */;
val* var477 /* : nullable Int */;
val* var478 /* : nullable Bool */;
val* var479 /* : nullable Bool */;
val* var480 /* : Text */;
val* var_callsym481 /* var callsym: String */;
val* var483 /* : NativeArray[String] */;
static val* varonce482;
static val* varonce484;
val* var485 /* : String */;
char* var486 /* : CString */;
val* var487 /* : String */;
val* var488 /* : nullable Int */;
val* var489 /* : nullable Int */;
val* var490 /* : nullable Bool */;
val* var491 /* : nullable Bool */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : CString */;
val* var495 /* : String */;
val* var496 /* : nullable Int */;
val* var497 /* : nullable Int */;
val* var498 /* : nullable Bool */;
val* var499 /* : nullable Bool */;
static val* varonce500;
val* var501 /* : String */;
char* var502 /* : CString */;
val* var503 /* : String */;
val* var504 /* : nullable Int */;
val* var505 /* : nullable Int */;
val* var506 /* : nullable Bool */;
val* var507 /* : nullable Bool */;
static val* varonce508;
val* var509 /* : String */;
char* var510 /* : CString */;
val* var511 /* : String */;
val* var512 /* : nullable Int */;
val* var513 /* : nullable Int */;
val* var514 /* : nullable Bool */;
val* var515 /* : nullable Bool */;
val* var516 /* : String */;
val* var517 /* : nullable Object */;
val* var518 /* : String */;
val* var519 /* : String */;
val* var521 /* : NativeArray[String] */;
static val* varonce520;
static val* varonce522;
val* var523 /* : String */;
char* var524 /* : CString */;
val* var525 /* : String */;
val* var526 /* : nullable Int */;
val* var527 /* : nullable Int */;
val* var528 /* : nullable Bool */;
val* var529 /* : nullable Bool */;
static val* varonce530;
val* var531 /* : String */;
char* var532 /* : CString */;
val* var533 /* : String */;
val* var534 /* : nullable Int */;
val* var535 /* : nullable Int */;
val* var536 /* : nullable Bool */;
val* var537 /* : nullable Bool */;
static val* varonce538;
val* var539 /* : String */;
char* var540 /* : CString */;
val* var541 /* : String */;
val* var542 /* : nullable Int */;
val* var543 /* : nullable Int */;
val* var544 /* : nullable Bool */;
val* var545 /* : nullable Bool */;
static val* varonce546;
val* var547 /* : String */;
char* var548 /* : CString */;
val* var549 /* : String */;
val* var550 /* : nullable Int */;
val* var551 /* : nullable Int */;
val* var552 /* : nullable Bool */;
val* var553 /* : nullable Bool */;
static val* varonce554;
val* var555 /* : String */;
char* var556 /* : CString */;
val* var557 /* : String */;
val* var558 /* : nullable Int */;
val* var559 /* : nullable Int */;
val* var560 /* : nullable Bool */;
val* var561 /* : nullable Bool */;
static val* varonce562;
val* var563 /* : String */;
char* var564 /* : CString */;
val* var565 /* : String */;
val* var566 /* : nullable Int */;
val* var567 /* : nullable Int */;
val* var568 /* : nullable Bool */;
val* var569 /* : nullable Bool */;
static val* varonce570;
val* var571 /* : String */;
char* var572 /* : CString */;
val* var573 /* : String */;
val* var574 /* : nullable Int */;
val* var575 /* : nullable Int */;
val* var576 /* : nullable Bool */;
val* var577 /* : nullable Bool */;
val* var578 /* : String */;
val* var579 /* : nullable Object */;
val* var580 /* : String */;
val* var581 /* : String */;
val* var582 /* : nullable Object */;
val* var583 /* : String */;
val* var584 /* : String */;
short int var585 /* : Bool */;
short int var586 /* : Bool */;
short int var588 /* : Bool */;
short int var589 /* : Bool */;
short int var590 /* : Bool */;
short int var591 /* : Bool */;
short int var593 /* : Bool */;
short int var594 /* : Bool */;
static val* varonce595;
val* var596 /* : String */;
char* var597 /* : CString */;
val* var598 /* : String */;
val* var599 /* : nullable Int */;
val* var600 /* : nullable Int */;
val* var601 /* : nullable Bool */;
val* var602 /* : nullable Bool */;
var_mmethod = p0;
var_arguments = p1;
var_mentity = p2;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
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
var_ = var4;
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_tables (var_) on <var_:ModelBuilder> */
var9 = var_->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var_:ModelBuilder> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var7 + 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_tables= (var_,var10) on <var_:ModelBuilder> */
var_->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l = var10; /* _nb_invok_by_tables on <var_:ModelBuilder> */
RET_LABEL14:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var15) on <var15:AbstractCompiler(SeparateCompiler)> */
var20 = var15->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var15:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var18) on <var18:ModelBuilder> */
var23 = var18->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var18:ModelBuilder> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (var21) on <var21:ToolContext> */
var26 = var21->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var21:ToolContext> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline opts$Option$value (var24) on <var24:OptionBool> */
var29 = var24->attrs[COLOR_opts__Option___value].val; /* _value on <var24:OptionBool> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = (short int)((long)(var27)>>2);
if (var30){
if (likely(varonce!=NULL)) {
var31 = varonce;
} else {
var32 = "count_invoke_by_tables++;";
var34 = (val*)(25l<<2|1);
var35 = (val*)(25l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce = var31;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var31); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var40 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var_mmethod) on <var_mmethod:MMethod> */
var43 = var_mmethod->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var41) on <var41:MPropDef(MMethodDef)> */
var46 = var41->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var41:MPropDef(MMethodDef)> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (var44 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1459);
fatal_exit(1);
} else {
var47 = nitc___nitc__MSignature___arity(var44);
}
{
{ /* Inline kernel$Int$+ (var47,1l) on <var47:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var50 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var47 + 1l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var38,var48) on <var38:Int> */
var57 = var38 == var48;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (unlikely(!var55)) {
if (unlikely(varonce58==NULL)) {
var59 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "Invalid arity for ";
var64 = (val*)(18l<<2|1);
var65 = (val*)(18l<<2|1);
var66 = (val*)((long)(0)<<2|3);
var67 = (val*)((long)(0)<<2|3);
var63 = core__flat___CString___to_s_unsafe(var62, var64, var65, var66, var67);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var59)->values[0]=var61;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = ". ";
var72 = (val*)(2l<<2|1);
var73 = (val*)(2l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var59)->values[2]=var69;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = " arguments given.";
var80 = (val*)(17l<<2|1);
var81 = (val*)(17l<<2|1);
var82 = (val*)((long)(0)<<2|3);
var83 = (val*)((long)(0)<<2|3);
var79 = core__flat___CString___to_s_unsafe(var78, var80, var81, var82, var83);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var59)->values[4]=var77;
} else {
var59 = varonce58;
varonce58 = NULL;
}
{
var84 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var59)->values[1]=var84;
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var87 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var88 = core__flat___Int___core__abstract_text__Object__to_s(var85);
((struct instance_core__NativeArray*)var59)->values[3]=var88;
{
var89 = ((val*(*)(val* self))(var59->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var59); /* native_to_s on <var59:NativeArray[String]>*/
}
varonce58 = var59;
{
nitc___nitc__AbstractCompilerVisitor___debug(self, var89); /* Direct call abstract_compiler$AbstractCompilerVisitor$debug on <self:SeparateCompilerVisitor>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1459);
fatal_exit(1);
}
{
var90 = nitc___nitc__SeparateCompilerVisitor___before_send(self, var_mmethod, var_arguments);
}
var_res0 = var90;
{
{ /* Inline model$MProperty$intro (var_mmethod) on <var_mmethod:MMethod> */
var93 = var_mmethod->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var93 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
var94 = nitc__separate_compiler___MMethodDef___virtual_runtime_function(var91);
}
var_runtime_function = var94;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (var_runtime_function) on <var_runtime_function:SeparateRuntimeFunction> */
var97 = var_runtime_function->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <var_runtime_function:SeparateRuntimeFunction> */
if (unlikely(var97 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
var_msignature = var95;
{
{ /* Inline model$MProperty$intro (var_mmethod) on <var_mmethod:MMethod> */
var100 = var_mmethod->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var100 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(self, var98, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$adapt_signature on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:MSignature> */
var103 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
var_ret = var101;
if (var_ret == NULL) {
var104 = 1; /* is null */
} else {
var104 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var109 = var_ret == var_other;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
if (var104){
var_res = ((val*)NULL);
} else {
{
var110 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var110;
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = ", ";
var115 = (val*)(2l<<2|1);
var116 = (val*)(2l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
{
var119 = core__abstract_text___Collection___join(var_arguments, var112, ((val*)NULL));
}
var_ss = var119;
{
var120 = nitc__separate_compiler___MEntity___const_color(var_mentity);
}
var_const_color = var120;
if (var_res == NULL) {
var121 = 0; /* is null */
} else {
var121 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other124 = ((val*)NULL);
{
var125 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other124); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var126 = !var125;
var122 = var126;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
var121 = var122;
}
if (var121){
if (unlikely(varonce127==NULL)) {
var128 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = " = ";
var133 = (val*)(3l<<2|1);
var134 = (val*)(3l<<2|1);
var135 = (val*)((long)(0)<<2|3);
var136 = (val*)((long)(0)<<2|3);
var132 = core__flat___CString___to_s_unsafe(var131, var133, var134, var135, var136);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var128)->values[1]=var130;
} else {
var128 = varonce127;
varonce127 = NULL;
}
{
var137 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var128)->values[0]=var137;
{
var138 = ((val*(*)(val* self))(var128->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var128); /* native_to_s on <var128:NativeArray[String]>*/
}
varonce127 = var128;
var_ress = var138;
} else {
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "";
var143 = (val*)(0l<<2|1);
var144 = (val*)(0l<<2|1);
var145 = (val*)((long)(0)<<2|3);
var146 = (val*)((long)(0)<<2|3);
var142 = core__flat___CString___to_s_unsafe(var141, var143, var144, var145, var146);
var140 = var142;
varonce139 = var140;
}
var_ress = var140;
}
/* <var_mentity:MEntity> isa MMethod */
cltype149 = type_nitc__MMethod.color;
idtype150 = type_nitc__MMethod.id;
if(cltype149 >= var_mentity->type->table_size) {
var148 = 0;
} else {
var148 = var_mentity->type->type_table[cltype149] == idtype150;
}
var_151 = var148;
if (var148){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var154 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var154 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var152) on <var152:AbstractCompiler(SeparateCompiler)> */
var157 = var152->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var152:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var157 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var155) on <var155:ModelBuilder> */
var160 = var155->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var155:ModelBuilder> */
if (unlikely(var160 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_direct_call_monomorph0 (var158) on <var158:ToolContext> */
var163 = var158->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_direct_call_monomorph0].val; /* _opt_direct_call_monomorph0 on <var158:ToolContext> */
if (unlikely(var163 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph0");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 52);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline opts$Option$value (var161) on <var161:OptionBool> */
var166 = var161->attrs[COLOR_opts__Option___value].val; /* _value on <var161:OptionBool> */
var164 = var166;
RET_LABEL165:(void)0;
}
}
var167 = (short int)((long)(var164)>>2);
var147 = var167;
} else {
var147 = var_151;
}
if (var147){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var170 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var170 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
var171 = nitc___nitc__SeparateCompiler___is_monomorphic(var168, var_mentity);
}
var_md = var171;
if (var_md == NULL) {
var172 = 0; /* is null */
} else {
var172 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_md,((val*)NULL)) on <var_md:nullable MMethodDef> */
var_other124 = ((val*)NULL);
{
var175 = ((short int(*)(val* self, val* p0))(var_md->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_md, var_other124); /* == on <var_md:nullable MMethodDef(MMethodDef)>*/
}
var176 = !var175;
var173 = var176;
goto RET_LABEL174;
RET_LABEL174:(void)0;
}
var172 = var173;
}
if (var172){
{
var177 = nitc__separate_compiler___MMethodDef___virtual_runtime_function(var_md);
}
{
var178 = nitc___nitc__AbstractRuntimeFunction___c_name(var177);
}
var_callsym = var178;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_callsym); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce179==NULL)) {
var180 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "(";
var185 = (val*)(1l<<2|1);
var186 = (val*)(1l<<2|1);
var187 = (val*)((long)(0)<<2|3);
var188 = (val*)((long)(0)<<2|3);
var184 = core__flat___CString___to_s_unsafe(var183, var185, var186, var187, var188);
var182 = var184;
varonce181 = var182;
}
((struct instance_core__NativeArray*)var180)->values[2]=var182;
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "); /* ";
var193 = (val*)(6l<<2|1);
var194 = (val*)(6l<<2|1);
var195 = (val*)((long)(0)<<2|3);
var196 = (val*)((long)(0)<<2|3);
var192 = core__flat___CString___to_s_unsafe(var191, var193, var194, var195, var196);
var190 = var192;
varonce189 = var190;
}
((struct instance_core__NativeArray*)var180)->values[4]=var190;
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = " on ";
var201 = (val*)(4l<<2|1);
var202 = (val*)(4l<<2|1);
var203 = (val*)((long)(0)<<2|3);
var204 = (val*)((long)(0)<<2|3);
var200 = core__flat___CString___to_s_unsafe(var199, var201, var202, var203, var204);
var198 = var200;
varonce197 = var198;
}
((struct instance_core__NativeArray*)var180)->values[6]=var198;
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "*/";
var209 = (val*)(2l<<2|1);
var210 = (val*)(2l<<2|1);
var211 = (val*)((long)(0)<<2|3);
var212 = (val*)((long)(0)<<2|3);
var208 = core__flat___CString___to_s_unsafe(var207, var209, var210, var211, var212);
var206 = var208;
varonce205 = var206;
}
((struct instance_core__NativeArray*)var180)->values[8]=var206;
} else {
var180 = varonce179;
varonce179 = NULL;
}
((struct instance_core__NativeArray*)var180)->values[0]=var_ress;
((struct instance_core__NativeArray*)var180)->values[1]=var_callsym;
((struct instance_core__NativeArray*)var180)->values[3]=var_ss;
{
var213 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var180)->values[5]=var213;
{
var214 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var215 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var214);
}
((struct instance_core__NativeArray*)var180)->values[7]=var215;
{
var216 = ((val*(*)(val* self))(var180->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var180); /* native_to_s on <var180:NativeArray[String]>*/
}
varonce179 = var180;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var216); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_const_color); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce217==NULL)) {
var218 = NEW_core__NativeArray((int)14l, &type_core__NativeArray__core__String);
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "((";
var223 = (val*)(2l<<2|1);
var224 = (val*)(2l<<2|1);
var225 = (val*)((long)(0)<<2|3);
var226 = (val*)((long)(0)<<2|3);
var222 = core__flat___CString___to_s_unsafe(var221, var223, var224, var225, var226);
var220 = var222;
varonce219 = var220;
}
((struct instance_core__NativeArray*)var218)->values[1]=var220;
if (likely(varonce227!=NULL)) {
var228 = varonce227;
} else {
var229 = ")(";
var231 = (val*)(2l<<2|1);
var232 = (val*)(2l<<2|1);
var233 = (val*)((long)(0)<<2|3);
var234 = (val*)((long)(0)<<2|3);
var230 = core__flat___CString___to_s_unsafe(var229, var231, var232, var233, var234);
var228 = var230;
varonce227 = var228;
}
((struct instance_core__NativeArray*)var218)->values[3]=var228;
if (likely(varonce235!=NULL)) {
var236 = varonce235;
} else {
var237 = "->vft[";
var239 = (val*)(6l<<2|1);
var240 = (val*)(6l<<2|1);
var241 = (val*)((long)(0)<<2|3);
var242 = (val*)((long)(0)<<2|3);
var238 = core__flat___CString___to_s_unsafe(var237, var239, var240, var241, var242);
var236 = var238;
varonce235 = var236;
}
((struct instance_core__NativeArray*)var218)->values[5]=var236;
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = "]))(";
var247 = (val*)(4l<<2|1);
var248 = (val*)(4l<<2|1);
var249 = (val*)((long)(0)<<2|3);
var250 = (val*)((long)(0)<<2|3);
var246 = core__flat___CString___to_s_unsafe(var245, var247, var248, var249, var250);
var244 = var246;
varonce243 = var244;
}
((struct instance_core__NativeArray*)var218)->values[7]=var244;
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "); /* ";
var255 = (val*)(6l<<2|1);
var256 = (val*)(6l<<2|1);
var257 = (val*)((long)(0)<<2|3);
var258 = (val*)((long)(0)<<2|3);
var254 = core__flat___CString___to_s_unsafe(var253, var255, var256, var257, var258);
var252 = var254;
varonce251 = var252;
}
((struct instance_core__NativeArray*)var218)->values[9]=var252;
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = " on ";
var263 = (val*)(4l<<2|1);
var264 = (val*)(4l<<2|1);
var265 = (val*)((long)(0)<<2|3);
var266 = (val*)((long)(0)<<2|3);
var262 = core__flat___CString___to_s_unsafe(var261, var263, var264, var265, var266);
var260 = var262;
varonce259 = var260;
}
((struct instance_core__NativeArray*)var218)->values[11]=var260;
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = "*/";
var271 = (val*)(2l<<2|1);
var272 = (val*)(2l<<2|1);
var273 = (val*)((long)(0)<<2|3);
var274 = (val*)((long)(0)<<2|3);
var270 = core__flat___CString___to_s_unsafe(var269, var271, var272, var273, var274);
var268 = var270;
varonce267 = var268;
}
((struct instance_core__NativeArray*)var218)->values[13]=var268;
} else {
var218 = varonce217;
varonce217 = NULL;
}
((struct instance_core__NativeArray*)var218)->values[0]=var_ress;
{
var275 = nitc___nitc__SeparateRuntimeFunction___c_funptrtype(var_runtime_function);
}
((struct instance_core__NativeArray*)var218)->values[2]=var275;
{
var276 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var277 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var276);
}
((struct instance_core__NativeArray*)var218)->values[4]=var277;
((struct instance_core__NativeArray*)var218)->values[6]=var_const_color;
((struct instance_core__NativeArray*)var218)->values[8]=var_ss;
{
var278 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var218)->values[10]=var278;
{
var279 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var280 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var279);
}
((struct instance_core__NativeArray*)var218)->values[12]=var280;
{
var281 = ((val*(*)(val* self))(var218->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var218); /* native_to_s on <var218:NativeArray[String]>*/
}
varonce217 = var218;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var281); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
} else {
/* <var_mentity:MEntity> isa MMethod */
cltype284 = type_nitc__MMethod.color;
idtype285 = type_nitc__MMethod.id;
if(cltype284 >= var_mentity->type->table_size) {
var283 = 0;
} else {
var283 = var_mentity->type->type_table[cltype284] == idtype285;
}
var_286 = var283;
if (var283){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var289 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var289 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var287) on <var287:AbstractCompiler(SeparateCompiler)> */
var292 = var287->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var287:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var292 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var290) on <var290:ModelBuilder> */
var295 = var290->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var290:ModelBuilder> */
if (unlikely(var295 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var293 = var295;
RET_LABEL294:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_guard_call (var293) on <var293:ToolContext> */
var298 = var293->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_guard_call].val; /* _opt_guard_call on <var293:ToolContext> */
if (unlikely(var298 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_guard_call");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 39);
fatal_exit(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
{
{ /* Inline opts$Option$value (var296) on <var296:OptionBool> */
var301 = var296->attrs[COLOR_opts__Option___value].val; /* _value on <var296:OptionBool> */
var299 = var301;
RET_LABEL300:(void)0;
}
}
var302 = (short int)((long)(var299)>>2);
var282 = var302;
} else {
var282 = var_286;
}
if (var282){
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "CALL_";
var307 = (val*)(5l<<2|1);
var308 = (val*)(5l<<2|1);
var309 = (val*)((long)(0)<<2|3);
var310 = (val*)((long)(0)<<2|3);
var306 = core__flat___CString___to_s_unsafe(var305, var307, var308, var309, var310);
var304 = var306;
varonce303 = var304;
}
{
var311 = ((val*(*)(val* self, val* p0))(var304->class->vft[COLOR_core__abstract_text__Text___43d]))(var304, var_const_color); /* + on <var304:String>*/
}
var_callsym312 = var311;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_callsym312); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce313==NULL)) {
var314 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce315!=NULL)) {
var316 = varonce315;
} else {
var317 = "if (!";
var319 = (val*)(5l<<2|1);
var320 = (val*)(5l<<2|1);
var321 = (val*)((long)(0)<<2|3);
var322 = (val*)((long)(0)<<2|3);
var318 = core__flat___CString___to_s_unsafe(var317, var319, var320, var321, var322);
var316 = var318;
varonce315 = var316;
}
((struct instance_core__NativeArray*)var314)->values[0]=var316;
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = ") {";
var327 = (val*)(3l<<2|1);
var328 = (val*)(3l<<2|1);
var329 = (val*)((long)(0)<<2|3);
var330 = (val*)((long)(0)<<2|3);
var326 = core__flat___CString___to_s_unsafe(var325, var327, var328, var329, var330);
var324 = var326;
varonce323 = var324;
}
((struct instance_core__NativeArray*)var314)->values[2]=var324;
} else {
var314 = varonce313;
varonce313 = NULL;
}
((struct instance_core__NativeArray*)var314)->values[1]=var_callsym312;
{
var331 = ((val*(*)(val* self))(var314->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var314); /* native_to_s on <var314:NativeArray[String]>*/
}
varonce313 = var314;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var331); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_const_color); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce332==NULL)) {
var333 = NEW_core__NativeArray((int)14l, &type_core__NativeArray__core__String);
if (likely(varonce334!=NULL)) {
var335 = varonce334;
} else {
var336 = "((";
var338 = (val*)(2l<<2|1);
var339 = (val*)(2l<<2|1);
var340 = (val*)((long)(0)<<2|3);
var341 = (val*)((long)(0)<<2|3);
var337 = core__flat___CString___to_s_unsafe(var336, var338, var339, var340, var341);
var335 = var337;
varonce334 = var335;
}
((struct instance_core__NativeArray*)var333)->values[1]=var335;
if (likely(varonce342!=NULL)) {
var343 = varonce342;
} else {
var344 = ")(";
var346 = (val*)(2l<<2|1);
var347 = (val*)(2l<<2|1);
var348 = (val*)((long)(0)<<2|3);
var349 = (val*)((long)(0)<<2|3);
var345 = core__flat___CString___to_s_unsafe(var344, var346, var347, var348, var349);
var343 = var345;
varonce342 = var343;
}
((struct instance_core__NativeArray*)var333)->values[3]=var343;
if (likely(varonce350!=NULL)) {
var351 = varonce350;
} else {
var352 = "->vft[";
var354 = (val*)(6l<<2|1);
var355 = (val*)(6l<<2|1);
var356 = (val*)((long)(0)<<2|3);
var357 = (val*)((long)(0)<<2|3);
var353 = core__flat___CString___to_s_unsafe(var352, var354, var355, var356, var357);
var351 = var353;
varonce350 = var351;
}
((struct instance_core__NativeArray*)var333)->values[5]=var351;
if (likely(varonce358!=NULL)) {
var359 = varonce358;
} else {
var360 = "]))(";
var362 = (val*)(4l<<2|1);
var363 = (val*)(4l<<2|1);
var364 = (val*)((long)(0)<<2|3);
var365 = (val*)((long)(0)<<2|3);
var361 = core__flat___CString___to_s_unsafe(var360, var362, var363, var364, var365);
var359 = var361;
varonce358 = var359;
}
((struct instance_core__NativeArray*)var333)->values[7]=var359;
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = "); /* ";
var370 = (val*)(6l<<2|1);
var371 = (val*)(6l<<2|1);
var372 = (val*)((long)(0)<<2|3);
var373 = (val*)((long)(0)<<2|3);
var369 = core__flat___CString___to_s_unsafe(var368, var370, var371, var372, var373);
var367 = var369;
varonce366 = var367;
}
((struct instance_core__NativeArray*)var333)->values[9]=var367;
if (likely(varonce374!=NULL)) {
var375 = varonce374;
} else {
var376 = " on ";
var378 = (val*)(4l<<2|1);
var379 = (val*)(4l<<2|1);
var380 = (val*)((long)(0)<<2|3);
var381 = (val*)((long)(0)<<2|3);
var377 = core__flat___CString___to_s_unsafe(var376, var378, var379, var380, var381);
var375 = var377;
varonce374 = var375;
}
((struct instance_core__NativeArray*)var333)->values[11]=var375;
if (likely(varonce382!=NULL)) {
var383 = varonce382;
} else {
var384 = "*/";
var386 = (val*)(2l<<2|1);
var387 = (val*)(2l<<2|1);
var388 = (val*)((long)(0)<<2|3);
var389 = (val*)((long)(0)<<2|3);
var385 = core__flat___CString___to_s_unsafe(var384, var386, var387, var388, var389);
var383 = var385;
varonce382 = var383;
}
((struct instance_core__NativeArray*)var333)->values[13]=var383;
} else {
var333 = varonce332;
varonce332 = NULL;
}
((struct instance_core__NativeArray*)var333)->values[0]=var_ress;
{
var390 = nitc___nitc__SeparateRuntimeFunction___c_funptrtype(var_runtime_function);
}
((struct instance_core__NativeArray*)var333)->values[2]=var390;
{
var391 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var392 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var391);
}
((struct instance_core__NativeArray*)var333)->values[4]=var392;
((struct instance_core__NativeArray*)var333)->values[6]=var_const_color;
((struct instance_core__NativeArray*)var333)->values[8]=var_ss;
{
var393 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var333)->values[10]=var393;
{
var394 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var395 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var394);
}
((struct instance_core__NativeArray*)var333)->values[12]=var395;
{
var396 = ((val*(*)(val* self))(var333->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var333); /* native_to_s on <var333:NativeArray[String]>*/
}
varonce332 = var333;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var396); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "} else {";
var401 = (val*)(8l<<2|1);
var402 = (val*)(8l<<2|1);
var403 = (val*)((long)(0)<<2|3);
var404 = (val*)((long)(0)<<2|3);
var400 = core__flat___CString___to_s_unsafe(var399, var401, var402, var403, var404);
var398 = var400;
varonce397 = var398;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var398); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce405==NULL)) {
var406 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce407!=NULL)) {
var408 = varonce407;
} else {
var409 = "(";
var411 = (val*)(1l<<2|1);
var412 = (val*)(1l<<2|1);
var413 = (val*)((long)(0)<<2|3);
var414 = (val*)((long)(0)<<2|3);
var410 = core__flat___CString___to_s_unsafe(var409, var411, var412, var413, var414);
var408 = var410;
varonce407 = var408;
}
((struct instance_core__NativeArray*)var406)->values[2]=var408;
if (likely(varonce415!=NULL)) {
var416 = varonce415;
} else {
var417 = "); /* ";
var419 = (val*)(6l<<2|1);
var420 = (val*)(6l<<2|1);
var421 = (val*)((long)(0)<<2|3);
var422 = (val*)((long)(0)<<2|3);
var418 = core__flat___CString___to_s_unsafe(var417, var419, var420, var421, var422);
var416 = var418;
varonce415 = var416;
}
((struct instance_core__NativeArray*)var406)->values[4]=var416;
if (likely(varonce423!=NULL)) {
var424 = varonce423;
} else {
var425 = " on ";
var427 = (val*)(4l<<2|1);
var428 = (val*)(4l<<2|1);
var429 = (val*)((long)(0)<<2|3);
var430 = (val*)((long)(0)<<2|3);
var426 = core__flat___CString___to_s_unsafe(var425, var427, var428, var429, var430);
var424 = var426;
varonce423 = var424;
}
((struct instance_core__NativeArray*)var406)->values[6]=var424;
if (likely(varonce431!=NULL)) {
var432 = varonce431;
} else {
var433 = "*/";
var435 = (val*)(2l<<2|1);
var436 = (val*)(2l<<2|1);
var437 = (val*)((long)(0)<<2|3);
var438 = (val*)((long)(0)<<2|3);
var434 = core__flat___CString___to_s_unsafe(var433, var435, var436, var437, var438);
var432 = var434;
varonce431 = var432;
}
((struct instance_core__NativeArray*)var406)->values[8]=var432;
} else {
var406 = varonce405;
varonce405 = NULL;
}
((struct instance_core__NativeArray*)var406)->values[0]=var_ress;
((struct instance_core__NativeArray*)var406)->values[1]=var_callsym312;
((struct instance_core__NativeArray*)var406)->values[3]=var_ss;
{
var439 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var406)->values[5]=var439;
{
var440 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var441 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var440);
}
((struct instance_core__NativeArray*)var406)->values[7]=var441;
{
var442 = ((val*(*)(val* self))(var406->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var406); /* native_to_s on <var406:NativeArray[String]>*/
}
varonce405 = var406;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var442); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "}";
var447 = (val*)(1l<<2|1);
var448 = (val*)(1l<<2|1);
var449 = (val*)((long)(0)<<2|3);
var450 = (val*)((long)(0)<<2|3);
var446 = core__flat___CString___to_s_unsafe(var445, var447, var448, var449, var450);
var444 = var446;
varonce443 = var444;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var444); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
/* <var_mentity:MEntity> isa MMethod */
cltype453 = type_nitc__MMethod.color;
idtype454 = type_nitc__MMethod.id;
if(cltype453 >= var_mentity->type->table_size) {
var452 = 0;
} else {
var452 = var_mentity->type->type_table[cltype453] == idtype454;
}
var_455 = var452;
if (var452){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var458 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var458 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var456 = var458;
RET_LABEL457:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var456) on <var456:AbstractCompiler(SeparateCompiler)> */
var461 = var456->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var456:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var461 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var459 = var461;
RET_LABEL460:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var459) on <var459:ModelBuilder> */
var464 = var459->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var459:ModelBuilder> */
if (unlikely(var464 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var462 = var464;
RET_LABEL463:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_trampoline_call (var462) on <var462:ToolContext> */
var467 = var462->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_trampoline_call].val; /* _opt_trampoline_call on <var462:ToolContext> */
if (unlikely(var467 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_trampoline_call");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 37);
fatal_exit(1);
}
var465 = var467;
RET_LABEL466:(void)0;
}
}
{
{ /* Inline opts$Option$value (var465) on <var465:OptionBool> */
var470 = var465->attrs[COLOR_opts__Option___value].val; /* _value on <var465:OptionBool> */
var468 = var470;
RET_LABEL469:(void)0;
}
}
var471 = (short int)((long)(var468)>>2);
var451 = var471;
} else {
var451 = var_455;
}
if (var451){
if (likely(varonce472!=NULL)) {
var473 = varonce472;
} else {
var474 = "CALL_";
var476 = (val*)(5l<<2|1);
var477 = (val*)(5l<<2|1);
var478 = (val*)((long)(0)<<2|3);
var479 = (val*)((long)(0)<<2|3);
var475 = core__flat___CString___to_s_unsafe(var474, var476, var477, var478, var479);
var473 = var475;
varonce472 = var473;
}
{
var480 = ((val*(*)(val* self, val* p0))(var473->class->vft[COLOR_core__abstract_text__Text___43d]))(var473, var_const_color); /* + on <var473:String>*/
}
var_callsym481 = var480;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_callsym481); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce482==NULL)) {
var483 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce484!=NULL)) {
var485 = varonce484;
} else {
var486 = "(";
var488 = (val*)(1l<<2|1);
var489 = (val*)(1l<<2|1);
var490 = (val*)((long)(0)<<2|3);
var491 = (val*)((long)(0)<<2|3);
var487 = core__flat___CString___to_s_unsafe(var486, var488, var489, var490, var491);
var485 = var487;
varonce484 = var485;
}
((struct instance_core__NativeArray*)var483)->values[2]=var485;
if (likely(varonce492!=NULL)) {
var493 = varonce492;
} else {
var494 = "); /* ";
var496 = (val*)(6l<<2|1);
var497 = (val*)(6l<<2|1);
var498 = (val*)((long)(0)<<2|3);
var499 = (val*)((long)(0)<<2|3);
var495 = core__flat___CString___to_s_unsafe(var494, var496, var497, var498, var499);
var493 = var495;
varonce492 = var493;
}
((struct instance_core__NativeArray*)var483)->values[4]=var493;
if (likely(varonce500!=NULL)) {
var501 = varonce500;
} else {
var502 = " on ";
var504 = (val*)(4l<<2|1);
var505 = (val*)(4l<<2|1);
var506 = (val*)((long)(0)<<2|3);
var507 = (val*)((long)(0)<<2|3);
var503 = core__flat___CString___to_s_unsafe(var502, var504, var505, var506, var507);
var501 = var503;
varonce500 = var501;
}
((struct instance_core__NativeArray*)var483)->values[6]=var501;
if (likely(varonce508!=NULL)) {
var509 = varonce508;
} else {
var510 = "*/";
var512 = (val*)(2l<<2|1);
var513 = (val*)(2l<<2|1);
var514 = (val*)((long)(0)<<2|3);
var515 = (val*)((long)(0)<<2|3);
var511 = core__flat___CString___to_s_unsafe(var510, var512, var513, var514, var515);
var509 = var511;
varonce508 = var509;
}
((struct instance_core__NativeArray*)var483)->values[8]=var509;
} else {
var483 = varonce482;
varonce482 = NULL;
}
((struct instance_core__NativeArray*)var483)->values[0]=var_ress;
((struct instance_core__NativeArray*)var483)->values[1]=var_callsym481;
((struct instance_core__NativeArray*)var483)->values[3]=var_ss;
{
var516 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var483)->values[5]=var516;
{
var517 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var518 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var517);
}
((struct instance_core__NativeArray*)var483)->values[7]=var518;
{
var519 = ((val*(*)(val* self))(var483->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var483); /* native_to_s on <var483:NativeArray[String]>*/
}
varonce482 = var483;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var519); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_const_color); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce520==NULL)) {
var521 = NEW_core__NativeArray((int)14l, &type_core__NativeArray__core__String);
if (likely(varonce522!=NULL)) {
var523 = varonce522;
} else {
var524 = "((";
var526 = (val*)(2l<<2|1);
var527 = (val*)(2l<<2|1);
var528 = (val*)((long)(0)<<2|3);
var529 = (val*)((long)(0)<<2|3);
var525 = core__flat___CString___to_s_unsafe(var524, var526, var527, var528, var529);
var523 = var525;
varonce522 = var523;
}
((struct instance_core__NativeArray*)var521)->values[1]=var523;
if (likely(varonce530!=NULL)) {
var531 = varonce530;
} else {
var532 = ")(";
var534 = (val*)(2l<<2|1);
var535 = (val*)(2l<<2|1);
var536 = (val*)((long)(0)<<2|3);
var537 = (val*)((long)(0)<<2|3);
var533 = core__flat___CString___to_s_unsafe(var532, var534, var535, var536, var537);
var531 = var533;
varonce530 = var531;
}
((struct instance_core__NativeArray*)var521)->values[3]=var531;
if (likely(varonce538!=NULL)) {
var539 = varonce538;
} else {
var540 = "->vft[";
var542 = (val*)(6l<<2|1);
var543 = (val*)(6l<<2|1);
var544 = (val*)((long)(0)<<2|3);
var545 = (val*)((long)(0)<<2|3);
var541 = core__flat___CString___to_s_unsafe(var540, var542, var543, var544, var545);
var539 = var541;
varonce538 = var539;
}
((struct instance_core__NativeArray*)var521)->values[5]=var539;
if (likely(varonce546!=NULL)) {
var547 = varonce546;
} else {
var548 = "]))(";
var550 = (val*)(4l<<2|1);
var551 = (val*)(4l<<2|1);
var552 = (val*)((long)(0)<<2|3);
var553 = (val*)((long)(0)<<2|3);
var549 = core__flat___CString___to_s_unsafe(var548, var550, var551, var552, var553);
var547 = var549;
varonce546 = var547;
}
((struct instance_core__NativeArray*)var521)->values[7]=var547;
if (likely(varonce554!=NULL)) {
var555 = varonce554;
} else {
var556 = "); /* ";
var558 = (val*)(6l<<2|1);
var559 = (val*)(6l<<2|1);
var560 = (val*)((long)(0)<<2|3);
var561 = (val*)((long)(0)<<2|3);
var557 = core__flat___CString___to_s_unsafe(var556, var558, var559, var560, var561);
var555 = var557;
varonce554 = var555;
}
((struct instance_core__NativeArray*)var521)->values[9]=var555;
if (likely(varonce562!=NULL)) {
var563 = varonce562;
} else {
var564 = " on ";
var566 = (val*)(4l<<2|1);
var567 = (val*)(4l<<2|1);
var568 = (val*)((long)(0)<<2|3);
var569 = (val*)((long)(0)<<2|3);
var565 = core__flat___CString___to_s_unsafe(var564, var566, var567, var568, var569);
var563 = var565;
varonce562 = var563;
}
((struct instance_core__NativeArray*)var521)->values[11]=var563;
if (likely(varonce570!=NULL)) {
var571 = varonce570;
} else {
var572 = "*/";
var574 = (val*)(2l<<2|1);
var575 = (val*)(2l<<2|1);
var576 = (val*)((long)(0)<<2|3);
var577 = (val*)((long)(0)<<2|3);
var573 = core__flat___CString___to_s_unsafe(var572, var574, var575, var576, var577);
var571 = var573;
varonce570 = var571;
}
((struct instance_core__NativeArray*)var521)->values[13]=var571;
} else {
var521 = varonce520;
varonce520 = NULL;
}
((struct instance_core__NativeArray*)var521)->values[0]=var_ress;
{
var578 = nitc___nitc__SeparateRuntimeFunction___c_funptrtype(var_runtime_function);
}
((struct instance_core__NativeArray*)var521)->values[2]=var578;
{
var579 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var580 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var579);
}
((struct instance_core__NativeArray*)var521)->values[4]=var580;
((struct instance_core__NativeArray*)var521)->values[6]=var_const_color;
((struct instance_core__NativeArray*)var521)->values[8]=var_ss;
{
var581 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var521)->values[10]=var581;
{
var582 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var583 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var582);
}
((struct instance_core__NativeArray*)var521)->values[12]=var583;
{
var584 = ((val*(*)(val* self))(var521->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var521); /* native_to_s on <var521:NativeArray[String]>*/
}
varonce520 = var521;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var584); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
}
if (var_res0 == NULL) {
var585 = 0; /* is null */
} else {
var585 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res0,((val*)NULL)) on <var_res0:nullable RuntimeVariable> */
var_other124 = ((val*)NULL);
{
var588 = ((short int(*)(val* self, val* p0))(var_res0->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res0, var_other124); /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/
}
var589 = !var588;
var586 = var589;
goto RET_LABEL587;
RET_LABEL587:(void)0;
}
var585 = var586;
}
if (var585){
if (var_res == NULL) {
var590 = 0; /* is null */
} else {
var590 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other124 = ((val*)NULL);
{
var593 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other124); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var594 = !var593;
var591 = var594;
goto RET_LABEL592;
RET_LABEL592:(void)0;
}
var590 = var591;
}
if (unlikely(!var590)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1517);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var_res0, var_res); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (likely(varonce595!=NULL)) {
var596 = varonce595;
} else {
var597 = "}";
var599 = (val*)(1l<<2|1);
var600 = (val*)(1l<<2|1);
var601 = (val*)((long)(0)<<2|3);
var602 = (val*)((long)(0)<<2|3);
var598 = core__flat___CString___to_s_unsafe(var597, var599, var600, var601, var602);
var596 = var598;
varonce595 = var596;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var596); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$call for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : nullable MSignature */;
val* var6 /* : nullable MSignature */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var40 /* : String */;
long var41 /* : Int */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : nullable MSignature */;
val* var48 /* : nullable MSignature */;
val* var49 /* : nullable MType */;
val* var51 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var58 /* : MClassDef */;
val* var60 /* : MClassDef */;
val* var61 /* : MClassType */;
val* var63 /* : MClassType */;
val* var64 /* : MClassDef */;
val* var66 /* : MClassDef */;
val* var67 /* : MClassType */;
val* var69 /* : MClassType */;
val* var70 /* : MClassDef */;
val* var72 /* : MClassDef */;
val* var73 /* : MModule */;
val* var75 /* : MModule */;
val* var76 /* : MType */;
val* var77 /* : RuntimeVariable */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var_ /* var : Bool */;
val* var83 /* : AbstractCompiler */;
val* var85 /* : AbstractCompiler */;
val* var86 /* : ModelBuilder */;
val* var88 /* : ModelBuilder */;
val* var89 /* : ToolContext */;
val* var91 /* : ToolContext */;
val* var92 /* : OptionBool */;
val* var94 /* : OptionBool */;
val* var95 /* : nullable Object */;
val* var97 /* : nullable Object */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var_100 /* var : Bool */;
short int var101 /* : Bool */;
val* var102 /* : AbstractCompiler */;
val* var104 /* : AbstractCompiler */;
val* var105 /* : ModelBuilder */;
val* var107 /* : ModelBuilder */;
val* var108 /* : ToolContext */;
val* var110 /* : ToolContext */;
val* var111 /* : OptionBool */;
val* var113 /* : OptionBool */;
val* var114 /* : nullable Object */;
val* var116 /* : nullable Object */;
short int var117 /* : Bool */;
short int var_118 /* var : Bool */;
short int var119 /* : Bool */;
val* var120 /* : AbstractCompiler */;
val* var122 /* : AbstractCompiler */;
val* var123 /* : ModelBuilder */;
val* var125 /* : ModelBuilder */;
val* var_126 /* var : ModelBuilder */;
long var127 /* : Int */;
long var129 /* : Int */;
long var130 /* : Int */;
short int var132 /* : Bool */;
int cltype133;
int idtype134;
const char* var_class_name135;
long var136 /* : Int */;
val* var138 /* : AbstractCompiler */;
val* var140 /* : AbstractCompiler */;
val* var141 /* : ModelBuilder */;
val* var143 /* : ModelBuilder */;
val* var144 /* : ToolContext */;
val* var146 /* : ToolContext */;
val* var147 /* : OptionBool */;
val* var149 /* : OptionBool */;
val* var150 /* : nullable Object */;
val* var152 /* : nullable Object */;
short int var153 /* : Bool */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Bool */;
val* var161 /* : nullable Bool */;
val* var162 /* : StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Bool */;
val* var170 /* : nullable Bool */;
val* var171 /* : String */;
val* var174 /* : nullable StaticFrame */;
val* var176 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
val* var179 /* : NativeArray[String] */;
static val* varonce178;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : CString */;
val* var183 /* : String */;
val* var184 /* : nullable Int */;
val* var185 /* : nullable Int */;
val* var186 /* : nullable Bool */;
val* var187 /* : nullable Bool */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : CString */;
val* var191 /* : String */;
val* var192 /* : nullable Int */;
val* var193 /* : nullable Int */;
val* var194 /* : nullable Bool */;
val* var195 /* : nullable Bool */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Bool */;
val* var203 /* : nullable Bool */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : CString */;
val* var207 /* : String */;
val* var208 /* : nullable Int */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Bool */;
val* var211 /* : nullable Bool */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : CString */;
val* var216 /* : String */;
val* var217 /* : nullable Int */;
val* var218 /* : nullable Int */;
val* var219 /* : nullable Bool */;
val* var220 /* : nullable Bool */;
val* var221 /* : String */;
val* var222 /* : nullable Object */;
val* var223 /* : String */;
val* var224 /* : String */;
val* var225 /* : nullable RuntimeVariable */;
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
val* var236 /* : nullable String */;
val* var238 /* : nullable String */;
val* var239 /* : String */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : CString */;
val* var243 /* : String */;
val* var244 /* : nullable Int */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Bool */;
val* var247 /* : nullable Bool */;
val* var249 /* : AbstractCompiler */;
val* var251 /* : AbstractCompiler */;
val* var252 /* : ModelBuilder */;
val* var254 /* : ModelBuilder */;
val* var_255 /* var : ModelBuilder */;
long var256 /* : Int */;
long var258 /* : Int */;
long var259 /* : Int */;
short int var261 /* : Bool */;
int cltype262;
int idtype263;
const char* var_class_name264;
long var265 /* : Int */;
val* var267 /* : AbstractCompiler */;
val* var269 /* : AbstractCompiler */;
val* var270 /* : ModelBuilder */;
val* var272 /* : ModelBuilder */;
val* var273 /* : ToolContext */;
val* var275 /* : ToolContext */;
val* var276 /* : OptionBool */;
val* var278 /* : OptionBool */;
val* var279 /* : nullable Object */;
val* var281 /* : nullable Object */;
short int var282 /* : Bool */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : CString */;
val* var286 /* : String */;
val* var287 /* : nullable Int */;
val* var288 /* : nullable Int */;
val* var289 /* : nullable Bool */;
val* var290 /* : nullable Bool */;
val* var291 /* : String */;
short int var292 /* : Bool */;
short int var293 /* : Bool */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
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
val* var332 /* : String */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : CString */;
val* var336 /* : String */;
val* var337 /* : nullable Int */;
val* var338 /* : nullable Int */;
val* var339 /* : nullable Bool */;
val* var340 /* : nullable Bool */;
val* var341 /* : String */;
val* var342 /* : String */;
val* var343 /* : nullable Object */;
val* var344 /* : String */;
val* var345 /* : String */;
val* var347 /* : NativeArray[String] */;
static val* varonce346;
static val* varonce348;
val* var349 /* : String */;
char* var350 /* : CString */;
val* var351 /* : String */;
val* var352 /* : nullable Int */;
val* var353 /* : nullable Int */;
val* var354 /* : nullable Bool */;
val* var355 /* : nullable Bool */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : CString */;
val* var359 /* : String */;
val* var360 /* : nullable Int */;
val* var361 /* : nullable Int */;
val* var362 /* : nullable Bool */;
val* var363 /* : nullable Bool */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : CString */;
val* var367 /* : String */;
val* var368 /* : nullable Int */;
val* var369 /* : nullable Int */;
val* var370 /* : nullable Bool */;
val* var371 /* : nullable Bool */;
val* var372 /* : String */;
val* var373 /* : String */;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : CString */;
val* var377 /* : String */;
val* var378 /* : nullable Int */;
val* var379 /* : nullable Int */;
val* var380 /* : nullable Bool */;
val* var381 /* : nullable Bool */;
val* var382 /* : String */;
val* var383 /* : String */;
var_mmethoddef = p0;
var_recvtype = p1;
var_arguments = p2;
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var3 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var6 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1529);
fatal_exit(1);
} else {
var7 = nitc___nitc__MSignature___arity(var4);
}
{
{ /* Inline kernel$Int$+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var7 + 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var1,var8) on <var1:Int> */
var14 = var1 == var8;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (unlikely(!var12)) {
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Invalid arity for ";
var20 = (val*)(18l<<2|1);
var21 = (val*)(18l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = ". ";
var28 = (val*)(2l<<2|1);
var29 = (val*)(2l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var15)->values[2]=var25;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = " arguments given.";
var36 = (val*)(17l<<2|1);
var37 = (val*)(17l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var15)->values[4]=var33;
} else {
var15 = varonce;
varonce = NULL;
}
{
var40 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var15)->values[1]=var40;
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var43 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var44 = core__flat___Int___core__abstract_text__Object__to_s(var41);
((struct instance_core__NativeArray*)var15)->values[3]=var44;
{
var45 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc___nitc__AbstractCompilerVisitor___debug(self, var45); /* Direct call abstract_compiler$AbstractCompilerVisitor$debug on <self:SeparateCompilerVisitor>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1529);
fatal_exit(1);
}
{
{ /* Inline model$MMethodDef$msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var48 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1532);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$return_mtype (var46) on <var46:nullable MSignature> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var51 = var46->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var46:nullable MSignature> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_ret = var49;
if (var_ret == NULL) {
var52 = 1; /* is null */
} else {
var52 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var57 = var_ret == var_other;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
var_res = ((val*)NULL);
} else {
{
{ /* Inline model$MPropDef$mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var60 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var58) on <var58:MClassDef> */
var63 = var58->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var58:MClassDef> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var66 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var64) on <var64:MClassDef> */
var69 = var64->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var64:MClassDef> */
if (unlikely(var69 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var72 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var70) on <var70:MClassDef> */
var75 = var70->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var70:MClassDef> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_ret, var61, var67, var73, 1); /* resolve_for on <var_ret:nullable MType(MType)>*/
}
var_ret = var76;
{
var77 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var77;
}
{
{ /* Inline model$MMethodDef$is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var82 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_ = var80;
if (var80){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var85 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var83) on <var83:AbstractCompiler(SeparateCompiler)> */
var88 = var83->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var83:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var86) on <var86:ModelBuilder> */
var91 = var86->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var86:ModelBuilder> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_inline_intern (var89) on <var89:ToolContext> */
var94 = var89->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_inline_intern].val; /* _opt_no_inline_intern on <var89:ToolContext> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_inline_intern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 26);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline opts$Option$value (var92) on <var92:OptionBool> */
var97 = var92->attrs[COLOR_opts__Option___value].val; /* _value on <var92:OptionBool> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
var98 = (short int)((long)(var95)>>2);
var99 = !var98;
var79 = var99;
} else {
var79 = var_;
}
var_100 = var79;
if (var79){
var78 = var_100;
} else {
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var104 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var104 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var102) on <var102:AbstractCompiler(SeparateCompiler)> */
var107 = var102->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var102:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var107 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var105) on <var105:ModelBuilder> */
var110 = var105->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var105:ModelBuilder> */
if (unlikely(var110 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_inline_some_methods (var108) on <var108:ToolContext> */
var113 = var108->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_inline_some_methods].val; /* _opt_inline_some_methods on <var108:ToolContext> */
if (unlikely(var113 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_some_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 48);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline opts$Option$value (var111) on <var111:OptionBool> */
var116 = var111->attrs[COLOR_opts__Option___value].val; /* _value on <var111:OptionBool> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var117 = (short int)((long)(var114)>>2);
var_118 = var117;
if (var117){
{
var119 = nitc__abstract_compiler___MMethodDef___can_inline(var_mmethoddef, self);
}
var101 = var119;
} else {
var101 = var_118;
}
var78 = var101;
}
if (var78){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var122 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var120) on <var120:AbstractCompiler(SeparateCompiler)> */
var125 = var120->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var120:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var125 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
var_126 = var123;
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_inline (var_126) on <var_126:ModelBuilder> */
var129 = var_126->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var_126:ModelBuilder> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var127,1l) on <var127:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var132 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var132)) {
var_class_name135 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name135);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var136 = var127 + 1l;
var130 = var136;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_inline= (var_126,var130) on <var_126:ModelBuilder> */
var_126->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l = var130; /* _nb_invok_by_inline on <var_126:ModelBuilder> */
RET_LABEL137:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var140 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var140 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var138) on <var138:AbstractCompiler(SeparateCompiler)> */
var143 = var138->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var138:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var143 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var141) on <var141:ModelBuilder> */
var146 = var141->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var141:ModelBuilder> */
if (unlikely(var146 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (var144) on <var144:ToolContext> */
var149 = var144->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var144:ToolContext> */
if (unlikely(var149 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline opts$Option$value (var147) on <var147:OptionBool> */
var152 = var147->attrs[COLOR_opts__Option___value].val; /* _value on <var147:OptionBool> */
var150 = var152;
RET_LABEL151:(void)0;
}
}
var153 = (short int)((long)(var150)>>2);
if (var153){
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "count_invoke_by_inline++;";
var158 = (val*)(25l<<2|1);
var159 = (val*)(25l<<2|1);
var160 = (val*)((long)(0)<<2|3);
var161 = (val*)((long)(0)<<2|3);
var157 = core__flat___CString___to_s_unsafe(var156, var158, var159, var160, var161);
var155 = var157;
varonce154 = var155;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var155); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var162 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
((void(*)(val* self, val* p0))(var162->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d]))(var162, self); /* visitor= on <var162:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var162->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d]))(var162, var_mmethoddef); /* mpropdef= on <var162:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var162->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d]))(var162, var_recvtype); /* receiver= on <var162:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var162->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d]))(var162, var_arguments); /* arguments= on <var162:StaticFrame>*/
}
{
((void(*)(val* self))(var162->class->vft[COLOR_core__kernel__Object__init]))(var162); /* init on <var162:StaticFrame>*/
}
var_frame = var162;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "RET_LABEL";
var167 = (val*)(9l<<2|1);
var168 = (val*)(9l<<2|1);
var169 = (val*)((long)(0)<<2|3);
var170 = (val*)((long)(0)<<2|3);
var166 = core__flat___CString___to_s_unsafe(var165, var167, var168, var169, var170);
var164 = var166;
varonce163 = var164;
}
{
var171 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var164);
}
{
{ /* Inline abstract_compiler$StaticFrame$returnlabel= (var_frame,var171) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = var171; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL172:(void)0;
}
}
{
{ /* Inline abstract_compiler$StaticFrame$returnvar= (var_frame,var_res) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = var_res; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL173:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var176 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_old_frame = var174;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL177:(void)0;
}
}
if (unlikely(varonce178==NULL)) {
var179 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "{ /* Inline ";
var184 = (val*)(12l<<2|1);
var185 = (val*)(12l<<2|1);
var186 = (val*)((long)(0)<<2|3);
var187 = (val*)((long)(0)<<2|3);
var183 = core__flat___CString___to_s_unsafe(var182, var184, var185, var186, var187);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var179)->values[0]=var181;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = " (";
var192 = (val*)(2l<<2|1);
var193 = (val*)(2l<<2|1);
var194 = (val*)((long)(0)<<2|3);
var195 = (val*)((long)(0)<<2|3);
var191 = core__flat___CString___to_s_unsafe(var190, var192, var193, var194, var195);
var189 = var191;
varonce188 = var189;
}
((struct instance_core__NativeArray*)var179)->values[2]=var189;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = ") on ";
var200 = (val*)(5l<<2|1);
var201 = (val*)(5l<<2|1);
var202 = (val*)((long)(0)<<2|3);
var203 = (val*)((long)(0)<<2|3);
var199 = core__flat___CString___to_s_unsafe(var198, var200, var201, var202, var203);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var179)->values[4]=var197;
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = " */";
var208 = (val*)(3l<<2|1);
var209 = (val*)(3l<<2|1);
var210 = (val*)((long)(0)<<2|3);
var211 = (val*)((long)(0)<<2|3);
var207 = core__flat___CString___to_s_unsafe(var206, var208, var209, var210, var211);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var179)->values[6]=var205;
} else {
var179 = varonce178;
varonce178 = NULL;
}
{
var212 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var179)->values[1]=var212;
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = ",";
var217 = (val*)(1l<<2|1);
var218 = (val*)(1l<<2|1);
var219 = (val*)((long)(0)<<2|3);
var220 = (val*)((long)(0)<<2|3);
var216 = core__flat___CString___to_s_unsafe(var215, var217, var218, var219, var220);
var214 = var216;
varonce213 = var214;
}
{
var221 = core__abstract_text___Collection___join(var_arguments, var214, ((val*)NULL));
}
((struct instance_core__NativeArray*)var179)->values[3]=var221;
{
var222 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var223 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var222);
}
((struct instance_core__NativeArray*)var179)->values[5]=var223;
{
var224 = ((val*(*)(val* self))(var179->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var179); /* native_to_s on <var179:NativeArray[String]>*/
}
varonce178 = var179;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var224); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
var225 = nitc__abstract_compiler___MMethodDef___compile_inside_to_c(var_mmethoddef, self, var_arguments);
}
if (unlikely(varonce226==NULL)) {
var227 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = ":(void)0;";
var232 = (val*)(9l<<2|1);
var233 = (val*)(9l<<2|1);
var234 = (val*)((long)(0)<<2|3);
var235 = (val*)((long)(0)<<2|3);
var231 = core__flat___CString___to_s_unsafe(var230, var232, var233, var234, var235);
var229 = var231;
varonce228 = var229;
}
((struct instance_core__NativeArray*)var227)->values[1]=var229;
} else {
var227 = varonce226;
varonce226 = NULL;
}
{
{ /* Inline abstract_compiler$StaticFrame$returnlabel (var_frame) on <var_frame:StaticFrame> */
var238 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var236 = var238;
RET_LABEL237:(void)0;
}
}
if (unlikely(var236 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1551);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var227)->values[0]=var236;
{
var239 = ((val*(*)(val* self))(var227->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var227); /* native_to_s on <var227:NativeArray[String]>*/
}
varonce226 = var227;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var239); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "}";
var244 = (val*)(1l<<2|1);
var245 = (val*)(1l<<2|1);
var246 = (val*)((long)(0)<<2|3);
var247 = (val*)((long)(0)<<2|3);
var243 = core__flat___CString___to_s_unsafe(var242, var244, var245, var246, var247);
var241 = var243;
varonce240 = var241;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var241); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL248:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var251 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var251 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var249) on <var249:AbstractCompiler(SeparateCompiler)> */
var254 = var249->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var249:AbstractCompiler(SeparateCompiler)> */
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
var_255 = var252;
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_direct (var_255) on <var_255:ModelBuilder> */
var258 = var_255->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var_255:ModelBuilder> */
var256 = var258;
RET_LABEL257:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var256,1l) on <var256:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var261 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var261)) {
var_class_name264 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name264);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var265 = var256 + 1l;
var259 = var265;
goto RET_LABEL260;
RET_LABEL260:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_direct= (var_255,var259) on <var_255:ModelBuilder> */
var_255->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l = var259; /* _nb_invok_by_direct on <var_255:ModelBuilder> */
RET_LABEL266:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var269 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var269 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var267) on <var267:AbstractCompiler(SeparateCompiler)> */
var272 = var267->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var267:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var272 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var270) on <var270:ModelBuilder> */
var275 = var270->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var270:ModelBuilder> */
if (unlikely(var275 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var273 = var275;
RET_LABEL274:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (var273) on <var273:ToolContext> */
var278 = var273->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var273:ToolContext> */
if (unlikely(var278 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var276 = var278;
RET_LABEL277:(void)0;
}
}
{
{ /* Inline opts$Option$value (var276) on <var276:OptionBool> */
var281 = var276->attrs[COLOR_opts__Option___value].val; /* _value on <var276:OptionBool> */
var279 = var281;
RET_LABEL280:(void)0;
}
}
var282 = (short int)((long)(var279)>>2);
if (var282){
if (likely(varonce283!=NULL)) {
var284 = varonce283;
} else {
var285 = "count_invoke_by_direct++;";
var287 = (val*)(25l<<2|1);
var288 = (val*)(25l<<2|1);
var289 = (val*)((long)(0)<<2|3);
var290 = (val*)((long)(0)<<2|3);
var286 = core__flat___CString___to_s_unsafe(var285, var287, var288, var289, var290);
var284 = var286;
varonce283 = var284;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var284); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(self, var_mmethoddef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$adapt_signature on <self:SeparateCompilerVisitor>*/
}
{
var291 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var_mmethoddef);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var291); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (var_res == NULL) {
var292 = 1; /* is null */
} else {
var292 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var297 = var_res == var_other;
var295 = var297;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
}
var293 = var295;
goto RET_LABEL294;
RET_LABEL294:(void)0;
}
var292 = var293;
}
if (var292){
if (unlikely(varonce298==NULL)) {
var299 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = "(";
var304 = (val*)(1l<<2|1);
var305 = (val*)(1l<<2|1);
var306 = (val*)((long)(0)<<2|3);
var307 = (val*)((long)(0)<<2|3);
var303 = core__flat___CString___to_s_unsafe(var302, var304, var305, var306, var307);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var299)->values[1]=var301;
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = "); /* Direct call ";
var312 = (val*)(18l<<2|1);
var313 = (val*)(18l<<2|1);
var314 = (val*)((long)(0)<<2|3);
var315 = (val*)((long)(0)<<2|3);
var311 = core__flat___CString___to_s_unsafe(var310, var312, var313, var314, var315);
var309 = var311;
varonce308 = var309;
}
((struct instance_core__NativeArray*)var299)->values[3]=var309;
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = " on ";
var320 = (val*)(4l<<2|1);
var321 = (val*)(4l<<2|1);
var322 = (val*)((long)(0)<<2|3);
var323 = (val*)((long)(0)<<2|3);
var319 = core__flat___CString___to_s_unsafe(var318, var320, var321, var322, var323);
var317 = var319;
varonce316 = var317;
}
((struct instance_core__NativeArray*)var299)->values[5]=var317;
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = "*/";
var328 = (val*)(2l<<2|1);
var329 = (val*)(2l<<2|1);
var330 = (val*)((long)(0)<<2|3);
var331 = (val*)((long)(0)<<2|3);
var327 = core__flat___CString___to_s_unsafe(var326, var328, var329, var330, var331);
var325 = var327;
varonce324 = var325;
}
((struct instance_core__NativeArray*)var299)->values[7]=var325;
} else {
var299 = varonce298;
varonce298 = NULL;
}
{
var332 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var_mmethoddef);
}
((struct instance_core__NativeArray*)var299)->values[0]=var332;
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = ", ";
var337 = (val*)(2l<<2|1);
var338 = (val*)(2l<<2|1);
var339 = (val*)((long)(0)<<2|3);
var340 = (val*)((long)(0)<<2|3);
var336 = core__flat___CString___to_s_unsafe(var335, var337, var338, var339, var340);
var334 = var336;
varonce333 = var334;
}
{
var341 = core__abstract_text___Collection___join(var_arguments, var334, ((val*)NULL));
}
((struct instance_core__NativeArray*)var299)->values[2]=var341;
{
var342 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var299)->values[4]=var342;
{
var343 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var344 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var343);
}
((struct instance_core__NativeArray*)var299)->values[6]=var344;
{
var345 = ((val*(*)(val* self))(var299->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var299); /* native_to_s on <var299:NativeArray[String]>*/
}
varonce298 = var299;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var345); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (unlikely(varonce346==NULL)) {
var347 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce348!=NULL)) {
var349 = varonce348;
} else {
var350 = " = ";
var352 = (val*)(3l<<2|1);
var353 = (val*)(3l<<2|1);
var354 = (val*)((long)(0)<<2|3);
var355 = (val*)((long)(0)<<2|3);
var351 = core__flat___CString___to_s_unsafe(var350, var352, var353, var354, var355);
var349 = var351;
varonce348 = var349;
}
((struct instance_core__NativeArray*)var347)->values[1]=var349;
if (likely(varonce356!=NULL)) {
var357 = varonce356;
} else {
var358 = "(";
var360 = (val*)(1l<<2|1);
var361 = (val*)(1l<<2|1);
var362 = (val*)((long)(0)<<2|3);
var363 = (val*)((long)(0)<<2|3);
var359 = core__flat___CString___to_s_unsafe(var358, var360, var361, var362, var363);
var357 = var359;
varonce356 = var357;
}
((struct instance_core__NativeArray*)var347)->values[3]=var357;
if (likely(varonce364!=NULL)) {
var365 = varonce364;
} else {
var366 = ");";
var368 = (val*)(2l<<2|1);
var369 = (val*)(2l<<2|1);
var370 = (val*)((long)(0)<<2|3);
var371 = (val*)((long)(0)<<2|3);
var367 = core__flat___CString___to_s_unsafe(var366, var368, var369, var370, var371);
var365 = var367;
varonce364 = var365;
}
((struct instance_core__NativeArray*)var347)->values[5]=var365;
} else {
var347 = varonce346;
varonce346 = NULL;
}
{
var372 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var347)->values[0]=var372;
{
var373 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var_mmethoddef);
}
((struct instance_core__NativeArray*)var347)->values[2]=var373;
if (likely(varonce374!=NULL)) {
var375 = varonce374;
} else {
var376 = ", ";
var378 = (val*)(2l<<2|1);
var379 = (val*)(2l<<2|1);
var380 = (val*)((long)(0)<<2|3);
var381 = (val*)((long)(0)<<2|3);
var377 = core__flat___CString___to_s_unsafe(var376, var378, var379, var380, var381);
var375 = var377;
varonce374 = var375;
}
{
var382 = core__abstract_text___Collection___join(var_arguments, var375, ((val*)NULL));
}
((struct instance_core__NativeArray*)var347)->values[4]=var382;
{
var383 = ((val*(*)(val* self))(var347->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var347); /* native_to_s on <var347:NativeArray[String]>*/
}
varonce346 = var347;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var383); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$supercall for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var_main /* var main: MModule */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : AbstractCompiler */;
val* var17 /* : AbstractCompiler */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var22 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var23 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var27 /* : MProperty */;
val* var29 /* : MProperty */;
val* var30 /* : nullable RuntimeVariable */;
var_m = p0;
var_recvtype = p1;
var_arguments = p2;
{
var1 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((short int(*)(val* self))(var2->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var2); /* is_c_primitive on <var2:MType>*/
}
if (var5){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
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
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var6) on <var6:AbstractCompiler(SeparateCompiler)> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var6:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_main = var9;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$realmainmodule (var15) on <var15:AbstractCompiler(SeparateCompiler)> */
var20 = var15->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var15:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 549);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule= (var12,var18) on <var12:AbstractCompiler(SeparateCompiler)> */
var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var18; /* _mainmodule on <var12:AbstractCompiler(SeparateCompiler)> */
RET_LABEL21:(void)0;
}
}
{
var22 = nitc___nitc__AbstractCompilerVisitor___monomorphic_super_send(self, var_m, var_recvtype, var_arguments);
}
var_res = var22;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule= (var23,var_main) on <var23:AbstractCompiler(SeparateCompiler)> */
var23->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var_main; /* _mainmodule on <var23:AbstractCompiler(SeparateCompiler)> */
RET_LABEL26:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDef$mproperty (var_m) on <var_m:MMethodDef> */
var29 = var_m->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__SeparateCompilerVisitor___table_send(self, var27, var_arguments, var_m);
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$vararg_instance for (self: SeparateCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_varargs /* var varargs: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
val* var4 /* : StaticFrame */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
val* var11 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: StaticFrame */;
val* var13 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
var_mpropdef = p0;
var_recv = p1;
var_varargs = p2;
var_elttype = p3;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_old_frame = var1;
var4 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var7 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var11, 1l); /* Direct call array$Array$with_capacity on <var11:Array[RuntimeVariable]>*/
}
var_ = var11;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d]))(var4, self); /* visitor= on <var4:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d]))(var4, var_mpropdef); /* mpropdef= on <var4:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d]))(var4, var8); /* receiver= on <var4:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d]))(var4, var_); /* arguments= on <var4:StaticFrame>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:StaticFrame>*/
}
var_frame = var4;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL12:(void)0;
}
}
{
var13 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(self, var_varargs, var_elttype);
}
var_res = var13;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL14:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$isset_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : MPropDef */;
val* var5 /* : MPropDef */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var9 /* : MPropDef */;
val* var11 /* : MPropDef */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
val* var18 /* : MClassType */;
val* var20 /* : MClassType */;
val* var21 /* : MModule */;
val* var23 /* : MModule */;
val* var24 /* : MType */;
short int var25 /* : Bool */;
int cltype;
int idtype;
val* var26 /* : NativeArray[String] */;
static val* varonce;
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
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : AbstractCompiler */;
val* var58 /* : AbstractCompiler */;
val* var59 /* : ModelBuilder */;
val* var61 /* : ModelBuilder */;
val* var62 /* : ToolContext */;
val* var64 /* : ToolContext */;
val* var65 /* : OptionBool */;
val* var67 /* : OptionBool */;
val* var68 /* : nullable Object */;
val* var70 /* : nullable Object */;
short int var71 /* : Bool */;
val* var73 /* : NativeArray[String] */;
static val* varonce72;
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
val* var116 /* : String */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var119 /* : String */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var_ /* var : Bool */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
val* var128 /* : NativeArray[String] */;
static val* varonce127;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Bool */;
val* var136 /* : nullable Bool */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Bool */;
val* var144 /* : nullable Bool */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
val* var157 /* : nullable Int */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Bool */;
val* var160 /* : nullable Bool */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : CString */;
val* var164 /* : String */;
val* var165 /* : nullable Int */;
val* var166 /* : nullable Int */;
val* var167 /* : nullable Bool */;
val* var168 /* : nullable Bool */;
val* var169 /* : String */;
val* var170 /* : String */;
val* var171 /* : String */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var174 /* : String */;
val* var176 /* : NativeArray[String] */;
static val* varonce175;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Bool */;
val* var184 /* : nullable Bool */;
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
val* var204 /* : String */;
var_a = p0;
var_recv = p1;
{
nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(self, var_recv); /* Direct call abstract_compiler$AbstractCompilerVisitor$check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline model$MProperty$intro (var_a) on <var_a:MAttribute> */
var5 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MAttributeDef$static_mtype (var3) on <var3:MPropDef(MAttributeDef)> */
var8 = var3->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var3:MPropDef(MAttributeDef)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1612);
fatal_exit(1);
}
var_mtype = var6;
{
{ /* Inline model$MProperty$intro (var_a) on <var_a:MAttribute> */
var11 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var9) on <var9:MPropDef(MAttributeDef)> */
var14 = var9->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var9:MPropDef(MAttributeDef)> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_intromclassdef = var12;
{
{ /* Inline model$MClassDef$bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var17 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var20 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var23 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_mtype, var15, var18, var21, 1); /* resolve_for on <var_mtype:MType>*/
}
var_mtype = var24;
/* <var_mtype:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var25 = 0;
} else {
var25 = var_mtype->type->type_table[cltype] == idtype;
}
if (var25){
if (unlikely(varonce==NULL)) {
var26 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " = 1; /* easy isset: ";
var31 = (val*)(21l<<2|1);
var32 = (val*)(21l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[1]=var28;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = " on ";
var39 = (val*)(4l<<2|1);
var40 = (val*)(4l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var26)->values[3]=var36;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = " */";
var47 = (val*)(3l<<2|1);
var48 = (val*)(3l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var26)->values[5]=var44;
} else {
var26 = varonce;
varonce = NULL;
}
{
var51 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var26)->values[0]=var51;
{
var52 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var26)->values[2]=var52;
{
var53 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var26)->values[4]=var53;
{
var54 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce = var26;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var54); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var55 = nitc__separate_compiler___MEntity___const_color(var_a);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var55); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var58 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var56) on <var56:AbstractCompiler(SeparateCompiler)> */
var61 = var56->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var56:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var59) on <var59:ModelBuilder> */
var64 = var59->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var59:ModelBuilder> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_union_attribute (var62) on <var62:ToolContext> */
var67 = var62->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var62:ToolContext> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 28);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline opts$Option$value (var65) on <var65:OptionBool> */
var70 = var65->attrs[COLOR_opts__Option___value].val; /* _value on <var65:OptionBool> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var71 = (short int)((long)(var68)>>2);
if (var71){
if (unlikely(varonce72==NULL)) {
var73 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = " = ";
var78 = (val*)(3l<<2|1);
var79 = (val*)(3l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var73)->values[1]=var75;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "->attrs[";
var86 = (val*)(8l<<2|1);
var87 = (val*)(8l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var73)->values[3]=var83;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "] != NULL; /* ";
var94 = (val*)(14l<<2|1);
var95 = (val*)(14l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var73)->values[5]=var91;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = " on ";
var102 = (val*)(4l<<2|1);
var103 = (val*)(4l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var73)->values[7]=var99;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "*/";
var110 = (val*)(2l<<2|1);
var111 = (val*)(2l<<2|1);
var112 = (val*)((long)(0)<<2|3);
var113 = (val*)((long)(0)<<2|3);
var109 = core__flat___CString___to_s_unsafe(var108, var110, var111, var112, var113);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var73)->values[9]=var107;
} else {
var73 = varonce72;
varonce72 = NULL;
}
{
var114 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var73)->values[0]=var114;
{
var115 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var73)->values[2]=var115;
{
var116 = nitc__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_core__NativeArray*)var73)->values[4]=var116;
{
var117 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var73)->values[6]=var117;
{
var118 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var73)->values[8]=var118;
{
var119 = ((val*(*)(val* self))(var73->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce72 = var73;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var119); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
var121 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
var122 = !var121;
var_ = var122;
if (var122){
{
{ /* Inline separate_compiler$MType$is_tagged (var_mtype) on <var_mtype:MType> */
var125 = var_mtype->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MType> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
var126 = !var123;
var120 = var126;
} else {
var120 = var_;
}
if (var120){
if (unlikely(varonce127==NULL)) {
var128 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = " = ";
var133 = (val*)(3l<<2|1);
var134 = (val*)(3l<<2|1);
var135 = (val*)((long)(0)<<2|3);
var136 = (val*)((long)(0)<<2|3);
var132 = core__flat___CString___to_s_unsafe(var131, var133, var134, var135, var136);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var128)->values[1]=var130;
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "->attrs[";
var141 = (val*)(8l<<2|1);
var142 = (val*)(8l<<2|1);
var143 = (val*)((long)(0)<<2|3);
var144 = (val*)((long)(0)<<2|3);
var140 = core__flat___CString___to_s_unsafe(var139, var141, var142, var143, var144);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var128)->values[3]=var138;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "].val != NULL; /* ";
var149 = (val*)(18l<<2|1);
var150 = (val*)(18l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var128)->values[5]=var146;
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = " on ";
var157 = (val*)(4l<<2|1);
var158 = (val*)(4l<<2|1);
var159 = (val*)((long)(0)<<2|3);
var160 = (val*)((long)(0)<<2|3);
var156 = core__flat___CString___to_s_unsafe(var155, var157, var158, var159, var160);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var128)->values[7]=var154;
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = " */";
var165 = (val*)(3l<<2|1);
var166 = (val*)(3l<<2|1);
var167 = (val*)((long)(0)<<2|3);
var168 = (val*)((long)(0)<<2|3);
var164 = core__flat___CString___to_s_unsafe(var163, var165, var166, var167, var168);
var162 = var164;
varonce161 = var162;
}
((struct instance_core__NativeArray*)var128)->values[9]=var162;
} else {
var128 = varonce127;
varonce127 = NULL;
}
{
var169 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var128)->values[0]=var169;
{
var170 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var128)->values[2]=var170;
{
var171 = nitc__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_core__NativeArray*)var128)->values[4]=var171;
{
var172 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var128)->values[6]=var172;
{
var173 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var128)->values[8]=var173;
{
var174 = ((val*(*)(val* self))(var128->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var128); /* native_to_s on <var128:NativeArray[String]>*/
}
varonce127 = var128;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var174); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce175==NULL)) {
var176 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = " = 1; /* NOT YET IMPLEMENTED: isset of primitives: ";
var181 = (val*)(51l<<2|1);
var182 = (val*)(51l<<2|1);
var183 = (val*)((long)(0)<<2|3);
var184 = (val*)((long)(0)<<2|3);
var180 = core__flat___CString___to_s_unsafe(var179, var181, var182, var183, var184);
var178 = var180;
varonce177 = var178;
}
((struct instance_core__NativeArray*)var176)->values[1]=var178;
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = " on ";
var189 = (val*)(4l<<2|1);
var190 = (val*)(4l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var176)->values[3]=var186;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = " */";
var197 = (val*)(3l<<2|1);
var198 = (val*)(3l<<2|1);
var199 = (val*)((long)(0)<<2|3);
var200 = (val*)((long)(0)<<2|3);
var196 = core__flat___CString___to_s_unsafe(var195, var197, var198, var199, var200);
var194 = var196;
varonce193 = var194;
}
((struct instance_core__NativeArray*)var176)->values[5]=var194;
} else {
var176 = varonce175;
varonce175 = NULL;
}
{
var201 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var176)->values[0]=var201;
{
var202 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var176)->values[2]=var202;
{
var203 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var176)->values[4]=var203;
{
var204 = ((val*(*)(val* self))(var176->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var176); /* native_to_s on <var176:NativeArray[String]>*/
}
varonce175 = var176;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var204); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$read_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var_ret /* var ret: MType */;
val* var7 /* : MPropDef */;
val* var9 /* : MPropDef */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var22 /* : MType */;
val* var23 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var26 /* : ModelBuilder */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
val* var32 /* : OptionBool */;
val* var34 /* : OptionBool */;
val* var35 /* : nullable Object */;
val* var37 /* : nullable Object */;
short int var38 /* : Bool */;
val* var39 /* : AbstractCompiler */;
val* var41 /* : AbstractCompiler */;
val* var_ /* var : SeparateCompiler */;
long var42 /* : Int */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var48 /* : Int */;
static val* varonce;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
val* var57 /* : String */;
val* var58 /* : AbstractCompiler */;
val* var60 /* : AbstractCompiler */;
val* var61 /* : ModelBuilder */;
val* var63 /* : ModelBuilder */;
val* var64 /* : ToolContext */;
val* var66 /* : ToolContext */;
val* var67 /* : OptionBool */;
val* var69 /* : OptionBool */;
val* var70 /* : nullable Object */;
val* var72 /* : nullable Object */;
short int var73 /* : Bool */;
val* var74 /* : MClassType */;
val* var75 /* : MType */;
val* var_cret /* var cret: MType */;
val* var76 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var79 /* : NativeArray[String] */;
static val* varonce78;
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
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Bool */;
val* var103 /* : nullable Bool */;
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
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : String */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
short int var130 /* : Bool */;
short int var_131 /* var : Bool */;
val* var132 /* : AbstractCompiler */;
val* var134 /* : AbstractCompiler */;
val* var135 /* : ModelBuilder */;
val* var137 /* : ModelBuilder */;
val* var138 /* : ToolContext */;
val* var140 /* : ToolContext */;
val* var141 /* : OptionBool */;
val* var143 /* : OptionBool */;
val* var144 /* : nullable Object */;
val* var146 /* : nullable Object */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
val* var150 /* : NativeArray[String] */;
static val* varonce149;
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
val* var167 /* : String */;
val* var168 /* : String */;
val* var170 /* : NativeArray[String] */;
static val* varonce169;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : CString */;
val* var174 /* : String */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Int */;
val* var177 /* : nullable Bool */;
val* var178 /* : nullable Bool */;
val* var179 /* : String */;
val* var181 /* : String */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : CString */;
val* var186 /* : String */;
val* var187 /* : nullable Int */;
val* var188 /* : nullable Int */;
val* var189 /* : nullable Bool */;
val* var190 /* : nullable Bool */;
val* var191 /* : AbstractCompiler */;
val* var193 /* : AbstractCompiler */;
val* var194 /* : ModelBuilder */;
val* var196 /* : ModelBuilder */;
val* var197 /* : ToolContext */;
val* var199 /* : ToolContext */;
val* var200 /* : OptionBool */;
val* var202 /* : OptionBool */;
val* var203 /* : nullable Object */;
val* var205 /* : nullable Object */;
short int var206 /* : Bool */;
val* var207 /* : AbstractCompiler */;
val* var209 /* : AbstractCompiler */;
val* var_210 /* var : SeparateCompiler */;
long var211 /* : Int */;
long var213 /* : Int */;
long var214 /* : Int */;
short int var216 /* : Bool */;
int cltype217;
int idtype218;
const char* var_class_name219;
long var220 /* : Int */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : CString */;
val* var225 /* : String */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Int */;
val* var228 /* : nullable Bool */;
val* var229 /* : nullable Bool */;
val* var230 /* : RuntimeVariable */;
val* var231 /* : RuntimeVariable */;
val* var_res232 /* var res: RuntimeVariable */;
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
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : CString */;
val* var278 /* : String */;
val* var279 /* : nullable Int */;
val* var280 /* : nullable Int */;
val* var281 /* : nullable Bool */;
val* var282 /* : nullable Bool */;
val* var283 /* : String */;
val* var284 /* : String */;
val* var285 /* : String */;
val* var286 /* : String */;
val* var287 /* : String */;
val* var288 /* : String */;
val* var289 /* : String */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var293 /* : Bool */;
short int var_294 /* var : Bool */;
short int var295 /* : Bool */;
int cltype296;
int idtype297;
short int var298 /* : Bool */;
short int var_299 /* var : Bool */;
val* var300 /* : AbstractCompiler */;
val* var302 /* : AbstractCompiler */;
val* var303 /* : ModelBuilder */;
val* var305 /* : ModelBuilder */;
val* var306 /* : ToolContext */;
val* var308 /* : ToolContext */;
val* var309 /* : OptionBool */;
val* var311 /* : OptionBool */;
val* var312 /* : nullable Object */;
val* var314 /* : nullable Object */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
val* var318 /* : NativeArray[String] */;
static val* varonce317;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : CString */;
val* var322 /* : String */;
val* var323 /* : nullable Int */;
val* var324 /* : nullable Int */;
val* var325 /* : nullable Bool */;
val* var326 /* : nullable Bool */;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : CString */;
val* var330 /* : String */;
val* var331 /* : nullable Int */;
val* var332 /* : nullable Int */;
val* var333 /* : nullable Bool */;
val* var334 /* : nullable Bool */;
val* var335 /* : String */;
val* var336 /* : String */;
val* var338 /* : NativeArray[String] */;
static val* varonce337;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : CString */;
val* var342 /* : String */;
val* var343 /* : nullable Int */;
val* var344 /* : nullable Int */;
val* var345 /* : nullable Bool */;
val* var346 /* : nullable Bool */;
val* var347 /* : String */;
val* var349 /* : String */;
val* var350 /* : String */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : CString */;
val* var354 /* : String */;
val* var355 /* : nullable Int */;
val* var356 /* : nullable Int */;
val* var357 /* : nullable Bool */;
val* var358 /* : nullable Bool */;
val* var359 /* : AbstractCompiler */;
val* var361 /* : AbstractCompiler */;
val* var362 /* : ModelBuilder */;
val* var364 /* : ModelBuilder */;
val* var365 /* : ToolContext */;
val* var367 /* : ToolContext */;
val* var368 /* : OptionBool */;
val* var370 /* : OptionBool */;
val* var371 /* : nullable Object */;
val* var373 /* : nullable Object */;
short int var374 /* : Bool */;
val* var375 /* : AbstractCompiler */;
val* var377 /* : AbstractCompiler */;
val* var_378 /* var : SeparateCompiler */;
long var379 /* : Int */;
long var381 /* : Int */;
long var382 /* : Int */;
short int var384 /* : Bool */;
int cltype385;
int idtype386;
const char* var_class_name387;
long var388 /* : Int */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : CString */;
val* var393 /* : String */;
val* var394 /* : nullable Int */;
val* var395 /* : nullable Int */;
val* var396 /* : nullable Bool */;
val* var397 /* : nullable Bool */;
var_a = p0;
var_recv = p1;
{
nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(self, var_recv); /* Direct call abstract_compiler$AbstractCompilerVisitor$check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model$MProperty$intro (var_a) on <var_a:MAttribute> */
var3 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MAttributeDef$static_mtype (var1) on <var1:MPropDef(MAttributeDef)> */
var6 = var1->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var1:MPropDef(MAttributeDef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1640);
fatal_exit(1);
}
var_ret = var4;
{
{ /* Inline model$MProperty$intro (var_a) on <var_a:MAttribute> */
var9 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var7) on <var7:MPropDef(MAttributeDef)> */
var12 = var7->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var7:MPropDef(MAttributeDef)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_intromclassdef = var10;
{
{ /* Inline model$MClassDef$bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var15 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var18 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var21 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_ret, var13, var16, var19, 1); /* resolve_for on <var_ret:MType>*/
}
var_ret = var22;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var23) on <var23:AbstractCompiler(SeparateCompiler)> */
var28 = var23->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var23:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_isset_checks_metrics (var29) on <var29:ToolContext> */
var34 = var29->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var29:ToolContext> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline opts$Option$value (var32) on <var32:OptionBool> */
var37 = var32->attrs[COLOR_opts__Option___value].val; /* _value on <var32:OptionBool> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var38 = (short int)((long)(var35)>>2);
if (var38){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var41 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
var_ = var39;
{
{ /* Inline separate_compiler$SeparateCompiler$attr_read_count (var_) on <var_:SeparateCompiler> */
var44 = var_->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <var_:SeparateCompiler> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var42,1l) on <var42:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var47 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var48 = var42 + 1l;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$attr_read_count= (var_,var45) on <var_:SeparateCompiler> */
var_->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l = var45; /* _attr_read_count on <var_:SeparateCompiler> */
RET_LABEL49:(void)0;
}
}
if (likely(varonce!=NULL)) {
var50 = varonce;
} else {
var51 = "count_attr_reads++;";
var53 = (val*)(19l<<2|1);
var54 = (val*)(19l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce = var50;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var50); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
var57 = nitc__separate_compiler___MEntity___const_color(var_a);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var57); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var60 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var58) on <var58:AbstractCompiler(SeparateCompiler)> */
var63 = var58->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var58:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var61) on <var61:ModelBuilder> */
var66 = var61->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var61:ModelBuilder> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_union_attribute (var64) on <var64:ToolContext> */
var69 = var64->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var64:ToolContext> */
if (unlikely(var69 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 28);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline opts$Option$value (var67) on <var67:OptionBool> */
var72 = var67->attrs[COLOR_opts__Option___value].val; /* _value on <var67:OptionBool> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
var73 = (short int)((long)(var70)>>2);
if (var73){
{
var74 = nitc___nitc__AbstractCompilerVisitor___object_type(self);
}
{
var75 = nitc___nitc__MType___as_nullable(var74);
}
var_cret = var75;
{
var76 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_cret);
}
var_res = var76;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype= (var_res,var_ret) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val = var_ret; /* _mcasttype on <var_res:RuntimeVariable> */
RET_LABEL77:(void)0;
}
}
if (unlikely(varonce78==NULL)) {
var79 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = " = ";
var84 = (val*)(3l<<2|1);
var85 = (val*)(3l<<2|1);
var86 = (val*)((long)(0)<<2|3);
var87 = (val*)((long)(0)<<2|3);
var83 = core__flat___CString___to_s_unsafe(var82, var84, var85, var86, var87);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var79)->values[1]=var81;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "->attrs[";
var92 = (val*)(8l<<2|1);
var93 = (val*)(8l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var79)->values[3]=var89;
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "]; /* ";
var100 = (val*)(6l<<2|1);
var101 = (val*)(6l<<2|1);
var102 = (val*)((long)(0)<<2|3);
var103 = (val*)((long)(0)<<2|3);
var99 = core__flat___CString___to_s_unsafe(var98, var100, var101, var102, var103);
var97 = var99;
varonce96 = var97;
}
((struct instance_core__NativeArray*)var79)->values[5]=var97;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = " on ";
var108 = (val*)(4l<<2|1);
var109 = (val*)(4l<<2|1);
var110 = (val*)((long)(0)<<2|3);
var111 = (val*)((long)(0)<<2|3);
var107 = core__flat___CString___to_s_unsafe(var106, var108, var109, var110, var111);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var79)->values[7]=var105;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = " */";
var116 = (val*)(3l<<2|1);
var117 = (val*)(3l<<2|1);
var118 = (val*)((long)(0)<<2|3);
var119 = (val*)((long)(0)<<2|3);
var115 = core__flat___CString___to_s_unsafe(var114, var116, var117, var118, var119);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var79)->values[9]=var113;
} else {
var79 = varonce78;
varonce78 = NULL;
}
{
var120 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var79)->values[0]=var120;
{
var121 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var79)->values[2]=var121;
{
var122 = nitc__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_core__NativeArray*)var79)->values[4]=var122;
{
var123 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var79)->values[6]=var123;
{
var124 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var79)->values[8]=var124;
{
var125 = ((val*(*)(val* self))(var79->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var79); /* native_to_s on <var79:NativeArray[String]>*/
}
varonce78 = var79;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var125); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
/* <var_ret:MType> isa MNullableType */
cltype128 = type_nitc__MNullableType.color;
idtype129 = type_nitc__MNullableType.id;
if(cltype128 >= var_ret->type->table_size) {
var127 = 0;
} else {
var127 = var_ret->type->type_table[cltype128] == idtype129;
}
var130 = !var127;
var_131 = var130;
if (var130){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var134 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var134 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var132) on <var132:AbstractCompiler(SeparateCompiler)> */
var137 = var132->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var132:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var137 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var135) on <var135:ModelBuilder> */
var140 = var135->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var135:ModelBuilder> */
if (unlikely(var140 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_attr_isset (var138) on <var138:ToolContext> */
var143 = var138->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var138:ToolContext> */
if (unlikely(var143 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 50);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline opts$Option$value (var141) on <var141:OptionBool> */
var146 = var141->attrs[COLOR_opts__Option___value].val; /* _value on <var141:OptionBool> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
var147 = (short int)((long)(var144)>>2);
var148 = !var147;
var126 = var148;
} else {
var126 = var_131;
}
if (var126){
if (unlikely(varonce149==NULL)) {
var150 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "if (unlikely(";
var155 = (val*)(13l<<2|1);
var156 = (val*)(13l<<2|1);
var157 = (val*)((long)(0)<<2|3);
var158 = (val*)((long)(0)<<2|3);
var154 = core__flat___CString___to_s_unsafe(var153, var155, var156, var157, var158);
var152 = var154;
varonce151 = var152;
}
((struct instance_core__NativeArray*)var150)->values[0]=var152;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = " == NULL)) {";
var163 = (val*)(12l<<2|1);
var164 = (val*)(12l<<2|1);
var165 = (val*)((long)(0)<<2|3);
var166 = (val*)((long)(0)<<2|3);
var162 = core__flat___CString___to_s_unsafe(var161, var163, var164, var165, var166);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var150)->values[2]=var160;
} else {
var150 = varonce149;
varonce149 = NULL;
}
{
var167 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var150)->values[1]=var167;
{
var168 = ((val*(*)(val* self))(var150->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var150); /* native_to_s on <var150:NativeArray[String]>*/
}
varonce149 = var150;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var168); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce169==NULL)) {
var170 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "Uninitialized attribute ";
var175 = (val*)(24l<<2|1);
var176 = (val*)(24l<<2|1);
var177 = (val*)((long)(0)<<2|3);
var178 = (val*)((long)(0)<<2|3);
var174 = core__flat___CString___to_s_unsafe(var173, var175, var176, var177, var178);
var172 = var174;
varonce171 = var172;
}
((struct instance_core__NativeArray*)var170)->values[0]=var172;
} else {
var170 = varonce169;
varonce169 = NULL;
}
{
{ /* Inline model$MProperty$name (var_a) on <var_a:MAttribute> */
var181 = var_a->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var181 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
((struct instance_core__NativeArray*)var170)->values[1]=var179;
{
var182 = ((val*(*)(val* self))(var170->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var170); /* native_to_s on <var170:NativeArray[String]>*/
}
varonce169 = var170;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var182); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "}";
var187 = (val*)(1l<<2|1);
var188 = (val*)(1l<<2|1);
var189 = (val*)((long)(0)<<2|3);
var190 = (val*)((long)(0)<<2|3);
var186 = core__flat___CString___to_s_unsafe(var185, var187, var188, var189, var190);
var184 = var186;
varonce183 = var184;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var184); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var193 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var193 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var191) on <var191:AbstractCompiler(SeparateCompiler)> */
var196 = var191->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var191:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var196 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var194) on <var194:ModelBuilder> */
var199 = var194->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var194:ModelBuilder> */
if (unlikely(var199 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_isset_checks_metrics (var197) on <var197:ToolContext> */
var202 = var197->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var197:ToolContext> */
if (unlikely(var202 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var200 = var202;
RET_LABEL201:(void)0;
}
}
{
{ /* Inline opts$Option$value (var200) on <var200:OptionBool> */
var205 = var200->attrs[COLOR_opts__Option___value].val; /* _value on <var200:OptionBool> */
var203 = var205;
RET_LABEL204:(void)0;
}
}
var206 = (short int)((long)(var203)>>2);
if (var206){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var209 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var209 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
var_210 = var207;
{
{ /* Inline separate_compiler$SeparateCompiler$isset_checks_count (var_210) on <var_210:SeparateCompiler> */
var213 = var_210->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <var_210:SeparateCompiler> */
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var211,1l) on <var211:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var216 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var216)) {
var_class_name219 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name219);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var220 = var211 + 1l;
var214 = var220;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$isset_checks_count= (var_210,var214) on <var_210:SeparateCompiler> */
var_210->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l = var214; /* _isset_checks_count on <var_210:SeparateCompiler> */
RET_LABEL221:(void)0;
}
}
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = "count_isset_checks++;";
var226 = (val*)(21l<<2|1);
var227 = (val*)(21l<<2|1);
var228 = (val*)((long)(0)<<2|3);
var229 = (val*)((long)(0)<<2|3);
var225 = core__flat___CString___to_s_unsafe(var224, var226, var227, var228, var229);
var223 = var225;
varonce222 = var223;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var223); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
{
var230 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_res, var_ret);
}
var = var230;
goto RET_LABEL;
} else {
{
var231 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res232 = var231;
if (unlikely(varonce233==NULL)) {
var234 = NEW_core__NativeArray((int)12l, &type_core__NativeArray__core__String);
if (likely(varonce235!=NULL)) {
var236 = varonce235;
} else {
var237 = " = ";
var239 = (val*)(3l<<2|1);
var240 = (val*)(3l<<2|1);
var241 = (val*)((long)(0)<<2|3);
var242 = (val*)((long)(0)<<2|3);
var238 = core__flat___CString___to_s_unsafe(var237, var239, var240, var241, var242);
var236 = var238;
varonce235 = var236;
}
((struct instance_core__NativeArray*)var234)->values[1]=var236;
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = "->attrs[";
var247 = (val*)(8l<<2|1);
var248 = (val*)(8l<<2|1);
var249 = (val*)((long)(0)<<2|3);
var250 = (val*)((long)(0)<<2|3);
var246 = core__flat___CString___to_s_unsafe(var245, var247, var248, var249, var250);
var244 = var246;
varonce243 = var244;
}
((struct instance_core__NativeArray*)var234)->values[3]=var244;
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "].";
var255 = (val*)(2l<<2|1);
var256 = (val*)(2l<<2|1);
var257 = (val*)((long)(0)<<2|3);
var258 = (val*)((long)(0)<<2|3);
var254 = core__flat___CString___to_s_unsafe(var253, var255, var256, var257, var258);
var252 = var254;
varonce251 = var252;
}
((struct instance_core__NativeArray*)var234)->values[5]=var252;
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "; /* ";
var263 = (val*)(5l<<2|1);
var264 = (val*)(5l<<2|1);
var265 = (val*)((long)(0)<<2|3);
var266 = (val*)((long)(0)<<2|3);
var262 = core__flat___CString___to_s_unsafe(var261, var263, var264, var265, var266);
var260 = var262;
varonce259 = var260;
}
((struct instance_core__NativeArray*)var234)->values[7]=var260;
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = " on ";
var271 = (val*)(4l<<2|1);
var272 = (val*)(4l<<2|1);
var273 = (val*)((long)(0)<<2|3);
var274 = (val*)((long)(0)<<2|3);
var270 = core__flat___CString___to_s_unsafe(var269, var271, var272, var273, var274);
var268 = var270;
varonce267 = var268;
}
((struct instance_core__NativeArray*)var234)->values[9]=var268;
if (likely(varonce275!=NULL)) {
var276 = varonce275;
} else {
var277 = " */";
var279 = (val*)(3l<<2|1);
var280 = (val*)(3l<<2|1);
var281 = (val*)((long)(0)<<2|3);
var282 = (val*)((long)(0)<<2|3);
var278 = core__flat___CString___to_s_unsafe(var277, var279, var280, var281, var282);
var276 = var278;
varonce275 = var276;
}
((struct instance_core__NativeArray*)var234)->values[11]=var276;
} else {
var234 = varonce233;
varonce233 = NULL;
}
{
var283 = ((val*(*)(val* self))(var_res232->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res232); /* to_s on <var_res232:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var234)->values[0]=var283;
{
var284 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var234)->values[2]=var284;
{
var285 = nitc__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_core__NativeArray*)var234)->values[4]=var285;
{
var286 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_nitc__abstract_compiler__MType__ctypename]))(var_ret); /* ctypename on <var_ret:MType>*/
}
((struct instance_core__NativeArray*)var234)->values[6]=var286;
{
var287 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var234)->values[8]=var287;
{
var288 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var234)->values[10]=var288;
{
var289 = ((val*(*)(val* self))(var234->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var234); /* native_to_s on <var234:NativeArray[String]>*/
}
varonce233 = var234;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var289); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
var292 = ((short int(*)(val* self))(var_ret->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_ret); /* is_c_primitive on <var_ret:MType>*/
}
var293 = !var292;
var_294 = var293;
if (var293){
/* <var_ret:MType> isa MNullableType */
cltype296 = type_nitc__MNullableType.color;
idtype297 = type_nitc__MNullableType.id;
if(cltype296 >= var_ret->type->table_size) {
var295 = 0;
} else {
var295 = var_ret->type->type_table[cltype296] == idtype297;
}
var298 = !var295;
var291 = var298;
} else {
var291 = var_294;
}
var_299 = var291;
if (var291){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var302 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var302 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var300) on <var300:AbstractCompiler(SeparateCompiler)> */
var305 = var300->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var300:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var305 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var303) on <var303:ModelBuilder> */
var308 = var303->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var303:ModelBuilder> */
if (unlikely(var308 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_attr_isset (var306) on <var306:ToolContext> */
var311 = var306->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var306:ToolContext> */
if (unlikely(var311 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 50);
fatal_exit(1);
}
var309 = var311;
RET_LABEL310:(void)0;
}
}
{
{ /* Inline opts$Option$value (var309) on <var309:OptionBool> */
var314 = var309->attrs[COLOR_opts__Option___value].val; /* _value on <var309:OptionBool> */
var312 = var314;
RET_LABEL313:(void)0;
}
}
var315 = (short int)((long)(var312)>>2);
var316 = !var315;
var290 = var316;
} else {
var290 = var_299;
}
if (var290){
if (unlikely(varonce317==NULL)) {
var318 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = "if (unlikely(";
var323 = (val*)(13l<<2|1);
var324 = (val*)(13l<<2|1);
var325 = (val*)((long)(0)<<2|3);
var326 = (val*)((long)(0)<<2|3);
var322 = core__flat___CString___to_s_unsafe(var321, var323, var324, var325, var326);
var320 = var322;
varonce319 = var320;
}
((struct instance_core__NativeArray*)var318)->values[0]=var320;
if (likely(varonce327!=NULL)) {
var328 = varonce327;
} else {
var329 = " == NULL)) {";
var331 = (val*)(12l<<2|1);
var332 = (val*)(12l<<2|1);
var333 = (val*)((long)(0)<<2|3);
var334 = (val*)((long)(0)<<2|3);
var330 = core__flat___CString___to_s_unsafe(var329, var331, var332, var333, var334);
var328 = var330;
varonce327 = var328;
}
((struct instance_core__NativeArray*)var318)->values[2]=var328;
} else {
var318 = varonce317;
varonce317 = NULL;
}
{
var335 = ((val*(*)(val* self))(var_res232->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res232); /* to_s on <var_res232:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var318)->values[1]=var335;
{
var336 = ((val*(*)(val* self))(var318->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var318); /* native_to_s on <var318:NativeArray[String]>*/
}
varonce317 = var318;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var336); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce337==NULL)) {
var338 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce339!=NULL)) {
var340 = varonce339;
} else {
var341 = "Uninitialized attribute ";
var343 = (val*)(24l<<2|1);
var344 = (val*)(24l<<2|1);
var345 = (val*)((long)(0)<<2|3);
var346 = (val*)((long)(0)<<2|3);
var342 = core__flat___CString___to_s_unsafe(var341, var343, var344, var345, var346);
var340 = var342;
varonce339 = var340;
}
((struct instance_core__NativeArray*)var338)->values[0]=var340;
} else {
var338 = varonce337;
varonce337 = NULL;
}
{
{ /* Inline model$MProperty$name (var_a) on <var_a:MAttribute> */
var349 = var_a->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var349 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
((struct instance_core__NativeArray*)var338)->values[1]=var347;
{
var350 = ((val*(*)(val* self))(var338->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var338); /* native_to_s on <var338:NativeArray[String]>*/
}
varonce337 = var338;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var350); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "}";
var355 = (val*)(1l<<2|1);
var356 = (val*)(1l<<2|1);
var357 = (val*)((long)(0)<<2|3);
var358 = (val*)((long)(0)<<2|3);
var354 = core__flat___CString___to_s_unsafe(var353, var355, var356, var357, var358);
var352 = var354;
varonce351 = var352;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var352); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var361 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var361 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var359 = var361;
RET_LABEL360:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var359) on <var359:AbstractCompiler(SeparateCompiler)> */
var364 = var359->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var359:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var364 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var362 = var364;
RET_LABEL363:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var362) on <var362:ModelBuilder> */
var367 = var362->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var362:ModelBuilder> */
if (unlikely(var367 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var365 = var367;
RET_LABEL366:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_isset_checks_metrics (var365) on <var365:ToolContext> */
var370 = var365->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var365:ToolContext> */
if (unlikely(var370 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var368 = var370;
RET_LABEL369:(void)0;
}
}
{
{ /* Inline opts$Option$value (var368) on <var368:OptionBool> */
var373 = var368->attrs[COLOR_opts__Option___value].val; /* _value on <var368:OptionBool> */
var371 = var373;
RET_LABEL372:(void)0;
}
}
var374 = (short int)((long)(var371)>>2);
if (var374){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var377 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var377 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var375 = var377;
RET_LABEL376:(void)0;
}
}
var_378 = var375;
{
{ /* Inline separate_compiler$SeparateCompiler$isset_checks_count (var_378) on <var_378:SeparateCompiler> */
var381 = var_378->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <var_378:SeparateCompiler> */
var379 = var381;
RET_LABEL380:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var379,1l) on <var379:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var384 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var384)) {
var_class_name387 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name387);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var388 = var379 + 1l;
var382 = var388;
goto RET_LABEL383;
RET_LABEL383:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$isset_checks_count= (var_378,var382) on <var_378:SeparateCompiler> */
var_378->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l = var382; /* _isset_checks_count on <var_378:SeparateCompiler> */
RET_LABEL389:(void)0;
}
}
if (likely(varonce390!=NULL)) {
var391 = varonce390;
} else {
var392 = "count_isset_checks++;";
var394 = (val*)(21l<<2|1);
var395 = (val*)(21l<<2|1);
var396 = (val*)((long)(0)<<2|3);
var397 = (val*)((long)(0)<<2|3);
var393 = core__flat___CString___to_s_unsafe(var392, var394, var395, var396, var397);
var391 = var393;
varonce390 = var391;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var391); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
var = var_res232;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$write_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable, RuntimeVariable) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var /* : MPropDef */;
val* var2 /* : MPropDef */;
val* var3 /* : nullable MType */;
val* var5 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var6 /* : MPropDef */;
val* var8 /* : MPropDef */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MType */;
val* var22 /* : RuntimeVariable */;
val* var23 /* : String */;
val* var24 /* : AbstractCompiler */;
val* var26 /* : AbstractCompiler */;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
val* var30 /* : ToolContext */;
val* var32 /* : ToolContext */;
val* var33 /* : OptionBool */;
val* var35 /* : OptionBool */;
val* var36 /* : nullable Object */;
val* var38 /* : nullable Object */;
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
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var_attr /* var attr: String */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
val* var63 /* : AbstractCompiler */;
val* var65 /* : AbstractCompiler */;
val* var66 /* : MModule */;
val* var68 /* : MModule */;
val* var69 /* : MClassType */;
val* var70 /* : RuntimeVariable */;
val* var_tv /* var tv: RuntimeVariable */;
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
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Bool */;
val* var96 /* : nullable Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
val* var104 /* : nullable Bool */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : String */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
int cltype;
int idtype;
val* var112 /* : NativeArray[String] */;
static val* varonce111;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Bool */;
val* var120 /* : nullable Bool */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Bool */;
val* var128 /* : nullable Bool */;
val* var129 /* : String */;
val* var131 /* : NativeArray[String] */;
static val* varonce130;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Bool */;
val* var139 /* : nullable Bool */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : CString */;
val* var143 /* : String */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Bool */;
val* var147 /* : nullable Bool */;
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
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Int */;
val* var170 /* : nullable Bool */;
val* var171 /* : nullable Bool */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : CString */;
val* var175 /* : String */;
val* var176 /* : nullable Int */;
val* var177 /* : nullable Int */;
val* var178 /* : nullable Bool */;
val* var179 /* : nullable Bool */;
val* var180 /* : String */;
val* var181 /* : String */;
val* var182 /* : String */;
val* var183 /* : String */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable Bool */;
val* var193 /* : MClassType */;
val* var194 /* : MType */;
val* var195 /* : RuntimeVariable */;
val* var197 /* : NativeArray[String] */;
static val* varonce196;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Bool */;
val* var205 /* : nullable Bool */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : CString */;
val* var209 /* : String */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Int */;
val* var212 /* : nullable Bool */;
val* var213 /* : nullable Bool */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : CString */;
val* var217 /* : String */;
val* var218 /* : nullable Int */;
val* var219 /* : nullable Int */;
val* var220 /* : nullable Bool */;
val* var221 /* : nullable Bool */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : CString */;
val* var225 /* : String */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Int */;
val* var228 /* : nullable Bool */;
val* var229 /* : nullable Bool */;
val* var230 /* : String */;
val* var231 /* : String */;
val* var232 /* : String */;
val* var233 /* : String */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : CString */;
val* var237 /* : String */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Int */;
val* var240 /* : nullable Bool */;
val* var241 /* : nullable Bool */;
val* var243 /* : NativeArray[String] */;
static val* varonce242;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : CString */;
val* var247 /* : String */;
val* var248 /* : nullable Int */;
val* var249 /* : nullable Int */;
val* var250 /* : nullable Bool */;
val* var251 /* : nullable Bool */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : CString */;
val* var255 /* : String */;
val* var256 /* : nullable Int */;
val* var257 /* : nullable Int */;
val* var258 /* : nullable Bool */;
val* var259 /* : nullable Bool */;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : CString */;
val* var263 /* : String */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Int */;
val* var266 /* : nullable Bool */;
val* var267 /* : nullable Bool */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : CString */;
val* var271 /* : String */;
val* var272 /* : nullable Int */;
val* var273 /* : nullable Int */;
val* var274 /* : nullable Bool */;
val* var275 /* : nullable Bool */;
val* var276 /* : String */;
val* var277 /* : String */;
val* var278 /* : String */;
val* var279 /* : String */;
val* var281 /* : NativeArray[String] */;
static val* varonce280;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : CString */;
val* var285 /* : String */;
val* var286 /* : nullable Int */;
val* var287 /* : nullable Int */;
val* var288 /* : nullable Bool */;
val* var289 /* : nullable Bool */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : CString */;
val* var293 /* : String */;
val* var294 /* : nullable Int */;
val* var295 /* : nullable Int */;
val* var296 /* : nullable Bool */;
val* var297 /* : nullable Bool */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : CString */;
val* var301 /* : String */;
val* var302 /* : nullable Int */;
val* var303 /* : nullable Int */;
val* var304 /* : nullable Bool */;
val* var305 /* : nullable Bool */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : CString */;
val* var309 /* : String */;
val* var310 /* : nullable Int */;
val* var311 /* : nullable Int */;
val* var312 /* : nullable Bool */;
val* var313 /* : nullable Bool */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : CString */;
val* var317 /* : String */;
val* var318 /* : nullable Int */;
val* var319 /* : nullable Int */;
val* var320 /* : nullable Bool */;
val* var321 /* : nullable Bool */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : CString */;
val* var325 /* : String */;
val* var326 /* : nullable Int */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Bool */;
val* var329 /* : nullable Bool */;
val* var330 /* : String */;
val* var331 /* : String */;
val* var332 /* : String */;
val* var333 /* : String */;
val* var334 /* : String */;
val* var335 /* : String */;
val* var336 /* : String */;
var_a = p0;
var_recv = p1;
var_value = p2;
{
nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(self, var_recv); /* Direct call abstract_compiler$AbstractCompilerVisitor$check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model$MProperty$intro (var_a) on <var_a:MAttribute> */
var2 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MAttributeDef$static_mtype (var) on <var:MPropDef(MAttributeDef)> */
var5 = var->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var:MPropDef(MAttributeDef)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1697);
fatal_exit(1);
}
var_mtype = var3;
{
{ /* Inline model$MProperty$intro (var_a) on <var_a:MAttribute> */
var8 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var6) on <var6:MPropDef(MAttributeDef)> */
var11 = var6->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var6:MPropDef(MAttributeDef)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_intromclassdef = var9;
{
{ /* Inline model$MClassDef$bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var14 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var17 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var20 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_mtype, var12, var15, var18, 1); /* resolve_for on <var_mtype:MType>*/
}
var_mtype = var21;
{
var22 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value, var_mtype);
}
var_value = var22;
{
var23 = nitc__separate_compiler___MEntity___const_color(var_a);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var23); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var26 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var24) on <var24:AbstractCompiler(SeparateCompiler)> */
var29 = var24->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var24:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var27) on <var27:ModelBuilder> */
var32 = var27->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var27:ModelBuilder> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_union_attribute (var30) on <var30:ToolContext> */
var35 = var30->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var30:ToolContext> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 28);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline opts$Option$value (var33) on <var33:OptionBool> */
var38 = var33->attrs[COLOR_opts__Option___value].val; /* _value on <var33:OptionBool> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = (short int)((long)(var36)>>2);
if (var39){
if (unlikely(varonce==NULL)) {
var40 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "->attrs[";
var45 = (val*)(8l<<2|1);
var46 = (val*)(8l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[1]=var42;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "]";
var53 = (val*)(1l<<2|1);
var54 = (val*)(1l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var40)->values[3]=var50;
} else {
var40 = varonce;
varonce = NULL;
}
{
var57 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var40)->values[0]=var57;
{
var58 = nitc__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_core__NativeArray*)var40)->values[2]=var58;
{
var59 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce = var40;
var_attr = var59;
{
{ /* Inline separate_compiler$MType$is_tagged (var_mtype) on <var_mtype:MType> */
var62 = var_mtype->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MType> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (var60){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var65 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var63) on <var63:AbstractCompiler(SeparateCompiler)> */
var68 = var63->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var63:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nitc__model___MModule___object_type(var66);
}
{
var70 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value, var69);
}
var_tv = var70;
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = " = ";
var77 = (val*)(3l<<2|1);
var78 = (val*)(3l<<2|1);
var79 = (val*)((long)(0)<<2|3);
var80 = (val*)((long)(0)<<2|3);
var76 = core__flat___CString___to_s_unsafe(var75, var77, var78, var79, var80);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var72)->values[1]=var74;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "; /* ";
var85 = (val*)(5l<<2|1);
var86 = (val*)(5l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var72)->values[3]=var82;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = " on ";
var93 = (val*)(4l<<2|1);
var94 = (val*)(4l<<2|1);
var95 = (val*)((long)(0)<<2|3);
var96 = (val*)((long)(0)<<2|3);
var92 = core__flat___CString___to_s_unsafe(var91, var93, var94, var95, var96);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var72)->values[5]=var90;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = " */";
var101 = (val*)(3l<<2|1);
var102 = (val*)(3l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var72)->values[7]=var98;
} else {
var72 = varonce71;
varonce71 = NULL;
}
((struct instance_core__NativeArray*)var72)->values[0]=var_attr;
{
var105 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_tv); /* to_s on <var_tv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var72)->values[2]=var105;
{
var106 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var72)->values[4]=var106;
{
var107 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var72)->values[6]=var107;
{
var108 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var108); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
var109 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
if (var109){
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var110 = 0;
} else {
var110 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var110)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1712);
fatal_exit(1);
}
if (unlikely(varonce111==NULL)) {
var112 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "if (";
var117 = (val*)(4l<<2|1);
var118 = (val*)(4l<<2|1);
var119 = (val*)((long)(0)<<2|3);
var120 = (val*)((long)(0)<<2|3);
var116 = core__flat___CString___to_s_unsafe(var115, var117, var118, var119, var120);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var112)->values[0]=var114;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = " != NULL) {";
var125 = (val*)(11l<<2|1);
var126 = (val*)(11l<<2|1);
var127 = (val*)((long)(0)<<2|3);
var128 = (val*)((long)(0)<<2|3);
var124 = core__flat___CString___to_s_unsafe(var123, var125, var126, var127, var128);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var112)->values[2]=var122;
} else {
var112 = varonce111;
varonce111 = NULL;
}
((struct instance_core__NativeArray*)var112)->values[1]=var_attr;
{
var129 = ((val*(*)(val* self))(var112->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var112); /* native_to_s on <var112:NativeArray[String]>*/
}
varonce111 = var112;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var129); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce130==NULL)) {
var131 = NEW_core__NativeArray((int)11l, &type_core__NativeArray__core__String);
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "((struct instance_";
var136 = (val*)(18l<<2|1);
var137 = (val*)(18l<<2|1);
var138 = (val*)((long)(0)<<2|3);
var139 = (val*)((long)(0)<<2|3);
var135 = core__flat___CString___to_s_unsafe(var134, var136, var137, var138, var139);
var133 = var135;
varonce132 = var133;
}
((struct instance_core__NativeArray*)var131)->values[0]=var133;
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "*)";
var144 = (val*)(2l<<2|1);
var145 = (val*)(2l<<2|1);
var146 = (val*)((long)(0)<<2|3);
var147 = (val*)((long)(0)<<2|3);
var143 = core__flat___CString___to_s_unsafe(var142, var144, var145, var146, var147);
var141 = var143;
varonce140 = var141;
}
((struct instance_core__NativeArray*)var131)->values[2]=var141;
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = ")->value = ";
var152 = (val*)(11l<<2|1);
var153 = (val*)(11l<<2|1);
var154 = (val*)((long)(0)<<2|3);
var155 = (val*)((long)(0)<<2|3);
var151 = core__flat___CString___to_s_unsafe(var150, var152, var153, var154, var155);
var149 = var151;
varonce148 = var149;
}
((struct instance_core__NativeArray*)var131)->values[4]=var149;
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "; /* ";
var160 = (val*)(5l<<2|1);
var161 = (val*)(5l<<2|1);
var162 = (val*)((long)(0)<<2|3);
var163 = (val*)((long)(0)<<2|3);
var159 = core__flat___CString___to_s_unsafe(var158, var160, var161, var162, var163);
var157 = var159;
varonce156 = var157;
}
((struct instance_core__NativeArray*)var131)->values[6]=var157;
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = " on ";
var168 = (val*)(4l<<2|1);
var169 = (val*)(4l<<2|1);
var170 = (val*)((long)(0)<<2|3);
var171 = (val*)((long)(0)<<2|3);
var167 = core__flat___CString___to_s_unsafe(var166, var168, var169, var170, var171);
var165 = var167;
varonce164 = var165;
}
((struct instance_core__NativeArray*)var131)->values[8]=var165;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = " */";
var176 = (val*)(3l<<2|1);
var177 = (val*)(3l<<2|1);
var178 = (val*)((long)(0)<<2|3);
var179 = (val*)((long)(0)<<2|3);
var175 = core__flat___CString___to_s_unsafe(var174, var176, var177, var178, var179);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var131)->values[10]=var173;
} else {
var131 = varonce130;
varonce130 = NULL;
}
{
var180 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var131)->values[1]=var180;
((struct instance_core__NativeArray*)var131)->values[3]=var_attr;
{
var181 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var131)->values[5]=var181;
{
var182 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var131)->values[7]=var182;
{
var183 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var131)->values[9]=var183;
{
var184 = ((val*(*)(val* self))(var131->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var131); /* native_to_s on <var131:NativeArray[String]>*/
}
varonce130 = var131;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var184); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "} else {";
var189 = (val*)(8l<<2|1);
var190 = (val*)(8l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var186); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
var193 = nitc___nitc__AbstractCompilerVisitor___object_type(self);
}
{
var194 = nitc___nitc__MType___as_nullable(var193);
}
{
var195 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value, var194);
}
var_value = var195;
if (unlikely(varonce196==NULL)) {
var197 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = " = ";
var202 = (val*)(3l<<2|1);
var203 = (val*)(3l<<2|1);
var204 = (val*)((long)(0)<<2|3);
var205 = (val*)((long)(0)<<2|3);
var201 = core__flat___CString___to_s_unsafe(var200, var202, var203, var204, var205);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var197)->values[1]=var199;
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = "; /* ";
var210 = (val*)(5l<<2|1);
var211 = (val*)(5l<<2|1);
var212 = (val*)((long)(0)<<2|3);
var213 = (val*)((long)(0)<<2|3);
var209 = core__flat___CString___to_s_unsafe(var208, var210, var211, var212, var213);
var207 = var209;
varonce206 = var207;
}
((struct instance_core__NativeArray*)var197)->values[3]=var207;
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = " on ";
var218 = (val*)(4l<<2|1);
var219 = (val*)(4l<<2|1);
var220 = (val*)((long)(0)<<2|3);
var221 = (val*)((long)(0)<<2|3);
var217 = core__flat___CString___to_s_unsafe(var216, var218, var219, var220, var221);
var215 = var217;
varonce214 = var215;
}
((struct instance_core__NativeArray*)var197)->values[5]=var215;
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = " */";
var226 = (val*)(3l<<2|1);
var227 = (val*)(3l<<2|1);
var228 = (val*)((long)(0)<<2|3);
var229 = (val*)((long)(0)<<2|3);
var225 = core__flat___CString___to_s_unsafe(var224, var226, var227, var228, var229);
var223 = var225;
varonce222 = var223;
}
((struct instance_core__NativeArray*)var197)->values[7]=var223;
} else {
var197 = varonce196;
varonce196 = NULL;
}
((struct instance_core__NativeArray*)var197)->values[0]=var_attr;
{
var230 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var197)->values[2]=var230;
{
var231 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var197)->values[4]=var231;
{
var232 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var197)->values[6]=var232;
{
var233 = ((val*(*)(val* self))(var197->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var197); /* native_to_s on <var197:NativeArray[String]>*/
}
varonce196 = var197;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var233); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce234!=NULL)) {
var235 = varonce234;
} else {
var236 = "}";
var238 = (val*)(1l<<2|1);
var239 = (val*)(1l<<2|1);
var240 = (val*)((long)(0)<<2|3);
var241 = (val*)((long)(0)<<2|3);
var237 = core__flat___CString___to_s_unsafe(var236, var238, var239, var240, var241);
var235 = var237;
varonce234 = var235;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var235); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce242==NULL)) {
var243 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = " = ";
var248 = (val*)(3l<<2|1);
var249 = (val*)(3l<<2|1);
var250 = (val*)((long)(0)<<2|3);
var251 = (val*)((long)(0)<<2|3);
var247 = core__flat___CString___to_s_unsafe(var246, var248, var249, var250, var251);
var245 = var247;
varonce244 = var245;
}
((struct instance_core__NativeArray*)var243)->values[1]=var245;
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "; /* ";
var256 = (val*)(5l<<2|1);
var257 = (val*)(5l<<2|1);
var258 = (val*)((long)(0)<<2|3);
var259 = (val*)((long)(0)<<2|3);
var255 = core__flat___CString___to_s_unsafe(var254, var256, var257, var258, var259);
var253 = var255;
varonce252 = var253;
}
((struct instance_core__NativeArray*)var243)->values[3]=var253;
if (likely(varonce260!=NULL)) {
var261 = varonce260;
} else {
var262 = " on ";
var264 = (val*)(4l<<2|1);
var265 = (val*)(4l<<2|1);
var266 = (val*)((long)(0)<<2|3);
var267 = (val*)((long)(0)<<2|3);
var263 = core__flat___CString___to_s_unsafe(var262, var264, var265, var266, var267);
var261 = var263;
varonce260 = var261;
}
((struct instance_core__NativeArray*)var243)->values[5]=var261;
if (likely(varonce268!=NULL)) {
var269 = varonce268;
} else {
var270 = " */";
var272 = (val*)(3l<<2|1);
var273 = (val*)(3l<<2|1);
var274 = (val*)((long)(0)<<2|3);
var275 = (val*)((long)(0)<<2|3);
var271 = core__flat___CString___to_s_unsafe(var270, var272, var273, var274, var275);
var269 = var271;
varonce268 = var269;
}
((struct instance_core__NativeArray*)var243)->values[7]=var269;
} else {
var243 = varonce242;
varonce242 = NULL;
}
((struct instance_core__NativeArray*)var243)->values[0]=var_attr;
{
var276 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var243)->values[2]=var276;
{
var277 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var243)->values[4]=var277;
{
var278 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var243)->values[6]=var278;
{
var279 = ((val*(*)(val* self))(var243->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var243); /* native_to_s on <var243:NativeArray[String]>*/
}
varonce242 = var243;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var279); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (unlikely(varonce280==NULL)) {
var281 = NEW_core__NativeArray((int)12l, &type_core__NativeArray__core__String);
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = "->attrs[";
var286 = (val*)(8l<<2|1);
var287 = (val*)(8l<<2|1);
var288 = (val*)((long)(0)<<2|3);
var289 = (val*)((long)(0)<<2|3);
var285 = core__flat___CString___to_s_unsafe(var284, var286, var287, var288, var289);
var283 = var285;
varonce282 = var283;
}
((struct instance_core__NativeArray*)var281)->values[1]=var283;
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = "].";
var294 = (val*)(2l<<2|1);
var295 = (val*)(2l<<2|1);
var296 = (val*)((long)(0)<<2|3);
var297 = (val*)((long)(0)<<2|3);
var293 = core__flat___CString___to_s_unsafe(var292, var294, var295, var296, var297);
var291 = var293;
varonce290 = var291;
}
((struct instance_core__NativeArray*)var281)->values[3]=var291;
if (likely(varonce298!=NULL)) {
var299 = varonce298;
} else {
var300 = " = ";
var302 = (val*)(3l<<2|1);
var303 = (val*)(3l<<2|1);
var304 = (val*)((long)(0)<<2|3);
var305 = (val*)((long)(0)<<2|3);
var301 = core__flat___CString___to_s_unsafe(var300, var302, var303, var304, var305);
var299 = var301;
varonce298 = var299;
}
((struct instance_core__NativeArray*)var281)->values[5]=var299;
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "; /* ";
var310 = (val*)(5l<<2|1);
var311 = (val*)(5l<<2|1);
var312 = (val*)((long)(0)<<2|3);
var313 = (val*)((long)(0)<<2|3);
var309 = core__flat___CString___to_s_unsafe(var308, var310, var311, var312, var313);
var307 = var309;
varonce306 = var307;
}
((struct instance_core__NativeArray*)var281)->values[7]=var307;
if (likely(varonce314!=NULL)) {
var315 = varonce314;
} else {
var316 = " on ";
var318 = (val*)(4l<<2|1);
var319 = (val*)(4l<<2|1);
var320 = (val*)((long)(0)<<2|3);
var321 = (val*)((long)(0)<<2|3);
var317 = core__flat___CString___to_s_unsafe(var316, var318, var319, var320, var321);
var315 = var317;
varonce314 = var315;
}
((struct instance_core__NativeArray*)var281)->values[9]=var315;
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = " */";
var326 = (val*)(3l<<2|1);
var327 = (val*)(3l<<2|1);
var328 = (val*)((long)(0)<<2|3);
var329 = (val*)((long)(0)<<2|3);
var325 = core__flat___CString___to_s_unsafe(var324, var326, var327, var328, var329);
var323 = var325;
varonce322 = var323;
}
((struct instance_core__NativeArray*)var281)->values[11]=var323;
} else {
var281 = varonce280;
varonce280 = NULL;
}
{
var330 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var281)->values[0]=var330;
{
var331 = nitc__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_core__NativeArray*)var281)->values[2]=var331;
{
var332 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctypename]))(var_mtype); /* ctypename on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var281)->values[4]=var332;
{
var333 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var281)->values[6]=var333;
{
var334 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var281)->values[8]=var334;
{
var335 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var281)->values[10]=var335;
{
var336 = ((val*(*)(val* self))(var281->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var281); /* native_to_s on <var281:NativeArray[String]>*/
}
varonce280 = var281;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var336); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompilerVisitor$hardening_live_open_type for (self: SeparateCompilerVisitor, MType) */
void nitc___nitc__SeparateCompilerVisitor___hardening_live_open_type(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_col /* var col: String */;
val* var19 /* : NativeArray[String] */;
static val* varonce;
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
val* var36 /* : String */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
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
var_mtype = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var) on <var:AbstractCompiler(SeparateCompiler)> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_hardening (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 46);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts$Option$value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = (short int)((long)(var12)>>2);
var16 = !var15;
if (var16){
goto RET_LABEL;
} else {
}
{
var17 = nitc__separate_compiler___MEntity___const_color(var_mtype);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var17); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
{
var18 = nitc__separate_compiler___MEntity___const_color(var_mtype);
}
var_col = var18;
if (unlikely(varonce==NULL)) {
var19 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "if(";
var24 = (val*)(3l<<2|1);
var25 = (val*)(3l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = " == -1) {";
var32 = (val*)(9l<<2|1);
var33 = (val*)(9l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var19)->values[2]=var29;
} else {
var19 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var19)->values[1]=var_col;
{
var36 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce = var19;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var36); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce37==NULL)) {
var38 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "PRINT_ERROR(\"Resolution of a dead open type: %s\\n\", \"";
var43 = (val*)(53l<<2|1);
var44 = (val*)(53l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var38)->values[0]=var40;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "\");";
var51 = (val*)(3l<<2|1);
var52 = (val*)(3l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var38)->values[2]=var48;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
var55 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
{
var56 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var55); /* escape_to_c on <var55:String>*/
}
((struct instance_core__NativeArray*)var38)->values[1]=var56;
{
var57 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var57); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "open type dead";
var62 = (val*)(14l<<2|1);
var63 = (val*)(14l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var59); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "}";
var70 = (val*)(1l<<2|1);
var71 = (val*)(1l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var67); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompilerVisitor$hardening_cast_type for (self: SeparateCompilerVisitor, String) */
void nitc___nitc__SeparateCompilerVisitor___hardening_cast_type(val* self, val* p0) {
val* var_t /* var t: String */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : NativeArray[String] */;
static val* varonce;
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
val* var34 /* : String */;
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
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Bool */;
val* var60 /* : nullable Bool */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Bool */;
val* var68 /* : nullable Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
val* var77 /* : String */;
val* var79 /* : NativeArray[String] */;
static val* varonce78;
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
var_t = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var) on <var:AbstractCompiler(SeparateCompiler)> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_hardening (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 46);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts$Option$value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = (short int)((long)(var12)>>2);
var16 = !var15;
if (var16){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var17 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "if(";
var22 = (val*)(3l<<2|1);
var23 = (val*)(3l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var17)->values[0]=var19;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = " == NULL) {";
var30 = (val*)(11l<<2|1);
var31 = (val*)(11l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var17)->values[2]=var27;
} else {
var17 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var17)->values[1]=var_t;
{
var34 = ((val*(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce = var17;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var34); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "cast type null";
var39 = (val*)(14l<<2|1);
var40 = (val*)(14l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var36); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "}";
var47 = (val*)(1l<<2|1);
var48 = (val*)(1l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var44); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce51==NULL)) {
var52 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "if(";
var57 = (val*)(3l<<2|1);
var58 = (val*)(3l<<2|1);
var59 = (val*)((long)(0)<<2|3);
var60 = (val*)((long)(0)<<2|3);
var56 = core__flat___CString___to_s_unsafe(var55, var57, var58, var59, var60);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var52)->values[0]=var54;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "->id == -1 || ";
var65 = (val*)(14l<<2|1);
var66 = (val*)(14l<<2|1);
var67 = (val*)((long)(0)<<2|3);
var68 = (val*)((long)(0)<<2|3);
var64 = core__flat___CString___to_s_unsafe(var63, var65, var66, var67, var68);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var52)->values[2]=var62;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "->color == -1) {";
var73 = (val*)(16l<<2|1);
var74 = (val*)(16l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var52)->values[4]=var70;
} else {
var52 = varonce51;
varonce51 = NULL;
}
((struct instance_core__NativeArray*)var52)->values[1]=var_t;
((struct instance_core__NativeArray*)var52)->values[3]=var_t;
{
var77 = ((val*(*)(val* self))(var52->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var77); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce78==NULL)) {
var79 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "PRINT_ERROR(\"Try to cast on a dead cast type: %s\\n\", ";
var84 = (val*)(53l<<2|1);
var85 = (val*)(53l<<2|1);
var86 = (val*)((long)(0)<<2|3);
var87 = (val*)((long)(0)<<2|3);
var83 = core__flat___CString___to_s_unsafe(var82, var84, var85, var86, var87);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var79)->values[0]=var81;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "->name);";
var92 = (val*)(8l<<2|1);
var93 = (val*)(8l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var79)->values[2]=var89;
} else {
var79 = varonce78;
varonce78 = NULL;
}
((struct instance_core__NativeArray*)var79)->values[1]=var_t;
{
var96 = ((val*(*)(val* self))(var79->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var79); /* native_to_s on <var79:NativeArray[String]>*/
}
varonce78 = var79;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var96); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "cast type dead";
var101 = (val*)(14l<<2|1);
var102 = (val*)(14l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var98); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:SeparateCompilerVisitor>*/
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
nitc___nitc__AbstractCompilerVisitor___add(self, var106); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompilerVisitor$init_instance for (self: SeparateCompilerVisitor, MClassType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
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
val* var15 /* : AbstractCompiler */;
val* var17 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : nullable StaticFrame */;
val* var25 /* : nullable StaticFrame */;
val* var26 /* : MPropDef */;
val* var28 /* : MPropDef */;
val* var29 /* : MClassDef */;
val* var31 /* : MClassDef */;
val* var32 /* : nullable StaticFrame */;
val* var34 /* : nullable StaticFrame */;
val* var35 /* : Array[RuntimeVariable] */;
val* var37 /* : Array[RuntimeVariable] */;
val* var38 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var39 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var40 /* : String */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
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
val* var75 /* : MClass */;
val* var77 /* : MClass */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var81 /* : RuntimeVariable */;
val* var82 /* : Set[MType] */;
val* var84 /* : Set[MType] */;
val* var86 /* : NativeArray[String] */;
static val* varonce85;
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
val* var98 /* : NativeArray[String] */;
static val* varonce97;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Bool */;
val* var114 /* : nullable Bool */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : CString */;
val* var118 /* : String */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Int */;
val* var121 /* : nullable Bool */;
val* var122 /* : nullable Bool */;
val* var123 /* : MClass */;
val* var125 /* : MClass */;
val* var126 /* : String */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var129 /* : RuntimeVariable */;
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
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var14); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_compiler = var15;
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_nitc__MGenericType.color;
idtype = type_nitc__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var19 = 0;
} else {
var19 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var19;
if (var19){
{
{ /* Inline model$MGenericType$need_anchor (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var22 = var_mtype->attrs[COLOR_nitc__model__MGenericType___need_anchor].s; /* _need_anchor on <var_mtype:MClassType(MGenericType)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var18 = var20;
} else {
var18 = var_;
}
if (var18){
{
nitc___nitc__SeparateCompilerVisitor___hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler$SeparateCompilerVisitor$hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1761);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var23) on <var23:nullable StaticFrame> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var23:nullable StaticFrame> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var26) on <var26:MPropDef> */
var31 = var26->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var26:MPropDef> */
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
nitc___nitc__SeparateCompilerVisitor___link_unresolved_type(self, var29, var_mtype); /* Direct call separate_compiler$SeparateCompilerVisitor$link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1762);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$arguments (var32) on <var32:nullable StaticFrame> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var37 = var32->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var32:nullable StaticFrame> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = core___core__SequenceRead___Collection__first(var35);
}
var_recv = var38;
{
var39 = nitc___nitc__SeparateCompilerVisitor___type_info(self, var_recv);
}
var_recv_type_info = var39;
{
var40 = nitc__separate_compiler___MEntity___const_color(var_mtype);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var40); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "NEW_";
var47 = (val*)(4l<<2|1);
var48 = (val*)(4l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "(";
var55 = (val*)(1l<<2|1);
var56 = (val*)(1l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var42)->values[2]=var52;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "->resolution_table->types[";
var63 = (val*)(26l<<2|1);
var64 = (val*)(26l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var42)->values[4]=var60;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "])";
var71 = (val*)(2l<<2|1);
var72 = (val*)(2l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var42)->values[6]=var68;
} else {
var42 = varonce41;
varonce41 = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var77 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var75);
}
((struct instance_core__NativeArray*)var42)->values[1]=var78;
((struct instance_core__NativeArray*)var42)->values[3]=var_recv_type_info;
{
var79 = nitc__separate_compiler___MEntity___const_color(var_mtype);
}
((struct instance_core__NativeArray*)var42)->values[5]=var79;
{
var80 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
var81 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var80, var_mtype);
}
var = var81;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var84 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var82&3)?class_info[((long)var82&3)]:var82->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var82, var_mtype); /* add on <var82:Set[MType]>*/
}
if (unlikely(varonce85==NULL)) {
var86 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "type_";
var91 = (val*)(5l<<2|1);
var92 = (val*)(5l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var86)->values[0]=var88;
} else {
var86 = varonce85;
varonce85 = NULL;
}
{
var95 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var86)->values[1]=var95;
{
var96 = ((val*(*)(val* self))(var86->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var86); /* native_to_s on <var86:NativeArray[String]>*/
}
varonce85 = var86;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var96); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce97==NULL)) {
var98 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "NEW_";
var103 = (val*)(4l<<2|1);
var104 = (val*)(4l<<2|1);
var105 = (val*)((long)(0)<<2|3);
var106 = (val*)((long)(0)<<2|3);
var102 = core__flat___CString___to_s_unsafe(var101, var103, var104, var105, var106);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var98)->values[0]=var100;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "(&type_";
var111 = (val*)(7l<<2|1);
var112 = (val*)(7l<<2|1);
var113 = (val*)((long)(0)<<2|3);
var114 = (val*)((long)(0)<<2|3);
var110 = core__flat___CString___to_s_unsafe(var109, var111, var112, var113, var114);
var108 = var110;
varonce107 = var108;
}
((struct instance_core__NativeArray*)var98)->values[2]=var108;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = ")";
var119 = (val*)(1l<<2|1);
var120 = (val*)(1l<<2|1);
var121 = (val*)((long)(0)<<2|3);
var122 = (val*)((long)(0)<<2|3);
var118 = core__flat___CString___to_s_unsafe(var117, var119, var120, var121, var122);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var98)->values[4]=var116;
} else {
var98 = varonce97;
varonce97 = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var125 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var125 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var123);
}
((struct instance_core__NativeArray*)var98)->values[1]=var126;
{
var127 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var98)->values[3]=var127;
{
var128 = ((val*(*)(val* self))(var98->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var98); /* native_to_s on <var98:NativeArray[String]>*/
}
varonce97 = var98;
{
var129 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var128, var_mtype);
}
var = var129;
goto RET_LABEL;
RET_LABEL:;
return var;
}
