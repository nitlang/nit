#include "nit__separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompiler#compile_class_to_c for (self: SeparateCompiler, MClass) */
void nit___nit__SeparateCompiler___compile_class_to_c(val* self, val* p0) {
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
short int var_ /* var : Bool */;
val* var29 /* : HashSet[MClass] */;
val* var31 /* : HashSet[MClass] */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
val* var35 /* : String */;
static val* varonce;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
val* var42 /* : String */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var_54 /* var : Bool */;
val* var55 /* : String */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var_is_dead /* var is_dead: Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
val* var80 /* : String */;
short int var81 /* : Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
val* var87 /* : Array[Object] */;
long var88 /* : Int */;
val* var89 /* : NativeArray[Object] */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
val* var101 /* : Array[Object] */;
long var102 /* : Int */;
val* var103 /* : NativeArray[Object] */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[Object] */;
val* var118 /* : String */;
long var119 /* : Int */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : Array[Object] */;
long var126 /* : Int */;
val* var127 /* : NativeArray[Object] */;
val* var128 /* : Object */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
long var135 /* : Int */;
long var_i /* var i: Int */;
long var136 /* : Int */;
long var138 /* : Int */;
long var_139 /* var : Int */;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var143 /* : Bool */;
val* var144 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
val* var145 /* : null */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
val* var_other149 /* var other: nullable Object */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
short int var158 /* : Bool */;
int cltype159;
int idtype160;
short int var161 /* : Bool */;
val* var162 /* : null */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
short int var_168 /* var : Bool */;
val* var169 /* : HashSet[MMethodDef] */;
val* var171 /* : HashSet[MMethodDef] */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : FlatString */;
val* var179 /* : MModule */;
val* var181 /* : MModule */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : FlatString */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
val* var197 /* : Array[Object] */;
long var198 /* : Int */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : String */;
val* var201 /* : SeparateRuntimeFunction */;
val* var_rf /* var rf: SeparateRuntimeFunction */;
val* var202 /* : String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : FlatString */;
val* var208 /* : String */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : FlatString */;
val* var214 /* : MModule */;
val* var216 /* : MModule */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
long var220 /* : Int */;
val* var221 /* : FlatString */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : FlatString */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : NativeString */;
long var230 /* : Int */;
val* var231 /* : FlatString */;
val* var232 /* : Array[Object] */;
long var233 /* : Int */;
val* var234 /* : NativeArray[Object] */;
val* var235 /* : String */;
long var236 /* : Int */;
long var237 /* : Int */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : FlatString */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
long var247 /* : Int */;
val* var248 /* : FlatString */;
short int var249 /* : Bool */;
val* var250 /* : String */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
long var254 /* : Int */;
val* var255 /* : FlatString */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
short int var_260 /* var : Bool */;
val* var261 /* : MClass */;
val* var263 /* : MClass */;
val* var264 /* : String */;
val* var266 /* : String */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
long var270 /* : Int */;
val* var271 /* : FlatString */;
short int var272 /* : Bool */;
val* var273 /* : CodeWriter */;
val* var275 /* : CodeWriter */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : FlatString */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : FlatString */;
val* var286 /* : Array[Object] */;
long var287 /* : Int */;
val* var288 /* : NativeArray[Object] */;
val* var289 /* : String */;
val* var290 /* : CodeWriter */;
val* var292 /* : CodeWriter */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
long var296 /* : Int */;
val* var297 /* : FlatString */;
val* var298 /* : CodeWriter */;
val* var300 /* : CodeWriter */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : FlatString */;
val* var306 /* : CodeWriter */;
val* var308 /* : CodeWriter */;
val* var309 /* : String */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
long var313 /* : Int */;
val* var314 /* : FlatString */;
val* var315 /* : Array[Object] */;
long var316 /* : Int */;
val* var317 /* : NativeArray[Object] */;
val* var318 /* : String */;
val* var319 /* : CodeWriter */;
val* var321 /* : CodeWriter */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
long var325 /* : Int */;
val* var326 /* : FlatString */;
short int var327 /* : Bool */;
val* var328 /* : HashSet[MClassType] */;
val* var330 /* : HashSet[MClassType] */;
short int var331 /* : Bool */;
short int var332 /* : Bool */;
short int var_333 /* var : Bool */;
val* var334 /* : MClass */;
val* var336 /* : MClass */;
val* var337 /* : String */;
val* var339 /* : String */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
long var343 /* : Int */;
val* var344 /* : FlatString */;
short int var345 /* : Bool */;
short int var347 /* : Bool */;
short int var348 /* : Bool */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : NativeString */;
long var352 /* : Int */;
val* var353 /* : FlatString */;
val* var354 /* : Array[Object] */;
long var355 /* : Int */;
val* var356 /* : NativeArray[Object] */;
val* var357 /* : String */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : NativeString */;
long var361 /* : Int */;
val* var362 /* : FlatString */;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : NativeString */;
long var366 /* : Int */;
val* var367 /* : FlatString */;
val* var368 /* : String */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
long var372 /* : Int */;
val* var373 /* : FlatString */;
val* var374 /* : Array[Object] */;
long var375 /* : Int */;
val* var376 /* : NativeArray[Object] */;
val* var377 /* : String */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
long var381 /* : Int */;
val* var382 /* : FlatString */;
static val* varonce383;
val* var384 /* : String */;
char* var385 /* : NativeString */;
long var386 /* : Int */;
val* var387 /* : FlatString */;
val* var388 /* : Array[Object] */;
long var389 /* : Int */;
val* var390 /* : NativeArray[Object] */;
val* var391 /* : String */;
static val* varonce392;
val* var393 /* : String */;
char* var394 /* : NativeString */;
long var395 /* : Int */;
val* var396 /* : FlatString */;
val* var397 /* : String */;
static val* varonce398;
val* var399 /* : String */;
char* var400 /* : NativeString */;
long var401 /* : Int */;
val* var402 /* : FlatString */;
val* var403 /* : String */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : NativeString */;
long var407 /* : Int */;
val* var408 /* : FlatString */;
val* var409 /* : Array[Object] */;
long var410 /* : Int */;
val* var411 /* : NativeArray[Object] */;
val* var412 /* : String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : FlatString */;
static val* varonce418;
val* var419 /* : String */;
char* var420 /* : NativeString */;
long var421 /* : Int */;
val* var422 /* : FlatString */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
long var426 /* : Int */;
val* var427 /* : FlatString */;
val* var428 /* : Array[Object] */;
long var429 /* : Int */;
val* var430 /* : NativeArray[Object] */;
val* var431 /* : String */;
val* var432 /* : AbstractCompiler */;
val* var434 /* : AbstractCompiler */;
val* var435 /* : Set[MType] */;
val* var437 /* : Set[MType] */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : NativeString */;
long var441 /* : Int */;
val* var442 /* : FlatString */;
val* var443 /* : Array[Object] */;
long var444 /* : Int */;
val* var445 /* : NativeArray[Object] */;
val* var446 /* : String */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
long var450 /* : Int */;
val* var451 /* : FlatString */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
long var455 /* : Int */;
val* var456 /* : FlatString */;
val* var457 /* : Array[Object] */;
long var458 /* : Int */;
val* var459 /* : NativeArray[Object] */;
val* var460 /* : String */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
long var464 /* : Int */;
val* var465 /* : FlatString */;
val* var466 /* : Array[Object] */;
long var467 /* : Int */;
val* var468 /* : NativeArray[Object] */;
val* var469 /* : String */;
static val* varonce470;
val* var471 /* : String */;
char* var472 /* : NativeString */;
long var473 /* : Int */;
val* var474 /* : FlatString */;
static val* varonce475;
val* var476 /* : String */;
char* var477 /* : NativeString */;
long var478 /* : Int */;
val* var479 /* : FlatString */;
val* var480 /* : Array[Object] */;
long var481 /* : Int */;
val* var482 /* : NativeArray[Object] */;
val* var483 /* : String */;
static val* varonce484;
val* var485 /* : String */;
char* var486 /* : NativeString */;
long var487 /* : Int */;
val* var488 /* : FlatString */;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : NativeString */;
long var492 /* : Int */;
val* var493 /* : FlatString */;
static val* varonce494;
val* var495 /* : String */;
char* var496 /* : NativeString */;
long var497 /* : Int */;
val* var498 /* : FlatString */;
val* var499 /* : MClass */;
val* var501 /* : MClass */;
val* var502 /* : String */;
val* var504 /* : String */;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : NativeString */;
long var508 /* : Int */;
val* var509 /* : FlatString */;
short int var510 /* : Bool */;
short int var512 /* : Bool */;
short int var513 /* : Bool */;
val* var514 /* : AbstractCompilerVisitor */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
long var518 /* : Int */;
val* var519 /* : FlatString */;
val* var520 /* : Array[Object] */;
long var521 /* : Int */;
val* var522 /* : NativeArray[Object] */;
val* var523 /* : String */;
val* var524 /* : String */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
long var528 /* : Int */;
val* var529 /* : FlatString */;
static val* varonce530;
val* var531 /* : String */;
char* var532 /* : NativeString */;
long var533 /* : Int */;
val* var534 /* : FlatString */;
val* var535 /* : Array[Object] */;
long var536 /* : Int */;
val* var537 /* : NativeArray[Object] */;
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
val* var553 /* : String */;
static val* varonce554;
val* var555 /* : String */;
char* var556 /* : NativeString */;
long var557 /* : Int */;
val* var558 /* : FlatString */;
static val* varonce559;
val* var560 /* : String */;
char* var561 /* : NativeString */;
long var562 /* : Int */;
val* var563 /* : FlatString */;
val* var564 /* : Array[Object] */;
long var565 /* : Int */;
val* var566 /* : NativeArray[Object] */;
val* var567 /* : String */;
static val* varonce568;
val* var569 /* : String */;
char* var570 /* : NativeString */;
long var571 /* : Int */;
val* var572 /* : FlatString */;
val* var573 /* : Array[Object] */;
long var574 /* : Int */;
val* var575 /* : NativeArray[Object] */;
val* var576 /* : String */;
static val* varonce577;
val* var578 /* : String */;
char* var579 /* : NativeString */;
long var580 /* : Int */;
val* var581 /* : FlatString */;
val* var582 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var583 /* : Bool */;
static val* varonce585;
val* var586 /* : String */;
char* var587 /* : NativeString */;
long var588 /* : Int */;
val* var589 /* : FlatString */;
val* var590 /* : String */;
static val* varonce591;
val* var592 /* : String */;
char* var593 /* : NativeString */;
long var594 /* : Int */;
val* var595 /* : FlatString */;
val* var596 /* : Array[Object] */;
long var597 /* : Int */;
val* var598 /* : NativeArray[Object] */;
val* var599 /* : String */;
static val* varonce600;
val* var601 /* : String */;
char* var602 /* : NativeString */;
long var603 /* : Int */;
val* var604 /* : FlatString */;
val* var605 /* : Array[Object] */;
long var606 /* : Int */;
val* var607 /* : NativeArray[Object] */;
val* var608 /* : String */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : NativeString */;
long var612 /* : Int */;
val* var613 /* : FlatString */;
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
val* var642 /* : String */;
static val* varonce643;
val* var644 /* : String */;
char* var645 /* : NativeString */;
long var646 /* : Int */;
val* var647 /* : FlatString */;
static val* varonce648;
val* var649 /* : String */;
char* var650 /* : NativeString */;
long var651 /* : Int */;
val* var652 /* : FlatString */;
val* var653 /* : Array[Object] */;
long var654 /* : Int */;
val* var655 /* : NativeArray[Object] */;
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
val* var676 /* : String */;
val* var678 /* : String */;
static val* varonce679;
val* var680 /* : String */;
char* var681 /* : NativeString */;
long var682 /* : Int */;
val* var683 /* : FlatString */;
short int var684 /* : Bool */;
val* var685 /* : CodeWriter */;
val* var687 /* : CodeWriter */;
static val* varonce688;
val* var689 /* : String */;
char* var690 /* : NativeString */;
long var691 /* : Int */;
val* var692 /* : FlatString */;
static val* varonce693;
val* var694 /* : String */;
char* var695 /* : NativeString */;
long var696 /* : Int */;
val* var697 /* : FlatString */;
val* var698 /* : Array[Object] */;
long var699 /* : Int */;
val* var700 /* : NativeArray[Object] */;
val* var701 /* : String */;
val* var702 /* : CodeWriter */;
val* var704 /* : CodeWriter */;
static val* varonce705;
val* var706 /* : String */;
char* var707 /* : NativeString */;
long var708 /* : Int */;
val* var709 /* : FlatString */;
val* var710 /* : CodeWriter */;
val* var712 /* : CodeWriter */;
static val* varonce713;
val* var714 /* : String */;
char* var715 /* : NativeString */;
long var716 /* : Int */;
val* var717 /* : FlatString */;
val* var718 /* : CodeWriter */;
val* var720 /* : CodeWriter */;
static val* varonce721;
val* var722 /* : String */;
char* var723 /* : NativeString */;
long var724 /* : Int */;
val* var725 /* : FlatString */;
val* var726 /* : CodeWriter */;
val* var728 /* : CodeWriter */;
static val* varonce729;
val* var730 /* : String */;
char* var731 /* : NativeString */;
long var732 /* : Int */;
val* var733 /* : FlatString */;
val* var734 /* : CodeWriter */;
val* var736 /* : CodeWriter */;
static val* varonce737;
val* var738 /* : String */;
char* var739 /* : NativeString */;
long var740 /* : Int */;
val* var741 /* : FlatString */;
static val* varonce742;
val* var743 /* : String */;
char* var744 /* : NativeString */;
long var745 /* : Int */;
val* var746 /* : FlatString */;
val* var747 /* : Array[Object] */;
long var748 /* : Int */;
val* var749 /* : NativeArray[Object] */;
val* var750 /* : String */;
val* var751 /* : String */;
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
static val* varonce766;
val* var767 /* : String */;
char* var768 /* : NativeString */;
long var769 /* : Int */;
val* var770 /* : FlatString */;
static val* varonce771;
val* var772 /* : String */;
char* var773 /* : NativeString */;
long var774 /* : Int */;
val* var775 /* : FlatString */;
val* var776 /* : Array[Object] */;
long var777 /* : Int */;
val* var778 /* : NativeArray[Object] */;
val* var779 /* : String */;
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
static val* varonce795;
val* var796 /* : String */;
char* var797 /* : NativeString */;
long var798 /* : Int */;
val* var799 /* : FlatString */;
val* var800 /* : String */;
val* var_res801 /* var res: String */;
static val* varonce802;
val* var803 /* : String */;
char* var804 /* : NativeString */;
long var805 /* : Int */;
val* var806 /* : FlatString */;
static val* varonce807;
val* var808 /* : String */;
char* var809 /* : NativeString */;
long var810 /* : Int */;
val* var811 /* : FlatString */;
static val* varonce812;
val* var813 /* : String */;
char* var814 /* : NativeString */;
long var815 /* : Int */;
val* var816 /* : FlatString */;
val* var817 /* : Array[Object] */;
long var818 /* : Int */;
val* var819 /* : NativeArray[Object] */;
val* var820 /* : String */;
val* var821 /* : Array[MType] */;
val* var822 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
static val* varonce823;
val* var824 /* : String */;
char* var825 /* : NativeString */;
long var826 /* : Int */;
val* var827 /* : FlatString */;
static val* varonce828;
val* var829 /* : String */;
char* var830 /* : NativeString */;
long var831 /* : Int */;
val* var832 /* : FlatString */;
val* var833 /* : String */;
static val* varonce834;
val* var835 /* : String */;
char* var836 /* : NativeString */;
long var837 /* : Int */;
val* var838 /* : FlatString */;
val* var839 /* : Array[Object] */;
long var840 /* : Int */;
val* var841 /* : NativeArray[Object] */;
val* var842 /* : String */;
static val* varonce843;
val* var844 /* : String */;
char* var845 /* : NativeString */;
long var846 /* : Int */;
val* var847 /* : FlatString */;
val* var848 /* : Array[Object] */;
long var849 /* : Int */;
val* var850 /* : NativeArray[Object] */;
val* var851 /* : String */;
static val* varonce852;
val* var853 /* : String */;
char* var854 /* : NativeString */;
long var855 /* : Int */;
val* var856 /* : FlatString */;
static val* varonce857;
val* var858 /* : String */;
char* var859 /* : NativeString */;
long var860 /* : Int */;
val* var861 /* : FlatString */;
val* var862 /* : Array[Object] */;
long var863 /* : Int */;
val* var864 /* : NativeArray[Object] */;
val* var865 /* : String */;
static val* varonce866;
val* var867 /* : String */;
char* var868 /* : NativeString */;
long var869 /* : Int */;
val* var870 /* : FlatString */;
static val* varonce871;
val* var872 /* : String */;
char* var873 /* : NativeString */;
long var874 /* : Int */;
val* var875 /* : FlatString */;
val* var876 /* : Array[Object] */;
long var877 /* : Int */;
val* var878 /* : NativeArray[Object] */;
val* var879 /* : String */;
static val* varonce880;
val* var881 /* : String */;
char* var882 /* : NativeString */;
long var883 /* : Int */;
val* var884 /* : FlatString */;
val* var885 /* : Array[Object] */;
long var886 /* : Int */;
val* var887 /* : NativeArray[Object] */;
val* var888 /* : String */;
static val* varonce889;
val* var890 /* : String */;
char* var891 /* : NativeString */;
long var892 /* : Int */;
val* var893 /* : FlatString */;
static val* varonce894;
val* var895 /* : String */;
char* var896 /* : NativeString */;
long var897 /* : Int */;
val* var898 /* : FlatString */;
val* var899 /* : Array[Object] */;
long var900 /* : Int */;
val* var901 /* : NativeArray[Object] */;
val* var902 /* : String */;
static val* varonce903;
val* var904 /* : String */;
char* var905 /* : NativeString */;
long var906 /* : Int */;
val* var907 /* : FlatString */;
short int var908 /* : Bool */;
val* var909 /* : MClass */;
val* var911 /* : MClass */;
val* var912 /* : MClassKind */;
val* var914 /* : MClassKind */;
val* var915 /* : MClassKind */;
short int var916 /* : Bool */;
short int var918 /* : Bool */;
short int var920 /* : Bool */;
short int var_921 /* var : Bool */;
val* var922 /* : MClass */;
val* var924 /* : MClass */;
val* var925 /* : String */;
val* var927 /* : String */;
static val* varonce928;
val* var929 /* : String */;
char* var930 /* : NativeString */;
long var931 /* : Int */;
val* var932 /* : FlatString */;
short int var933 /* : Bool */;
short int var935 /* : Bool */;
short int var936 /* : Bool */;
val* var937 /* : MModule */;
val* var939 /* : MModule */;
val* var940 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
static val* varonce941;
val* var942 /* : String */;
char* var943 /* : NativeString */;
long var944 /* : Int */;
val* var945 /* : FlatString */;
val* var946 /* : Array[Object] */;
long var947 /* : Int */;
val* var948 /* : NativeArray[Object] */;
val* var949 /* : String */;
val* var950 /* : String */;
static val* varonce951;
val* var952 /* : String */;
char* var953 /* : NativeString */;
long var954 /* : Int */;
val* var955 /* : FlatString */;
static val* varonce956;
val* var957 /* : String */;
char* var958 /* : NativeString */;
long var959 /* : Int */;
val* var960 /* : FlatString */;
val* var961 /* : Array[Object] */;
long var962 /* : Int */;
val* var963 /* : NativeArray[Object] */;
val* var964 /* : String */;
static val* varonce965;
val* var966 /* : String */;
char* var967 /* : NativeString */;
long var968 /* : Int */;
val* var969 /* : FlatString */;
static val* varonce970;
val* var971 /* : String */;
char* var972 /* : NativeString */;
long var973 /* : Int */;
val* var974 /* : FlatString */;
val* var975 /* : Array[Object] */;
long var976 /* : Int */;
val* var977 /* : NativeArray[Object] */;
val* var978 /* : String */;
val* var979 /* : String */;
static val* varonce980;
val* var981 /* : String */;
char* var982 /* : NativeString */;
long var983 /* : Int */;
val* var984 /* : FlatString */;
static val* varonce985;
val* var986 /* : String */;
char* var987 /* : NativeString */;
long var988 /* : Int */;
val* var989 /* : FlatString */;
val* var990 /* : Array[Object] */;
long var991 /* : Int */;
val* var992 /* : NativeArray[Object] */;
val* var993 /* : String */;
static val* varonce994;
val* var995 /* : String */;
char* var996 /* : NativeString */;
long var997 /* : Int */;
val* var998 /* : FlatString */;
val* var999 /* : Array[Object] */;
long var1000 /* : Int */;
val* var1001 /* : NativeArray[Object] */;
val* var1002 /* : String */;
static val* varonce1003;
val* var1004 /* : String */;
char* var1005 /* : NativeString */;
long var1006 /* : Int */;
val* var1007 /* : FlatString */;
val* var1008 /* : RuntimeVariable */;
val* var_res1009 /* var res: RuntimeVariable */;
short int var1010 /* : Bool */;
static val* varonce1012;
val* var1013 /* : String */;
char* var1014 /* : NativeString */;
long var1015 /* : Int */;
val* var1016 /* : FlatString */;
val* var1017 /* : String */;
static val* varonce1018;
val* var1019 /* : String */;
char* var1020 /* : NativeString */;
long var1021 /* : Int */;
val* var1022 /* : FlatString */;
val* var1023 /* : Array[Object] */;
long var1024 /* : Int */;
val* var1025 /* : NativeArray[Object] */;
val* var1026 /* : String */;
static val* varonce1027;
val* var1028 /* : String */;
char* var1029 /* : NativeString */;
long var1030 /* : Int */;
val* var1031 /* : FlatString */;
val* var1032 /* : Array[Object] */;
long var1033 /* : Int */;
val* var1034 /* : NativeArray[Object] */;
val* var1035 /* : String */;
static val* varonce1036;
val* var1037 /* : String */;
char* var1038 /* : NativeString */;
long var1039 /* : Int */;
val* var1040 /* : FlatString */;
static val* varonce1041;
val* var1042 /* : String */;
char* var1043 /* : NativeString */;
long var1044 /* : Int */;
val* var1045 /* : FlatString */;
val* var1046 /* : Array[Object] */;
long var1047 /* : Int */;
val* var1048 /* : NativeArray[Object] */;
val* var1049 /* : String */;
static val* varonce1050;
val* var1051 /* : String */;
char* var1052 /* : NativeString */;
long var1053 /* : Int */;
val* var1054 /* : FlatString */;
static val* varonce1055;
val* var1056 /* : String */;
char* var1057 /* : NativeString */;
long var1058 /* : Int */;
val* var1059 /* : FlatString */;
val* var1060 /* : Array[Object] */;
long var1061 /* : Int */;
val* var1062 /* : NativeArray[Object] */;
val* var1063 /* : String */;
static val* varonce1064;
val* var1065 /* : String */;
char* var1066 /* : NativeString */;
long var1067 /* : Int */;
val* var1068 /* : FlatString */;
val* var1069 /* : String */;
static val* varonce1070;
val* var1071 /* : String */;
char* var1072 /* : NativeString */;
long var1073 /* : Int */;
val* var1074 /* : FlatString */;
static val* varonce1075;
val* var1076 /* : String */;
char* var1077 /* : NativeString */;
long var1078 /* : Int */;
val* var1079 /* : FlatString */;
val* var1080 /* : Array[Object] */;
long var1081 /* : Int */;
val* var1082 /* : NativeArray[Object] */;
val* var1083 /* : String */;
static val* varonce1084;
val* var1085 /* : String */;
char* var1086 /* : NativeString */;
long var1087 /* : Int */;
val* var1088 /* : FlatString */;
static val* varonce1089;
val* var1090 /* : String */;
char* var1091 /* : NativeString */;
long var1092 /* : Int */;
val* var1093 /* : FlatString */;
val* var1094 /* : Array[Object] */;
long var1095 /* : Int */;
val* var1096 /* : NativeArray[Object] */;
val* var1097 /* : String */;
static val* varonce1098;
val* var1099 /* : String */;
char* var1100 /* : NativeString */;
long var1101 /* : Int */;
val* var1102 /* : FlatString */;
static val* varonce1103;
val* var1104 /* : String */;
char* var1105 /* : NativeString */;
long var1106 /* : Int */;
val* var1107 /* : FlatString */;
val* var1108 /* : Array[Object] */;
long var1109 /* : Int */;
val* var1110 /* : NativeArray[Object] */;
val* var1111 /* : String */;
val* var1112 /* : String */;
static val* varonce1113;
val* var1114 /* : String */;
char* var1115 /* : NativeString */;
long var1116 /* : Int */;
val* var1117 /* : FlatString */;
static val* varonce1118;
val* var1119 /* : String */;
char* var1120 /* : NativeString */;
long var1121 /* : Int */;
val* var1122 /* : FlatString */;
val* var1123 /* : Array[Object] */;
long var1124 /* : Int */;
val* var1125 /* : NativeArray[Object] */;
val* var1126 /* : String */;
static val* varonce1127;
val* var1128 /* : String */;
char* var1129 /* : NativeString */;
long var1130 /* : Int */;
val* var1131 /* : FlatString */;
static val* varonce1132;
val* var1133 /* : String */;
char* var1134 /* : NativeString */;
long var1135 /* : Int */;
val* var1136 /* : FlatString */;
val* var1137 /* : Array[Object] */;
long var1138 /* : Int */;
val* var1139 /* : NativeArray[Object] */;
val* var1140 /* : String */;
val* var1141 /* : String */;
static val* varonce1142;
val* var1143 /* : String */;
char* var1144 /* : NativeString */;
long var1145 /* : Int */;
val* var1146 /* : FlatString */;
static val* varonce1147;
val* var1148 /* : String */;
char* var1149 /* : NativeString */;
long var1150 /* : Int */;
val* var1151 /* : FlatString */;
val* var1152 /* : Array[Object] */;
long var1153 /* : Int */;
val* var1154 /* : NativeArray[Object] */;
val* var1155 /* : String */;
static val* varonce1156;
val* var1157 /* : String */;
char* var1158 /* : NativeString */;
long var1159 /* : Int */;
val* var1160 /* : FlatString */;
val* var1161 /* : Array[Object] */;
long var1162 /* : Int */;
val* var1163 /* : NativeArray[Object] */;
val* var1164 /* : String */;
static val* varonce1165;
val* var1166 /* : String */;
char* var1167 /* : NativeString */;
long var1168 /* : Int */;
val* var1169 /* : FlatString */;
val* var1170 /* : RuntimeVariable */;
val* var_res1171 /* var res: RuntimeVariable */;
short int var1172 /* : Bool */;
static val* varonce1174;
val* var1175 /* : String */;
char* var1176 /* : NativeString */;
long var1177 /* : Int */;
val* var1178 /* : FlatString */;
long var1179 /* : Int */;
long var1181 /* : Int */;
static val* varonce1182;
val* var1183 /* : String */;
char* var1184 /* : NativeString */;
long var1185 /* : Int */;
val* var1186 /* : FlatString */;
val* var1187 /* : Array[Object] */;
long var1188 /* : Int */;
val* var1189 /* : NativeArray[Object] */;
val* var1190 /* : Object */;
val* var1191 /* : String */;
static val* varonce1192;
val* var1193 /* : String */;
char* var1194 /* : NativeString */;
long var1195 /* : Int */;
val* var1196 /* : FlatString */;
val* var1197 /* : Array[Object] */;
long var1198 /* : Int */;
val* var1199 /* : NativeArray[Object] */;
val* var1200 /* : String */;
static val* varonce1201;
val* var1202 /* : String */;
char* var1203 /* : NativeString */;
long var1204 /* : Int */;
val* var1205 /* : FlatString */;
static val* varonce1206;
val* var1207 /* : String */;
char* var1208 /* : NativeString */;
long var1209 /* : Int */;
val* var1210 /* : FlatString */;
val* var1211 /* : Array[Object] */;
long var1212 /* : Int */;
val* var1213 /* : NativeArray[Object] */;
val* var1214 /* : String */;
static val* varonce1215;
val* var1216 /* : String */;
char* var1217 /* : NativeString */;
long var1218 /* : Int */;
val* var1219 /* : FlatString */;
static val* varonce1220;
val* var1221 /* : String */;
char* var1222 /* : NativeString */;
long var1223 /* : Int */;
val* var1224 /* : FlatString */;
val* var1225 /* : Array[Object] */;
long var1226 /* : Int */;
val* var1227 /* : NativeArray[Object] */;
val* var1228 /* : String */;
static val* varonce1229;
val* var1230 /* : String */;
char* var1231 /* : NativeString */;
long var1232 /* : Int */;
val* var1233 /* : FlatString */;
static val* varonce1234;
val* var1235 /* : String */;
char* var1236 /* : NativeString */;
long var1237 /* : Int */;
val* var1238 /* : FlatString */;
val* var1239 /* : Array[Object] */;
long var1240 /* : Int */;
val* var1241 /* : NativeArray[Object] */;
val* var1242 /* : String */;
static val* varonce1243;
val* var1244 /* : String */;
char* var1245 /* : NativeString */;
long var1246 /* : Int */;
val* var1247 /* : FlatString */;
var_mclass = p0;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var2 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mtype = var3;
{
var6 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass);
}
var_c_name = var6;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var9 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 856);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val* (*)(val* self, val* p0))(var7->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var7, var_mclass) /* [] on <var7:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_vft = var10;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 857);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val* self, val* p0))(var11->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var11, var_mclass) /* [] on <var11:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_attrs = var14;
{
var15 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var_v = var15;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var18 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
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
var27 = ((short int (*)(val* self, val* p0))(var_rta->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
var_ = var24;
if (var24){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var31 = var_rta->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 62);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var29, var_mclass);
}
var33 = !var32;
var22 = var33;
} else {
var22 = var_;
}
var_34 = var22;
if (var22){
{
var35 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce) {
var36 = varonce;
} else {
var37 = "val*";
var38 = 4;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce = var36;
}
{
var40 = ((short int (*)(val* self, val* p0))(var35->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var35, var36) /* == on <var35:String>*/;
}
var21 = var40;
} else {
var21 = var_34;
}
var_41 = var21;
if (var21){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var44 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "NativeArray";
var48 = 11;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
{ /* Inline kernel#Object#!= (var42,var46) on <var42:String> */
var_other = var46;
{
var52 = ((short int (*)(val* self, val* p0))(var42->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var42, var_other) /* == on <var42:String>*/;
}
var53 = !var52;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var20 = var50;
} else {
var20 = var_41;
}
var_54 = var20;
if (var20){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var57 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "Pointer";
var61 = 7;
var62 = standard___standard__NativeString___to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
{ /* Inline kernel#Object#!= (var55,var59) on <var55:String> */
var_other = var59;
{
var65 = ((short int (*)(val* self, val* p0))(var55->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var55, var_other) /* == on <var55:String>*/;
}
var66 = !var65;
var63 = var66;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var19 = var63;
} else {
var19 = var_54;
}
var_is_dead = var19;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "/* runtime class ";
var70 = 17;
var71 = standard___standard__NativeString___to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = " */";
var75 = 3;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 3;
var79 = NEW_standard__NativeArray(var78, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var79)->values[0] = (val*) var68;
((struct instance_standard__NativeArray*)var79)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var79)->values[2] = (val*) var73;
{
((void (*)(val* self, val* p0, long p1))(var77->class->vft[COLOR_standard__array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val* self))(var77->class->vft[COLOR_standard__string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var80); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var81 = !var_is_dead;
if (var81){
if (varonce82) {
var83 = varonce82;
} else {
var84 = "class_";
var85 = 6;
var86 = standard___standard__NativeString___to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var87 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var87 = array_instance Array[Object] */
var88 = 2;
var89 = NEW_standard__NativeArray(var88, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var89)->values[0] = (val*) var83;
((struct instance_standard__NativeArray*)var89)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var87->class->vft[COLOR_standard__array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[Object]>*/;
}
}
{
var90 = ((val* (*)(val* self))(var87->class->vft[COLOR_standard__string__Object__to_s]))(var87) /* to_s on <var87:Array[Object]>*/;
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "extern const struct class class_";
var94 = 32;
var95 = standard___standard__NativeString___to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = ";";
var99 = 1;
var100 = standard___standard__NativeString___to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
var101 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var101 = array_instance Array[Object] */
var102 = 3;
var103 = NEW_standard__NativeArray(var102, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var103)->values[0] = (val*) var92;
((struct instance_standard__NativeArray*)var103)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var103)->values[2] = (val*) var97;
{
((void (*)(val* self, val* p0, long p1))(var101->class->vft[COLOR_standard__array__Array__with_native]))(var101, var103, var102) /* with_native on <var101:Array[Object]>*/;
}
}
{
var104 = ((val* (*)(val* self))(var101->class->vft[COLOR_standard__string__Object__to_s]))(var101) /* to_s on <var101:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var90, var104); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = "const struct class class_";
var108 = 25;
var109 = standard___standard__NativeString___to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = " = {";
var113 = 4;
var114 = standard___standard__NativeString___to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var115 = array_instance Array[Object] */
var116 = 3;
var117 = NEW_standard__NativeArray(var116, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var117)->values[0] = (val*) var106;
((struct instance_standard__NativeArray*)var117)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var117)->values[2] = (val*) var111;
{
((void (*)(val* self, val* p0, long p1))(var115->class->vft[COLOR_standard__array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[Object]>*/;
}
}
{
var118 = ((val* (*)(val* self))(var115->class->vft[COLOR_standard__string__Object__to_s]))(var115) /* to_s on <var115:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var118); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var119 = nit___nit__SeparateCompiler___box_kind_of(self, var_mclass);
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = ", /* box_kind */";
var123 = 16;
var124 = standard___standard__NativeString___to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 2;
var127 = NEW_standard__NativeArray(var126, &type_standard__NativeArray__standard__Object);
var128 = BOX_standard__Int(var119); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var127)->values[0] = (val*) var128;
((struct instance_standard__NativeArray*)var127)->values[1] = (val*) var121;
{
((void (*)(val* self, val* p0, long p1))(var125->class->vft[COLOR_standard__array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
}
{
var129 = ((val* (*)(val* self))(var125->class->vft[COLOR_standard__string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var129); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = "{";
var133 = 1;
var134 = standard___standard__NativeString___to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var131); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var135 = 0;
var_i = var135;
{
{ /* Inline array#AbstractArrayRead#length (var_vft) on <var_vft:Array[nullable MPropDef]> */
var138 = var_vft->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_vft:Array[nullable MPropDef]> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
var_139 = var136;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_139) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_139:Int> isa OTHER */
/* <var_139:Int> isa OTHER */
var142 = 1; /* easy <var_139:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var143 = var_i < var_139;
var140 = var143;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
if (var140){
{
var144 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_vft, var_i);
}
var_mpropdef = var144;
var145 = NULL;
if (var_mpropdef == NULL) {
var146 = 1; /* is null */
} else {
var146 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var145) on <var_mpropdef:nullable MPropDef> */
var_other149 = var145;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other149) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var152 = var_mpropdef == var_other149;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
var147 = var150;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
if (var146){
if (varonce153) {
var154 = varonce153;
} else {
var155 = "NULL, /* empty */";
var156 = 17;
var157 = standard___standard__NativeString___to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var154); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype159 = type_nit__MMethodDef.color;
idtype160 = type_nit__MMethodDef.id;
if(cltype159 >= var_mpropdef->type->table_size) {
var158 = 0;
} else {
var158 = var_mpropdef->type->type_table[cltype159] == idtype160;
}
if (unlikely(!var158)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 703);
show_backtrace(1);
}
var162 = NULL;
if (var_rta == NULL) {
var163 = 0; /* is null */
} else {
var163 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var162) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var162;
{
var166 = ((short int (*)(val* self, val* p0))(var_rta->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
}
var167 = !var166;
var164 = var167;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
var163 = var164;
}
var_168 = var163;
if (var163){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var171 = var_rta->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
show_backtrace(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
var172 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var169, var_mpropdef);
}
var173 = !var172;
var161 = var173;
} else {
var161 = var_168;
}
if (var161){
if (varonce174) {
var175 = varonce174;
} else {
var176 = "NULL, /* DEAD ";
var177 = 14;
var178 = standard___standard__NativeString___to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var181 = var_mclass->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
if (varonce182) {
var183 = varonce182;
} else {
var184 = ":";
var185 = 1;
var186 = standard___standard__NativeString___to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = ":";
var190 = 1;
var191 = standard___standard__NativeString___to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = " */";
var195 = 3;
var196 = standard___standard__NativeString___to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
var197 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 7;
var199 = NEW_standard__NativeArray(var198, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var199)->values[0] = (val*) var175;
((struct instance_standard__NativeArray*)var199)->values[1] = (val*) var179;
((struct instance_standard__NativeArray*)var199)->values[2] = (val*) var183;
((struct instance_standard__NativeArray*)var199)->values[3] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var199)->values[4] = (val*) var188;
((struct instance_standard__NativeArray*)var199)->values[5] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var199)->values[6] = (val*) var193;
{
((void (*)(val* self, val* p0, long p1))(var197->class->vft[COLOR_standard__array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
}
}
{
var200 = ((val* (*)(val* self))(var197->class->vft[COLOR_standard__string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var200); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label;
} else {
}
{
var201 = nit__separate_compiler___MMethodDef___virtual_runtime_function(var_mpropdef);
}
var_rf = var201;
{
var202 = nit___nit__AbstractRuntimeFunction___c_name(var_rf);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var202); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce203) {
var204 = varonce203;
} else {
var205 = "(nitmethod_t)";
var206 = 13;
var207 = standard___standard__NativeString___to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
{
var208 = nit___nit__AbstractRuntimeFunction___c_name(var_rf);
}
if (varonce209) {
var210 = varonce209;
} else {
var211 = ", /* pointer to ";
var212 = 16;
var213 = standard___standard__NativeString___to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var216 = var_mclass->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
if (varonce217) {
var218 = varonce217;
} else {
var219 = ":";
var220 = 1;
var221 = standard___standard__NativeString___to_s_with_length(var219, var220);
var218 = var221;
varonce217 = var218;
}
if (varonce222) {
var223 = varonce222;
} else {
var224 = ":";
var225 = 1;
var226 = standard___standard__NativeString___to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
if (varonce227) {
var228 = varonce227;
} else {
var229 = " */";
var230 = 3;
var231 = standard___standard__NativeString___to_s_with_length(var229, var230);
var228 = var231;
varonce227 = var228;
}
var232 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var232 = array_instance Array[Object] */
var233 = 9;
var234 = NEW_standard__NativeArray(var233, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var234)->values[0] = (val*) var204;
((struct instance_standard__NativeArray*)var234)->values[1] = (val*) var208;
((struct instance_standard__NativeArray*)var234)->values[2] = (val*) var210;
((struct instance_standard__NativeArray*)var234)->values[3] = (val*) var214;
((struct instance_standard__NativeArray*)var234)->values[4] = (val*) var218;
((struct instance_standard__NativeArray*)var234)->values[5] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var234)->values[6] = (val*) var223;
((struct instance_standard__NativeArray*)var234)->values[7] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var234)->values[8] = (val*) var228;
{
((void (*)(val* self, val* p0, long p1))(var232->class->vft[COLOR_standard__array__Array__with_native]))(var232, var234, var233) /* with_native on <var232:Array[Object]>*/;
}
}
{
var235 = ((val* (*)(val* self))(var232->class->vft[COLOR_standard__string__Object__to_s]))(var232) /* to_s on <var232:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var235); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
BREAK_label: (void)0;
var236 = 1;
{
var237 = standard___standard__Int___Discrete__successor(var_i, var236);
}
var_i = var237;
} else {
goto BREAK_label238;
}
}
BREAK_label238: (void)0;
if (varonce239) {
var240 = varonce239;
} else {
var241 = "}";
var242 = 1;
var243 = standard___standard__NativeString___to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var240); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce244) {
var245 = varonce244;
} else {
var246 = "};";
var247 = 2;
var248 = standard___standard__NativeString___to_s_with_length(var246, var247);
var245 = var248;
varonce244 = var245;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var245); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
{
var250 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce251) {
var252 = varonce251;
} else {
var253 = "val*";
var254 = 4;
var255 = standard___standard__NativeString___to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
{
{ /* Inline kernel#Object#!= (var250,var252) on <var250:String> */
var_other = var252;
{
var258 = ((short int (*)(val* self, val* p0))(var250->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var250, var_other) /* == on <var250:String>*/;
}
var259 = !var258;
var256 = var259;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
}
var_260 = var256;
if (var256){
var249 = var_260;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var263 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
{ /* Inline model#MClass#name (var261) on <var261:MClass> */
var266 = var261->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var261:MClass> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
if (varonce267) {
var268 = varonce267;
} else {
var269 = "Pointer";
var270 = 7;
var271 = standard___standard__NativeString___to_s_with_length(var269, var270);
var268 = var271;
varonce267 = var268;
}
{
var272 = ((short int (*)(val* self, val* p0))(var264->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var264, var268) /* == on <var264:String>*/;
}
var249 = var272;
}
if (var249){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var275 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var275 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var273 = var275;
RET_LABEL274:(void)0;
}
}
if (varonce276) {
var277 = varonce276;
} else {
var278 = "struct instance_";
var279 = 16;
var280 = standard___standard__NativeString___to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
if (varonce281) {
var282 = varonce281;
} else {
var283 = " {";
var284 = 2;
var285 = standard___standard__NativeString___to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
var286 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var286 = array_instance Array[Object] */
var287 = 3;
var288 = NEW_standard__NativeArray(var287, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var288)->values[0] = (val*) var277;
((struct instance_standard__NativeArray*)var288)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var288)->values[2] = (val*) var282;
{
((void (*)(val* self, val* p0, long p1))(var286->class->vft[COLOR_standard__array__Array__with_native]))(var286, var288, var287) /* with_native on <var286:Array[Object]>*/;
}
}
{
var289 = ((val* (*)(val* self))(var286->class->vft[COLOR_standard__string__Object__to_s]))(var286) /* to_s on <var286:Array[Object]>*/;
}
{
nit___nit__CodeWriter___add_decl(var273, var289); /* Direct call abstract_compiler#CodeWriter#add_decl on <var273:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var292 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var292 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
if (varonce293) {
var294 = varonce293;
} else {
var295 = "const struct type *type;";
var296 = 24;
var297 = standard___standard__NativeString___to_s_with_length(var295, var296);
var294 = var297;
varonce293 = var294;
}
{
nit___nit__CodeWriter___add_decl(var290, var294); /* Direct call abstract_compiler#CodeWriter#add_decl on <var290:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var300 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var300 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
if (varonce301) {
var302 = varonce301;
} else {
var303 = "const struct class *class;";
var304 = 26;
var305 = standard___standard__NativeString___to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
{
nit___nit__CodeWriter___add_decl(var298, var302); /* Direct call abstract_compiler#CodeWriter#add_decl on <var298:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var308 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
var309 = nit__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
if (varonce310) {
var311 = varonce310;
} else {
var312 = " value;";
var313 = 7;
var314 = standard___standard__NativeString___to_s_with_length(var312, var313);
var311 = var314;
varonce310 = var311;
}
var315 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var315 = array_instance Array[Object] */
var316 = 2;
var317 = NEW_standard__NativeArray(var316, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var317)->values[0] = (val*) var309;
((struct instance_standard__NativeArray*)var317)->values[1] = (val*) var311;
{
((void (*)(val* self, val* p0, long p1))(var315->class->vft[COLOR_standard__array__Array__with_native]))(var315, var317, var316) /* with_native on <var315:Array[Object]>*/;
}
}
{
var318 = ((val* (*)(val* self))(var315->class->vft[COLOR_standard__string__Object__to_s]))(var315) /* to_s on <var315:Array[Object]>*/;
}
{
nit___nit__CodeWriter___add_decl(var306, var318); /* Direct call abstract_compiler#CodeWriter#add_decl on <var306:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var321 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var321 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var319 = var321;
RET_LABEL320:(void)0;
}
}
if (varonce322) {
var323 = varonce322;
} else {
var324 = "};";
var325 = 2;
var326 = standard___standard__NativeString___to_s_with_length(var324, var325);
var323 = var326;
varonce322 = var323;
}
{
nit___nit__CodeWriter___add_decl(var319, var323); /* Direct call abstract_compiler#CodeWriter#add_decl on <var319:CodeWriter>*/
}
if (var_rta == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 727);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var_rta) on <var_rta:nullable RapidTypeAnalysis> */
if (unlikely(var_rta == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var330 = var_rta->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var_rta:nullable RapidTypeAnalysis> */
if (unlikely(var330 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
{
var331 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var328, var_mtype);
}
var332 = !var331;
var_333 = var332;
if (var332){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var336 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var336 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
{
{ /* Inline model#MClass#name (var334) on <var334:MClass> */
var339 = var334->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var334:MClass> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
if (varonce340) {
var341 = varonce340;
} else {
var342 = "Pointer";
var343 = 7;
var344 = standard___standard__NativeString___to_s_with_length(var342, var343);
var341 = var344;
varonce340 = var341;
}
{
{ /* Inline kernel#Object#!= (var337,var341) on <var337:String> */
var_other = var341;
{
var347 = ((short int (*)(val* self, val* p0))(var337->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var337, var_other) /* == on <var337:String>*/;
}
var348 = !var347;
var345 = var348;
goto RET_LABEL346;
RET_LABEL346:(void)0;
}
}
var327 = var345;
} else {
var327 = var_333;
}
if (var327){
goto RET_LABEL;
} else {
}
if (varonce349) {
var350 = varonce349;
} else {
var351 = "BOX_";
var352 = 4;
var353 = standard___standard__NativeString___to_s_with_length(var351, var352);
var350 = var353;
varonce349 = var350;
}
var354 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var354 = array_instance Array[Object] */
var355 = 2;
var356 = NEW_standard__NativeArray(var355, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var356)->values[0] = (val*) var350;
((struct instance_standard__NativeArray*)var356)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var354->class->vft[COLOR_standard__array__Array__with_native]))(var354, var356, var355) /* with_native on <var354:Array[Object]>*/;
}
}
{
var357 = ((val* (*)(val* self))(var354->class->vft[COLOR_standard__string__Object__to_s]))(var354) /* to_s on <var354:Array[Object]>*/;
}
if (varonce358) {
var359 = varonce358;
} else {
var360 = "val* BOX_";
var361 = 9;
var362 = standard___standard__NativeString___to_s_with_length(var360, var361);
var359 = var362;
varonce358 = var359;
}
if (varonce363) {
var364 = varonce363;
} else {
var365 = "(";
var366 = 1;
var367 = standard___standard__NativeString___to_s_with_length(var365, var366);
var364 = var367;
varonce363 = var364;
}
{
var368 = nit__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
if (varonce369) {
var370 = varonce369;
} else {
var371 = ");";
var372 = 2;
var373 = standard___standard__NativeString___to_s_with_length(var371, var372);
var370 = var373;
varonce369 = var370;
}
var374 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var374 = array_instance Array[Object] */
var375 = 5;
var376 = NEW_standard__NativeArray(var375, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var376)->values[0] = (val*) var359;
((struct instance_standard__NativeArray*)var376)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var376)->values[2] = (val*) var364;
((struct instance_standard__NativeArray*)var376)->values[3] = (val*) var368;
((struct instance_standard__NativeArray*)var376)->values[4] = (val*) var370;
{
((void (*)(val* self, val* p0, long p1))(var374->class->vft[COLOR_standard__array__Array__with_native]))(var374, var376, var375) /* with_native on <var374:Array[Object]>*/;
}
}
{
var377 = ((val* (*)(val* self))(var374->class->vft[COLOR_standard__string__Object__to_s]))(var374) /* to_s on <var374:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var357, var377); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce378) {
var379 = varonce378;
} else {
var380 = "/* allocate ";
var381 = 12;
var382 = standard___standard__NativeString___to_s_with_length(var380, var381);
var379 = var382;
varonce378 = var379;
}
if (varonce383) {
var384 = varonce383;
} else {
var385 = " */";
var386 = 3;
var387 = standard___standard__NativeString___to_s_with_length(var385, var386);
var384 = var387;
varonce383 = var384;
}
var388 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var388 = array_instance Array[Object] */
var389 = 3;
var390 = NEW_standard__NativeArray(var389, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var390)->values[0] = (val*) var379;
((struct instance_standard__NativeArray*)var390)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var390)->values[2] = (val*) var384;
{
((void (*)(val* self, val* p0, long p1))(var388->class->vft[COLOR_standard__array__Array__with_native]))(var388, var390, var389) /* with_native on <var388:Array[Object]>*/;
}
}
{
var391 = ((val* (*)(val* self))(var388->class->vft[COLOR_standard__string__Object__to_s]))(var388) /* to_s on <var388:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var391); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce392) {
var393 = varonce392;
} else {
var394 = "val* BOX_";
var395 = 9;
var396 = standard___standard__NativeString___to_s_with_length(var394, var395);
var393 = var396;
varonce392 = var393;
}
{
var397 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce398) {
var399 = varonce398;
} else {
var400 = "(";
var401 = 1;
var402 = standard___standard__NativeString___to_s_with_length(var400, var401);
var399 = var402;
varonce398 = var399;
}
{
var403 = nit__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
if (varonce404) {
var405 = varonce404;
} else {
var406 = " value) {";
var407 = 9;
var408 = standard___standard__NativeString___to_s_with_length(var406, var407);
var405 = var408;
varonce404 = var405;
}
var409 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var409 = array_instance Array[Object] */
var410 = 5;
var411 = NEW_standard__NativeArray(var410, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var411)->values[0] = (val*) var393;
((struct instance_standard__NativeArray*)var411)->values[1] = (val*) var397;
((struct instance_standard__NativeArray*)var411)->values[2] = (val*) var399;
((struct instance_standard__NativeArray*)var411)->values[3] = (val*) var403;
((struct instance_standard__NativeArray*)var411)->values[4] = (val*) var405;
{
((void (*)(val* self, val* p0, long p1))(var409->class->vft[COLOR_standard__array__Array__with_native]))(var409, var411, var410) /* with_native on <var409:Array[Object]>*/;
}
}
{
var412 = ((val* (*)(val* self))(var409->class->vft[COLOR_standard__string__Object__to_s]))(var409) /* to_s on <var409:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var412); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce413) {
var414 = varonce413;
} else {
var415 = "struct instance_";
var416 = 16;
var417 = standard___standard__NativeString___to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
if (varonce418) {
var419 = varonce418;
} else {
var420 = "*res = nit_alloc(sizeof(struct instance_";
var421 = 40;
var422 = standard___standard__NativeString___to_s_with_length(var420, var421);
var419 = var422;
varonce418 = var419;
}
if (varonce423) {
var424 = varonce423;
} else {
var425 = "));";
var426 = 3;
var427 = standard___standard__NativeString___to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
var428 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var428 = array_instance Array[Object] */
var429 = 5;
var430 = NEW_standard__NativeArray(var429, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var430)->values[0] = (val*) var414;
((struct instance_standard__NativeArray*)var430)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var430)->values[2] = (val*) var419;
((struct instance_standard__NativeArray*)var430)->values[3] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var430)->values[4] = (val*) var424;
{
((void (*)(val* self, val* p0, long p1))(var428->class->vft[COLOR_standard__array__Array__with_native]))(var428, var430, var429) /* with_native on <var428:Array[Object]>*/;
}
}
{
var431 = ((val* (*)(val* self))(var428->class->vft[COLOR_standard__string__Object__to_s]))(var428) /* to_s on <var428:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var431); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var434 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var434 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var432 = var434;
RET_LABEL433:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var432) on <var432:AbstractCompiler(SeparateCompiler)> */
var437 = var432->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var432:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var437 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 121);
show_backtrace(1);
}
var435 = var437;
RET_LABEL436:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var435->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var435, var_mtype) /* add on <var435:Set[MType]>*/;
}
if (varonce438) {
var439 = varonce438;
} else {
var440 = "type_";
var441 = 5;
var442 = standard___standard__NativeString___to_s_with_length(var440, var441);
var439 = var442;
varonce438 = var439;
}
var443 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var443 = array_instance Array[Object] */
var444 = 2;
var445 = NEW_standard__NativeArray(var444, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var445)->values[0] = (val*) var439;
((struct instance_standard__NativeArray*)var445)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var443->class->vft[COLOR_standard__array__Array__with_native]))(var443, var445, var444) /* with_native on <var443:Array[Object]>*/;
}
}
{
var446 = ((val* (*)(val* self))(var443->class->vft[COLOR_standard__string__Object__to_s]))(var443) /* to_s on <var443:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var446); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce447) {
var448 = varonce447;
} else {
var449 = "res->type = &type_";
var450 = 18;
var451 = standard___standard__NativeString___to_s_with_length(var449, var450);
var448 = var451;
varonce447 = var448;
}
if (varonce452) {
var453 = varonce452;
} else {
var454 = ";";
var455 = 1;
var456 = standard___standard__NativeString___to_s_with_length(var454, var455);
var453 = var456;
varonce452 = var453;
}
var457 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var457 = array_instance Array[Object] */
var458 = 3;
var459 = NEW_standard__NativeArray(var458, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var459)->values[0] = (val*) var448;
((struct instance_standard__NativeArray*)var459)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var459)->values[2] = (val*) var453;
{
((void (*)(val* self, val* p0, long p1))(var457->class->vft[COLOR_standard__array__Array__with_native]))(var457, var459, var458) /* with_native on <var457:Array[Object]>*/;
}
}
{
var460 = ((val* (*)(val* self))(var457->class->vft[COLOR_standard__string__Object__to_s]))(var457) /* to_s on <var457:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var460); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce461) {
var462 = varonce461;
} else {
var463 = "class_";
var464 = 6;
var465 = standard___standard__NativeString___to_s_with_length(var463, var464);
var462 = var465;
varonce461 = var462;
}
var466 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var466 = array_instance Array[Object] */
var467 = 2;
var468 = NEW_standard__NativeArray(var467, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var468)->values[0] = (val*) var462;
((struct instance_standard__NativeArray*)var468)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var466->class->vft[COLOR_standard__array__Array__with_native]))(var466, var468, var467) /* with_native on <var466:Array[Object]>*/;
}
}
{
var469 = ((val* (*)(val* self))(var466->class->vft[COLOR_standard__string__Object__to_s]))(var466) /* to_s on <var466:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var469); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce470) {
var471 = varonce470;
} else {
var472 = "res->class = &class_";
var473 = 20;
var474 = standard___standard__NativeString___to_s_with_length(var472, var473);
var471 = var474;
varonce470 = var471;
}
if (varonce475) {
var476 = varonce475;
} else {
var477 = ";";
var478 = 1;
var479 = standard___standard__NativeString___to_s_with_length(var477, var478);
var476 = var479;
varonce475 = var476;
}
var480 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var480 = array_instance Array[Object] */
var481 = 3;
var482 = NEW_standard__NativeArray(var481, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var482)->values[0] = (val*) var471;
((struct instance_standard__NativeArray*)var482)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var482)->values[2] = (val*) var476;
{
((void (*)(val* self, val* p0, long p1))(var480->class->vft[COLOR_standard__array__Array__with_native]))(var480, var482, var481) /* with_native on <var480:Array[Object]>*/;
}
}
{
var483 = ((val* (*)(val* self))(var480->class->vft[COLOR_standard__string__Object__to_s]))(var480) /* to_s on <var480:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var483); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce484) {
var485 = varonce484;
} else {
var486 = "res->value = value;";
var487 = 19;
var488 = standard___standard__NativeString___to_s_with_length(var486, var487);
var485 = var488;
varonce484 = var485;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var485); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce489) {
var490 = varonce489;
} else {
var491 = "return (val*)res;";
var492 = 17;
var493 = standard___standard__NativeString___to_s_with_length(var491, var492);
var490 = var493;
varonce489 = var490;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var490); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce494) {
var495 = varonce494;
} else {
var496 = "}";
var497 = 1;
var498 = standard___standard__NativeString___to_s_with_length(var496, var497);
var495 = var498;
varonce494 = var495;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var495); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var501 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var501 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var499 = var501;
RET_LABEL500:(void)0;
}
}
{
{ /* Inline model#MClass#name (var499) on <var499:MClass> */
var504 = var499->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var499:MClass> */
if (unlikely(var504 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var502 = var504;
RET_LABEL503:(void)0;
}
}
if (varonce505) {
var506 = varonce505;
} else {
var507 = "Pointer";
var508 = 7;
var509 = standard___standard__NativeString___to_s_with_length(var507, var508);
var506 = var509;
varonce505 = var506;
}
{
{ /* Inline kernel#Object#!= (var502,var506) on <var502:String> */
var_other = var506;
{
var512 = ((short int (*)(val* self, val* p0))(var502->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var502, var_other) /* == on <var502:String>*/;
}
var513 = !var512;
var510 = var513;
goto RET_LABEL511;
RET_LABEL511:(void)0;
}
}
if (var510){
goto RET_LABEL;
} else {
}
{
var514 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var_v = var514;
if (varonce515) {
var516 = varonce515;
} else {
var517 = "NEW_";
var518 = 4;
var519 = standard___standard__NativeString___to_s_with_length(var517, var518);
var516 = var519;
varonce515 = var516;
}
var520 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var520 = array_instance Array[Object] */
var521 = 2;
var522 = NEW_standard__NativeArray(var521, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var522)->values[0] = (val*) var516;
((struct instance_standard__NativeArray*)var522)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var520->class->vft[COLOR_standard__array__Array__with_native]))(var520, var522, var521) /* with_native on <var520:Array[Object]>*/;
}
}
{
var523 = ((val* (*)(val* self))(var520->class->vft[COLOR_standard__string__Object__to_s]))(var520) /* to_s on <var520:Array[Object]>*/;
}
{
var524 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce525) {
var526 = varonce525;
} else {
var527 = " NEW_";
var528 = 5;
var529 = standard___standard__NativeString___to_s_with_length(var527, var528);
var526 = var529;
varonce525 = var526;
}
if (varonce530) {
var531 = varonce530;
} else {
var532 = "(const struct type* type);";
var533 = 26;
var534 = standard___standard__NativeString___to_s_with_length(var532, var533);
var531 = var534;
varonce530 = var531;
}
var535 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var535 = array_instance Array[Object] */
var536 = 4;
var537 = NEW_standard__NativeArray(var536, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var537)->values[0] = (val*) var524;
((struct instance_standard__NativeArray*)var537)->values[1] = (val*) var526;
((struct instance_standard__NativeArray*)var537)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var537)->values[3] = (val*) var531;
{
((void (*)(val* self, val* p0, long p1))(var535->class->vft[COLOR_standard__array__Array__with_native]))(var535, var537, var536) /* with_native on <var535:Array[Object]>*/;
}
}
{
var538 = ((val* (*)(val* self))(var535->class->vft[COLOR_standard__string__Object__to_s]))(var535) /* to_s on <var535:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var523, var538); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce539) {
var540 = varonce539;
} else {
var541 = "/* allocate ";
var542 = 12;
var543 = standard___standard__NativeString___to_s_with_length(var541, var542);
var540 = var543;
varonce539 = var540;
}
if (varonce544) {
var545 = varonce544;
} else {
var546 = " */";
var547 = 3;
var548 = standard___standard__NativeString___to_s_with_length(var546, var547);
var545 = var548;
varonce544 = var545;
}
var549 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var549 = array_instance Array[Object] */
var550 = 3;
var551 = NEW_standard__NativeArray(var550, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var551)->values[0] = (val*) var540;
((struct instance_standard__NativeArray*)var551)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var551)->values[2] = (val*) var545;
{
((void (*)(val* self, val* p0, long p1))(var549->class->vft[COLOR_standard__array__Array__with_native]))(var549, var551, var550) /* with_native on <var549:Array[Object]>*/;
}
}
{
var552 = ((val* (*)(val* self))(var549->class->vft[COLOR_standard__string__Object__to_s]))(var549) /* to_s on <var549:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var552); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var553 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce554) {
var555 = varonce554;
} else {
var556 = " NEW_";
var557 = 5;
var558 = standard___standard__NativeString___to_s_with_length(var556, var557);
var555 = var558;
varonce554 = var555;
}
if (varonce559) {
var560 = varonce559;
} else {
var561 = "(const struct type* type) {";
var562 = 27;
var563 = standard___standard__NativeString___to_s_with_length(var561, var562);
var560 = var563;
varonce559 = var560;
}
var564 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var564 = array_instance Array[Object] */
var565 = 4;
var566 = NEW_standard__NativeArray(var565, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var566)->values[0] = (val*) var553;
((struct instance_standard__NativeArray*)var566)->values[1] = (val*) var555;
((struct instance_standard__NativeArray*)var566)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var566)->values[3] = (val*) var560;
{
((void (*)(val* self, val* p0, long p1))(var564->class->vft[COLOR_standard__array__Array__with_native]))(var564, var566, var565) /* with_native on <var564:Array[Object]>*/;
}
}
{
var567 = ((val* (*)(val* self))(var564->class->vft[COLOR_standard__string__Object__to_s]))(var564) /* to_s on <var564:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var567); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce568) {
var569 = varonce568;
} else {
var570 = " is DEAD";
var571 = 8;
var572 = standard___standard__NativeString___to_s_with_length(var570, var571);
var569 = var572;
varonce568 = var569;
}
var573 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var573 = array_instance Array[Object] */
var574 = 2;
var575 = NEW_standard__NativeArray(var574, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var575)->values[0] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var575)->values[1] = (val*) var569;
{
((void (*)(val* self, val* p0, long p1))(var573->class->vft[COLOR_standard__array__Array__with_native]))(var573, var575, var574) /* with_native on <var573:Array[Object]>*/;
}
}
{
var576 = ((val* (*)(val* self))(var573->class->vft[COLOR_standard__string__Object__to_s]))(var573) /* to_s on <var573:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var576); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce577) {
var578 = varonce577;
} else {
var579 = "self";
var580 = 4;
var581 = standard___standard__NativeString___to_s_with_length(var579, var580);
var578 = var581;
varonce577 = var578;
}
{
var582 = nit___nit__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var578);
}
var_res = var582;
var583 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,var583) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = var583; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL584:(void)0;
}
}
if (varonce585) {
var586 = varonce585;
} else {
var587 = " = nit_alloc(sizeof(struct instance_";
var588 = 36;
var589 = standard___standard__NativeString___to_s_with_length(var587, var588);
var586 = var589;
varonce585 = var586;
}
{
var590 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce591) {
var592 = varonce591;
} else {
var593 = "));";
var594 = 3;
var595 = standard___standard__NativeString___to_s_with_length(var593, var594);
var592 = var595;
varonce591 = var592;
}
var596 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var596 = array_instance Array[Object] */
var597 = 4;
var598 = NEW_standard__NativeArray(var597, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var598)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var598)->values[1] = (val*) var586;
((struct instance_standard__NativeArray*)var598)->values[2] = (val*) var590;
((struct instance_standard__NativeArray*)var598)->values[3] = (val*) var592;
{
((void (*)(val* self, val* p0, long p1))(var596->class->vft[COLOR_standard__array__Array__with_native]))(var596, var598, var597) /* with_native on <var596:Array[Object]>*/;
}
}
{
var599 = ((val* (*)(val* self))(var596->class->vft[COLOR_standard__string__Object__to_s]))(var596) /* to_s on <var596:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var599); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce600) {
var601 = varonce600;
} else {
var602 = "->type = type;";
var603 = 14;
var604 = standard___standard__NativeString___to_s_with_length(var602, var603);
var601 = var604;
varonce600 = var601;
}
var605 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var605 = array_instance Array[Object] */
var606 = 2;
var607 = NEW_standard__NativeArray(var606, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var607)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var607)->values[1] = (val*) var601;
{
((void (*)(val* self, val* p0, long p1))(var605->class->vft[COLOR_standard__array__Array__with_native]))(var605, var607, var606) /* with_native on <var605:Array[Object]>*/;
}
}
{
var608 = ((val* (*)(val* self))(var605->class->vft[COLOR_standard__string__Object__to_s]))(var605) /* to_s on <var605:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var608); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce609) {
var610 = varonce609;
} else {
var611 = "type";
var612 = 4;
var613 = standard___standard__NativeString___to_s_with_length(var611, var612);
var610 = var613;
varonce609 = var610;
}
{
nit___nit__SeparateCompiler___hardening_live_type(self, var_v, var610); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (varonce614) {
var615 = varonce614;
} else {
var616 = "class_";
var617 = 6;
var618 = standard___standard__NativeString___to_s_with_length(var616, var617);
var615 = var618;
varonce614 = var615;
}
var619 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var619 = array_instance Array[Object] */
var620 = 2;
var621 = NEW_standard__NativeArray(var620, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var621)->values[0] = (val*) var615;
((struct instance_standard__NativeArray*)var621)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var619->class->vft[COLOR_standard__array__Array__with_native]))(var619, var621, var620) /* with_native on <var619:Array[Object]>*/;
}
}
{
var622 = ((val* (*)(val* self))(var619->class->vft[COLOR_standard__string__Object__to_s]))(var619) /* to_s on <var619:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var622); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce623) {
var624 = varonce623;
} else {
var625 = "->class = &class_";
var626 = 17;
var627 = standard___standard__NativeString___to_s_with_length(var625, var626);
var624 = var627;
varonce623 = var624;
}
if (varonce628) {
var629 = varonce628;
} else {
var630 = ";";
var631 = 1;
var632 = standard___standard__NativeString___to_s_with_length(var630, var631);
var629 = var632;
varonce628 = var629;
}
var633 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var633 = array_instance Array[Object] */
var634 = 4;
var635 = NEW_standard__NativeArray(var634, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var635)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var635)->values[1] = (val*) var624;
((struct instance_standard__NativeArray*)var635)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var635)->values[3] = (val*) var629;
{
((void (*)(val* self, val* p0, long p1))(var633->class->vft[COLOR_standard__array__Array__with_native]))(var633, var635, var634) /* with_native on <var633:Array[Object]>*/;
}
}
{
var636 = ((val* (*)(val* self))(var633->class->vft[COLOR_standard__string__Object__to_s]))(var633) /* to_s on <var633:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var636); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce637) {
var638 = varonce637;
} else {
var639 = "((struct instance_";
var640 = 18;
var641 = standard___standard__NativeString___to_s_with_length(var639, var640);
var638 = var641;
varonce637 = var638;
}
{
var642 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce643) {
var644 = varonce643;
} else {
var645 = "*)";
var646 = 2;
var647 = standard___standard__NativeString___to_s_with_length(var645, var646);
var644 = var647;
varonce643 = var644;
}
if (varonce648) {
var649 = varonce648;
} else {
var650 = ")->value = NULL;";
var651 = 16;
var652 = standard___standard__NativeString___to_s_with_length(var650, var651);
var649 = var652;
varonce648 = var649;
}
var653 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var653 = array_instance Array[Object] */
var654 = 5;
var655 = NEW_standard__NativeArray(var654, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var655)->values[0] = (val*) var638;
((struct instance_standard__NativeArray*)var655)->values[1] = (val*) var642;
((struct instance_standard__NativeArray*)var655)->values[2] = (val*) var644;
((struct instance_standard__NativeArray*)var655)->values[3] = (val*) var_res;
((struct instance_standard__NativeArray*)var655)->values[4] = (val*) var649;
{
((void (*)(val* self, val* p0, long p1))(var653->class->vft[COLOR_standard__array__Array__with_native]))(var653, var655, var654) /* with_native on <var653:Array[Object]>*/;
}
}
{
var656 = ((val* (*)(val* self))(var653->class->vft[COLOR_standard__string__Object__to_s]))(var653) /* to_s on <var653:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var656); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce657) {
var658 = varonce657;
} else {
var659 = "return ";
var660 = 7;
var661 = standard___standard__NativeString___to_s_with_length(var659, var660);
var658 = var661;
varonce657 = var658;
}
if (varonce662) {
var663 = varonce662;
} else {
var664 = ";";
var665 = 1;
var666 = standard___standard__NativeString___to_s_with_length(var664, var665);
var663 = var666;
varonce662 = var663;
}
var667 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var667 = array_instance Array[Object] */
var668 = 3;
var669 = NEW_standard__NativeArray(var668, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var669)->values[0] = (val*) var658;
((struct instance_standard__NativeArray*)var669)->values[1] = (val*) var_res;
((struct instance_standard__NativeArray*)var669)->values[2] = (val*) var663;
{
((void (*)(val* self, val* p0, long p1))(var667->class->vft[COLOR_standard__array__Array__with_native]))(var667, var669, var668) /* with_native on <var667:Array[Object]>*/;
}
}
{
var670 = ((val* (*)(val* self))(var667->class->vft[COLOR_standard__string__Object__to_s]))(var667) /* to_s on <var667:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var670); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce671) {
var672 = varonce671;
} else {
var673 = "}";
var674 = 1;
var675 = standard___standard__NativeString___to_s_with_length(var673, var674);
var672 = var675;
varonce671 = var672;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var672); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var678 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var678 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var676 = var678;
RET_LABEL677:(void)0;
}
}
if (varonce679) {
var680 = varonce679;
} else {
var681 = "NativeArray";
var682 = 11;
var683 = standard___standard__NativeString___to_s_with_length(var681, var682);
var680 = var683;
varonce679 = var680;
}
{
var684 = ((short int (*)(val* self, val* p0))(var676->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var676, var680) /* == on <var676:String>*/;
}
if (var684){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var687 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var687 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var685 = var687;
RET_LABEL686:(void)0;
}
}
if (varonce688) {
var689 = varonce688;
} else {
var690 = "struct instance_";
var691 = 16;
var692 = standard___standard__NativeString___to_s_with_length(var690, var691);
var689 = var692;
varonce688 = var689;
}
if (varonce693) {
var694 = varonce693;
} else {
var695 = " {";
var696 = 2;
var697 = standard___standard__NativeString___to_s_with_length(var695, var696);
var694 = var697;
varonce693 = var694;
}
var698 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var698 = array_instance Array[Object] */
var699 = 3;
var700 = NEW_standard__NativeArray(var699, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var700)->values[0] = (val*) var689;
((struct instance_standard__NativeArray*)var700)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var700)->values[2] = (val*) var694;
{
((void (*)(val* self, val* p0, long p1))(var698->class->vft[COLOR_standard__array__Array__with_native]))(var698, var700, var699) /* with_native on <var698:Array[Object]>*/;
}
}
{
var701 = ((val* (*)(val* self))(var698->class->vft[COLOR_standard__string__Object__to_s]))(var698) /* to_s on <var698:Array[Object]>*/;
}
{
nit___nit__CodeWriter___add_decl(var685, var701); /* Direct call abstract_compiler#CodeWriter#add_decl on <var685:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var704 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var704 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var702 = var704;
RET_LABEL703:(void)0;
}
}
if (varonce705) {
var706 = varonce705;
} else {
var707 = "const struct type *type;";
var708 = 24;
var709 = standard___standard__NativeString___to_s_with_length(var707, var708);
var706 = var709;
varonce705 = var706;
}
{
nit___nit__CodeWriter___add_decl(var702, var706); /* Direct call abstract_compiler#CodeWriter#add_decl on <var702:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var712 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var712 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var710 = var712;
RET_LABEL711:(void)0;
}
}
if (varonce713) {
var714 = varonce713;
} else {
var715 = "const struct class *class;";
var716 = 26;
var717 = standard___standard__NativeString___to_s_with_length(var715, var716);
var714 = var717;
varonce713 = var714;
}
{
nit___nit__CodeWriter___add_decl(var710, var714); /* Direct call abstract_compiler#CodeWriter#add_decl on <var710:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var720 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var720 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var718 = var720;
RET_LABEL719:(void)0;
}
}
if (varonce721) {
var722 = varonce721;
} else {
var723 = "int length;";
var724 = 11;
var725 = standard___standard__NativeString___to_s_with_length(var723, var724);
var722 = var725;
varonce721 = var722;
}
{
nit___nit__CodeWriter___add_decl(var718, var722); /* Direct call abstract_compiler#CodeWriter#add_decl on <var718:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var728 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var728 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var726 = var728;
RET_LABEL727:(void)0;
}
}
if (varonce729) {
var730 = varonce729;
} else {
var731 = "val* values[0];";
var732 = 15;
var733 = standard___standard__NativeString___to_s_with_length(var731, var732);
var730 = var733;
varonce729 = var730;
}
{
nit___nit__CodeWriter___add_decl(var726, var730); /* Direct call abstract_compiler#CodeWriter#add_decl on <var726:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var736 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var736 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var734 = var736;
RET_LABEL735:(void)0;
}
}
if (varonce737) {
var738 = varonce737;
} else {
var739 = "};";
var740 = 2;
var741 = standard___standard__NativeString___to_s_with_length(var739, var740);
var738 = var741;
varonce737 = var738;
}
{
nit___nit__CodeWriter___add_decl(var734, var738); /* Direct call abstract_compiler#CodeWriter#add_decl on <var734:CodeWriter>*/
}
if (varonce742) {
var743 = varonce742;
} else {
var744 = "NEW_";
var745 = 4;
var746 = standard___standard__NativeString___to_s_with_length(var744, var745);
var743 = var746;
varonce742 = var743;
}
var747 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var747 = array_instance Array[Object] */
var748 = 2;
var749 = NEW_standard__NativeArray(var748, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var749)->values[0] = (val*) var743;
((struct instance_standard__NativeArray*)var749)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var747->class->vft[COLOR_standard__array__Array__with_native]))(var747, var749, var748) /* with_native on <var747:Array[Object]>*/;
}
}
{
var750 = ((val* (*)(val* self))(var747->class->vft[COLOR_standard__string__Object__to_s]))(var747) /* to_s on <var747:Array[Object]>*/;
}
{
var751 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce752) {
var753 = varonce752;
} else {
var754 = " NEW_";
var755 = 5;
var756 = standard___standard__NativeString___to_s_with_length(var754, var755);
var753 = var756;
varonce752 = var753;
}
if (varonce757) {
var758 = varonce757;
} else {
var759 = "(int length, const struct type* type);";
var760 = 38;
var761 = standard___standard__NativeString___to_s_with_length(var759, var760);
var758 = var761;
varonce757 = var758;
}
var762 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var762 = array_instance Array[Object] */
var763 = 4;
var764 = NEW_standard__NativeArray(var763, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var764)->values[0] = (val*) var751;
((struct instance_standard__NativeArray*)var764)->values[1] = (val*) var753;
((struct instance_standard__NativeArray*)var764)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var764)->values[3] = (val*) var758;
{
((void (*)(val* self, val* p0, long p1))(var762->class->vft[COLOR_standard__array__Array__with_native]))(var762, var764, var763) /* with_native on <var762:Array[Object]>*/;
}
}
{
var765 = ((val* (*)(val* self))(var762->class->vft[COLOR_standard__string__Object__to_s]))(var762) /* to_s on <var762:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var750, var765); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce766) {
var767 = varonce766;
} else {
var768 = "/* allocate ";
var769 = 12;
var770 = standard___standard__NativeString___to_s_with_length(var768, var769);
var767 = var770;
varonce766 = var767;
}
if (varonce771) {
var772 = varonce771;
} else {
var773 = " */";
var774 = 3;
var775 = standard___standard__NativeString___to_s_with_length(var773, var774);
var772 = var775;
varonce771 = var772;
}
var776 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var776 = array_instance Array[Object] */
var777 = 3;
var778 = NEW_standard__NativeArray(var777, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var778)->values[0] = (val*) var767;
((struct instance_standard__NativeArray*)var778)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var778)->values[2] = (val*) var772;
{
((void (*)(val* self, val* p0, long p1))(var776->class->vft[COLOR_standard__array__Array__with_native]))(var776, var778, var777) /* with_native on <var776:Array[Object]>*/;
}
}
{
var779 = ((val* (*)(val* self))(var776->class->vft[COLOR_standard__string__Object__to_s]))(var776) /* to_s on <var776:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var779); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var780 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce781) {
var782 = varonce781;
} else {
var783 = " NEW_";
var784 = 5;
var785 = standard___standard__NativeString___to_s_with_length(var783, var784);
var782 = var785;
varonce781 = var782;
}
if (varonce786) {
var787 = varonce786;
} else {
var788 = "(int length, const struct type* type) {";
var789 = 39;
var790 = standard___standard__NativeString___to_s_with_length(var788, var789);
var787 = var790;
varonce786 = var787;
}
var791 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var791 = array_instance Array[Object] */
var792 = 4;
var793 = NEW_standard__NativeArray(var792, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var793)->values[0] = (val*) var780;
((struct instance_standard__NativeArray*)var793)->values[1] = (val*) var782;
((struct instance_standard__NativeArray*)var793)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var793)->values[3] = (val*) var787;
{
((void (*)(val* self, val* p0, long p1))(var791->class->vft[COLOR_standard__array__Array__with_native]))(var791, var793, var792) /* with_native on <var791:Array[Object]>*/;
}
}
{
var794 = ((val* (*)(val* self))(var791->class->vft[COLOR_standard__string__Object__to_s]))(var791) /* to_s on <var791:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var794); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce795) {
var796 = varonce795;
} else {
var797 = "self";
var798 = 4;
var799 = standard___standard__NativeString___to_s_with_length(var797, var798);
var796 = var799;
varonce795 = var796;
}
{
var800 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var796);
}
var_res801 = var800;
if (varonce802) {
var803 = varonce802;
} else {
var804 = "struct instance_";
var805 = 16;
var806 = standard___standard__NativeString___to_s_with_length(var804, var805);
var803 = var806;
varonce802 = var803;
}
if (varonce807) {
var808 = varonce807;
} else {
var809 = " *";
var810 = 2;
var811 = standard___standard__NativeString___to_s_with_length(var809, var810);
var808 = var811;
varonce807 = var808;
}
if (varonce812) {
var813 = varonce812;
} else {
var814 = ";";
var815 = 1;
var816 = standard___standard__NativeString___to_s_with_length(var814, var815);
var813 = var816;
varonce812 = var813;
}
var817 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var817 = array_instance Array[Object] */
var818 = 5;
var819 = NEW_standard__NativeArray(var818, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var819)->values[0] = (val*) var803;
((struct instance_standard__NativeArray*)var819)->values[1] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var819)->values[2] = (val*) var808;
((struct instance_standard__NativeArray*)var819)->values[3] = (val*) var_res801;
((struct instance_standard__NativeArray*)var819)->values[4] = (val*) var813;
{
((void (*)(val* self, val* p0, long p1))(var817->class->vft[COLOR_standard__array__Array__with_native]))(var817, var819, var818) /* with_native on <var817:Array[Object]>*/;
}
}
{
var820 = ((val* (*)(val* self))(var817->class->vft[COLOR_standard__string__Object__to_s]))(var817) /* to_s on <var817:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var820); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var821 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MClassType>*/;
}
{
var822 = standard___standard__SequenceRead___Collection__first(var821);
}
var_mtype_elt = var822;
if (varonce823) {
var824 = varonce823;
} else {
var825 = " = nit_alloc(sizeof(struct instance_";
var826 = 36;
var827 = standard___standard__NativeString___to_s_with_length(var825, var826);
var824 = var827;
varonce823 = var824;
}
if (varonce828) {
var829 = varonce828;
} else {
var830 = ") + length*sizeof(";
var831 = 18;
var832 = standard___standard__NativeString___to_s_with_length(var830, var831);
var829 = var832;
varonce828 = var829;
}
{
var833 = ((val* (*)(val* self))(var_mtype_elt->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype_elt) /* ctype on <var_mtype_elt:MType>*/;
}
if (varonce834) {
var835 = varonce834;
} else {
var836 = "));";
var837 = 3;
var838 = standard___standard__NativeString___to_s_with_length(var836, var837);
var835 = var838;
varonce834 = var835;
}
var839 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var839 = array_instance Array[Object] */
var840 = 6;
var841 = NEW_standard__NativeArray(var840, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var841)->values[0] = (val*) var_res801;
((struct instance_standard__NativeArray*)var841)->values[1] = (val*) var824;
((struct instance_standard__NativeArray*)var841)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var841)->values[3] = (val*) var829;
((struct instance_standard__NativeArray*)var841)->values[4] = (val*) var833;
((struct instance_standard__NativeArray*)var841)->values[5] = (val*) var835;
{
((void (*)(val* self, val* p0, long p1))(var839->class->vft[COLOR_standard__array__Array__with_native]))(var839, var841, var840) /* with_native on <var839:Array[Object]>*/;
}
}
{
var842 = ((val* (*)(val* self))(var839->class->vft[COLOR_standard__string__Object__to_s]))(var839) /* to_s on <var839:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var842); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce843) {
var844 = varonce843;
} else {
var845 = "->type = type;";
var846 = 14;
var847 = standard___standard__NativeString___to_s_with_length(var845, var846);
var844 = var847;
varonce843 = var844;
}
var848 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var848 = array_instance Array[Object] */
var849 = 2;
var850 = NEW_standard__NativeArray(var849, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var850)->values[0] = (val*) var_res801;
((struct instance_standard__NativeArray*)var850)->values[1] = (val*) var844;
{
((void (*)(val* self, val* p0, long p1))(var848->class->vft[COLOR_standard__array__Array__with_native]))(var848, var850, var849) /* with_native on <var848:Array[Object]>*/;
}
}
{
var851 = ((val* (*)(val* self))(var848->class->vft[COLOR_standard__string__Object__to_s]))(var848) /* to_s on <var848:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var851); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce852) {
var853 = varonce852;
} else {
var854 = "type";
var855 = 4;
var856 = standard___standard__NativeString___to_s_with_length(var854, var855);
var853 = var856;
varonce852 = var853;
}
{
nit___nit__SeparateCompiler___hardening_live_type(self, var_v, var853); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (varonce857) {
var858 = varonce857;
} else {
var859 = "class_";
var860 = 6;
var861 = standard___standard__NativeString___to_s_with_length(var859, var860);
var858 = var861;
varonce857 = var858;
}
var862 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var862 = array_instance Array[Object] */
var863 = 2;
var864 = NEW_standard__NativeArray(var863, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var864)->values[0] = (val*) var858;
((struct instance_standard__NativeArray*)var864)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var862->class->vft[COLOR_standard__array__Array__with_native]))(var862, var864, var863) /* with_native on <var862:Array[Object]>*/;
}
}
{
var865 = ((val* (*)(val* self))(var862->class->vft[COLOR_standard__string__Object__to_s]))(var862) /* to_s on <var862:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var865); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce866) {
var867 = varonce866;
} else {
var868 = "->class = &class_";
var869 = 17;
var870 = standard___standard__NativeString___to_s_with_length(var868, var869);
var867 = var870;
varonce866 = var867;
}
if (varonce871) {
var872 = varonce871;
} else {
var873 = ";";
var874 = 1;
var875 = standard___standard__NativeString___to_s_with_length(var873, var874);
var872 = var875;
varonce871 = var872;
}
var876 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var876 = array_instance Array[Object] */
var877 = 4;
var878 = NEW_standard__NativeArray(var877, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var878)->values[0] = (val*) var_res801;
((struct instance_standard__NativeArray*)var878)->values[1] = (val*) var867;
((struct instance_standard__NativeArray*)var878)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var878)->values[3] = (val*) var872;
{
((void (*)(val* self, val* p0, long p1))(var876->class->vft[COLOR_standard__array__Array__with_native]))(var876, var878, var877) /* with_native on <var876:Array[Object]>*/;
}
}
{
var879 = ((val* (*)(val* self))(var876->class->vft[COLOR_standard__string__Object__to_s]))(var876) /* to_s on <var876:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var879); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce880) {
var881 = varonce880;
} else {
var882 = "->length = length;";
var883 = 18;
var884 = standard___standard__NativeString___to_s_with_length(var882, var883);
var881 = var884;
varonce880 = var881;
}
var885 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var885 = array_instance Array[Object] */
var886 = 2;
var887 = NEW_standard__NativeArray(var886, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var887)->values[0] = (val*) var_res801;
((struct instance_standard__NativeArray*)var887)->values[1] = (val*) var881;
{
((void (*)(val* self, val* p0, long p1))(var885->class->vft[COLOR_standard__array__Array__with_native]))(var885, var887, var886) /* with_native on <var885:Array[Object]>*/;
}
}
{
var888 = ((val* (*)(val* self))(var885->class->vft[COLOR_standard__string__Object__to_s]))(var885) /* to_s on <var885:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var888); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce889) {
var890 = varonce889;
} else {
var891 = "return (val*)";
var892 = 13;
var893 = standard___standard__NativeString___to_s_with_length(var891, var892);
var890 = var893;
varonce889 = var890;
}
if (varonce894) {
var895 = varonce894;
} else {
var896 = ";";
var897 = 1;
var898 = standard___standard__NativeString___to_s_with_length(var896, var897);
var895 = var898;
varonce894 = var895;
}
var899 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var899 = array_instance Array[Object] */
var900 = 3;
var901 = NEW_standard__NativeArray(var900, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var901)->values[0] = (val*) var890;
((struct instance_standard__NativeArray*)var901)->values[1] = (val*) var_res801;
((struct instance_standard__NativeArray*)var901)->values[2] = (val*) var895;
{
((void (*)(val* self, val* p0, long p1))(var899->class->vft[COLOR_standard__array__Array__with_native]))(var899, var901, var900) /* with_native on <var899:Array[Object]>*/;
}
}
{
var902 = ((val* (*)(val* self))(var899->class->vft[COLOR_standard__string__Object__to_s]))(var899) /* to_s on <var899:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var902); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce903) {
var904 = varonce903;
} else {
var905 = "}";
var906 = 1;
var907 = standard___standard__NativeString___to_s_with_length(var905, var906);
var904 = var907;
varonce903 = var904;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var904); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var911 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var911 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var909 = var911;
RET_LABEL910:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var909) on <var909:MClass> */
var914 = var909->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var909:MClass> */
if (unlikely(var914 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var912 = var914;
RET_LABEL913:(void)0;
}
}
{
var915 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var912,var915) on <var912:MClassKind> */
var_other149 = var915;
{
{ /* Inline kernel#Object#is_same_instance (var912,var_other149) on <var912:MClassKind> */
var920 = var912 == var_other149;
var918 = var920;
goto RET_LABEL919;
RET_LABEL919:(void)0;
}
}
var916 = var918;
goto RET_LABEL917;
RET_LABEL917:(void)0;
}
}
var_921 = var916;
if (var916){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var924 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var924 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var922 = var924;
RET_LABEL923:(void)0;
}
}
{
{ /* Inline model#MClass#name (var922) on <var922:MClass> */
var927 = var922->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var922:MClass> */
if (unlikely(var927 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var925 = var927;
RET_LABEL926:(void)0;
}
}
if (varonce928) {
var929 = varonce928;
} else {
var930 = "NativeString";
var931 = 12;
var932 = standard___standard__NativeString___to_s_with_length(var930, var931);
var929 = var932;
varonce928 = var929;
}
{
{ /* Inline kernel#Object#!= (var925,var929) on <var925:String> */
var_other = var929;
{
var935 = ((short int (*)(val* self, val* p0))(var925->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var925, var_other) /* == on <var925:String>*/;
}
var936 = !var935;
var933 = var936;
goto RET_LABEL934;
RET_LABEL934:(void)0;
}
}
var908 = var933;
} else {
var908 = var_921;
}
if (var908){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var939 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var939 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var937 = var939;
RET_LABEL938:(void)0;
}
}
{
var940 = nit__model___MModule___pointer_type(var937);
}
var_pointer_type = var940;
if (varonce941) {
var942 = varonce941;
} else {
var943 = "NEW_";
var944 = 4;
var945 = standard___standard__NativeString___to_s_with_length(var943, var944);
var942 = var945;
varonce941 = var942;
}
var946 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var946 = array_instance Array[Object] */
var947 = 2;
var948 = NEW_standard__NativeArray(var947, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var948)->values[0] = (val*) var942;
((struct instance_standard__NativeArray*)var948)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var946->class->vft[COLOR_standard__array__Array__with_native]))(var946, var948, var947) /* with_native on <var946:Array[Object]>*/;
}
}
{
var949 = ((val* (*)(val* self))(var946->class->vft[COLOR_standard__string__Object__to_s]))(var946) /* to_s on <var946:Array[Object]>*/;
}
{
var950 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce951) {
var952 = varonce951;
} else {
var953 = " NEW_";
var954 = 5;
var955 = standard___standard__NativeString___to_s_with_length(var953, var954);
var952 = var955;
varonce951 = var952;
}
if (varonce956) {
var957 = varonce956;
} else {
var958 = "(const struct type* type);";
var959 = 26;
var960 = standard___standard__NativeString___to_s_with_length(var958, var959);
var957 = var960;
varonce956 = var957;
}
var961 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var961 = array_instance Array[Object] */
var962 = 4;
var963 = NEW_standard__NativeArray(var962, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var963)->values[0] = (val*) var950;
((struct instance_standard__NativeArray*)var963)->values[1] = (val*) var952;
((struct instance_standard__NativeArray*)var963)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var963)->values[3] = (val*) var957;
{
((void (*)(val* self, val* p0, long p1))(var961->class->vft[COLOR_standard__array__Array__with_native]))(var961, var963, var962) /* with_native on <var961:Array[Object]>*/;
}
}
{
var964 = ((val* (*)(val* self))(var961->class->vft[COLOR_standard__string__Object__to_s]))(var961) /* to_s on <var961:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var949, var964); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce965) {
var966 = varonce965;
} else {
var967 = "/* allocate ";
var968 = 12;
var969 = standard___standard__NativeString___to_s_with_length(var967, var968);
var966 = var969;
varonce965 = var966;
}
if (varonce970) {
var971 = varonce970;
} else {
var972 = " */";
var973 = 3;
var974 = standard___standard__NativeString___to_s_with_length(var972, var973);
var971 = var974;
varonce970 = var971;
}
var975 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var975 = array_instance Array[Object] */
var976 = 3;
var977 = NEW_standard__NativeArray(var976, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var977)->values[0] = (val*) var966;
((struct instance_standard__NativeArray*)var977)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var977)->values[2] = (val*) var971;
{
((void (*)(val* self, val* p0, long p1))(var975->class->vft[COLOR_standard__array__Array__with_native]))(var975, var977, var976) /* with_native on <var975:Array[Object]>*/;
}
}
{
var978 = ((val* (*)(val* self))(var975->class->vft[COLOR_standard__string__Object__to_s]))(var975) /* to_s on <var975:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var978); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var979 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce980) {
var981 = varonce980;
} else {
var982 = " NEW_";
var983 = 5;
var984 = standard___standard__NativeString___to_s_with_length(var982, var983);
var981 = var984;
varonce980 = var981;
}
if (varonce985) {
var986 = varonce985;
} else {
var987 = "(const struct type* type) {";
var988 = 27;
var989 = standard___standard__NativeString___to_s_with_length(var987, var988);
var986 = var989;
varonce985 = var986;
}
var990 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var990 = array_instance Array[Object] */
var991 = 4;
var992 = NEW_standard__NativeArray(var991, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var992)->values[0] = (val*) var979;
((struct instance_standard__NativeArray*)var992)->values[1] = (val*) var981;
((struct instance_standard__NativeArray*)var992)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var992)->values[3] = (val*) var986;
{
((void (*)(val* self, val* p0, long p1))(var990->class->vft[COLOR_standard__array__Array__with_native]))(var990, var992, var991) /* with_native on <var990:Array[Object]>*/;
}
}
{
var993 = ((val* (*)(val* self))(var990->class->vft[COLOR_standard__string__Object__to_s]))(var990) /* to_s on <var990:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var993); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce994) {
var995 = varonce994;
} else {
var996 = " is DEAD";
var997 = 8;
var998 = standard___standard__NativeString___to_s_with_length(var996, var997);
var995 = var998;
varonce994 = var995;
}
var999 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var999 = array_instance Array[Object] */
var1000 = 2;
var1001 = NEW_standard__NativeArray(var1000, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1001)->values[0] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var1001)->values[1] = (val*) var995;
{
((void (*)(val* self, val* p0, long p1))(var999->class->vft[COLOR_standard__array__Array__with_native]))(var999, var1001, var1000) /* with_native on <var999:Array[Object]>*/;
}
}
{
var1002 = ((val* (*)(val* self))(var999->class->vft[COLOR_standard__string__Object__to_s]))(var999) /* to_s on <var999:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var1002); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce1003) {
var1004 = varonce1003;
} else {
var1005 = "self";
var1006 = 4;
var1007 = standard___standard__NativeString___to_s_with_length(var1005, var1006);
var1004 = var1007;
varonce1003 = var1004;
}
{
var1008 = nit___nit__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1004);
}
var_res1009 = var1008;
var1010 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1009,var1010) on <var_res1009:RuntimeVariable> */
var_res1009->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = var1010; /* _is_exact on <var_res1009:RuntimeVariable> */
RET_LABEL1011:(void)0;
}
}
if (varonce1012) {
var1013 = varonce1012;
} else {
var1014 = " = nit_alloc(sizeof(struct instance_";
var1015 = 36;
var1016 = standard___standard__NativeString___to_s_with_length(var1014, var1015);
var1013 = var1016;
varonce1012 = var1013;
}
{
var1017 = ((val* (*)(val* self))(var_pointer_type->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce1018) {
var1019 = varonce1018;
} else {
var1020 = "));";
var1021 = 3;
var1022 = standard___standard__NativeString___to_s_with_length(var1020, var1021);
var1019 = var1022;
varonce1018 = var1019;
}
var1023 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1023 = array_instance Array[Object] */
var1024 = 4;
var1025 = NEW_standard__NativeArray(var1024, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1025)->values[0] = (val*) var_res1009;
((struct instance_standard__NativeArray*)var1025)->values[1] = (val*) var1013;
((struct instance_standard__NativeArray*)var1025)->values[2] = (val*) var1017;
((struct instance_standard__NativeArray*)var1025)->values[3] = (val*) var1019;
{
((void (*)(val* self, val* p0, long p1))(var1023->class->vft[COLOR_standard__array__Array__with_native]))(var1023, var1025, var1024) /* with_native on <var1023:Array[Object]>*/;
}
}
{
var1026 = ((val* (*)(val* self))(var1023->class->vft[COLOR_standard__string__Object__to_s]))(var1023) /* to_s on <var1023:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1026); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1027) {
var1028 = varonce1027;
} else {
var1029 = "->type = type;";
var1030 = 14;
var1031 = standard___standard__NativeString___to_s_with_length(var1029, var1030);
var1028 = var1031;
varonce1027 = var1028;
}
var1032 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1032 = array_instance Array[Object] */
var1033 = 2;
var1034 = NEW_standard__NativeArray(var1033, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1034)->values[0] = (val*) var_res1009;
((struct instance_standard__NativeArray*)var1034)->values[1] = (val*) var1028;
{
((void (*)(val* self, val* p0, long p1))(var1032->class->vft[COLOR_standard__array__Array__with_native]))(var1032, var1034, var1033) /* with_native on <var1032:Array[Object]>*/;
}
}
{
var1035 = ((val* (*)(val* self))(var1032->class->vft[COLOR_standard__string__Object__to_s]))(var1032) /* to_s on <var1032:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1035); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1036) {
var1037 = varonce1036;
} else {
var1038 = "type";
var1039 = 4;
var1040 = standard___standard__NativeString___to_s_with_length(var1038, var1039);
var1037 = var1040;
varonce1036 = var1037;
}
{
nit___nit__SeparateCompiler___hardening_live_type(self, var_v, var1037); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (varonce1041) {
var1042 = varonce1041;
} else {
var1043 = "class_";
var1044 = 6;
var1045 = standard___standard__NativeString___to_s_with_length(var1043, var1044);
var1042 = var1045;
varonce1041 = var1042;
}
var1046 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1046 = array_instance Array[Object] */
var1047 = 2;
var1048 = NEW_standard__NativeArray(var1047, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1048)->values[0] = (val*) var1042;
((struct instance_standard__NativeArray*)var1048)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var1046->class->vft[COLOR_standard__array__Array__with_native]))(var1046, var1048, var1047) /* with_native on <var1046:Array[Object]>*/;
}
}
{
var1049 = ((val* (*)(val* self))(var1046->class->vft[COLOR_standard__string__Object__to_s]))(var1046) /* to_s on <var1046:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var1049); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1050) {
var1051 = varonce1050;
} else {
var1052 = "->class = &class_";
var1053 = 17;
var1054 = standard___standard__NativeString___to_s_with_length(var1052, var1053);
var1051 = var1054;
varonce1050 = var1051;
}
if (varonce1055) {
var1056 = varonce1055;
} else {
var1057 = ";";
var1058 = 1;
var1059 = standard___standard__NativeString___to_s_with_length(var1057, var1058);
var1056 = var1059;
varonce1055 = var1056;
}
var1060 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1060 = array_instance Array[Object] */
var1061 = 4;
var1062 = NEW_standard__NativeArray(var1061, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1062)->values[0] = (val*) var_res1009;
((struct instance_standard__NativeArray*)var1062)->values[1] = (val*) var1051;
((struct instance_standard__NativeArray*)var1062)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var1062)->values[3] = (val*) var1056;
{
((void (*)(val* self, val* p0, long p1))(var1060->class->vft[COLOR_standard__array__Array__with_native]))(var1060, var1062, var1061) /* with_native on <var1060:Array[Object]>*/;
}
}
{
var1063 = ((val* (*)(val* self))(var1060->class->vft[COLOR_standard__string__Object__to_s]))(var1060) /* to_s on <var1060:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1063); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1064) {
var1065 = varonce1064;
} else {
var1066 = "((struct instance_";
var1067 = 18;
var1068 = standard___standard__NativeString___to_s_with_length(var1066, var1067);
var1065 = var1068;
varonce1064 = var1065;
}
{
var1069 = ((val* (*)(val* self))(var_pointer_type->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce1070) {
var1071 = varonce1070;
} else {
var1072 = "*)";
var1073 = 2;
var1074 = standard___standard__NativeString___to_s_with_length(var1072, var1073);
var1071 = var1074;
varonce1070 = var1071;
}
if (varonce1075) {
var1076 = varonce1075;
} else {
var1077 = ")->value = NULL;";
var1078 = 16;
var1079 = standard___standard__NativeString___to_s_with_length(var1077, var1078);
var1076 = var1079;
varonce1075 = var1076;
}
var1080 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1080 = array_instance Array[Object] */
var1081 = 5;
var1082 = NEW_standard__NativeArray(var1081, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1082)->values[0] = (val*) var1065;
((struct instance_standard__NativeArray*)var1082)->values[1] = (val*) var1069;
((struct instance_standard__NativeArray*)var1082)->values[2] = (val*) var1071;
((struct instance_standard__NativeArray*)var1082)->values[3] = (val*) var_res1009;
((struct instance_standard__NativeArray*)var1082)->values[4] = (val*) var1076;
{
((void (*)(val* self, val* p0, long p1))(var1080->class->vft[COLOR_standard__array__Array__with_native]))(var1080, var1082, var1081) /* with_native on <var1080:Array[Object]>*/;
}
}
{
var1083 = ((val* (*)(val* self))(var1080->class->vft[COLOR_standard__string__Object__to_s]))(var1080) /* to_s on <var1080:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1083); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1084) {
var1085 = varonce1084;
} else {
var1086 = "return ";
var1087 = 7;
var1088 = standard___standard__NativeString___to_s_with_length(var1086, var1087);
var1085 = var1088;
varonce1084 = var1085;
}
if (varonce1089) {
var1090 = varonce1089;
} else {
var1091 = ";";
var1092 = 1;
var1093 = standard___standard__NativeString___to_s_with_length(var1091, var1092);
var1090 = var1093;
varonce1089 = var1090;
}
var1094 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1094 = array_instance Array[Object] */
var1095 = 3;
var1096 = NEW_standard__NativeArray(var1095, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1096)->values[0] = (val*) var1085;
((struct instance_standard__NativeArray*)var1096)->values[1] = (val*) var_res1009;
((struct instance_standard__NativeArray*)var1096)->values[2] = (val*) var1090;
{
((void (*)(val* self, val* p0, long p1))(var1094->class->vft[COLOR_standard__array__Array__with_native]))(var1094, var1096, var1095) /* with_native on <var1094:Array[Object]>*/;
}
}
{
var1097 = ((val* (*)(val* self))(var1094->class->vft[COLOR_standard__string__Object__to_s]))(var1094) /* to_s on <var1094:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1097); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce1098) {
var1099 = varonce1098;
} else {
var1100 = "}";
var1101 = 1;
var1102 = standard___standard__NativeString___to_s_with_length(var1100, var1101);
var1099 = var1102;
varonce1098 = var1099;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1099); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
if (varonce1103) {
var1104 = varonce1103;
} else {
var1105 = "NEW_";
var1106 = 4;
var1107 = standard___standard__NativeString___to_s_with_length(var1105, var1106);
var1104 = var1107;
varonce1103 = var1104;
}
var1108 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1108 = array_instance Array[Object] */
var1109 = 2;
var1110 = NEW_standard__NativeArray(var1109, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1110)->values[0] = (val*) var1104;
((struct instance_standard__NativeArray*)var1110)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var1108->class->vft[COLOR_standard__array__Array__with_native]))(var1108, var1110, var1109) /* with_native on <var1108:Array[Object]>*/;
}
}
{
var1111 = ((val* (*)(val* self))(var1108->class->vft[COLOR_standard__string__Object__to_s]))(var1108) /* to_s on <var1108:Array[Object]>*/;
}
{
var1112 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce1113) {
var1114 = varonce1113;
} else {
var1115 = " NEW_";
var1116 = 5;
var1117 = standard___standard__NativeString___to_s_with_length(var1115, var1116);
var1114 = var1117;
varonce1113 = var1114;
}
if (varonce1118) {
var1119 = varonce1118;
} else {
var1120 = "(const struct type* type);";
var1121 = 26;
var1122 = standard___standard__NativeString___to_s_with_length(var1120, var1121);
var1119 = var1122;
varonce1118 = var1119;
}
var1123 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1123 = array_instance Array[Object] */
var1124 = 4;
var1125 = NEW_standard__NativeArray(var1124, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1125)->values[0] = (val*) var1112;
((struct instance_standard__NativeArray*)var1125)->values[1] = (val*) var1114;
((struct instance_standard__NativeArray*)var1125)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var1125)->values[3] = (val*) var1119;
{
((void (*)(val* self, val* p0, long p1))(var1123->class->vft[COLOR_standard__array__Array__with_native]))(var1123, var1125, var1124) /* with_native on <var1123:Array[Object]>*/;
}
}
{
var1126 = ((val* (*)(val* self))(var1123->class->vft[COLOR_standard__string__Object__to_s]))(var1123) /* to_s on <var1123:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var1111, var1126); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce1127) {
var1128 = varonce1127;
} else {
var1129 = "/* allocate ";
var1130 = 12;
var1131 = standard___standard__NativeString___to_s_with_length(var1129, var1130);
var1128 = var1131;
varonce1127 = var1128;
}
if (varonce1132) {
var1133 = varonce1132;
} else {
var1134 = " */";
var1135 = 3;
var1136 = standard___standard__NativeString___to_s_with_length(var1134, var1135);
var1133 = var1136;
varonce1132 = var1133;
}
var1137 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1137 = array_instance Array[Object] */
var1138 = 3;
var1139 = NEW_standard__NativeArray(var1138, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1139)->values[0] = (val*) var1128;
((struct instance_standard__NativeArray*)var1139)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var1139)->values[2] = (val*) var1133;
{
((void (*)(val* self, val* p0, long p1))(var1137->class->vft[COLOR_standard__array__Array__with_native]))(var1137, var1139, var1138) /* with_native on <var1137:Array[Object]>*/;
}
}
{
var1140 = ((val* (*)(val* self))(var1137->class->vft[COLOR_standard__string__Object__to_s]))(var1137) /* to_s on <var1137:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var1140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var1141 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce1142) {
var1143 = varonce1142;
} else {
var1144 = " NEW_";
var1145 = 5;
var1146 = standard___standard__NativeString___to_s_with_length(var1144, var1145);
var1143 = var1146;
varonce1142 = var1143;
}
if (varonce1147) {
var1148 = varonce1147;
} else {
var1149 = "(const struct type* type) {";
var1150 = 27;
var1151 = standard___standard__NativeString___to_s_with_length(var1149, var1150);
var1148 = var1151;
varonce1147 = var1148;
}
var1152 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1152 = array_instance Array[Object] */
var1153 = 4;
var1154 = NEW_standard__NativeArray(var1153, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1154)->values[0] = (val*) var1141;
((struct instance_standard__NativeArray*)var1154)->values[1] = (val*) var1143;
((struct instance_standard__NativeArray*)var1154)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var1154)->values[3] = (val*) var1148;
{
((void (*)(val* self, val* p0, long p1))(var1152->class->vft[COLOR_standard__array__Array__with_native]))(var1152, var1154, var1153) /* with_native on <var1152:Array[Object]>*/;
}
}
{
var1155 = ((val* (*)(val* self))(var1152->class->vft[COLOR_standard__string__Object__to_s]))(var1152) /* to_s on <var1152:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var1155); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce1156) {
var1157 = varonce1156;
} else {
var1158 = " is DEAD";
var1159 = 8;
var1160 = standard___standard__NativeString___to_s_with_length(var1158, var1159);
var1157 = var1160;
varonce1156 = var1157;
}
var1161 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1161 = array_instance Array[Object] */
var1162 = 2;
var1163 = NEW_standard__NativeArray(var1162, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1163)->values[0] = (val*) var_mclass;
((struct instance_standard__NativeArray*)var1163)->values[1] = (val*) var1157;
{
((void (*)(val* self, val* p0, long p1))(var1161->class->vft[COLOR_standard__array__Array__with_native]))(var1161, var1163, var1162) /* with_native on <var1161:Array[Object]>*/;
}
}
{
var1164 = ((val* (*)(val* self))(var1161->class->vft[COLOR_standard__string__Object__to_s]))(var1161) /* to_s on <var1161:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var1164); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce1165) {
var1166 = varonce1165;
} else {
var1167 = "self";
var1168 = 4;
var1169 = standard___standard__NativeString___to_s_with_length(var1167, var1168);
var1166 = var1169;
varonce1165 = var1166;
}
{
var1170 = nit___nit__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1166);
}
var_res1171 = var1170;
var1172 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1171,var1172) on <var_res1171:RuntimeVariable> */
var_res1171->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = var1172; /* _is_exact on <var_res1171:RuntimeVariable> */
RET_LABEL1173:(void)0;
}
}
if (varonce1174) {
var1175 = varonce1174;
} else {
var1176 = " = nit_alloc(sizeof(struct instance) + ";
var1177 = 39;
var1178 = standard___standard__NativeString___to_s_with_length(var1176, var1177);
var1175 = var1178;
varonce1174 = var1175;
}
{
{ /* Inline array#AbstractArrayRead#length (var_attrs) on <var_attrs:Array[nullable MPropDef]> */
var1181 = var_attrs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_attrs:Array[nullable MPropDef]> */
var1179 = var1181;
RET_LABEL1180:(void)0;
}
}
if (varonce1182) {
var1183 = varonce1182;
} else {
var1184 = "*sizeof(nitattribute_t));";
var1185 = 25;
var1186 = standard___standard__NativeString___to_s_with_length(var1184, var1185);
var1183 = var1186;
varonce1182 = var1183;
}
var1187 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1187 = array_instance Array[Object] */
var1188 = 4;
var1189 = NEW_standard__NativeArray(var1188, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1189)->values[0] = (val*) var_res1171;
((struct instance_standard__NativeArray*)var1189)->values[1] = (val*) var1175;
var1190 = BOX_standard__Int(var1179); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var1189)->values[2] = (val*) var1190;
((struct instance_standard__NativeArray*)var1189)->values[3] = (val*) var1183;
{
((void (*)(val* self, val* p0, long p1))(var1187->class->vft[COLOR_standard__array__Array__with_native]))(var1187, var1189, var1188) /* with_native on <var1187:Array[Object]>*/;
}
}
{
var1191 = ((val* (*)(val* self))(var1187->class->vft[COLOR_standard__string__Object__to_s]))(var1187) /* to_s on <var1187:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1191); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1192) {
var1193 = varonce1192;
} else {
var1194 = "->type = type;";
var1195 = 14;
var1196 = standard___standard__NativeString___to_s_with_length(var1194, var1195);
var1193 = var1196;
varonce1192 = var1193;
}
var1197 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1197 = array_instance Array[Object] */
var1198 = 2;
var1199 = NEW_standard__NativeArray(var1198, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1199)->values[0] = (val*) var_res1171;
((struct instance_standard__NativeArray*)var1199)->values[1] = (val*) var1193;
{
((void (*)(val* self, val* p0, long p1))(var1197->class->vft[COLOR_standard__array__Array__with_native]))(var1197, var1199, var1198) /* with_native on <var1197:Array[Object]>*/;
}
}
{
var1200 = ((val* (*)(val* self))(var1197->class->vft[COLOR_standard__string__Object__to_s]))(var1197) /* to_s on <var1197:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1200); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1201) {
var1202 = varonce1201;
} else {
var1203 = "type";
var1204 = 4;
var1205 = standard___standard__NativeString___to_s_with_length(var1203, var1204);
var1202 = var1205;
varonce1201 = var1202;
}
{
nit___nit__SeparateCompiler___hardening_live_type(self, var_v, var1202); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (varonce1206) {
var1207 = varonce1206;
} else {
var1208 = "class_";
var1209 = 6;
var1210 = standard___standard__NativeString___to_s_with_length(var1208, var1209);
var1207 = var1210;
varonce1206 = var1207;
}
var1211 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1211 = array_instance Array[Object] */
var1212 = 2;
var1213 = NEW_standard__NativeArray(var1212, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1213)->values[0] = (val*) var1207;
((struct instance_standard__NativeArray*)var1213)->values[1] = (val*) var_c_name;
{
((void (*)(val* self, val* p0, long p1))(var1211->class->vft[COLOR_standard__array__Array__with_native]))(var1211, var1213, var1212) /* with_native on <var1211:Array[Object]>*/;
}
}
{
var1214 = ((val* (*)(val* self))(var1211->class->vft[COLOR_standard__string__Object__to_s]))(var1211) /* to_s on <var1211:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var1214); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1215) {
var1216 = varonce1215;
} else {
var1217 = "->class = &class_";
var1218 = 17;
var1219 = standard___standard__NativeString___to_s_with_length(var1217, var1218);
var1216 = var1219;
varonce1215 = var1216;
}
if (varonce1220) {
var1221 = varonce1220;
} else {
var1222 = ";";
var1223 = 1;
var1224 = standard___standard__NativeString___to_s_with_length(var1222, var1223);
var1221 = var1224;
varonce1220 = var1221;
}
var1225 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1225 = array_instance Array[Object] */
var1226 = 4;
var1227 = NEW_standard__NativeArray(var1226, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1227)->values[0] = (val*) var_res1171;
((struct instance_standard__NativeArray*)var1227)->values[1] = (val*) var1216;
((struct instance_standard__NativeArray*)var1227)->values[2] = (val*) var_c_name;
((struct instance_standard__NativeArray*)var1227)->values[3] = (val*) var1221;
{
((void (*)(val* self, val* p0, long p1))(var1225->class->vft[COLOR_standard__array__Array__with_native]))(var1225, var1227, var1226) /* with_native on <var1225:Array[Object]>*/;
}
}
{
var1228 = ((val* (*)(val* self))(var1225->class->vft[COLOR_standard__string__Object__to_s]))(var1225) /* to_s on <var1225:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1228); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
nit___nit__AbstractCompiler___generate_init_attr(self, var_v, var_res1171, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:SeparateCompiler>*/
}
{
nit___nit__AbstractCompilerVisitor___set_finalizer(var_v, var_res1171); /* Direct call abstract_compiler#AbstractCompilerVisitor#set_finalizer on <var_v:SeparateCompilerVisitor>*/
}
if (varonce1229) {
var1230 = varonce1229;
} else {
var1231 = "return ";
var1232 = 7;
var1233 = standard___standard__NativeString___to_s_with_length(var1231, var1232);
var1230 = var1233;
varonce1229 = var1230;
}
if (varonce1234) {
var1235 = varonce1234;
} else {
var1236 = ";";
var1237 = 1;
var1238 = standard___standard__NativeString___to_s_with_length(var1236, var1237);
var1235 = var1238;
varonce1234 = var1235;
}
var1239 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1239 = array_instance Array[Object] */
var1240 = 3;
var1241 = NEW_standard__NativeArray(var1240, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1241)->values[0] = (val*) var1230;
((struct instance_standard__NativeArray*)var1241)->values[1] = (val*) var_res1171;
((struct instance_standard__NativeArray*)var1241)->values[2] = (val*) var1235;
{
((void (*)(val* self, val* p0, long p1))(var1239->class->vft[COLOR_standard__array__Array__with_native]))(var1239, var1241, var1240) /* with_native on <var1239:Array[Object]>*/;
}
}
{
var1242 = ((val* (*)(val* self))(var1239->class->vft[COLOR_standard__string__Object__to_s]))(var1239) /* to_s on <var1239:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1242); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce1243) {
var1244 = varonce1243;
} else {
var1245 = "}";
var1246 = 1;
var1247 = standard___standard__NativeString___to_s_with_length(var1245, var1246);
var1244 = var1247;
varonce1243 = var1244;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1244); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#hardening_live_type for (self: SeparateCompiler, SeparateCompilerVisitor, String) */
void nit___nit__SeparateCompiler___hardening_live_type(val* self, val* p0, val* p1) {
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
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 837);
show_backtrace(1);
}
var_v = p0;
var_t = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var3 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 45);
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
var16 = ((struct instance_standard__Bool*)var13)->value; /* autounbox from nullable Object to Bool */;
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
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " == NULL) {";
var25 = 11;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var18;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var_t;
((struct instance_standard__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "type null";
var34 = 9;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "}";
var39 = 1;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "if(";
var44 = 3;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "->table_size == 0) {";
var49 = 20;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 3;
var53 = NEW_standard__NativeArray(var52, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var53)->values[0] = (val*) var42;
((struct instance_standard__NativeArray*)var53)->values[1] = (val*) var_t;
((struct instance_standard__NativeArray*)var53)->values[2] = (val*) var47;
{
((void (*)(val* self, val* p0, long p1))(var51->class->vft[COLOR_standard__array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val* self))(var51->class->vft[COLOR_standard__string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var54); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = "PRINT_ERROR(\"Insantiation of a dead type: %s\\n\", ";
var58 = 49;
var59 = standard___standard__NativeString___to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "->name);";
var63 = 8;
var64 = standard___standard__NativeString___to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 3;
var67 = NEW_standard__NativeArray(var66, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var67)->values[0] = (val*) var56;
((struct instance_standard__NativeArray*)var67)->values[1] = (val*) var_t;
((struct instance_standard__NativeArray*)var67)->values[2] = (val*) var61;
{
((void (*)(val* self, val* p0, long p1))(var65->class->vft[COLOR_standard__array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
}
{
var68 = ((val* (*)(val* self))(var65->class->vft[COLOR_standard__string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var68); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "type dead";
var72 = 9;
var73 = standard___standard__NativeString___to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var70); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "}";
var77 = 1;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#new_visitor for (self: SeparateCompiler): SeparateCompilerVisitor */
val* nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_nit__SeparateCompilerVisitor(&type_nit__SeparateCompilerVisitor);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(var1, self) /* compiler= on <var1:SeparateCompilerVisitor>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:SeparateCompilerVisitor>*/;
}
/* <var1:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 850);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables for (self: SeparateCompiler): Map[MType, Array[nullable MType]] */
val* nit___nit__SeparateCompiler___type_tables(val* self) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var1 /* : Map[MType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 854);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables= for (self: SeparateCompiler, Map[MType, Array[nullable MType]]) */
void nit___nit__SeparateCompiler___type_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_tables].val = p0; /* _type_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#resolution_tables for (self: SeparateCompiler): Map[MClassType, Array[nullable MType]] */
val* nit___nit__SeparateCompiler___resolution_tables(val* self) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var1 /* : Map[MClassType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 855);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#resolution_tables= for (self: SeparateCompiler, Map[MClassType, Array[nullable MType]]) */
void nit___nit__SeparateCompiler___resolution_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val = p0; /* _resolution_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MPropDef]] */
val* nit___nit__SeparateCompiler___method_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 856);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MPropDef]]) */
void nit___nit__SeparateCompiler___method_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val = p0; /* _method_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MPropDef]] */
val* nit___nit__SeparateCompiler___attr_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 857);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MPropDef]]) */
void nit___nit__SeparateCompiler___attr_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val = p0; /* _attr_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_stats for (self: SeparateCompiler) */
void nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats(val* self) {
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
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats]))(self) /* display_stats on <self:SeparateCompiler>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_tables_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nit__separate_compiler__ToolContext___opt_tables_metrics].val; /* _opt_tables_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_tables_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 47);
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
var12 = ((struct instance_standard__Bool*)var9)->value; /* autounbox from nullable Object to Bool */;
if (var12){
{
((void (*)(val* self))(self->class->vft[COLOR_nit__separate_compiler__SeparateCompiler__display_sizes]))(self) /* display_sizes on <self:SeparateCompiler>*/;
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var15 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var13) on <var13:ModelBuilder> */
var18 = var13->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var13:ModelBuilder> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 63);
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
var25 = ((struct instance_standard__Bool*)var22)->value; /* autounbox from nullable Object to Bool */;
if (var25){
{
nit___nit__SeparateCompiler___display_isset_checks(self); /* Direct call separate_compiler#SeparateCompiler#display_isset_checks on <self:SeparateCompiler>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var28 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
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
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce = var32;
}
var36 = 2;
{
nit___nit__ToolContext___info(var_tc, var32, var36); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var39 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var37) on <var37:ModelBuilder> */
var42 = var37->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var37:ModelBuilder> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var45 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var43) on <var43:ModelBuilder> */
var48 = var43->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var43:ModelBuilder> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var55 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var53) on <var53:ModelBuilder> */
var58 = var53->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var53:ModelBuilder> */
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
var_class_name64 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 2;
var73 = NEW_standard__NativeArray(var72, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var73)->values[0] = (val*) var67;
var74 = BOX_standard__Int(var_nb_invok_total); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var73)->values[1] = (val*) var74;
{
((void (*)(val* self, val* p0, long p1))(var71->class->vft[COLOR_standard__array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
}
{
var75 = ((val* (*)(val* self))(var71->class->vft[COLOR_standard__string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
}
var76 = 2;
{
nit___nit__ToolContext___info(var_tc, var75, var76); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = "invocations by VFT send:     ";
var80 = 29;
var81 = standard___standard__NativeString___to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var84 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var82) on <var82:ModelBuilder> */
var87 = var82->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var82:ModelBuilder> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = " (";
var91 = 2;
var92 = standard___standard__NativeString___to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var95 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var93) on <var93:ModelBuilder> */
var98 = var93->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var93:ModelBuilder> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = nit___nit__AbstractCompiler___div(self, var96, var_nb_invok_total);
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = "%)";
var103 = 2;
var104 = standard___standard__NativeString___to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var105 = array_instance Array[Object] */
var106 = 5;
var107 = NEW_standard__NativeArray(var106, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var107)->values[0] = (val*) var78;
var108 = BOX_standard__Int(var85); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var107)->values[1] = (val*) var108;
((struct instance_standard__NativeArray*)var107)->values[2] = (val*) var89;
((struct instance_standard__NativeArray*)var107)->values[3] = (val*) var99;
((struct instance_standard__NativeArray*)var107)->values[4] = (val*) var101;
{
((void (*)(val* self, val* p0, long p1))(var105->class->vft[COLOR_standard__array__Array__with_native]))(var105, var107, var106) /* with_native on <var105:Array[Object]>*/;
}
}
{
var109 = ((val* (*)(val* self))(var105->class->vft[COLOR_standard__string__Object__to_s]))(var105) /* to_s on <var105:Array[Object]>*/;
}
var110 = 2;
{
nit___nit__ToolContext___info(var_tc, var109, var110); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = "invocations by direct call:  ";
var114 = 29;
var115 = standard___standard__NativeString___to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var118 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var116) on <var116:ModelBuilder> */
var121 = var116->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var116:ModelBuilder> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " (";
var125 = 2;
var126 = standard___standard__NativeString___to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var129 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var127) on <var127:ModelBuilder> */
var132 = var127->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var127:ModelBuilder> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
var133 = nit___nit__AbstractCompiler___div(self, var130, var_nb_invok_total);
}
if (varonce134) {
var135 = varonce134;
} else {
var136 = "%)";
var137 = 2;
var138 = standard___standard__NativeString___to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
var139 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var139 = array_instance Array[Object] */
var140 = 5;
var141 = NEW_standard__NativeArray(var140, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var141)->values[0] = (val*) var112;
var142 = BOX_standard__Int(var119); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var141)->values[1] = (val*) var142;
((struct instance_standard__NativeArray*)var141)->values[2] = (val*) var123;
((struct instance_standard__NativeArray*)var141)->values[3] = (val*) var133;
((struct instance_standard__NativeArray*)var141)->values[4] = (val*) var135;
{
((void (*)(val* self, val* p0, long p1))(var139->class->vft[COLOR_standard__array__Array__with_native]))(var139, var141, var140) /* with_native on <var139:Array[Object]>*/;
}
}
{
var143 = ((val* (*)(val* self))(var139->class->vft[COLOR_standard__string__Object__to_s]))(var139) /* to_s on <var139:Array[Object]>*/;
}
var144 = 2;
{
nit___nit__ToolContext___info(var_tc, var143, var144); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "invocations by inlining:     ";
var148 = 29;
var149 = standard___standard__NativeString___to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var152 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var150) on <var150:ModelBuilder> */
var155 = var150->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var150:ModelBuilder> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = " (";
var159 = 2;
var160 = standard___standard__NativeString___to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var163 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var161) on <var161:ModelBuilder> */
var166 = var161->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var161:ModelBuilder> */
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
var167 = nit___nit__AbstractCompiler___div(self, var164, var_nb_invok_total);
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = "%)";
var171 = 2;
var172 = standard___standard__NativeString___to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 5;
var175 = NEW_standard__NativeArray(var174, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var175)->values[0] = (val*) var146;
var176 = BOX_standard__Int(var153); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var175)->values[1] = (val*) var176;
((struct instance_standard__NativeArray*)var175)->values[2] = (val*) var157;
((struct instance_standard__NativeArray*)var175)->values[3] = (val*) var167;
((struct instance_standard__NativeArray*)var175)->values[4] = (val*) var169;
{
((void (*)(val* self, val* p0, long p1))(var173->class->vft[COLOR_standard__array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
}
{
var177 = ((val* (*)(val* self))(var173->class->vft[COLOR_standard__string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
}
var178 = 2;
{
nit___nit__ToolContext___info(var_tc, var177, var178); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_sizes for (self: SeparateCompiler) */
void nit___nit__SeparateCompiler___display_sizes(val* self) {
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
val* var14 /* : MapIterator[nullable Object, nullable Object] */;
val* var_15 /* var : MapIterator[MType, Array[nullable MType]] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
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
val* var81 /* : MapIterator[nullable Object, nullable Object] */;
val* var_82 /* var : MapIterator[MClassType, Array[nullable MType]] */;
short int var83 /* : Bool */;
val* var84 /* : nullable Object */;
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
val* var155 /* : MapIterator[nullable Object, nullable Object] */;
val* var_156 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var157 /* : Bool */;
val* var158 /* : nullable Object */;
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
val* var229 /* : MapIterator[nullable Object, nullable Object] */;
val* var_230 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var231 /* : Bool */;
val* var232 /* : nullable Object */;
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
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
standard__file___Object___print(self, var); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce4) {
var5 = varonce4;
} else {
var6 = "\11total \11holes";
var7 = 13;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce4 = var5;
}
{
standard__file___Object___print(self, var5); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var9 = 0;
var_total = var9;
var10 = 0;
var_holes = var10;
{
{ /* Inline separate_compiler#SeparateCompiler#type_tables (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 854);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ = var11;
{
var14 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_) /* iterator on <var_:Map[MType, Array[nullable MType]]>*/;
}
var_15 = var14;
for(;;) {
{
var16 = ((short int (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_15) /* is_ok on <var_15:MapIterator[MType, Array[nullable MType]]>*/;
}
if (var16){
{
var17 = ((val* (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_15) /* key on <var_15:MapIterator[MType, Array[nullable MType]]>*/;
}
var_t = var17;
{
var18 = ((val* (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_15) /* item on <var_15:MapIterator[MType, Array[nullable MType]]>*/;
}
var_table = var18;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MType]> */
var21 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MType]> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var27 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_26);
}
var_28 = var27;
for(;;) {
{
var29 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_28);
}
if (var29){
{
var30 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_28);
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
var_class_name44 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_28); /* Direct call array#ArrayIterator#next on <var_28:ArrayIterator[nullable MType]>*/
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
((void (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_15) /* next on <var_15:MapIterator[MType, Array[nullable MType]]>*/;
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
var53 = standard___standard__NativeString___to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "\11";
var57 = 1;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 4;
var61 = NEW_standard__NativeArray(var60, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var61)->values[0] = (val*) var50;
var62 = BOX_standard__Int(var_total); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var61)->values[1] = (val*) var62;
((struct instance_standard__NativeArray*)var61)->values[2] = (val*) var55;
var63 = BOX_standard__Int(var_holes); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var61)->values[3] = (val*) var63;
{
((void (*)(val* self, val* p0, long p1))(var59->class->vft[COLOR_standard__array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val* self))(var59->class->vft[COLOR_standard__string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
}
{
standard__file___Object___print(self, var64); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "# size of resolution tables";
var68 = 27;
var69 = standard___standard__NativeString___to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
standard__file___Object___print(self, var66); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = "\11total \11holes";
var73 = 13;
var74 = standard___standard__NativeString___to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
{
standard__file___Object___print(self, var71); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var75 = 0;
var_total = var75;
var76 = 0;
var_holes = var76;
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var79 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 855);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_80 = var77;
{
var81 = ((val* (*)(val* self))(var_80->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_80) /* iterator on <var_80:Map[MClassType, Array[nullable MType]]>*/;
}
var_82 = var81;
for(;;) {
{
var83 = ((short int (*)(val* self))(var_82->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_82) /* is_ok on <var_82:MapIterator[MClassType, Array[nullable MType]]>*/;
}
if (var83){
{
var84 = ((val* (*)(val* self))(var_82->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_82) /* key on <var_82:MapIterator[MClassType, Array[nullable MType]]>*/;
}
var_t85 = var84;
{
var86 = ((val* (*)(val* self))(var_82->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_82) /* item on <var_82:MapIterator[MClassType, Array[nullable MType]]>*/;
}
var_table87 = var86;
{
{ /* Inline array#AbstractArrayRead#length (var_table87) on <var_table87:Array[nullable MType]> */
var90 = var_table87->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table87:Array[nullable MType]> */
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
var_class_name96 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var99 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_98);
}
var_100 = var99;
for(;;) {
{
var101 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_100);
}
if (var101){
{
var102 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_100);
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
var_class_name117 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_100); /* Direct call array#ArrayIterator#next on <var_100:ArrayIterator[nullable MType]>*/
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
((void (*)(val* self))(var_82->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_82) /* next on <var_82:MapIterator[MClassType, Array[nullable MType]]>*/;
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
var127 = standard___standard__NativeString___to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = "\11";
var131 = 1;
var132 = standard___standard__NativeString___to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var133 = array_instance Array[Object] */
var134 = 4;
var135 = NEW_standard__NativeArray(var134, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var135)->values[0] = (val*) var124;
var136 = BOX_standard__Int(var_total); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var135)->values[1] = (val*) var136;
((struct instance_standard__NativeArray*)var135)->values[2] = (val*) var129;
var137 = BOX_standard__Int(var_holes); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var135)->values[3] = (val*) var137;
{
((void (*)(val* self, val* p0, long p1))(var133->class->vft[COLOR_standard__array__Array__with_native]))(var133, var135, var134) /* with_native on <var133:Array[Object]>*/;
}
}
{
var138 = ((val* (*)(val* self))(var133->class->vft[COLOR_standard__string__Object__to_s]))(var133) /* to_s on <var133:Array[Object]>*/;
}
{
standard__file___Object___print(self, var138); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "# size of methods tables";
var142 = 24;
var143 = standard___standard__NativeString___to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
{
standard__file___Object___print(self, var140); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = "\11total \11holes";
var147 = 13;
var148 = standard___standard__NativeString___to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
{
standard__file___Object___print(self, var145); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var149 = 0;
var_total = var149;
var150 = 0;
var_holes = var150;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var153 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 856);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_154 = var151;
{
var155 = ((val* (*)(val* self))(var_154->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_154) /* iterator on <var_154:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_156 = var155;
for(;;) {
{
var157 = ((short int (*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_156) /* is_ok on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
if (var157){
{
var158 = ((val* (*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_156) /* key on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_t159 = var158;
{
var160 = ((val* (*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_156) /* item on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_table161 = var160;
{
{ /* Inline array#AbstractArrayRead#length (var_table161) on <var_table161:Array[nullable MPropDef]> */
var164 = var_table161->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table161:Array[nullable MPropDef]> */
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
var_class_name170 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name170);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var173 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_172);
}
var_174 = var173;
for(;;) {
{
var175 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_174);
}
if (var175){
{
var176 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_174);
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
var_class_name191 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name191);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_174); /* Direct call array#ArrayIterator#next on <var_174:ArrayIterator[nullable MPropDef]>*/
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
((void (*)(val* self))(var_156->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_156) /* next on <var_156:MapIterator[MClass, Array[nullable MPropDef]]>*/;
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
var201 = standard___standard__NativeString___to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
if (varonce202) {
var203 = varonce202;
} else {
var204 = "\11";
var205 = 1;
var206 = standard___standard__NativeString___to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
var207 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var207 = array_instance Array[Object] */
var208 = 4;
var209 = NEW_standard__NativeArray(var208, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var209)->values[0] = (val*) var198;
var210 = BOX_standard__Int(var_total); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var209)->values[1] = (val*) var210;
((struct instance_standard__NativeArray*)var209)->values[2] = (val*) var203;
var211 = BOX_standard__Int(var_holes); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var209)->values[3] = (val*) var211;
{
((void (*)(val* self, val* p0, long p1))(var207->class->vft[COLOR_standard__array__Array__with_native]))(var207, var209, var208) /* with_native on <var207:Array[Object]>*/;
}
}
{
var212 = ((val* (*)(val* self))(var207->class->vft[COLOR_standard__string__Object__to_s]))(var207) /* to_s on <var207:Array[Object]>*/;
}
{
standard__file___Object___print(self, var212); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "# size of attributes tables";
var216 = 27;
var217 = standard___standard__NativeString___to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
{
standard__file___Object___print(self, var214); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = "\11total \11holes";
var221 = 13;
var222 = standard___standard__NativeString___to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
{
standard__file___Object___print(self, var219); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var223 = 0;
var_total = var223;
var224 = 0;
var_holes = var224;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var227 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 857);
show_backtrace(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
var_228 = var225;
{
var229 = ((val* (*)(val* self))(var_228->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_228) /* iterator on <var_228:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_230 = var229;
for(;;) {
{
var231 = ((short int (*)(val* self))(var_230->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_230) /* is_ok on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
if (var231){
{
var232 = ((val* (*)(val* self))(var_230->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_230) /* key on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_t233 = var232;
{
var234 = ((val* (*)(val* self))(var_230->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_230) /* item on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
}
var_table235 = var234;
{
{ /* Inline array#AbstractArrayRead#length (var_table235) on <var_table235:Array[nullable MPropDef]> */
var238 = var_table235->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table235:Array[nullable MPropDef]> */
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
var_class_name244 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name244);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var247 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_246);
}
var_248 = var247;
for(;;) {
{
var249 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_248);
}
if (var249){
{
var250 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_248);
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
var_class_name265 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name265);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_248); /* Direct call array#ArrayIterator#next on <var_248:ArrayIterator[nullable MPropDef]>*/
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
((void (*)(val* self))(var_230->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_230) /* next on <var_230:MapIterator[MClass, Array[nullable MPropDef]]>*/;
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
var275 = standard___standard__NativeString___to_s_with_length(var273, var274);
var272 = var275;
varonce271 = var272;
}
if (varonce276) {
var277 = varonce276;
} else {
var278 = "\11";
var279 = 1;
var280 = standard___standard__NativeString___to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
var281 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var281 = array_instance Array[Object] */
var282 = 4;
var283 = NEW_standard__NativeArray(var282, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var283)->values[0] = (val*) var272;
var284 = BOX_standard__Int(var_total); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var283)->values[1] = (val*) var284;
((struct instance_standard__NativeArray*)var283)->values[2] = (val*) var277;
var285 = BOX_standard__Int(var_holes); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var283)->values[3] = (val*) var285;
{
((void (*)(val* self, val* p0, long p1))(var281->class->vft[COLOR_standard__array__Array__with_native]))(var281, var283, var282) /* with_native on <var281:Array[Object]>*/;
}
}
{
var286 = ((val* (*)(val* self))(var281->class->vft[COLOR_standard__string__Object__to_s]))(var281) /* to_s on <var281:Array[Object]>*/;
}
{
standard__file___Object___print(self, var286); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count for (self: SeparateCompiler): Int */
long nit___nit__SeparateCompiler___isset_checks_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count= for (self: SeparateCompiler, Int) */
void nit___nit__SeparateCompiler___isset_checks_count_61d(val* self, long p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l = p0; /* _isset_checks_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_read_count for (self: SeparateCompiler): Int */
long nit___nit__SeparateCompiler___attr_read_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_read_count= for (self: SeparateCompiler, Int) */
void nit___nit__SeparateCompiler___attr_read_count_61d(val* self, long p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l = p0; /* _attr_read_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_isset_checks for (self: SeparateCompiler) */
void nit___nit__SeparateCompiler___display_isset_checks(val* self) {
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
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
standard__file___Object___print(self, var); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce4) {
var5 = varonce4;
} else {
var6 = "\11";
var7 = 1;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce4 = var5;
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count (self) on <self:SeparateCompiler> */
var11 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var12 = array_instance Array[Object] */
var13 = 2;
var14 = NEW_standard__NativeArray(var13, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var14)->values[0] = (val*) var5;
var15 = BOX_standard__Int(var9); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var14)->values[1] = (val*) var15;
{
((void (*)(val* self, val* p0, long p1))(var12->class->vft[COLOR_standard__array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val* self))(var12->class->vft[COLOR_standard__string__Object__to_s]))(var12) /* to_s on <var12:Array[Object]>*/;
}
{
standard__file___Object___print(self, var16); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "# total number of compiled isset-checks";
var20 = 39;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
standard__file___Object___print(self, var18); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\11";
var25 = 1;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (self) on <self:SeparateCompiler> */
var29 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 2;
var32 = NEW_standard__NativeArray(var31, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var32)->values[0] = (val*) var23;
var33 = BOX_standard__Int(var27); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var32)->values[1] = (val*) var33;
{
((void (*)(val* self, val* p0, long p1))(var30->class->vft[COLOR_standard__array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
}
{
var34 = ((val* (*)(val* self))(var30->class->vft[COLOR_standard__string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
}
{
standard__file___Object___print(self, var34); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_nitni_structs for (self: SeparateCompiler) */
void nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
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
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
nit___nit__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs]))(self) /* compile_nitni_structs on <self:SeparateCompiler>*/;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#finalize_ffi_for_module for (self: SeparateCompiler, MModule) */
void nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var_old_module /* var old_module: MModule */;
var_mmodule = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_old_module = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_mmodule) on <self:SeparateCompiler> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var_mmodule; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL3:(void)0;
}
}
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module]))(self, p0) /* finalize_ffi_for_module on <self:SeparateCompiler>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_old_module) on <self:SeparateCompiler> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var_old_module; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#adapt_signature for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
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
val* var_other /* var other: nullable Object */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var43 /* : MClassDef */;
val* var45 /* : MClassDef */;
val* var46 /* : MClass */;
val* var48 /* : MClass */;
val* var49 /* : MClassType */;
val* var51 /* : MClassType */;
val* var52 /* : RuntimeVariable */;
long var53 /* : Int */;
long var_i /* var i: Int */;
long var54 /* : Int */;
long var_ /* var : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var58 /* : Bool */;
val* var59 /* : Array[MParameter] */;
val* var61 /* : Array[MParameter] */;
val* var62 /* : nullable Object */;
val* var63 /* : MType */;
val* var65 /* : MType */;
val* var_t /* var t: MType */;
long var66 /* : Int */;
long var68 /* : Int */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
val* var80 /* : nullable Object */;
val* var81 /* : MType */;
val* var83 /* : MType */;
long var84 /* : Int */;
long var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
long var91 /* : Int */;
long var92 /* : Int */;
long var93 /* : Int */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
long var99 /* : Int */;
val* var100 /* : nullable Object */;
val* var101 /* : RuntimeVariable */;
long var102 /* : Int */;
long var103 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 1;
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 960);
show_backtrace(1);
} else {
var22 = nit___nit__MSignature___MType__resolve_for(var, var6, var12, var18, var21);
}
var_msignature = var22;
{
var23 = standard___standard__SequenceRead___Collection__first(var_args);
}
var_recv = var23;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var26 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val* (*)(val* self))(var24->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var24) /* ctype on <var24:MType>*/;
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var30 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var28) on <var28:MClassDef> */
var33 = var28->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var28:MClassDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var31) on <var31:MClass> */
var36 = var31->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var31:MClass> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = nit__abstract_compiler___MClassType___MType__ctype(var34);
}
{
{ /* Inline kernel#Object#!= (var27,var37) on <var27:String> */
var_other = var37;
{
var40 = ((short int (*)(val* self, val* p0))(var27->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var27, var_other) /* == on <var27:String>*/;
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
var42 = standard___standard__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var45 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var43) on <var43:MClassDef> */
var48 = var43->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var43:MClassDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var46) on <var46:MClass> */
var51 = var46->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var46:MClass> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var42, var49);
}
{
standard___standard__Sequence___first_61d(var_args, var52); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var53 = 0;
var_i = var53;
{
var54 = nit___nit__MSignature___arity(var_msignature);
}
var_ = var54;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var57 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var58 = var_i < var_;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var61 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var59, var_i);
}
{
{ /* Inline model#MParameter#mtype (var62) on <var62:nullable Object(MParameter)> */
var65 = var62->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var62:nullable Object(MParameter)> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
var_t = var63;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var68 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var66) on <var_i:Int> */
var71 = var_i == var66;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
var72 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var72) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var72:Int> isa OTHER */
/* <var72:Int> isa OTHER */
var75 = 1; /* easy <var72:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var79 = var_i + var72;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
{
var80 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var73);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var80) on <var80:nullable Object(RuntimeVariable)> */
var83 = var80->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var80:nullable Object(RuntimeVariable)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_t = var81;
} else {
}
var84 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var84) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var84:Int> isa OTHER */
/* <var84:Int> isa OTHER */
var87 = 1; /* easy <var84:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var91 = var_i + var84;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var92 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var92) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var92:Int> isa OTHER */
/* <var92:Int> isa OTHER */
var95 = 1; /* easy <var92:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var99 = var_i + var92;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
{
var100 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var93);
}
{
var101 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var100, var_t);
}
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_args, var85, var101); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
var102 = 1;
{
var103 = standard___standard__Int___Discrete__successor(var_i, var102);
}
var_i = var103;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#unbox_signature_extern for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1) {
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
short int var64 /* : Bool */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
val* var73 /* : nullable Object */;
val* var74 /* : MType */;
val* var76 /* : MType */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
long var80 /* : Int */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var88 /* : Int */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
val* var96 /* : nullable Object */;
val* var97 /* : RuntimeVariable */;
long var98 /* : Int */;
long var99 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 1;
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 976);
show_backtrace(1);
} else {
var22 = nit___nit__MSignature___MType__resolve_for(var, var6, var12, var18, var21);
}
var_msignature = var22;
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:MMethodDef> */
var26 = var_m->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var24) on <var24:MProperty(MMethod)> */
var29 = var24->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var24:MProperty(MMethod)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = !var27;
var_ = var30;
if (var30){
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var33 = var_m->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
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
var34 = standard___standard__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var37 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var35) on <var35:MClassDef> */
var40 = var35->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var35:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var38) on <var38:MClass> */
var43 = var38->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var38:MClass> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = ((val* (*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var34, var41) /* unbox_extern on <self:SeparateCompilerVisitor>*/;
}
{
standard___standard__Sequence___first_61d(var_args, var44); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var45 = 0;
var_i = var45;
{
var46 = nit___nit__MSignature___arity(var_msignature);
}
var_47 = var46;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_47:Int> isa OTHER */
/* <var_47:Int> isa OTHER */
var50 = 1; /* easy <var_47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var54 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var52, var_i);
}
{
{ /* Inline model#MParameter#mtype (var55) on <var55:nullable Object(MParameter)> */
var58 = var55->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var55:nullable Object(MParameter)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
var_t = var56;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var61 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var59) on <var_i:Int> */
var64 = var_i == var59;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
if (var62){
var65 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var65) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var65:Int> isa OTHER */
/* <var65:Int> isa OTHER */
var68 = 1; /* easy <var65:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var72 = var_i + var65;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
var73 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var66);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var73) on <var73:nullable Object(RuntimeVariable)> */
var76 = var73->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var73:nullable Object(RuntimeVariable)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
var_t = var74;
} else {
}
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var79 = var_m->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
if (var77){
var80 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var80) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var83 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var87 = var_i + var80;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var88 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var88) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var88:Int> isa OTHER */
/* <var88:Int> isa OTHER */
var91 = 1; /* easy <var88:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var95 = var_i + var88;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
var96 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var89);
}
{
var97 = ((val* (*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var96, var_t) /* unbox_extern on <self:SeparateCompilerVisitor>*/;
}
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_args, var81, var97); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var98 = 1;
{
var99 = standard___standard__Int___Discrete__successor(var_i, var98);
}
var_i = var99;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#autobox for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
val* var12 /* : MType */;
val* var13 /* : String */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
short int var25 /* : Bool */;
val* var26 /* : MType */;
val* var28 /* : MType */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : MType */;
val* var54 /* : MType */;
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
val* var69 /* : RuntimeVariable */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
short int var76 /* : Bool */;
val* var77 /* : MType */;
val* var79 /* : MType */;
short int var80 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_valtype /* var valtype: MClassType */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
short int var_86 /* var : Bool */;
val* var87 /* : MClass */;
val* var89 /* : MClass */;
val* var90 /* : MClassKind */;
val* var92 /* : MClassKind */;
val* var93 /* : MClassKind */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var_99 /* var : Bool */;
val* var100 /* : MClass */;
val* var102 /* : MClass */;
val* var103 /* : String */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
short int var111 /* : Bool */;
val* var_other113 /* var other: nullable Object */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
val* var116 /* : AbstractCompiler */;
val* var118 /* : AbstractCompiler */;
val* var119 /* : MModule */;
val* var121 /* : MModule */;
val* var122 /* : MClassType */;
val* var123 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var124 /* : Bool */;
val* var125 /* : AbstractCompiler */;
val* var127 /* : AbstractCompiler */;
val* var128 /* : nullable RapidTypeAnalysis */;
val* var130 /* : nullable RapidTypeAnalysis */;
val* var131 /* : null */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
short int var_137 /* var : Bool */;
val* var138 /* : AbstractCompiler */;
val* var140 /* : AbstractCompiler */;
val* var141 /* : nullable RapidTypeAnalysis */;
val* var143 /* : nullable RapidTypeAnalysis */;
val* var144 /* : HashSet[MClassType] */;
val* var146 /* : HashSet[MClassType] */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : FlatString */;
val* var154 /* : MType */;
val* var156 /* : MType */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
val* var167 /* : MType */;
val* var169 /* : MType */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : Array[Object] */;
long var176 /* : Int */;
val* var177 /* : NativeArray[Object] */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : FlatString */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
long var187 /* : Int */;
val* var188 /* : FlatString */;
val* var189 /* : String */;
val* var190 /* : Array[Object] */;
long var191 /* : Int */;
val* var192 /* : NativeArray[Object] */;
val* var193 /* : String */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : FlatString */;
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
val* var210 /* : MType */;
val* var212 /* : MType */;
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
val* var223 /* : Array[Object] */;
long var224 /* : Int */;
val* var225 /* : NativeArray[Object] */;
val* var226 /* : String */;
short int var227 /* : Bool */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
val* var230 /* : MType */;
val* var232 /* : MType */;
val* var233 /* : String */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : FlatString */;
short int var239 /* : Bool */;
short int var_240 /* var : Bool */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : FlatString */;
short int var247 /* : Bool */;
short int var_248 /* var : Bool */;
short int var249 /* : Bool */;
val* var250 /* : MType */;
val* var252 /* : MType */;
val* var253 /* : String */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : FlatString */;
short int var259 /* : Bool */;
short int var_260 /* var : Bool */;
val* var261 /* : String */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : FlatString */;
short int var267 /* : Bool */;
short int var_268 /* var : Bool */;
short int var269 /* : Bool */;
val* var270 /* : MType */;
val* var272 /* : MType */;
val* var273 /* : String */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
long var277 /* : Int */;
val* var278 /* : FlatString */;
short int var279 /* : Bool */;
short int var_280 /* var : Bool */;
val* var281 /* : String */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
short int var287 /* : Bool */;
val* var288 /* : RuntimeVariable */;
val* var_res289 /* var res: RuntimeVariable */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
long var293 /* : Int */;
val* var294 /* : FlatString */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
long var298 /* : Int */;
val* var299 /* : FlatString */;
val* var300 /* : MType */;
val* var302 /* : MType */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
long var306 /* : Int */;
val* var307 /* : FlatString */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
long var311 /* : Int */;
val* var312 /* : FlatString */;
val* var313 /* : Array[Object] */;
long var314 /* : Int */;
val* var315 /* : NativeArray[Object] */;
val* var316 /* : String */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
long var320 /* : Int */;
val* var321 /* : FlatString */;
val* var322 /* : MType */;
val* var324 /* : MType */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
long var328 /* : Int */;
val* var329 /* : FlatString */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
long var333 /* : Int */;
val* var334 /* : FlatString */;
val* var335 /* : Array[Object] */;
long var336 /* : Int */;
val* var337 /* : NativeArray[Object] */;
val* var338 /* : String */;
var_value = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
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
var8 = var1 == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var12 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val* (*)(val* self))(var10->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var10) /* ctype on <var10:MType>*/;
}
if (varonce) {
var14 = varonce;
} else {
var15 = "val*";
var16 = 4;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
{
var18 = ((short int (*)(val* self, val* p0))(var13->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var13, var14) /* == on <var13:String>*/;
}
var_ = var18;
if (var18){
{
var19 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "val*";
var23 = 4;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
var25 = ((short int (*)(val* self, val* p0))(var19->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var19, var21) /* == on <var19:String>*/;
}
var9 = var25;
} else {
var9 = var_;
}
if (var9){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var28 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = ((val* (*)(val* self))(var26->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var26) /* ctype on <var26:MType>*/;
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = "val*";
var33 = 4;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
{
var35 = ((short int (*)(val* self, val* p0))(var29->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var29, var31) /* == on <var29:String>*/;
}
if (var35){
if (varonce36) {
var37 = varonce36;
} else {
var38 = "((struct instance_";
var39 = 18;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
var41 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "*)";
var45 = 2;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = ")->value; /* autounbox from ";
var50 = 28;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var54 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = " to ";
var58 = 4;
var59 = standard___standard__NativeString___to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = " */";
var63 = 3;
var64 = standard___standard__NativeString___to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 9;
var67 = NEW_standard__NativeArray(var66, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var67)->values[0] = (val*) var37;
((struct instance_standard__NativeArray*)var67)->values[1] = (val*) var41;
((struct instance_standard__NativeArray*)var67)->values[2] = (val*) var43;
((struct instance_standard__NativeArray*)var67)->values[3] = (val*) var_value;
((struct instance_standard__NativeArray*)var67)->values[4] = (val*) var48;
((struct instance_standard__NativeArray*)var67)->values[5] = (val*) var52;
((struct instance_standard__NativeArray*)var67)->values[6] = (val*) var56;
((struct instance_standard__NativeArray*)var67)->values[7] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var67)->values[8] = (val*) var61;
{
((void (*)(val* self, val* p0, long p1))(var65->class->vft[COLOR_standard__array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
}
{
var68 = ((val* (*)(val* self))(var65->class->vft[COLOR_standard__string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
}
{
var69 = nit___nit__AbstractCompilerVisitor___new_expr(self, var68, var_mtype);
}
var = var69;
goto RET_LABEL;
} else {
{
var70 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = "val*";
var74 = 4;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
{
var76 = ((short int (*)(val* self, val* p0))(var70->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var70, var72) /* == on <var70:String>*/;
}
if (var76){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var79 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
/* <var77:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var77->type->table_size) {
var80 = 0;
} else {
var80 = var77->type->type_table[cltype] == idtype;
}
if (unlikely(!var80)) {
var_class_name = var77 == NULL ? "null" : var77->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 998);
show_backtrace(1);
}
var_valtype = var77;
/* <var_mtype:MType> isa MClassType */
cltype84 = type_nit__MClassType.color;
idtype85 = type_nit__MClassType.id;
if(cltype84 >= var_mtype->type->table_size) {
var83 = 0;
} else {
var83 = var_mtype->type->type_table[cltype84] == idtype85;
}
var_86 = var83;
if (var83){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var89 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var87) on <var87:MClass> */
var92 = var87->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var87:MClass> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
var93 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var90,var93) on <var90:MClassKind> */
var_other = var93;
{
{ /* Inline kernel#Object#is_same_instance (var90,var_other) on <var90:MClassKind> */
var98 = var90 == var_other;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var82 = var94;
} else {
var82 = var_86;
}
var_99 = var82;
if (var82){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var102 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline model#MClass#name (var100) on <var100:MClass> */
var105 = var100->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var100:MClass> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = "NativeString";
var109 = 12;
var110 = standard___standard__NativeString___to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
{
{ /* Inline kernel#Object#!= (var103,var107) on <var103:String> */
var_other113 = var107;
{
var114 = ((short int (*)(val* self, val* p0))(var103->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var103, var_other113) /* == on <var103:String>*/;
}
var115 = !var114;
var111 = var115;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
var81 = var111;
} else {
var81 = var_99;
}
if (var81){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var118 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var116) on <var116:AbstractCompiler(SeparateCompiler)> */
var121 = var116->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var116:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
var122 = nit__model___MModule___pointer_type(var119);
}
var_valtype = var122;
} else {
}
{
var123 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var123;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var127 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var125) on <var125:AbstractCompiler(SeparateCompiler)> */
var130 = var125->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var125:AbstractCompiler(SeparateCompiler)> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
var131 = NULL;
if (var128 == NULL) {
var132 = 0; /* is null */
} else {
var132 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var128,var131) on <var128:nullable RapidTypeAnalysis> */
var_other113 = var131;
{
var135 = ((short int (*)(val* self, val* p0))(var128->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var128, var_other113) /* == on <var128:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
}
var136 = !var135;
var133 = var136;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
var132 = var133;
}
var_137 = var132;
if (var132){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var140 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var138) on <var138:AbstractCompiler(SeparateCompiler)> */
var143 = var138->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var138:AbstractCompiler(SeparateCompiler)> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
if (var141 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1003);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var141) on <var141:nullable RapidTypeAnalysis> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var146 = var141->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var141:nullable RapidTypeAnalysis> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var144, var_valtype);
}
var148 = !var147;
var124 = var148;
} else {
var124 = var_137;
}
if (var124){
if (varonce149) {
var150 = varonce149;
} else {
var151 = "/*no autobox from ";
var152 = 18;
var153 = standard___standard__NativeString___to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var156 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = " to ";
var160 = 4;
var161 = standard___standard__NativeString___to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
if (varonce162) {
var163 = varonce162;
} else {
var164 = ": ";
var165 = 2;
var166 = standard___standard__NativeString___to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var169 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = " is not live! */";
var173 = 16;
var174 = standard___standard__NativeString___to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
var175 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var175 = array_instance Array[Object] */
var176 = 7;
var177 = NEW_standard__NativeArray(var176, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var177)->values[0] = (val*) var150;
((struct instance_standard__NativeArray*)var177)->values[1] = (val*) var154;
((struct instance_standard__NativeArray*)var177)->values[2] = (val*) var158;
((struct instance_standard__NativeArray*)var177)->values[3] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var177)->values[4] = (val*) var163;
((struct instance_standard__NativeArray*)var177)->values[5] = (val*) var167;
((struct instance_standard__NativeArray*)var177)->values[6] = (val*) var171;
{
((void (*)(val* self, val* p0, long p1))(var175->class->vft[COLOR_standard__array__Array__with_native]))(var175, var177, var176) /* with_native on <var175:Array[Object]>*/;
}
}
{
var178 = ((val* (*)(val* self))(var175->class->vft[COLOR_standard__string__Object__to_s]))(var175) /* to_s on <var175:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var178); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce179) {
var180 = varonce179;
} else {
var181 = "PRINT_ERROR(\"Dead code executed!\\n\"); show_backtrace(1);";
var182 = 56;
var183 = standard___standard__NativeString___to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var180); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce184) {
var185 = varonce184;
} else {
var186 = "BOX_";
var187 = 4;
var188 = standard___standard__NativeString___to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
{
var189 = ((val* (*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
var190 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var190 = array_instance Array[Object] */
var191 = 2;
var192 = NEW_standard__NativeArray(var191, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var192)->values[0] = (val*) var185;
((struct instance_standard__NativeArray*)var192)->values[1] = (val*) var189;
{
((void (*)(val* self, val* p0, long p1))(var190->class->vft[COLOR_standard__array__Array__with_native]))(var190, var192, var191) /* with_native on <var190:Array[Object]>*/;
}
}
{
var193 = ((val* (*)(val* self))(var190->class->vft[COLOR_standard__string__Object__to_s]))(var190) /* to_s on <var190:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var193); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce194) {
var195 = varonce194;
} else {
var196 = " = BOX_";
var197 = 7;
var198 = standard___standard__NativeString___to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
{
var199 = ((val* (*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = "(";
var203 = 1;
var204 = standard___standard__NativeString___to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
if (varonce205) {
var206 = varonce205;
} else {
var207 = "); /* autobox from ";
var208 = 19;
var209 = standard___standard__NativeString___to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var212 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = " to ";
var216 = 4;
var217 = standard___standard__NativeString___to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = " */";
var221 = 3;
var222 = standard___standard__NativeString___to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
var223 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var223 = array_instance Array[Object] */
var224 = 10;
var225 = NEW_standard__NativeArray(var224, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var225)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var225)->values[1] = (val*) var195;
((struct instance_standard__NativeArray*)var225)->values[2] = (val*) var199;
((struct instance_standard__NativeArray*)var225)->values[3] = (val*) var201;
((struct instance_standard__NativeArray*)var225)->values[4] = (val*) var_value;
((struct instance_standard__NativeArray*)var225)->values[5] = (val*) var206;
((struct instance_standard__NativeArray*)var225)->values[6] = (val*) var210;
((struct instance_standard__NativeArray*)var225)->values[7] = (val*) var214;
((struct instance_standard__NativeArray*)var225)->values[8] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var225)->values[9] = (val*) var219;
{
((void (*)(val* self, val* p0, long p1))(var223->class->vft[COLOR_standard__array__Array__with_native]))(var223, var225, var224) /* with_native on <var223:Array[Object]>*/;
}
}
{
var226 = ((val* (*)(val* self))(var223->class->vft[COLOR_standard__string__Object__to_s]))(var223) /* to_s on <var223:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var226); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var232 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
var233 = ((val* (*)(val* self))(var230->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var230) /* ctype on <var230:MType>*/;
}
if (varonce234) {
var235 = varonce234;
} else {
var236 = "void*";
var237 = 5;
var238 = standard___standard__NativeString___to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
{
var239 = ((short int (*)(val* self, val* p0))(var233->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var233, var235) /* == on <var233:String>*/;
}
var_240 = var239;
if (var239){
{
var241 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = "void*";
var245 = 5;
var246 = standard___standard__NativeString___to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
{
var247 = ((short int (*)(val* self, val* p0))(var241->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var241, var243) /* == on <var241:String>*/;
}
var229 = var247;
} else {
var229 = var_240;
}
var_248 = var229;
if (var229){
var228 = var_248;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var252 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var252 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
{
var253 = ((val* (*)(val* self))(var250->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var250) /* ctype on <var250:MType>*/;
}
if (varonce254) {
var255 = varonce254;
} else {
var256 = "char*";
var257 = 5;
var258 = standard___standard__NativeString___to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
{
var259 = ((short int (*)(val* self, val* p0))(var253->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var253, var255) /* == on <var253:String>*/;
}
var_260 = var259;
if (var259){
{
var261 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce262) {
var263 = varonce262;
} else {
var264 = "void*";
var265 = 5;
var266 = standard___standard__NativeString___to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
{
var267 = ((short int (*)(val* self, val* p0))(var261->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var261, var263) /* == on <var261:String>*/;
}
var249 = var267;
} else {
var249 = var_260;
}
var228 = var249;
}
var_268 = var228;
if (var228){
var227 = var_268;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var272 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var272 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
{
var273 = ((val* (*)(val* self))(var270->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var270) /* ctype on <var270:MType>*/;
}
if (varonce274) {
var275 = varonce274;
} else {
var276 = "void*";
var277 = 5;
var278 = standard___standard__NativeString___to_s_with_length(var276, var277);
var275 = var278;
varonce274 = var275;
}
{
var279 = ((short int (*)(val* self, val* p0))(var273->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var273, var275) /* == on <var273:String>*/;
}
var_280 = var279;
if (var279){
{
var281 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = "char*";
var285 = 5;
var286 = standard___standard__NativeString___to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
{
var287 = ((short int (*)(val* self, val* p0))(var281->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var281, var283) /* == on <var281:String>*/;
}
var269 = var287;
} else {
var269 = var_280;
}
var227 = var269;
}
if (var227){
var = var_value;
goto RET_LABEL;
} else {
{
var288 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res289 = var288;
if (varonce290) {
var291 = varonce290;
} else {
var292 = "/* ";
var293 = 3;
var294 = standard___standard__NativeString___to_s_with_length(var292, var293);
var291 = var294;
varonce290 = var291;
}
if (varonce295) {
var296 = varonce295;
} else {
var297 = " left unintialized (cannot convert ";
var298 = 35;
var299 = standard___standard__NativeString___to_s_with_length(var297, var298);
var296 = var299;
varonce295 = var296;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var302 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
if (varonce303) {
var304 = varonce303;
} else {
var305 = " to ";
var306 = 4;
var307 = standard___standard__NativeString___to_s_with_length(var305, var306);
var304 = var307;
varonce303 = var304;
}
if (varonce308) {
var309 = varonce308;
} else {
var310 = ") */";
var311 = 4;
var312 = standard___standard__NativeString___to_s_with_length(var310, var311);
var309 = var312;
varonce308 = var309;
}
var313 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var313 = array_instance Array[Object] */
var314 = 7;
var315 = NEW_standard__NativeArray(var314, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var315)->values[0] = (val*) var291;
((struct instance_standard__NativeArray*)var315)->values[1] = (val*) var_res289;
((struct instance_standard__NativeArray*)var315)->values[2] = (val*) var296;
((struct instance_standard__NativeArray*)var315)->values[3] = (val*) var300;
((struct instance_standard__NativeArray*)var315)->values[4] = (val*) var304;
((struct instance_standard__NativeArray*)var315)->values[5] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var315)->values[6] = (val*) var309;
{
((void (*)(val* self, val* p0, long p1))(var313->class->vft[COLOR_standard__array__Array__with_native]))(var313, var315, var314) /* with_native on <var313:Array[Object]>*/;
}
}
{
var316 = ((val* (*)(val* self))(var313->class->vft[COLOR_standard__string__Object__to_s]))(var313) /* to_s on <var313:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var316); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce317) {
var318 = varonce317;
} else {
var319 = "PRINT_ERROR(\"Cast error: Cannot cast %s to %s.\\n\", \"";
var320 = 52;
var321 = standard___standard__NativeString___to_s_with_length(var319, var320);
var318 = var321;
varonce317 = var318;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var324 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var324 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var322 = var324;
RET_LABEL323:(void)0;
}
}
if (varonce325) {
var326 = varonce325;
} else {
var327 = "\", \"";
var328 = 4;
var329 = standard___standard__NativeString___to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
if (varonce330) {
var331 = varonce330;
} else {
var332 = "\"); show_backtrace(1);";
var333 = 22;
var334 = standard___standard__NativeString___to_s_with_length(var332, var333);
var331 = var334;
varonce330 = var331;
}
var335 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var335 = array_instance Array[Object] */
var336 = 5;
var337 = NEW_standard__NativeArray(var336, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var337)->values[0] = (val*) var318;
((struct instance_standard__NativeArray*)var337)->values[1] = (val*) var322;
((struct instance_standard__NativeArray*)var337)->values[2] = (val*) var326;
((struct instance_standard__NativeArray*)var337)->values[3] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var337)->values[4] = (val*) var331;
{
((void (*)(val* self, val* p0, long p1))(var335->class->vft[COLOR_standard__array__Array__with_native]))(var335, var337, var336) /* with_native on <var335:Array[Object]>*/;
}
}
{
var338 = ((val* (*)(val* self))(var335->class->vft[COLOR_standard__string__Object__to_s]))(var335) /* to_s on <var335:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var338); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res289;
goto RET_LABEL;
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#unbox_extern for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern(val* self, val* p0, val* p1) {
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
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : String */;
val* var22 /* : String */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var7,var10) on <var7:MClassKind> */
var_other = var10;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
var15 = var7 == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var2 = var11;
} else {
var2 = var_;
}
var_16 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var19 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#name (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (varonce) {
var23 = varonce;
} else {
var24 = "NativeString";
var25 = 12;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
{ /* Inline kernel#Object#!= (var20,var23) on <var20:String> */
var_other29 = var23;
{
var30 = ((short int (*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var20, var_other29) /* == on <var20:String>*/;
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_16;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var32) on <var32:AbstractCompiler(SeparateCompiler)> */
var37 = var32->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var32:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit__model___MModule___pointer_type(var35);
}
var_pointer_type = var38;
{
var39 = nit___nit__AbstractCompilerVisitor___new_var_extern(self, var_mtype);
}
var_res = var39;
if (varonce40) {
var41 = varonce40;
} else {
var42 = " = ((struct instance_";
var43 = 21;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
var45 = ((val* (*)(val* self))(var_pointer_type->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "*)";
var49 = 2;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ")->value; /* unboxing ";
var54 = 22;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var58 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = " */";
var62 = 3;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 8;
var66 = NEW_standard__NativeArray(var65, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var66)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var66)->values[1] = (val*) var41;
((struct instance_standard__NativeArray*)var66)->values[2] = (val*) var45;
((struct instance_standard__NativeArray*)var66)->values[3] = (val*) var47;
((struct instance_standard__NativeArray*)var66)->values[4] = (val*) var_value;
((struct instance_standard__NativeArray*)var66)->values[5] = (val*) var52;
((struct instance_standard__NativeArray*)var66)->values[6] = (val*) var56;
((struct instance_standard__NativeArray*)var66)->values[7] = (val*) var60;
{
((void (*)(val* self, val* p0, long p1))(var64->class->vft[COLOR_standard__array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val* self))(var64->class->vft[COLOR_standard__string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
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
