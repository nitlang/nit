#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler#AMethPropdef#compile_intern_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__abstract_compiler___AMethPropdef___compile_intern_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : String */;
val* var6 /* : String */;
val* var_pname /* var pname: String */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var13 /* : String */;
val* var15 /* : String */;
val* var_cname /* var cname: String */;
val* var16 /* : nullable MSignature */;
val* var18 /* : nullable MSignature */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var28 /* : MType */;
short int var29 /* : Bool */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : String */;
short int var54 /* : Bool */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : String */;
val* var65 /* : nullable Object */;
val* var66 /* : String */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : String */;
short int var72 /* : Bool */;
val* var73 /* : nullable Object */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : String */;
short int var78 /* : Bool */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : String */;
val* var85 /* : nullable Object */;
val* var86 /* : String */;
val* var87 /* : nullable Object */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : RuntimeVariable */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : String */;
short int var95 /* : Bool */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : String */;
val* var102 /* : nullable Object */;
val* var103 /* : String */;
val* var104 /* : nullable Object */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : RuntimeVariable */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : String */;
short int var112 /* : Bool */;
val* var114 /* : NativeArray[String] */;
static val* varonce113;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : String */;
val* var119 /* : nullable Object */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var122 /* : RuntimeVariable */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : String */;
short int var127 /* : Bool */;
val* var128 /* : nullable Object */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : String */;
short int var133 /* : Bool */;
val* var135 /* : NativeArray[String] */;
static val* varonce134;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : String */;
val* var140 /* : nullable Object */;
val* var141 /* : String */;
val* var142 /* : nullable Object */;
val* var143 /* : String */;
val* var144 /* : String */;
val* var145 /* : RuntimeVariable */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : String */;
short int var150 /* : Bool */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : String */;
val* var157 /* : nullable Object */;
val* var158 /* : String */;
val* var159 /* : nullable Object */;
val* var160 /* : String */;
val* var161 /* : String */;
val* var162 /* : RuntimeVariable */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : String */;
short int var167 /* : Bool */;
val* var169 /* : NativeArray[String] */;
static val* varonce168;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : String */;
val* var174 /* : nullable Object */;
val* var175 /* : String */;
val* var176 /* : nullable Object */;
val* var177 /* : String */;
val* var178 /* : String */;
val* var179 /* : RuntimeVariable */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : String */;
short int var184 /* : Bool */;
val* var185 /* : nullable Object */;
val* var186 /* : nullable Object */;
val* var187 /* : RuntimeVariable */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : String */;
short int var192 /* : Bool */;
val* var193 /* : nullable Object */;
val* var194 /* : nullable Object */;
val* var195 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var197 /* : NativeArray[String] */;
static val* varonce196;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : String */;
val* var202 /* : String */;
val* var203 /* : String */;
val* var204 /* : RuntimeVariable */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : String */;
short int var209 /* : Bool */;
val* var211 /* : NativeArray[String] */;
static val* varonce210;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
val* var215 /* : String */;
val* var216 /* : nullable Object */;
val* var217 /* : String */;
val* var218 /* : nullable Object */;
val* var219 /* : String */;
val* var220 /* : String */;
val* var221 /* : RuntimeVariable */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
val* var225 /* : String */;
short int var226 /* : Bool */;
val* var228 /* : NativeArray[String] */;
static val* varonce227;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
val* var232 /* : String */;
val* var233 /* : nullable Object */;
val* var234 /* : String */;
val* var235 /* : nullable Object */;
val* var236 /* : String */;
val* var237 /* : String */;
val* var238 /* : RuntimeVariable */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
val* var242 /* : String */;
short int var243 /* : Bool */;
val* var245 /* : NativeArray[String] */;
static val* varonce244;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
val* var249 /* : String */;
val* var250 /* : nullable Object */;
val* var251 /* : String */;
val* var252 /* : nullable Object */;
val* var253 /* : String */;
val* var254 /* : String */;
val* var255 /* : RuntimeVariable */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
val* var259 /* : String */;
short int var260 /* : Bool */;
val* var262 /* : NativeArray[String] */;
static val* varonce261;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
val* var266 /* : String */;
val* var267 /* : nullable Object */;
val* var268 /* : String */;
val* var269 /* : nullable Object */;
val* var270 /* : String */;
val* var271 /* : String */;
val* var272 /* : RuntimeVariable */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
val* var276 /* : String */;
short int var277 /* : Bool */;
val* var279 /* : NativeArray[String] */;
static val* varonce278;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
val* var283 /* : String */;
val* var284 /* : nullable Object */;
val* var285 /* : String */;
val* var286 /* : String */;
val* var287 /* : RuntimeVariable */;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : NativeString */;
val* var291 /* : String */;
short int var292 /* : Bool */;
val* var294 /* : NativeArray[String] */;
static val* varonce293;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
val* var298 /* : String */;
val* var299 /* : nullable Object */;
val* var300 /* : String */;
val* var301 /* : String */;
val* var302 /* : RuntimeVariable */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
val* var306 /* : String */;
short int var307 /* : Bool */;
val* var309 /* : NativeArray[String] */;
static val* varonce308;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
val* var313 /* : String */;
val* var314 /* : nullable Object */;
val* var315 /* : String */;
val* var316 /* : String */;
val* var317 /* : RuntimeVariable */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
val* var321 /* : String */;
short int var322 /* : Bool */;
val* var324 /* : NativeArray[String] */;
static val* varonce323;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
val* var328 /* : String */;
val* var329 /* : nullable Object */;
val* var330 /* : String */;
val* var331 /* : String */;
val* var332 /* : RuntimeVariable */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : NativeString */;
val* var336 /* : String */;
short int var337 /* : Bool */;
val* var339 /* : NativeArray[String] */;
static val* varonce338;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
val* var343 /* : String */;
val* var344 /* : nullable Object */;
val* var345 /* : String */;
val* var346 /* : String */;
val* var347 /* : RuntimeVariable */;
static val* varonce348;
val* var349 /* : String */;
char* var350 /* : NativeString */;
val* var351 /* : String */;
short int var352 /* : Bool */;
val* var354 /* : NativeArray[String] */;
static val* varonce353;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : NativeString */;
val* var358 /* : String */;
val* var359 /* : nullable Object */;
val* var360 /* : String */;
val* var361 /* : String */;
val* var362 /* : RuntimeVariable */;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : NativeString */;
val* var366 /* : String */;
short int var367 /* : Bool */;
val* var369 /* : NativeArray[String] */;
static val* varonce368;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
val* var373 /* : String */;
val* var374 /* : nullable Object */;
val* var375 /* : String */;
val* var376 /* : String */;
val* var377 /* : RuntimeVariable */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
val* var381 /* : String */;
short int var382 /* : Bool */;
val* var384 /* : NativeArray[String] */;
static val* varonce383;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : NativeString */;
val* var388 /* : String */;
val* var389 /* : nullable Object */;
val* var390 /* : String */;
val* var391 /* : String */;
val* var392 /* : RuntimeVariable */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
val* var396 /* : String */;
short int var397 /* : Bool */;
val* var399 /* : NativeArray[String] */;
static val* varonce398;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
val* var403 /* : String */;
val* var404 /* : nullable Object */;
val* var405 /* : String */;
val* var406 /* : nullable Object */;
val* var407 /* : String */;
val* var408 /* : String */;
val* var409 /* : RuntimeVariable */;
static val* varonce410;
val* var411 /* : String */;
char* var412 /* : NativeString */;
val* var413 /* : String */;
short int var414 /* : Bool */;
val* var416 /* : NativeArray[String] */;
static val* varonce415;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
val* var420 /* : String */;
val* var421 /* : nullable Object */;
val* var422 /* : String */;
val* var423 /* : nullable Object */;
val* var424 /* : String */;
val* var425 /* : String */;
val* var426 /* : RuntimeVariable */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
val* var430 /* : String */;
short int var431 /* : Bool */;
val* var433 /* : NativeArray[String] */;
static val* varonce432;
static val* varonce434;
val* var435 /* : String */;
char* var436 /* : NativeString */;
val* var437 /* : String */;
val* var438 /* : nullable Object */;
val* var439 /* : String */;
val* var440 /* : nullable Object */;
val* var441 /* : String */;
val* var442 /* : String */;
val* var443 /* : RuntimeVariable */;
static val* varonce444;
val* var445 /* : String */;
char* var446 /* : NativeString */;
val* var447 /* : String */;
short int var448 /* : Bool */;
val* var450 /* : NativeArray[String] */;
static val* varonce449;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : NativeString */;
val* var454 /* : String */;
val* var455 /* : nullable Object */;
val* var456 /* : String */;
val* var457 /* : nullable Object */;
val* var458 /* : String */;
val* var459 /* : String */;
val* var460 /* : RuntimeVariable */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
val* var464 /* : String */;
short int var465 /* : Bool */;
static val* varonce466;
val* var467 /* : String */;
char* var468 /* : NativeString */;
val* var469 /* : String */;
short int var470 /* : Bool */;
val* var472 /* : NativeArray[String] */;
static val* varonce471;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : NativeString */;
val* var476 /* : String */;
val* var477 /* : nullable Object */;
val* var478 /* : String */;
val* var479 /* : String */;
val* var480 /* : RuntimeVariable */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : NativeString */;
val* var484 /* : String */;
short int var485 /* : Bool */;
val* var487 /* : NativeArray[String] */;
static val* varonce486;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : NativeString */;
val* var491 /* : String */;
val* var492 /* : nullable Object */;
val* var493 /* : String */;
val* var494 /* : nullable Object */;
val* var495 /* : String */;
val* var496 /* : String */;
val* var497 /* : RuntimeVariable */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : NativeString */;
val* var501 /* : String */;
short int var502 /* : Bool */;
val* var504 /* : NativeArray[String] */;
static val* varonce503;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : NativeString */;
val* var508 /* : String */;
val* var509 /* : nullable Object */;
val* var510 /* : String */;
val* var511 /* : nullable Object */;
val* var512 /* : String */;
val* var513 /* : String */;
val* var514 /* : RuntimeVariable */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
val* var518 /* : String */;
short int var519 /* : Bool */;
val* var520 /* : nullable Object */;
val* var521 /* : nullable Object */;
val* var522 /* : RuntimeVariable */;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : NativeString */;
val* var526 /* : String */;
short int var527 /* : Bool */;
val* var528 /* : nullable Object */;
val* var529 /* : nullable Object */;
val* var530 /* : RuntimeVariable */;
val* var_res531 /* var res: RuntimeVariable */;
val* var533 /* : NativeArray[String] */;
static val* varonce532;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : NativeString */;
val* var537 /* : String */;
val* var538 /* : String */;
val* var539 /* : String */;
val* var540 /* : RuntimeVariable */;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : NativeString */;
val* var544 /* : String */;
short int var545 /* : Bool */;
val* var547 /* : NativeArray[String] */;
static val* varonce546;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : NativeString */;
val* var551 /* : String */;
val* var552 /* : nullable Object */;
val* var553 /* : String */;
val* var554 /* : nullable Object */;
val* var555 /* : String */;
val* var556 /* : String */;
val* var557 /* : RuntimeVariable */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : NativeString */;
val* var561 /* : String */;
short int var562 /* : Bool */;
val* var564 /* : NativeArray[String] */;
static val* varonce563;
static val* varonce565;
val* var566 /* : String */;
char* var567 /* : NativeString */;
val* var568 /* : String */;
val* var569 /* : nullable Object */;
val* var570 /* : String */;
val* var571 /* : nullable Object */;
val* var572 /* : String */;
val* var573 /* : String */;
val* var574 /* : RuntimeVariable */;
static val* varonce575;
val* var576 /* : String */;
char* var577 /* : NativeString */;
val* var578 /* : String */;
short int var579 /* : Bool */;
val* var581 /* : NativeArray[String] */;
static val* varonce580;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : NativeString */;
val* var585 /* : String */;
val* var586 /* : nullable Object */;
val* var587 /* : String */;
val* var588 /* : nullable Object */;
val* var589 /* : String */;
val* var590 /* : String */;
val* var591 /* : RuntimeVariable */;
static val* varonce592;
val* var593 /* : String */;
char* var594 /* : NativeString */;
val* var595 /* : String */;
short int var596 /* : Bool */;
val* var598 /* : NativeArray[String] */;
static val* varonce597;
static val* varonce599;
val* var600 /* : String */;
char* var601 /* : NativeString */;
val* var602 /* : String */;
val* var603 /* : nullable Object */;
val* var604 /* : String */;
val* var605 /* : nullable Object */;
val* var606 /* : String */;
val* var607 /* : String */;
val* var608 /* : RuntimeVariable */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : NativeString */;
val* var612 /* : String */;
short int var613 /* : Bool */;
val* var615 /* : NativeArray[String] */;
static val* varonce614;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : NativeString */;
val* var619 /* : String */;
val* var620 /* : nullable Object */;
val* var621 /* : String */;
val* var622 /* : String */;
val* var623 /* : RuntimeVariable */;
static val* varonce624;
val* var625 /* : String */;
char* var626 /* : NativeString */;
val* var627 /* : String */;
short int var628 /* : Bool */;
val* var630 /* : NativeArray[String] */;
static val* varonce629;
static val* varonce631;
val* var632 /* : String */;
char* var633 /* : NativeString */;
val* var634 /* : String */;
val* var635 /* : nullable Object */;
val* var636 /* : String */;
val* var637 /* : String */;
val* var638 /* : RuntimeVariable */;
static val* varonce639;
val* var640 /* : String */;
char* var641 /* : NativeString */;
val* var642 /* : String */;
short int var643 /* : Bool */;
static val* varonce644;
val* var645 /* : String */;
char* var646 /* : NativeString */;
val* var647 /* : String */;
short int var648 /* : Bool */;
val* var650 /* : NativeArray[String] */;
static val* varonce649;
static val* varonce651;
val* var652 /* : String */;
char* var653 /* : NativeString */;
val* var654 /* : String */;
static val* varonce655;
val* var656 /* : String */;
char* var657 /* : NativeString */;
val* var658 /* : String */;
val* var659 /* : nullable Object */;
val* var660 /* : String */;
val* var661 /* : String */;
static val* varonce662;
val* var663 /* : String */;
char* var664 /* : NativeString */;
val* var665 /* : String */;
short int var666 /* : Bool */;
val* var668 /* : NativeArray[String] */;
static val* varonce667;
static val* varonce669;
val* var670 /* : String */;
char* var671 /* : NativeString */;
val* var672 /* : String */;
val* var673 /* : nullable Object */;
val* var674 /* : String */;
val* var675 /* : String */;
val* var676 /* : RuntimeVariable */;
static val* varonce677;
val* var678 /* : String */;
char* var679 /* : NativeString */;
val* var680 /* : String */;
short int var681 /* : Bool */;
val* var683 /* : NativeArray[String] */;
static val* varonce682;
static val* varonce684;
val* var685 /* : String */;
char* var686 /* : NativeString */;
val* var687 /* : String */;
val* var688 /* : nullable Object */;
val* var689 /* : String */;
val* var690 /* : nullable Object */;
val* var691 /* : String */;
val* var692 /* : String */;
val* var693 /* : RuntimeVariable */;
static val* varonce694;
val* var695 /* : String */;
char* var696 /* : NativeString */;
val* var697 /* : String */;
short int var698 /* : Bool */;
val* var700 /* : NativeArray[String] */;
static val* varonce699;
static val* varonce701;
val* var702 /* : String */;
char* var703 /* : NativeString */;
val* var704 /* : String */;
val* var705 /* : nullable Object */;
val* var706 /* : String */;
val* var707 /* : nullable Object */;
val* var708 /* : String */;
val* var709 /* : String */;
val* var710 /* : RuntimeVariable */;
static val* varonce711;
val* var712 /* : String */;
char* var713 /* : NativeString */;
val* var714 /* : String */;
short int var715 /* : Bool */;
val* var717 /* : NativeArray[String] */;
static val* varonce716;
static val* varonce718;
val* var719 /* : String */;
char* var720 /* : NativeString */;
val* var721 /* : String */;
val* var722 /* : nullable Object */;
val* var723 /* : String */;
val* var724 /* : String */;
val* var725 /* : RuntimeVariable */;
static val* varonce726;
val* var727 /* : String */;
char* var728 /* : NativeString */;
val* var729 /* : String */;
short int var730 /* : Bool */;
val* var731 /* : nullable Object */;
static val* varonce732;
val* var733 /* : String */;
char* var734 /* : NativeString */;
val* var735 /* : String */;
short int var736 /* : Bool */;
val* var738 /* : NativeArray[String] */;
static val* varonce737;
static val* varonce739;
val* var740 /* : String */;
char* var741 /* : NativeString */;
val* var742 /* : String */;
val* var743 /* : nullable Object */;
val* var744 /* : String */;
val* var745 /* : nullable Object */;
val* var746 /* : String */;
val* var747 /* : String */;
val* var748 /* : RuntimeVariable */;
static val* varonce749;
val* var750 /* : String */;
char* var751 /* : NativeString */;
val* var752 /* : String */;
short int var753 /* : Bool */;
val* var755 /* : NativeArray[String] */;
static val* varonce754;
static val* varonce756;
val* var757 /* : String */;
char* var758 /* : NativeString */;
val* var759 /* : String */;
val* var760 /* : nullable Object */;
val* var761 /* : String */;
val* var762 /* : nullable Object */;
val* var763 /* : String */;
val* var764 /* : String */;
val* var765 /* : RuntimeVariable */;
static val* varonce766;
val* var767 /* : String */;
char* var768 /* : NativeString */;
val* var769 /* : String */;
short int var770 /* : Bool */;
val* var772 /* : NativeArray[String] */;
static val* varonce771;
static val* varonce773;
val* var774 /* : String */;
char* var775 /* : NativeString */;
val* var776 /* : String */;
val* var777 /* : nullable Object */;
val* var778 /* : String */;
val* var779 /* : nullable Object */;
val* var780 /* : String */;
val* var781 /* : String */;
val* var782 /* : RuntimeVariable */;
static val* varonce783;
val* var784 /* : String */;
char* var785 /* : NativeString */;
val* var786 /* : String */;
short int var787 /* : Bool */;
val* var788 /* : nullable Object */;
val* var789 /* : nullable Object */;
val* var790 /* : RuntimeVariable */;
static val* varonce791;
val* var792 /* : String */;
char* var793 /* : NativeString */;
val* var794 /* : String */;
short int var795 /* : Bool */;
val* var796 /* : nullable Object */;
val* var797 /* : nullable Object */;
val* var798 /* : RuntimeVariable */;
val* var_res799 /* var res: RuntimeVariable */;
val* var801 /* : NativeArray[String] */;
static val* varonce800;
static val* varonce802;
val* var803 /* : String */;
char* var804 /* : NativeString */;
val* var805 /* : String */;
val* var806 /* : String */;
val* var807 /* : String */;
val* var808 /* : RuntimeVariable */;
static val* varonce809;
val* var810 /* : String */;
char* var811 /* : NativeString */;
val* var812 /* : String */;
short int var813 /* : Bool */;
val* var815 /* : NativeArray[String] */;
static val* varonce814;
static val* varonce816;
val* var817 /* : String */;
char* var818 /* : NativeString */;
val* var819 /* : String */;
val* var820 /* : nullable Object */;
val* var821 /* : String */;
val* var822 /* : nullable Object */;
val* var823 /* : String */;
val* var824 /* : String */;
val* var825 /* : RuntimeVariable */;
static val* varonce826;
val* var827 /* : String */;
char* var828 /* : NativeString */;
val* var829 /* : String */;
short int var830 /* : Bool */;
val* var832 /* : NativeArray[String] */;
static val* varonce831;
static val* varonce833;
val* var834 /* : String */;
char* var835 /* : NativeString */;
val* var836 /* : String */;
val* var837 /* : nullable Object */;
val* var838 /* : String */;
val* var839 /* : nullable Object */;
val* var840 /* : String */;
val* var841 /* : String */;
val* var842 /* : RuntimeVariable */;
static val* varonce843;
val* var844 /* : String */;
char* var845 /* : NativeString */;
val* var846 /* : String */;
short int var847 /* : Bool */;
val* var849 /* : NativeArray[String] */;
static val* varonce848;
static val* varonce850;
val* var851 /* : String */;
char* var852 /* : NativeString */;
val* var853 /* : String */;
val* var854 /* : nullable Object */;
val* var855 /* : String */;
val* var856 /* : nullable Object */;
val* var857 /* : String */;
val* var858 /* : String */;
val* var859 /* : RuntimeVariable */;
static val* varonce860;
val* var861 /* : String */;
char* var862 /* : NativeString */;
val* var863 /* : String */;
short int var864 /* : Bool */;
val* var866 /* : NativeArray[String] */;
static val* varonce865;
static val* varonce867;
val* var868 /* : String */;
char* var869 /* : NativeString */;
val* var870 /* : String */;
val* var871 /* : nullable Object */;
val* var872 /* : String */;
val* var873 /* : nullable Object */;
val* var874 /* : String */;
val* var875 /* : String */;
val* var876 /* : RuntimeVariable */;
static val* varonce877;
val* var878 /* : String */;
char* var879 /* : NativeString */;
val* var880 /* : String */;
short int var881 /* : Bool */;
val* var883 /* : NativeArray[String] */;
static val* varonce882;
static val* varonce884;
val* var885 /* : String */;
char* var886 /* : NativeString */;
val* var887 /* : String */;
val* var888 /* : nullable Object */;
val* var889 /* : String */;
val* var890 /* : nullable Object */;
val* var891 /* : String */;
val* var892 /* : String */;
val* var893 /* : RuntimeVariable */;
static val* varonce894;
val* var895 /* : String */;
char* var896 /* : NativeString */;
val* var897 /* : String */;
short int var898 /* : Bool */;
val* var900 /* : NativeArray[String] */;
static val* varonce899;
static val* varonce901;
val* var902 /* : String */;
char* var903 /* : NativeString */;
val* var904 /* : String */;
val* var905 /* : nullable Object */;
val* var906 /* : String */;
val* var907 /* : nullable Object */;
val* var908 /* : String */;
val* var909 /* : String */;
val* var910 /* : RuntimeVariable */;
static val* varonce911;
val* var912 /* : String */;
char* var913 /* : NativeString */;
val* var914 /* : String */;
short int var915 /* : Bool */;
val* var917 /* : NativeArray[String] */;
static val* varonce916;
static val* varonce918;
val* var919 /* : String */;
char* var920 /* : NativeString */;
val* var921 /* : String */;
val* var922 /* : nullable Object */;
val* var923 /* : String */;
val* var924 /* : nullable Object */;
val* var925 /* : String */;
val* var926 /* : String */;
val* var927 /* : RuntimeVariable */;
static val* varonce928;
val* var929 /* : String */;
char* var930 /* : NativeString */;
val* var931 /* : String */;
short int var932 /* : Bool */;
val* var934 /* : NativeArray[String] */;
static val* varonce933;
static val* varonce935;
val* var936 /* : String */;
char* var937 /* : NativeString */;
val* var938 /* : String */;
val* var939 /* : nullable Object */;
val* var940 /* : String */;
val* var941 /* : String */;
val* var942 /* : RuntimeVariable */;
static val* varonce943;
val* var944 /* : String */;
char* var945 /* : NativeString */;
val* var946 /* : String */;
short int var947 /* : Bool */;
val* var949 /* : NativeArray[String] */;
static val* varonce948;
static val* varonce950;
val* var951 /* : String */;
char* var952 /* : NativeString */;
val* var953 /* : String */;
val* var954 /* : nullable Object */;
val* var955 /* : String */;
val* var956 /* : String */;
val* var957 /* : RuntimeVariable */;
static val* varonce958;
val* var959 /* : String */;
char* var960 /* : NativeString */;
val* var961 /* : String */;
short int var962 /* : Bool */;
val* var964 /* : NativeArray[String] */;
static val* varonce963;
static val* varonce965;
val* var966 /* : String */;
char* var967 /* : NativeString */;
val* var968 /* : String */;
val* var969 /* : nullable Object */;
val* var970 /* : String */;
val* var971 /* : String */;
val* var972 /* : RuntimeVariable */;
static val* varonce973;
val* var974 /* : String */;
char* var975 /* : NativeString */;
val* var976 /* : String */;
short int var977 /* : Bool */;
val* var979 /* : NativeArray[String] */;
static val* varonce978;
static val* varonce980;
val* var981 /* : String */;
char* var982 /* : NativeString */;
val* var983 /* : String */;
val* var984 /* : nullable Object */;
val* var985 /* : String */;
val* var986 /* : String */;
val* var987 /* : RuntimeVariable */;
static val* varonce988;
val* var989 /* : String */;
char* var990 /* : NativeString */;
val* var991 /* : String */;
short int var992 /* : Bool */;
val* var994 /* : NativeArray[String] */;
static val* varonce993;
static val* varonce995;
val* var996 /* : String */;
char* var997 /* : NativeString */;
val* var998 /* : String */;
val* var999 /* : nullable Object */;
val* var1000 /* : String */;
val* var1001 /* : String */;
val* var1002 /* : RuntimeVariable */;
static val* varonce1003;
val* var1004 /* : String */;
char* var1005 /* : NativeString */;
val* var1006 /* : String */;
short int var1007 /* : Bool */;
val* var1009 /* : NativeArray[String] */;
static val* varonce1008;
static val* varonce1010;
val* var1011 /* : String */;
char* var1012 /* : NativeString */;
val* var1013 /* : String */;
val* var1014 /* : nullable Object */;
val* var1015 /* : String */;
val* var1016 /* : String */;
val* var1017 /* : RuntimeVariable */;
static val* varonce1018;
val* var1019 /* : String */;
char* var1020 /* : NativeString */;
val* var1021 /* : String */;
short int var1022 /* : Bool */;
val* var1024 /* : NativeArray[String] */;
static val* varonce1023;
static val* varonce1025;
val* var1026 /* : String */;
char* var1027 /* : NativeString */;
val* var1028 /* : String */;
val* var1029 /* : nullable Object */;
val* var1030 /* : String */;
val* var1031 /* : String */;
val* var1032 /* : RuntimeVariable */;
static val* varonce1033;
val* var1034 /* : String */;
char* var1035 /* : NativeString */;
val* var1036 /* : String */;
short int var1037 /* : Bool */;
val* var1039 /* : NativeArray[String] */;
static val* varonce1038;
static val* varonce1040;
val* var1041 /* : String */;
char* var1042 /* : NativeString */;
val* var1043 /* : String */;
val* var1044 /* : nullable Object */;
val* var1045 /* : String */;
val* var1046 /* : String */;
val* var1047 /* : RuntimeVariable */;
static val* varonce1048;
val* var1049 /* : String */;
char* var1050 /* : NativeString */;
val* var1051 /* : String */;
short int var1052 /* : Bool */;
static val* varonce1053;
val* var1054 /* : String */;
char* var1055 /* : NativeString */;
val* var1056 /* : String */;
short int var1057 /* : Bool */;
val* var1059 /* : NativeArray[String] */;
static val* varonce1058;
static val* varonce1060;
val* var1061 /* : String */;
char* var1062 /* : NativeString */;
val* var1063 /* : String */;
static val* varonce1064;
val* var1065 /* : String */;
char* var1066 /* : NativeString */;
val* var1067 /* : String */;
val* var1068 /* : nullable Object */;
val* var1069 /* : String */;
val* var1070 /* : String */;
static val* varonce1071;
val* var1072 /* : String */;
char* var1073 /* : NativeString */;
val* var1074 /* : String */;
short int var1075 /* : Bool */;
val* var1077 /* : NativeArray[String] */;
static val* varonce1076;
static val* varonce1078;
val* var1079 /* : String */;
char* var1080 /* : NativeString */;
val* var1081 /* : String */;
val* var1082 /* : nullable Object */;
val* var1083 /* : String */;
val* var1084 /* : String */;
val* var1085 /* : RuntimeVariable */;
static val* varonce1086;
val* var1087 /* : String */;
char* var1088 /* : NativeString */;
val* var1089 /* : String */;
short int var1090 /* : Bool */;
val* var1091 /* : nullable Object */;
val* var1092 /* : nullable Object */;
val* var1093 /* : RuntimeVariable */;
static val* varonce1094;
val* var1095 /* : String */;
char* var1096 /* : NativeString */;
val* var1097 /* : String */;
short int var1098 /* : Bool */;
val* var1099 /* : nullable Object */;
val* var1100 /* : nullable Object */;
val* var1101 /* : RuntimeVariable */;
val* var_res1102 /* var res: RuntimeVariable */;
val* var1104 /* : NativeArray[String] */;
static val* varonce1103;
static val* varonce1105;
val* var1106 /* : String */;
char* var1107 /* : NativeString */;
val* var1108 /* : String */;
val* var1109 /* : String */;
val* var1110 /* : String */;
val* var1111 /* : RuntimeVariable */;
static val* varonce1112;
val* var1113 /* : String */;
char* var1114 /* : NativeString */;
val* var1115 /* : String */;
short int var1116 /* : Bool */;
static val* varonce1117;
val* var1118 /* : String */;
char* var1119 /* : NativeString */;
val* var1120 /* : String */;
short int var1121 /* : Bool */;
val* var1123 /* : NativeArray[String] */;
static val* varonce1122;
static val* varonce1124;
val* var1125 /* : String */;
char* var1126 /* : NativeString */;
val* var1127 /* : String */;
static val* varonce1128;
val* var1129 /* : String */;
char* var1130 /* : NativeString */;
val* var1131 /* : String */;
val* var1132 /* : nullable Object */;
val* var1133 /* : String */;
val* var1134 /* : String */;
static val* varonce1135;
val* var1136 /* : String */;
char* var1137 /* : NativeString */;
val* var1138 /* : String */;
short int var1139 /* : Bool */;
val* var1141 /* : NativeArray[String] */;
static val* varonce1140;
static val* varonce1142;
val* var1143 /* : String */;
char* var1144 /* : NativeString */;
val* var1145 /* : String */;
val* var1146 /* : nullable Object */;
val* var1147 /* : String */;
val* var1148 /* : String */;
val* var1149 /* : RuntimeVariable */;
static val* varonce1150;
val* var1151 /* : String */;
char* var1152 /* : NativeString */;
val* var1153 /* : String */;
short int var1154 /* : Bool */;
val* var1156 /* : NativeArray[String] */;
static val* varonce1155;
static val* varonce1157;
val* var1158 /* : String */;
char* var1159 /* : NativeString */;
val* var1160 /* : String */;
val* var1161 /* : nullable Object */;
val* var1162 /* : String */;
val* var1163 /* : nullable Object */;
val* var1164 /* : String */;
val* var1165 /* : String */;
val* var1166 /* : RuntimeVariable */;
static val* varonce1167;
val* var1168 /* : String */;
char* var1169 /* : NativeString */;
val* var1170 /* : String */;
short int var1171 /* : Bool */;
val* var1173 /* : NativeArray[String] */;
static val* varonce1172;
static val* varonce1174;
val* var1175 /* : String */;
char* var1176 /* : NativeString */;
val* var1177 /* : String */;
val* var1178 /* : nullable Object */;
val* var1179 /* : String */;
val* var1180 /* : nullable Object */;
val* var1181 /* : String */;
val* var1182 /* : String */;
val* var1183 /* : RuntimeVariable */;
static val* varonce1184;
val* var1185 /* : String */;
char* var1186 /* : NativeString */;
val* var1187 /* : String */;
short int var1188 /* : Bool */;
val* var1190 /* : NativeArray[String] */;
static val* varonce1189;
static val* varonce1191;
val* var1192 /* : String */;
char* var1193 /* : NativeString */;
val* var1194 /* : String */;
val* var1195 /* : nullable Object */;
val* var1196 /* : String */;
val* var1197 /* : String */;
val* var1198 /* : RuntimeVariable */;
static val* varonce1199;
val* var1200 /* : String */;
char* var1201 /* : NativeString */;
val* var1202 /* : String */;
short int var1203 /* : Bool */;
val* var1204 /* : nullable Object */;
static val* varonce1205;
val* var1206 /* : String */;
char* var1207 /* : NativeString */;
val* var1208 /* : String */;
short int var1209 /* : Bool */;
val* var1211 /* : NativeArray[String] */;
static val* varonce1210;
static val* varonce1212;
val* var1213 /* : String */;
char* var1214 /* : NativeString */;
val* var1215 /* : String */;
val* var1216 /* : nullable Object */;
val* var1217 /* : String */;
val* var1218 /* : String */;
val* var1219 /* : RuntimeVariable */;
static val* varonce1220;
val* var1221 /* : String */;
char* var1222 /* : NativeString */;
val* var1223 /* : String */;
short int var1224 /* : Bool */;
val* var1226 /* : NativeArray[String] */;
static val* varonce1225;
static val* varonce1227;
val* var1228 /* : String */;
char* var1229 /* : NativeString */;
val* var1230 /* : String */;
val* var1231 /* : nullable Object */;
val* var1232 /* : String */;
val* var1233 /* : String */;
val* var1234 /* : RuntimeVariable */;
static val* varonce1235;
val* var1236 /* : String */;
char* var1237 /* : NativeString */;
val* var1238 /* : String */;
short int var1239 /* : Bool */;
val* var1241 /* : NativeArray[String] */;
static val* varonce1240;
static val* varonce1242;
val* var1243 /* : String */;
char* var1244 /* : NativeString */;
val* var1245 /* : String */;
val* var1246 /* : nullable Object */;
val* var1247 /* : String */;
val* var1248 /* : nullable Object */;
val* var1249 /* : String */;
val* var1250 /* : String */;
val* var1251 /* : RuntimeVariable */;
static val* varonce1252;
val* var1253 /* : String */;
char* var1254 /* : NativeString */;
val* var1255 /* : String */;
short int var1256 /* : Bool */;
val* var1258 /* : NativeArray[String] */;
static val* varonce1257;
static val* varonce1259;
val* var1260 /* : String */;
char* var1261 /* : NativeString */;
val* var1262 /* : String */;
val* var1263 /* : nullable Object */;
val* var1264 /* : String */;
val* var1265 /* : nullable Object */;
val* var1266 /* : String */;
val* var1267 /* : String */;
val* var1268 /* : RuntimeVariable */;
static val* varonce1269;
val* var1270 /* : String */;
char* var1271 /* : NativeString */;
val* var1272 /* : String */;
short int var1273 /* : Bool */;
val* var1274 /* : nullable Object */;
val* var1275 /* : nullable Object */;
val* var1276 /* : RuntimeVariable */;
static val* varonce1277;
val* var1278 /* : String */;
char* var1279 /* : NativeString */;
val* var1280 /* : String */;
short int var1281 /* : Bool */;
val* var1282 /* : nullable Object */;
val* var1283 /* : nullable Object */;
val* var1284 /* : RuntimeVariable */;
val* var_res1285 /* var res: RuntimeVariable */;
val* var1287 /* : NativeArray[String] */;
static val* varonce1286;
static val* varonce1288;
val* var1289 /* : String */;
char* var1290 /* : NativeString */;
val* var1291 /* : String */;
val* var1292 /* : String */;
val* var1293 /* : String */;
val* var1294 /* : RuntimeVariable */;
static val* varonce1295;
val* var1296 /* : String */;
char* var1297 /* : NativeString */;
val* var1298 /* : String */;
short int var1299 /* : Bool */;
val* var1301 /* : NativeArray[String] */;
static val* varonce1300;
static val* varonce1302;
val* var1303 /* : String */;
char* var1304 /* : NativeString */;
val* var1305 /* : String */;
val* var1306 /* : nullable Object */;
val* var1307 /* : String */;
val* var1308 /* : nullable Object */;
val* var1309 /* : String */;
val* var1310 /* : String */;
val* var1311 /* : RuntimeVariable */;
static val* varonce1312;
val* var1313 /* : String */;
char* var1314 /* : NativeString */;
val* var1315 /* : String */;
short int var1316 /* : Bool */;
val* var1318 /* : NativeArray[String] */;
static val* varonce1317;
static val* varonce1319;
val* var1320 /* : String */;
char* var1321 /* : NativeString */;
val* var1322 /* : String */;
val* var1323 /* : nullable Object */;
val* var1324 /* : String */;
val* var1325 /* : nullable Object */;
val* var1326 /* : String */;
val* var1327 /* : String */;
val* var1328 /* : RuntimeVariable */;
static val* varonce1329;
val* var1330 /* : String */;
char* var1331 /* : NativeString */;
val* var1332 /* : String */;
short int var1333 /* : Bool */;
val* var1335 /* : NativeArray[String] */;
static val* varonce1334;
static val* varonce1336;
val* var1337 /* : String */;
char* var1338 /* : NativeString */;
val* var1339 /* : String */;
val* var1340 /* : nullable Object */;
val* var1341 /* : String */;
val* var1342 /* : nullable Object */;
val* var1343 /* : String */;
val* var1344 /* : String */;
val* var1345 /* : RuntimeVariable */;
static val* varonce1346;
val* var1347 /* : String */;
char* var1348 /* : NativeString */;
val* var1349 /* : String */;
short int var1350 /* : Bool */;
val* var1352 /* : NativeArray[String] */;
static val* varonce1351;
static val* varonce1353;
val* var1354 /* : String */;
char* var1355 /* : NativeString */;
val* var1356 /* : String */;
val* var1357 /* : nullable Object */;
val* var1358 /* : String */;
val* var1359 /* : nullable Object */;
val* var1360 /* : String */;
val* var1361 /* : String */;
val* var1362 /* : RuntimeVariable */;
static val* varonce1363;
val* var1364 /* : String */;
char* var1365 /* : NativeString */;
val* var1366 /* : String */;
short int var1367 /* : Bool */;
val* var1369 /* : NativeArray[String] */;
static val* varonce1368;
static val* varonce1370;
val* var1371 /* : String */;
char* var1372 /* : NativeString */;
val* var1373 /* : String */;
val* var1374 /* : nullable Object */;
val* var1375 /* : String */;
val* var1376 /* : String */;
val* var1377 /* : RuntimeVariable */;
static val* varonce1378;
val* var1379 /* : String */;
char* var1380 /* : NativeString */;
val* var1381 /* : String */;
short int var1382 /* : Bool */;
val* var1384 /* : NativeArray[String] */;
static val* varonce1383;
static val* varonce1385;
val* var1386 /* : String */;
char* var1387 /* : NativeString */;
val* var1388 /* : String */;
val* var1389 /* : nullable Object */;
val* var1390 /* : String */;
val* var1391 /* : String */;
val* var1392 /* : RuntimeVariable */;
static val* varonce1393;
val* var1394 /* : String */;
char* var1395 /* : NativeString */;
val* var1396 /* : String */;
short int var1397 /* : Bool */;
val* var1399 /* : NativeArray[String] */;
static val* varonce1398;
static val* varonce1400;
val* var1401 /* : String */;
char* var1402 /* : NativeString */;
val* var1403 /* : String */;
val* var1404 /* : nullable Object */;
val* var1405 /* : String */;
val* var1406 /* : String */;
val* var1407 /* : RuntimeVariable */;
static val* varonce1408;
val* var1409 /* : String */;
char* var1410 /* : NativeString */;
val* var1411 /* : String */;
short int var1412 /* : Bool */;
val* var1414 /* : NativeArray[String] */;
static val* varonce1413;
static val* varonce1415;
val* var1416 /* : String */;
char* var1417 /* : NativeString */;
val* var1418 /* : String */;
val* var1419 /* : nullable Object */;
val* var1420 /* : String */;
val* var1421 /* : String */;
val* var1422 /* : RuntimeVariable */;
static val* varonce1423;
val* var1424 /* : String */;
char* var1425 /* : NativeString */;
val* var1426 /* : String */;
short int var1427 /* : Bool */;
val* var1429 /* : NativeArray[String] */;
static val* varonce1428;
static val* varonce1430;
val* var1431 /* : String */;
char* var1432 /* : NativeString */;
val* var1433 /* : String */;
val* var1434 /* : nullable Object */;
val* var1435 /* : String */;
val* var1436 /* : String */;
val* var1437 /* : RuntimeVariable */;
static val* varonce1438;
val* var1439 /* : String */;
char* var1440 /* : NativeString */;
val* var1441 /* : String */;
short int var1442 /* : Bool */;
val* var1444 /* : NativeArray[String] */;
static val* varonce1443;
static val* varonce1445;
val* var1446 /* : String */;
char* var1447 /* : NativeString */;
val* var1448 /* : String */;
val* var1449 /* : nullable Object */;
val* var1450 /* : String */;
val* var1451 /* : String */;
val* var1452 /* : RuntimeVariable */;
static val* varonce1453;
val* var1454 /* : String */;
char* var1455 /* : NativeString */;
val* var1456 /* : String */;
short int var1457 /* : Bool */;
val* var1459 /* : NativeArray[String] */;
static val* varonce1458;
static val* varonce1460;
val* var1461 /* : String */;
char* var1462 /* : NativeString */;
val* var1463 /* : String */;
val* var1464 /* : nullable Object */;
val* var1465 /* : String */;
val* var1466 /* : String */;
val* var1467 /* : RuntimeVariable */;
static val* varonce1468;
val* var1469 /* : String */;
char* var1470 /* : NativeString */;
val* var1471 /* : String */;
short int var1472 /* : Bool */;
static val* varonce1473;
val* var1474 /* : String */;
char* var1475 /* : NativeString */;
val* var1476 /* : String */;
short int var1477 /* : Bool */;
val* var1479 /* : NativeArray[String] */;
static val* varonce1478;
static val* varonce1480;
val* var1481 /* : String */;
char* var1482 /* : NativeString */;
val* var1483 /* : String */;
static val* varonce1484;
val* var1485 /* : String */;
char* var1486 /* : NativeString */;
val* var1487 /* : String */;
static val* varonce1488;
val* var1489 /* : String */;
char* var1490 /* : NativeString */;
val* var1491 /* : String */;
val* var1492 /* : nullable Object */;
val* var1493 /* : String */;
val* var1494 /* : nullable Object */;
val* var1495 /* : String */;
val* var1496 /* : String */;
val* var1497 /* : RuntimeVariable */;
static val* varonce1498;
val* var1499 /* : String */;
char* var1500 /* : NativeString */;
val* var1501 /* : String */;
short int var1502 /* : Bool */;
val* var1504 /* : NativeArray[String] */;
static val* varonce1503;
static val* varonce1505;
val* var1506 /* : String */;
char* var1507 /* : NativeString */;
val* var1508 /* : String */;
static val* varonce1509;
val* var1510 /* : String */;
char* var1511 /* : NativeString */;
val* var1512 /* : String */;
static val* varonce1513;
val* var1514 /* : String */;
char* var1515 /* : NativeString */;
val* var1516 /* : String */;
val* var1517 /* : nullable Object */;
val* var1518 /* : String */;
val* var1519 /* : nullable Object */;
val* var1520 /* : String */;
val* var1521 /* : nullable Object */;
val* var1522 /* : String */;
val* var1523 /* : String */;
static val* varonce1524;
val* var1525 /* : String */;
char* var1526 /* : NativeString */;
val* var1527 /* : String */;
short int var1528 /* : Bool */;
val* var1530 /* : NativeArray[String] */;
static val* varonce1529;
static val* varonce1531;
val* var1532 /* : String */;
char* var1533 /* : NativeString */;
val* var1534 /* : String */;
static val* varonce1535;
val* var1536 /* : String */;
char* var1537 /* : NativeString */;
val* var1538 /* : String */;
static val* varonce1539;
val* var1540 /* : String */;
char* var1541 /* : NativeString */;
val* var1542 /* : String */;
static val* varonce1543;
val* var1544 /* : String */;
char* var1545 /* : NativeString */;
val* var1546 /* : String */;
static val* varonce1547;
val* var1548 /* : String */;
char* var1549 /* : NativeString */;
val* var1550 /* : String */;
static val* varonce1551;
val* var1552 /* : String */;
char* var1553 /* : NativeString */;
val* var1554 /* : String */;
val* var1555 /* : nullable Object */;
val* var1556 /* : String */;
val* var1557 /* : nullable Object */;
val* var1558 /* : String */;
val* var1559 /* : nullable Object */;
val* var1560 /* : String */;
val* var1561 /* : nullable Object */;
val* var1562 /* : String */;
val* var1563 /* : nullable Object */;
val* var1564 /* : String */;
val* var1565 /* : String */;
static val* varonce1566;
val* var1567 /* : String */;
char* var1568 /* : NativeString */;
val* var1569 /* : String */;
short int var1570 /* : Bool */;
val* var1572 /* : NativeArray[String] */;
static val* varonce1571;
static val* varonce1573;
val* var1574 /* : String */;
char* var1575 /* : NativeString */;
val* var1576 /* : String */;
static val* varonce1577;
val* var1578 /* : String */;
char* var1579 /* : NativeString */;
val* var1580 /* : String */;
val* var1581 /* : nullable Object */;
val* var1582 /* : String */;
val* var1583 /* : String */;
val* var1584 /* : RuntimeVariable */;
static val* varonce1585;
val* var1586 /* : String */;
char* var1587 /* : NativeString */;
val* var1588 /* : String */;
short int var1589 /* : Bool */;
val* var1591 /* : NativeArray[String] */;
static val* varonce1590;
static val* varonce1592;
val* var1593 /* : String */;
char* var1594 /* : NativeString */;
val* var1595 /* : String */;
val* var1596 /* : nullable Object */;
val* var1597 /* : String */;
val* var1598 /* : nullable Object */;
val* var1599 /* : String */;
val* var1600 /* : String */;
val* var1601 /* : RuntimeVariable */;
static val* varonce1602;
val* var1603 /* : String */;
char* var1604 /* : NativeString */;
val* var1605 /* : String */;
short int var1606 /* : Bool */;
val* var1607 /* : nullable Object */;
val* var1608 /* : nullable Object */;
val* var1609 /* : RuntimeVariable */;
static val* varonce1610;
val* var1611 /* : String */;
char* var1612 /* : NativeString */;
val* var1613 /* : String */;
short int var1614 /* : Bool */;
val* var1615 /* : nullable Object */;
val* var1616 /* : nullable Object */;
val* var1617 /* : RuntimeVariable */;
val* var_res1618 /* var res: RuntimeVariable */;
val* var1620 /* : NativeArray[String] */;
static val* varonce1619;
static val* varonce1621;
val* var1622 /* : String */;
char* var1623 /* : NativeString */;
val* var1624 /* : String */;
val* var1625 /* : String */;
val* var1626 /* : String */;
val* var1627 /* : RuntimeVariable */;
static val* varonce1628;
val* var1629 /* : String */;
char* var1630 /* : NativeString */;
val* var1631 /* : String */;
short int var1632 /* : Bool */;
val* var1634 /* : NativeArray[String] */;
static val* varonce1633;
static val* varonce1635;
val* var1636 /* : String */;
char* var1637 /* : NativeString */;
val* var1638 /* : String */;
static val* varonce1639;
val* var1640 /* : String */;
char* var1641 /* : NativeString */;
val* var1642 /* : String */;
val* var1643 /* : nullable Object */;
val* var1644 /* : String */;
val* var1645 /* : String */;
val* var1646 /* : RuntimeVariable */;
static val* varonce1647;
val* var1648 /* : String */;
char* var1649 /* : NativeString */;
val* var1650 /* : String */;
short int var1651 /* : Bool */;
val* var1653 /* : NativeArray[String] */;
static val* varonce1652;
static val* varonce1654;
val* var1655 /* : String */;
char* var1656 /* : NativeString */;
val* var1657 /* : String */;
static val* varonce1658;
val* var1659 /* : String */;
char* var1660 /* : NativeString */;
val* var1661 /* : String */;
static val* varonce1662;
val* var1663 /* : String */;
char* var1664 /* : NativeString */;
val* var1665 /* : String */;
val* var1666 /* : nullable Object */;
val* var1667 /* : String */;
val* var1668 /* : nullable Object */;
val* var1669 /* : String */;
val* var1670 /* : String */;
val* var1671 /* : RuntimeVariable */;
static val* varonce1672;
val* var1673 /* : String */;
char* var1674 /* : NativeString */;
val* var1675 /* : String */;
short int var1676 /* : Bool */;
val* var1678 /* : NativeArray[String] */;
static val* varonce1677;
static val* varonce1679;
val* var1680 /* : String */;
char* var1681 /* : NativeString */;
val* var1682 /* : String */;
static val* varonce1683;
val* var1684 /* : String */;
char* var1685 /* : NativeString */;
val* var1686 /* : String */;
static val* varonce1687;
val* var1688 /* : String */;
char* var1689 /* : NativeString */;
val* var1690 /* : String */;
val* var1691 /* : nullable Object */;
val* var1692 /* : String */;
val* var1693 /* : nullable Object */;
val* var1694 /* : String */;
val* var1695 /* : String */;
val* var1696 /* : RuntimeVariable */;
static val* varonce1697;
val* var1698 /* : String */;
char* var1699 /* : NativeString */;
val* var1700 /* : String */;
short int var1701 /* : Bool */;
short int var1702 /* : Bool */;
static val* varonce1703;
val* var1704 /* : String */;
char* var1705 /* : NativeString */;
val* var1706 /* : String */;
short int var1707 /* : Bool */;
static val* varonce1708;
val* var1709 /* : String */;
char* var1710 /* : NativeString */;
val* var1711 /* : String */;
short int var1712 /* : Bool */;
val* var1714 /* : NativeArray[String] */;
static val* varonce1713;
static val* varonce1715;
val* var1716 /* : String */;
char* var1717 /* : NativeString */;
val* var1718 /* : String */;
static val* varonce1719;
val* var1720 /* : String */;
char* var1721 /* : NativeString */;
val* var1722 /* : String */;
val* var1723 /* : nullable Object */;
val* var1724 /* : String */;
val* var1725 /* : String */;
static val* varonce1726;
val* var1727 /* : String */;
char* var1728 /* : NativeString */;
val* var1729 /* : String */;
short int var1730 /* : Bool */;
val* var1732 /* : NativeArray[String] */;
static val* varonce1731;
static val* varonce1733;
val* var1734 /* : String */;
char* var1735 /* : NativeString */;
val* var1736 /* : String */;
val* var1737 /* : nullable Object */;
val* var1738 /* : String */;
val* var1739 /* : String */;
val* var1740 /* : RuntimeVariable */;
static val* varonce1741;
val* var1742 /* : String */;
char* var1743 /* : NativeString */;
val* var1744 /* : String */;
short int var1745 /* : Bool */;
val* var1747 /* : NativeArray[String] */;
static val* varonce1746;
static val* varonce1748;
val* var1749 /* : String */;
char* var1750 /* : NativeString */;
val* var1751 /* : String */;
val* var1752 /* : nullable Object */;
val* var1753 /* : String */;
val* var1754 /* : nullable Object */;
val* var1755 /* : String */;
val* var1756 /* : String */;
val* var1757 /* : RuntimeVariable */;
static val* varonce1758;
val* var1759 /* : String */;
char* var1760 /* : NativeString */;
val* var1761 /* : String */;
short int var1762 /* : Bool */;
val* var1764 /* : NativeArray[String] */;
static val* varonce1763;
static val* varonce1765;
val* var1766 /* : String */;
char* var1767 /* : NativeString */;
val* var1768 /* : String */;
val* var1769 /* : nullable Object */;
val* var1770 /* : String */;
val* var1771 /* : nullable Object */;
val* var1772 /* : String */;
val* var1773 /* : String */;
val* var1774 /* : RuntimeVariable */;
static val* varonce1775;
val* var1776 /* : String */;
char* var1777 /* : NativeString */;
val* var1778 /* : String */;
short int var1779 /* : Bool */;
val* var1781 /* : NativeArray[String] */;
static val* varonce1780;
static val* varonce1782;
val* var1783 /* : String */;
char* var1784 /* : NativeString */;
val* var1785 /* : String */;
val* var1786 /* : nullable Object */;
val* var1787 /* : String */;
val* var1788 /* : String */;
val* var1789 /* : RuntimeVariable */;
static val* varonce1790;
val* var1791 /* : String */;
char* var1792 /* : NativeString */;
val* var1793 /* : String */;
short int var1794 /* : Bool */;
val* var1795 /* : nullable Object */;
static val* varonce1796;
val* var1797 /* : String */;
char* var1798 /* : NativeString */;
val* var1799 /* : String */;
short int var1800 /* : Bool */;
val* var1802 /* : NativeArray[String] */;
static val* varonce1801;
static val* varonce1803;
val* var1804 /* : String */;
char* var1805 /* : NativeString */;
val* var1806 /* : String */;
val* var1807 /* : nullable Object */;
val* var1808 /* : String */;
val* var1809 /* : nullable Object */;
val* var1810 /* : String */;
val* var1811 /* : String */;
val* var1812 /* : RuntimeVariable */;
static val* varonce1813;
val* var1814 /* : String */;
char* var1815 /* : NativeString */;
val* var1816 /* : String */;
short int var1817 /* : Bool */;
val* var1819 /* : NativeArray[String] */;
static val* varonce1818;
static val* varonce1820;
val* var1821 /* : String */;
char* var1822 /* : NativeString */;
val* var1823 /* : String */;
val* var1824 /* : nullable Object */;
val* var1825 /* : String */;
val* var1826 /* : nullable Object */;
val* var1827 /* : String */;
val* var1828 /* : String */;
val* var1829 /* : RuntimeVariable */;
static val* varonce1830;
val* var1831 /* : String */;
char* var1832 /* : NativeString */;
val* var1833 /* : String */;
short int var1834 /* : Bool */;
val* var1836 /* : NativeArray[String] */;
static val* varonce1835;
static val* varonce1837;
val* var1838 /* : String */;
char* var1839 /* : NativeString */;
val* var1840 /* : String */;
val* var1841 /* : nullable Object */;
val* var1842 /* : String */;
val* var1843 /* : nullable Object */;
val* var1844 /* : String */;
val* var1845 /* : String */;
val* var1846 /* : RuntimeVariable */;
static val* varonce1847;
val* var1848 /* : String */;
char* var1849 /* : NativeString */;
val* var1850 /* : String */;
short int var1851 /* : Bool */;
val* var1853 /* : NativeArray[String] */;
static val* varonce1852;
static val* varonce1854;
val* var1855 /* : String */;
char* var1856 /* : NativeString */;
val* var1857 /* : String */;
val* var1858 /* : nullable Object */;
val* var1859 /* : String */;
val* var1860 /* : nullable Object */;
val* var1861 /* : String */;
val* var1862 /* : String */;
val* var1863 /* : RuntimeVariable */;
static val* varonce1864;
val* var1865 /* : String */;
char* var1866 /* : NativeString */;
val* var1867 /* : String */;
short int var1868 /* : Bool */;
val* var1870 /* : NativeArray[String] */;
static val* varonce1869;
static val* varonce1871;
val* var1872 /* : String */;
char* var1873 /* : NativeString */;
val* var1874 /* : String */;
val* var1875 /* : nullable Object */;
val* var1876 /* : String */;
val* var1877 /* : nullable Object */;
val* var1878 /* : String */;
val* var1879 /* : String */;
val* var1880 /* : RuntimeVariable */;
static val* varonce1881;
val* var1882 /* : String */;
char* var1883 /* : NativeString */;
val* var1884 /* : String */;
short int var1885 /* : Bool */;
val* var1886 /* : nullable Object */;
val* var1887 /* : nullable Object */;
val* var1888 /* : RuntimeVariable */;
static val* varonce1889;
val* var1890 /* : String */;
char* var1891 /* : NativeString */;
val* var1892 /* : String */;
short int var1893 /* : Bool */;
val* var1894 /* : nullable Object */;
val* var1895 /* : nullable Object */;
val* var1896 /* : RuntimeVariable */;
val* var_res1897 /* var res: RuntimeVariable */;
val* var1899 /* : NativeArray[String] */;
static val* varonce1898;
static val* varonce1900;
val* var1901 /* : String */;
char* var1902 /* : NativeString */;
val* var1903 /* : String */;
val* var1904 /* : String */;
val* var1905 /* : String */;
val* var1906 /* : RuntimeVariable */;
static val* varonce1907;
val* var1908 /* : String */;
char* var1909 /* : NativeString */;
val* var1910 /* : String */;
short int var1911 /* : Bool */;
val* var1913 /* : NativeArray[String] */;
static val* varonce1912;
static val* varonce1914;
val* var1915 /* : String */;
char* var1916 /* : NativeString */;
val* var1917 /* : String */;
val* var1918 /* : nullable Object */;
val* var1919 /* : String */;
val* var1920 /* : nullable Object */;
val* var1921 /* : String */;
val* var1922 /* : String */;
val* var1923 /* : RuntimeVariable */;
static val* varonce1924;
val* var1925 /* : String */;
char* var1926 /* : NativeString */;
val* var1927 /* : String */;
short int var1928 /* : Bool */;
val* var1930 /* : NativeArray[String] */;
static val* varonce1929;
static val* varonce1931;
val* var1932 /* : String */;
char* var1933 /* : NativeString */;
val* var1934 /* : String */;
val* var1935 /* : nullable Object */;
val* var1936 /* : String */;
val* var1937 /* : nullable Object */;
val* var1938 /* : String */;
val* var1939 /* : String */;
val* var1940 /* : RuntimeVariable */;
static val* varonce1941;
val* var1942 /* : String */;
char* var1943 /* : NativeString */;
val* var1944 /* : String */;
short int var1945 /* : Bool */;
val* var1947 /* : NativeArray[String] */;
static val* varonce1946;
static val* varonce1948;
val* var1949 /* : String */;
char* var1950 /* : NativeString */;
val* var1951 /* : String */;
val* var1952 /* : nullable Object */;
val* var1953 /* : String */;
val* var1954 /* : nullable Object */;
val* var1955 /* : String */;
val* var1956 /* : String */;
val* var1957 /* : RuntimeVariable */;
static val* varonce1958;
val* var1959 /* : String */;
char* var1960 /* : NativeString */;
val* var1961 /* : String */;
short int var1962 /* : Bool */;
val* var1964 /* : NativeArray[String] */;
static val* varonce1963;
static val* varonce1965;
val* var1966 /* : String */;
char* var1967 /* : NativeString */;
val* var1968 /* : String */;
val* var1969 /* : nullable Object */;
val* var1970 /* : String */;
val* var1971 /* : nullable Object */;
val* var1972 /* : String */;
val* var1973 /* : String */;
val* var1974 /* : RuntimeVariable */;
static val* varonce1975;
val* var1976 /* : String */;
char* var1977 /* : NativeString */;
val* var1978 /* : String */;
short int var1979 /* : Bool */;
val* var1981 /* : NativeArray[String] */;
static val* varonce1980;
static val* varonce1982;
val* var1983 /* : String */;
char* var1984 /* : NativeString */;
val* var1985 /* : String */;
val* var1986 /* : nullable Object */;
val* var1987 /* : String */;
val* var1988 /* : String */;
val* var1989 /* : RuntimeVariable */;
static val* varonce1990;
val* var1991 /* : String */;
char* var1992 /* : NativeString */;
val* var1993 /* : String */;
short int var1994 /* : Bool */;
val* var1996 /* : NativeArray[String] */;
static val* varonce1995;
static val* varonce1997;
val* var1998 /* : String */;
char* var1999 /* : NativeString */;
val* var2000 /* : String */;
val* var2001 /* : nullable Object */;
val* var2002 /* : String */;
val* var2003 /* : String */;
val* var2004 /* : RuntimeVariable */;
static val* varonce2005;
val* var2006 /* : String */;
char* var2007 /* : NativeString */;
val* var2008 /* : String */;
short int var2009 /* : Bool */;
val* var2011 /* : NativeArray[String] */;
static val* varonce2010;
static val* varonce2012;
val* var2013 /* : String */;
char* var2014 /* : NativeString */;
val* var2015 /* : String */;
val* var2016 /* : nullable Object */;
val* var2017 /* : String */;
val* var2018 /* : String */;
val* var2019 /* : RuntimeVariable */;
static val* varonce2020;
val* var2021 /* : String */;
char* var2022 /* : NativeString */;
val* var2023 /* : String */;
short int var2024 /* : Bool */;
val* var2026 /* : NativeArray[String] */;
static val* varonce2025;
static val* varonce2027;
val* var2028 /* : String */;
char* var2029 /* : NativeString */;
val* var2030 /* : String */;
val* var2031 /* : nullable Object */;
val* var2032 /* : String */;
val* var2033 /* : String */;
val* var2034 /* : RuntimeVariable */;
static val* varonce2035;
val* var2036 /* : String */;
char* var2037 /* : NativeString */;
val* var2038 /* : String */;
short int var2039 /* : Bool */;
val* var2041 /* : NativeArray[String] */;
static val* varonce2040;
static val* varonce2042;
val* var2043 /* : String */;
char* var2044 /* : NativeString */;
val* var2045 /* : String */;
val* var2046 /* : nullable Object */;
val* var2047 /* : String */;
val* var2048 /* : String */;
val* var2049 /* : RuntimeVariable */;
static val* varonce2050;
val* var2051 /* : String */;
char* var2052 /* : NativeString */;
val* var2053 /* : String */;
short int var2054 /* : Bool */;
val* var2056 /* : NativeArray[String] */;
static val* varonce2055;
static val* varonce2057;
val* var2058 /* : String */;
char* var2059 /* : NativeString */;
val* var2060 /* : String */;
val* var2061 /* : nullable Object */;
val* var2062 /* : String */;
val* var2063 /* : String */;
val* var2064 /* : RuntimeVariable */;
static val* varonce2065;
val* var2066 /* : String */;
char* var2067 /* : NativeString */;
val* var2068 /* : String */;
short int var2069 /* : Bool */;
val* var2071 /* : NativeArray[String] */;
static val* varonce2070;
static val* varonce2072;
val* var2073 /* : String */;
char* var2074 /* : NativeString */;
val* var2075 /* : String */;
val* var2076 /* : nullable Object */;
val* var2077 /* : String */;
val* var2078 /* : String */;
val* var2079 /* : RuntimeVariable */;
static val* varonce2080;
val* var2081 /* : String */;
char* var2082 /* : NativeString */;
val* var2083 /* : String */;
short int var2084 /* : Bool */;
val* var2086 /* : NativeArray[String] */;
static val* varonce2085;
static val* varonce2087;
val* var2088 /* : String */;
char* var2089 /* : NativeString */;
val* var2090 /* : String */;
val* var2091 /* : nullable Object */;
val* var2092 /* : String */;
val* var2093 /* : nullable Object */;
val* var2094 /* : String */;
val* var2095 /* : String */;
val* var2096 /* : RuntimeVariable */;
static val* varonce2097;
val* var2098 /* : String */;
char* var2099 /* : NativeString */;
val* var2100 /* : String */;
short int var2101 /* : Bool */;
val* var2103 /* : NativeArray[String] */;
static val* varonce2102;
static val* varonce2104;
val* var2105 /* : String */;
char* var2106 /* : NativeString */;
val* var2107 /* : String */;
val* var2108 /* : nullable Object */;
val* var2109 /* : String */;
val* var2110 /* : nullable Object */;
val* var2111 /* : String */;
val* var2112 /* : String */;
val* var2113 /* : RuntimeVariable */;
static val* varonce2114;
val* var2115 /* : String */;
char* var2116 /* : NativeString */;
val* var2117 /* : String */;
short int var2118 /* : Bool */;
val* var2120 /* : NativeArray[String] */;
static val* varonce2119;
static val* varonce2121;
val* var2122 /* : String */;
char* var2123 /* : NativeString */;
val* var2124 /* : String */;
val* var2125 /* : nullable Object */;
val* var2126 /* : String */;
val* var2127 /* : nullable Object */;
val* var2128 /* : String */;
val* var2129 /* : String */;
val* var2130 /* : RuntimeVariable */;
static val* varonce2131;
val* var2132 /* : String */;
char* var2133 /* : NativeString */;
val* var2134 /* : String */;
short int var2135 /* : Bool */;
val* var2137 /* : NativeArray[String] */;
static val* varonce2136;
static val* varonce2138;
val* var2139 /* : String */;
char* var2140 /* : NativeString */;
val* var2141 /* : String */;
val* var2142 /* : nullable Object */;
val* var2143 /* : String */;
val* var2144 /* : String */;
val* var2145 /* : RuntimeVariable */;
static val* varonce2146;
val* var2147 /* : String */;
char* var2148 /* : NativeString */;
val* var2149 /* : String */;
short int var2150 /* : Bool */;
static val* varonce2151;
val* var2152 /* : String */;
char* var2153 /* : NativeString */;
val* var2154 /* : String */;
short int var2155 /* : Bool */;
val* var2157 /* : NativeArray[String] */;
static val* varonce2156;
static val* varonce2158;
val* var2159 /* : String */;
char* var2160 /* : NativeString */;
val* var2161 /* : String */;
static val* varonce2162;
val* var2163 /* : String */;
char* var2164 /* : NativeString */;
val* var2165 /* : String */;
val* var2166 /* : nullable Object */;
val* var2167 /* : String */;
val* var2168 /* : String */;
static val* varonce2169;
val* var2170 /* : String */;
char* var2171 /* : NativeString */;
val* var2172 /* : String */;
short int var2173 /* : Bool */;
val* var2175 /* : NativeArray[String] */;
static val* varonce2174;
static val* varonce2176;
val* var2177 /* : String */;
char* var2178 /* : NativeString */;
val* var2179 /* : String */;
val* var2180 /* : nullable Object */;
val* var2181 /* : String */;
val* var2182 /* : String */;
val* var2183 /* : RuntimeVariable */;
static val* varonce2184;
val* var2185 /* : String */;
char* var2186 /* : NativeString */;
val* var2187 /* : String */;
short int var2188 /* : Bool */;
val* var2190 /* : NativeArray[String] */;
static val* varonce2189;
static val* varonce2191;
val* var2192 /* : String */;
char* var2193 /* : NativeString */;
val* var2194 /* : String */;
val* var2195 /* : nullable Object */;
val* var2196 /* : String */;
val* var2197 /* : nullable Object */;
val* var2198 /* : String */;
val* var2199 /* : String */;
val* var2200 /* : RuntimeVariable */;
static val* varonce2201;
val* var2202 /* : String */;
char* var2203 /* : NativeString */;
val* var2204 /* : String */;
short int var2205 /* : Bool */;
val* var2207 /* : NativeArray[String] */;
static val* varonce2206;
static val* varonce2208;
val* var2209 /* : String */;
char* var2210 /* : NativeString */;
val* var2211 /* : String */;
val* var2212 /* : nullable Object */;
val* var2213 /* : String */;
val* var2214 /* : nullable Object */;
val* var2215 /* : String */;
val* var2216 /* : String */;
val* var2217 /* : RuntimeVariable */;
static val* varonce2218;
val* var2219 /* : String */;
char* var2220 /* : NativeString */;
val* var2221 /* : String */;
short int var2222 /* : Bool */;
val* var2224 /* : NativeArray[String] */;
static val* varonce2223;
static val* varonce2225;
val* var2226 /* : String */;
char* var2227 /* : NativeString */;
val* var2228 /* : String */;
val* var2229 /* : nullable Object */;
val* var2230 /* : String */;
val* var2231 /* : String */;
val* var2232 /* : RuntimeVariable */;
static val* varonce2233;
val* var2234 /* : String */;
char* var2235 /* : NativeString */;
val* var2236 /* : String */;
short int var2237 /* : Bool */;
val* var2238 /* : nullable Object */;
static val* varonce2239;
val* var2240 /* : String */;
char* var2241 /* : NativeString */;
val* var2242 /* : String */;
short int var2243 /* : Bool */;
val* var2245 /* : NativeArray[String] */;
static val* varonce2244;
static val* varonce2246;
val* var2247 /* : String */;
char* var2248 /* : NativeString */;
val* var2249 /* : String */;
val* var2250 /* : nullable Object */;
val* var2251 /* : String */;
val* var2252 /* : nullable Object */;
val* var2253 /* : String */;
val* var2254 /* : String */;
val* var2255 /* : RuntimeVariable */;
static val* varonce2256;
val* var2257 /* : String */;
char* var2258 /* : NativeString */;
val* var2259 /* : String */;
short int var2260 /* : Bool */;
val* var2262 /* : NativeArray[String] */;
static val* varonce2261;
static val* varonce2263;
val* var2264 /* : String */;
char* var2265 /* : NativeString */;
val* var2266 /* : String */;
val* var2267 /* : nullable Object */;
val* var2268 /* : String */;
val* var2269 /* : nullable Object */;
val* var2270 /* : String */;
val* var2271 /* : String */;
val* var2272 /* : RuntimeVariable */;
static val* varonce2273;
val* var2274 /* : String */;
char* var2275 /* : NativeString */;
val* var2276 /* : String */;
short int var2277 /* : Bool */;
val* var2279 /* : NativeArray[String] */;
static val* varonce2278;
static val* varonce2280;
val* var2281 /* : String */;
char* var2282 /* : NativeString */;
val* var2283 /* : String */;
val* var2284 /* : nullable Object */;
val* var2285 /* : String */;
val* var2286 /* : nullable Object */;
val* var2287 /* : String */;
val* var2288 /* : String */;
val* var2289 /* : RuntimeVariable */;
static val* varonce2290;
val* var2291 /* : String */;
char* var2292 /* : NativeString */;
val* var2293 /* : String */;
short int var2294 /* : Bool */;
val* var2296 /* : NativeArray[String] */;
static val* varonce2295;
static val* varonce2297;
val* var2298 /* : String */;
char* var2299 /* : NativeString */;
val* var2300 /* : String */;
val* var2301 /* : nullable Object */;
val* var2302 /* : String */;
val* var2303 /* : nullable Object */;
val* var2304 /* : String */;
val* var2305 /* : String */;
val* var2306 /* : RuntimeVariable */;
static val* varonce2307;
val* var2308 /* : String */;
char* var2309 /* : NativeString */;
val* var2310 /* : String */;
short int var2311 /* : Bool */;
val* var2313 /* : NativeArray[String] */;
static val* varonce2312;
static val* varonce2314;
val* var2315 /* : String */;
char* var2316 /* : NativeString */;
val* var2317 /* : String */;
val* var2318 /* : nullable Object */;
val* var2319 /* : String */;
val* var2320 /* : nullable Object */;
val* var2321 /* : String */;
val* var2322 /* : String */;
val* var2323 /* : RuntimeVariable */;
static val* varonce2324;
val* var2325 /* : String */;
char* var2326 /* : NativeString */;
val* var2327 /* : String */;
short int var2328 /* : Bool */;
val* var2329 /* : nullable Object */;
val* var2330 /* : nullable Object */;
val* var2331 /* : RuntimeVariable */;
static val* varonce2332;
val* var2333 /* : String */;
char* var2334 /* : NativeString */;
val* var2335 /* : String */;
short int var2336 /* : Bool */;
val* var2337 /* : nullable Object */;
val* var2338 /* : nullable Object */;
val* var2339 /* : RuntimeVariable */;
val* var_res2340 /* var res: RuntimeVariable */;
val* var2342 /* : NativeArray[String] */;
static val* varonce2341;
static val* varonce2343;
val* var2344 /* : String */;
char* var2345 /* : NativeString */;
val* var2346 /* : String */;
val* var2347 /* : String */;
val* var2348 /* : String */;
val* var2349 /* : RuntimeVariable */;
static val* varonce2350;
val* var2351 /* : String */;
char* var2352 /* : NativeString */;
val* var2353 /* : String */;
short int var2354 /* : Bool */;
val* var2356 /* : NativeArray[String] */;
static val* varonce2355;
static val* varonce2357;
val* var2358 /* : String */;
char* var2359 /* : NativeString */;
val* var2360 /* : String */;
val* var2361 /* : nullable Object */;
val* var2362 /* : String */;
val* var2363 /* : nullable Object */;
val* var2364 /* : String */;
val* var2365 /* : String */;
val* var2366 /* : RuntimeVariable */;
static val* varonce2367;
val* var2368 /* : String */;
char* var2369 /* : NativeString */;
val* var2370 /* : String */;
short int var2371 /* : Bool */;
val* var2373 /* : NativeArray[String] */;
static val* varonce2372;
static val* varonce2374;
val* var2375 /* : String */;
char* var2376 /* : NativeString */;
val* var2377 /* : String */;
val* var2378 /* : nullable Object */;
val* var2379 /* : String */;
val* var2380 /* : nullable Object */;
val* var2381 /* : String */;
val* var2382 /* : String */;
val* var2383 /* : RuntimeVariable */;
static val* varonce2384;
val* var2385 /* : String */;
char* var2386 /* : NativeString */;
val* var2387 /* : String */;
short int var2388 /* : Bool */;
val* var2390 /* : NativeArray[String] */;
static val* varonce2389;
static val* varonce2391;
val* var2392 /* : String */;
char* var2393 /* : NativeString */;
val* var2394 /* : String */;
val* var2395 /* : nullable Object */;
val* var2396 /* : String */;
val* var2397 /* : nullable Object */;
val* var2398 /* : String */;
val* var2399 /* : String */;
val* var2400 /* : RuntimeVariable */;
static val* varonce2401;
val* var2402 /* : String */;
char* var2403 /* : NativeString */;
val* var2404 /* : String */;
short int var2405 /* : Bool */;
val* var2407 /* : NativeArray[String] */;
static val* varonce2406;
static val* varonce2408;
val* var2409 /* : String */;
char* var2410 /* : NativeString */;
val* var2411 /* : String */;
val* var2412 /* : nullable Object */;
val* var2413 /* : String */;
val* var2414 /* : nullable Object */;
val* var2415 /* : String */;
val* var2416 /* : String */;
val* var2417 /* : RuntimeVariable */;
static val* varonce2418;
val* var2419 /* : String */;
char* var2420 /* : NativeString */;
val* var2421 /* : String */;
short int var2422 /* : Bool */;
val* var2424 /* : NativeArray[String] */;
static val* varonce2423;
static val* varonce2425;
val* var2426 /* : String */;
char* var2427 /* : NativeString */;
val* var2428 /* : String */;
val* var2429 /* : nullable Object */;
val* var2430 /* : String */;
val* var2431 /* : String */;
val* var2432 /* : RuntimeVariable */;
static val* varonce2433;
val* var2434 /* : String */;
char* var2435 /* : NativeString */;
val* var2436 /* : String */;
short int var2437 /* : Bool */;
val* var2439 /* : NativeArray[String] */;
static val* varonce2438;
static val* varonce2440;
val* var2441 /* : String */;
char* var2442 /* : NativeString */;
val* var2443 /* : String */;
val* var2444 /* : nullable Object */;
val* var2445 /* : String */;
val* var2446 /* : String */;
val* var2447 /* : RuntimeVariable */;
static val* varonce2448;
val* var2449 /* : String */;
char* var2450 /* : NativeString */;
val* var2451 /* : String */;
short int var2452 /* : Bool */;
val* var2454 /* : NativeArray[String] */;
static val* varonce2453;
static val* varonce2455;
val* var2456 /* : String */;
char* var2457 /* : NativeString */;
val* var2458 /* : String */;
val* var2459 /* : nullable Object */;
val* var2460 /* : String */;
val* var2461 /* : String */;
val* var2462 /* : RuntimeVariable */;
static val* varonce2463;
val* var2464 /* : String */;
char* var2465 /* : NativeString */;
val* var2466 /* : String */;
short int var2467 /* : Bool */;
val* var2469 /* : NativeArray[String] */;
static val* varonce2468;
static val* varonce2470;
val* var2471 /* : String */;
char* var2472 /* : NativeString */;
val* var2473 /* : String */;
val* var2474 /* : nullable Object */;
val* var2475 /* : String */;
val* var2476 /* : String */;
val* var2477 /* : RuntimeVariable */;
static val* varonce2478;
val* var2479 /* : String */;
char* var2480 /* : NativeString */;
val* var2481 /* : String */;
short int var2482 /* : Bool */;
val* var2484 /* : NativeArray[String] */;
static val* varonce2483;
static val* varonce2485;
val* var2486 /* : String */;
char* var2487 /* : NativeString */;
val* var2488 /* : String */;
val* var2489 /* : nullable Object */;
val* var2490 /* : String */;
val* var2491 /* : String */;
val* var2492 /* : RuntimeVariable */;
static val* varonce2493;
val* var2494 /* : String */;
char* var2495 /* : NativeString */;
val* var2496 /* : String */;
short int var2497 /* : Bool */;
val* var2499 /* : NativeArray[String] */;
static val* varonce2498;
static val* varonce2500;
val* var2501 /* : String */;
char* var2502 /* : NativeString */;
val* var2503 /* : String */;
val* var2504 /* : nullable Object */;
val* var2505 /* : String */;
val* var2506 /* : String */;
val* var2507 /* : RuntimeVariable */;
static val* varonce2508;
val* var2509 /* : String */;
char* var2510 /* : NativeString */;
val* var2511 /* : String */;
short int var2512 /* : Bool */;
val* var2514 /* : NativeArray[String] */;
static val* varonce2513;
static val* varonce2515;
val* var2516 /* : String */;
char* var2517 /* : NativeString */;
val* var2518 /* : String */;
val* var2519 /* : nullable Object */;
val* var2520 /* : String */;
val* var2521 /* : String */;
val* var2522 /* : RuntimeVariable */;
static val* varonce2523;
val* var2524 /* : String */;
char* var2525 /* : NativeString */;
val* var2526 /* : String */;
short int var2527 /* : Bool */;
val* var2529 /* : NativeArray[String] */;
static val* varonce2528;
static val* varonce2530;
val* var2531 /* : String */;
char* var2532 /* : NativeString */;
val* var2533 /* : String */;
val* var2534 /* : nullable Object */;
val* var2535 /* : String */;
val* var2536 /* : nullable Object */;
val* var2537 /* : String */;
val* var2538 /* : String */;
val* var2539 /* : RuntimeVariable */;
static val* varonce2540;
val* var2541 /* : String */;
char* var2542 /* : NativeString */;
val* var2543 /* : String */;
short int var2544 /* : Bool */;
val* var2546 /* : NativeArray[String] */;
static val* varonce2545;
static val* varonce2547;
val* var2548 /* : String */;
char* var2549 /* : NativeString */;
val* var2550 /* : String */;
val* var2551 /* : nullable Object */;
val* var2552 /* : String */;
val* var2553 /* : nullable Object */;
val* var2554 /* : String */;
val* var2555 /* : String */;
val* var2556 /* : RuntimeVariable */;
static val* varonce2557;
val* var2558 /* : String */;
char* var2559 /* : NativeString */;
val* var2560 /* : String */;
short int var2561 /* : Bool */;
val* var2563 /* : NativeArray[String] */;
static val* varonce2562;
static val* varonce2564;
val* var2565 /* : String */;
char* var2566 /* : NativeString */;
val* var2567 /* : String */;
val* var2568 /* : nullable Object */;
val* var2569 /* : String */;
val* var2570 /* : nullable Object */;
val* var2571 /* : String */;
val* var2572 /* : String */;
val* var2573 /* : RuntimeVariable */;
static val* varonce2574;
val* var2575 /* : String */;
char* var2576 /* : NativeString */;
val* var2577 /* : String */;
short int var2578 /* : Bool */;
val* var2580 /* : NativeArray[String] */;
static val* varonce2579;
static val* varonce2581;
val* var2582 /* : String */;
char* var2583 /* : NativeString */;
val* var2584 /* : String */;
val* var2585 /* : nullable Object */;
val* var2586 /* : String */;
val* var2587 /* : String */;
val* var2588 /* : RuntimeVariable */;
static val* varonce2589;
val* var2590 /* : String */;
char* var2591 /* : NativeString */;
val* var2592 /* : String */;
short int var2593 /* : Bool */;
static val* varonce2594;
val* var2595 /* : String */;
char* var2596 /* : NativeString */;
val* var2597 /* : String */;
short int var2598 /* : Bool */;
val* var2600 /* : NativeArray[String] */;
static val* varonce2599;
static val* varonce2601;
val* var2602 /* : String */;
char* var2603 /* : NativeString */;
val* var2604 /* : String */;
static val* varonce2605;
val* var2606 /* : String */;
char* var2607 /* : NativeString */;
val* var2608 /* : String */;
val* var2609 /* : nullable Object */;
val* var2610 /* : String */;
val* var2611 /* : String */;
static val* varonce2612;
val* var2613 /* : String */;
char* var2614 /* : NativeString */;
val* var2615 /* : String */;
short int var2616 /* : Bool */;
val* var2618 /* : NativeArray[String] */;
static val* varonce2617;
static val* varonce2619;
val* var2620 /* : String */;
char* var2621 /* : NativeString */;
val* var2622 /* : String */;
val* var2623 /* : nullable Object */;
val* var2624 /* : String */;
val* var2625 /* : String */;
val* var2626 /* : RuntimeVariable */;
static val* varonce2627;
val* var2628 /* : String */;
char* var2629 /* : NativeString */;
val* var2630 /* : String */;
short int var2631 /* : Bool */;
val* var2633 /* : NativeArray[String] */;
static val* varonce2632;
static val* varonce2634;
val* var2635 /* : String */;
char* var2636 /* : NativeString */;
val* var2637 /* : String */;
val* var2638 /* : nullable Object */;
val* var2639 /* : String */;
val* var2640 /* : nullable Object */;
val* var2641 /* : String */;
val* var2642 /* : String */;
val* var2643 /* : RuntimeVariable */;
static val* varonce2644;
val* var2645 /* : String */;
char* var2646 /* : NativeString */;
val* var2647 /* : String */;
short int var2648 /* : Bool */;
val* var2650 /* : NativeArray[String] */;
static val* varonce2649;
static val* varonce2651;
val* var2652 /* : String */;
char* var2653 /* : NativeString */;
val* var2654 /* : String */;
val* var2655 /* : nullable Object */;
val* var2656 /* : String */;
val* var2657 /* : nullable Object */;
val* var2658 /* : String */;
val* var2659 /* : String */;
val* var2660 /* : RuntimeVariable */;
static val* varonce2661;
val* var2662 /* : String */;
char* var2663 /* : NativeString */;
val* var2664 /* : String */;
short int var2665 /* : Bool */;
val* var2667 /* : NativeArray[String] */;
static val* varonce2666;
static val* varonce2668;
val* var2669 /* : String */;
char* var2670 /* : NativeString */;
val* var2671 /* : String */;
val* var2672 /* : nullable Object */;
val* var2673 /* : String */;
val* var2674 /* : String */;
val* var2675 /* : RuntimeVariable */;
static val* varonce2676;
val* var2677 /* : String */;
char* var2678 /* : NativeString */;
val* var2679 /* : String */;
short int var2680 /* : Bool */;
val* var2681 /* : nullable Object */;
static val* varonce2682;
val* var2683 /* : String */;
char* var2684 /* : NativeString */;
val* var2685 /* : String */;
short int var2686 /* : Bool */;
val* var2688 /* : NativeArray[String] */;
static val* varonce2687;
static val* varonce2689;
val* var2690 /* : String */;
char* var2691 /* : NativeString */;
val* var2692 /* : String */;
val* var2693 /* : nullable Object */;
val* var2694 /* : String */;
val* var2695 /* : nullable Object */;
val* var2696 /* : String */;
val* var2697 /* : String */;
val* var2698 /* : RuntimeVariable */;
static val* varonce2699;
val* var2700 /* : String */;
char* var2701 /* : NativeString */;
val* var2702 /* : String */;
short int var2703 /* : Bool */;
val* var2705 /* : NativeArray[String] */;
static val* varonce2704;
static val* varonce2706;
val* var2707 /* : String */;
char* var2708 /* : NativeString */;
val* var2709 /* : String */;
val* var2710 /* : nullable Object */;
val* var2711 /* : String */;
val* var2712 /* : nullable Object */;
val* var2713 /* : String */;
val* var2714 /* : String */;
val* var2715 /* : RuntimeVariable */;
static val* varonce2716;
val* var2717 /* : String */;
char* var2718 /* : NativeString */;
val* var2719 /* : String */;
short int var2720 /* : Bool */;
val* var2722 /* : NativeArray[String] */;
static val* varonce2721;
static val* varonce2723;
val* var2724 /* : String */;
char* var2725 /* : NativeString */;
val* var2726 /* : String */;
val* var2727 /* : nullable Object */;
val* var2728 /* : String */;
val* var2729 /* : nullable Object */;
val* var2730 /* : String */;
val* var2731 /* : String */;
val* var2732 /* : RuntimeVariable */;
static val* varonce2733;
val* var2734 /* : String */;
char* var2735 /* : NativeString */;
val* var2736 /* : String */;
short int var2737 /* : Bool */;
val* var2739 /* : NativeArray[String] */;
static val* varonce2738;
static val* varonce2740;
val* var2741 /* : String */;
char* var2742 /* : NativeString */;
val* var2743 /* : String */;
val* var2744 /* : nullable Object */;
val* var2745 /* : String */;
val* var2746 /* : nullable Object */;
val* var2747 /* : String */;
val* var2748 /* : String */;
val* var2749 /* : RuntimeVariable */;
static val* varonce2750;
val* var2751 /* : String */;
char* var2752 /* : NativeString */;
val* var2753 /* : String */;
short int var2754 /* : Bool */;
val* var2756 /* : NativeArray[String] */;
static val* varonce2755;
static val* varonce2757;
val* var2758 /* : String */;
char* var2759 /* : NativeString */;
val* var2760 /* : String */;
val* var2761 /* : nullable Object */;
val* var2762 /* : String */;
val* var2763 /* : nullable Object */;
val* var2764 /* : String */;
val* var2765 /* : String */;
val* var2766 /* : RuntimeVariable */;
static val* varonce2767;
val* var2768 /* : String */;
char* var2769 /* : NativeString */;
val* var2770 /* : String */;
short int var2771 /* : Bool */;
val* var2772 /* : nullable Object */;
val* var2773 /* : nullable Object */;
val* var2774 /* : RuntimeVariable */;
static val* varonce2775;
val* var2776 /* : String */;
char* var2777 /* : NativeString */;
val* var2778 /* : String */;
short int var2779 /* : Bool */;
val* var2780 /* : nullable Object */;
val* var2781 /* : nullable Object */;
val* var2782 /* : RuntimeVariable */;
val* var_res2783 /* var res: RuntimeVariable */;
val* var2785 /* : NativeArray[String] */;
static val* varonce2784;
static val* varonce2786;
val* var2787 /* : String */;
char* var2788 /* : NativeString */;
val* var2789 /* : String */;
val* var2790 /* : String */;
val* var2791 /* : String */;
val* var2792 /* : RuntimeVariable */;
static val* varonce2793;
val* var2794 /* : String */;
char* var2795 /* : NativeString */;
val* var2796 /* : String */;
short int var2797 /* : Bool */;
val* var2799 /* : NativeArray[String] */;
static val* varonce2798;
static val* varonce2800;
val* var2801 /* : String */;
char* var2802 /* : NativeString */;
val* var2803 /* : String */;
val* var2804 /* : nullable Object */;
val* var2805 /* : String */;
val* var2806 /* : nullable Object */;
val* var2807 /* : String */;
val* var2808 /* : String */;
val* var2809 /* : RuntimeVariable */;
static val* varonce2810;
val* var2811 /* : String */;
char* var2812 /* : NativeString */;
val* var2813 /* : String */;
short int var2814 /* : Bool */;
val* var2816 /* : NativeArray[String] */;
static val* varonce2815;
static val* varonce2817;
val* var2818 /* : String */;
char* var2819 /* : NativeString */;
val* var2820 /* : String */;
val* var2821 /* : nullable Object */;
val* var2822 /* : String */;
val* var2823 /* : nullable Object */;
val* var2824 /* : String */;
val* var2825 /* : String */;
val* var2826 /* : RuntimeVariable */;
static val* varonce2827;
val* var2828 /* : String */;
char* var2829 /* : NativeString */;
val* var2830 /* : String */;
short int var2831 /* : Bool */;
val* var2833 /* : NativeArray[String] */;
static val* varonce2832;
static val* varonce2834;
val* var2835 /* : String */;
char* var2836 /* : NativeString */;
val* var2837 /* : String */;
val* var2838 /* : nullable Object */;
val* var2839 /* : String */;
val* var2840 /* : nullable Object */;
val* var2841 /* : String */;
val* var2842 /* : String */;
val* var2843 /* : RuntimeVariable */;
static val* varonce2844;
val* var2845 /* : String */;
char* var2846 /* : NativeString */;
val* var2847 /* : String */;
short int var2848 /* : Bool */;
val* var2850 /* : NativeArray[String] */;
static val* varonce2849;
static val* varonce2851;
val* var2852 /* : String */;
char* var2853 /* : NativeString */;
val* var2854 /* : String */;
val* var2855 /* : nullable Object */;
val* var2856 /* : String */;
val* var2857 /* : nullable Object */;
val* var2858 /* : String */;
val* var2859 /* : String */;
val* var2860 /* : RuntimeVariable */;
static val* varonce2861;
val* var2862 /* : String */;
char* var2863 /* : NativeString */;
val* var2864 /* : String */;
short int var2865 /* : Bool */;
val* var2867 /* : NativeArray[String] */;
static val* varonce2866;
static val* varonce2868;
val* var2869 /* : String */;
char* var2870 /* : NativeString */;
val* var2871 /* : String */;
val* var2872 /* : nullable Object */;
val* var2873 /* : String */;
val* var2874 /* : String */;
val* var2875 /* : RuntimeVariable */;
static val* varonce2876;
val* var2877 /* : String */;
char* var2878 /* : NativeString */;
val* var2879 /* : String */;
short int var2880 /* : Bool */;
val* var2882 /* : NativeArray[String] */;
static val* varonce2881;
static val* varonce2883;
val* var2884 /* : String */;
char* var2885 /* : NativeString */;
val* var2886 /* : String */;
val* var2887 /* : nullable Object */;
val* var2888 /* : String */;
val* var2889 /* : String */;
val* var2890 /* : RuntimeVariable */;
static val* varonce2891;
val* var2892 /* : String */;
char* var2893 /* : NativeString */;
val* var2894 /* : String */;
short int var2895 /* : Bool */;
val* var2897 /* : NativeArray[String] */;
static val* varonce2896;
static val* varonce2898;
val* var2899 /* : String */;
char* var2900 /* : NativeString */;
val* var2901 /* : String */;
val* var2902 /* : nullable Object */;
val* var2903 /* : String */;
val* var2904 /* : String */;
val* var2905 /* : RuntimeVariable */;
static val* varonce2906;
val* var2907 /* : String */;
char* var2908 /* : NativeString */;
val* var2909 /* : String */;
short int var2910 /* : Bool */;
val* var2912 /* : NativeArray[String] */;
static val* varonce2911;
static val* varonce2913;
val* var2914 /* : String */;
char* var2915 /* : NativeString */;
val* var2916 /* : String */;
val* var2917 /* : nullable Object */;
val* var2918 /* : String */;
val* var2919 /* : String */;
val* var2920 /* : RuntimeVariable */;
static val* varonce2921;
val* var2922 /* : String */;
char* var2923 /* : NativeString */;
val* var2924 /* : String */;
short int var2925 /* : Bool */;
val* var2927 /* : NativeArray[String] */;
static val* varonce2926;
static val* varonce2928;
val* var2929 /* : String */;
char* var2930 /* : NativeString */;
val* var2931 /* : String */;
val* var2932 /* : nullable Object */;
val* var2933 /* : String */;
val* var2934 /* : String */;
val* var2935 /* : RuntimeVariable */;
static val* varonce2936;
val* var2937 /* : String */;
char* var2938 /* : NativeString */;
val* var2939 /* : String */;
short int var2940 /* : Bool */;
val* var2942 /* : NativeArray[String] */;
static val* varonce2941;
static val* varonce2943;
val* var2944 /* : String */;
char* var2945 /* : NativeString */;
val* var2946 /* : String */;
val* var2947 /* : nullable Object */;
val* var2948 /* : String */;
val* var2949 /* : String */;
val* var2950 /* : RuntimeVariable */;
static val* varonce2951;
val* var2952 /* : String */;
char* var2953 /* : NativeString */;
val* var2954 /* : String */;
short int var2955 /* : Bool */;
val* var2957 /* : NativeArray[String] */;
static val* varonce2956;
static val* varonce2958;
val* var2959 /* : String */;
char* var2960 /* : NativeString */;
val* var2961 /* : String */;
val* var2962 /* : nullable Object */;
val* var2963 /* : String */;
val* var2964 /* : String */;
val* var2965 /* : RuntimeVariable */;
static val* varonce2966;
val* var2967 /* : String */;
char* var2968 /* : NativeString */;
val* var2969 /* : String */;
short int var2970 /* : Bool */;
val* var2972 /* : NativeArray[String] */;
static val* varonce2971;
static val* varonce2973;
val* var2974 /* : String */;
char* var2975 /* : NativeString */;
val* var2976 /* : String */;
val* var2977 /* : nullable Object */;
val* var2978 /* : String */;
val* var2979 /* : nullable Object */;
val* var2980 /* : String */;
val* var2981 /* : String */;
val* var2982 /* : RuntimeVariable */;
static val* varonce2983;
val* var2984 /* : String */;
char* var2985 /* : NativeString */;
val* var2986 /* : String */;
short int var2987 /* : Bool */;
val* var2989 /* : NativeArray[String] */;
static val* varonce2988;
static val* varonce2990;
val* var2991 /* : String */;
char* var2992 /* : NativeString */;
val* var2993 /* : String */;
val* var2994 /* : nullable Object */;
val* var2995 /* : String */;
val* var2996 /* : nullable Object */;
val* var2997 /* : String */;
val* var2998 /* : String */;
val* var2999 /* : RuntimeVariable */;
static val* varonce3000;
val* var3001 /* : String */;
char* var3002 /* : NativeString */;
val* var3003 /* : String */;
short int var3004 /* : Bool */;
val* var3006 /* : NativeArray[String] */;
static val* varonce3005;
static val* varonce3007;
val* var3008 /* : String */;
char* var3009 /* : NativeString */;
val* var3010 /* : String */;
val* var3011 /* : nullable Object */;
val* var3012 /* : String */;
val* var3013 /* : nullable Object */;
val* var3014 /* : String */;
val* var3015 /* : String */;
val* var3016 /* : RuntimeVariable */;
static val* varonce3017;
val* var3018 /* : String */;
char* var3019 /* : NativeString */;
val* var3020 /* : String */;
short int var3021 /* : Bool */;
val* var3023 /* : NativeArray[String] */;
static val* varonce3022;
static val* varonce3024;
val* var3025 /* : String */;
char* var3026 /* : NativeString */;
val* var3027 /* : String */;
val* var3028 /* : nullable Object */;
val* var3029 /* : String */;
val* var3030 /* : String */;
val* var3031 /* : RuntimeVariable */;
static val* varonce3032;
val* var3033 /* : String */;
char* var3034 /* : NativeString */;
val* var3035 /* : String */;
short int var3036 /* : Bool */;
static val* varonce3037;
val* var3038 /* : String */;
char* var3039 /* : NativeString */;
val* var3040 /* : String */;
short int var3041 /* : Bool */;
val* var3043 /* : NativeArray[String] */;
static val* varonce3042;
static val* varonce3044;
val* var3045 /* : String */;
char* var3046 /* : NativeString */;
val* var3047 /* : String */;
static val* varonce3048;
val* var3049 /* : String */;
char* var3050 /* : NativeString */;
val* var3051 /* : String */;
val* var3052 /* : nullable Object */;
val* var3053 /* : String */;
val* var3054 /* : String */;
static val* varonce3055;
val* var3056 /* : String */;
char* var3057 /* : NativeString */;
val* var3058 /* : String */;
short int var3059 /* : Bool */;
val* var3061 /* : NativeArray[String] */;
static val* varonce3060;
static val* varonce3062;
val* var3063 /* : String */;
char* var3064 /* : NativeString */;
val* var3065 /* : String */;
val* var3066 /* : nullable Object */;
val* var3067 /* : String */;
val* var3068 /* : String */;
val* var3069 /* : RuntimeVariable */;
static val* varonce3070;
val* var3071 /* : String */;
char* var3072 /* : NativeString */;
val* var3073 /* : String */;
short int var3074 /* : Bool */;
val* var3076 /* : NativeArray[String] */;
static val* varonce3075;
static val* varonce3077;
val* var3078 /* : String */;
char* var3079 /* : NativeString */;
val* var3080 /* : String */;
val* var3081 /* : nullable Object */;
val* var3082 /* : String */;
val* var3083 /* : nullable Object */;
val* var3084 /* : String */;
val* var3085 /* : String */;
val* var3086 /* : RuntimeVariable */;
static val* varonce3087;
val* var3088 /* : String */;
char* var3089 /* : NativeString */;
val* var3090 /* : String */;
short int var3091 /* : Bool */;
val* var3093 /* : NativeArray[String] */;
static val* varonce3092;
static val* varonce3094;
val* var3095 /* : String */;
char* var3096 /* : NativeString */;
val* var3097 /* : String */;
val* var3098 /* : nullable Object */;
val* var3099 /* : String */;
val* var3100 /* : nullable Object */;
val* var3101 /* : String */;
val* var3102 /* : String */;
val* var3103 /* : RuntimeVariable */;
static val* varonce3104;
val* var3105 /* : String */;
char* var3106 /* : NativeString */;
val* var3107 /* : String */;
short int var3108 /* : Bool */;
val* var3110 /* : NativeArray[String] */;
static val* varonce3109;
static val* varonce3111;
val* var3112 /* : String */;
char* var3113 /* : NativeString */;
val* var3114 /* : String */;
val* var3115 /* : nullable Object */;
val* var3116 /* : String */;
val* var3117 /* : String */;
val* var3118 /* : RuntimeVariable */;
static val* varonce3119;
val* var3120 /* : String */;
char* var3121 /* : NativeString */;
val* var3122 /* : String */;
short int var3123 /* : Bool */;
val* var3124 /* : nullable Object */;
static val* varonce3125;
val* var3126 /* : String */;
char* var3127 /* : NativeString */;
val* var3128 /* : String */;
short int var3129 /* : Bool */;
val* var3131 /* : NativeArray[String] */;
static val* varonce3130;
static val* varonce3132;
val* var3133 /* : String */;
char* var3134 /* : NativeString */;
val* var3135 /* : String */;
val* var3136 /* : nullable Object */;
val* var3137 /* : String */;
val* var3138 /* : nullable Object */;
val* var3139 /* : String */;
val* var3140 /* : String */;
val* var3141 /* : RuntimeVariable */;
static val* varonce3142;
val* var3143 /* : String */;
char* var3144 /* : NativeString */;
val* var3145 /* : String */;
short int var3146 /* : Bool */;
val* var3148 /* : NativeArray[String] */;
static val* varonce3147;
static val* varonce3149;
val* var3150 /* : String */;
char* var3151 /* : NativeString */;
val* var3152 /* : String */;
val* var3153 /* : nullable Object */;
val* var3154 /* : String */;
val* var3155 /* : nullable Object */;
val* var3156 /* : String */;
val* var3157 /* : String */;
val* var3158 /* : RuntimeVariable */;
static val* varonce3159;
val* var3160 /* : String */;
char* var3161 /* : NativeString */;
val* var3162 /* : String */;
short int var3163 /* : Bool */;
val* var3165 /* : NativeArray[String] */;
static val* varonce3164;
static val* varonce3166;
val* var3167 /* : String */;
char* var3168 /* : NativeString */;
val* var3169 /* : String */;
val* var3170 /* : nullable Object */;
val* var3171 /* : String */;
val* var3172 /* : nullable Object */;
val* var3173 /* : String */;
val* var3174 /* : String */;
val* var3175 /* : RuntimeVariable */;
static val* varonce3176;
val* var3177 /* : String */;
char* var3178 /* : NativeString */;
val* var3179 /* : String */;
short int var3180 /* : Bool */;
val* var3182 /* : NativeArray[String] */;
static val* varonce3181;
static val* varonce3183;
val* var3184 /* : String */;
char* var3185 /* : NativeString */;
val* var3186 /* : String */;
val* var3187 /* : nullable Object */;
val* var3188 /* : String */;
val* var3189 /* : nullable Object */;
val* var3190 /* : String */;
val* var3191 /* : String */;
val* var3192 /* : RuntimeVariable */;
static val* varonce3193;
val* var3194 /* : String */;
char* var3195 /* : NativeString */;
val* var3196 /* : String */;
short int var3197 /* : Bool */;
val* var3199 /* : NativeArray[String] */;
static val* varonce3198;
static val* varonce3200;
val* var3201 /* : String */;
char* var3202 /* : NativeString */;
val* var3203 /* : String */;
val* var3204 /* : nullable Object */;
val* var3205 /* : String */;
val* var3206 /* : nullable Object */;
val* var3207 /* : String */;
val* var3208 /* : String */;
val* var3209 /* : RuntimeVariable */;
static val* varonce3210;
val* var3211 /* : String */;
char* var3212 /* : NativeString */;
val* var3213 /* : String */;
short int var3214 /* : Bool */;
val* var3215 /* : nullable Object */;
val* var3216 /* : nullable Object */;
val* var3217 /* : RuntimeVariable */;
static val* varonce3218;
val* var3219 /* : String */;
char* var3220 /* : NativeString */;
val* var3221 /* : String */;
short int var3222 /* : Bool */;
val* var3223 /* : nullable Object */;
val* var3224 /* : nullable Object */;
val* var3225 /* : RuntimeVariable */;
val* var_res3226 /* var res: RuntimeVariable */;
val* var3228 /* : NativeArray[String] */;
static val* varonce3227;
static val* varonce3229;
val* var3230 /* : String */;
char* var3231 /* : NativeString */;
val* var3232 /* : String */;
val* var3233 /* : String */;
val* var3234 /* : String */;
val* var3235 /* : RuntimeVariable */;
static val* varonce3236;
val* var3237 /* : String */;
char* var3238 /* : NativeString */;
val* var3239 /* : String */;
short int var3240 /* : Bool */;
val* var3242 /* : NativeArray[String] */;
static val* varonce3241;
static val* varonce3243;
val* var3244 /* : String */;
char* var3245 /* : NativeString */;
val* var3246 /* : String */;
val* var3247 /* : nullable Object */;
val* var3248 /* : String */;
val* var3249 /* : nullable Object */;
val* var3250 /* : String */;
val* var3251 /* : String */;
val* var3252 /* : RuntimeVariable */;
static val* varonce3253;
val* var3254 /* : String */;
char* var3255 /* : NativeString */;
val* var3256 /* : String */;
short int var3257 /* : Bool */;
val* var3259 /* : NativeArray[String] */;
static val* varonce3258;
static val* varonce3260;
val* var3261 /* : String */;
char* var3262 /* : NativeString */;
val* var3263 /* : String */;
val* var3264 /* : nullable Object */;
val* var3265 /* : String */;
val* var3266 /* : nullable Object */;
val* var3267 /* : String */;
val* var3268 /* : String */;
val* var3269 /* : RuntimeVariable */;
static val* varonce3270;
val* var3271 /* : String */;
char* var3272 /* : NativeString */;
val* var3273 /* : String */;
short int var3274 /* : Bool */;
val* var3276 /* : NativeArray[String] */;
static val* varonce3275;
static val* varonce3277;
val* var3278 /* : String */;
char* var3279 /* : NativeString */;
val* var3280 /* : String */;
val* var3281 /* : nullable Object */;
val* var3282 /* : String */;
val* var3283 /* : nullable Object */;
val* var3284 /* : String */;
val* var3285 /* : String */;
val* var3286 /* : RuntimeVariable */;
static val* varonce3287;
val* var3288 /* : String */;
char* var3289 /* : NativeString */;
val* var3290 /* : String */;
short int var3291 /* : Bool */;
val* var3293 /* : NativeArray[String] */;
static val* varonce3292;
static val* varonce3294;
val* var3295 /* : String */;
char* var3296 /* : NativeString */;
val* var3297 /* : String */;
val* var3298 /* : nullable Object */;
val* var3299 /* : String */;
val* var3300 /* : nullable Object */;
val* var3301 /* : String */;
val* var3302 /* : String */;
val* var3303 /* : RuntimeVariable */;
static val* varonce3304;
val* var3305 /* : String */;
char* var3306 /* : NativeString */;
val* var3307 /* : String */;
short int var3308 /* : Bool */;
val* var3310 /* : NativeArray[String] */;
static val* varonce3309;
static val* varonce3311;
val* var3312 /* : String */;
char* var3313 /* : NativeString */;
val* var3314 /* : String */;
val* var3315 /* : nullable Object */;
val* var3316 /* : String */;
val* var3317 /* : String */;
val* var3318 /* : RuntimeVariable */;
static val* varonce3319;
val* var3320 /* : String */;
char* var3321 /* : NativeString */;
val* var3322 /* : String */;
short int var3323 /* : Bool */;
val* var3325 /* : NativeArray[String] */;
static val* varonce3324;
static val* varonce3326;
val* var3327 /* : String */;
char* var3328 /* : NativeString */;
val* var3329 /* : String */;
val* var3330 /* : nullable Object */;
val* var3331 /* : String */;
val* var3332 /* : String */;
val* var3333 /* : RuntimeVariable */;
static val* varonce3334;
val* var3335 /* : String */;
char* var3336 /* : NativeString */;
val* var3337 /* : String */;
short int var3338 /* : Bool */;
val* var3340 /* : NativeArray[String] */;
static val* varonce3339;
static val* varonce3341;
val* var3342 /* : String */;
char* var3343 /* : NativeString */;
val* var3344 /* : String */;
val* var3345 /* : nullable Object */;
val* var3346 /* : String */;
val* var3347 /* : String */;
val* var3348 /* : RuntimeVariable */;
static val* varonce3349;
val* var3350 /* : String */;
char* var3351 /* : NativeString */;
val* var3352 /* : String */;
short int var3353 /* : Bool */;
val* var3355 /* : NativeArray[String] */;
static val* varonce3354;
static val* varonce3356;
val* var3357 /* : String */;
char* var3358 /* : NativeString */;
val* var3359 /* : String */;
val* var3360 /* : nullable Object */;
val* var3361 /* : String */;
val* var3362 /* : String */;
val* var3363 /* : RuntimeVariable */;
static val* varonce3364;
val* var3365 /* : String */;
char* var3366 /* : NativeString */;
val* var3367 /* : String */;
short int var3368 /* : Bool */;
val* var3370 /* : NativeArray[String] */;
static val* varonce3369;
static val* varonce3371;
val* var3372 /* : String */;
char* var3373 /* : NativeString */;
val* var3374 /* : String */;
val* var3375 /* : nullable Object */;
val* var3376 /* : String */;
val* var3377 /* : String */;
val* var3378 /* : RuntimeVariable */;
static val* varonce3379;
val* var3380 /* : String */;
char* var3381 /* : NativeString */;
val* var3382 /* : String */;
short int var3383 /* : Bool */;
val* var3385 /* : NativeArray[String] */;
static val* varonce3384;
static val* varonce3386;
val* var3387 /* : String */;
char* var3388 /* : NativeString */;
val* var3389 /* : String */;
val* var3390 /* : nullable Object */;
val* var3391 /* : String */;
val* var3392 /* : String */;
val* var3393 /* : RuntimeVariable */;
static val* varonce3394;
val* var3395 /* : String */;
char* var3396 /* : NativeString */;
val* var3397 /* : String */;
short int var3398 /* : Bool */;
val* var3400 /* : NativeArray[String] */;
static val* varonce3399;
static val* varonce3401;
val* var3402 /* : String */;
char* var3403 /* : NativeString */;
val* var3404 /* : String */;
val* var3405 /* : nullable Object */;
val* var3406 /* : String */;
val* var3407 /* : String */;
val* var3408 /* : RuntimeVariable */;
static val* varonce3409;
val* var3410 /* : String */;
char* var3411 /* : NativeString */;
val* var3412 /* : String */;
short int var3413 /* : Bool */;
val* var3415 /* : NativeArray[String] */;
static val* varonce3414;
static val* varonce3416;
val* var3417 /* : String */;
char* var3418 /* : NativeString */;
val* var3419 /* : String */;
val* var3420 /* : nullable Object */;
val* var3421 /* : String */;
val* var3422 /* : nullable Object */;
val* var3423 /* : String */;
val* var3424 /* : String */;
val* var3425 /* : RuntimeVariable */;
static val* varonce3426;
val* var3427 /* : String */;
char* var3428 /* : NativeString */;
val* var3429 /* : String */;
short int var3430 /* : Bool */;
val* var3432 /* : NativeArray[String] */;
static val* varonce3431;
static val* varonce3433;
val* var3434 /* : String */;
char* var3435 /* : NativeString */;
val* var3436 /* : String */;
val* var3437 /* : nullable Object */;
val* var3438 /* : String */;
val* var3439 /* : nullable Object */;
val* var3440 /* : String */;
val* var3441 /* : String */;
val* var3442 /* : RuntimeVariable */;
static val* varonce3443;
val* var3444 /* : String */;
char* var3445 /* : NativeString */;
val* var3446 /* : String */;
short int var3447 /* : Bool */;
val* var3449 /* : NativeArray[String] */;
static val* varonce3448;
static val* varonce3450;
val* var3451 /* : String */;
char* var3452 /* : NativeString */;
val* var3453 /* : String */;
val* var3454 /* : nullable Object */;
val* var3455 /* : String */;
val* var3456 /* : nullable Object */;
val* var3457 /* : String */;
val* var3458 /* : String */;
val* var3459 /* : RuntimeVariable */;
static val* varonce3460;
val* var3461 /* : String */;
char* var3462 /* : NativeString */;
val* var3463 /* : String */;
short int var3464 /* : Bool */;
val* var3466 /* : NativeArray[String] */;
static val* varonce3465;
static val* varonce3467;
val* var3468 /* : String */;
char* var3469 /* : NativeString */;
val* var3470 /* : String */;
val* var3471 /* : nullable Object */;
val* var3472 /* : String */;
val* var3473 /* : String */;
val* var3474 /* : RuntimeVariable */;
static val* varonce3475;
val* var3476 /* : String */;
char* var3477 /* : NativeString */;
val* var3478 /* : String */;
short int var3479 /* : Bool */;
static val* varonce3480;
val* var3481 /* : String */;
char* var3482 /* : NativeString */;
val* var3483 /* : String */;
short int var3484 /* : Bool */;
val* var3486 /* : NativeArray[String] */;
static val* varonce3485;
static val* varonce3487;
val* var3488 /* : String */;
char* var3489 /* : NativeString */;
val* var3490 /* : String */;
static val* varonce3491;
val* var3492 /* : String */;
char* var3493 /* : NativeString */;
val* var3494 /* : String */;
val* var3495 /* : nullable Object */;
val* var3496 /* : String */;
val* var3497 /* : String */;
static val* varonce3498;
val* var3499 /* : String */;
char* var3500 /* : NativeString */;
val* var3501 /* : String */;
short int var3502 /* : Bool */;
val* var3504 /* : NativeArray[String] */;
static val* varonce3503;
static val* varonce3505;
val* var3506 /* : String */;
char* var3507 /* : NativeString */;
val* var3508 /* : String */;
val* var3509 /* : nullable Object */;
val* var3510 /* : String */;
val* var3511 /* : String */;
val* var3512 /* : RuntimeVariable */;
static val* varonce3513;
val* var3514 /* : String */;
char* var3515 /* : NativeString */;
val* var3516 /* : String */;
short int var3517 /* : Bool */;
val* var3519 /* : NativeArray[String] */;
static val* varonce3518;
static val* varonce3520;
val* var3521 /* : String */;
char* var3522 /* : NativeString */;
val* var3523 /* : String */;
val* var3524 /* : nullable Object */;
val* var3525 /* : String */;
val* var3526 /* : nullable Object */;
val* var3527 /* : String */;
val* var3528 /* : String */;
val* var3529 /* : RuntimeVariable */;
static val* varonce3530;
val* var3531 /* : String */;
char* var3532 /* : NativeString */;
val* var3533 /* : String */;
short int var3534 /* : Bool */;
val* var3536 /* : NativeArray[String] */;
static val* varonce3535;
static val* varonce3537;
val* var3538 /* : String */;
char* var3539 /* : NativeString */;
val* var3540 /* : String */;
val* var3541 /* : nullable Object */;
val* var3542 /* : String */;
val* var3543 /* : nullable Object */;
val* var3544 /* : String */;
val* var3545 /* : String */;
val* var3546 /* : RuntimeVariable */;
static val* varonce3547;
val* var3548 /* : String */;
char* var3549 /* : NativeString */;
val* var3550 /* : String */;
short int var3551 /* : Bool */;
val* var3553 /* : NativeArray[String] */;
static val* varonce3552;
static val* varonce3554;
val* var3555 /* : String */;
char* var3556 /* : NativeString */;
val* var3557 /* : String */;
val* var3558 /* : nullable Object */;
val* var3559 /* : String */;
val* var3560 /* : String */;
val* var3561 /* : RuntimeVariable */;
static val* varonce3562;
val* var3563 /* : String */;
char* var3564 /* : NativeString */;
val* var3565 /* : String */;
short int var3566 /* : Bool */;
val* var3567 /* : nullable Object */;
static val* varonce3568;
val* var3569 /* : String */;
char* var3570 /* : NativeString */;
val* var3571 /* : String */;
short int var3572 /* : Bool */;
val* var3574 /* : NativeArray[String] */;
static val* varonce3573;
static val* varonce3575;
val* var3576 /* : String */;
char* var3577 /* : NativeString */;
val* var3578 /* : String */;
val* var3579 /* : nullable Object */;
val* var3580 /* : String */;
val* var3581 /* : nullable Object */;
val* var3582 /* : String */;
val* var3583 /* : String */;
val* var3584 /* : RuntimeVariable */;
static val* varonce3585;
val* var3586 /* : String */;
char* var3587 /* : NativeString */;
val* var3588 /* : String */;
short int var3589 /* : Bool */;
val* var3591 /* : NativeArray[String] */;
static val* varonce3590;
static val* varonce3592;
val* var3593 /* : String */;
char* var3594 /* : NativeString */;
val* var3595 /* : String */;
val* var3596 /* : nullable Object */;
val* var3597 /* : String */;
val* var3598 /* : nullable Object */;
val* var3599 /* : String */;
val* var3600 /* : String */;
val* var3601 /* : RuntimeVariable */;
static val* varonce3602;
val* var3603 /* : String */;
char* var3604 /* : NativeString */;
val* var3605 /* : String */;
short int var3606 /* : Bool */;
val* var3608 /* : NativeArray[String] */;
static val* varonce3607;
static val* varonce3609;
val* var3610 /* : String */;
char* var3611 /* : NativeString */;
val* var3612 /* : String */;
val* var3613 /* : nullable Object */;
val* var3614 /* : String */;
val* var3615 /* : nullable Object */;
val* var3616 /* : String */;
val* var3617 /* : String */;
val* var3618 /* : RuntimeVariable */;
static val* varonce3619;
val* var3620 /* : String */;
char* var3621 /* : NativeString */;
val* var3622 /* : String */;
short int var3623 /* : Bool */;
val* var3625 /* : NativeArray[String] */;
static val* varonce3624;
static val* varonce3626;
val* var3627 /* : String */;
char* var3628 /* : NativeString */;
val* var3629 /* : String */;
val* var3630 /* : nullable Object */;
val* var3631 /* : String */;
val* var3632 /* : nullable Object */;
val* var3633 /* : String */;
val* var3634 /* : String */;
val* var3635 /* : RuntimeVariable */;
static val* varonce3636;
val* var3637 /* : String */;
char* var3638 /* : NativeString */;
val* var3639 /* : String */;
short int var3640 /* : Bool */;
val* var3642 /* : NativeArray[String] */;
static val* varonce3641;
static val* varonce3643;
val* var3644 /* : String */;
char* var3645 /* : NativeString */;
val* var3646 /* : String */;
val* var3647 /* : nullable Object */;
val* var3648 /* : String */;
val* var3649 /* : nullable Object */;
val* var3650 /* : String */;
val* var3651 /* : String */;
val* var3652 /* : RuntimeVariable */;
static val* varonce3653;
val* var3654 /* : String */;
char* var3655 /* : NativeString */;
val* var3656 /* : String */;
short int var3657 /* : Bool */;
val* var3658 /* : nullable Object */;
val* var3659 /* : nullable Object */;
val* var3660 /* : RuntimeVariable */;
static val* varonce3661;
val* var3662 /* : String */;
char* var3663 /* : NativeString */;
val* var3664 /* : String */;
short int var3665 /* : Bool */;
val* var3666 /* : nullable Object */;
val* var3667 /* : nullable Object */;
val* var3668 /* : RuntimeVariable */;
val* var_res3669 /* var res: RuntimeVariable */;
val* var3671 /* : NativeArray[String] */;
static val* varonce3670;
static val* varonce3672;
val* var3673 /* : String */;
char* var3674 /* : NativeString */;
val* var3675 /* : String */;
val* var3676 /* : String */;
val* var3677 /* : String */;
val* var3678 /* : RuntimeVariable */;
static val* varonce3679;
val* var3680 /* : String */;
char* var3681 /* : NativeString */;
val* var3682 /* : String */;
short int var3683 /* : Bool */;
val* var3685 /* : NativeArray[String] */;
static val* varonce3684;
static val* varonce3686;
val* var3687 /* : String */;
char* var3688 /* : NativeString */;
val* var3689 /* : String */;
val* var3690 /* : nullable Object */;
val* var3691 /* : String */;
val* var3692 /* : nullable Object */;
val* var3693 /* : String */;
val* var3694 /* : String */;
val* var3695 /* : RuntimeVariable */;
static val* varonce3696;
val* var3697 /* : String */;
char* var3698 /* : NativeString */;
val* var3699 /* : String */;
short int var3700 /* : Bool */;
val* var3702 /* : NativeArray[String] */;
static val* varonce3701;
static val* varonce3703;
val* var3704 /* : String */;
char* var3705 /* : NativeString */;
val* var3706 /* : String */;
val* var3707 /* : nullable Object */;
val* var3708 /* : String */;
val* var3709 /* : nullable Object */;
val* var3710 /* : String */;
val* var3711 /* : String */;
val* var3712 /* : RuntimeVariable */;
static val* varonce3713;
val* var3714 /* : String */;
char* var3715 /* : NativeString */;
val* var3716 /* : String */;
short int var3717 /* : Bool */;
val* var3719 /* : NativeArray[String] */;
static val* varonce3718;
static val* varonce3720;
val* var3721 /* : String */;
char* var3722 /* : NativeString */;
val* var3723 /* : String */;
val* var3724 /* : nullable Object */;
val* var3725 /* : String */;
val* var3726 /* : nullable Object */;
val* var3727 /* : String */;
val* var3728 /* : String */;
val* var3729 /* : RuntimeVariable */;
static val* varonce3730;
val* var3731 /* : String */;
char* var3732 /* : NativeString */;
val* var3733 /* : String */;
short int var3734 /* : Bool */;
val* var3736 /* : NativeArray[String] */;
static val* varonce3735;
static val* varonce3737;
val* var3738 /* : String */;
char* var3739 /* : NativeString */;
val* var3740 /* : String */;
val* var3741 /* : nullable Object */;
val* var3742 /* : String */;
val* var3743 /* : nullable Object */;
val* var3744 /* : String */;
val* var3745 /* : String */;
val* var3746 /* : RuntimeVariable */;
static val* varonce3747;
val* var3748 /* : String */;
char* var3749 /* : NativeString */;
val* var3750 /* : String */;
short int var3751 /* : Bool */;
val* var3753 /* : NativeArray[String] */;
static val* varonce3752;
static val* varonce3754;
val* var3755 /* : String */;
char* var3756 /* : NativeString */;
val* var3757 /* : String */;
val* var3758 /* : nullable Object */;
val* var3759 /* : String */;
val* var3760 /* : String */;
val* var3761 /* : RuntimeVariable */;
static val* varonce3762;
val* var3763 /* : String */;
char* var3764 /* : NativeString */;
val* var3765 /* : String */;
short int var3766 /* : Bool */;
val* var3768 /* : NativeArray[String] */;
static val* varonce3767;
static val* varonce3769;
val* var3770 /* : String */;
char* var3771 /* : NativeString */;
val* var3772 /* : String */;
val* var3773 /* : nullable Object */;
val* var3774 /* : String */;
val* var3775 /* : String */;
val* var3776 /* : RuntimeVariable */;
static val* varonce3777;
val* var3778 /* : String */;
char* var3779 /* : NativeString */;
val* var3780 /* : String */;
short int var3781 /* : Bool */;
val* var3783 /* : NativeArray[String] */;
static val* varonce3782;
static val* varonce3784;
val* var3785 /* : String */;
char* var3786 /* : NativeString */;
val* var3787 /* : String */;
val* var3788 /* : nullable Object */;
val* var3789 /* : String */;
val* var3790 /* : String */;
val* var3791 /* : RuntimeVariable */;
static val* varonce3792;
val* var3793 /* : String */;
char* var3794 /* : NativeString */;
val* var3795 /* : String */;
short int var3796 /* : Bool */;
val* var3798 /* : NativeArray[String] */;
static val* varonce3797;
static val* varonce3799;
val* var3800 /* : String */;
char* var3801 /* : NativeString */;
val* var3802 /* : String */;
val* var3803 /* : nullable Object */;
val* var3804 /* : String */;
val* var3805 /* : String */;
val* var3806 /* : RuntimeVariable */;
static val* varonce3807;
val* var3808 /* : String */;
char* var3809 /* : NativeString */;
val* var3810 /* : String */;
short int var3811 /* : Bool */;
val* var3813 /* : NativeArray[String] */;
static val* varonce3812;
static val* varonce3814;
val* var3815 /* : String */;
char* var3816 /* : NativeString */;
val* var3817 /* : String */;
val* var3818 /* : nullable Object */;
val* var3819 /* : String */;
val* var3820 /* : String */;
val* var3821 /* : RuntimeVariable */;
static val* varonce3822;
val* var3823 /* : String */;
char* var3824 /* : NativeString */;
val* var3825 /* : String */;
short int var3826 /* : Bool */;
val* var3828 /* : NativeArray[String] */;
static val* varonce3827;
static val* varonce3829;
val* var3830 /* : String */;
char* var3831 /* : NativeString */;
val* var3832 /* : String */;
val* var3833 /* : nullable Object */;
val* var3834 /* : String */;
val* var3835 /* : String */;
val* var3836 /* : RuntimeVariable */;
static val* varonce3837;
val* var3838 /* : String */;
char* var3839 /* : NativeString */;
val* var3840 /* : String */;
short int var3841 /* : Bool */;
val* var3843 /* : NativeArray[String] */;
static val* varonce3842;
static val* varonce3844;
val* var3845 /* : String */;
char* var3846 /* : NativeString */;
val* var3847 /* : String */;
val* var3848 /* : nullable Object */;
val* var3849 /* : String */;
val* var3850 /* : String */;
val* var3851 /* : RuntimeVariable */;
static val* varonce3852;
val* var3853 /* : String */;
char* var3854 /* : NativeString */;
val* var3855 /* : String */;
short int var3856 /* : Bool */;
val* var3858 /* : NativeArray[String] */;
static val* varonce3857;
static val* varonce3859;
val* var3860 /* : String */;
char* var3861 /* : NativeString */;
val* var3862 /* : String */;
val* var3863 /* : nullable Object */;
val* var3864 /* : String */;
val* var3865 /* : nullable Object */;
val* var3866 /* : String */;
val* var3867 /* : String */;
val* var3868 /* : RuntimeVariable */;
static val* varonce3869;
val* var3870 /* : String */;
char* var3871 /* : NativeString */;
val* var3872 /* : String */;
short int var3873 /* : Bool */;
val* var3875 /* : NativeArray[String] */;
static val* varonce3874;
static val* varonce3876;
val* var3877 /* : String */;
char* var3878 /* : NativeString */;
val* var3879 /* : String */;
val* var3880 /* : nullable Object */;
val* var3881 /* : String */;
val* var3882 /* : nullable Object */;
val* var3883 /* : String */;
val* var3884 /* : String */;
val* var3885 /* : RuntimeVariable */;
static val* varonce3886;
val* var3887 /* : String */;
char* var3888 /* : NativeString */;
val* var3889 /* : String */;
short int var3890 /* : Bool */;
val* var3892 /* : NativeArray[String] */;
static val* varonce3891;
static val* varonce3893;
val* var3894 /* : String */;
char* var3895 /* : NativeString */;
val* var3896 /* : String */;
val* var3897 /* : nullable Object */;
val* var3898 /* : String */;
val* var3899 /* : nullable Object */;
val* var3900 /* : String */;
val* var3901 /* : String */;
val* var3902 /* : RuntimeVariable */;
static val* varonce3903;
val* var3904 /* : String */;
char* var3905 /* : NativeString */;
val* var3906 /* : String */;
short int var3907 /* : Bool */;
val* var3909 /* : NativeArray[String] */;
static val* varonce3908;
static val* varonce3910;
val* var3911 /* : String */;
char* var3912 /* : NativeString */;
val* var3913 /* : String */;
val* var3914 /* : nullable Object */;
val* var3915 /* : String */;
val* var3916 /* : String */;
val* var3917 /* : RuntimeVariable */;
static val* varonce3918;
val* var3919 /* : String */;
char* var3920 /* : NativeString */;
val* var3921 /* : String */;
short int var3922 /* : Bool */;
val* var3924 /* : NativeArray[String] */;
static val* varonce3923;
static val* varonce3925;
val* var3926 /* : String */;
char* var3927 /* : NativeString */;
val* var3928 /* : String */;
static val* varonce3929;
val* var3930 /* : String */;
char* var3931 /* : NativeString */;
val* var3932 /* : String */;
val* var3933 /* : nullable Object */;
val* var3934 /* : String */;
val* var3935 /* : String */;
static val* varonce3936;
val* var3937 /* : String */;
char* var3938 /* : NativeString */;
val* var3939 /* : String */;
short int var3940 /* : Bool */;
static val* varonce3941;
val* var3942 /* : String */;
char* var3943 /* : NativeString */;
val* var3944 /* : String */;
val* var3945 /* : RuntimeVariable */;
static val* varonce3946;
val* var3947 /* : String */;
char* var3948 /* : NativeString */;
val* var3949 /* : String */;
short int var3950 /* : Bool */;
val* var3952 /* : NativeArray[String] */;
static val* varonce3951;
static val* varonce3953;
val* var3954 /* : String */;
char* var3955 /* : NativeString */;
val* var3956 /* : String */;
static val* varonce3957;
val* var3958 /* : String */;
char* var3959 /* : NativeString */;
val* var3960 /* : String */;
val* var3961 /* : nullable Object */;
val* var3962 /* : String */;
val* var3963 /* : String */;
val* var3964 /* : RuntimeVariable */;
static val* varonce3965;
val* var3966 /* : String */;
char* var3967 /* : NativeString */;
val* var3968 /* : String */;
short int var3969 /* : Bool */;
static val* varonce3970;
val* var3971 /* : String */;
char* var3972 /* : NativeString */;
val* var3973 /* : String */;
short int var3974 /* : Bool */;
val* var3976 /* : NativeArray[String] */;
static val* varonce3975;
static val* varonce3977;
val* var3978 /* : String */;
char* var3979 /* : NativeString */;
val* var3980 /* : String */;
val* var3981 /* : nullable Object */;
val* var3982 /* : String */;
val* var3983 /* : String */;
val* var3984 /* : RuntimeVariable */;
static val* varonce3985;
val* var3986 /* : String */;
char* var3987 /* : NativeString */;
val* var3988 /* : String */;
short int var3989 /* : Bool */;
val* var3990 /* : nullable Object */;
val* var3991 /* : nullable Object */;
val* var3992 /* : RuntimeVariable */;
static val* varonce3993;
val* var3994 /* : String */;
char* var3995 /* : NativeString */;
val* var3996 /* : String */;
short int var3997 /* : Bool */;
val* var3998 /* : nullable Object */;
val* var3999 /* : nullable Object */;
val* var4000 /* : RuntimeVariable */;
static val* varonce4001;
val* var4002 /* : String */;
char* var4003 /* : NativeString */;
val* var4004 /* : String */;
short int var4005 /* : Bool */;
val* var4006 /* : nullable Object */;
val* var4007 /* : String */;
val* var_nat /* var nat: String */;
val* var4009 /* : NativeArray[String] */;
static val* varonce4008;
static val* varonce4010;
val* var4011 /* : String */;
char* var4012 /* : NativeString */;
val* var4013 /* : String */;
static val* varonce4014;
val* var4015 /* : String */;
char* var4016 /* : NativeString */;
val* var4017 /* : String */;
val* var4018 /* : String */;
static val* varonce4019;
val* var4020 /* : String */;
char* var4021 /* : NativeString */;
val* var4022 /* : String */;
short int var4023 /* : Bool */;
val* var4024 /* : nullable Object */;
val* var4025 /* : String */;
val* var_nat4026 /* var nat: String */;
val* var4028 /* : NativeArray[String] */;
static val* varonce4027;
static val* varonce4029;
val* var4030 /* : String */;
char* var4031 /* : NativeString */;
val* var4032 /* : String */;
val* var4033 /* : String */;
val* var4034 /* : RuntimeVariable */;
static val* varonce4035;
val* var4036 /* : String */;
char* var4037 /* : NativeString */;
val* var4038 /* : String */;
short int var4039 /* : Bool */;
static val* varonce4040;
val* var4041 /* : String */;
char* var4042 /* : NativeString */;
val* var4043 /* : String */;
static val* varonce4044;
val* var4045 /* : String */;
char* var4046 /* : NativeString */;
val* var4047 /* : String */;
short int var4048 /* : Bool */;
static val* varonce4049;
val* var4050 /* : String */;
char* var4051 /* : NativeString */;
val* var4052 /* : String */;
val* var4053 /* : RuntimeVariable */;
static val* varonce4054;
val* var4055 /* : String */;
char* var4056 /* : NativeString */;
val* var4057 /* : String */;
short int var4058 /* : Bool */;
val* var4060 /* : NativeArray[String] */;
static val* varonce4059;
static val* varonce4061;
val* var4062 /* : String */;
char* var4063 /* : NativeString */;
val* var4064 /* : String */;
static val* varonce4065;
val* var4066 /* : String */;
char* var4067 /* : NativeString */;
val* var4068 /* : String */;
val* var4069 /* : nullable Object */;
val* var4070 /* : String */;
val* var4071 /* : String */;
val* var4072 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var3 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var1) on <var1:MProperty(MMethod)> */
var6 = var1->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var1:MProperty(MMethod)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_pname = var4;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var9 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#name (var10) on <var10:MClass> */
var15 = var10->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var10:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_cname = var13;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var18 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2190);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var16) on <var16:nullable MSignature> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1795);
fatal_exit(1);
}
var21 = var16->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var16:nullable MSignature> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_ret = var19;
if (var_ret == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
var27 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var28 = nitc___nitc__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var27);
}
var_ret = var28;
} else {
}
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "==";
var32 = core__flat___NativeString___to_s_full(var31, 2l, 2l);
var30 = var32;
varonce = var30;
}
{
{ /* Inline kernel#Object#!= (var_pname,var30) on <var_pname:String> */
var_other = var30;
{
var35 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var_other); /* == on <var_pname:String>*/
}
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_ = var33;
if (var33){
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "!=";
var40 = core__flat___NativeString___to_s_full(var39, 2l, 2l);
var38 = var40;
varonce37 = var38;
}
{
{ /* Inline kernel#Object#!= (var_pname,var38) on <var_pname:String> */
var_other = var38;
{
var43 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var_other); /* == on <var_pname:String>*/
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var29 = var41;
} else {
var29 = var_;
}
if (var29){
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "Int";
var48 = core__flat___NativeString___to_s_full(var47, 3l, 3l);
var46 = var48;
varonce45 = var46;
}
{
var49 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var46); /* == on <var_cname:String>*/
}
if (var49){
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "output";
var53 = core__flat___NativeString___to_s_full(var52, 6l, 6l);
var51 = var53;
varonce50 = var51;
}
{
var54 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var51); /* == on <var_pname:String>*/
}
if (var54){
if (unlikely(varonce55==NULL)) {
var56 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "printf(\"%ld\\n\", ";
var60 = core__flat___NativeString___to_s_full(var59, 16l, 16l);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var56)->values[0]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = ");";
var64 = core__flat___NativeString___to_s_full(var63, 2l, 2l);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var56)->values[2]=var62;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
var65 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var66 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__Object__to_s]))(var65); /* to_s on <var65:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var56)->values[1]=var66;
{
var67 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "object_id";
var71 = core__flat___NativeString___to_s_full(var70, 9l, 9l);
var69 = var71;
varonce68 = var69;
}
{
var72 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var69); /* == on <var_pname:String>*/
}
if (var72){
{
var73 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "+";
var77 = core__flat___NativeString___to_s_full(var76, 1l, 1l);
var75 = var77;
varonce74 = var75;
}
{
var78 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var75); /* == on <var_pname:String>*/
}
if (var78){
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " + ";
var84 = core__flat___NativeString___to_s_full(var83, 3l, 3l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[1]=var82;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
var85 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var86 = ((val*(*)(val* self))(var85->class->vft[COLOR_core__abstract_text__Object__to_s]))(var85); /* to_s on <var85:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var80)->values[0]=var86;
{
var87 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var88 = ((val*(*)(val* self))(var87->class->vft[COLOR_core__abstract_text__Object__to_s]))(var87); /* to_s on <var87:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var80)->values[2]=var88;
{
var89 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2206);
fatal_exit(1);
}
{
var90 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var89, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "-";
var94 = core__flat___NativeString___to_s_full(var93, 1l, 1l);
var92 = var94;
varonce91 = var92;
}
{
var95 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var92); /* == on <var_pname:String>*/
}
if (var95){
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = " - ";
var101 = core__flat___NativeString___to_s_full(var100, 3l, 3l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[1]=var99;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var102 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var103 = ((val*(*)(val* self))(var102->class->vft[COLOR_core__abstract_text__Object__to_s]))(var102); /* to_s on <var102:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var97)->values[0]=var103;
{
var104 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var105 = ((val*(*)(val* self))(var104->class->vft[COLOR_core__abstract_text__Object__to_s]))(var104); /* to_s on <var104:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var97)->values[2]=var105;
{
var106 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2209);
fatal_exit(1);
}
{
var107 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var106, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var107); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "unary -";
var111 = core__flat___NativeString___to_s_full(var110, 7l, 7l);
var109 = var111;
varonce108 = var109;
}
{
var112 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var109); /* == on <var_pname:String>*/
}
if (var112){
if (unlikely(varonce113==NULL)) {
var114 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "-";
var118 = core__flat___NativeString___to_s_full(var117, 1l, 1l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var114)->values[0]=var116;
} else {
var114 = varonce113;
varonce113 = NULL;
}
{
var119 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var120 = ((val*(*)(val* self))(var119->class->vft[COLOR_core__abstract_text__Object__to_s]))(var119); /* to_s on <var119:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var114)->values[1]=var120;
{
var121 = ((val*(*)(val* self))(var114->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var114); /* native_to_s on <var114:NativeArray[String]>*/
}
varonce113 = var114;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2212);
fatal_exit(1);
}
{
var122 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var121, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var122); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "unary +";
var126 = core__flat___NativeString___to_s_full(var125, 7l, 7l);
var124 = var126;
varonce123 = var124;
}
{
var127 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var124); /* == on <var_pname:String>*/
}
if (var127){
{
var128 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var128); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "*";
var132 = core__flat___NativeString___to_s_full(var131, 1l, 1l);
var130 = var132;
varonce129 = var130;
}
{
var133 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var130); /* == on <var_pname:String>*/
}
if (var133){
if (unlikely(varonce134==NULL)) {
var135 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = " * ";
var139 = core__flat___NativeString___to_s_full(var138, 3l, 3l);
var137 = var139;
varonce136 = var137;
}
((struct instance_core__NativeArray*)var135)->values[1]=var137;
} else {
var135 = varonce134;
varonce134 = NULL;
}
{
var140 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var141 = ((val*(*)(val* self))(var140->class->vft[COLOR_core__abstract_text__Object__to_s]))(var140); /* to_s on <var140:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var135)->values[0]=var141;
{
var142 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var143 = ((val*(*)(val* self))(var142->class->vft[COLOR_core__abstract_text__Object__to_s]))(var142); /* to_s on <var142:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var135)->values[2]=var143;
{
var144 = ((val*(*)(val* self))(var135->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var135); /* native_to_s on <var135:NativeArray[String]>*/
}
varonce134 = var135;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2218);
fatal_exit(1);
}
{
var145 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var144, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var145); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "/";
var149 = core__flat___NativeString___to_s_full(var148, 1l, 1l);
var147 = var149;
varonce146 = var147;
}
{
var150 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var147); /* == on <var_pname:String>*/
}
if (var150){
if (unlikely(varonce151==NULL)) {
var152 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = " / ";
var156 = core__flat___NativeString___to_s_full(var155, 3l, 3l);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var152)->values[1]=var154;
} else {
var152 = varonce151;
varonce151 = NULL;
}
{
var157 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var158 = ((val*(*)(val* self))(var157->class->vft[COLOR_core__abstract_text__Object__to_s]))(var157); /* to_s on <var157:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var152)->values[0]=var158;
{
var159 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var160 = ((val*(*)(val* self))(var159->class->vft[COLOR_core__abstract_text__Object__to_s]))(var159); /* to_s on <var159:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var152)->values[2]=var160;
{
var161 = ((val*(*)(val* self))(var152->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2221);
fatal_exit(1);
}
{
var162 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var161, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var162); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "%";
var166 = core__flat___NativeString___to_s_full(var165, 1l, 1l);
var164 = var166;
varonce163 = var164;
}
{
var167 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var164); /* == on <var_pname:String>*/
}
if (var167){
if (unlikely(varonce168==NULL)) {
var169 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = " % ";
var173 = core__flat___NativeString___to_s_full(var172, 3l, 3l);
var171 = var173;
varonce170 = var171;
}
((struct instance_core__NativeArray*)var169)->values[1]=var171;
} else {
var169 = varonce168;
varonce168 = NULL;
}
{
var174 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var175 = ((val*(*)(val* self))(var174->class->vft[COLOR_core__abstract_text__Object__to_s]))(var174); /* to_s on <var174:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var169)->values[0]=var175;
{
var176 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var177 = ((val*(*)(val* self))(var176->class->vft[COLOR_core__abstract_text__Object__to_s]))(var176); /* to_s on <var176:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var169)->values[2]=var177;
{
var178 = ((val*(*)(val* self))(var169->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var169); /* native_to_s on <var169:NativeArray[String]>*/
}
varonce168 = var169;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2224);
fatal_exit(1);
}
{
var179 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var178, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var179); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "==";
var183 = core__flat___NativeString___to_s_full(var182, 2l, 2l);
var181 = var183;
varonce180 = var181;
}
{
var184 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var181); /* == on <var_pname:String>*/
}
if (var184){
{
var185 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var186 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var187 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var185, var186);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var187); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = "!=";
var191 = core__flat___NativeString___to_s_full(var190, 2l, 2l);
var189 = var191;
varonce188 = var189;
}
{
var192 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var189); /* == on <var_pname:String>*/
}
if (var192){
{
var193 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var194 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var195 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var193, var194);
}
var_res = var195;
if (unlikely(varonce196==NULL)) {
var197 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "!";
var201 = core__flat___NativeString___to_s_full(var200, 1l, 1l);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var197)->values[0]=var199;
} else {
var197 = varonce196;
varonce196 = NULL;
}
{
var202 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var197)->values[1]=var202;
{
var203 = ((val*(*)(val* self))(var197->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var197); /* native_to_s on <var197:NativeArray[String]>*/
}
varonce196 = var197;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2231);
fatal_exit(1);
}
{
var204 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var203, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var204); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "<";
var208 = core__flat___NativeString___to_s_full(var207, 1l, 1l);
var206 = var208;
varonce205 = var206;
}
{
var209 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var206); /* == on <var_pname:String>*/
}
if (var209){
if (unlikely(varonce210==NULL)) {
var211 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = " < ";
var215 = core__flat___NativeString___to_s_full(var214, 3l, 3l);
var213 = var215;
varonce212 = var213;
}
((struct instance_core__NativeArray*)var211)->values[1]=var213;
} else {
var211 = varonce210;
varonce210 = NULL;
}
{
var216 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var217 = ((val*(*)(val* self))(var216->class->vft[COLOR_core__abstract_text__Object__to_s]))(var216); /* to_s on <var216:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var211)->values[0]=var217;
{
var218 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var219 = ((val*(*)(val* self))(var218->class->vft[COLOR_core__abstract_text__Object__to_s]))(var218); /* to_s on <var218:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var211)->values[2]=var219;
{
var220 = ((val*(*)(val* self))(var211->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var211); /* native_to_s on <var211:NativeArray[String]>*/
}
varonce210 = var211;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2234);
fatal_exit(1);
}
{
var221 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var220, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var221); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = ">";
var225 = core__flat___NativeString___to_s_full(var224, 1l, 1l);
var223 = var225;
varonce222 = var223;
}
{
var226 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var223); /* == on <var_pname:String>*/
}
if (var226){
if (unlikely(varonce227==NULL)) {
var228 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = " > ";
var232 = core__flat___NativeString___to_s_full(var231, 3l, 3l);
var230 = var232;
varonce229 = var230;
}
((struct instance_core__NativeArray*)var228)->values[1]=var230;
} else {
var228 = varonce227;
varonce227 = NULL;
}
{
var233 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var234 = ((val*(*)(val* self))(var233->class->vft[COLOR_core__abstract_text__Object__to_s]))(var233); /* to_s on <var233:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var228)->values[0]=var234;
{
var235 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var236 = ((val*(*)(val* self))(var235->class->vft[COLOR_core__abstract_text__Object__to_s]))(var235); /* to_s on <var235:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var228)->values[2]=var236;
{
var237 = ((val*(*)(val* self))(var228->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var228); /* native_to_s on <var228:NativeArray[String]>*/
}
varonce227 = var228;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2237);
fatal_exit(1);
}
{
var238 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var237, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var238); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce239!=NULL)) {
var240 = varonce239;
} else {
var241 = "<=";
var242 = core__flat___NativeString___to_s_full(var241, 2l, 2l);
var240 = var242;
varonce239 = var240;
}
{
var243 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var240); /* == on <var_pname:String>*/
}
if (var243){
if (unlikely(varonce244==NULL)) {
var245 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce246!=NULL)) {
var247 = varonce246;
} else {
var248 = " <= ";
var249 = core__flat___NativeString___to_s_full(var248, 4l, 4l);
var247 = var249;
varonce246 = var247;
}
((struct instance_core__NativeArray*)var245)->values[1]=var247;
} else {
var245 = varonce244;
varonce244 = NULL;
}
{
var250 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var251 = ((val*(*)(val* self))(var250->class->vft[COLOR_core__abstract_text__Object__to_s]))(var250); /* to_s on <var250:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var245)->values[0]=var251;
{
var252 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var253 = ((val*(*)(val* self))(var252->class->vft[COLOR_core__abstract_text__Object__to_s]))(var252); /* to_s on <var252:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var245)->values[2]=var253;
{
var254 = ((val*(*)(val* self))(var245->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var245); /* native_to_s on <var245:NativeArray[String]>*/
}
varonce244 = var245;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2240);
fatal_exit(1);
}
{
var255 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var254, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var255); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = ">=";
var259 = core__flat___NativeString___to_s_full(var258, 2l, 2l);
var257 = var259;
varonce256 = var257;
}
{
var260 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var257); /* == on <var_pname:String>*/
}
if (var260){
if (unlikely(varonce261==NULL)) {
var262 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = " >= ";
var266 = core__flat___NativeString___to_s_full(var265, 4l, 4l);
var264 = var266;
varonce263 = var264;
}
((struct instance_core__NativeArray*)var262)->values[1]=var264;
} else {
var262 = varonce261;
varonce261 = NULL;
}
{
var267 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var268 = ((val*(*)(val* self))(var267->class->vft[COLOR_core__abstract_text__Object__to_s]))(var267); /* to_s on <var267:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var262)->values[0]=var268;
{
var269 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var270 = ((val*(*)(val* self))(var269->class->vft[COLOR_core__abstract_text__Object__to_s]))(var269); /* to_s on <var269:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var262)->values[2]=var270;
{
var271 = ((val*(*)(val* self))(var262->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var262); /* native_to_s on <var262:NativeArray[String]>*/
}
varonce261 = var262;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2243);
fatal_exit(1);
}
{
var272 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var271, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var272); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "to_i8";
var276 = core__flat___NativeString___to_s_full(var275, 5l, 5l);
var274 = var276;
varonce273 = var274;
}
{
var277 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var274); /* == on <var_pname:String>*/
}
if (var277){
if (unlikely(varonce278==NULL)) {
var279 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce280!=NULL)) {
var281 = varonce280;
} else {
var282 = "(int8_t)";
var283 = core__flat___NativeString___to_s_full(var282, 8l, 8l);
var281 = var283;
varonce280 = var281;
}
((struct instance_core__NativeArray*)var279)->values[0]=var281;
} else {
var279 = varonce278;
varonce278 = NULL;
}
{
var284 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var285 = ((val*(*)(val* self))(var284->class->vft[COLOR_core__abstract_text__Object__to_s]))(var284); /* to_s on <var284:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var279)->values[1]=var285;
{
var286 = ((val*(*)(val* self))(var279->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var279); /* native_to_s on <var279:NativeArray[String]>*/
}
varonce278 = var279;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2246);
fatal_exit(1);
}
{
var287 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var286, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var287); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce288!=NULL)) {
var289 = varonce288;
} else {
var290 = "to_i16";
var291 = core__flat___NativeString___to_s_full(var290, 6l, 6l);
var289 = var291;
varonce288 = var289;
}
{
var292 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var289); /* == on <var_pname:String>*/
}
if (var292){
if (unlikely(varonce293==NULL)) {
var294 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "(int16_t)";
var298 = core__flat___NativeString___to_s_full(var297, 9l, 9l);
var296 = var298;
varonce295 = var296;
}
((struct instance_core__NativeArray*)var294)->values[0]=var296;
} else {
var294 = varonce293;
varonce293 = NULL;
}
{
var299 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var300 = ((val*(*)(val* self))(var299->class->vft[COLOR_core__abstract_text__Object__to_s]))(var299); /* to_s on <var299:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var294)->values[1]=var300;
{
var301 = ((val*(*)(val* self))(var294->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var294); /* native_to_s on <var294:NativeArray[String]>*/
}
varonce293 = var294;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2249);
fatal_exit(1);
}
{
var302 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var301, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var302); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "to_u16";
var306 = core__flat___NativeString___to_s_full(var305, 6l, 6l);
var304 = var306;
varonce303 = var304;
}
{
var307 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var304); /* == on <var_pname:String>*/
}
if (var307){
if (unlikely(varonce308==NULL)) {
var309 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "(uint16_t)";
var313 = core__flat___NativeString___to_s_full(var312, 10l, 10l);
var311 = var313;
varonce310 = var311;
}
((struct instance_core__NativeArray*)var309)->values[0]=var311;
} else {
var309 = varonce308;
varonce308 = NULL;
}
{
var314 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var315 = ((val*(*)(val* self))(var314->class->vft[COLOR_core__abstract_text__Object__to_s]))(var314); /* to_s on <var314:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var309)->values[1]=var315;
{
var316 = ((val*(*)(val* self))(var309->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var309); /* native_to_s on <var309:NativeArray[String]>*/
}
varonce308 = var309;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2252);
fatal_exit(1);
}
{
var317 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var316, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var317); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce318!=NULL)) {
var319 = varonce318;
} else {
var320 = "to_i32";
var321 = core__flat___NativeString___to_s_full(var320, 6l, 6l);
var319 = var321;
varonce318 = var319;
}
{
var322 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var319); /* == on <var_pname:String>*/
}
if (var322){
if (unlikely(varonce323==NULL)) {
var324 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = "(int32_t)";
var328 = core__flat___NativeString___to_s_full(var327, 9l, 9l);
var326 = var328;
varonce325 = var326;
}
((struct instance_core__NativeArray*)var324)->values[0]=var326;
} else {
var324 = varonce323;
varonce323 = NULL;
}
{
var329 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var330 = ((val*(*)(val* self))(var329->class->vft[COLOR_core__abstract_text__Object__to_s]))(var329); /* to_s on <var329:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var324)->values[1]=var330;
{
var331 = ((val*(*)(val* self))(var324->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var324); /* native_to_s on <var324:NativeArray[String]>*/
}
varonce323 = var324;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2255);
fatal_exit(1);
}
{
var332 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var331, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var332); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = "to_u32";
var336 = core__flat___NativeString___to_s_full(var335, 6l, 6l);
var334 = var336;
varonce333 = var334;
}
{
var337 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var334); /* == on <var_pname:String>*/
}
if (var337){
if (unlikely(varonce338==NULL)) {
var339 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce340!=NULL)) {
var341 = varonce340;
} else {
var342 = "(uint32_t)";
var343 = core__flat___NativeString___to_s_full(var342, 10l, 10l);
var341 = var343;
varonce340 = var341;
}
((struct instance_core__NativeArray*)var339)->values[0]=var341;
} else {
var339 = varonce338;
varonce338 = NULL;
}
{
var344 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var345 = ((val*(*)(val* self))(var344->class->vft[COLOR_core__abstract_text__Object__to_s]))(var344); /* to_s on <var344:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var339)->values[1]=var345;
{
var346 = ((val*(*)(val* self))(var339->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var339); /* native_to_s on <var339:NativeArray[String]>*/
}
varonce338 = var339;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2258);
fatal_exit(1);
}
{
var347 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var346, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var347); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce348!=NULL)) {
var349 = varonce348;
} else {
var350 = "to_f";
var351 = core__flat___NativeString___to_s_full(var350, 4l, 4l);
var349 = var351;
varonce348 = var349;
}
{
var352 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var349); /* == on <var_pname:String>*/
}
if (var352){
if (unlikely(varonce353==NULL)) {
var354 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce355!=NULL)) {
var356 = varonce355;
} else {
var357 = "(double)";
var358 = core__flat___NativeString___to_s_full(var357, 8l, 8l);
var356 = var358;
varonce355 = var356;
}
((struct instance_core__NativeArray*)var354)->values[0]=var356;
} else {
var354 = varonce353;
varonce353 = NULL;
}
{
var359 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var360 = ((val*(*)(val* self))(var359->class->vft[COLOR_core__abstract_text__Object__to_s]))(var359); /* to_s on <var359:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var354)->values[1]=var360;
{
var361 = ((val*(*)(val* self))(var354->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var354); /* native_to_s on <var354:NativeArray[String]>*/
}
varonce353 = var354;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2261);
fatal_exit(1);
}
{
var362 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var361, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var362); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce363!=NULL)) {
var364 = varonce363;
} else {
var365 = "to_b";
var366 = core__flat___NativeString___to_s_full(var365, 4l, 4l);
var364 = var366;
varonce363 = var364;
}
{
var367 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var364); /* == on <var_pname:String>*/
}
if (var367){
if (unlikely(varonce368==NULL)) {
var369 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce370!=NULL)) {
var371 = varonce370;
} else {
var372 = "(unsigned char)";
var373 = core__flat___NativeString___to_s_full(var372, 15l, 15l);
var371 = var373;
varonce370 = var371;
}
((struct instance_core__NativeArray*)var369)->values[0]=var371;
} else {
var369 = varonce368;
varonce368 = NULL;
}
{
var374 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var375 = ((val*(*)(val* self))(var374->class->vft[COLOR_core__abstract_text__Object__to_s]))(var374); /* to_s on <var374:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var369)->values[1]=var375;
{
var376 = ((val*(*)(val* self))(var369->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var369); /* native_to_s on <var369:NativeArray[String]>*/
}
varonce368 = var369;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2264);
fatal_exit(1);
}
{
var377 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var376, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var377); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce378!=NULL)) {
var379 = varonce378;
} else {
var380 = "code_point";
var381 = core__flat___NativeString___to_s_full(var380, 10l, 10l);
var379 = var381;
varonce378 = var379;
}
{
var382 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var379); /* == on <var_pname:String>*/
}
if (var382){
if (unlikely(varonce383==NULL)) {
var384 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce385!=NULL)) {
var386 = varonce385;
} else {
var387 = "(uint32_t)";
var388 = core__flat___NativeString___to_s_full(var387, 10l, 10l);
var386 = var388;
varonce385 = var386;
}
((struct instance_core__NativeArray*)var384)->values[0]=var386;
} else {
var384 = varonce383;
varonce383 = NULL;
}
{
var389 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var390 = ((val*(*)(val* self))(var389->class->vft[COLOR_core__abstract_text__Object__to_s]))(var389); /* to_s on <var389:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var384)->values[1]=var390;
{
var391 = ((val*(*)(val* self))(var384->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var384); /* native_to_s on <var384:NativeArray[String]>*/
}
varonce383 = var384;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2267);
fatal_exit(1);
}
{
var392 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var391, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var392); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = "&";
var396 = core__flat___NativeString___to_s_full(var395, 1l, 1l);
var394 = var396;
varonce393 = var394;
}
{
var397 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var394); /* == on <var_pname:String>*/
}
if (var397){
if (unlikely(varonce398==NULL)) {
var399 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce400!=NULL)) {
var401 = varonce400;
} else {
var402 = " & ";
var403 = core__flat___NativeString___to_s_full(var402, 3l, 3l);
var401 = var403;
varonce400 = var401;
}
((struct instance_core__NativeArray*)var399)->values[1]=var401;
} else {
var399 = varonce398;
varonce398 = NULL;
}
{
var404 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var405 = ((val*(*)(val* self))(var404->class->vft[COLOR_core__abstract_text__Object__to_s]))(var404); /* to_s on <var404:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var399)->values[0]=var405;
{
var406 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var407 = ((val*(*)(val* self))(var406->class->vft[COLOR_core__abstract_text__Object__to_s]))(var406); /* to_s on <var406:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var399)->values[2]=var407;
{
var408 = ((val*(*)(val* self))(var399->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var399); /* native_to_s on <var399:NativeArray[String]>*/
}
varonce398 = var399;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2270);
fatal_exit(1);
}
{
var409 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var408, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var409); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce410!=NULL)) {
var411 = varonce410;
} else {
var412 = "|";
var413 = core__flat___NativeString___to_s_full(var412, 1l, 1l);
var411 = var413;
varonce410 = var411;
}
{
var414 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var411); /* == on <var_pname:String>*/
}
if (var414){
if (unlikely(varonce415==NULL)) {
var416 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = " | ";
var420 = core__flat___NativeString___to_s_full(var419, 3l, 3l);
var418 = var420;
varonce417 = var418;
}
((struct instance_core__NativeArray*)var416)->values[1]=var418;
} else {
var416 = varonce415;
varonce415 = NULL;
}
{
var421 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var422 = ((val*(*)(val* self))(var421->class->vft[COLOR_core__abstract_text__Object__to_s]))(var421); /* to_s on <var421:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var416)->values[0]=var422;
{
var423 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var424 = ((val*(*)(val* self))(var423->class->vft[COLOR_core__abstract_text__Object__to_s]))(var423); /* to_s on <var423:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var416)->values[2]=var424;
{
var425 = ((val*(*)(val* self))(var416->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var416); /* native_to_s on <var416:NativeArray[String]>*/
}
varonce415 = var416;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2273);
fatal_exit(1);
}
{
var426 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var425, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var426); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce427!=NULL)) {
var428 = varonce427;
} else {
var429 = ">>";
var430 = core__flat___NativeString___to_s_full(var429, 2l, 2l);
var428 = var430;
varonce427 = var428;
}
{
var431 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var428); /* == on <var_pname:String>*/
}
if (var431){
if (unlikely(varonce432==NULL)) {
var433 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce434!=NULL)) {
var435 = varonce434;
} else {
var436 = " >> ";
var437 = core__flat___NativeString___to_s_full(var436, 4l, 4l);
var435 = var437;
varonce434 = var435;
}
((struct instance_core__NativeArray*)var433)->values[1]=var435;
} else {
var433 = varonce432;
varonce432 = NULL;
}
{
var438 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var439 = ((val*(*)(val* self))(var438->class->vft[COLOR_core__abstract_text__Object__to_s]))(var438); /* to_s on <var438:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var433)->values[0]=var439;
{
var440 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var441 = ((val*(*)(val* self))(var440->class->vft[COLOR_core__abstract_text__Object__to_s]))(var440); /* to_s on <var440:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var433)->values[2]=var441;
{
var442 = ((val*(*)(val* self))(var433->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var433); /* native_to_s on <var433:NativeArray[String]>*/
}
varonce432 = var433;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2276);
fatal_exit(1);
}
{
var443 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var442, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var443); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce444!=NULL)) {
var445 = varonce444;
} else {
var446 = "<<";
var447 = core__flat___NativeString___to_s_full(var446, 2l, 2l);
var445 = var447;
varonce444 = var445;
}
{
var448 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var445); /* == on <var_pname:String>*/
}
if (var448){
if (unlikely(varonce449==NULL)) {
var450 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce451!=NULL)) {
var452 = varonce451;
} else {
var453 = " << ";
var454 = core__flat___NativeString___to_s_full(var453, 4l, 4l);
var452 = var454;
varonce451 = var452;
}
((struct instance_core__NativeArray*)var450)->values[1]=var452;
} else {
var450 = varonce449;
varonce449 = NULL;
}
{
var455 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var456 = ((val*(*)(val* self))(var455->class->vft[COLOR_core__abstract_text__Object__to_s]))(var455); /* to_s on <var455:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var450)->values[0]=var456;
{
var457 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var458 = ((val*(*)(val* self))(var457->class->vft[COLOR_core__abstract_text__Object__to_s]))(var457); /* to_s on <var457:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var450)->values[2]=var458;
{
var459 = ((val*(*)(val* self))(var450->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var450); /* native_to_s on <var450:NativeArray[String]>*/
}
varonce449 = var450;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2279);
fatal_exit(1);
}
{
var460 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var459, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var460); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
}
}
}
} else {
if (likely(varonce461!=NULL)) {
var462 = varonce461;
} else {
var463 = "Char";
var464 = core__flat___NativeString___to_s_full(var463, 4l, 4l);
var462 = var464;
varonce461 = var462;
}
{
var465 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var462); /* == on <var_cname:String>*/
}
if (var465){
if (likely(varonce466!=NULL)) {
var467 = varonce466;
} else {
var468 = "object_id";
var469 = core__flat___NativeString___to_s_full(var468, 9l, 9l);
var467 = var469;
varonce466 = var467;
}
{
var470 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var467); /* == on <var_pname:String>*/
}
if (var470){
if (unlikely(varonce471==NULL)) {
var472 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce473!=NULL)) {
var474 = varonce473;
} else {
var475 = "(long)";
var476 = core__flat___NativeString___to_s_full(var475, 6l, 6l);
var474 = var476;
varonce473 = var474;
}
((struct instance_core__NativeArray*)var472)->values[0]=var474;
} else {
var472 = varonce471;
varonce471 = NULL;
}
{
var477 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var478 = ((val*(*)(val* self))(var477->class->vft[COLOR_core__abstract_text__Object__to_s]))(var477); /* to_s on <var477:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var472)->values[1]=var478;
{
var479 = ((val*(*)(val* self))(var472->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var472); /* native_to_s on <var472:NativeArray[String]>*/
}
varonce471 = var472;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2284);
fatal_exit(1);
}
{
var480 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var479, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var480); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce481!=NULL)) {
var482 = varonce481;
} else {
var483 = "successor";
var484 = core__flat___NativeString___to_s_full(var483, 9l, 9l);
var482 = var484;
varonce481 = var482;
}
{
var485 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var482); /* == on <var_pname:String>*/
}
if (var485){
if (unlikely(varonce486==NULL)) {
var487 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce488!=NULL)) {
var489 = varonce488;
} else {
var490 = " + ";
var491 = core__flat___NativeString___to_s_full(var490, 3l, 3l);
var489 = var491;
varonce488 = var489;
}
((struct instance_core__NativeArray*)var487)->values[1]=var489;
} else {
var487 = varonce486;
varonce486 = NULL;
}
{
var492 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var493 = ((val*(*)(val* self))(var492->class->vft[COLOR_core__abstract_text__Object__to_s]))(var492); /* to_s on <var492:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var487)->values[0]=var493;
{
var494 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var495 = ((val*(*)(val* self))(var494->class->vft[COLOR_core__abstract_text__Object__to_s]))(var494); /* to_s on <var494:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var487)->values[2]=var495;
{
var496 = ((val*(*)(val* self))(var487->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var487); /* native_to_s on <var487:NativeArray[String]>*/
}
varonce486 = var487;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2287);
fatal_exit(1);
}
{
var497 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var496, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var497); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = "predecessor";
var501 = core__flat___NativeString___to_s_full(var500, 11l, 11l);
var499 = var501;
varonce498 = var499;
}
{
var502 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var499); /* == on <var_pname:String>*/
}
if (var502){
if (unlikely(varonce503==NULL)) {
var504 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce505!=NULL)) {
var506 = varonce505;
} else {
var507 = " - ";
var508 = core__flat___NativeString___to_s_full(var507, 3l, 3l);
var506 = var508;
varonce505 = var506;
}
((struct instance_core__NativeArray*)var504)->values[1]=var506;
} else {
var504 = varonce503;
varonce503 = NULL;
}
{
var509 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var510 = ((val*(*)(val* self))(var509->class->vft[COLOR_core__abstract_text__Object__to_s]))(var509); /* to_s on <var509:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var504)->values[0]=var510;
{
var511 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var512 = ((val*(*)(val* self))(var511->class->vft[COLOR_core__abstract_text__Object__to_s]))(var511); /* to_s on <var511:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var504)->values[2]=var512;
{
var513 = ((val*(*)(val* self))(var504->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var504); /* native_to_s on <var504:NativeArray[String]>*/
}
varonce503 = var504;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2290);
fatal_exit(1);
}
{
var514 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var513, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var514); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce515!=NULL)) {
var516 = varonce515;
} else {
var517 = "==";
var518 = core__flat___NativeString___to_s_full(var517, 2l, 2l);
var516 = var518;
varonce515 = var516;
}
{
var519 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var516); /* == on <var_pname:String>*/
}
if (var519){
{
var520 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var521 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var522 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var520, var521);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var522); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce523!=NULL)) {
var524 = varonce523;
} else {
var525 = "!=";
var526 = core__flat___NativeString___to_s_full(var525, 2l, 2l);
var524 = var526;
varonce523 = var524;
}
{
var527 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var524); /* == on <var_pname:String>*/
}
if (var527){
{
var528 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var529 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var530 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var528, var529);
}
var_res531 = var530;
if (unlikely(varonce532==NULL)) {
var533 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce534!=NULL)) {
var535 = varonce534;
} else {
var536 = "!";
var537 = core__flat___NativeString___to_s_full(var536, 1l, 1l);
var535 = var537;
varonce534 = var535;
}
((struct instance_core__NativeArray*)var533)->values[0]=var535;
} else {
var533 = varonce532;
varonce532 = NULL;
}
{
var538 = ((val*(*)(val* self))(var_res531->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res531); /* to_s on <var_res531:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var533)->values[1]=var538;
{
var539 = ((val*(*)(val* self))(var533->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var533); /* native_to_s on <var533:NativeArray[String]>*/
}
varonce532 = var533;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2297);
fatal_exit(1);
}
{
var540 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var539, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var540); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce541!=NULL)) {
var542 = varonce541;
} else {
var543 = "<";
var544 = core__flat___NativeString___to_s_full(var543, 1l, 1l);
var542 = var544;
varonce541 = var542;
}
{
var545 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var542); /* == on <var_pname:String>*/
}
if (var545){
if (unlikely(varonce546==NULL)) {
var547 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce548!=NULL)) {
var549 = varonce548;
} else {
var550 = " < ";
var551 = core__flat___NativeString___to_s_full(var550, 3l, 3l);
var549 = var551;
varonce548 = var549;
}
((struct instance_core__NativeArray*)var547)->values[1]=var549;
} else {
var547 = varonce546;
varonce546 = NULL;
}
{
var552 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var553 = ((val*(*)(val* self))(var552->class->vft[COLOR_core__abstract_text__Object__to_s]))(var552); /* to_s on <var552:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var547)->values[0]=var553;
{
var554 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var555 = ((val*(*)(val* self))(var554->class->vft[COLOR_core__abstract_text__Object__to_s]))(var554); /* to_s on <var554:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var547)->values[2]=var555;
{
var556 = ((val*(*)(val* self))(var547->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var547); /* native_to_s on <var547:NativeArray[String]>*/
}
varonce546 = var547;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2300);
fatal_exit(1);
}
{
var557 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var556, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var557); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce558!=NULL)) {
var559 = varonce558;
} else {
var560 = ">";
var561 = core__flat___NativeString___to_s_full(var560, 1l, 1l);
var559 = var561;
varonce558 = var559;
}
{
var562 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var559); /* == on <var_pname:String>*/
}
if (var562){
if (unlikely(varonce563==NULL)) {
var564 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce565!=NULL)) {
var566 = varonce565;
} else {
var567 = " > ";
var568 = core__flat___NativeString___to_s_full(var567, 3l, 3l);
var566 = var568;
varonce565 = var566;
}
((struct instance_core__NativeArray*)var564)->values[1]=var566;
} else {
var564 = varonce563;
varonce563 = NULL;
}
{
var569 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var570 = ((val*(*)(val* self))(var569->class->vft[COLOR_core__abstract_text__Object__to_s]))(var569); /* to_s on <var569:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var564)->values[0]=var570;
{
var571 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var572 = ((val*(*)(val* self))(var571->class->vft[COLOR_core__abstract_text__Object__to_s]))(var571); /* to_s on <var571:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var564)->values[2]=var572;
{
var573 = ((val*(*)(val* self))(var564->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var564); /* native_to_s on <var564:NativeArray[String]>*/
}
varonce563 = var564;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2303);
fatal_exit(1);
}
{
var574 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var573, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var574); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce575!=NULL)) {
var576 = varonce575;
} else {
var577 = "<=";
var578 = core__flat___NativeString___to_s_full(var577, 2l, 2l);
var576 = var578;
varonce575 = var576;
}
{
var579 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var576); /* == on <var_pname:String>*/
}
if (var579){
if (unlikely(varonce580==NULL)) {
var581 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce582!=NULL)) {
var583 = varonce582;
} else {
var584 = " <= ";
var585 = core__flat___NativeString___to_s_full(var584, 4l, 4l);
var583 = var585;
varonce582 = var583;
}
((struct instance_core__NativeArray*)var581)->values[1]=var583;
} else {
var581 = varonce580;
varonce580 = NULL;
}
{
var586 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var587 = ((val*(*)(val* self))(var586->class->vft[COLOR_core__abstract_text__Object__to_s]))(var586); /* to_s on <var586:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var581)->values[0]=var587;
{
var588 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var589 = ((val*(*)(val* self))(var588->class->vft[COLOR_core__abstract_text__Object__to_s]))(var588); /* to_s on <var588:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var581)->values[2]=var589;
{
var590 = ((val*(*)(val* self))(var581->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var581); /* native_to_s on <var581:NativeArray[String]>*/
}
varonce580 = var581;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2306);
fatal_exit(1);
}
{
var591 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var590, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var591); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce592!=NULL)) {
var593 = varonce592;
} else {
var594 = ">=";
var595 = core__flat___NativeString___to_s_full(var594, 2l, 2l);
var593 = var595;
varonce592 = var593;
}
{
var596 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var593); /* == on <var_pname:String>*/
}
if (var596){
if (unlikely(varonce597==NULL)) {
var598 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce599!=NULL)) {
var600 = varonce599;
} else {
var601 = " >= ";
var602 = core__flat___NativeString___to_s_full(var601, 4l, 4l);
var600 = var602;
varonce599 = var600;
}
((struct instance_core__NativeArray*)var598)->values[1]=var600;
} else {
var598 = varonce597;
varonce597 = NULL;
}
{
var603 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var604 = ((val*(*)(val* self))(var603->class->vft[COLOR_core__abstract_text__Object__to_s]))(var603); /* to_s on <var603:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var598)->values[0]=var604;
{
var605 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var606 = ((val*(*)(val* self))(var605->class->vft[COLOR_core__abstract_text__Object__to_s]))(var605); /* to_s on <var605:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var598)->values[2]=var606;
{
var607 = ((val*(*)(val* self))(var598->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var598); /* native_to_s on <var598:NativeArray[String]>*/
}
varonce597 = var598;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2309);
fatal_exit(1);
}
{
var608 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var607, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var608); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce609!=NULL)) {
var610 = varonce609;
} else {
var611 = "to_i";
var612 = core__flat___NativeString___to_s_full(var611, 4l, 4l);
var610 = var612;
varonce609 = var610;
}
{
var613 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var610); /* == on <var_pname:String>*/
}
if (var613){
if (unlikely(varonce614==NULL)) {
var615 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce616!=NULL)) {
var617 = varonce616;
} else {
var618 = "-\'0\'";
var619 = core__flat___NativeString___to_s_full(var618, 4l, 4l);
var617 = var619;
varonce616 = var617;
}
((struct instance_core__NativeArray*)var615)->values[1]=var617;
} else {
var615 = varonce614;
varonce614 = NULL;
}
{
var620 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var621 = ((val*(*)(val* self))(var620->class->vft[COLOR_core__abstract_text__Object__to_s]))(var620); /* to_s on <var620:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var615)->values[0]=var621;
{
var622 = ((val*(*)(val* self))(var615->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var615); /* native_to_s on <var615:NativeArray[String]>*/
}
varonce614 = var615;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2312);
fatal_exit(1);
}
{
var623 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var622, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var623); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce624!=NULL)) {
var625 = varonce624;
} else {
var626 = "code_point";
var627 = core__flat___NativeString___to_s_full(var626, 10l, 10l);
var625 = var627;
varonce624 = var625;
}
{
var628 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var625); /* == on <var_pname:String>*/
}
if (var628){
if (unlikely(varonce629==NULL)) {
var630 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce631!=NULL)) {
var632 = varonce631;
} else {
var633 = "(long)";
var634 = core__flat___NativeString___to_s_full(var633, 6l, 6l);
var632 = var634;
varonce631 = var632;
}
((struct instance_core__NativeArray*)var630)->values[0]=var632;
} else {
var630 = varonce629;
varonce629 = NULL;
}
{
var635 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var636 = ((val*(*)(val* self))(var635->class->vft[COLOR_core__abstract_text__Object__to_s]))(var635); /* to_s on <var635:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var630)->values[1]=var636;
{
var637 = ((val*(*)(val* self))(var630->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var630); /* native_to_s on <var630:NativeArray[String]>*/
}
varonce629 = var630;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2315);
fatal_exit(1);
}
{
var638 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var637, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var638); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
} else {
if (likely(varonce639!=NULL)) {
var640 = varonce639;
} else {
var641 = "Byte";
var642 = core__flat___NativeString___to_s_full(var641, 4l, 4l);
var640 = var642;
varonce639 = var640;
}
{
var643 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var640); /* == on <var_cname:String>*/
}
if (var643){
if (likely(varonce644!=NULL)) {
var645 = varonce644;
} else {
var646 = "output";
var647 = core__flat___NativeString___to_s_full(var646, 6l, 6l);
var645 = var647;
varonce644 = var645;
}
{
var648 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var645); /* == on <var_pname:String>*/
}
if (var648){
if (unlikely(varonce649==NULL)) {
var650 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce651!=NULL)) {
var652 = varonce651;
} else {
var653 = "printf(\"%x\\n\", ";
var654 = core__flat___NativeString___to_s_full(var653, 15l, 15l);
var652 = var654;
varonce651 = var652;
}
((struct instance_core__NativeArray*)var650)->values[0]=var652;
if (likely(varonce655!=NULL)) {
var656 = varonce655;
} else {
var657 = ");";
var658 = core__flat___NativeString___to_s_full(var657, 2l, 2l);
var656 = var658;
varonce655 = var656;
}
((struct instance_core__NativeArray*)var650)->values[2]=var656;
} else {
var650 = varonce649;
varonce649 = NULL;
}
{
var659 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var660 = ((val*(*)(val* self))(var659->class->vft[COLOR_core__abstract_text__Object__to_s]))(var659); /* to_s on <var659:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var650)->values[1]=var660;
{
var661 = ((val*(*)(val* self))(var650->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var650); /* native_to_s on <var650:NativeArray[String]>*/
}
varonce649 = var650;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var661); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce662!=NULL)) {
var663 = varonce662;
} else {
var664 = "object_id";
var665 = core__flat___NativeString___to_s_full(var664, 9l, 9l);
var663 = var665;
varonce662 = var663;
}
{
var666 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var663); /* == on <var_pname:String>*/
}
if (var666){
if (unlikely(varonce667==NULL)) {
var668 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce669!=NULL)) {
var670 = varonce669;
} else {
var671 = "(long)";
var672 = core__flat___NativeString___to_s_full(var671, 6l, 6l);
var670 = var672;
varonce669 = var670;
}
((struct instance_core__NativeArray*)var668)->values[0]=var670;
} else {
var668 = varonce667;
varonce667 = NULL;
}
{
var673 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var674 = ((val*(*)(val* self))(var673->class->vft[COLOR_core__abstract_text__Object__to_s]))(var673); /* to_s on <var673:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var668)->values[1]=var674;
{
var675 = ((val*(*)(val* self))(var668->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var668); /* native_to_s on <var668:NativeArray[String]>*/
}
varonce667 = var668;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2323);
fatal_exit(1);
}
{
var676 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var675, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var676); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce677!=NULL)) {
var678 = varonce677;
} else {
var679 = "+";
var680 = core__flat___NativeString___to_s_full(var679, 1l, 1l);
var678 = var680;
varonce677 = var678;
}
{
var681 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var678); /* == on <var_pname:String>*/
}
if (var681){
if (unlikely(varonce682==NULL)) {
var683 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce684!=NULL)) {
var685 = varonce684;
} else {
var686 = " + ";
var687 = core__flat___NativeString___to_s_full(var686, 3l, 3l);
var685 = var687;
varonce684 = var685;
}
((struct instance_core__NativeArray*)var683)->values[1]=var685;
} else {
var683 = varonce682;
varonce682 = NULL;
}
{
var688 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var689 = ((val*(*)(val* self))(var688->class->vft[COLOR_core__abstract_text__Object__to_s]))(var688); /* to_s on <var688:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var683)->values[0]=var689;
{
var690 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var691 = ((val*(*)(val* self))(var690->class->vft[COLOR_core__abstract_text__Object__to_s]))(var690); /* to_s on <var690:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var683)->values[2]=var691;
{
var692 = ((val*(*)(val* self))(var683->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var683); /* native_to_s on <var683:NativeArray[String]>*/
}
varonce682 = var683;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2326);
fatal_exit(1);
}
{
var693 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var692, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var693); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce694!=NULL)) {
var695 = varonce694;
} else {
var696 = "-";
var697 = core__flat___NativeString___to_s_full(var696, 1l, 1l);
var695 = var697;
varonce694 = var695;
}
{
var698 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var695); /* == on <var_pname:String>*/
}
if (var698){
if (unlikely(varonce699==NULL)) {
var700 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce701!=NULL)) {
var702 = varonce701;
} else {
var703 = " - ";
var704 = core__flat___NativeString___to_s_full(var703, 3l, 3l);
var702 = var704;
varonce701 = var702;
}
((struct instance_core__NativeArray*)var700)->values[1]=var702;
} else {
var700 = varonce699;
varonce699 = NULL;
}
{
var705 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var706 = ((val*(*)(val* self))(var705->class->vft[COLOR_core__abstract_text__Object__to_s]))(var705); /* to_s on <var705:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var700)->values[0]=var706;
{
var707 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var708 = ((val*(*)(val* self))(var707->class->vft[COLOR_core__abstract_text__Object__to_s]))(var707); /* to_s on <var707:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var700)->values[2]=var708;
{
var709 = ((val*(*)(val* self))(var700->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var700); /* native_to_s on <var700:NativeArray[String]>*/
}
varonce699 = var700;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2329);
fatal_exit(1);
}
{
var710 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var709, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var710); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce711!=NULL)) {
var712 = varonce711;
} else {
var713 = "unary -";
var714 = core__flat___NativeString___to_s_full(var713, 7l, 7l);
var712 = var714;
varonce711 = var712;
}
{
var715 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var712); /* == on <var_pname:String>*/
}
if (var715){
if (unlikely(varonce716==NULL)) {
var717 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce718!=NULL)) {
var719 = varonce718;
} else {
var720 = "-";
var721 = core__flat___NativeString___to_s_full(var720, 1l, 1l);
var719 = var721;
varonce718 = var719;
}
((struct instance_core__NativeArray*)var717)->values[0]=var719;
} else {
var717 = varonce716;
varonce716 = NULL;
}
{
var722 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var723 = ((val*(*)(val* self))(var722->class->vft[COLOR_core__abstract_text__Object__to_s]))(var722); /* to_s on <var722:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var717)->values[1]=var723;
{
var724 = ((val*(*)(val* self))(var717->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var717); /* native_to_s on <var717:NativeArray[String]>*/
}
varonce716 = var717;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2332);
fatal_exit(1);
}
{
var725 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var724, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var725); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce726!=NULL)) {
var727 = varonce726;
} else {
var728 = "unary +";
var729 = core__flat___NativeString___to_s_full(var728, 7l, 7l);
var727 = var729;
varonce726 = var727;
}
{
var730 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var727); /* == on <var_pname:String>*/
}
if (var730){
{
var731 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var731); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce732!=NULL)) {
var733 = varonce732;
} else {
var734 = "*";
var735 = core__flat___NativeString___to_s_full(var734, 1l, 1l);
var733 = var735;
varonce732 = var733;
}
{
var736 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var733); /* == on <var_pname:String>*/
}
if (var736){
if (unlikely(varonce737==NULL)) {
var738 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce739!=NULL)) {
var740 = varonce739;
} else {
var741 = " * ";
var742 = core__flat___NativeString___to_s_full(var741, 3l, 3l);
var740 = var742;
varonce739 = var740;
}
((struct instance_core__NativeArray*)var738)->values[1]=var740;
} else {
var738 = varonce737;
varonce737 = NULL;
}
{
var743 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var744 = ((val*(*)(val* self))(var743->class->vft[COLOR_core__abstract_text__Object__to_s]))(var743); /* to_s on <var743:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var738)->values[0]=var744;
{
var745 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var746 = ((val*(*)(val* self))(var745->class->vft[COLOR_core__abstract_text__Object__to_s]))(var745); /* to_s on <var745:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var738)->values[2]=var746;
{
var747 = ((val*(*)(val* self))(var738->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var738); /* native_to_s on <var738:NativeArray[String]>*/
}
varonce737 = var738;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2338);
fatal_exit(1);
}
{
var748 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var747, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var748); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce749!=NULL)) {
var750 = varonce749;
} else {
var751 = "/";
var752 = core__flat___NativeString___to_s_full(var751, 1l, 1l);
var750 = var752;
varonce749 = var750;
}
{
var753 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var750); /* == on <var_pname:String>*/
}
if (var753){
if (unlikely(varonce754==NULL)) {
var755 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce756!=NULL)) {
var757 = varonce756;
} else {
var758 = " / ";
var759 = core__flat___NativeString___to_s_full(var758, 3l, 3l);
var757 = var759;
varonce756 = var757;
}
((struct instance_core__NativeArray*)var755)->values[1]=var757;
} else {
var755 = varonce754;
varonce754 = NULL;
}
{
var760 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var761 = ((val*(*)(val* self))(var760->class->vft[COLOR_core__abstract_text__Object__to_s]))(var760); /* to_s on <var760:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var755)->values[0]=var761;
{
var762 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var763 = ((val*(*)(val* self))(var762->class->vft[COLOR_core__abstract_text__Object__to_s]))(var762); /* to_s on <var762:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var755)->values[2]=var763;
{
var764 = ((val*(*)(val* self))(var755->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var755); /* native_to_s on <var755:NativeArray[String]>*/
}
varonce754 = var755;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2341);
fatal_exit(1);
}
{
var765 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var764, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var765); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce766!=NULL)) {
var767 = varonce766;
} else {
var768 = "%";
var769 = core__flat___NativeString___to_s_full(var768, 1l, 1l);
var767 = var769;
varonce766 = var767;
}
{
var770 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var767); /* == on <var_pname:String>*/
}
if (var770){
if (unlikely(varonce771==NULL)) {
var772 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce773!=NULL)) {
var774 = varonce773;
} else {
var775 = " % ";
var776 = core__flat___NativeString___to_s_full(var775, 3l, 3l);
var774 = var776;
varonce773 = var774;
}
((struct instance_core__NativeArray*)var772)->values[1]=var774;
} else {
var772 = varonce771;
varonce771 = NULL;
}
{
var777 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var778 = ((val*(*)(val* self))(var777->class->vft[COLOR_core__abstract_text__Object__to_s]))(var777); /* to_s on <var777:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var772)->values[0]=var778;
{
var779 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var780 = ((val*(*)(val* self))(var779->class->vft[COLOR_core__abstract_text__Object__to_s]))(var779); /* to_s on <var779:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var772)->values[2]=var780;
{
var781 = ((val*(*)(val* self))(var772->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var772); /* native_to_s on <var772:NativeArray[String]>*/
}
varonce771 = var772;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2344);
fatal_exit(1);
}
{
var782 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var781, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var782); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce783!=NULL)) {
var784 = varonce783;
} else {
var785 = "==";
var786 = core__flat___NativeString___to_s_full(var785, 2l, 2l);
var784 = var786;
varonce783 = var784;
}
{
var787 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var784); /* == on <var_pname:String>*/
}
if (var787){
{
var788 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var789 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var790 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var788, var789);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var790); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce791!=NULL)) {
var792 = varonce791;
} else {
var793 = "!=";
var794 = core__flat___NativeString___to_s_full(var793, 2l, 2l);
var792 = var794;
varonce791 = var792;
}
{
var795 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var792); /* == on <var_pname:String>*/
}
if (var795){
{
var796 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var797 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var798 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var796, var797);
}
var_res799 = var798;
if (unlikely(varonce800==NULL)) {
var801 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce802!=NULL)) {
var803 = varonce802;
} else {
var804 = "!";
var805 = core__flat___NativeString___to_s_full(var804, 1l, 1l);
var803 = var805;
varonce802 = var803;
}
((struct instance_core__NativeArray*)var801)->values[0]=var803;
} else {
var801 = varonce800;
varonce800 = NULL;
}
{
var806 = ((val*(*)(val* self))(var_res799->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res799); /* to_s on <var_res799:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var801)->values[1]=var806;
{
var807 = ((val*(*)(val* self))(var801->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var801); /* native_to_s on <var801:NativeArray[String]>*/
}
varonce800 = var801;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2351);
fatal_exit(1);
}
{
var808 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var807, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var808); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce809!=NULL)) {
var810 = varonce809;
} else {
var811 = "<";
var812 = core__flat___NativeString___to_s_full(var811, 1l, 1l);
var810 = var812;
varonce809 = var810;
}
{
var813 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var810); /* == on <var_pname:String>*/
}
if (var813){
if (unlikely(varonce814==NULL)) {
var815 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce816!=NULL)) {
var817 = varonce816;
} else {
var818 = " < ";
var819 = core__flat___NativeString___to_s_full(var818, 3l, 3l);
var817 = var819;
varonce816 = var817;
}
((struct instance_core__NativeArray*)var815)->values[1]=var817;
} else {
var815 = varonce814;
varonce814 = NULL;
}
{
var820 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var821 = ((val*(*)(val* self))(var820->class->vft[COLOR_core__abstract_text__Object__to_s]))(var820); /* to_s on <var820:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var815)->values[0]=var821;
{
var822 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var823 = ((val*(*)(val* self))(var822->class->vft[COLOR_core__abstract_text__Object__to_s]))(var822); /* to_s on <var822:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var815)->values[2]=var823;
{
var824 = ((val*(*)(val* self))(var815->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var815); /* native_to_s on <var815:NativeArray[String]>*/
}
varonce814 = var815;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2354);
fatal_exit(1);
}
{
var825 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var824, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var825); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce826!=NULL)) {
var827 = varonce826;
} else {
var828 = ">";
var829 = core__flat___NativeString___to_s_full(var828, 1l, 1l);
var827 = var829;
varonce826 = var827;
}
{
var830 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var827); /* == on <var_pname:String>*/
}
if (var830){
if (unlikely(varonce831==NULL)) {
var832 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce833!=NULL)) {
var834 = varonce833;
} else {
var835 = " > ";
var836 = core__flat___NativeString___to_s_full(var835, 3l, 3l);
var834 = var836;
varonce833 = var834;
}
((struct instance_core__NativeArray*)var832)->values[1]=var834;
} else {
var832 = varonce831;
varonce831 = NULL;
}
{
var837 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var838 = ((val*(*)(val* self))(var837->class->vft[COLOR_core__abstract_text__Object__to_s]))(var837); /* to_s on <var837:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var832)->values[0]=var838;
{
var839 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var840 = ((val*(*)(val* self))(var839->class->vft[COLOR_core__abstract_text__Object__to_s]))(var839); /* to_s on <var839:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var832)->values[2]=var840;
{
var841 = ((val*(*)(val* self))(var832->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var832); /* native_to_s on <var832:NativeArray[String]>*/
}
varonce831 = var832;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2357);
fatal_exit(1);
}
{
var842 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var841, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var842); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce843!=NULL)) {
var844 = varonce843;
} else {
var845 = "<=";
var846 = core__flat___NativeString___to_s_full(var845, 2l, 2l);
var844 = var846;
varonce843 = var844;
}
{
var847 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var844); /* == on <var_pname:String>*/
}
if (var847){
if (unlikely(varonce848==NULL)) {
var849 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce850!=NULL)) {
var851 = varonce850;
} else {
var852 = " <= ";
var853 = core__flat___NativeString___to_s_full(var852, 4l, 4l);
var851 = var853;
varonce850 = var851;
}
((struct instance_core__NativeArray*)var849)->values[1]=var851;
} else {
var849 = varonce848;
varonce848 = NULL;
}
{
var854 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var855 = ((val*(*)(val* self))(var854->class->vft[COLOR_core__abstract_text__Object__to_s]))(var854); /* to_s on <var854:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var849)->values[0]=var855;
{
var856 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var857 = ((val*(*)(val* self))(var856->class->vft[COLOR_core__abstract_text__Object__to_s]))(var856); /* to_s on <var856:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var849)->values[2]=var857;
{
var858 = ((val*(*)(val* self))(var849->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var849); /* native_to_s on <var849:NativeArray[String]>*/
}
varonce848 = var849;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2360);
fatal_exit(1);
}
{
var859 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var858, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var859); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce860!=NULL)) {
var861 = varonce860;
} else {
var862 = ">=";
var863 = core__flat___NativeString___to_s_full(var862, 2l, 2l);
var861 = var863;
varonce860 = var861;
}
{
var864 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var861); /* == on <var_pname:String>*/
}
if (var864){
if (unlikely(varonce865==NULL)) {
var866 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce867!=NULL)) {
var868 = varonce867;
} else {
var869 = " >= ";
var870 = core__flat___NativeString___to_s_full(var869, 4l, 4l);
var868 = var870;
varonce867 = var868;
}
((struct instance_core__NativeArray*)var866)->values[1]=var868;
} else {
var866 = varonce865;
varonce865 = NULL;
}
{
var871 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var872 = ((val*(*)(val* self))(var871->class->vft[COLOR_core__abstract_text__Object__to_s]))(var871); /* to_s on <var871:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var866)->values[0]=var872;
{
var873 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var874 = ((val*(*)(val* self))(var873->class->vft[COLOR_core__abstract_text__Object__to_s]))(var873); /* to_s on <var873:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var866)->values[2]=var874;
{
var875 = ((val*(*)(val* self))(var866->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var866); /* native_to_s on <var866:NativeArray[String]>*/
}
varonce865 = var866;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2363);
fatal_exit(1);
}
{
var876 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var875, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var876); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce877!=NULL)) {
var878 = varonce877;
} else {
var879 = ">>";
var880 = core__flat___NativeString___to_s_full(var879, 2l, 2l);
var878 = var880;
varonce877 = var878;
}
{
var881 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var878); /* == on <var_pname:String>*/
}
if (var881){
if (unlikely(varonce882==NULL)) {
var883 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce884!=NULL)) {
var885 = varonce884;
} else {
var886 = " >> ";
var887 = core__flat___NativeString___to_s_full(var886, 4l, 4l);
var885 = var887;
varonce884 = var885;
}
((struct instance_core__NativeArray*)var883)->values[1]=var885;
} else {
var883 = varonce882;
varonce882 = NULL;
}
{
var888 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var889 = ((val*(*)(val* self))(var888->class->vft[COLOR_core__abstract_text__Object__to_s]))(var888); /* to_s on <var888:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var883)->values[0]=var889;
{
var890 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var891 = ((val*(*)(val* self))(var890->class->vft[COLOR_core__abstract_text__Object__to_s]))(var890); /* to_s on <var890:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var883)->values[2]=var891;
{
var892 = ((val*(*)(val* self))(var883->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var883); /* native_to_s on <var883:NativeArray[String]>*/
}
varonce882 = var883;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2366);
fatal_exit(1);
}
{
var893 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var892, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var893); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce894!=NULL)) {
var895 = varonce894;
} else {
var896 = "<<";
var897 = core__flat___NativeString___to_s_full(var896, 2l, 2l);
var895 = var897;
varonce894 = var895;
}
{
var898 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var895); /* == on <var_pname:String>*/
}
if (var898){
if (unlikely(varonce899==NULL)) {
var900 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce901!=NULL)) {
var902 = varonce901;
} else {
var903 = " << ";
var904 = core__flat___NativeString___to_s_full(var903, 4l, 4l);
var902 = var904;
varonce901 = var902;
}
((struct instance_core__NativeArray*)var900)->values[1]=var902;
} else {
var900 = varonce899;
varonce899 = NULL;
}
{
var905 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var906 = ((val*(*)(val* self))(var905->class->vft[COLOR_core__abstract_text__Object__to_s]))(var905); /* to_s on <var905:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var900)->values[0]=var906;
{
var907 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var908 = ((val*(*)(val* self))(var907->class->vft[COLOR_core__abstract_text__Object__to_s]))(var907); /* to_s on <var907:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var900)->values[2]=var908;
{
var909 = ((val*(*)(val* self))(var900->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var900); /* native_to_s on <var900:NativeArray[String]>*/
}
varonce899 = var900;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2369);
fatal_exit(1);
}
{
var910 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var909, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var910); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce911!=NULL)) {
var912 = varonce911;
} else {
var913 = "&";
var914 = core__flat___NativeString___to_s_full(var913, 1l, 1l);
var912 = var914;
varonce911 = var912;
}
{
var915 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var912); /* == on <var_pname:String>*/
}
if (var915){
if (unlikely(varonce916==NULL)) {
var917 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce918!=NULL)) {
var919 = varonce918;
} else {
var920 = " & ";
var921 = core__flat___NativeString___to_s_full(var920, 3l, 3l);
var919 = var921;
varonce918 = var919;
}
((struct instance_core__NativeArray*)var917)->values[1]=var919;
} else {
var917 = varonce916;
varonce916 = NULL;
}
{
var922 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var923 = ((val*(*)(val* self))(var922->class->vft[COLOR_core__abstract_text__Object__to_s]))(var922); /* to_s on <var922:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var917)->values[0]=var923;
{
var924 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var925 = ((val*(*)(val* self))(var924->class->vft[COLOR_core__abstract_text__Object__to_s]))(var924); /* to_s on <var924:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var917)->values[2]=var925;
{
var926 = ((val*(*)(val* self))(var917->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var917); /* native_to_s on <var917:NativeArray[String]>*/
}
varonce916 = var917;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2372);
fatal_exit(1);
}
{
var927 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var926, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var927); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce928!=NULL)) {
var929 = varonce928;
} else {
var930 = "to_i";
var931 = core__flat___NativeString___to_s_full(var930, 4l, 4l);
var929 = var931;
varonce928 = var929;
}
{
var932 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var929); /* == on <var_pname:String>*/
}
if (var932){
if (unlikely(varonce933==NULL)) {
var934 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce935!=NULL)) {
var936 = varonce935;
} else {
var937 = "(long)";
var938 = core__flat___NativeString___to_s_full(var937, 6l, 6l);
var936 = var938;
varonce935 = var936;
}
((struct instance_core__NativeArray*)var934)->values[0]=var936;
} else {
var934 = varonce933;
varonce933 = NULL;
}
{
var939 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var940 = ((val*(*)(val* self))(var939->class->vft[COLOR_core__abstract_text__Object__to_s]))(var939); /* to_s on <var939:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var934)->values[1]=var940;
{
var941 = ((val*(*)(val* self))(var934->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var934); /* native_to_s on <var934:NativeArray[String]>*/
}
varonce933 = var934;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2375);
fatal_exit(1);
}
{
var942 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var941, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var942); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce943!=NULL)) {
var944 = varonce943;
} else {
var945 = "to_f";
var946 = core__flat___NativeString___to_s_full(var945, 4l, 4l);
var944 = var946;
varonce943 = var944;
}
{
var947 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var944); /* == on <var_pname:String>*/
}
if (var947){
if (unlikely(varonce948==NULL)) {
var949 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce950!=NULL)) {
var951 = varonce950;
} else {
var952 = "(double)";
var953 = core__flat___NativeString___to_s_full(var952, 8l, 8l);
var951 = var953;
varonce950 = var951;
}
((struct instance_core__NativeArray*)var949)->values[0]=var951;
} else {
var949 = varonce948;
varonce948 = NULL;
}
{
var954 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var955 = ((val*(*)(val* self))(var954->class->vft[COLOR_core__abstract_text__Object__to_s]))(var954); /* to_s on <var954:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var949)->values[1]=var955;
{
var956 = ((val*(*)(val* self))(var949->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var949); /* native_to_s on <var949:NativeArray[String]>*/
}
varonce948 = var949;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2378);
fatal_exit(1);
}
{
var957 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var956, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var957); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce958!=NULL)) {
var959 = varonce958;
} else {
var960 = "to_i8";
var961 = core__flat___NativeString___to_s_full(var960, 5l, 5l);
var959 = var961;
varonce958 = var959;
}
{
var962 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var959); /* == on <var_pname:String>*/
}
if (var962){
if (unlikely(varonce963==NULL)) {
var964 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce965!=NULL)) {
var966 = varonce965;
} else {
var967 = "(int8_t)";
var968 = core__flat___NativeString___to_s_full(var967, 8l, 8l);
var966 = var968;
varonce965 = var966;
}
((struct instance_core__NativeArray*)var964)->values[0]=var966;
} else {
var964 = varonce963;
varonce963 = NULL;
}
{
var969 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var970 = ((val*(*)(val* self))(var969->class->vft[COLOR_core__abstract_text__Object__to_s]))(var969); /* to_s on <var969:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var964)->values[1]=var970;
{
var971 = ((val*(*)(val* self))(var964->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var964); /* native_to_s on <var964:NativeArray[String]>*/
}
varonce963 = var964;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2381);
fatal_exit(1);
}
{
var972 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var971, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var972); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce973!=NULL)) {
var974 = varonce973;
} else {
var975 = "to_i16";
var976 = core__flat___NativeString___to_s_full(var975, 6l, 6l);
var974 = var976;
varonce973 = var974;
}
{
var977 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var974); /* == on <var_pname:String>*/
}
if (var977){
if (unlikely(varonce978==NULL)) {
var979 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce980!=NULL)) {
var981 = varonce980;
} else {
var982 = "(int16_t)";
var983 = core__flat___NativeString___to_s_full(var982, 9l, 9l);
var981 = var983;
varonce980 = var981;
}
((struct instance_core__NativeArray*)var979)->values[0]=var981;
} else {
var979 = varonce978;
varonce978 = NULL;
}
{
var984 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var985 = ((val*(*)(val* self))(var984->class->vft[COLOR_core__abstract_text__Object__to_s]))(var984); /* to_s on <var984:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var979)->values[1]=var985;
{
var986 = ((val*(*)(val* self))(var979->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var979); /* native_to_s on <var979:NativeArray[String]>*/
}
varonce978 = var979;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2384);
fatal_exit(1);
}
{
var987 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var986, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var987); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce988!=NULL)) {
var989 = varonce988;
} else {
var990 = "to_u16";
var991 = core__flat___NativeString___to_s_full(var990, 6l, 6l);
var989 = var991;
varonce988 = var989;
}
{
var992 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var989); /* == on <var_pname:String>*/
}
if (var992){
if (unlikely(varonce993==NULL)) {
var994 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce995!=NULL)) {
var996 = varonce995;
} else {
var997 = "(uint16_t)";
var998 = core__flat___NativeString___to_s_full(var997, 10l, 10l);
var996 = var998;
varonce995 = var996;
}
((struct instance_core__NativeArray*)var994)->values[0]=var996;
} else {
var994 = varonce993;
varonce993 = NULL;
}
{
var999 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1000 = ((val*(*)(val* self))(var999->class->vft[COLOR_core__abstract_text__Object__to_s]))(var999); /* to_s on <var999:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var994)->values[1]=var1000;
{
var1001 = ((val*(*)(val* self))(var994->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var994); /* native_to_s on <var994:NativeArray[String]>*/
}
varonce993 = var994;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2387);
fatal_exit(1);
}
{
var1002 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1001, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1002); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1003!=NULL)) {
var1004 = varonce1003;
} else {
var1005 = "to_i32";
var1006 = core__flat___NativeString___to_s_full(var1005, 6l, 6l);
var1004 = var1006;
varonce1003 = var1004;
}
{
var1007 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1004); /* == on <var_pname:String>*/
}
if (var1007){
if (unlikely(varonce1008==NULL)) {
var1009 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1010!=NULL)) {
var1011 = varonce1010;
} else {
var1012 = "(int32_t)";
var1013 = core__flat___NativeString___to_s_full(var1012, 9l, 9l);
var1011 = var1013;
varonce1010 = var1011;
}
((struct instance_core__NativeArray*)var1009)->values[0]=var1011;
} else {
var1009 = varonce1008;
varonce1008 = NULL;
}
{
var1014 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1015 = ((val*(*)(val* self))(var1014->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1014); /* to_s on <var1014:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1009)->values[1]=var1015;
{
var1016 = ((val*(*)(val* self))(var1009->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1009); /* native_to_s on <var1009:NativeArray[String]>*/
}
varonce1008 = var1009;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2390);
fatal_exit(1);
}
{
var1017 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1016, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1017); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1018!=NULL)) {
var1019 = varonce1018;
} else {
var1020 = "to_u32";
var1021 = core__flat___NativeString___to_s_full(var1020, 6l, 6l);
var1019 = var1021;
varonce1018 = var1019;
}
{
var1022 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1019); /* == on <var_pname:String>*/
}
if (var1022){
if (unlikely(varonce1023==NULL)) {
var1024 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1025!=NULL)) {
var1026 = varonce1025;
} else {
var1027 = "(uint32_t)";
var1028 = core__flat___NativeString___to_s_full(var1027, 10l, 10l);
var1026 = var1028;
varonce1025 = var1026;
}
((struct instance_core__NativeArray*)var1024)->values[0]=var1026;
} else {
var1024 = varonce1023;
varonce1023 = NULL;
}
{
var1029 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1030 = ((val*(*)(val* self))(var1029->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1029); /* to_s on <var1029:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1024)->values[1]=var1030;
{
var1031 = ((val*(*)(val* self))(var1024->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1024); /* native_to_s on <var1024:NativeArray[String]>*/
}
varonce1023 = var1024;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2393);
fatal_exit(1);
}
{
var1032 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1031, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1032); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1033!=NULL)) {
var1034 = varonce1033;
} else {
var1035 = "ascii";
var1036 = core__flat___NativeString___to_s_full(var1035, 5l, 5l);
var1034 = var1036;
varonce1033 = var1034;
}
{
var1037 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1034); /* == on <var_pname:String>*/
}
if (var1037){
if (unlikely(varonce1038==NULL)) {
var1039 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1040!=NULL)) {
var1041 = varonce1040;
} else {
var1042 = "(uint32_t)";
var1043 = core__flat___NativeString___to_s_full(var1042, 10l, 10l);
var1041 = var1043;
varonce1040 = var1041;
}
((struct instance_core__NativeArray*)var1039)->values[0]=var1041;
} else {
var1039 = varonce1038;
varonce1038 = NULL;
}
{
var1044 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1045 = ((val*(*)(val* self))(var1044->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1044); /* to_s on <var1044:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1039)->values[1]=var1045;
{
var1046 = ((val*(*)(val* self))(var1039->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1039); /* native_to_s on <var1039:NativeArray[String]>*/
}
varonce1038 = var1039;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2396);
fatal_exit(1);
}
{
var1047 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1046, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1047); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
}
}
} else {
if (likely(varonce1048!=NULL)) {
var1049 = varonce1048;
} else {
var1050 = "Bool";
var1051 = core__flat___NativeString___to_s_full(var1050, 4l, 4l);
var1049 = var1051;
varonce1048 = var1049;
}
{
var1052 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1049); /* == on <var_cname:String>*/
}
if (var1052){
if (likely(varonce1053!=NULL)) {
var1054 = varonce1053;
} else {
var1055 = "output";
var1056 = core__flat___NativeString___to_s_full(var1055, 6l, 6l);
var1054 = var1056;
varonce1053 = var1054;
}
{
var1057 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1054); /* == on <var_pname:String>*/
}
if (var1057){
if (unlikely(varonce1058==NULL)) {
var1059 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1060!=NULL)) {
var1061 = varonce1060;
} else {
var1062 = "printf(";
var1063 = core__flat___NativeString___to_s_full(var1062, 7l, 7l);
var1061 = var1063;
varonce1060 = var1061;
}
((struct instance_core__NativeArray*)var1059)->values[0]=var1061;
if (likely(varonce1064!=NULL)) {
var1065 = varonce1064;
} else {
var1066 = "?\"true\\n\":\"false\\n\");";
var1067 = core__flat___NativeString___to_s_full(var1066, 21l, 21l);
var1065 = var1067;
varonce1064 = var1065;
}
((struct instance_core__NativeArray*)var1059)->values[2]=var1065;
} else {
var1059 = varonce1058;
varonce1058 = NULL;
}
{
var1068 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1069 = ((val*(*)(val* self))(var1068->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1068); /* to_s on <var1068:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1059)->values[1]=var1069;
{
var1070 = ((val*(*)(val* self))(var1059->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1059); /* native_to_s on <var1059:NativeArray[String]>*/
}
varonce1058 = var1059;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1070); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1071!=NULL)) {
var1072 = varonce1071;
} else {
var1073 = "object_id";
var1074 = core__flat___NativeString___to_s_full(var1073, 9l, 9l);
var1072 = var1074;
varonce1071 = var1072;
}
{
var1075 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1072); /* == on <var_pname:String>*/
}
if (var1075){
if (unlikely(varonce1076==NULL)) {
var1077 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1078!=NULL)) {
var1079 = varonce1078;
} else {
var1080 = "(long)";
var1081 = core__flat___NativeString___to_s_full(var1080, 6l, 6l);
var1079 = var1081;
varonce1078 = var1079;
}
((struct instance_core__NativeArray*)var1077)->values[0]=var1079;
} else {
var1077 = varonce1076;
varonce1076 = NULL;
}
{
var1082 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1083 = ((val*(*)(val* self))(var1082->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1082); /* to_s on <var1082:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1077)->values[1]=var1083;
{
var1084 = ((val*(*)(val* self))(var1077->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1077); /* native_to_s on <var1077:NativeArray[String]>*/
}
varonce1076 = var1077;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2404);
fatal_exit(1);
}
{
var1085 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1084, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1085); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1086!=NULL)) {
var1087 = varonce1086;
} else {
var1088 = "==";
var1089 = core__flat___NativeString___to_s_full(var1088, 2l, 2l);
var1087 = var1089;
varonce1086 = var1087;
}
{
var1090 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1087); /* == on <var_pname:String>*/
}
if (var1090){
{
var1091 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1092 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1093 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1091, var1092);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1093); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1094!=NULL)) {
var1095 = varonce1094;
} else {
var1096 = "!=";
var1097 = core__flat___NativeString___to_s_full(var1096, 2l, 2l);
var1095 = var1097;
varonce1094 = var1095;
}
{
var1098 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1095); /* == on <var_pname:String>*/
}
if (var1098){
{
var1099 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1100 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1101 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1099, var1100);
}
var_res1102 = var1101;
if (unlikely(varonce1103==NULL)) {
var1104 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1105!=NULL)) {
var1106 = varonce1105;
} else {
var1107 = "!";
var1108 = core__flat___NativeString___to_s_full(var1107, 1l, 1l);
var1106 = var1108;
varonce1105 = var1106;
}
((struct instance_core__NativeArray*)var1104)->values[0]=var1106;
} else {
var1104 = varonce1103;
varonce1103 = NULL;
}
{
var1109 = ((val*(*)(val* self))(var_res1102->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1102); /* to_s on <var_res1102:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1104)->values[1]=var1109;
{
var1110 = ((val*(*)(val* self))(var1104->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1104); /* native_to_s on <var1104:NativeArray[String]>*/
}
varonce1103 = var1104;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2411);
fatal_exit(1);
}
{
var1111 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1110, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1111); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (likely(varonce1112!=NULL)) {
var1113 = varonce1112;
} else {
var1114 = "Float";
var1115 = core__flat___NativeString___to_s_full(var1114, 5l, 5l);
var1113 = var1115;
varonce1112 = var1113;
}
{
var1116 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1113); /* == on <var_cname:String>*/
}
if (var1116){
if (likely(varonce1117!=NULL)) {
var1118 = varonce1117;
} else {
var1119 = "output";
var1120 = core__flat___NativeString___to_s_full(var1119, 6l, 6l);
var1118 = var1120;
varonce1117 = var1118;
}
{
var1121 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1118); /* == on <var_pname:String>*/
}
if (var1121){
if (unlikely(varonce1122==NULL)) {
var1123 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1124!=NULL)) {
var1125 = varonce1124;
} else {
var1126 = "printf(\"%f\\n\", ";
var1127 = core__flat___NativeString___to_s_full(var1126, 15l, 15l);
var1125 = var1127;
varonce1124 = var1125;
}
((struct instance_core__NativeArray*)var1123)->values[0]=var1125;
if (likely(varonce1128!=NULL)) {
var1129 = varonce1128;
} else {
var1130 = ");";
var1131 = core__flat___NativeString___to_s_full(var1130, 2l, 2l);
var1129 = var1131;
varonce1128 = var1129;
}
((struct instance_core__NativeArray*)var1123)->values[2]=var1129;
} else {
var1123 = varonce1122;
varonce1122 = NULL;
}
{
var1132 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1133 = ((val*(*)(val* self))(var1132->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1132); /* to_s on <var1132:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1123)->values[1]=var1133;
{
var1134 = ((val*(*)(val* self))(var1123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1123); /* native_to_s on <var1123:NativeArray[String]>*/
}
varonce1122 = var1123;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1134); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1135!=NULL)) {
var1136 = varonce1135;
} else {
var1137 = "object_id";
var1138 = core__flat___NativeString___to_s_full(var1137, 9l, 9l);
var1136 = var1138;
varonce1135 = var1136;
}
{
var1139 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1136); /* == on <var_pname:String>*/
}
if (var1139){
if (unlikely(varonce1140==NULL)) {
var1141 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1142!=NULL)) {
var1143 = varonce1142;
} else {
var1144 = "(double)";
var1145 = core__flat___NativeString___to_s_full(var1144, 8l, 8l);
var1143 = var1145;
varonce1142 = var1143;
}
((struct instance_core__NativeArray*)var1141)->values[0]=var1143;
} else {
var1141 = varonce1140;
varonce1140 = NULL;
}
{
var1146 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1147 = ((val*(*)(val* self))(var1146->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1146); /* to_s on <var1146:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1141)->values[1]=var1147;
{
var1148 = ((val*(*)(val* self))(var1141->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1141); /* native_to_s on <var1141:NativeArray[String]>*/
}
varonce1140 = var1141;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2419);
fatal_exit(1);
}
{
var1149 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1148, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1149); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1150!=NULL)) {
var1151 = varonce1150;
} else {
var1152 = "+";
var1153 = core__flat___NativeString___to_s_full(var1152, 1l, 1l);
var1151 = var1153;
varonce1150 = var1151;
}
{
var1154 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1151); /* == on <var_pname:String>*/
}
if (var1154){
if (unlikely(varonce1155==NULL)) {
var1156 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1157!=NULL)) {
var1158 = varonce1157;
} else {
var1159 = " + ";
var1160 = core__flat___NativeString___to_s_full(var1159, 3l, 3l);
var1158 = var1160;
varonce1157 = var1158;
}
((struct instance_core__NativeArray*)var1156)->values[1]=var1158;
} else {
var1156 = varonce1155;
varonce1155 = NULL;
}
{
var1161 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1162 = ((val*(*)(val* self))(var1161->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1161); /* to_s on <var1161:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1156)->values[0]=var1162;
{
var1163 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1164 = ((val*(*)(val* self))(var1163->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1163); /* to_s on <var1163:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1156)->values[2]=var1164;
{
var1165 = ((val*(*)(val* self))(var1156->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1156); /* native_to_s on <var1156:NativeArray[String]>*/
}
varonce1155 = var1156;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2422);
fatal_exit(1);
}
{
var1166 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1165, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1166); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1167!=NULL)) {
var1168 = varonce1167;
} else {
var1169 = "-";
var1170 = core__flat___NativeString___to_s_full(var1169, 1l, 1l);
var1168 = var1170;
varonce1167 = var1168;
}
{
var1171 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1168); /* == on <var_pname:String>*/
}
if (var1171){
if (unlikely(varonce1172==NULL)) {
var1173 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1174!=NULL)) {
var1175 = varonce1174;
} else {
var1176 = " - ";
var1177 = core__flat___NativeString___to_s_full(var1176, 3l, 3l);
var1175 = var1177;
varonce1174 = var1175;
}
((struct instance_core__NativeArray*)var1173)->values[1]=var1175;
} else {
var1173 = varonce1172;
varonce1172 = NULL;
}
{
var1178 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1179 = ((val*(*)(val* self))(var1178->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1178); /* to_s on <var1178:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1173)->values[0]=var1179;
{
var1180 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1181 = ((val*(*)(val* self))(var1180->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1180); /* to_s on <var1180:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1173)->values[2]=var1181;
{
var1182 = ((val*(*)(val* self))(var1173->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1173); /* native_to_s on <var1173:NativeArray[String]>*/
}
varonce1172 = var1173;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2425);
fatal_exit(1);
}
{
var1183 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1182, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1183); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1184!=NULL)) {
var1185 = varonce1184;
} else {
var1186 = "unary -";
var1187 = core__flat___NativeString___to_s_full(var1186, 7l, 7l);
var1185 = var1187;
varonce1184 = var1185;
}
{
var1188 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1185); /* == on <var_pname:String>*/
}
if (var1188){
if (unlikely(varonce1189==NULL)) {
var1190 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1191!=NULL)) {
var1192 = varonce1191;
} else {
var1193 = "-";
var1194 = core__flat___NativeString___to_s_full(var1193, 1l, 1l);
var1192 = var1194;
varonce1191 = var1192;
}
((struct instance_core__NativeArray*)var1190)->values[0]=var1192;
} else {
var1190 = varonce1189;
varonce1189 = NULL;
}
{
var1195 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1196 = ((val*(*)(val* self))(var1195->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1195); /* to_s on <var1195:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1190)->values[1]=var1196;
{
var1197 = ((val*(*)(val* self))(var1190->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1190); /* native_to_s on <var1190:NativeArray[String]>*/
}
varonce1189 = var1190;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2428);
fatal_exit(1);
}
{
var1198 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1197, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1198); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1199!=NULL)) {
var1200 = varonce1199;
} else {
var1201 = "unary +";
var1202 = core__flat___NativeString___to_s_full(var1201, 7l, 7l);
var1200 = var1202;
varonce1199 = var1200;
}
{
var1203 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1200); /* == on <var_pname:String>*/
}
if (var1203){
{
var1204 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1204); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1205!=NULL)) {
var1206 = varonce1205;
} else {
var1207 = "succ";
var1208 = core__flat___NativeString___to_s_full(var1207, 4l, 4l);
var1206 = var1208;
varonce1205 = var1206;
}
{
var1209 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1206); /* == on <var_pname:String>*/
}
if (var1209){
if (unlikely(varonce1210==NULL)) {
var1211 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1212!=NULL)) {
var1213 = varonce1212;
} else {
var1214 = "+1";
var1215 = core__flat___NativeString___to_s_full(var1214, 2l, 2l);
var1213 = var1215;
varonce1212 = var1213;
}
((struct instance_core__NativeArray*)var1211)->values[1]=var1213;
} else {
var1211 = varonce1210;
varonce1210 = NULL;
}
{
var1216 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1217 = ((val*(*)(val* self))(var1216->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1216); /* to_s on <var1216:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1211)->values[0]=var1217;
{
var1218 = ((val*(*)(val* self))(var1211->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1211); /* native_to_s on <var1211:NativeArray[String]>*/
}
varonce1210 = var1211;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2434);
fatal_exit(1);
}
{
var1219 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1218, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1219); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1220!=NULL)) {
var1221 = varonce1220;
} else {
var1222 = "prec";
var1223 = core__flat___NativeString___to_s_full(var1222, 4l, 4l);
var1221 = var1223;
varonce1220 = var1221;
}
{
var1224 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1221); /* == on <var_pname:String>*/
}
if (var1224){
if (unlikely(varonce1225==NULL)) {
var1226 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1227!=NULL)) {
var1228 = varonce1227;
} else {
var1229 = "-1";
var1230 = core__flat___NativeString___to_s_full(var1229, 2l, 2l);
var1228 = var1230;
varonce1227 = var1228;
}
((struct instance_core__NativeArray*)var1226)->values[1]=var1228;
} else {
var1226 = varonce1225;
varonce1225 = NULL;
}
{
var1231 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1232 = ((val*(*)(val* self))(var1231->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1231); /* to_s on <var1231:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1226)->values[0]=var1232;
{
var1233 = ((val*(*)(val* self))(var1226->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1226); /* native_to_s on <var1226:NativeArray[String]>*/
}
varonce1225 = var1226;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2437);
fatal_exit(1);
}
{
var1234 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1233, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1234); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1235!=NULL)) {
var1236 = varonce1235;
} else {
var1237 = "*";
var1238 = core__flat___NativeString___to_s_full(var1237, 1l, 1l);
var1236 = var1238;
varonce1235 = var1236;
}
{
var1239 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1236); /* == on <var_pname:String>*/
}
if (var1239){
if (unlikely(varonce1240==NULL)) {
var1241 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1242!=NULL)) {
var1243 = varonce1242;
} else {
var1244 = " * ";
var1245 = core__flat___NativeString___to_s_full(var1244, 3l, 3l);
var1243 = var1245;
varonce1242 = var1243;
}
((struct instance_core__NativeArray*)var1241)->values[1]=var1243;
} else {
var1241 = varonce1240;
varonce1240 = NULL;
}
{
var1246 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1247 = ((val*(*)(val* self))(var1246->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1246); /* to_s on <var1246:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1241)->values[0]=var1247;
{
var1248 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1249 = ((val*(*)(val* self))(var1248->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1248); /* to_s on <var1248:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1241)->values[2]=var1249;
{
var1250 = ((val*(*)(val* self))(var1241->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1241); /* native_to_s on <var1241:NativeArray[String]>*/
}
varonce1240 = var1241;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2440);
fatal_exit(1);
}
{
var1251 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1250, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1251); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1252!=NULL)) {
var1253 = varonce1252;
} else {
var1254 = "/";
var1255 = core__flat___NativeString___to_s_full(var1254, 1l, 1l);
var1253 = var1255;
varonce1252 = var1253;
}
{
var1256 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1253); /* == on <var_pname:String>*/
}
if (var1256){
if (unlikely(varonce1257==NULL)) {
var1258 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1259!=NULL)) {
var1260 = varonce1259;
} else {
var1261 = " / ";
var1262 = core__flat___NativeString___to_s_full(var1261, 3l, 3l);
var1260 = var1262;
varonce1259 = var1260;
}
((struct instance_core__NativeArray*)var1258)->values[1]=var1260;
} else {
var1258 = varonce1257;
varonce1257 = NULL;
}
{
var1263 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1264 = ((val*(*)(val* self))(var1263->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1263); /* to_s on <var1263:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1258)->values[0]=var1264;
{
var1265 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1266 = ((val*(*)(val* self))(var1265->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1265); /* to_s on <var1265:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1258)->values[2]=var1266;
{
var1267 = ((val*(*)(val* self))(var1258->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1258); /* native_to_s on <var1258:NativeArray[String]>*/
}
varonce1257 = var1258;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2443);
fatal_exit(1);
}
{
var1268 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1267, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1268); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1269!=NULL)) {
var1270 = varonce1269;
} else {
var1271 = "==";
var1272 = core__flat___NativeString___to_s_full(var1271, 2l, 2l);
var1270 = var1272;
varonce1269 = var1270;
}
{
var1273 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1270); /* == on <var_pname:String>*/
}
if (var1273){
{
var1274 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1275 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1276 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1274, var1275);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1276); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1277!=NULL)) {
var1278 = varonce1277;
} else {
var1279 = "!=";
var1280 = core__flat___NativeString___to_s_full(var1279, 2l, 2l);
var1278 = var1280;
varonce1277 = var1278;
}
{
var1281 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1278); /* == on <var_pname:String>*/
}
if (var1281){
{
var1282 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1283 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1284 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1282, var1283);
}
var_res1285 = var1284;
if (unlikely(varonce1286==NULL)) {
var1287 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1288!=NULL)) {
var1289 = varonce1288;
} else {
var1290 = "!";
var1291 = core__flat___NativeString___to_s_full(var1290, 1l, 1l);
var1289 = var1291;
varonce1288 = var1289;
}
((struct instance_core__NativeArray*)var1287)->values[0]=var1289;
} else {
var1287 = varonce1286;
varonce1286 = NULL;
}
{
var1292 = ((val*(*)(val* self))(var_res1285->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1285); /* to_s on <var_res1285:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1287)->values[1]=var1292;
{
var1293 = ((val*(*)(val* self))(var1287->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1287); /* native_to_s on <var1287:NativeArray[String]>*/
}
varonce1286 = var1287;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2450);
fatal_exit(1);
}
{
var1294 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1293, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1294); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1295!=NULL)) {
var1296 = varonce1295;
} else {
var1297 = "<";
var1298 = core__flat___NativeString___to_s_full(var1297, 1l, 1l);
var1296 = var1298;
varonce1295 = var1296;
}
{
var1299 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1296); /* == on <var_pname:String>*/
}
if (var1299){
if (unlikely(varonce1300==NULL)) {
var1301 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1302!=NULL)) {
var1303 = varonce1302;
} else {
var1304 = " < ";
var1305 = core__flat___NativeString___to_s_full(var1304, 3l, 3l);
var1303 = var1305;
varonce1302 = var1303;
}
((struct instance_core__NativeArray*)var1301)->values[1]=var1303;
} else {
var1301 = varonce1300;
varonce1300 = NULL;
}
{
var1306 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1307 = ((val*(*)(val* self))(var1306->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1306); /* to_s on <var1306:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1301)->values[0]=var1307;
{
var1308 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1309 = ((val*(*)(val* self))(var1308->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1308); /* to_s on <var1308:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1301)->values[2]=var1309;
{
var1310 = ((val*(*)(val* self))(var1301->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1301); /* native_to_s on <var1301:NativeArray[String]>*/
}
varonce1300 = var1301;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2453);
fatal_exit(1);
}
{
var1311 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1310, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1311); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1312!=NULL)) {
var1313 = varonce1312;
} else {
var1314 = ">";
var1315 = core__flat___NativeString___to_s_full(var1314, 1l, 1l);
var1313 = var1315;
varonce1312 = var1313;
}
{
var1316 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1313); /* == on <var_pname:String>*/
}
if (var1316){
if (unlikely(varonce1317==NULL)) {
var1318 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1319!=NULL)) {
var1320 = varonce1319;
} else {
var1321 = " > ";
var1322 = core__flat___NativeString___to_s_full(var1321, 3l, 3l);
var1320 = var1322;
varonce1319 = var1320;
}
((struct instance_core__NativeArray*)var1318)->values[1]=var1320;
} else {
var1318 = varonce1317;
varonce1317 = NULL;
}
{
var1323 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1324 = ((val*(*)(val* self))(var1323->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1323); /* to_s on <var1323:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1318)->values[0]=var1324;
{
var1325 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1326 = ((val*(*)(val* self))(var1325->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1325); /* to_s on <var1325:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1318)->values[2]=var1326;
{
var1327 = ((val*(*)(val* self))(var1318->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1318); /* native_to_s on <var1318:NativeArray[String]>*/
}
varonce1317 = var1318;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2456);
fatal_exit(1);
}
{
var1328 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1327, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1328); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1329!=NULL)) {
var1330 = varonce1329;
} else {
var1331 = "<=";
var1332 = core__flat___NativeString___to_s_full(var1331, 2l, 2l);
var1330 = var1332;
varonce1329 = var1330;
}
{
var1333 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1330); /* == on <var_pname:String>*/
}
if (var1333){
if (unlikely(varonce1334==NULL)) {
var1335 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1336!=NULL)) {
var1337 = varonce1336;
} else {
var1338 = " <= ";
var1339 = core__flat___NativeString___to_s_full(var1338, 4l, 4l);
var1337 = var1339;
varonce1336 = var1337;
}
((struct instance_core__NativeArray*)var1335)->values[1]=var1337;
} else {
var1335 = varonce1334;
varonce1334 = NULL;
}
{
var1340 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1341 = ((val*(*)(val* self))(var1340->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1340); /* to_s on <var1340:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1335)->values[0]=var1341;
{
var1342 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1343 = ((val*(*)(val* self))(var1342->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1342); /* to_s on <var1342:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1335)->values[2]=var1343;
{
var1344 = ((val*(*)(val* self))(var1335->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1335); /* native_to_s on <var1335:NativeArray[String]>*/
}
varonce1334 = var1335;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2459);
fatal_exit(1);
}
{
var1345 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1344, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1345); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1346!=NULL)) {
var1347 = varonce1346;
} else {
var1348 = ">=";
var1349 = core__flat___NativeString___to_s_full(var1348, 2l, 2l);
var1347 = var1349;
varonce1346 = var1347;
}
{
var1350 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1347); /* == on <var_pname:String>*/
}
if (var1350){
if (unlikely(varonce1351==NULL)) {
var1352 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1353!=NULL)) {
var1354 = varonce1353;
} else {
var1355 = " >= ";
var1356 = core__flat___NativeString___to_s_full(var1355, 4l, 4l);
var1354 = var1356;
varonce1353 = var1354;
}
((struct instance_core__NativeArray*)var1352)->values[1]=var1354;
} else {
var1352 = varonce1351;
varonce1351 = NULL;
}
{
var1357 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1358 = ((val*(*)(val* self))(var1357->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1357); /* to_s on <var1357:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1352)->values[0]=var1358;
{
var1359 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1360 = ((val*(*)(val* self))(var1359->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1359); /* to_s on <var1359:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1352)->values[2]=var1360;
{
var1361 = ((val*(*)(val* self))(var1352->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1352); /* native_to_s on <var1352:NativeArray[String]>*/
}
varonce1351 = var1352;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2462);
fatal_exit(1);
}
{
var1362 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1361, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1362); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1363!=NULL)) {
var1364 = varonce1363;
} else {
var1365 = "to_i";
var1366 = core__flat___NativeString___to_s_full(var1365, 4l, 4l);
var1364 = var1366;
varonce1363 = var1364;
}
{
var1367 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1364); /* == on <var_pname:String>*/
}
if (var1367){
if (unlikely(varonce1368==NULL)) {
var1369 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1370!=NULL)) {
var1371 = varonce1370;
} else {
var1372 = "(long)";
var1373 = core__flat___NativeString___to_s_full(var1372, 6l, 6l);
var1371 = var1373;
varonce1370 = var1371;
}
((struct instance_core__NativeArray*)var1369)->values[0]=var1371;
} else {
var1369 = varonce1368;
varonce1368 = NULL;
}
{
var1374 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1375 = ((val*(*)(val* self))(var1374->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1374); /* to_s on <var1374:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1369)->values[1]=var1375;
{
var1376 = ((val*(*)(val* self))(var1369->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1369); /* native_to_s on <var1369:NativeArray[String]>*/
}
varonce1368 = var1369;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2465);
fatal_exit(1);
}
{
var1377 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1376, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1377); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1378!=NULL)) {
var1379 = varonce1378;
} else {
var1380 = "to_b";
var1381 = core__flat___NativeString___to_s_full(var1380, 4l, 4l);
var1379 = var1381;
varonce1378 = var1379;
}
{
var1382 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1379); /* == on <var_pname:String>*/
}
if (var1382){
if (unlikely(varonce1383==NULL)) {
var1384 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1385!=NULL)) {
var1386 = varonce1385;
} else {
var1387 = "(unsigned char)";
var1388 = core__flat___NativeString___to_s_full(var1387, 15l, 15l);
var1386 = var1388;
varonce1385 = var1386;
}
((struct instance_core__NativeArray*)var1384)->values[0]=var1386;
} else {
var1384 = varonce1383;
varonce1383 = NULL;
}
{
var1389 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1390 = ((val*(*)(val* self))(var1389->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1389); /* to_s on <var1389:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1384)->values[1]=var1390;
{
var1391 = ((val*(*)(val* self))(var1384->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1384); /* native_to_s on <var1384:NativeArray[String]>*/
}
varonce1383 = var1384;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2468);
fatal_exit(1);
}
{
var1392 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1391, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1392); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1393!=NULL)) {
var1394 = varonce1393;
} else {
var1395 = "to_i8";
var1396 = core__flat___NativeString___to_s_full(var1395, 5l, 5l);
var1394 = var1396;
varonce1393 = var1394;
}
{
var1397 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1394); /* == on <var_pname:String>*/
}
if (var1397){
if (unlikely(varonce1398==NULL)) {
var1399 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1400!=NULL)) {
var1401 = varonce1400;
} else {
var1402 = "(int8_t)";
var1403 = core__flat___NativeString___to_s_full(var1402, 8l, 8l);
var1401 = var1403;
varonce1400 = var1401;
}
((struct instance_core__NativeArray*)var1399)->values[0]=var1401;
} else {
var1399 = varonce1398;
varonce1398 = NULL;
}
{
var1404 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1405 = ((val*(*)(val* self))(var1404->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1404); /* to_s on <var1404:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1399)->values[1]=var1405;
{
var1406 = ((val*(*)(val* self))(var1399->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1399); /* native_to_s on <var1399:NativeArray[String]>*/
}
varonce1398 = var1399;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2471);
fatal_exit(1);
}
{
var1407 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1406, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1407); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1408!=NULL)) {
var1409 = varonce1408;
} else {
var1410 = "to_i16";
var1411 = core__flat___NativeString___to_s_full(var1410, 6l, 6l);
var1409 = var1411;
varonce1408 = var1409;
}
{
var1412 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1409); /* == on <var_pname:String>*/
}
if (var1412){
if (unlikely(varonce1413==NULL)) {
var1414 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1415!=NULL)) {
var1416 = varonce1415;
} else {
var1417 = "(int16_t)";
var1418 = core__flat___NativeString___to_s_full(var1417, 9l, 9l);
var1416 = var1418;
varonce1415 = var1416;
}
((struct instance_core__NativeArray*)var1414)->values[0]=var1416;
} else {
var1414 = varonce1413;
varonce1413 = NULL;
}
{
var1419 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1420 = ((val*(*)(val* self))(var1419->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1419); /* to_s on <var1419:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1414)->values[1]=var1420;
{
var1421 = ((val*(*)(val* self))(var1414->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1414); /* native_to_s on <var1414:NativeArray[String]>*/
}
varonce1413 = var1414;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2474);
fatal_exit(1);
}
{
var1422 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1421, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1422); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1423!=NULL)) {
var1424 = varonce1423;
} else {
var1425 = "to_u16";
var1426 = core__flat___NativeString___to_s_full(var1425, 6l, 6l);
var1424 = var1426;
varonce1423 = var1424;
}
{
var1427 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1424); /* == on <var_pname:String>*/
}
if (var1427){
if (unlikely(varonce1428==NULL)) {
var1429 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1430!=NULL)) {
var1431 = varonce1430;
} else {
var1432 = "(uint16_t)";
var1433 = core__flat___NativeString___to_s_full(var1432, 10l, 10l);
var1431 = var1433;
varonce1430 = var1431;
}
((struct instance_core__NativeArray*)var1429)->values[0]=var1431;
} else {
var1429 = varonce1428;
varonce1428 = NULL;
}
{
var1434 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1435 = ((val*(*)(val* self))(var1434->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1434); /* to_s on <var1434:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1429)->values[1]=var1435;
{
var1436 = ((val*(*)(val* self))(var1429->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1429); /* native_to_s on <var1429:NativeArray[String]>*/
}
varonce1428 = var1429;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2477);
fatal_exit(1);
}
{
var1437 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1436, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1437); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1438!=NULL)) {
var1439 = varonce1438;
} else {
var1440 = "to_i32";
var1441 = core__flat___NativeString___to_s_full(var1440, 6l, 6l);
var1439 = var1441;
varonce1438 = var1439;
}
{
var1442 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1439); /* == on <var_pname:String>*/
}
if (var1442){
if (unlikely(varonce1443==NULL)) {
var1444 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1445!=NULL)) {
var1446 = varonce1445;
} else {
var1447 = "(int32_t)";
var1448 = core__flat___NativeString___to_s_full(var1447, 9l, 9l);
var1446 = var1448;
varonce1445 = var1446;
}
((struct instance_core__NativeArray*)var1444)->values[0]=var1446;
} else {
var1444 = varonce1443;
varonce1443 = NULL;
}
{
var1449 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1450 = ((val*(*)(val* self))(var1449->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1449); /* to_s on <var1449:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1444)->values[1]=var1450;
{
var1451 = ((val*(*)(val* self))(var1444->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1444); /* native_to_s on <var1444:NativeArray[String]>*/
}
varonce1443 = var1444;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2480);
fatal_exit(1);
}
{
var1452 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1451, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1452); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1453!=NULL)) {
var1454 = varonce1453;
} else {
var1455 = "to_u32";
var1456 = core__flat___NativeString___to_s_full(var1455, 6l, 6l);
var1454 = var1456;
varonce1453 = var1454;
}
{
var1457 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1454); /* == on <var_pname:String>*/
}
if (var1457){
if (unlikely(varonce1458==NULL)) {
var1459 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1460!=NULL)) {
var1461 = varonce1460;
} else {
var1462 = "(uint32_t)";
var1463 = core__flat___NativeString___to_s_full(var1462, 10l, 10l);
var1461 = var1463;
varonce1460 = var1461;
}
((struct instance_core__NativeArray*)var1459)->values[0]=var1461;
} else {
var1459 = varonce1458;
varonce1458 = NULL;
}
{
var1464 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1465 = ((val*(*)(val* self))(var1464->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1464); /* to_s on <var1464:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1459)->values[1]=var1465;
{
var1466 = ((val*(*)(val* self))(var1459->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1459); /* native_to_s on <var1459:NativeArray[String]>*/
}
varonce1458 = var1459;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2483);
fatal_exit(1);
}
{
var1467 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1466, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1467); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
} else {
if (likely(varonce1468!=NULL)) {
var1469 = varonce1468;
} else {
var1470 = "CString";
var1471 = core__flat___NativeString___to_s_full(var1470, 7l, 7l);
var1469 = var1471;
varonce1468 = var1469;
}
{
var1472 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1469); /* == on <var_cname:String>*/
}
if (var1472){
if (likely(varonce1473!=NULL)) {
var1474 = varonce1473;
} else {
var1475 = "[]";
var1476 = core__flat___NativeString___to_s_full(var1475, 2l, 2l);
var1474 = var1476;
varonce1473 = var1474;
}
{
var1477 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1474); /* == on <var_pname:String>*/
}
if (var1477){
if (unlikely(varonce1478==NULL)) {
var1479 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce1480!=NULL)) {
var1481 = varonce1480;
} else {
var1482 = "(unsigned char)((int)";
var1483 = core__flat___NativeString___to_s_full(var1482, 21l, 21l);
var1481 = var1483;
varonce1480 = var1481;
}
((struct instance_core__NativeArray*)var1479)->values[0]=var1481;
if (likely(varonce1484!=NULL)) {
var1485 = varonce1484;
} else {
var1486 = "[";
var1487 = core__flat___NativeString___to_s_full(var1486, 1l, 1l);
var1485 = var1487;
varonce1484 = var1485;
}
((struct instance_core__NativeArray*)var1479)->values[2]=var1485;
if (likely(varonce1488!=NULL)) {
var1489 = varonce1488;
} else {
var1490 = "])";
var1491 = core__flat___NativeString___to_s_full(var1490, 2l, 2l);
var1489 = var1491;
varonce1488 = var1489;
}
((struct instance_core__NativeArray*)var1479)->values[4]=var1489;
} else {
var1479 = varonce1478;
varonce1478 = NULL;
}
{
var1492 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1493 = ((val*(*)(val* self))(var1492->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1492); /* to_s on <var1492:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1479)->values[1]=var1493;
{
var1494 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1495 = ((val*(*)(val* self))(var1494->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1494); /* to_s on <var1494:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1479)->values[3]=var1495;
{
var1496 = ((val*(*)(val* self))(var1479->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1479); /* native_to_s on <var1479:NativeArray[String]>*/
}
varonce1478 = var1479;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2488);
fatal_exit(1);
}
{
var1497 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1496, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1497); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1498!=NULL)) {
var1499 = varonce1498;
} else {
var1500 = "[]=";
var1501 = core__flat___NativeString___to_s_full(var1500, 3l, 3l);
var1499 = var1501;
varonce1498 = var1499;
}
{
var1502 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1499); /* == on <var_pname:String>*/
}
if (var1502){
if (unlikely(varonce1503==NULL)) {
var1504 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce1505!=NULL)) {
var1506 = varonce1505;
} else {
var1507 = "[";
var1508 = core__flat___NativeString___to_s_full(var1507, 1l, 1l);
var1506 = var1508;
varonce1505 = var1506;
}
((struct instance_core__NativeArray*)var1504)->values[1]=var1506;
if (likely(varonce1509!=NULL)) {
var1510 = varonce1509;
} else {
var1511 = "]=(unsigned char)";
var1512 = core__flat___NativeString___to_s_full(var1511, 17l, 17l);
var1510 = var1512;
varonce1509 = var1510;
}
((struct instance_core__NativeArray*)var1504)->values[3]=var1510;
if (likely(varonce1513!=NULL)) {
var1514 = varonce1513;
} else {
var1515 = ";";
var1516 = core__flat___NativeString___to_s_full(var1515, 1l, 1l);
var1514 = var1516;
varonce1513 = var1514;
}
((struct instance_core__NativeArray*)var1504)->values[5]=var1514;
} else {
var1504 = varonce1503;
varonce1503 = NULL;
}
{
var1517 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1518 = ((val*(*)(val* self))(var1517->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1517); /* to_s on <var1517:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1504)->values[0]=var1518;
{
var1519 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1520 = ((val*(*)(val* self))(var1519->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1519); /* to_s on <var1519:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1504)->values[2]=var1520;
{
var1521 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var1522 = ((val*(*)(val* self))(var1521->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1521); /* to_s on <var1521:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1504)->values[4]=var1522;
{
var1523 = ((val*(*)(val* self))(var1504->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1504); /* native_to_s on <var1504:NativeArray[String]>*/
}
varonce1503 = var1504;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1523); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1524!=NULL)) {
var1525 = varonce1524;
} else {
var1526 = "copy_to";
var1527 = core__flat___NativeString___to_s_full(var1526, 7l, 7l);
var1525 = var1527;
varonce1524 = var1525;
}
{
var1528 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1525); /* == on <var_pname:String>*/
}
if (var1528){
if (unlikely(varonce1529==NULL)) {
var1530 = NEW_core__NativeArray(11l, &type_core__NativeArray__core__String);
if (likely(varonce1531!=NULL)) {
var1532 = varonce1531;
} else {
var1533 = "memmove(";
var1534 = core__flat___NativeString___to_s_full(var1533, 8l, 8l);
var1532 = var1534;
varonce1531 = var1532;
}
((struct instance_core__NativeArray*)var1530)->values[0]=var1532;
if (likely(varonce1535!=NULL)) {
var1536 = varonce1535;
} else {
var1537 = "+";
var1538 = core__flat___NativeString___to_s_full(var1537, 1l, 1l);
var1536 = var1538;
varonce1535 = var1536;
}
((struct instance_core__NativeArray*)var1530)->values[2]=var1536;
if (likely(varonce1539!=NULL)) {
var1540 = varonce1539;
} else {
var1541 = ",";
var1542 = core__flat___NativeString___to_s_full(var1541, 1l, 1l);
var1540 = var1542;
varonce1539 = var1540;
}
((struct instance_core__NativeArray*)var1530)->values[4]=var1540;
if (likely(varonce1543!=NULL)) {
var1544 = varonce1543;
} else {
var1545 = "+";
var1546 = core__flat___NativeString___to_s_full(var1545, 1l, 1l);
var1544 = var1546;
varonce1543 = var1544;
}
((struct instance_core__NativeArray*)var1530)->values[6]=var1544;
if (likely(varonce1547!=NULL)) {
var1548 = varonce1547;
} else {
var1549 = ",";
var1550 = core__flat___NativeString___to_s_full(var1549, 1l, 1l);
var1548 = var1550;
varonce1547 = var1548;
}
((struct instance_core__NativeArray*)var1530)->values[8]=var1548;
if (likely(varonce1551!=NULL)) {
var1552 = varonce1551;
} else {
var1553 = ");";
var1554 = core__flat___NativeString___to_s_full(var1553, 2l, 2l);
var1552 = var1554;
varonce1551 = var1552;
}
((struct instance_core__NativeArray*)var1530)->values[10]=var1552;
} else {
var1530 = varonce1529;
varonce1529 = NULL;
}
{
var1555 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1556 = ((val*(*)(val* self))(var1555->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1555); /* to_s on <var1555:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1530)->values[1]=var1556;
{
var1557 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 4l);
}
{
var1558 = ((val*(*)(val* self))(var1557->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1557); /* to_s on <var1557:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1530)->values[3]=var1558;
{
var1559 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1560 = ((val*(*)(val* self))(var1559->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1559); /* to_s on <var1559:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1530)->values[5]=var1560;
{
var1561 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 3l);
}
{
var1562 = ((val*(*)(val* self))(var1561->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1561); /* to_s on <var1561:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1530)->values[7]=var1562;
{
var1563 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var1564 = ((val*(*)(val* self))(var1563->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1563); /* to_s on <var1563:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1530)->values[9]=var1564;
{
var1565 = ((val*(*)(val* self))(var1530->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1530); /* native_to_s on <var1530:NativeArray[String]>*/
}
varonce1529 = var1530;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1565); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1566!=NULL)) {
var1567 = varonce1566;
} else {
var1568 = "atoi";
var1569 = core__flat___NativeString___to_s_full(var1568, 4l, 4l);
var1567 = var1569;
varonce1566 = var1567;
}
{
var1570 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1567); /* == on <var_pname:String>*/
}
if (var1570){
if (unlikely(varonce1571==NULL)) {
var1572 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1573!=NULL)) {
var1574 = varonce1573;
} else {
var1575 = "atoi(";
var1576 = core__flat___NativeString___to_s_full(var1575, 5l, 5l);
var1574 = var1576;
varonce1573 = var1574;
}
((struct instance_core__NativeArray*)var1572)->values[0]=var1574;
if (likely(varonce1577!=NULL)) {
var1578 = varonce1577;
} else {
var1579 = ");";
var1580 = core__flat___NativeString___to_s_full(var1579, 2l, 2l);
var1578 = var1580;
varonce1577 = var1578;
}
((struct instance_core__NativeArray*)var1572)->values[2]=var1578;
} else {
var1572 = varonce1571;
varonce1571 = NULL;
}
{
var1581 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1582 = ((val*(*)(val* self))(var1581->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1581); /* to_s on <var1581:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1572)->values[1]=var1582;
{
var1583 = ((val*(*)(val* self))(var1572->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1572); /* native_to_s on <var1572:NativeArray[String]>*/
}
varonce1571 = var1572;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2497);
fatal_exit(1);
}
{
var1584 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1583, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1584); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1585!=NULL)) {
var1586 = varonce1585;
} else {
var1587 = "fast_cstring";
var1588 = core__flat___NativeString___to_s_full(var1587, 12l, 12l);
var1586 = var1588;
varonce1585 = var1586;
}
{
var1589 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1586); /* == on <var_pname:String>*/
}
if (var1589){
if (unlikely(varonce1590==NULL)) {
var1591 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1592!=NULL)) {
var1593 = varonce1592;
} else {
var1594 = " + ";
var1595 = core__flat___NativeString___to_s_full(var1594, 3l, 3l);
var1593 = var1595;
varonce1592 = var1593;
}
((struct instance_core__NativeArray*)var1591)->values[1]=var1593;
} else {
var1591 = varonce1590;
varonce1590 = NULL;
}
{
var1596 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1597 = ((val*(*)(val* self))(var1596->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1596); /* to_s on <var1596:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1591)->values[0]=var1597;
{
var1598 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1599 = ((val*(*)(val* self))(var1598->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1598); /* to_s on <var1598:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1591)->values[2]=var1599;
{
var1600 = ((val*(*)(val* self))(var1591->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1591); /* native_to_s on <var1591:NativeArray[String]>*/
}
varonce1590 = var1591;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2500);
fatal_exit(1);
}
{
var1601 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1600, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1601); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1602!=NULL)) {
var1603 = varonce1602;
} else {
var1604 = "==";
var1605 = core__flat___NativeString___to_s_full(var1604, 2l, 2l);
var1603 = var1605;
varonce1602 = var1603;
}
{
var1606 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1603); /* == on <var_pname:String>*/
}
if (var1606){
{
var1607 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1608 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1609 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1607, var1608);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1609); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1610!=NULL)) {
var1611 = varonce1610;
} else {
var1612 = "!=";
var1613 = core__flat___NativeString___to_s_full(var1612, 2l, 2l);
var1611 = var1613;
varonce1610 = var1611;
}
{
var1614 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1611); /* == on <var_pname:String>*/
}
if (var1614){
{
var1615 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1616 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1617 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1615, var1616);
}
var_res1618 = var1617;
if (unlikely(varonce1619==NULL)) {
var1620 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1621!=NULL)) {
var1622 = varonce1621;
} else {
var1623 = "!";
var1624 = core__flat___NativeString___to_s_full(var1623, 1l, 1l);
var1622 = var1624;
varonce1621 = var1622;
}
((struct instance_core__NativeArray*)var1620)->values[0]=var1622;
} else {
var1620 = varonce1619;
varonce1619 = NULL;
}
{
var1625 = ((val*(*)(val* self))(var_res1618->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1618); /* to_s on <var_res1618:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1620)->values[1]=var1625;
{
var1626 = ((val*(*)(val* self))(var1620->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1620); /* native_to_s on <var1620:NativeArray[String]>*/
}
varonce1619 = var1620;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2507);
fatal_exit(1);
}
{
var1627 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1626, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1627); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1628!=NULL)) {
var1629 = varonce1628;
} else {
var1630 = "new";
var1631 = core__flat___NativeString___to_s_full(var1630, 3l, 3l);
var1629 = var1631;
varonce1628 = var1629;
}
{
var1632 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1629); /* == on <var_pname:String>*/
}
if (var1632){
if (unlikely(varonce1633==NULL)) {
var1634 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1635!=NULL)) {
var1636 = varonce1635;
} else {
var1637 = "(char*)nit_alloc(";
var1638 = core__flat___NativeString___to_s_full(var1637, 17l, 17l);
var1636 = var1638;
varonce1635 = var1636;
}
((struct instance_core__NativeArray*)var1634)->values[0]=var1636;
if (likely(varonce1639!=NULL)) {
var1640 = varonce1639;
} else {
var1641 = ")";
var1642 = core__flat___NativeString___to_s_full(var1641, 1l, 1l);
var1640 = var1642;
varonce1639 = var1640;
}
((struct instance_core__NativeArray*)var1634)->values[2]=var1640;
} else {
var1634 = varonce1633;
varonce1633 = NULL;
}
{
var1643 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1644 = ((val*(*)(val* self))(var1643->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1643); /* to_s on <var1643:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1634)->values[1]=var1644;
{
var1645 = ((val*(*)(val* self))(var1634->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1634); /* native_to_s on <var1634:NativeArray[String]>*/
}
varonce1633 = var1634;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2510);
fatal_exit(1);
}
{
var1646 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1645, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1646); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1647!=NULL)) {
var1648 = varonce1647;
} else {
var1649 = "fetch_4_chars";
var1650 = core__flat___NativeString___to_s_full(var1649, 13l, 13l);
var1648 = var1650;
varonce1647 = var1648;
}
{
var1651 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1648); /* == on <var_pname:String>*/
}
if (var1651){
if (unlikely(varonce1652==NULL)) {
var1653 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce1654!=NULL)) {
var1655 = varonce1654;
} else {
var1656 = "(long)*((uint32_t*)(";
var1657 = core__flat___NativeString___to_s_full(var1656, 20l, 20l);
var1655 = var1657;
varonce1654 = var1655;
}
((struct instance_core__NativeArray*)var1653)->values[0]=var1655;
if (likely(varonce1658!=NULL)) {
var1659 = varonce1658;
} else {
var1660 = " + ";
var1661 = core__flat___NativeString___to_s_full(var1660, 3l, 3l);
var1659 = var1661;
varonce1658 = var1659;
}
((struct instance_core__NativeArray*)var1653)->values[2]=var1659;
if (likely(varonce1662!=NULL)) {
var1663 = varonce1662;
} else {
var1664 = "))";
var1665 = core__flat___NativeString___to_s_full(var1664, 2l, 2l);
var1663 = var1665;
varonce1662 = var1663;
}
((struct instance_core__NativeArray*)var1653)->values[4]=var1663;
} else {
var1653 = varonce1652;
varonce1652 = NULL;
}
{
var1666 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1667 = ((val*(*)(val* self))(var1666->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1666); /* to_s on <var1666:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1653)->values[1]=var1667;
{
var1668 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1669 = ((val*(*)(val* self))(var1668->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1668); /* to_s on <var1668:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1653)->values[3]=var1669;
{
var1670 = ((val*(*)(val* self))(var1653->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1653); /* native_to_s on <var1653:NativeArray[String]>*/
}
varonce1652 = var1653;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2513);
fatal_exit(1);
}
{
var1671 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1670, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1671); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1672!=NULL)) {
var1673 = varonce1672;
} else {
var1674 = "fetch_4_hchars";
var1675 = core__flat___NativeString___to_s_full(var1674, 14l, 14l);
var1673 = var1675;
varonce1672 = var1673;
}
{
var1676 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1673); /* == on <var_pname:String>*/
}
if (var1676){
if (unlikely(varonce1677==NULL)) {
var1678 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce1679!=NULL)) {
var1680 = varonce1679;
} else {
var1681 = "(long)be32toh(*((uint32_t*)(";
var1682 = core__flat___NativeString___to_s_full(var1681, 28l, 28l);
var1680 = var1682;
varonce1679 = var1680;
}
((struct instance_core__NativeArray*)var1678)->values[0]=var1680;
if (likely(varonce1683!=NULL)) {
var1684 = varonce1683;
} else {
var1685 = " + ";
var1686 = core__flat___NativeString___to_s_full(var1685, 3l, 3l);
var1684 = var1686;
varonce1683 = var1684;
}
((struct instance_core__NativeArray*)var1678)->values[2]=var1684;
if (likely(varonce1687!=NULL)) {
var1688 = varonce1687;
} else {
var1689 = ")))";
var1690 = core__flat___NativeString___to_s_full(var1689, 3l, 3l);
var1688 = var1690;
varonce1687 = var1688;
}
((struct instance_core__NativeArray*)var1678)->values[4]=var1688;
} else {
var1678 = varonce1677;
varonce1677 = NULL;
}
{
var1691 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1692 = ((val*(*)(val* self))(var1691->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1691); /* to_s on <var1691:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1678)->values[1]=var1692;
{
var1693 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1694 = ((val*(*)(val* self))(var1693->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1693); /* to_s on <var1693:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1678)->values[3]=var1694;
{
var1695 = ((val*(*)(val* self))(var1678->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1678); /* native_to_s on <var1678:NativeArray[String]>*/
}
varonce1677 = var1678;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2516);
fatal_exit(1);
}
{
var1696 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1695, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1696); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
} else {
if (likely(varonce1697!=NULL)) {
var1698 = varonce1697;
} else {
var1699 = "NativeArray";
var1700 = core__flat___NativeString___to_s_full(var1699, 11l, 11l);
var1698 = var1700;
varonce1697 = var1698;
}
{
var1701 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1698); /* == on <var_cname:String>*/
}
if (var1701){
{
var1702 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_def(var_v, var_pname, var_ret, var_arguments);
}
var = var1702;
goto RET_LABEL;
} else {
if (likely(varonce1703!=NULL)) {
var1704 = varonce1703;
} else {
var1705 = "Int8";
var1706 = core__flat___NativeString___to_s_full(var1705, 4l, 4l);
var1704 = var1706;
varonce1703 = var1704;
}
{
var1707 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1704); /* == on <var_cname:String>*/
}
if (var1707){
if (likely(varonce1708!=NULL)) {
var1709 = varonce1708;
} else {
var1710 = "output";
var1711 = core__flat___NativeString___to_s_full(var1710, 6l, 6l);
var1709 = var1711;
varonce1708 = var1709;
}
{
var1712 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1709); /* == on <var_pname:String>*/
}
if (var1712){
if (unlikely(varonce1713==NULL)) {
var1714 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1715!=NULL)) {
var1716 = varonce1715;
} else {
var1717 = "printf(\"%\"PRIi8 \"\\n\", ";
var1718 = core__flat___NativeString___to_s_full(var1717, 22l, 22l);
var1716 = var1718;
varonce1715 = var1716;
}
((struct instance_core__NativeArray*)var1714)->values[0]=var1716;
if (likely(varonce1719!=NULL)) {
var1720 = varonce1719;
} else {
var1721 = ");";
var1722 = core__flat___NativeString___to_s_full(var1721, 2l, 2l);
var1720 = var1722;
varonce1719 = var1720;
}
((struct instance_core__NativeArray*)var1714)->values[2]=var1720;
} else {
var1714 = varonce1713;
varonce1713 = NULL;
}
{
var1723 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1724 = ((val*(*)(val* self))(var1723->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1723); /* to_s on <var1723:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1714)->values[1]=var1724;
{
var1725 = ((val*(*)(val* self))(var1714->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1714); /* native_to_s on <var1714:NativeArray[String]>*/
}
varonce1713 = var1714;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1725); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1726!=NULL)) {
var1727 = varonce1726;
} else {
var1728 = "object_id";
var1729 = core__flat___NativeString___to_s_full(var1728, 9l, 9l);
var1727 = var1729;
varonce1726 = var1727;
}
{
var1730 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1727); /* == on <var_pname:String>*/
}
if (var1730){
if (unlikely(varonce1731==NULL)) {
var1732 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1733!=NULL)) {
var1734 = varonce1733;
} else {
var1735 = "(long)";
var1736 = core__flat___NativeString___to_s_full(var1735, 6l, 6l);
var1734 = var1736;
varonce1733 = var1734;
}
((struct instance_core__NativeArray*)var1732)->values[0]=var1734;
} else {
var1732 = varonce1731;
varonce1731 = NULL;
}
{
var1737 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1738 = ((val*(*)(val* self))(var1737->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1737); /* to_s on <var1737:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1732)->values[1]=var1738;
{
var1739 = ((val*(*)(val* self))(var1732->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1732); /* native_to_s on <var1732:NativeArray[String]>*/
}
varonce1731 = var1732;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2526);
fatal_exit(1);
}
{
var1740 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1739, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1740); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1741!=NULL)) {
var1742 = varonce1741;
} else {
var1743 = "+";
var1744 = core__flat___NativeString___to_s_full(var1743, 1l, 1l);
var1742 = var1744;
varonce1741 = var1742;
}
{
var1745 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1742); /* == on <var_pname:String>*/
}
if (var1745){
if (unlikely(varonce1746==NULL)) {
var1747 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1748!=NULL)) {
var1749 = varonce1748;
} else {
var1750 = " + ";
var1751 = core__flat___NativeString___to_s_full(var1750, 3l, 3l);
var1749 = var1751;
varonce1748 = var1749;
}
((struct instance_core__NativeArray*)var1747)->values[1]=var1749;
} else {
var1747 = varonce1746;
varonce1746 = NULL;
}
{
var1752 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1753 = ((val*(*)(val* self))(var1752->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1752); /* to_s on <var1752:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1747)->values[0]=var1753;
{
var1754 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1755 = ((val*(*)(val* self))(var1754->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1754); /* to_s on <var1754:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1747)->values[2]=var1755;
{
var1756 = ((val*(*)(val* self))(var1747->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1747); /* native_to_s on <var1747:NativeArray[String]>*/
}
varonce1746 = var1747;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2529);
fatal_exit(1);
}
{
var1757 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1756, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1757); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1758!=NULL)) {
var1759 = varonce1758;
} else {
var1760 = "-";
var1761 = core__flat___NativeString___to_s_full(var1760, 1l, 1l);
var1759 = var1761;
varonce1758 = var1759;
}
{
var1762 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1759); /* == on <var_pname:String>*/
}
if (var1762){
if (unlikely(varonce1763==NULL)) {
var1764 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1765!=NULL)) {
var1766 = varonce1765;
} else {
var1767 = " - ";
var1768 = core__flat___NativeString___to_s_full(var1767, 3l, 3l);
var1766 = var1768;
varonce1765 = var1766;
}
((struct instance_core__NativeArray*)var1764)->values[1]=var1766;
} else {
var1764 = varonce1763;
varonce1763 = NULL;
}
{
var1769 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1770 = ((val*(*)(val* self))(var1769->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1769); /* to_s on <var1769:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1764)->values[0]=var1770;
{
var1771 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1772 = ((val*(*)(val* self))(var1771->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1771); /* to_s on <var1771:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1764)->values[2]=var1772;
{
var1773 = ((val*(*)(val* self))(var1764->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1764); /* native_to_s on <var1764:NativeArray[String]>*/
}
varonce1763 = var1764;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2532);
fatal_exit(1);
}
{
var1774 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1773, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1774); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1775!=NULL)) {
var1776 = varonce1775;
} else {
var1777 = "unary -";
var1778 = core__flat___NativeString___to_s_full(var1777, 7l, 7l);
var1776 = var1778;
varonce1775 = var1776;
}
{
var1779 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1776); /* == on <var_pname:String>*/
}
if (var1779){
if (unlikely(varonce1780==NULL)) {
var1781 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1782!=NULL)) {
var1783 = varonce1782;
} else {
var1784 = "-";
var1785 = core__flat___NativeString___to_s_full(var1784, 1l, 1l);
var1783 = var1785;
varonce1782 = var1783;
}
((struct instance_core__NativeArray*)var1781)->values[0]=var1783;
} else {
var1781 = varonce1780;
varonce1780 = NULL;
}
{
var1786 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1787 = ((val*(*)(val* self))(var1786->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1786); /* to_s on <var1786:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1781)->values[1]=var1787;
{
var1788 = ((val*(*)(val* self))(var1781->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1781); /* native_to_s on <var1781:NativeArray[String]>*/
}
varonce1780 = var1781;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2535);
fatal_exit(1);
}
{
var1789 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1788, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1789); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1790!=NULL)) {
var1791 = varonce1790;
} else {
var1792 = "unary +";
var1793 = core__flat___NativeString___to_s_full(var1792, 7l, 7l);
var1791 = var1793;
varonce1790 = var1791;
}
{
var1794 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1791); /* == on <var_pname:String>*/
}
if (var1794){
{
var1795 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1795); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1796!=NULL)) {
var1797 = varonce1796;
} else {
var1798 = "*";
var1799 = core__flat___NativeString___to_s_full(var1798, 1l, 1l);
var1797 = var1799;
varonce1796 = var1797;
}
{
var1800 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1797); /* == on <var_pname:String>*/
}
if (var1800){
if (unlikely(varonce1801==NULL)) {
var1802 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1803!=NULL)) {
var1804 = varonce1803;
} else {
var1805 = " * ";
var1806 = core__flat___NativeString___to_s_full(var1805, 3l, 3l);
var1804 = var1806;
varonce1803 = var1804;
}
((struct instance_core__NativeArray*)var1802)->values[1]=var1804;
} else {
var1802 = varonce1801;
varonce1801 = NULL;
}
{
var1807 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1808 = ((val*(*)(val* self))(var1807->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1807); /* to_s on <var1807:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1802)->values[0]=var1808;
{
var1809 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1810 = ((val*(*)(val* self))(var1809->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1809); /* to_s on <var1809:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1802)->values[2]=var1810;
{
var1811 = ((val*(*)(val* self))(var1802->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1802); /* native_to_s on <var1802:NativeArray[String]>*/
}
varonce1801 = var1802;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2541);
fatal_exit(1);
}
{
var1812 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1811, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1812); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1813!=NULL)) {
var1814 = varonce1813;
} else {
var1815 = "/";
var1816 = core__flat___NativeString___to_s_full(var1815, 1l, 1l);
var1814 = var1816;
varonce1813 = var1814;
}
{
var1817 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1814); /* == on <var_pname:String>*/
}
if (var1817){
if (unlikely(varonce1818==NULL)) {
var1819 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1820!=NULL)) {
var1821 = varonce1820;
} else {
var1822 = " / ";
var1823 = core__flat___NativeString___to_s_full(var1822, 3l, 3l);
var1821 = var1823;
varonce1820 = var1821;
}
((struct instance_core__NativeArray*)var1819)->values[1]=var1821;
} else {
var1819 = varonce1818;
varonce1818 = NULL;
}
{
var1824 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1825 = ((val*(*)(val* self))(var1824->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1824); /* to_s on <var1824:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1819)->values[0]=var1825;
{
var1826 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1827 = ((val*(*)(val* self))(var1826->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1826); /* to_s on <var1826:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1819)->values[2]=var1827;
{
var1828 = ((val*(*)(val* self))(var1819->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1819); /* native_to_s on <var1819:NativeArray[String]>*/
}
varonce1818 = var1819;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2544);
fatal_exit(1);
}
{
var1829 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1828, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1829); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1830!=NULL)) {
var1831 = varonce1830;
} else {
var1832 = "%";
var1833 = core__flat___NativeString___to_s_full(var1832, 1l, 1l);
var1831 = var1833;
varonce1830 = var1831;
}
{
var1834 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1831); /* == on <var_pname:String>*/
}
if (var1834){
if (unlikely(varonce1835==NULL)) {
var1836 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1837!=NULL)) {
var1838 = varonce1837;
} else {
var1839 = " % ";
var1840 = core__flat___NativeString___to_s_full(var1839, 3l, 3l);
var1838 = var1840;
varonce1837 = var1838;
}
((struct instance_core__NativeArray*)var1836)->values[1]=var1838;
} else {
var1836 = varonce1835;
varonce1835 = NULL;
}
{
var1841 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1842 = ((val*(*)(val* self))(var1841->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1841); /* to_s on <var1841:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1836)->values[0]=var1842;
{
var1843 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1844 = ((val*(*)(val* self))(var1843->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1843); /* to_s on <var1843:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1836)->values[2]=var1844;
{
var1845 = ((val*(*)(val* self))(var1836->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1836); /* native_to_s on <var1836:NativeArray[String]>*/
}
varonce1835 = var1836;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2547);
fatal_exit(1);
}
{
var1846 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1845, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1846); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1847!=NULL)) {
var1848 = varonce1847;
} else {
var1849 = "<<";
var1850 = core__flat___NativeString___to_s_full(var1849, 2l, 2l);
var1848 = var1850;
varonce1847 = var1848;
}
{
var1851 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1848); /* == on <var_pname:String>*/
}
if (var1851){
if (unlikely(varonce1852==NULL)) {
var1853 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1854!=NULL)) {
var1855 = varonce1854;
} else {
var1856 = " << ";
var1857 = core__flat___NativeString___to_s_full(var1856, 4l, 4l);
var1855 = var1857;
varonce1854 = var1855;
}
((struct instance_core__NativeArray*)var1853)->values[1]=var1855;
} else {
var1853 = varonce1852;
varonce1852 = NULL;
}
{
var1858 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1859 = ((val*(*)(val* self))(var1858->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1858); /* to_s on <var1858:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1853)->values[0]=var1859;
{
var1860 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1861 = ((val*(*)(val* self))(var1860->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1860); /* to_s on <var1860:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1853)->values[2]=var1861;
{
var1862 = ((val*(*)(val* self))(var1853->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1853); /* native_to_s on <var1853:NativeArray[String]>*/
}
varonce1852 = var1853;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2550);
fatal_exit(1);
}
{
var1863 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1862, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1863); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1864!=NULL)) {
var1865 = varonce1864;
} else {
var1866 = ">>";
var1867 = core__flat___NativeString___to_s_full(var1866, 2l, 2l);
var1865 = var1867;
varonce1864 = var1865;
}
{
var1868 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1865); /* == on <var_pname:String>*/
}
if (var1868){
if (unlikely(varonce1869==NULL)) {
var1870 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1871!=NULL)) {
var1872 = varonce1871;
} else {
var1873 = " >> ";
var1874 = core__flat___NativeString___to_s_full(var1873, 4l, 4l);
var1872 = var1874;
varonce1871 = var1872;
}
((struct instance_core__NativeArray*)var1870)->values[1]=var1872;
} else {
var1870 = varonce1869;
varonce1869 = NULL;
}
{
var1875 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1876 = ((val*(*)(val* self))(var1875->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1875); /* to_s on <var1875:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1870)->values[0]=var1876;
{
var1877 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1878 = ((val*(*)(val* self))(var1877->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1877); /* to_s on <var1877:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1870)->values[2]=var1878;
{
var1879 = ((val*(*)(val* self))(var1870->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1870); /* native_to_s on <var1870:NativeArray[String]>*/
}
varonce1869 = var1870;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2553);
fatal_exit(1);
}
{
var1880 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1879, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1880); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1881!=NULL)) {
var1882 = varonce1881;
} else {
var1883 = "==";
var1884 = core__flat___NativeString___to_s_full(var1883, 2l, 2l);
var1882 = var1884;
varonce1881 = var1882;
}
{
var1885 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1882); /* == on <var_pname:String>*/
}
if (var1885){
{
var1886 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1887 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1888 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1886, var1887);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1888); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1889!=NULL)) {
var1890 = varonce1889;
} else {
var1891 = "!=";
var1892 = core__flat___NativeString___to_s_full(var1891, 2l, 2l);
var1890 = var1892;
varonce1889 = var1890;
}
{
var1893 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1890); /* == on <var_pname:String>*/
}
if (var1893){
{
var1894 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1895 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1896 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1894, var1895);
}
var_res1897 = var1896;
if (unlikely(varonce1898==NULL)) {
var1899 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1900!=NULL)) {
var1901 = varonce1900;
} else {
var1902 = "!";
var1903 = core__flat___NativeString___to_s_full(var1902, 1l, 1l);
var1901 = var1903;
varonce1900 = var1901;
}
((struct instance_core__NativeArray*)var1899)->values[0]=var1901;
} else {
var1899 = varonce1898;
varonce1898 = NULL;
}
{
var1904 = ((val*(*)(val* self))(var_res1897->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1897); /* to_s on <var_res1897:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1899)->values[1]=var1904;
{
var1905 = ((val*(*)(val* self))(var1899->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1899); /* native_to_s on <var1899:NativeArray[String]>*/
}
varonce1898 = var1899;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2560);
fatal_exit(1);
}
{
var1906 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1905, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1906); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1907!=NULL)) {
var1908 = varonce1907;
} else {
var1909 = "<";
var1910 = core__flat___NativeString___to_s_full(var1909, 1l, 1l);
var1908 = var1910;
varonce1907 = var1908;
}
{
var1911 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1908); /* == on <var_pname:String>*/
}
if (var1911){
if (unlikely(varonce1912==NULL)) {
var1913 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1914!=NULL)) {
var1915 = varonce1914;
} else {
var1916 = " < ";
var1917 = core__flat___NativeString___to_s_full(var1916, 3l, 3l);
var1915 = var1917;
varonce1914 = var1915;
}
((struct instance_core__NativeArray*)var1913)->values[1]=var1915;
} else {
var1913 = varonce1912;
varonce1912 = NULL;
}
{
var1918 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1919 = ((val*(*)(val* self))(var1918->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1918); /* to_s on <var1918:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1913)->values[0]=var1919;
{
var1920 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1921 = ((val*(*)(val* self))(var1920->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1920); /* to_s on <var1920:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1913)->values[2]=var1921;
{
var1922 = ((val*(*)(val* self))(var1913->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1913); /* native_to_s on <var1913:NativeArray[String]>*/
}
varonce1912 = var1913;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2563);
fatal_exit(1);
}
{
var1923 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1922, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1923); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1924!=NULL)) {
var1925 = varonce1924;
} else {
var1926 = ">";
var1927 = core__flat___NativeString___to_s_full(var1926, 1l, 1l);
var1925 = var1927;
varonce1924 = var1925;
}
{
var1928 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1925); /* == on <var_pname:String>*/
}
if (var1928){
if (unlikely(varonce1929==NULL)) {
var1930 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1931!=NULL)) {
var1932 = varonce1931;
} else {
var1933 = " > ";
var1934 = core__flat___NativeString___to_s_full(var1933, 3l, 3l);
var1932 = var1934;
varonce1931 = var1932;
}
((struct instance_core__NativeArray*)var1930)->values[1]=var1932;
} else {
var1930 = varonce1929;
varonce1929 = NULL;
}
{
var1935 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1936 = ((val*(*)(val* self))(var1935->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1935); /* to_s on <var1935:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1930)->values[0]=var1936;
{
var1937 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1938 = ((val*(*)(val* self))(var1937->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1937); /* to_s on <var1937:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1930)->values[2]=var1938;
{
var1939 = ((val*(*)(val* self))(var1930->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1930); /* native_to_s on <var1930:NativeArray[String]>*/
}
varonce1929 = var1930;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2566);
fatal_exit(1);
}
{
var1940 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1939, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1940); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1941!=NULL)) {
var1942 = varonce1941;
} else {
var1943 = "<=";
var1944 = core__flat___NativeString___to_s_full(var1943, 2l, 2l);
var1942 = var1944;
varonce1941 = var1942;
}
{
var1945 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1942); /* == on <var_pname:String>*/
}
if (var1945){
if (unlikely(varonce1946==NULL)) {
var1947 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1948!=NULL)) {
var1949 = varonce1948;
} else {
var1950 = " <= ";
var1951 = core__flat___NativeString___to_s_full(var1950, 4l, 4l);
var1949 = var1951;
varonce1948 = var1949;
}
((struct instance_core__NativeArray*)var1947)->values[1]=var1949;
} else {
var1947 = varonce1946;
varonce1946 = NULL;
}
{
var1952 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1953 = ((val*(*)(val* self))(var1952->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1952); /* to_s on <var1952:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1947)->values[0]=var1953;
{
var1954 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1955 = ((val*(*)(val* self))(var1954->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1954); /* to_s on <var1954:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1947)->values[2]=var1955;
{
var1956 = ((val*(*)(val* self))(var1947->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1947); /* native_to_s on <var1947:NativeArray[String]>*/
}
varonce1946 = var1947;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2569);
fatal_exit(1);
}
{
var1957 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1956, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1957); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1958!=NULL)) {
var1959 = varonce1958;
} else {
var1960 = ">=";
var1961 = core__flat___NativeString___to_s_full(var1960, 2l, 2l);
var1959 = var1961;
varonce1958 = var1959;
}
{
var1962 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1959); /* == on <var_pname:String>*/
}
if (var1962){
if (unlikely(varonce1963==NULL)) {
var1964 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1965!=NULL)) {
var1966 = varonce1965;
} else {
var1967 = " >= ";
var1968 = core__flat___NativeString___to_s_full(var1967, 4l, 4l);
var1966 = var1968;
varonce1965 = var1966;
}
((struct instance_core__NativeArray*)var1964)->values[1]=var1966;
} else {
var1964 = varonce1963;
varonce1963 = NULL;
}
{
var1969 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1970 = ((val*(*)(val* self))(var1969->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1969); /* to_s on <var1969:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1964)->values[0]=var1970;
{
var1971 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1972 = ((val*(*)(val* self))(var1971->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1971); /* to_s on <var1971:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1964)->values[2]=var1972;
{
var1973 = ((val*(*)(val* self))(var1964->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1964); /* native_to_s on <var1964:NativeArray[String]>*/
}
varonce1963 = var1964;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2572);
fatal_exit(1);
}
{
var1974 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1973, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1974); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1975!=NULL)) {
var1976 = varonce1975;
} else {
var1977 = "to_i";
var1978 = core__flat___NativeString___to_s_full(var1977, 4l, 4l);
var1976 = var1978;
varonce1975 = var1976;
}
{
var1979 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1976); /* == on <var_pname:String>*/
}
if (var1979){
if (unlikely(varonce1980==NULL)) {
var1981 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1982!=NULL)) {
var1983 = varonce1982;
} else {
var1984 = "(long)";
var1985 = core__flat___NativeString___to_s_full(var1984, 6l, 6l);
var1983 = var1985;
varonce1982 = var1983;
}
((struct instance_core__NativeArray*)var1981)->values[0]=var1983;
} else {
var1981 = varonce1980;
varonce1980 = NULL;
}
{
var1986 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1987 = ((val*(*)(val* self))(var1986->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1986); /* to_s on <var1986:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1981)->values[1]=var1987;
{
var1988 = ((val*(*)(val* self))(var1981->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1981); /* native_to_s on <var1981:NativeArray[String]>*/
}
varonce1980 = var1981;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2575);
fatal_exit(1);
}
{
var1989 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1988, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1989); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1990!=NULL)) {
var1991 = varonce1990;
} else {
var1992 = "to_b";
var1993 = core__flat___NativeString___to_s_full(var1992, 4l, 4l);
var1991 = var1993;
varonce1990 = var1991;
}
{
var1994 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1991); /* == on <var_pname:String>*/
}
if (var1994){
if (unlikely(varonce1995==NULL)) {
var1996 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1997!=NULL)) {
var1998 = varonce1997;
} else {
var1999 = "(unsigned char)";
var2000 = core__flat___NativeString___to_s_full(var1999, 15l, 15l);
var1998 = var2000;
varonce1997 = var1998;
}
((struct instance_core__NativeArray*)var1996)->values[0]=var1998;
} else {
var1996 = varonce1995;
varonce1995 = NULL;
}
{
var2001 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2002 = ((val*(*)(val* self))(var2001->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2001); /* to_s on <var2001:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1996)->values[1]=var2002;
{
var2003 = ((val*(*)(val* self))(var1996->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1996); /* native_to_s on <var1996:NativeArray[String]>*/
}
varonce1995 = var1996;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2578);
fatal_exit(1);
}
{
var2004 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2003, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2004); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2005!=NULL)) {
var2006 = varonce2005;
} else {
var2007 = "to_i16";
var2008 = core__flat___NativeString___to_s_full(var2007, 6l, 6l);
var2006 = var2008;
varonce2005 = var2006;
}
{
var2009 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2006); /* == on <var_pname:String>*/
}
if (var2009){
if (unlikely(varonce2010==NULL)) {
var2011 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2012!=NULL)) {
var2013 = varonce2012;
} else {
var2014 = "(int16_t)";
var2015 = core__flat___NativeString___to_s_full(var2014, 9l, 9l);
var2013 = var2015;
varonce2012 = var2013;
}
((struct instance_core__NativeArray*)var2011)->values[0]=var2013;
} else {
var2011 = varonce2010;
varonce2010 = NULL;
}
{
var2016 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2017 = ((val*(*)(val* self))(var2016->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2016); /* to_s on <var2016:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2011)->values[1]=var2017;
{
var2018 = ((val*(*)(val* self))(var2011->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2011); /* native_to_s on <var2011:NativeArray[String]>*/
}
varonce2010 = var2011;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2581);
fatal_exit(1);
}
{
var2019 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2018, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2019); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2020!=NULL)) {
var2021 = varonce2020;
} else {
var2022 = "to_u16";
var2023 = core__flat___NativeString___to_s_full(var2022, 6l, 6l);
var2021 = var2023;
varonce2020 = var2021;
}
{
var2024 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2021); /* == on <var_pname:String>*/
}
if (var2024){
if (unlikely(varonce2025==NULL)) {
var2026 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2027!=NULL)) {
var2028 = varonce2027;
} else {
var2029 = "(uint16_t)";
var2030 = core__flat___NativeString___to_s_full(var2029, 10l, 10l);
var2028 = var2030;
varonce2027 = var2028;
}
((struct instance_core__NativeArray*)var2026)->values[0]=var2028;
} else {
var2026 = varonce2025;
varonce2025 = NULL;
}
{
var2031 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2032 = ((val*(*)(val* self))(var2031->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2031); /* to_s on <var2031:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2026)->values[1]=var2032;
{
var2033 = ((val*(*)(val* self))(var2026->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2026); /* native_to_s on <var2026:NativeArray[String]>*/
}
varonce2025 = var2026;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2584);
fatal_exit(1);
}
{
var2034 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2033, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2034); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2035!=NULL)) {
var2036 = varonce2035;
} else {
var2037 = "to_i32";
var2038 = core__flat___NativeString___to_s_full(var2037, 6l, 6l);
var2036 = var2038;
varonce2035 = var2036;
}
{
var2039 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2036); /* == on <var_pname:String>*/
}
if (var2039){
if (unlikely(varonce2040==NULL)) {
var2041 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2042!=NULL)) {
var2043 = varonce2042;
} else {
var2044 = "(int32_t)";
var2045 = core__flat___NativeString___to_s_full(var2044, 9l, 9l);
var2043 = var2045;
varonce2042 = var2043;
}
((struct instance_core__NativeArray*)var2041)->values[0]=var2043;
} else {
var2041 = varonce2040;
varonce2040 = NULL;
}
{
var2046 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2047 = ((val*(*)(val* self))(var2046->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2046); /* to_s on <var2046:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2041)->values[1]=var2047;
{
var2048 = ((val*(*)(val* self))(var2041->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2041); /* native_to_s on <var2041:NativeArray[String]>*/
}
varonce2040 = var2041;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2587);
fatal_exit(1);
}
{
var2049 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2048, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2049); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2050!=NULL)) {
var2051 = varonce2050;
} else {
var2052 = "to_u32";
var2053 = core__flat___NativeString___to_s_full(var2052, 6l, 6l);
var2051 = var2053;
varonce2050 = var2051;
}
{
var2054 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2051); /* == on <var_pname:String>*/
}
if (var2054){
if (unlikely(varonce2055==NULL)) {
var2056 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2057!=NULL)) {
var2058 = varonce2057;
} else {
var2059 = "(uint32_t)";
var2060 = core__flat___NativeString___to_s_full(var2059, 10l, 10l);
var2058 = var2060;
varonce2057 = var2058;
}
((struct instance_core__NativeArray*)var2056)->values[0]=var2058;
} else {
var2056 = varonce2055;
varonce2055 = NULL;
}
{
var2061 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2062 = ((val*(*)(val* self))(var2061->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2061); /* to_s on <var2061:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2056)->values[1]=var2062;
{
var2063 = ((val*(*)(val* self))(var2056->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2056); /* native_to_s on <var2056:NativeArray[String]>*/
}
varonce2055 = var2056;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2590);
fatal_exit(1);
}
{
var2064 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2063, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2064); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2065!=NULL)) {
var2066 = varonce2065;
} else {
var2067 = "to_f";
var2068 = core__flat___NativeString___to_s_full(var2067, 4l, 4l);
var2066 = var2068;
varonce2065 = var2066;
}
{
var2069 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2066); /* == on <var_pname:String>*/
}
if (var2069){
if (unlikely(varonce2070==NULL)) {
var2071 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2072!=NULL)) {
var2073 = varonce2072;
} else {
var2074 = "(double)";
var2075 = core__flat___NativeString___to_s_full(var2074, 8l, 8l);
var2073 = var2075;
varonce2072 = var2073;
}
((struct instance_core__NativeArray*)var2071)->values[0]=var2073;
} else {
var2071 = varonce2070;
varonce2070 = NULL;
}
{
var2076 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2077 = ((val*(*)(val* self))(var2076->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2076); /* to_s on <var2076:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2071)->values[1]=var2077;
{
var2078 = ((val*(*)(val* self))(var2071->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2071); /* native_to_s on <var2071:NativeArray[String]>*/
}
varonce2070 = var2071;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2593);
fatal_exit(1);
}
{
var2079 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2078, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2079); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2080!=NULL)) {
var2081 = varonce2080;
} else {
var2082 = "&";
var2083 = core__flat___NativeString___to_s_full(var2082, 1l, 1l);
var2081 = var2083;
varonce2080 = var2081;
}
{
var2084 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2081); /* == on <var_pname:String>*/
}
if (var2084){
if (unlikely(varonce2085==NULL)) {
var2086 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2087!=NULL)) {
var2088 = varonce2087;
} else {
var2089 = " & ";
var2090 = core__flat___NativeString___to_s_full(var2089, 3l, 3l);
var2088 = var2090;
varonce2087 = var2088;
}
((struct instance_core__NativeArray*)var2086)->values[1]=var2088;
} else {
var2086 = varonce2085;
varonce2085 = NULL;
}
{
var2091 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2092 = ((val*(*)(val* self))(var2091->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2091); /* to_s on <var2091:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2086)->values[0]=var2092;
{
var2093 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2094 = ((val*(*)(val* self))(var2093->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2093); /* to_s on <var2093:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2086)->values[2]=var2094;
{
var2095 = ((val*(*)(val* self))(var2086->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2086); /* native_to_s on <var2086:NativeArray[String]>*/
}
varonce2085 = var2086;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2596);
fatal_exit(1);
}
{
var2096 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2095, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2096); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2097!=NULL)) {
var2098 = varonce2097;
} else {
var2099 = "|";
var2100 = core__flat___NativeString___to_s_full(var2099, 1l, 1l);
var2098 = var2100;
varonce2097 = var2098;
}
{
var2101 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2098); /* == on <var_pname:String>*/
}
if (var2101){
if (unlikely(varonce2102==NULL)) {
var2103 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2104!=NULL)) {
var2105 = varonce2104;
} else {
var2106 = " | ";
var2107 = core__flat___NativeString___to_s_full(var2106, 3l, 3l);
var2105 = var2107;
varonce2104 = var2105;
}
((struct instance_core__NativeArray*)var2103)->values[1]=var2105;
} else {
var2103 = varonce2102;
varonce2102 = NULL;
}
{
var2108 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2109 = ((val*(*)(val* self))(var2108->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2108); /* to_s on <var2108:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2103)->values[0]=var2109;
{
var2110 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2111 = ((val*(*)(val* self))(var2110->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2110); /* to_s on <var2110:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2103)->values[2]=var2111;
{
var2112 = ((val*(*)(val* self))(var2103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2103); /* native_to_s on <var2103:NativeArray[String]>*/
}
varonce2102 = var2103;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2599);
fatal_exit(1);
}
{
var2113 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2112, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2113); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2114!=NULL)) {
var2115 = varonce2114;
} else {
var2116 = "^";
var2117 = core__flat___NativeString___to_s_full(var2116, 1l, 1l);
var2115 = var2117;
varonce2114 = var2115;
}
{
var2118 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2115); /* == on <var_pname:String>*/
}
if (var2118){
if (unlikely(varonce2119==NULL)) {
var2120 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2121!=NULL)) {
var2122 = varonce2121;
} else {
var2123 = " ^ ";
var2124 = core__flat___NativeString___to_s_full(var2123, 3l, 3l);
var2122 = var2124;
varonce2121 = var2122;
}
((struct instance_core__NativeArray*)var2120)->values[1]=var2122;
} else {
var2120 = varonce2119;
varonce2119 = NULL;
}
{
var2125 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2126 = ((val*(*)(val* self))(var2125->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2125); /* to_s on <var2125:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2120)->values[0]=var2126;
{
var2127 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2128 = ((val*(*)(val* self))(var2127->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2127); /* to_s on <var2127:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2120)->values[2]=var2128;
{
var2129 = ((val*(*)(val* self))(var2120->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2120); /* native_to_s on <var2120:NativeArray[String]>*/
}
varonce2119 = var2120;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2602);
fatal_exit(1);
}
{
var2130 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2129, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2130); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2131!=NULL)) {
var2132 = varonce2131;
} else {
var2133 = "unary ~";
var2134 = core__flat___NativeString___to_s_full(var2133, 7l, 7l);
var2132 = var2134;
varonce2131 = var2132;
}
{
var2135 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2132); /* == on <var_pname:String>*/
}
if (var2135){
if (unlikely(varonce2136==NULL)) {
var2137 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2138!=NULL)) {
var2139 = varonce2138;
} else {
var2140 = "~";
var2141 = core__flat___NativeString___to_s_full(var2140, 1l, 1l);
var2139 = var2141;
varonce2138 = var2139;
}
((struct instance_core__NativeArray*)var2137)->values[0]=var2139;
} else {
var2137 = varonce2136;
varonce2136 = NULL;
}
{
var2142 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2143 = ((val*(*)(val* self))(var2142->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2142); /* to_s on <var2142:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2137)->values[1]=var2143;
{
var2144 = ((val*(*)(val* self))(var2137->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2137); /* native_to_s on <var2137:NativeArray[String]>*/
}
varonce2136 = var2137;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2605);
fatal_exit(1);
}
{
var2145 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2144, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2145); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
}
}
}
}
} else {
if (likely(varonce2146!=NULL)) {
var2147 = varonce2146;
} else {
var2148 = "Int16";
var2149 = core__flat___NativeString___to_s_full(var2148, 5l, 5l);
var2147 = var2149;
varonce2146 = var2147;
}
{
var2150 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var2147); /* == on <var_cname:String>*/
}
if (var2150){
if (likely(varonce2151!=NULL)) {
var2152 = varonce2151;
} else {
var2153 = "output";
var2154 = core__flat___NativeString___to_s_full(var2153, 6l, 6l);
var2152 = var2154;
varonce2151 = var2152;
}
{
var2155 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2152); /* == on <var_pname:String>*/
}
if (var2155){
if (unlikely(varonce2156==NULL)) {
var2157 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2158!=NULL)) {
var2159 = varonce2158;
} else {
var2160 = "printf(\"%\"PRIi16 \"\\n\", ";
var2161 = core__flat___NativeString___to_s_full(var2160, 23l, 23l);
var2159 = var2161;
varonce2158 = var2159;
}
((struct instance_core__NativeArray*)var2157)->values[0]=var2159;
if (likely(varonce2162!=NULL)) {
var2163 = varonce2162;
} else {
var2164 = ");";
var2165 = core__flat___NativeString___to_s_full(var2164, 2l, 2l);
var2163 = var2165;
varonce2162 = var2163;
}
((struct instance_core__NativeArray*)var2157)->values[2]=var2163;
} else {
var2157 = varonce2156;
varonce2156 = NULL;
}
{
var2166 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var2167 = ((val*(*)(val* self))(var2166->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2166); /* to_s on <var2166:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2157)->values[1]=var2167;
{
var2168 = ((val*(*)(val* self))(var2157->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2157); /* native_to_s on <var2157:NativeArray[String]>*/
}
varonce2156 = var2157;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var2168); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2169!=NULL)) {
var2170 = varonce2169;
} else {
var2171 = "object_id";
var2172 = core__flat___NativeString___to_s_full(var2171, 9l, 9l);
var2170 = var2172;
varonce2169 = var2170;
}
{
var2173 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2170); /* == on <var_pname:String>*/
}
if (var2173){
if (unlikely(varonce2174==NULL)) {
var2175 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2176!=NULL)) {
var2177 = varonce2176;
} else {
var2178 = "(long)";
var2179 = core__flat___NativeString___to_s_full(var2178, 6l, 6l);
var2177 = var2179;
varonce2176 = var2177;
}
((struct instance_core__NativeArray*)var2175)->values[0]=var2177;
} else {
var2175 = varonce2174;
varonce2174 = NULL;
}
{
var2180 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var2181 = ((val*(*)(val* self))(var2180->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2180); /* to_s on <var2180:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2175)->values[1]=var2181;
{
var2182 = ((val*(*)(val* self))(var2175->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2175); /* native_to_s on <var2175:NativeArray[String]>*/
}
varonce2174 = var2175;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2613);
fatal_exit(1);
}
{
var2183 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2182, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2183); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2184!=NULL)) {
var2185 = varonce2184;
} else {
var2186 = "+";
var2187 = core__flat___NativeString___to_s_full(var2186, 1l, 1l);
var2185 = var2187;
varonce2184 = var2185;
}
{
var2188 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2185); /* == on <var_pname:String>*/
}
if (var2188){
if (unlikely(varonce2189==NULL)) {
var2190 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2191!=NULL)) {
var2192 = varonce2191;
} else {
var2193 = " + ";
var2194 = core__flat___NativeString___to_s_full(var2193, 3l, 3l);
var2192 = var2194;
varonce2191 = var2192;
}
((struct instance_core__NativeArray*)var2190)->values[1]=var2192;
} else {
var2190 = varonce2189;
varonce2189 = NULL;
}
{
var2195 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2196 = ((val*(*)(val* self))(var2195->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2195); /* to_s on <var2195:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2190)->values[0]=var2196;
{
var2197 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2198 = ((val*(*)(val* self))(var2197->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2197); /* to_s on <var2197:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2190)->values[2]=var2198;
{
var2199 = ((val*(*)(val* self))(var2190->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2190); /* native_to_s on <var2190:NativeArray[String]>*/
}
varonce2189 = var2190;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2616);
fatal_exit(1);
}
{
var2200 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2199, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2200); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2201!=NULL)) {
var2202 = varonce2201;
} else {
var2203 = "-";
var2204 = core__flat___NativeString___to_s_full(var2203, 1l, 1l);
var2202 = var2204;
varonce2201 = var2202;
}
{
var2205 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2202); /* == on <var_pname:String>*/
}
if (var2205){
if (unlikely(varonce2206==NULL)) {
var2207 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2208!=NULL)) {
var2209 = varonce2208;
} else {
var2210 = " - ";
var2211 = core__flat___NativeString___to_s_full(var2210, 3l, 3l);
var2209 = var2211;
varonce2208 = var2209;
}
((struct instance_core__NativeArray*)var2207)->values[1]=var2209;
} else {
var2207 = varonce2206;
varonce2206 = NULL;
}
{
var2212 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2213 = ((val*(*)(val* self))(var2212->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2212); /* to_s on <var2212:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2207)->values[0]=var2213;
{
var2214 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2215 = ((val*(*)(val* self))(var2214->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2214); /* to_s on <var2214:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2207)->values[2]=var2215;
{
var2216 = ((val*(*)(val* self))(var2207->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2207); /* native_to_s on <var2207:NativeArray[String]>*/
}
varonce2206 = var2207;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2619);
fatal_exit(1);
}
{
var2217 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2216, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2217); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2218!=NULL)) {
var2219 = varonce2218;
} else {
var2220 = "unary -";
var2221 = core__flat___NativeString___to_s_full(var2220, 7l, 7l);
var2219 = var2221;
varonce2218 = var2219;
}
{
var2222 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2219); /* == on <var_pname:String>*/
}
if (var2222){
if (unlikely(varonce2223==NULL)) {
var2224 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2225!=NULL)) {
var2226 = varonce2225;
} else {
var2227 = "-";
var2228 = core__flat___NativeString___to_s_full(var2227, 1l, 1l);
var2226 = var2228;
varonce2225 = var2226;
}
((struct instance_core__NativeArray*)var2224)->values[0]=var2226;
} else {
var2224 = varonce2223;
varonce2223 = NULL;
}
{
var2229 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2230 = ((val*(*)(val* self))(var2229->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2229); /* to_s on <var2229:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2224)->values[1]=var2230;
{
var2231 = ((val*(*)(val* self))(var2224->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2224); /* native_to_s on <var2224:NativeArray[String]>*/
}
varonce2223 = var2224;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2622);
fatal_exit(1);
}
{
var2232 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2231, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2232); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2233!=NULL)) {
var2234 = varonce2233;
} else {
var2235 = "unary +";
var2236 = core__flat___NativeString___to_s_full(var2235, 7l, 7l);
var2234 = var2236;
varonce2233 = var2234;
}
{
var2237 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2234); /* == on <var_pname:String>*/
}
if (var2237){
{
var2238 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2238); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2239!=NULL)) {
var2240 = varonce2239;
} else {
var2241 = "*";
var2242 = core__flat___NativeString___to_s_full(var2241, 1l, 1l);
var2240 = var2242;
varonce2239 = var2240;
}
{
var2243 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2240); /* == on <var_pname:String>*/
}
if (var2243){
if (unlikely(varonce2244==NULL)) {
var2245 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2246!=NULL)) {
var2247 = varonce2246;
} else {
var2248 = " * ";
var2249 = core__flat___NativeString___to_s_full(var2248, 3l, 3l);
var2247 = var2249;
varonce2246 = var2247;
}
((struct instance_core__NativeArray*)var2245)->values[1]=var2247;
} else {
var2245 = varonce2244;
varonce2244 = NULL;
}
{
var2250 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2251 = ((val*(*)(val* self))(var2250->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2250); /* to_s on <var2250:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2245)->values[0]=var2251;
{
var2252 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2253 = ((val*(*)(val* self))(var2252->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2252); /* to_s on <var2252:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2245)->values[2]=var2253;
{
var2254 = ((val*(*)(val* self))(var2245->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2245); /* native_to_s on <var2245:NativeArray[String]>*/
}
varonce2244 = var2245;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2628);
fatal_exit(1);
}
{
var2255 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2254, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2255); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2256!=NULL)) {
var2257 = varonce2256;
} else {
var2258 = "/";
var2259 = core__flat___NativeString___to_s_full(var2258, 1l, 1l);
var2257 = var2259;
varonce2256 = var2257;
}
{
var2260 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2257); /* == on <var_pname:String>*/
}
if (var2260){
if (unlikely(varonce2261==NULL)) {
var2262 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2263!=NULL)) {
var2264 = varonce2263;
} else {
var2265 = " / ";
var2266 = core__flat___NativeString___to_s_full(var2265, 3l, 3l);
var2264 = var2266;
varonce2263 = var2264;
}
((struct instance_core__NativeArray*)var2262)->values[1]=var2264;
} else {
var2262 = varonce2261;
varonce2261 = NULL;
}
{
var2267 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2268 = ((val*(*)(val* self))(var2267->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2267); /* to_s on <var2267:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2262)->values[0]=var2268;
{
var2269 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2270 = ((val*(*)(val* self))(var2269->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2269); /* to_s on <var2269:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2262)->values[2]=var2270;
{
var2271 = ((val*(*)(val* self))(var2262->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2262); /* native_to_s on <var2262:NativeArray[String]>*/
}
varonce2261 = var2262;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2631);
fatal_exit(1);
}
{
var2272 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2271, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2272); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2273!=NULL)) {
var2274 = varonce2273;
} else {
var2275 = "%";
var2276 = core__flat___NativeString___to_s_full(var2275, 1l, 1l);
var2274 = var2276;
varonce2273 = var2274;
}
{
var2277 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2274); /* == on <var_pname:String>*/
}
if (var2277){
if (unlikely(varonce2278==NULL)) {
var2279 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2280!=NULL)) {
var2281 = varonce2280;
} else {
var2282 = " % ";
var2283 = core__flat___NativeString___to_s_full(var2282, 3l, 3l);
var2281 = var2283;
varonce2280 = var2281;
}
((struct instance_core__NativeArray*)var2279)->values[1]=var2281;
} else {
var2279 = varonce2278;
varonce2278 = NULL;
}
{
var2284 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2285 = ((val*(*)(val* self))(var2284->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2284); /* to_s on <var2284:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2279)->values[0]=var2285;
{
var2286 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2287 = ((val*(*)(val* self))(var2286->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2286); /* to_s on <var2286:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2279)->values[2]=var2287;
{
var2288 = ((val*(*)(val* self))(var2279->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2279); /* native_to_s on <var2279:NativeArray[String]>*/
}
varonce2278 = var2279;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2634);
fatal_exit(1);
}
{
var2289 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2288, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2289); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2290!=NULL)) {
var2291 = varonce2290;
} else {
var2292 = "<<";
var2293 = core__flat___NativeString___to_s_full(var2292, 2l, 2l);
var2291 = var2293;
varonce2290 = var2291;
}
{
var2294 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2291); /* == on <var_pname:String>*/
}
if (var2294){
if (unlikely(varonce2295==NULL)) {
var2296 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2297!=NULL)) {
var2298 = varonce2297;
} else {
var2299 = " << ";
var2300 = core__flat___NativeString___to_s_full(var2299, 4l, 4l);
var2298 = var2300;
varonce2297 = var2298;
}
((struct instance_core__NativeArray*)var2296)->values[1]=var2298;
} else {
var2296 = varonce2295;
varonce2295 = NULL;
}
{
var2301 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2302 = ((val*(*)(val* self))(var2301->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2301); /* to_s on <var2301:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2296)->values[0]=var2302;
{
var2303 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2304 = ((val*(*)(val* self))(var2303->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2303); /* to_s on <var2303:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2296)->values[2]=var2304;
{
var2305 = ((val*(*)(val* self))(var2296->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2296); /* native_to_s on <var2296:NativeArray[String]>*/
}
varonce2295 = var2296;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2637);
fatal_exit(1);
}
{
var2306 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2305, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2306); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2307!=NULL)) {
var2308 = varonce2307;
} else {
var2309 = ">>";
var2310 = core__flat___NativeString___to_s_full(var2309, 2l, 2l);
var2308 = var2310;
varonce2307 = var2308;
}
{
var2311 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2308); /* == on <var_pname:String>*/
}
if (var2311){
if (unlikely(varonce2312==NULL)) {
var2313 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2314!=NULL)) {
var2315 = varonce2314;
} else {
var2316 = " >> ";
var2317 = core__flat___NativeString___to_s_full(var2316, 4l, 4l);
var2315 = var2317;
varonce2314 = var2315;
}
((struct instance_core__NativeArray*)var2313)->values[1]=var2315;
} else {
var2313 = varonce2312;
varonce2312 = NULL;
}
{
var2318 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2319 = ((val*(*)(val* self))(var2318->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2318); /* to_s on <var2318:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2313)->values[0]=var2319;
{
var2320 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2321 = ((val*(*)(val* self))(var2320->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2320); /* to_s on <var2320:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2313)->values[2]=var2321;
{
var2322 = ((val*(*)(val* self))(var2313->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2313); /* native_to_s on <var2313:NativeArray[String]>*/
}
varonce2312 = var2313;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2640);
fatal_exit(1);
}
{
var2323 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2322, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2323); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2324!=NULL)) {
var2325 = varonce2324;
} else {
var2326 = "==";
var2327 = core__flat___NativeString___to_s_full(var2326, 2l, 2l);
var2325 = var2327;
varonce2324 = var2325;
}
{
var2328 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2325); /* == on <var_pname:String>*/
}
if (var2328){
{
var2329 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2330 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2331 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var2329, var2330);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2331); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2332!=NULL)) {
var2333 = varonce2332;
} else {
var2334 = "!=";
var2335 = core__flat___NativeString___to_s_full(var2334, 2l, 2l);
var2333 = var2335;
varonce2332 = var2333;
}
{
var2336 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2333); /* == on <var_pname:String>*/
}
if (var2336){
{
var2337 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2338 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2339 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var2337, var2338);
}
var_res2340 = var2339;
if (unlikely(varonce2341==NULL)) {
var2342 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2343!=NULL)) {
var2344 = varonce2343;
} else {
var2345 = "!";
var2346 = core__flat___NativeString___to_s_full(var2345, 1l, 1l);
var2344 = var2346;
varonce2343 = var2344;
}
((struct instance_core__NativeArray*)var2342)->values[0]=var2344;
} else {
var2342 = varonce2341;
varonce2341 = NULL;
}
{
var2347 = ((val*(*)(val* self))(var_res2340->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res2340); /* to_s on <var_res2340:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var2342)->values[1]=var2347;
{
var2348 = ((val*(*)(val* self))(var2342->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2342); /* native_to_s on <var2342:NativeArray[String]>*/
}
varonce2341 = var2342;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2647);
fatal_exit(1);
}
{
var2349 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2348, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2349); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2350!=NULL)) {
var2351 = varonce2350;
} else {
var2352 = "<";
var2353 = core__flat___NativeString___to_s_full(var2352, 1l, 1l);
var2351 = var2353;
varonce2350 = var2351;
}
{
var2354 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2351); /* == on <var_pname:String>*/
}
if (var2354){
if (unlikely(varonce2355==NULL)) {
var2356 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2357!=NULL)) {
var2358 = varonce2357;
} else {
var2359 = " < ";
var2360 = core__flat___NativeString___to_s_full(var2359, 3l, 3l);
var2358 = var2360;
varonce2357 = var2358;
}
((struct instance_core__NativeArray*)var2356)->values[1]=var2358;
} else {
var2356 = varonce2355;
varonce2355 = NULL;
}
{
var2361 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2362 = ((val*(*)(val* self))(var2361->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2361); /* to_s on <var2361:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2356)->values[0]=var2362;
{
var2363 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2364 = ((val*(*)(val* self))(var2363->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2363); /* to_s on <var2363:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2356)->values[2]=var2364;
{
var2365 = ((val*(*)(val* self))(var2356->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2356); /* native_to_s on <var2356:NativeArray[String]>*/
}
varonce2355 = var2356;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2650);
fatal_exit(1);
}
{
var2366 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2365, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2366); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2367!=NULL)) {
var2368 = varonce2367;
} else {
var2369 = ">";
var2370 = core__flat___NativeString___to_s_full(var2369, 1l, 1l);
var2368 = var2370;
varonce2367 = var2368;
}
{
var2371 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2368); /* == on <var_pname:String>*/
}
if (var2371){
if (unlikely(varonce2372==NULL)) {
var2373 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2374!=NULL)) {
var2375 = varonce2374;
} else {
var2376 = " > ";
var2377 = core__flat___NativeString___to_s_full(var2376, 3l, 3l);
var2375 = var2377;
varonce2374 = var2375;
}
((struct instance_core__NativeArray*)var2373)->values[1]=var2375;
} else {
var2373 = varonce2372;
varonce2372 = NULL;
}
{
var2378 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2379 = ((val*(*)(val* self))(var2378->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2378); /* to_s on <var2378:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2373)->values[0]=var2379;
{
var2380 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2381 = ((val*(*)(val* self))(var2380->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2380); /* to_s on <var2380:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2373)->values[2]=var2381;
{
var2382 = ((val*(*)(val* self))(var2373->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2373); /* native_to_s on <var2373:NativeArray[String]>*/
}
varonce2372 = var2373;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2653);
fatal_exit(1);
}
{
var2383 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2382, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2383); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2384!=NULL)) {
var2385 = varonce2384;
} else {
var2386 = "<=";
var2387 = core__flat___NativeString___to_s_full(var2386, 2l, 2l);
var2385 = var2387;
varonce2384 = var2385;
}
{
var2388 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2385); /* == on <var_pname:String>*/
}
if (var2388){
if (unlikely(varonce2389==NULL)) {
var2390 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2391!=NULL)) {
var2392 = varonce2391;
} else {
var2393 = " <= ";
var2394 = core__flat___NativeString___to_s_full(var2393, 4l, 4l);
var2392 = var2394;
varonce2391 = var2392;
}
((struct instance_core__NativeArray*)var2390)->values[1]=var2392;
} else {
var2390 = varonce2389;
varonce2389 = NULL;
}
{
var2395 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2396 = ((val*(*)(val* self))(var2395->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2395); /* to_s on <var2395:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2390)->values[0]=var2396;
{
var2397 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2398 = ((val*(*)(val* self))(var2397->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2397); /* to_s on <var2397:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2390)->values[2]=var2398;
{
var2399 = ((val*(*)(val* self))(var2390->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2390); /* native_to_s on <var2390:NativeArray[String]>*/
}
varonce2389 = var2390;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2656);
fatal_exit(1);
}
{
var2400 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2399, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2400); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2401!=NULL)) {
var2402 = varonce2401;
} else {
var2403 = ">=";
var2404 = core__flat___NativeString___to_s_full(var2403, 2l, 2l);
var2402 = var2404;
varonce2401 = var2402;
}
{
var2405 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2402); /* == on <var_pname:String>*/
}
if (var2405){
if (unlikely(varonce2406==NULL)) {
var2407 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2408!=NULL)) {
var2409 = varonce2408;
} else {
var2410 = " >= ";
var2411 = core__flat___NativeString___to_s_full(var2410, 4l, 4l);
var2409 = var2411;
varonce2408 = var2409;
}
((struct instance_core__NativeArray*)var2407)->values[1]=var2409;
} else {
var2407 = varonce2406;
varonce2406 = NULL;
}
{
var2412 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2413 = ((val*(*)(val* self))(var2412->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2412); /* to_s on <var2412:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2407)->values[0]=var2413;
{
var2414 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2415 = ((val*(*)(val* self))(var2414->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2414); /* to_s on <var2414:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2407)->values[2]=var2415;
{
var2416 = ((val*(*)(val* self))(var2407->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2407); /* native_to_s on <var2407:NativeArray[String]>*/
}
varonce2406 = var2407;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2659);
fatal_exit(1);
}
{
var2417 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2416, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2417); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2418!=NULL)) {
var2419 = varonce2418;
} else {
var2420 = "to_i";
var2421 = core__flat___NativeString___to_s_full(var2420, 4l, 4l);
var2419 = var2421;
varonce2418 = var2419;
}
{
var2422 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2419); /* == on <var_pname:String>*/
}
if (var2422){
if (unlikely(varonce2423==NULL)) {
var2424 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2425!=NULL)) {
var2426 = varonce2425;
} else {
var2427 = "(long)";
var2428 = core__flat___NativeString___to_s_full(var2427, 6l, 6l);
var2426 = var2428;
varonce2425 = var2426;
}
((struct instance_core__NativeArray*)var2424)->values[0]=var2426;
} else {
var2424 = varonce2423;
varonce2423 = NULL;
}
{
var2429 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2430 = ((val*(*)(val* self))(var2429->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2429); /* to_s on <var2429:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2424)->values[1]=var2430;
{
var2431 = ((val*(*)(val* self))(var2424->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2424); /* native_to_s on <var2424:NativeArray[String]>*/
}
varonce2423 = var2424;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2662);
fatal_exit(1);
}
{
var2432 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2431, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2432); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2433!=NULL)) {
var2434 = varonce2433;
} else {
var2435 = "to_b";
var2436 = core__flat___NativeString___to_s_full(var2435, 4l, 4l);
var2434 = var2436;
varonce2433 = var2434;
}
{
var2437 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2434); /* == on <var_pname:String>*/
}
if (var2437){
if (unlikely(varonce2438==NULL)) {
var2439 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2440!=NULL)) {
var2441 = varonce2440;
} else {
var2442 = "(unsigned char)";
var2443 = core__flat___NativeString___to_s_full(var2442, 15l, 15l);
var2441 = var2443;
varonce2440 = var2441;
}
((struct instance_core__NativeArray*)var2439)->values[0]=var2441;
} else {
var2439 = varonce2438;
varonce2438 = NULL;
}
{
var2444 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2445 = ((val*(*)(val* self))(var2444->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2444); /* to_s on <var2444:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2439)->values[1]=var2445;
{
var2446 = ((val*(*)(val* self))(var2439->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2439); /* native_to_s on <var2439:NativeArray[String]>*/
}
varonce2438 = var2439;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2665);
fatal_exit(1);
}
{
var2447 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2446, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2447); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2448!=NULL)) {
var2449 = varonce2448;
} else {
var2450 = "to_i8";
var2451 = core__flat___NativeString___to_s_full(var2450, 5l, 5l);
var2449 = var2451;
varonce2448 = var2449;
}
{
var2452 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2449); /* == on <var_pname:String>*/
}
if (var2452){
if (unlikely(varonce2453==NULL)) {
var2454 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2455!=NULL)) {
var2456 = varonce2455;
} else {
var2457 = "(int8_t)";
var2458 = core__flat___NativeString___to_s_full(var2457, 8l, 8l);
var2456 = var2458;
varonce2455 = var2456;
}
((struct instance_core__NativeArray*)var2454)->values[0]=var2456;
} else {
var2454 = varonce2453;
varonce2453 = NULL;
}
{
var2459 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2460 = ((val*(*)(val* self))(var2459->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2459); /* to_s on <var2459:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2454)->values[1]=var2460;
{
var2461 = ((val*(*)(val* self))(var2454->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2454); /* native_to_s on <var2454:NativeArray[String]>*/
}
varonce2453 = var2454;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2668);
fatal_exit(1);
}
{
var2462 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2461, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2462); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2463!=NULL)) {
var2464 = varonce2463;
} else {
var2465 = "to_u16";
var2466 = core__flat___NativeString___to_s_full(var2465, 6l, 6l);
var2464 = var2466;
varonce2463 = var2464;
}
{
var2467 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2464); /* == on <var_pname:String>*/
}
if (var2467){
if (unlikely(varonce2468==NULL)) {
var2469 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2470!=NULL)) {
var2471 = varonce2470;
} else {
var2472 = "(uint16_t)";
var2473 = core__flat___NativeString___to_s_full(var2472, 10l, 10l);
var2471 = var2473;
varonce2470 = var2471;
}
((struct instance_core__NativeArray*)var2469)->values[0]=var2471;
} else {
var2469 = varonce2468;
varonce2468 = NULL;
}
{
var2474 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2475 = ((val*(*)(val* self))(var2474->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2474); /* to_s on <var2474:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2469)->values[1]=var2475;
{
var2476 = ((val*(*)(val* self))(var2469->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2469); /* native_to_s on <var2469:NativeArray[String]>*/
}
varonce2468 = var2469;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2671);
fatal_exit(1);
}
{
var2477 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2476, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2477); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2478!=NULL)) {
var2479 = varonce2478;
} else {
var2480 = "to_i32";
var2481 = core__flat___NativeString___to_s_full(var2480, 6l, 6l);
var2479 = var2481;
varonce2478 = var2479;
}
{
var2482 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2479); /* == on <var_pname:String>*/
}
if (var2482){
if (unlikely(varonce2483==NULL)) {
var2484 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2485!=NULL)) {
var2486 = varonce2485;
} else {
var2487 = "(int32_t)";
var2488 = core__flat___NativeString___to_s_full(var2487, 9l, 9l);
var2486 = var2488;
varonce2485 = var2486;
}
((struct instance_core__NativeArray*)var2484)->values[0]=var2486;
} else {
var2484 = varonce2483;
varonce2483 = NULL;
}
{
var2489 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2490 = ((val*(*)(val* self))(var2489->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2489); /* to_s on <var2489:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2484)->values[1]=var2490;
{
var2491 = ((val*(*)(val* self))(var2484->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2484); /* native_to_s on <var2484:NativeArray[String]>*/
}
varonce2483 = var2484;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2674);
fatal_exit(1);
}
{
var2492 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2491, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2492); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2493!=NULL)) {
var2494 = varonce2493;
} else {
var2495 = "to_u32";
var2496 = core__flat___NativeString___to_s_full(var2495, 6l, 6l);
var2494 = var2496;
varonce2493 = var2494;
}
{
var2497 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2494); /* == on <var_pname:String>*/
}
if (var2497){
if (unlikely(varonce2498==NULL)) {
var2499 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2500!=NULL)) {
var2501 = varonce2500;
} else {
var2502 = "(uint32_t)";
var2503 = core__flat___NativeString___to_s_full(var2502, 10l, 10l);
var2501 = var2503;
varonce2500 = var2501;
}
((struct instance_core__NativeArray*)var2499)->values[0]=var2501;
} else {
var2499 = varonce2498;
varonce2498 = NULL;
}
{
var2504 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2505 = ((val*(*)(val* self))(var2504->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2504); /* to_s on <var2504:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2499)->values[1]=var2505;
{
var2506 = ((val*(*)(val* self))(var2499->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2499); /* native_to_s on <var2499:NativeArray[String]>*/
}
varonce2498 = var2499;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2677);
fatal_exit(1);
}
{
var2507 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2506, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2507); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2508!=NULL)) {
var2509 = varonce2508;
} else {
var2510 = "to_f";
var2511 = core__flat___NativeString___to_s_full(var2510, 4l, 4l);
var2509 = var2511;
varonce2508 = var2509;
}
{
var2512 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2509); /* == on <var_pname:String>*/
}
if (var2512){
if (unlikely(varonce2513==NULL)) {
var2514 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2515!=NULL)) {
var2516 = varonce2515;
} else {
var2517 = "(double)";
var2518 = core__flat___NativeString___to_s_full(var2517, 8l, 8l);
var2516 = var2518;
varonce2515 = var2516;
}
((struct instance_core__NativeArray*)var2514)->values[0]=var2516;
} else {
var2514 = varonce2513;
varonce2513 = NULL;
}
{
var2519 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2520 = ((val*(*)(val* self))(var2519->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2519); /* to_s on <var2519:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2514)->values[1]=var2520;
{
var2521 = ((val*(*)(val* self))(var2514->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2514); /* native_to_s on <var2514:NativeArray[String]>*/
}
varonce2513 = var2514;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2680);
fatal_exit(1);
}
{
var2522 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2521, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2522); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2523!=NULL)) {
var2524 = varonce2523;
} else {
var2525 = "&";
var2526 = core__flat___NativeString___to_s_full(var2525, 1l, 1l);
var2524 = var2526;
varonce2523 = var2524;
}
{
var2527 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2524); /* == on <var_pname:String>*/
}
if (var2527){
if (unlikely(varonce2528==NULL)) {
var2529 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2530!=NULL)) {
var2531 = varonce2530;
} else {
var2532 = " & ";
var2533 = core__flat___NativeString___to_s_full(var2532, 3l, 3l);
var2531 = var2533;
varonce2530 = var2531;
}
((struct instance_core__NativeArray*)var2529)->values[1]=var2531;
} else {
var2529 = varonce2528;
varonce2528 = NULL;
}
{
var2534 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2535 = ((val*(*)(val* self))(var2534->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2534); /* to_s on <var2534:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2529)->values[0]=var2535;
{
var2536 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2537 = ((val*(*)(val* self))(var2536->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2536); /* to_s on <var2536:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2529)->values[2]=var2537;
{
var2538 = ((val*(*)(val* self))(var2529->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2529); /* native_to_s on <var2529:NativeArray[String]>*/
}
varonce2528 = var2529;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2683);
fatal_exit(1);
}
{
var2539 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2538, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2539); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2540!=NULL)) {
var2541 = varonce2540;
} else {
var2542 = "|";
var2543 = core__flat___NativeString___to_s_full(var2542, 1l, 1l);
var2541 = var2543;
varonce2540 = var2541;
}
{
var2544 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2541); /* == on <var_pname:String>*/
}
if (var2544){
if (unlikely(varonce2545==NULL)) {
var2546 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2547!=NULL)) {
var2548 = varonce2547;
} else {
var2549 = " | ";
var2550 = core__flat___NativeString___to_s_full(var2549, 3l, 3l);
var2548 = var2550;
varonce2547 = var2548;
}
((struct instance_core__NativeArray*)var2546)->values[1]=var2548;
} else {
var2546 = varonce2545;
varonce2545 = NULL;
}
{
var2551 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2552 = ((val*(*)(val* self))(var2551->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2551); /* to_s on <var2551:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2546)->values[0]=var2552;
{
var2553 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2554 = ((val*(*)(val* self))(var2553->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2553); /* to_s on <var2553:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2546)->values[2]=var2554;
{
var2555 = ((val*(*)(val* self))(var2546->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2546); /* native_to_s on <var2546:NativeArray[String]>*/
}
varonce2545 = var2546;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2686);
fatal_exit(1);
}
{
var2556 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2555, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2556); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2557!=NULL)) {
var2558 = varonce2557;
} else {
var2559 = "^";
var2560 = core__flat___NativeString___to_s_full(var2559, 1l, 1l);
var2558 = var2560;
varonce2557 = var2558;
}
{
var2561 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2558); /* == on <var_pname:String>*/
}
if (var2561){
if (unlikely(varonce2562==NULL)) {
var2563 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2564!=NULL)) {
var2565 = varonce2564;
} else {
var2566 = " ^ ";
var2567 = core__flat___NativeString___to_s_full(var2566, 3l, 3l);
var2565 = var2567;
varonce2564 = var2565;
}
((struct instance_core__NativeArray*)var2563)->values[1]=var2565;
} else {
var2563 = varonce2562;
varonce2562 = NULL;
}
{
var2568 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2569 = ((val*(*)(val* self))(var2568->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2568); /* to_s on <var2568:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2563)->values[0]=var2569;
{
var2570 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2571 = ((val*(*)(val* self))(var2570->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2570); /* to_s on <var2570:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2563)->values[2]=var2571;
{
var2572 = ((val*(*)(val* self))(var2563->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2563); /* native_to_s on <var2563:NativeArray[String]>*/
}
varonce2562 = var2563;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2689);
fatal_exit(1);
}
{
var2573 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2572, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2573); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2574!=NULL)) {
var2575 = varonce2574;
} else {
var2576 = "unary ~";
var2577 = core__flat___NativeString___to_s_full(var2576, 7l, 7l);
var2575 = var2577;
varonce2574 = var2575;
}
{
var2578 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2575); /* == on <var_pname:String>*/
}
if (var2578){
if (unlikely(varonce2579==NULL)) {
var2580 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2581!=NULL)) {
var2582 = varonce2581;
} else {
var2583 = "~";
var2584 = core__flat___NativeString___to_s_full(var2583, 1l, 1l);
var2582 = var2584;
varonce2581 = var2582;
}
((struct instance_core__NativeArray*)var2580)->values[0]=var2582;
} else {
var2580 = varonce2579;
varonce2579 = NULL;
}
{
var2585 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2586 = ((val*(*)(val* self))(var2585->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2585); /* to_s on <var2585:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2580)->values[1]=var2586;
{
var2587 = ((val*(*)(val* self))(var2580->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2580); /* native_to_s on <var2580:NativeArray[String]>*/
}
varonce2579 = var2580;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2692);
fatal_exit(1);
}
{
var2588 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2587, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2588); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
}
}
}
}
} else {
if (likely(varonce2589!=NULL)) {
var2590 = varonce2589;
} else {
var2591 = "UInt16";
var2592 = core__flat___NativeString___to_s_full(var2591, 6l, 6l);
var2590 = var2592;
varonce2589 = var2590;
}
{
var2593 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var2590); /* == on <var_cname:String>*/
}
if (var2593){
if (likely(varonce2594!=NULL)) {
var2595 = varonce2594;
} else {
var2596 = "output";
var2597 = core__flat___NativeString___to_s_full(var2596, 6l, 6l);
var2595 = var2597;
varonce2594 = var2595;
}
{
var2598 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2595); /* == on <var_pname:String>*/
}
if (var2598){
if (unlikely(varonce2599==NULL)) {
var2600 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2601!=NULL)) {
var2602 = varonce2601;
} else {
var2603 = "printf(\"%\"PRIu16 \"\\n\", ";
var2604 = core__flat___NativeString___to_s_full(var2603, 23l, 23l);
var2602 = var2604;
varonce2601 = var2602;
}
((struct instance_core__NativeArray*)var2600)->values[0]=var2602;
if (likely(varonce2605!=NULL)) {
var2606 = varonce2605;
} else {
var2607 = ");";
var2608 = core__flat___NativeString___to_s_full(var2607, 2l, 2l);
var2606 = var2608;
varonce2605 = var2606;
}
((struct instance_core__NativeArray*)var2600)->values[2]=var2606;
} else {
var2600 = varonce2599;
varonce2599 = NULL;
}
{
var2609 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var2610 = ((val*(*)(val* self))(var2609->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2609); /* to_s on <var2609:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2600)->values[1]=var2610;
{
var2611 = ((val*(*)(val* self))(var2600->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2600); /* native_to_s on <var2600:NativeArray[String]>*/
}
varonce2599 = var2600;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var2611); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2612!=NULL)) {
var2613 = varonce2612;
} else {
var2614 = "object_id";
var2615 = core__flat___NativeString___to_s_full(var2614, 9l, 9l);
var2613 = var2615;
varonce2612 = var2613;
}
{
var2616 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2613); /* == on <var_pname:String>*/
}
if (var2616){
if (unlikely(varonce2617==NULL)) {
var2618 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2619!=NULL)) {
var2620 = varonce2619;
} else {
var2621 = "(long)";
var2622 = core__flat___NativeString___to_s_full(var2621, 6l, 6l);
var2620 = var2622;
varonce2619 = var2620;
}
((struct instance_core__NativeArray*)var2618)->values[0]=var2620;
} else {
var2618 = varonce2617;
varonce2617 = NULL;
}
{
var2623 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var2624 = ((val*(*)(val* self))(var2623->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2623); /* to_s on <var2623:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2618)->values[1]=var2624;
{
var2625 = ((val*(*)(val* self))(var2618->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2618); /* native_to_s on <var2618:NativeArray[String]>*/
}
varonce2617 = var2618;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2700);
fatal_exit(1);
}
{
var2626 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2625, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2626); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2627!=NULL)) {
var2628 = varonce2627;
} else {
var2629 = "+";
var2630 = core__flat___NativeString___to_s_full(var2629, 1l, 1l);
var2628 = var2630;
varonce2627 = var2628;
}
{
var2631 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2628); /* == on <var_pname:String>*/
}
if (var2631){
if (unlikely(varonce2632==NULL)) {
var2633 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2634!=NULL)) {
var2635 = varonce2634;
} else {
var2636 = " + ";
var2637 = core__flat___NativeString___to_s_full(var2636, 3l, 3l);
var2635 = var2637;
varonce2634 = var2635;
}
((struct instance_core__NativeArray*)var2633)->values[1]=var2635;
} else {
var2633 = varonce2632;
varonce2632 = NULL;
}
{
var2638 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2639 = ((val*(*)(val* self))(var2638->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2638); /* to_s on <var2638:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2633)->values[0]=var2639;
{
var2640 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2641 = ((val*(*)(val* self))(var2640->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2640); /* to_s on <var2640:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2633)->values[2]=var2641;
{
var2642 = ((val*(*)(val* self))(var2633->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2633); /* native_to_s on <var2633:NativeArray[String]>*/
}
varonce2632 = var2633;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2703);
fatal_exit(1);
}
{
var2643 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2642, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2643); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2644!=NULL)) {
var2645 = varonce2644;
} else {
var2646 = "-";
var2647 = core__flat___NativeString___to_s_full(var2646, 1l, 1l);
var2645 = var2647;
varonce2644 = var2645;
}
{
var2648 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2645); /* == on <var_pname:String>*/
}
if (var2648){
if (unlikely(varonce2649==NULL)) {
var2650 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2651!=NULL)) {
var2652 = varonce2651;
} else {
var2653 = " - ";
var2654 = core__flat___NativeString___to_s_full(var2653, 3l, 3l);
var2652 = var2654;
varonce2651 = var2652;
}
((struct instance_core__NativeArray*)var2650)->values[1]=var2652;
} else {
var2650 = varonce2649;
varonce2649 = NULL;
}
{
var2655 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2656 = ((val*(*)(val* self))(var2655->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2655); /* to_s on <var2655:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2650)->values[0]=var2656;
{
var2657 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2658 = ((val*(*)(val* self))(var2657->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2657); /* to_s on <var2657:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2650)->values[2]=var2658;
{
var2659 = ((val*(*)(val* self))(var2650->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2650); /* native_to_s on <var2650:NativeArray[String]>*/
}
varonce2649 = var2650;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2706);
fatal_exit(1);
}
{
var2660 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2659, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2660); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2661!=NULL)) {
var2662 = varonce2661;
} else {
var2663 = "unary -";
var2664 = core__flat___NativeString___to_s_full(var2663, 7l, 7l);
var2662 = var2664;
varonce2661 = var2662;
}
{
var2665 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2662); /* == on <var_pname:String>*/
}
if (var2665){
if (unlikely(varonce2666==NULL)) {
var2667 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2668!=NULL)) {
var2669 = varonce2668;
} else {
var2670 = "-";
var2671 = core__flat___NativeString___to_s_full(var2670, 1l, 1l);
var2669 = var2671;
varonce2668 = var2669;
}
((struct instance_core__NativeArray*)var2667)->values[0]=var2669;
} else {
var2667 = varonce2666;
varonce2666 = NULL;
}
{
var2672 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2673 = ((val*(*)(val* self))(var2672->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2672); /* to_s on <var2672:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2667)->values[1]=var2673;
{
var2674 = ((val*(*)(val* self))(var2667->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2667); /* native_to_s on <var2667:NativeArray[String]>*/
}
varonce2666 = var2667;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2709);
fatal_exit(1);
}
{
var2675 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2674, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2675); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2676!=NULL)) {
var2677 = varonce2676;
} else {
var2678 = "unary +";
var2679 = core__flat___NativeString___to_s_full(var2678, 7l, 7l);
var2677 = var2679;
varonce2676 = var2677;
}
{
var2680 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2677); /* == on <var_pname:String>*/
}
if (var2680){
{
var2681 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2681); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2682!=NULL)) {
var2683 = varonce2682;
} else {
var2684 = "*";
var2685 = core__flat___NativeString___to_s_full(var2684, 1l, 1l);
var2683 = var2685;
varonce2682 = var2683;
}
{
var2686 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2683); /* == on <var_pname:String>*/
}
if (var2686){
if (unlikely(varonce2687==NULL)) {
var2688 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2689!=NULL)) {
var2690 = varonce2689;
} else {
var2691 = " * ";
var2692 = core__flat___NativeString___to_s_full(var2691, 3l, 3l);
var2690 = var2692;
varonce2689 = var2690;
}
((struct instance_core__NativeArray*)var2688)->values[1]=var2690;
} else {
var2688 = varonce2687;
varonce2687 = NULL;
}
{
var2693 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2694 = ((val*(*)(val* self))(var2693->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2693); /* to_s on <var2693:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2688)->values[0]=var2694;
{
var2695 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2696 = ((val*(*)(val* self))(var2695->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2695); /* to_s on <var2695:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2688)->values[2]=var2696;
{
var2697 = ((val*(*)(val* self))(var2688->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2688); /* native_to_s on <var2688:NativeArray[String]>*/
}
varonce2687 = var2688;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2715);
fatal_exit(1);
}
{
var2698 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2697, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2698); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2699!=NULL)) {
var2700 = varonce2699;
} else {
var2701 = "/";
var2702 = core__flat___NativeString___to_s_full(var2701, 1l, 1l);
var2700 = var2702;
varonce2699 = var2700;
}
{
var2703 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2700); /* == on <var_pname:String>*/
}
if (var2703){
if (unlikely(varonce2704==NULL)) {
var2705 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2706!=NULL)) {
var2707 = varonce2706;
} else {
var2708 = " / ";
var2709 = core__flat___NativeString___to_s_full(var2708, 3l, 3l);
var2707 = var2709;
varonce2706 = var2707;
}
((struct instance_core__NativeArray*)var2705)->values[1]=var2707;
} else {
var2705 = varonce2704;
varonce2704 = NULL;
}
{
var2710 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2711 = ((val*(*)(val* self))(var2710->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2710); /* to_s on <var2710:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2705)->values[0]=var2711;
{
var2712 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2713 = ((val*(*)(val* self))(var2712->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2712); /* to_s on <var2712:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2705)->values[2]=var2713;
{
var2714 = ((val*(*)(val* self))(var2705->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2705); /* native_to_s on <var2705:NativeArray[String]>*/
}
varonce2704 = var2705;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2718);
fatal_exit(1);
}
{
var2715 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2714, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2715); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2716!=NULL)) {
var2717 = varonce2716;
} else {
var2718 = "%";
var2719 = core__flat___NativeString___to_s_full(var2718, 1l, 1l);
var2717 = var2719;
varonce2716 = var2717;
}
{
var2720 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2717); /* == on <var_pname:String>*/
}
if (var2720){
if (unlikely(varonce2721==NULL)) {
var2722 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2723!=NULL)) {
var2724 = varonce2723;
} else {
var2725 = " % ";
var2726 = core__flat___NativeString___to_s_full(var2725, 3l, 3l);
var2724 = var2726;
varonce2723 = var2724;
}
((struct instance_core__NativeArray*)var2722)->values[1]=var2724;
} else {
var2722 = varonce2721;
varonce2721 = NULL;
}
{
var2727 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2728 = ((val*(*)(val* self))(var2727->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2727); /* to_s on <var2727:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2722)->values[0]=var2728;
{
var2729 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2730 = ((val*(*)(val* self))(var2729->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2729); /* to_s on <var2729:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2722)->values[2]=var2730;
{
var2731 = ((val*(*)(val* self))(var2722->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2722); /* native_to_s on <var2722:NativeArray[String]>*/
}
varonce2721 = var2722;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2721);
fatal_exit(1);
}
{
var2732 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2731, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2732); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2733!=NULL)) {
var2734 = varonce2733;
} else {
var2735 = "<<";
var2736 = core__flat___NativeString___to_s_full(var2735, 2l, 2l);
var2734 = var2736;
varonce2733 = var2734;
}
{
var2737 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2734); /* == on <var_pname:String>*/
}
if (var2737){
if (unlikely(varonce2738==NULL)) {
var2739 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2740!=NULL)) {
var2741 = varonce2740;
} else {
var2742 = " << ";
var2743 = core__flat___NativeString___to_s_full(var2742, 4l, 4l);
var2741 = var2743;
varonce2740 = var2741;
}
((struct instance_core__NativeArray*)var2739)->values[1]=var2741;
} else {
var2739 = varonce2738;
varonce2738 = NULL;
}
{
var2744 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2745 = ((val*(*)(val* self))(var2744->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2744); /* to_s on <var2744:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2739)->values[0]=var2745;
{
var2746 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2747 = ((val*(*)(val* self))(var2746->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2746); /* to_s on <var2746:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2739)->values[2]=var2747;
{
var2748 = ((val*(*)(val* self))(var2739->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2739); /* native_to_s on <var2739:NativeArray[String]>*/
}
varonce2738 = var2739;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2724);
fatal_exit(1);
}
{
var2749 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2748, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2749); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2750!=NULL)) {
var2751 = varonce2750;
} else {
var2752 = ">>";
var2753 = core__flat___NativeString___to_s_full(var2752, 2l, 2l);
var2751 = var2753;
varonce2750 = var2751;
}
{
var2754 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2751); /* == on <var_pname:String>*/
}
if (var2754){
if (unlikely(varonce2755==NULL)) {
var2756 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2757!=NULL)) {
var2758 = varonce2757;
} else {
var2759 = " >> ";
var2760 = core__flat___NativeString___to_s_full(var2759, 4l, 4l);
var2758 = var2760;
varonce2757 = var2758;
}
((struct instance_core__NativeArray*)var2756)->values[1]=var2758;
} else {
var2756 = varonce2755;
varonce2755 = NULL;
}
{
var2761 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2762 = ((val*(*)(val* self))(var2761->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2761); /* to_s on <var2761:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2756)->values[0]=var2762;
{
var2763 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2764 = ((val*(*)(val* self))(var2763->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2763); /* to_s on <var2763:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2756)->values[2]=var2764;
{
var2765 = ((val*(*)(val* self))(var2756->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2756); /* native_to_s on <var2756:NativeArray[String]>*/
}
varonce2755 = var2756;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2727);
fatal_exit(1);
}
{
var2766 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2765, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2766); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2767!=NULL)) {
var2768 = varonce2767;
} else {
var2769 = "==";
var2770 = core__flat___NativeString___to_s_full(var2769, 2l, 2l);
var2768 = var2770;
varonce2767 = var2768;
}
{
var2771 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2768); /* == on <var_pname:String>*/
}
if (var2771){
{
var2772 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2773 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2774 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var2772, var2773);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2774); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2775!=NULL)) {
var2776 = varonce2775;
} else {
var2777 = "!=";
var2778 = core__flat___NativeString___to_s_full(var2777, 2l, 2l);
var2776 = var2778;
varonce2775 = var2776;
}
{
var2779 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2776); /* == on <var_pname:String>*/
}
if (var2779){
{
var2780 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2781 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2782 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var2780, var2781);
}
var_res2783 = var2782;
if (unlikely(varonce2784==NULL)) {
var2785 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2786!=NULL)) {
var2787 = varonce2786;
} else {
var2788 = "!";
var2789 = core__flat___NativeString___to_s_full(var2788, 1l, 1l);
var2787 = var2789;
varonce2786 = var2787;
}
((struct instance_core__NativeArray*)var2785)->values[0]=var2787;
} else {
var2785 = varonce2784;
varonce2784 = NULL;
}
{
var2790 = ((val*(*)(val* self))(var_res2783->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res2783); /* to_s on <var_res2783:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var2785)->values[1]=var2790;
{
var2791 = ((val*(*)(val* self))(var2785->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2785); /* native_to_s on <var2785:NativeArray[String]>*/
}
varonce2784 = var2785;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2734);
fatal_exit(1);
}
{
var2792 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2791, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2792); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2793!=NULL)) {
var2794 = varonce2793;
} else {
var2795 = "<";
var2796 = core__flat___NativeString___to_s_full(var2795, 1l, 1l);
var2794 = var2796;
varonce2793 = var2794;
}
{
var2797 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2794); /* == on <var_pname:String>*/
}
if (var2797){
if (unlikely(varonce2798==NULL)) {
var2799 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2800!=NULL)) {
var2801 = varonce2800;
} else {
var2802 = " < ";
var2803 = core__flat___NativeString___to_s_full(var2802, 3l, 3l);
var2801 = var2803;
varonce2800 = var2801;
}
((struct instance_core__NativeArray*)var2799)->values[1]=var2801;
} else {
var2799 = varonce2798;
varonce2798 = NULL;
}
{
var2804 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2805 = ((val*(*)(val* self))(var2804->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2804); /* to_s on <var2804:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2799)->values[0]=var2805;
{
var2806 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2807 = ((val*(*)(val* self))(var2806->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2806); /* to_s on <var2806:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2799)->values[2]=var2807;
{
var2808 = ((val*(*)(val* self))(var2799->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2799); /* native_to_s on <var2799:NativeArray[String]>*/
}
varonce2798 = var2799;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2737);
fatal_exit(1);
}
{
var2809 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2808, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2809); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2810!=NULL)) {
var2811 = varonce2810;
} else {
var2812 = ">";
var2813 = core__flat___NativeString___to_s_full(var2812, 1l, 1l);
var2811 = var2813;
varonce2810 = var2811;
}
{
var2814 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2811); /* == on <var_pname:String>*/
}
if (var2814){
if (unlikely(varonce2815==NULL)) {
var2816 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2817!=NULL)) {
var2818 = varonce2817;
} else {
var2819 = " > ";
var2820 = core__flat___NativeString___to_s_full(var2819, 3l, 3l);
var2818 = var2820;
varonce2817 = var2818;
}
((struct instance_core__NativeArray*)var2816)->values[1]=var2818;
} else {
var2816 = varonce2815;
varonce2815 = NULL;
}
{
var2821 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2822 = ((val*(*)(val* self))(var2821->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2821); /* to_s on <var2821:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2816)->values[0]=var2822;
{
var2823 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2824 = ((val*(*)(val* self))(var2823->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2823); /* to_s on <var2823:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2816)->values[2]=var2824;
{
var2825 = ((val*(*)(val* self))(var2816->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2816); /* native_to_s on <var2816:NativeArray[String]>*/
}
varonce2815 = var2816;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2740);
fatal_exit(1);
}
{
var2826 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2825, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2826); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2827!=NULL)) {
var2828 = varonce2827;
} else {
var2829 = "<=";
var2830 = core__flat___NativeString___to_s_full(var2829, 2l, 2l);
var2828 = var2830;
varonce2827 = var2828;
}
{
var2831 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2828); /* == on <var_pname:String>*/
}
if (var2831){
if (unlikely(varonce2832==NULL)) {
var2833 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2834!=NULL)) {
var2835 = varonce2834;
} else {
var2836 = " <= ";
var2837 = core__flat___NativeString___to_s_full(var2836, 4l, 4l);
var2835 = var2837;
varonce2834 = var2835;
}
((struct instance_core__NativeArray*)var2833)->values[1]=var2835;
} else {
var2833 = varonce2832;
varonce2832 = NULL;
}
{
var2838 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2839 = ((val*(*)(val* self))(var2838->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2838); /* to_s on <var2838:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2833)->values[0]=var2839;
{
var2840 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2841 = ((val*(*)(val* self))(var2840->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2840); /* to_s on <var2840:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2833)->values[2]=var2841;
{
var2842 = ((val*(*)(val* self))(var2833->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2833); /* native_to_s on <var2833:NativeArray[String]>*/
}
varonce2832 = var2833;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2743);
fatal_exit(1);
}
{
var2843 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2842, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2843); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2844!=NULL)) {
var2845 = varonce2844;
} else {
var2846 = ">=";
var2847 = core__flat___NativeString___to_s_full(var2846, 2l, 2l);
var2845 = var2847;
varonce2844 = var2845;
}
{
var2848 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2845); /* == on <var_pname:String>*/
}
if (var2848){
if (unlikely(varonce2849==NULL)) {
var2850 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2851!=NULL)) {
var2852 = varonce2851;
} else {
var2853 = " >= ";
var2854 = core__flat___NativeString___to_s_full(var2853, 4l, 4l);
var2852 = var2854;
varonce2851 = var2852;
}
((struct instance_core__NativeArray*)var2850)->values[1]=var2852;
} else {
var2850 = varonce2849;
varonce2849 = NULL;
}
{
var2855 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2856 = ((val*(*)(val* self))(var2855->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2855); /* to_s on <var2855:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2850)->values[0]=var2856;
{
var2857 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2858 = ((val*(*)(val* self))(var2857->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2857); /* to_s on <var2857:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2850)->values[2]=var2858;
{
var2859 = ((val*(*)(val* self))(var2850->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2850); /* native_to_s on <var2850:NativeArray[String]>*/
}
varonce2849 = var2850;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2746);
fatal_exit(1);
}
{
var2860 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2859, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2860); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2861!=NULL)) {
var2862 = varonce2861;
} else {
var2863 = "to_i";
var2864 = core__flat___NativeString___to_s_full(var2863, 4l, 4l);
var2862 = var2864;
varonce2861 = var2862;
}
{
var2865 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2862); /* == on <var_pname:String>*/
}
if (var2865){
if (unlikely(varonce2866==NULL)) {
var2867 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2868!=NULL)) {
var2869 = varonce2868;
} else {
var2870 = "(long)";
var2871 = core__flat___NativeString___to_s_full(var2870, 6l, 6l);
var2869 = var2871;
varonce2868 = var2869;
}
((struct instance_core__NativeArray*)var2867)->values[0]=var2869;
} else {
var2867 = varonce2866;
varonce2866 = NULL;
}
{
var2872 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2873 = ((val*(*)(val* self))(var2872->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2872); /* to_s on <var2872:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2867)->values[1]=var2873;
{
var2874 = ((val*(*)(val* self))(var2867->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2867); /* native_to_s on <var2867:NativeArray[String]>*/
}
varonce2866 = var2867;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2749);
fatal_exit(1);
}
{
var2875 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2874, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2875); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2876!=NULL)) {
var2877 = varonce2876;
} else {
var2878 = "to_b";
var2879 = core__flat___NativeString___to_s_full(var2878, 4l, 4l);
var2877 = var2879;
varonce2876 = var2877;
}
{
var2880 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2877); /* == on <var_pname:String>*/
}
if (var2880){
if (unlikely(varonce2881==NULL)) {
var2882 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2883!=NULL)) {
var2884 = varonce2883;
} else {
var2885 = "(unsigned char)";
var2886 = core__flat___NativeString___to_s_full(var2885, 15l, 15l);
var2884 = var2886;
varonce2883 = var2884;
}
((struct instance_core__NativeArray*)var2882)->values[0]=var2884;
} else {
var2882 = varonce2881;
varonce2881 = NULL;
}
{
var2887 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2888 = ((val*(*)(val* self))(var2887->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2887); /* to_s on <var2887:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2882)->values[1]=var2888;
{
var2889 = ((val*(*)(val* self))(var2882->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2882); /* native_to_s on <var2882:NativeArray[String]>*/
}
varonce2881 = var2882;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2752);
fatal_exit(1);
}
{
var2890 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2889, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2890); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2891!=NULL)) {
var2892 = varonce2891;
} else {
var2893 = "to_i8";
var2894 = core__flat___NativeString___to_s_full(var2893, 5l, 5l);
var2892 = var2894;
varonce2891 = var2892;
}
{
var2895 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2892); /* == on <var_pname:String>*/
}
if (var2895){
if (unlikely(varonce2896==NULL)) {
var2897 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2898!=NULL)) {
var2899 = varonce2898;
} else {
var2900 = "(int8_t)";
var2901 = core__flat___NativeString___to_s_full(var2900, 8l, 8l);
var2899 = var2901;
varonce2898 = var2899;
}
((struct instance_core__NativeArray*)var2897)->values[0]=var2899;
} else {
var2897 = varonce2896;
varonce2896 = NULL;
}
{
var2902 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2903 = ((val*(*)(val* self))(var2902->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2902); /* to_s on <var2902:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2897)->values[1]=var2903;
{
var2904 = ((val*(*)(val* self))(var2897->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2897); /* native_to_s on <var2897:NativeArray[String]>*/
}
varonce2896 = var2897;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2755);
fatal_exit(1);
}
{
var2905 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2904, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2905); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2906!=NULL)) {
var2907 = varonce2906;
} else {
var2908 = "to_i16";
var2909 = core__flat___NativeString___to_s_full(var2908, 6l, 6l);
var2907 = var2909;
varonce2906 = var2907;
}
{
var2910 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2907); /* == on <var_pname:String>*/
}
if (var2910){
if (unlikely(varonce2911==NULL)) {
var2912 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2913!=NULL)) {
var2914 = varonce2913;
} else {
var2915 = "(int16_t)";
var2916 = core__flat___NativeString___to_s_full(var2915, 9l, 9l);
var2914 = var2916;
varonce2913 = var2914;
}
((struct instance_core__NativeArray*)var2912)->values[0]=var2914;
} else {
var2912 = varonce2911;
varonce2911 = NULL;
}
{
var2917 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2918 = ((val*(*)(val* self))(var2917->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2917); /* to_s on <var2917:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2912)->values[1]=var2918;
{
var2919 = ((val*(*)(val* self))(var2912->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2912); /* native_to_s on <var2912:NativeArray[String]>*/
}
varonce2911 = var2912;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2758);
fatal_exit(1);
}
{
var2920 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2919, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2920); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2921!=NULL)) {
var2922 = varonce2921;
} else {
var2923 = "to_i32";
var2924 = core__flat___NativeString___to_s_full(var2923, 6l, 6l);
var2922 = var2924;
varonce2921 = var2922;
}
{
var2925 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2922); /* == on <var_pname:String>*/
}
if (var2925){
if (unlikely(varonce2926==NULL)) {
var2927 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2928!=NULL)) {
var2929 = varonce2928;
} else {
var2930 = "(int32_t)";
var2931 = core__flat___NativeString___to_s_full(var2930, 9l, 9l);
var2929 = var2931;
varonce2928 = var2929;
}
((struct instance_core__NativeArray*)var2927)->values[0]=var2929;
} else {
var2927 = varonce2926;
varonce2926 = NULL;
}
{
var2932 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2933 = ((val*(*)(val* self))(var2932->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2932); /* to_s on <var2932:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2927)->values[1]=var2933;
{
var2934 = ((val*(*)(val* self))(var2927->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2927); /* native_to_s on <var2927:NativeArray[String]>*/
}
varonce2926 = var2927;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2761);
fatal_exit(1);
}
{
var2935 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2934, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2935); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2936!=NULL)) {
var2937 = varonce2936;
} else {
var2938 = "to_u32";
var2939 = core__flat___NativeString___to_s_full(var2938, 6l, 6l);
var2937 = var2939;
varonce2936 = var2937;
}
{
var2940 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2937); /* == on <var_pname:String>*/
}
if (var2940){
if (unlikely(varonce2941==NULL)) {
var2942 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2943!=NULL)) {
var2944 = varonce2943;
} else {
var2945 = "(uint32_t)";
var2946 = core__flat___NativeString___to_s_full(var2945, 10l, 10l);
var2944 = var2946;
varonce2943 = var2944;
}
((struct instance_core__NativeArray*)var2942)->values[0]=var2944;
} else {
var2942 = varonce2941;
varonce2941 = NULL;
}
{
var2947 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2948 = ((val*(*)(val* self))(var2947->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2947); /* to_s on <var2947:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2942)->values[1]=var2948;
{
var2949 = ((val*(*)(val* self))(var2942->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2942); /* native_to_s on <var2942:NativeArray[String]>*/
}
varonce2941 = var2942;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2764);
fatal_exit(1);
}
{
var2950 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2949, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2950); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2951!=NULL)) {
var2952 = varonce2951;
} else {
var2953 = "to_f";
var2954 = core__flat___NativeString___to_s_full(var2953, 4l, 4l);
var2952 = var2954;
varonce2951 = var2952;
}
{
var2955 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2952); /* == on <var_pname:String>*/
}
if (var2955){
if (unlikely(varonce2956==NULL)) {
var2957 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2958!=NULL)) {
var2959 = varonce2958;
} else {
var2960 = "(double)";
var2961 = core__flat___NativeString___to_s_full(var2960, 8l, 8l);
var2959 = var2961;
varonce2958 = var2959;
}
((struct instance_core__NativeArray*)var2957)->values[0]=var2959;
} else {
var2957 = varonce2956;
varonce2956 = NULL;
}
{
var2962 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2963 = ((val*(*)(val* self))(var2962->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2962); /* to_s on <var2962:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2957)->values[1]=var2963;
{
var2964 = ((val*(*)(val* self))(var2957->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2957); /* native_to_s on <var2957:NativeArray[String]>*/
}
varonce2956 = var2957;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2767);
fatal_exit(1);
}
{
var2965 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2964, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2965); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2966!=NULL)) {
var2967 = varonce2966;
} else {
var2968 = "&";
var2969 = core__flat___NativeString___to_s_full(var2968, 1l, 1l);
var2967 = var2969;
varonce2966 = var2967;
}
{
var2970 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2967); /* == on <var_pname:String>*/
}
if (var2970){
if (unlikely(varonce2971==NULL)) {
var2972 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2973!=NULL)) {
var2974 = varonce2973;
} else {
var2975 = " & ";
var2976 = core__flat___NativeString___to_s_full(var2975, 3l, 3l);
var2974 = var2976;
varonce2973 = var2974;
}
((struct instance_core__NativeArray*)var2972)->values[1]=var2974;
} else {
var2972 = varonce2971;
varonce2971 = NULL;
}
{
var2977 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2978 = ((val*(*)(val* self))(var2977->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2977); /* to_s on <var2977:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2972)->values[0]=var2978;
{
var2979 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2980 = ((val*(*)(val* self))(var2979->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2979); /* to_s on <var2979:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2972)->values[2]=var2980;
{
var2981 = ((val*(*)(val* self))(var2972->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2972); /* native_to_s on <var2972:NativeArray[String]>*/
}
varonce2971 = var2972;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2770);
fatal_exit(1);
}
{
var2982 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2981, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2982); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2983!=NULL)) {
var2984 = varonce2983;
} else {
var2985 = "|";
var2986 = core__flat___NativeString___to_s_full(var2985, 1l, 1l);
var2984 = var2986;
varonce2983 = var2984;
}
{
var2987 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2984); /* == on <var_pname:String>*/
}
if (var2987){
if (unlikely(varonce2988==NULL)) {
var2989 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2990!=NULL)) {
var2991 = varonce2990;
} else {
var2992 = " | ";
var2993 = core__flat___NativeString___to_s_full(var2992, 3l, 3l);
var2991 = var2993;
varonce2990 = var2991;
}
((struct instance_core__NativeArray*)var2989)->values[1]=var2991;
} else {
var2989 = varonce2988;
varonce2988 = NULL;
}
{
var2994 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2995 = ((val*(*)(val* self))(var2994->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2994); /* to_s on <var2994:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2989)->values[0]=var2995;
{
var2996 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2997 = ((val*(*)(val* self))(var2996->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2996); /* to_s on <var2996:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2989)->values[2]=var2997;
{
var2998 = ((val*(*)(val* self))(var2989->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2989); /* native_to_s on <var2989:NativeArray[String]>*/
}
varonce2988 = var2989;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2773);
fatal_exit(1);
}
{
var2999 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2998, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2999); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3000!=NULL)) {
var3001 = varonce3000;
} else {
var3002 = "^";
var3003 = core__flat___NativeString___to_s_full(var3002, 1l, 1l);
var3001 = var3003;
varonce3000 = var3001;
}
{
var3004 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3001); /* == on <var_pname:String>*/
}
if (var3004){
if (unlikely(varonce3005==NULL)) {
var3006 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3007!=NULL)) {
var3008 = varonce3007;
} else {
var3009 = " ^ ";
var3010 = core__flat___NativeString___to_s_full(var3009, 3l, 3l);
var3008 = var3010;
varonce3007 = var3008;
}
((struct instance_core__NativeArray*)var3006)->values[1]=var3008;
} else {
var3006 = varonce3005;
varonce3005 = NULL;
}
{
var3011 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3012 = ((val*(*)(val* self))(var3011->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3011); /* to_s on <var3011:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3006)->values[0]=var3012;
{
var3013 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3014 = ((val*(*)(val* self))(var3013->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3013); /* to_s on <var3013:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3006)->values[2]=var3014;
{
var3015 = ((val*(*)(val* self))(var3006->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3006); /* native_to_s on <var3006:NativeArray[String]>*/
}
varonce3005 = var3006;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2776);
fatal_exit(1);
}
{
var3016 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3015, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3016); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3017!=NULL)) {
var3018 = varonce3017;
} else {
var3019 = "unary ~";
var3020 = core__flat___NativeString___to_s_full(var3019, 7l, 7l);
var3018 = var3020;
varonce3017 = var3018;
}
{
var3021 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3018); /* == on <var_pname:String>*/
}
if (var3021){
if (unlikely(varonce3022==NULL)) {
var3023 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3024!=NULL)) {
var3025 = varonce3024;
} else {
var3026 = "~";
var3027 = core__flat___NativeString___to_s_full(var3026, 1l, 1l);
var3025 = var3027;
varonce3024 = var3025;
}
((struct instance_core__NativeArray*)var3023)->values[0]=var3025;
} else {
var3023 = varonce3022;
varonce3022 = NULL;
}
{
var3028 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3029 = ((val*(*)(val* self))(var3028->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3028); /* to_s on <var3028:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3023)->values[1]=var3029;
{
var3030 = ((val*(*)(val* self))(var3023->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3023); /* native_to_s on <var3023:NativeArray[String]>*/
}
varonce3022 = var3023;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2779);
fatal_exit(1);
}
{
var3031 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3030, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3031); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
}
}
}
}
} else {
if (likely(varonce3032!=NULL)) {
var3033 = varonce3032;
} else {
var3034 = "Int32";
var3035 = core__flat___NativeString___to_s_full(var3034, 5l, 5l);
var3033 = var3035;
varonce3032 = var3033;
}
{
var3036 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var3033); /* == on <var_cname:String>*/
}
if (var3036){
if (likely(varonce3037!=NULL)) {
var3038 = varonce3037;
} else {
var3039 = "output";
var3040 = core__flat___NativeString___to_s_full(var3039, 6l, 6l);
var3038 = var3040;
varonce3037 = var3038;
}
{
var3041 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3038); /* == on <var_pname:String>*/
}
if (var3041){
if (unlikely(varonce3042==NULL)) {
var3043 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3044!=NULL)) {
var3045 = varonce3044;
} else {
var3046 = "printf(\"%\"PRIi32 \"\\n\", ";
var3047 = core__flat___NativeString___to_s_full(var3046, 23l, 23l);
var3045 = var3047;
varonce3044 = var3045;
}
((struct instance_core__NativeArray*)var3043)->values[0]=var3045;
if (likely(varonce3048!=NULL)) {
var3049 = varonce3048;
} else {
var3050 = ");";
var3051 = core__flat___NativeString___to_s_full(var3050, 2l, 2l);
var3049 = var3051;
varonce3048 = var3049;
}
((struct instance_core__NativeArray*)var3043)->values[2]=var3049;
} else {
var3043 = varonce3042;
varonce3042 = NULL;
}
{
var3052 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3053 = ((val*(*)(val* self))(var3052->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3052); /* to_s on <var3052:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3043)->values[1]=var3053;
{
var3054 = ((val*(*)(val* self))(var3043->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3043); /* native_to_s on <var3043:NativeArray[String]>*/
}
varonce3042 = var3043;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var3054); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3055!=NULL)) {
var3056 = varonce3055;
} else {
var3057 = "object_id";
var3058 = core__flat___NativeString___to_s_full(var3057, 9l, 9l);
var3056 = var3058;
varonce3055 = var3056;
}
{
var3059 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3056); /* == on <var_pname:String>*/
}
if (var3059){
if (unlikely(varonce3060==NULL)) {
var3061 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3062!=NULL)) {
var3063 = varonce3062;
} else {
var3064 = "(long)";
var3065 = core__flat___NativeString___to_s_full(var3064, 6l, 6l);
var3063 = var3065;
varonce3062 = var3063;
}
((struct instance_core__NativeArray*)var3061)->values[0]=var3063;
} else {
var3061 = varonce3060;
varonce3060 = NULL;
}
{
var3066 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3067 = ((val*(*)(val* self))(var3066->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3066); /* to_s on <var3066:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3061)->values[1]=var3067;
{
var3068 = ((val*(*)(val* self))(var3061->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3061); /* native_to_s on <var3061:NativeArray[String]>*/
}
varonce3060 = var3061;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2787);
fatal_exit(1);
}
{
var3069 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3068, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3069); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3070!=NULL)) {
var3071 = varonce3070;
} else {
var3072 = "+";
var3073 = core__flat___NativeString___to_s_full(var3072, 1l, 1l);
var3071 = var3073;
varonce3070 = var3071;
}
{
var3074 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3071); /* == on <var_pname:String>*/
}
if (var3074){
if (unlikely(varonce3075==NULL)) {
var3076 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3077!=NULL)) {
var3078 = varonce3077;
} else {
var3079 = " + ";
var3080 = core__flat___NativeString___to_s_full(var3079, 3l, 3l);
var3078 = var3080;
varonce3077 = var3078;
}
((struct instance_core__NativeArray*)var3076)->values[1]=var3078;
} else {
var3076 = varonce3075;
varonce3075 = NULL;
}
{
var3081 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3082 = ((val*(*)(val* self))(var3081->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3081); /* to_s on <var3081:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3076)->values[0]=var3082;
{
var3083 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3084 = ((val*(*)(val* self))(var3083->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3083); /* to_s on <var3083:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3076)->values[2]=var3084;
{
var3085 = ((val*(*)(val* self))(var3076->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3076); /* native_to_s on <var3076:NativeArray[String]>*/
}
varonce3075 = var3076;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2790);
fatal_exit(1);
}
{
var3086 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3085, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3086); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3087!=NULL)) {
var3088 = varonce3087;
} else {
var3089 = "-";
var3090 = core__flat___NativeString___to_s_full(var3089, 1l, 1l);
var3088 = var3090;
varonce3087 = var3088;
}
{
var3091 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3088); /* == on <var_pname:String>*/
}
if (var3091){
if (unlikely(varonce3092==NULL)) {
var3093 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3094!=NULL)) {
var3095 = varonce3094;
} else {
var3096 = " - ";
var3097 = core__flat___NativeString___to_s_full(var3096, 3l, 3l);
var3095 = var3097;
varonce3094 = var3095;
}
((struct instance_core__NativeArray*)var3093)->values[1]=var3095;
} else {
var3093 = varonce3092;
varonce3092 = NULL;
}
{
var3098 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3099 = ((val*(*)(val* self))(var3098->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3098); /* to_s on <var3098:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3093)->values[0]=var3099;
{
var3100 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3101 = ((val*(*)(val* self))(var3100->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3100); /* to_s on <var3100:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3093)->values[2]=var3101;
{
var3102 = ((val*(*)(val* self))(var3093->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3093); /* native_to_s on <var3093:NativeArray[String]>*/
}
varonce3092 = var3093;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2793);
fatal_exit(1);
}
{
var3103 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3102, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3103); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3104!=NULL)) {
var3105 = varonce3104;
} else {
var3106 = "unary -";
var3107 = core__flat___NativeString___to_s_full(var3106, 7l, 7l);
var3105 = var3107;
varonce3104 = var3105;
}
{
var3108 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3105); /* == on <var_pname:String>*/
}
if (var3108){
if (unlikely(varonce3109==NULL)) {
var3110 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3111!=NULL)) {
var3112 = varonce3111;
} else {
var3113 = "-";
var3114 = core__flat___NativeString___to_s_full(var3113, 1l, 1l);
var3112 = var3114;
varonce3111 = var3112;
}
((struct instance_core__NativeArray*)var3110)->values[0]=var3112;
} else {
var3110 = varonce3109;
varonce3109 = NULL;
}
{
var3115 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3116 = ((val*(*)(val* self))(var3115->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3115); /* to_s on <var3115:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3110)->values[1]=var3116;
{
var3117 = ((val*(*)(val* self))(var3110->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3110); /* native_to_s on <var3110:NativeArray[String]>*/
}
varonce3109 = var3110;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2796);
fatal_exit(1);
}
{
var3118 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3117, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3118); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3119!=NULL)) {
var3120 = varonce3119;
} else {
var3121 = "unary +";
var3122 = core__flat___NativeString___to_s_full(var3121, 7l, 7l);
var3120 = var3122;
varonce3119 = var3120;
}
{
var3123 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3120); /* == on <var_pname:String>*/
}
if (var3123){
{
var3124 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3124); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3125!=NULL)) {
var3126 = varonce3125;
} else {
var3127 = "*";
var3128 = core__flat___NativeString___to_s_full(var3127, 1l, 1l);
var3126 = var3128;
varonce3125 = var3126;
}
{
var3129 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3126); /* == on <var_pname:String>*/
}
if (var3129){
if (unlikely(varonce3130==NULL)) {
var3131 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3132!=NULL)) {
var3133 = varonce3132;
} else {
var3134 = " * ";
var3135 = core__flat___NativeString___to_s_full(var3134, 3l, 3l);
var3133 = var3135;
varonce3132 = var3133;
}
((struct instance_core__NativeArray*)var3131)->values[1]=var3133;
} else {
var3131 = varonce3130;
varonce3130 = NULL;
}
{
var3136 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3137 = ((val*(*)(val* self))(var3136->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3136); /* to_s on <var3136:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3131)->values[0]=var3137;
{
var3138 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3139 = ((val*(*)(val* self))(var3138->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3138); /* to_s on <var3138:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3131)->values[2]=var3139;
{
var3140 = ((val*(*)(val* self))(var3131->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3131); /* native_to_s on <var3131:NativeArray[String]>*/
}
varonce3130 = var3131;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2802);
fatal_exit(1);
}
{
var3141 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3140, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3141); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3142!=NULL)) {
var3143 = varonce3142;
} else {
var3144 = "/";
var3145 = core__flat___NativeString___to_s_full(var3144, 1l, 1l);
var3143 = var3145;
varonce3142 = var3143;
}
{
var3146 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3143); /* == on <var_pname:String>*/
}
if (var3146){
if (unlikely(varonce3147==NULL)) {
var3148 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3149!=NULL)) {
var3150 = varonce3149;
} else {
var3151 = " / ";
var3152 = core__flat___NativeString___to_s_full(var3151, 3l, 3l);
var3150 = var3152;
varonce3149 = var3150;
}
((struct instance_core__NativeArray*)var3148)->values[1]=var3150;
} else {
var3148 = varonce3147;
varonce3147 = NULL;
}
{
var3153 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3154 = ((val*(*)(val* self))(var3153->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3153); /* to_s on <var3153:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3148)->values[0]=var3154;
{
var3155 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3156 = ((val*(*)(val* self))(var3155->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3155); /* to_s on <var3155:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3148)->values[2]=var3156;
{
var3157 = ((val*(*)(val* self))(var3148->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3148); /* native_to_s on <var3148:NativeArray[String]>*/
}
varonce3147 = var3148;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2805);
fatal_exit(1);
}
{
var3158 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3157, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3158); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3159!=NULL)) {
var3160 = varonce3159;
} else {
var3161 = "%";
var3162 = core__flat___NativeString___to_s_full(var3161, 1l, 1l);
var3160 = var3162;
varonce3159 = var3160;
}
{
var3163 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3160); /* == on <var_pname:String>*/
}
if (var3163){
if (unlikely(varonce3164==NULL)) {
var3165 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3166!=NULL)) {
var3167 = varonce3166;
} else {
var3168 = " % ";
var3169 = core__flat___NativeString___to_s_full(var3168, 3l, 3l);
var3167 = var3169;
varonce3166 = var3167;
}
((struct instance_core__NativeArray*)var3165)->values[1]=var3167;
} else {
var3165 = varonce3164;
varonce3164 = NULL;
}
{
var3170 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3171 = ((val*(*)(val* self))(var3170->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3170); /* to_s on <var3170:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3165)->values[0]=var3171;
{
var3172 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3173 = ((val*(*)(val* self))(var3172->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3172); /* to_s on <var3172:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3165)->values[2]=var3173;
{
var3174 = ((val*(*)(val* self))(var3165->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3165); /* native_to_s on <var3165:NativeArray[String]>*/
}
varonce3164 = var3165;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2808);
fatal_exit(1);
}
{
var3175 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3174, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3175); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3176!=NULL)) {
var3177 = varonce3176;
} else {
var3178 = "<<";
var3179 = core__flat___NativeString___to_s_full(var3178, 2l, 2l);
var3177 = var3179;
varonce3176 = var3177;
}
{
var3180 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3177); /* == on <var_pname:String>*/
}
if (var3180){
if (unlikely(varonce3181==NULL)) {
var3182 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3183!=NULL)) {
var3184 = varonce3183;
} else {
var3185 = " << ";
var3186 = core__flat___NativeString___to_s_full(var3185, 4l, 4l);
var3184 = var3186;
varonce3183 = var3184;
}
((struct instance_core__NativeArray*)var3182)->values[1]=var3184;
} else {
var3182 = varonce3181;
varonce3181 = NULL;
}
{
var3187 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3188 = ((val*(*)(val* self))(var3187->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3187); /* to_s on <var3187:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3182)->values[0]=var3188;
{
var3189 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3190 = ((val*(*)(val* self))(var3189->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3189); /* to_s on <var3189:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3182)->values[2]=var3190;
{
var3191 = ((val*(*)(val* self))(var3182->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3182); /* native_to_s on <var3182:NativeArray[String]>*/
}
varonce3181 = var3182;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2811);
fatal_exit(1);
}
{
var3192 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3191, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3192); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3193!=NULL)) {
var3194 = varonce3193;
} else {
var3195 = ">>";
var3196 = core__flat___NativeString___to_s_full(var3195, 2l, 2l);
var3194 = var3196;
varonce3193 = var3194;
}
{
var3197 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3194); /* == on <var_pname:String>*/
}
if (var3197){
if (unlikely(varonce3198==NULL)) {
var3199 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3200!=NULL)) {
var3201 = varonce3200;
} else {
var3202 = " >> ";
var3203 = core__flat___NativeString___to_s_full(var3202, 4l, 4l);
var3201 = var3203;
varonce3200 = var3201;
}
((struct instance_core__NativeArray*)var3199)->values[1]=var3201;
} else {
var3199 = varonce3198;
varonce3198 = NULL;
}
{
var3204 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3205 = ((val*(*)(val* self))(var3204->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3204); /* to_s on <var3204:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3199)->values[0]=var3205;
{
var3206 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3207 = ((val*(*)(val* self))(var3206->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3206); /* to_s on <var3206:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3199)->values[2]=var3207;
{
var3208 = ((val*(*)(val* self))(var3199->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3199); /* native_to_s on <var3199:NativeArray[String]>*/
}
varonce3198 = var3199;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2814);
fatal_exit(1);
}
{
var3209 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3208, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3209); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3210!=NULL)) {
var3211 = varonce3210;
} else {
var3212 = "==";
var3213 = core__flat___NativeString___to_s_full(var3212, 2l, 2l);
var3211 = var3213;
varonce3210 = var3211;
}
{
var3214 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3211); /* == on <var_pname:String>*/
}
if (var3214){
{
var3215 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3216 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3217 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var3215, var3216);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3217); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3218!=NULL)) {
var3219 = varonce3218;
} else {
var3220 = "!=";
var3221 = core__flat___NativeString___to_s_full(var3220, 2l, 2l);
var3219 = var3221;
varonce3218 = var3219;
}
{
var3222 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3219); /* == on <var_pname:String>*/
}
if (var3222){
{
var3223 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3224 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3225 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var3223, var3224);
}
var_res3226 = var3225;
if (unlikely(varonce3227==NULL)) {
var3228 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3229!=NULL)) {
var3230 = varonce3229;
} else {
var3231 = "!";
var3232 = core__flat___NativeString___to_s_full(var3231, 1l, 1l);
var3230 = var3232;
varonce3229 = var3230;
}
((struct instance_core__NativeArray*)var3228)->values[0]=var3230;
} else {
var3228 = varonce3227;
varonce3227 = NULL;
}
{
var3233 = ((val*(*)(val* self))(var_res3226->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res3226); /* to_s on <var_res3226:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var3228)->values[1]=var3233;
{
var3234 = ((val*(*)(val* self))(var3228->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3228); /* native_to_s on <var3228:NativeArray[String]>*/
}
varonce3227 = var3228;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2821);
fatal_exit(1);
}
{
var3235 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3234, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3235); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3236!=NULL)) {
var3237 = varonce3236;
} else {
var3238 = "<";
var3239 = core__flat___NativeString___to_s_full(var3238, 1l, 1l);
var3237 = var3239;
varonce3236 = var3237;
}
{
var3240 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3237); /* == on <var_pname:String>*/
}
if (var3240){
if (unlikely(varonce3241==NULL)) {
var3242 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3243!=NULL)) {
var3244 = varonce3243;
} else {
var3245 = " < ";
var3246 = core__flat___NativeString___to_s_full(var3245, 3l, 3l);
var3244 = var3246;
varonce3243 = var3244;
}
((struct instance_core__NativeArray*)var3242)->values[1]=var3244;
} else {
var3242 = varonce3241;
varonce3241 = NULL;
}
{
var3247 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3248 = ((val*(*)(val* self))(var3247->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3247); /* to_s on <var3247:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3242)->values[0]=var3248;
{
var3249 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3250 = ((val*(*)(val* self))(var3249->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3249); /* to_s on <var3249:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3242)->values[2]=var3250;
{
var3251 = ((val*(*)(val* self))(var3242->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3242); /* native_to_s on <var3242:NativeArray[String]>*/
}
varonce3241 = var3242;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2824);
fatal_exit(1);
}
{
var3252 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3251, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3252); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3253!=NULL)) {
var3254 = varonce3253;
} else {
var3255 = ">";
var3256 = core__flat___NativeString___to_s_full(var3255, 1l, 1l);
var3254 = var3256;
varonce3253 = var3254;
}
{
var3257 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3254); /* == on <var_pname:String>*/
}
if (var3257){
if (unlikely(varonce3258==NULL)) {
var3259 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3260!=NULL)) {
var3261 = varonce3260;
} else {
var3262 = " > ";
var3263 = core__flat___NativeString___to_s_full(var3262, 3l, 3l);
var3261 = var3263;
varonce3260 = var3261;
}
((struct instance_core__NativeArray*)var3259)->values[1]=var3261;
} else {
var3259 = varonce3258;
varonce3258 = NULL;
}
{
var3264 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3265 = ((val*(*)(val* self))(var3264->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3264); /* to_s on <var3264:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3259)->values[0]=var3265;
{
var3266 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3267 = ((val*(*)(val* self))(var3266->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3266); /* to_s on <var3266:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3259)->values[2]=var3267;
{
var3268 = ((val*(*)(val* self))(var3259->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3259); /* native_to_s on <var3259:NativeArray[String]>*/
}
varonce3258 = var3259;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2827);
fatal_exit(1);
}
{
var3269 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3268, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3269); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3270!=NULL)) {
var3271 = varonce3270;
} else {
var3272 = "<=";
var3273 = core__flat___NativeString___to_s_full(var3272, 2l, 2l);
var3271 = var3273;
varonce3270 = var3271;
}
{
var3274 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3271); /* == on <var_pname:String>*/
}
if (var3274){
if (unlikely(varonce3275==NULL)) {
var3276 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3277!=NULL)) {
var3278 = varonce3277;
} else {
var3279 = " <= ";
var3280 = core__flat___NativeString___to_s_full(var3279, 4l, 4l);
var3278 = var3280;
varonce3277 = var3278;
}
((struct instance_core__NativeArray*)var3276)->values[1]=var3278;
} else {
var3276 = varonce3275;
varonce3275 = NULL;
}
{
var3281 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3282 = ((val*(*)(val* self))(var3281->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3281); /* to_s on <var3281:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3276)->values[0]=var3282;
{
var3283 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3284 = ((val*(*)(val* self))(var3283->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3283); /* to_s on <var3283:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3276)->values[2]=var3284;
{
var3285 = ((val*(*)(val* self))(var3276->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3276); /* native_to_s on <var3276:NativeArray[String]>*/
}
varonce3275 = var3276;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2830);
fatal_exit(1);
}
{
var3286 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3285, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3286); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3287!=NULL)) {
var3288 = varonce3287;
} else {
var3289 = ">=";
var3290 = core__flat___NativeString___to_s_full(var3289, 2l, 2l);
var3288 = var3290;
varonce3287 = var3288;
}
{
var3291 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3288); /* == on <var_pname:String>*/
}
if (var3291){
if (unlikely(varonce3292==NULL)) {
var3293 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3294!=NULL)) {
var3295 = varonce3294;
} else {
var3296 = " >= ";
var3297 = core__flat___NativeString___to_s_full(var3296, 4l, 4l);
var3295 = var3297;
varonce3294 = var3295;
}
((struct instance_core__NativeArray*)var3293)->values[1]=var3295;
} else {
var3293 = varonce3292;
varonce3292 = NULL;
}
{
var3298 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3299 = ((val*(*)(val* self))(var3298->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3298); /* to_s on <var3298:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3293)->values[0]=var3299;
{
var3300 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3301 = ((val*(*)(val* self))(var3300->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3300); /* to_s on <var3300:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3293)->values[2]=var3301;
{
var3302 = ((val*(*)(val* self))(var3293->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3293); /* native_to_s on <var3293:NativeArray[String]>*/
}
varonce3292 = var3293;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2833);
fatal_exit(1);
}
{
var3303 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3302, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3303); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3304!=NULL)) {
var3305 = varonce3304;
} else {
var3306 = "to_i";
var3307 = core__flat___NativeString___to_s_full(var3306, 4l, 4l);
var3305 = var3307;
varonce3304 = var3305;
}
{
var3308 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3305); /* == on <var_pname:String>*/
}
if (var3308){
if (unlikely(varonce3309==NULL)) {
var3310 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3311!=NULL)) {
var3312 = varonce3311;
} else {
var3313 = "(long)";
var3314 = core__flat___NativeString___to_s_full(var3313, 6l, 6l);
var3312 = var3314;
varonce3311 = var3312;
}
((struct instance_core__NativeArray*)var3310)->values[0]=var3312;
} else {
var3310 = varonce3309;
varonce3309 = NULL;
}
{
var3315 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3316 = ((val*(*)(val* self))(var3315->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3315); /* to_s on <var3315:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3310)->values[1]=var3316;
{
var3317 = ((val*(*)(val* self))(var3310->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3310); /* native_to_s on <var3310:NativeArray[String]>*/
}
varonce3309 = var3310;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2836);
fatal_exit(1);
}
{
var3318 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3317, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3318); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3319!=NULL)) {
var3320 = varonce3319;
} else {
var3321 = "to_b";
var3322 = core__flat___NativeString___to_s_full(var3321, 4l, 4l);
var3320 = var3322;
varonce3319 = var3320;
}
{
var3323 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3320); /* == on <var_pname:String>*/
}
if (var3323){
if (unlikely(varonce3324==NULL)) {
var3325 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3326!=NULL)) {
var3327 = varonce3326;
} else {
var3328 = "(unsigned char)";
var3329 = core__flat___NativeString___to_s_full(var3328, 15l, 15l);
var3327 = var3329;
varonce3326 = var3327;
}
((struct instance_core__NativeArray*)var3325)->values[0]=var3327;
} else {
var3325 = varonce3324;
varonce3324 = NULL;
}
{
var3330 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3331 = ((val*(*)(val* self))(var3330->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3330); /* to_s on <var3330:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3325)->values[1]=var3331;
{
var3332 = ((val*(*)(val* self))(var3325->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3325); /* native_to_s on <var3325:NativeArray[String]>*/
}
varonce3324 = var3325;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2839);
fatal_exit(1);
}
{
var3333 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3332, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3333); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3334!=NULL)) {
var3335 = varonce3334;
} else {
var3336 = "to_i8";
var3337 = core__flat___NativeString___to_s_full(var3336, 5l, 5l);
var3335 = var3337;
varonce3334 = var3335;
}
{
var3338 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3335); /* == on <var_pname:String>*/
}
if (var3338){
if (unlikely(varonce3339==NULL)) {
var3340 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3341!=NULL)) {
var3342 = varonce3341;
} else {
var3343 = "(int8_t)";
var3344 = core__flat___NativeString___to_s_full(var3343, 8l, 8l);
var3342 = var3344;
varonce3341 = var3342;
}
((struct instance_core__NativeArray*)var3340)->values[0]=var3342;
} else {
var3340 = varonce3339;
varonce3339 = NULL;
}
{
var3345 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3346 = ((val*(*)(val* self))(var3345->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3345); /* to_s on <var3345:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3340)->values[1]=var3346;
{
var3347 = ((val*(*)(val* self))(var3340->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3340); /* native_to_s on <var3340:NativeArray[String]>*/
}
varonce3339 = var3340;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2842);
fatal_exit(1);
}
{
var3348 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3347, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3348); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3349!=NULL)) {
var3350 = varonce3349;
} else {
var3351 = "to_i16";
var3352 = core__flat___NativeString___to_s_full(var3351, 6l, 6l);
var3350 = var3352;
varonce3349 = var3350;
}
{
var3353 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3350); /* == on <var_pname:String>*/
}
if (var3353){
if (unlikely(varonce3354==NULL)) {
var3355 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3356!=NULL)) {
var3357 = varonce3356;
} else {
var3358 = "(int16_t)";
var3359 = core__flat___NativeString___to_s_full(var3358, 9l, 9l);
var3357 = var3359;
varonce3356 = var3357;
}
((struct instance_core__NativeArray*)var3355)->values[0]=var3357;
} else {
var3355 = varonce3354;
varonce3354 = NULL;
}
{
var3360 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3361 = ((val*(*)(val* self))(var3360->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3360); /* to_s on <var3360:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3355)->values[1]=var3361;
{
var3362 = ((val*(*)(val* self))(var3355->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3355); /* native_to_s on <var3355:NativeArray[String]>*/
}
varonce3354 = var3355;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2845);
fatal_exit(1);
}
{
var3363 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3362, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3363); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3364!=NULL)) {
var3365 = varonce3364;
} else {
var3366 = "to_u16";
var3367 = core__flat___NativeString___to_s_full(var3366, 6l, 6l);
var3365 = var3367;
varonce3364 = var3365;
}
{
var3368 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3365); /* == on <var_pname:String>*/
}
if (var3368){
if (unlikely(varonce3369==NULL)) {
var3370 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3371!=NULL)) {
var3372 = varonce3371;
} else {
var3373 = "(uint16_t)";
var3374 = core__flat___NativeString___to_s_full(var3373, 10l, 10l);
var3372 = var3374;
varonce3371 = var3372;
}
((struct instance_core__NativeArray*)var3370)->values[0]=var3372;
} else {
var3370 = varonce3369;
varonce3369 = NULL;
}
{
var3375 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3376 = ((val*(*)(val* self))(var3375->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3375); /* to_s on <var3375:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3370)->values[1]=var3376;
{
var3377 = ((val*(*)(val* self))(var3370->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3370); /* native_to_s on <var3370:NativeArray[String]>*/
}
varonce3369 = var3370;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2848);
fatal_exit(1);
}
{
var3378 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3377, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3378); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3379!=NULL)) {
var3380 = varonce3379;
} else {
var3381 = "to_u32";
var3382 = core__flat___NativeString___to_s_full(var3381, 6l, 6l);
var3380 = var3382;
varonce3379 = var3380;
}
{
var3383 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3380); /* == on <var_pname:String>*/
}
if (var3383){
if (unlikely(varonce3384==NULL)) {
var3385 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3386!=NULL)) {
var3387 = varonce3386;
} else {
var3388 = "(uint32_t)";
var3389 = core__flat___NativeString___to_s_full(var3388, 10l, 10l);
var3387 = var3389;
varonce3386 = var3387;
}
((struct instance_core__NativeArray*)var3385)->values[0]=var3387;
} else {
var3385 = varonce3384;
varonce3384 = NULL;
}
{
var3390 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3391 = ((val*(*)(val* self))(var3390->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3390); /* to_s on <var3390:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3385)->values[1]=var3391;
{
var3392 = ((val*(*)(val* self))(var3385->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3385); /* native_to_s on <var3385:NativeArray[String]>*/
}
varonce3384 = var3385;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2851);
fatal_exit(1);
}
{
var3393 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3392, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3393); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3394!=NULL)) {
var3395 = varonce3394;
} else {
var3396 = "to_f";
var3397 = core__flat___NativeString___to_s_full(var3396, 4l, 4l);
var3395 = var3397;
varonce3394 = var3395;
}
{
var3398 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3395); /* == on <var_pname:String>*/
}
if (var3398){
if (unlikely(varonce3399==NULL)) {
var3400 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3401!=NULL)) {
var3402 = varonce3401;
} else {
var3403 = "(double)";
var3404 = core__flat___NativeString___to_s_full(var3403, 8l, 8l);
var3402 = var3404;
varonce3401 = var3402;
}
((struct instance_core__NativeArray*)var3400)->values[0]=var3402;
} else {
var3400 = varonce3399;
varonce3399 = NULL;
}
{
var3405 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3406 = ((val*(*)(val* self))(var3405->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3405); /* to_s on <var3405:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3400)->values[1]=var3406;
{
var3407 = ((val*(*)(val* self))(var3400->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3400); /* native_to_s on <var3400:NativeArray[String]>*/
}
varonce3399 = var3400;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2854);
fatal_exit(1);
}
{
var3408 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3407, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3408); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3409!=NULL)) {
var3410 = varonce3409;
} else {
var3411 = "&";
var3412 = core__flat___NativeString___to_s_full(var3411, 1l, 1l);
var3410 = var3412;
varonce3409 = var3410;
}
{
var3413 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3410); /* == on <var_pname:String>*/
}
if (var3413){
if (unlikely(varonce3414==NULL)) {
var3415 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3416!=NULL)) {
var3417 = varonce3416;
} else {
var3418 = " & ";
var3419 = core__flat___NativeString___to_s_full(var3418, 3l, 3l);
var3417 = var3419;
varonce3416 = var3417;
}
((struct instance_core__NativeArray*)var3415)->values[1]=var3417;
} else {
var3415 = varonce3414;
varonce3414 = NULL;
}
{
var3420 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3421 = ((val*(*)(val* self))(var3420->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3420); /* to_s on <var3420:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3415)->values[0]=var3421;
{
var3422 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3423 = ((val*(*)(val* self))(var3422->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3422); /* to_s on <var3422:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3415)->values[2]=var3423;
{
var3424 = ((val*(*)(val* self))(var3415->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3415); /* native_to_s on <var3415:NativeArray[String]>*/
}
varonce3414 = var3415;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2857);
fatal_exit(1);
}
{
var3425 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3424, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3425); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3426!=NULL)) {
var3427 = varonce3426;
} else {
var3428 = "|";
var3429 = core__flat___NativeString___to_s_full(var3428, 1l, 1l);
var3427 = var3429;
varonce3426 = var3427;
}
{
var3430 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3427); /* == on <var_pname:String>*/
}
if (var3430){
if (unlikely(varonce3431==NULL)) {
var3432 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3433!=NULL)) {
var3434 = varonce3433;
} else {
var3435 = " | ";
var3436 = core__flat___NativeString___to_s_full(var3435, 3l, 3l);
var3434 = var3436;
varonce3433 = var3434;
}
((struct instance_core__NativeArray*)var3432)->values[1]=var3434;
} else {
var3432 = varonce3431;
varonce3431 = NULL;
}
{
var3437 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3438 = ((val*(*)(val* self))(var3437->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3437); /* to_s on <var3437:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3432)->values[0]=var3438;
{
var3439 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3440 = ((val*(*)(val* self))(var3439->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3439); /* to_s on <var3439:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3432)->values[2]=var3440;
{
var3441 = ((val*(*)(val* self))(var3432->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3432); /* native_to_s on <var3432:NativeArray[String]>*/
}
varonce3431 = var3432;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2860);
fatal_exit(1);
}
{
var3442 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3441, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3442); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3443!=NULL)) {
var3444 = varonce3443;
} else {
var3445 = "^";
var3446 = core__flat___NativeString___to_s_full(var3445, 1l, 1l);
var3444 = var3446;
varonce3443 = var3444;
}
{
var3447 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3444); /* == on <var_pname:String>*/
}
if (var3447){
if (unlikely(varonce3448==NULL)) {
var3449 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3450!=NULL)) {
var3451 = varonce3450;
} else {
var3452 = " ^ ";
var3453 = core__flat___NativeString___to_s_full(var3452, 3l, 3l);
var3451 = var3453;
varonce3450 = var3451;
}
((struct instance_core__NativeArray*)var3449)->values[1]=var3451;
} else {
var3449 = varonce3448;
varonce3448 = NULL;
}
{
var3454 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3455 = ((val*(*)(val* self))(var3454->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3454); /* to_s on <var3454:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3449)->values[0]=var3455;
{
var3456 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3457 = ((val*(*)(val* self))(var3456->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3456); /* to_s on <var3456:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3449)->values[2]=var3457;
{
var3458 = ((val*(*)(val* self))(var3449->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3449); /* native_to_s on <var3449:NativeArray[String]>*/
}
varonce3448 = var3449;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2863);
fatal_exit(1);
}
{
var3459 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3458, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3459); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3460!=NULL)) {
var3461 = varonce3460;
} else {
var3462 = "unary ~";
var3463 = core__flat___NativeString___to_s_full(var3462, 7l, 7l);
var3461 = var3463;
varonce3460 = var3461;
}
{
var3464 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3461); /* == on <var_pname:String>*/
}
if (var3464){
if (unlikely(varonce3465==NULL)) {
var3466 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3467!=NULL)) {
var3468 = varonce3467;
} else {
var3469 = "~";
var3470 = core__flat___NativeString___to_s_full(var3469, 1l, 1l);
var3468 = var3470;
varonce3467 = var3468;
}
((struct instance_core__NativeArray*)var3466)->values[0]=var3468;
} else {
var3466 = varonce3465;
varonce3465 = NULL;
}
{
var3471 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3472 = ((val*(*)(val* self))(var3471->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3471); /* to_s on <var3471:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3466)->values[1]=var3472;
{
var3473 = ((val*(*)(val* self))(var3466->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3466); /* native_to_s on <var3466:NativeArray[String]>*/
}
varonce3465 = var3466;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2866);
fatal_exit(1);
}
{
var3474 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3473, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3474); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
}
}
}
}
} else {
if (likely(varonce3475!=NULL)) {
var3476 = varonce3475;
} else {
var3477 = "UInt32";
var3478 = core__flat___NativeString___to_s_full(var3477, 6l, 6l);
var3476 = var3478;
varonce3475 = var3476;
}
{
var3479 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var3476); /* == on <var_cname:String>*/
}
if (var3479){
if (likely(varonce3480!=NULL)) {
var3481 = varonce3480;
} else {
var3482 = "output";
var3483 = core__flat___NativeString___to_s_full(var3482, 6l, 6l);
var3481 = var3483;
varonce3480 = var3481;
}
{
var3484 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3481); /* == on <var_pname:String>*/
}
if (var3484){
if (unlikely(varonce3485==NULL)) {
var3486 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3487!=NULL)) {
var3488 = varonce3487;
} else {
var3489 = "printf(\"%\"PRIu32 \"\\n\", ";
var3490 = core__flat___NativeString___to_s_full(var3489, 23l, 23l);
var3488 = var3490;
varonce3487 = var3488;
}
((struct instance_core__NativeArray*)var3486)->values[0]=var3488;
if (likely(varonce3491!=NULL)) {
var3492 = varonce3491;
} else {
var3493 = ");";
var3494 = core__flat___NativeString___to_s_full(var3493, 2l, 2l);
var3492 = var3494;
varonce3491 = var3492;
}
((struct instance_core__NativeArray*)var3486)->values[2]=var3492;
} else {
var3486 = varonce3485;
varonce3485 = NULL;
}
{
var3495 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3496 = ((val*(*)(val* self))(var3495->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3495); /* to_s on <var3495:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3486)->values[1]=var3496;
{
var3497 = ((val*(*)(val* self))(var3486->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3486); /* native_to_s on <var3486:NativeArray[String]>*/
}
varonce3485 = var3486;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var3497); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3498!=NULL)) {
var3499 = varonce3498;
} else {
var3500 = "object_id";
var3501 = core__flat___NativeString___to_s_full(var3500, 9l, 9l);
var3499 = var3501;
varonce3498 = var3499;
}
{
var3502 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3499); /* == on <var_pname:String>*/
}
if (var3502){
if (unlikely(varonce3503==NULL)) {
var3504 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3505!=NULL)) {
var3506 = varonce3505;
} else {
var3507 = "(long)";
var3508 = core__flat___NativeString___to_s_full(var3507, 6l, 6l);
var3506 = var3508;
varonce3505 = var3506;
}
((struct instance_core__NativeArray*)var3504)->values[0]=var3506;
} else {
var3504 = varonce3503;
varonce3503 = NULL;
}
{
var3509 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3510 = ((val*(*)(val* self))(var3509->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3509); /* to_s on <var3509:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3504)->values[1]=var3510;
{
var3511 = ((val*(*)(val* self))(var3504->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3504); /* native_to_s on <var3504:NativeArray[String]>*/
}
varonce3503 = var3504;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2874);
fatal_exit(1);
}
{
var3512 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3511, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3512); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3513!=NULL)) {
var3514 = varonce3513;
} else {
var3515 = "+";
var3516 = core__flat___NativeString___to_s_full(var3515, 1l, 1l);
var3514 = var3516;
varonce3513 = var3514;
}
{
var3517 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3514); /* == on <var_pname:String>*/
}
if (var3517){
if (unlikely(varonce3518==NULL)) {
var3519 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3520!=NULL)) {
var3521 = varonce3520;
} else {
var3522 = " + ";
var3523 = core__flat___NativeString___to_s_full(var3522, 3l, 3l);
var3521 = var3523;
varonce3520 = var3521;
}
((struct instance_core__NativeArray*)var3519)->values[1]=var3521;
} else {
var3519 = varonce3518;
varonce3518 = NULL;
}
{
var3524 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3525 = ((val*(*)(val* self))(var3524->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3524); /* to_s on <var3524:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3519)->values[0]=var3525;
{
var3526 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3527 = ((val*(*)(val* self))(var3526->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3526); /* to_s on <var3526:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3519)->values[2]=var3527;
{
var3528 = ((val*(*)(val* self))(var3519->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3519); /* native_to_s on <var3519:NativeArray[String]>*/
}
varonce3518 = var3519;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2877);
fatal_exit(1);
}
{
var3529 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3528, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3529); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3530!=NULL)) {
var3531 = varonce3530;
} else {
var3532 = "-";
var3533 = core__flat___NativeString___to_s_full(var3532, 1l, 1l);
var3531 = var3533;
varonce3530 = var3531;
}
{
var3534 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3531); /* == on <var_pname:String>*/
}
if (var3534){
if (unlikely(varonce3535==NULL)) {
var3536 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3537!=NULL)) {
var3538 = varonce3537;
} else {
var3539 = " - ";
var3540 = core__flat___NativeString___to_s_full(var3539, 3l, 3l);
var3538 = var3540;
varonce3537 = var3538;
}
((struct instance_core__NativeArray*)var3536)->values[1]=var3538;
} else {
var3536 = varonce3535;
varonce3535 = NULL;
}
{
var3541 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3542 = ((val*(*)(val* self))(var3541->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3541); /* to_s on <var3541:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3536)->values[0]=var3542;
{
var3543 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3544 = ((val*(*)(val* self))(var3543->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3543); /* to_s on <var3543:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3536)->values[2]=var3544;
{
var3545 = ((val*(*)(val* self))(var3536->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3536); /* native_to_s on <var3536:NativeArray[String]>*/
}
varonce3535 = var3536;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2880);
fatal_exit(1);
}
{
var3546 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3545, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3546); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3547!=NULL)) {
var3548 = varonce3547;
} else {
var3549 = "unary -";
var3550 = core__flat___NativeString___to_s_full(var3549, 7l, 7l);
var3548 = var3550;
varonce3547 = var3548;
}
{
var3551 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3548); /* == on <var_pname:String>*/
}
if (var3551){
if (unlikely(varonce3552==NULL)) {
var3553 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3554!=NULL)) {
var3555 = varonce3554;
} else {
var3556 = "-";
var3557 = core__flat___NativeString___to_s_full(var3556, 1l, 1l);
var3555 = var3557;
varonce3554 = var3555;
}
((struct instance_core__NativeArray*)var3553)->values[0]=var3555;
} else {
var3553 = varonce3552;
varonce3552 = NULL;
}
{
var3558 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3559 = ((val*(*)(val* self))(var3558->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3558); /* to_s on <var3558:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3553)->values[1]=var3559;
{
var3560 = ((val*(*)(val* self))(var3553->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3553); /* native_to_s on <var3553:NativeArray[String]>*/
}
varonce3552 = var3553;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2883);
fatal_exit(1);
}
{
var3561 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3560, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3561); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3562!=NULL)) {
var3563 = varonce3562;
} else {
var3564 = "unary +";
var3565 = core__flat___NativeString___to_s_full(var3564, 7l, 7l);
var3563 = var3565;
varonce3562 = var3563;
}
{
var3566 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3563); /* == on <var_pname:String>*/
}
if (var3566){
{
var3567 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3567); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3568!=NULL)) {
var3569 = varonce3568;
} else {
var3570 = "*";
var3571 = core__flat___NativeString___to_s_full(var3570, 1l, 1l);
var3569 = var3571;
varonce3568 = var3569;
}
{
var3572 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3569); /* == on <var_pname:String>*/
}
if (var3572){
if (unlikely(varonce3573==NULL)) {
var3574 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3575!=NULL)) {
var3576 = varonce3575;
} else {
var3577 = " * ";
var3578 = core__flat___NativeString___to_s_full(var3577, 3l, 3l);
var3576 = var3578;
varonce3575 = var3576;
}
((struct instance_core__NativeArray*)var3574)->values[1]=var3576;
} else {
var3574 = varonce3573;
varonce3573 = NULL;
}
{
var3579 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3580 = ((val*(*)(val* self))(var3579->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3579); /* to_s on <var3579:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3574)->values[0]=var3580;
{
var3581 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3582 = ((val*(*)(val* self))(var3581->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3581); /* to_s on <var3581:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3574)->values[2]=var3582;
{
var3583 = ((val*(*)(val* self))(var3574->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3574); /* native_to_s on <var3574:NativeArray[String]>*/
}
varonce3573 = var3574;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2889);
fatal_exit(1);
}
{
var3584 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3583, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3584); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3585!=NULL)) {
var3586 = varonce3585;
} else {
var3587 = "/";
var3588 = core__flat___NativeString___to_s_full(var3587, 1l, 1l);
var3586 = var3588;
varonce3585 = var3586;
}
{
var3589 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3586); /* == on <var_pname:String>*/
}
if (var3589){
if (unlikely(varonce3590==NULL)) {
var3591 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3592!=NULL)) {
var3593 = varonce3592;
} else {
var3594 = " / ";
var3595 = core__flat___NativeString___to_s_full(var3594, 3l, 3l);
var3593 = var3595;
varonce3592 = var3593;
}
((struct instance_core__NativeArray*)var3591)->values[1]=var3593;
} else {
var3591 = varonce3590;
varonce3590 = NULL;
}
{
var3596 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3597 = ((val*(*)(val* self))(var3596->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3596); /* to_s on <var3596:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3591)->values[0]=var3597;
{
var3598 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3599 = ((val*(*)(val* self))(var3598->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3598); /* to_s on <var3598:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3591)->values[2]=var3599;
{
var3600 = ((val*(*)(val* self))(var3591->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3591); /* native_to_s on <var3591:NativeArray[String]>*/
}
varonce3590 = var3591;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2892);
fatal_exit(1);
}
{
var3601 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3600, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3601); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3602!=NULL)) {
var3603 = varonce3602;
} else {
var3604 = "%";
var3605 = core__flat___NativeString___to_s_full(var3604, 1l, 1l);
var3603 = var3605;
varonce3602 = var3603;
}
{
var3606 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3603); /* == on <var_pname:String>*/
}
if (var3606){
if (unlikely(varonce3607==NULL)) {
var3608 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3609!=NULL)) {
var3610 = varonce3609;
} else {
var3611 = " % ";
var3612 = core__flat___NativeString___to_s_full(var3611, 3l, 3l);
var3610 = var3612;
varonce3609 = var3610;
}
((struct instance_core__NativeArray*)var3608)->values[1]=var3610;
} else {
var3608 = varonce3607;
varonce3607 = NULL;
}
{
var3613 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3614 = ((val*(*)(val* self))(var3613->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3613); /* to_s on <var3613:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3608)->values[0]=var3614;
{
var3615 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3616 = ((val*(*)(val* self))(var3615->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3615); /* to_s on <var3615:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3608)->values[2]=var3616;
{
var3617 = ((val*(*)(val* self))(var3608->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3608); /* native_to_s on <var3608:NativeArray[String]>*/
}
varonce3607 = var3608;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2895);
fatal_exit(1);
}
{
var3618 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3617, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3618); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3619!=NULL)) {
var3620 = varonce3619;
} else {
var3621 = "<<";
var3622 = core__flat___NativeString___to_s_full(var3621, 2l, 2l);
var3620 = var3622;
varonce3619 = var3620;
}
{
var3623 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3620); /* == on <var_pname:String>*/
}
if (var3623){
if (unlikely(varonce3624==NULL)) {
var3625 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3626!=NULL)) {
var3627 = varonce3626;
} else {
var3628 = " << ";
var3629 = core__flat___NativeString___to_s_full(var3628, 4l, 4l);
var3627 = var3629;
varonce3626 = var3627;
}
((struct instance_core__NativeArray*)var3625)->values[1]=var3627;
} else {
var3625 = varonce3624;
varonce3624 = NULL;
}
{
var3630 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3631 = ((val*(*)(val* self))(var3630->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3630); /* to_s on <var3630:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3625)->values[0]=var3631;
{
var3632 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3633 = ((val*(*)(val* self))(var3632->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3632); /* to_s on <var3632:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3625)->values[2]=var3633;
{
var3634 = ((val*(*)(val* self))(var3625->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3625); /* native_to_s on <var3625:NativeArray[String]>*/
}
varonce3624 = var3625;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2898);
fatal_exit(1);
}
{
var3635 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3634, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3635); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3636!=NULL)) {
var3637 = varonce3636;
} else {
var3638 = ">>";
var3639 = core__flat___NativeString___to_s_full(var3638, 2l, 2l);
var3637 = var3639;
varonce3636 = var3637;
}
{
var3640 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3637); /* == on <var_pname:String>*/
}
if (var3640){
if (unlikely(varonce3641==NULL)) {
var3642 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3643!=NULL)) {
var3644 = varonce3643;
} else {
var3645 = " >> ";
var3646 = core__flat___NativeString___to_s_full(var3645, 4l, 4l);
var3644 = var3646;
varonce3643 = var3644;
}
((struct instance_core__NativeArray*)var3642)->values[1]=var3644;
} else {
var3642 = varonce3641;
varonce3641 = NULL;
}
{
var3647 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3648 = ((val*(*)(val* self))(var3647->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3647); /* to_s on <var3647:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3642)->values[0]=var3648;
{
var3649 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3650 = ((val*(*)(val* self))(var3649->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3649); /* to_s on <var3649:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3642)->values[2]=var3650;
{
var3651 = ((val*(*)(val* self))(var3642->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3642); /* native_to_s on <var3642:NativeArray[String]>*/
}
varonce3641 = var3642;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2901);
fatal_exit(1);
}
{
var3652 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3651, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3652); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3653!=NULL)) {
var3654 = varonce3653;
} else {
var3655 = "==";
var3656 = core__flat___NativeString___to_s_full(var3655, 2l, 2l);
var3654 = var3656;
varonce3653 = var3654;
}
{
var3657 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3654); /* == on <var_pname:String>*/
}
if (var3657){
{
var3658 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3659 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3660 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var3658, var3659);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3660); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3661!=NULL)) {
var3662 = varonce3661;
} else {
var3663 = "!=";
var3664 = core__flat___NativeString___to_s_full(var3663, 2l, 2l);
var3662 = var3664;
varonce3661 = var3662;
}
{
var3665 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3662); /* == on <var_pname:String>*/
}
if (var3665){
{
var3666 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3667 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3668 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var3666, var3667);
}
var_res3669 = var3668;
if (unlikely(varonce3670==NULL)) {
var3671 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3672!=NULL)) {
var3673 = varonce3672;
} else {
var3674 = "!";
var3675 = core__flat___NativeString___to_s_full(var3674, 1l, 1l);
var3673 = var3675;
varonce3672 = var3673;
}
((struct instance_core__NativeArray*)var3671)->values[0]=var3673;
} else {
var3671 = varonce3670;
varonce3670 = NULL;
}
{
var3676 = ((val*(*)(val* self))(var_res3669->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res3669); /* to_s on <var_res3669:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var3671)->values[1]=var3676;
{
var3677 = ((val*(*)(val* self))(var3671->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3671); /* native_to_s on <var3671:NativeArray[String]>*/
}
varonce3670 = var3671;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2908);
fatal_exit(1);
}
{
var3678 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3677, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3678); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3679!=NULL)) {
var3680 = varonce3679;
} else {
var3681 = "<";
var3682 = core__flat___NativeString___to_s_full(var3681, 1l, 1l);
var3680 = var3682;
varonce3679 = var3680;
}
{
var3683 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3680); /* == on <var_pname:String>*/
}
if (var3683){
if (unlikely(varonce3684==NULL)) {
var3685 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3686!=NULL)) {
var3687 = varonce3686;
} else {
var3688 = " < ";
var3689 = core__flat___NativeString___to_s_full(var3688, 3l, 3l);
var3687 = var3689;
varonce3686 = var3687;
}
((struct instance_core__NativeArray*)var3685)->values[1]=var3687;
} else {
var3685 = varonce3684;
varonce3684 = NULL;
}
{
var3690 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3691 = ((val*(*)(val* self))(var3690->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3690); /* to_s on <var3690:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3685)->values[0]=var3691;
{
var3692 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3693 = ((val*(*)(val* self))(var3692->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3692); /* to_s on <var3692:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3685)->values[2]=var3693;
{
var3694 = ((val*(*)(val* self))(var3685->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3685); /* native_to_s on <var3685:NativeArray[String]>*/
}
varonce3684 = var3685;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2911);
fatal_exit(1);
}
{
var3695 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3694, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3695); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3696!=NULL)) {
var3697 = varonce3696;
} else {
var3698 = ">";
var3699 = core__flat___NativeString___to_s_full(var3698, 1l, 1l);
var3697 = var3699;
varonce3696 = var3697;
}
{
var3700 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3697); /* == on <var_pname:String>*/
}
if (var3700){
if (unlikely(varonce3701==NULL)) {
var3702 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3703!=NULL)) {
var3704 = varonce3703;
} else {
var3705 = " > ";
var3706 = core__flat___NativeString___to_s_full(var3705, 3l, 3l);
var3704 = var3706;
varonce3703 = var3704;
}
((struct instance_core__NativeArray*)var3702)->values[1]=var3704;
} else {
var3702 = varonce3701;
varonce3701 = NULL;
}
{
var3707 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3708 = ((val*(*)(val* self))(var3707->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3707); /* to_s on <var3707:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3702)->values[0]=var3708;
{
var3709 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3710 = ((val*(*)(val* self))(var3709->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3709); /* to_s on <var3709:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3702)->values[2]=var3710;
{
var3711 = ((val*(*)(val* self))(var3702->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3702); /* native_to_s on <var3702:NativeArray[String]>*/
}
varonce3701 = var3702;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2914);
fatal_exit(1);
}
{
var3712 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3711, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3712); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3713!=NULL)) {
var3714 = varonce3713;
} else {
var3715 = "<=";
var3716 = core__flat___NativeString___to_s_full(var3715, 2l, 2l);
var3714 = var3716;
varonce3713 = var3714;
}
{
var3717 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3714); /* == on <var_pname:String>*/
}
if (var3717){
if (unlikely(varonce3718==NULL)) {
var3719 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3720!=NULL)) {
var3721 = varonce3720;
} else {
var3722 = " <= ";
var3723 = core__flat___NativeString___to_s_full(var3722, 4l, 4l);
var3721 = var3723;
varonce3720 = var3721;
}
((struct instance_core__NativeArray*)var3719)->values[1]=var3721;
} else {
var3719 = varonce3718;
varonce3718 = NULL;
}
{
var3724 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3725 = ((val*(*)(val* self))(var3724->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3724); /* to_s on <var3724:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3719)->values[0]=var3725;
{
var3726 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3727 = ((val*(*)(val* self))(var3726->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3726); /* to_s on <var3726:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3719)->values[2]=var3727;
{
var3728 = ((val*(*)(val* self))(var3719->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3719); /* native_to_s on <var3719:NativeArray[String]>*/
}
varonce3718 = var3719;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2917);
fatal_exit(1);
}
{
var3729 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3728, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3729); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3730!=NULL)) {
var3731 = varonce3730;
} else {
var3732 = ">=";
var3733 = core__flat___NativeString___to_s_full(var3732, 2l, 2l);
var3731 = var3733;
varonce3730 = var3731;
}
{
var3734 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3731); /* == on <var_pname:String>*/
}
if (var3734){
if (unlikely(varonce3735==NULL)) {
var3736 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3737!=NULL)) {
var3738 = varonce3737;
} else {
var3739 = " >= ";
var3740 = core__flat___NativeString___to_s_full(var3739, 4l, 4l);
var3738 = var3740;
varonce3737 = var3738;
}
((struct instance_core__NativeArray*)var3736)->values[1]=var3738;
} else {
var3736 = varonce3735;
varonce3735 = NULL;
}
{
var3741 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3742 = ((val*(*)(val* self))(var3741->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3741); /* to_s on <var3741:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3736)->values[0]=var3742;
{
var3743 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3744 = ((val*(*)(val* self))(var3743->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3743); /* to_s on <var3743:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3736)->values[2]=var3744;
{
var3745 = ((val*(*)(val* self))(var3736->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3736); /* native_to_s on <var3736:NativeArray[String]>*/
}
varonce3735 = var3736;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2920);
fatal_exit(1);
}
{
var3746 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3745, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3746); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3747!=NULL)) {
var3748 = varonce3747;
} else {
var3749 = "to_i";
var3750 = core__flat___NativeString___to_s_full(var3749, 4l, 4l);
var3748 = var3750;
varonce3747 = var3748;
}
{
var3751 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3748); /* == on <var_pname:String>*/
}
if (var3751){
if (unlikely(varonce3752==NULL)) {
var3753 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3754!=NULL)) {
var3755 = varonce3754;
} else {
var3756 = "(long)";
var3757 = core__flat___NativeString___to_s_full(var3756, 6l, 6l);
var3755 = var3757;
varonce3754 = var3755;
}
((struct instance_core__NativeArray*)var3753)->values[0]=var3755;
} else {
var3753 = varonce3752;
varonce3752 = NULL;
}
{
var3758 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3759 = ((val*(*)(val* self))(var3758->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3758); /* to_s on <var3758:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3753)->values[1]=var3759;
{
var3760 = ((val*(*)(val* self))(var3753->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3753); /* native_to_s on <var3753:NativeArray[String]>*/
}
varonce3752 = var3753;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2923);
fatal_exit(1);
}
{
var3761 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3760, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3761); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3762!=NULL)) {
var3763 = varonce3762;
} else {
var3764 = "to_b";
var3765 = core__flat___NativeString___to_s_full(var3764, 4l, 4l);
var3763 = var3765;
varonce3762 = var3763;
}
{
var3766 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3763); /* == on <var_pname:String>*/
}
if (var3766){
if (unlikely(varonce3767==NULL)) {
var3768 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3769!=NULL)) {
var3770 = varonce3769;
} else {
var3771 = "(unsigned char)";
var3772 = core__flat___NativeString___to_s_full(var3771, 15l, 15l);
var3770 = var3772;
varonce3769 = var3770;
}
((struct instance_core__NativeArray*)var3768)->values[0]=var3770;
} else {
var3768 = varonce3767;
varonce3767 = NULL;
}
{
var3773 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3774 = ((val*(*)(val* self))(var3773->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3773); /* to_s on <var3773:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3768)->values[1]=var3774;
{
var3775 = ((val*(*)(val* self))(var3768->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3768); /* native_to_s on <var3768:NativeArray[String]>*/
}
varonce3767 = var3768;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2926);
fatal_exit(1);
}
{
var3776 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3775, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3776); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3777!=NULL)) {
var3778 = varonce3777;
} else {
var3779 = "to_i8";
var3780 = core__flat___NativeString___to_s_full(var3779, 5l, 5l);
var3778 = var3780;
varonce3777 = var3778;
}
{
var3781 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3778); /* == on <var_pname:String>*/
}
if (var3781){
if (unlikely(varonce3782==NULL)) {
var3783 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3784!=NULL)) {
var3785 = varonce3784;
} else {
var3786 = "(int8_t)";
var3787 = core__flat___NativeString___to_s_full(var3786, 8l, 8l);
var3785 = var3787;
varonce3784 = var3785;
}
((struct instance_core__NativeArray*)var3783)->values[0]=var3785;
} else {
var3783 = varonce3782;
varonce3782 = NULL;
}
{
var3788 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3789 = ((val*(*)(val* self))(var3788->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3788); /* to_s on <var3788:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3783)->values[1]=var3789;
{
var3790 = ((val*(*)(val* self))(var3783->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3783); /* native_to_s on <var3783:NativeArray[String]>*/
}
varonce3782 = var3783;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2929);
fatal_exit(1);
}
{
var3791 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3790, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3791); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3792!=NULL)) {
var3793 = varonce3792;
} else {
var3794 = "to_i16";
var3795 = core__flat___NativeString___to_s_full(var3794, 6l, 6l);
var3793 = var3795;
varonce3792 = var3793;
}
{
var3796 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3793); /* == on <var_pname:String>*/
}
if (var3796){
if (unlikely(varonce3797==NULL)) {
var3798 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3799!=NULL)) {
var3800 = varonce3799;
} else {
var3801 = "(int16_t)";
var3802 = core__flat___NativeString___to_s_full(var3801, 9l, 9l);
var3800 = var3802;
varonce3799 = var3800;
}
((struct instance_core__NativeArray*)var3798)->values[0]=var3800;
} else {
var3798 = varonce3797;
varonce3797 = NULL;
}
{
var3803 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3804 = ((val*(*)(val* self))(var3803->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3803); /* to_s on <var3803:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3798)->values[1]=var3804;
{
var3805 = ((val*(*)(val* self))(var3798->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3798); /* native_to_s on <var3798:NativeArray[String]>*/
}
varonce3797 = var3798;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2932);
fatal_exit(1);
}
{
var3806 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3805, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3806); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3807!=NULL)) {
var3808 = varonce3807;
} else {
var3809 = "to_u16";
var3810 = core__flat___NativeString___to_s_full(var3809, 6l, 6l);
var3808 = var3810;
varonce3807 = var3808;
}
{
var3811 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3808); /* == on <var_pname:String>*/
}
if (var3811){
if (unlikely(varonce3812==NULL)) {
var3813 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3814!=NULL)) {
var3815 = varonce3814;
} else {
var3816 = "(uint16_t)";
var3817 = core__flat___NativeString___to_s_full(var3816, 10l, 10l);
var3815 = var3817;
varonce3814 = var3815;
}
((struct instance_core__NativeArray*)var3813)->values[0]=var3815;
} else {
var3813 = varonce3812;
varonce3812 = NULL;
}
{
var3818 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3819 = ((val*(*)(val* self))(var3818->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3818); /* to_s on <var3818:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3813)->values[1]=var3819;
{
var3820 = ((val*(*)(val* self))(var3813->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3813); /* native_to_s on <var3813:NativeArray[String]>*/
}
varonce3812 = var3813;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2935);
fatal_exit(1);
}
{
var3821 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3820, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3821); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3822!=NULL)) {
var3823 = varonce3822;
} else {
var3824 = "to_i32";
var3825 = core__flat___NativeString___to_s_full(var3824, 6l, 6l);
var3823 = var3825;
varonce3822 = var3823;
}
{
var3826 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3823); /* == on <var_pname:String>*/
}
if (var3826){
if (unlikely(varonce3827==NULL)) {
var3828 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3829!=NULL)) {
var3830 = varonce3829;
} else {
var3831 = "(int32_t)";
var3832 = core__flat___NativeString___to_s_full(var3831, 9l, 9l);
var3830 = var3832;
varonce3829 = var3830;
}
((struct instance_core__NativeArray*)var3828)->values[0]=var3830;
} else {
var3828 = varonce3827;
varonce3827 = NULL;
}
{
var3833 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3834 = ((val*(*)(val* self))(var3833->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3833); /* to_s on <var3833:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3828)->values[1]=var3834;
{
var3835 = ((val*(*)(val* self))(var3828->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3828); /* native_to_s on <var3828:NativeArray[String]>*/
}
varonce3827 = var3828;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2938);
fatal_exit(1);
}
{
var3836 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3835, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3836); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3837!=NULL)) {
var3838 = varonce3837;
} else {
var3839 = "to_f";
var3840 = core__flat___NativeString___to_s_full(var3839, 4l, 4l);
var3838 = var3840;
varonce3837 = var3838;
}
{
var3841 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3838); /* == on <var_pname:String>*/
}
if (var3841){
if (unlikely(varonce3842==NULL)) {
var3843 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3844!=NULL)) {
var3845 = varonce3844;
} else {
var3846 = "(double)";
var3847 = core__flat___NativeString___to_s_full(var3846, 8l, 8l);
var3845 = var3847;
varonce3844 = var3845;
}
((struct instance_core__NativeArray*)var3843)->values[0]=var3845;
} else {
var3843 = varonce3842;
varonce3842 = NULL;
}
{
var3848 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3849 = ((val*(*)(val* self))(var3848->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3848); /* to_s on <var3848:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3843)->values[1]=var3849;
{
var3850 = ((val*(*)(val* self))(var3843->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3843); /* native_to_s on <var3843:NativeArray[String]>*/
}
varonce3842 = var3843;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2941);
fatal_exit(1);
}
{
var3851 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3850, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3851); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3852!=NULL)) {
var3853 = varonce3852;
} else {
var3854 = "&";
var3855 = core__flat___NativeString___to_s_full(var3854, 1l, 1l);
var3853 = var3855;
varonce3852 = var3853;
}
{
var3856 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3853); /* == on <var_pname:String>*/
}
if (var3856){
if (unlikely(varonce3857==NULL)) {
var3858 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3859!=NULL)) {
var3860 = varonce3859;
} else {
var3861 = " & ";
var3862 = core__flat___NativeString___to_s_full(var3861, 3l, 3l);
var3860 = var3862;
varonce3859 = var3860;
}
((struct instance_core__NativeArray*)var3858)->values[1]=var3860;
} else {
var3858 = varonce3857;
varonce3857 = NULL;
}
{
var3863 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3864 = ((val*(*)(val* self))(var3863->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3863); /* to_s on <var3863:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3858)->values[0]=var3864;
{
var3865 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3866 = ((val*(*)(val* self))(var3865->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3865); /* to_s on <var3865:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3858)->values[2]=var3866;
{
var3867 = ((val*(*)(val* self))(var3858->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3858); /* native_to_s on <var3858:NativeArray[String]>*/
}
varonce3857 = var3858;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2944);
fatal_exit(1);
}
{
var3868 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3867, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3868); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3869!=NULL)) {
var3870 = varonce3869;
} else {
var3871 = "|";
var3872 = core__flat___NativeString___to_s_full(var3871, 1l, 1l);
var3870 = var3872;
varonce3869 = var3870;
}
{
var3873 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3870); /* == on <var_pname:String>*/
}
if (var3873){
if (unlikely(varonce3874==NULL)) {
var3875 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3876!=NULL)) {
var3877 = varonce3876;
} else {
var3878 = " | ";
var3879 = core__flat___NativeString___to_s_full(var3878, 3l, 3l);
var3877 = var3879;
varonce3876 = var3877;
}
((struct instance_core__NativeArray*)var3875)->values[1]=var3877;
} else {
var3875 = varonce3874;
varonce3874 = NULL;
}
{
var3880 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3881 = ((val*(*)(val* self))(var3880->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3880); /* to_s on <var3880:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3875)->values[0]=var3881;
{
var3882 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3883 = ((val*(*)(val* self))(var3882->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3882); /* to_s on <var3882:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3875)->values[2]=var3883;
{
var3884 = ((val*(*)(val* self))(var3875->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3875); /* native_to_s on <var3875:NativeArray[String]>*/
}
varonce3874 = var3875;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2947);
fatal_exit(1);
}
{
var3885 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3884, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3885); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3886!=NULL)) {
var3887 = varonce3886;
} else {
var3888 = "^";
var3889 = core__flat___NativeString___to_s_full(var3888, 1l, 1l);
var3887 = var3889;
varonce3886 = var3887;
}
{
var3890 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3887); /* == on <var_pname:String>*/
}
if (var3890){
if (unlikely(varonce3891==NULL)) {
var3892 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3893!=NULL)) {
var3894 = varonce3893;
} else {
var3895 = " ^ ";
var3896 = core__flat___NativeString___to_s_full(var3895, 3l, 3l);
var3894 = var3896;
varonce3893 = var3894;
}
((struct instance_core__NativeArray*)var3892)->values[1]=var3894;
} else {
var3892 = varonce3891;
varonce3891 = NULL;
}
{
var3897 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3898 = ((val*(*)(val* self))(var3897->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3897); /* to_s on <var3897:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3892)->values[0]=var3898;
{
var3899 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3900 = ((val*(*)(val* self))(var3899->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3899); /* to_s on <var3899:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3892)->values[2]=var3900;
{
var3901 = ((val*(*)(val* self))(var3892->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3892); /* native_to_s on <var3892:NativeArray[String]>*/
}
varonce3891 = var3892;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2950);
fatal_exit(1);
}
{
var3902 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3901, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3902); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3903!=NULL)) {
var3904 = varonce3903;
} else {
var3905 = "unary ~";
var3906 = core__flat___NativeString___to_s_full(var3905, 7l, 7l);
var3904 = var3906;
varonce3903 = var3904;
}
{
var3907 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3904); /* == on <var_pname:String>*/
}
if (var3907){
if (unlikely(varonce3908==NULL)) {
var3909 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3910!=NULL)) {
var3911 = varonce3910;
} else {
var3912 = "~";
var3913 = core__flat___NativeString___to_s_full(var3912, 1l, 1l);
var3911 = var3913;
varonce3910 = var3911;
}
((struct instance_core__NativeArray*)var3909)->values[0]=var3911;
} else {
var3909 = varonce3908;
varonce3908 = NULL;
}
{
var3914 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3915 = ((val*(*)(val* self))(var3914->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3914); /* to_s on <var3914:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3909)->values[1]=var3915;
{
var3916 = ((val*(*)(val* self))(var3909->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3909); /* native_to_s on <var3909:NativeArray[String]>*/
}
varonce3908 = var3909;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2953);
fatal_exit(1);
}
{
var3917 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3916, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3917); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
}
}
}
}
} else {
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
if (likely(varonce3918!=NULL)) {
var3919 = varonce3918;
} else {
var3920 = "exit";
var3921 = core__flat___NativeString___to_s_full(var3920, 4l, 4l);
var3919 = var3921;
varonce3918 = var3919;
}
{
var3922 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3919); /* == on <var_pname:String>*/
}
if (var3922){
if (unlikely(varonce3923==NULL)) {
var3924 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3925!=NULL)) {
var3926 = varonce3925;
} else {
var3927 = "exit(";
var3928 = core__flat___NativeString___to_s_full(var3927, 5l, 5l);
var3926 = var3928;
varonce3925 = var3926;
}
((struct instance_core__NativeArray*)var3924)->values[0]=var3926;
if (likely(varonce3929!=NULL)) {
var3930 = varonce3929;
} else {
var3931 = ");";
var3932 = core__flat___NativeString___to_s_full(var3931, 2l, 2l);
var3930 = var3932;
varonce3929 = var3930;
}
((struct instance_core__NativeArray*)var3924)->values[2]=var3930;
} else {
var3924 = varonce3923;
varonce3923 = NULL;
}
{
var3933 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3934 = ((val*(*)(val* self))(var3933->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3933); /* to_s on <var3933:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3924)->values[1]=var3934;
{
var3935 = ((val*(*)(val* self))(var3924->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3924); /* native_to_s on <var3924:NativeArray[String]>*/
}
varonce3923 = var3924;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var3935); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3936!=NULL)) {
var3937 = varonce3936;
} else {
var3938 = "sys";
var3939 = core__flat___NativeString___to_s_full(var3938, 3l, 3l);
var3937 = var3939;
varonce3936 = var3937;
}
{
var3940 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3937); /* == on <var_pname:String>*/
}
if (var3940){
if (likely(varonce3941!=NULL)) {
var3942 = varonce3941;
} else {
var3943 = "glob_sys";
var3944 = core__flat___NativeString___to_s_full(var3943, 8l, 8l);
var3942 = var3944;
varonce3941 = var3942;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2961);
fatal_exit(1);
}
{
var3945 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3942, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3945); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3946!=NULL)) {
var3947 = varonce3946;
} else {
var3948 = "calloc_string";
var3949 = core__flat___NativeString___to_s_full(var3948, 13l, 13l);
var3947 = var3949;
varonce3946 = var3947;
}
{
var3950 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3947); /* == on <var_pname:String>*/
}
if (var3950){
if (unlikely(varonce3951==NULL)) {
var3952 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3953!=NULL)) {
var3954 = varonce3953;
} else {
var3955 = "(char*)nit_alloc(";
var3956 = core__flat___NativeString___to_s_full(var3955, 17l, 17l);
var3954 = var3956;
varonce3953 = var3954;
}
((struct instance_core__NativeArray*)var3952)->values[0]=var3954;
if (likely(varonce3957!=NULL)) {
var3958 = varonce3957;
} else {
var3959 = ")";
var3960 = core__flat___NativeString___to_s_full(var3959, 1l, 1l);
var3958 = var3960;
varonce3957 = var3958;
}
((struct instance_core__NativeArray*)var3952)->values[2]=var3958;
} else {
var3952 = varonce3951;
varonce3951 = NULL;
}
{
var3961 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3962 = ((val*(*)(val* self))(var3961->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3961); /* to_s on <var3961:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3952)->values[1]=var3962;
{
var3963 = ((val*(*)(val* self))(var3952->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3952); /* native_to_s on <var3952:NativeArray[String]>*/
}
varonce3951 = var3952;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2964);
fatal_exit(1);
}
{
var3964 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3963, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3964); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3965!=NULL)) {
var3966 = varonce3965;
} else {
var3967 = "calloc_array";
var3968 = core__flat___NativeString___to_s_full(var3967, 12l, 12l);
var3966 = var3968;
varonce3965 = var3966;
}
{
var3969 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3966); /* == on <var_pname:String>*/
}
if (var3969){
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2967);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__calloc_array]))(var_v, var_ret, var_arguments); /* calloc_array on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3970!=NULL)) {
var3971 = varonce3970;
} else {
var3972 = "object_id";
var3973 = core__flat___NativeString___to_s_full(var3972, 9l, 9l);
var3971 = var3973;
varonce3970 = var3971;
}
{
var3974 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3971); /* == on <var_pname:String>*/
}
if (var3974){
if (unlikely(varonce3975==NULL)) {
var3976 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3977!=NULL)) {
var3978 = varonce3977;
} else {
var3979 = "(long)";
var3980 = core__flat___NativeString___to_s_full(var3979, 6l, 6l);
var3978 = var3980;
varonce3977 = var3978;
}
((struct instance_core__NativeArray*)var3976)->values[0]=var3978;
} else {
var3976 = varonce3975;
varonce3975 = NULL;
}
{
var3981 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3982 = ((val*(*)(val* self))(var3981->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3981); /* to_s on <var3981:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3976)->values[1]=var3982;
{
var3983 = ((val*(*)(val* self))(var3976->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3976); /* native_to_s on <var3976:NativeArray[String]>*/
}
varonce3975 = var3976;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2970);
fatal_exit(1);
}
{
var3984 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3983, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3984); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3985!=NULL)) {
var3986 = varonce3985;
} else {
var3987 = "is_same_type";
var3988 = core__flat___NativeString___to_s_full(var3987, 12l, 12l);
var3986 = var3988;
varonce3985 = var3986;
}
{
var3989 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3986); /* == on <var_pname:String>*/
}
if (var3989){
{
var3990 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3991 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3992 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__is_same_type_test(var_v, var3990, var3991);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3992); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3993!=NULL)) {
var3994 = varonce3993;
} else {
var3995 = "is_same_instance";
var3996 = core__flat___NativeString___to_s_full(var3995, 16l, 16l);
var3994 = var3996;
varonce3993 = var3994;
}
{
var3997 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3994); /* == on <var_pname:String>*/
}
if (var3997){
{
var3998 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3999 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4000 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var3998, var3999);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4000); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4001!=NULL)) {
var4002 = varonce4001;
} else {
var4003 = "output_class_name";
var4004 = core__flat___NativeString___to_s_full(var4003, 17l, 17l);
var4002 = var4004;
varonce4001 = var4002;
}
{
var4005 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4002); /* == on <var_pname:String>*/
}
if (var4005){
{
var4006 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var4007 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var4006); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_nat = var4007;
if (unlikely(varonce4008==NULL)) {
var4009 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce4010!=NULL)) {
var4011 = varonce4010;
} else {
var4012 = "printf(\"%s\\n\", ";
var4013 = core__flat___NativeString___to_s_full(var4012, 15l, 15l);
var4011 = var4013;
varonce4010 = var4011;
}
((struct instance_core__NativeArray*)var4009)->values[0]=var4011;
if (likely(varonce4014!=NULL)) {
var4015 = varonce4014;
} else {
var4016 = ");";
var4017 = core__flat___NativeString___to_s_full(var4016, 2l, 2l);
var4015 = var4017;
varonce4014 = var4015;
}
((struct instance_core__NativeArray*)var4009)->values[2]=var4015;
} else {
var4009 = varonce4008;
varonce4008 = NULL;
}
((struct instance_core__NativeArray*)var4009)->values[1]=var_nat;
{
var4018 = ((val*(*)(val* self))(var4009->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4009); /* native_to_s on <var4009:NativeArray[String]>*/
}
varonce4008 = var4009;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var4018); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4019!=NULL)) {
var4020 = varonce4019;
} else {
var4021 = "native_class_name";
var4022 = core__flat___NativeString___to_s_full(var4021, 17l, 17l);
var4020 = var4022;
varonce4019 = var4020;
}
{
var4023 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4020); /* == on <var_pname:String>*/
}
if (var4023){
{
var4024 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var4025 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var4024); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_nat4026 = var4025;
if (unlikely(varonce4027==NULL)) {
var4028 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce4029!=NULL)) {
var4030 = varonce4029;
} else {
var4031 = "(char*)";
var4032 = core__flat___NativeString___to_s_full(var4031, 7l, 7l);
var4030 = var4032;
varonce4029 = var4030;
}
((struct instance_core__NativeArray*)var4028)->values[0]=var4030;
} else {
var4028 = varonce4027;
varonce4027 = NULL;
}
((struct instance_core__NativeArray*)var4028)->values[1]=var_nat4026;
{
var4033 = ((val*(*)(val* self))(var4028->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4028); /* native_to_s on <var4028:NativeArray[String]>*/
}
varonce4027 = var4028;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2984);
fatal_exit(1);
}
{
var4034 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4033, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4034); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4035!=NULL)) {
var4036 = varonce4035;
} else {
var4037 = "force_garbage_collection";
var4038 = core__flat___NativeString___to_s_full(var4037, 24l, 24l);
var4036 = var4038;
varonce4035 = var4036;
}
{
var4039 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4036); /* == on <var_pname:String>*/
}
if (var4039){
if (likely(varonce4040!=NULL)) {
var4041 = varonce4040;
} else {
var4042 = "nit_gcollect();";
var4043 = core__flat___NativeString___to_s_full(var4042, 15l, 15l);
var4041 = var4043;
varonce4040 = var4041;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var4041); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4044!=NULL)) {
var4045 = varonce4044;
} else {
var4046 = "native_argc";
var4047 = core__flat___NativeString___to_s_full(var4046, 11l, 11l);
var4045 = var4047;
varonce4044 = var4045;
}
{
var4048 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4045); /* == on <var_pname:String>*/
}
if (var4048){
if (likely(varonce4049!=NULL)) {
var4050 = varonce4049;
} else {
var4051 = "glob_argc";
var4052 = core__flat___NativeString___to_s_full(var4051, 9l, 9l);
var4050 = var4052;
varonce4049 = var4050;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2990);
fatal_exit(1);
}
{
var4053 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4050, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4053); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4054!=NULL)) {
var4055 = varonce4054;
} else {
var4056 = "native_argv";
var4057 = core__flat___NativeString___to_s_full(var4056, 11l, 11l);
var4055 = var4057;
varonce4054 = var4055;
}
{
var4058 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4055); /* == on <var_pname:String>*/
}
if (var4058){
if (unlikely(varonce4059==NULL)) {
var4060 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce4061!=NULL)) {
var4062 = varonce4061;
} else {
var4063 = "glob_argv[";
var4064 = core__flat___NativeString___to_s_full(var4063, 10l, 10l);
var4062 = var4064;
varonce4061 = var4062;
}
((struct instance_core__NativeArray*)var4060)->values[0]=var4062;
if (likely(varonce4065!=NULL)) {
var4066 = varonce4065;
} else {
var4067 = "]";
var4068 = core__flat___NativeString___to_s_full(var4067, 1l, 1l);
var4066 = var4068;
varonce4065 = var4066;
}
((struct instance_core__NativeArray*)var4060)->values[2]=var4066;
} else {
var4060 = varonce4059;
varonce4059 = NULL;
}
{
var4069 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4070 = ((val*(*)(val* self))(var4069->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4069); /* to_s on <var4069:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4060)->values[1]=var4070;
{
var4071 = ((val*(*)(val* self))(var4060->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4060); /* native_to_s on <var4060:NativeArray[String]>*/
}
varonce4059 = var4060;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2993);
fatal_exit(1);
}
{
var4072 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4071, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4072); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
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
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
