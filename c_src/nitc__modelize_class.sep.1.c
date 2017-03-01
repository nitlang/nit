#include "nitc__modelize_class.sep.0.h"
/* method modelize_class$ToolContext$modelize_class_phase for (self: ToolContext): Phase */
val* nitc__modelize_class___ToolContext___modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class$ModelizeClassPhase$process_nmodule for (self: ModelizeClassPhase, AModule) */
void nitc__modelize_class___nitc__modelize_class__ModelizeClassPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : ModelBuilder */;
var_nmodule = p0;
{
{ /* Inline phase$Phase$toolcontext (self) on <self:ModelizeClassPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizeClassPhase> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__modelbuilder_base___ToolContext___modelbuilder(var);
}
{
nitc__modelize_class___ModelBuilder___build_classes(var3, var_nmodule); /* Direct call modelize_class$ModelBuilder$build_classes on <var3:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_class$ModelBuilder$build_a_mclass for (self: ModelBuilder, AModule, AClassdef) */
void nitc__modelize_class___ModelBuilder___build_a_mclass(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
long var_arity /* var arity: Int */;
val* var3 /* : Array[String] */;
val* var_names /* var names: Array[String] */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AQclassid */;
val* var7 /* : nullable AQclassid */;
val* var_qid /* var qid: nullable AQclassid */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : TClassid */;
val* var15 /* : TClassid */;
val* var16 /* : String */;
val* var_name /* var name: String */;
val* var17 /* : AClasskind */;
val* var19 /* : AClasskind */;
val* var_nkind /* var nkind: nullable AClasskind */;
val* var20 /* : MClassKind */;
val* var_mkind /* var mkind: MClassKind */;
val* var21 /* : nullable AVisibility */;
val* var23 /* : nullable AVisibility */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var24 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: nullable MVisibility */;
val* var25 /* : ANodes[AFormaldef] */;
val* var27 /* : ANodes[AFormaldef] */;
long var28 /* : Int */;
val* var29 /* : Sys */;
val* var30 /* : MVisibility */;
short int var31 /* : Bool */;
val* var_other33 /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
val* var44 /* : Sys */;
val* var45 /* : MVisibility */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name;
short int var64 /* : Bool */;
val* var65 /* : ANodes[AFormaldef] */;
val* var67 /* : ANodes[AFormaldef] */;
val* var68 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var69 /* : TClassid */;
val* var71 /* : TClassid */;
val* var72 /* : String */;
val* var_ptname /* var ptname: String */;
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
val* var92 /* : String */;
val* var93 /* : SequenceRead[Char] */;
val* var_94 /* var : SequenceRead[Char] */;
val* var95 /* : Iterator[nullable Object] */;
val* var_96 /* var : IndexedIterator[Char] */;
short int var97 /* : Bool */;
val* var99 /* : nullable Object */;
uint32_t var100 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
int cltype105;
int idtype106;
const char* var_class_name107;
short int var108 /* : Bool */;
short int var_109 /* var : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
short int var116 /* : Bool */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
val* var121 /* : nullable Int */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Bool */;
val* var124 /* : nullable Bool */;
val* var126 /* : NativeArray[String] */;
static val* varonce125;
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
val* var143 /* : String */;
long var144 /* : Int */;
val* var145 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable Object */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
short int var_153 /* var : Bool */;
short int var154 /* : Bool */;
val* var155 /* : nullable AQualified */;
val* var157 /* : nullable AQualified */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var_163 /* var : Bool */;
val* var164 /* : nullable TKwredef */;
val* var166 /* : nullable TKwredef */;
short int var167 /* : Bool */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
int cltype175;
int idtype176;
short int var_177 /* var : Bool */;
val* var178 /* : ANodes[APropdef] */;
val* var180 /* : ANodes[APropdef] */;
val* var181 /* : nullable Object */;
short int var182 /* : Bool */;
int cltype183;
int idtype184;
const char* var_class_name185;
val* var186 /* : nullable AMethid */;
val* var188 /* : nullable AMethid */;
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
val* var207 /* : Sys */;
val* var208 /* : MClassKind */;
val* var209 /* : Sys */;
val* var210 /* : MVisibility */;
val* var211 /* : nullable MClass */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : CString */;
val* var215 /* : String */;
val* var216 /* : nullable Int */;
val* var217 /* : nullable Int */;
val* var218 /* : nullable Bool */;
val* var219 /* : nullable Bool */;
val* var220 /* : Sys */;
val* var221 /* : MClassKind */;
val* var222 /* : Sys */;
val* var223 /* : MVisibility */;
val* var224 /* : nullable MClass */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
val* var232 /* : nullable MGroup */;
val* var234 /* : nullable MGroup */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
short int var_240 /* var : Bool */;
val* var241 /* : Sys */;
val* var242 /* : MVisibility */;
short int var243 /* : Bool */;
val* var244 /* : Model */;
val* var246 /* : Model */;
val* var247 /* : nullable Array[MClass] */;
val* var_mclasses /* var mclasses: nullable Array[MClass] */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
val* var_253 /* var : Array[MClass] */;
val* var254 /* : IndexedIterator[nullable Object] */;
val* var_255 /* var : IndexedIterator[MClass] */;
short int var256 /* : Bool */;
val* var258 /* : nullable Object */;
val* var_other259 /* var other: MClass */;
short int var260 /* : Bool */;
val* var261 /* : MModule */;
val* var263 /* : MModule */;
val* var264 /* : nullable MGroup */;
val* var266 /* : nullable MGroup */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
short int var_272 /* var : Bool */;
val* var273 /* : MModule */;
val* var275 /* : MModule */;
val* var276 /* : nullable MGroup */;
val* var278 /* : nullable MGroup */;
val* var279 /* : MPackage */;
val* var281 /* : MPackage */;
val* var282 /* : nullable MGroup */;
val* var284 /* : nullable MGroup */;
val* var285 /* : MPackage */;
val* var287 /* : MPackage */;
short int var288 /* : Bool */;
short int var290 /* : Bool */;
short int var292 /* : Bool */;
val* var293 /* : nullable MClassDef */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
short int var299 /* : Bool */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : CString */;
val* var304 /* : String */;
val* var305 /* : nullable Int */;
val* var306 /* : nullable Int */;
val* var307 /* : nullable Bool */;
val* var308 /* : nullable Bool */;
val* var310 /* : NativeArray[String] */;
static val* varonce309;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : CString */;
val* var314 /* : String */;
val* var315 /* : nullable Int */;
val* var316 /* : nullable Int */;
val* var317 /* : nullable Bool */;
val* var318 /* : nullable Bool */;
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
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : CString */;
val* var338 /* : String */;
val* var339 /* : nullable Int */;
val* var340 /* : nullable Int */;
val* var341 /* : nullable Bool */;
val* var342 /* : nullable Bool */;
val* var343 /* : String */;
val* var344 /* : MModule */;
val* var346 /* : MModule */;
val* var347 /* : String */;
val* var348 /* : MClassDef */;
val* var350 /* : MClassDef */;
val* var351 /* : Location */;
val* var353 /* : Location */;
val* var354 /* : String */;
val* var355 /* : String */;
val* var356 /* : MClass */;
val* var357 /* : Location */;
val* var359 /* : Location */;
short int var360 /* : Bool */;
short int var361 /* : Bool */;
int cltype362;
int idtype363;
short int var_364 /* var : Bool */;
val* var365 /* : Map[MClass, AClassdef] */;
val* var367 /* : Map[MClass, AClassdef] */;
short int var368 /* : Bool */;
val* var370 /* : NativeArray[String] */;
static val* varonce369;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : CString */;
val* var374 /* : String */;
val* var375 /* : nullable Int */;
val* var376 /* : nullable Int */;
val* var377 /* : nullable Bool */;
val* var378 /* : nullable Bool */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : CString */;
val* var382 /* : String */;
val* var383 /* : nullable Int */;
val* var384 /* : nullable Int */;
val* var385 /* : nullable Bool */;
val* var386 /* : nullable Bool */;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : CString */;
val* var390 /* : String */;
val* var391 /* : nullable Int */;
val* var392 /* : nullable Int */;
val* var393 /* : nullable Bool */;
val* var394 /* : nullable Bool */;
val* var395 /* : Map[MClass, AClassdef] */;
val* var397 /* : Map[MClass, AClassdef] */;
val* var398 /* : nullable Object */;
val* var399 /* : Location */;
val* var401 /* : Location */;
long var402 /* : Int */;
long var404 /* : Int */;
val* var405 /* : String */;
val* var406 /* : String */;
short int var408 /* : Bool */;
short int var409 /* : Bool */;
int cltype410;
int idtype411;
short int var_412 /* var : Bool */;
val* var413 /* : nullable TKwredef */;
val* var415 /* : nullable TKwredef */;
short int var416 /* : Bool */;
short int var417 /* : Bool */;
short int var419 /* : Bool */;
short int var421 /* : Bool */;
val* var423 /* : NativeArray[String] */;
static val* varonce422;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : CString */;
val* var427 /* : String */;
val* var428 /* : nullable Int */;
val* var429 /* : nullable Int */;
val* var430 /* : nullable Bool */;
val* var431 /* : nullable Bool */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : CString */;
val* var435 /* : String */;
val* var436 /* : nullable Int */;
val* var437 /* : nullable Int */;
val* var438 /* : nullable Bool */;
val* var439 /* : nullable Bool */;
val* var440 /* : String */;
short int var442 /* : Bool */;
short int var443 /* : Bool */;
short int var445 /* : Bool */;
short int var446 /* : Bool */;
short int var_447 /* var : Bool */;
long var448 /* : Int */;
long var450 /* : Int */;
short int var451 /* : Bool */;
short int var453 /* : Bool */;
short int var454 /* : Bool */;
val* var456 /* : NativeArray[String] */;
static val* varonce455;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : CString */;
val* var460 /* : String */;
val* var461 /* : nullable Int */;
val* var462 /* : nullable Int */;
val* var463 /* : nullable Bool */;
val* var464 /* : nullable Bool */;
static val* varonce465;
val* var466 /* : String */;
char* var467 /* : CString */;
val* var468 /* : String */;
val* var469 /* : nullable Int */;
val* var470 /* : nullable Int */;
val* var471 /* : nullable Bool */;
val* var472 /* : nullable Bool */;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : CString */;
val* var476 /* : String */;
val* var477 /* : nullable Int */;
val* var478 /* : nullable Int */;
val* var479 /* : nullable Bool */;
val* var480 /* : nullable Bool */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : CString */;
val* var484 /* : String */;
val* var485 /* : nullable Int */;
val* var486 /* : nullable Int */;
val* var487 /* : nullable Bool */;
val* var488 /* : nullable Bool */;
long var489 /* : Int */;
long var491 /* : Int */;
val* var492 /* : String */;
val* var493 /* : String */;
val* var494 /* : String */;
val* var495 /* : String */;
short int var497 /* : Bool */;
short int var498 /* : Bool */;
short int var499 /* : Bool */;
short int var500 /* : Bool */;
short int var502 /* : Bool */;
short int var503 /* : Bool */;
short int var_504 /* var : Bool */;
val* var505 /* : Sys */;
val* var506 /* : MClassKind */;
short int var507 /* : Bool */;
short int var509 /* : Bool */;
short int var510 /* : Bool */;
short int var_511 /* var : Bool */;
val* var512 /* : MClassKind */;
val* var514 /* : MClassKind */;
short int var515 /* : Bool */;
short int var517 /* : Bool */;
short int var518 /* : Bool */;
val* var520 /* : NativeArray[String] */;
static val* varonce519;
static val* varonce521;
val* var522 /* : String */;
char* var523 /* : CString */;
val* var524 /* : String */;
val* var525 /* : nullable Int */;
val* var526 /* : nullable Int */;
val* var527 /* : nullable Bool */;
val* var528 /* : nullable Bool */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : CString */;
val* var532 /* : String */;
val* var533 /* : nullable Int */;
val* var534 /* : nullable Int */;
val* var535 /* : nullable Bool */;
val* var536 /* : nullable Bool */;
static val* varonce537;
val* var538 /* : String */;
char* var539 /* : CString */;
val* var540 /* : String */;
val* var541 /* : nullable Int */;
val* var542 /* : nullable Int */;
val* var543 /* : nullable Bool */;
val* var544 /* : nullable Bool */;
val* var545 /* : MClassKind */;
val* var547 /* : MClassKind */;
val* var548 /* : String */;
val* var549 /* : String */;
val* var550 /* : String */;
short int var551 /* : Bool */;
short int var552 /* : Bool */;
short int var553 /* : Bool */;
short int var554 /* : Bool */;
short int var556 /* : Bool */;
short int var557 /* : Bool */;
short int var_558 /* var : Bool */;
val* var559 /* : Sys */;
val* var560 /* : MVisibility */;
short int var561 /* : Bool */;
short int var563 /* : Bool */;
short int var564 /* : Bool */;
short int var_565 /* var : Bool */;
val* var566 /* : MVisibility */;
val* var568 /* : MVisibility */;
short int var569 /* : Bool */;
short int var571 /* : Bool */;
short int var572 /* : Bool */;
val* var574 /* : NativeArray[String] */;
static val* varonce573;
static val* varonce575;
val* var576 /* : String */;
char* var577 /* : CString */;
val* var578 /* : String */;
val* var579 /* : nullable Int */;
val* var580 /* : nullable Int */;
val* var581 /* : nullable Bool */;
val* var582 /* : nullable Bool */;
static val* varonce583;
val* var584 /* : String */;
char* var585 /* : CString */;
val* var586 /* : String */;
val* var587 /* : nullable Int */;
val* var588 /* : nullable Int */;
val* var589 /* : nullable Bool */;
val* var590 /* : nullable Bool */;
static val* varonce591;
val* var592 /* : String */;
char* var593 /* : CString */;
val* var594 /* : String */;
val* var595 /* : nullable Int */;
val* var596 /* : nullable Int */;
val* var597 /* : nullable Bool */;
val* var598 /* : nullable Bool */;
val* var599 /* : MVisibility */;
val* var601 /* : MVisibility */;
val* var602 /* : String */;
val* var603 /* : String */;
val* var604 /* : String */;
val* var606 /* : Map[MClass, AClassdef] */;
val* var608 /* : Map[MClass, AClassdef] */;
short int var609 /* : Bool */;
short int var610 /* : Bool */;
val* var611 /* : Map[MClass, AClassdef] */;
val* var613 /* : Map[MClass, AClassdef] */;
val* var614 /* : Array[AClassdef] */;
val* var_615 /* var : Array[AClassdef] */;
val* var617 /* : Map[MClass, AClassdef] */;
val* var619 /* : Map[MClass, AClassdef] */;
val* var620 /* : nullable Object */;
val* var621 /* : nullable Array[AClassdef] */;
val* var623 /* : nullable Array[AClassdef] */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader$AModule$mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 40);
fatal_exit(1);
}
var_mmodule = var;
var_arity = 0l;
var3 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array$Array$init on <var3:Array[String]>*/
}
var_names = var3;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var4 = 0;
} else {
var4 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var4){
{
{ /* Inline parser_nodes$AStdClassdef$n_qid (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var7 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_qid].val; /* _n_qid on <var_nclassdef:AClassdef(AStdClassdef)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_qid = var5;
if (var_qid == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_qid,((val*)NULL)) on <var_qid:nullable AQclassid> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_qid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_qid, var_other); /* == on <var_qid:nullable AQclassid(AQclassid)>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (unlikely(!var8)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 52);
fatal_exit(1);
}
{
{ /* Inline parser_nodes$AQclassid$n_id (var_qid) on <var_qid:nullable AQclassid(AQclassid)> */
var15 = var_qid->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var_qid:nullable AQclassid(AQclassid)> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__lexer_work___Token___text(var13);
}
var_name = var16;
{
{ /* Inline parser_nodes$AStdClassdef$n_classkind (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var19 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1227);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_nkind = var17;
{
var20 = ((val*(*)(val* self))(var_nkind->class->vft[COLOR_nitc__modelize_class__AClasskind__mkind]))(var_nkind); /* mkind on <var_nkind:nullable AClasskind(AClasskind)>*/
}
var_mkind = var20;
{
{ /* Inline parser_nodes$ADefinition$n_visibility (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var23 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_nclassdef:AClassdef(AStdClassdef)> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_nvisibility = var21;
if (var_nvisibility == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 57);
fatal_exit(1);
} else {
var24 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nitc__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility>*/
}
var_mvisibility = var24;
{
{ /* Inline parser_nodes$AStdClassdef$n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var27 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1236);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var25);
}
var_arity = var28;
var29 = glob_sys;
{
var30 = nitc__model_base___core__Sys___protected_visibility(var29);
}
{
{ /* Inline kernel$Object$== (var_mvisibility,var30) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other33 = var30;
{
{ /* Inline kernel$Object$is_same_instance (var_mvisibility,var_other33) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var36 = var_mvisibility == var_other33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
if (likely(varonce!=NULL)) {
var37 = varonce;
} else {
var38 = "Error: only properties can be protected.";
var40 = (val*)(40l<<2|1);
var41 = (val*)(40l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce = var37;
}
{
nitc___nitc__ModelBuilder___error(self, var_nvisibility, var37); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
var44 = glob_sys;
{
var45 = nitc__model_base___core__Sys___intrude_visibility(var44);
}
{
{ /* Inline kernel$Object$== (var_mvisibility,var45) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other33 = var45;
{
{ /* Inline kernel$Object$is_same_instance (var_mvisibility,var_other33) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var50 = var_mvisibility == var_other33;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Error: intrude is not a legal visibility for classes.";
var55 = (val*)(53l<<2|1);
var56 = (val*)(53l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
{
nitc___nitc__ModelBuilder___error(self, var_nvisibility, var52); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
var_i = 0l;
var_ = var_arity;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var61 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var64 = var_i < var_;
var59 = var64;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
} else {
goto BREAK_label;
}
{
{ /* Inline parser_nodes$AStdClassdef$n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var67 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1236);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var65, var_i);
}
var_nfd = var68;
{
{ /* Inline parser_nodes$AFormaldef$n_id (var_nfd) on <var_nfd:AFormaldef> */
var71 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1320);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nitc__lexer_work___Token___text(var69);
}
var_ptname = var72;
{
var73 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_names, var_ptname);
}
if (var73){
if (unlikely(varonce74==NULL)) {
var75 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Error: a formal parameter type `";
var80 = (val*)(32l<<2|1);
var81 = (val*)(32l<<2|1);
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
var86 = "` already exists.";
var88 = (val*)(17l<<2|1);
var89 = (val*)(17l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var75)->values[2]=var85;
} else {
var75 = varonce74;
varonce74 = NULL;
}
((struct instance_core__NativeArray*)var75)->values[1]=var_ptname;
{
var92 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce74 = var75;
{
nitc___nitc__ModelBuilder___error(self, var_nfd, var92); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var93 = ((val*(*)(val* self))(var_ptname->class->vft[COLOR_core__abstract_text__Text__chars]))(var_ptname); /* chars on <var_ptname:String>*/
}
var_94 = var93;
{
var95 = ((val*(*)(val* self))((((long)var_94&3)?class_info[((long)var_94&3)]:var_94->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_94); /* iterator on <var_94:SequenceRead[Char]>*/
}
var_96 = var95;
for(;;) {
{
var97 = ((short int(*)(val* self))((((long)var_96&3)?class_info[((long)var_96&3)]:var_96->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_96); /* is_ok on <var_96:IndexedIterator[Char]>*/
}
if (var97){
} else {
goto BREAK_label98;
}
{
var99 = ((val*(*)(val* self))((((long)var_96&3)?class_info[((long)var_96&3)]:var_96->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_96); /* item on <var_96:IndexedIterator[Char]>*/
}
var100 = (uint32_t)((long)(var99)>>2);
var_c = var100;
{
{ /* Inline kernel$Char$>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var104 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var104)) {
var_class_name107 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name107);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var108 = var_c >= 'a';
var102 = var108;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var_109 = var102;
if (var102){
{
{ /* Inline kernel$Char$<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var112 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var116 = var_c <= 'z';
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var101 = var110;
} else {
var101 = var_109;
}
if (var101){
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "formal-type-name";
var121 = (val*)(16l<<2|1);
var122 = (val*)(16l<<2|1);
var123 = (val*)((long)(0)<<2|3);
var124 = (val*)((long)(0)<<2|3);
var120 = core__flat___CString___to_s_unsafe(var119, var121, var122, var123, var124);
var118 = var120;
varonce117 = var118;
}
if (unlikely(varonce125==NULL)) {
var126 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "Warning: lowercase in the formal parameter type `";
var131 = (val*)(49l<<2|1);
var132 = (val*)(49l<<2|1);
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
var137 = "`.";
var139 = (val*)(2l<<2|1);
var140 = (val*)(2l<<2|1);
var141 = (val*)((long)(0)<<2|3);
var142 = (val*)((long)(0)<<2|3);
var138 = core__flat___CString___to_s_unsafe(var137, var139, var140, var141, var142);
var136 = var138;
varonce135 = var136;
}
((struct instance_core__NativeArray*)var126)->values[2]=var136;
} else {
var126 = varonce125;
varonce125 = NULL;
}
((struct instance_core__NativeArray*)var126)->values[1]=var_ptname;
{
var143 = ((val*(*)(val* self))(var126->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var126); /* native_to_s on <var126:NativeArray[String]>*/
}
varonce125 = var126;
{
nitc___nitc__ModelBuilder___warning(self, var_nfd, var118, var143); /* Direct call modelbuilder_base$ModelBuilder$warning on <self:ModelBuilder>*/
}
goto BREAK_label98;
} else {
}
{
((void(*)(val* self))((((long)var_96&3)?class_info[((long)var_96&3)]:var_96->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_96); /* next on <var_96:IndexedIterator[Char]>*/
}
}
BREAK_label98: (void)0;
{
((void(*)(val* self))((((long)var_96&3)?class_info[((long)var_96&3)]:var_96->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_96); /* finish on <var_96:IndexedIterator[Char]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_names, var_ptname); /* Direct call array$Array$add on <var_names:Array[String]>*/
}
{
var144 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var144;
}
BREAK_label: (void)0;
{
var145 = nitc___nitc__ModelBuilder___try_get_mclass_by_qid(self, var_qid, var_mmodule);
}
var_mclass = var145;
if (var_mclass == NULL) {
var147 = 1; /* is null */
} else {
var147 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable Object(nullable MClass)> */
var_other33 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other33) on <var_mclass:nullable Object(MClass)> */
var152 = var_mclass == var_other33;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
var148 = var150;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var147 = var148;
}
var_153 = var147;
if (var147){
{
{ /* Inline parser_nodes$AQclassid$n_qualified (var_qid) on <var_qid:nullable AQclassid(AQclassid)> */
var157 = var_qid->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val; /* _n_qualified on <var_qid:nullable AQclassid(AQclassid)> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
if (var155 == NULL) {
var158 = 0; /* is null */
} else {
var158 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var155,((val*)NULL)) on <var155:nullable AQualified> */
var_other = ((val*)NULL);
{
var161 = ((short int(*)(val* self, val* p0))(var155->class->vft[COLOR_core__kernel__Object___61d_61d]))(var155, var_other); /* == on <var155:nullable AQualified(AQualified)>*/
}
var162 = !var161;
var159 = var162;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
var_163 = var158;
if (var158){
var154 = var_163;
} else {
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var166 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var164 = var166;
RET_LABEL165:(void)0;
}
}
if (var164 == NULL) {
var167 = 0; /* is null */
} else {
var167 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var164,((val*)NULL)) on <var164:nullable TKwredef> */
var_other = ((val*)NULL);
{
var170 = ((short int(*)(val* self, val* p0))(var164->class->vft[COLOR_core__kernel__Object___61d_61d]))(var164, var_other); /* == on <var164:nullable TKwredef(TKwredef)>*/
}
var171 = !var170;
var168 = var171;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
var167 = var168;
}
var154 = var167;
}
var146 = var154;
} else {
var146 = var_153;
}
if (var146){
{
nitc___nitc__ModelBuilder___class_not_found(self, var_qid, var_mmodule); /* Direct call modelbuilder_base$ModelBuilder$class_not_found on <self:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base$ANode$is_broken= (var_nclassdef,1) on <var_nclassdef:AClassdef(AStdClassdef)> */
var_nclassdef->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <var_nclassdef:AClassdef(AStdClassdef)> */
RET_LABEL172:(void)0;
}
}
goto RET_LABEL;
} else {
}
} else {
/* <var_nclassdef:AClassdef> isa ATopClassdef */
cltype175 = type_nitc__ATopClassdef.color;
idtype176 = type_nitc__ATopClassdef.id;
if(cltype175 >= var_nclassdef->type->table_size) {
var174 = 0;
} else {
var174 = var_nclassdef->type->type_table[cltype175] == idtype176;
}
var_177 = var174;
if (var174){
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(ATopClassdef)> */
var180 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(ATopClassdef)> */
if (unlikely(var180 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
{
var181 = core___core__SequenceRead___Collection__first(var178);
}
/* <var181:nullable Object(APropdef)> isa AMethPropdef */
cltype183 = type_nitc__AMethPropdef.color;
idtype184 = type_nitc__AMethPropdef.id;
if(cltype183 >= var181->type->table_size) {
var182 = 0;
} else {
var182 = var181->type->type_table[cltype183] == idtype184;
}
if (unlikely(!var182)) {
var_class_name185 = var181 == NULL ? "null" : var181->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name185);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 87);
fatal_exit(1);
}
{
{ /* Inline parser_nodes$AMethPropdef$n_methid (var181) on <var181:nullable Object(AMethPropdef)> */
var188 = var181->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <var181:nullable Object(AMethPropdef)> */
var186 = var188;
RET_LABEL187:(void)0;
}
}
if (var186 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 87);
fatal_exit(1);
} else {
var189 = nitc__parser_work___Prod___collect_text(var186);
}
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = "sys";
var194 = (val*)(3l<<2|1);
var195 = (val*)(3l<<2|1);
var196 = (val*)((long)(0)<<2|3);
var197 = (val*)((long)(0)<<2|3);
var193 = core__flat___CString___to_s_unsafe(var192, var194, var195, var196, var197);
var191 = var193;
varonce190 = var191;
}
{
var198 = ((short int(*)(val* self, val* p0))(var189->class->vft[COLOR_core__kernel__Object___61d_61d]))(var189, var191); /* == on <var189:String>*/
}
var173 = var198;
} else {
var173 = var_177;
}
if (var173){
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "Object";
var203 = (val*)(6l<<2|1);
var204 = (val*)(6l<<2|1);
var205 = (val*)((long)(0)<<2|3);
var206 = (val*)((long)(0)<<2|3);
var202 = core__flat___CString___to_s_unsafe(var201, var203, var204, var205, var206);
var200 = var202;
varonce199 = var200;
}
var_name = var200;
var_nkind = ((val*)NULL);
var207 = glob_sys;
{
var208 = nitc__model___core__Sys___interface_kind(var207);
}
var_mkind = var208;
var_nvisibility = ((val*)NULL);
var209 = glob_sys;
{
var210 = nitc__model_base___core__Sys___public_visibility(var209);
}
var_mvisibility = var210;
{
var211 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nclassdef, var_mmodule, var_name);
}
var_mclass = var211;
} else {
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "Sys";
var216 = (val*)(3l<<2|1);
var217 = (val*)(3l<<2|1);
var218 = (val*)((long)(0)<<2|3);
var219 = (val*)((long)(0)<<2|3);
var215 = core__flat___CString___to_s_unsafe(var214, var216, var217, var218, var219);
var213 = var215;
varonce212 = var213;
}
var_name = var213;
var_nkind = ((val*)NULL);
var220 = glob_sys;
{
var221 = nitc__model___core__Sys___concrete_kind(var220);
}
var_mkind = var221;
var_nvisibility = ((val*)NULL);
var222 = glob_sys;
{
var223 = nitc__model_base___core__Sys___public_visibility(var222);
}
var_mvisibility = var223;
{
var224 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nclassdef, var_mmodule, var_name);
}
var_mclass = var224;
}
}
if (var_mclass == NULL) {
var225 = 1; /* is null */
} else {
var225 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable Object(nullable MClass)> */
var_other33 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other33) on <var_mclass:nullable Object(MClass)> */
var230 = var_mclass == var_other33;
var228 = var230;
goto RET_LABEL229;
RET_LABEL229:(void)0;
}
}
var226 = var228;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
var225 = var226;
}
if (var225){
{
{ /* Inline mmodule$MModule$mgroup (var_mmodule) on <var_mmodule:MModule> */
var234 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var232 = var234;
RET_LABEL233:(void)0;
}
}
if (var232 == NULL) {
var235 = 0; /* is null */
} else {
var235 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var232,((val*)NULL)) on <var232:nullable MGroup> */
var_other = ((val*)NULL);
{
var238 = ((short int(*)(val* self, val* p0))(var232->class->vft[COLOR_core__kernel__Object___61d_61d]))(var232, var_other); /* == on <var232:nullable MGroup(MGroup)>*/
}
var239 = !var238;
var236 = var239;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
var235 = var236;
}
var_240 = var235;
if (var235){
var241 = glob_sys;
{
var242 = nitc__model_base___core__Sys___protected_visibility(var241);
}
{
var243 = core___core__Comparable____62d_61d(var_mvisibility, var242);
}
var231 = var243;
} else {
var231 = var_240;
}
if (var231){
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var246 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var246 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
var247 = nitc__model___Model___get_mclasses_by_name(var244, var_name);
}
var_mclasses = var247;
if (var_mclasses == NULL) {
var248 = 0; /* is null */
} else {
var248 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mclasses,((val*)NULL)) on <var_mclasses:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var251 = ((short int(*)(val* self, val* p0))(var_mclasses->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclasses, var_other); /* == on <var_mclasses:nullable Array[MClass](Array[MClass])>*/
}
var252 = !var251;
var249 = var252;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
var248 = var249;
}
if (var248){
var_253 = var_mclasses;
{
var254 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_253);
}
var_255 = var254;
for(;;) {
{
var256 = ((short int(*)(val* self))((((long)var_255&3)?class_info[((long)var_255&3)]:var_255->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_255); /* is_ok on <var_255:IndexedIterator[MClass]>*/
}
if (var256){
} else {
goto BREAK_label257;
}
{
var258 = ((val*(*)(val* self))((((long)var_255&3)?class_info[((long)var_255&3)]:var_255->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_255); /* item on <var_255:IndexedIterator[MClass]>*/
}
var_other259 = var258;
{
{ /* Inline model$MClass$intro_mmodule (var_other259) on <var_other259:MClass> */
var263 = var_other259->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other259:MClass> */
if (unlikely(var263 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
{ /* Inline mmodule$MModule$mgroup (var261) on <var261:MModule> */
var266 = var261->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var261:MModule> */
var264 = var266;
RET_LABEL265:(void)0;
}
}
if (var264 == NULL) {
var267 = 0; /* is null */
} else {
var267 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var264,((val*)NULL)) on <var264:nullable MGroup> */
var_other = ((val*)NULL);
{
var270 = ((short int(*)(val* self, val* p0))(var264->class->vft[COLOR_core__kernel__Object___61d_61d]))(var264, var_other); /* == on <var264:nullable MGroup(MGroup)>*/
}
var271 = !var270;
var268 = var271;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
var267 = var268;
}
var_272 = var267;
if (var267){
{
{ /* Inline model$MClass$intro_mmodule (var_other259) on <var_other259:MClass> */
var275 = var_other259->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other259:MClass> */
if (unlikely(var275 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var273 = var275;
RET_LABEL274:(void)0;
}
}
{
{ /* Inline mmodule$MModule$mgroup (var273) on <var273:MModule> */
var278 = var273->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var273:MModule> */
var276 = var278;
RET_LABEL277:(void)0;
}
}
if (var276 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 111);
fatal_exit(1);
} else {
{ /* Inline mpackage$MGroup$mpackage (var276) on <var276:nullable MGroup> */
if (unlikely(var276 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var281 = var276->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var276:nullable MGroup> */
if (unlikely(var281 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var279 = var281;
RET_LABEL280:(void)0;
}
}
{
{ /* Inline mmodule$MModule$mgroup (var_mmodule) on <var_mmodule:MModule> */
var284 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var282 = var284;
RET_LABEL283:(void)0;
}
}
if (var282 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 111);
fatal_exit(1);
} else {
{ /* Inline mpackage$MGroup$mpackage (var282) on <var282:nullable MGroup> */
if (unlikely(var282 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var287 = var282->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var282:nullable MGroup> */
if (unlikely(var287 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var285 = var287;
RET_LABEL286:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var279,var285) on <var279:MPackage> */
var_other33 = var285;
{
{ /* Inline kernel$Object$is_same_instance (var279,var_other33) on <var279:MPackage> */
var292 = var279 == var_other33;
var290 = var292;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
}
var288 = var290;
goto RET_LABEL289;
RET_LABEL289:(void)0;
}
}
var260 = var288;
} else {
var260 = var_272;
}
if (var260){
{
var293 = nitc___nitc__MClass___try_intro(var_other259);
}
if (var293 == NULL) {
var294 = 1; /* is null */
} else {
var294 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var293,((val*)NULL)) on <var293:nullable MClassDef> */
var_other33 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var293,var_other33) on <var293:nullable MClassDef(MClassDef)> */
var299 = var293 == var_other33;
var297 = var299;
goto RET_LABEL298;
RET_LABEL298:(void)0;
}
}
var295 = var297;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
var294 = var295;
}
if (var294){
goto BREAK_label300;
} else {
}
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = "full-name-conflict";
var305 = (val*)(18l<<2|1);
var306 = (val*)(18l<<2|1);
var307 = (val*)((long)(0)<<2|3);
var308 = (val*)((long)(0)<<2|3);
var304 = core__flat___CString___to_s_unsafe(var303, var305, var306, var307, var308);
var302 = var304;
varonce301 = var302;
}
if (unlikely(varonce309==NULL)) {
var310 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce311!=NULL)) {
var312 = varonce311;
} else {
var313 = "Error: a class named `";
var315 = (val*)(22l<<2|1);
var316 = (val*)(22l<<2|1);
var317 = (val*)((long)(0)<<2|3);
var318 = (val*)((long)(0)<<2|3);
var314 = core__flat___CString___to_s_unsafe(var313, var315, var316, var317, var318);
var312 = var314;
varonce311 = var312;
}
((struct instance_core__NativeArray*)var310)->values[0]=var312;
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = "` is already defined in module `";
var323 = (val*)(32l<<2|1);
var324 = (val*)(32l<<2|1);
var325 = (val*)((long)(0)<<2|3);
var326 = (val*)((long)(0)<<2|3);
var322 = core__flat___CString___to_s_unsafe(var321, var323, var324, var325, var326);
var320 = var322;
varonce319 = var320;
}
((struct instance_core__NativeArray*)var310)->values[2]=var320;
if (likely(varonce327!=NULL)) {
var328 = varonce327;
} else {
var329 = "` at ";
var331 = (val*)(5l<<2|1);
var332 = (val*)(5l<<2|1);
var333 = (val*)((long)(0)<<2|3);
var334 = (val*)((long)(0)<<2|3);
var330 = core__flat___CString___to_s_unsafe(var329, var331, var332, var333, var334);
var328 = var330;
varonce327 = var328;
}
((struct instance_core__NativeArray*)var310)->values[4]=var328;
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = ".";
var339 = (val*)(1l<<2|1);
var340 = (val*)(1l<<2|1);
var341 = (val*)((long)(0)<<2|3);
var342 = (val*)((long)(0)<<2|3);
var338 = core__flat___CString___to_s_unsafe(var337, var339, var340, var341, var342);
var336 = var338;
varonce335 = var336;
}
((struct instance_core__NativeArray*)var310)->values[6]=var336;
} else {
var310 = varonce309;
varonce309 = NULL;
}
{
var343 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_other259);
}
((struct instance_core__NativeArray*)var310)->values[1]=var343;
{
{ /* Inline model$MClass$intro_mmodule (var_other259) on <var_other259:MClass> */
var346 = var_other259->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_other259:MClass> */
if (unlikely(var346 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var344 = var346;
RET_LABEL345:(void)0;
}
}
{
var347 = ((val*(*)(val* self))(var344->class->vft[COLOR_core__abstract_text__Object__to_s]))(var344); /* to_s on <var344:MModule>*/
}
((struct instance_core__NativeArray*)var310)->values[3]=var347;
{
{ /* Inline model$MClass$intro (var_other259) on <var_other259:MClass> */
var350 = var_other259->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_other259:MClass> */
if (unlikely(var350 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var348 = var350;
RET_LABEL349:(void)0;
}
}
{
{ /* Inline model$MClassDef$location (var348) on <var348:MClassDef> */
var353 = var348->attrs[COLOR_nitc__model__MClassDef___location].val; /* _location on <var348:MClassDef> */
if (unlikely(var353 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 606);
fatal_exit(1);
}
var351 = var353;
RET_LABEL352:(void)0;
}
}
{
var354 = ((val*(*)(val* self))(var351->class->vft[COLOR_core__abstract_text__Object__to_s]))(var351); /* to_s on <var351:Location>*/
}
((struct instance_core__NativeArray*)var310)->values[5]=var354;
{
var355 = ((val*(*)(val* self))(var310->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var310); /* native_to_s on <var310:NativeArray[String]>*/
}
varonce309 = var310;
{
nitc___nitc__ModelBuilder___warning(self, var_nclassdef, var302, var355); /* Direct call modelbuilder_base$ModelBuilder$warning on <self:ModelBuilder>*/
}
goto BREAK_label257;
} else {
}
BREAK_label300: (void)0;
{
((void(*)(val* self))((((long)var_255&3)?class_info[((long)var_255&3)]:var_255->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_255); /* next on <var_255:IndexedIterator[MClass]>*/
}
}
BREAK_label257: (void)0;
{
((void(*)(val* self))((((long)var_255&3)?class_info[((long)var_255&3)]:var_255->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_255); /* finish on <var_255:IndexedIterator[MClass]>*/
}
} else {
}
} else {
}
var356 = NEW_nitc__MClass(&type_nitc__MClass);
{
{ /* Inline parser_nodes$ANode$location (var_nclassdef) on <var_nclassdef:AClassdef> */
var359 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var359 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var357 = var359;
RET_LABEL358:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var356->class->vft[COLOR_nitc__model__MClass__intro_mmodule_61d]))(var356, var_mmodule); /* intro_mmodule= on <var356:MClass>*/
}
{
((void(*)(val* self, val* p0))(var356->class->vft[COLOR_nitc__model__MClass__name_61d]))(var356, var_name); /* name= on <var356:MClass>*/
}
{
((void(*)(val* self, val* p0))(var356->class->vft[COLOR_nitc__model__MClass__location_61d]))(var356, var357); /* location= on <var356:MClass>*/
}
{
((void(*)(val* self, val* p0))(var356->class->vft[COLOR_nitc__model__MClass__setup_parameter_names]))(var356, var_names); /* setup_parameter_names on <var356:MClass>*/
}
{
((void(*)(val* self, val* p0))(var356->class->vft[COLOR_nitc__model__MClass__kind_61d]))(var356, var_mkind); /* kind= on <var356:MClass>*/
}
{
((void(*)(val* self, val* p0))(var356->class->vft[COLOR_nitc__model__MClass__visibility_61d]))(var356, var_mvisibility); /* visibility= on <var356:MClass>*/
}
{
((void(*)(val* self))(var356->class->vft[COLOR_core__kernel__Object__init]))(var356); /* init on <var356:MClass>*/
}
var_mclass = var356;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype362 = type_nitc__AStdClassdef.color;
idtype363 = type_nitc__AStdClassdef.id;
if(cltype362 >= var_nclassdef->type->table_size) {
var361 = 0;
} else {
var361 = var_nclassdef->type->type_table[cltype362] == idtype363;
}
var_364 = var361;
if (var361){
{
{ /* Inline modelize_class$AModule$mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var367 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var367 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 463);
fatal_exit(1);
}
var365 = var367;
RET_LABEL366:(void)0;
}
}
{
var368 = ((short int(*)(val* self, val* p0))((((long)var365&3)?class_info[((long)var365&3)]:var365->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var365, var_mclass); /* has_key on <var365:Map[MClass, AClassdef]>*/
}
var360 = var368;
} else {
var360 = var_364;
}
if (var360){
if (unlikely(varonce369==NULL)) {
var370 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce371!=NULL)) {
var372 = varonce371;
} else {
var373 = "Error: a class `";
var375 = (val*)(16l<<2|1);
var376 = (val*)(16l<<2|1);
var377 = (val*)((long)(0)<<2|3);
var378 = (val*)((long)(0)<<2|3);
var374 = core__flat___CString___to_s_unsafe(var373, var375, var376, var377, var378);
var372 = var374;
varonce371 = var372;
}
((struct instance_core__NativeArray*)var370)->values[0]=var372;
if (likely(varonce379!=NULL)) {
var380 = varonce379;
} else {
var381 = "` is already defined at line ";
var383 = (val*)(29l<<2|1);
var384 = (val*)(29l<<2|1);
var385 = (val*)((long)(0)<<2|3);
var386 = (val*)((long)(0)<<2|3);
var382 = core__flat___CString___to_s_unsafe(var381, var383, var384, var385, var386);
var380 = var382;
varonce379 = var380;
}
((struct instance_core__NativeArray*)var370)->values[2]=var380;
if (likely(varonce387!=NULL)) {
var388 = varonce387;
} else {
var389 = ".";
var391 = (val*)(1l<<2|1);
var392 = (val*)(1l<<2|1);
var393 = (val*)((long)(0)<<2|3);
var394 = (val*)((long)(0)<<2|3);
var390 = core__flat___CString___to_s_unsafe(var389, var391, var392, var393, var394);
var388 = var390;
varonce387 = var388;
}
((struct instance_core__NativeArray*)var370)->values[4]=var388;
} else {
var370 = varonce369;
varonce369 = NULL;
}
((struct instance_core__NativeArray*)var370)->values[1]=var_name;
{
{ /* Inline modelize_class$AModule$mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var397 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var397 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 463);
fatal_exit(1);
}
var395 = var397;
RET_LABEL396:(void)0;
}
}
{
var398 = ((val*(*)(val* self, val* p0))((((long)var395&3)?class_info[((long)var395&3)]:var395->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var395, var_mclass); /* [] on <var395:Map[MClass, AClassdef]>*/
}
{
{ /* Inline parser_nodes$ANode$location (var398) on <var398:nullable Object(AClassdef)> */
var401 = var398->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var398:nullable Object(AClassdef)> */
if (unlikely(var401 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var399 = var401;
RET_LABEL400:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var399) on <var399:Location> */
var404 = var399->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var399:Location> */
var402 = var404;
RET_LABEL403:(void)0;
}
}
var405 = core__flat___Int___core__abstract_text__Object__to_s(var402);
((struct instance_core__NativeArray*)var370)->values[3]=var405;
{
var406 = ((val*(*)(val* self))(var370->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var370); /* native_to_s on <var370:NativeArray[String]>*/
}
varonce369 = var370;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var406); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base$MEntity$is_broken= (var_mclass,1) on <var_mclass:nullable Object(MClass)> */
var_mclass->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mclass:nullable Object(MClass)> */
RET_LABEL407:(void)0;
}
}
goto RET_LABEL;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype410 = type_nitc__AStdClassdef.color;
idtype411 = type_nitc__AStdClassdef.id;
if(cltype410 >= var_nclassdef->type->table_size) {
var409 = 0;
} else {
var409 = var_nclassdef->type->type_table[cltype410] == idtype411;
}
var_412 = var409;
if (var409){
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var415 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var413 = var415;
RET_LABEL414:(void)0;
}
}
if (var413 == NULL) {
var416 = 1; /* is null */
} else {
var416 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var413,((val*)NULL)) on <var413:nullable TKwredef> */
var_other33 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var413,var_other33) on <var413:nullable TKwredef(TKwredef)> */
var421 = var413 == var_other33;
var419 = var421;
goto RET_LABEL420;
RET_LABEL420:(void)0;
}
}
var417 = var419;
goto RET_LABEL418;
RET_LABEL418:(void)0;
}
var416 = var417;
}
var408 = var416;
} else {
var408 = var_412;
}
if (var408){
if (unlikely(varonce422==NULL)) {
var423 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce424!=NULL)) {
var425 = varonce424;
} else {
var426 = "Redef Error: `";
var428 = (val*)(14l<<2|1);
var429 = (val*)(14l<<2|1);
var430 = (val*)((long)(0)<<2|3);
var431 = (val*)((long)(0)<<2|3);
var427 = core__flat___CString___to_s_unsafe(var426, var428, var429, var430, var431);
var425 = var427;
varonce424 = var425;
}
((struct instance_core__NativeArray*)var423)->values[0]=var425;
if (likely(varonce432!=NULL)) {
var433 = varonce432;
} else {
var434 = "` is an imported class. Add the `redef` keyword to refine it.";
var436 = (val*)(61l<<2|1);
var437 = (val*)(61l<<2|1);
var438 = (val*)((long)(0)<<2|3);
var439 = (val*)((long)(0)<<2|3);
var435 = core__flat___CString___to_s_unsafe(var434, var436, var437, var438, var439);
var433 = var435;
varonce432 = var433;
}
((struct instance_core__NativeArray*)var423)->values[2]=var433;
} else {
var423 = varonce422;
varonce422 = NULL;
}
((struct instance_core__NativeArray*)var423)->values[1]=var_name;
{
var440 = ((val*(*)(val* self))(var423->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var423); /* native_to_s on <var423:NativeArray[String]>*/
}
varonce422 = var423;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var440); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base$MEntity$is_broken= (var_mclass,1) on <var_mclass:nullable Object(MClass)> */
var_mclass->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mclass:nullable Object(MClass)> */
RET_LABEL441:(void)0;
}
}
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$!= (var_arity,0l) on <var_arity:Int> */
var445 = var_arity == 0l;
var446 = !var445;
var443 = var446;
goto RET_LABEL444;
RET_LABEL444:(void)0;
}
}
var_447 = var443;
if (var443){
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:nullable Object(MClass)> */
var450 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable Object(MClass)> */
var448 = var450;
RET_LABEL449:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var448,var_arity) on <var448:Int> */
var453 = var448 == var_arity;
var454 = !var453;
var451 = var454;
goto RET_LABEL452;
RET_LABEL452:(void)0;
}
}
var442 = var451;
} else {
var442 = var_447;
}
if (var442){
if (unlikely(varonce455==NULL)) {
var456 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce457!=NULL)) {
var458 = varonce457;
} else {
var459 = "Redef Error: expected ";
var461 = (val*)(22l<<2|1);
var462 = (val*)(22l<<2|1);
var463 = (val*)((long)(0)<<2|3);
var464 = (val*)((long)(0)<<2|3);
var460 = core__flat___CString___to_s_unsafe(var459, var461, var462, var463, var464);
var458 = var460;
varonce457 = var458;
}
((struct instance_core__NativeArray*)var456)->values[0]=var458;
if (likely(varonce465!=NULL)) {
var466 = varonce465;
} else {
var467 = " formal parameter(s) for ";
var469 = (val*)(25l<<2|1);
var470 = (val*)(25l<<2|1);
var471 = (val*)((long)(0)<<2|3);
var472 = (val*)((long)(0)<<2|3);
var468 = core__flat___CString___to_s_unsafe(var467, var469, var470, var471, var472);
var466 = var468;
varonce465 = var466;
}
((struct instance_core__NativeArray*)var456)->values[2]=var466;
if (likely(varonce473!=NULL)) {
var474 = varonce473;
} else {
var475 = "; got ";
var477 = (val*)(6l<<2|1);
var478 = (val*)(6l<<2|1);
var479 = (val*)((long)(0)<<2|3);
var480 = (val*)((long)(0)<<2|3);
var476 = core__flat___CString___to_s_unsafe(var475, var477, var478, var479, var480);
var474 = var476;
varonce473 = var474;
}
((struct instance_core__NativeArray*)var456)->values[4]=var474;
if (likely(varonce481!=NULL)) {
var482 = varonce481;
} else {
var483 = ".";
var485 = (val*)(1l<<2|1);
var486 = (val*)(1l<<2|1);
var487 = (val*)((long)(0)<<2|3);
var488 = (val*)((long)(0)<<2|3);
var484 = core__flat___CString___to_s_unsafe(var483, var485, var486, var487, var488);
var482 = var484;
varonce481 = var482;
}
((struct instance_core__NativeArray*)var456)->values[6]=var482;
} else {
var456 = varonce455;
varonce455 = NULL;
}
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:nullable Object(MClass)> */
var491 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable Object(MClass)> */
var489 = var491;
RET_LABEL490:(void)0;
}
}
var492 = core__flat___Int___core__abstract_text__Object__to_s(var489);
((struct instance_core__NativeArray*)var456)->values[1]=var492;
{
var493 = nitc___nitc__MClass___signature_to_s(var_mclass);
}
((struct instance_core__NativeArray*)var456)->values[3]=var493;
var494 = core__flat___Int___core__abstract_text__Object__to_s(var_arity);
((struct instance_core__NativeArray*)var456)->values[5]=var494;
{
var495 = ((val*(*)(val* self))(var456->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var456); /* native_to_s on <var456:NativeArray[String]>*/
}
varonce455 = var456;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var495); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base$MEntity$is_broken= (var_mclass,1) on <var_mclass:nullable Object(MClass)> */
var_mclass->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mclass:nullable Object(MClass)> */
RET_LABEL496:(void)0;
}
}
goto RET_LABEL;
} else {
if (var_nkind == NULL) {
var499 = 0; /* is null */
} else {
var499 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nkind,((val*)NULL)) on <var_nkind:nullable AClasskind> */
var_other = ((val*)NULL);
{
var502 = ((short int(*)(val* self, val* p0))(var_nkind->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nkind, var_other); /* == on <var_nkind:nullable AClasskind(AClasskind)>*/
}
var503 = !var502;
var500 = var503;
goto RET_LABEL501;
RET_LABEL501:(void)0;
}
var499 = var500;
}
var_504 = var499;
if (var499){
var505 = glob_sys;
{
var506 = nitc__model___core__Sys___concrete_kind(var505);
}
{
{ /* Inline kernel$Object$!= (var_mkind,var506) on <var_mkind:MClassKind> */
var_other = var506;
{
var509 = ((short int(*)(val* self, val* p0))(var_mkind->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mkind, var_other); /* == on <var_mkind:MClassKind>*/
}
var510 = !var509;
var507 = var510;
goto RET_LABEL508;
RET_LABEL508:(void)0;
}
}
var498 = var507;
} else {
var498 = var_504;
}
var_511 = var498;
if (var498){
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:nullable Object(MClass)> */
var514 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable Object(MClass)> */
if (unlikely(var514 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var512 = var514;
RET_LABEL513:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var512,var_mkind) on <var512:MClassKind> */
var_other = var_mkind;
{
var517 = ((short int(*)(val* self, val* p0))(var512->class->vft[COLOR_core__kernel__Object___61d_61d]))(var512, var_other); /* == on <var512:MClassKind>*/
}
var518 = !var517;
var515 = var518;
goto RET_LABEL516;
RET_LABEL516:(void)0;
}
}
var497 = var515;
} else {
var497 = var_511;
}
if (var497){
if (unlikely(varonce519==NULL)) {
var520 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce521!=NULL)) {
var522 = varonce521;
} else {
var523 = "Redef Error: refinement changed the kind from `";
var525 = (val*)(47l<<2|1);
var526 = (val*)(47l<<2|1);
var527 = (val*)((long)(0)<<2|3);
var528 = (val*)((long)(0)<<2|3);
var524 = core__flat___CString___to_s_unsafe(var523, var525, var526, var527, var528);
var522 = var524;
varonce521 = var522;
}
((struct instance_core__NativeArray*)var520)->values[0]=var522;
if (likely(varonce529!=NULL)) {
var530 = varonce529;
} else {
var531 = "` to `";
var533 = (val*)(6l<<2|1);
var534 = (val*)(6l<<2|1);
var535 = (val*)((long)(0)<<2|3);
var536 = (val*)((long)(0)<<2|3);
var532 = core__flat___CString___to_s_unsafe(var531, var533, var534, var535, var536);
var530 = var532;
varonce529 = var530;
}
((struct instance_core__NativeArray*)var520)->values[2]=var530;
if (likely(varonce537!=NULL)) {
var538 = varonce537;
} else {
var539 = "`.";
var541 = (val*)(2l<<2|1);
var542 = (val*)(2l<<2|1);
var543 = (val*)((long)(0)<<2|3);
var544 = (val*)((long)(0)<<2|3);
var540 = core__flat___CString___to_s_unsafe(var539, var541, var542, var543, var544);
var538 = var540;
varonce537 = var538;
}
((struct instance_core__NativeArray*)var520)->values[4]=var538;
} else {
var520 = varonce519;
varonce519 = NULL;
}
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:nullable Object(MClass)> */
var547 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable Object(MClass)> */
if (unlikely(var547 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var545 = var547;
RET_LABEL546:(void)0;
}
}
{
var548 = ((val*(*)(val* self))(var545->class->vft[COLOR_core__abstract_text__Object__to_s]))(var545); /* to_s on <var545:MClassKind>*/
}
((struct instance_core__NativeArray*)var520)->values[1]=var548;
{
var549 = ((val*(*)(val* self))(var_mkind->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mkind); /* to_s on <var_mkind:MClassKind>*/
}
((struct instance_core__NativeArray*)var520)->values[3]=var549;
{
var550 = ((val*(*)(val* self))(var520->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var520); /* native_to_s on <var520:NativeArray[String]>*/
}
varonce519 = var520;
{
nitc___nitc__ModelBuilder___error(self, var_nkind, var550); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
if (var_nvisibility == NULL) {
var553 = 0; /* is null */
} else {
var553 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var556 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var557 = !var556;
var554 = var557;
goto RET_LABEL555;
RET_LABEL555:(void)0;
}
var553 = var554;
}
var_558 = var553;
if (var553){
var559 = glob_sys;
{
var560 = nitc__model_base___core__Sys___public_visibility(var559);
}
{
{ /* Inline kernel$Object$!= (var_mvisibility,var560) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other = var560;
{
var563 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mvisibility, var_other); /* == on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
var564 = !var563;
var561 = var564;
goto RET_LABEL562;
RET_LABEL562:(void)0;
}
}
var552 = var561;
} else {
var552 = var_558;
}
var_565 = var552;
if (var552){
{
{ /* Inline model$MClass$visibility (var_mclass) on <var_mclass:nullable Object(MClass)> */
var568 = var_mclass->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable Object(MClass)> */
if (unlikely(var568 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var566 = var568;
RET_LABEL567:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var566,var_mvisibility) on <var566:MVisibility> */
var_other = var_mvisibility;
{
var571 = ((short int(*)(val* self, val* p0))(var566->class->vft[COLOR_core__kernel__Object___61d_61d]))(var566, var_other); /* == on <var566:MVisibility>*/
}
var572 = !var571;
var569 = var572;
goto RET_LABEL570;
RET_LABEL570:(void)0;
}
}
var551 = var569;
} else {
var551 = var_565;
}
if (var551){
if (unlikely(varonce573==NULL)) {
var574 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce575!=NULL)) {
var576 = varonce575;
} else {
var577 = "Redef Error: refinement changed the visibility from `";
var579 = (val*)(53l<<2|1);
var580 = (val*)(53l<<2|1);
var581 = (val*)((long)(0)<<2|3);
var582 = (val*)((long)(0)<<2|3);
var578 = core__flat___CString___to_s_unsafe(var577, var579, var580, var581, var582);
var576 = var578;
varonce575 = var576;
}
((struct instance_core__NativeArray*)var574)->values[0]=var576;
if (likely(varonce583!=NULL)) {
var584 = varonce583;
} else {
var585 = "` to `";
var587 = (val*)(6l<<2|1);
var588 = (val*)(6l<<2|1);
var589 = (val*)((long)(0)<<2|3);
var590 = (val*)((long)(0)<<2|3);
var586 = core__flat___CString___to_s_unsafe(var585, var587, var588, var589, var590);
var584 = var586;
varonce583 = var584;
}
((struct instance_core__NativeArray*)var574)->values[2]=var584;
if (likely(varonce591!=NULL)) {
var592 = varonce591;
} else {
var593 = "`";
var595 = (val*)(1l<<2|1);
var596 = (val*)(1l<<2|1);
var597 = (val*)((long)(0)<<2|3);
var598 = (val*)((long)(0)<<2|3);
var594 = core__flat___CString___to_s_unsafe(var593, var595, var596, var597, var598);
var592 = var594;
varonce591 = var592;
}
((struct instance_core__NativeArray*)var574)->values[4]=var592;
} else {
var574 = varonce573;
varonce573 = NULL;
}
{
{ /* Inline model$MClass$visibility (var_mclass) on <var_mclass:nullable Object(MClass)> */
var601 = var_mclass->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable Object(MClass)> */
if (unlikely(var601 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var599 = var601;
RET_LABEL600:(void)0;
}
}
{
var602 = ((val*(*)(val* self))(var599->class->vft[COLOR_core__abstract_text__Object__to_s]))(var599); /* to_s on <var599:MVisibility>*/
}
((struct instance_core__NativeArray*)var574)->values[1]=var602;
{
var603 = ((val*(*)(val* self))(var_mvisibility->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mvisibility); /* to_s on <var_mvisibility:nullable MVisibility(MVisibility)>*/
}
((struct instance_core__NativeArray*)var574)->values[3]=var603;
{
var604 = ((val*(*)(val* self))(var574->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var574); /* native_to_s on <var574:NativeArray[String]>*/
}
varonce573 = var574;
{
nitc___nitc__ModelBuilder___error(self, var_nvisibility, var604); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
}
}
}
}
}
{
{ /* Inline modelize_class$AClassdef$mclass= (var_nclassdef,var_mclass) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val = var_mclass; /* _mclass on <var_nclassdef:AClassdef> */
RET_LABEL605:(void)0;
}
}
{
{ /* Inline modelize_class$AModule$mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var608 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var608 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 463);
fatal_exit(1);
}
var606 = var608;
RET_LABEL607:(void)0;
}
}
{
var609 = ((short int(*)(val* self, val* p0))((((long)var606&3)?class_info[((long)var606&3)]:var606->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var606, var_mclass); /* has_key on <var606:Map[MClass, AClassdef]>*/
}
var610 = !var609;
if (var610){
{
{ /* Inline modelize_class$AModule$mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var613 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var613 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 463);
fatal_exit(1);
}
var611 = var613;
RET_LABEL612:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var611&3)?class_info[((long)var611&3)]:var611->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var611, var_mclass, var_nclassdef); /* []= on <var611:Map[MClass, AClassdef]>*/
}
var614 = NEW_core__Array(&type_core__Array__nitc__AClassdef);
{
core___core__Array___with_capacity(var614, 1l); /* Direct call array$Array$with_capacity on <var614:Array[AClassdef]>*/
}
var_615 = var614;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_615, var_nclassdef); /* Direct call array$AbstractArray$push on <var_615:Array[AClassdef]>*/
}
{
{ /* Inline modelize_class$AClassdef$all_defs= (var_nclassdef,var_615) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val = var_615; /* _all_defs on <var_nclassdef:AClassdef> */
RET_LABEL616:(void)0;
}
}
} else {
{
{ /* Inline modelize_class$AModule$mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var619 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var619 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 463);
fatal_exit(1);
}
var617 = var619;
RET_LABEL618:(void)0;
}
}
{
var620 = ((val*(*)(val* self, val* p0))((((long)var617&3)?class_info[((long)var617&3)]:var617->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var617, var_mclass); /* [] on <var617:Map[MClass, AClassdef]>*/
}
{
{ /* Inline modelize_class$AClassdef$all_defs (var620) on <var620:nullable Object(AClassdef)> */
var623 = var620->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var620:nullable Object(AClassdef)> */
var621 = var623;
RET_LABEL622:(void)0;
}
}
if (var621 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 144);
fatal_exit(1);
} else {
core___core__Array___core__abstract_collection__SimpleCollection__add(var621, var_nclassdef); /* Direct call array$Array$add on <var621:nullable Array[AClassdef]>*/
}
}
RET_LABEL:;
}
/* method modelize_class$ModelBuilder$build_a_mclassdef for (self: ModelBuilder, AModule, AClassdef) */
void nitc__modelize_class___ModelBuilder___build_a_mclassdef(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var11 /* : nullable MClass */;
val* var13 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : Map[MClass, AClassdef] */;
val* var22 /* : Map[MClass, AClassdef] */;
val* var23 /* : nullable Object */;
val* var_other_nclassdef /* var other_nclassdef: AClassdef */;
short int var24 /* : Bool */;
val* var_other26 /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype;
int idtype;
short int var30 /* : Bool */;
val* var31 /* : nullable MClassDef */;
val* var33 /* : nullable MClassDef */;
val* var35 /* : Array[MType] */;
val* var_bounds /* var bounds: Array[MType] */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
short int var_ /* var : Bool */;
long var40 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name;
short int var48 /* : Bool */;
long var_i /* var i: Int */;
long var49 /* : Int */;
long var51 /* : Int */;
long var_52 /* var : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
short int var59 /* : Bool */;
val* var60 /* : ANodes[AFormaldef] */;
val* var62 /* : ANodes[AFormaldef] */;
short int var63 /* : Bool */;
val* var64 /* : MClassDef */;
val* var66 /* : MClassDef */;
val* var67 /* : MClassType */;
val* var69 /* : MClassType */;
val* var70 /* : Array[MType] */;
val* var71 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var73 /* : ANodes[AFormaldef] */;
val* var75 /* : ANodes[AFormaldef] */;
val* var76 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var77 /* : Array[MParameterType] */;
val* var79 /* : Array[MParameterType] */;
val* var80 /* : nullable Object */;
val* var81 /* : String */;
val* var83 /* : String */;
val* var_pname /* var pname: String */;
val* var84 /* : TClassid */;
val* var86 /* : TClassid */;
val* var87 /* : String */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
val* var92 /* : TClassid */;
val* var94 /* : TClassid */;
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
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Bool */;
val* var136 /* : nullable Bool */;
val* var137 /* : String */;
val* var138 /* : TClassid */;
val* var140 /* : TClassid */;
val* var141 /* : String */;
val* var142 /* : MClassDef */;
val* var144 /* : MClassDef */;
val* var145 /* : MModule */;
val* var147 /* : MModule */;
val* var148 /* : String */;
val* var149 /* : String */;
val* var150 /* : nullable AType */;
val* var152 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
val* var158 /* : nullable MType */;
val* var_bound159 /* var bound: nullable MType */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
val* var168 /* : NativeArray[String] */;
static val* varonce167;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : CString */;
val* var172 /* : String */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Int */;
val* var175 /* : nullable Bool */;
val* var176 /* : nullable Bool */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Bool */;
val* var184 /* : nullable Bool */;
val* var185 /* : String */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
short int var_191 /* var : Bool */;
val* var192 /* : MClass */;
val* var194 /* : MClass */;
val* var195 /* : MClassKind */;
val* var197 /* : MClassKind */;
val* var198 /* : Sys */;
val* var199 /* : MClassKind */;
short int var200 /* : Bool */;
short int var202 /* : Bool */;
short int var204 /* : Bool */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Bool */;
val* var212 /* : nullable Bool */;
val* var214 /* : NativeArray[String] */;
static val* varonce213;
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
val* var231 /* : String */;
val* var232 /* : String */;
val* var233 /* : Array[MClassDef] */;
val* var235 /* : Array[MClassDef] */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
val* var244 /* : NativeArray[String] */;
static val* varonce243;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : CString */;
val* var248 /* : String */;
val* var249 /* : nullable Int */;
val* var250 /* : nullable Int */;
val* var251 /* : nullable Bool */;
val* var252 /* : nullable Bool */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : CString */;
val* var256 /* : String */;
val* var257 /* : nullable Int */;
val* var258 /* : nullable Int */;
val* var259 /* : nullable Bool */;
val* var260 /* : nullable Bool */;
val* var261 /* : String */;
val* var262 /* : MClassType */;
val* var264 /* : MClassType */;
val* var265 /* : MType */;
val* var_bound266 /* var bound: MType */;
val* var268 /* : MClassDef */;
val* var270 /* : MClassDef */;
val* var271 /* : MClassType */;
val* var273 /* : MClassType */;
val* var274 /* : Array[MType] */;
val* var275 /* : nullable Object */;
val* var_bound276 /* var bound: MType */;
long var278 /* : Int */;
val* var279 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var280 /* : MClassDef */;
val* var281 /* : Location */;
val* var283 /* : Location */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var285 /* : HashMap[MClassDef, AClassdef] */;
val* var287 /* : HashMap[MClassDef, AClassdef] */;
short int var288 /* : Bool */;
int cltype289;
int idtype290;
val* var291 /* : nullable ADoc */;
val* var293 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
val* var299 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
short int var_304 /* var : Bool */;
val* var305 /* : MVisibility */;
val* var307 /* : MVisibility */;
val* var308 /* : Sys */;
val* var309 /* : MVisibility */;
short int var310 /* : Bool */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : CString */;
val* var314 /* : String */;
val* var315 /* : nullable Int */;
val* var316 /* : nullable Int */;
val* var317 /* : nullable Bool */;
val* var318 /* : nullable Bool */;
val* var320 /* : NativeArray[String] */;
static val* varonce319;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : CString */;
val* var324 /* : String */;
val* var325 /* : nullable Int */;
val* var326 /* : nullable Int */;
val* var327 /* : nullable Bool */;
val* var328 /* : nullable Bool */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : CString */;
val* var332 /* : String */;
val* var333 /* : nullable Int */;
val* var334 /* : nullable Int */;
val* var335 /* : nullable Bool */;
val* var336 /* : nullable Bool */;
val* var337 /* : String */;
val* var338 /* : String */;
short int var339 /* : Bool */;
val* var340 /* : ToolContext */;
val* var342 /* : ToolContext */;
val* var344 /* : NativeArray[String] */;
static val* varonce343;
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
val* var361 /* : String */;
val* var362 /* : MClassKind */;
val* var364 /* : MClassKind */;
val* var365 /* : String */;
val* var366 /* : String */;
val* var367 /* : String */;
val* var368 /* : ToolContext */;
val* var370 /* : ToolContext */;
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
val* var389 /* : String */;
val* var390 /* : MClassKind */;
val* var392 /* : MClassKind */;
val* var393 /* : String */;
val* var394 /* : String */;
val* var395 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader$AModule$mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 151);
fatal_exit(1);
}
var_mmodule = var;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Object";
var6 = (val*)(6l<<2|1);
var7 = (val*)(6l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var3);
}
var_objectclass = var10;
{
{ /* Inline modelize_class$AClassdef$mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var13 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_mclass = var11;
if (var_mclass == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var19 = var_mclass == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class$AModule$mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var22 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 463);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = ((val*(*)(val* self, val* p0))((((long)var20&3)?class_info[((long)var20&3)]:var20->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var20, var_mclass); /* [] on <var20:Map[MClass, AClassdef]>*/
}
var_other_nclassdef = var23;
{
{ /* Inline kernel$Object$!= (var_other_nclassdef,var_nclassdef) on <var_other_nclassdef:AClassdef> */
var_other26 = var_nclassdef;
{
var27 = ((short int(*)(val* self, val* p0))(var_other_nclassdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_other_nclassdef, var_other26); /* == on <var_other_nclassdef:AClassdef>*/
}
var28 = !var27;
var24 = var28;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var29 = 0;
} else {
var29 = var_nclassdef->type->type_table[cltype] == idtype;
}
var30 = !var29;
if (unlikely(!var30)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 159);
fatal_exit(1);
}
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_other_nclassdef) on <var_other_nclassdef:AClassdef> */
var33 = var_other_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_other_nclassdef:AClassdef> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline modelize_class$AClassdef$mclassdef= (var_nclassdef,var31) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val = var31; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL34:(void)0;
}
}
goto RET_LABEL;
} else {
}
var35 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var35); /* Direct call array$Array$init on <var35:Array[MType]>*/
}
var_bounds = var35;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype38 = type_nitc__AStdClassdef.color;
idtype39 = type_nitc__AStdClassdef.id;
if(cltype38 >= var_nclassdef->type->table_size) {
var37 = 0;
} else {
var37 = var_nclassdef->type->type_table[cltype38] == idtype39;
}
var_ = var37;
if (var37){
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var42 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var40,0l) on <var40:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var45 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var48 = var40 > 0l;
var43 = var48;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var36 = var43;
} else {
var36 = var_;
}
if (var36){
var_i = 0l;
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var51 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_52 = var49;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_52) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_52:Int> isa OTHER */
/* <var_52:Int> isa OTHER */
var55 = 1; /* easy <var_52:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var59 = var_i < var_52;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
} else {
goto BREAK_label;
}
{
{ /* Inline parser_nodes$AStdClassdef$n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var62 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1236);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var60);
}
if (var63){
{
{ /* Inline model$MClass$intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var66 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
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
var70 = ((val*(*)(val* self))(var67->class->vft[COLOR_nitc__model__MClassType__arguments]))(var67); /* arguments on <var67:MClassType>*/
}
{
var71 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var70, var_i);
}
var_bound = var71;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_bounds, var_bound); /* Direct call array$Array$add on <var_bounds:Array[MType]>*/
}
goto BREAK_label72;
} else {
}
{
{ /* Inline parser_nodes$AStdClassdef$n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var75 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1236);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var73, var_i);
}
var_nfd = var76;
{
{ /* Inline model$MClass$mparameters (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var79 = var_mclass->attrs[COLOR_nitc__model__MClass___mparameters].val; /* _mparameters on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 418);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var77, var_i);
}
{
{ /* Inline model$MParameterType$name (var80) on <var80:nullable Object(MParameterType)> */
var83 = var80->attrs[COLOR_nitc__model__MParameterType___name].val; /* _name on <var80:nullable Object(MParameterType)> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1570);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_pname = var81;
{
{ /* Inline parser_nodes$AFormaldef$n_id (var_nfd) on <var_nfd:AFormaldef> */
var86 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var86 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1320);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = nitc__lexer_work___Token___text(var84);
}
{
{ /* Inline kernel$Object$!= (var87,var_pname) on <var87:String> */
var_other26 = var_pname;
{
var90 = ((short int(*)(val* self, val* p0))(var87->class->vft[COLOR_core__kernel__Object___61d_61d]))(var87, var_other26); /* == on <var87:String>*/
}
var91 = !var90;
var88 = var91;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline parser_nodes$AFormaldef$n_id (var_nfd) on <var_nfd:AFormaldef> */
var94 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1320);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (unlikely(varonce95==NULL)) {
var96 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "Error: formal parameter type #";
var101 = (val*)(30l<<2|1);
var102 = (val*)(30l<<2|1);
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
var107 = " `";
var109 = (val*)(2l<<2|1);
var110 = (val*)(2l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var96)->values[2]=var106;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "` must be named `";
var117 = (val*)(17l<<2|1);
var118 = (val*)(17l<<2|1);
var119 = (val*)((long)(0)<<2|3);
var120 = (val*)((long)(0)<<2|3);
var116 = core__flat___CString___to_s_unsafe(var115, var117, var118, var119, var120);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var96)->values[4]=var114;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "` as in the original definition in module `";
var125 = (val*)(43l<<2|1);
var126 = (val*)(43l<<2|1);
var127 = (val*)((long)(0)<<2|3);
var128 = (val*)((long)(0)<<2|3);
var124 = core__flat___CString___to_s_unsafe(var123, var125, var126, var127, var128);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var96)->values[6]=var122;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "`.";
var133 = (val*)(2l<<2|1);
var134 = (val*)(2l<<2|1);
var135 = (val*)((long)(0)<<2|3);
var136 = (val*)((long)(0)<<2|3);
var132 = core__flat___CString___to_s_unsafe(var131, var133, var134, var135, var136);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var96)->values[8]=var130;
} else {
var96 = varonce95;
varonce95 = NULL;
}
var137 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var96)->values[1]=var137;
{
{ /* Inline parser_nodes$AFormaldef$n_id (var_nfd) on <var_nfd:AFormaldef> */
var140 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val; /* _n_id on <var_nfd:AFormaldef> */
if (unlikely(var140 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1320);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
var141 = nitc__lexer_work___Token___text(var138);
}
((struct instance_core__NativeArray*)var96)->values[3]=var141;
((struct instance_core__NativeArray*)var96)->values[5]=var_pname;
{
{ /* Inline model$MClass$intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var144 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var144 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var142) on <var142:MClassDef> */
var147 = var142->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var142:MClassDef> */
if (unlikely(var147 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
var148 = ((val*(*)(val* self))(var145->class->vft[COLOR_core__abstract_text__Object__to_s]))(var145); /* to_s on <var145:MModule>*/
}
((struct instance_core__NativeArray*)var96)->values[7]=var148;
{
var149 = ((val*(*)(val* self))(var96->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var96); /* native_to_s on <var96:NativeArray[String]>*/
}
varonce95 = var96;
{
nitc___nitc__ModelBuilder___error(self, var92, var149); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes$AFormaldef$n_type (var_nfd) on <var_nfd:AFormaldef> */
var152 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_type].val; /* _n_type on <var_nfd:AFormaldef> */
var150 = var152;
RET_LABEL151:(void)0;
}
}
var_nfdt = var150;
if (var_nfdt == NULL) {
var153 = 0; /* is null */
} else {
var153 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nfdt,((val*)NULL)) on <var_nfdt:nullable AType> */
var_other26 = ((val*)NULL);
{
var156 = ((short int(*)(val* self, val* p0))(var_nfdt->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nfdt, var_other26); /* == on <var_nfdt:nullable AType(AType)>*/
}
var157 = !var156;
var154 = var157;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
var153 = var154;
}
if (var153){
{
var158 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, ((val*)NULL), var_nfdt, 0);
}
var_bound159 = var158;
if (var_bound159 == NULL) {
var160 = 1; /* is null */
} else {
var160 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_bound159,((val*)NULL)) on <var_bound159:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_bound159,var_other) on <var_bound159:nullable MType(MType)> */
var165 = var_bound159 == var_other;
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var160 = var161;
}
if (var160){
goto RET_LABEL;
} else {
}
{
var166 = ((short int(*)(val* self))(var_bound159->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_bound159); /* need_anchor on <var_bound159:nullable MType(MType)>*/
}
if (var166){
if (unlikely(varonce167==NULL)) {
var168 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "Error: formal parameter type `";
var173 = (val*)(30l<<2|1);
var174 = (val*)(30l<<2|1);
var175 = (val*)((long)(0)<<2|3);
var176 = (val*)((long)(0)<<2|3);
var172 = core__flat___CString___to_s_unsafe(var171, var173, var174, var175, var176);
var170 = var172;
varonce169 = var170;
}
((struct instance_core__NativeArray*)var168)->values[0]=var170;
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "` bounded with a formal parameter type.";
var181 = (val*)(39l<<2|1);
var182 = (val*)(39l<<2|1);
var183 = (val*)((long)(0)<<2|3);
var184 = (val*)((long)(0)<<2|3);
var180 = core__flat___CString___to_s_unsafe(var179, var181, var182, var183, var184);
var178 = var180;
varonce177 = var178;
}
((struct instance_core__NativeArray*)var168)->values[2]=var178;
} else {
var168 = varonce167;
varonce167 = NULL;
}
((struct instance_core__NativeArray*)var168)->values[1]=var_pname;
{
var185 = ((val*(*)(val* self))(var168->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var168); /* native_to_s on <var168:NativeArray[String]>*/
}
varonce167 = var168;
{
nitc___nitc__ModelBuilder___error(self, var_nfd, var185); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_bounds, var_bound159); /* Direct call array$Array$add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class$AFormaldef$bound= (var_nfd,var_bound159) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nitc__modelize_class__AFormaldef___bound].val = var_bound159; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL186:(void)0;
}
}
}
/* <var_bound159:nullable MType(MType)> isa MClassType */
cltype189 = type_nitc__MClassType.color;
idtype190 = type_nitc__MClassType.id;
if(cltype189 >= var_bound159->type->table_size) {
var188 = 0;
} else {
var188 = var_bound159->type->type_table[cltype189] == idtype190;
}
var_191 = var188;
if (var188){
{
{ /* Inline model$MClassType$mclass (var_bound159) on <var_bound159:nullable MType(MClassType)> */
var194 = var_bound159->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_bound159:nullable MType(MClassType)> */
if (unlikely(var194 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var192) on <var192:MClass> */
var197 = var192->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var192:MClass> */
if (unlikely(var197 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
var198 = glob_sys;
{
var199 = nitc__model___core__Sys___enum_kind(var198);
}
{
{ /* Inline kernel$Object$== (var195,var199) on <var195:MClassKind> */
var_other = var199;
{
{ /* Inline kernel$Object$is_same_instance (var195,var_other) on <var195:MClassKind> */
var204 = var195 == var_other;
var202 = var204;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
}
var200 = var202;
goto RET_LABEL201;
RET_LABEL201:(void)0;
}
}
var187 = var200;
} else {
var187 = var_191;
}
if (var187){
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "useless-bound";
var209 = (val*)(13l<<2|1);
var210 = (val*)(13l<<2|1);
var211 = (val*)((long)(0)<<2|3);
var212 = (val*)((long)(0)<<2|3);
var208 = core__flat___CString___to_s_unsafe(var207, var209, var210, var211, var212);
var206 = var208;
varonce205 = var206;
}
if (unlikely(varonce213==NULL)) {
var214 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "Warning: useless formal parameter type since `";
var219 = (val*)(46l<<2|1);
var220 = (val*)(46l<<2|1);
var221 = (val*)((long)(0)<<2|3);
var222 = (val*)((long)(0)<<2|3);
var218 = core__flat___CString___to_s_unsafe(var217, var219, var220, var221, var222);
var216 = var218;
varonce215 = var216;
}
((struct instance_core__NativeArray*)var214)->values[0]=var216;
if (likely(varonce223!=NULL)) {
var224 = varonce223;
} else {
var225 = "` cannot have subclasses.";
var227 = (val*)(25l<<2|1);
var228 = (val*)(25l<<2|1);
var229 = (val*)((long)(0)<<2|3);
var230 = (val*)((long)(0)<<2|3);
var226 = core__flat___CString___to_s_unsafe(var225, var227, var228, var229, var230);
var224 = var226;
varonce223 = var224;
}
((struct instance_core__NativeArray*)var214)->values[2]=var224;
} else {
var214 = varonce213;
varonce213 = NULL;
}
{
var231 = ((val*(*)(val* self))(var_bound159->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_bound159); /* to_s on <var_bound159:nullable MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var214)->values[1]=var231;
{
var232 = ((val*(*)(val* self))(var214->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var214); /* native_to_s on <var214:NativeArray[String]>*/
}
varonce213 = var214;
{
nitc___nitc__ModelBuilder___warning(self, var_nfdt, var206, var232); /* Direct call modelbuilder_base$ModelBuilder$warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
{ /* Inline model$MClass$mclassdefs (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var235 = var_mclass->attrs[COLOR_nitc__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var235 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 490);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
{
var236 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var233);
}
if (var236){
if (var_objectclass == NULL) {
var237 = 1; /* is null */
} else {
var237 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_objectclass,((val*)NULL)) on <var_objectclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_objectclass,var_other) on <var_objectclass:nullable MClass(MClass)> */
var242 = var_objectclass == var_other;
var240 = var242;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
}
var238 = var240;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
var237 = var238;
}
if (var237){
if (unlikely(varonce243==NULL)) {
var244 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce245!=NULL)) {
var246 = varonce245;
} else {
var247 = "Error: formal parameter type `";
var249 = (val*)(30l<<2|1);
var250 = (val*)(30l<<2|1);
var251 = (val*)((long)(0)<<2|3);
var252 = (val*)((long)(0)<<2|3);
var248 = core__flat___CString___to_s_unsafe(var247, var249, var250, var251, var252);
var246 = var248;
varonce245 = var246;
}
((struct instance_core__NativeArray*)var244)->values[0]=var246;
if (likely(varonce253!=NULL)) {
var254 = varonce253;
} else {
var255 = "` unbounded but no `Object` class exists.";
var257 = (val*)(41l<<2|1);
var258 = (val*)(41l<<2|1);
var259 = (val*)((long)(0)<<2|3);
var260 = (val*)((long)(0)<<2|3);
var256 = core__flat___CString___to_s_unsafe(var255, var257, var258, var259, var260);
var254 = var256;
varonce253 = var254;
}
((struct instance_core__NativeArray*)var244)->values[2]=var254;
} else {
var244 = varonce243;
varonce243 = NULL;
}
((struct instance_core__NativeArray*)var244)->values[1]=var_pname;
{
var261 = ((val*(*)(val* self))(var244->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var244); /* native_to_s on <var244:NativeArray[String]>*/
}
varonce243 = var244;
{
nitc___nitc__ModelBuilder___error(self, var_nfd, var261); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$mclass_type (var_objectclass) on <var_objectclass:nullable MClass(MClass)> */
var264 = var_objectclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass(MClass)> */
if (unlikely(var264 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
var265 = nitc___nitc__MType___as_nullable(var262);
}
var_bound266 = var265;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_bounds, var_bound266); /* Direct call array$Array$add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class$AFormaldef$bound= (var_nfd,var_bound266) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nitc__modelize_class__AFormaldef___bound].val = var_bound266; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL267:(void)0;
}
}
} else {
{
{ /* Inline model$MClass$intro (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var270 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var270 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var268 = var270;
RET_LABEL269:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var268) on <var268:MClassDef> */
var273 = var268->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var268:MClassDef> */
if (unlikely(var273 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var271 = var273;
RET_LABEL272:(void)0;
}
}
{
var274 = ((val*(*)(val* self))(var271->class->vft[COLOR_nitc__model__MClassType__arguments]))(var271); /* arguments on <var271:MClassType>*/
}
{
var275 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var274, var_i);
}
var_bound276 = var275;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_bounds, var_bound276); /* Direct call array$Array$add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class$AFormaldef$bound= (var_nfd,var_bound276) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_nitc__modelize_class__AFormaldef___bound].val = var_bound276; /* _bound on <var_nfd:AFormaldef> */
RET_LABEL277:(void)0;
}
}
}
}
BREAK_label72: (void)0;
{
var278 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var278;
}
BREAK_label: (void)0;
} else {
}
{
var279 = nitc___nitc__MClass___get_mtype(var_mclass, var_bounds);
}
var_bound_mtype = var279;
var280 = NEW_nitc__MClassDef(&type_nitc__MClassDef);
{
{ /* Inline parser_nodes$ANode$location (var_nclassdef) on <var_nclassdef:AClassdef> */
var283 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var283 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var280->class->vft[COLOR_nitc__model__MClassDef__mmodule_61d]))(var280, var_mmodule); /* mmodule= on <var280:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var280->class->vft[COLOR_nitc__model__MClassDef__bound_mtype_61d]))(var280, var_bound_mtype); /* bound_mtype= on <var280:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var280->class->vft[COLOR_nitc__model__MClassDef__location_61d]))(var280, var281); /* location= on <var280:MClassDef>*/
}
{
((void(*)(val* self))(var280->class->vft[COLOR_core__kernel__Object__init]))(var280); /* init on <var280:MClassDef>*/
}
var_mclassdef = var280;
{
{ /* Inline modelize_class$AClassdef$mclassdef= (var_nclassdef,var_mclassdef) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val = var_mclassdef; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL284:(void)0;
}
}
{
{ /* Inline modelize_class$ModelBuilder$mclassdef2nclassdef (self) on <self:ModelBuilder> */
var287 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var287 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 448);
fatal_exit(1);
}
var285 = var287;
RET_LABEL286:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var285, var_mclassdef, var_nclassdef); /* Direct call hash_collection$HashMap$[]= on <var285:HashMap[MClassDef, AClassdef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype289 = type_nitc__AStdClassdef.color;
idtype290 = type_nitc__AStdClassdef.id;
if(cltype289 >= var_nclassdef->type->table_size) {
var288 = 0;
} else {
var288 = var_nclassdef->type->type_table[cltype289] == idtype290;
}
if (var288){
{
{ /* Inline parser_nodes$ADefinition$n_doc (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var293 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_nclassdef:AClassdef(AStdClassdef)> */
var291 = var293;
RET_LABEL292:(void)0;
}
}
var_ndoc = var291;
if (var_ndoc == NULL) {
var294 = 0; /* is null */
} else {
var294 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other26 = ((val*)NULL);
{
var297 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ndoc, var_other26); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
}
var298 = !var297;
var295 = var298;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
var294 = var295;
}
if (var294){
{
var299 = nitc__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var299;
{
{ /* Inline mdoc$MEntity$mdoc= (var_mclassdef,var_mdoc) on <var_mclassdef:MClassDef> */
var_mclassdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mclassdef:MClassDef> */
RET_LABEL300:(void)0;
}
}
{
{ /* Inline mdoc$MDoc$original_mentity= (var_mdoc,var_mclassdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mclassdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL301:(void)0;
}
}
} else {
{
var303 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var_304 = var303;
if (var303){
{
{ /* Inline model$MClass$visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var307 = var_mclass->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var307 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var305 = var307;
RET_LABEL306:(void)0;
}
}
var308 = glob_sys;
{
var309 = nitc__model_base___core__Sys___public_visibility(var308);
}
{
var310 = core___core__Comparable____62d_61d(var305, var309);
}
var302 = var310;
} else {
var302 = var_304;
}
if (var302){
if (likely(varonce311!=NULL)) {
var312 = varonce311;
} else {
var313 = "missing-doc";
var315 = (val*)(11l<<2|1);
var316 = (val*)(11l<<2|1);
var317 = (val*)((long)(0)<<2|3);
var318 = (val*)((long)(0)<<2|3);
var314 = core__flat___CString___to_s_unsafe(var313, var315, var316, var317, var318);
var312 = var314;
varonce311 = var312;
}
if (unlikely(varonce319==NULL)) {
var320 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = "Documentation warning: Undocumented public class `";
var325 = (val*)(50l<<2|1);
var326 = (val*)(50l<<2|1);
var327 = (val*)((long)(0)<<2|3);
var328 = (val*)((long)(0)<<2|3);
var324 = core__flat___CString___to_s_unsafe(var323, var325, var326, var327, var328);
var322 = var324;
varonce321 = var322;
}
((struct instance_core__NativeArray*)var320)->values[0]=var322;
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = "`";
var333 = (val*)(1l<<2|1);
var334 = (val*)(1l<<2|1);
var335 = (val*)((long)(0)<<2|3);
var336 = (val*)((long)(0)<<2|3);
var332 = core__flat___CString___to_s_unsafe(var331, var333, var334, var335, var336);
var330 = var332;
varonce329 = var330;
}
((struct instance_core__NativeArray*)var320)->values[2]=var330;
} else {
var320 = varonce319;
varonce319 = NULL;
}
{
var337 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_core__NativeArray*)var320)->values[1]=var337;
{
var338 = ((val*(*)(val* self))(var320->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var320); /* native_to_s on <var320:NativeArray[String]>*/
}
varonce319 = var320;
{
nitc___nitc__ModelBuilder___advice(self, var_nclassdef, var312, var338); /* Direct call modelbuilder_base$ModelBuilder$advice on <self:ModelBuilder>*/
}
} else {
}
}
} else {
}
{
var339 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
if (var339){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var342 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var342 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var340 = var342;
RET_LABEL341:(void)0;
}
}
if (unlikely(varonce343==NULL)) {
var344 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = " introduces new ";
var349 = (val*)(16l<<2|1);
var350 = (val*)(16l<<2|1);
var351 = (val*)((long)(0)<<2|3);
var352 = (val*)((long)(0)<<2|3);
var348 = core__flat___CString___to_s_unsafe(var347, var349, var350, var351, var352);
var346 = var348;
varonce345 = var346;
}
((struct instance_core__NativeArray*)var344)->values[1]=var346;
if (likely(varonce353!=NULL)) {
var354 = varonce353;
} else {
var355 = " ";
var357 = (val*)(1l<<2|1);
var358 = (val*)(1l<<2|1);
var359 = (val*)((long)(0)<<2|3);
var360 = (val*)((long)(0)<<2|3);
var356 = core__flat___CString___to_s_unsafe(var355, var357, var358, var359, var360);
var354 = var356;
varonce353 = var354;
}
((struct instance_core__NativeArray*)var344)->values[3]=var354;
} else {
var344 = varonce343;
varonce343 = NULL;
}
{
var361 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var344)->values[0]=var361;
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var364 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var364 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var362 = var364;
RET_LABEL363:(void)0;
}
}
{
var365 = ((val*(*)(val* self))(var362->class->vft[COLOR_core__abstract_text__Object__to_s]))(var362); /* to_s on <var362:MClassKind>*/
}
((struct instance_core__NativeArray*)var344)->values[2]=var365;
{
var366 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
((struct instance_core__NativeArray*)var344)->values[4]=var366;
{
var367 = ((val*(*)(val* self))(var344->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var344); /* native_to_s on <var344:NativeArray[String]>*/
}
varonce343 = var344;
{
nitc___nitc__ToolContext___info(var340, var367, 3l); /* Direct call toolcontext$ToolContext$info on <var340:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var370 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var370 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var368 = var370;
RET_LABEL369:(void)0;
}
}
if (unlikely(varonce371==NULL)) {
var372 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce373!=NULL)) {
var374 = varonce373;
} else {
var375 = " refines ";
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
var383 = " ";
var385 = (val*)(1l<<2|1);
var386 = (val*)(1l<<2|1);
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
{
var389 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var372)->values[0]=var389;
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var392 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var392 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var390 = var392;
RET_LABEL391:(void)0;
}
}
{
var393 = ((val*(*)(val* self))(var390->class->vft[COLOR_core__abstract_text__Object__to_s]))(var390); /* to_s on <var390:MClassKind>*/
}
((struct instance_core__NativeArray*)var372)->values[2]=var393;
{
var394 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
((struct instance_core__NativeArray*)var372)->values[4]=var394;
{
var395 = ((val*(*)(val* self))(var372->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var372); /* native_to_s on <var372:NativeArray[String]>*/
}
varonce371 = var372;
{
nitc___nitc__ToolContext___info(var368, var395, 3l); /* Direct call toolcontext$ToolContext$info on <var368:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_class$ModelBuilder$collect_a_mclassdef_inheritance for (self: ModelBuilder, AModule, AClassdef) */
void nitc__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable MClass */;
val* var_pointerclass /* var pointerclass: nullable MClass */;
val* var26 /* : nullable MClass */;
val* var28 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : nullable MClassDef */;
val* var37 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var_specobject /* var specobject: Bool */;
short int var_specpointer /* var specpointer: Bool */;
val* var44 /* : Array[MClassType] */;
val* var_supertypes /* var supertypes: Array[MClassType] */;
short int var45 /* : Bool */;
int cltype;
int idtype;
val* var46 /* : Array[ASuperPropdef] */;
val* var_ /* var : Array[ASuperPropdef] */;
val* var47 /* : IndexedIterator[nullable Object] */;
val* var_48 /* var : IndexedIterator[ASuperPropdef] */;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperPropdef */;
val* var51 /* : AType */;
val* var53 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var54 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
val* var74 /* : MClassKind */;
val* var76 /* : MClassKind */;
val* var77 /* : MClass */;
val* var79 /* : MClass */;
val* var80 /* : MClassKind */;
val* var82 /* : MClassKind */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
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
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Int */;
val* var109 /* : nullable Bool */;
val* var110 /* : nullable Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
val* var127 /* : MClassKind */;
val* var129 /* : MClassKind */;
val* var130 /* : String */;
val* var131 /* : String */;
val* var132 /* : MClass */;
val* var134 /* : MClass */;
val* var135 /* : MClassKind */;
val* var137 /* : MClassKind */;
val* var138 /* : String */;
val* var139 /* : MClass */;
val* var141 /* : MClass */;
val* var142 /* : String */;
val* var143 /* : String */;
val* var144 /* : MClass */;
val* var146 /* : MClass */;
val* var147 /* : MClassKind */;
val* var149 /* : MClassKind */;
val* var150 /* : Sys */;
val* var151 /* : MClassKind */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
short int var_159 /* var : Bool */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
val* var_other163 /* var other: nullable Object */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
val* var167 /* : MClassKind */;
val* var169 /* : MClassKind */;
val* var170 /* : Sys */;
val* var171 /* : MClassKind */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
short int var_177 /* var : Bool */;
val* var178 /* : String */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : CString */;
val* var184 /* : String */;
val* var185 /* : nullable Int */;
val* var186 /* : nullable Int */;
val* var187 /* : nullable Bool */;
val* var188 /* : nullable Bool */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : CString */;
val* var202 /* : String */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Bool */;
val* var206 /* : nullable Bool */;
val* var207 /* : MClassType */;
val* var209 /* : MClassType */;
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
short int var223 /* : Bool */;
short int var224 /* : Bool */;
val* var225 /* : MClassType */;
val* var227 /* : MClassType */;
val* var228 /* : MClassKind */;
val* var230 /* : MClassKind */;
val* var231 /* : Sys */;
val* var232 /* : MClassKind */;
short int var233 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
val* var238 /* : NativeArray[String] */;
static val* varonce237;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : CString */;
val* var242 /* : String */;
val* var243 /* : nullable Int */;
val* var244 /* : nullable Int */;
val* var245 /* : nullable Bool */;
val* var246 /* : nullable Bool */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : CString */;
val* var250 /* : String */;
val* var251 /* : nullable Int */;
val* var252 /* : nullable Int */;
val* var253 /* : nullable Bool */;
val* var254 /* : nullable Bool */;
val* var255 /* : Sys */;
val* var256 /* : MClassKind */;
val* var257 /* : String */;
val* var258 /* : String */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
val* var261 /* : ToolContext */;
val* var263 /* : ToolContext */;
val* var265 /* : NativeArray[String] */;
static val* varonce264;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : CString */;
val* var269 /* : String */;
val* var270 /* : nullable Int */;
val* var271 /* : nullable Int */;
val* var272 /* : nullable Bool */;
val* var273 /* : nullable Bool */;
val* var274 /* : String */;
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
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader$AModule$mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mmodule = var;
if (var_mmodule == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var8 = var_mmodule == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "Object";
var12 = (val*)(6l<<2|1);
var13 = (val*)(6l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce = var9;
}
{
var16 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var9);
}
var_objectclass = var16;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Pointer";
var21 = (val*)(7l<<2|1);
var22 = (val*)(7l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
{
var25 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var18);
}
var_pointerclass = var25;
{
{ /* Inline modelize_class$AClassdef$mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var28 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_mclass = var26;
if (var_mclass == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var34 = var_mclass == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var37 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_mclassdef = var35;
if (var_mclassdef == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var43 = var_mclassdef == var_other;
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
goto RET_LABEL;
} else {
}
var_specobject = 1;
var_specpointer = 1;
var44 = NEW_core__Array(&type_core__Array__nitc__MClassType);
{
core___core__Array___core__kernel__Object__init(var44); /* Direct call array$Array$init on <var44:Array[MClassType]>*/
}
var_supertypes = var44;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var45 = 0;
} else {
var45 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var45){
{
var46 = nitc___nitc__AStdClassdef___n_superclasses(var_nclassdef);
}
var_ = var46;
{
var47 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_48 = var47;
for(;;) {
{
var49 = ((short int(*)(val* self))((((long)var_48&3)?class_info[((long)var_48&3)]:var_48->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_48); /* is_ok on <var_48:IndexedIterator[ASuperPropdef]>*/
}
if (var49){
} else {
goto BREAK_label;
}
{
var50 = ((val*(*)(val* self))((((long)var_48&3)?class_info[((long)var_48&3)]:var_48->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_48); /* item on <var_48:IndexedIterator[ASuperPropdef]>*/
}
var_nsc = var50;
var_specobject = 0;
{
{ /* Inline parser_nodes$ASuperPropdef$n_type (var_nsc) on <var_nsc:ASuperPropdef> */
var53 = var_nsc->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <var_nsc:ASuperPropdef> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1432);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
var_ntype = var51;
{
var54 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, 0);
}
var_mtype = var54;
if (var_mtype == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var60 = var_mtype == var_other;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (var55){
goto BREAK_label61;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype63 = type_nitc__MClassType.color;
idtype64 = type_nitc__MClassType.id;
if(cltype63 >= var_mtype->type->table_size) {
var62 = 0;
} else {
var62 = var_mtype->type->type_table[cltype63] == idtype64;
}
var65 = !var62;
if (var65){
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "Error: supertypes cannot be a formal type.";
var70 = (val*)(42l<<2|1);
var71 = (val*)(42l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var67); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var76 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var79 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var77) on <var77:MClass> */
var82 = var77->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var77:MClass> */
if (unlikely(var82 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = nitc___nitc__MClassKind___can_specialize(var74, var80);
}
var84 = !var83;
if (var84){
if (unlikely(varonce85==NULL)) {
var86 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Error: ";
var91 = (val*)(7l<<2|1);
var92 = (val*)(7l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var86)->values[0]=var88;
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = " `";
var99 = (val*)(2l<<2|1);
var100 = (val*)(2l<<2|1);
var101 = (val*)((long)(0)<<2|3);
var102 = (val*)((long)(0)<<2|3);
var98 = core__flat___CString___to_s_unsafe(var97, var99, var100, var101, var102);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var86)->values[2]=var96;
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "` cannot specialize ";
var107 = (val*)(20l<<2|1);
var108 = (val*)(20l<<2|1);
var109 = (val*)((long)(0)<<2|3);
var110 = (val*)((long)(0)<<2|3);
var106 = core__flat___CString___to_s_unsafe(var105, var107, var108, var109, var110);
var104 = var106;
varonce103 = var104;
}
((struct instance_core__NativeArray*)var86)->values[4]=var104;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = " `";
var115 = (val*)(2l<<2|1);
var116 = (val*)(2l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var86)->values[6]=var112;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "`.";
var123 = (val*)(2l<<2|1);
var124 = (val*)(2l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var86)->values[8]=var120;
} else {
var86 = varonce85;
varonce85 = NULL;
}
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var129 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var129 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = ((val*(*)(val* self))(var127->class->vft[COLOR_core__abstract_text__Object__to_s]))(var127); /* to_s on <var127:MClassKind>*/
}
((struct instance_core__NativeArray*)var86)->values[1]=var130;
{
var131 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_core__NativeArray*)var86)->values[3]=var131;
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var134 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var134 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var132) on <var132:MClass> */
var137 = var132->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var132:MClass> */
if (unlikely(var137 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
var138 = ((val*(*)(val* self))(var135->class->vft[COLOR_core__abstract_text__Object__to_s]))(var135); /* to_s on <var135:MClassKind>*/
}
((struct instance_core__NativeArray*)var86)->values[5]=var138;
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var141 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var141 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
var142 = ((val*(*)(val* self))(var139->class->vft[COLOR_core__abstract_text__Object__to_s]))(var139); /* to_s on <var139:MClass>*/
}
((struct instance_core__NativeArray*)var86)->values[7]=var142;
{
var143 = ((val*(*)(val* self))(var86->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var86); /* native_to_s on <var86:NativeArray[String]>*/
}
varonce85 = var86;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var143); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_supertypes, var_mtype); /* Direct call array$Array$add on <var_supertypes:Array[MClassType]>*/
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var146 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var146 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var144) on <var144:MClass> */
var149 = var144->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var144:MClass> */
if (unlikely(var149 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
var150 = glob_sys;
{
var151 = nitc__model___core__Sys___extern_kind(var150);
}
{
{ /* Inline kernel$Object$== (var147,var151) on <var147:MClassKind> */
var_other = var151;
{
{ /* Inline kernel$Object$is_same_instance (var147,var_other) on <var147:MClassKind> */
var156 = var147 == var_other;
var154 = var156;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
var152 = var154;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
if (var152){
var_specpointer = 0;
} else {
}
BREAK_label61: (void)0;
{
((void(*)(val* self))((((long)var_48&3)?class_info[((long)var_48&3)]:var_48->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_48); /* next on <var_48:IndexedIterator[ASuperPropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_48&3)?class_info[((long)var_48&3)]:var_48->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_48); /* finish on <var_48:IndexedIterator[ASuperPropdef]>*/
}
} else {
}
{
var158 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var_159 = var158;
if (var158){
if (var_objectclass == NULL) {
var160 = 0; /* is null */
} else {
var160 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_objectclass,((val*)NULL)) on <var_objectclass:nullable MClass> */
var_other163 = ((val*)NULL);
{
var164 = ((short int(*)(val* self, val* p0))(var_objectclass->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_objectclass, var_other163); /* == on <var_objectclass:nullable MClass(MClass)>*/
}
var165 = !var164;
var161 = var165;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var160 = var161;
}
var157 = var160;
} else {
var157 = var_159;
}
if (var157){
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var169 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var169 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
var170 = glob_sys;
{
var171 = nitc__model___core__Sys___extern_kind(var170);
}
{
{ /* Inline kernel$Object$== (var167,var171) on <var167:MClassKind> */
var_other = var171;
{
{ /* Inline kernel$Object$is_same_instance (var167,var_other) on <var167:MClassKind> */
var176 = var167 == var_other;
var174 = var176;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
}
var172 = var174;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
}
var_177 = var172;
if (var172){
{
{ /* Inline model$MClass$name (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var180 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var180 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "Pointer";
var185 = (val*)(7l<<2|1);
var186 = (val*)(7l<<2|1);
var187 = (val*)((long)(0)<<2|3);
var188 = (val*)((long)(0)<<2|3);
var184 = core__flat___CString___to_s_unsafe(var183, var185, var186, var187, var188);
var182 = var184;
varonce181 = var182;
}
{
{ /* Inline kernel$Object$!= (var178,var182) on <var178:String> */
var_other163 = var182;
{
var191 = ((short int(*)(val* self, val* p0))(var178->class->vft[COLOR_core__kernel__Object___61d_61d]))(var178, var_other163); /* == on <var178:String>*/
}
var192 = !var191;
var189 = var192;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
var166 = var189;
} else {
var166 = var_177;
}
if (var166){
if (var_pointerclass == NULL) {
var193 = 1; /* is null */
} else {
var193 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_pointerclass,((val*)NULL)) on <var_pointerclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_pointerclass,var_other) on <var_pointerclass:nullable MClass(MClass)> */
var198 = var_pointerclass == var_other;
var196 = var198;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
}
var194 = var196;
goto RET_LABEL195;
RET_LABEL195:(void)0;
}
var193 = var194;
}
if (var193){
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "Error: `Pointer` must be defined first.";
var203 = (val*)(39l<<2|1);
var204 = (val*)(39l<<2|1);
var205 = (val*)((long)(0)<<2|3);
var206 = (val*)((long)(0)<<2|3);
var202 = core__flat___CString___to_s_unsafe(var201, var203, var204, var205, var206);
var200 = var202;
varonce199 = var200;
}
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var200); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (var_specpointer){
{
{ /* Inline model$MClass$mclass_type (var_pointerclass) on <var_pointerclass:nullable MClass(MClass)> */
var209 = var_pointerclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_pointerclass:nullable MClass(MClass)> */
if (unlikely(var209 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_supertypes, var207); /* Direct call array$Array$add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
} else {
if (var_specobject){
{
{ /* Inline model$MClass$name (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var212 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:nullable MClass(MClass)> */
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
var215 = "Object";
var217 = (val*)(6l<<2|1);
var218 = (val*)(6l<<2|1);
var219 = (val*)((long)(0)<<2|3);
var220 = (val*)((long)(0)<<2|3);
var216 = core__flat___CString___to_s_unsafe(var215, var217, var218, var219, var220);
var214 = var216;
varonce213 = var214;
}
{
{ /* Inline kernel$Object$!= (var210,var214) on <var210:String> */
var_other163 = var214;
{
var223 = ((short int(*)(val* self, val* p0))(var210->class->vft[COLOR_core__kernel__Object___61d_61d]))(var210, var_other163); /* == on <var210:String>*/
}
var224 = !var223;
var221 = var224;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
}
if (var221){
{
{ /* Inline model$MClass$mclass_type (var_objectclass) on <var_objectclass:nullable MClass(MClass)> */
var227 = var_objectclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass(MClass)> */
if (unlikely(var227 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_supertypes, var225); /* Direct call array$Array$add on <var_supertypes:Array[MClassType]>*/
}
} else {
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var230 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var230 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
var231 = glob_sys;
{
var232 = nitc__model___core__Sys___interface_kind(var231);
}
{
{ /* Inline kernel$Object$!= (var228,var232) on <var228:MClassKind> */
var_other163 = var232;
{
var235 = ((short int(*)(val* self, val* p0))(var228->class->vft[COLOR_core__kernel__Object___61d_61d]))(var228, var_other163); /* == on <var228:MClassKind>*/
}
var236 = !var235;
var233 = var236;
goto RET_LABEL234;
RET_LABEL234:(void)0;
}
}
if (var233){
if (unlikely(varonce237==NULL)) {
var238 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce239!=NULL)) {
var240 = varonce239;
} else {
var241 = "Error: `Object` must be an ";
var243 = (val*)(27l<<2|1);
var244 = (val*)(27l<<2|1);
var245 = (val*)((long)(0)<<2|3);
var246 = (val*)((long)(0)<<2|3);
var242 = core__flat___CString___to_s_unsafe(var241, var243, var244, var245, var246);
var240 = var242;
varonce239 = var240;
}
((struct instance_core__NativeArray*)var238)->values[0]=var240;
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = ".";
var251 = (val*)(1l<<2|1);
var252 = (val*)(1l<<2|1);
var253 = (val*)((long)(0)<<2|3);
var254 = (val*)((long)(0)<<2|3);
var250 = core__flat___CString___to_s_unsafe(var249, var251, var252, var253, var254);
var248 = var250;
varonce247 = var248;
}
((struct instance_core__NativeArray*)var238)->values[2]=var248;
} else {
var238 = varonce237;
varonce237 = NULL;
}
var255 = glob_sys;
{
var256 = nitc__model___core__Sys___interface_kind(var255);
}
{
var257 = ((val*(*)(val* self))(var256->class->vft[COLOR_core__abstract_text__Object__to_s]))(var256); /* to_s on <var256:MClassKind>*/
}
((struct instance_core__NativeArray*)var238)->values[1]=var257;
{
var258 = ((val*(*)(val* self))(var238->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var238); /* native_to_s on <var238:NativeArray[String]>*/
}
varonce237 = var238;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var258); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
} else {
}
}
} else {
}
{
nitc___nitc__MClassDef___set_supertypes(var_mclassdef, var_supertypes); /* Direct call model$MClassDef$set_supertypes on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
var259 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_supertypes);
}
var260 = !var259;
if (var260){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var263 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var263 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
if (unlikely(varonce264==NULL)) {
var265 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = " new super-types: ";
var270 = (val*)(18l<<2|1);
var271 = (val*)(18l<<2|1);
var272 = (val*)((long)(0)<<2|3);
var273 = (val*)((long)(0)<<2|3);
var269 = core__flat___CString___to_s_unsafe(var268, var270, var271, var272, var273);
var267 = var269;
varonce266 = var267;
}
((struct instance_core__NativeArray*)var265)->values[1]=var267;
} else {
var265 = varonce264;
varonce264 = NULL;
}
{
var274 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
((struct instance_core__NativeArray*)var265)->values[0]=var274;
if (likely(varonce275!=NULL)) {
var276 = varonce275;
} else {
var277 = ", ";
var279 = (val*)(2l<<2|1);
var280 = (val*)(2l<<2|1);
var281 = (val*)((long)(0)<<2|3);
var282 = (val*)((long)(0)<<2|3);
var278 = core__flat___CString___to_s_unsafe(var277, var279, var280, var281, var282);
var276 = var278;
varonce275 = var276;
}
{
var283 = core__abstract_text___Collection___join(var_supertypes, var276, ((val*)NULL));
}
((struct instance_core__NativeArray*)var265)->values[2]=var283;
{
var284 = ((val*(*)(val* self))(var265->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var265); /* native_to_s on <var265:NativeArray[String]>*/
}
varonce264 = var265;
{
nitc___nitc__ToolContext___info(var261, var284, 3l); /* Direct call toolcontext$ToolContext$info on <var261:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_class$ModelBuilder$check_supertypes for (self: ModelBuilder, AModule, AClassdef) */
void nitc__modelize_class___ModelBuilder___check_supertypes(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MClass */;
val* var11 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable MClassDef */;
val* var20 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : Array[MClassType] */;
val* var29 /* : Array[MClassType] */;
val* var_ /* var : Array[MClassType] */;
val* var30 /* : IndexedIterator[nullable Object] */;
val* var_31 /* var : IndexedIterator[MClassType] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
val* var37 /* : MClassType */;
val* var39 /* : MClassType */;
short int var40 /* : Bool */;
val* var41 /* : NativeArray[String] */;
static val* varonce;
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
val* var66 /* : String */;
val* var67 /* : String */;
val* var68 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline loader$AModule$mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mmodule = var;
if (var_mmodule == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var8 = var_mmodule == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class$AClassdef$mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var11 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclass = var9;
if (var_mclass == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var17 = var_mclass == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var20 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_mclassdef = var18;
if (var_mclassdef == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var26 = var_mclassdef == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassDef$supertypes (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var29 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 666);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_ = var27;
{
var30 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:IndexedIterator[MClassType]>*/
}
if (var32){
} else {
goto BREAK_label;
}
{
var33 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:IndexedIterator[MClassType]>*/
}
var_s = var33;
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var36 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var39 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = nitc___nitc__MType___is_subtype(var_s, var_mmodule, var34, var37);
}
if (var40){
if (unlikely(varonce==NULL)) {
var41 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Error: inheritance loop for class `";
var46 = (val*)(35l<<2|1);
var47 = (val*)(35l<<2|1);
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
var52 = "` with type `";
var54 = (val*)(13l<<2|1);
var55 = (val*)(13l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var41)->values[2]=var51;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "`.";
var62 = (val*)(2l<<2|1);
var63 = (val*)(2l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var41)->values[4]=var59;
} else {
var41 = varonce;
varonce = NULL;
}
{
var66 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:nullable MClass(MClass)>*/
}
((struct instance_core__NativeArray*)var41)->values[1]=var66;
{
var67 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:MClassType>*/
}
((struct instance_core__NativeArray*)var41)->values[3]=var67;
{
var68 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce = var41;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var68); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:IndexedIterator[MClassType]>*/
}
RET_LABEL:;
}
/* method modelize_class$ModelBuilder$build_classes for (self: ModelBuilder, AModule) */
void nitc__modelize_class___ModelBuilder___build_classes(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var4 /* : nullable MModule */;
val* var6 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : POSetElement[MModule] */;
val* var15 /* : POSetElement[MModule] */;
val* var16 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[MModule] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_imp /* var imp: MModule */;
val* var21 /* : nullable AModule */;
val* var_nimp /* var nimp: nullable AModule */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other25 /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : ANodes[AClassdef] */;
val* var30 /* : ANodes[AClassdef] */;
val* var_31 /* var : ANodes[AClassdef] */;
val* var32 /* : Iterator[ANode] */;
val* var_33 /* var : Iterator[AClassdef] */;
short int var34 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var37 /* : Bool */;
int cltype;
int idtype;
short int var38 /* : Bool */;
val* var40 /* : ANodes[AClassdef] */;
val* var42 /* : ANodes[AClassdef] */;
val* var_43 /* var : ANodes[AClassdef] */;
val* var44 /* : Iterator[ANode] */;
val* var_45 /* var : Iterator[AClassdef] */;
short int var46 /* : Bool */;
val* var48 /* : nullable Object */;
val* var_nclassdef49 /* var nclassdef: AClassdef */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
val* var54 /* : ANodes[AClassdef] */;
val* var56 /* : ANodes[AClassdef] */;
val* var_57 /* var : ANodes[AClassdef] */;
val* var58 /* : Iterator[ANode] */;
val* var_59 /* var : Iterator[AClassdef] */;
short int var60 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_nclassdef63 /* var nclassdef: AClassdef */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
short int var67 /* : Bool */;
val* var69 /* : ANodes[AClassdef] */;
val* var71 /* : ANodes[AClassdef] */;
val* var_72 /* var : ANodes[AClassdef] */;
val* var73 /* : Iterator[ANode] */;
val* var_74 /* var : Iterator[AClassdef] */;
short int var75 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_nclassdef78 /* var nclassdef: AClassdef */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
val* var83 /* : ANodes[AClassdef] */;
val* var85 /* : ANodes[AClassdef] */;
val* var_86 /* var : ANodes[AClassdef] */;
val* var87 /* : Iterator[ANode] */;
val* var_88 /* var : Iterator[AClassdef] */;
short int var89 /* : Bool */;
val* var91 /* : nullable Object */;
val* var_nclassdef92 /* var nclassdef: AClassdef */;
val* var93 /* : Array[MClassDef] */;
val* var95 /* : Array[MClassDef] */;
val* var_96 /* var : Array[MClassDef] */;
val* var97 /* : IndexedIterator[nullable Object] */;
val* var_98 /* var : IndexedIterator[MClassDef] */;
short int var99 /* : Bool */;
val* var101 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var102 /* : ANodes[AClassdef] */;
val* var104 /* : ANodes[AClassdef] */;
val* var_105 /* var : ANodes[AClassdef] */;
val* var106 /* : Iterator[ANode] */;
val* var_107 /* var : Iterator[AClassdef] */;
short int var108 /* : Bool */;
val* var110 /* : nullable Object */;
val* var_nclassdef111 /* var nclassdef: AClassdef */;
val* var112 /* : ANodes[AClassdef] */;
val* var114 /* : ANodes[AClassdef] */;
val* var_115 /* var : ANodes[AClassdef] */;
val* var116 /* : Iterator[ANode] */;
val* var_117 /* var : Iterator[AClassdef] */;
short int var118 /* : Bool */;
val* var120 /* : nullable Object */;
val* var_nclassdef121 /* var nclassdef: AClassdef */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
val* var125 /* : nullable MClassDef */;
val* var127 /* : nullable MClassDef */;
val* var_mclassdef128 /* var mclassdef: nullable MClassDef */;
val* var129 /* : ANodes[AFormaldef] */;
val* var131 /* : ANodes[AFormaldef] */;
val* var_132 /* var : ANodes[AFormaldef] */;
val* var133 /* : Iterator[ANode] */;
val* var_134 /* var : Iterator[AFormaldef] */;
short int var135 /* : Bool */;
val* var137 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var138 /* : nullable AType */;
val* var140 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var_147 /* var : Bool */;
val* var148 /* : nullable MType */;
val* var150 /* : nullable MType */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
val* var156 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
val* var163 /* : Array[ASuperPropdef] */;
val* var_164 /* var : Array[ASuperPropdef] */;
val* var165 /* : IndexedIterator[nullable Object] */;
val* var_166 /* var : IndexedIterator[ASuperPropdef] */;
short int var167 /* : Bool */;
val* var169 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperPropdef */;
val* var170 /* : AType */;
val* var172 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var173 /* : nullable MType */;
val* var175 /* : nullable MType */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
val* var181 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var187 /* : Bool */;
val* var188 /* : ANodes[AClassdef] */;
val* var190 /* : ANodes[AClassdef] */;
val* var_191 /* var : ANodes[AClassdef] */;
val* var192 /* : Iterator[ANode] */;
val* var_193 /* var : Iterator[AClassdef] */;
short int var194 /* : Bool */;
val* var196 /* : nullable Object */;
val* var_nclassdef197 /* var nclassdef: AClassdef */;
val* var198 /* : nullable MClassDef */;
val* var200 /* : nullable MClassDef */;
val* var_mclassdef201 /* var mclassdef: nullable MClassDef */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
val* var209 /* : HashMap[MClass, MClassType] */;
val* var_superclasses /* var superclasses: HashMap[MClass, MClassType] */;
val* var210 /* : nullable POSetElement[MClassDef] */;
val* var212 /* : nullable POSetElement[MClassDef] */;
val* var213 /* : Collection[nullable Object] */;
val* var_214 /* var : Collection[MClassDef] */;
val* var215 /* : Iterator[nullable Object] */;
val* var_216 /* var : Iterator[MClassDef] */;
short int var217 /* : Bool */;
val* var219 /* : nullable Object */;
val* var_scd /* var scd: MClassDef */;
val* var220 /* : Array[MClassType] */;
val* var222 /* : Array[MClassType] */;
val* var_223 /* var : Array[MClassType] */;
val* var224 /* : IndexedIterator[nullable Object] */;
val* var_225 /* var : IndexedIterator[MClassType] */;
short int var226 /* : Bool */;
val* var228 /* : nullable Object */;
val* var_st /* var st: MClassType */;
val* var229 /* : MClass */;
val* var231 /* : MClass */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
val* var234 /* : MClass */;
val* var236 /* : MClass */;
val* var237 /* : MClass */;
val* var239 /* : MClass */;
val* var240 /* : nullable Object */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
val* var245 /* : MClass */;
val* var247 /* : MClass */;
val* var248 /* : nullable Object */;
val* var249 /* : MClass */;
val* var251 /* : MClass */;
val* var252 /* : MClassType */;
val* var254 /* : MClassType */;
val* var255 /* : MClassType */;
val* var257 /* : MClassType */;
val* var258 /* : MType */;
val* var_st1 /* var st1: MClassType */;
val* var259 /* : MClass */;
val* var261 /* : MClass */;
val* var262 /* : MClassType */;
val* var264 /* : MClassType */;
val* var265 /* : MClassType */;
val* var267 /* : MClassType */;
val* var268 /* : MType */;
val* var_st2 /* var st2: MClassType */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
val* var273 /* : NativeArray[String] */;
static val* varonce;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : CString */;
val* var277 /* : String */;
val* var278 /* : nullable Int */;
val* var279 /* : nullable Int */;
val* var280 /* : nullable Bool */;
val* var281 /* : nullable Bool */;
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
val* var306 /* : MClass */;
val* var308 /* : MClass */;
val* var309 /* : String */;
val* var310 /* : String */;
val* var311 /* : String */;
val* var312 /* : String */;
val* var313 /* : ANodes[AClassdef] */;
val* var315 /* : ANodes[AClassdef] */;
val* var_316 /* var : ANodes[AClassdef] */;
val* var317 /* : Iterator[ANode] */;
val* var_318 /* var : Iterator[AClassdef] */;
short int var319 /* : Bool */;
val* var321 /* : nullable Object */;
val* var_nclassdef322 /* var nclassdef: AClassdef */;
short int var323 /* : Bool */;
short int var324 /* : Bool */;
int cltype325;
int idtype326;
short int var327 /* : Bool */;
short int var_328 /* var : Bool */;
short int var329 /* : Bool */;
short int var331 /* : Bool */;
val* var333 /* : nullable MClassDef */;
val* var335 /* : nullable MClassDef */;
val* var_mclassdef336 /* var mclassdef: nullable MClassDef */;
short int var337 /* : Bool */;
short int var338 /* : Bool */;
short int var340 /* : Bool */;
short int var342 /* : Bool */;
val* var343 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var344 /* : nullable POSetElement[MClassDef] */;
val* var346 /* : nullable POSetElement[MClassDef] */;
val* var347 /* : Collection[nullable Object] */;
val* var_348 /* var : Collection[MClassDef] */;
val* var349 /* : Iterator[nullable Object] */;
val* var_350 /* var : Iterator[MClassDef] */;
short int var351 /* : Bool */;
val* var353 /* : nullable Object */;
val* var_sup /* var sup: MClassDef */;
val* var354 /* : MClass */;
val* var356 /* : MClass */;
val* var357 /* : ArrayMap[MClass, AType] */;
val* var_seen_parents /* var seen_parents: ArrayMap[MClass, AType] */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : CString */;
val* var362 /* : String */;
val* var363 /* : nullable Int */;
val* var364 /* : nullable Int */;
val* var365 /* : nullable Bool */;
val* var366 /* : nullable Bool */;
val* var367 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var368 /* : Array[ASuperPropdef] */;
val* var_369 /* var : Array[ASuperPropdef] */;
val* var370 /* : IndexedIterator[nullable Object] */;
val* var_371 /* var : IndexedIterator[ASuperPropdef] */;
short int var372 /* : Bool */;
val* var374 /* : nullable Object */;
val* var_nsc375 /* var nsc: ASuperPropdef */;
val* var376 /* : AType */;
val* var378 /* : AType */;
val* var_ntype379 /* var ntype: AType */;
val* var380 /* : nullable MType */;
val* var382 /* : nullable MType */;
val* var_mtype383 /* var mtype: nullable MType */;
short int var384 /* : Bool */;
short int var385 /* : Bool */;
short int var387 /* : Bool */;
short int var389 /* : Bool */;
short int var391 /* : Bool */;
int cltype392;
int idtype393;
val* var394 /* : MClass */;
val* var396 /* : MClass */;
val* var_sc /* var sc: MClass */;
short int var397 /* : Bool */;
short int var398 /* : Bool */;
short int var399 /* : Bool */;
short int var_400 /* var : Bool */;
short int var401 /* : Bool */;
short int var403 /* : Bool */;
short int var405 /* : Bool */;
short int var406 /* : Bool */;
val* var407 /* : Location */;
val* var409 /* : Location */;
val* var410 /* : nullable SourceFile */;
val* var412 /* : nullable SourceFile */;
short int var413 /* : Bool */;
short int var414 /* : Bool */;
short int var416 /* : Bool */;
short int var417 /* : Bool */;
short int var_418 /* var : Bool */;
val* var419 /* : Location */;
val* var421 /* : Location */;
val* var422 /* : nullable SourceFile */;
val* var424 /* : nullable SourceFile */;
val* var425 /* : String */;
val* var427 /* : String */;
short int var428 /* : Bool */;
short int var429 /* : Bool */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : CString */;
val* var433 /* : String */;
val* var434 /* : nullable Int */;
val* var435 /* : nullable Int */;
val* var436 /* : nullable Bool */;
val* var437 /* : nullable Bool */;
val* var439 /* : NativeArray[String] */;
static val* varonce438;
static val* varonce440;
val* var441 /* : String */;
char* var442 /* : CString */;
val* var443 /* : String */;
val* var444 /* : nullable Int */;
val* var445 /* : nullable Int */;
val* var446 /* : nullable Bool */;
val* var447 /* : nullable Bool */;
static val* varonce448;
val* var449 /* : String */;
char* var450 /* : CString */;
val* var451 /* : String */;
val* var452 /* : nullable Int */;
val* var453 /* : nullable Int */;
val* var454 /* : nullable Bool */;
val* var455 /* : nullable Bool */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : CString */;
val* var459 /* : String */;
val* var460 /* : nullable Int */;
val* var461 /* : nullable Int */;
val* var462 /* : nullable Bool */;
val* var463 /* : nullable Bool */;
val* var464 /* : String */;
val* var465 /* : MClass */;
val* var467 /* : MClass */;
val* var468 /* : String */;
val* var469 /* : String */;
short int var470 /* : Bool */;
short int var471 /* : Bool */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : CString */;
val* var475 /* : String */;
val* var476 /* : nullable Int */;
val* var477 /* : nullable Int */;
val* var478 /* : nullable Bool */;
val* var479 /* : nullable Bool */;
val* var481 /* : NativeArray[String] */;
static val* varonce480;
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
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : CString */;
val* var501 /* : String */;
val* var502 /* : nullable Int */;
val* var503 /* : nullable Int */;
val* var504 /* : nullable Bool */;
val* var505 /* : nullable Bool */;
val* var506 /* : String */;
val* var507 /* : MClass */;
val* var509 /* : MClass */;
val* var510 /* : String */;
val* var511 /* : String */;
var_nmodule = p0;
{
{ /* Inline modelize_class$AModule$build_classes_is_done (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class$AModule$build_classes_is_done= (var_nmodule,1) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__modelize_class__AModule___build_classes_is_done].s = 1; /* _build_classes_is_done on <var_nmodule:AModule> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline loader$AModule$mmodule (var_nmodule) on <var_nmodule:AModule> */
var6 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mmodule = var4;
if (var_mmodule == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var12 = var_mmodule == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var15 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = poset___poset__POSetElement___direct_greaters(var13);
}
var_ = var16;
{
var17 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:Iterator[MModule]>*/
}
if (var19){
} else {
goto BREAK_label;
}
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:Iterator[MModule]>*/
}
var_imp = var20;
{
var21 = nitc__loader___ModelBuilder___mmodule2node(self, var_imp);
}
var_nimp = var21;
if (var_nimp == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nimp,((val*)NULL)) on <var_nimp:nullable AModule> */
var_other25 = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_nimp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nimp, var_other25); /* == on <var_nimp:nullable AModule(AModule)>*/
}
var27 = !var26;
var23 = var27;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
nitc__modelize_class___ModelBuilder___build_classes(self, var_nimp); /* Direct call modelize_class$ModelBuilder$build_classes on <self:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:Iterator[MModule]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var30 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_31 = var28;
{
var32 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_31);
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:Iterator[AClassdef]>*/
}
if (var34){
} else {
goto BREAK_label35;
}
{
var36 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:Iterator[AClassdef]>*/
}
var_nclassdef = var36;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var37 = 0;
} else {
var37 = var_nclassdef->type->type_table[cltype] == idtype;
}
var38 = !var37;
if (var38){
goto BREAK_label39;
} else {
}
{
nitc__modelize_class___ModelBuilder___build_a_mclass(self, var_nmodule, var_nclassdef); /* Direct call modelize_class$ModelBuilder$build_a_mclass on <self:ModelBuilder>*/
}
BREAK_label39: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:Iterator[AClassdef]>*/
}
}
BREAK_label35: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var42 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_43 = var40;
{
var44 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_43);
}
var_45 = var44;
for(;;) {
{
var46 = ((short int(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_45); /* is_ok on <var_45:Iterator[AClassdef]>*/
}
if (var46){
} else {
goto BREAK_label47;
}
{
var48 = ((val*(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_45); /* item on <var_45:Iterator[AClassdef]>*/
}
var_nclassdef49 = var48;
/* <var_nclassdef49:AClassdef> isa AStdClassdef */
cltype51 = type_nitc__AStdClassdef.color;
idtype52 = type_nitc__AStdClassdef.id;
if(cltype51 >= var_nclassdef49->type->table_size) {
var50 = 0;
} else {
var50 = var_nclassdef49->type->type_table[cltype51] == idtype52;
}
if (var50){
goto BREAK_label53;
} else {
}
{
nitc__modelize_class___ModelBuilder___build_a_mclass(self, var_nmodule, var_nclassdef49); /* Direct call modelize_class$ModelBuilder$build_a_mclass on <self:ModelBuilder>*/
}
BREAK_label53: (void)0;
{
((void(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_45); /* next on <var_45:Iterator[AClassdef]>*/
}
}
BREAK_label47: (void)0;
{
((void(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_45); /* finish on <var_45:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var56 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_57 = var54;
{
var58 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_57);
}
var_59 = var58;
for(;;) {
{
var60 = ((short int(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_59); /* is_ok on <var_59:Iterator[AClassdef]>*/
}
if (var60){
} else {
goto BREAK_label61;
}
{
var62 = ((val*(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_59); /* item on <var_59:Iterator[AClassdef]>*/
}
var_nclassdef63 = var62;
/* <var_nclassdef63:AClassdef> isa AStdClassdef */
cltype65 = type_nitc__AStdClassdef.color;
idtype66 = type_nitc__AStdClassdef.id;
if(cltype65 >= var_nclassdef63->type->table_size) {
var64 = 0;
} else {
var64 = var_nclassdef63->type->type_table[cltype65] == idtype66;
}
var67 = !var64;
if (var67){
goto BREAK_label68;
} else {
}
{
nitc__modelize_class___ModelBuilder___build_a_mclassdef(self, var_nmodule, var_nclassdef63); /* Direct call modelize_class$ModelBuilder$build_a_mclassdef on <self:ModelBuilder>*/
}
BREAK_label68: (void)0;
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_59); /* next on <var_59:Iterator[AClassdef]>*/
}
}
BREAK_label61: (void)0;
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_59); /* finish on <var_59:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var71 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_72 = var69;
{
var73 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_72);
}
var_74 = var73;
for(;;) {
{
var75 = ((short int(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_74); /* is_ok on <var_74:Iterator[AClassdef]>*/
}
if (var75){
} else {
goto BREAK_label76;
}
{
var77 = ((val*(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_74); /* item on <var_74:Iterator[AClassdef]>*/
}
var_nclassdef78 = var77;
/* <var_nclassdef78:AClassdef> isa AStdClassdef */
cltype80 = type_nitc__AStdClassdef.color;
idtype81 = type_nitc__AStdClassdef.id;
if(cltype80 >= var_nclassdef78->type->table_size) {
var79 = 0;
} else {
var79 = var_nclassdef78->type->type_table[cltype80] == idtype81;
}
if (var79){
goto BREAK_label82;
} else {
}
{
nitc__modelize_class___ModelBuilder___build_a_mclassdef(self, var_nmodule, var_nclassdef78); /* Direct call modelize_class$ModelBuilder$build_a_mclassdef on <self:ModelBuilder>*/
}
BREAK_label82: (void)0;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_74); /* next on <var_74:Iterator[AClassdef]>*/
}
}
BREAK_label76: (void)0;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_74); /* finish on <var_74:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var85 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
var_86 = var83;
{
var87 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_86);
}
var_88 = var87;
for(;;) {
{
var89 = ((short int(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_88); /* is_ok on <var_88:Iterator[AClassdef]>*/
}
if (var89){
} else {
goto BREAK_label90;
}
{
var91 = ((val*(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_88); /* item on <var_88:Iterator[AClassdef]>*/
}
var_nclassdef92 = var91;
{
nitc__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance(self, var_nmodule, var_nclassdef92); /* Direct call modelize_class$ModelBuilder$collect_a_mclassdef_inheritance on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_88); /* next on <var_88:Iterator[AClassdef]>*/
}
}
BREAK_label90: (void)0;
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_88); /* finish on <var_88:Iterator[AClassdef]>*/
}
{
{ /* Inline model$MModule$mclassdefs (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var95 = var_mmodule->attrs[COLOR_nitc__model__MModule___mclassdefs].val; /* _mclassdefs on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var95 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 150);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_96 = var93;
{
var97 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_96);
}
var_98 = var97;
for(;;) {
{
var99 = ((short int(*)(val* self))((((long)var_98&3)?class_info[((long)var_98&3)]:var_98->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_98); /* is_ok on <var_98:IndexedIterator[MClassDef]>*/
}
if (var99){
} else {
goto BREAK_label100;
}
{
var101 = ((val*(*)(val* self))((((long)var_98&3)?class_info[((long)var_98&3)]:var_98->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_98); /* item on <var_98:IndexedIterator[MClassDef]>*/
}
var_mclassdef = var101;
{
nitc___nitc__MClassDef___add_in_hierarchy(var_mclassdef); /* Direct call model$MClassDef$add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
{
((void(*)(val* self))((((long)var_98&3)?class_info[((long)var_98&3)]:var_98->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_98); /* next on <var_98:IndexedIterator[MClassDef]>*/
}
}
BREAK_label100: (void)0;
{
((void(*)(val* self))((((long)var_98&3)?class_info[((long)var_98&3)]:var_98->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_98); /* finish on <var_98:IndexedIterator[MClassDef]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var104 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var104 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
var_105 = var102;
{
var106 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_105);
}
var_107 = var106;
for(;;) {
{
var108 = ((short int(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_107); /* is_ok on <var_107:Iterator[AClassdef]>*/
}
if (var108){
} else {
goto BREAK_label109;
}
{
var110 = ((val*(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_107); /* item on <var_107:Iterator[AClassdef]>*/
}
var_nclassdef111 = var110;
{
nitc__modelize_class___ModelBuilder___check_supertypes(self, var_nmodule, var_nclassdef111); /* Direct call modelize_class$ModelBuilder$check_supertypes on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_107); /* next on <var_107:Iterator[AClassdef]>*/
}
}
BREAK_label109: (void)0;
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_107); /* finish on <var_107:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var114 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var114 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
var_115 = var112;
{
var116 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_115);
}
var_117 = var116;
for(;;) {
{
var118 = ((short int(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_117); /* is_ok on <var_117:Iterator[AClassdef]>*/
}
if (var118){
} else {
goto BREAK_label119;
}
{
var120 = ((val*(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_117); /* item on <var_117:Iterator[AClassdef]>*/
}
var_nclassdef121 = var120;
/* <var_nclassdef121:AClassdef> isa AStdClassdef */
cltype123 = type_nitc__AStdClassdef.color;
idtype124 = type_nitc__AStdClassdef.id;
if(cltype123 >= var_nclassdef121->type->table_size) {
var122 = 0;
} else {
var122 = var_nclassdef121->type->type_table[cltype123] == idtype124;
}
if (var122){
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_nclassdef121) on <var_nclassdef121:AClassdef(AStdClassdef)> */
var127 = var_nclassdef121->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef121:AClassdef(AStdClassdef)> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
var_mclassdef128 = var125;
{
{ /* Inline parser_nodes$AStdClassdef$n_formaldefs (var_nclassdef121) on <var_nclassdef121:AClassdef(AStdClassdef)> */
var131 = var_nclassdef121->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef121:AClassdef(AStdClassdef)> */
if (unlikely(var131 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1236);
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
var135 = ((short int(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_134); /* is_ok on <var_134:Iterator[AFormaldef]>*/
}
if (var135){
} else {
goto BREAK_label136;
}
{
var137 = ((val*(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_134); /* item on <var_134:Iterator[AFormaldef]>*/
}
var_nfd = var137;
{
{ /* Inline parser_nodes$AFormaldef$n_type (var_nfd) on <var_nfd:AFormaldef> */
var140 = var_nfd->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_type].val; /* _n_type on <var_nfd:AFormaldef> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
var_nfdt = var138;
if (var_nfdt == NULL) {
var142 = 0; /* is null */
} else {
var142 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nfdt,((val*)NULL)) on <var_nfdt:nullable AType> */
var_other25 = ((val*)NULL);
{
var145 = ((short int(*)(val* self, val* p0))(var_nfdt->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nfdt, var_other25); /* == on <var_nfdt:nullable AType(AType)>*/
}
var146 = !var145;
var143 = var146;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
var142 = var143;
}
var_147 = var142;
if (var142){
{
{ /* Inline modelbuilder_base$AType$mtype (var_nfdt) on <var_nfdt:nullable AType(AType)> */
var150 = var_nfdt->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nfdt:nullable AType(AType)> */
var148 = var150;
RET_LABEL149:(void)0;
}
}
if (var148 == NULL) {
var151 = 0; /* is null */
} else {
var151 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var148,((val*)NULL)) on <var148:nullable MType> */
var_other25 = ((val*)NULL);
{
var154 = ((short int(*)(val* self, val* p0))(var148->class->vft[COLOR_core__kernel__Object___61d_61d]))(var148, var_other25); /* == on <var148:nullable MType(MType)>*/
}
var155 = !var154;
var152 = var155;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
var151 = var152;
}
var141 = var151;
} else {
var141 = var_147;
}
if (var141){
{
var156 = nitc___nitc__ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef128, var_nfdt);
}
var_bound = var156;
if (var_bound == NULL) {
var157 = 1; /* is null */
} else {
var157 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_bound,((val*)NULL)) on <var_bound:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_bound,var_other) on <var_bound:nullable MType(MType)> */
var162 = var_bound == var_other;
var160 = var162;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
var158 = var160;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
var157 = var158;
}
if (var157){
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_134); /* next on <var_134:Iterator[AFormaldef]>*/
}
}
BREAK_label136: (void)0;
{
((void(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_134); /* finish on <var_134:Iterator[AFormaldef]>*/
}
{
var163 = nitc___nitc__AStdClassdef___n_superclasses(var_nclassdef121);
}
var_164 = var163;
{
var165 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_164);
}
var_166 = var165;
for(;;) {
{
var167 = ((short int(*)(val* self))((((long)var_166&3)?class_info[((long)var_166&3)]:var_166->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_166); /* is_ok on <var_166:IndexedIterator[ASuperPropdef]>*/
}
if (var167){
} else {
goto BREAK_label168;
}
{
var169 = ((val*(*)(val* self))((((long)var_166&3)?class_info[((long)var_166&3)]:var_166->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_166); /* item on <var_166:IndexedIterator[ASuperPropdef]>*/
}
var_nsc = var169;
{
{ /* Inline parser_nodes$ASuperPropdef$n_type (var_nsc) on <var_nsc:ASuperPropdef> */
var172 = var_nsc->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <var_nsc:ASuperPropdef> */
if (unlikely(var172 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1432);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
var_ntype = var170;
{
{ /* Inline modelbuilder_base$AType$mtype (var_ntype) on <var_ntype:AType> */
var175 = var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_ntype:AType> */
var173 = var175;
RET_LABEL174:(void)0;
}
}
if (var173 == NULL) {
var176 = 0; /* is null */
} else {
var176 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var173,((val*)NULL)) on <var173:nullable MType> */
var_other25 = ((val*)NULL);
{
var179 = ((short int(*)(val* self, val* p0))(var173->class->vft[COLOR_core__kernel__Object___61d_61d]))(var173, var_other25); /* == on <var173:nullable MType(MType)>*/
}
var180 = !var179;
var177 = var180;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
var176 = var177;
}
if (var176){
{
var181 = nitc___nitc__ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef128, var_ntype);
}
var_mtype = var181;
if (var_mtype == NULL) {
var182 = 1; /* is null */
} else {
var182 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var187 = var_mtype == var_other;
var185 = var187;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
}
var183 = var185;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
if (var182){
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_166&3)?class_info[((long)var_166&3)]:var_166->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_166); /* next on <var_166:IndexedIterator[ASuperPropdef]>*/
}
}
BREAK_label168: (void)0;
{
((void(*)(val* self))((((long)var_166&3)?class_info[((long)var_166&3)]:var_166->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_166); /* finish on <var_166:IndexedIterator[ASuperPropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_117); /* next on <var_117:Iterator[AClassdef]>*/
}
}
BREAK_label119: (void)0;
{
((void(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_117); /* finish on <var_117:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var190 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var190 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
var_191 = var188;
{
var192 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_191);
}
var_193 = var192;
for(;;) {
{
var194 = ((short int(*)(val* self))((((long)var_193&3)?class_info[((long)var_193&3)]:var_193->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_193); /* is_ok on <var_193:Iterator[AClassdef]>*/
}
if (var194){
} else {
goto BREAK_label195;
}
{
var196 = ((val*(*)(val* self))((((long)var_193&3)?class_info[((long)var_193&3)]:var_193->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_193); /* item on <var_193:Iterator[AClassdef]>*/
}
var_nclassdef197 = var196;
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_nclassdef197) on <var_nclassdef197:AClassdef> */
var200 = var_nclassdef197->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef197:AClassdef> */
var198 = var200;
RET_LABEL199:(void)0;
}
}
var_mclassdef201 = var198;
if (var_mclassdef201 == NULL) {
var202 = 1; /* is null */
} else {
var202 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclassdef201,((val*)NULL)) on <var_mclassdef201:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclassdef201,var_other) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var207 = var_mclassdef201 == var_other;
var205 = var207;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
}
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var202 = var203;
}
if (var202){
goto BREAK_label208;
} else {
}
var209 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__nitc__MClassType);
{
core___core__HashMap___core__kernel__Object__init(var209); /* Direct call hash_collection$HashMap$init on <var209:HashMap[MClass, MClassType]>*/
}
var_superclasses = var209;
{
{ /* Inline model$MClassDef$in_hierarchy (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var212 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var210 = var212;
RET_LABEL211:(void)0;
}
}
if (var210 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 391);
fatal_exit(1);
} else {
var213 = poset___poset__POSetElement___greaters(var210);
}
var_214 = var213;
{
var215 = ((val*(*)(val* self))((((long)var_214&3)?class_info[((long)var_214&3)]:var_214->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_214); /* iterator on <var_214:Collection[MClassDef]>*/
}
var_216 = var215;
for(;;) {
{
var217 = ((short int(*)(val* self))((((long)var_216&3)?class_info[((long)var_216&3)]:var_216->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_216); /* is_ok on <var_216:Iterator[MClassDef]>*/
}
if (var217){
} else {
goto BREAK_label218;
}
{
var219 = ((val*(*)(val* self))((((long)var_216&3)?class_info[((long)var_216&3)]:var_216->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_216); /* item on <var_216:Iterator[MClassDef]>*/
}
var_scd = var219;
{
{ /* Inline model$MClassDef$supertypes (var_scd) on <var_scd:MClassDef> */
var222 = var_scd->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var_scd:MClassDef> */
if (unlikely(var222 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 666);
fatal_exit(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
var_223 = var220;
{
var224 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_223);
}
var_225 = var224;
for(;;) {
{
var226 = ((short int(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_225); /* is_ok on <var_225:IndexedIterator[MClassType]>*/
}
if (var226){
} else {
goto BREAK_label227;
}
{
var228 = ((val*(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_225); /* item on <var_225:IndexedIterator[MClassType]>*/
}
var_st = var228;
{
{ /* Inline model$MClassType$mclass (var_st) on <var_st:MClassType> */
var231 = var_st->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var231 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
var232 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var_superclasses, var229);
}
var233 = !var232;
if (var233){
{
{ /* Inline model$MClassType$mclass (var_st) on <var_st:MClassType> */
var236 = var_st->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
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
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_superclasses, var234, var_st); /* Direct call hash_collection$HashMap$[]= on <var_superclasses:HashMap[MClass, MClassType]>*/
}
} else {
{
{ /* Inline model$MClassType$mclass (var_st) on <var_st:MClassType> */
var239 = var_st->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var239 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
var240 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_superclasses, var237);
}
{
{ /* Inline kernel$Object$!= (var240,var_st) on <var240:nullable Object(MClassType)> */
var_other25 = var_st;
{
var243 = ((short int(*)(val* self, val* p0))(var240->class->vft[COLOR_core__kernel__Object___61d_61d]))(var240, var_other25); /* == on <var240:nullable Object(MClassType)>*/
}
var244 = !var243;
var241 = var244;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
}
if (var241){
{
{ /* Inline model$MClassType$mclass (var_st) on <var_st:MClassType> */
var247 = var_st->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var247 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
var248 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_superclasses, var245);
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var251 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef201:nullable MClassDef(MClassDef)> */
if (unlikely(var251 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var249) on <var249:MClass> */
var254 = var249->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var249:MClass> */
if (unlikely(var254 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var257 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef201:nullable MClassDef(MClassDef)> */
if (unlikely(var257 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
var258 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var248->class->vft[COLOR_nitc__model__MType__resolve_for]))(var248, var252, var255, var_mmodule, 0); /* resolve_for on <var248:nullable Object(MClassType)>*/
}
var_st1 = var258;
{
{ /* Inline model$MClassDef$mclass (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var261 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef201:nullable MClassDef(MClassDef)> */
if (unlikely(var261 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var259) on <var259:MClass> */
var264 = var259->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var259:MClass> */
if (unlikely(var264 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var267 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef201:nullable MClassDef(MClassDef)> */
if (unlikely(var267 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
{
var268 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_st->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_st, var262, var265, var_mmodule, 0); /* resolve_for on <var_st:MClassType>*/
}
var_st2 = var268;
{
{ /* Inline kernel$Object$!= (var_st1,var_st2) on <var_st1:MClassType> */
var_other25 = var_st2;
{
var271 = ((short int(*)(val* self, val* p0))(var_st1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_st1, var_other25); /* == on <var_st1:MClassType>*/
}
var272 = !var271;
var269 = var272;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
}
if (var269){
if (unlikely(varonce==NULL)) {
var273 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "Error: incompatible ancestors for `";
var278 = (val*)(35l<<2|1);
var279 = (val*)(35l<<2|1);
var280 = (val*)((long)(0)<<2|3);
var281 = (val*)((long)(0)<<2|3);
var277 = core__flat___CString___to_s_unsafe(var276, var278, var279, var280, var281);
var275 = var277;
varonce274 = var275;
}
((struct instance_core__NativeArray*)var273)->values[0]=var275;
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = "`; conflict: `";
var286 = (val*)(14l<<2|1);
var287 = (val*)(14l<<2|1);
var288 = (val*)((long)(0)<<2|3);
var289 = (val*)((long)(0)<<2|3);
var285 = core__flat___CString___to_s_unsafe(var284, var286, var287, var288, var289);
var283 = var285;
varonce282 = var283;
}
((struct instance_core__NativeArray*)var273)->values[2]=var283;
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = "` and `";
var294 = (val*)(7l<<2|1);
var295 = (val*)(7l<<2|1);
var296 = (val*)((long)(0)<<2|3);
var297 = (val*)((long)(0)<<2|3);
var293 = core__flat___CString___to_s_unsafe(var292, var294, var295, var296, var297);
var291 = var293;
varonce290 = var291;
}
((struct instance_core__NativeArray*)var273)->values[4]=var291;
if (likely(varonce298!=NULL)) {
var299 = varonce298;
} else {
var300 = "`";
var302 = (val*)(1l<<2|1);
var303 = (val*)(1l<<2|1);
var304 = (val*)((long)(0)<<2|3);
var305 = (val*)((long)(0)<<2|3);
var301 = core__flat___CString___to_s_unsafe(var300, var302, var303, var304, var305);
var299 = var301;
varonce298 = var299;
}
((struct instance_core__NativeArray*)var273)->values[6]=var299;
} else {
var273 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef201) on <var_mclassdef201:nullable MClassDef(MClassDef)> */
var308 = var_mclassdef201->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef201:nullable MClassDef(MClassDef)> */
if (unlikely(var308 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
var309 = ((val*(*)(val* self))(var306->class->vft[COLOR_core__abstract_text__Object__to_s]))(var306); /* to_s on <var306:MClass>*/
}
((struct instance_core__NativeArray*)var273)->values[1]=var309;
{
var310 = ((val*(*)(val* self))(var_st1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_st1); /* to_s on <var_st1:MClassType>*/
}
((struct instance_core__NativeArray*)var273)->values[3]=var310;
{
var311 = ((val*(*)(val* self))(var_st2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_st2); /* to_s on <var_st2:MClassType>*/
}
((struct instance_core__NativeArray*)var273)->values[5]=var311;
{
var312 = ((val*(*)(val* self))(var273->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var273); /* native_to_s on <var273:NativeArray[String]>*/
}
varonce = var273;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef197, var312); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
}
{
((void(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_225); /* next on <var_225:IndexedIterator[MClassType]>*/
}
}
BREAK_label227: (void)0;
{
((void(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_225); /* finish on <var_225:IndexedIterator[MClassType]>*/
}
{
((void(*)(val* self))((((long)var_216&3)?class_info[((long)var_216&3)]:var_216->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_216); /* next on <var_216:Iterator[MClassDef]>*/
}
}
BREAK_label218: (void)0;
{
((void(*)(val* self))((((long)var_216&3)?class_info[((long)var_216&3)]:var_216->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_216); /* finish on <var_216:Iterator[MClassDef]>*/
}
BREAK_label208: (void)0;
{
((void(*)(val* self))((((long)var_193&3)?class_info[((long)var_193&3)]:var_193->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_193); /* next on <var_193:Iterator[AClassdef]>*/
}
}
BREAK_label195: (void)0;
{
((void(*)(val* self))((((long)var_193&3)?class_info[((long)var_193&3)]:var_193->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_193); /* finish on <var_193:Iterator[AClassdef]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var315 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var315 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
var_316 = var313;
{
var317 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_316);
}
var_318 = var317;
for(;;) {
{
var319 = ((short int(*)(val* self))((((long)var_318&3)?class_info[((long)var_318&3)]:var_318->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_318); /* is_ok on <var_318:Iterator[AClassdef]>*/
}
if (var319){
} else {
goto BREAK_label320;
}
{
var321 = ((val*(*)(val* self))((((long)var_318&3)?class_info[((long)var_318&3)]:var_318->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_318); /* item on <var_318:Iterator[AClassdef]>*/
}
var_nclassdef322 = var321;
/* <var_nclassdef322:AClassdef> isa AStdClassdef */
cltype325 = type_nitc__AStdClassdef.color;
idtype326 = type_nitc__AStdClassdef.id;
if(cltype325 >= var_nclassdef322->type->table_size) {
var324 = 0;
} else {
var324 = var_nclassdef322->type->type_table[cltype325] == idtype326;
}
var327 = !var324;
var_328 = var327;
if (var327){
var323 = var_328;
} else {
{
{ /* Inline modelbuilder_base$ANode$is_broken (var_nclassdef322) on <var_nclassdef322:AClassdef(AStdClassdef)> */
var331 = var_nclassdef322->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s; /* _is_broken on <var_nclassdef322:AClassdef(AStdClassdef)> */
var329 = var331;
RET_LABEL330:(void)0;
}
}
var323 = var329;
}
if (var323){
goto BREAK_label332;
} else {
}
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_nclassdef322) on <var_nclassdef322:AClassdef(AStdClassdef)> */
var335 = var_nclassdef322->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef322:AClassdef(AStdClassdef)> */
var333 = var335;
RET_LABEL334:(void)0;
}
}
var_mclassdef336 = var333;
if (var_mclassdef336 == NULL) {
var337 = 1; /* is null */
} else {
var337 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclassdef336,((val*)NULL)) on <var_mclassdef336:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclassdef336,var_other) on <var_mclassdef336:nullable MClassDef(MClassDef)> */
var342 = var_mclassdef336 == var_other;
var340 = var342;
goto RET_LABEL341;
RET_LABEL341:(void)0;
}
}
var338 = var340;
goto RET_LABEL339;
RET_LABEL339:(void)0;
}
var337 = var338;
}
if (var337){
goto BREAK_label332;
} else {
}
var343 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var343); /* Direct call array$Array$init on <var343:Array[MClass]>*/
}
var_parents = var343;
{
{ /* Inline model$MClassDef$in_hierarchy (var_mclassdef336) on <var_mclassdef336:nullable MClassDef(MClassDef)> */
var346 = var_mclassdef336->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef336:nullable MClassDef(MClassDef)> */
var344 = var346;
RET_LABEL345:(void)0;
}
}
if (var344 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 417);
fatal_exit(1);
} else {
var347 = poset___poset__POSetElement___direct_greaters(var344);
}
var_348 = var347;
{
var349 = ((val*(*)(val* self))((((long)var_348&3)?class_info[((long)var_348&3)]:var_348->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_348); /* iterator on <var_348:Collection[MClassDef]>*/
}
var_350 = var349;
for(;;) {
{
var351 = ((short int(*)(val* self))((((long)var_350&3)?class_info[((long)var_350&3)]:var_350->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_350); /* is_ok on <var_350:Iterator[MClassDef]>*/
}
if (var351){
} else {
goto BREAK_label352;
}
{
var353 = ((val*(*)(val* self))((((long)var_350&3)?class_info[((long)var_350&3)]:var_350->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_350); /* item on <var_350:Iterator[MClassDef]>*/
}
var_sup = var353;
{
{ /* Inline model$MClassDef$mclass (var_sup) on <var_sup:MClassDef> */
var356 = var_sup->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_sup:MClassDef> */
if (unlikely(var356 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var354 = var356;
RET_LABEL355:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_parents, var354); /* Direct call array$Array$add on <var_parents:Array[MClass]>*/
}
{
((void(*)(val* self))((((long)var_350&3)?class_info[((long)var_350&3)]:var_350->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_350); /* next on <var_350:Iterator[MClassDef]>*/
}
}
BREAK_label352: (void)0;
{
((void(*)(val* self))((((long)var_350&3)?class_info[((long)var_350&3)]:var_350->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_350); /* finish on <var_350:Iterator[MClassDef]>*/
}
var357 = NEW_core__ArrayMap(&type_core__ArrayMap__nitc__MClass__nitc__AType);
{
{ /* Inline kernel$Object$init (var357) on <var357:ArrayMap[MClass, AType]> */
RET_LABEL358:(void)0;
}
}
var_seen_parents = var357;
if (likely(varonce359!=NULL)) {
var360 = varonce359;
} else {
var361 = "Object";
var363 = (val*)(6l<<2|1);
var364 = (val*)(6l<<2|1);
var365 = (val*)((long)(0)<<2|3);
var366 = (val*)((long)(0)<<2|3);
var362 = core__flat___CString___to_s_unsafe(var361, var363, var364, var365, var366);
var360 = var362;
varonce359 = var360;
}
{
var367 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_nmodule, var_mmodule, var360);
}
var_objectclass = var367;
{
var368 = nitc___nitc__AStdClassdef___n_superclasses(var_nclassdef322);
}
var_369 = var368;
{
var370 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_369);
}
var_371 = var370;
for(;;) {
{
var372 = ((short int(*)(val* self))((((long)var_371&3)?class_info[((long)var_371&3)]:var_371->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_371); /* is_ok on <var_371:IndexedIterator[ASuperPropdef]>*/
}
if (var372){
} else {
goto BREAK_label373;
}
{
var374 = ((val*(*)(val* self))((((long)var_371&3)?class_info[((long)var_371&3)]:var_371->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_371); /* item on <var_371:IndexedIterator[ASuperPropdef]>*/
}
var_nsc375 = var374;
{
{ /* Inline parser_nodes$ASuperPropdef$n_type (var_nsc375) on <var_nsc375:ASuperPropdef> */
var378 = var_nsc375->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <var_nsc375:ASuperPropdef> */
if (unlikely(var378 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1432);
fatal_exit(1);
}
var376 = var378;
RET_LABEL377:(void)0;
}
}
var_ntype379 = var376;
{
{ /* Inline modelbuilder_base$AType$mtype (var_ntype379) on <var_ntype379:AType> */
var382 = var_ntype379->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_ntype379:AType> */
var380 = var382;
RET_LABEL381:(void)0;
}
}
var_mtype383 = var380;
if (var_mtype383 == NULL) {
var384 = 1; /* is null */
} else {
var384 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype383,((val*)NULL)) on <var_mtype383:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype383,var_other) on <var_mtype383:nullable MType(MType)> */
var389 = var_mtype383 == var_other;
var387 = var389;
goto RET_LABEL388;
RET_LABEL388:(void)0;
}
}
var385 = var387;
goto RET_LABEL386;
RET_LABEL386:(void)0;
}
var384 = var385;
}
if (var384){
goto BREAK_label390;
} else {
}
/* <var_mtype383:nullable MType(MType)> isa MClassType */
cltype392 = type_nitc__MClassType.color;
idtype393 = type_nitc__MClassType.id;
if(cltype392 >= var_mtype383->type->table_size) {
var391 = 0;
} else {
var391 = var_mtype383->type->type_table[cltype392] == idtype393;
}
if (unlikely(!var391)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 432);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var_mtype383) on <var_mtype383:nullable MType(MClassType)> */
var396 = var_mtype383->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype383:nullable MType(MClassType)> */
if (unlikely(var396 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var394 = var396;
RET_LABEL395:(void)0;
}
}
var_sc = var394;
{
var398 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_parents, var_sc);
}
var399 = !var398;
var_400 = var399;
if (var399){
var397 = var_400;
} else {
{
{ /* Inline kernel$Object$== (var_sc,var_objectclass) on <var_sc:MClass> */
var_other = var_objectclass;
{
{ /* Inline kernel$Object$is_same_instance (var_sc,var_other) on <var_sc:MClass> */
var405 = var_sc == var_other;
var403 = var405;
goto RET_LABEL404;
RET_LABEL404:(void)0;
}
}
var401 = var403;
goto RET_LABEL402;
RET_LABEL402:(void)0;
}
}
var397 = var401;
}
if (var397){
{
{ /* Inline parser_nodes$ANode$location (var_ntype379) on <var_ntype379:AType> */
var409 = var_ntype379->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_ntype379:AType> */
if (unlikely(var409 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var407 = var409;
RET_LABEL408:(void)0;
}
}
{
{ /* Inline location$Location$file (var407) on <var407:Location> */
var412 = var407->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var407:Location> */
var410 = var412;
RET_LABEL411:(void)0;
}
}
if (var410 == NULL) {
var413 = 0; /* is null */
} else {
var413 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var410,((val*)NULL)) on <var410:nullable SourceFile> */
var_other25 = ((val*)NULL);
{
var416 = ((short int(*)(val* self, val* p0))(var410->class->vft[COLOR_core__kernel__Object___61d_61d]))(var410, var_other25); /* == on <var410:nullable SourceFile(SourceFile)>*/
}
var417 = !var416;
var414 = var417;
goto RET_LABEL415;
RET_LABEL415:(void)0;
}
var413 = var414;
}
var_418 = var413;
if (var413){
{
{ /* Inline parser_nodes$ANode$location (var_ntype379) on <var_ntype379:AType> */
var421 = var_ntype379->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_ntype379:AType> */
if (unlikely(var421 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var419 = var421;
RET_LABEL420:(void)0;
}
}
{
{ /* Inline location$Location$file (var419) on <var419:Location> */
var424 = var419->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var419:Location> */
var422 = var424;
RET_LABEL423:(void)0;
}
}
if (var422 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 436);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$filename (var422) on <var422:nullable SourceFile> */
if (unlikely(var422 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var427 = var422->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var422:nullable SourceFile> */
if (unlikely(var427 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var425 = var427;
RET_LABEL426:(void)0;
}
}
{
var428 = ((short int(*)(val* self))(var425->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var425); /* is_empty on <var425:String>*/
}
var429 = !var428;
var406 = var429;
} else {
var406 = var_418;
}
if (var406){
if (likely(varonce430!=NULL)) {
var431 = varonce430;
} else {
var432 = "useless-superclass";
var434 = (val*)(18l<<2|1);
var435 = (val*)(18l<<2|1);
var436 = (val*)((long)(0)<<2|3);
var437 = (val*)((long)(0)<<2|3);
var433 = core__flat___CString___to_s_unsafe(var432, var434, var435, var436, var437);
var431 = var433;
varonce430 = var431;
}
if (unlikely(varonce438==NULL)) {
var439 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce440!=NULL)) {
var441 = varonce440;
} else {
var442 = "Warning: superfluous super-class `";
var444 = (val*)(34l<<2|1);
var445 = (val*)(34l<<2|1);
var446 = (val*)((long)(0)<<2|3);
var447 = (val*)((long)(0)<<2|3);
var443 = core__flat___CString___to_s_unsafe(var442, var444, var445, var446, var447);
var441 = var443;
varonce440 = var441;
}
((struct instance_core__NativeArray*)var439)->values[0]=var441;
if (likely(varonce448!=NULL)) {
var449 = varonce448;
} else {
var450 = "` in class `";
var452 = (val*)(12l<<2|1);
var453 = (val*)(12l<<2|1);
var454 = (val*)((long)(0)<<2|3);
var455 = (val*)((long)(0)<<2|3);
var451 = core__flat___CString___to_s_unsafe(var450, var452, var453, var454, var455);
var449 = var451;
varonce448 = var449;
}
((struct instance_core__NativeArray*)var439)->values[2]=var449;
if (likely(varonce456!=NULL)) {
var457 = varonce456;
} else {
var458 = "`.";
var460 = (val*)(2l<<2|1);
var461 = (val*)(2l<<2|1);
var462 = (val*)((long)(0)<<2|3);
var463 = (val*)((long)(0)<<2|3);
var459 = core__flat___CString___to_s_unsafe(var458, var460, var461, var462, var463);
var457 = var459;
varonce456 = var457;
}
((struct instance_core__NativeArray*)var439)->values[4]=var457;
} else {
var439 = varonce438;
varonce438 = NULL;
}
{
var464 = ((val*(*)(val* self))(var_mtype383->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype383); /* to_s on <var_mtype383:nullable MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var439)->values[1]=var464;
{
{ /* Inline model$MClassDef$mclass (var_mclassdef336) on <var_mclassdef336:nullable MClassDef(MClassDef)> */
var467 = var_mclassdef336->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef336:nullable MClassDef(MClassDef)> */
if (unlikely(var467 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var465 = var467;
RET_LABEL466:(void)0;
}
}
{
var468 = ((val*(*)(val* self))(var465->class->vft[COLOR_core__abstract_text__Object__to_s]))(var465); /* to_s on <var465:MClass>*/
}
((struct instance_core__NativeArray*)var439)->values[3]=var468;
{
var469 = ((val*(*)(val* self))(var439->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var439); /* native_to_s on <var439:NativeArray[String]>*/
}
varonce438 = var439;
{
nitc___nitc__ModelBuilder___warning(self, var_ntype379, var431, var469); /* Direct call modelbuilder_base$ModelBuilder$warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
var470 = core___core__CoupleMap___MapRead__has_key(var_seen_parents, var_sc);
}
var471 = !var470;
if (var471){
{
core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d(var_seen_parents, var_sc, var_ntype379); /* Direct call array$ArrayMap$[]= on <var_seen_parents:ArrayMap[MClass, AType]>*/
}
} else {
if (likely(varonce472!=NULL)) {
var473 = varonce472;
} else {
var474 = "useless-superclass";
var476 = (val*)(18l<<2|1);
var477 = (val*)(18l<<2|1);
var478 = (val*)((long)(0)<<2|3);
var479 = (val*)((long)(0)<<2|3);
var475 = core__flat___CString___to_s_unsafe(var474, var476, var477, var478, var479);
var473 = var475;
varonce472 = var473;
}
if (unlikely(varonce480==NULL)) {
var481 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce482!=NULL)) {
var483 = varonce482;
} else {
var484 = "Warning: duplicated super-class `";
var486 = (val*)(33l<<2|1);
var487 = (val*)(33l<<2|1);
var488 = (val*)((long)(0)<<2|3);
var489 = (val*)((long)(0)<<2|3);
var485 = core__flat___CString___to_s_unsafe(var484, var486, var487, var488, var489);
var483 = var485;
varonce482 = var483;
}
((struct instance_core__NativeArray*)var481)->values[0]=var483;
if (likely(varonce490!=NULL)) {
var491 = varonce490;
} else {
var492 = "` in class `";
var494 = (val*)(12l<<2|1);
var495 = (val*)(12l<<2|1);
var496 = (val*)((long)(0)<<2|3);
var497 = (val*)((long)(0)<<2|3);
var493 = core__flat___CString___to_s_unsafe(var492, var494, var495, var496, var497);
var491 = var493;
varonce490 = var491;
}
((struct instance_core__NativeArray*)var481)->values[2]=var491;
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = "`.";
var502 = (val*)(2l<<2|1);
var503 = (val*)(2l<<2|1);
var504 = (val*)((long)(0)<<2|3);
var505 = (val*)((long)(0)<<2|3);
var501 = core__flat___CString___to_s_unsafe(var500, var502, var503, var504, var505);
var499 = var501;
varonce498 = var499;
}
((struct instance_core__NativeArray*)var481)->values[4]=var499;
} else {
var481 = varonce480;
varonce480 = NULL;
}
{
var506 = ((val*(*)(val* self))(var_mtype383->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype383); /* to_s on <var_mtype383:nullable MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var481)->values[1]=var506;
{
{ /* Inline model$MClassDef$mclass (var_mclassdef336) on <var_mclassdef336:nullable MClassDef(MClassDef)> */
var509 = var_mclassdef336->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef336:nullable MClassDef(MClassDef)> */
if (unlikely(var509 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var507 = var509;
RET_LABEL508:(void)0;
}
}
{
var510 = ((val*(*)(val* self))(var507->class->vft[COLOR_core__abstract_text__Object__to_s]))(var507); /* to_s on <var507:MClass>*/
}
((struct instance_core__NativeArray*)var481)->values[3]=var510;
{
var511 = ((val*(*)(val* self))(var481->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var481); /* native_to_s on <var481:NativeArray[String]>*/
}
varonce480 = var481;
{
nitc___nitc__ModelBuilder___warning(self, var_ntype379, var473, var511); /* Direct call modelbuilder_base$ModelBuilder$warning on <self:ModelBuilder>*/
}
}
}
BREAK_label390: (void)0;
{
((void(*)(val* self))((((long)var_371&3)?class_info[((long)var_371&3)]:var_371->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_371); /* next on <var_371:IndexedIterator[ASuperPropdef]>*/
}
}
BREAK_label373: (void)0;
{
((void(*)(val* self))((((long)var_371&3)?class_info[((long)var_371&3)]:var_371->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_371); /* finish on <var_371:IndexedIterator[ASuperPropdef]>*/
}
BREAK_label332: (void)0;
{
((void(*)(val* self))((((long)var_318&3)?class_info[((long)var_318&3)]:var_318->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_318); /* next on <var_318:Iterator[AClassdef]>*/
}
}
BREAK_label320: (void)0;
{
((void(*)(val* self))((((long)var_318&3)?class_info[((long)var_318&3)]:var_318->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_318); /* finish on <var_318:Iterator[AClassdef]>*/
}
RET_LABEL:;
}
/* method modelize_class$ModelBuilder$mclassdef2nclassdef for (self: ModelBuilder): HashMap[MClassDef, AClassdef] */
val* nitc__modelize_class___ModelBuilder___mclassdef2nclassdef(val* self) {
val* var /* : HashMap[MClassDef, AClassdef] */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
var1 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 448);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class$AModule$build_classes_is_done for (self: AModule): Bool */
short int nitc__modelize_class___AModule___build_classes_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class$AModule$build_classes_is_done= for (self: AModule, Bool) */
void nitc__modelize_class___AModule___build_classes_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_class__AModule___build_classes_is_done].s = p0; /* _build_classes_is_done on <self:AModule> */
RET_LABEL:;
}
/* method modelize_class$AModule$mclass2nclassdef for (self: AModule): Map[MClass, AClassdef] */
val* nitc__modelize_class___AModule___mclass2nclassdef(val* self) {
val* var /* : Map[MClass, AClassdef] */;
val* var1 /* : Map[MClass, AClassdef] */;
var1 = self->attrs[COLOR_nitc__modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <self:AModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 463);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class$AClassdef$mclass for (self: AClassdef): nullable MClass */
val* nitc__modelize_class___AClassdef___mclass(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = self->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class$AClassdef$mclass= for (self: AClassdef, nullable MClass) */
void nitc__modelize_class___AClassdef___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val = p0; /* _mclass on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class$AClassdef$mclassdef for (self: AClassdef): nullable MClassDef */
val* nitc__modelize_class___AClassdef___mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class$AClassdef$mclassdef= for (self: AClassdef, nullable MClassDef) */
void nitc__modelize_class___AClassdef___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val = p0; /* _mclassdef on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class$AClassdef$all_defs for (self: AClassdef): nullable Array[AClassdef] */
val* nitc__modelize_class___AClassdef___all_defs(val* self) {
val* var /* : nullable Array[AClassdef] */;
val* var1 /* : nullable Array[AClassdef] */;
var1 = self->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val; /* _all_defs on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class$AClassdef$all_defs= for (self: AClassdef, nullable Array[AClassdef]) */
void nitc__modelize_class___AClassdef___all_defs_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val = p0; /* _all_defs on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class$AConcreteClasskind$mkind for (self: AConcreteClasskind): MClassKind */
val* nitc__modelize_class___AConcreteClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___concrete_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class$AAbstractClasskind$mkind for (self: AAbstractClasskind): MClassKind */
val* nitc__modelize_class___AAbstractClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___abstract_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class$AInterfaceClasskind$mkind for (self: AInterfaceClasskind): MClassKind */
val* nitc__modelize_class___AInterfaceClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___interface_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class$AEnumClasskind$mkind for (self: AEnumClasskind): MClassKind */
val* nitc__modelize_class___AEnumClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___enum_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class$AExternClasskind$mkind for (self: AExternClasskind): MClassKind */
val* nitc__modelize_class___AExternClasskind___AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___extern_kind(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class$AFormaldef$bound= for (self: AFormaldef, nullable MType) */
void nitc__modelize_class___AFormaldef___bound_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_class__AFormaldef___bound].val = p0; /* _bound on <self:AFormaldef> */
RET_LABEL:;
}
