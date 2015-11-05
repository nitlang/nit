#include "nit__abstract_compiler.sep.0.h"
/* method abstract_compiler#AMethPropdef#compile_intern_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nit__abstract_compiler___AMethPropdef___compile_intern_to_c(val* self, val* p0, val* p1, val* p2) {
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
val* var32 /* : FlatString */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
short int var54 /* : Bool */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
val* var65 /* : nullable Object */;
val* var66 /* : String */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
short int var72 /* : Bool */;
val* var73 /* : nullable Object */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
short int var78 /* : Bool */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
val* var85 /* : nullable Object */;
val* var86 /* : String */;
val* var87 /* : nullable Object */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : RuntimeVariable */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
short int var95 /* : Bool */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : FlatString */;
val* var102 /* : nullable Object */;
val* var103 /* : String */;
val* var104 /* : nullable Object */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : RuntimeVariable */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
short int var112 /* : Bool */;
val* var114 /* : NativeArray[String] */;
static val* varonce113;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
val* var119 /* : nullable Object */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var122 /* : RuntimeVariable */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : FlatString */;
short int var127 /* : Bool */;
val* var128 /* : nullable Object */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
short int var133 /* : Bool */;
val* var135 /* : NativeArray[String] */;
static val* varonce134;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : FlatString */;
val* var140 /* : nullable Object */;
val* var141 /* : String */;
val* var142 /* : nullable Object */;
val* var143 /* : String */;
val* var144 /* : String */;
val* var145 /* : RuntimeVariable */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : FlatString */;
short int var150 /* : Bool */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : FlatString */;
val* var157 /* : nullable Object */;
val* var158 /* : String */;
val* var159 /* : nullable Object */;
val* var160 /* : String */;
val* var161 /* : String */;
val* var162 /* : RuntimeVariable */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : FlatString */;
short int var167 /* : Bool */;
val* var169 /* : NativeArray[String] */;
static val* varonce168;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : FlatString */;
val* var174 /* : nullable Object */;
val* var175 /* : String */;
val* var176 /* : nullable Object */;
val* var177 /* : String */;
val* var178 /* : String */;
val* var179 /* : RuntimeVariable */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : FlatString */;
short int var184 /* : Bool */;
val* var186 /* : NativeArray[String] */;
static val* varonce185;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : FlatString */;
val* var191 /* : nullable Object */;
val* var192 /* : String */;
val* var193 /* : nullable Object */;
val* var194 /* : String */;
val* var195 /* : String */;
val* var196 /* : RuntimeVariable */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
val* var200 /* : FlatString */;
short int var201 /* : Bool */;
val* var203 /* : NativeArray[String] */;
static val* varonce202;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
val* var207 /* : FlatString */;
val* var208 /* : nullable Object */;
val* var209 /* : String */;
val* var210 /* : nullable Object */;
val* var211 /* : String */;
val* var212 /* : String */;
val* var213 /* : RuntimeVariable */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
val* var217 /* : FlatString */;
short int var218 /* : Bool */;
val* var219 /* : nullable Object */;
val* var220 /* : nullable Object */;
val* var221 /* : RuntimeVariable */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
val* var225 /* : FlatString */;
short int var226 /* : Bool */;
val* var227 /* : nullable Object */;
val* var228 /* : nullable Object */;
val* var229 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var231 /* : NativeArray[String] */;
static val* varonce230;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
val* var235 /* : FlatString */;
val* var236 /* : String */;
val* var237 /* : String */;
val* var238 /* : RuntimeVariable */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
val* var242 /* : FlatString */;
short int var243 /* : Bool */;
val* var245 /* : NativeArray[String] */;
static val* varonce244;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
val* var249 /* : FlatString */;
val* var250 /* : nullable Object */;
val* var251 /* : String */;
val* var252 /* : nullable Object */;
val* var253 /* : String */;
val* var254 /* : String */;
val* var255 /* : RuntimeVariable */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
val* var259 /* : FlatString */;
short int var260 /* : Bool */;
val* var262 /* : NativeArray[String] */;
static val* varonce261;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
val* var266 /* : FlatString */;
val* var267 /* : nullable Object */;
val* var268 /* : String */;
val* var269 /* : nullable Object */;
val* var270 /* : String */;
val* var271 /* : String */;
val* var272 /* : RuntimeVariable */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
val* var276 /* : FlatString */;
short int var277 /* : Bool */;
val* var279 /* : NativeArray[String] */;
static val* varonce278;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
val* var283 /* : FlatString */;
val* var284 /* : nullable Object */;
val* var285 /* : String */;
val* var286 /* : nullable Object */;
val* var287 /* : String */;
val* var288 /* : String */;
val* var289 /* : RuntimeVariable */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
val* var293 /* : FlatString */;
short int var294 /* : Bool */;
val* var296 /* : NativeArray[String] */;
static val* varonce295;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
val* var300 /* : FlatString */;
val* var301 /* : nullable Object */;
val* var302 /* : String */;
val* var303 /* : nullable Object */;
val* var304 /* : String */;
val* var305 /* : String */;
val* var306 /* : RuntimeVariable */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
val* var310 /* : FlatString */;
short int var311 /* : Bool */;
val* var313 /* : NativeArray[String] */;
static val* varonce312;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
val* var317 /* : FlatString */;
val* var318 /* : nullable Object */;
val* var319 /* : String */;
val* var320 /* : String */;
val* var321 /* : RuntimeVariable */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
val* var325 /* : FlatString */;
short int var326 /* : Bool */;
val* var328 /* : NativeArray[String] */;
static val* varonce327;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
val* var332 /* : FlatString */;
val* var333 /* : nullable Object */;
val* var334 /* : String */;
val* var335 /* : String */;
val* var336 /* : RuntimeVariable */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
val* var340 /* : FlatString */;
short int var341 /* : Bool */;
val* var343 /* : NativeArray[String] */;
static val* varonce342;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
val* var347 /* : FlatString */;
val* var348 /* : nullable Object */;
val* var349 /* : String */;
val* var350 /* : String */;
val* var351 /* : RuntimeVariable */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
val* var355 /* : FlatString */;
short int var356 /* : Bool */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
val* var360 /* : FlatString */;
short int var361 /* : Bool */;
val* var363 /* : NativeArray[String] */;
static val* varonce362;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
val* var367 /* : FlatString */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : NativeString */;
val* var371 /* : FlatString */;
val* var372 /* : nullable Object */;
val* var373 /* : String */;
val* var374 /* : String */;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
val* var378 /* : FlatString */;
short int var379 /* : Bool */;
val* var381 /* : NativeArray[String] */;
static val* varonce380;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
val* var385 /* : FlatString */;
val* var386 /* : nullable Object */;
val* var387 /* : String */;
val* var388 /* : String */;
val* var389 /* : RuntimeVariable */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
val* var393 /* : FlatString */;
short int var394 /* : Bool */;
val* var396 /* : NativeArray[String] */;
static val* varonce395;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
val* var400 /* : FlatString */;
val* var401 /* : nullable Object */;
val* var402 /* : String */;
val* var403 /* : nullable Object */;
val* var404 /* : String */;
val* var405 /* : String */;
val* var406 /* : RuntimeVariable */;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : NativeString */;
val* var410 /* : FlatString */;
short int var411 /* : Bool */;
val* var413 /* : NativeArray[String] */;
static val* varonce412;
static val* varonce414;
val* var415 /* : String */;
char* var416 /* : NativeString */;
val* var417 /* : FlatString */;
val* var418 /* : nullable Object */;
val* var419 /* : String */;
val* var420 /* : nullable Object */;
val* var421 /* : String */;
val* var422 /* : String */;
val* var423 /* : RuntimeVariable */;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : NativeString */;
val* var427 /* : FlatString */;
short int var428 /* : Bool */;
val* var429 /* : nullable Object */;
val* var430 /* : nullable Object */;
val* var431 /* : RuntimeVariable */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : NativeString */;
val* var435 /* : FlatString */;
short int var436 /* : Bool */;
val* var437 /* : nullable Object */;
val* var438 /* : nullable Object */;
val* var439 /* : RuntimeVariable */;
val* var_res440 /* var res: RuntimeVariable */;
val* var442 /* : NativeArray[String] */;
static val* varonce441;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
val* var446 /* : FlatString */;
val* var447 /* : String */;
val* var448 /* : String */;
val* var449 /* : RuntimeVariable */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
val* var453 /* : FlatString */;
short int var454 /* : Bool */;
val* var456 /* : NativeArray[String] */;
static val* varonce455;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : NativeString */;
val* var460 /* : FlatString */;
val* var461 /* : nullable Object */;
val* var462 /* : String */;
val* var463 /* : nullable Object */;
val* var464 /* : String */;
val* var465 /* : String */;
val* var466 /* : RuntimeVariable */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
val* var470 /* : FlatString */;
short int var471 /* : Bool */;
val* var473 /* : NativeArray[String] */;
static val* varonce472;
static val* varonce474;
val* var475 /* : String */;
char* var476 /* : NativeString */;
val* var477 /* : FlatString */;
val* var478 /* : nullable Object */;
val* var479 /* : String */;
val* var480 /* : nullable Object */;
val* var481 /* : String */;
val* var482 /* : String */;
val* var483 /* : RuntimeVariable */;
static val* varonce484;
val* var485 /* : String */;
char* var486 /* : NativeString */;
val* var487 /* : FlatString */;
short int var488 /* : Bool */;
val* var490 /* : NativeArray[String] */;
static val* varonce489;
static val* varonce491;
val* var492 /* : String */;
char* var493 /* : NativeString */;
val* var494 /* : FlatString */;
val* var495 /* : nullable Object */;
val* var496 /* : String */;
val* var497 /* : nullable Object */;
val* var498 /* : String */;
val* var499 /* : String */;
val* var500 /* : RuntimeVariable */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
val* var504 /* : FlatString */;
short int var505 /* : Bool */;
val* var507 /* : NativeArray[String] */;
static val* varonce506;
static val* varonce508;
val* var509 /* : String */;
char* var510 /* : NativeString */;
val* var511 /* : FlatString */;
val* var512 /* : nullable Object */;
val* var513 /* : String */;
val* var514 /* : nullable Object */;
val* var515 /* : String */;
val* var516 /* : String */;
val* var517 /* : RuntimeVariable */;
static val* varonce518;
val* var519 /* : String */;
char* var520 /* : NativeString */;
val* var521 /* : FlatString */;
short int var522 /* : Bool */;
val* var524 /* : NativeArray[String] */;
static val* varonce523;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
val* var528 /* : FlatString */;
val* var529 /* : nullable Object */;
val* var530 /* : String */;
val* var531 /* : String */;
val* var532 /* : RuntimeVariable */;
static val* varonce533;
val* var534 /* : String */;
char* var535 /* : NativeString */;
val* var536 /* : FlatString */;
short int var537 /* : Bool */;
val* var539 /* : NativeArray[String] */;
static val* varonce538;
static val* varonce540;
val* var541 /* : String */;
char* var542 /* : NativeString */;
val* var543 /* : FlatString */;
val* var544 /* : nullable Object */;
val* var545 /* : String */;
val* var546 /* : String */;
val* var547 /* : RuntimeVariable */;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : NativeString */;
val* var551 /* : FlatString */;
short int var552 /* : Bool */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
val* var556 /* : FlatString */;
short int var557 /* : Bool */;
val* var559 /* : NativeArray[String] */;
static val* varonce558;
static val* varonce560;
val* var561 /* : String */;
char* var562 /* : NativeString */;
val* var563 /* : FlatString */;
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : NativeString */;
val* var567 /* : FlatString */;
val* var568 /* : nullable Object */;
val* var569 /* : String */;
val* var570 /* : String */;
static val* varonce571;
val* var572 /* : String */;
char* var573 /* : NativeString */;
val* var574 /* : FlatString */;
short int var575 /* : Bool */;
val* var577 /* : NativeArray[String] */;
static val* varonce576;
static val* varonce578;
val* var579 /* : String */;
char* var580 /* : NativeString */;
val* var581 /* : FlatString */;
val* var582 /* : nullable Object */;
val* var583 /* : String */;
val* var584 /* : String */;
val* var585 /* : RuntimeVariable */;
static val* varonce586;
val* var587 /* : String */;
char* var588 /* : NativeString */;
val* var589 /* : FlatString */;
short int var590 /* : Bool */;
val* var592 /* : NativeArray[String] */;
static val* varonce591;
static val* varonce593;
val* var594 /* : String */;
char* var595 /* : NativeString */;
val* var596 /* : FlatString */;
val* var597 /* : nullable Object */;
val* var598 /* : String */;
val* var599 /* : nullable Object */;
val* var600 /* : String */;
val* var601 /* : String */;
val* var602 /* : RuntimeVariable */;
static val* varonce603;
val* var604 /* : String */;
char* var605 /* : NativeString */;
val* var606 /* : FlatString */;
short int var607 /* : Bool */;
val* var609 /* : NativeArray[String] */;
static val* varonce608;
static val* varonce610;
val* var611 /* : String */;
char* var612 /* : NativeString */;
val* var613 /* : FlatString */;
val* var614 /* : nullable Object */;
val* var615 /* : String */;
val* var616 /* : nullable Object */;
val* var617 /* : String */;
val* var618 /* : String */;
val* var619 /* : RuntimeVariable */;
static val* varonce620;
val* var621 /* : String */;
char* var622 /* : NativeString */;
val* var623 /* : FlatString */;
short int var624 /* : Bool */;
val* var626 /* : NativeArray[String] */;
static val* varonce625;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
val* var630 /* : FlatString */;
val* var631 /* : nullable Object */;
val* var632 /* : String */;
val* var633 /* : String */;
val* var634 /* : RuntimeVariable */;
static val* varonce635;
val* var636 /* : String */;
char* var637 /* : NativeString */;
val* var638 /* : FlatString */;
short int var639 /* : Bool */;
val* var640 /* : nullable Object */;
static val* varonce641;
val* var642 /* : String */;
char* var643 /* : NativeString */;
val* var644 /* : FlatString */;
short int var645 /* : Bool */;
val* var647 /* : NativeArray[String] */;
static val* varonce646;
static val* varonce648;
val* var649 /* : String */;
char* var650 /* : NativeString */;
val* var651 /* : FlatString */;
val* var652 /* : nullable Object */;
val* var653 /* : String */;
val* var654 /* : nullable Object */;
val* var655 /* : String */;
val* var656 /* : String */;
val* var657 /* : RuntimeVariable */;
static val* varonce658;
val* var659 /* : String */;
char* var660 /* : NativeString */;
val* var661 /* : FlatString */;
short int var662 /* : Bool */;
val* var664 /* : NativeArray[String] */;
static val* varonce663;
static val* varonce665;
val* var666 /* : String */;
char* var667 /* : NativeString */;
val* var668 /* : FlatString */;
val* var669 /* : nullable Object */;
val* var670 /* : String */;
val* var671 /* : nullable Object */;
val* var672 /* : String */;
val* var673 /* : String */;
val* var674 /* : RuntimeVariable */;
static val* varonce675;
val* var676 /* : String */;
char* var677 /* : NativeString */;
val* var678 /* : FlatString */;
short int var679 /* : Bool */;
val* var681 /* : NativeArray[String] */;
static val* varonce680;
static val* varonce682;
val* var683 /* : String */;
char* var684 /* : NativeString */;
val* var685 /* : FlatString */;
val* var686 /* : nullable Object */;
val* var687 /* : String */;
val* var688 /* : nullable Object */;
val* var689 /* : String */;
val* var690 /* : String */;
val* var691 /* : RuntimeVariable */;
static val* varonce692;
val* var693 /* : String */;
char* var694 /* : NativeString */;
val* var695 /* : FlatString */;
short int var696 /* : Bool */;
val* var698 /* : NativeArray[String] */;
static val* varonce697;
static val* varonce699;
val* var700 /* : String */;
char* var701 /* : NativeString */;
val* var702 /* : FlatString */;
val* var703 /* : nullable Object */;
val* var704 /* : String */;
val* var705 /* : nullable Object */;
val* var706 /* : String */;
val* var707 /* : String */;
val* var708 /* : RuntimeVariable */;
static val* varonce709;
val* var710 /* : String */;
char* var711 /* : NativeString */;
val* var712 /* : FlatString */;
short int var713 /* : Bool */;
val* var715 /* : NativeArray[String] */;
static val* varonce714;
static val* varonce716;
val* var717 /* : String */;
char* var718 /* : NativeString */;
val* var719 /* : FlatString */;
val* var720 /* : nullable Object */;
val* var721 /* : String */;
val* var722 /* : nullable Object */;
val* var723 /* : String */;
val* var724 /* : String */;
val* var725 /* : RuntimeVariable */;
static val* varonce726;
val* var727 /* : String */;
char* var728 /* : NativeString */;
val* var729 /* : FlatString */;
short int var730 /* : Bool */;
val* var731 /* : nullable Object */;
val* var732 /* : nullable Object */;
val* var733 /* : RuntimeVariable */;
static val* varonce734;
val* var735 /* : String */;
char* var736 /* : NativeString */;
val* var737 /* : FlatString */;
short int var738 /* : Bool */;
val* var739 /* : nullable Object */;
val* var740 /* : nullable Object */;
val* var741 /* : RuntimeVariable */;
val* var_res742 /* var res: RuntimeVariable */;
val* var744 /* : NativeArray[String] */;
static val* varonce743;
static val* varonce745;
val* var746 /* : String */;
char* var747 /* : NativeString */;
val* var748 /* : FlatString */;
val* var749 /* : String */;
val* var750 /* : String */;
val* var751 /* : RuntimeVariable */;
static val* varonce752;
val* var753 /* : String */;
char* var754 /* : NativeString */;
val* var755 /* : FlatString */;
short int var756 /* : Bool */;
val* var758 /* : NativeArray[String] */;
static val* varonce757;
static val* varonce759;
val* var760 /* : String */;
char* var761 /* : NativeString */;
val* var762 /* : FlatString */;
val* var763 /* : nullable Object */;
val* var764 /* : String */;
val* var765 /* : nullable Object */;
val* var766 /* : String */;
val* var767 /* : String */;
val* var768 /* : RuntimeVariable */;
static val* varonce769;
val* var770 /* : String */;
char* var771 /* : NativeString */;
val* var772 /* : FlatString */;
short int var773 /* : Bool */;
val* var775 /* : NativeArray[String] */;
static val* varonce774;
static val* varonce776;
val* var777 /* : String */;
char* var778 /* : NativeString */;
val* var779 /* : FlatString */;
val* var780 /* : nullable Object */;
val* var781 /* : String */;
val* var782 /* : nullable Object */;
val* var783 /* : String */;
val* var784 /* : String */;
val* var785 /* : RuntimeVariable */;
static val* varonce786;
val* var787 /* : String */;
char* var788 /* : NativeString */;
val* var789 /* : FlatString */;
short int var790 /* : Bool */;
val* var792 /* : NativeArray[String] */;
static val* varonce791;
static val* varonce793;
val* var794 /* : String */;
char* var795 /* : NativeString */;
val* var796 /* : FlatString */;
val* var797 /* : nullable Object */;
val* var798 /* : String */;
val* var799 /* : nullable Object */;
val* var800 /* : String */;
val* var801 /* : String */;
val* var802 /* : RuntimeVariable */;
static val* varonce803;
val* var804 /* : String */;
char* var805 /* : NativeString */;
val* var806 /* : FlatString */;
short int var807 /* : Bool */;
val* var809 /* : NativeArray[String] */;
static val* varonce808;
static val* varonce810;
val* var811 /* : String */;
char* var812 /* : NativeString */;
val* var813 /* : FlatString */;
val* var814 /* : nullable Object */;
val* var815 /* : String */;
val* var816 /* : nullable Object */;
val* var817 /* : String */;
val* var818 /* : String */;
val* var819 /* : RuntimeVariable */;
static val* varonce820;
val* var821 /* : String */;
char* var822 /* : NativeString */;
val* var823 /* : FlatString */;
short int var824 /* : Bool */;
val* var826 /* : NativeArray[String] */;
static val* varonce825;
static val* varonce827;
val* var828 /* : String */;
char* var829 /* : NativeString */;
val* var830 /* : FlatString */;
val* var831 /* : nullable Object */;
val* var832 /* : String */;
val* var833 /* : String */;
val* var834 /* : RuntimeVariable */;
static val* varonce835;
val* var836 /* : String */;
char* var837 /* : NativeString */;
val* var838 /* : FlatString */;
short int var839 /* : Bool */;
val* var841 /* : NativeArray[String] */;
static val* varonce840;
static val* varonce842;
val* var843 /* : String */;
char* var844 /* : NativeString */;
val* var845 /* : FlatString */;
val* var846 /* : nullable Object */;
val* var847 /* : String */;
val* var848 /* : String */;
val* var849 /* : RuntimeVariable */;
static val* varonce850;
val* var851 /* : String */;
char* var852 /* : NativeString */;
val* var853 /* : FlatString */;
short int var854 /* : Bool */;
val* var856 /* : NativeArray[String] */;
static val* varonce855;
val* var857 /* : nullable Object */;
val* var858 /* : String */;
val* var859 /* : String */;
val* var860 /* : RuntimeVariable */;
static val* varonce861;
val* var862 /* : String */;
char* var863 /* : NativeString */;
val* var864 /* : FlatString */;
short int var865 /* : Bool */;
static val* varonce866;
val* var867 /* : String */;
char* var868 /* : NativeString */;
val* var869 /* : FlatString */;
short int var870 /* : Bool */;
val* var872 /* : NativeArray[String] */;
static val* varonce871;
static val* varonce873;
val* var874 /* : String */;
char* var875 /* : NativeString */;
val* var876 /* : FlatString */;
static val* varonce877;
val* var878 /* : String */;
char* var879 /* : NativeString */;
val* var880 /* : FlatString */;
val* var881 /* : nullable Object */;
val* var882 /* : String */;
val* var883 /* : String */;
static val* varonce884;
val* var885 /* : String */;
char* var886 /* : NativeString */;
val* var887 /* : FlatString */;
short int var888 /* : Bool */;
val* var890 /* : NativeArray[String] */;
static val* varonce889;
static val* varonce891;
val* var892 /* : String */;
char* var893 /* : NativeString */;
val* var894 /* : FlatString */;
val* var895 /* : nullable Object */;
val* var896 /* : String */;
val* var897 /* : String */;
val* var898 /* : RuntimeVariable */;
static val* varonce899;
val* var900 /* : String */;
char* var901 /* : NativeString */;
val* var902 /* : FlatString */;
short int var903 /* : Bool */;
val* var904 /* : nullable Object */;
val* var905 /* : nullable Object */;
val* var906 /* : RuntimeVariable */;
static val* varonce907;
val* var908 /* : String */;
char* var909 /* : NativeString */;
val* var910 /* : FlatString */;
short int var911 /* : Bool */;
val* var912 /* : nullable Object */;
val* var913 /* : nullable Object */;
val* var914 /* : RuntimeVariable */;
val* var_res915 /* var res: RuntimeVariable */;
val* var917 /* : NativeArray[String] */;
static val* varonce916;
static val* varonce918;
val* var919 /* : String */;
char* var920 /* : NativeString */;
val* var921 /* : FlatString */;
val* var922 /* : String */;
val* var923 /* : String */;
val* var924 /* : RuntimeVariable */;
static val* varonce925;
val* var926 /* : String */;
char* var927 /* : NativeString */;
val* var928 /* : FlatString */;
short int var929 /* : Bool */;
static val* varonce930;
val* var931 /* : String */;
char* var932 /* : NativeString */;
val* var933 /* : FlatString */;
short int var934 /* : Bool */;
val* var936 /* : NativeArray[String] */;
static val* varonce935;
static val* varonce937;
val* var938 /* : String */;
char* var939 /* : NativeString */;
val* var940 /* : FlatString */;
static val* varonce941;
val* var942 /* : String */;
char* var943 /* : NativeString */;
val* var944 /* : FlatString */;
val* var945 /* : nullable Object */;
val* var946 /* : String */;
val* var947 /* : String */;
static val* varonce948;
val* var949 /* : String */;
char* var950 /* : NativeString */;
val* var951 /* : FlatString */;
short int var952 /* : Bool */;
val* var954 /* : NativeArray[String] */;
static val* varonce953;
static val* varonce955;
val* var956 /* : String */;
char* var957 /* : NativeString */;
val* var958 /* : FlatString */;
val* var959 /* : nullable Object */;
val* var960 /* : String */;
val* var961 /* : String */;
val* var962 /* : RuntimeVariable */;
static val* varonce963;
val* var964 /* : String */;
char* var965 /* : NativeString */;
val* var966 /* : FlatString */;
short int var967 /* : Bool */;
val* var969 /* : NativeArray[String] */;
static val* varonce968;
static val* varonce970;
val* var971 /* : String */;
char* var972 /* : NativeString */;
val* var973 /* : FlatString */;
val* var974 /* : nullable Object */;
val* var975 /* : String */;
val* var976 /* : nullable Object */;
val* var977 /* : String */;
val* var978 /* : String */;
val* var979 /* : RuntimeVariable */;
static val* varonce980;
val* var981 /* : String */;
char* var982 /* : NativeString */;
val* var983 /* : FlatString */;
short int var984 /* : Bool */;
val* var986 /* : NativeArray[String] */;
static val* varonce985;
static val* varonce987;
val* var988 /* : String */;
char* var989 /* : NativeString */;
val* var990 /* : FlatString */;
val* var991 /* : nullable Object */;
val* var992 /* : String */;
val* var993 /* : nullable Object */;
val* var994 /* : String */;
val* var995 /* : String */;
val* var996 /* : RuntimeVariable */;
static val* varonce997;
val* var998 /* : String */;
char* var999 /* : NativeString */;
val* var1000 /* : FlatString */;
short int var1001 /* : Bool */;
val* var1003 /* : NativeArray[String] */;
static val* varonce1002;
static val* varonce1004;
val* var1005 /* : String */;
char* var1006 /* : NativeString */;
val* var1007 /* : FlatString */;
val* var1008 /* : nullable Object */;
val* var1009 /* : String */;
val* var1010 /* : String */;
val* var1011 /* : RuntimeVariable */;
static val* varonce1012;
val* var1013 /* : String */;
char* var1014 /* : NativeString */;
val* var1015 /* : FlatString */;
short int var1016 /* : Bool */;
val* var1017 /* : nullable Object */;
static val* varonce1018;
val* var1019 /* : String */;
char* var1020 /* : NativeString */;
val* var1021 /* : FlatString */;
short int var1022 /* : Bool */;
val* var1024 /* : NativeArray[String] */;
static val* varonce1023;
static val* varonce1025;
val* var1026 /* : String */;
char* var1027 /* : NativeString */;
val* var1028 /* : FlatString */;
val* var1029 /* : nullable Object */;
val* var1030 /* : String */;
val* var1031 /* : String */;
val* var1032 /* : RuntimeVariable */;
static val* varonce1033;
val* var1034 /* : String */;
char* var1035 /* : NativeString */;
val* var1036 /* : FlatString */;
short int var1037 /* : Bool */;
val* var1039 /* : NativeArray[String] */;
static val* varonce1038;
static val* varonce1040;
val* var1041 /* : String */;
char* var1042 /* : NativeString */;
val* var1043 /* : FlatString */;
val* var1044 /* : nullable Object */;
val* var1045 /* : String */;
val* var1046 /* : String */;
val* var1047 /* : RuntimeVariable */;
static val* varonce1048;
val* var1049 /* : String */;
char* var1050 /* : NativeString */;
val* var1051 /* : FlatString */;
short int var1052 /* : Bool */;
val* var1054 /* : NativeArray[String] */;
static val* varonce1053;
static val* varonce1055;
val* var1056 /* : String */;
char* var1057 /* : NativeString */;
val* var1058 /* : FlatString */;
val* var1059 /* : nullable Object */;
val* var1060 /* : String */;
val* var1061 /* : nullable Object */;
val* var1062 /* : String */;
val* var1063 /* : String */;
val* var1064 /* : RuntimeVariable */;
static val* varonce1065;
val* var1066 /* : String */;
char* var1067 /* : NativeString */;
val* var1068 /* : FlatString */;
short int var1069 /* : Bool */;
val* var1071 /* : NativeArray[String] */;
static val* varonce1070;
static val* varonce1072;
val* var1073 /* : String */;
char* var1074 /* : NativeString */;
val* var1075 /* : FlatString */;
val* var1076 /* : nullable Object */;
val* var1077 /* : String */;
val* var1078 /* : nullable Object */;
val* var1079 /* : String */;
val* var1080 /* : String */;
val* var1081 /* : RuntimeVariable */;
static val* varonce1082;
val* var1083 /* : String */;
char* var1084 /* : NativeString */;
val* var1085 /* : FlatString */;
short int var1086 /* : Bool */;
val* var1087 /* : nullable Object */;
val* var1088 /* : nullable Object */;
val* var1089 /* : RuntimeVariable */;
static val* varonce1090;
val* var1091 /* : String */;
char* var1092 /* : NativeString */;
val* var1093 /* : FlatString */;
short int var1094 /* : Bool */;
val* var1095 /* : nullable Object */;
val* var1096 /* : nullable Object */;
val* var1097 /* : RuntimeVariable */;
val* var_res1098 /* var res: RuntimeVariable */;
val* var1100 /* : NativeArray[String] */;
static val* varonce1099;
static val* varonce1101;
val* var1102 /* : String */;
char* var1103 /* : NativeString */;
val* var1104 /* : FlatString */;
val* var1105 /* : String */;
val* var1106 /* : String */;
val* var1107 /* : RuntimeVariable */;
static val* varonce1108;
val* var1109 /* : String */;
char* var1110 /* : NativeString */;
val* var1111 /* : FlatString */;
short int var1112 /* : Bool */;
val* var1114 /* : NativeArray[String] */;
static val* varonce1113;
static val* varonce1115;
val* var1116 /* : String */;
char* var1117 /* : NativeString */;
val* var1118 /* : FlatString */;
val* var1119 /* : nullable Object */;
val* var1120 /* : String */;
val* var1121 /* : nullable Object */;
val* var1122 /* : String */;
val* var1123 /* : String */;
val* var1124 /* : RuntimeVariable */;
static val* varonce1125;
val* var1126 /* : String */;
char* var1127 /* : NativeString */;
val* var1128 /* : FlatString */;
short int var1129 /* : Bool */;
val* var1131 /* : NativeArray[String] */;
static val* varonce1130;
static val* varonce1132;
val* var1133 /* : String */;
char* var1134 /* : NativeString */;
val* var1135 /* : FlatString */;
val* var1136 /* : nullable Object */;
val* var1137 /* : String */;
val* var1138 /* : nullable Object */;
val* var1139 /* : String */;
val* var1140 /* : String */;
val* var1141 /* : RuntimeVariable */;
static val* varonce1142;
val* var1143 /* : String */;
char* var1144 /* : NativeString */;
val* var1145 /* : FlatString */;
short int var1146 /* : Bool */;
val* var1148 /* : NativeArray[String] */;
static val* varonce1147;
static val* varonce1149;
val* var1150 /* : String */;
char* var1151 /* : NativeString */;
val* var1152 /* : FlatString */;
val* var1153 /* : nullable Object */;
val* var1154 /* : String */;
val* var1155 /* : nullable Object */;
val* var1156 /* : String */;
val* var1157 /* : String */;
val* var1158 /* : RuntimeVariable */;
static val* varonce1159;
val* var1160 /* : String */;
char* var1161 /* : NativeString */;
val* var1162 /* : FlatString */;
short int var1163 /* : Bool */;
val* var1165 /* : NativeArray[String] */;
static val* varonce1164;
static val* varonce1166;
val* var1167 /* : String */;
char* var1168 /* : NativeString */;
val* var1169 /* : FlatString */;
val* var1170 /* : nullable Object */;
val* var1171 /* : String */;
val* var1172 /* : nullable Object */;
val* var1173 /* : String */;
val* var1174 /* : String */;
val* var1175 /* : RuntimeVariable */;
static val* varonce1176;
val* var1177 /* : String */;
char* var1178 /* : NativeString */;
val* var1179 /* : FlatString */;
short int var1180 /* : Bool */;
val* var1182 /* : NativeArray[String] */;
static val* varonce1181;
static val* varonce1183;
val* var1184 /* : String */;
char* var1185 /* : NativeString */;
val* var1186 /* : FlatString */;
val* var1187 /* : nullable Object */;
val* var1188 /* : String */;
val* var1189 /* : String */;
val* var1190 /* : RuntimeVariable */;
static val* varonce1191;
val* var1192 /* : String */;
char* var1193 /* : NativeString */;
val* var1194 /* : FlatString */;
short int var1195 /* : Bool */;
val* var1197 /* : NativeArray[String] */;
static val* varonce1196;
static val* varonce1198;
val* var1199 /* : String */;
char* var1200 /* : NativeString */;
val* var1201 /* : FlatString */;
val* var1202 /* : nullable Object */;
val* var1203 /* : String */;
val* var1204 /* : String */;
val* var1205 /* : RuntimeVariable */;
static val* varonce1206;
val* var1207 /* : String */;
char* var1208 /* : NativeString */;
val* var1209 /* : FlatString */;
short int var1210 /* : Bool */;
static val* varonce1211;
val* var1212 /* : String */;
char* var1213 /* : NativeString */;
val* var1214 /* : FlatString */;
short int var1215 /* : Bool */;
val* var1217 /* : NativeArray[String] */;
static val* varonce1216;
static val* varonce1218;
val* var1219 /* : String */;
char* var1220 /* : NativeString */;
val* var1221 /* : FlatString */;
static val* varonce1222;
val* var1223 /* : String */;
char* var1224 /* : NativeString */;
val* var1225 /* : FlatString */;
static val* varonce1226;
val* var1227 /* : String */;
char* var1228 /* : NativeString */;
val* var1229 /* : FlatString */;
val* var1230 /* : nullable Object */;
val* var1231 /* : String */;
val* var1232 /* : nullable Object */;
val* var1233 /* : String */;
val* var1234 /* : String */;
val* var1235 /* : RuntimeVariable */;
static val* varonce1236;
val* var1237 /* : String */;
char* var1238 /* : NativeString */;
val* var1239 /* : FlatString */;
short int var1240 /* : Bool */;
val* var1242 /* : NativeArray[String] */;
static val* varonce1241;
static val* varonce1243;
val* var1244 /* : String */;
char* var1245 /* : NativeString */;
val* var1246 /* : FlatString */;
static val* varonce1247;
val* var1248 /* : String */;
char* var1249 /* : NativeString */;
val* var1250 /* : FlatString */;
static val* varonce1251;
val* var1252 /* : String */;
char* var1253 /* : NativeString */;
val* var1254 /* : FlatString */;
val* var1255 /* : nullable Object */;
val* var1256 /* : String */;
val* var1257 /* : nullable Object */;
val* var1258 /* : String */;
val* var1259 /* : nullable Object */;
val* var1260 /* : String */;
val* var1261 /* : String */;
static val* varonce1262;
val* var1263 /* : String */;
char* var1264 /* : NativeString */;
val* var1265 /* : FlatString */;
short int var1266 /* : Bool */;
val* var1268 /* : NativeArray[String] */;
static val* varonce1267;
static val* varonce1269;
val* var1270 /* : String */;
char* var1271 /* : NativeString */;
val* var1272 /* : FlatString */;
static val* varonce1273;
val* var1274 /* : String */;
char* var1275 /* : NativeString */;
val* var1276 /* : FlatString */;
static val* varonce1277;
val* var1278 /* : String */;
char* var1279 /* : NativeString */;
val* var1280 /* : FlatString */;
static val* varonce1281;
val* var1282 /* : String */;
char* var1283 /* : NativeString */;
val* var1284 /* : FlatString */;
static val* varonce1285;
val* var1286 /* : String */;
char* var1287 /* : NativeString */;
val* var1288 /* : FlatString */;
static val* varonce1289;
val* var1290 /* : String */;
char* var1291 /* : NativeString */;
val* var1292 /* : FlatString */;
val* var1293 /* : nullable Object */;
val* var1294 /* : String */;
val* var1295 /* : nullable Object */;
val* var1296 /* : String */;
val* var1297 /* : nullable Object */;
val* var1298 /* : String */;
val* var1299 /* : nullable Object */;
val* var1300 /* : String */;
val* var1301 /* : nullable Object */;
val* var1302 /* : String */;
val* var1303 /* : String */;
static val* varonce1304;
val* var1305 /* : String */;
char* var1306 /* : NativeString */;
val* var1307 /* : FlatString */;
short int var1308 /* : Bool */;
val* var1310 /* : NativeArray[String] */;
static val* varonce1309;
static val* varonce1311;
val* var1312 /* : String */;
char* var1313 /* : NativeString */;
val* var1314 /* : FlatString */;
static val* varonce1315;
val* var1316 /* : String */;
char* var1317 /* : NativeString */;
val* var1318 /* : FlatString */;
val* var1319 /* : nullable Object */;
val* var1320 /* : String */;
val* var1321 /* : String */;
val* var1322 /* : RuntimeVariable */;
static val* varonce1323;
val* var1324 /* : String */;
char* var1325 /* : NativeString */;
val* var1326 /* : FlatString */;
short int var1327 /* : Bool */;
val* var1329 /* : NativeArray[String] */;
static val* varonce1328;
static val* varonce1330;
val* var1331 /* : String */;
char* var1332 /* : NativeString */;
val* var1333 /* : FlatString */;
val* var1334 /* : nullable Object */;
val* var1335 /* : String */;
val* var1336 /* : nullable Object */;
val* var1337 /* : String */;
val* var1338 /* : String */;
val* var1339 /* : RuntimeVariable */;
static val* varonce1340;
val* var1341 /* : String */;
char* var1342 /* : NativeString */;
val* var1343 /* : FlatString */;
short int var1344 /* : Bool */;
val* var1346 /* : NativeArray[String] */;
static val* varonce1345;
static val* varonce1347;
val* var1348 /* : String */;
char* var1349 /* : NativeString */;
val* var1350 /* : FlatString */;
static val* varonce1351;
val* var1352 /* : String */;
char* var1353 /* : NativeString */;
val* var1354 /* : FlatString */;
val* var1355 /* : nullable Object */;
val* var1356 /* : String */;
val* var1357 /* : String */;
val* var1358 /* : RuntimeVariable */;
static val* varonce1359;
val* var1360 /* : String */;
char* var1361 /* : NativeString */;
val* var1362 /* : FlatString */;
short int var1363 /* : Bool */;
static val* varonce1364;
val* var1365 /* : String */;
char* var1366 /* : NativeString */;
val* var1367 /* : FlatString */;
short int var1368 /* : Bool */;
val* var1370 /* : NativeArray[String] */;
static val* varonce1369;
static val* varonce1371;
val* var1372 /* : String */;
char* var1373 /* : NativeString */;
val* var1374 /* : FlatString */;
static val* varonce1375;
val* var1376 /* : String */;
char* var1377 /* : NativeString */;
val* var1378 /* : FlatString */;
val* var1379 /* : nullable Object */;
val* var1380 /* : String */;
val* var1381 /* : String */;
static val* varonce1382;
val* var1383 /* : String */;
char* var1384 /* : NativeString */;
val* var1385 /* : FlatString */;
short int var1386 /* : Bool */;
static val* varonce1387;
val* var1388 /* : String */;
char* var1389 /* : NativeString */;
val* var1390 /* : FlatString */;
val* var1391 /* : RuntimeVariable */;
static val* varonce1392;
val* var1393 /* : String */;
char* var1394 /* : NativeString */;
val* var1395 /* : FlatString */;
short int var1396 /* : Bool */;
val* var1398 /* : NativeArray[String] */;
static val* varonce1397;
static val* varonce1399;
val* var1400 /* : String */;
char* var1401 /* : NativeString */;
val* var1402 /* : FlatString */;
static val* varonce1403;
val* var1404 /* : String */;
char* var1405 /* : NativeString */;
val* var1406 /* : FlatString */;
val* var1407 /* : nullable Object */;
val* var1408 /* : String */;
val* var1409 /* : String */;
val* var1410 /* : RuntimeVariable */;
static val* varonce1411;
val* var1412 /* : String */;
char* var1413 /* : NativeString */;
val* var1414 /* : FlatString */;
short int var1415 /* : Bool */;
static val* varonce1416;
val* var1417 /* : String */;
char* var1418 /* : NativeString */;
val* var1419 /* : FlatString */;
short int var1420 /* : Bool */;
val* var1422 /* : NativeArray[String] */;
static val* varonce1421;
static val* varonce1423;
val* var1424 /* : String */;
char* var1425 /* : NativeString */;
val* var1426 /* : FlatString */;
val* var1427 /* : nullable Object */;
val* var1428 /* : String */;
val* var1429 /* : String */;
val* var1430 /* : RuntimeVariable */;
static val* varonce1431;
val* var1432 /* : String */;
char* var1433 /* : NativeString */;
val* var1434 /* : FlatString */;
short int var1435 /* : Bool */;
val* var1436 /* : nullable Object */;
val* var1437 /* : nullable Object */;
val* var1438 /* : RuntimeVariable */;
static val* varonce1439;
val* var1440 /* : String */;
char* var1441 /* : NativeString */;
val* var1442 /* : FlatString */;
short int var1443 /* : Bool */;
val* var1444 /* : nullable Object */;
val* var1445 /* : nullable Object */;
val* var1446 /* : RuntimeVariable */;
static val* varonce1447;
val* var1448 /* : String */;
char* var1449 /* : NativeString */;
val* var1450 /* : FlatString */;
short int var1451 /* : Bool */;
val* var1452 /* : nullable Object */;
val* var1453 /* : String */;
val* var_nat /* var nat: String */;
val* var1455 /* : NativeArray[String] */;
static val* varonce1454;
static val* varonce1456;
val* var1457 /* : String */;
char* var1458 /* : NativeString */;
val* var1459 /* : FlatString */;
static val* varonce1460;
val* var1461 /* : String */;
char* var1462 /* : NativeString */;
val* var1463 /* : FlatString */;
val* var1464 /* : String */;
static val* varonce1465;
val* var1466 /* : String */;
char* var1467 /* : NativeString */;
val* var1468 /* : FlatString */;
short int var1469 /* : Bool */;
val* var1470 /* : nullable Object */;
val* var1471 /* : String */;
val* var_nat1472 /* var nat: String */;
val* var1474 /* : NativeArray[String] */;
static val* varonce1473;
static val* varonce1475;
val* var1476 /* : String */;
char* var1477 /* : NativeString */;
val* var1478 /* : FlatString */;
val* var1479 /* : String */;
val* var1480 /* : RuntimeVariable */;
static val* varonce1481;
val* var1482 /* : String */;
char* var1483 /* : NativeString */;
val* var1484 /* : FlatString */;
short int var1485 /* : Bool */;
static val* varonce1486;
val* var1487 /* : String */;
char* var1488 /* : NativeString */;
val* var1489 /* : FlatString */;
static val* varonce1490;
val* var1491 /* : String */;
char* var1492 /* : NativeString */;
val* var1493 /* : FlatString */;
short int var1494 /* : Bool */;
static val* varonce1495;
val* var1496 /* : String */;
char* var1497 /* : NativeString */;
val* var1498 /* : FlatString */;
val* var1499 /* : RuntimeVariable */;
static val* varonce1500;
val* var1501 /* : String */;
char* var1502 /* : NativeString */;
val* var1503 /* : FlatString */;
short int var1504 /* : Bool */;
val* var1506 /* : NativeArray[String] */;
static val* varonce1505;
static val* varonce1507;
val* var1508 /* : String */;
char* var1509 /* : NativeString */;
val* var1510 /* : FlatString */;
static val* varonce1511;
val* var1512 /* : String */;
char* var1513 /* : NativeString */;
val* var1514 /* : FlatString */;
val* var1515 /* : nullable Object */;
val* var1516 /* : String */;
val* var1517 /* : String */;
val* var1518 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var3 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var1) on <var1:MProperty(MMethod)> */
var6 = var1->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var1:MProperty(MMethod)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_pname = var4;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var9 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#name (var10) on <var10:MClass> */
var15 = var10->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var10:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_cname = var13;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var18 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2079);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var16) on <var16:nullable MSignature> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
fatal_exit(1);
}
var21 = var16->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var16:nullable MSignature> */
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
var25 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
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
var27 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var28 = nit___nit__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var27);
}
var_ret = var28;
} else {
}
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "==";
var32 = standard___standard__NativeString___to_s_with_length(var31, 2l);
var30 = var32;
varonce = var30;
}
{
{ /* Inline kernel#Object#!= (var_pname,var30) on <var_pname:String> */
var_other = var30;
{
var35 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var_other); /* == on <var_pname:String>*/
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
var40 = standard___standard__NativeString___to_s_with_length(var39, 2l);
var38 = var40;
varonce37 = var38;
}
{
{ /* Inline kernel#Object#!= (var_pname,var38) on <var_pname:String> */
var_other = var38;
{
var43 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var_other); /* == on <var_pname:String>*/
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
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "Int";
var48 = standard___standard__NativeString___to_s_with_length(var47, 3l);
var46 = var48;
varonce45 = var46;
}
{
var49 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var46); /* == on <var_cname:String>*/
}
if (var49){
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "output";
var53 = standard___standard__NativeString___to_s_with_length(var52, 6l);
var51 = var53;
varonce50 = var51;
}
{
var54 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var51); /* == on <var_pname:String>*/
}
if (var54){
if (unlikely(varonce55==NULL)) {
var56 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "printf(\"%ld\\n\", ";
var60 = standard___standard__NativeString___to_s_with_length(var59, 16l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var56)->values[0]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = ");";
var64 = standard___standard__NativeString___to_s_with_length(var63, 2l);
var62 = var64;
varonce61 = var62;
}
((struct instance_standard__NativeArray*)var56)->values[2]=var62;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
var65 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var66 = ((val*(*)(val* self))(var65->class->vft[COLOR_standard__string__Object__to_s]))(var65); /* to_s on <var65:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var56)->values[1]=var66;
{
var67 = ((val*(*)(val* self))(var56->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "object_id";
var71 = standard___standard__NativeString___to_s_with_length(var70, 9l);
var69 = var71;
varonce68 = var69;
}
{
var72 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var69); /* == on <var_pname:String>*/
}
if (var72){
{
var73 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "+";
var77 = standard___standard__NativeString___to_s_with_length(var76, 1l);
var75 = var77;
varonce74 = var75;
}
{
var78 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var75); /* == on <var_pname:String>*/
}
if (var78){
if (unlikely(varonce79==NULL)) {
var80 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " + ";
var84 = standard___standard__NativeString___to_s_with_length(var83, 3l);
var82 = var84;
varonce81 = var82;
}
((struct instance_standard__NativeArray*)var80)->values[1]=var82;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
var85 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var86 = ((val*(*)(val* self))(var85->class->vft[COLOR_standard__string__Object__to_s]))(var85); /* to_s on <var85:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var80)->values[0]=var86;
{
var87 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var88 = ((val*(*)(val* self))(var87->class->vft[COLOR_standard__string__Object__to_s]))(var87); /* to_s on <var87:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var80)->values[2]=var88;
{
var89 = ((val*(*)(val* self))(var80->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2095);
fatal_exit(1);
}
{
var90 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var89, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "-";
var94 = standard___standard__NativeString___to_s_with_length(var93, 1l);
var92 = var94;
varonce91 = var92;
}
{
var95 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var92); /* == on <var_pname:String>*/
}
if (var95){
if (unlikely(varonce96==NULL)) {
var97 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = " - ";
var101 = standard___standard__NativeString___to_s_with_length(var100, 3l);
var99 = var101;
varonce98 = var99;
}
((struct instance_standard__NativeArray*)var97)->values[1]=var99;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var102 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var103 = ((val*(*)(val* self))(var102->class->vft[COLOR_standard__string__Object__to_s]))(var102); /* to_s on <var102:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var97)->values[0]=var103;
{
var104 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var105 = ((val*(*)(val* self))(var104->class->vft[COLOR_standard__string__Object__to_s]))(var104); /* to_s on <var104:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var97)->values[2]=var105;
{
var106 = ((val*(*)(val* self))(var97->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2098);
fatal_exit(1);
}
{
var107 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var106, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var107); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "unary -";
var111 = standard___standard__NativeString___to_s_with_length(var110, 7l);
var109 = var111;
varonce108 = var109;
}
{
var112 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var109); /* == on <var_pname:String>*/
}
if (var112){
if (unlikely(varonce113==NULL)) {
var114 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "-";
var118 = standard___standard__NativeString___to_s_with_length(var117, 1l);
var116 = var118;
varonce115 = var116;
}
((struct instance_standard__NativeArray*)var114)->values[0]=var116;
} else {
var114 = varonce113;
varonce113 = NULL;
}
{
var119 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var120 = ((val*(*)(val* self))(var119->class->vft[COLOR_standard__string__Object__to_s]))(var119); /* to_s on <var119:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var114)->values[1]=var120;
{
var121 = ((val*(*)(val* self))(var114->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var114); /* native_to_s on <var114:NativeArray[String]>*/
}
varonce113 = var114;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2101);
fatal_exit(1);
}
{
var122 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var121, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var122); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "unary +";
var126 = standard___standard__NativeString___to_s_with_length(var125, 7l);
var124 = var126;
varonce123 = var124;
}
{
var127 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var124); /* == on <var_pname:String>*/
}
if (var127){
{
var128 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var128); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "*";
var132 = standard___standard__NativeString___to_s_with_length(var131, 1l);
var130 = var132;
varonce129 = var130;
}
{
var133 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var130); /* == on <var_pname:String>*/
}
if (var133){
if (unlikely(varonce134==NULL)) {
var135 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = " * ";
var139 = standard___standard__NativeString___to_s_with_length(var138, 3l);
var137 = var139;
varonce136 = var137;
}
((struct instance_standard__NativeArray*)var135)->values[1]=var137;
} else {
var135 = varonce134;
varonce134 = NULL;
}
{
var140 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var141 = ((val*(*)(val* self))(var140->class->vft[COLOR_standard__string__Object__to_s]))(var140); /* to_s on <var140:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var135)->values[0]=var141;
{
var142 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var143 = ((val*(*)(val* self))(var142->class->vft[COLOR_standard__string__Object__to_s]))(var142); /* to_s on <var142:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var135)->values[2]=var143;
{
var144 = ((val*(*)(val* self))(var135->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var135); /* native_to_s on <var135:NativeArray[String]>*/
}
varonce134 = var135;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2107);
fatal_exit(1);
}
{
var145 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var144, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var145); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "/";
var149 = standard___standard__NativeString___to_s_with_length(var148, 1l);
var147 = var149;
varonce146 = var147;
}
{
var150 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var147); /* == on <var_pname:String>*/
}
if (var150){
if (unlikely(varonce151==NULL)) {
var152 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = " / ";
var156 = standard___standard__NativeString___to_s_with_length(var155, 3l);
var154 = var156;
varonce153 = var154;
}
((struct instance_standard__NativeArray*)var152)->values[1]=var154;
} else {
var152 = varonce151;
varonce151 = NULL;
}
{
var157 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var158 = ((val*(*)(val* self))(var157->class->vft[COLOR_standard__string__Object__to_s]))(var157); /* to_s on <var157:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var152)->values[0]=var158;
{
var159 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var160 = ((val*(*)(val* self))(var159->class->vft[COLOR_standard__string__Object__to_s]))(var159); /* to_s on <var159:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var152)->values[2]=var160;
{
var161 = ((val*(*)(val* self))(var152->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2110);
fatal_exit(1);
}
{
var162 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var161, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var162); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "%";
var166 = standard___standard__NativeString___to_s_with_length(var165, 1l);
var164 = var166;
varonce163 = var164;
}
{
var167 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var164); /* == on <var_pname:String>*/
}
if (var167){
if (unlikely(varonce168==NULL)) {
var169 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = " % ";
var173 = standard___standard__NativeString___to_s_with_length(var172, 3l);
var171 = var173;
varonce170 = var171;
}
((struct instance_standard__NativeArray*)var169)->values[1]=var171;
} else {
var169 = varonce168;
varonce168 = NULL;
}
{
var174 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var175 = ((val*(*)(val* self))(var174->class->vft[COLOR_standard__string__Object__to_s]))(var174); /* to_s on <var174:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var169)->values[0]=var175;
{
var176 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var177 = ((val*(*)(val* self))(var176->class->vft[COLOR_standard__string__Object__to_s]))(var176); /* to_s on <var176:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var169)->values[2]=var177;
{
var178 = ((val*(*)(val* self))(var169->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var169); /* native_to_s on <var169:NativeArray[String]>*/
}
varonce168 = var169;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2113);
fatal_exit(1);
}
{
var179 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var178, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var179); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "lshift";
var183 = standard___standard__NativeString___to_s_with_length(var182, 6l);
var181 = var183;
varonce180 = var181;
}
{
var184 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var181); /* == on <var_pname:String>*/
}
if (var184){
if (unlikely(varonce185==NULL)) {
var186 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = " << ";
var190 = standard___standard__NativeString___to_s_with_length(var189, 4l);
var188 = var190;
varonce187 = var188;
}
((struct instance_standard__NativeArray*)var186)->values[1]=var188;
} else {
var186 = varonce185;
varonce185 = NULL;
}
{
var191 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var192 = ((val*(*)(val* self))(var191->class->vft[COLOR_standard__string__Object__to_s]))(var191); /* to_s on <var191:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var186)->values[0]=var192;
{
var193 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var194 = ((val*(*)(val* self))(var193->class->vft[COLOR_standard__string__Object__to_s]))(var193); /* to_s on <var193:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var186)->values[2]=var194;
{
var195 = ((val*(*)(val* self))(var186->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var186); /* native_to_s on <var186:NativeArray[String]>*/
}
varonce185 = var186;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2116);
fatal_exit(1);
}
{
var196 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var195, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var196); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "rshift";
var200 = standard___standard__NativeString___to_s_with_length(var199, 6l);
var198 = var200;
varonce197 = var198;
}
{
var201 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var198); /* == on <var_pname:String>*/
}
if (var201){
if (unlikely(varonce202==NULL)) {
var203 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = " >> ";
var207 = standard___standard__NativeString___to_s_with_length(var206, 4l);
var205 = var207;
varonce204 = var205;
}
((struct instance_standard__NativeArray*)var203)->values[1]=var205;
} else {
var203 = varonce202;
varonce202 = NULL;
}
{
var208 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var209 = ((val*(*)(val* self))(var208->class->vft[COLOR_standard__string__Object__to_s]))(var208); /* to_s on <var208:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var203)->values[0]=var209;
{
var210 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var211 = ((val*(*)(val* self))(var210->class->vft[COLOR_standard__string__Object__to_s]))(var210); /* to_s on <var210:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var203)->values[2]=var211;
{
var212 = ((val*(*)(val* self))(var203->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var203); /* native_to_s on <var203:NativeArray[String]>*/
}
varonce202 = var203;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2119);
fatal_exit(1);
}
{
var213 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var212, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var213); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = "==";
var217 = standard___standard__NativeString___to_s_with_length(var216, 2l);
var215 = var217;
varonce214 = var215;
}
{
var218 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var215); /* == on <var_pname:String>*/
}
if (var218){
{
var219 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var220 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var221 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var219, var220);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var221); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = "!=";
var225 = standard___standard__NativeString___to_s_with_length(var224, 2l);
var223 = var225;
varonce222 = var223;
}
{
var226 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var223); /* == on <var_pname:String>*/
}
if (var226){
{
var227 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var228 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var229 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var227, var228);
}
var_res = var229;
if (unlikely(varonce230==NULL)) {
var231 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce232!=NULL)) {
var233 = varonce232;
} else {
var234 = "!";
var235 = standard___standard__NativeString___to_s_with_length(var234, 1l);
var233 = var235;
varonce232 = var233;
}
((struct instance_standard__NativeArray*)var231)->values[0]=var233;
} else {
var231 = varonce230;
varonce230 = NULL;
}
{
var236 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var231)->values[1]=var236;
{
var237 = ((val*(*)(val* self))(var231->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var231); /* native_to_s on <var231:NativeArray[String]>*/
}
varonce230 = var231;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2126);
fatal_exit(1);
}
{
var238 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var237, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var238); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce239!=NULL)) {
var240 = varonce239;
} else {
var241 = "<";
var242 = standard___standard__NativeString___to_s_with_length(var241, 1l);
var240 = var242;
varonce239 = var240;
}
{
var243 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var240); /* == on <var_pname:String>*/
}
if (var243){
if (unlikely(varonce244==NULL)) {
var245 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce246!=NULL)) {
var247 = varonce246;
} else {
var248 = " < ";
var249 = standard___standard__NativeString___to_s_with_length(var248, 3l);
var247 = var249;
varonce246 = var247;
}
((struct instance_standard__NativeArray*)var245)->values[1]=var247;
} else {
var245 = varonce244;
varonce244 = NULL;
}
{
var250 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var251 = ((val*(*)(val* self))(var250->class->vft[COLOR_standard__string__Object__to_s]))(var250); /* to_s on <var250:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var245)->values[0]=var251;
{
var252 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var253 = ((val*(*)(val* self))(var252->class->vft[COLOR_standard__string__Object__to_s]))(var252); /* to_s on <var252:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var245)->values[2]=var253;
{
var254 = ((val*(*)(val* self))(var245->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var245); /* native_to_s on <var245:NativeArray[String]>*/
}
varonce244 = var245;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2129);
fatal_exit(1);
}
{
var255 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var254, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var255); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = ">";
var259 = standard___standard__NativeString___to_s_with_length(var258, 1l);
var257 = var259;
varonce256 = var257;
}
{
var260 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var257); /* == on <var_pname:String>*/
}
if (var260){
if (unlikely(varonce261==NULL)) {
var262 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = " > ";
var266 = standard___standard__NativeString___to_s_with_length(var265, 3l);
var264 = var266;
varonce263 = var264;
}
((struct instance_standard__NativeArray*)var262)->values[1]=var264;
} else {
var262 = varonce261;
varonce261 = NULL;
}
{
var267 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var268 = ((val*(*)(val* self))(var267->class->vft[COLOR_standard__string__Object__to_s]))(var267); /* to_s on <var267:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var262)->values[0]=var268;
{
var269 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var270 = ((val*(*)(val* self))(var269->class->vft[COLOR_standard__string__Object__to_s]))(var269); /* to_s on <var269:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var262)->values[2]=var270;
{
var271 = ((val*(*)(val* self))(var262->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var262); /* native_to_s on <var262:NativeArray[String]>*/
}
varonce261 = var262;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2132);
fatal_exit(1);
}
{
var272 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var271, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var272); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "<=";
var276 = standard___standard__NativeString___to_s_with_length(var275, 2l);
var274 = var276;
varonce273 = var274;
}
{
var277 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var274); /* == on <var_pname:String>*/
}
if (var277){
if (unlikely(varonce278==NULL)) {
var279 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce280!=NULL)) {
var281 = varonce280;
} else {
var282 = " <= ";
var283 = standard___standard__NativeString___to_s_with_length(var282, 4l);
var281 = var283;
varonce280 = var281;
}
((struct instance_standard__NativeArray*)var279)->values[1]=var281;
} else {
var279 = varonce278;
varonce278 = NULL;
}
{
var284 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var285 = ((val*(*)(val* self))(var284->class->vft[COLOR_standard__string__Object__to_s]))(var284); /* to_s on <var284:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var279)->values[0]=var285;
{
var286 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var287 = ((val*(*)(val* self))(var286->class->vft[COLOR_standard__string__Object__to_s]))(var286); /* to_s on <var286:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var279)->values[2]=var287;
{
var288 = ((val*(*)(val* self))(var279->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var279); /* native_to_s on <var279:NativeArray[String]>*/
}
varonce278 = var279;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2135);
fatal_exit(1);
}
{
var289 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var288, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var289); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = ">=";
var293 = standard___standard__NativeString___to_s_with_length(var292, 2l);
var291 = var293;
varonce290 = var291;
}
{
var294 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var291); /* == on <var_pname:String>*/
}
if (var294){
if (unlikely(varonce295==NULL)) {
var296 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = " >= ";
var300 = standard___standard__NativeString___to_s_with_length(var299, 4l);
var298 = var300;
varonce297 = var298;
}
((struct instance_standard__NativeArray*)var296)->values[1]=var298;
} else {
var296 = varonce295;
varonce295 = NULL;
}
{
var301 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var302 = ((val*(*)(val* self))(var301->class->vft[COLOR_standard__string__Object__to_s]))(var301); /* to_s on <var301:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var296)->values[0]=var302;
{
var303 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var304 = ((val*(*)(val* self))(var303->class->vft[COLOR_standard__string__Object__to_s]))(var303); /* to_s on <var303:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var296)->values[2]=var304;
{
var305 = ((val*(*)(val* self))(var296->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var296); /* native_to_s on <var296:NativeArray[String]>*/
}
varonce295 = var296;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2138);
fatal_exit(1);
}
{
var306 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var305, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var306); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce307!=NULL)) {
var308 = varonce307;
} else {
var309 = "to_f";
var310 = standard___standard__NativeString___to_s_with_length(var309, 4l);
var308 = var310;
varonce307 = var308;
}
{
var311 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var308); /* == on <var_pname:String>*/
}
if (var311){
if (unlikely(varonce312==NULL)) {
var313 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce314!=NULL)) {
var315 = varonce314;
} else {
var316 = "(double)";
var317 = standard___standard__NativeString___to_s_with_length(var316, 8l);
var315 = var317;
varonce314 = var315;
}
((struct instance_standard__NativeArray*)var313)->values[0]=var315;
} else {
var313 = varonce312;
varonce312 = NULL;
}
{
var318 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var319 = ((val*(*)(val* self))(var318->class->vft[COLOR_standard__string__Object__to_s]))(var318); /* to_s on <var318:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var313)->values[1]=var319;
{
var320 = ((val*(*)(val* self))(var313->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var313); /* native_to_s on <var313:NativeArray[String]>*/
}
varonce312 = var313;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2141);
fatal_exit(1);
}
{
var321 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var320, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var321); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "to_b";
var325 = standard___standard__NativeString___to_s_with_length(var324, 4l);
var323 = var325;
varonce322 = var323;
}
{
var326 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var323); /* == on <var_pname:String>*/
}
if (var326){
if (unlikely(varonce327==NULL)) {
var328 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = "(unsigned char)";
var332 = standard___standard__NativeString___to_s_with_length(var331, 15l);
var330 = var332;
varonce329 = var330;
}
((struct instance_standard__NativeArray*)var328)->values[0]=var330;
} else {
var328 = varonce327;
varonce327 = NULL;
}
{
var333 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var334 = ((val*(*)(val* self))(var333->class->vft[COLOR_standard__string__Object__to_s]))(var333); /* to_s on <var333:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var328)->values[1]=var334;
{
var335 = ((val*(*)(val* self))(var328->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var328); /* native_to_s on <var328:NativeArray[String]>*/
}
varonce327 = var328;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2144);
fatal_exit(1);
}
{
var336 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var335, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var336); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "ascii";
var340 = standard___standard__NativeString___to_s_with_length(var339, 5l);
var338 = var340;
varonce337 = var338;
}
{
var341 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var338); /* == on <var_pname:String>*/
}
if (var341){
if (unlikely(varonce342==NULL)) {
var343 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce344!=NULL)) {
var345 = varonce344;
} else {
var346 = "(uint32_t)";
var347 = standard___standard__NativeString___to_s_with_length(var346, 10l);
var345 = var347;
varonce344 = var345;
}
((struct instance_standard__NativeArray*)var343)->values[0]=var345;
} else {
var343 = varonce342;
varonce342 = NULL;
}
{
var348 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var349 = ((val*(*)(val* self))(var348->class->vft[COLOR_standard__string__Object__to_s]))(var348); /* to_s on <var348:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var343)->values[1]=var349;
{
var350 = ((val*(*)(val* self))(var343->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var343); /* native_to_s on <var343:NativeArray[String]>*/
}
varonce342 = var343;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2147);
fatal_exit(1);
}
{
var351 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var350, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var351); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
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
} else {
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = "Char";
var355 = standard___standard__NativeString___to_s_with_length(var354, 4l);
var353 = var355;
varonce352 = var353;
}
{
var356 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var353); /* == on <var_cname:String>*/
}
if (var356){
if (likely(varonce357!=NULL)) {
var358 = varonce357;
} else {
var359 = "output";
var360 = standard___standard__NativeString___to_s_with_length(var359, 6l);
var358 = var360;
varonce357 = var358;
}
{
var361 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var358); /* == on <var_pname:String>*/
}
if (var361){
if (unlikely(varonce362==NULL)) {
var363 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce364!=NULL)) {
var365 = varonce364;
} else {
var366 = "printf(\"%c\", ((unsigned char)";
var367 = standard___standard__NativeString___to_s_with_length(var366, 29l);
var365 = var367;
varonce364 = var365;
}
((struct instance_standard__NativeArray*)var363)->values[0]=var365;
if (likely(varonce368!=NULL)) {
var369 = varonce368;
} else {
var370 = "));";
var371 = standard___standard__NativeString___to_s_with_length(var370, 3l);
var369 = var371;
varonce368 = var369;
}
((struct instance_standard__NativeArray*)var363)->values[2]=var369;
} else {
var363 = varonce362;
varonce362 = NULL;
}
{
var372 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var373 = ((val*(*)(val* self))(var372->class->vft[COLOR_standard__string__Object__to_s]))(var372); /* to_s on <var372:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var363)->values[1]=var373;
{
var374 = ((val*(*)(val* self))(var363->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var363); /* native_to_s on <var363:NativeArray[String]>*/
}
varonce362 = var363;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var374); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce375!=NULL)) {
var376 = varonce375;
} else {
var377 = "object_id";
var378 = standard___standard__NativeString___to_s_with_length(var377, 9l);
var376 = var378;
varonce375 = var376;
}
{
var379 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var376); /* == on <var_pname:String>*/
}
if (var379){
if (unlikely(varonce380==NULL)) {
var381 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce382!=NULL)) {
var383 = varonce382;
} else {
var384 = "(long)";
var385 = standard___standard__NativeString___to_s_with_length(var384, 6l);
var383 = var385;
varonce382 = var383;
}
((struct instance_standard__NativeArray*)var381)->values[0]=var383;
} else {
var381 = varonce380;
varonce380 = NULL;
}
{
var386 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var387 = ((val*(*)(val* self))(var386->class->vft[COLOR_standard__string__Object__to_s]))(var386); /* to_s on <var386:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var381)->values[1]=var387;
{
var388 = ((val*(*)(val* self))(var381->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var381); /* native_to_s on <var381:NativeArray[String]>*/
}
varonce380 = var381;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2155);
fatal_exit(1);
}
{
var389 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var388, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var389); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce390!=NULL)) {
var391 = varonce390;
} else {
var392 = "successor";
var393 = standard___standard__NativeString___to_s_with_length(var392, 9l);
var391 = var393;
varonce390 = var391;
}
{
var394 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var391); /* == on <var_pname:String>*/
}
if (var394){
if (unlikely(varonce395==NULL)) {
var396 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = " + ";
var400 = standard___standard__NativeString___to_s_with_length(var399, 3l);
var398 = var400;
varonce397 = var398;
}
((struct instance_standard__NativeArray*)var396)->values[1]=var398;
} else {
var396 = varonce395;
varonce395 = NULL;
}
{
var401 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var402 = ((val*(*)(val* self))(var401->class->vft[COLOR_standard__string__Object__to_s]))(var401); /* to_s on <var401:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var396)->values[0]=var402;
{
var403 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var404 = ((val*(*)(val* self))(var403->class->vft[COLOR_standard__string__Object__to_s]))(var403); /* to_s on <var403:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var396)->values[2]=var404;
{
var405 = ((val*(*)(val* self))(var396->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var396); /* native_to_s on <var396:NativeArray[String]>*/
}
varonce395 = var396;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2158);
fatal_exit(1);
}
{
var406 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var405, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var406); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce407!=NULL)) {
var408 = varonce407;
} else {
var409 = "predecessor";
var410 = standard___standard__NativeString___to_s_with_length(var409, 11l);
var408 = var410;
varonce407 = var408;
}
{
var411 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var408); /* == on <var_pname:String>*/
}
if (var411){
if (unlikely(varonce412==NULL)) {
var413 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce414!=NULL)) {
var415 = varonce414;
} else {
var416 = " - ";
var417 = standard___standard__NativeString___to_s_with_length(var416, 3l);
var415 = var417;
varonce414 = var415;
}
((struct instance_standard__NativeArray*)var413)->values[1]=var415;
} else {
var413 = varonce412;
varonce412 = NULL;
}
{
var418 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var419 = ((val*(*)(val* self))(var418->class->vft[COLOR_standard__string__Object__to_s]))(var418); /* to_s on <var418:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var413)->values[0]=var419;
{
var420 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var421 = ((val*(*)(val* self))(var420->class->vft[COLOR_standard__string__Object__to_s]))(var420); /* to_s on <var420:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var413)->values[2]=var421;
{
var422 = ((val*(*)(val* self))(var413->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var413); /* native_to_s on <var413:NativeArray[String]>*/
}
varonce412 = var413;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2161);
fatal_exit(1);
}
{
var423 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var422, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var423); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce424!=NULL)) {
var425 = varonce424;
} else {
var426 = "==";
var427 = standard___standard__NativeString___to_s_with_length(var426, 2l);
var425 = var427;
varonce424 = var425;
}
{
var428 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var425); /* == on <var_pname:String>*/
}
if (var428){
{
var429 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var430 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var431 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var429, var430);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var431); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce432!=NULL)) {
var433 = varonce432;
} else {
var434 = "!=";
var435 = standard___standard__NativeString___to_s_with_length(var434, 2l);
var433 = var435;
varonce432 = var433;
}
{
var436 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var433); /* == on <var_pname:String>*/
}
if (var436){
{
var437 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var438 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var439 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var437, var438);
}
var_res440 = var439;
if (unlikely(varonce441==NULL)) {
var442 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "!";
var446 = standard___standard__NativeString___to_s_with_length(var445, 1l);
var444 = var446;
varonce443 = var444;
}
((struct instance_standard__NativeArray*)var442)->values[0]=var444;
} else {
var442 = varonce441;
varonce441 = NULL;
}
{
var447 = ((val*(*)(val* self))(var_res440->class->vft[COLOR_standard__string__Object__to_s]))(var_res440); /* to_s on <var_res440:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var442)->values[1]=var447;
{
var448 = ((val*(*)(val* self))(var442->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var442); /* native_to_s on <var442:NativeArray[String]>*/
}
varonce441 = var442;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2168);
fatal_exit(1);
}
{
var449 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var448, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var449); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce450!=NULL)) {
var451 = varonce450;
} else {
var452 = "<";
var453 = standard___standard__NativeString___to_s_with_length(var452, 1l);
var451 = var453;
varonce450 = var451;
}
{
var454 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var451); /* == on <var_pname:String>*/
}
if (var454){
if (unlikely(varonce455==NULL)) {
var456 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce457!=NULL)) {
var458 = varonce457;
} else {
var459 = " < ";
var460 = standard___standard__NativeString___to_s_with_length(var459, 3l);
var458 = var460;
varonce457 = var458;
}
((struct instance_standard__NativeArray*)var456)->values[1]=var458;
} else {
var456 = varonce455;
varonce455 = NULL;
}
{
var461 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var462 = ((val*(*)(val* self))(var461->class->vft[COLOR_standard__string__Object__to_s]))(var461); /* to_s on <var461:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var456)->values[0]=var462;
{
var463 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var464 = ((val*(*)(val* self))(var463->class->vft[COLOR_standard__string__Object__to_s]))(var463); /* to_s on <var463:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var456)->values[2]=var464;
{
var465 = ((val*(*)(val* self))(var456->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var456); /* native_to_s on <var456:NativeArray[String]>*/
}
varonce455 = var456;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2171);
fatal_exit(1);
}
{
var466 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var465, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var466); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce467!=NULL)) {
var468 = varonce467;
} else {
var469 = ">";
var470 = standard___standard__NativeString___to_s_with_length(var469, 1l);
var468 = var470;
varonce467 = var468;
}
{
var471 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var468); /* == on <var_pname:String>*/
}
if (var471){
if (unlikely(varonce472==NULL)) {
var473 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce474!=NULL)) {
var475 = varonce474;
} else {
var476 = " > ";
var477 = standard___standard__NativeString___to_s_with_length(var476, 3l);
var475 = var477;
varonce474 = var475;
}
((struct instance_standard__NativeArray*)var473)->values[1]=var475;
} else {
var473 = varonce472;
varonce472 = NULL;
}
{
var478 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var479 = ((val*(*)(val* self))(var478->class->vft[COLOR_standard__string__Object__to_s]))(var478); /* to_s on <var478:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var473)->values[0]=var479;
{
var480 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var481 = ((val*(*)(val* self))(var480->class->vft[COLOR_standard__string__Object__to_s]))(var480); /* to_s on <var480:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var473)->values[2]=var481;
{
var482 = ((val*(*)(val* self))(var473->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var473); /* native_to_s on <var473:NativeArray[String]>*/
}
varonce472 = var473;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2174);
fatal_exit(1);
}
{
var483 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var482, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var483); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce484!=NULL)) {
var485 = varonce484;
} else {
var486 = "<=";
var487 = standard___standard__NativeString___to_s_with_length(var486, 2l);
var485 = var487;
varonce484 = var485;
}
{
var488 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var485); /* == on <var_pname:String>*/
}
if (var488){
if (unlikely(varonce489==NULL)) {
var490 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce491!=NULL)) {
var492 = varonce491;
} else {
var493 = " <= ";
var494 = standard___standard__NativeString___to_s_with_length(var493, 4l);
var492 = var494;
varonce491 = var492;
}
((struct instance_standard__NativeArray*)var490)->values[1]=var492;
} else {
var490 = varonce489;
varonce489 = NULL;
}
{
var495 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var496 = ((val*(*)(val* self))(var495->class->vft[COLOR_standard__string__Object__to_s]))(var495); /* to_s on <var495:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var490)->values[0]=var496;
{
var497 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var498 = ((val*(*)(val* self))(var497->class->vft[COLOR_standard__string__Object__to_s]))(var497); /* to_s on <var497:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var490)->values[2]=var498;
{
var499 = ((val*(*)(val* self))(var490->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var490); /* native_to_s on <var490:NativeArray[String]>*/
}
varonce489 = var490;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2177);
fatal_exit(1);
}
{
var500 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var499, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var500); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce501!=NULL)) {
var502 = varonce501;
} else {
var503 = ">=";
var504 = standard___standard__NativeString___to_s_with_length(var503, 2l);
var502 = var504;
varonce501 = var502;
}
{
var505 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var502); /* == on <var_pname:String>*/
}
if (var505){
if (unlikely(varonce506==NULL)) {
var507 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce508!=NULL)) {
var509 = varonce508;
} else {
var510 = " >= ";
var511 = standard___standard__NativeString___to_s_with_length(var510, 4l);
var509 = var511;
varonce508 = var509;
}
((struct instance_standard__NativeArray*)var507)->values[1]=var509;
} else {
var507 = varonce506;
varonce506 = NULL;
}
{
var512 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var513 = ((val*(*)(val* self))(var512->class->vft[COLOR_standard__string__Object__to_s]))(var512); /* to_s on <var512:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var507)->values[0]=var513;
{
var514 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var515 = ((val*(*)(val* self))(var514->class->vft[COLOR_standard__string__Object__to_s]))(var514); /* to_s on <var514:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var507)->values[2]=var515;
{
var516 = ((val*(*)(val* self))(var507->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var507); /* native_to_s on <var507:NativeArray[String]>*/
}
varonce506 = var507;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2180);
fatal_exit(1);
}
{
var517 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var516, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var517); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce518!=NULL)) {
var519 = varonce518;
} else {
var520 = "to_i";
var521 = standard___standard__NativeString___to_s_with_length(var520, 4l);
var519 = var521;
varonce518 = var519;
}
{
var522 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var519); /* == on <var_pname:String>*/
}
if (var522){
if (unlikely(varonce523==NULL)) {
var524 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce525!=NULL)) {
var526 = varonce525;
} else {
var527 = "-\'0\'";
var528 = standard___standard__NativeString___to_s_with_length(var527, 4l);
var526 = var528;
varonce525 = var526;
}
((struct instance_standard__NativeArray*)var524)->values[1]=var526;
} else {
var524 = varonce523;
varonce523 = NULL;
}
{
var529 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var530 = ((val*(*)(val* self))(var529->class->vft[COLOR_standard__string__Object__to_s]))(var529); /* to_s on <var529:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var524)->values[0]=var530;
{
var531 = ((val*(*)(val* self))(var524->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var524); /* native_to_s on <var524:NativeArray[String]>*/
}
varonce523 = var524;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2183);
fatal_exit(1);
}
{
var532 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var531, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var532); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce533!=NULL)) {
var534 = varonce533;
} else {
var535 = "ascii";
var536 = standard___standard__NativeString___to_s_with_length(var535, 5l);
var534 = var536;
varonce533 = var534;
}
{
var537 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var534); /* == on <var_pname:String>*/
}
if (var537){
if (unlikely(varonce538==NULL)) {
var539 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce540!=NULL)) {
var541 = varonce540;
} else {
var542 = "(long)";
var543 = standard___standard__NativeString___to_s_with_length(var542, 6l);
var541 = var543;
varonce540 = var541;
}
((struct instance_standard__NativeArray*)var539)->values[0]=var541;
} else {
var539 = varonce538;
varonce538 = NULL;
}
{
var544 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var545 = ((val*(*)(val* self))(var544->class->vft[COLOR_standard__string__Object__to_s]))(var544); /* to_s on <var544:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var539)->values[1]=var545;
{
var546 = ((val*(*)(val* self))(var539->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var539); /* native_to_s on <var539:NativeArray[String]>*/
}
varonce538 = var539;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2186);
fatal_exit(1);
}
{
var547 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var546, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var547); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
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
} else {
if (likely(varonce548!=NULL)) {
var549 = varonce548;
} else {
var550 = "Byte";
var551 = standard___standard__NativeString___to_s_with_length(var550, 4l);
var549 = var551;
varonce548 = var549;
}
{
var552 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var549); /* == on <var_cname:String>*/
}
if (var552){
if (likely(varonce553!=NULL)) {
var554 = varonce553;
} else {
var555 = "output";
var556 = standard___standard__NativeString___to_s_with_length(var555, 6l);
var554 = var556;
varonce553 = var554;
}
{
var557 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var554); /* == on <var_pname:String>*/
}
if (var557){
if (unlikely(varonce558==NULL)) {
var559 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce560!=NULL)) {
var561 = varonce560;
} else {
var562 = "printf(\"%x\\n\", ";
var563 = standard___standard__NativeString___to_s_with_length(var562, 15l);
var561 = var563;
varonce560 = var561;
}
((struct instance_standard__NativeArray*)var559)->values[0]=var561;
if (likely(varonce564!=NULL)) {
var565 = varonce564;
} else {
var566 = ");";
var567 = standard___standard__NativeString___to_s_with_length(var566, 2l);
var565 = var567;
varonce564 = var565;
}
((struct instance_standard__NativeArray*)var559)->values[2]=var565;
} else {
var559 = varonce558;
varonce558 = NULL;
}
{
var568 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var569 = ((val*(*)(val* self))(var568->class->vft[COLOR_standard__string__Object__to_s]))(var568); /* to_s on <var568:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var559)->values[1]=var569;
{
var570 = ((val*(*)(val* self))(var559->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var559); /* native_to_s on <var559:NativeArray[String]>*/
}
varonce558 = var559;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var570); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce571!=NULL)) {
var572 = varonce571;
} else {
var573 = "object_id";
var574 = standard___standard__NativeString___to_s_with_length(var573, 9l);
var572 = var574;
varonce571 = var572;
}
{
var575 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var572); /* == on <var_pname:String>*/
}
if (var575){
if (unlikely(varonce576==NULL)) {
var577 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce578!=NULL)) {
var579 = varonce578;
} else {
var580 = "(long)";
var581 = standard___standard__NativeString___to_s_with_length(var580, 6l);
var579 = var581;
varonce578 = var579;
}
((struct instance_standard__NativeArray*)var577)->values[0]=var579;
} else {
var577 = varonce576;
varonce576 = NULL;
}
{
var582 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var583 = ((val*(*)(val* self))(var582->class->vft[COLOR_standard__string__Object__to_s]))(var582); /* to_s on <var582:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var577)->values[1]=var583;
{
var584 = ((val*(*)(val* self))(var577->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var577); /* native_to_s on <var577:NativeArray[String]>*/
}
varonce576 = var577;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2194);
fatal_exit(1);
}
{
var585 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var584, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var585); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce586!=NULL)) {
var587 = varonce586;
} else {
var588 = "+";
var589 = standard___standard__NativeString___to_s_with_length(var588, 1l);
var587 = var589;
varonce586 = var587;
}
{
var590 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var587); /* == on <var_pname:String>*/
}
if (var590){
if (unlikely(varonce591==NULL)) {
var592 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce593!=NULL)) {
var594 = varonce593;
} else {
var595 = " + ";
var596 = standard___standard__NativeString___to_s_with_length(var595, 3l);
var594 = var596;
varonce593 = var594;
}
((struct instance_standard__NativeArray*)var592)->values[1]=var594;
} else {
var592 = varonce591;
varonce591 = NULL;
}
{
var597 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var598 = ((val*(*)(val* self))(var597->class->vft[COLOR_standard__string__Object__to_s]))(var597); /* to_s on <var597:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var592)->values[0]=var598;
{
var599 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var600 = ((val*(*)(val* self))(var599->class->vft[COLOR_standard__string__Object__to_s]))(var599); /* to_s on <var599:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var592)->values[2]=var600;
{
var601 = ((val*(*)(val* self))(var592->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var592); /* native_to_s on <var592:NativeArray[String]>*/
}
varonce591 = var592;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2197);
fatal_exit(1);
}
{
var602 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var601, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var602); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce603!=NULL)) {
var604 = varonce603;
} else {
var605 = "-";
var606 = standard___standard__NativeString___to_s_with_length(var605, 1l);
var604 = var606;
varonce603 = var604;
}
{
var607 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var604); /* == on <var_pname:String>*/
}
if (var607){
if (unlikely(varonce608==NULL)) {
var609 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce610!=NULL)) {
var611 = varonce610;
} else {
var612 = " - ";
var613 = standard___standard__NativeString___to_s_with_length(var612, 3l);
var611 = var613;
varonce610 = var611;
}
((struct instance_standard__NativeArray*)var609)->values[1]=var611;
} else {
var609 = varonce608;
varonce608 = NULL;
}
{
var614 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var615 = ((val*(*)(val* self))(var614->class->vft[COLOR_standard__string__Object__to_s]))(var614); /* to_s on <var614:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var609)->values[0]=var615;
{
var616 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var617 = ((val*(*)(val* self))(var616->class->vft[COLOR_standard__string__Object__to_s]))(var616); /* to_s on <var616:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var609)->values[2]=var617;
{
var618 = ((val*(*)(val* self))(var609->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var609); /* native_to_s on <var609:NativeArray[String]>*/
}
varonce608 = var609;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2200);
fatal_exit(1);
}
{
var619 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var618, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var619); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce620!=NULL)) {
var621 = varonce620;
} else {
var622 = "unary -";
var623 = standard___standard__NativeString___to_s_with_length(var622, 7l);
var621 = var623;
varonce620 = var621;
}
{
var624 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var621); /* == on <var_pname:String>*/
}
if (var624){
if (unlikely(varonce625==NULL)) {
var626 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce627!=NULL)) {
var628 = varonce627;
} else {
var629 = "-";
var630 = standard___standard__NativeString___to_s_with_length(var629, 1l);
var628 = var630;
varonce627 = var628;
}
((struct instance_standard__NativeArray*)var626)->values[0]=var628;
} else {
var626 = varonce625;
varonce625 = NULL;
}
{
var631 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var632 = ((val*(*)(val* self))(var631->class->vft[COLOR_standard__string__Object__to_s]))(var631); /* to_s on <var631:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var626)->values[1]=var632;
{
var633 = ((val*(*)(val* self))(var626->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var626); /* native_to_s on <var626:NativeArray[String]>*/
}
varonce625 = var626;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2203);
fatal_exit(1);
}
{
var634 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var633, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var634); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce635!=NULL)) {
var636 = varonce635;
} else {
var637 = "unary +";
var638 = standard___standard__NativeString___to_s_with_length(var637, 7l);
var636 = var638;
varonce635 = var636;
}
{
var639 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var636); /* == on <var_pname:String>*/
}
if (var639){
{
var640 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var640); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce641!=NULL)) {
var642 = varonce641;
} else {
var643 = "*";
var644 = standard___standard__NativeString___to_s_with_length(var643, 1l);
var642 = var644;
varonce641 = var642;
}
{
var645 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var642); /* == on <var_pname:String>*/
}
if (var645){
if (unlikely(varonce646==NULL)) {
var647 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce648!=NULL)) {
var649 = varonce648;
} else {
var650 = " * ";
var651 = standard___standard__NativeString___to_s_with_length(var650, 3l);
var649 = var651;
varonce648 = var649;
}
((struct instance_standard__NativeArray*)var647)->values[1]=var649;
} else {
var647 = varonce646;
varonce646 = NULL;
}
{
var652 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var653 = ((val*(*)(val* self))(var652->class->vft[COLOR_standard__string__Object__to_s]))(var652); /* to_s on <var652:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var647)->values[0]=var653;
{
var654 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var655 = ((val*(*)(val* self))(var654->class->vft[COLOR_standard__string__Object__to_s]))(var654); /* to_s on <var654:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var647)->values[2]=var655;
{
var656 = ((val*(*)(val* self))(var647->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var647); /* native_to_s on <var647:NativeArray[String]>*/
}
varonce646 = var647;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2209);
fatal_exit(1);
}
{
var657 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var656, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var657); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce658!=NULL)) {
var659 = varonce658;
} else {
var660 = "/";
var661 = standard___standard__NativeString___to_s_with_length(var660, 1l);
var659 = var661;
varonce658 = var659;
}
{
var662 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var659); /* == on <var_pname:String>*/
}
if (var662){
if (unlikely(varonce663==NULL)) {
var664 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce665!=NULL)) {
var666 = varonce665;
} else {
var667 = " / ";
var668 = standard___standard__NativeString___to_s_with_length(var667, 3l);
var666 = var668;
varonce665 = var666;
}
((struct instance_standard__NativeArray*)var664)->values[1]=var666;
} else {
var664 = varonce663;
varonce663 = NULL;
}
{
var669 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var670 = ((val*(*)(val* self))(var669->class->vft[COLOR_standard__string__Object__to_s]))(var669); /* to_s on <var669:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var664)->values[0]=var670;
{
var671 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var672 = ((val*(*)(val* self))(var671->class->vft[COLOR_standard__string__Object__to_s]))(var671); /* to_s on <var671:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var664)->values[2]=var672;
{
var673 = ((val*(*)(val* self))(var664->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var664); /* native_to_s on <var664:NativeArray[String]>*/
}
varonce663 = var664;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2212);
fatal_exit(1);
}
{
var674 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var673, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var674); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce675!=NULL)) {
var676 = varonce675;
} else {
var677 = "%";
var678 = standard___standard__NativeString___to_s_with_length(var677, 1l);
var676 = var678;
varonce675 = var676;
}
{
var679 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var676); /* == on <var_pname:String>*/
}
if (var679){
if (unlikely(varonce680==NULL)) {
var681 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce682!=NULL)) {
var683 = varonce682;
} else {
var684 = " % ";
var685 = standard___standard__NativeString___to_s_with_length(var684, 3l);
var683 = var685;
varonce682 = var683;
}
((struct instance_standard__NativeArray*)var681)->values[1]=var683;
} else {
var681 = varonce680;
varonce680 = NULL;
}
{
var686 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var687 = ((val*(*)(val* self))(var686->class->vft[COLOR_standard__string__Object__to_s]))(var686); /* to_s on <var686:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var681)->values[0]=var687;
{
var688 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var689 = ((val*(*)(val* self))(var688->class->vft[COLOR_standard__string__Object__to_s]))(var688); /* to_s on <var688:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var681)->values[2]=var689;
{
var690 = ((val*(*)(val* self))(var681->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var681); /* native_to_s on <var681:NativeArray[String]>*/
}
varonce680 = var681;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2215);
fatal_exit(1);
}
{
var691 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var690, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var691); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce692!=NULL)) {
var693 = varonce692;
} else {
var694 = "lshift";
var695 = standard___standard__NativeString___to_s_with_length(var694, 6l);
var693 = var695;
varonce692 = var693;
}
{
var696 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var693); /* == on <var_pname:String>*/
}
if (var696){
if (unlikely(varonce697==NULL)) {
var698 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce699!=NULL)) {
var700 = varonce699;
} else {
var701 = " << ";
var702 = standard___standard__NativeString___to_s_with_length(var701, 4l);
var700 = var702;
varonce699 = var700;
}
((struct instance_standard__NativeArray*)var698)->values[1]=var700;
} else {
var698 = varonce697;
varonce697 = NULL;
}
{
var703 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var704 = ((val*(*)(val* self))(var703->class->vft[COLOR_standard__string__Object__to_s]))(var703); /* to_s on <var703:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var698)->values[0]=var704;
{
var705 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var706 = ((val*(*)(val* self))(var705->class->vft[COLOR_standard__string__Object__to_s]))(var705); /* to_s on <var705:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var698)->values[2]=var706;
{
var707 = ((val*(*)(val* self))(var698->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var698); /* native_to_s on <var698:NativeArray[String]>*/
}
varonce697 = var698;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2218);
fatal_exit(1);
}
{
var708 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var707, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var708); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce709!=NULL)) {
var710 = varonce709;
} else {
var711 = "rshift";
var712 = standard___standard__NativeString___to_s_with_length(var711, 6l);
var710 = var712;
varonce709 = var710;
}
{
var713 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var710); /* == on <var_pname:String>*/
}
if (var713){
if (unlikely(varonce714==NULL)) {
var715 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce716!=NULL)) {
var717 = varonce716;
} else {
var718 = " >> ";
var719 = standard___standard__NativeString___to_s_with_length(var718, 4l);
var717 = var719;
varonce716 = var717;
}
((struct instance_standard__NativeArray*)var715)->values[1]=var717;
} else {
var715 = varonce714;
varonce714 = NULL;
}
{
var720 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var721 = ((val*(*)(val* self))(var720->class->vft[COLOR_standard__string__Object__to_s]))(var720); /* to_s on <var720:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var715)->values[0]=var721;
{
var722 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var723 = ((val*(*)(val* self))(var722->class->vft[COLOR_standard__string__Object__to_s]))(var722); /* to_s on <var722:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var715)->values[2]=var723;
{
var724 = ((val*(*)(val* self))(var715->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var715); /* native_to_s on <var715:NativeArray[String]>*/
}
varonce714 = var715;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2221);
fatal_exit(1);
}
{
var725 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var724, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var725); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce726!=NULL)) {
var727 = varonce726;
} else {
var728 = "==";
var729 = standard___standard__NativeString___to_s_with_length(var728, 2l);
var727 = var729;
varonce726 = var727;
}
{
var730 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var727); /* == on <var_pname:String>*/
}
if (var730){
{
var731 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var732 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var733 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var731, var732);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var733); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce734!=NULL)) {
var735 = varonce734;
} else {
var736 = "!=";
var737 = standard___standard__NativeString___to_s_with_length(var736, 2l);
var735 = var737;
varonce734 = var735;
}
{
var738 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var735); /* == on <var_pname:String>*/
}
if (var738){
{
var739 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var740 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var741 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var739, var740);
}
var_res742 = var741;
if (unlikely(varonce743==NULL)) {
var744 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce745!=NULL)) {
var746 = varonce745;
} else {
var747 = "!";
var748 = standard___standard__NativeString___to_s_with_length(var747, 1l);
var746 = var748;
varonce745 = var746;
}
((struct instance_standard__NativeArray*)var744)->values[0]=var746;
} else {
var744 = varonce743;
varonce743 = NULL;
}
{
var749 = ((val*(*)(val* self))(var_res742->class->vft[COLOR_standard__string__Object__to_s]))(var_res742); /* to_s on <var_res742:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var744)->values[1]=var749;
{
var750 = ((val*(*)(val* self))(var744->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var744); /* native_to_s on <var744:NativeArray[String]>*/
}
varonce743 = var744;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2228);
fatal_exit(1);
}
{
var751 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var750, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var751); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce752!=NULL)) {
var753 = varonce752;
} else {
var754 = "<";
var755 = standard___standard__NativeString___to_s_with_length(var754, 1l);
var753 = var755;
varonce752 = var753;
}
{
var756 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var753); /* == on <var_pname:String>*/
}
if (var756){
if (unlikely(varonce757==NULL)) {
var758 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce759!=NULL)) {
var760 = varonce759;
} else {
var761 = " < ";
var762 = standard___standard__NativeString___to_s_with_length(var761, 3l);
var760 = var762;
varonce759 = var760;
}
((struct instance_standard__NativeArray*)var758)->values[1]=var760;
} else {
var758 = varonce757;
varonce757 = NULL;
}
{
var763 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var764 = ((val*(*)(val* self))(var763->class->vft[COLOR_standard__string__Object__to_s]))(var763); /* to_s on <var763:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var758)->values[0]=var764;
{
var765 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var766 = ((val*(*)(val* self))(var765->class->vft[COLOR_standard__string__Object__to_s]))(var765); /* to_s on <var765:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var758)->values[2]=var766;
{
var767 = ((val*(*)(val* self))(var758->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var758); /* native_to_s on <var758:NativeArray[String]>*/
}
varonce757 = var758;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2231);
fatal_exit(1);
}
{
var768 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var767, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var768); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce769!=NULL)) {
var770 = varonce769;
} else {
var771 = ">";
var772 = standard___standard__NativeString___to_s_with_length(var771, 1l);
var770 = var772;
varonce769 = var770;
}
{
var773 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var770); /* == on <var_pname:String>*/
}
if (var773){
if (unlikely(varonce774==NULL)) {
var775 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce776!=NULL)) {
var777 = varonce776;
} else {
var778 = " > ";
var779 = standard___standard__NativeString___to_s_with_length(var778, 3l);
var777 = var779;
varonce776 = var777;
}
((struct instance_standard__NativeArray*)var775)->values[1]=var777;
} else {
var775 = varonce774;
varonce774 = NULL;
}
{
var780 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var781 = ((val*(*)(val* self))(var780->class->vft[COLOR_standard__string__Object__to_s]))(var780); /* to_s on <var780:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var775)->values[0]=var781;
{
var782 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var783 = ((val*(*)(val* self))(var782->class->vft[COLOR_standard__string__Object__to_s]))(var782); /* to_s on <var782:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var775)->values[2]=var783;
{
var784 = ((val*(*)(val* self))(var775->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var775); /* native_to_s on <var775:NativeArray[String]>*/
}
varonce774 = var775;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2234);
fatal_exit(1);
}
{
var785 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var784, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var785); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce786!=NULL)) {
var787 = varonce786;
} else {
var788 = "<=";
var789 = standard___standard__NativeString___to_s_with_length(var788, 2l);
var787 = var789;
varonce786 = var787;
}
{
var790 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var787); /* == on <var_pname:String>*/
}
if (var790){
if (unlikely(varonce791==NULL)) {
var792 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce793!=NULL)) {
var794 = varonce793;
} else {
var795 = " <= ";
var796 = standard___standard__NativeString___to_s_with_length(var795, 4l);
var794 = var796;
varonce793 = var794;
}
((struct instance_standard__NativeArray*)var792)->values[1]=var794;
} else {
var792 = varonce791;
varonce791 = NULL;
}
{
var797 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var798 = ((val*(*)(val* self))(var797->class->vft[COLOR_standard__string__Object__to_s]))(var797); /* to_s on <var797:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var792)->values[0]=var798;
{
var799 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var800 = ((val*(*)(val* self))(var799->class->vft[COLOR_standard__string__Object__to_s]))(var799); /* to_s on <var799:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var792)->values[2]=var800;
{
var801 = ((val*(*)(val* self))(var792->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var792); /* native_to_s on <var792:NativeArray[String]>*/
}
varonce791 = var792;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2237);
fatal_exit(1);
}
{
var802 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var801, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var802); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce803!=NULL)) {
var804 = varonce803;
} else {
var805 = ">=";
var806 = standard___standard__NativeString___to_s_with_length(var805, 2l);
var804 = var806;
varonce803 = var804;
}
{
var807 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var804); /* == on <var_pname:String>*/
}
if (var807){
if (unlikely(varonce808==NULL)) {
var809 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce810!=NULL)) {
var811 = varonce810;
} else {
var812 = " >= ";
var813 = standard___standard__NativeString___to_s_with_length(var812, 4l);
var811 = var813;
varonce810 = var811;
}
((struct instance_standard__NativeArray*)var809)->values[1]=var811;
} else {
var809 = varonce808;
varonce808 = NULL;
}
{
var814 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var815 = ((val*(*)(val* self))(var814->class->vft[COLOR_standard__string__Object__to_s]))(var814); /* to_s on <var814:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var809)->values[0]=var815;
{
var816 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var817 = ((val*(*)(val* self))(var816->class->vft[COLOR_standard__string__Object__to_s]))(var816); /* to_s on <var816:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var809)->values[2]=var817;
{
var818 = ((val*(*)(val* self))(var809->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var809); /* native_to_s on <var809:NativeArray[String]>*/
}
varonce808 = var809;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2240);
fatal_exit(1);
}
{
var819 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var818, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var819); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce820!=NULL)) {
var821 = varonce820;
} else {
var822 = "to_i";
var823 = standard___standard__NativeString___to_s_with_length(var822, 4l);
var821 = var823;
varonce820 = var821;
}
{
var824 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var821); /* == on <var_pname:String>*/
}
if (var824){
if (unlikely(varonce825==NULL)) {
var826 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce827!=NULL)) {
var828 = varonce827;
} else {
var829 = "(long)";
var830 = standard___standard__NativeString___to_s_with_length(var829, 6l);
var828 = var830;
varonce827 = var828;
}
((struct instance_standard__NativeArray*)var826)->values[0]=var828;
} else {
var826 = varonce825;
varonce825 = NULL;
}
{
var831 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var832 = ((val*(*)(val* self))(var831->class->vft[COLOR_standard__string__Object__to_s]))(var831); /* to_s on <var831:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var826)->values[1]=var832;
{
var833 = ((val*(*)(val* self))(var826->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var826); /* native_to_s on <var826:NativeArray[String]>*/
}
varonce825 = var826;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2243);
fatal_exit(1);
}
{
var834 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var833, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var834); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce835!=NULL)) {
var836 = varonce835;
} else {
var837 = "to_f";
var838 = standard___standard__NativeString___to_s_with_length(var837, 4l);
var836 = var838;
varonce835 = var836;
}
{
var839 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var836); /* == on <var_pname:String>*/
}
if (var839){
if (unlikely(varonce840==NULL)) {
var841 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce842!=NULL)) {
var843 = varonce842;
} else {
var844 = "(double)";
var845 = standard___standard__NativeString___to_s_with_length(var844, 8l);
var843 = var845;
varonce842 = var843;
}
((struct instance_standard__NativeArray*)var841)->values[0]=var843;
} else {
var841 = varonce840;
varonce840 = NULL;
}
{
var846 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var847 = ((val*(*)(val* self))(var846->class->vft[COLOR_standard__string__Object__to_s]))(var846); /* to_s on <var846:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var841)->values[1]=var847;
{
var848 = ((val*(*)(val* self))(var841->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var841); /* native_to_s on <var841:NativeArray[String]>*/
}
varonce840 = var841;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2246);
fatal_exit(1);
}
{
var849 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var848, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var849); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce850!=NULL)) {
var851 = varonce850;
} else {
var852 = "ascii";
var853 = standard___standard__NativeString___to_s_with_length(var852, 5l);
var851 = var853;
varonce850 = var851;
}
{
var854 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var851); /* == on <var_pname:String>*/
}
if (var854){
if (unlikely(varonce855==NULL)) {
var856 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
} else {
var856 = varonce855;
varonce855 = NULL;
}
{
var857 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var858 = ((val*(*)(val* self))(var857->class->vft[COLOR_standard__string__Object__to_s]))(var857); /* to_s on <var857:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var856)->values[0]=var858;
{
var859 = ((val*(*)(val* self))(var856->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var856); /* native_to_s on <var856:NativeArray[String]>*/
}
varonce855 = var856;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2249);
fatal_exit(1);
}
{
var860 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var859, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var860); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
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
} else {
if (likely(varonce861!=NULL)) {
var862 = varonce861;
} else {
var863 = "Bool";
var864 = standard___standard__NativeString___to_s_with_length(var863, 4l);
var862 = var864;
varonce861 = var862;
}
{
var865 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var862); /* == on <var_cname:String>*/
}
if (var865){
if (likely(varonce866!=NULL)) {
var867 = varonce866;
} else {
var868 = "output";
var869 = standard___standard__NativeString___to_s_with_length(var868, 6l);
var867 = var869;
varonce866 = var867;
}
{
var870 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var867); /* == on <var_pname:String>*/
}
if (var870){
if (unlikely(varonce871==NULL)) {
var872 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce873!=NULL)) {
var874 = varonce873;
} else {
var875 = "printf(";
var876 = standard___standard__NativeString___to_s_with_length(var875, 7l);
var874 = var876;
varonce873 = var874;
}
((struct instance_standard__NativeArray*)var872)->values[0]=var874;
if (likely(varonce877!=NULL)) {
var878 = varonce877;
} else {
var879 = "?\"true\\n\":\"false\\n\");";
var880 = standard___standard__NativeString___to_s_with_length(var879, 21l);
var878 = var880;
varonce877 = var878;
}
((struct instance_standard__NativeArray*)var872)->values[2]=var878;
} else {
var872 = varonce871;
varonce871 = NULL;
}
{
var881 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var882 = ((val*(*)(val* self))(var881->class->vft[COLOR_standard__string__Object__to_s]))(var881); /* to_s on <var881:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var872)->values[1]=var882;
{
var883 = ((val*(*)(val* self))(var872->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var872); /* native_to_s on <var872:NativeArray[String]>*/
}
varonce871 = var872;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var883); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce884!=NULL)) {
var885 = varonce884;
} else {
var886 = "object_id";
var887 = standard___standard__NativeString___to_s_with_length(var886, 9l);
var885 = var887;
varonce884 = var885;
}
{
var888 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var885); /* == on <var_pname:String>*/
}
if (var888){
if (unlikely(varonce889==NULL)) {
var890 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce891!=NULL)) {
var892 = varonce891;
} else {
var893 = "(long)";
var894 = standard___standard__NativeString___to_s_with_length(var893, 6l);
var892 = var894;
varonce891 = var892;
}
((struct instance_standard__NativeArray*)var890)->values[0]=var892;
} else {
var890 = varonce889;
varonce889 = NULL;
}
{
var895 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var896 = ((val*(*)(val* self))(var895->class->vft[COLOR_standard__string__Object__to_s]))(var895); /* to_s on <var895:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var890)->values[1]=var896;
{
var897 = ((val*(*)(val* self))(var890->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var890); /* native_to_s on <var890:NativeArray[String]>*/
}
varonce889 = var890;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2257);
fatal_exit(1);
}
{
var898 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var897, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var898); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce899!=NULL)) {
var900 = varonce899;
} else {
var901 = "==";
var902 = standard___standard__NativeString___to_s_with_length(var901, 2l);
var900 = var902;
varonce899 = var900;
}
{
var903 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var900); /* == on <var_pname:String>*/
}
if (var903){
{
var904 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var905 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var906 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var904, var905);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var906); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce907!=NULL)) {
var908 = varonce907;
} else {
var909 = "!=";
var910 = standard___standard__NativeString___to_s_with_length(var909, 2l);
var908 = var910;
varonce907 = var908;
}
{
var911 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var908); /* == on <var_pname:String>*/
}
if (var911){
{
var912 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var913 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var914 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var912, var913);
}
var_res915 = var914;
if (unlikely(varonce916==NULL)) {
var917 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce918!=NULL)) {
var919 = varonce918;
} else {
var920 = "!";
var921 = standard___standard__NativeString___to_s_with_length(var920, 1l);
var919 = var921;
varonce918 = var919;
}
((struct instance_standard__NativeArray*)var917)->values[0]=var919;
} else {
var917 = varonce916;
varonce916 = NULL;
}
{
var922 = ((val*(*)(val* self))(var_res915->class->vft[COLOR_standard__string__Object__to_s]))(var_res915); /* to_s on <var_res915:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var917)->values[1]=var922;
{
var923 = ((val*(*)(val* self))(var917->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var917); /* native_to_s on <var917:NativeArray[String]>*/
}
varonce916 = var917;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2264);
fatal_exit(1);
}
{
var924 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var923, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var924); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (likely(varonce925!=NULL)) {
var926 = varonce925;
} else {
var927 = "Float";
var928 = standard___standard__NativeString___to_s_with_length(var927, 5l);
var926 = var928;
varonce925 = var926;
}
{
var929 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var926); /* == on <var_cname:String>*/
}
if (var929){
if (likely(varonce930!=NULL)) {
var931 = varonce930;
} else {
var932 = "output";
var933 = standard___standard__NativeString___to_s_with_length(var932, 6l);
var931 = var933;
varonce930 = var931;
}
{
var934 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var931); /* == on <var_pname:String>*/
}
if (var934){
if (unlikely(varonce935==NULL)) {
var936 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce937!=NULL)) {
var938 = varonce937;
} else {
var939 = "printf(\"%f\\n\", ";
var940 = standard___standard__NativeString___to_s_with_length(var939, 15l);
var938 = var940;
varonce937 = var938;
}
((struct instance_standard__NativeArray*)var936)->values[0]=var938;
if (likely(varonce941!=NULL)) {
var942 = varonce941;
} else {
var943 = ");";
var944 = standard___standard__NativeString___to_s_with_length(var943, 2l);
var942 = var944;
varonce941 = var942;
}
((struct instance_standard__NativeArray*)var936)->values[2]=var942;
} else {
var936 = varonce935;
varonce935 = NULL;
}
{
var945 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var946 = ((val*(*)(val* self))(var945->class->vft[COLOR_standard__string__Object__to_s]))(var945); /* to_s on <var945:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var936)->values[1]=var946;
{
var947 = ((val*(*)(val* self))(var936->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var936); /* native_to_s on <var936:NativeArray[String]>*/
}
varonce935 = var936;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var947); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce948!=NULL)) {
var949 = varonce948;
} else {
var950 = "object_id";
var951 = standard___standard__NativeString___to_s_with_length(var950, 9l);
var949 = var951;
varonce948 = var949;
}
{
var952 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var949); /* == on <var_pname:String>*/
}
if (var952){
if (unlikely(varonce953==NULL)) {
var954 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce955!=NULL)) {
var956 = varonce955;
} else {
var957 = "(double)";
var958 = standard___standard__NativeString___to_s_with_length(var957, 8l);
var956 = var958;
varonce955 = var956;
}
((struct instance_standard__NativeArray*)var954)->values[0]=var956;
} else {
var954 = varonce953;
varonce953 = NULL;
}
{
var959 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var960 = ((val*(*)(val* self))(var959->class->vft[COLOR_standard__string__Object__to_s]))(var959); /* to_s on <var959:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var954)->values[1]=var960;
{
var961 = ((val*(*)(val* self))(var954->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var954); /* native_to_s on <var954:NativeArray[String]>*/
}
varonce953 = var954;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2272);
fatal_exit(1);
}
{
var962 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var961, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var962); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce963!=NULL)) {
var964 = varonce963;
} else {
var965 = "+";
var966 = standard___standard__NativeString___to_s_with_length(var965, 1l);
var964 = var966;
varonce963 = var964;
}
{
var967 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var964); /* == on <var_pname:String>*/
}
if (var967){
if (unlikely(varonce968==NULL)) {
var969 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce970!=NULL)) {
var971 = varonce970;
} else {
var972 = " + ";
var973 = standard___standard__NativeString___to_s_with_length(var972, 3l);
var971 = var973;
varonce970 = var971;
}
((struct instance_standard__NativeArray*)var969)->values[1]=var971;
} else {
var969 = varonce968;
varonce968 = NULL;
}
{
var974 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var975 = ((val*(*)(val* self))(var974->class->vft[COLOR_standard__string__Object__to_s]))(var974); /* to_s on <var974:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var969)->values[0]=var975;
{
var976 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var977 = ((val*(*)(val* self))(var976->class->vft[COLOR_standard__string__Object__to_s]))(var976); /* to_s on <var976:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var969)->values[2]=var977;
{
var978 = ((val*(*)(val* self))(var969->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var969); /* native_to_s on <var969:NativeArray[String]>*/
}
varonce968 = var969;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2275);
fatal_exit(1);
}
{
var979 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var978, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var979); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce980!=NULL)) {
var981 = varonce980;
} else {
var982 = "-";
var983 = standard___standard__NativeString___to_s_with_length(var982, 1l);
var981 = var983;
varonce980 = var981;
}
{
var984 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var981); /* == on <var_pname:String>*/
}
if (var984){
if (unlikely(varonce985==NULL)) {
var986 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce987!=NULL)) {
var988 = varonce987;
} else {
var989 = " - ";
var990 = standard___standard__NativeString___to_s_with_length(var989, 3l);
var988 = var990;
varonce987 = var988;
}
((struct instance_standard__NativeArray*)var986)->values[1]=var988;
} else {
var986 = varonce985;
varonce985 = NULL;
}
{
var991 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var992 = ((val*(*)(val* self))(var991->class->vft[COLOR_standard__string__Object__to_s]))(var991); /* to_s on <var991:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var986)->values[0]=var992;
{
var993 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var994 = ((val*(*)(val* self))(var993->class->vft[COLOR_standard__string__Object__to_s]))(var993); /* to_s on <var993:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var986)->values[2]=var994;
{
var995 = ((val*(*)(val* self))(var986->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var986); /* native_to_s on <var986:NativeArray[String]>*/
}
varonce985 = var986;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2278);
fatal_exit(1);
}
{
var996 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var995, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var996); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce997!=NULL)) {
var998 = varonce997;
} else {
var999 = "unary -";
var1000 = standard___standard__NativeString___to_s_with_length(var999, 7l);
var998 = var1000;
varonce997 = var998;
}
{
var1001 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var998); /* == on <var_pname:String>*/
}
if (var1001){
if (unlikely(varonce1002==NULL)) {
var1003 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1004!=NULL)) {
var1005 = varonce1004;
} else {
var1006 = "-";
var1007 = standard___standard__NativeString___to_s_with_length(var1006, 1l);
var1005 = var1007;
varonce1004 = var1005;
}
((struct instance_standard__NativeArray*)var1003)->values[0]=var1005;
} else {
var1003 = varonce1002;
varonce1002 = NULL;
}
{
var1008 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1009 = ((val*(*)(val* self))(var1008->class->vft[COLOR_standard__string__Object__to_s]))(var1008); /* to_s on <var1008:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1003)->values[1]=var1009;
{
var1010 = ((val*(*)(val* self))(var1003->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1003); /* native_to_s on <var1003:NativeArray[String]>*/
}
varonce1002 = var1003;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2281);
fatal_exit(1);
}
{
var1011 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1010, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1011); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1012!=NULL)) {
var1013 = varonce1012;
} else {
var1014 = "unary +";
var1015 = standard___standard__NativeString___to_s_with_length(var1014, 7l);
var1013 = var1015;
varonce1012 = var1013;
}
{
var1016 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1013); /* == on <var_pname:String>*/
}
if (var1016){
{
var1017 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1017); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1018!=NULL)) {
var1019 = varonce1018;
} else {
var1020 = "succ";
var1021 = standard___standard__NativeString___to_s_with_length(var1020, 4l);
var1019 = var1021;
varonce1018 = var1019;
}
{
var1022 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1019); /* == on <var_pname:String>*/
}
if (var1022){
if (unlikely(varonce1023==NULL)) {
var1024 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1025!=NULL)) {
var1026 = varonce1025;
} else {
var1027 = "+1";
var1028 = standard___standard__NativeString___to_s_with_length(var1027, 2l);
var1026 = var1028;
varonce1025 = var1026;
}
((struct instance_standard__NativeArray*)var1024)->values[1]=var1026;
} else {
var1024 = varonce1023;
varonce1023 = NULL;
}
{
var1029 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1030 = ((val*(*)(val* self))(var1029->class->vft[COLOR_standard__string__Object__to_s]))(var1029); /* to_s on <var1029:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1024)->values[0]=var1030;
{
var1031 = ((val*(*)(val* self))(var1024->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1024); /* native_to_s on <var1024:NativeArray[String]>*/
}
varonce1023 = var1024;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2287);
fatal_exit(1);
}
{
var1032 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1031, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1032); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1033!=NULL)) {
var1034 = varonce1033;
} else {
var1035 = "prec";
var1036 = standard___standard__NativeString___to_s_with_length(var1035, 4l);
var1034 = var1036;
varonce1033 = var1034;
}
{
var1037 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1034); /* == on <var_pname:String>*/
}
if (var1037){
if (unlikely(varonce1038==NULL)) {
var1039 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1040!=NULL)) {
var1041 = varonce1040;
} else {
var1042 = "-1";
var1043 = standard___standard__NativeString___to_s_with_length(var1042, 2l);
var1041 = var1043;
varonce1040 = var1041;
}
((struct instance_standard__NativeArray*)var1039)->values[1]=var1041;
} else {
var1039 = varonce1038;
varonce1038 = NULL;
}
{
var1044 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1045 = ((val*(*)(val* self))(var1044->class->vft[COLOR_standard__string__Object__to_s]))(var1044); /* to_s on <var1044:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1039)->values[0]=var1045;
{
var1046 = ((val*(*)(val* self))(var1039->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1039); /* native_to_s on <var1039:NativeArray[String]>*/
}
varonce1038 = var1039;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2290);
fatal_exit(1);
}
{
var1047 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1046, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1047); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1048!=NULL)) {
var1049 = varonce1048;
} else {
var1050 = "*";
var1051 = standard___standard__NativeString___to_s_with_length(var1050, 1l);
var1049 = var1051;
varonce1048 = var1049;
}
{
var1052 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1049); /* == on <var_pname:String>*/
}
if (var1052){
if (unlikely(varonce1053==NULL)) {
var1054 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1055!=NULL)) {
var1056 = varonce1055;
} else {
var1057 = " * ";
var1058 = standard___standard__NativeString___to_s_with_length(var1057, 3l);
var1056 = var1058;
varonce1055 = var1056;
}
((struct instance_standard__NativeArray*)var1054)->values[1]=var1056;
} else {
var1054 = varonce1053;
varonce1053 = NULL;
}
{
var1059 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1060 = ((val*(*)(val* self))(var1059->class->vft[COLOR_standard__string__Object__to_s]))(var1059); /* to_s on <var1059:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1054)->values[0]=var1060;
{
var1061 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1062 = ((val*(*)(val* self))(var1061->class->vft[COLOR_standard__string__Object__to_s]))(var1061); /* to_s on <var1061:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1054)->values[2]=var1062;
{
var1063 = ((val*(*)(val* self))(var1054->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1054); /* native_to_s on <var1054:NativeArray[String]>*/
}
varonce1053 = var1054;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2293);
fatal_exit(1);
}
{
var1064 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1063, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1064); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1065!=NULL)) {
var1066 = varonce1065;
} else {
var1067 = "/";
var1068 = standard___standard__NativeString___to_s_with_length(var1067, 1l);
var1066 = var1068;
varonce1065 = var1066;
}
{
var1069 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1066); /* == on <var_pname:String>*/
}
if (var1069){
if (unlikely(varonce1070==NULL)) {
var1071 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1072!=NULL)) {
var1073 = varonce1072;
} else {
var1074 = " / ";
var1075 = standard___standard__NativeString___to_s_with_length(var1074, 3l);
var1073 = var1075;
varonce1072 = var1073;
}
((struct instance_standard__NativeArray*)var1071)->values[1]=var1073;
} else {
var1071 = varonce1070;
varonce1070 = NULL;
}
{
var1076 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1077 = ((val*(*)(val* self))(var1076->class->vft[COLOR_standard__string__Object__to_s]))(var1076); /* to_s on <var1076:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1071)->values[0]=var1077;
{
var1078 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1079 = ((val*(*)(val* self))(var1078->class->vft[COLOR_standard__string__Object__to_s]))(var1078); /* to_s on <var1078:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1071)->values[2]=var1079;
{
var1080 = ((val*(*)(val* self))(var1071->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1071); /* native_to_s on <var1071:NativeArray[String]>*/
}
varonce1070 = var1071;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2296);
fatal_exit(1);
}
{
var1081 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1080, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1081); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1082!=NULL)) {
var1083 = varonce1082;
} else {
var1084 = "==";
var1085 = standard___standard__NativeString___to_s_with_length(var1084, 2l);
var1083 = var1085;
varonce1082 = var1083;
}
{
var1086 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1083); /* == on <var_pname:String>*/
}
if (var1086){
{
var1087 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1088 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1089 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1087, var1088);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1089); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1090!=NULL)) {
var1091 = varonce1090;
} else {
var1092 = "!=";
var1093 = standard___standard__NativeString___to_s_with_length(var1092, 2l);
var1091 = var1093;
varonce1090 = var1091;
}
{
var1094 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1091); /* == on <var_pname:String>*/
}
if (var1094){
{
var1095 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1096 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1097 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1095, var1096);
}
var_res1098 = var1097;
if (unlikely(varonce1099==NULL)) {
var1100 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1101!=NULL)) {
var1102 = varonce1101;
} else {
var1103 = "!";
var1104 = standard___standard__NativeString___to_s_with_length(var1103, 1l);
var1102 = var1104;
varonce1101 = var1102;
}
((struct instance_standard__NativeArray*)var1100)->values[0]=var1102;
} else {
var1100 = varonce1099;
varonce1099 = NULL;
}
{
var1105 = ((val*(*)(val* self))(var_res1098->class->vft[COLOR_standard__string__Object__to_s]))(var_res1098); /* to_s on <var_res1098:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var1100)->values[1]=var1105;
{
var1106 = ((val*(*)(val* self))(var1100->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1100); /* native_to_s on <var1100:NativeArray[String]>*/
}
varonce1099 = var1100;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2303);
fatal_exit(1);
}
{
var1107 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1106, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1107); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1108!=NULL)) {
var1109 = varonce1108;
} else {
var1110 = "<";
var1111 = standard___standard__NativeString___to_s_with_length(var1110, 1l);
var1109 = var1111;
varonce1108 = var1109;
}
{
var1112 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1109); /* == on <var_pname:String>*/
}
if (var1112){
if (unlikely(varonce1113==NULL)) {
var1114 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1115!=NULL)) {
var1116 = varonce1115;
} else {
var1117 = " < ";
var1118 = standard___standard__NativeString___to_s_with_length(var1117, 3l);
var1116 = var1118;
varonce1115 = var1116;
}
((struct instance_standard__NativeArray*)var1114)->values[1]=var1116;
} else {
var1114 = varonce1113;
varonce1113 = NULL;
}
{
var1119 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1120 = ((val*(*)(val* self))(var1119->class->vft[COLOR_standard__string__Object__to_s]))(var1119); /* to_s on <var1119:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1114)->values[0]=var1120;
{
var1121 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1122 = ((val*(*)(val* self))(var1121->class->vft[COLOR_standard__string__Object__to_s]))(var1121); /* to_s on <var1121:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1114)->values[2]=var1122;
{
var1123 = ((val*(*)(val* self))(var1114->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1114); /* native_to_s on <var1114:NativeArray[String]>*/
}
varonce1113 = var1114;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2306);
fatal_exit(1);
}
{
var1124 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1123, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1124); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1125!=NULL)) {
var1126 = varonce1125;
} else {
var1127 = ">";
var1128 = standard___standard__NativeString___to_s_with_length(var1127, 1l);
var1126 = var1128;
varonce1125 = var1126;
}
{
var1129 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1126); /* == on <var_pname:String>*/
}
if (var1129){
if (unlikely(varonce1130==NULL)) {
var1131 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1132!=NULL)) {
var1133 = varonce1132;
} else {
var1134 = " > ";
var1135 = standard___standard__NativeString___to_s_with_length(var1134, 3l);
var1133 = var1135;
varonce1132 = var1133;
}
((struct instance_standard__NativeArray*)var1131)->values[1]=var1133;
} else {
var1131 = varonce1130;
varonce1130 = NULL;
}
{
var1136 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1137 = ((val*(*)(val* self))(var1136->class->vft[COLOR_standard__string__Object__to_s]))(var1136); /* to_s on <var1136:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1131)->values[0]=var1137;
{
var1138 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1139 = ((val*(*)(val* self))(var1138->class->vft[COLOR_standard__string__Object__to_s]))(var1138); /* to_s on <var1138:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1131)->values[2]=var1139;
{
var1140 = ((val*(*)(val* self))(var1131->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1131); /* native_to_s on <var1131:NativeArray[String]>*/
}
varonce1130 = var1131;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2309);
fatal_exit(1);
}
{
var1141 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1140, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1141); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1142!=NULL)) {
var1143 = varonce1142;
} else {
var1144 = "<=";
var1145 = standard___standard__NativeString___to_s_with_length(var1144, 2l);
var1143 = var1145;
varonce1142 = var1143;
}
{
var1146 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1143); /* == on <var_pname:String>*/
}
if (var1146){
if (unlikely(varonce1147==NULL)) {
var1148 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1149!=NULL)) {
var1150 = varonce1149;
} else {
var1151 = " <= ";
var1152 = standard___standard__NativeString___to_s_with_length(var1151, 4l);
var1150 = var1152;
varonce1149 = var1150;
}
((struct instance_standard__NativeArray*)var1148)->values[1]=var1150;
} else {
var1148 = varonce1147;
varonce1147 = NULL;
}
{
var1153 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1154 = ((val*(*)(val* self))(var1153->class->vft[COLOR_standard__string__Object__to_s]))(var1153); /* to_s on <var1153:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1148)->values[0]=var1154;
{
var1155 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1156 = ((val*(*)(val* self))(var1155->class->vft[COLOR_standard__string__Object__to_s]))(var1155); /* to_s on <var1155:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1148)->values[2]=var1156;
{
var1157 = ((val*(*)(val* self))(var1148->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1148); /* native_to_s on <var1148:NativeArray[String]>*/
}
varonce1147 = var1148;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2312);
fatal_exit(1);
}
{
var1158 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1157, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1158); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1159!=NULL)) {
var1160 = varonce1159;
} else {
var1161 = ">=";
var1162 = standard___standard__NativeString___to_s_with_length(var1161, 2l);
var1160 = var1162;
varonce1159 = var1160;
}
{
var1163 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1160); /* == on <var_pname:String>*/
}
if (var1163){
if (unlikely(varonce1164==NULL)) {
var1165 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1166!=NULL)) {
var1167 = varonce1166;
} else {
var1168 = " >= ";
var1169 = standard___standard__NativeString___to_s_with_length(var1168, 4l);
var1167 = var1169;
varonce1166 = var1167;
}
((struct instance_standard__NativeArray*)var1165)->values[1]=var1167;
} else {
var1165 = varonce1164;
varonce1164 = NULL;
}
{
var1170 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1171 = ((val*(*)(val* self))(var1170->class->vft[COLOR_standard__string__Object__to_s]))(var1170); /* to_s on <var1170:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1165)->values[0]=var1171;
{
var1172 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1173 = ((val*(*)(val* self))(var1172->class->vft[COLOR_standard__string__Object__to_s]))(var1172); /* to_s on <var1172:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1165)->values[2]=var1173;
{
var1174 = ((val*(*)(val* self))(var1165->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1165); /* native_to_s on <var1165:NativeArray[String]>*/
}
varonce1164 = var1165;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2315);
fatal_exit(1);
}
{
var1175 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1174, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1175); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1176!=NULL)) {
var1177 = varonce1176;
} else {
var1178 = "to_i";
var1179 = standard___standard__NativeString___to_s_with_length(var1178, 4l);
var1177 = var1179;
varonce1176 = var1177;
}
{
var1180 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1177); /* == on <var_pname:String>*/
}
if (var1180){
if (unlikely(varonce1181==NULL)) {
var1182 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1183!=NULL)) {
var1184 = varonce1183;
} else {
var1185 = "(long)";
var1186 = standard___standard__NativeString___to_s_with_length(var1185, 6l);
var1184 = var1186;
varonce1183 = var1184;
}
((struct instance_standard__NativeArray*)var1182)->values[0]=var1184;
} else {
var1182 = varonce1181;
varonce1181 = NULL;
}
{
var1187 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1188 = ((val*(*)(val* self))(var1187->class->vft[COLOR_standard__string__Object__to_s]))(var1187); /* to_s on <var1187:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1182)->values[1]=var1188;
{
var1189 = ((val*(*)(val* self))(var1182->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1182); /* native_to_s on <var1182:NativeArray[String]>*/
}
varonce1181 = var1182;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2318);
fatal_exit(1);
}
{
var1190 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1189, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1190); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1191!=NULL)) {
var1192 = varonce1191;
} else {
var1193 = "to_b";
var1194 = standard___standard__NativeString___to_s_with_length(var1193, 4l);
var1192 = var1194;
varonce1191 = var1192;
}
{
var1195 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1192); /* == on <var_pname:String>*/
}
if (var1195){
if (unlikely(varonce1196==NULL)) {
var1197 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1198!=NULL)) {
var1199 = varonce1198;
} else {
var1200 = "(unsigned char)";
var1201 = standard___standard__NativeString___to_s_with_length(var1200, 15l);
var1199 = var1201;
varonce1198 = var1199;
}
((struct instance_standard__NativeArray*)var1197)->values[0]=var1199;
} else {
var1197 = varonce1196;
varonce1196 = NULL;
}
{
var1202 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1203 = ((val*(*)(val* self))(var1202->class->vft[COLOR_standard__string__Object__to_s]))(var1202); /* to_s on <var1202:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1197)->values[1]=var1203;
{
var1204 = ((val*(*)(val* self))(var1197->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1197); /* native_to_s on <var1197:NativeArray[String]>*/
}
varonce1196 = var1197;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2321);
fatal_exit(1);
}
{
var1205 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1204, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1205); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
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
} else {
if (likely(varonce1206!=NULL)) {
var1207 = varonce1206;
} else {
var1208 = "NativeString";
var1209 = standard___standard__NativeString___to_s_with_length(var1208, 12l);
var1207 = var1209;
varonce1206 = var1207;
}
{
var1210 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var1207); /* == on <var_cname:String>*/
}
if (var1210){
if (likely(varonce1211!=NULL)) {
var1212 = varonce1211;
} else {
var1213 = "[]";
var1214 = standard___standard__NativeString___to_s_with_length(var1213, 2l);
var1212 = var1214;
varonce1211 = var1212;
}
{
var1215 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1212); /* == on <var_pname:String>*/
}
if (var1215){
if (unlikely(varonce1216==NULL)) {
var1217 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce1218!=NULL)) {
var1219 = varonce1218;
} else {
var1220 = "(uint32_t)(unsigned char)";
var1221 = standard___standard__NativeString___to_s_with_length(var1220, 25l);
var1219 = var1221;
varonce1218 = var1219;
}
((struct instance_standard__NativeArray*)var1217)->values[0]=var1219;
if (likely(varonce1222!=NULL)) {
var1223 = varonce1222;
} else {
var1224 = "[";
var1225 = standard___standard__NativeString___to_s_with_length(var1224, 1l);
var1223 = var1225;
varonce1222 = var1223;
}
((struct instance_standard__NativeArray*)var1217)->values[2]=var1223;
if (likely(varonce1226!=NULL)) {
var1227 = varonce1226;
} else {
var1228 = "]";
var1229 = standard___standard__NativeString___to_s_with_length(var1228, 1l);
var1227 = var1229;
varonce1226 = var1227;
}
((struct instance_standard__NativeArray*)var1217)->values[4]=var1227;
} else {
var1217 = varonce1216;
varonce1216 = NULL;
}
{
var1230 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1231 = ((val*(*)(val* self))(var1230->class->vft[COLOR_standard__string__Object__to_s]))(var1230); /* to_s on <var1230:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1217)->values[1]=var1231;
{
var1232 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1233 = ((val*(*)(val* self))(var1232->class->vft[COLOR_standard__string__Object__to_s]))(var1232); /* to_s on <var1232:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1217)->values[3]=var1233;
{
var1234 = ((val*(*)(val* self))(var1217->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1217); /* native_to_s on <var1217:NativeArray[String]>*/
}
varonce1216 = var1217;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2326);
fatal_exit(1);
}
{
var1235 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1234, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1235); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1236!=NULL)) {
var1237 = varonce1236;
} else {
var1238 = "[]=";
var1239 = standard___standard__NativeString___to_s_with_length(var1238, 3l);
var1237 = var1239;
varonce1236 = var1237;
}
{
var1240 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1237); /* == on <var_pname:String>*/
}
if (var1240){
if (unlikely(varonce1241==NULL)) {
var1242 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce1243!=NULL)) {
var1244 = varonce1243;
} else {
var1245 = "[";
var1246 = standard___standard__NativeString___to_s_with_length(var1245, 1l);
var1244 = var1246;
varonce1243 = var1244;
}
((struct instance_standard__NativeArray*)var1242)->values[1]=var1244;
if (likely(varonce1247!=NULL)) {
var1248 = varonce1247;
} else {
var1249 = "]=(unsigned char)";
var1250 = standard___standard__NativeString___to_s_with_length(var1249, 17l);
var1248 = var1250;
varonce1247 = var1248;
}
((struct instance_standard__NativeArray*)var1242)->values[3]=var1248;
if (likely(varonce1251!=NULL)) {
var1252 = varonce1251;
} else {
var1253 = ";";
var1254 = standard___standard__NativeString___to_s_with_length(var1253, 1l);
var1252 = var1254;
varonce1251 = var1252;
}
((struct instance_standard__NativeArray*)var1242)->values[5]=var1252;
} else {
var1242 = varonce1241;
varonce1241 = NULL;
}
{
var1255 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1256 = ((val*(*)(val* self))(var1255->class->vft[COLOR_standard__string__Object__to_s]))(var1255); /* to_s on <var1255:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1242)->values[0]=var1256;
{
var1257 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1258 = ((val*(*)(val* self))(var1257->class->vft[COLOR_standard__string__Object__to_s]))(var1257); /* to_s on <var1257:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1242)->values[2]=var1258;
{
var1259 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var1260 = ((val*(*)(val* self))(var1259->class->vft[COLOR_standard__string__Object__to_s]))(var1259); /* to_s on <var1259:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1242)->values[4]=var1260;
{
var1261 = ((val*(*)(val* self))(var1242->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1242); /* native_to_s on <var1242:NativeArray[String]>*/
}
varonce1241 = var1242;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1261); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1262!=NULL)) {
var1263 = varonce1262;
} else {
var1264 = "copy_to";
var1265 = standard___standard__NativeString___to_s_with_length(var1264, 7l);
var1263 = var1265;
varonce1262 = var1263;
}
{
var1266 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1263); /* == on <var_pname:String>*/
}
if (var1266){
if (unlikely(varonce1267==NULL)) {
var1268 = NEW_standard__NativeArray(11l, &type_standard__NativeArray__standard__String);
if (likely(varonce1269!=NULL)) {
var1270 = varonce1269;
} else {
var1271 = "memmove(";
var1272 = standard___standard__NativeString___to_s_with_length(var1271, 8l);
var1270 = var1272;
varonce1269 = var1270;
}
((struct instance_standard__NativeArray*)var1268)->values[0]=var1270;
if (likely(varonce1273!=NULL)) {
var1274 = varonce1273;
} else {
var1275 = "+";
var1276 = standard___standard__NativeString___to_s_with_length(var1275, 1l);
var1274 = var1276;
varonce1273 = var1274;
}
((struct instance_standard__NativeArray*)var1268)->values[2]=var1274;
if (likely(varonce1277!=NULL)) {
var1278 = varonce1277;
} else {
var1279 = ",";
var1280 = standard___standard__NativeString___to_s_with_length(var1279, 1l);
var1278 = var1280;
varonce1277 = var1278;
}
((struct instance_standard__NativeArray*)var1268)->values[4]=var1278;
if (likely(varonce1281!=NULL)) {
var1282 = varonce1281;
} else {
var1283 = "+";
var1284 = standard___standard__NativeString___to_s_with_length(var1283, 1l);
var1282 = var1284;
varonce1281 = var1282;
}
((struct instance_standard__NativeArray*)var1268)->values[6]=var1282;
if (likely(varonce1285!=NULL)) {
var1286 = varonce1285;
} else {
var1287 = ",";
var1288 = standard___standard__NativeString___to_s_with_length(var1287, 1l);
var1286 = var1288;
varonce1285 = var1286;
}
((struct instance_standard__NativeArray*)var1268)->values[8]=var1286;
if (likely(varonce1289!=NULL)) {
var1290 = varonce1289;
} else {
var1291 = ");";
var1292 = standard___standard__NativeString___to_s_with_length(var1291, 2l);
var1290 = var1292;
varonce1289 = var1290;
}
((struct instance_standard__NativeArray*)var1268)->values[10]=var1290;
} else {
var1268 = varonce1267;
varonce1267 = NULL;
}
{
var1293 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1294 = ((val*(*)(val* self))(var1293->class->vft[COLOR_standard__string__Object__to_s]))(var1293); /* to_s on <var1293:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1268)->values[1]=var1294;
{
var1295 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 4l);
}
{
var1296 = ((val*(*)(val* self))(var1295->class->vft[COLOR_standard__string__Object__to_s]))(var1295); /* to_s on <var1295:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1268)->values[3]=var1296;
{
var1297 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1298 = ((val*(*)(val* self))(var1297->class->vft[COLOR_standard__string__Object__to_s]))(var1297); /* to_s on <var1297:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1268)->values[5]=var1298;
{
var1299 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 3l);
}
{
var1300 = ((val*(*)(val* self))(var1299->class->vft[COLOR_standard__string__Object__to_s]))(var1299); /* to_s on <var1299:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1268)->values[7]=var1300;
{
var1301 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var1302 = ((val*(*)(val* self))(var1301->class->vft[COLOR_standard__string__Object__to_s]))(var1301); /* to_s on <var1301:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1268)->values[9]=var1302;
{
var1303 = ((val*(*)(val* self))(var1268->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1268); /* native_to_s on <var1268:NativeArray[String]>*/
}
varonce1267 = var1268;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1303); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1304!=NULL)) {
var1305 = varonce1304;
} else {
var1306 = "atoi";
var1307 = standard___standard__NativeString___to_s_with_length(var1306, 4l);
var1305 = var1307;
varonce1304 = var1305;
}
{
var1308 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1305); /* == on <var_pname:String>*/
}
if (var1308){
if (unlikely(varonce1309==NULL)) {
var1310 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1311!=NULL)) {
var1312 = varonce1311;
} else {
var1313 = "atoi(";
var1314 = standard___standard__NativeString___to_s_with_length(var1313, 5l);
var1312 = var1314;
varonce1311 = var1312;
}
((struct instance_standard__NativeArray*)var1310)->values[0]=var1312;
if (likely(varonce1315!=NULL)) {
var1316 = varonce1315;
} else {
var1317 = ");";
var1318 = standard___standard__NativeString___to_s_with_length(var1317, 2l);
var1316 = var1318;
varonce1315 = var1316;
}
((struct instance_standard__NativeArray*)var1310)->values[2]=var1316;
} else {
var1310 = varonce1309;
varonce1309 = NULL;
}
{
var1319 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1320 = ((val*(*)(val* self))(var1319->class->vft[COLOR_standard__string__Object__to_s]))(var1319); /* to_s on <var1319:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1310)->values[1]=var1320;
{
var1321 = ((val*(*)(val* self))(var1310->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1310); /* native_to_s on <var1310:NativeArray[String]>*/
}
varonce1309 = var1310;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2335);
fatal_exit(1);
}
{
var1322 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1321, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1322); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1323!=NULL)) {
var1324 = varonce1323;
} else {
var1325 = "fast_cstring";
var1326 = standard___standard__NativeString___to_s_with_length(var1325, 12l);
var1324 = var1326;
varonce1323 = var1324;
}
{
var1327 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1324); /* == on <var_pname:String>*/
}
if (var1327){
if (unlikely(varonce1328==NULL)) {
var1329 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1330!=NULL)) {
var1331 = varonce1330;
} else {
var1332 = " + ";
var1333 = standard___standard__NativeString___to_s_with_length(var1332, 3l);
var1331 = var1333;
varonce1330 = var1331;
}
((struct instance_standard__NativeArray*)var1329)->values[1]=var1331;
} else {
var1329 = varonce1328;
varonce1328 = NULL;
}
{
var1334 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1335 = ((val*(*)(val* self))(var1334->class->vft[COLOR_standard__string__Object__to_s]))(var1334); /* to_s on <var1334:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1329)->values[0]=var1335;
{
var1336 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1337 = ((val*(*)(val* self))(var1336->class->vft[COLOR_standard__string__Object__to_s]))(var1336); /* to_s on <var1336:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1329)->values[2]=var1337;
{
var1338 = ((val*(*)(val* self))(var1329->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1329); /* native_to_s on <var1329:NativeArray[String]>*/
}
varonce1328 = var1329;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2338);
fatal_exit(1);
}
{
var1339 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1338, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1339); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1340!=NULL)) {
var1341 = varonce1340;
} else {
var1342 = "new";
var1343 = standard___standard__NativeString___to_s_with_length(var1342, 3l);
var1341 = var1343;
varonce1340 = var1341;
}
{
var1344 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1341); /* == on <var_pname:String>*/
}
if (var1344){
if (unlikely(varonce1345==NULL)) {
var1346 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1347!=NULL)) {
var1348 = varonce1347;
} else {
var1349 = "(char*)nit_alloc(";
var1350 = standard___standard__NativeString___to_s_with_length(var1349, 17l);
var1348 = var1350;
varonce1347 = var1348;
}
((struct instance_standard__NativeArray*)var1346)->values[0]=var1348;
if (likely(varonce1351!=NULL)) {
var1352 = varonce1351;
} else {
var1353 = ")";
var1354 = standard___standard__NativeString___to_s_with_length(var1353, 1l);
var1352 = var1354;
varonce1351 = var1352;
}
((struct instance_standard__NativeArray*)var1346)->values[2]=var1352;
} else {
var1346 = varonce1345;
varonce1345 = NULL;
}
{
var1355 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1356 = ((val*(*)(val* self))(var1355->class->vft[COLOR_standard__string__Object__to_s]))(var1355); /* to_s on <var1355:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1346)->values[1]=var1356;
{
var1357 = ((val*(*)(val* self))(var1346->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1346); /* native_to_s on <var1346:NativeArray[String]>*/
}
varonce1345 = var1346;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2341);
fatal_exit(1);
}
{
var1358 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1357, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1358); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
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
} else {
if (likely(varonce1359!=NULL)) {
var1360 = varonce1359;
} else {
var1361 = "NativeArray";
var1362 = standard___standard__NativeString___to_s_with_length(var1361, 11l);
var1360 = var1362;
varonce1359 = var1360;
}
{
var1363 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var1360); /* == on <var_cname:String>*/
}
if (var1363){
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_def(var_v, var_pname, var_ret, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#native_array_def on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce1364!=NULL)) {
var1365 = varonce1364;
} else {
var1366 = "exit";
var1367 = standard___standard__NativeString___to_s_with_length(var1366, 4l);
var1365 = var1367;
varonce1364 = var1365;
}
{
var1368 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1365); /* == on <var_pname:String>*/
}
if (var1368){
if (unlikely(varonce1369==NULL)) {
var1370 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1371!=NULL)) {
var1372 = varonce1371;
} else {
var1373 = "exit(";
var1374 = standard___standard__NativeString___to_s_with_length(var1373, 5l);
var1372 = var1374;
varonce1371 = var1372;
}
((struct instance_standard__NativeArray*)var1370)->values[0]=var1372;
if (likely(varonce1375!=NULL)) {
var1376 = varonce1375;
} else {
var1377 = ");";
var1378 = standard___standard__NativeString___to_s_with_length(var1377, 2l);
var1376 = var1378;
varonce1375 = var1376;
}
((struct instance_standard__NativeArray*)var1370)->values[2]=var1376;
} else {
var1370 = varonce1369;
varonce1369 = NULL;
}
{
var1379 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1380 = ((val*(*)(val* self))(var1379->class->vft[COLOR_standard__string__Object__to_s]))(var1379); /* to_s on <var1379:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1370)->values[1]=var1380;
{
var1381 = ((val*(*)(val* self))(var1370->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1370); /* native_to_s on <var1370:NativeArray[String]>*/
}
varonce1369 = var1370;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1381); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1382!=NULL)) {
var1383 = varonce1382;
} else {
var1384 = "sys";
var1385 = standard___standard__NativeString___to_s_with_length(var1384, 3l);
var1383 = var1385;
varonce1382 = var1383;
}
{
var1386 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1383); /* == on <var_pname:String>*/
}
if (var1386){
if (likely(varonce1387!=NULL)) {
var1388 = varonce1387;
} else {
var1389 = "glob_sys";
var1390 = standard___standard__NativeString___to_s_with_length(var1389, 8l);
var1388 = var1390;
varonce1387 = var1388;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2352);
fatal_exit(1);
}
{
var1391 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1388, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1391); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1392!=NULL)) {
var1393 = varonce1392;
} else {
var1394 = "calloc_string";
var1395 = standard___standard__NativeString___to_s_with_length(var1394, 13l);
var1393 = var1395;
varonce1392 = var1393;
}
{
var1396 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1393); /* == on <var_pname:String>*/
}
if (var1396){
if (unlikely(varonce1397==NULL)) {
var1398 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1399!=NULL)) {
var1400 = varonce1399;
} else {
var1401 = "(char*)nit_alloc(";
var1402 = standard___standard__NativeString___to_s_with_length(var1401, 17l);
var1400 = var1402;
varonce1399 = var1400;
}
((struct instance_standard__NativeArray*)var1398)->values[0]=var1400;
if (likely(varonce1403!=NULL)) {
var1404 = varonce1403;
} else {
var1405 = ")";
var1406 = standard___standard__NativeString___to_s_with_length(var1405, 1l);
var1404 = var1406;
varonce1403 = var1404;
}
((struct instance_standard__NativeArray*)var1398)->values[2]=var1404;
} else {
var1398 = varonce1397;
varonce1397 = NULL;
}
{
var1407 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1408 = ((val*(*)(val* self))(var1407->class->vft[COLOR_standard__string__Object__to_s]))(var1407); /* to_s on <var1407:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1398)->values[1]=var1408;
{
var1409 = ((val*(*)(val* self))(var1398->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1398); /* native_to_s on <var1398:NativeArray[String]>*/
}
varonce1397 = var1398;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2355);
fatal_exit(1);
}
{
var1410 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1409, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1410); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1411!=NULL)) {
var1412 = varonce1411;
} else {
var1413 = "calloc_array";
var1414 = standard___standard__NativeString___to_s_with_length(var1413, 12l);
var1412 = var1414;
varonce1411 = var1412;
}
{
var1415 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1412); /* == on <var_pname:String>*/
}
if (var1415){
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2358);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__calloc_array]))(var_v, var_ret, var_arguments); /* calloc_array on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1416!=NULL)) {
var1417 = varonce1416;
} else {
var1418 = "object_id";
var1419 = standard___standard__NativeString___to_s_with_length(var1418, 9l);
var1417 = var1419;
varonce1416 = var1417;
}
{
var1420 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1417); /* == on <var_pname:String>*/
}
if (var1420){
if (unlikely(varonce1421==NULL)) {
var1422 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1423!=NULL)) {
var1424 = varonce1423;
} else {
var1425 = "(long)";
var1426 = standard___standard__NativeString___to_s_with_length(var1425, 6l);
var1424 = var1426;
varonce1423 = var1424;
}
((struct instance_standard__NativeArray*)var1422)->values[0]=var1424;
} else {
var1422 = varonce1421;
varonce1421 = NULL;
}
{
var1427 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var1428 = ((val*(*)(val* self))(var1427->class->vft[COLOR_standard__string__Object__to_s]))(var1427); /* to_s on <var1427:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1422)->values[1]=var1428;
{
var1429 = ((val*(*)(val* self))(var1422->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1422); /* native_to_s on <var1422:NativeArray[String]>*/
}
varonce1421 = var1422;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2361);
fatal_exit(1);
}
{
var1430 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1429, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1430); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1431!=NULL)) {
var1432 = varonce1431;
} else {
var1433 = "is_same_type";
var1434 = standard___standard__NativeString___to_s_with_length(var1433, 12l);
var1432 = var1434;
varonce1431 = var1432;
}
{
var1435 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1432); /* == on <var_pname:String>*/
}
if (var1435){
{
var1436 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1437 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1438 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__is_same_type_test(var_v, var1436, var1437);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1438); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1439!=NULL)) {
var1440 = varonce1439;
} else {
var1441 = "is_same_instance";
var1442 = standard___standard__NativeString___to_s_with_length(var1441, 16l);
var1440 = var1442;
varonce1439 = var1440;
}
{
var1443 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1440); /* == on <var_pname:String>*/
}
if (var1443){
{
var1444 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1445 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1446 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1444, var1445);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1446); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1447!=NULL)) {
var1448 = varonce1447;
} else {
var1449 = "output_class_name";
var1450 = standard___standard__NativeString___to_s_with_length(var1449, 17l);
var1448 = var1450;
varonce1447 = var1448;
}
{
var1451 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1448); /* == on <var_pname:String>*/
}
if (var1451){
{
var1452 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var1453 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1452); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_nat = var1453;
if (unlikely(varonce1454==NULL)) {
var1455 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1456!=NULL)) {
var1457 = varonce1456;
} else {
var1458 = "printf(\"%s\\n\", ";
var1459 = standard___standard__NativeString___to_s_with_length(var1458, 15l);
var1457 = var1459;
varonce1456 = var1457;
}
((struct instance_standard__NativeArray*)var1455)->values[0]=var1457;
if (likely(varonce1460!=NULL)) {
var1461 = varonce1460;
} else {
var1462 = ");";
var1463 = standard___standard__NativeString___to_s_with_length(var1462, 2l);
var1461 = var1463;
varonce1460 = var1461;
}
((struct instance_standard__NativeArray*)var1455)->values[2]=var1461;
} else {
var1455 = varonce1454;
varonce1454 = NULL;
}
((struct instance_standard__NativeArray*)var1455)->values[1]=var_nat;
{
var1464 = ((val*(*)(val* self))(var1455->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1455); /* native_to_s on <var1455:NativeArray[String]>*/
}
varonce1454 = var1455;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1464); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1465!=NULL)) {
var1466 = varonce1465;
} else {
var1467 = "native_class_name";
var1468 = standard___standard__NativeString___to_s_with_length(var1467, 17l);
var1466 = var1468;
varonce1465 = var1466;
}
{
var1469 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1466); /* == on <var_pname:String>*/
}
if (var1469){
{
var1470 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var1471 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1470); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_nat1472 = var1471;
if (unlikely(varonce1473==NULL)) {
var1474 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1475!=NULL)) {
var1476 = varonce1475;
} else {
var1477 = "(char*)";
var1478 = standard___standard__NativeString___to_s_with_length(var1477, 7l);
var1476 = var1478;
varonce1475 = var1476;
}
((struct instance_standard__NativeArray*)var1474)->values[0]=var1476;
} else {
var1474 = varonce1473;
varonce1473 = NULL;
}
((struct instance_standard__NativeArray*)var1474)->values[1]=var_nat1472;
{
var1479 = ((val*(*)(val* self))(var1474->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1474); /* native_to_s on <var1474:NativeArray[String]>*/
}
varonce1473 = var1474;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2375);
fatal_exit(1);
}
{
var1480 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1479, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1480); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1481!=NULL)) {
var1482 = varonce1481;
} else {
var1483 = "force_garbage_collection";
var1484 = standard___standard__NativeString___to_s_with_length(var1483, 24l);
var1482 = var1484;
varonce1481 = var1482;
}
{
var1485 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1482); /* == on <var_pname:String>*/
}
if (var1485){
if (likely(varonce1486!=NULL)) {
var1487 = varonce1486;
} else {
var1488 = "nit_gcollect();";
var1489 = standard___standard__NativeString___to_s_with_length(var1488, 15l);
var1487 = var1489;
varonce1486 = var1487;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1487); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1490!=NULL)) {
var1491 = varonce1490;
} else {
var1492 = "native_argc";
var1493 = standard___standard__NativeString___to_s_with_length(var1492, 11l);
var1491 = var1493;
varonce1490 = var1491;
}
{
var1494 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1491); /* == on <var_pname:String>*/
}
if (var1494){
if (likely(varonce1495!=NULL)) {
var1496 = varonce1495;
} else {
var1497 = "glob_argc";
var1498 = standard___standard__NativeString___to_s_with_length(var1497, 9l);
var1496 = var1498;
varonce1495 = var1496;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2381);
fatal_exit(1);
}
{
var1499 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1496, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1499); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1500!=NULL)) {
var1501 = varonce1500;
} else {
var1502 = "native_argv";
var1503 = standard___standard__NativeString___to_s_with_length(var1502, 11l);
var1501 = var1503;
varonce1500 = var1501;
}
{
var1504 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1501); /* == on <var_pname:String>*/
}
if (var1504){
if (unlikely(varonce1505==NULL)) {
var1506 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1507!=NULL)) {
var1508 = varonce1507;
} else {
var1509 = "glob_argv[";
var1510 = standard___standard__NativeString___to_s_with_length(var1509, 10l);
var1508 = var1510;
varonce1507 = var1508;
}
((struct instance_standard__NativeArray*)var1506)->values[0]=var1508;
if (likely(varonce1511!=NULL)) {
var1512 = varonce1511;
} else {
var1513 = "]";
var1514 = standard___standard__NativeString___to_s_with_length(var1513, 1l);
var1512 = var1514;
varonce1511 = var1512;
}
((struct instance_standard__NativeArray*)var1506)->values[2]=var1512;
} else {
var1506 = varonce1505;
varonce1505 = NULL;
}
{
var1515 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1516 = ((val*(*)(val* self))(var1515->class->vft[COLOR_standard__string__Object__to_s]))(var1515); /* to_s on <var1515:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var1506)->values[1]=var1516;
{
var1517 = ((val*(*)(val* self))(var1506->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1506); /* native_to_s on <var1506:NativeArray[String]>*/
}
varonce1505 = var1506;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2384);
fatal_exit(1);
}
{
var1518 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1517, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1518); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
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
/* method abstract_compiler#AMethPropdef#compile_externmeth_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nit__abstract_compiler___AMethPropdef___compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : ANodes[AExpr] */;
val* var19 /* : ANodes[AExpr] */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : AbstractCompiler */;
val* var26 /* : AbstractCompiler */;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
val* var30 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MClassDef */;
val* var35 /* : MClassDef */;
val* var36 /* : MModule */;
val* var38 /* : MModule */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var39 /* : nullable MSignature */;
val* var41 /* : nullable MSignature */;
val* var42 /* : nullable MType */;
val* var44 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
val* var51 /* : MType */;
val* var52 /* : RuntimeVariable */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var_other56 /* var other: nullable Object */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "extern";
var3 = standard___standard__NativeString___to_s_with_length(var2, 6l);
var1 = var3;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit__annotation___Prod___get_single_annotation(self, var1, var7);
}
var_at = var10;
if (var_at == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_at, var_other); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_at) on <var_at:nullable AAnnotation(AAnnotation)> */
var19 = var_at->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_at:nullable AAnnotation(AAnnotation)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2988);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var17);
}
{
{ /* Inline kernel#Int#== (var20,1l) on <var20:Int> */
var23 = var20 == 1l;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var11 = var21;
} else {
var11 = var_;
}
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var26 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var24) on <var24:AbstractCompiler> */
var29 = var24->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var24:AbstractCompiler> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nit__annotation___AAnnotation___arg_as_string(var_at, var27);
}
var_externname = var30;
if (var_externname == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_externname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_externname, ((val*)NULL)); /* == on <var_externname:nullable Object(nullable String)>*/
var31 = var32;
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
}
} else {
var = 0;
goto RET_LABEL;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var35 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var33) on <var33:MClassDef> */
var38 = var33->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var33:MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_extern(var_v, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = ((val*)NULL);
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var41 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (var39 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2404);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var39) on <var39:nullable MSignature> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
fatal_exit(1);
}
var44 = var39->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var39:nullable MSignature> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_ret = var42;
if (var_ret == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var48 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
{
var50 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var51 = nit___nit__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var50);
}
var_ret = var51;
{
var52 = nit___nit__AbstractCompilerVisitor___new_var_extern(var_v, var_ret);
}
var_res = var52;
} else {
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
if (var_res == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other56 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other56) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var59 = var_res == var_other56;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
if (unlikely(varonce60==NULL)) {
var61 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "(";
var65 = standard___standard__NativeString___to_s_with_length(var64, 1l);
var63 = var65;
varonce62 = var63;
}
((struct instance_standard__NativeArray*)var61)->values[1]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ");";
var69 = standard___standard__NativeString___to_s_with_length(var68, 2l);
var67 = var69;
varonce66 = var67;
}
((struct instance_standard__NativeArray*)var61)->values[3]=var67;
} else {
var61 = varonce60;
varonce60 = NULL;
}
((struct instance_standard__NativeArray*)var61)->values[0]=var_externname;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ", ";
var73 = standard___standard__NativeString___to_s_with_length(var72, 2l);
var71 = var73;
varonce70 = var71;
}
{
var74 = standard__string___Collection___join(var_arguments, var71);
}
((struct instance_standard__NativeArray*)var61)->values[2]=var74;
{
var75 = ((val*(*)(val* self))(var61->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (unlikely(varonce76==NULL)) {
var77 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " = ";
var81 = standard___standard__NativeString___to_s_with_length(var80, 3l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var77)->values[1]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "(";
var85 = standard___standard__NativeString___to_s_with_length(var84, 1l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var77)->values[3]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ");";
var89 = standard___standard__NativeString___to_s_with_length(var88, 2l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var77)->values[5]=var87;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var90 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var77)->values[0]=var90;
((struct instance_standard__NativeArray*)var77)->values[2]=var_externname;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = ", ";
var94 = standard___standard__NativeString___to_s_with_length(var93, 2l);
var92 = var94;
varonce91 = var92;
}
{
var95 = standard__string___Collection___join(var_arguments, var92);
}
((struct instance_standard__NativeArray*)var77)->values[4]=var95;
{
var96 = ((val*(*)(val* self))(var77->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var96); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2416);
fatal_exit(1);
}
{
var97 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = var97;
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_externinit_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nit__abstract_compiler___AMethPropdef___compile_externinit_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AbstractCompiler */;
val* var18 /* : AbstractCompiler */;
val* var19 /* : ModelBuilder */;
val* var21 /* : ModelBuilder */;
val* var22 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
val* var31 /* : nullable Object */;
val* var32 /* : MType */;
val* var34 /* : MType */;
val* var_ret /* var ret: MType */;
val* var35 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var36 /* : nullable Object */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "extern";
var3 = standard___standard__NativeString___to_s_with_length(var2, 6l);
var1 = var3;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit__annotation___Prod___get_single_annotation(self, var1, var7);
}
var_at = var10;
if (var_at == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_at, var_other); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var18 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var16) on <var16:AbstractCompiler> */
var21 = var16->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var16:AbstractCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit__annotation___AAnnotation___arg_as_string(var_at, var19);
}
var_externname = var22;
if (var_externname == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_externname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_externname, ((val*)NULL)); /* == on <var_externname:nullable Object(nullable String)>*/
var23 = var24;
}
if (var23){
var = 0;
goto RET_LABEL;
} else {
}
} else {
var = 0;
goto RET_LABEL;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var27 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var25) on <var25:MClassDef> */
var30 = var25->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var25:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_extern(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
{
var31 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var31) on <var31:nullable Object(RuntimeVariable)> */
var34 = var31->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var31:nullable Object(RuntimeVariable)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_ret = var32;
{
var35 = nit___nit__AbstractCompilerVisitor___new_var_extern(var_v, var_ret);
}
var_res = var35;
{
var36 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(var_arguments);
}
if (unlikely(varonce37==NULL)) {
var38 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " = ";
var42 = standard___standard__NativeString___to_s_with_length(var41, 3l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var38)->values[1]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "(";
var46 = standard___standard__NativeString___to_s_with_length(var45, 1l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var38)->values[3]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = ");";
var50 = standard___standard__NativeString___to_s_with_length(var49, 2l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var38)->values[5]=var48;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
var51 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var38)->values[0]=var51;
((struct instance_standard__NativeArray*)var38)->values[2]=var_externname;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = ", ";
var55 = standard___standard__NativeString___to_s_with_length(var54, 2l);
var53 = var55;
varonce52 = var53;
}
{
var56 = standard__string___Collection___join(var_arguments, var53);
}
((struct instance_standard__NativeArray*)var38)->values[4]=var56;
{
var57 = ((val*(*)(val* self))(var38->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var58 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = var58;
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrPropdef#can_inline for (self: AAttrPropdef): Bool */
short int nit__abstract_compiler___AAttrPropdef___APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrPropdef#compile_to_c for (self: AAttrPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nit__abstract_compiler___AAttrPropdef___APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable MType */;
val* var20 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
short int var25 /* : Bool */;
short int var_useiset /* var useiset: Bool */;
val* var26 /* : nullable MAttributeDef */;
val* var28 /* : nullable MAttributeDef */;
val* var29 /* : MProperty */;
val* var31 /* : MProperty */;
val* var_guard /* var guard: MAttribute */;
val* var32 /* : nullable MPropDef */;
val* var34 /* : nullable MPropDef */;
val* var35 /* : MProperty */;
val* var37 /* : MProperty */;
val* var38 /* : RuntimeVariable */;
val* var_set /* var set: nullable Object */;
val* var39 /* : RuntimeVariable */;
val* var40 /* : NativeArray[String] */;
static val* varonce;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : nullable MPropDef */;
val* var53 /* : nullable MPropDef */;
val* var54 /* : MProperty */;
val* var56 /* : MProperty */;
val* var57 /* : RuntimeVariable */;
val* var_res /* var res: nullable Object */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
short int var63 /* : Bool */;
val* var64 /* : RuntimeVariable */;
val* var_true_v /* var true_v: RuntimeVariable */;
val* var65 /* : nullable Object */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
val* var70 /* : nullable MPropDef */;
val* var72 /* : nullable MPropDef */;
val* var73 /* : MProperty */;
val* var75 /* : MProperty */;
val* var76 /* : nullable Object */;
val* var77 /* : RuntimeVariable */;
val* var78 /* : nullable StaticFrame */;
val* var80 /* : nullable StaticFrame */;
val* var81 /* : nullable RuntimeVariable */;
val* var83 /* : nullable RuntimeVariable */;
val* var84 /* : nullable MMethodDef */;
val* var86 /* : nullable MMethodDef */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
long var92 /* : Int */;
long var94 /* : Int */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : nullable MPropDef */;
val* var100 /* : nullable MPropDef */;
val* var101 /* : MProperty */;
val* var103 /* : MProperty */;
val* var104 /* : nullable Object */;
val* var105 /* : nullable Object */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
val* var109 /* : nullable MType */;
val* var111 /* : nullable MType */;
val* var_ret112 /* var ret: nullable MType */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var_116 /* var : Bool */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
short int var120 /* : Bool */;
short int var_useiset121 /* var useiset: Bool */;
short int var122 /* : Bool */;
val* var123 /* : nullable MAttributeDef */;
val* var125 /* : nullable MAttributeDef */;
val* var126 /* : MProperty */;
val* var128 /* : MProperty */;
val* var129 /* : nullable Object */;
val* var130 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var) on <var_mpropdef:MMethodDef> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var10 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var8,1l) on <var8:Int> */
var13 = var8 == 1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2455);
fatal_exit(1);
}
{
var14 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var_recv = var14;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var17 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var20 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ret = var18;
if (var_ret == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2461);
fatal_exit(1);
} else {
var22 = ((short int(*)(val* self))(var_ret->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var_ret); /* is_c_primitive on <var_ret:nullable MType>*/
}
var23 = !var22;
var_ = var23;
if (var23){
/* <var_ret:nullable MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(var_ret == NULL) {
var24 = 0;
} else {
if(cltype >= var_ret->type->table_size) {
var24 = 0;
} else {
var24 = var_ret->type->type_table[cltype] == idtype;
}
}
var25 = !var24;
var21 = var25;
} else {
var21 = var_;
}
var_useiset = var21;
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var28 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2462);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var26) on <var26:nullable MAttributeDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var31 = var26->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var26:nullable MAttributeDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_guard = var29;
if (var_useiset){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var34 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2464);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var32) on <var32:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var37 = var32->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var32:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute(var_v, var35, var_recv);
}
var_set = var38;
} else {
{
var39 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var_guard, var_recv);
}
var_set = var39;
}
if (unlikely(varonce==NULL)) {
var40 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "if(likely(";
var44 = standard___standard__NativeString___to_s_with_length(var43, 10l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = ")) {";
var48 = standard___standard__NativeString___to_s_with_length(var47, 4l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var40)->values[2]=var46;
} else {
var40 = varonce;
varonce = NULL;
}
{
var49 = ((val*(*)(val* self))(var_set->class->vft[COLOR_standard__string__Object__to_s]))(var_set); /* to_s on <var_set:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var40)->values[1]=var49;
{
var50 = ((val*(*)(val* self))(var40->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce = var40;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var53 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (var51 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2469);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var51) on <var51:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var56 = var51->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var51:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var54, var_recv);
}
var_res = var57;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "} else {";
var61 = standard___standard__NativeString___to_s_with_length(var60, 8l);
var59 = var61;
varonce58 = var59;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var62 = nit__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv);
}
var_value = var62;
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var_value); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var63 = !var_useiset;
if (var63){
{
var64 = nit___nit__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
var_true_v = var64;
{
var65 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_guard, var65, var_true_v); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "}";
var69 = standard___standard__NativeString___to_s_with_length(var68, 1l);
var67 = var69;
varonce66 = var67;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var72 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (var70 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2481);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var70) on <var70:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var75 = var70->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var70:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var77 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var73, var76);
}
var_res = var77;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var80 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2483);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnvar (var78) on <var78:nullable StaticFrame> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1838);
fatal_exit(1);
}
var83 = var78->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var78:nullable StaticFrame> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2483);
fatal_exit(1);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var81, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var86 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var84) on <var_mpropdef:MMethodDef> */
var_other = var84;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var91 = var_mpropdef == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var94 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var92,2l) on <var92:Int> */
var97 = var92 == 2l;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
if (unlikely(!var95)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2485);
fatal_exit(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var100 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (var98 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2486);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var98) on <var98:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var103 = var98->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var98:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
var104 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var105 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var101, var104, var105); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var108 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
if (var106){
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var111 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
var_ret112 = var109;
if (var_ret112 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2489);
fatal_exit(1);
} else {
var114 = ((short int(*)(val* self))(var_ret112->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var_ret112); /* is_c_primitive on <var_ret112:nullable MType>*/
}
var115 = !var114;
var_116 = var115;
if (var115){
/* <var_ret112:nullable MType> isa MNullableType */
cltype118 = type_nit__MNullableType.color;
idtype119 = type_nit__MNullableType.id;
if(var_ret112 == NULL) {
var117 = 0;
} else {
if(cltype118 >= var_ret112->type->table_size) {
var117 = 0;
} else {
var117 = var_ret112->type->type_table[cltype118] == idtype119;
}
}
var120 = !var117;
var113 = var120;
} else {
var113 = var_116;
}
var_useiset121 = var113;
var122 = !var_useiset121;
if (var122){
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var125 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
if (var123 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2491);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var123) on <var123:nullable MAttributeDef> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var128 = var123->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var123:nullable MAttributeDef> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var130 = nit___nit__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var126, var129, var130); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2495);
fatal_exit(1);
}
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#init_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void nit__abstract_compiler___AAttrPropdef___init_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_9 /* var : Bool */;
val* var10 /* : nullable AExpr */;
val* var12 /* : nullable AExpr */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var14 /* : Bool */;
val* var15 /* : RuntimeVariable */;
var_v = p0;
var_recv = p1;
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var4 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var7 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = !var5;
var1 = var8;
} else {
var1 = var_;
}
var_9 = var1;
if (var1){
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var12 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
/* <var10:nullable AExpr> isa ANullExpr */
cltype = type_nit__ANullExpr.color;
idtype = type_nit__ANullExpr.id;
if(var10 == NULL) {
var13 = 0;
} else {
if(cltype >= var10->type->table_size) {
var13 = 0;
} else {
var13 = var10->type->type_table[cltype] == idtype;
}
}
var14 = !var13;
var = var14;
} else {
var = var_9;
}
if (var){
{
var15 = nit__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv);
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#evaluate_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable): RuntimeVariable */
val* nit__abstract_compiler___AAttrPropdef___evaluate_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var5 /* : nullable StaticFrame */;
val* var7 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
val* var8 /* : StaticFrame */;
val* var9 /* : nullable MMethodDef */;
val* var11 /* : nullable MMethodDef */;
val* var12 /* : MType */;
val* var14 /* : MType */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var17 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: StaticFrame */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable AExpr */;
val* var29 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var30 /* : nullable AExpr */;
val* var32 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : RuntimeVariable */;
val* var_value /* var value: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : RuntimeVariable */;
static val* varonce;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
val* var49 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : nullable String */;
val* var63 /* : nullable String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : nullable MPropDef */;
val* var71 /* : nullable MPropDef */;
val* var72 /* : MProperty */;
val* var74 /* : MProperty */;
var_v = p0;
var_recv = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_oldnode = var1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,self) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = self; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_old_frame = var5;
var8 = NEW_nit__StaticFrame(&type_nit__StaticFrame);
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var11 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2510);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var14 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self))(var12->class->vft[COLOR_nit__model__MType__undecorate]))(var12); /* undecorate on <var12:MType>*/
}
/* <var15:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var15->type->table_size) {
var16 = 0;
} else {
var16 = var15->type->type_table[cltype] == idtype;
}
if (unlikely(!var16)) {
var_class_name = var15 == NULL ? "null" : var15->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2510);
fatal_exit(1);
}
var17 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var17, 1l); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__abstract_compiler__StaticFrame__visitor_61d]))(var8, var_v); /* visitor= on <var8:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__abstract_compiler__StaticFrame__mpropdef_61d]))(var8, var9); /* mpropdef= on <var8:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__abstract_compiler__StaticFrame__receiver_61d]))(var8, var15); /* receiver= on <var8:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nit__abstract_compiler__StaticFrame__arguments_61d]))(var8, var_); /* arguments= on <var8:StaticFrame>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:StaticFrame>*/
}
var_frame = var8;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var21 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_mtype = var19;
if (var_mtype == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2515);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var29 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_nexpr = var27;
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var32 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_nblock = var30;
if (var_nexpr == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
{
var38 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_nexpr, var_mtype);
}
var_value = var38;
} else {
if (var_nblock == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other = ((val*)NULL);
{
var42 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nblock, var_other); /* == on <var_nblock:nullable AExpr(AExpr)>*/
}
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
var44 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_value = var44;
{
{ /* Inline abstract_compiler#StaticFrame#returnvar= (var_frame,var_value) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val = var_value; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL45:(void)0;
}
}
if (likely(varonce!=NULL)) {
var46 = varonce;
} else {
var47 = "RET_LABEL";
var48 = standard___standard__NativeString___to_s_with_length(var47, 9l);
var46 = var48;
varonce = var46;
}
{
var49 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var46);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel= (var_frame,var49) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val = var49; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL50:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "{";
var54 = standard___standard__NativeString___to_s_with_length(var53, 1l);
var52 = var54;
varonce51 = var52;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var_nblock); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce55==NULL)) {
var56 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = ":(void)0;";
var60 = standard___standard__NativeString___to_s_with_length(var59, 9l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var56)->values[1]=var58;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var_frame) on <var_frame:StaticFrame> */
var63 = var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2527);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var56)->values[0]=var61;
{
var64 = ((val*(*)(val* self))(var56->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "}";
var68 = standard___standard__NativeString___to_s_with_length(var67, 1l);
var66 = var68;
varonce65 = var66;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2530);
fatal_exit(1);
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var71 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2533);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var69) on <var69:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var74 = var69->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var69:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var72, var_recv, var_value); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_old_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL75:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL76:(void)0;
}
}
var = var_value;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AClassdef#compile_to_c for (self: AClassdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nit__abstract_compiler___AClassdef___compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MProperty */;
val* var10 /* : MProperty */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var23 /* : MType */;
val* var25 /* : MType */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var27 /* : nullable RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline modelize_property#AClassdef#mfree_init (self) on <self:AClassdef> */
var2 = self->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <self:AClassdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var) on <var_mpropdef:MMethodDef> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var10 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var8) on <var8:MProperty(MMethod)> */
var13 = var8->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var8:MProperty(MMethod)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2562);
fatal_exit(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var16 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var14,1l) on <var14:Int> */
var19 = var14 == 1l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2563);
fatal_exit(1);
}
{
var20 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var21 = !var20;
if (var21){
{
var22 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var22) on <var22:nullable Object(RuntimeVariable)> */
var25 = var22->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var22:nullable Object(RuntimeVariable)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
/* <var23:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var23->type->table_size) {
var26 = 0;
} else {
var26 = var23->type->type_table[cltype] == idtype;
}
if (unlikely(!var26)) {
var_class_name = var23 == NULL ? "null" : var23->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2565);
fatal_exit(1);
}
{
var27 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var23, var_arguments);
}
} else {
}
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2569);
fatal_exit(1);
}
RET_LABEL:;
}
/* method abstract_compiler#AExpr#expr for (self: AExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AExpr___expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var15 /* : Location */;
val* var17 /* : Location */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 33l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ":";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "\\n\");";
var13 = standard___standard__NativeString___to_s_with_length(var12, 5l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = standard__string___Object___class_name(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var14;
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__Location___standard__string__Object__to_s(var15);
}
((struct instance_standard__NativeArray*)var1)->values[3]=var18;
{
var19 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
var_mtype = var20;
if (var_mtype == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var26 = var_mtype == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
var27 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var27;
if (unlikely(varonce28==NULL)) {
var29 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "/* ";
var33 = standard___standard__NativeString___to_s_with_length(var32, 3l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = " = NOT YET ";
var37 = standard___standard__NativeString___to_s_with_length(var36, 11l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[2]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " */";
var41 = standard___standard__NativeString___to_s_with_length(var40, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var29)->values[4]=var39;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var42 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var29)->values[1]=var42;
{
var43 = standard__string___Object___class_name(self);
}
((struct instance_standard__NativeArray*)var29)->values[3]=var43;
{
var44 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var44); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AExpr#stmt for (self: AExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AExpr___stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable RuntimeVariable */;
var_v = p0;
{
var = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler__AExpr__expr]))(self, var_v); /* expr on <self:AExpr>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#stmt for (self: ABlockExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___ABlockExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AExpr] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AExpr]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AExpr]>*/
}
var_e = var6;
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AExpr]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#expr for (self: ABlockExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ABlockExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : nullable Object */;
val* var_last /* var last: AExpr */;
val* var5 /* : ANodes[AExpr] */;
val* var7 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var8 /* : Iterator[ANode] */;
val* var_9 /* var : Iterator[AExpr] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__SequenceRead___last(var1);
}
var_last = var4;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[AExpr]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[AExpr]>*/
}
var_e = var11;
{
{ /* Inline kernel#Object#== (var_e,var_last) on <var_e:AExpr> */
var_other = var_last;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:AExpr> */
var16 = var_e == var_other;
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
if (var12){
goto BREAK_label;
} else {
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[AExpr]>*/
}
{
var17 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_last, ((val*)NULL));
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVardeclExpr#stmt for (self: AVardeclExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AVardeclExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var_ne /* var ne: nullable AExpr */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var14 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var15 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2617);
fatal_exit(1);
}
var_variable = var;
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (self) on <self:AVardeclExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ne = var3;
if (var_ne == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ne,((val*)NULL)) on <var_ne:nullable AExpr> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_ne->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ne, var_other); /* == on <var_ne:nullable AExpr(AExpr)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var13 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_ne, var11);
}
var_i = var14;
{
var15 = nit___nit__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var15, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AVarExpr#expr for (self: AVarExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AVarExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var3 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2629);
fatal_exit(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___variable(var_v, var1);
}
var_res = var4;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AVarExpr> */
var7 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AVarExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2630);
fatal_exit(1);
}
var_mtype = var5;
{
var8 = nit___nit__AbstractCompilerVisitor___autoadapt(var_v, var_res, var_mtype);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarAssignExpr#expr for (self: AVarAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AVarAssignExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var9 /* : nullable MType */;
val* var10 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var11 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarAssignExpr> */
var3 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2638);
fatal_exit(1);
}
var_variable = var1;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AVarAssignExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1995);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var9 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__AbstractCompilerVisitor___expr(var_v, var4, var7);
}
var_i = var10;
{
var11 = nit___nit__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var11, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarReassignExpr#stmt for (self: AVarReassignExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AVarReassignExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var3 /* : RuntimeVariable */;
val* var_vari /* var vari: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var9 /* : nullable MType */;
val* var10 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var11 /* : nullable CallSite */;
val* var13 /* : nullable CallSite */;
val* var14 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var15 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2648);
fatal_exit(1);
}
var_variable = var;
{
var3 = nit___nit__AbstractCompilerVisitor___variable(var_v, var_variable);
}
var_vari = var3;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AVarReassignExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2006);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var9 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__AbstractCompilerVisitor___expr(var_v, var4, var7);
}
var_value = var10;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var13 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2651);
fatal_exit(1);
}
var14 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var14, 2l); /* Direct call array#Array#with_capacity on <var14:Array[RuntimeVariable]>*/
}
var_ = var14;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_vari); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var11, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var15;
if (var_res == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2652);
fatal_exit(1);
}
{
var21 = nit___nit__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var21, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ASelfExpr#expr for (self: ASelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ASelfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var4 /* : Array[RuntimeVariable] */;
val* var6 /* : Array[RuntimeVariable] */;
val* var7 /* : nullable Object */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2658);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var1) on <var1:nullable StaticFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var6 = var1->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var1:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = standard___standard__SequenceRead___Collection__first(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImplicitSelfExpr#expr for (self: AImplicitSelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AImplicitSelfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable RuntimeVariable */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
val* var12 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline typing#AImplicitSelfExpr#is_sys (self) on <self:AImplicitSelfExpr> */
var3 = self->attrs[COLOR_nit__typing__AImplicitSelfExpr___is_sys].s; /* _is_sys on <self:AImplicitSelfExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (var4){
{
var5 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler___AImplicitSelfExpr___AExpr__expr]))(self, p0); /* expr on <self:AImplicitSelfExpr>*/
}
var = var5;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "glob_sys";
var8 = standard___standard__NativeString___to_s_with_length(var7, 8l);
var6 = var8;
varonce = var6;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AImplicitSelfExpr> */
var11 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AImplicitSelfExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2664);
fatal_exit(1);
}
{
var12 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var6, var9);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AEscapeExpr#stmt for (self: AEscapeExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AEscapeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : nullable EscapeMark */;
val* var11 /* : nullable EscapeMark */;
val* var12 /* : String */;
val* var13 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "goto BREAK_";
var4 = standard___standard__NativeString___to_s_with_length(var3, 11l);
var2 = var4;
varonce1 = var2;
}
((struct instance_standard__NativeArray*)var)->values[0]=var2;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = ";";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var)->values[2]=var6;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline scope#AEscapeExpr#escapemark (self) on <self:AEscapeExpr> */
var11 = self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:AEscapeExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit___nit__AbstractCompilerVisitor___escapemark_name(var_v, var9);
}
((struct instance_standard__NativeArray*)var)->values[1]=var12;
{
var13 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: AReturnExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AReturnExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable StaticFrame */;
val* var10 /* : nullable StaticFrame */;
val* var11 /* : nullable RuntimeVariable */;
val* var13 /* : nullable RuntimeVariable */;
val* var_returnvar /* var returnvar: RuntimeVariable */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : nullable StaticFrame */;
val* var29 /* : nullable StaticFrame */;
val* var30 /* : nullable String */;
val* var32 /* : nullable String */;
val* var33 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AReturnExpr#n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
if (var_nexpr == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var10 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2677);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnvar (var8) on <var8:nullable StaticFrame> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1838);
fatal_exit(1);
}
var13 = var8->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var8:nullable StaticFrame> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2677);
fatal_exit(1);
}
var_returnvar = var11;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_returnvar) on <var_returnvar:RuntimeVariable> */
var16 = var_returnvar->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_returnvar:RuntimeVariable> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_nexpr, var14);
}
var_i = var17;
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_returnvar, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce==NULL)) {
var18 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "goto ";
var22 = standard___standard__NativeString___to_s_with_length(var21, 5l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ";";
var26 = standard___standard__NativeString___to_s_with_length(var25, 1l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var18)->values[2]=var24;
} else {
var18 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var29 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2681);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var27) on <var27:nullable StaticFrame> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1841);
fatal_exit(1);
}
var32 = var27->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var27:nullable StaticFrame> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2681);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var18)->values[1]=var30;
{
var33 = ((val*(*)(val* self))(var18->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AAbortExpr#stmt for (self: AAbortExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AAbortExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Aborted";
var2 = standard___standard__NativeString___to_s_with_length(var1, 7l);
var = var2;
varonce = var;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#stmt for (self: AIfExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AIfExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : nullable AExpr */;
val* var17 /* : nullable AExpr */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : nullable AExpr */;
val* var24 /* : nullable AExpr */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1857);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var);
}
var_cond = var3;
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "if (";
var8 = standard___standard__NativeString___to_s_with_length(var7, 4l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "){";
var12 = standard___standard__NativeString___to_s_with_length(var11, 2l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_standard__string__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var14); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "} else {";
var21 = standard___standard__NativeString___to_s_with_length(var20, 8l);
var19 = var21;
varonce18 = var19;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var24 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "}";
var28 = standard___standard__NativeString___to_s_with_length(var27, 1l);
var26 = var28;
varonce25 = var26;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
