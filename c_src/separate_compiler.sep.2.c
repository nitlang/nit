#include "separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompiler#compile_class_to_c for (self: SeparateCompiler, MClass) */
void separate_compiler__SeparateCompiler__compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var3 /* : MClassType */;
val* var5 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var6 /* : String */;
val* var_c_name /* var c_name: String */;
val* var7 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var9 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var10 /* : nullable Object */;
val* var_vft /* var vft: Array[nullable MPropDef] */;
val* var11 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var13 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var14 /* : nullable Object */;
val* var_attrs /* var attrs: Array[nullable MPropDef] */;
val* var15 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var16 /* : nullable RapidTypeAnalysis */;
val* var18 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
val* var30 /* : HashSet[MClass] */;
val* var32 /* : HashSet[MClass] */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var_35 /* var : Bool */;
val* var36 /* : String */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var_43 /* var : Bool */;
val* var44 /* : String */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var_58 /* var : Bool */;
val* var59 /* : String */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var_is_dead /* var is_dead: Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
val* var83 /* : Array[Object] */;
long var84 /* : Int */;
val* var85 /* : NativeArray[Object] */;
val* var86 /* : String */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
val* var93 /* : Array[Object] */;
long var94 /* : Int */;
val* var95 /* : NativeArray[Object] */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : FlatString */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var109 /* : NativeArray[Object] */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : String */;
long var125 /* : Int */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
val* var131 /* : Array[Object] */;
long var132 /* : Int */;
val* var133 /* : NativeArray[Object] */;
val* var134 /* : Object */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
long var141 /* : Int */;
long var_i /* var i: Int */;
long var142 /* : Int */;
long var144 /* : Int */;
long var_145 /* var : Int */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var149 /* : Bool */;
val* var150 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
val* var151 /* : null */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
val* var_other155 /* var other: nullable Object */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : FlatString */;
short int var164 /* : Bool */;
int cltype165;
int idtype166;
short int var167 /* : Bool */;
val* var168 /* : null */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var_175 /* var : Bool */;
val* var176 /* : HashSet[MMethodDef] */;
val* var178 /* : HashSet[MMethodDef] */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
val* var186 /* : MModule */;
val* var188 /* : MModule */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : FlatString */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : FlatString */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : FlatString */;
val* var204 /* : Array[Object] */;
long var205 /* : Int */;
val* var206 /* : NativeArray[Object] */;
val* var207 /* : String */;
val* var208 /* : AbstractRuntimeFunction */;
val* var_rf /* var rf: AbstractRuntimeFunction */;
val* var209 /* : String */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
long var213 /* : Int */;
val* var214 /* : FlatString */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : FlatString */;
val* var221 /* : MModule */;
val* var223 /* : MModule */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : FlatString */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : FlatString */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : FlatString */;
val* var239 /* : Array[Object] */;
long var240 /* : Int */;
val* var241 /* : NativeArray[Object] */;
val* var242 /* : String */;
long var243 /* : Int */;
long var244 /* : Int */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
long var249 /* : Int */;
val* var250 /* : FlatString */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
long var254 /* : Int */;
val* var255 /* : FlatString */;
short int var256 /* : Bool */;
val* var257 /* : String */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
long var261 /* : Int */;
val* var262 /* : FlatString */;
short int var263 /* : Bool */;
short int var264 /* : Bool */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
short int var_269 /* var : Bool */;
val* var270 /* : MClass */;
val* var272 /* : MClass */;
val* var273 /* : String */;
val* var275 /* : String */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : FlatString */;
short int var281 /* : Bool */;
short int var282 /* : Bool */;
val* var283 /* : CodeWriter */;
val* var285 /* : CodeWriter */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
long var289 /* : Int */;
val* var290 /* : FlatString */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : FlatString */;
val* var296 /* : Array[Object] */;
long var297 /* : Int */;
val* var298 /* : NativeArray[Object] */;
val* var299 /* : String */;
val* var300 /* : CodeWriter */;
val* var302 /* : CodeWriter */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
long var306 /* : Int */;
val* var307 /* : FlatString */;
val* var308 /* : CodeWriter */;
val* var310 /* : CodeWriter */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : FlatString */;
val* var316 /* : CodeWriter */;
val* var318 /* : CodeWriter */;
val* var319 /* : String */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
long var323 /* : Int */;
val* var324 /* : FlatString */;
val* var325 /* : Array[Object] */;
long var326 /* : Int */;
val* var327 /* : NativeArray[Object] */;
val* var328 /* : String */;
val* var329 /* : CodeWriter */;
val* var331 /* : CodeWriter */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : NativeString */;
long var335 /* : Int */;
val* var336 /* : FlatString */;
short int var337 /* : Bool */;
val* var338 /* : HashSet[MClassType] */;
val* var340 /* : HashSet[MClassType] */;
short int var341 /* : Bool */;
short int var342 /* : Bool */;
short int var_343 /* var : Bool */;
val* var344 /* : MClass */;
val* var346 /* : MClass */;
val* var347 /* : String */;
val* var349 /* : String */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
long var353 /* : Int */;
val* var354 /* : FlatString */;
short int var355 /* : Bool */;
short int var356 /* : Bool */;
short int var358 /* : Bool */;
short int var359 /* : Bool */;
short int var360 /* : Bool */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : NativeString */;
long var364 /* : Int */;
val* var365 /* : FlatString */;
val* var366 /* : Array[Object] */;
long var367 /* : Int */;
val* var368 /* : NativeArray[Object] */;
val* var369 /* : String */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : FlatString */;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
long var378 /* : Int */;
val* var379 /* : FlatString */;
val* var380 /* : String */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
long var384 /* : Int */;
val* var385 /* : FlatString */;
val* var386 /* : Array[Object] */;
long var387 /* : Int */;
val* var388 /* : NativeArray[Object] */;
val* var389 /* : String */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
long var393 /* : Int */;
val* var394 /* : FlatString */;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : NativeString */;
long var398 /* : Int */;
val* var399 /* : FlatString */;
val* var400 /* : Array[Object] */;
long var401 /* : Int */;
val* var402 /* : NativeArray[Object] */;
val* var403 /* : String */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : NativeString */;
long var407 /* : Int */;
val* var408 /* : FlatString */;
val* var409 /* : String */;
static val* varonce410;
val* var411 /* : String */;
char* var412 /* : NativeString */;
long var413 /* : Int */;
val* var414 /* : FlatString */;
val* var415 /* : String */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
long var419 /* : Int */;
val* var420 /* : FlatString */;
val* var421 /* : Array[Object] */;
long var422 /* : Int */;
val* var423 /* : NativeArray[Object] */;
val* var424 /* : String */;
static val* varonce425;
val* var426 /* : String */;
char* var427 /* : NativeString */;
long var428 /* : Int */;
val* var429 /* : FlatString */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : NativeString */;
long var433 /* : Int */;
val* var434 /* : FlatString */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
long var438 /* : Int */;
val* var439 /* : FlatString */;
val* var440 /* : Array[Object] */;
long var441 /* : Int */;
val* var442 /* : NativeArray[Object] */;
val* var443 /* : String */;
val* var444 /* : AbstractCompiler */;
val* var446 /* : AbstractCompiler */;
val* var447 /* : Set[MType] */;
val* var449 /* : Set[MType] */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
long var453 /* : Int */;
val* var454 /* : FlatString */;
val* var455 /* : Array[Object] */;
long var456 /* : Int */;
val* var457 /* : NativeArray[Object] */;
val* var458 /* : String */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
long var462 /* : Int */;
val* var463 /* : FlatString */;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : NativeString */;
long var467 /* : Int */;
val* var468 /* : FlatString */;
val* var469 /* : Array[Object] */;
long var470 /* : Int */;
val* var471 /* : NativeArray[Object] */;
val* var472 /* : String */;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : NativeString */;
long var476 /* : Int */;
val* var477 /* : FlatString */;
val* var478 /* : Array[Object] */;
long var479 /* : Int */;
val* var480 /* : NativeArray[Object] */;
val* var481 /* : String */;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : NativeString */;
long var485 /* : Int */;
val* var486 /* : FlatString */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
long var490 /* : Int */;
val* var491 /* : FlatString */;
val* var492 /* : Array[Object] */;
long var493 /* : Int */;
val* var494 /* : NativeArray[Object] */;
val* var495 /* : String */;
static val* varonce496;
val* var497 /* : String */;
char* var498 /* : NativeString */;
long var499 /* : Int */;
val* var500 /* : FlatString */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
long var504 /* : Int */;
val* var505 /* : FlatString */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
long var509 /* : Int */;
val* var510 /* : FlatString */;
val* var511 /* : MClass */;
val* var513 /* : MClass */;
val* var514 /* : String */;
val* var516 /* : String */;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : NativeString */;
long var520 /* : Int */;
val* var521 /* : FlatString */;
short int var522 /* : Bool */;
short int var523 /* : Bool */;
short int var525 /* : Bool */;
short int var526 /* : Bool */;
short int var527 /* : Bool */;
val* var528 /* : AbstractCompilerVisitor */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : NativeString */;
long var532 /* : Int */;
val* var533 /* : FlatString */;
val* var534 /* : Array[Object] */;
long var535 /* : Int */;
val* var536 /* : NativeArray[Object] */;
val* var537 /* : String */;
val* var538 /* : String */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
long var542 /* : Int */;
val* var543 /* : FlatString */;
static val* varonce544;
val* var545 /* : String */;
char* var546 /* : NativeString */;
long var547 /* : Int */;
val* var548 /* : FlatString */;
val* var549 /* : Array[Object] */;
long var550 /* : Int */;
val* var551 /* : NativeArray[Object] */;
val* var552 /* : String */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
long var556 /* : Int */;
val* var557 /* : FlatString */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : NativeString */;
long var561 /* : Int */;
val* var562 /* : FlatString */;
val* var563 /* : Array[Object] */;
long var564 /* : Int */;
val* var565 /* : NativeArray[Object] */;
val* var566 /* : String */;
val* var567 /* : String */;
static val* varonce568;
val* var569 /* : String */;
char* var570 /* : NativeString */;
long var571 /* : Int */;
val* var572 /* : FlatString */;
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : NativeString */;
long var576 /* : Int */;
val* var577 /* : FlatString */;
val* var578 /* : Array[Object] */;
long var579 /* : Int */;
val* var580 /* : NativeArray[Object] */;
val* var581 /* : String */;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : NativeString */;
long var585 /* : Int */;
val* var586 /* : FlatString */;
val* var587 /* : Array[Object] */;
long var588 /* : Int */;
val* var589 /* : NativeArray[Object] */;
val* var590 /* : String */;
static val* varonce591;
val* var592 /* : String */;
char* var593 /* : NativeString */;
long var594 /* : Int */;
val* var595 /* : FlatString */;
val* var596 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var597 /* : Bool */;
static val* varonce599;
val* var600 /* : String */;
char* var601 /* : NativeString */;
long var602 /* : Int */;
val* var603 /* : FlatString */;
val* var604 /* : String */;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : NativeString */;
long var608 /* : Int */;
val* var609 /* : FlatString */;
val* var610 /* : Array[Object] */;
long var611 /* : Int */;
val* var612 /* : NativeArray[Object] */;
val* var613 /* : String */;
static val* varonce614;
val* var615 /* : String */;
char* var616 /* : NativeString */;
long var617 /* : Int */;
val* var618 /* : FlatString */;
val* var619 /* : Array[Object] */;
long var620 /* : Int */;
val* var621 /* : NativeArray[Object] */;
val* var622 /* : String */;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : NativeString */;
long var626 /* : Int */;
val* var627 /* : FlatString */;
static val* varonce628;
val* var629 /* : String */;
char* var630 /* : NativeString */;
long var631 /* : Int */;
val* var632 /* : FlatString */;
val* var633 /* : Array[Object] */;
long var634 /* : Int */;
val* var635 /* : NativeArray[Object] */;
val* var636 /* : String */;
static val* varonce637;
val* var638 /* : String */;
char* var639 /* : NativeString */;
long var640 /* : Int */;
val* var641 /* : FlatString */;
static val* varonce642;
val* var643 /* : String */;
char* var644 /* : NativeString */;
long var645 /* : Int */;
val* var646 /* : FlatString */;
val* var647 /* : Array[Object] */;
long var648 /* : Int */;
val* var649 /* : NativeArray[Object] */;
val* var650 /* : String */;
static val* varonce651;
val* var652 /* : String */;
char* var653 /* : NativeString */;
long var654 /* : Int */;
val* var655 /* : FlatString */;
val* var656 /* : String */;
static val* varonce657;
val* var658 /* : String */;
char* var659 /* : NativeString */;
long var660 /* : Int */;
val* var661 /* : FlatString */;
static val* varonce662;
val* var663 /* : String */;
char* var664 /* : NativeString */;
long var665 /* : Int */;
val* var666 /* : FlatString */;
val* var667 /* : Array[Object] */;
long var668 /* : Int */;
val* var669 /* : NativeArray[Object] */;
val* var670 /* : String */;
static val* varonce671;
val* var672 /* : String */;
char* var673 /* : NativeString */;
long var674 /* : Int */;
val* var675 /* : FlatString */;
static val* varonce676;
val* var677 /* : String */;
char* var678 /* : NativeString */;
long var679 /* : Int */;
val* var680 /* : FlatString */;
val* var681 /* : Array[Object] */;
long var682 /* : Int */;
val* var683 /* : NativeArray[Object] */;
val* var684 /* : String */;
static val* varonce685;
val* var686 /* : String */;
char* var687 /* : NativeString */;
long var688 /* : Int */;
val* var689 /* : FlatString */;
val* var690 /* : String */;
val* var692 /* : String */;
static val* varonce693;
val* var694 /* : String */;
char* var695 /* : NativeString */;
long var696 /* : Int */;
val* var697 /* : FlatString */;
short int var698 /* : Bool */;
short int var699 /* : Bool */;
val* var700 /* : CodeWriter */;
val* var702 /* : CodeWriter */;
static val* varonce703;
val* var704 /* : String */;
char* var705 /* : NativeString */;
long var706 /* : Int */;
val* var707 /* : FlatString */;
static val* varonce708;
val* var709 /* : String */;
char* var710 /* : NativeString */;
long var711 /* : Int */;
val* var712 /* : FlatString */;
val* var713 /* : Array[Object] */;
long var714 /* : Int */;
val* var715 /* : NativeArray[Object] */;
val* var716 /* : String */;
val* var717 /* : CodeWriter */;
val* var719 /* : CodeWriter */;
static val* varonce720;
val* var721 /* : String */;
char* var722 /* : NativeString */;
long var723 /* : Int */;
val* var724 /* : FlatString */;
val* var725 /* : CodeWriter */;
val* var727 /* : CodeWriter */;
static val* varonce728;
val* var729 /* : String */;
char* var730 /* : NativeString */;
long var731 /* : Int */;
val* var732 /* : FlatString */;
val* var733 /* : CodeWriter */;
val* var735 /* : CodeWriter */;
static val* varonce736;
val* var737 /* : String */;
char* var738 /* : NativeString */;
long var739 /* : Int */;
val* var740 /* : FlatString */;
val* var741 /* : CodeWriter */;
val* var743 /* : CodeWriter */;
static val* varonce744;
val* var745 /* : String */;
char* var746 /* : NativeString */;
long var747 /* : Int */;
val* var748 /* : FlatString */;
val* var749 /* : CodeWriter */;
val* var751 /* : CodeWriter */;
static val* varonce752;
val* var753 /* : String */;
char* var754 /* : NativeString */;
long var755 /* : Int */;
val* var756 /* : FlatString */;
static val* varonce757;
val* var758 /* : String */;
char* var759 /* : NativeString */;
long var760 /* : Int */;
val* var761 /* : FlatString */;
val* var762 /* : Array[Object] */;
long var763 /* : Int */;
val* var764 /* : NativeArray[Object] */;
val* var765 /* : String */;
val* var766 /* : String */;
static val* varonce767;
val* var768 /* : String */;
char* var769 /* : NativeString */;
long var770 /* : Int */;
val* var771 /* : FlatString */;
static val* varonce772;
val* var773 /* : String */;
char* var774 /* : NativeString */;
long var775 /* : Int */;
val* var776 /* : FlatString */;
val* var777 /* : Array[Object] */;
long var778 /* : Int */;
val* var779 /* : NativeArray[Object] */;
val* var780 /* : String */;
static val* varonce781;
val* var782 /* : String */;
char* var783 /* : NativeString */;
long var784 /* : Int */;
val* var785 /* : FlatString */;
static val* varonce786;
val* var787 /* : String */;
char* var788 /* : NativeString */;
long var789 /* : Int */;
val* var790 /* : FlatString */;
val* var791 /* : Array[Object] */;
long var792 /* : Int */;
val* var793 /* : NativeArray[Object] */;
val* var794 /* : String */;
val* var795 /* : String */;
static val* varonce796;
val* var797 /* : String */;
char* var798 /* : NativeString */;
long var799 /* : Int */;
val* var800 /* : FlatString */;
static val* varonce801;
val* var802 /* : String */;
char* var803 /* : NativeString */;
long var804 /* : Int */;
val* var805 /* : FlatString */;
val* var806 /* : Array[Object] */;
long var807 /* : Int */;
val* var808 /* : NativeArray[Object] */;
val* var809 /* : String */;
static val* varonce810;
val* var811 /* : String */;
char* var812 /* : NativeString */;
long var813 /* : Int */;
val* var814 /* : FlatString */;
val* var815 /* : String */;
val* var_res816 /* var res: String */;
static val* varonce817;
val* var818 /* : String */;
char* var819 /* : NativeString */;
long var820 /* : Int */;
val* var821 /* : FlatString */;
static val* varonce822;
val* var823 /* : String */;
char* var824 /* : NativeString */;
long var825 /* : Int */;
val* var826 /* : FlatString */;
static val* varonce827;
val* var828 /* : String */;
char* var829 /* : NativeString */;
long var830 /* : Int */;
val* var831 /* : FlatString */;
val* var832 /* : Array[Object] */;
long var833 /* : Int */;
val* var834 /* : NativeArray[Object] */;
val* var835 /* : String */;
val* var836 /* : Array[MType] */;
val* var838 /* : Array[MType] */;
val* var839 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
static val* varonce840;
val* var841 /* : String */;
char* var842 /* : NativeString */;
long var843 /* : Int */;
val* var844 /* : FlatString */;
static val* varonce845;
val* var846 /* : String */;
char* var847 /* : NativeString */;
long var848 /* : Int */;
val* var849 /* : FlatString */;
val* var850 /* : String */;
static val* varonce851;
val* var852 /* : String */;
char* var853 /* : NativeString */;
long var854 /* : Int */;
val* var855 /* : FlatString */;
val* var856 /* : Array[Object] */;
long var857 /* : Int */;
val* var858 /* : NativeArray[Object] */;
val* var859 /* : String */;
static val* varonce860;
val* var861 /* : String */;
char* var862 /* : NativeString */;
long var863 /* : Int */;
val* var864 /* : FlatString */;
val* var865 /* : Array[Object] */;
long var866 /* : Int */;
val* var867 /* : NativeArray[Object] */;
val* var868 /* : String */;
static val* varonce869;
val* var870 /* : String */;
char* var871 /* : NativeString */;
long var872 /* : Int */;
val* var873 /* : FlatString */;
static val* varonce874;
val* var875 /* : String */;
char* var876 /* : NativeString */;
long var877 /* : Int */;
val* var878 /* : FlatString */;
val* var879 /* : Array[Object] */;
long var880 /* : Int */;
val* var881 /* : NativeArray[Object] */;
val* var882 /* : String */;
static val* varonce883;
val* var884 /* : String */;
char* var885 /* : NativeString */;
long var886 /* : Int */;
val* var887 /* : FlatString */;
static val* varonce888;
val* var889 /* : String */;
char* var890 /* : NativeString */;
long var891 /* : Int */;
val* var892 /* : FlatString */;
val* var893 /* : Array[Object] */;
long var894 /* : Int */;
val* var895 /* : NativeArray[Object] */;
val* var896 /* : String */;
static val* varonce897;
val* var898 /* : String */;
char* var899 /* : NativeString */;
long var900 /* : Int */;
val* var901 /* : FlatString */;
val* var902 /* : Array[Object] */;
long var903 /* : Int */;
val* var904 /* : NativeArray[Object] */;
val* var905 /* : String */;
static val* varonce906;
val* var907 /* : String */;
char* var908 /* : NativeString */;
long var909 /* : Int */;
val* var910 /* : FlatString */;
static val* varonce911;
val* var912 /* : String */;
char* var913 /* : NativeString */;
long var914 /* : Int */;
val* var915 /* : FlatString */;
val* var916 /* : Array[Object] */;
long var917 /* : Int */;
val* var918 /* : NativeArray[Object] */;
val* var919 /* : String */;
static val* varonce920;
val* var921 /* : String */;
char* var922 /* : NativeString */;
long var923 /* : Int */;
val* var924 /* : FlatString */;
short int var925 /* : Bool */;
val* var926 /* : MClass */;
val* var928 /* : MClass */;
val* var929 /* : MClassKind */;
val* var931 /* : MClassKind */;
val* var932 /* : MClassKind */;
short int var933 /* : Bool */;
short int var934 /* : Bool */;
short int var936 /* : Bool */;
short int var938 /* : Bool */;
short int var_939 /* var : Bool */;
val* var940 /* : MClass */;
val* var942 /* : MClass */;
val* var943 /* : String */;
val* var945 /* : String */;
static val* varonce946;
val* var947 /* : String */;
char* var948 /* : NativeString */;
long var949 /* : Int */;
val* var950 /* : FlatString */;
short int var951 /* : Bool */;
short int var952 /* : Bool */;
short int var954 /* : Bool */;
short int var955 /* : Bool */;
short int var956 /* : Bool */;
val* var957 /* : MModule */;
val* var959 /* : MModule */;
val* var960 /* : MClassType */;
short int var962 /* : Bool */;
val* var963 /* : MClassType */;
static val* varonce964;
val* var965 /* : String */;
char* var966 /* : NativeString */;
long var967 /* : Int */;
val* var968 /* : FlatString */;
val* var969 /* : MClass */;
val* var970 /* : MClassType */;
val* var972 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
static val* varonce973;
val* var974 /* : String */;
char* var975 /* : NativeString */;
long var976 /* : Int */;
val* var977 /* : FlatString */;
val* var978 /* : Array[Object] */;
long var979 /* : Int */;
val* var980 /* : NativeArray[Object] */;
val* var981 /* : String */;
val* var982 /* : String */;
static val* varonce983;
val* var984 /* : String */;
char* var985 /* : NativeString */;
long var986 /* : Int */;
val* var987 /* : FlatString */;
static val* varonce988;
val* var989 /* : String */;
char* var990 /* : NativeString */;
long var991 /* : Int */;
val* var992 /* : FlatString */;
val* var993 /* : Array[Object] */;
long var994 /* : Int */;
val* var995 /* : NativeArray[Object] */;
val* var996 /* : String */;
static val* varonce997;
val* var998 /* : String */;
char* var999 /* : NativeString */;
long var1000 /* : Int */;
val* var1001 /* : FlatString */;
static val* varonce1002;
val* var1003 /* : String */;
char* var1004 /* : NativeString */;
long var1005 /* : Int */;
val* var1006 /* : FlatString */;
val* var1007 /* : Array[Object] */;
long var1008 /* : Int */;
val* var1009 /* : NativeArray[Object] */;
val* var1010 /* : String */;
val* var1011 /* : String */;
static val* varonce1012;
val* var1013 /* : String */;
char* var1014 /* : NativeString */;
long var1015 /* : Int */;
val* var1016 /* : FlatString */;
static val* varonce1017;
val* var1018 /* : String */;
char* var1019 /* : NativeString */;
long var1020 /* : Int */;
val* var1021 /* : FlatString */;
val* var1022 /* : Array[Object] */;
long var1023 /* : Int */;
val* var1024 /* : NativeArray[Object] */;
val* var1025 /* : String */;
static val* varonce1026;
val* var1027 /* : String */;
char* var1028 /* : NativeString */;
long var1029 /* : Int */;
val* var1030 /* : FlatString */;
val* var1031 /* : Array[Object] */;
long var1032 /* : Int */;
val* var1033 /* : NativeArray[Object] */;
val* var1034 /* : String */;
static val* varonce1035;
val* var1036 /* : String */;
char* var1037 /* : NativeString */;
long var1038 /* : Int */;
val* var1039 /* : FlatString */;
val* var1040 /* : RuntimeVariable */;
val* var_res1041 /* var res: RuntimeVariable */;
short int var1042 /* : Bool */;
static val* varonce1044;
val* var1045 /* : String */;
char* var1046 /* : NativeString */;
long var1047 /* : Int */;
val* var1048 /* : FlatString */;
val* var1049 /* : String */;
static val* varonce1050;
val* var1051 /* : String */;
char* var1052 /* : NativeString */;
long var1053 /* : Int */;
val* var1054 /* : FlatString */;
val* var1055 /* : Array[Object] */;
long var1056 /* : Int */;
val* var1057 /* : NativeArray[Object] */;
val* var1058 /* : String */;
static val* varonce1059;
val* var1060 /* : String */;
char* var1061 /* : NativeString */;
long var1062 /* : Int */;
val* var1063 /* : FlatString */;
val* var1064 /* : Array[Object] */;
long var1065 /* : Int */;
val* var1066 /* : NativeArray[Object] */;
val* var1067 /* : String */;
static val* varonce1068;
val* var1069 /* : String */;
char* var1070 /* : NativeString */;
long var1071 /* : Int */;
val* var1072 /* : FlatString */;
static val* varonce1073;
val* var1074 /* : String */;
char* var1075 /* : NativeString */;
long var1076 /* : Int */;
val* var1077 /* : FlatString */;
val* var1078 /* : Array[Object] */;
long var1079 /* : Int */;
val* var1080 /* : NativeArray[Object] */;
val* var1081 /* : String */;
static val* varonce1082;
val* var1083 /* : String */;
char* var1084 /* : NativeString */;
long var1085 /* : Int */;
val* var1086 /* : FlatString */;
static val* varonce1087;
val* var1088 /* : String */;
char* var1089 /* : NativeString */;
long var1090 /* : Int */;
val* var1091 /* : FlatString */;
val* var1092 /* : Array[Object] */;
long var1093 /* : Int */;
val* var1094 /* : NativeArray[Object] */;
val* var1095 /* : String */;
static val* varonce1096;
val* var1097 /* : String */;
char* var1098 /* : NativeString */;
long var1099 /* : Int */;
val* var1100 /* : FlatString */;
val* var1101 /* : String */;
static val* varonce1102;
val* var1103 /* : String */;
char* var1104 /* : NativeString */;
long var1105 /* : Int */;
val* var1106 /* : FlatString */;
static val* varonce1107;
val* var1108 /* : String */;
char* var1109 /* : NativeString */;
long var1110 /* : Int */;
val* var1111 /* : FlatString */;
val* var1112 /* : Array[Object] */;
long var1113 /* : Int */;
val* var1114 /* : NativeArray[Object] */;
val* var1115 /* : String */;
static val* varonce1116;
val* var1117 /* : String */;
char* var1118 /* : NativeString */;
long var1119 /* : Int */;
val* var1120 /* : FlatString */;
static val* varonce1121;
val* var1122 /* : String */;
char* var1123 /* : NativeString */;
long var1124 /* : Int */;
val* var1125 /* : FlatString */;
val* var1126 /* : Array[Object] */;
long var1127 /* : Int */;
val* var1128 /* : NativeArray[Object] */;
val* var1129 /* : String */;
static val* varonce1130;
val* var1131 /* : String */;
char* var1132 /* : NativeString */;
long var1133 /* : Int */;
val* var1134 /* : FlatString */;
static val* varonce1135;
val* var1136 /* : String */;
char* var1137 /* : NativeString */;
long var1138 /* : Int */;
val* var1139 /* : FlatString */;
val* var1140 /* : Array[Object] */;
long var1141 /* : Int */;
val* var1142 /* : NativeArray[Object] */;
val* var1143 /* : String */;
val* var1144 /* : String */;
static val* varonce1145;
val* var1146 /* : String */;
char* var1147 /* : NativeString */;
long var1148 /* : Int */;
val* var1149 /* : FlatString */;
static val* varonce1150;
val* var1151 /* : String */;
char* var1152 /* : NativeString */;
long var1153 /* : Int */;
val* var1154 /* : FlatString */;
val* var1155 /* : Array[Object] */;
long var1156 /* : Int */;
val* var1157 /* : NativeArray[Object] */;
val* var1158 /* : String */;
static val* varonce1159;
val* var1160 /* : String */;
char* var1161 /* : NativeString */;
long var1162 /* : Int */;
val* var1163 /* : FlatString */;
static val* varonce1164;
val* var1165 /* : String */;
char* var1166 /* : NativeString */;
long var1167 /* : Int */;
val* var1168 /* : FlatString */;
val* var1169 /* : Array[Object] */;
long var1170 /* : Int */;
val* var1171 /* : NativeArray[Object] */;
val* var1172 /* : String */;
val* var1173 /* : String */;
static val* varonce1174;
val* var1175 /* : String */;
char* var1176 /* : NativeString */;
long var1177 /* : Int */;
val* var1178 /* : FlatString */;
static val* varonce1179;
val* var1180 /* : String */;
char* var1181 /* : NativeString */;
long var1182 /* : Int */;
val* var1183 /* : FlatString */;
val* var1184 /* : Array[Object] */;
long var1185 /* : Int */;
val* var1186 /* : NativeArray[Object] */;
val* var1187 /* : String */;
static val* varonce1188;
val* var1189 /* : String */;
char* var1190 /* : NativeString */;
long var1191 /* : Int */;
val* var1192 /* : FlatString */;
val* var1193 /* : Array[Object] */;
long var1194 /* : Int */;
val* var1195 /* : NativeArray[Object] */;
val* var1196 /* : String */;
static val* varonce1197;
val* var1198 /* : String */;
char* var1199 /* : NativeString */;
long var1200 /* : Int */;
val* var1201 /* : FlatString */;
val* var1202 /* : RuntimeVariable */;
val* var_res1203 /* var res: RuntimeVariable */;
short int var1204 /* : Bool */;
static val* varonce1206;
val* var1207 /* : String */;
char* var1208 /* : NativeString */;
long var1209 /* : Int */;
val* var1210 /* : FlatString */;
long var1211 /* : Int */;
long var1213 /* : Int */;
static val* varonce1214;
val* var1215 /* : String */;
char* var1216 /* : NativeString */;
long var1217 /* : Int */;
val* var1218 /* : FlatString */;
val* var1219 /* : Array[Object] */;
long var1220 /* : Int */;
val* var1221 /* : NativeArray[Object] */;
val* var1222 /* : Object */;
val* var1223 /* : String */;
static val* varonce1224;
val* var1225 /* : String */;
char* var1226 /* : NativeString */;
long var1227 /* : Int */;
val* var1228 /* : FlatString */;
val* var1229 /* : Array[Object] */;
long var1230 /* : Int */;
val* var1231 /* : NativeArray[Object] */;
val* var1232 /* : String */;
static val* varonce1233;
val* var1234 /* : String */;
char* var1235 /* : NativeString */;
long var1236 /* : Int */;
val* var1237 /* : FlatString */;
static val* varonce1238;
val* var1239 /* : String */;
char* var1240 /* : NativeString */;
long var1241 /* : Int */;
val* var1242 /* : FlatString */;
val* var1243 /* : Array[Object] */;
long var1244 /* : Int */;
val* var1245 /* : NativeArray[Object] */;
val* var1246 /* : String */;
static val* varonce1247;
val* var1248 /* : String */;
char* var1249 /* : NativeString */;
long var1250 /* : Int */;
val* var1251 /* : FlatString */;
static val* varonce1252;
val* var1253 /* : String */;
char* var1254 /* : NativeString */;
long var1255 /* : Int */;
val* var1256 /* : FlatString */;
val* var1257 /* : Array[Object] */;
long var1258 /* : Int */;
val* var1259 /* : NativeArray[Object] */;
val* var1260 /* : String */;
static val* varonce1261;
val* var1262 /* : String */;
char* var1263 /* : NativeString */;
long var1264 /* : Int */;
val* var1265 /* : FlatString */;
static val* varonce1266;
val* var1267 /* : String */;
char* var1268 /* : NativeString */;
long var1269 /* : Int */;
val* var1270 /* : FlatString */;
val* var1271 /* : Array[Object] */;
long var1272 /* : Int */;
val* var1273 /* : NativeArray[Object] */;
val* var1274 /* : String */;
static val* varonce1275;
val* var1276 /* : String */;
char* var1277 /* : NativeString */;
long var1278 /* : Int */;
val* var1279 /* : FlatString */;
var_mclass = p0;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var2 = var_mclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mtype = var3;
{
var6 = abstract_compiler__MClass__c_name(var_mclass);
}
var_c_name = var6;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var9 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 845);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val* (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var7, var_mclass) /* [] on <var7:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_vft = var10;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 846);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_mclass) /* [] on <var11:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_attrs = var14;
{
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var_v = var15;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var18 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_rta = var16;
var23 = NULL;
if (var_rta == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var23) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var23;
{
var28 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var27 = var28;
}
var29 = !var27;
var25 = var29;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
var_ = var24;
if (var24){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var32 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 62);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = hash_collection__HashSet__has(var30, var_mclass);
}
var34 = !var33;
var22 = var34;
} else {
var22 = var_;
}
var_35 = var22;
if (var22){
{
var36 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce) {
var37 = varonce;
} else {
var38 = "val*";
var39 = 4;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce = var37;
}
{
var42 = string__FlatString___61d_61d(var36, var37);
var41 = var42;
}
var21 = var41;
} else {
var21 = var_35;
}
var_43 = var21;
if (var21){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var46 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "NativeArray";
var50 = 11;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
{ /* Inline kernel#Object#!= (var44,var48) on <var44:String> */
var_other = var48;
{
var56 = ((short int (*)(val*, val*))(var44->class->vft[COLOR_kernel__Object___61d_61d]))(var44, var_other) /* == on <var44:String>*/;
var55 = var56;
}
var57 = !var55;
var53 = var57;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
var20 = var52;
} else {
var20 = var_43;
}
var_58 = var20;
if (var20){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var61 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = "Pointer";
var65 = 7;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
{
{ /* Inline kernel#Object#!= (var59,var63) on <var59:String> */
var_other = var63;
{
var71 = ((short int (*)(val*, val*))(var59->class->vft[COLOR_kernel__Object___61d_61d]))(var59, var_other) /* == on <var59:String>*/;
var70 = var71;
}
var72 = !var70;
var68 = var72;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
var19 = var67;
} else {
var19 = var_58;
}
var_is_dead = var19;
if (varonce73) {
var74 = varonce73;
} else {
var75 = "/* runtime class ";
var76 = 17;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = " */";
var81 = 3;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var83 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var83 = array_instance Array[Object] */
var84 = 3;
var85 = NEW_array__NativeArray(var84, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var85)->values[0] = (val*) var74;
((struct instance_array__NativeArray*)var85)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var85)->values[2] = (val*) var79;
{
((void (*)(val*, val*, long))(var83->class->vft[COLOR_array__Array__with_native]))(var83, var85, var84) /* with_native on <var83:Array[Object]>*/;
}
}
{
var86 = ((val* (*)(val*))(var83->class->vft[COLOR_string__Object__to_s]))(var83) /* to_s on <var83:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var86); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var87 = !var_is_dead;
if (var87){
if (varonce88) {
var89 = varonce88;
} else {
var90 = "class_";
var91 = 6;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
var93 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var93 = array_instance Array[Object] */
var94 = 2;
var95 = NEW_array__NativeArray(var94, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var95)->values[0] = (val*) var89;
((struct instance_array__NativeArray*)var95)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var93->class->vft[COLOR_array__Array__with_native]))(var93, var95, var94) /* with_native on <var93:Array[Object]>*/;
}
}
{
var96 = ((val* (*)(val*))(var93->class->vft[COLOR_string__Object__to_s]))(var93) /* to_s on <var93:Array[Object]>*/;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = "extern const struct class class_";
var100 = 32;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = ";";
var105 = 1;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 3;
var109 = NEW_array__NativeArray(var108, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var109)->values[0] = (val*) var98;
((struct instance_array__NativeArray*)var109)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var109)->values[2] = (val*) var103;
{
((void (*)(val*, val*, long))(var107->class->vft[COLOR_array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
}
{
var110 = ((val* (*)(val*))(var107->class->vft[COLOR_string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var96, var110); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = "const struct class class_";
var114 = 25;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = " = {";
var119 = 4;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 3;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var112;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var123)->values[2] = (val*) var117;
{
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
}
{
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var124); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var125 = separate_compiler__SeparateCompiler__box_kind_of(self, var_mclass);
}
if (varonce126) {
var127 = varonce126;
} else {
var128 = ", /* box_kind */";
var129 = 16;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var131 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var131 = array_instance Array[Object] */
var132 = 2;
var133 = NEW_array__NativeArray(var132, &type_array__NativeArraykernel__Object);
var134 = BOX_kernel__Int(var125); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var133)->values[0] = (val*) var134;
((struct instance_array__NativeArray*)var133)->values[1] = (val*) var127;
{
((void (*)(val*, val*, long))(var131->class->vft[COLOR_array__Array__with_native]))(var131, var133, var132) /* with_native on <var131:Array[Object]>*/;
}
}
{
var135 = ((val* (*)(val*))(var131->class->vft[COLOR_string__Object__to_s]))(var131) /* to_s on <var131:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var135); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = "{";
var139 = 1;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var137); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var141 = 0;
var_i = var141;
{
{ /* Inline array#AbstractArrayRead#length (var_vft) on <var_vft:Array[nullable MPropDef]> */
var144 = var_vft->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_vft:Array[nullable MPropDef]> */
var142 = var144;
RET_LABEL143:(void)0;
}
}
var_145 = var142;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_145) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_145:Int> isa OTHER */
/* <var_145:Int> isa OTHER */
var148 = 1; /* easy <var_145:Int> isa OTHER*/
if (unlikely(!var148)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var149 = var_i < var_145;
var146 = var149;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
if (var146){
{
var150 = array__Array___91d_93d(var_vft, var_i);
}
var_mpropdef = var150;
var151 = NULL;
if (var_mpropdef == NULL) {
var152 = 1; /* is null */
} else {
var152 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var151) on <var_mpropdef:nullable MPropDef> */
var_other155 = var151;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other155) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var158 = var_mpropdef == var_other155;
var156 = var158;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
var153 = var156;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
var152 = var153;
}
if (var152){
if (varonce159) {
var160 = varonce159;
} else {
var161 = "NULL, /* empty */";
var162 = 17;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var160); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype165 = type_model__MMethodDef.color;
idtype166 = type_model__MMethodDef.id;
if(cltype165 >= var_mpropdef->type->table_size) {
var164 = 0;
} else {
var164 = var_mpropdef->type->type_table[cltype165] == idtype166;
}
if (unlikely(!var164)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 692);
show_backtrace(1);
}
var168 = NULL;
if (var_rta == NULL) {
var169 = 0; /* is null */
} else {
var169 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var168) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var168;
{
var173 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var172 = var173;
}
var174 = !var172;
var170 = var174;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
var169 = var170;
}
var_175 = var169;
if (var169){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var178 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 72);
show_backtrace(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
var179 = hash_collection__HashSet__has(var176, var_mpropdef);
}
var180 = !var179;
var167 = var180;
} else {
var167 = var_175;
}
if (var167){
if (varonce181) {
var182 = varonce181;
} else {
var183 = "NULL, /* DEAD ";
var184 = 14;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var188 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
if (varonce189) {
var190 = varonce189;
} else {
var191 = ":";
var192 = 1;
var193 = string__NativeString__to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
if (varonce194) {
var195 = varonce194;
} else {
var196 = ":";
var197 = 1;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
if (varonce199) {
var200 = varonce199;
} else {
var201 = " */";
var202 = 3;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
var204 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var204 = array_instance Array[Object] */
var205 = 7;
var206 = NEW_array__NativeArray(var205, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var206)->values[0] = (val*) var182;
((struct instance_array__NativeArray*)var206)->values[1] = (val*) var186;
((struct instance_array__NativeArray*)var206)->values[2] = (val*) var190;
((struct instance_array__NativeArray*)var206)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var206)->values[4] = (val*) var195;
((struct instance_array__NativeArray*)var206)->values[5] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var206)->values[6] = (val*) var200;
{
((void (*)(val*, val*, long))(var204->class->vft[COLOR_array__Array__with_native]))(var204, var206, var205) /* with_native on <var204:Array[Object]>*/;
}
}
{
var207 = ((val* (*)(val*))(var204->class->vft[COLOR_string__Object__to_s]))(var204) /* to_s on <var204:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var207); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label;
} else {
}
{
var208 = separate_compiler__MMethodDef__virtual_runtime_function(var_mpropdef);
}
var_rf = var208;
{
var209 = abstract_compiler__AbstractRuntimeFunction__c_name(var_rf);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var209); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce210) {
var211 = varonce210;
} else {
var212 = "(nitmethod_t)";
var213 = 13;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
{
var215 = abstract_compiler__AbstractRuntimeFunction__c_name(var_rf);
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = ", /* pointer to ";
var219 = 16;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var223 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
if (varonce224) {
var225 = varonce224;
} else {
var226 = ":";
var227 = 1;
var228 = string__NativeString__to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
if (varonce229) {
var230 = varonce229;
} else {
var231 = ":";
var232 = 1;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
if (varonce234) {
var235 = varonce234;
} else {
var236 = " */";
var237 = 3;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
var239 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var239 = array_instance Array[Object] */
var240 = 9;
var241 = NEW_array__NativeArray(var240, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var241)->values[0] = (val*) var211;
((struct instance_array__NativeArray*)var241)->values[1] = (val*) var215;
((struct instance_array__NativeArray*)var241)->values[2] = (val*) var217;
((struct instance_array__NativeArray*)var241)->values[3] = (val*) var221;
((struct instance_array__NativeArray*)var241)->values[4] = (val*) var225;
((struct instance_array__NativeArray*)var241)->values[5] = (val*) var_mclass;
((struct instance_array__NativeArray*)var241)->values[6] = (val*) var230;
((struct instance_array__NativeArray*)var241)->values[7] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var241)->values[8] = (val*) var235;
{
((void (*)(val*, val*, long))(var239->class->vft[COLOR_array__Array__with_native]))(var239, var241, var240) /* with_native on <var239:Array[Object]>*/;
}
}
{
var242 = ((val* (*)(val*))(var239->class->vft[COLOR_string__Object__to_s]))(var239) /* to_s on <var239:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var242); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
BREAK_label: (void)0;
var243 = 1;
{
var244 = kernel__Int__successor(var_i, var243);
}
var_i = var244;
} else {
goto BREAK_label245;
}
}
BREAK_label245: (void)0;
if (varonce246) {
var247 = varonce246;
} else {
var248 = "}";
var249 = 1;
var250 = string__NativeString__to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var247); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce251) {
var252 = varonce251;
} else {
var253 = "};";
var254 = 2;
var255 = string__NativeString__to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var252); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
{
var257 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce258) {
var259 = varonce258;
} else {
var260 = "val*";
var261 = 4;
var262 = string__NativeString__to_s_with_length(var260, var261);
var259 = var262;
varonce258 = var259;
}
{
{ /* Inline kernel#Object#!= (var257,var259) on <var257:String> */
var_other = var259;
{
var267 = ((short int (*)(val*, val*))(var257->class->vft[COLOR_kernel__Object___61d_61d]))(var257, var_other) /* == on <var257:String>*/;
var266 = var267;
}
var268 = !var266;
var264 = var268;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
var263 = var264;
}
var_269 = var263;
if (var263){
var256 = var_269;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var272 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var272 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
{
{ /* Inline model#MClass#name (var270) on <var270:MClass> */
var275 = var270->attrs[COLOR_model__MClass___name].val; /* _name on <var270:MClass> */
if (unlikely(var275 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var273 = var275;
RET_LABEL274:(void)0;
}
}
if (varonce276) {
var277 = varonce276;
} else {
var278 = "Pointer";
var279 = 7;
var280 = string__NativeString__to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
{
var282 = string__FlatString___61d_61d(var273, var277);
var281 = var282;
}
var256 = var281;
}
if (var256){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var285 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
if (varonce286) {
var287 = varonce286;
} else {
var288 = "struct instance_";
var289 = 16;
var290 = string__NativeString__to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
if (varonce291) {
var292 = varonce291;
} else {
var293 = " {";
var294 = 2;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
var296 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var296 = array_instance Array[Object] */
var297 = 3;
var298 = NEW_array__NativeArray(var297, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var298)->values[0] = (val*) var287;
((struct instance_array__NativeArray*)var298)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var298)->values[2] = (val*) var292;
{
((void (*)(val*, val*, long))(var296->class->vft[COLOR_array__Array__with_native]))(var296, var298, var297) /* with_native on <var296:Array[Object]>*/;
}
}
{
var299 = ((val* (*)(val*))(var296->class->vft[COLOR_string__Object__to_s]))(var296) /* to_s on <var296:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var283, var299); /* Direct call abstract_compiler#CodeWriter#add_decl on <var283:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var302 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
if (varonce303) {
var304 = varonce303;
} else {
var305 = "const struct type *type;";
var306 = 24;
var307 = string__NativeString__to_s_with_length(var305, var306);
var304 = var307;
varonce303 = var304;
}
{
abstract_compiler__CodeWriter__add_decl(var300, var304); /* Direct call abstract_compiler#CodeWriter#add_decl on <var300:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var310 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var310 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
if (varonce311) {
var312 = varonce311;
} else {
var313 = "const struct class *class;";
var314 = 26;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
{
abstract_compiler__CodeWriter__add_decl(var308, var312); /* Direct call abstract_compiler#CodeWriter#add_decl on <var308:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var318 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var318 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var316 = var318;
RET_LABEL317:(void)0;
}
}
{
var319 = abstract_compiler__MClassType__ctype_extern(var_mtype);
}
if (varonce320) {
var321 = varonce320;
} else {
var322 = " value;";
var323 = 7;
var324 = string__NativeString__to_s_with_length(var322, var323);
var321 = var324;
varonce320 = var321;
}
var325 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var325 = array_instance Array[Object] */
var326 = 2;
var327 = NEW_array__NativeArray(var326, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var327)->values[0] = (val*) var319;
((struct instance_array__NativeArray*)var327)->values[1] = (val*) var321;
{
((void (*)(val*, val*, long))(var325->class->vft[COLOR_array__Array__with_native]))(var325, var327, var326) /* with_native on <var325:Array[Object]>*/;
}
}
{
var328 = ((val* (*)(val*))(var325->class->vft[COLOR_string__Object__to_s]))(var325) /* to_s on <var325:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var316, var328); /* Direct call abstract_compiler#CodeWriter#add_decl on <var316:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var331 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var331 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var329 = var331;
RET_LABEL330:(void)0;
}
}
if (varonce332) {
var333 = varonce332;
} else {
var334 = "};";
var335 = 2;
var336 = string__NativeString__to_s_with_length(var334, var335);
var333 = var336;
varonce332 = var333;
}
{
abstract_compiler__CodeWriter__add_decl(var329, var333); /* Direct call abstract_compiler#CodeWriter#add_decl on <var329:CodeWriter>*/
}
if (var_rta == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 716);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var_rta) on <var_rta:nullable RapidTypeAnalysis> */
if (unlikely(var_rta == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var340 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var_rta:nullable RapidTypeAnalysis> */
if (unlikely(var340 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var338 = var340;
RET_LABEL339:(void)0;
}
}
{
var341 = hash_collection__HashSet__has(var338, var_mtype);
}
var342 = !var341;
var_343 = var342;
if (var342){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var346 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var346 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var344 = var346;
RET_LABEL345:(void)0;
}
}
{
{ /* Inline model#MClass#name (var344) on <var344:MClass> */
var349 = var344->attrs[COLOR_model__MClass___name].val; /* _name on <var344:MClass> */
if (unlikely(var349 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
if (varonce350) {
var351 = varonce350;
} else {
var352 = "Pointer";
var353 = 7;
var354 = string__NativeString__to_s_with_length(var352, var353);
var351 = var354;
varonce350 = var351;
}
{
{ /* Inline kernel#Object#!= (var347,var351) on <var347:String> */
var_other = var351;
{
var359 = ((short int (*)(val*, val*))(var347->class->vft[COLOR_kernel__Object___61d_61d]))(var347, var_other) /* == on <var347:String>*/;
var358 = var359;
}
var360 = !var358;
var356 = var360;
goto RET_LABEL357;
RET_LABEL357:(void)0;
}
var355 = var356;
}
var337 = var355;
} else {
var337 = var_343;
}
if (var337){
goto RET_LABEL;
} else {
}
if (varonce361) {
var362 = varonce361;
} else {
var363 = "BOX_";
var364 = 4;
var365 = string__NativeString__to_s_with_length(var363, var364);
var362 = var365;
varonce361 = var362;
}
var366 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var366 = array_instance Array[Object] */
var367 = 2;
var368 = NEW_array__NativeArray(var367, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var368)->values[0] = (val*) var362;
((struct instance_array__NativeArray*)var368)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var366->class->vft[COLOR_array__Array__with_native]))(var366, var368, var367) /* with_native on <var366:Array[Object]>*/;
}
}
{
var369 = ((val* (*)(val*))(var366->class->vft[COLOR_string__Object__to_s]))(var366) /* to_s on <var366:Array[Object]>*/;
}
if (varonce370) {
var371 = varonce370;
} else {
var372 = "val* BOX_";
var373 = 9;
var374 = string__NativeString__to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
if (varonce375) {
var376 = varonce375;
} else {
var377 = "(";
var378 = 1;
var379 = string__NativeString__to_s_with_length(var377, var378);
var376 = var379;
varonce375 = var376;
}
{
var380 = abstract_compiler__MClassType__ctype_extern(var_mtype);
}
if (varonce381) {
var382 = varonce381;
} else {
var383 = ");";
var384 = 2;
var385 = string__NativeString__to_s_with_length(var383, var384);
var382 = var385;
varonce381 = var382;
}
var386 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var386 = array_instance Array[Object] */
var387 = 5;
var388 = NEW_array__NativeArray(var387, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var388)->values[0] = (val*) var371;
((struct instance_array__NativeArray*)var388)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var388)->values[2] = (val*) var376;
((struct instance_array__NativeArray*)var388)->values[3] = (val*) var380;
((struct instance_array__NativeArray*)var388)->values[4] = (val*) var382;
{
((void (*)(val*, val*, long))(var386->class->vft[COLOR_array__Array__with_native]))(var386, var388, var387) /* with_native on <var386:Array[Object]>*/;
}
}
{
var389 = ((val* (*)(val*))(var386->class->vft[COLOR_string__Object__to_s]))(var386) /* to_s on <var386:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var369, var389); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce390) {
var391 = varonce390;
} else {
var392 = "/* allocate ";
var393 = 12;
var394 = string__NativeString__to_s_with_length(var392, var393);
var391 = var394;
varonce390 = var391;
}
if (varonce395) {
var396 = varonce395;
} else {
var397 = " */";
var398 = 3;
var399 = string__NativeString__to_s_with_length(var397, var398);
var396 = var399;
varonce395 = var396;
}
var400 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var400 = array_instance Array[Object] */
var401 = 3;
var402 = NEW_array__NativeArray(var401, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var402)->values[0] = (val*) var391;
((struct instance_array__NativeArray*)var402)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var402)->values[2] = (val*) var396;
{
((void (*)(val*, val*, long))(var400->class->vft[COLOR_array__Array__with_native]))(var400, var402, var401) /* with_native on <var400:Array[Object]>*/;
}
}
{
var403 = ((val* (*)(val*))(var400->class->vft[COLOR_string__Object__to_s]))(var400) /* to_s on <var400:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var403); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce404) {
var405 = varonce404;
} else {
var406 = "val* BOX_";
var407 = 9;
var408 = string__NativeString__to_s_with_length(var406, var407);
var405 = var408;
varonce404 = var405;
}
{
var409 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce410) {
var411 = varonce410;
} else {
var412 = "(";
var413 = 1;
var414 = string__NativeString__to_s_with_length(var412, var413);
var411 = var414;
varonce410 = var411;
}
{
var415 = abstract_compiler__MClassType__ctype_extern(var_mtype);
}
if (varonce416) {
var417 = varonce416;
} else {
var418 = " value) {";
var419 = 9;
var420 = string__NativeString__to_s_with_length(var418, var419);
var417 = var420;
varonce416 = var417;
}
var421 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var421 = array_instance Array[Object] */
var422 = 5;
var423 = NEW_array__NativeArray(var422, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var423)->values[0] = (val*) var405;
((struct instance_array__NativeArray*)var423)->values[1] = (val*) var409;
((struct instance_array__NativeArray*)var423)->values[2] = (val*) var411;
((struct instance_array__NativeArray*)var423)->values[3] = (val*) var415;
((struct instance_array__NativeArray*)var423)->values[4] = (val*) var417;
{
((void (*)(val*, val*, long))(var421->class->vft[COLOR_array__Array__with_native]))(var421, var423, var422) /* with_native on <var421:Array[Object]>*/;
}
}
{
var424 = ((val* (*)(val*))(var421->class->vft[COLOR_string__Object__to_s]))(var421) /* to_s on <var421:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var424); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce425) {
var426 = varonce425;
} else {
var427 = "struct instance_";
var428 = 16;
var429 = string__NativeString__to_s_with_length(var427, var428);
var426 = var429;
varonce425 = var426;
}
if (varonce430) {
var431 = varonce430;
} else {
var432 = "*res = nit_alloc(sizeof(struct instance_";
var433 = 40;
var434 = string__NativeString__to_s_with_length(var432, var433);
var431 = var434;
varonce430 = var431;
}
if (varonce435) {
var436 = varonce435;
} else {
var437 = "));";
var438 = 3;
var439 = string__NativeString__to_s_with_length(var437, var438);
var436 = var439;
varonce435 = var436;
}
var440 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var440 = array_instance Array[Object] */
var441 = 5;
var442 = NEW_array__NativeArray(var441, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var442)->values[0] = (val*) var426;
((struct instance_array__NativeArray*)var442)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var442)->values[2] = (val*) var431;
((struct instance_array__NativeArray*)var442)->values[3] = (val*) var_c_name;
((struct instance_array__NativeArray*)var442)->values[4] = (val*) var436;
{
((void (*)(val*, val*, long))(var440->class->vft[COLOR_array__Array__with_native]))(var440, var442, var441) /* with_native on <var440:Array[Object]>*/;
}
}
{
var443 = ((val* (*)(val*))(var440->class->vft[COLOR_string__Object__to_s]))(var440) /* to_s on <var440:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var443); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var446 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var446 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var444 = var446;
RET_LABEL445:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var444) on <var444:AbstractCompiler(SeparateCompiler)> */
var449 = var444->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var444:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var449 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 156);
show_backtrace(1);
}
var447 = var449;
RET_LABEL448:(void)0;
}
}
{
((void (*)(val*, val*))(var447->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var447, var_mtype) /* add on <var447:Set[MType]>*/;
}
if (varonce450) {
var451 = varonce450;
} else {
var452 = "type_";
var453 = 5;
var454 = string__NativeString__to_s_with_length(var452, var453);
var451 = var454;
varonce450 = var451;
}
var455 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var455 = array_instance Array[Object] */
var456 = 2;
var457 = NEW_array__NativeArray(var456, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var457)->values[0] = (val*) var451;
((struct instance_array__NativeArray*)var457)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var455->class->vft[COLOR_array__Array__with_native]))(var455, var457, var456) /* with_native on <var455:Array[Object]>*/;
}
}
{
var458 = ((val* (*)(val*))(var455->class->vft[COLOR_string__Object__to_s]))(var455) /* to_s on <var455:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var458); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce459) {
var460 = varonce459;
} else {
var461 = "res->type = &type_";
var462 = 18;
var463 = string__NativeString__to_s_with_length(var461, var462);
var460 = var463;
varonce459 = var460;
}
if (varonce464) {
var465 = varonce464;
} else {
var466 = ";";
var467 = 1;
var468 = string__NativeString__to_s_with_length(var466, var467);
var465 = var468;
varonce464 = var465;
}
var469 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var469 = array_instance Array[Object] */
var470 = 3;
var471 = NEW_array__NativeArray(var470, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var471)->values[0] = (val*) var460;
((struct instance_array__NativeArray*)var471)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var471)->values[2] = (val*) var465;
{
((void (*)(val*, val*, long))(var469->class->vft[COLOR_array__Array__with_native]))(var469, var471, var470) /* with_native on <var469:Array[Object]>*/;
}
}
{
var472 = ((val* (*)(val*))(var469->class->vft[COLOR_string__Object__to_s]))(var469) /* to_s on <var469:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var472); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce473) {
var474 = varonce473;
} else {
var475 = "class_";
var476 = 6;
var477 = string__NativeString__to_s_with_length(var475, var476);
var474 = var477;
varonce473 = var474;
}
var478 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var478 = array_instance Array[Object] */
var479 = 2;
var480 = NEW_array__NativeArray(var479, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var480)->values[0] = (val*) var474;
((struct instance_array__NativeArray*)var480)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var478->class->vft[COLOR_array__Array__with_native]))(var478, var480, var479) /* with_native on <var478:Array[Object]>*/;
}
}
{
var481 = ((val* (*)(val*))(var478->class->vft[COLOR_string__Object__to_s]))(var478) /* to_s on <var478:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var481); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce482) {
var483 = varonce482;
} else {
var484 = "res->class = &class_";
var485 = 20;
var486 = string__NativeString__to_s_with_length(var484, var485);
var483 = var486;
varonce482 = var483;
}
if (varonce487) {
var488 = varonce487;
} else {
var489 = ";";
var490 = 1;
var491 = string__NativeString__to_s_with_length(var489, var490);
var488 = var491;
varonce487 = var488;
}
var492 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var492 = array_instance Array[Object] */
var493 = 3;
var494 = NEW_array__NativeArray(var493, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var494)->values[0] = (val*) var483;
((struct instance_array__NativeArray*)var494)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var494)->values[2] = (val*) var488;
{
((void (*)(val*, val*, long))(var492->class->vft[COLOR_array__Array__with_native]))(var492, var494, var493) /* with_native on <var492:Array[Object]>*/;
}
}
{
var495 = ((val* (*)(val*))(var492->class->vft[COLOR_string__Object__to_s]))(var492) /* to_s on <var492:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var495); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce496) {
var497 = varonce496;
} else {
var498 = "res->value = value;";
var499 = 19;
var500 = string__NativeString__to_s_with_length(var498, var499);
var497 = var500;
varonce496 = var497;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var497); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce501) {
var502 = varonce501;
} else {
var503 = "return (val*)res;";
var504 = 17;
var505 = string__NativeString__to_s_with_length(var503, var504);
var502 = var505;
varonce501 = var502;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var502); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce506) {
var507 = varonce506;
} else {
var508 = "}";
var509 = 1;
var510 = string__NativeString__to_s_with_length(var508, var509);
var507 = var510;
varonce506 = var507;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var507); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var513 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var513 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var511 = var513;
RET_LABEL512:(void)0;
}
}
{
{ /* Inline model#MClass#name (var511) on <var511:MClass> */
var516 = var511->attrs[COLOR_model__MClass___name].val; /* _name on <var511:MClass> */
if (unlikely(var516 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var514 = var516;
RET_LABEL515:(void)0;
}
}
if (varonce517) {
var518 = varonce517;
} else {
var519 = "Pointer";
var520 = 7;
var521 = string__NativeString__to_s_with_length(var519, var520);
var518 = var521;
varonce517 = var518;
}
{
{ /* Inline kernel#Object#!= (var514,var518) on <var514:String> */
var_other = var518;
{
var526 = ((short int (*)(val*, val*))(var514->class->vft[COLOR_kernel__Object___61d_61d]))(var514, var_other) /* == on <var514:String>*/;
var525 = var526;
}
var527 = !var525;
var523 = var527;
goto RET_LABEL524;
RET_LABEL524:(void)0;
}
var522 = var523;
}
if (var522){
goto RET_LABEL;
} else {
}
{
var528 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var_v = var528;
if (varonce529) {
var530 = varonce529;
} else {
var531 = "NEW_";
var532 = 4;
var533 = string__NativeString__to_s_with_length(var531, var532);
var530 = var533;
varonce529 = var530;
}
var534 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var534 = array_instance Array[Object] */
var535 = 2;
var536 = NEW_array__NativeArray(var535, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var536)->values[0] = (val*) var530;
((struct instance_array__NativeArray*)var536)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var534->class->vft[COLOR_array__Array__with_native]))(var534, var536, var535) /* with_native on <var534:Array[Object]>*/;
}
}
{
var537 = ((val* (*)(val*))(var534->class->vft[COLOR_string__Object__to_s]))(var534) /* to_s on <var534:Array[Object]>*/;
}
{
var538 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce539) {
var540 = varonce539;
} else {
var541 = " NEW_";
var542 = 5;
var543 = string__NativeString__to_s_with_length(var541, var542);
var540 = var543;
varonce539 = var540;
}
if (varonce544) {
var545 = varonce544;
} else {
var546 = "(const struct type* type);";
var547 = 26;
var548 = string__NativeString__to_s_with_length(var546, var547);
var545 = var548;
varonce544 = var545;
}
var549 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var549 = array_instance Array[Object] */
var550 = 4;
var551 = NEW_array__NativeArray(var550, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var551)->values[0] = (val*) var538;
((struct instance_array__NativeArray*)var551)->values[1] = (val*) var540;
((struct instance_array__NativeArray*)var551)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var551)->values[3] = (val*) var545;
{
((void (*)(val*, val*, long))(var549->class->vft[COLOR_array__Array__with_native]))(var549, var551, var550) /* with_native on <var549:Array[Object]>*/;
}
}
{
var552 = ((val* (*)(val*))(var549->class->vft[COLOR_string__Object__to_s]))(var549) /* to_s on <var549:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var537, var552); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce553) {
var554 = varonce553;
} else {
var555 = "/* allocate ";
var556 = 12;
var557 = string__NativeString__to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
if (varonce558) {
var559 = varonce558;
} else {
var560 = " */";
var561 = 3;
var562 = string__NativeString__to_s_with_length(var560, var561);
var559 = var562;
varonce558 = var559;
}
var563 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var563 = array_instance Array[Object] */
var564 = 3;
var565 = NEW_array__NativeArray(var564, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var565)->values[0] = (val*) var554;
((struct instance_array__NativeArray*)var565)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var565)->values[2] = (val*) var559;
{
((void (*)(val*, val*, long))(var563->class->vft[COLOR_array__Array__with_native]))(var563, var565, var564) /* with_native on <var563:Array[Object]>*/;
}
}
{
var566 = ((val* (*)(val*))(var563->class->vft[COLOR_string__Object__to_s]))(var563) /* to_s on <var563:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var566); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var567 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce568) {
var569 = varonce568;
} else {
var570 = " NEW_";
var571 = 5;
var572 = string__NativeString__to_s_with_length(var570, var571);
var569 = var572;
varonce568 = var569;
}
if (varonce573) {
var574 = varonce573;
} else {
var575 = "(const struct type* type) {";
var576 = 27;
var577 = string__NativeString__to_s_with_length(var575, var576);
var574 = var577;
varonce573 = var574;
}
var578 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var578 = array_instance Array[Object] */
var579 = 4;
var580 = NEW_array__NativeArray(var579, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var580)->values[0] = (val*) var567;
((struct instance_array__NativeArray*)var580)->values[1] = (val*) var569;
((struct instance_array__NativeArray*)var580)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var580)->values[3] = (val*) var574;
{
((void (*)(val*, val*, long))(var578->class->vft[COLOR_array__Array__with_native]))(var578, var580, var579) /* with_native on <var578:Array[Object]>*/;
}
}
{
var581 = ((val* (*)(val*))(var578->class->vft[COLOR_string__Object__to_s]))(var578) /* to_s on <var578:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var581); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce582) {
var583 = varonce582;
} else {
var584 = " is DEAD";
var585 = 8;
var586 = string__NativeString__to_s_with_length(var584, var585);
var583 = var586;
varonce582 = var583;
}
var587 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var587 = array_instance Array[Object] */
var588 = 2;
var589 = NEW_array__NativeArray(var588, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var589)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var589)->values[1] = (val*) var583;
{
((void (*)(val*, val*, long))(var587->class->vft[COLOR_array__Array__with_native]))(var587, var589, var588) /* with_native on <var587:Array[Object]>*/;
}
}
{
var590 = ((val* (*)(val*))(var587->class->vft[COLOR_string__Object__to_s]))(var587) /* to_s on <var587:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var590); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce591) {
var592 = varonce591;
} else {
var593 = "self";
var594 = 4;
var595 = string__NativeString__to_s_with_length(var593, var594);
var592 = var595;
varonce591 = var592;
}
{
var596 = abstract_compiler__AbstractCompilerVisitor__new_named_var(var_v, var_mtype, var592);
}
var_res = var596;
var597 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,var597) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = var597; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL598:(void)0;
}
}
if (varonce599) {
var600 = varonce599;
} else {
var601 = " = nit_alloc(sizeof(struct instance_";
var602 = 36;
var603 = string__NativeString__to_s_with_length(var601, var602);
var600 = var603;
varonce599 = var600;
}
{
var604 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce605) {
var606 = varonce605;
} else {
var607 = "));";
var608 = 3;
var609 = string__NativeString__to_s_with_length(var607, var608);
var606 = var609;
varonce605 = var606;
}
var610 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var610 = array_instance Array[Object] */
var611 = 4;
var612 = NEW_array__NativeArray(var611, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var612)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var612)->values[1] = (val*) var600;
((struct instance_array__NativeArray*)var612)->values[2] = (val*) var604;
((struct instance_array__NativeArray*)var612)->values[3] = (val*) var606;
{
((void (*)(val*, val*, long))(var610->class->vft[COLOR_array__Array__with_native]))(var610, var612, var611) /* with_native on <var610:Array[Object]>*/;
}
}
{
var613 = ((val* (*)(val*))(var610->class->vft[COLOR_string__Object__to_s]))(var610) /* to_s on <var610:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var613); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce614) {
var615 = varonce614;
} else {
var616 = "->type = type;";
var617 = 14;
var618 = string__NativeString__to_s_with_length(var616, var617);
var615 = var618;
varonce614 = var615;
}
var619 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var619 = array_instance Array[Object] */
var620 = 2;
var621 = NEW_array__NativeArray(var620, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var621)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var621)->values[1] = (val*) var615;
{
((void (*)(val*, val*, long))(var619->class->vft[COLOR_array__Array__with_native]))(var619, var621, var620) /* with_native on <var619:Array[Object]>*/;
}
}
{
var622 = ((val* (*)(val*))(var619->class->vft[COLOR_string__Object__to_s]))(var619) /* to_s on <var619:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var622); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce623) {
var624 = varonce623;
} else {
var625 = "type";
var626 = 4;
var627 = string__NativeString__to_s_with_length(var625, var626);
var624 = var627;
varonce623 = var624;
}
{
separate_compiler__SeparateCompiler__hardening_live_type(self, var_v, var624); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (varonce628) {
var629 = varonce628;
} else {
var630 = "class_";
var631 = 6;
var632 = string__NativeString__to_s_with_length(var630, var631);
var629 = var632;
varonce628 = var629;
}
var633 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var633 = array_instance Array[Object] */
var634 = 2;
var635 = NEW_array__NativeArray(var634, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var635)->values[0] = (val*) var629;
((struct instance_array__NativeArray*)var635)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var633->class->vft[COLOR_array__Array__with_native]))(var633, var635, var634) /* with_native on <var633:Array[Object]>*/;
}
}
{
var636 = ((val* (*)(val*))(var633->class->vft[COLOR_string__Object__to_s]))(var633) /* to_s on <var633:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var636); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce637) {
var638 = varonce637;
} else {
var639 = "->class = &class_";
var640 = 17;
var641 = string__NativeString__to_s_with_length(var639, var640);
var638 = var641;
varonce637 = var638;
}
if (varonce642) {
var643 = varonce642;
} else {
var644 = ";";
var645 = 1;
var646 = string__NativeString__to_s_with_length(var644, var645);
var643 = var646;
varonce642 = var643;
}
var647 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var647 = array_instance Array[Object] */
var648 = 4;
var649 = NEW_array__NativeArray(var648, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var649)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var649)->values[1] = (val*) var638;
((struct instance_array__NativeArray*)var649)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var649)->values[3] = (val*) var643;
{
((void (*)(val*, val*, long))(var647->class->vft[COLOR_array__Array__with_native]))(var647, var649, var648) /* with_native on <var647:Array[Object]>*/;
}
}
{
var650 = ((val* (*)(val*))(var647->class->vft[COLOR_string__Object__to_s]))(var647) /* to_s on <var647:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var650); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce651) {
var652 = varonce651;
} else {
var653 = "((struct instance_";
var654 = 18;
var655 = string__NativeString__to_s_with_length(var653, var654);
var652 = var655;
varonce651 = var652;
}
{
var656 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce657) {
var658 = varonce657;
} else {
var659 = "*)";
var660 = 2;
var661 = string__NativeString__to_s_with_length(var659, var660);
var658 = var661;
varonce657 = var658;
}
if (varonce662) {
var663 = varonce662;
} else {
var664 = ")->value = NULL;";
var665 = 16;
var666 = string__NativeString__to_s_with_length(var664, var665);
var663 = var666;
varonce662 = var663;
}
var667 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var667 = array_instance Array[Object] */
var668 = 5;
var669 = NEW_array__NativeArray(var668, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var669)->values[0] = (val*) var652;
((struct instance_array__NativeArray*)var669)->values[1] = (val*) var656;
((struct instance_array__NativeArray*)var669)->values[2] = (val*) var658;
((struct instance_array__NativeArray*)var669)->values[3] = (val*) var_res;
((struct instance_array__NativeArray*)var669)->values[4] = (val*) var663;
{
((void (*)(val*, val*, long))(var667->class->vft[COLOR_array__Array__with_native]))(var667, var669, var668) /* with_native on <var667:Array[Object]>*/;
}
}
{
var670 = ((val* (*)(val*))(var667->class->vft[COLOR_string__Object__to_s]))(var667) /* to_s on <var667:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var670); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce671) {
var672 = varonce671;
} else {
var673 = "return ";
var674 = 7;
var675 = string__NativeString__to_s_with_length(var673, var674);
var672 = var675;
varonce671 = var672;
}
if (varonce676) {
var677 = varonce676;
} else {
var678 = ";";
var679 = 1;
var680 = string__NativeString__to_s_with_length(var678, var679);
var677 = var680;
varonce676 = var677;
}
var681 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var681 = array_instance Array[Object] */
var682 = 3;
var683 = NEW_array__NativeArray(var682, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var683)->values[0] = (val*) var672;
((struct instance_array__NativeArray*)var683)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var683)->values[2] = (val*) var677;
{
((void (*)(val*, val*, long))(var681->class->vft[COLOR_array__Array__with_native]))(var681, var683, var682) /* with_native on <var681:Array[Object]>*/;
}
}
{
var684 = ((val* (*)(val*))(var681->class->vft[COLOR_string__Object__to_s]))(var681) /* to_s on <var681:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var684); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce685) {
var686 = varonce685;
} else {
var687 = "}";
var688 = 1;
var689 = string__NativeString__to_s_with_length(var687, var688);
var686 = var689;
varonce685 = var686;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var686); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var692 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var692 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var690 = var692;
RET_LABEL691:(void)0;
}
}
if (varonce693) {
var694 = varonce693;
} else {
var695 = "NativeArray";
var696 = 11;
var697 = string__NativeString__to_s_with_length(var695, var696);
var694 = var697;
varonce693 = var694;
}
{
var699 = string__FlatString___61d_61d(var690, var694);
var698 = var699;
}
if (var698){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var702 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var702 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var700 = var702;
RET_LABEL701:(void)0;
}
}
if (varonce703) {
var704 = varonce703;
} else {
var705 = "struct instance_";
var706 = 16;
var707 = string__NativeString__to_s_with_length(var705, var706);
var704 = var707;
varonce703 = var704;
}
if (varonce708) {
var709 = varonce708;
} else {
var710 = " {";
var711 = 2;
var712 = string__NativeString__to_s_with_length(var710, var711);
var709 = var712;
varonce708 = var709;
}
var713 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var713 = array_instance Array[Object] */
var714 = 3;
var715 = NEW_array__NativeArray(var714, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var715)->values[0] = (val*) var704;
((struct instance_array__NativeArray*)var715)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var715)->values[2] = (val*) var709;
{
((void (*)(val*, val*, long))(var713->class->vft[COLOR_array__Array__with_native]))(var713, var715, var714) /* with_native on <var713:Array[Object]>*/;
}
}
{
var716 = ((val* (*)(val*))(var713->class->vft[COLOR_string__Object__to_s]))(var713) /* to_s on <var713:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var700, var716); /* Direct call abstract_compiler#CodeWriter#add_decl on <var700:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var719 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var719 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var717 = var719;
RET_LABEL718:(void)0;
}
}
if (varonce720) {
var721 = varonce720;
} else {
var722 = "const struct type *type;";
var723 = 24;
var724 = string__NativeString__to_s_with_length(var722, var723);
var721 = var724;
varonce720 = var721;
}
{
abstract_compiler__CodeWriter__add_decl(var717, var721); /* Direct call abstract_compiler#CodeWriter#add_decl on <var717:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var727 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var727 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var725 = var727;
RET_LABEL726:(void)0;
}
}
if (varonce728) {
var729 = varonce728;
} else {
var730 = "const struct class *class;";
var731 = 26;
var732 = string__NativeString__to_s_with_length(var730, var731);
var729 = var732;
varonce728 = var729;
}
{
abstract_compiler__CodeWriter__add_decl(var725, var729); /* Direct call abstract_compiler#CodeWriter#add_decl on <var725:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var735 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var735 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var733 = var735;
RET_LABEL734:(void)0;
}
}
if (varonce736) {
var737 = varonce736;
} else {
var738 = "int length;";
var739 = 11;
var740 = string__NativeString__to_s_with_length(var738, var739);
var737 = var740;
varonce736 = var737;
}
{
abstract_compiler__CodeWriter__add_decl(var733, var737); /* Direct call abstract_compiler#CodeWriter#add_decl on <var733:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var743 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var743 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var741 = var743;
RET_LABEL742:(void)0;
}
}
if (varonce744) {
var745 = varonce744;
} else {
var746 = "val* values[0];";
var747 = 15;
var748 = string__NativeString__to_s_with_length(var746, var747);
var745 = var748;
varonce744 = var745;
}
{
abstract_compiler__CodeWriter__add_decl(var741, var745); /* Direct call abstract_compiler#CodeWriter#add_decl on <var741:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var751 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var751 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var749 = var751;
RET_LABEL750:(void)0;
}
}
if (varonce752) {
var753 = varonce752;
} else {
var754 = "};";
var755 = 2;
var756 = string__NativeString__to_s_with_length(var754, var755);
var753 = var756;
varonce752 = var753;
}
{
abstract_compiler__CodeWriter__add_decl(var749, var753); /* Direct call abstract_compiler#CodeWriter#add_decl on <var749:CodeWriter>*/
}
if (varonce757) {
var758 = varonce757;
} else {
var759 = "NEW_";
var760 = 4;
var761 = string__NativeString__to_s_with_length(var759, var760);
var758 = var761;
varonce757 = var758;
}
var762 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var762 = array_instance Array[Object] */
var763 = 2;
var764 = NEW_array__NativeArray(var763, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var764)->values[0] = (val*) var758;
((struct instance_array__NativeArray*)var764)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var762->class->vft[COLOR_array__Array__with_native]))(var762, var764, var763) /* with_native on <var762:Array[Object]>*/;
}
}
{
var765 = ((val* (*)(val*))(var762->class->vft[COLOR_string__Object__to_s]))(var762) /* to_s on <var762:Array[Object]>*/;
}
{
var766 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce767) {
var768 = varonce767;
} else {
var769 = " NEW_";
var770 = 5;
var771 = string__NativeString__to_s_with_length(var769, var770);
var768 = var771;
varonce767 = var768;
}
if (varonce772) {
var773 = varonce772;
} else {
var774 = "(int length, const struct type* type);";
var775 = 38;
var776 = string__NativeString__to_s_with_length(var774, var775);
var773 = var776;
varonce772 = var773;
}
var777 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var777 = array_instance Array[Object] */
var778 = 4;
var779 = NEW_array__NativeArray(var778, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var779)->values[0] = (val*) var766;
((struct instance_array__NativeArray*)var779)->values[1] = (val*) var768;
((struct instance_array__NativeArray*)var779)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var779)->values[3] = (val*) var773;
{
((void (*)(val*, val*, long))(var777->class->vft[COLOR_array__Array__with_native]))(var777, var779, var778) /* with_native on <var777:Array[Object]>*/;
}
}
{
var780 = ((val* (*)(val*))(var777->class->vft[COLOR_string__Object__to_s]))(var777) /* to_s on <var777:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var765, var780); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce781) {
var782 = varonce781;
} else {
var783 = "/* allocate ";
var784 = 12;
var785 = string__NativeString__to_s_with_length(var783, var784);
var782 = var785;
varonce781 = var782;
}
if (varonce786) {
var787 = varonce786;
} else {
var788 = " */";
var789 = 3;
var790 = string__NativeString__to_s_with_length(var788, var789);
var787 = var790;
varonce786 = var787;
}
var791 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var791 = array_instance Array[Object] */
var792 = 3;
var793 = NEW_array__NativeArray(var792, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var793)->values[0] = (val*) var782;
((struct instance_array__NativeArray*)var793)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var793)->values[2] = (val*) var787;
{
((void (*)(val*, val*, long))(var791->class->vft[COLOR_array__Array__with_native]))(var791, var793, var792) /* with_native on <var791:Array[Object]>*/;
}
}
{
var794 = ((val* (*)(val*))(var791->class->vft[COLOR_string__Object__to_s]))(var791) /* to_s on <var791:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var794); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var795 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce796) {
var797 = varonce796;
} else {
var798 = " NEW_";
var799 = 5;
var800 = string__NativeString__to_s_with_length(var798, var799);
var797 = var800;
varonce796 = var797;
}
if (varonce801) {
var802 = varonce801;
} else {
var803 = "(int length, const struct type* type) {";
var804 = 39;
var805 = string__NativeString__to_s_with_length(var803, var804);
var802 = var805;
varonce801 = var802;
}
var806 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var806 = array_instance Array[Object] */
var807 = 4;
var808 = NEW_array__NativeArray(var807, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var808)->values[0] = (val*) var795;
((struct instance_array__NativeArray*)var808)->values[1] = (val*) var797;
((struct instance_array__NativeArray*)var808)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var808)->values[3] = (val*) var802;
{
((void (*)(val*, val*, long))(var806->class->vft[COLOR_array__Array__with_native]))(var806, var808, var807) /* with_native on <var806:Array[Object]>*/;
}
}
{
var809 = ((val* (*)(val*))(var806->class->vft[COLOR_string__Object__to_s]))(var806) /* to_s on <var806:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var809); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce810) {
var811 = varonce810;
} else {
var812 = "self";
var813 = 4;
var814 = string__NativeString__to_s_with_length(var812, var813);
var811 = var814;
varonce810 = var811;
}
{
var815 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var811);
}
var_res816 = var815;
if (varonce817) {
var818 = varonce817;
} else {
var819 = "struct instance_";
var820 = 16;
var821 = string__NativeString__to_s_with_length(var819, var820);
var818 = var821;
varonce817 = var818;
}
if (varonce822) {
var823 = varonce822;
} else {
var824 = " *";
var825 = 2;
var826 = string__NativeString__to_s_with_length(var824, var825);
var823 = var826;
varonce822 = var823;
}
if (varonce827) {
var828 = varonce827;
} else {
var829 = ";";
var830 = 1;
var831 = string__NativeString__to_s_with_length(var829, var830);
var828 = var831;
varonce827 = var828;
}
var832 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var832 = array_instance Array[Object] */
var833 = 5;
var834 = NEW_array__NativeArray(var833, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var834)->values[0] = (val*) var818;
((struct instance_array__NativeArray*)var834)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var834)->values[2] = (val*) var823;
((struct instance_array__NativeArray*)var834)->values[3] = (val*) var_res816;
((struct instance_array__NativeArray*)var834)->values[4] = (val*) var828;
{
((void (*)(val*, val*, long))(var832->class->vft[COLOR_array__Array__with_native]))(var832, var834, var833) /* with_native on <var832:Array[Object]>*/;
}
}
{
var835 = ((val* (*)(val*))(var832->class->vft[COLOR_string__Object__to_s]))(var832) /* to_s on <var832:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var835); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#arguments (var_mtype) on <var_mtype:MClassType> */
var838 = var_mtype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_mtype:MClassType> */
if (unlikely(var838 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var836 = var838;
RET_LABEL837:(void)0;
}
}
{
var839 = abstract_collection__SequenceRead__first(var836);
}
var_mtype_elt = var839;
if (varonce840) {
var841 = varonce840;
} else {
var842 = " = nit_alloc(sizeof(struct instance_";
var843 = 36;
var844 = string__NativeString__to_s_with_length(var842, var843);
var841 = var844;
varonce840 = var841;
}
if (varonce845) {
var846 = varonce845;
} else {
var847 = ") + length*sizeof(";
var848 = 18;
var849 = string__NativeString__to_s_with_length(var847, var848);
var846 = var849;
varonce845 = var846;
}
{
var850 = ((val* (*)(val*))(var_mtype_elt->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype_elt) /* ctype on <var_mtype_elt:MType>*/;
}
if (varonce851) {
var852 = varonce851;
} else {
var853 = "));";
var854 = 3;
var855 = string__NativeString__to_s_with_length(var853, var854);
var852 = var855;
varonce851 = var852;
}
var856 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var856 = array_instance Array[Object] */
var857 = 6;
var858 = NEW_array__NativeArray(var857, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var858)->values[0] = (val*) var_res816;
((struct instance_array__NativeArray*)var858)->values[1] = (val*) var841;
((struct instance_array__NativeArray*)var858)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var858)->values[3] = (val*) var846;
((struct instance_array__NativeArray*)var858)->values[4] = (val*) var850;
((struct instance_array__NativeArray*)var858)->values[5] = (val*) var852;
{
((void (*)(val*, val*, long))(var856->class->vft[COLOR_array__Array__with_native]))(var856, var858, var857) /* with_native on <var856:Array[Object]>*/;
}
}
{
var859 = ((val* (*)(val*))(var856->class->vft[COLOR_string__Object__to_s]))(var856) /* to_s on <var856:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var859); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce860) {
var861 = varonce860;
} else {
var862 = "->type = type;";
var863 = 14;
var864 = string__NativeString__to_s_with_length(var862, var863);
var861 = var864;
varonce860 = var861;
}
var865 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var865 = array_instance Array[Object] */
var866 = 2;
var867 = NEW_array__NativeArray(var866, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var867)->values[0] = (val*) var_res816;
((struct instance_array__NativeArray*)var867)->values[1] = (val*) var861;
{
((void (*)(val*, val*, long))(var865->class->vft[COLOR_array__Array__with_native]))(var865, var867, var866) /* with_native on <var865:Array[Object]>*/;
}
}
{
var868 = ((val* (*)(val*))(var865->class->vft[COLOR_string__Object__to_s]))(var865) /* to_s on <var865:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var868); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce869) {
var870 = varonce869;
} else {
var871 = "type";
var872 = 4;
var873 = string__NativeString__to_s_with_length(var871, var872);
var870 = var873;
varonce869 = var870;
}
{
separate_compiler__SeparateCompiler__hardening_live_type(self, var_v, var870); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (varonce874) {
var875 = varonce874;
} else {
var876 = "class_";
var877 = 6;
var878 = string__NativeString__to_s_with_length(var876, var877);
var875 = var878;
varonce874 = var875;
}
var879 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var879 = array_instance Array[Object] */
var880 = 2;
var881 = NEW_array__NativeArray(var880, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var881)->values[0] = (val*) var875;
((struct instance_array__NativeArray*)var881)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var879->class->vft[COLOR_array__Array__with_native]))(var879, var881, var880) /* with_native on <var879:Array[Object]>*/;
}
}
{
var882 = ((val* (*)(val*))(var879->class->vft[COLOR_string__Object__to_s]))(var879) /* to_s on <var879:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var882); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce883) {
var884 = varonce883;
} else {
var885 = "->class = &class_";
var886 = 17;
var887 = string__NativeString__to_s_with_length(var885, var886);
var884 = var887;
varonce883 = var884;
}
if (varonce888) {
var889 = varonce888;
} else {
var890 = ";";
var891 = 1;
var892 = string__NativeString__to_s_with_length(var890, var891);
var889 = var892;
varonce888 = var889;
}
var893 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var893 = array_instance Array[Object] */
var894 = 4;
var895 = NEW_array__NativeArray(var894, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var895)->values[0] = (val*) var_res816;
((struct instance_array__NativeArray*)var895)->values[1] = (val*) var884;
((struct instance_array__NativeArray*)var895)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var895)->values[3] = (val*) var889;
{
((void (*)(val*, val*, long))(var893->class->vft[COLOR_array__Array__with_native]))(var893, var895, var894) /* with_native on <var893:Array[Object]>*/;
}
}
{
var896 = ((val* (*)(val*))(var893->class->vft[COLOR_string__Object__to_s]))(var893) /* to_s on <var893:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var896); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce897) {
var898 = varonce897;
} else {
var899 = "->length = length;";
var900 = 18;
var901 = string__NativeString__to_s_with_length(var899, var900);
var898 = var901;
varonce897 = var898;
}
var902 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var902 = array_instance Array[Object] */
var903 = 2;
var904 = NEW_array__NativeArray(var903, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var904)->values[0] = (val*) var_res816;
((struct instance_array__NativeArray*)var904)->values[1] = (val*) var898;
{
((void (*)(val*, val*, long))(var902->class->vft[COLOR_array__Array__with_native]))(var902, var904, var903) /* with_native on <var902:Array[Object]>*/;
}
}
{
var905 = ((val* (*)(val*))(var902->class->vft[COLOR_string__Object__to_s]))(var902) /* to_s on <var902:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var905); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce906) {
var907 = varonce906;
} else {
var908 = "return (val*)";
var909 = 13;
var910 = string__NativeString__to_s_with_length(var908, var909);
var907 = var910;
varonce906 = var907;
}
if (varonce911) {
var912 = varonce911;
} else {
var913 = ";";
var914 = 1;
var915 = string__NativeString__to_s_with_length(var913, var914);
var912 = var915;
varonce911 = var912;
}
var916 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var916 = array_instance Array[Object] */
var917 = 3;
var918 = NEW_array__NativeArray(var917, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var918)->values[0] = (val*) var907;
((struct instance_array__NativeArray*)var918)->values[1] = (val*) var_res816;
((struct instance_array__NativeArray*)var918)->values[2] = (val*) var912;
{
((void (*)(val*, val*, long))(var916->class->vft[COLOR_array__Array__with_native]))(var916, var918, var917) /* with_native on <var916:Array[Object]>*/;
}
}
{
var919 = ((val* (*)(val*))(var916->class->vft[COLOR_string__Object__to_s]))(var916) /* to_s on <var916:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var919); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce920) {
var921 = varonce920;
} else {
var922 = "}";
var923 = 1;
var924 = string__NativeString__to_s_with_length(var922, var923);
var921 = var924;
varonce920 = var921;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var921); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var928 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var928 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var926 = var928;
RET_LABEL927:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var926) on <var926:MClass> */
var931 = var926->attrs[COLOR_model__MClass___kind].val; /* _kind on <var926:MClass> */
if (unlikely(var931 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var929 = var931;
RET_LABEL930:(void)0;
}
}
{
var932 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var929,var932) on <var929:MClassKind> */
var_other155 = var932;
{
{ /* Inline kernel#Object#is_same_instance (var929,var_other155) on <var929:MClassKind> */
var938 = var929 == var_other155;
var936 = var938;
goto RET_LABEL937;
RET_LABEL937:(void)0;
}
}
var934 = var936;
goto RET_LABEL935;
RET_LABEL935:(void)0;
}
var933 = var934;
}
var_939 = var933;
if (var933){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var942 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var942 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var940 = var942;
RET_LABEL941:(void)0;
}
}
{
{ /* Inline model#MClass#name (var940) on <var940:MClass> */
var945 = var940->attrs[COLOR_model__MClass___name].val; /* _name on <var940:MClass> */
if (unlikely(var945 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var943 = var945;
RET_LABEL944:(void)0;
}
}
if (varonce946) {
var947 = varonce946;
} else {
var948 = "NativeString";
var949 = 12;
var950 = string__NativeString__to_s_with_length(var948, var949);
var947 = var950;
varonce946 = var947;
}
{
{ /* Inline kernel#Object#!= (var943,var947) on <var943:String> */
var_other = var947;
{
var955 = ((short int (*)(val*, val*))(var943->class->vft[COLOR_kernel__Object___61d_61d]))(var943, var_other) /* == on <var943:String>*/;
var954 = var955;
}
var956 = !var954;
var952 = var956;
goto RET_LABEL953;
RET_LABEL953:(void)0;
}
var951 = var952;
}
var925 = var951;
} else {
var925 = var_939;
}
if (var925){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var959 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var959 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var957 = var959;
RET_LABEL958:(void)0;
}
}
{
{ /* Inline model#MModule#pointer_type (var957) on <var957:MModule> */
var962 = var957->attrs[COLOR_model__MModule___pointer_type].val != NULL; /* _pointer_type on <var957:MModule> */
if(likely(var962)) {
var963 = var957->attrs[COLOR_model__MModule___pointer_type].val; /* _pointer_type on <var957:MModule> */
if (unlikely(var963 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 217);
show_backtrace(1);
}
} else {
if (varonce964) {
var965 = varonce964;
} else {
var966 = "Pointer";
var967 = 7;
var968 = string__NativeString__to_s_with_length(var966, var967);
var965 = var968;
varonce964 = var965;
}
{
var969 = model__MModule__get_primitive_class(var957, var965);
}
{
{ /* Inline model#MClass#mclass_type (var969) on <var969:MClass> */
var972 = var969->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var969:MClass> */
if (unlikely(var972 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var970 = var972;
RET_LABEL971:(void)0;
}
}
var957->attrs[COLOR_model__MModule___pointer_type].val = var970; /* _pointer_type on <var957:MModule> */
var963 = var970;
}
var960 = var963;
RET_LABEL961:(void)0;
}
}
var_pointer_type = var960;
if (varonce973) {
var974 = varonce973;
} else {
var975 = "NEW_";
var976 = 4;
var977 = string__NativeString__to_s_with_length(var975, var976);
var974 = var977;
varonce973 = var974;
}
var978 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var978 = array_instance Array[Object] */
var979 = 2;
var980 = NEW_array__NativeArray(var979, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var980)->values[0] = (val*) var974;
((struct instance_array__NativeArray*)var980)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var978->class->vft[COLOR_array__Array__with_native]))(var978, var980, var979) /* with_native on <var978:Array[Object]>*/;
}
}
{
var981 = ((val* (*)(val*))(var978->class->vft[COLOR_string__Object__to_s]))(var978) /* to_s on <var978:Array[Object]>*/;
}
{
var982 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce983) {
var984 = varonce983;
} else {
var985 = " NEW_";
var986 = 5;
var987 = string__NativeString__to_s_with_length(var985, var986);
var984 = var987;
varonce983 = var984;
}
if (varonce988) {
var989 = varonce988;
} else {
var990 = "(const struct type* type);";
var991 = 26;
var992 = string__NativeString__to_s_with_length(var990, var991);
var989 = var992;
varonce988 = var989;
}
var993 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var993 = array_instance Array[Object] */
var994 = 4;
var995 = NEW_array__NativeArray(var994, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var995)->values[0] = (val*) var982;
((struct instance_array__NativeArray*)var995)->values[1] = (val*) var984;
((struct instance_array__NativeArray*)var995)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var995)->values[3] = (val*) var989;
{
((void (*)(val*, val*, long))(var993->class->vft[COLOR_array__Array__with_native]))(var993, var995, var994) /* with_native on <var993:Array[Object]>*/;
}
}
{
var996 = ((val* (*)(val*))(var993->class->vft[COLOR_string__Object__to_s]))(var993) /* to_s on <var993:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var981, var996); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce997) {
var998 = varonce997;
} else {
var999 = "/* allocate ";
var1000 = 12;
var1001 = string__NativeString__to_s_with_length(var999, var1000);
var998 = var1001;
varonce997 = var998;
}
if (varonce1002) {
var1003 = varonce1002;
} else {
var1004 = " */";
var1005 = 3;
var1006 = string__NativeString__to_s_with_length(var1004, var1005);
var1003 = var1006;
varonce1002 = var1003;
}
var1007 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1007 = array_instance Array[Object] */
var1008 = 3;
var1009 = NEW_array__NativeArray(var1008, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1009)->values[0] = (val*) var998;
((struct instance_array__NativeArray*)var1009)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var1009)->values[2] = (val*) var1003;
{
((void (*)(val*, val*, long))(var1007->class->vft[COLOR_array__Array__with_native]))(var1007, var1009, var1008) /* with_native on <var1007:Array[Object]>*/;
}
}
{
var1010 = ((val* (*)(val*))(var1007->class->vft[COLOR_string__Object__to_s]))(var1007) /* to_s on <var1007:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var1010); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var1011 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce1012) {
var1013 = varonce1012;
} else {
var1014 = " NEW_";
var1015 = 5;
var1016 = string__NativeString__to_s_with_length(var1014, var1015);
var1013 = var1016;
varonce1012 = var1013;
}
if (varonce1017) {
var1018 = varonce1017;
} else {
var1019 = "(const struct type* type) {";
var1020 = 27;
var1021 = string__NativeString__to_s_with_length(var1019, var1020);
var1018 = var1021;
varonce1017 = var1018;
}
var1022 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1022 = array_instance Array[Object] */
var1023 = 4;
var1024 = NEW_array__NativeArray(var1023, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1024)->values[0] = (val*) var1011;
((struct instance_array__NativeArray*)var1024)->values[1] = (val*) var1013;
((struct instance_array__NativeArray*)var1024)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1024)->values[3] = (val*) var1018;
{
((void (*)(val*, val*, long))(var1022->class->vft[COLOR_array__Array__with_native]))(var1022, var1024, var1023) /* with_native on <var1022:Array[Object]>*/;
}
}
{
var1025 = ((val* (*)(val*))(var1022->class->vft[COLOR_string__Object__to_s]))(var1022) /* to_s on <var1022:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var1025); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce1026) {
var1027 = varonce1026;
} else {
var1028 = " is DEAD";
var1029 = 8;
var1030 = string__NativeString__to_s_with_length(var1028, var1029);
var1027 = var1030;
varonce1026 = var1027;
}
var1031 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1031 = array_instance Array[Object] */
var1032 = 2;
var1033 = NEW_array__NativeArray(var1032, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1033)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var1033)->values[1] = (val*) var1027;
{
((void (*)(val*, val*, long))(var1031->class->vft[COLOR_array__Array__with_native]))(var1031, var1033, var1032) /* with_native on <var1031:Array[Object]>*/;
}
}
{
var1034 = ((val* (*)(val*))(var1031->class->vft[COLOR_string__Object__to_s]))(var1031) /* to_s on <var1031:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var1034); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce1035) {
var1036 = varonce1035;
} else {
var1037 = "self";
var1038 = 4;
var1039 = string__NativeString__to_s_with_length(var1037, var1038);
var1036 = var1039;
varonce1035 = var1036;
}
{
var1040 = abstract_compiler__AbstractCompilerVisitor__new_named_var(var_v, var_mtype, var1036);
}
var_res1041 = var1040;
var1042 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1041,var1042) on <var_res1041:RuntimeVariable> */
var_res1041->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = var1042; /* _is_exact on <var_res1041:RuntimeVariable> */
RET_LABEL1043:(void)0;
}
}
if (varonce1044) {
var1045 = varonce1044;
} else {
var1046 = " = nit_alloc(sizeof(struct instance_";
var1047 = 36;
var1048 = string__NativeString__to_s_with_length(var1046, var1047);
var1045 = var1048;
varonce1044 = var1045;
}
{
var1049 = ((val* (*)(val*))(var_pointer_type->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce1050) {
var1051 = varonce1050;
} else {
var1052 = "));";
var1053 = 3;
var1054 = string__NativeString__to_s_with_length(var1052, var1053);
var1051 = var1054;
varonce1050 = var1051;
}
var1055 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1055 = array_instance Array[Object] */
var1056 = 4;
var1057 = NEW_array__NativeArray(var1056, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1057)->values[0] = (val*) var_res1041;
((struct instance_array__NativeArray*)var1057)->values[1] = (val*) var1045;
((struct instance_array__NativeArray*)var1057)->values[2] = (val*) var1049;
((struct instance_array__NativeArray*)var1057)->values[3] = (val*) var1051;
{
((void (*)(val*, val*, long))(var1055->class->vft[COLOR_array__Array__with_native]))(var1055, var1057, var1056) /* with_native on <var1055:Array[Object]>*/;
}
}
{
var1058 = ((val* (*)(val*))(var1055->class->vft[COLOR_string__Object__to_s]))(var1055) /* to_s on <var1055:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1058); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1059) {
var1060 = varonce1059;
} else {
var1061 = "->type = type;";
var1062 = 14;
var1063 = string__NativeString__to_s_with_length(var1061, var1062);
var1060 = var1063;
varonce1059 = var1060;
}
var1064 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1064 = array_instance Array[Object] */
var1065 = 2;
var1066 = NEW_array__NativeArray(var1065, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1066)->values[0] = (val*) var_res1041;
((struct instance_array__NativeArray*)var1066)->values[1] = (val*) var1060;
{
((void (*)(val*, val*, long))(var1064->class->vft[COLOR_array__Array__with_native]))(var1064, var1066, var1065) /* with_native on <var1064:Array[Object]>*/;
}
}
{
var1067 = ((val* (*)(val*))(var1064->class->vft[COLOR_string__Object__to_s]))(var1064) /* to_s on <var1064:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1067); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1068) {
var1069 = varonce1068;
} else {
var1070 = "type";
var1071 = 4;
var1072 = string__NativeString__to_s_with_length(var1070, var1071);
var1069 = var1072;
varonce1068 = var1069;
}
{
separate_compiler__SeparateCompiler__hardening_live_type(self, var_v, var1069); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (varonce1073) {
var1074 = varonce1073;
} else {
var1075 = "class_";
var1076 = 6;
var1077 = string__NativeString__to_s_with_length(var1075, var1076);
var1074 = var1077;
varonce1073 = var1074;
}
var1078 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1078 = array_instance Array[Object] */
var1079 = 2;
var1080 = NEW_array__NativeArray(var1079, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1080)->values[0] = (val*) var1074;
((struct instance_array__NativeArray*)var1080)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var1078->class->vft[COLOR_array__Array__with_native]))(var1078, var1080, var1079) /* with_native on <var1078:Array[Object]>*/;
}
}
{
var1081 = ((val* (*)(val*))(var1078->class->vft[COLOR_string__Object__to_s]))(var1078) /* to_s on <var1078:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var1081); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1082) {
var1083 = varonce1082;
} else {
var1084 = "->class = &class_";
var1085 = 17;
var1086 = string__NativeString__to_s_with_length(var1084, var1085);
var1083 = var1086;
varonce1082 = var1083;
}
if (varonce1087) {
var1088 = varonce1087;
} else {
var1089 = ";";
var1090 = 1;
var1091 = string__NativeString__to_s_with_length(var1089, var1090);
var1088 = var1091;
varonce1087 = var1088;
}
var1092 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1092 = array_instance Array[Object] */
var1093 = 4;
var1094 = NEW_array__NativeArray(var1093, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1094)->values[0] = (val*) var_res1041;
((struct instance_array__NativeArray*)var1094)->values[1] = (val*) var1083;
((struct instance_array__NativeArray*)var1094)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1094)->values[3] = (val*) var1088;
{
((void (*)(val*, val*, long))(var1092->class->vft[COLOR_array__Array__with_native]))(var1092, var1094, var1093) /* with_native on <var1092:Array[Object]>*/;
}
}
{
var1095 = ((val* (*)(val*))(var1092->class->vft[COLOR_string__Object__to_s]))(var1092) /* to_s on <var1092:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1095); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1096) {
var1097 = varonce1096;
} else {
var1098 = "((struct instance_";
var1099 = 18;
var1100 = string__NativeString__to_s_with_length(var1098, var1099);
var1097 = var1100;
varonce1096 = var1097;
}
{
var1101 = ((val* (*)(val*))(var_pointer_type->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce1102) {
var1103 = varonce1102;
} else {
var1104 = "*)";
var1105 = 2;
var1106 = string__NativeString__to_s_with_length(var1104, var1105);
var1103 = var1106;
varonce1102 = var1103;
}
if (varonce1107) {
var1108 = varonce1107;
} else {
var1109 = ")->value = NULL;";
var1110 = 16;
var1111 = string__NativeString__to_s_with_length(var1109, var1110);
var1108 = var1111;
varonce1107 = var1108;
}
var1112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1112 = array_instance Array[Object] */
var1113 = 5;
var1114 = NEW_array__NativeArray(var1113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1114)->values[0] = (val*) var1097;
((struct instance_array__NativeArray*)var1114)->values[1] = (val*) var1101;
((struct instance_array__NativeArray*)var1114)->values[2] = (val*) var1103;
((struct instance_array__NativeArray*)var1114)->values[3] = (val*) var_res1041;
((struct instance_array__NativeArray*)var1114)->values[4] = (val*) var1108;
{
((void (*)(val*, val*, long))(var1112->class->vft[COLOR_array__Array__with_native]))(var1112, var1114, var1113) /* with_native on <var1112:Array[Object]>*/;
}
}
{
var1115 = ((val* (*)(val*))(var1112->class->vft[COLOR_string__Object__to_s]))(var1112) /* to_s on <var1112:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1116) {
var1117 = varonce1116;
} else {
var1118 = "return ";
var1119 = 7;
var1120 = string__NativeString__to_s_with_length(var1118, var1119);
var1117 = var1120;
varonce1116 = var1117;
}
if (varonce1121) {
var1122 = varonce1121;
} else {
var1123 = ";";
var1124 = 1;
var1125 = string__NativeString__to_s_with_length(var1123, var1124);
var1122 = var1125;
varonce1121 = var1122;
}
var1126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1126 = array_instance Array[Object] */
var1127 = 3;
var1128 = NEW_array__NativeArray(var1127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1128)->values[0] = (val*) var1117;
((struct instance_array__NativeArray*)var1128)->values[1] = (val*) var_res1041;
((struct instance_array__NativeArray*)var1128)->values[2] = (val*) var1122;
{
((void (*)(val*, val*, long))(var1126->class->vft[COLOR_array__Array__with_native]))(var1126, var1128, var1127) /* with_native on <var1126:Array[Object]>*/;
}
}
{
var1129 = ((val* (*)(val*))(var1126->class->vft[COLOR_string__Object__to_s]))(var1126) /* to_s on <var1126:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1129); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce1130) {
var1131 = varonce1130;
} else {
var1132 = "}";
var1133 = 1;
var1134 = string__NativeString__to_s_with_length(var1132, var1133);
var1131 = var1134;
varonce1130 = var1131;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1131); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
if (varonce1135) {
var1136 = varonce1135;
} else {
var1137 = "NEW_";
var1138 = 4;
var1139 = string__NativeString__to_s_with_length(var1137, var1138);
var1136 = var1139;
varonce1135 = var1136;
}
var1140 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1140 = array_instance Array[Object] */
var1141 = 2;
var1142 = NEW_array__NativeArray(var1141, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1142)->values[0] = (val*) var1136;
((struct instance_array__NativeArray*)var1142)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var1140->class->vft[COLOR_array__Array__with_native]))(var1140, var1142, var1141) /* with_native on <var1140:Array[Object]>*/;
}
}
{
var1143 = ((val* (*)(val*))(var1140->class->vft[COLOR_string__Object__to_s]))(var1140) /* to_s on <var1140:Array[Object]>*/;
}
{
var1144 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce1145) {
var1146 = varonce1145;
} else {
var1147 = " NEW_";
var1148 = 5;
var1149 = string__NativeString__to_s_with_length(var1147, var1148);
var1146 = var1149;
varonce1145 = var1146;
}
if (varonce1150) {
var1151 = varonce1150;
} else {
var1152 = "(const struct type* type);";
var1153 = 26;
var1154 = string__NativeString__to_s_with_length(var1152, var1153);
var1151 = var1154;
varonce1150 = var1151;
}
var1155 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1155 = array_instance Array[Object] */
var1156 = 4;
var1157 = NEW_array__NativeArray(var1156, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1157)->values[0] = (val*) var1144;
((struct instance_array__NativeArray*)var1157)->values[1] = (val*) var1146;
((struct instance_array__NativeArray*)var1157)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1157)->values[3] = (val*) var1151;
{
((void (*)(val*, val*, long))(var1155->class->vft[COLOR_array__Array__with_native]))(var1155, var1157, var1156) /* with_native on <var1155:Array[Object]>*/;
}
}
{
var1158 = ((val* (*)(val*))(var1155->class->vft[COLOR_string__Object__to_s]))(var1155) /* to_s on <var1155:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var1143, var1158); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce1159) {
var1160 = varonce1159;
} else {
var1161 = "/* allocate ";
var1162 = 12;
var1163 = string__NativeString__to_s_with_length(var1161, var1162);
var1160 = var1163;
varonce1159 = var1160;
}
if (varonce1164) {
var1165 = varonce1164;
} else {
var1166 = " */";
var1167 = 3;
var1168 = string__NativeString__to_s_with_length(var1166, var1167);
var1165 = var1168;
varonce1164 = var1165;
}
var1169 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1169 = array_instance Array[Object] */
var1170 = 3;
var1171 = NEW_array__NativeArray(var1170, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1171)->values[0] = (val*) var1160;
((struct instance_array__NativeArray*)var1171)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var1171)->values[2] = (val*) var1165;
{
((void (*)(val*, val*, long))(var1169->class->vft[COLOR_array__Array__with_native]))(var1169, var1171, var1170) /* with_native on <var1169:Array[Object]>*/;
}
}
{
var1172 = ((val* (*)(val*))(var1169->class->vft[COLOR_string__Object__to_s]))(var1169) /* to_s on <var1169:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var1172); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var1173 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce1174) {
var1175 = varonce1174;
} else {
var1176 = " NEW_";
var1177 = 5;
var1178 = string__NativeString__to_s_with_length(var1176, var1177);
var1175 = var1178;
varonce1174 = var1175;
}
if (varonce1179) {
var1180 = varonce1179;
} else {
var1181 = "(const struct type* type) {";
var1182 = 27;
var1183 = string__NativeString__to_s_with_length(var1181, var1182);
var1180 = var1183;
varonce1179 = var1180;
}
var1184 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1184 = array_instance Array[Object] */
var1185 = 4;
var1186 = NEW_array__NativeArray(var1185, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1186)->values[0] = (val*) var1173;
((struct instance_array__NativeArray*)var1186)->values[1] = (val*) var1175;
((struct instance_array__NativeArray*)var1186)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1186)->values[3] = (val*) var1180;
{
((void (*)(val*, val*, long))(var1184->class->vft[COLOR_array__Array__with_native]))(var1184, var1186, var1185) /* with_native on <var1184:Array[Object]>*/;
}
}
{
var1187 = ((val* (*)(val*))(var1184->class->vft[COLOR_string__Object__to_s]))(var1184) /* to_s on <var1184:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var1187); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce1188) {
var1189 = varonce1188;
} else {
var1190 = " is DEAD";
var1191 = 8;
var1192 = string__NativeString__to_s_with_length(var1190, var1191);
var1189 = var1192;
varonce1188 = var1189;
}
var1193 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1193 = array_instance Array[Object] */
var1194 = 2;
var1195 = NEW_array__NativeArray(var1194, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1195)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var1195)->values[1] = (val*) var1189;
{
((void (*)(val*, val*, long))(var1193->class->vft[COLOR_array__Array__with_native]))(var1193, var1195, var1194) /* with_native on <var1193:Array[Object]>*/;
}
}
{
var1196 = ((val* (*)(val*))(var1193->class->vft[COLOR_string__Object__to_s]))(var1193) /* to_s on <var1193:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var1196); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce1197) {
var1198 = varonce1197;
} else {
var1199 = "self";
var1200 = 4;
var1201 = string__NativeString__to_s_with_length(var1199, var1200);
var1198 = var1201;
varonce1197 = var1198;
}
{
var1202 = abstract_compiler__AbstractCompilerVisitor__new_named_var(var_v, var_mtype, var1198);
}
var_res1203 = var1202;
var1204 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1203,var1204) on <var_res1203:RuntimeVariable> */
var_res1203->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = var1204; /* _is_exact on <var_res1203:RuntimeVariable> */
RET_LABEL1205:(void)0;
}
}
if (varonce1206) {
var1207 = varonce1206;
} else {
var1208 = " = nit_alloc(sizeof(struct instance) + ";
var1209 = 39;
var1210 = string__NativeString__to_s_with_length(var1208, var1209);
var1207 = var1210;
varonce1206 = var1207;
}
{
{ /* Inline array#AbstractArrayRead#length (var_attrs) on <var_attrs:Array[nullable MPropDef]> */
var1213 = var_attrs->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_attrs:Array[nullable MPropDef]> */
var1211 = var1213;
RET_LABEL1212:(void)0;
}
}
if (varonce1214) {
var1215 = varonce1214;
} else {
var1216 = "*sizeof(nitattribute_t));";
var1217 = 25;
var1218 = string__NativeString__to_s_with_length(var1216, var1217);
var1215 = var1218;
varonce1214 = var1215;
}
var1219 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1219 = array_instance Array[Object] */
var1220 = 4;
var1221 = NEW_array__NativeArray(var1220, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1221)->values[0] = (val*) var_res1203;
((struct instance_array__NativeArray*)var1221)->values[1] = (val*) var1207;
var1222 = BOX_kernel__Int(var1211); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var1221)->values[2] = (val*) var1222;
((struct instance_array__NativeArray*)var1221)->values[3] = (val*) var1215;
{
((void (*)(val*, val*, long))(var1219->class->vft[COLOR_array__Array__with_native]))(var1219, var1221, var1220) /* with_native on <var1219:Array[Object]>*/;
}
}
{
var1223 = ((val* (*)(val*))(var1219->class->vft[COLOR_string__Object__to_s]))(var1219) /* to_s on <var1219:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1223); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1224) {
var1225 = varonce1224;
} else {
var1226 = "->type = type;";
var1227 = 14;
var1228 = string__NativeString__to_s_with_length(var1226, var1227);
var1225 = var1228;
varonce1224 = var1225;
}
var1229 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1229 = array_instance Array[Object] */
var1230 = 2;
var1231 = NEW_array__NativeArray(var1230, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1231)->values[0] = (val*) var_res1203;
((struct instance_array__NativeArray*)var1231)->values[1] = (val*) var1225;
{
((void (*)(val*, val*, long))(var1229->class->vft[COLOR_array__Array__with_native]))(var1229, var1231, var1230) /* with_native on <var1229:Array[Object]>*/;
}
}
{
var1232 = ((val* (*)(val*))(var1229->class->vft[COLOR_string__Object__to_s]))(var1229) /* to_s on <var1229:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1232); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1233) {
var1234 = varonce1233;
} else {
var1235 = "type";
var1236 = 4;
var1237 = string__NativeString__to_s_with_length(var1235, var1236);
var1234 = var1237;
varonce1233 = var1234;
}
{
separate_compiler__SeparateCompiler__hardening_live_type(self, var_v, var1234); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (varonce1238) {
var1239 = varonce1238;
} else {
var1240 = "class_";
var1241 = 6;
var1242 = string__NativeString__to_s_with_length(var1240, var1241);
var1239 = var1242;
varonce1238 = var1239;
}
var1243 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1243 = array_instance Array[Object] */
var1244 = 2;
var1245 = NEW_array__NativeArray(var1244, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1245)->values[0] = (val*) var1239;
((struct instance_array__NativeArray*)var1245)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var1243->class->vft[COLOR_array__Array__with_native]))(var1243, var1245, var1244) /* with_native on <var1243:Array[Object]>*/;
}
}
{
var1246 = ((val* (*)(val*))(var1243->class->vft[COLOR_string__Object__to_s]))(var1243) /* to_s on <var1243:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var1246); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1247) {
var1248 = varonce1247;
} else {
var1249 = "->class = &class_";
var1250 = 17;
var1251 = string__NativeString__to_s_with_length(var1249, var1250);
var1248 = var1251;
varonce1247 = var1248;
}
if (varonce1252) {
var1253 = varonce1252;
} else {
var1254 = ";";
var1255 = 1;
var1256 = string__NativeString__to_s_with_length(var1254, var1255);
var1253 = var1256;
varonce1252 = var1253;
}
var1257 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1257 = array_instance Array[Object] */
var1258 = 4;
var1259 = NEW_array__NativeArray(var1258, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1259)->values[0] = (val*) var_res1203;
((struct instance_array__NativeArray*)var1259)->values[1] = (val*) var1248;
((struct instance_array__NativeArray*)var1259)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var1259)->values[3] = (val*) var1253;
{
((void (*)(val*, val*, long))(var1257->class->vft[COLOR_array__Array__with_native]))(var1257, var1259, var1258) /* with_native on <var1257:Array[Object]>*/;
}
}
{
var1260 = ((val* (*)(val*))(var1257->class->vft[COLOR_string__Object__to_s]))(var1257) /* to_s on <var1257:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1260); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompiler__generate_init_attr(self, var_v, var_res1203, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:SeparateCompiler>*/
}
{
abstract_compiler__AbstractCompilerVisitor__set_finalizer(var_v, var_res1203); /* Direct call abstract_compiler#AbstractCompilerVisitor#set_finalizer on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1261) {
var1262 = varonce1261;
} else {
var1263 = "return ";
var1264 = 7;
var1265 = string__NativeString__to_s_with_length(var1263, var1264);
var1262 = var1265;
varonce1261 = var1262;
}
if (varonce1266) {
var1267 = varonce1266;
} else {
var1268 = ";";
var1269 = 1;
var1270 = string__NativeString__to_s_with_length(var1268, var1269);
var1267 = var1270;
varonce1266 = var1267;
}
var1271 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1271 = array_instance Array[Object] */
var1272 = 3;
var1273 = NEW_array__NativeArray(var1272, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1273)->values[0] = (val*) var1262;
((struct instance_array__NativeArray*)var1273)->values[1] = (val*) var_res1203;
((struct instance_array__NativeArray*)var1273)->values[2] = (val*) var1267;
{
((void (*)(val*, val*, long))(var1271->class->vft[COLOR_array__Array__with_native]))(var1271, var1273, var1272) /* with_native on <var1271:Array[Object]>*/;
}
}
{
var1274 = ((val* (*)(val*))(var1271->class->vft[COLOR_string__Object__to_s]))(var1271) /* to_s on <var1271:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1274); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce1275) {
var1276 = varonce1275;
} else {
var1277 = "}";
var1278 = 1;
var1279 = string__NativeString__to_s_with_length(var1277, var1278);
var1276 = var1279;
varonce1275 = var1276;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1276); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_class_to_c for (self: Object, MClass) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_class_to_c(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_class_to_c(self, p0); /* Direct call separate_compiler#SeparateCompiler#compile_class_to_c on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#hardening_live_type for (self: SeparateCompiler, SeparateCompilerVisitor, String) */
void separate_compiler__SeparateCompiler__hardening_live_type(val* self, val* p0, val* p1) {
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
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
val* var65 /* : Array[Object] */;
long var66 /* : Int */;
val* var67 /* : NativeArray[Object] */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
/* Covariant cast for argument 0 (v) <p0:SeparateCompilerVisitor> isa VISITOR */
/* <p0:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompiler_VTVISITOR];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 826);
show_backtrace(1);
}
var_v = p0;
var_t = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var3 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 47);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts#Option#value (var10) on <var10:OptionBool> */
var15 = var10->attrs[COLOR_opts__Option___value].val; /* _value on <var10:OptionBool> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = ((struct instance_kernel__Bool*)var13)->value; /* autounbox from nullable Object to Bool */;
var17 = !var16;
if (var17){
goto RET_LABEL;
} else {
}
if (varonce) {
var18 = varonce;
} else {
var19 = "if(";
var20 = 3;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " == NULL) {";
var25 = 11;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "type null";
var34 = 9;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "}";
var39 = 1;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "if(";
var44 = 3;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "->table_size == 0) {";
var49 = 20;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 3;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var42;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var53)->values[2] = (val*) var47;
{
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var54); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = "PRINT_ERROR(\"Insantiation of a dead type: %s\\n\", ";
var58 = 49;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "->name);";
var63 = 8;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 3;
var67 = NEW_array__NativeArray(var66, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var67)->values[0] = (val*) var56;
((struct instance_array__NativeArray*)var67)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var67)->values[2] = (val*) var61;
{
((void (*)(val*, val*, long))(var65->class->vft[COLOR_array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
}
{
var68 = ((val* (*)(val*))(var65->class->vft[COLOR_string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var68); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "type dead";
var72 = 9;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var70); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "}";
var77 = 1;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#hardening_live_type for (self: Object, SeparateCompilerVisitor, String) */
void VIRTUAL_separate_compiler__SeparateCompiler__hardening_live_type(val* self, val* p0, val* p1) {
separate_compiler__SeparateCompiler__hardening_live_type(self, p0, p1); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#new_visitor for (self: SeparateCompiler): SeparateCompilerVisitor */
val* separate_compiler__SeparateCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_separate_compiler__SeparateCompilerVisitor(&type_separate_compiler__SeparateCompilerVisitor);
{
abstract_compiler__AbstractCompilerVisitor__init(var1, self); /* Direct call abstract_compiler#AbstractCompilerVisitor#init on <var1:SeparateCompilerVisitor>*/
}
/* <var1:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompiler_VTVISITOR];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 839);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#new_visitor for (self: Object): AbstractCompilerVisitor */
val* VIRTUAL_separate_compiler__SeparateCompiler__new_visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
var1 = separate_compiler__SeparateCompiler__new_visitor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables for (self: SeparateCompiler): Map[MType, Array[nullable MType]] */
val* separate_compiler__SeparateCompiler__type_tables(val* self) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var1 /* : Map[MType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 843);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables for (self: Object): Map[MType, Array[nullable MType]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__type_tables(val* self) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var1 /* : Map[MType, Array[nullable MType]] */;
val* var3 /* : Map[MType, Array[nullable MType]] */;
{ /* Inline separate_compiler#SeparateCompiler#type_tables (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 843);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables= for (self: SeparateCompiler, Map[MType, Array[nullable MType]]) */
void separate_compiler__SeparateCompiler__type_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val = p0; /* _type_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#type_tables= for (self: Object, Map[MType, Array[nullable MType]]) */
void VIRTUAL_separate_compiler__SeparateCompiler__type_tables_61d(val* self, val* p0) {
{ /* Inline separate_compiler#SeparateCompiler#type_tables= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val = p0; /* _type_tables on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#resolution_tables for (self: SeparateCompiler): Map[MClassType, Array[nullable MType]] */
val* separate_compiler__SeparateCompiler__resolution_tables(val* self) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var1 /* : Map[MClassType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 844);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#resolution_tables for (self: Object): Map[MClassType, Array[nullable MType]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables(val* self) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var1 /* : Map[MClassType, Array[nullable MType]] */;
val* var3 /* : Map[MClassType, Array[nullable MType]] */;
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 844);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#resolution_tables= for (self: SeparateCompiler, Map[MClassType, Array[nullable MType]]) */
void separate_compiler__SeparateCompiler__resolution_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val = p0; /* _resolution_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#resolution_tables= for (self: Object, Map[MClassType, Array[nullable MType]]) */
void VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables_61d(val* self, val* p0) {
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val = p0; /* _resolution_tables on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MPropDef]] */
val* separate_compiler__SeparateCompiler__method_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 845);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_tables for (self: Object): Map[MClass, Array[nullable MPropDef]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__method_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var3 /* : Map[MClass, Array[nullable MPropDef]] */;
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 845);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MPropDef]]) */
void separate_compiler__SeparateCompiler__method_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val = p0; /* _method_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_tables= for (self: Object, Map[MClass, Array[nullable MPropDef]]) */
void VIRTUAL_separate_compiler__SeparateCompiler__method_tables_61d(val* self, val* p0) {
{ /* Inline separate_compiler#SeparateCompiler#method_tables= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val = p0; /* _method_tables on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MPropDef]] */
val* separate_compiler__SeparateCompiler__attr_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 846);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_tables for (self: Object): Map[MClass, Array[nullable MPropDef]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__attr_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var3 /* : Map[MClass, Array[nullable MPropDef]] */;
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 846);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MPropDef]]) */
void separate_compiler__SeparateCompiler__attr_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val = p0; /* _attr_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_tables= for (self: Object, Map[MClass, Array[nullable MPropDef]]) */
void VIRTUAL_separate_compiler__SeparateCompiler__attr_tables_61d(val* self, val* p0) {
{ /* Inline separate_compiler#SeparateCompiler#attr_tables= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val = p0; /* _attr_tables on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_stats for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : OptionBool */;
val* var21 /* : OptionBool */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : ModelBuilder */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
val* var_tc /* var tc: ToolContext */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
long var36 /* : Int */;
val* var37 /* : ModelBuilder */;
val* var39 /* : ModelBuilder */;
long var40 /* : Int */;
long var42 /* : Int */;
val* var43 /* : ModelBuilder */;
val* var45 /* : ModelBuilder */;
long var46 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var52 /* : Int */;
val* var53 /* : ModelBuilder */;
val* var55 /* : ModelBuilder */;
long var56 /* : Int */;
long var58 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
long var_nb_invok_total /* var nb_invok_total: Int */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : Array[Object] */;
long var72 /* : Int */;
val* var73 /* : NativeArray[Object] */;
val* var74 /* : Object */;
val* var75 /* : String */;
long var76 /* : Int */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : FlatString */;
val* var82 /* : ModelBuilder */;
val* var84 /* : ModelBuilder */;
long var85 /* : Int */;
long var87 /* : Int */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
val* var93 /* : ModelBuilder */;
val* var95 /* : ModelBuilder */;
long var96 /* : Int */;
long var98 /* : Int */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : FlatString */;
val* var105 /* : Array[Object] */;
long var106 /* : Int */;
val* var107 /* : NativeArray[Object] */;
val* var108 /* : Object */;
val* var109 /* : String */;
long var110 /* : Int */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
val* var116 /* : ModelBuilder */;
val* var118 /* : ModelBuilder */;
long var119 /* : Int */;
long var121 /* : Int */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
val* var127 /* : ModelBuilder */;
val* var129 /* : ModelBuilder */;
long var130 /* : Int */;
long var132 /* : Int */;
val* var133 /* : String */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : FlatString */;
val* var139 /* : Array[Object] */;
long var140 /* : Int */;
val* var141 /* : NativeArray[Object] */;
val* var142 /* : Object */;
val* var143 /* : String */;
long var144 /* : Int */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : FlatString */;
val* var150 /* : ModelBuilder */;
val* var152 /* : ModelBuilder */;
long var153 /* : Int */;
long var155 /* : Int */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
val* var161 /* : ModelBuilder */;
val* var163 /* : ModelBuilder */;
long var164 /* : Int */;
long var166 /* : Int */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
val* var173 /* : Array[Object] */;
long var174 /* : Int */;
val* var175 /* : NativeArray[Object] */;
val* var176 /* : Object */;
val* var177 /* : String */;
long var178 /* : Int */;
{
((void (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__display_stats]))(self) /* display_stats on <self:SeparateCompiler>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_tables_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_separate_compiler__ToolContext___opt_tables_metrics].val; /* _opt_tables_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_tables_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 44);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = ((struct instance_kernel__Bool*)var9)->value; /* autounbox from nullable Object to Bool */;
if (var12){
{
((void (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__display_sizes]))(self) /* display_sizes on <self:SeparateCompiler>*/;
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var15 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var13) on <var13:ModelBuilder> */
var18 = var13->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var13:ModelBuilder> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 65);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts#Option#value (var19) on <var19:OptionBool> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionBool> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = ((struct instance_kernel__Bool*)var22)->value; /* autounbox from nullable Object to Bool */;
if (var25){
{
separate_compiler__SeparateCompiler__display_isset_checks(self); /* Direct call separate_compiler#SeparateCompiler#display_isset_checks on <self:SeparateCompiler>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var28 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_tc = var29;
if (varonce) {
var32 = varonce;
} else {
var33 = "# implementation of method invocation";
var34 = 37;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce = var32;
}
var36 = 2;
{
toolcontext__ToolContext__info(var_tc, var32, var36); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var39 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var37) on <var37:ModelBuilder> */
var42 = var37->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var37:ModelBuilder> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var45 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var43) on <var43:ModelBuilder> */
var48 = var43->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var43:ModelBuilder> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var40,var46) on <var40:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var51 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var52 = var40 + var46;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var55 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var53) on <var53:ModelBuilder> */
var58 = var53->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var53:ModelBuilder> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var49,var56) on <var49:Int> */
/* Covariant cast for argument 0 (i) <var56:Int> isa OTHER */
/* <var56:Int> isa OTHER */
var61 = 1; /* easy <var56:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var65 = var49 + var56;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_nb_invok_total = var59;
if (varonce66) {
var67 = varonce66;
} else {
var68 = "total number of invocations: ";
var69 = 29;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 2;
var73 = NEW_array__NativeArray(var72, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var73)->values[0] = (val*) var67;
var74 = BOX_kernel__Int(var_nb_invok_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var73)->values[1] = (val*) var74;
{
((void (*)(val*, val*, long))(var71->class->vft[COLOR_array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
}
{
var75 = ((val* (*)(val*))(var71->class->vft[COLOR_string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
}
var76 = 2;
{
toolcontext__ToolContext__info(var_tc, var75, var76); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = "invocations by VFT send:     ";
var80 = 29;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var84 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var82) on <var82:ModelBuilder> */
var87 = var82->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var82:ModelBuilder> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = " (";
var91 = 2;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var95 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var93) on <var93:ModelBuilder> */
var98 = var93->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var93:ModelBuilder> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = abstract_compiler__AbstractCompiler__div(self, var96, var_nb_invok_total);
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = "%)";
var103 = 2;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var105 = array_instance Array[Object] */
var106 = 5;
var107 = NEW_array__NativeArray(var106, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var107)->values[0] = (val*) var78;
var108 = BOX_kernel__Int(var85); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var107)->values[1] = (val*) var108;
((struct instance_array__NativeArray*)var107)->values[2] = (val*) var89;
((struct instance_array__NativeArray*)var107)->values[3] = (val*) var99;
((struct instance_array__NativeArray*)var107)->values[4] = (val*) var101;
{
((void (*)(val*, val*, long))(var105->class->vft[COLOR_array__Array__with_native]))(var105, var107, var106) /* with_native on <var105:Array[Object]>*/;
}
}
{
var109 = ((val* (*)(val*))(var105->class->vft[COLOR_string__Object__to_s]))(var105) /* to_s on <var105:Array[Object]>*/;
}
var110 = 2;
{
toolcontext__ToolContext__info(var_tc, var109, var110); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = "invocations by direct call:  ";
var114 = 29;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var118 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var116) on <var116:ModelBuilder> */
var121 = var116->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var116:ModelBuilder> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " (";
var125 = 2;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var129 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var127) on <var127:ModelBuilder> */
var132 = var127->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var127:ModelBuilder> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
var133 = abstract_compiler__AbstractCompiler__div(self, var130, var_nb_invok_total);
}
if (varonce134) {
var135 = varonce134;
} else {
var136 = "%)";
var137 = 2;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
var139 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var139 = array_instance Array[Object] */
var140 = 5;
var141 = NEW_array__NativeArray(var140, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var141)->values[0] = (val*) var112;
var142 = BOX_kernel__Int(var119); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var141)->values[1] = (val*) var142;
((struct instance_array__NativeArray*)var141)->values[2] = (val*) var123;
((struct instance_array__NativeArray*)var141)->values[3] = (val*) var133;
((struct instance_array__NativeArray*)var141)->values[4] = (val*) var135;
{
((void (*)(val*, val*, long))(var139->class->vft[COLOR_array__Array__with_native]))(var139, var141, var140) /* with_native on <var139:Array[Object]>*/;
}
}
{
var143 = ((val* (*)(val*))(var139->class->vft[COLOR_string__Object__to_s]))(var139) /* to_s on <var139:Array[Object]>*/;
}
var144 = 2;
{
toolcontext__ToolContext__info(var_tc, var143, var144); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "invocations by inlining:     ";
var148 = 29;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var152 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var150) on <var150:ModelBuilder> */
var155 = var150->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var150:ModelBuilder> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = " (";
var159 = 2;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var163 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var161) on <var161:ModelBuilder> */
var166 = var161->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var161:ModelBuilder> */
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
var167 = abstract_compiler__AbstractCompiler__div(self, var164, var_nb_invok_total);
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = "%)";
var171 = 2;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 5;
var175 = NEW_array__NativeArray(var174, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var175)->values[0] = (val*) var146;
var176 = BOX_kernel__Int(var153); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var175)->values[1] = (val*) var176;
((struct instance_array__NativeArray*)var175)->values[2] = (val*) var157;
((struct instance_array__NativeArray*)var175)->values[3] = (val*) var167;
((struct instance_array__NativeArray*)var175)->values[4] = (val*) var169;
{
((void (*)(val*, val*, long))(var173->class->vft[COLOR_array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
}
{
var177 = ((val* (*)(val*))(var173->class->vft[COLOR_string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
}
var178 = 2;
{
toolcontext__ToolContext__info(var_tc, var177, var178); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_stats for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__display_stats(val* self) {
separate_compiler__SeparateCompiler__display_stats(self); /* Direct call separate_compiler#SeparateCompiler#display_stats on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_sizes for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__display_sizes(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
long var9 /* : Int */;
long var_total /* var total: Int */;
long var10 /* : Int */;
long var_holes /* var holes: Int */;
val* var11 /* : Map[MType, Array[nullable MType]] */;
val* var13 /* : Map[MType, Array[nullable MType]] */;
val* var_ /* var : Map[MType, Array[nullable MType]] */;
val* var14 /* : MapIterator[Object, nullable Object] */;
val* var_15 /* var : MapIterator[MType, Array[nullable MType]] */;
short int var16 /* : Bool */;
val* var17 /* : Object */;
val* var_t /* var t: MType */;
val* var18 /* : nullable Object */;
val* var_table /* var table: Array[nullable MType] */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var25 /* : Int */;
val* var_26 /* var : Array[nullable MType] */;
val* var27 /* : ArrayIterator[nullable Object] */;
val* var_28 /* var : ArrayIterator[nullable MType] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_e /* var e: nullable MType */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : Object */;
val* var63 /* : Object */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
long var75 /* : Int */;
long var76 /* : Int */;
val* var77 /* : Map[MClassType, Array[nullable MType]] */;
val* var79 /* : Map[MClassType, Array[nullable MType]] */;
val* var_80 /* var : Map[MClassType, Array[nullable MType]] */;
val* var81 /* : MapIterator[Object, nullable Object] */;
val* var_82 /* var : MapIterator[MClassType, Array[nullable MType]] */;
short int var83 /* : Bool */;
val* var84 /* : Object */;
val* var_t85 /* var t: MClassType */;
val* var86 /* : nullable Object */;
val* var_table87 /* var table: Array[nullable MType] */;
long var88 /* : Int */;
long var90 /* : Int */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
val* var_98 /* var : Array[nullable MType] */;
val* var99 /* : ArrayIterator[nullable Object] */;
val* var_100 /* var : ArrayIterator[nullable MType] */;
short int var101 /* : Bool */;
val* var102 /* : nullable Object */;
val* var_e103 /* var e: nullable MType */;
val* var104 /* : null */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
long var111 /* : Int */;
long var112 /* : Int */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const char* var_class_name117;
long var118 /* : Int */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : FlatString */;
val* var133 /* : Array[Object] */;
long var134 /* : Int */;
val* var135 /* : NativeArray[Object] */;
val* var136 /* : Object */;
val* var137 /* : Object */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : FlatString */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : FlatString */;
long var149 /* : Int */;
long var150 /* : Int */;
val* var151 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var153 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_154 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var155 /* : MapIterator[Object, nullable Object] */;
val* var_156 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var157 /* : Bool */;
val* var158 /* : Object */;
val* var_t159 /* var t: MClass */;
val* var160 /* : nullable Object */;
val* var_table161 /* var table: Array[nullable MPropDef] */;
long var162 /* : Int */;
long var164 /* : Int */;
long var165 /* : Int */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
const char* var_class_name170;
long var171 /* : Int */;
val* var_172 /* var : Array[nullable MPropDef] */;
val* var173 /* : ArrayIterator[nullable Object] */;
val* var_174 /* var : ArrayIterator[nullable MPropDef] */;
short int var175 /* : Bool */;
val* var176 /* : nullable Object */;
val* var_e177 /* var e: nullable MPropDef */;
val* var178 /* : null */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
long var185 /* : Int */;
long var186 /* : Int */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
const char* var_class_name191;
long var192 /* : Int */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : FlatString */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
long var205 /* : Int */;
val* var206 /* : FlatString */;
val* var207 /* : Array[Object] */;
long var208 /* : Int */;
val* var209 /* : NativeArray[Object] */;
val* var210 /* : Object */;
val* var211 /* : Object */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : FlatString */;
long var223 /* : Int */;
long var224 /* : Int */;
val* var225 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var227 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_228 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var229 /* : MapIterator[Object, nullable Object] */;
val* var_230 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var231 /* : Bool */;
val* var232 /* : Object */;
val* var_t233 /* var t: MClass */;
val* var234 /* : nullable Object */;
val* var_table235 /* var table: Array[nullable MPropDef] */;
long var236 /* : Int */;
long var238 /* : Int */;
long var239 /* : Int */;
short int var241 /* : Bool */;
int cltype242;
int idtype243;
const char* var_class_name244;
long var245 /* : Int */;
val* var_246 /* var : Array[nullable MPropDef] */;
val* var247 /* : ArrayIterator[nullable Object] */;
val* var_248 /* var : ArrayIterator[nullable MPropDef] */;
short int var249 /* : Bool */;
val* var250 /* : nullable Object */;
val* var_e251 /* var e: nullable MPropDef */;
val* var252 /* : null */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
long var259 /* : Int */;
long var260 /* : Int */;
short int var262 /* : Bool */;
int cltype263;
int idtype264;
const char* var_class_name265;
long var266 /* : Int */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
long var274 /* : Int */;
val* var275 /* : FlatString */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : FlatString */;
val* var281 /* : Array[Object] */;
long var282 /* : Int */;
val* var283 /* : NativeArray[Object] */;
val* var284 /* : Object */;
val* var285 /* : Object */;
val* var286 /* : String */;
if (varonce) {
var = varonce;
} else {
var1 = "# size of subtyping tables";
var2 = 26;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
file__Object__print(self, var); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce4) {
var5 = varonce4;
} else {
var6 = "\11total \11holes";
var7 = 13;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce4 = var5;
}
{
file__Object__print(self, var5); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var9 = 0;
var_total = var9;
var10 = 0;
var_holes = var10;
{
{ /* Inline separate_compiler#SeparateCompiler#type_tables (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 843);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ = var11;
{
var14 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_) /* iterator on <var_:Map[MType, Array[nullable MType]]>*/;
}
var_15 = var14;
for(;;) {
{
var16 = ((short int (*)(val*))(var_15->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_15) /* is_ok on <var_15:MapIterator[MType, Array[nullable MType]]>*/;
}
if (var16){
{
var17 = ((val* (*)(val*))(var_15->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_15) /* key on <var_15:MapIterator[MType, Array[nullable MType]]>*/;
}
var_t = var17;
{
var18 = ((val* (*)(val*))(var_15->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_15) /* item on <var_15:MapIterator[MType, Array[nullable MType]]>*/;
}
var_table = var18;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MType]> */
var21 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MType]> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var19) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var24 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var25 = var_total + var19;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_total = var22;
var_26 = var_table;
{
var27 = array__AbstractArrayRead__iterator(var_26);
}
var_28 = var27;
for(;;) {
{
var29 = array__ArrayIterator__is_ok(var_28);
}
if (var29){
{
var30 = array__ArrayIterator__item(var_28);
}
var_e = var30;
var31 = NULL;
if (var_e == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,var31) on <var_e:nullable MType> */
var_other = var31;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable MType(MType)> */
var37 = var_e == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
var38 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var38) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var45 = var_holes + var38;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_holes = var39;
} else {
}
{
array__ArrayIterator__next(var_28); /* Direct call array#ArrayIterator#next on <var_28:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_28) on <var_28:ArrayIterator[nullable MType]> */
RET_LABEL46:(void)0;
}
}
{
((void (*)(val*))(var_15->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_15) /* next on <var_15:MapIterator[MType, Array[nullable MType]]>*/;
}
} else {
goto BREAK_label47;
}
}
BREAK_label47: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_15) on <var_15:MapIterator[MType, Array[nullable MType]]> */
RET_LABEL48:(void)0;
}
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "\11";
var52 = 1;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "\11";
var57 = 1;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 4;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var50;
var62 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var62;
((struct instance_array__NativeArray*)var61)->values[2] = (val*) var55;
var63 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var61)->values[3] = (val*) var63;
{
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
}
{
file__Object__print(self, var64); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "# size of resolution tables";
var68 = 27;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
file__Object__print(self, var66); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = "\11total \11holes";
var73 = 13;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
{
file__Object__print(self, var71); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var75 = 0;
var_total = var75;
var76 = 0;
var_holes = var76;
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var79 = self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 844);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_80 = var77;
{
var81 = ((val* (*)(val*))(var_80->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_80) /* iterator on <var_80:Map[MClassType, Array[nullable MType]]>*/;
}
var_82 = var81;
for(;;) {
{
var83 = ((short int (*)(val*))(var_82->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_82) /* is_ok on <var_82:MapIterator[MClassType, Array[nullable MType]]>*/;
}
if (var83){
{
var84 = ((val* (*)(val*))(var_82->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_82) /* key on <var_82:MapIterator[MClassType, Array[nullable MType]]>*/;
}
var_t85 = var84;
{
var86 = ((val* (*)(val*))(var_82->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_82) /* item on <var_82:MapIterator[MClassType, Array[nullable MType]]>*/;
}
var_table87 = var86;
{
{ /* Inline array#AbstractArrayRead#length (var_table87) on <var_table87:Array[nullable MType]> */
var90 = var_table87->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table87:Array[nullable MType]> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var88) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var88:Int> isa OTHER */
/* <var88:Int> isa OTHER */
var93 = 1; /* easy <var88:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var97 = var_total + var88;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var_total = var91;
var_98 = var_table87;
{
var99 = array__AbstractArrayRead__iterator(var_98);
}
var_100 = var99;
for(;;) {
{
var101 = array__ArrayIterator__is_ok(var_100);
}
if (var101){
{
var102 = array__ArrayIterator__item(var_100);
}
var_e103 = var102;
var104 = NULL;
if (var_e103 == NULL) {
var105 = 1; /* is null */
} else {
var105 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e103,var104) on <var_e103:nullable MType> */
var_other = var104;
{
{ /* Inline kernel#Object#is_same_instance (var_e103,var_other) on <var_e103:nullable MType(MType)> */
var110 = var_e103 == var_other;
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
var105 = var106;
}
if (var105){
var111 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var111) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var111:Int> isa OTHER */
/* <var111:Int> isa OTHER */
var114 = 1; /* easy <var111:Int> isa OTHER*/
if (unlikely(!var114)) {
var_class_name117 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var118 = var_holes + var111;
var112 = var118;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var_holes = var112;
} else {
}
{
array__ArrayIterator__next(var_100); /* Direct call array#ArrayIterator#next on <var_100:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label119;
}
}
BREAK_label119: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_100) on <var_100:ArrayIterator[nullable MType]> */
RET_LABEL120:(void)0;
}
}
{
((void (*)(val*))(var_82->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_82) /* next on <var_82:MapIterator[MClassType, Array[nullable MType]]>*/;
}
} else {
goto BREAK_label121;
}
}
BREAK_label121: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_82) on <var_82:MapIterator[MClassType, Array[nullable MType]]> */
RET_LABEL122:(void)0;
}
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = "\11";
var126 = 1;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = "\11";
var131 = 1;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var133 = array_instance Array[Object] */
var134 = 4;
var135 = NEW_array__NativeArray(var134, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var135)->values[0] = (val*) var124;
var136 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var135)->values[1] = (val*) var136;
((struct instance_array__NativeArray*)var135)->values[2] = (val*) var129;
var137 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var135)->values[3] = (val*) var137;
{
((void (*)(val*, val*, long))(var133->class->vft[COLOR_array__Array__with_native]))(var133, var135, var134) /* with_native on <var133:Array[Object]>*/;
}
}
{
var138 = ((val* (*)(val*))(var133->class->vft[COLOR_string__Object__to_s]))(var133) /* to_s on <var133:Array[Object]>*/;
}
{
file__Object__print(self, var138); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "# size of methods tables";
var142 = 24;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
{
file__Object__print(self, var140); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = "\11total \11holes";
var147 = 13;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
{
file__Object__print(self, var145); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var149 = 0;
var_total = var149;
var150 = 0;
var_holes = var150;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var153 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 845);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_154 = var151;
{
var155 = ((val* (*)(val*))(var_154->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_154) /* iterator on <var_154:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_156 = var155;
for(;;) {
{
var157 = ((short int (*)(val*))(var_156->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_156) /* is_ok on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
if (var157){
{
var158 = ((val* (*)(val*))(var_156->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_156) /* key on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_t159 = var158;
{
var160 = ((val* (*)(val*))(var_156->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_156) /* item on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_table161 = var160;
{
{ /* Inline array#AbstractArrayRead#length (var_table161) on <var_table161:Array[nullable MPropDef]> */
var164 = var_table161->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table161:Array[nullable MPropDef]> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var162) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var162:Int> isa OTHER */
/* <var162:Int> isa OTHER */
var167 = 1; /* easy <var162:Int> isa OTHER*/
if (unlikely(!var167)) {
var_class_name170 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name170);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var171 = var_total + var162;
var165 = var171;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var_total = var165;
var_172 = var_table161;
{
var173 = array__AbstractArrayRead__iterator(var_172);
}
var_174 = var173;
for(;;) {
{
var175 = array__ArrayIterator__is_ok(var_174);
}
if (var175){
{
var176 = array__ArrayIterator__item(var_174);
}
var_e177 = var176;
var178 = NULL;
if (var_e177 == NULL) {
var179 = 1; /* is null */
} else {
var179 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e177,var178) on <var_e177:nullable MPropDef> */
var_other = var178;
{
{ /* Inline kernel#Object#is_same_instance (var_e177,var_other) on <var_e177:nullable MPropDef(MPropDef)> */
var184 = var_e177 == var_other;
var182 = var184;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
}
var180 = var182;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
var179 = var180;
}
if (var179){
var185 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var185) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var185:Int> isa OTHER */
/* <var185:Int> isa OTHER */
var188 = 1; /* easy <var185:Int> isa OTHER*/
if (unlikely(!var188)) {
var_class_name191 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name191);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var192 = var_holes + var185;
var186 = var192;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
var_holes = var186;
} else {
}
{
array__ArrayIterator__next(var_174); /* Direct call array#ArrayIterator#next on <var_174:ArrayIterator[nullable MPropDef]>*/
}
} else {
goto BREAK_label193;
}
}
BREAK_label193: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_174) on <var_174:ArrayIterator[nullable MPropDef]> */
RET_LABEL194:(void)0;
}
}
{
((void (*)(val*))(var_156->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_156) /* next on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
} else {
goto BREAK_label195;
}
}
BREAK_label195: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_156) on <var_156:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL196:(void)0;
}
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = "\11";
var200 = 1;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
if (varonce202) {
var203 = varonce202;
} else {
var204 = "\11";
var205 = 1;
var206 = string__NativeString__to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
var207 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var207 = array_instance Array[Object] */
var208 = 4;
var209 = NEW_array__NativeArray(var208, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var209)->values[0] = (val*) var198;
var210 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var209)->values[1] = (val*) var210;
((struct instance_array__NativeArray*)var209)->values[2] = (val*) var203;
var211 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var209)->values[3] = (val*) var211;
{
((void (*)(val*, val*, long))(var207->class->vft[COLOR_array__Array__with_native]))(var207, var209, var208) /* with_native on <var207:Array[Object]>*/;
}
}
{
var212 = ((val* (*)(val*))(var207->class->vft[COLOR_string__Object__to_s]))(var207) /* to_s on <var207:Array[Object]>*/;
}
{
file__Object__print(self, var212); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "# size of attributes tables";
var216 = 27;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
{
file__Object__print(self, var214); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = "\11total \11holes";
var221 = 13;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
{
file__Object__print(self, var219); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var223 = 0;
var_total = var223;
var224 = 0;
var_holes = var224;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var227 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 846);
show_backtrace(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
var_228 = var225;
{
var229 = ((val* (*)(val*))(var_228->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_228) /* iterator on <var_228:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_230 = var229;
for(;;) {
{
var231 = ((short int (*)(val*))(var_230->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_230) /* is_ok on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
if (var231){
{
var232 = ((val* (*)(val*))(var_230->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_230) /* key on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_t233 = var232;
{
var234 = ((val* (*)(val*))(var_230->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_230) /* item on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_table235 = var234;
{
{ /* Inline array#AbstractArrayRead#length (var_table235) on <var_table235:Array[nullable MPropDef]> */
var238 = var_table235->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table235:Array[nullable MPropDef]> */
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var236) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var236:Int> isa OTHER */
/* <var236:Int> isa OTHER */
var241 = 1; /* easy <var236:Int> isa OTHER*/
if (unlikely(!var241)) {
var_class_name244 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name244);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var245 = var_total + var236;
var239 = var245;
goto RET_LABEL240;
RET_LABEL240:(void)0;
}
}
var_total = var239;
var_246 = var_table235;
{
var247 = array__AbstractArrayRead__iterator(var_246);
}
var_248 = var247;
for(;;) {
{
var249 = array__ArrayIterator__is_ok(var_248);
}
if (var249){
{
var250 = array__ArrayIterator__item(var_248);
}
var_e251 = var250;
var252 = NULL;
if (var_e251 == NULL) {
var253 = 1; /* is null */
} else {
var253 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e251,var252) on <var_e251:nullable MPropDef> */
var_other = var252;
{
{ /* Inline kernel#Object#is_same_instance (var_e251,var_other) on <var_e251:nullable MPropDef(MPropDef)> */
var258 = var_e251 == var_other;
var256 = var258;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
}
var254 = var256;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
var253 = var254;
}
if (var253){
var259 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var259) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var259:Int> isa OTHER */
/* <var259:Int> isa OTHER */
var262 = 1; /* easy <var259:Int> isa OTHER*/
if (unlikely(!var262)) {
var_class_name265 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name265);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var266 = var_holes + var259;
var260 = var266;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
}
var_holes = var260;
} else {
}
{
array__ArrayIterator__next(var_248); /* Direct call array#ArrayIterator#next on <var_248:ArrayIterator[nullable MPropDef]>*/
}
} else {
goto BREAK_label267;
}
}
BREAK_label267: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_248) on <var_248:ArrayIterator[nullable MPropDef]> */
RET_LABEL268:(void)0;
}
}
{
((void (*)(val*))(var_230->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_230) /* next on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
} else {
goto BREAK_label269;
}
}
BREAK_label269: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_230) on <var_230:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL270:(void)0;
}
}
if (varonce271) {
var272 = varonce271;
} else {
var273 = "\11";
var274 = 1;
var275 = string__NativeString__to_s_with_length(var273, var274);
var272 = var275;
varonce271 = var272;
}
if (varonce276) {
var277 = varonce276;
} else {
var278 = "\11";
var279 = 1;
var280 = string__NativeString__to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
var281 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var281 = array_instance Array[Object] */
var282 = 4;
var283 = NEW_array__NativeArray(var282, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var283)->values[0] = (val*) var272;
var284 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var283)->values[1] = (val*) var284;
((struct instance_array__NativeArray*)var283)->values[2] = (val*) var277;
var285 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var283)->values[3] = (val*) var285;
{
((void (*)(val*, val*, long))(var281->class->vft[COLOR_array__Array__with_native]))(var281, var283, var282) /* with_native on <var281:Array[Object]>*/;
}
}
{
var286 = ((val* (*)(val*))(var281->class->vft[COLOR_string__Object__to_s]))(var281) /* to_s on <var281:Array[Object]>*/;
}
{
file__Object__print(self, var286); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_sizes for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__display_sizes(val* self) {
separate_compiler__SeparateCompiler__display_sizes(self); /* Direct call separate_compiler#SeparateCompiler#display_sizes on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count for (self: SeparateCompiler): Int */
long separate_compiler__SeparateCompiler__isset_checks_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count for (self: Object): Int */
long VIRTUAL_separate_compiler__SeparateCompiler__isset_checks_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:Object(SeparateCompiler)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count= for (self: SeparateCompiler, Int) */
void separate_compiler__SeparateCompiler__isset_checks_count_61d(val* self, long p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l = p0; /* _isset_checks_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count= for (self: Object, Int) */
void VIRTUAL_separate_compiler__SeparateCompiler__isset_checks_count_61d(val* self, long p0) {
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l = p0; /* _isset_checks_count on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_read_count for (self: SeparateCompiler): Int */
long separate_compiler__SeparateCompiler__attr_read_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_read_count for (self: Object): Int */
long VIRTUAL_separate_compiler__SeparateCompiler__attr_read_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:Object(SeparateCompiler)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_read_count= for (self: SeparateCompiler, Int) */
void separate_compiler__SeparateCompiler__attr_read_count_61d(val* self, long p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l = p0; /* _attr_read_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_read_count= for (self: Object, Int) */
void VIRTUAL_separate_compiler__SeparateCompiler__attr_read_count_61d(val* self, long p0) {
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l = p0; /* _attr_read_count on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_isset_checks for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__display_isset_checks(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
long var9 /* : Int */;
long var11 /* : Int */;
val* var12 /* : Array[Object] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Object] */;
val* var15 /* : Object */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
long var27 /* : Int */;
long var29 /* : Int */;
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : Object */;
val* var34 /* : String */;
if (varonce) {
var = varonce;
} else {
var1 = "# total number of compiled attribute reads";
var2 = 42;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
file__Object__print(self, var); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce4) {
var5 = varonce4;
} else {
var6 = "\11";
var7 = 1;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce4 = var5;
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count (self) on <self:SeparateCompiler> */
var11 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var12 = array_instance Array[Object] */
var13 = 2;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var5;
var15 = BOX_kernel__Int(var9); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var14)->values[1] = (val*) var15;
{
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Array[Object]>*/;
}
{
file__Object__print(self, var16); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "# total number of compiled isset-checks";
var20 = 39;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
file__Object__print(self, var18); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\11";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (self) on <self:SeparateCompiler> */
var29 = self->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 2;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var23;
var33 = BOX_kernel__Int(var27); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var33;
{
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
}
{
var34 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
}
{
file__Object__print(self, var34); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_isset_checks for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__display_isset_checks(val* self) {
separate_compiler__SeparateCompiler__display_isset_checks(self); /* Direct call separate_compiler#SeparateCompiler#display_isset_checks on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_nitni_structs for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (varonce) {
var3 = varonce;
} else {
var4 = "struct nitni_instance {\n\11struct nitni_instance *next,\n\11\11*prev; /* adjacent global references in global list */\n\11int count; /* number of time this global reference has been marked */\n\11struct instance *value;\n};\n";
var5 = 210;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
abstract_compiler__CodeWriter__add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
((void (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_nitni_structs]))(self) /* compile_nitni_structs on <self:SeparateCompiler>*/;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_nitni_structs for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_nitni_structs(val* self) {
separate_compiler__SeparateCompiler__compile_nitni_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_nitni_structs on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#finalize_ffi_for_module for (self: SeparateCompiler, MModule) */
void separate_compiler__SeparateCompiler__finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var_old_module /* var old_module: MModule */;
var_mmodule = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_old_module = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_mmodule) on <self:SeparateCompiler> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var_mmodule; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL3:(void)0;
}
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__finalize_ffi_for_module]))(self, p0) /* finalize_ffi_for_module on <self:SeparateCompiler>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_old_module) on <self:SeparateCompiler> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var_old_module; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#finalize_ffi_for_module for (self: Object, MModule) */
void VIRTUAL_separate_compiler__SeparateCompiler__finalize_ffi_for_module(val* self, val* p0) {
separate_compiler__SeparateCompiler__finalize_ffi_for_module(self, p0); /* Direct call separate_compiler#SeparateCompiler#finalize_ffi_for_module on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#adapt_signature for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void separate_compiler__SeparateCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
short int var21 /* : Bool */;
val* var22 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var23 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var24 /* : MType */;
val* var26 /* : MType */;
val* var27 /* : String */;
val* var28 /* : MClassDef */;
val* var30 /* : MClassDef */;
val* var31 /* : MClass */;
val* var33 /* : MClass */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
val* var37 /* : String */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var45 /* : MClassDef */;
val* var47 /* : MClassDef */;
val* var48 /* : MClass */;
val* var50 /* : MClass */;
val* var51 /* : MClassType */;
val* var53 /* : MClassType */;
val* var54 /* : RuntimeVariable */;
long var55 /* : Int */;
long var_i /* var i: Int */;
long var56 /* : Int */;
long var_ /* var : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var60 /* : Bool */;
val* var61 /* : Array[MParameter] */;
val* var63 /* : Array[MParameter] */;
val* var64 /* : nullable Object */;
val* var65 /* : MType */;
val* var67 /* : MType */;
val* var_t /* var t: MType */;
long var68 /* : Int */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
long var75 /* : Int */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
val* var83 /* : nullable Object */;
val* var84 /* : MType */;
val* var86 /* : MType */;
long var87 /* : Int */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
long var95 /* : Int */;
long var96 /* : Int */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
long var102 /* : Int */;
val* var103 /* : nullable Object */;
val* var104 /* : RuntimeVariable */;
long var105 /* : Int */;
long var106 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 1;
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 949);
show_backtrace(1);
} else {
var22 = model__MSignature__resolve_for(var, var6, var12, var18, var21);
}
var_msignature = var22;
{
var23 = abstract_collection__SequenceRead__first(var_args);
}
var_recv = var23;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var26 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_compiler__MType__ctype]))(var24) /* ctype on <var24:MType>*/;
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var30 = var_m->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var28) on <var28:MClassDef> */
var33 = var28->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var28:MClassDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var31) on <var31:MClass> */
var36 = var31->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var31:MClass> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = abstract_compiler__MClassType__ctype(var34);
}
{
{ /* Inline kernel#Object#!= (var27,var37) on <var27:String> */
var_other = var37;
{
var42 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___61d_61d]))(var27, var_other) /* == on <var27:String>*/;
var41 = var42;
}
var43 = !var41;
var39 = var43;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
var44 = abstract_collection__SequenceRead__first(var_args);
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var47 = var_m->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var45) on <var45:MClassDef> */
var50 = var45->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var45:MClassDef> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var48) on <var48:MClass> */
var53 = var48->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var48:MClass> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = separate_compiler__SeparateCompilerVisitor__autobox(self, var44, var51);
}
{
abstract_collection__Sequence__first_61d(var_args, var54); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var55 = 0;
var_i = var55;
{
var56 = model__MSignature__arity(var_msignature);
}
var_ = var56;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var59 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var60 = var_i < var_;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var63 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = array__Array___91d_93d(var61, var_i);
}
{
{ /* Inline model#MParameter#mtype (var64) on <var64:nullable Object(MParameter)> */
var67 = var64->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var64:nullable Object(MParameter)> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_t = var65;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var70 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var68) on <var_i:Int> */
var74 = var_i == var68;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
var75 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var75) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var75:Int> isa OTHER */
/* <var75:Int> isa OTHER */
var78 = 1; /* easy <var75:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var82 = var_i + var75;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
{
var83 = array__Array___91d_93d(var_args, var76);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var83) on <var83:nullable Object(RuntimeVariable)> */
var86 = var83->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var83:nullable Object(RuntimeVariable)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
var_t = var84;
} else {
}
var87 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var87) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var87:Int> isa OTHER */
/* <var87:Int> isa OTHER */
var90 = 1; /* easy <var87:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var94 = var_i + var87;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var95 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var95) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var95:Int> isa OTHER */
/* <var95:Int> isa OTHER */
var98 = 1; /* easy <var95:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var102 = var_i + var95;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
var103 = array__Array___91d_93d(var_args, var96);
}
{
var104 = separate_compiler__SeparateCompilerVisitor__autobox(self, var103, var_t);
}
{
array__Array___91d_93d_61d(var_args, var88, var104); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
var105 = 1;
{
var106 = kernel__Int__successor(var_i, var105);
}
var_i = var106;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#adapt_signature for (self: Object, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
separate_compiler__SeparateCompilerVisitor__adapt_signature(self, p0, p1); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#unbox_signature_extern for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void separate_compiler__SeparateCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
short int var21 /* : Bool */;
val* var22 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var23 /* : Bool */;
val* var24 /* : MProperty */;
val* var26 /* : MProperty */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var_ /* var : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var35 /* : MClassDef */;
val* var37 /* : MClassDef */;
val* var38 /* : MClass */;
val* var40 /* : MClass */;
val* var41 /* : MClassType */;
val* var43 /* : MClassType */;
val* var44 /* : RuntimeVariable */;
long var45 /* : Int */;
long var_i /* var i: Int */;
long var46 /* : Int */;
long var_47 /* var : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var51 /* : Bool */;
val* var52 /* : Array[MParameter] */;
val* var54 /* : Array[MParameter] */;
val* var55 /* : nullable Object */;
val* var56 /* : MType */;
val* var58 /* : MType */;
val* var_t /* var t: MType */;
long var59 /* : Int */;
long var61 /* : Int */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
long var66 /* : Int */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
val* var74 /* : nullable Object */;
val* var75 /* : MType */;
val* var77 /* : MType */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
long var81 /* : Int */;
long var82 /* : Int */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
long var88 /* : Int */;
long var89 /* : Int */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
val* var97 /* : nullable Object */;
val* var98 /* : RuntimeVariable */;
long var99 /* : Int */;
long var100 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 1;
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 965);
show_backtrace(1);
} else {
var22 = model__MSignature__resolve_for(var, var6, var12, var18, var21);
}
var_msignature = var22;
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:MMethodDef> */
var26 = var_m->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var24) on <var24:MProperty(MMethod)> */
var29 = var24->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var24:MProperty(MMethod)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = !var27;
var_ = var30;
if (var30){
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var33 = var_m->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var23 = var31;
} else {
var23 = var_;
}
if (var23){
{
var34 = abstract_collection__SequenceRead__first(var_args);
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var37 = var_m->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var35) on <var35:MClassDef> */
var40 = var35->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var35:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var38) on <var38:MClass> */
var43 = var38->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var38:MClass> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var34, var41) /* unbox_extern on <self:SeparateCompilerVisitor>*/;
}
{
abstract_collection__Sequence__first_61d(var_args, var44); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var45 = 0;
var_i = var45;
{
var46 = model__MSignature__arity(var_msignature);
}
var_47 = var46;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_47:Int> isa OTHER */
/* <var_47:Int> isa OTHER */
var50 = 1; /* easy <var_47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var51 = var_i < var_47;
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var54 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = array__Array___91d_93d(var52, var_i);
}
{
{ /* Inline model#MParameter#mtype (var55) on <var55:nullable Object(MParameter)> */
var58 = var55->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var55:nullable Object(MParameter)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
var_t = var56;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var61 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var59) on <var_i:Int> */
var65 = var_i == var59;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
var66 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var66) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var66:Int> isa OTHER */
/* <var66:Int> isa OTHER */
var69 = 1; /* easy <var66:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var73 = var_i + var66;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
var74 = array__Array___91d_93d(var_args, var67);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var74) on <var74:nullable Object(RuntimeVariable)> */
var77 = var74->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var74:nullable Object(RuntimeVariable)> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_t = var75;
} else {
}
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var80 = var_m->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78){
var81 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var81) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var81:Int> isa OTHER */
/* <var81:Int> isa OTHER */
var84 = 1; /* easy <var81:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var88 = var_i + var81;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var89 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var89) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var89:Int> isa OTHER */
/* <var89:Int> isa OTHER */
var92 = 1; /* easy <var89:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var96 = var_i + var89;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
var97 = array__Array___91d_93d(var_args, var90);
}
{
var98 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var97, var_t) /* unbox_extern on <self:SeparateCompilerVisitor>*/;
}
{
array__Array___91d_93d_61d(var_args, var82, var98); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var99 = 1;
{
var100 = kernel__Int__successor(var_i, var99);
}
var_i = var100;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#unbox_signature_extern for (self: Object, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1) {
separate_compiler__SeparateCompilerVisitor__unbox_signature_extern(self, p0, p1); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#autobox for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MType */;
val* var13 /* : MType */;
val* var14 /* : String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MType */;
val* var31 /* : MType */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : MType */;
val* var58 /* : MType */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
val* var73 /* : RuntimeVariable */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : MType */;
val* var84 /* : MType */;
short int var85 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_valtype /* var valtype: MClassType */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
short int var_91 /* var : Bool */;
val* var92 /* : MClass */;
val* var94 /* : MClass */;
val* var95 /* : MClassKind */;
val* var97 /* : MClassKind */;
val* var98 /* : MClassKind */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var_105 /* var : Bool */;
val* var106 /* : MClass */;
val* var108 /* : MClass */;
val* var109 /* : String */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
val* var_other120 /* var other: nullable Object */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
val* var124 /* : AbstractCompiler */;
val* var126 /* : AbstractCompiler */;
val* var127 /* : MModule */;
val* var129 /* : MModule */;
val* var130 /* : MClassType */;
short int var132 /* : Bool */;
val* var133 /* : MClassType */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : FlatString */;
val* var139 /* : MClass */;
val* var140 /* : MClassType */;
val* var142 /* : MClassType */;
val* var143 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var144 /* : Bool */;
val* var145 /* : AbstractCompiler */;
val* var147 /* : AbstractCompiler */;
val* var148 /* : nullable RapidTypeAnalysis */;
val* var150 /* : nullable RapidTypeAnalysis */;
val* var151 /* : null */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
short int var_158 /* var : Bool */;
val* var159 /* : AbstractCompiler */;
val* var161 /* : AbstractCompiler */;
val* var162 /* : nullable RapidTypeAnalysis */;
val* var164 /* : nullable RapidTypeAnalysis */;
val* var165 /* : HashSet[MClassType] */;
val* var167 /* : HashSet[MClassType] */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : MType */;
val* var177 /* : MType */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : FlatString */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : MType */;
val* var190 /* : MType */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
val* var196 /* : Array[Object] */;
long var197 /* : Int */;
val* var198 /* : NativeArray[Object] */;
val* var199 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : FlatString */;
val* var210 /* : String */;
val* var211 /* : Array[Object] */;
long var212 /* : Int */;
val* var213 /* : NativeArray[Object] */;
val* var214 /* : String */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : FlatString */;
val* var220 /* : String */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
long var224 /* : Int */;
val* var225 /* : FlatString */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : FlatString */;
val* var231 /* : MType */;
val* var233 /* : MType */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : FlatString */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : FlatString */;
val* var244 /* : Array[Object] */;
long var245 /* : Int */;
val* var246 /* : NativeArray[Object] */;
val* var247 /* : String */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
short int var250 /* : Bool */;
val* var251 /* : MType */;
val* var253 /* : MType */;
val* var254 /* : String */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
long var258 /* : Int */;
val* var259 /* : FlatString */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
short int var_262 /* var : Bool */;
val* var263 /* : String */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
long var267 /* : Int */;
val* var268 /* : FlatString */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
short int var_271 /* var : Bool */;
short int var272 /* : Bool */;
val* var273 /* : MType */;
val* var275 /* : MType */;
val* var276 /* : String */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
long var280 /* : Int */;
val* var281 /* : FlatString */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
short int var_284 /* var : Bool */;
val* var285 /* : String */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
long var289 /* : Int */;
val* var290 /* : FlatString */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var_293 /* var : Bool */;
short int var294 /* : Bool */;
val* var295 /* : MType */;
val* var297 /* : MType */;
val* var298 /* : String */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
long var302 /* : Int */;
val* var303 /* : FlatString */;
short int var304 /* : Bool */;
short int var305 /* : Bool */;
short int var_306 /* var : Bool */;
val* var307 /* : String */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
long var311 /* : Int */;
val* var312 /* : FlatString */;
short int var313 /* : Bool */;
short int var314 /* : Bool */;
val* var315 /* : RuntimeVariable */;
val* var_res316 /* var res: RuntimeVariable */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
long var320 /* : Int */;
val* var321 /* : FlatString */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
long var325 /* : Int */;
val* var326 /* : FlatString */;
val* var327 /* : MType */;
val* var329 /* : MType */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
long var333 /* : Int */;
val* var334 /* : FlatString */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
long var338 /* : Int */;
val* var339 /* : FlatString */;
val* var340 /* : Array[Object] */;
long var341 /* : Int */;
val* var342 /* : NativeArray[Object] */;
val* var343 /* : String */;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
long var347 /* : Int */;
val* var348 /* : FlatString */;
val* var349 /* : MType */;
val* var351 /* : MType */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
long var355 /* : Int */;
val* var356 /* : FlatString */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
long var360 /* : Int */;
val* var361 /* : FlatString */;
val* var362 /* : Array[Object] */;
long var363 /* : Int */;
val* var364 /* : NativeArray[Object] */;
val* var365 /* : String */;
var_value = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var1,var_mtype) on <var1:MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:MType> */
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
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var13 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_compiler__MType__ctype]))(var11) /* ctype on <var11:MType>*/;
}
if (varonce) {
var15 = varonce;
} else {
var16 = "val*";
var17 = 4;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
var20 = string__FlatString___61d_61d(var14, var15);
var19 = var20;
}
var_ = var19;
if (var19){
{
var21 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "val*";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
var28 = string__FlatString___61d_61d(var21, var23);
var27 = var28;
}
var10 = var27;
} else {
var10 = var_;
}
if (var10){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var31 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_compiler__MType__ctype]))(var29) /* ctype on <var29:MType>*/;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "val*";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
var39 = string__FlatString___61d_61d(var32, var34);
var38 = var39;
}
if (var38){
if (varonce40) {
var41 = varonce40;
} else {
var42 = "((struct instance_";
var43 = 18;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
var45 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "*)";
var49 = 2;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ")->value; /* autounbox from ";
var54 = 28;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var58 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = " to ";
var62 = 4;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = " */";
var67 = 3;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 9;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var45;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var47;
((struct instance_array__NativeArray*)var71)->values[3] = (val*) var_value;
((struct instance_array__NativeArray*)var71)->values[4] = (val*) var52;
((struct instance_array__NativeArray*)var71)->values[5] = (val*) var56;
((struct instance_array__NativeArray*)var71)->values[6] = (val*) var60;
((struct instance_array__NativeArray*)var71)->values[7] = (val*) var_mtype;
((struct instance_array__NativeArray*)var71)->values[8] = (val*) var65;
{
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
var73 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var72, var_mtype);
}
var = var73;
goto RET_LABEL;
} else {
{
var74 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = "val*";
var78 = 4;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
{
var81 = string__FlatString___61d_61d(var74, var76);
var80 = var81;
}
if (var80){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var84 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
/* <var82:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var82->type->table_size) {
var85 = 0;
} else {
var85 = var82->type->type_table[cltype] == idtype;
}
if (unlikely(!var85)) {
var_class_name = var82 == NULL ? "null" : var82->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 987);
show_backtrace(1);
}
var_valtype = var82;
/* <var_mtype:MType> isa MClassType */
cltype89 = type_model__MClassType.color;
idtype90 = type_model__MClassType.id;
if(cltype89 >= var_mtype->type->table_size) {
var88 = 0;
} else {
var88 = var_mtype->type->type_table[cltype89] == idtype90;
}
var_91 = var88;
if (var88){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var94 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var92) on <var92:MClass> */
var97 = var92->attrs[COLOR_model__MClass___kind].val; /* _kind on <var92:MClass> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var95,var98) on <var95:MClassKind> */
var_other = var98;
{
{ /* Inline kernel#Object#is_same_instance (var95,var_other) on <var95:MClassKind> */
var104 = var95 == var_other;
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
var99 = var100;
}
var87 = var99;
} else {
var87 = var_91;
}
var_105 = var87;
if (var87){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var108 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline model#MClass#name (var106) on <var106:MClass> */
var111 = var106->attrs[COLOR_model__MClass___name].val; /* _name on <var106:MClass> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = "NativeString";
var115 = 12;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
{
{ /* Inline kernel#Object#!= (var109,var113) on <var109:String> */
var_other120 = var113;
{
var122 = ((short int (*)(val*, val*))(var109->class->vft[COLOR_kernel__Object___61d_61d]))(var109, var_other120) /* == on <var109:String>*/;
var121 = var122;
}
var123 = !var121;
var118 = var123;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
var117 = var118;
}
var86 = var117;
} else {
var86 = var_105;
}
if (var86){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var126 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var124) on <var124:AbstractCompiler(SeparateCompiler)> */
var129 = var124->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var124:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline model#MModule#pointer_type (var127) on <var127:MModule> */
var132 = var127->attrs[COLOR_model__MModule___pointer_type].val != NULL; /* _pointer_type on <var127:MModule> */
if(likely(var132)) {
var133 = var127->attrs[COLOR_model__MModule___pointer_type].val; /* _pointer_type on <var127:MModule> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 217);
show_backtrace(1);
}
} else {
if (varonce134) {
var135 = varonce134;
} else {
var136 = "Pointer";
var137 = 7;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
{
var139 = model__MModule__get_primitive_class(var127, var135);
}
{
{ /* Inline model#MClass#mclass_type (var139) on <var139:MClass> */
var142 = var139->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var139:MClass> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
var127->attrs[COLOR_model__MModule___pointer_type].val = var140; /* _pointer_type on <var127:MModule> */
var133 = var140;
}
var130 = var133;
RET_LABEL131:(void)0;
}
}
var_valtype = var130;
} else {
}
{
var143 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_mtype);
}
var_res = var143;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var147 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var145) on <var145:AbstractCompiler(SeparateCompiler)> */
var150 = var145->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var145:AbstractCompiler(SeparateCompiler)> */
var148 = var150;
RET_LABEL149:(void)0;
}
}
var151 = NULL;
if (var148 == NULL) {
var152 = 0; /* is null */
} else {
var152 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var148,var151) on <var148:nullable RapidTypeAnalysis> */
var_other120 = var151;
{
var156 = ((short int (*)(val*, val*))(var148->class->vft[COLOR_kernel__Object___61d_61d]))(var148, var_other120) /* == on <var148:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var155 = var156;
}
var157 = !var155;
var153 = var157;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
var152 = var153;
}
var_158 = var152;
if (var152){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var161 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var161 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var159) on <var159:AbstractCompiler(SeparateCompiler)> */
var164 = var159->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var159:AbstractCompiler(SeparateCompiler)> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
if (var162 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 992);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var162) on <var162:nullable RapidTypeAnalysis> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var167 = var162->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var162:nullable RapidTypeAnalysis> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
var168 = hash_collection__HashSet__has(var165, var_valtype);
}
var169 = !var168;
var144 = var169;
} else {
var144 = var_158;
}
if (var144){
if (varonce170) {
var171 = varonce170;
} else {
var172 = "/*no autobox from ";
var173 = 18;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var177 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = " to ";
var181 = 4;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = ": ";
var186 = 2;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var190 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = " is not live! */";
var194 = 16;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
var196 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var196 = array_instance Array[Object] */
var197 = 7;
var198 = NEW_array__NativeArray(var197, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var198)->values[0] = (val*) var171;
((struct instance_array__NativeArray*)var198)->values[1] = (val*) var175;
((struct instance_array__NativeArray*)var198)->values[2] = (val*) var179;
((struct instance_array__NativeArray*)var198)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var198)->values[4] = (val*) var184;
((struct instance_array__NativeArray*)var198)->values[5] = (val*) var188;
((struct instance_array__NativeArray*)var198)->values[6] = (val*) var192;
{
((void (*)(val*, val*, long))(var196->class->vft[COLOR_array__Array__with_native]))(var196, var198, var197) /* with_native on <var196:Array[Object]>*/;
}
}
{
var199 = ((val* (*)(val*))(var196->class->vft[COLOR_string__Object__to_s]))(var196) /* to_s on <var196:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var199); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = "PRINT_ERROR(\"Dead code executed!\\n\"); show_backtrace(1);";
var203 = 56;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var201); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce205) {
var206 = varonce205;
} else {
var207 = "BOX_";
var208 = 4;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
{
var210 = ((val* (*)(val*))(var_valtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
var211 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var211 = array_instance Array[Object] */
var212 = 2;
var213 = NEW_array__NativeArray(var212, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var213)->values[0] = (val*) var206;
((struct instance_array__NativeArray*)var213)->values[1] = (val*) var210;
{
((void (*)(val*, val*, long))(var211->class->vft[COLOR_array__Array__with_native]))(var211, var213, var212) /* with_native on <var211:Array[Object]>*/;
}
}
{
var214 = ((val* (*)(val*))(var211->class->vft[COLOR_string__Object__to_s]))(var211) /* to_s on <var211:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var214); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce215) {
var216 = varonce215;
} else {
var217 = " = BOX_";
var218 = 7;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
{
var220 = ((val* (*)(val*))(var_valtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
if (varonce221) {
var222 = varonce221;
} else {
var223 = "(";
var224 = 1;
var225 = string__NativeString__to_s_with_length(var223, var224);
var222 = var225;
varonce221 = var222;
}
if (varonce226) {
var227 = varonce226;
} else {
var228 = "); /* autobox from ";
var229 = 19;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var233 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
if (varonce234) {
var235 = varonce234;
} else {
var236 = " to ";
var237 = 4;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
if (varonce239) {
var240 = varonce239;
} else {
var241 = " */";
var242 = 3;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
var244 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var244 = array_instance Array[Object] */
var245 = 10;
var246 = NEW_array__NativeArray(var245, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var246)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var246)->values[1] = (val*) var216;
((struct instance_array__NativeArray*)var246)->values[2] = (val*) var220;
((struct instance_array__NativeArray*)var246)->values[3] = (val*) var222;
((struct instance_array__NativeArray*)var246)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var246)->values[5] = (val*) var227;
((struct instance_array__NativeArray*)var246)->values[6] = (val*) var231;
((struct instance_array__NativeArray*)var246)->values[7] = (val*) var235;
((struct instance_array__NativeArray*)var246)->values[8] = (val*) var_mtype;
((struct instance_array__NativeArray*)var246)->values[9] = (val*) var240;
{
((void (*)(val*, val*, long))(var244->class->vft[COLOR_array__Array__with_native]))(var244, var246, var245) /* with_native on <var244:Array[Object]>*/;
}
}
{
var247 = ((val* (*)(val*))(var244->class->vft[COLOR_string__Object__to_s]))(var244) /* to_s on <var244:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var247); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var253 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
var254 = ((val* (*)(val*))(var251->class->vft[COLOR_abstract_compiler__MType__ctype]))(var251) /* ctype on <var251:MType>*/;
}
if (varonce255) {
var256 = varonce255;
} else {
var257 = "void*";
var258 = 5;
var259 = string__NativeString__to_s_with_length(var257, var258);
var256 = var259;
varonce255 = var256;
}
{
var261 = string__FlatString___61d_61d(var254, var256);
var260 = var261;
}
var_262 = var260;
if (var260){
{
var263 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce264) {
var265 = varonce264;
} else {
var266 = "void*";
var267 = 5;
var268 = string__NativeString__to_s_with_length(var266, var267);
var265 = var268;
varonce264 = var265;
}
{
var270 = string__FlatString___61d_61d(var263, var265);
var269 = var270;
}
var250 = var269;
} else {
var250 = var_262;
}
var_271 = var250;
if (var250){
var249 = var_271;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var275 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var275 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var273 = var275;
RET_LABEL274:(void)0;
}
}
{
var276 = ((val* (*)(val*))(var273->class->vft[COLOR_abstract_compiler__MType__ctype]))(var273) /* ctype on <var273:MType>*/;
}
if (varonce277) {
var278 = varonce277;
} else {
var279 = "char*";
var280 = 5;
var281 = string__NativeString__to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
{
var283 = string__FlatString___61d_61d(var276, var278);
var282 = var283;
}
var_284 = var282;
if (var282){
{
var285 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce286) {
var287 = varonce286;
} else {
var288 = "void*";
var289 = 5;
var290 = string__NativeString__to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
{
var292 = string__FlatString___61d_61d(var285, var287);
var291 = var292;
}
var272 = var291;
} else {
var272 = var_284;
}
var249 = var272;
}
var_293 = var249;
if (var249){
var248 = var_293;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var297 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var297 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var295 = var297;
RET_LABEL296:(void)0;
}
}
{
var298 = ((val* (*)(val*))(var295->class->vft[COLOR_abstract_compiler__MType__ctype]))(var295) /* ctype on <var295:MType>*/;
}
if (varonce299) {
var300 = varonce299;
} else {
var301 = "void*";
var302 = 5;
var303 = string__NativeString__to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
{
var305 = string__FlatString___61d_61d(var298, var300);
var304 = var305;
}
var_306 = var304;
if (var304){
{
var307 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce308) {
var309 = varonce308;
} else {
var310 = "char*";
var311 = 5;
var312 = string__NativeString__to_s_with_length(var310, var311);
var309 = var312;
varonce308 = var309;
}
{
var314 = string__FlatString___61d_61d(var307, var309);
var313 = var314;
}
var294 = var313;
} else {
var294 = var_306;
}
var248 = var294;
}
if (var248){
var = var_value;
goto RET_LABEL;
} else {
{
var315 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_mtype);
}
var_res316 = var315;
if (varonce317) {
var318 = varonce317;
} else {
var319 = "/* ";
var320 = 3;
var321 = string__NativeString__to_s_with_length(var319, var320);
var318 = var321;
varonce317 = var318;
}
if (varonce322) {
var323 = varonce322;
} else {
var324 = " left unintialized (cannot convert ";
var325 = 35;
var326 = string__NativeString__to_s_with_length(var324, var325);
var323 = var326;
varonce322 = var323;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var329 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var329 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var327 = var329;
RET_LABEL328:(void)0;
}
}
if (varonce330) {
var331 = varonce330;
} else {
var332 = " to ";
var333 = 4;
var334 = string__NativeString__to_s_with_length(var332, var333);
var331 = var334;
varonce330 = var331;
}
if (varonce335) {
var336 = varonce335;
} else {
var337 = ") */";
var338 = 4;
var339 = string__NativeString__to_s_with_length(var337, var338);
var336 = var339;
varonce335 = var336;
}
var340 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var340 = array_instance Array[Object] */
var341 = 7;
var342 = NEW_array__NativeArray(var341, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var342)->values[0] = (val*) var318;
((struct instance_array__NativeArray*)var342)->values[1] = (val*) var_res316;
((struct instance_array__NativeArray*)var342)->values[2] = (val*) var323;
((struct instance_array__NativeArray*)var342)->values[3] = (val*) var327;
((struct instance_array__NativeArray*)var342)->values[4] = (val*) var331;
((struct instance_array__NativeArray*)var342)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var342)->values[6] = (val*) var336;
{
((void (*)(val*, val*, long))(var340->class->vft[COLOR_array__Array__with_native]))(var340, var342, var341) /* with_native on <var340:Array[Object]>*/;
}
}
{
var343 = ((val* (*)(val*))(var340->class->vft[COLOR_string__Object__to_s]))(var340) /* to_s on <var340:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var343); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce344) {
var345 = varonce344;
} else {
var346 = "PRINT_ERROR(\"Cast error: Cannot cast %s to %s.\\n\", \"";
var347 = 52;
var348 = string__NativeString__to_s_with_length(var346, var347);
var345 = var348;
varonce344 = var345;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var351 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var351 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var349 = var351;
RET_LABEL350:(void)0;
}
}
if (varonce352) {
var353 = varonce352;
} else {
var354 = "\", \"";
var355 = 4;
var356 = string__NativeString__to_s_with_length(var354, var355);
var353 = var356;
varonce352 = var353;
}
if (varonce357) {
var358 = varonce357;
} else {
var359 = "\"); show_backtrace(1);";
var360 = 22;
var361 = string__NativeString__to_s_with_length(var359, var360);
var358 = var361;
varonce357 = var358;
}
var362 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var362 = array_instance Array[Object] */
var363 = 5;
var364 = NEW_array__NativeArray(var363, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var364)->values[0] = (val*) var345;
((struct instance_array__NativeArray*)var364)->values[1] = (val*) var349;
((struct instance_array__NativeArray*)var364)->values[2] = (val*) var353;
((struct instance_array__NativeArray*)var364)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var364)->values[4] = (val*) var358;
{
((void (*)(val*, val*, long))(var362->class->vft[COLOR_array__Array__with_native]))(var362, var364, var363) /* with_native on <var362:Array[Object]>*/;
}
}
{
var365 = ((val* (*)(val*))(var362->class->vft[COLOR_string__Object__to_s]))(var362) /* to_s on <var362:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var365); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res316;
goto RET_LABEL;
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#autobox for (self: Object, RuntimeVariable, MType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__autobox(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#unbox_extern for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__unbox_extern(val* self, val* p0, val* p1) {
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
val* var10 /* : MClassKind */;
short int var11 /* : Bool */;
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
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : AbstractCompiler */;
val* var37 /* : AbstractCompiler */;
val* var38 /* : MModule */;
val* var40 /* : MModule */;
val* var41 /* : MClassType */;
short int var43 /* : Bool */;
val* var44 /* : MClassType */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : MClass */;
val* var51 /* : MClassType */;
val* var53 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var54 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : MType */;
val* var73 /* : MType */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : Array[Object] */;
long var80 /* : Int */;
val* var81 /* : NativeArray[Object] */;
val* var82 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var7,var10) on <var7:MClassKind> */
var_other = var10;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
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
var11 = var12;
}
var2 = var11;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (varonce) {
var24 = varonce;
} else {
var25 = "NativeString";
var26 = 12;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
{
{ /* Inline kernel#Object#!= (var21,var24) on <var21:String> */
var_other31 = var24;
{
var33 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_other31) /* == on <var21:String>*/;
var32 = var33;
}
var34 = !var32;
var29 = var34;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
var1 = var28;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var37 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var35) on <var35:AbstractCompiler(SeparateCompiler)> */
var40 = var35->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var35:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MModule#pointer_type (var38) on <var38:MModule> */
var43 = var38->attrs[COLOR_model__MModule___pointer_type].val != NULL; /* _pointer_type on <var38:MModule> */
if(likely(var43)) {
var44 = var38->attrs[COLOR_model__MModule___pointer_type].val; /* _pointer_type on <var38:MModule> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 217);
show_backtrace(1);
}
} else {
if (varonce45) {
var46 = varonce45;
} else {
var47 = "Pointer";
var48 = 7;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
var50 = model__MModule__get_primitive_class(var38, var46);
}
{
{ /* Inline model#MClass#mclass_type (var50) on <var50:MClass> */
var53 = var50->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var50:MClass> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
var38->attrs[COLOR_model__MModule___pointer_type].val = var51; /* _pointer_type on <var38:MModule> */
var44 = var51;
}
var41 = var44;
RET_LABEL42:(void)0;
}
}
var_pointer_type = var41;
{
var54 = abstract_compiler__AbstractCompilerVisitor__new_var_extern(self, var_mtype);
}
var_res = var54;
if (varonce55) {
var56 = varonce55;
} else {
var57 = " = ((struct instance_";
var58 = 21;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
{
var60 = ((val* (*)(val*))(var_pointer_type->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = "*)";
var64 = 2;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = ")->value; /* unboxing ";
var69 = 22;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var73 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = " */";
var77 = 3;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var79 = array_instance Array[Object] */
var80 = 8;
var81 = NEW_array__NativeArray(var80, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var81)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var81)->values[1] = (val*) var56;
((struct instance_array__NativeArray*)var81)->values[2] = (val*) var60;
((struct instance_array__NativeArray*)var81)->values[3] = (val*) var62;
((struct instance_array__NativeArray*)var81)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var81)->values[5] = (val*) var67;
((struct instance_array__NativeArray*)var81)->values[6] = (val*) var71;
((struct instance_array__NativeArray*)var81)->values[7] = (val*) var75;
{
((void (*)(val*, val*, long))(var79->class->vft[COLOR_array__Array__with_native]))(var79, var81, var80) /* with_native on <var79:Array[Object]>*/;
}
}
{
var82 = ((val* (*)(val*))(var79->class->vft[COLOR_string__Object__to_s]))(var79) /* to_s on <var79:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var82); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
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
