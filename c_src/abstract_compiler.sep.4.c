#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AMethPropdef#compile_intern_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int abstract_compiler__AMethPropdef__compile_intern_to_c(val* self, val* p0, val* p1, val* p2) {
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
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var30 /* : MType */;
short int var31 /* : Bool */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : nullable Object */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
short int var82 /* : Bool */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
val* var90 /* : nullable Object */;
short int var91 /* : Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
long var99 /* : Int */;
val* var100 /* : nullable Object */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
long var106 /* : Int */;
val* var107 /* : nullable Object */;
val* var108 /* : Array[Object] */;
long var109 /* : Int */;
val* var110 /* : NativeArray[Object] */;
val* var111 /* : String */;
val* var112 /* : RuntimeVariable */;
short int var113 /* : Bool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
long var121 /* : Int */;
val* var122 /* : nullable Object */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
long var128 /* : Int */;
val* var129 /* : nullable Object */;
val* var130 /* : Array[Object] */;
long var131 /* : Int */;
val* var132 /* : NativeArray[Object] */;
val* var133 /* : String */;
val* var134 /* : RuntimeVariable */;
short int var135 /* : Bool */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : FlatString */;
long var148 /* : Int */;
val* var149 /* : nullable Object */;
val* var150 /* : Array[Object] */;
long var151 /* : Int */;
val* var152 /* : NativeArray[Object] */;
val* var153 /* : String */;
val* var154 /* : RuntimeVariable */;
short int var155 /* : Bool */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
long var163 /* : Int */;
val* var164 /* : nullable Object */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : FlatString */;
long var170 /* : Int */;
val* var171 /* : nullable Object */;
val* var172 /* : Array[Object] */;
long var173 /* : Int */;
val* var174 /* : NativeArray[Object] */;
val* var175 /* : String */;
val* var176 /* : RuntimeVariable */;
short int var177 /* : Bool */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : FlatString */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
long var185 /* : Int */;
val* var186 /* : nullable Object */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
long var192 /* : Int */;
val* var193 /* : nullable Object */;
val* var194 /* : Array[Object] */;
long var195 /* : Int */;
val* var196 /* : NativeArray[Object] */;
val* var197 /* : String */;
val* var198 /* : RuntimeVariable */;
short int var199 /* : Bool */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
long var207 /* : Int */;
val* var208 /* : nullable Object */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : FlatString */;
long var214 /* : Int */;
val* var215 /* : nullable Object */;
val* var216 /* : Array[Object] */;
long var217 /* : Int */;
val* var218 /* : NativeArray[Object] */;
val* var219 /* : String */;
val* var220 /* : RuntimeVariable */;
short int var221 /* : Bool */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : FlatString */;
short int var227 /* : Bool */;
short int var228 /* : Bool */;
long var229 /* : Int */;
val* var230 /* : nullable Object */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : FlatString */;
long var236 /* : Int */;
val* var237 /* : nullable Object */;
val* var238 /* : Array[Object] */;
long var239 /* : Int */;
val* var240 /* : NativeArray[Object] */;
val* var241 /* : String */;
val* var242 /* : RuntimeVariable */;
short int var243 /* : Bool */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
long var247 /* : Int */;
val* var248 /* : FlatString */;
short int var249 /* : Bool */;
short int var250 /* : Bool */;
long var251 /* : Int */;
val* var252 /* : nullable Object */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
long var256 /* : Int */;
val* var257 /* : FlatString */;
long var258 /* : Int */;
val* var259 /* : nullable Object */;
val* var260 /* : Array[Object] */;
long var261 /* : Int */;
val* var262 /* : NativeArray[Object] */;
val* var263 /* : String */;
val* var264 /* : RuntimeVariable */;
short int var265 /* : Bool */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
long var269 /* : Int */;
val* var270 /* : FlatString */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
long var273 /* : Int */;
val* var274 /* : nullable Object */;
long var275 /* : Int */;
val* var276 /* : nullable Object */;
val* var277 /* : RuntimeVariable */;
short int var278 /* : Bool */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : NativeString */;
long var282 /* : Int */;
val* var283 /* : FlatString */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
long var286 /* : Int */;
val* var287 /* : nullable Object */;
long var288 /* : Int */;
val* var289 /* : nullable Object */;
val* var290 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : FlatString */;
val* var296 /* : Array[Object] */;
long var297 /* : Int */;
val* var298 /* : NativeArray[Object] */;
val* var299 /* : String */;
val* var300 /* : RuntimeVariable */;
short int var301 /* : Bool */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
long var305 /* : Int */;
val* var306 /* : FlatString */;
short int var307 /* : Bool */;
short int var308 /* : Bool */;
long var309 /* : Int */;
val* var310 /* : nullable Object */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : FlatString */;
long var316 /* : Int */;
val* var317 /* : nullable Object */;
val* var318 /* : Array[Object] */;
long var319 /* : Int */;
val* var320 /* : NativeArray[Object] */;
val* var321 /* : String */;
val* var322 /* : RuntimeVariable */;
short int var323 /* : Bool */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : FlatString */;
short int var329 /* : Bool */;
short int var330 /* : Bool */;
long var331 /* : Int */;
val* var332 /* : nullable Object */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : NativeString */;
long var336 /* : Int */;
val* var337 /* : FlatString */;
long var338 /* : Int */;
val* var339 /* : nullable Object */;
val* var340 /* : Array[Object] */;
long var341 /* : Int */;
val* var342 /* : NativeArray[Object] */;
val* var343 /* : String */;
val* var344 /* : RuntimeVariable */;
short int var345 /* : Bool */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : NativeString */;
long var349 /* : Int */;
val* var350 /* : FlatString */;
short int var351 /* : Bool */;
short int var352 /* : Bool */;
long var353 /* : Int */;
val* var354 /* : nullable Object */;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : NativeString */;
long var358 /* : Int */;
val* var359 /* : FlatString */;
long var360 /* : Int */;
val* var361 /* : nullable Object */;
val* var362 /* : Array[Object] */;
long var363 /* : Int */;
val* var364 /* : NativeArray[Object] */;
val* var365 /* : String */;
val* var366 /* : RuntimeVariable */;
short int var367 /* : Bool */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : NativeString */;
long var371 /* : Int */;
val* var372 /* : FlatString */;
short int var373 /* : Bool */;
short int var374 /* : Bool */;
long var375 /* : Int */;
val* var376 /* : nullable Object */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
long var380 /* : Int */;
val* var381 /* : FlatString */;
long var382 /* : Int */;
val* var383 /* : nullable Object */;
val* var384 /* : Array[Object] */;
long var385 /* : Int */;
val* var386 /* : NativeArray[Object] */;
val* var387 /* : String */;
val* var388 /* : RuntimeVariable */;
short int var389 /* : Bool */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
long var393 /* : Int */;
val* var394 /* : FlatString */;
short int var395 /* : Bool */;
short int var396 /* : Bool */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
long var400 /* : Int */;
val* var401 /* : FlatString */;
long var402 /* : Int */;
val* var403 /* : nullable Object */;
val* var404 /* : Array[Object] */;
long var405 /* : Int */;
val* var406 /* : NativeArray[Object] */;
val* var407 /* : String */;
val* var408 /* : RuntimeVariable */;
short int var409 /* : Bool */;
static val* varonce410;
val* var411 /* : String */;
char* var412 /* : NativeString */;
long var413 /* : Int */;
val* var414 /* : FlatString */;
short int var415 /* : Bool */;
short int var416 /* : Bool */;
long var417 /* : Int */;
val* var418 /* : nullable Object */;
val* var419 /* : Array[Object] */;
long var420 /* : Int */;
val* var421 /* : NativeArray[Object] */;
val* var422 /* : String */;
val* var423 /* : RuntimeVariable */;
short int var424 /* : Bool */;
static val* varonce425;
val* var426 /* : String */;
char* var427 /* : NativeString */;
long var428 /* : Int */;
val* var429 /* : FlatString */;
short int var430 /* : Bool */;
short int var431 /* : Bool */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : NativeString */;
long var435 /* : Int */;
val* var436 /* : FlatString */;
short int var437 /* : Bool */;
short int var438 /* : Bool */;
static val* varonce439;
val* var440 /* : String */;
char* var441 /* : NativeString */;
long var442 /* : Int */;
val* var443 /* : FlatString */;
val* var444 /* : nullable Object */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
long var448 /* : Int */;
val* var449 /* : FlatString */;
val* var450 /* : Array[Object] */;
long var451 /* : Int */;
val* var452 /* : NativeArray[Object] */;
val* var453 /* : String */;
short int var454 /* : Bool */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
long var458 /* : Int */;
val* var459 /* : FlatString */;
short int var460 /* : Bool */;
short int var461 /* : Bool */;
static val* varonce462;
val* var463 /* : String */;
char* var464 /* : NativeString */;
long var465 /* : Int */;
val* var466 /* : FlatString */;
val* var467 /* : nullable Object */;
val* var468 /* : Array[Object] */;
long var469 /* : Int */;
val* var470 /* : NativeArray[Object] */;
val* var471 /* : String */;
val* var472 /* : RuntimeVariable */;
short int var473 /* : Bool */;
static val* varonce474;
val* var475 /* : String */;
char* var476 /* : NativeString */;
long var477 /* : Int */;
val* var478 /* : FlatString */;
short int var479 /* : Bool */;
short int var480 /* : Bool */;
long var481 /* : Int */;
val* var482 /* : nullable Object */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
long var486 /* : Int */;
val* var487 /* : FlatString */;
long var488 /* : Int */;
val* var489 /* : nullable Object */;
val* var490 /* : Array[Object] */;
long var491 /* : Int */;
val* var492 /* : NativeArray[Object] */;
val* var493 /* : String */;
val* var494 /* : RuntimeVariable */;
short int var495 /* : Bool */;
static val* varonce496;
val* var497 /* : String */;
char* var498 /* : NativeString */;
long var499 /* : Int */;
val* var500 /* : FlatString */;
short int var501 /* : Bool */;
short int var502 /* : Bool */;
long var503 /* : Int */;
val* var504 /* : nullable Object */;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : NativeString */;
long var508 /* : Int */;
val* var509 /* : FlatString */;
long var510 /* : Int */;
val* var511 /* : nullable Object */;
val* var512 /* : Array[Object] */;
long var513 /* : Int */;
val* var514 /* : NativeArray[Object] */;
val* var515 /* : String */;
val* var516 /* : RuntimeVariable */;
short int var517 /* : Bool */;
static val* varonce518;
val* var519 /* : String */;
char* var520 /* : NativeString */;
long var521 /* : Int */;
val* var522 /* : FlatString */;
short int var523 /* : Bool */;
short int var524 /* : Bool */;
long var525 /* : Int */;
val* var526 /* : nullable Object */;
long var527 /* : Int */;
val* var528 /* : nullable Object */;
val* var529 /* : RuntimeVariable */;
short int var530 /* : Bool */;
static val* varonce531;
val* var532 /* : String */;
char* var533 /* : NativeString */;
long var534 /* : Int */;
val* var535 /* : FlatString */;
short int var536 /* : Bool */;
short int var537 /* : Bool */;
long var538 /* : Int */;
val* var539 /* : nullable Object */;
long var540 /* : Int */;
val* var541 /* : nullable Object */;
val* var542 /* : RuntimeVariable */;
val* var_res543 /* var res: RuntimeVariable */;
static val* varonce544;
val* var545 /* : String */;
char* var546 /* : NativeString */;
long var547 /* : Int */;
val* var548 /* : FlatString */;
val* var549 /* : Array[Object] */;
long var550 /* : Int */;
val* var551 /* : NativeArray[Object] */;
val* var552 /* : String */;
val* var553 /* : RuntimeVariable */;
short int var554 /* : Bool */;
static val* varonce555;
val* var556 /* : String */;
char* var557 /* : NativeString */;
long var558 /* : Int */;
val* var559 /* : FlatString */;
short int var560 /* : Bool */;
short int var561 /* : Bool */;
long var562 /* : Int */;
val* var563 /* : nullable Object */;
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : NativeString */;
long var567 /* : Int */;
val* var568 /* : FlatString */;
long var569 /* : Int */;
val* var570 /* : nullable Object */;
val* var571 /* : Array[Object] */;
long var572 /* : Int */;
val* var573 /* : NativeArray[Object] */;
val* var574 /* : String */;
val* var575 /* : RuntimeVariable */;
short int var576 /* : Bool */;
static val* varonce577;
val* var578 /* : String */;
char* var579 /* : NativeString */;
long var580 /* : Int */;
val* var581 /* : FlatString */;
short int var582 /* : Bool */;
short int var583 /* : Bool */;
long var584 /* : Int */;
val* var585 /* : nullable Object */;
static val* varonce586;
val* var587 /* : String */;
char* var588 /* : NativeString */;
long var589 /* : Int */;
val* var590 /* : FlatString */;
long var591 /* : Int */;
val* var592 /* : nullable Object */;
val* var593 /* : Array[Object] */;
long var594 /* : Int */;
val* var595 /* : NativeArray[Object] */;
val* var596 /* : String */;
val* var597 /* : RuntimeVariable */;
short int var598 /* : Bool */;
static val* varonce599;
val* var600 /* : String */;
char* var601 /* : NativeString */;
long var602 /* : Int */;
val* var603 /* : FlatString */;
short int var604 /* : Bool */;
short int var605 /* : Bool */;
long var606 /* : Int */;
val* var607 /* : nullable Object */;
static val* varonce608;
val* var609 /* : String */;
char* var610 /* : NativeString */;
long var611 /* : Int */;
val* var612 /* : FlatString */;
long var613 /* : Int */;
val* var614 /* : nullable Object */;
val* var615 /* : Array[Object] */;
long var616 /* : Int */;
val* var617 /* : NativeArray[Object] */;
val* var618 /* : String */;
val* var619 /* : RuntimeVariable */;
short int var620 /* : Bool */;
static val* varonce621;
val* var622 /* : String */;
char* var623 /* : NativeString */;
long var624 /* : Int */;
val* var625 /* : FlatString */;
short int var626 /* : Bool */;
short int var627 /* : Bool */;
long var628 /* : Int */;
val* var629 /* : nullable Object */;
static val* varonce630;
val* var631 /* : String */;
char* var632 /* : NativeString */;
long var633 /* : Int */;
val* var634 /* : FlatString */;
long var635 /* : Int */;
val* var636 /* : nullable Object */;
val* var637 /* : Array[Object] */;
long var638 /* : Int */;
val* var639 /* : NativeArray[Object] */;
val* var640 /* : String */;
val* var641 /* : RuntimeVariable */;
short int var642 /* : Bool */;
static val* varonce643;
val* var644 /* : String */;
char* var645 /* : NativeString */;
long var646 /* : Int */;
val* var647 /* : FlatString */;
short int var648 /* : Bool */;
short int var649 /* : Bool */;
long var650 /* : Int */;
val* var651 /* : nullable Object */;
static val* varonce652;
val* var653 /* : String */;
char* var654 /* : NativeString */;
long var655 /* : Int */;
val* var656 /* : FlatString */;
val* var657 /* : Array[Object] */;
long var658 /* : Int */;
val* var659 /* : NativeArray[Object] */;
val* var660 /* : String */;
val* var661 /* : RuntimeVariable */;
short int var662 /* : Bool */;
static val* varonce663;
val* var664 /* : String */;
char* var665 /* : NativeString */;
long var666 /* : Int */;
val* var667 /* : FlatString */;
short int var668 /* : Bool */;
short int var669 /* : Bool */;
static val* varonce670;
val* var671 /* : String */;
char* var672 /* : NativeString */;
long var673 /* : Int */;
val* var674 /* : FlatString */;
long var675 /* : Int */;
val* var676 /* : nullable Object */;
val* var677 /* : Array[Object] */;
long var678 /* : Int */;
val* var679 /* : NativeArray[Object] */;
val* var680 /* : String */;
val* var681 /* : RuntimeVariable */;
short int var682 /* : Bool */;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : NativeString */;
long var686 /* : Int */;
val* var687 /* : FlatString */;
short int var688 /* : Bool */;
short int var689 /* : Bool */;
static val* varonce690;
val* var691 /* : String */;
char* var692 /* : NativeString */;
long var693 /* : Int */;
val* var694 /* : FlatString */;
short int var695 /* : Bool */;
short int var696 /* : Bool */;
static val* varonce697;
val* var698 /* : String */;
char* var699 /* : NativeString */;
long var700 /* : Int */;
val* var701 /* : FlatString */;
val* var702 /* : nullable Object */;
static val* varonce703;
val* var704 /* : String */;
char* var705 /* : NativeString */;
long var706 /* : Int */;
val* var707 /* : FlatString */;
val* var708 /* : Array[Object] */;
long var709 /* : Int */;
val* var710 /* : NativeArray[Object] */;
val* var711 /* : String */;
short int var712 /* : Bool */;
static val* varonce713;
val* var714 /* : String */;
char* var715 /* : NativeString */;
long var716 /* : Int */;
val* var717 /* : FlatString */;
short int var718 /* : Bool */;
short int var719 /* : Bool */;
static val* varonce720;
val* var721 /* : String */;
char* var722 /* : NativeString */;
long var723 /* : Int */;
val* var724 /* : FlatString */;
val* var725 /* : nullable Object */;
val* var726 /* : Array[Object] */;
long var727 /* : Int */;
val* var728 /* : NativeArray[Object] */;
val* var729 /* : String */;
val* var730 /* : RuntimeVariable */;
short int var731 /* : Bool */;
static val* varonce732;
val* var733 /* : String */;
char* var734 /* : NativeString */;
long var735 /* : Int */;
val* var736 /* : FlatString */;
short int var737 /* : Bool */;
short int var738 /* : Bool */;
long var739 /* : Int */;
val* var740 /* : nullable Object */;
long var741 /* : Int */;
val* var742 /* : nullable Object */;
val* var743 /* : RuntimeVariable */;
short int var744 /* : Bool */;
static val* varonce745;
val* var746 /* : String */;
char* var747 /* : NativeString */;
long var748 /* : Int */;
val* var749 /* : FlatString */;
short int var750 /* : Bool */;
short int var751 /* : Bool */;
long var752 /* : Int */;
val* var753 /* : nullable Object */;
long var754 /* : Int */;
val* var755 /* : nullable Object */;
val* var756 /* : RuntimeVariable */;
val* var_res757 /* var res: RuntimeVariable */;
static val* varonce758;
val* var759 /* : String */;
char* var760 /* : NativeString */;
long var761 /* : Int */;
val* var762 /* : FlatString */;
val* var763 /* : Array[Object] */;
long var764 /* : Int */;
val* var765 /* : NativeArray[Object] */;
val* var766 /* : String */;
val* var767 /* : RuntimeVariable */;
short int var768 /* : Bool */;
static val* varonce769;
val* var770 /* : String */;
char* var771 /* : NativeString */;
long var772 /* : Int */;
val* var773 /* : FlatString */;
short int var774 /* : Bool */;
short int var775 /* : Bool */;
static val* varonce776;
val* var777 /* : String */;
char* var778 /* : NativeString */;
long var779 /* : Int */;
val* var780 /* : FlatString */;
short int var781 /* : Bool */;
short int var782 /* : Bool */;
static val* varonce783;
val* var784 /* : String */;
char* var785 /* : NativeString */;
long var786 /* : Int */;
val* var787 /* : FlatString */;
val* var788 /* : nullable Object */;
static val* varonce789;
val* var790 /* : String */;
char* var791 /* : NativeString */;
long var792 /* : Int */;
val* var793 /* : FlatString */;
val* var794 /* : Array[Object] */;
long var795 /* : Int */;
val* var796 /* : NativeArray[Object] */;
val* var797 /* : String */;
short int var798 /* : Bool */;
static val* varonce799;
val* var800 /* : String */;
char* var801 /* : NativeString */;
long var802 /* : Int */;
val* var803 /* : FlatString */;
short int var804 /* : Bool */;
short int var805 /* : Bool */;
static val* varonce806;
val* var807 /* : String */;
char* var808 /* : NativeString */;
long var809 /* : Int */;
val* var810 /* : FlatString */;
val* var811 /* : nullable Object */;
val* var812 /* : Array[Object] */;
long var813 /* : Int */;
val* var814 /* : NativeArray[Object] */;
val* var815 /* : String */;
val* var816 /* : RuntimeVariable */;
short int var817 /* : Bool */;
static val* varonce818;
val* var819 /* : String */;
char* var820 /* : NativeString */;
long var821 /* : Int */;
val* var822 /* : FlatString */;
short int var823 /* : Bool */;
short int var824 /* : Bool */;
long var825 /* : Int */;
val* var826 /* : nullable Object */;
static val* varonce827;
val* var828 /* : String */;
char* var829 /* : NativeString */;
long var830 /* : Int */;
val* var831 /* : FlatString */;
long var832 /* : Int */;
val* var833 /* : nullable Object */;
val* var834 /* : Array[Object] */;
long var835 /* : Int */;
val* var836 /* : NativeArray[Object] */;
val* var837 /* : String */;
val* var838 /* : RuntimeVariable */;
short int var839 /* : Bool */;
static val* varonce840;
val* var841 /* : String */;
char* var842 /* : NativeString */;
long var843 /* : Int */;
val* var844 /* : FlatString */;
short int var845 /* : Bool */;
short int var846 /* : Bool */;
long var847 /* : Int */;
val* var848 /* : nullable Object */;
static val* varonce849;
val* var850 /* : String */;
char* var851 /* : NativeString */;
long var852 /* : Int */;
val* var853 /* : FlatString */;
long var854 /* : Int */;
val* var855 /* : nullable Object */;
val* var856 /* : Array[Object] */;
long var857 /* : Int */;
val* var858 /* : NativeArray[Object] */;
val* var859 /* : String */;
val* var860 /* : RuntimeVariable */;
short int var861 /* : Bool */;
static val* varonce862;
val* var863 /* : String */;
char* var864 /* : NativeString */;
long var865 /* : Int */;
val* var866 /* : FlatString */;
short int var867 /* : Bool */;
short int var868 /* : Bool */;
static val* varonce869;
val* var870 /* : String */;
char* var871 /* : NativeString */;
long var872 /* : Int */;
val* var873 /* : FlatString */;
long var874 /* : Int */;
val* var875 /* : nullable Object */;
val* var876 /* : Array[Object] */;
long var877 /* : Int */;
val* var878 /* : NativeArray[Object] */;
val* var879 /* : String */;
val* var880 /* : RuntimeVariable */;
short int var881 /* : Bool */;
static val* varonce882;
val* var883 /* : String */;
char* var884 /* : NativeString */;
long var885 /* : Int */;
val* var886 /* : FlatString */;
short int var887 /* : Bool */;
short int var888 /* : Bool */;
long var889 /* : Int */;
val* var890 /* : nullable Object */;
static val* varonce891;
val* var892 /* : String */;
char* var893 /* : NativeString */;
long var894 /* : Int */;
val* var895 /* : FlatString */;
val* var896 /* : Array[Object] */;
long var897 /* : Int */;
val* var898 /* : NativeArray[Object] */;
val* var899 /* : String */;
val* var900 /* : RuntimeVariable */;
short int var901 /* : Bool */;
static val* varonce902;
val* var903 /* : String */;
char* var904 /* : NativeString */;
long var905 /* : Int */;
val* var906 /* : FlatString */;
short int var907 /* : Bool */;
short int var908 /* : Bool */;
long var909 /* : Int */;
val* var910 /* : nullable Object */;
static val* varonce911;
val* var912 /* : String */;
char* var913 /* : NativeString */;
long var914 /* : Int */;
val* var915 /* : FlatString */;
val* var916 /* : Array[Object] */;
long var917 /* : Int */;
val* var918 /* : NativeArray[Object] */;
val* var919 /* : String */;
val* var920 /* : RuntimeVariable */;
short int var921 /* : Bool */;
static val* varonce922;
val* var923 /* : String */;
char* var924 /* : NativeString */;
long var925 /* : Int */;
val* var926 /* : FlatString */;
short int var927 /* : Bool */;
short int var928 /* : Bool */;
long var929 /* : Int */;
val* var930 /* : nullable Object */;
static val* varonce931;
val* var932 /* : String */;
char* var933 /* : NativeString */;
long var934 /* : Int */;
val* var935 /* : FlatString */;
long var936 /* : Int */;
val* var937 /* : nullable Object */;
val* var938 /* : Array[Object] */;
long var939 /* : Int */;
val* var940 /* : NativeArray[Object] */;
val* var941 /* : String */;
val* var942 /* : RuntimeVariable */;
short int var943 /* : Bool */;
static val* varonce944;
val* var945 /* : String */;
char* var946 /* : NativeString */;
long var947 /* : Int */;
val* var948 /* : FlatString */;
short int var949 /* : Bool */;
short int var950 /* : Bool */;
long var951 /* : Int */;
val* var952 /* : nullable Object */;
static val* varonce953;
val* var954 /* : String */;
char* var955 /* : NativeString */;
long var956 /* : Int */;
val* var957 /* : FlatString */;
long var958 /* : Int */;
val* var959 /* : nullable Object */;
val* var960 /* : Array[Object] */;
long var961 /* : Int */;
val* var962 /* : NativeArray[Object] */;
val* var963 /* : String */;
val* var964 /* : RuntimeVariable */;
short int var965 /* : Bool */;
static val* varonce966;
val* var967 /* : String */;
char* var968 /* : NativeString */;
long var969 /* : Int */;
val* var970 /* : FlatString */;
short int var971 /* : Bool */;
short int var972 /* : Bool */;
long var973 /* : Int */;
val* var974 /* : nullable Object */;
long var975 /* : Int */;
val* var976 /* : nullable Object */;
val* var977 /* : RuntimeVariable */;
short int var978 /* : Bool */;
static val* varonce979;
val* var980 /* : String */;
char* var981 /* : NativeString */;
long var982 /* : Int */;
val* var983 /* : FlatString */;
short int var984 /* : Bool */;
short int var985 /* : Bool */;
long var986 /* : Int */;
val* var987 /* : nullable Object */;
long var988 /* : Int */;
val* var989 /* : nullable Object */;
val* var990 /* : RuntimeVariable */;
val* var_res991 /* var res: RuntimeVariable */;
static val* varonce992;
val* var993 /* : String */;
char* var994 /* : NativeString */;
long var995 /* : Int */;
val* var996 /* : FlatString */;
val* var997 /* : Array[Object] */;
long var998 /* : Int */;
val* var999 /* : NativeArray[Object] */;
val* var1000 /* : String */;
val* var1001 /* : RuntimeVariable */;
short int var1002 /* : Bool */;
static val* varonce1003;
val* var1004 /* : String */;
char* var1005 /* : NativeString */;
long var1006 /* : Int */;
val* var1007 /* : FlatString */;
short int var1008 /* : Bool */;
short int var1009 /* : Bool */;
long var1010 /* : Int */;
val* var1011 /* : nullable Object */;
static val* varonce1012;
val* var1013 /* : String */;
char* var1014 /* : NativeString */;
long var1015 /* : Int */;
val* var1016 /* : FlatString */;
long var1017 /* : Int */;
val* var1018 /* : nullable Object */;
val* var1019 /* : Array[Object] */;
long var1020 /* : Int */;
val* var1021 /* : NativeArray[Object] */;
val* var1022 /* : String */;
val* var1023 /* : RuntimeVariable */;
short int var1024 /* : Bool */;
static val* varonce1025;
val* var1026 /* : String */;
char* var1027 /* : NativeString */;
long var1028 /* : Int */;
val* var1029 /* : FlatString */;
short int var1030 /* : Bool */;
short int var1031 /* : Bool */;
long var1032 /* : Int */;
val* var1033 /* : nullable Object */;
static val* varonce1034;
val* var1035 /* : String */;
char* var1036 /* : NativeString */;
long var1037 /* : Int */;
val* var1038 /* : FlatString */;
long var1039 /* : Int */;
val* var1040 /* : nullable Object */;
val* var1041 /* : Array[Object] */;
long var1042 /* : Int */;
val* var1043 /* : NativeArray[Object] */;
val* var1044 /* : String */;
val* var1045 /* : RuntimeVariable */;
short int var1046 /* : Bool */;
static val* varonce1047;
val* var1048 /* : String */;
char* var1049 /* : NativeString */;
long var1050 /* : Int */;
val* var1051 /* : FlatString */;
short int var1052 /* : Bool */;
short int var1053 /* : Bool */;
long var1054 /* : Int */;
val* var1055 /* : nullable Object */;
static val* varonce1056;
val* var1057 /* : String */;
char* var1058 /* : NativeString */;
long var1059 /* : Int */;
val* var1060 /* : FlatString */;
long var1061 /* : Int */;
val* var1062 /* : nullable Object */;
val* var1063 /* : Array[Object] */;
long var1064 /* : Int */;
val* var1065 /* : NativeArray[Object] */;
val* var1066 /* : String */;
val* var1067 /* : RuntimeVariable */;
short int var1068 /* : Bool */;
static val* varonce1069;
val* var1070 /* : String */;
char* var1071 /* : NativeString */;
long var1072 /* : Int */;
val* var1073 /* : FlatString */;
short int var1074 /* : Bool */;
short int var1075 /* : Bool */;
long var1076 /* : Int */;
val* var1077 /* : nullable Object */;
static val* varonce1078;
val* var1079 /* : String */;
char* var1080 /* : NativeString */;
long var1081 /* : Int */;
val* var1082 /* : FlatString */;
long var1083 /* : Int */;
val* var1084 /* : nullable Object */;
val* var1085 /* : Array[Object] */;
long var1086 /* : Int */;
val* var1087 /* : NativeArray[Object] */;
val* var1088 /* : String */;
val* var1089 /* : RuntimeVariable */;
short int var1090 /* : Bool */;
static val* varonce1091;
val* var1092 /* : String */;
char* var1093 /* : NativeString */;
long var1094 /* : Int */;
val* var1095 /* : FlatString */;
short int var1096 /* : Bool */;
short int var1097 /* : Bool */;
static val* varonce1098;
val* var1099 /* : String */;
char* var1100 /* : NativeString */;
long var1101 /* : Int */;
val* var1102 /* : FlatString */;
long var1103 /* : Int */;
val* var1104 /* : nullable Object */;
val* var1105 /* : Array[Object] */;
long var1106 /* : Int */;
val* var1107 /* : NativeArray[Object] */;
val* var1108 /* : String */;
val* var1109 /* : RuntimeVariable */;
short int var1110 /* : Bool */;
static val* varonce1111;
val* var1112 /* : String */;
char* var1113 /* : NativeString */;
long var1114 /* : Int */;
val* var1115 /* : FlatString */;
short int var1116 /* : Bool */;
short int var1117 /* : Bool */;
static val* varonce1118;
val* var1119 /* : String */;
char* var1120 /* : NativeString */;
long var1121 /* : Int */;
val* var1122 /* : FlatString */;
short int var1123 /* : Bool */;
short int var1124 /* : Bool */;
long var1125 /* : Int */;
val* var1126 /* : nullable Object */;
static val* varonce1127;
val* var1128 /* : String */;
char* var1129 /* : NativeString */;
long var1130 /* : Int */;
val* var1131 /* : FlatString */;
long var1132 /* : Int */;
val* var1133 /* : nullable Object */;
static val* varonce1134;
val* var1135 /* : String */;
char* var1136 /* : NativeString */;
long var1137 /* : Int */;
val* var1138 /* : FlatString */;
val* var1139 /* : Array[Object] */;
long var1140 /* : Int */;
val* var1141 /* : NativeArray[Object] */;
val* var1142 /* : String */;
val* var1143 /* : RuntimeVariable */;
short int var1144 /* : Bool */;
static val* varonce1145;
val* var1146 /* : String */;
char* var1147 /* : NativeString */;
long var1148 /* : Int */;
val* var1149 /* : FlatString */;
short int var1150 /* : Bool */;
short int var1151 /* : Bool */;
long var1152 /* : Int */;
val* var1153 /* : nullable Object */;
static val* varonce1154;
val* var1155 /* : String */;
char* var1156 /* : NativeString */;
long var1157 /* : Int */;
val* var1158 /* : FlatString */;
long var1159 /* : Int */;
val* var1160 /* : nullable Object */;
static val* varonce1161;
val* var1162 /* : String */;
char* var1163 /* : NativeString */;
long var1164 /* : Int */;
val* var1165 /* : FlatString */;
long var1166 /* : Int */;
val* var1167 /* : nullable Object */;
static val* varonce1168;
val* var1169 /* : String */;
char* var1170 /* : NativeString */;
long var1171 /* : Int */;
val* var1172 /* : FlatString */;
val* var1173 /* : Array[Object] */;
long var1174 /* : Int */;
val* var1175 /* : NativeArray[Object] */;
val* var1176 /* : String */;
short int var1177 /* : Bool */;
static val* varonce1178;
val* var1179 /* : String */;
char* var1180 /* : NativeString */;
long var1181 /* : Int */;
val* var1182 /* : FlatString */;
short int var1183 /* : Bool */;
short int var1184 /* : Bool */;
static val* varonce1185;
val* var1186 /* : String */;
char* var1187 /* : NativeString */;
long var1188 /* : Int */;
val* var1189 /* : FlatString */;
long var1190 /* : Int */;
val* var1191 /* : nullable Object */;
static val* varonce1192;
val* var1193 /* : String */;
char* var1194 /* : NativeString */;
long var1195 /* : Int */;
val* var1196 /* : FlatString */;
long var1197 /* : Int */;
val* var1198 /* : nullable Object */;
static val* varonce1199;
val* var1200 /* : String */;
char* var1201 /* : NativeString */;
long var1202 /* : Int */;
val* var1203 /* : FlatString */;
long var1204 /* : Int */;
val* var1205 /* : nullable Object */;
static val* varonce1206;
val* var1207 /* : String */;
char* var1208 /* : NativeString */;
long var1209 /* : Int */;
val* var1210 /* : FlatString */;
long var1211 /* : Int */;
val* var1212 /* : nullable Object */;
static val* varonce1213;
val* var1214 /* : String */;
char* var1215 /* : NativeString */;
long var1216 /* : Int */;
val* var1217 /* : FlatString */;
long var1218 /* : Int */;
val* var1219 /* : nullable Object */;
static val* varonce1220;
val* var1221 /* : String */;
char* var1222 /* : NativeString */;
long var1223 /* : Int */;
val* var1224 /* : FlatString */;
val* var1225 /* : Array[Object] */;
long var1226 /* : Int */;
val* var1227 /* : NativeArray[Object] */;
val* var1228 /* : String */;
short int var1229 /* : Bool */;
static val* varonce1230;
val* var1231 /* : String */;
char* var1232 /* : NativeString */;
long var1233 /* : Int */;
val* var1234 /* : FlatString */;
short int var1235 /* : Bool */;
short int var1236 /* : Bool */;
static val* varonce1237;
val* var1238 /* : String */;
char* var1239 /* : NativeString */;
long var1240 /* : Int */;
val* var1241 /* : FlatString */;
long var1242 /* : Int */;
val* var1243 /* : nullable Object */;
static val* varonce1244;
val* var1245 /* : String */;
char* var1246 /* : NativeString */;
long var1247 /* : Int */;
val* var1248 /* : FlatString */;
val* var1249 /* : Array[Object] */;
long var1250 /* : Int */;
val* var1251 /* : NativeArray[Object] */;
val* var1252 /* : String */;
val* var1253 /* : RuntimeVariable */;
short int var1254 /* : Bool */;
static val* varonce1255;
val* var1256 /* : String */;
char* var1257 /* : NativeString */;
long var1258 /* : Int */;
val* var1259 /* : FlatString */;
short int var1260 /* : Bool */;
short int var1261 /* : Bool */;
static val* varonce1262;
val* var1263 /* : String */;
char* var1264 /* : NativeString */;
long var1265 /* : Int */;
val* var1266 /* : FlatString */;
long var1267 /* : Int */;
val* var1268 /* : nullable Object */;
static val* varonce1269;
val* var1270 /* : String */;
char* var1271 /* : NativeString */;
long var1272 /* : Int */;
val* var1273 /* : FlatString */;
val* var1274 /* : Array[Object] */;
long var1275 /* : Int */;
val* var1276 /* : NativeArray[Object] */;
val* var1277 /* : String */;
val* var1278 /* : RuntimeVariable */;
short int var1279 /* : Bool */;
static val* varonce1280;
val* var1281 /* : String */;
char* var1282 /* : NativeString */;
long var1283 /* : Int */;
val* var1284 /* : FlatString */;
short int var1285 /* : Bool */;
short int var1286 /* : Bool */;
short int var1287 /* : Bool */;
static val* varonce1288;
val* var1289 /* : String */;
char* var1290 /* : NativeString */;
long var1291 /* : Int */;
val* var1292 /* : FlatString */;
short int var1293 /* : Bool */;
short int var1294 /* : Bool */;
static val* varonce1295;
val* var1296 /* : String */;
char* var1297 /* : NativeString */;
long var1298 /* : Int */;
val* var1299 /* : FlatString */;
long var1300 /* : Int */;
val* var1301 /* : nullable Object */;
static val* varonce1302;
val* var1303 /* : String */;
char* var1304 /* : NativeString */;
long var1305 /* : Int */;
val* var1306 /* : FlatString */;
val* var1307 /* : Array[Object] */;
long var1308 /* : Int */;
val* var1309 /* : NativeArray[Object] */;
val* var1310 /* : String */;
short int var1311 /* : Bool */;
static val* varonce1312;
val* var1313 /* : String */;
char* var1314 /* : NativeString */;
long var1315 /* : Int */;
val* var1316 /* : FlatString */;
short int var1317 /* : Bool */;
short int var1318 /* : Bool */;
static val* varonce1319;
val* var1320 /* : String */;
char* var1321 /* : NativeString */;
long var1322 /* : Int */;
val* var1323 /* : FlatString */;
val* var1324 /* : RuntimeVariable */;
short int var1325 /* : Bool */;
static val* varonce1326;
val* var1327 /* : String */;
char* var1328 /* : NativeString */;
long var1329 /* : Int */;
val* var1330 /* : FlatString */;
short int var1331 /* : Bool */;
short int var1332 /* : Bool */;
static val* varonce1333;
val* var1334 /* : String */;
char* var1335 /* : NativeString */;
long var1336 /* : Int */;
val* var1337 /* : FlatString */;
long var1338 /* : Int */;
val* var1339 /* : nullable Object */;
static val* varonce1340;
val* var1341 /* : String */;
char* var1342 /* : NativeString */;
long var1343 /* : Int */;
val* var1344 /* : FlatString */;
val* var1345 /* : Array[Object] */;
long var1346 /* : Int */;
val* var1347 /* : NativeArray[Object] */;
val* var1348 /* : String */;
val* var1349 /* : RuntimeVariable */;
short int var1350 /* : Bool */;
static val* varonce1351;
val* var1352 /* : String */;
char* var1353 /* : NativeString */;
long var1354 /* : Int */;
val* var1355 /* : FlatString */;
short int var1356 /* : Bool */;
short int var1357 /* : Bool */;
short int var1358 /* : Bool */;
static val* varonce1359;
val* var1360 /* : String */;
char* var1361 /* : NativeString */;
long var1362 /* : Int */;
val* var1363 /* : FlatString */;
short int var1364 /* : Bool */;
short int var1365 /* : Bool */;
static val* varonce1366;
val* var1367 /* : String */;
char* var1368 /* : NativeString */;
long var1369 /* : Int */;
val* var1370 /* : FlatString */;
val* var1371 /* : nullable Object */;
val* var1372 /* : Array[Object] */;
long var1373 /* : Int */;
val* var1374 /* : NativeArray[Object] */;
val* var1375 /* : String */;
val* var1376 /* : RuntimeVariable */;
short int var1377 /* : Bool */;
static val* varonce1378;
val* var1379 /* : String */;
char* var1380 /* : NativeString */;
long var1381 /* : Int */;
val* var1382 /* : FlatString */;
short int var1383 /* : Bool */;
short int var1384 /* : Bool */;
long var1385 /* : Int */;
val* var1386 /* : nullable Object */;
long var1387 /* : Int */;
val* var1388 /* : nullable Object */;
val* var1389 /* : RuntimeVariable */;
short int var1390 /* : Bool */;
static val* varonce1391;
val* var1392 /* : String */;
char* var1393 /* : NativeString */;
long var1394 /* : Int */;
val* var1395 /* : FlatString */;
short int var1396 /* : Bool */;
short int var1397 /* : Bool */;
long var1398 /* : Int */;
val* var1399 /* : nullable Object */;
long var1400 /* : Int */;
val* var1401 /* : nullable Object */;
val* var1402 /* : RuntimeVariable */;
short int var1403 /* : Bool */;
static val* varonce1404;
val* var1405 /* : String */;
char* var1406 /* : NativeString */;
long var1407 /* : Int */;
val* var1408 /* : FlatString */;
short int var1409 /* : Bool */;
short int var1410 /* : Bool */;
val* var1411 /* : nullable Object */;
val* var1412 /* : String */;
val* var_nat /* var nat: String */;
static val* varonce1413;
val* var1414 /* : String */;
char* var1415 /* : NativeString */;
long var1416 /* : Int */;
val* var1417 /* : FlatString */;
static val* varonce1418;
val* var1419 /* : String */;
char* var1420 /* : NativeString */;
long var1421 /* : Int */;
val* var1422 /* : FlatString */;
val* var1423 /* : Array[Object] */;
long var1424 /* : Int */;
val* var1425 /* : NativeArray[Object] */;
val* var1426 /* : String */;
short int var1427 /* : Bool */;
static val* varonce1428;
val* var1429 /* : String */;
char* var1430 /* : NativeString */;
long var1431 /* : Int */;
val* var1432 /* : FlatString */;
short int var1433 /* : Bool */;
short int var1434 /* : Bool */;
val* var1435 /* : nullable Object */;
val* var1436 /* : String */;
val* var_nat1437 /* var nat: String */;
static val* varonce1438;
val* var1439 /* : String */;
char* var1440 /* : NativeString */;
long var1441 /* : Int */;
val* var1442 /* : FlatString */;
val* var1443 /* : Array[Object] */;
long var1444 /* : Int */;
val* var1445 /* : NativeArray[Object] */;
val* var1446 /* : String */;
val* var1447 /* : RuntimeVariable */;
short int var1448 /* : Bool */;
static val* varonce1449;
val* var1450 /* : String */;
char* var1451 /* : NativeString */;
long var1452 /* : Int */;
val* var1453 /* : FlatString */;
short int var1454 /* : Bool */;
short int var1455 /* : Bool */;
static val* varonce1456;
val* var1457 /* : String */;
char* var1458 /* : NativeString */;
long var1459 /* : Int */;
val* var1460 /* : FlatString */;
short int var1461 /* : Bool */;
static val* varonce1462;
val* var1463 /* : String */;
char* var1464 /* : NativeString */;
long var1465 /* : Int */;
val* var1466 /* : FlatString */;
short int var1467 /* : Bool */;
short int var1468 /* : Bool */;
static val* varonce1469;
val* var1470 /* : String */;
char* var1471 /* : NativeString */;
long var1472 /* : Int */;
val* var1473 /* : FlatString */;
val* var1474 /* : RuntimeVariable */;
short int var1475 /* : Bool */;
static val* varonce1476;
val* var1477 /* : String */;
char* var1478 /* : NativeString */;
long var1479 /* : Int */;
val* var1480 /* : FlatString */;
short int var1481 /* : Bool */;
short int var1482 /* : Bool */;
static val* varonce1483;
val* var1484 /* : String */;
char* var1485 /* : NativeString */;
long var1486 /* : Int */;
val* var1487 /* : FlatString */;
long var1488 /* : Int */;
val* var1489 /* : nullable Object */;
static val* varonce1490;
val* var1491 /* : String */;
char* var1492 /* : NativeString */;
long var1493 /* : Int */;
val* var1494 /* : FlatString */;
val* var1495 /* : Array[Object] */;
long var1496 /* : Int */;
val* var1497 /* : NativeArray[Object] */;
val* var1498 /* : String */;
val* var1499 /* : RuntimeVariable */;
short int var1500 /* : Bool */;
short int var1501 /* : Bool */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var3 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var1) on <var1:MProperty(MMethod)> */
var6 = var1->attrs[COLOR_model__MProperty___name].val; /* _name on <var1:MProperty(MMethod)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_pname = var4;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var9 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#name (var10) on <var10:MClass> */
var15 = var10->attrs[COLOR_model__MClass___name].val; /* _name on <var10:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_cname = var13;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var18 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2008);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var16) on <var16:nullable MSignature> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1468);
show_backtrace(1);
}
var21 = var16->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var16:nullable MSignature> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_ret = var19;
var22 = NULL;
if (var_ret == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var22) on <var_ret:nullable MType> */
var_other = var22;
{
var27 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var26 = var27;
}
var28 = !var26;
var24 = var28;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
var29 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var30 = abstract_compiler__AbstractCompilerVisitor__resolve_for(var_v, var_ret, var29);
}
var_ret = var30;
} else {
}
if (varonce) {
var32 = varonce;
} else {
var33 = "==";
var34 = 2;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce = var32;
}
{
{ /* Inline kernel#Object#!= (var_pname,var32) on <var_pname:String> */
var_other = var32;
{
var40 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var_other) /* == on <var_pname:String>*/;
var39 = var40;
}
var41 = !var39;
var37 = var41;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
var_ = var36;
if (var36){
if (varonce42) {
var43 = varonce42;
} else {
var44 = "!=";
var45 = 2;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
{ /* Inline kernel#Object#!= (var_pname,var43) on <var_pname:String> */
var_other = var43;
{
var51 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var_other) /* == on <var_pname:String>*/;
var50 = var51;
}
var52 = !var50;
var48 = var52;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
var31 = var47;
} else {
var31 = var_;
}
if (var31){
{
separate_compiler__SeparateCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
separate_compiler__SeparateCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "Int";
var56 = 3;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
var59 = string__FlatString___61d_61d(var_cname, var54);
var58 = var59;
}
if (var58){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "output";
var63 = 6;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
var66 = string__FlatString___61d_61d(var_pname, var61);
var65 = var66;
}
if (var65){
if (varonce67) {
var68 = varonce67;
} else {
var69 = "printf(\"%ld\\n\", ";
var70 = 16;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
var72 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = ");";
var76 = 2;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 3;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var68;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var72;
((struct instance_array__NativeArray*)var80)->values[2] = (val*) var74;
{
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var82 = 1;
var = var82;
goto RET_LABEL;
} else {
if (varonce83) {
var84 = varonce83;
} else {
var85 = "object_id";
var86 = 9;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
var89 = string__FlatString___61d_61d(var_pname, var84);
var88 = var89;
}
if (var88){
{
var90 = abstract_collection__SequenceRead__first(var_arguments);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var91 = 1;
var = var91;
goto RET_LABEL;
} else {
if (varonce92) {
var93 = varonce92;
} else {
var94 = "+";
var95 = 1;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
var98 = string__FlatString___61d_61d(var_pname, var93);
var97 = var98;
}
if (var97){
var99 = 0;
{
var100 = array__Array___91d_93d(var_arguments, var99);
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = " + ";
var104 = 3;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = 1;
{
var107 = array__Array___91d_93d(var_arguments, var106);
}
var108 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var108 = array_instance Array[Object] */
var109 = 3;
var110 = NEW_array__NativeArray(var109, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var110)->values[0] = (val*) var100;
((struct instance_array__NativeArray*)var110)->values[1] = (val*) var102;
((struct instance_array__NativeArray*)var110)->values[2] = (val*) var107;
{
((void (*)(val*, val*, long))(var108->class->vft[COLOR_array__Array__with_native]))(var108, var110, var109) /* with_native on <var108:Array[Object]>*/;
}
}
{
var111 = ((val* (*)(val*))(var108->class->vft[COLOR_string__Object__to_s]))(var108) /* to_s on <var108:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2024);
show_backtrace(1);
}
{
var112 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var111, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var112); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var113 = 1;
var = var113;
goto RET_LABEL;
} else {
if (varonce114) {
var115 = varonce114;
} else {
var116 = "-";
var117 = 1;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
{
var120 = string__FlatString___61d_61d(var_pname, var115);
var119 = var120;
}
if (var119){
var121 = 0;
{
var122 = array__Array___91d_93d(var_arguments, var121);
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = " - ";
var126 = 3;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = 1;
{
var129 = array__Array___91d_93d(var_arguments, var128);
}
var130 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var130 = array_instance Array[Object] */
var131 = 3;
var132 = NEW_array__NativeArray(var131, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var132)->values[0] = (val*) var122;
((struct instance_array__NativeArray*)var132)->values[1] = (val*) var124;
((struct instance_array__NativeArray*)var132)->values[2] = (val*) var129;
{
((void (*)(val*, val*, long))(var130->class->vft[COLOR_array__Array__with_native]))(var130, var132, var131) /* with_native on <var130:Array[Object]>*/;
}
}
{
var133 = ((val* (*)(val*))(var130->class->vft[COLOR_string__Object__to_s]))(var130) /* to_s on <var130:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2027);
show_backtrace(1);
}
{
var134 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var133, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var134); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var135 = 1;
var = var135;
goto RET_LABEL;
} else {
if (varonce136) {
var137 = varonce136;
} else {
var138 = "unary -";
var139 = 7;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
{
var142 = string__FlatString___61d_61d(var_pname, var137);
var141 = var142;
}
if (var141){
if (varonce143) {
var144 = varonce143;
} else {
var145 = "-";
var146 = 1;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = 0;
{
var149 = array__Array___91d_93d(var_arguments, var148);
}
var150 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var150 = array_instance Array[Object] */
var151 = 2;
var152 = NEW_array__NativeArray(var151, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var152)->values[0] = (val*) var144;
((struct instance_array__NativeArray*)var152)->values[1] = (val*) var149;
{
((void (*)(val*, val*, long))(var150->class->vft[COLOR_array__Array__with_native]))(var150, var152, var151) /* with_native on <var150:Array[Object]>*/;
}
}
{
var153 = ((val* (*)(val*))(var150->class->vft[COLOR_string__Object__to_s]))(var150) /* to_s on <var150:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2030);
show_backtrace(1);
}
{
var154 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var153, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var154); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var155 = 1;
var = var155;
goto RET_LABEL;
} else {
if (varonce156) {
var157 = varonce156;
} else {
var158 = "*";
var159 = 1;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
{
var162 = string__FlatString___61d_61d(var_pname, var157);
var161 = var162;
}
if (var161){
var163 = 0;
{
var164 = array__Array___91d_93d(var_arguments, var163);
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = " * ";
var168 = 3;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
var170 = 1;
{
var171 = array__Array___91d_93d(var_arguments, var170);
}
var172 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var172 = array_instance Array[Object] */
var173 = 3;
var174 = NEW_array__NativeArray(var173, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var174)->values[0] = (val*) var164;
((struct instance_array__NativeArray*)var174)->values[1] = (val*) var166;
((struct instance_array__NativeArray*)var174)->values[2] = (val*) var171;
{
((void (*)(val*, val*, long))(var172->class->vft[COLOR_array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[Object]>*/;
}
}
{
var175 = ((val* (*)(val*))(var172->class->vft[COLOR_string__Object__to_s]))(var172) /* to_s on <var172:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2033);
show_backtrace(1);
}
{
var176 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var175, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var176); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var177 = 1;
var = var177;
goto RET_LABEL;
} else {
if (varonce178) {
var179 = varonce178;
} else {
var180 = "/";
var181 = 1;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
{
var184 = string__FlatString___61d_61d(var_pname, var179);
var183 = var184;
}
if (var183){
var185 = 0;
{
var186 = array__Array___91d_93d(var_arguments, var185);
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = " / ";
var190 = 3;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
var192 = 1;
{
var193 = array__Array___91d_93d(var_arguments, var192);
}
var194 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var194 = array_instance Array[Object] */
var195 = 3;
var196 = NEW_array__NativeArray(var195, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var196)->values[0] = (val*) var186;
((struct instance_array__NativeArray*)var196)->values[1] = (val*) var188;
((struct instance_array__NativeArray*)var196)->values[2] = (val*) var193;
{
((void (*)(val*, val*, long))(var194->class->vft[COLOR_array__Array__with_native]))(var194, var196, var195) /* with_native on <var194:Array[Object]>*/;
}
}
{
var197 = ((val* (*)(val*))(var194->class->vft[COLOR_string__Object__to_s]))(var194) /* to_s on <var194:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2036);
show_backtrace(1);
}
{
var198 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var197, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var198); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var199 = 1;
var = var199;
goto RET_LABEL;
} else {
if (varonce200) {
var201 = varonce200;
} else {
var202 = "%";
var203 = 1;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
{
var206 = string__FlatString___61d_61d(var_pname, var201);
var205 = var206;
}
if (var205){
var207 = 0;
{
var208 = array__Array___91d_93d(var_arguments, var207);
}
if (varonce209) {
var210 = varonce209;
} else {
var211 = " % ";
var212 = 3;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
var214 = 1;
{
var215 = array__Array___91d_93d(var_arguments, var214);
}
var216 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var216 = array_instance Array[Object] */
var217 = 3;
var218 = NEW_array__NativeArray(var217, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var218)->values[0] = (val*) var208;
((struct instance_array__NativeArray*)var218)->values[1] = (val*) var210;
((struct instance_array__NativeArray*)var218)->values[2] = (val*) var215;
{
((void (*)(val*, val*, long))(var216->class->vft[COLOR_array__Array__with_native]))(var216, var218, var217) /* with_native on <var216:Array[Object]>*/;
}
}
{
var219 = ((val* (*)(val*))(var216->class->vft[COLOR_string__Object__to_s]))(var216) /* to_s on <var216:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2039);
show_backtrace(1);
}
{
var220 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var219, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var220); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var221 = 1;
var = var221;
goto RET_LABEL;
} else {
if (varonce222) {
var223 = varonce222;
} else {
var224 = "lshift";
var225 = 6;
var226 = string__NativeString__to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
{
var228 = string__FlatString___61d_61d(var_pname, var223);
var227 = var228;
}
if (var227){
var229 = 0;
{
var230 = array__Array___91d_93d(var_arguments, var229);
}
if (varonce231) {
var232 = varonce231;
} else {
var233 = " << ";
var234 = 4;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
var236 = 1;
{
var237 = array__Array___91d_93d(var_arguments, var236);
}
var238 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var238 = array_instance Array[Object] */
var239 = 3;
var240 = NEW_array__NativeArray(var239, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var240)->values[0] = (val*) var230;
((struct instance_array__NativeArray*)var240)->values[1] = (val*) var232;
((struct instance_array__NativeArray*)var240)->values[2] = (val*) var237;
{
((void (*)(val*, val*, long))(var238->class->vft[COLOR_array__Array__with_native]))(var238, var240, var239) /* with_native on <var238:Array[Object]>*/;
}
}
{
var241 = ((val* (*)(val*))(var238->class->vft[COLOR_string__Object__to_s]))(var238) /* to_s on <var238:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2042);
show_backtrace(1);
}
{
var242 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var241, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var242); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var243 = 1;
var = var243;
goto RET_LABEL;
} else {
if (varonce244) {
var245 = varonce244;
} else {
var246 = "rshift";
var247 = 6;
var248 = string__NativeString__to_s_with_length(var246, var247);
var245 = var248;
varonce244 = var245;
}
{
var250 = string__FlatString___61d_61d(var_pname, var245);
var249 = var250;
}
if (var249){
var251 = 0;
{
var252 = array__Array___91d_93d(var_arguments, var251);
}
if (varonce253) {
var254 = varonce253;
} else {
var255 = " >> ";
var256 = 4;
var257 = string__NativeString__to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
var258 = 1;
{
var259 = array__Array___91d_93d(var_arguments, var258);
}
var260 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var260 = array_instance Array[Object] */
var261 = 3;
var262 = NEW_array__NativeArray(var261, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var262)->values[0] = (val*) var252;
((struct instance_array__NativeArray*)var262)->values[1] = (val*) var254;
((struct instance_array__NativeArray*)var262)->values[2] = (val*) var259;
{
((void (*)(val*, val*, long))(var260->class->vft[COLOR_array__Array__with_native]))(var260, var262, var261) /* with_native on <var260:Array[Object]>*/;
}
}
{
var263 = ((val* (*)(val*))(var260->class->vft[COLOR_string__Object__to_s]))(var260) /* to_s on <var260:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2045);
show_backtrace(1);
}
{
var264 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var263, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var264); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var265 = 1;
var = var265;
goto RET_LABEL;
} else {
if (varonce266) {
var267 = varonce266;
} else {
var268 = "==";
var269 = 2;
var270 = string__NativeString__to_s_with_length(var268, var269);
var267 = var270;
varonce266 = var267;
}
{
var272 = string__FlatString___61d_61d(var_pname, var267);
var271 = var272;
}
if (var271){
var273 = 0;
{
var274 = array__Array___91d_93d(var_arguments, var273);
}
var275 = 1;
{
var276 = array__Array___91d_93d(var_arguments, var275);
}
{
var277 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var274, var276);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var277); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var278 = 1;
var = var278;
goto RET_LABEL;
} else {
if (varonce279) {
var280 = varonce279;
} else {
var281 = "!=";
var282 = 2;
var283 = string__NativeString__to_s_with_length(var281, var282);
var280 = var283;
varonce279 = var280;
}
{
var285 = string__FlatString___61d_61d(var_pname, var280);
var284 = var285;
}
if (var284){
var286 = 0;
{
var287 = array__Array___91d_93d(var_arguments, var286);
}
var288 = 1;
{
var289 = array__Array___91d_93d(var_arguments, var288);
}
{
var290 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var287, var289);
}
var_res = var290;
if (varonce291) {
var292 = varonce291;
} else {
var293 = "!";
var294 = 1;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
var296 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var296 = array_instance Array[Object] */
var297 = 2;
var298 = NEW_array__NativeArray(var297, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var298)->values[0] = (val*) var292;
((struct instance_array__NativeArray*)var298)->values[1] = (val*) var_res;
{
((void (*)(val*, val*, long))(var296->class->vft[COLOR_array__Array__with_native]))(var296, var298, var297) /* with_native on <var296:Array[Object]>*/;
}
}
{
var299 = ((val* (*)(val*))(var296->class->vft[COLOR_string__Object__to_s]))(var296) /* to_s on <var296:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2052);
show_backtrace(1);
}
{
var300 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var299, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var300); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var301 = 1;
var = var301;
goto RET_LABEL;
} else {
if (varonce302) {
var303 = varonce302;
} else {
var304 = "<";
var305 = 1;
var306 = string__NativeString__to_s_with_length(var304, var305);
var303 = var306;
varonce302 = var303;
}
{
var308 = string__FlatString___61d_61d(var_pname, var303);
var307 = var308;
}
if (var307){
var309 = 0;
{
var310 = array__Array___91d_93d(var_arguments, var309);
}
if (varonce311) {
var312 = varonce311;
} else {
var313 = " < ";
var314 = 3;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
var316 = 1;
{
var317 = array__Array___91d_93d(var_arguments, var316);
}
var318 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var318 = array_instance Array[Object] */
var319 = 3;
var320 = NEW_array__NativeArray(var319, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var320)->values[0] = (val*) var310;
((struct instance_array__NativeArray*)var320)->values[1] = (val*) var312;
((struct instance_array__NativeArray*)var320)->values[2] = (val*) var317;
{
((void (*)(val*, val*, long))(var318->class->vft[COLOR_array__Array__with_native]))(var318, var320, var319) /* with_native on <var318:Array[Object]>*/;
}
}
{
var321 = ((val* (*)(val*))(var318->class->vft[COLOR_string__Object__to_s]))(var318) /* to_s on <var318:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2055);
show_backtrace(1);
}
{
var322 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var321, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var322); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var323 = 1;
var = var323;
goto RET_LABEL;
} else {
if (varonce324) {
var325 = varonce324;
} else {
var326 = ">";
var327 = 1;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
{
var330 = string__FlatString___61d_61d(var_pname, var325);
var329 = var330;
}
if (var329){
var331 = 0;
{
var332 = array__Array___91d_93d(var_arguments, var331);
}
if (varonce333) {
var334 = varonce333;
} else {
var335 = " > ";
var336 = 3;
var337 = string__NativeString__to_s_with_length(var335, var336);
var334 = var337;
varonce333 = var334;
}
var338 = 1;
{
var339 = array__Array___91d_93d(var_arguments, var338);
}
var340 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var340 = array_instance Array[Object] */
var341 = 3;
var342 = NEW_array__NativeArray(var341, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var342)->values[0] = (val*) var332;
((struct instance_array__NativeArray*)var342)->values[1] = (val*) var334;
((struct instance_array__NativeArray*)var342)->values[2] = (val*) var339;
{
((void (*)(val*, val*, long))(var340->class->vft[COLOR_array__Array__with_native]))(var340, var342, var341) /* with_native on <var340:Array[Object]>*/;
}
}
{
var343 = ((val* (*)(val*))(var340->class->vft[COLOR_string__Object__to_s]))(var340) /* to_s on <var340:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2058);
show_backtrace(1);
}
{
var344 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var343, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var344); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var345 = 1;
var = var345;
goto RET_LABEL;
} else {
if (varonce346) {
var347 = varonce346;
} else {
var348 = "<=";
var349 = 2;
var350 = string__NativeString__to_s_with_length(var348, var349);
var347 = var350;
varonce346 = var347;
}
{
var352 = string__FlatString___61d_61d(var_pname, var347);
var351 = var352;
}
if (var351){
var353 = 0;
{
var354 = array__Array___91d_93d(var_arguments, var353);
}
if (varonce355) {
var356 = varonce355;
} else {
var357 = " <= ";
var358 = 4;
var359 = string__NativeString__to_s_with_length(var357, var358);
var356 = var359;
varonce355 = var356;
}
var360 = 1;
{
var361 = array__Array___91d_93d(var_arguments, var360);
}
var362 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var362 = array_instance Array[Object] */
var363 = 3;
var364 = NEW_array__NativeArray(var363, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var364)->values[0] = (val*) var354;
((struct instance_array__NativeArray*)var364)->values[1] = (val*) var356;
((struct instance_array__NativeArray*)var364)->values[2] = (val*) var361;
{
((void (*)(val*, val*, long))(var362->class->vft[COLOR_array__Array__with_native]))(var362, var364, var363) /* with_native on <var362:Array[Object]>*/;
}
}
{
var365 = ((val* (*)(val*))(var362->class->vft[COLOR_string__Object__to_s]))(var362) /* to_s on <var362:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2061);
show_backtrace(1);
}
{
var366 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var365, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var366); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var367 = 1;
var = var367;
goto RET_LABEL;
} else {
if (varonce368) {
var369 = varonce368;
} else {
var370 = ">=";
var371 = 2;
var372 = string__NativeString__to_s_with_length(var370, var371);
var369 = var372;
varonce368 = var369;
}
{
var374 = string__FlatString___61d_61d(var_pname, var369);
var373 = var374;
}
if (var373){
var375 = 0;
{
var376 = array__Array___91d_93d(var_arguments, var375);
}
if (varonce377) {
var378 = varonce377;
} else {
var379 = " >= ";
var380 = 4;
var381 = string__NativeString__to_s_with_length(var379, var380);
var378 = var381;
varonce377 = var378;
}
var382 = 1;
{
var383 = array__Array___91d_93d(var_arguments, var382);
}
var384 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var384 = array_instance Array[Object] */
var385 = 3;
var386 = NEW_array__NativeArray(var385, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var386)->values[0] = (val*) var376;
((struct instance_array__NativeArray*)var386)->values[1] = (val*) var378;
((struct instance_array__NativeArray*)var386)->values[2] = (val*) var383;
{
((void (*)(val*, val*, long))(var384->class->vft[COLOR_array__Array__with_native]))(var384, var386, var385) /* with_native on <var384:Array[Object]>*/;
}
}
{
var387 = ((val* (*)(val*))(var384->class->vft[COLOR_string__Object__to_s]))(var384) /* to_s on <var384:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2064);
show_backtrace(1);
}
{
var388 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var387, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var388); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var389 = 1;
var = var389;
goto RET_LABEL;
} else {
if (varonce390) {
var391 = varonce390;
} else {
var392 = "to_f";
var393 = 4;
var394 = string__NativeString__to_s_with_length(var392, var393);
var391 = var394;
varonce390 = var391;
}
{
var396 = string__FlatString___61d_61d(var_pname, var391);
var395 = var396;
}
if (var395){
if (varonce397) {
var398 = varonce397;
} else {
var399 = "(double)";
var400 = 8;
var401 = string__NativeString__to_s_with_length(var399, var400);
var398 = var401;
varonce397 = var398;
}
var402 = 0;
{
var403 = array__Array___91d_93d(var_arguments, var402);
}
var404 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var404 = array_instance Array[Object] */
var405 = 2;
var406 = NEW_array__NativeArray(var405, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var406)->values[0] = (val*) var398;
((struct instance_array__NativeArray*)var406)->values[1] = (val*) var403;
{
((void (*)(val*, val*, long))(var404->class->vft[COLOR_array__Array__with_native]))(var404, var406, var405) /* with_native on <var404:Array[Object]>*/;
}
}
{
var407 = ((val* (*)(val*))(var404->class->vft[COLOR_string__Object__to_s]))(var404) /* to_s on <var404:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2067);
show_backtrace(1);
}
{
var408 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var407, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var408); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var409 = 1;
var = var409;
goto RET_LABEL;
} else {
if (varonce410) {
var411 = varonce410;
} else {
var412 = "ascii";
var413 = 5;
var414 = string__NativeString__to_s_with_length(var412, var413);
var411 = var414;
varonce410 = var411;
}
{
var416 = string__FlatString___61d_61d(var_pname, var411);
var415 = var416;
}
if (var415){
var417 = 0;
{
var418 = array__Array___91d_93d(var_arguments, var417);
}
var419 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var419 = array_instance Array[Object] */
var420 = 1;
var421 = NEW_array__NativeArray(var420, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var421)->values[0] = (val*) var418;
{
((void (*)(val*, val*, long))(var419->class->vft[COLOR_array__Array__with_native]))(var419, var421, var420) /* with_native on <var419:Array[Object]>*/;
}
}
{
var422 = ((val* (*)(val*))(var419->class->vft[COLOR_string__Object__to_s]))(var419) /* to_s on <var419:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2070);
show_backtrace(1);
}
{
var423 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var422, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var423); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var424 = 1;
var = var424;
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
if (varonce425) {
var426 = varonce425;
} else {
var427 = "Char";
var428 = 4;
var429 = string__NativeString__to_s_with_length(var427, var428);
var426 = var429;
varonce425 = var426;
}
{
var431 = string__FlatString___61d_61d(var_cname, var426);
var430 = var431;
}
if (var430){
if (varonce432) {
var433 = varonce432;
} else {
var434 = "output";
var435 = 6;
var436 = string__NativeString__to_s_with_length(var434, var435);
var433 = var436;
varonce432 = var433;
}
{
var438 = string__FlatString___61d_61d(var_pname, var433);
var437 = var438;
}
if (var437){
if (varonce439) {
var440 = varonce439;
} else {
var441 = "printf(\"%c\", ";
var442 = 13;
var443 = string__NativeString__to_s_with_length(var441, var442);
var440 = var443;
varonce439 = var440;
}
{
var444 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce445) {
var446 = varonce445;
} else {
var447 = ");";
var448 = 2;
var449 = string__NativeString__to_s_with_length(var447, var448);
var446 = var449;
varonce445 = var446;
}
var450 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var450 = array_instance Array[Object] */
var451 = 3;
var452 = NEW_array__NativeArray(var451, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var452)->values[0] = (val*) var440;
((struct instance_array__NativeArray*)var452)->values[1] = (val*) var444;
((struct instance_array__NativeArray*)var452)->values[2] = (val*) var446;
{
((void (*)(val*, val*, long))(var450->class->vft[COLOR_array__Array__with_native]))(var450, var452, var451) /* with_native on <var450:Array[Object]>*/;
}
}
{
var453 = ((val* (*)(val*))(var450->class->vft[COLOR_string__Object__to_s]))(var450) /* to_s on <var450:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var453); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var454 = 1;
var = var454;
goto RET_LABEL;
} else {
if (varonce455) {
var456 = varonce455;
} else {
var457 = "object_id";
var458 = 9;
var459 = string__NativeString__to_s_with_length(var457, var458);
var456 = var459;
varonce455 = var456;
}
{
var461 = string__FlatString___61d_61d(var_pname, var456);
var460 = var461;
}
if (var460){
if (varonce462) {
var463 = varonce462;
} else {
var464 = "(long)";
var465 = 6;
var466 = string__NativeString__to_s_with_length(var464, var465);
var463 = var466;
varonce462 = var463;
}
{
var467 = abstract_collection__SequenceRead__first(var_arguments);
}
var468 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var468 = array_instance Array[Object] */
var469 = 2;
var470 = NEW_array__NativeArray(var469, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var470)->values[0] = (val*) var463;
((struct instance_array__NativeArray*)var470)->values[1] = (val*) var467;
{
((void (*)(val*, val*, long))(var468->class->vft[COLOR_array__Array__with_native]))(var468, var470, var469) /* with_native on <var468:Array[Object]>*/;
}
}
{
var471 = ((val* (*)(val*))(var468->class->vft[COLOR_string__Object__to_s]))(var468) /* to_s on <var468:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2078);
show_backtrace(1);
}
{
var472 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var471, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var472); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var473 = 1;
var = var473;
goto RET_LABEL;
} else {
if (varonce474) {
var475 = varonce474;
} else {
var476 = "successor";
var477 = 9;
var478 = string__NativeString__to_s_with_length(var476, var477);
var475 = var478;
varonce474 = var475;
}
{
var480 = string__FlatString___61d_61d(var_pname, var475);
var479 = var480;
}
if (var479){
var481 = 0;
{
var482 = array__Array___91d_93d(var_arguments, var481);
}
if (varonce483) {
var484 = varonce483;
} else {
var485 = " + ";
var486 = 3;
var487 = string__NativeString__to_s_with_length(var485, var486);
var484 = var487;
varonce483 = var484;
}
var488 = 1;
{
var489 = array__Array___91d_93d(var_arguments, var488);
}
var490 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var490 = array_instance Array[Object] */
var491 = 3;
var492 = NEW_array__NativeArray(var491, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var492)->values[0] = (val*) var482;
((struct instance_array__NativeArray*)var492)->values[1] = (val*) var484;
((struct instance_array__NativeArray*)var492)->values[2] = (val*) var489;
{
((void (*)(val*, val*, long))(var490->class->vft[COLOR_array__Array__with_native]))(var490, var492, var491) /* with_native on <var490:Array[Object]>*/;
}
}
{
var493 = ((val* (*)(val*))(var490->class->vft[COLOR_string__Object__to_s]))(var490) /* to_s on <var490:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2081);
show_backtrace(1);
}
{
var494 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var493, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var494); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var495 = 1;
var = var495;
goto RET_LABEL;
} else {
if (varonce496) {
var497 = varonce496;
} else {
var498 = "predecessor";
var499 = 11;
var500 = string__NativeString__to_s_with_length(var498, var499);
var497 = var500;
varonce496 = var497;
}
{
var502 = string__FlatString___61d_61d(var_pname, var497);
var501 = var502;
}
if (var501){
var503 = 0;
{
var504 = array__Array___91d_93d(var_arguments, var503);
}
if (varonce505) {
var506 = varonce505;
} else {
var507 = " - ";
var508 = 3;
var509 = string__NativeString__to_s_with_length(var507, var508);
var506 = var509;
varonce505 = var506;
}
var510 = 1;
{
var511 = array__Array___91d_93d(var_arguments, var510);
}
var512 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var512 = array_instance Array[Object] */
var513 = 3;
var514 = NEW_array__NativeArray(var513, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var514)->values[0] = (val*) var504;
((struct instance_array__NativeArray*)var514)->values[1] = (val*) var506;
((struct instance_array__NativeArray*)var514)->values[2] = (val*) var511;
{
((void (*)(val*, val*, long))(var512->class->vft[COLOR_array__Array__with_native]))(var512, var514, var513) /* with_native on <var512:Array[Object]>*/;
}
}
{
var515 = ((val* (*)(val*))(var512->class->vft[COLOR_string__Object__to_s]))(var512) /* to_s on <var512:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2084);
show_backtrace(1);
}
{
var516 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var515, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var516); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var517 = 1;
var = var517;
goto RET_LABEL;
} else {
if (varonce518) {
var519 = varonce518;
} else {
var520 = "==";
var521 = 2;
var522 = string__NativeString__to_s_with_length(var520, var521);
var519 = var522;
varonce518 = var519;
}
{
var524 = string__FlatString___61d_61d(var_pname, var519);
var523 = var524;
}
if (var523){
var525 = 0;
{
var526 = array__Array___91d_93d(var_arguments, var525);
}
var527 = 1;
{
var528 = array__Array___91d_93d(var_arguments, var527);
}
{
var529 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var526, var528);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var529); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var530 = 1;
var = var530;
goto RET_LABEL;
} else {
if (varonce531) {
var532 = varonce531;
} else {
var533 = "!=";
var534 = 2;
var535 = string__NativeString__to_s_with_length(var533, var534);
var532 = var535;
varonce531 = var532;
}
{
var537 = string__FlatString___61d_61d(var_pname, var532);
var536 = var537;
}
if (var536){
var538 = 0;
{
var539 = array__Array___91d_93d(var_arguments, var538);
}
var540 = 1;
{
var541 = array__Array___91d_93d(var_arguments, var540);
}
{
var542 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var539, var541);
}
var_res543 = var542;
if (varonce544) {
var545 = varonce544;
} else {
var546 = "!";
var547 = 1;
var548 = string__NativeString__to_s_with_length(var546, var547);
var545 = var548;
varonce544 = var545;
}
var549 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var549 = array_instance Array[Object] */
var550 = 2;
var551 = NEW_array__NativeArray(var550, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var551)->values[0] = (val*) var545;
((struct instance_array__NativeArray*)var551)->values[1] = (val*) var_res543;
{
((void (*)(val*, val*, long))(var549->class->vft[COLOR_array__Array__with_native]))(var549, var551, var550) /* with_native on <var549:Array[Object]>*/;
}
}
{
var552 = ((val* (*)(val*))(var549->class->vft[COLOR_string__Object__to_s]))(var549) /* to_s on <var549:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2091);
show_backtrace(1);
}
{
var553 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var552, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var553); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var554 = 1;
var = var554;
goto RET_LABEL;
} else {
if (varonce555) {
var556 = varonce555;
} else {
var557 = "<";
var558 = 1;
var559 = string__NativeString__to_s_with_length(var557, var558);
var556 = var559;
varonce555 = var556;
}
{
var561 = string__FlatString___61d_61d(var_pname, var556);
var560 = var561;
}
if (var560){
var562 = 0;
{
var563 = array__Array___91d_93d(var_arguments, var562);
}
if (varonce564) {
var565 = varonce564;
} else {
var566 = " < ";
var567 = 3;
var568 = string__NativeString__to_s_with_length(var566, var567);
var565 = var568;
varonce564 = var565;
}
var569 = 1;
{
var570 = array__Array___91d_93d(var_arguments, var569);
}
var571 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var571 = array_instance Array[Object] */
var572 = 3;
var573 = NEW_array__NativeArray(var572, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var573)->values[0] = (val*) var563;
((struct instance_array__NativeArray*)var573)->values[1] = (val*) var565;
((struct instance_array__NativeArray*)var573)->values[2] = (val*) var570;
{
((void (*)(val*, val*, long))(var571->class->vft[COLOR_array__Array__with_native]))(var571, var573, var572) /* with_native on <var571:Array[Object]>*/;
}
}
{
var574 = ((val* (*)(val*))(var571->class->vft[COLOR_string__Object__to_s]))(var571) /* to_s on <var571:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2094);
show_backtrace(1);
}
{
var575 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var574, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var575); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var576 = 1;
var = var576;
goto RET_LABEL;
} else {
if (varonce577) {
var578 = varonce577;
} else {
var579 = ">";
var580 = 1;
var581 = string__NativeString__to_s_with_length(var579, var580);
var578 = var581;
varonce577 = var578;
}
{
var583 = string__FlatString___61d_61d(var_pname, var578);
var582 = var583;
}
if (var582){
var584 = 0;
{
var585 = array__Array___91d_93d(var_arguments, var584);
}
if (varonce586) {
var587 = varonce586;
} else {
var588 = " > ";
var589 = 3;
var590 = string__NativeString__to_s_with_length(var588, var589);
var587 = var590;
varonce586 = var587;
}
var591 = 1;
{
var592 = array__Array___91d_93d(var_arguments, var591);
}
var593 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var593 = array_instance Array[Object] */
var594 = 3;
var595 = NEW_array__NativeArray(var594, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var595)->values[0] = (val*) var585;
((struct instance_array__NativeArray*)var595)->values[1] = (val*) var587;
((struct instance_array__NativeArray*)var595)->values[2] = (val*) var592;
{
((void (*)(val*, val*, long))(var593->class->vft[COLOR_array__Array__with_native]))(var593, var595, var594) /* with_native on <var593:Array[Object]>*/;
}
}
{
var596 = ((val* (*)(val*))(var593->class->vft[COLOR_string__Object__to_s]))(var593) /* to_s on <var593:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2097);
show_backtrace(1);
}
{
var597 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var596, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var597); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var598 = 1;
var = var598;
goto RET_LABEL;
} else {
if (varonce599) {
var600 = varonce599;
} else {
var601 = "<=";
var602 = 2;
var603 = string__NativeString__to_s_with_length(var601, var602);
var600 = var603;
varonce599 = var600;
}
{
var605 = string__FlatString___61d_61d(var_pname, var600);
var604 = var605;
}
if (var604){
var606 = 0;
{
var607 = array__Array___91d_93d(var_arguments, var606);
}
if (varonce608) {
var609 = varonce608;
} else {
var610 = " <= ";
var611 = 4;
var612 = string__NativeString__to_s_with_length(var610, var611);
var609 = var612;
varonce608 = var609;
}
var613 = 1;
{
var614 = array__Array___91d_93d(var_arguments, var613);
}
var615 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var615 = array_instance Array[Object] */
var616 = 3;
var617 = NEW_array__NativeArray(var616, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var617)->values[0] = (val*) var607;
((struct instance_array__NativeArray*)var617)->values[1] = (val*) var609;
((struct instance_array__NativeArray*)var617)->values[2] = (val*) var614;
{
((void (*)(val*, val*, long))(var615->class->vft[COLOR_array__Array__with_native]))(var615, var617, var616) /* with_native on <var615:Array[Object]>*/;
}
}
{
var618 = ((val* (*)(val*))(var615->class->vft[COLOR_string__Object__to_s]))(var615) /* to_s on <var615:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2100);
show_backtrace(1);
}
{
var619 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var618, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var619); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var620 = 1;
var = var620;
goto RET_LABEL;
} else {
if (varonce621) {
var622 = varonce621;
} else {
var623 = ">=";
var624 = 2;
var625 = string__NativeString__to_s_with_length(var623, var624);
var622 = var625;
varonce621 = var622;
}
{
var627 = string__FlatString___61d_61d(var_pname, var622);
var626 = var627;
}
if (var626){
var628 = 0;
{
var629 = array__Array___91d_93d(var_arguments, var628);
}
if (varonce630) {
var631 = varonce630;
} else {
var632 = " >= ";
var633 = 4;
var634 = string__NativeString__to_s_with_length(var632, var633);
var631 = var634;
varonce630 = var631;
}
var635 = 1;
{
var636 = array__Array___91d_93d(var_arguments, var635);
}
var637 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var637 = array_instance Array[Object] */
var638 = 3;
var639 = NEW_array__NativeArray(var638, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var639)->values[0] = (val*) var629;
((struct instance_array__NativeArray*)var639)->values[1] = (val*) var631;
((struct instance_array__NativeArray*)var639)->values[2] = (val*) var636;
{
((void (*)(val*, val*, long))(var637->class->vft[COLOR_array__Array__with_native]))(var637, var639, var638) /* with_native on <var637:Array[Object]>*/;
}
}
{
var640 = ((val* (*)(val*))(var637->class->vft[COLOR_string__Object__to_s]))(var637) /* to_s on <var637:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2103);
show_backtrace(1);
}
{
var641 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var640, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var641); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var642 = 1;
var = var642;
goto RET_LABEL;
} else {
if (varonce643) {
var644 = varonce643;
} else {
var645 = "to_i";
var646 = 4;
var647 = string__NativeString__to_s_with_length(var645, var646);
var644 = var647;
varonce643 = var644;
}
{
var649 = string__FlatString___61d_61d(var_pname, var644);
var648 = var649;
}
if (var648){
var650 = 0;
{
var651 = array__Array___91d_93d(var_arguments, var650);
}
if (varonce652) {
var653 = varonce652;
} else {
var654 = "-\'0\'";
var655 = 4;
var656 = string__NativeString__to_s_with_length(var654, var655);
var653 = var656;
varonce652 = var653;
}
var657 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var657 = array_instance Array[Object] */
var658 = 2;
var659 = NEW_array__NativeArray(var658, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var659)->values[0] = (val*) var651;
((struct instance_array__NativeArray*)var659)->values[1] = (val*) var653;
{
((void (*)(val*, val*, long))(var657->class->vft[COLOR_array__Array__with_native]))(var657, var659, var658) /* with_native on <var657:Array[Object]>*/;
}
}
{
var660 = ((val* (*)(val*))(var657->class->vft[COLOR_string__Object__to_s]))(var657) /* to_s on <var657:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2106);
show_backtrace(1);
}
{
var661 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var660, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var661); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var662 = 1;
var = var662;
goto RET_LABEL;
} else {
if (varonce663) {
var664 = varonce663;
} else {
var665 = "ascii";
var666 = 5;
var667 = string__NativeString__to_s_with_length(var665, var666);
var664 = var667;
varonce663 = var664;
}
{
var669 = string__FlatString___61d_61d(var_pname, var664);
var668 = var669;
}
if (var668){
if (varonce670) {
var671 = varonce670;
} else {
var672 = "(unsigned char)";
var673 = 15;
var674 = string__NativeString__to_s_with_length(var672, var673);
var671 = var674;
varonce670 = var671;
}
var675 = 0;
{
var676 = array__Array___91d_93d(var_arguments, var675);
}
var677 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var677 = array_instance Array[Object] */
var678 = 2;
var679 = NEW_array__NativeArray(var678, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var679)->values[0] = (val*) var671;
((struct instance_array__NativeArray*)var679)->values[1] = (val*) var676;
{
((void (*)(val*, val*, long))(var677->class->vft[COLOR_array__Array__with_native]))(var677, var679, var678) /* with_native on <var677:Array[Object]>*/;
}
}
{
var680 = ((val* (*)(val*))(var677->class->vft[COLOR_string__Object__to_s]))(var677) /* to_s on <var677:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2109);
show_backtrace(1);
}
{
var681 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var680, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var681); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var682 = 1;
var = var682;
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
if (varonce683) {
var684 = varonce683;
} else {
var685 = "Bool";
var686 = 4;
var687 = string__NativeString__to_s_with_length(var685, var686);
var684 = var687;
varonce683 = var684;
}
{
var689 = string__FlatString___61d_61d(var_cname, var684);
var688 = var689;
}
if (var688){
if (varonce690) {
var691 = varonce690;
} else {
var692 = "output";
var693 = 6;
var694 = string__NativeString__to_s_with_length(var692, var693);
var691 = var694;
varonce690 = var691;
}
{
var696 = string__FlatString___61d_61d(var_pname, var691);
var695 = var696;
}
if (var695){
if (varonce697) {
var698 = varonce697;
} else {
var699 = "printf(";
var700 = 7;
var701 = string__NativeString__to_s_with_length(var699, var700);
var698 = var701;
varonce697 = var698;
}
{
var702 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce703) {
var704 = varonce703;
} else {
var705 = "?\"true\\n\":\"false\\n\");";
var706 = 21;
var707 = string__NativeString__to_s_with_length(var705, var706);
var704 = var707;
varonce703 = var704;
}
var708 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var708 = array_instance Array[Object] */
var709 = 3;
var710 = NEW_array__NativeArray(var709, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var710)->values[0] = (val*) var698;
((struct instance_array__NativeArray*)var710)->values[1] = (val*) var702;
((struct instance_array__NativeArray*)var710)->values[2] = (val*) var704;
{
((void (*)(val*, val*, long))(var708->class->vft[COLOR_array__Array__with_native]))(var708, var710, var709) /* with_native on <var708:Array[Object]>*/;
}
}
{
var711 = ((val* (*)(val*))(var708->class->vft[COLOR_string__Object__to_s]))(var708) /* to_s on <var708:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var711); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var712 = 1;
var = var712;
goto RET_LABEL;
} else {
if (varonce713) {
var714 = varonce713;
} else {
var715 = "object_id";
var716 = 9;
var717 = string__NativeString__to_s_with_length(var715, var716);
var714 = var717;
varonce713 = var714;
}
{
var719 = string__FlatString___61d_61d(var_pname, var714);
var718 = var719;
}
if (var718){
if (varonce720) {
var721 = varonce720;
} else {
var722 = "(long)";
var723 = 6;
var724 = string__NativeString__to_s_with_length(var722, var723);
var721 = var724;
varonce720 = var721;
}
{
var725 = abstract_collection__SequenceRead__first(var_arguments);
}
var726 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var726 = array_instance Array[Object] */
var727 = 2;
var728 = NEW_array__NativeArray(var727, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var728)->values[0] = (val*) var721;
((struct instance_array__NativeArray*)var728)->values[1] = (val*) var725;
{
((void (*)(val*, val*, long))(var726->class->vft[COLOR_array__Array__with_native]))(var726, var728, var727) /* with_native on <var726:Array[Object]>*/;
}
}
{
var729 = ((val* (*)(val*))(var726->class->vft[COLOR_string__Object__to_s]))(var726) /* to_s on <var726:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2117);
show_backtrace(1);
}
{
var730 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var729, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var730); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var731 = 1;
var = var731;
goto RET_LABEL;
} else {
if (varonce732) {
var733 = varonce732;
} else {
var734 = "==";
var735 = 2;
var736 = string__NativeString__to_s_with_length(var734, var735);
var733 = var736;
varonce732 = var733;
}
{
var738 = string__FlatString___61d_61d(var_pname, var733);
var737 = var738;
}
if (var737){
var739 = 0;
{
var740 = array__Array___91d_93d(var_arguments, var739);
}
var741 = 1;
{
var742 = array__Array___91d_93d(var_arguments, var741);
}
{
var743 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var740, var742);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var743); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var744 = 1;
var = var744;
goto RET_LABEL;
} else {
if (varonce745) {
var746 = varonce745;
} else {
var747 = "!=";
var748 = 2;
var749 = string__NativeString__to_s_with_length(var747, var748);
var746 = var749;
varonce745 = var746;
}
{
var751 = string__FlatString___61d_61d(var_pname, var746);
var750 = var751;
}
if (var750){
var752 = 0;
{
var753 = array__Array___91d_93d(var_arguments, var752);
}
var754 = 1;
{
var755 = array__Array___91d_93d(var_arguments, var754);
}
{
var756 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var753, var755);
}
var_res757 = var756;
if (varonce758) {
var759 = varonce758;
} else {
var760 = "!";
var761 = 1;
var762 = string__NativeString__to_s_with_length(var760, var761);
var759 = var762;
varonce758 = var759;
}
var763 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var763 = array_instance Array[Object] */
var764 = 2;
var765 = NEW_array__NativeArray(var764, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var765)->values[0] = (val*) var759;
((struct instance_array__NativeArray*)var765)->values[1] = (val*) var_res757;
{
((void (*)(val*, val*, long))(var763->class->vft[COLOR_array__Array__with_native]))(var763, var765, var764) /* with_native on <var763:Array[Object]>*/;
}
}
{
var766 = ((val* (*)(val*))(var763->class->vft[COLOR_string__Object__to_s]))(var763) /* to_s on <var763:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2124);
show_backtrace(1);
}
{
var767 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var766, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var767); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var768 = 1;
var = var768;
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (varonce769) {
var770 = varonce769;
} else {
var771 = "Float";
var772 = 5;
var773 = string__NativeString__to_s_with_length(var771, var772);
var770 = var773;
varonce769 = var770;
}
{
var775 = string__FlatString___61d_61d(var_cname, var770);
var774 = var775;
}
if (var774){
if (varonce776) {
var777 = varonce776;
} else {
var778 = "output";
var779 = 6;
var780 = string__NativeString__to_s_with_length(var778, var779);
var777 = var780;
varonce776 = var777;
}
{
var782 = string__FlatString___61d_61d(var_pname, var777);
var781 = var782;
}
if (var781){
if (varonce783) {
var784 = varonce783;
} else {
var785 = "printf(\"%f\\n\", ";
var786 = 15;
var787 = string__NativeString__to_s_with_length(var785, var786);
var784 = var787;
varonce783 = var784;
}
{
var788 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce789) {
var790 = varonce789;
} else {
var791 = ");";
var792 = 2;
var793 = string__NativeString__to_s_with_length(var791, var792);
var790 = var793;
varonce789 = var790;
}
var794 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var794 = array_instance Array[Object] */
var795 = 3;
var796 = NEW_array__NativeArray(var795, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var796)->values[0] = (val*) var784;
((struct instance_array__NativeArray*)var796)->values[1] = (val*) var788;
((struct instance_array__NativeArray*)var796)->values[2] = (val*) var790;
{
((void (*)(val*, val*, long))(var794->class->vft[COLOR_array__Array__with_native]))(var794, var796, var795) /* with_native on <var794:Array[Object]>*/;
}
}
{
var797 = ((val* (*)(val*))(var794->class->vft[COLOR_string__Object__to_s]))(var794) /* to_s on <var794:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var797); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var798 = 1;
var = var798;
goto RET_LABEL;
} else {
if (varonce799) {
var800 = varonce799;
} else {
var801 = "object_id";
var802 = 9;
var803 = string__NativeString__to_s_with_length(var801, var802);
var800 = var803;
varonce799 = var800;
}
{
var805 = string__FlatString___61d_61d(var_pname, var800);
var804 = var805;
}
if (var804){
if (varonce806) {
var807 = varonce806;
} else {
var808 = "(double)";
var809 = 8;
var810 = string__NativeString__to_s_with_length(var808, var809);
var807 = var810;
varonce806 = var807;
}
{
var811 = abstract_collection__SequenceRead__first(var_arguments);
}
var812 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var812 = array_instance Array[Object] */
var813 = 2;
var814 = NEW_array__NativeArray(var813, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var814)->values[0] = (val*) var807;
((struct instance_array__NativeArray*)var814)->values[1] = (val*) var811;
{
((void (*)(val*, val*, long))(var812->class->vft[COLOR_array__Array__with_native]))(var812, var814, var813) /* with_native on <var812:Array[Object]>*/;
}
}
{
var815 = ((val* (*)(val*))(var812->class->vft[COLOR_string__Object__to_s]))(var812) /* to_s on <var812:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2132);
show_backtrace(1);
}
{
var816 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var815, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var816); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var817 = 1;
var = var817;
goto RET_LABEL;
} else {
if (varonce818) {
var819 = varonce818;
} else {
var820 = "+";
var821 = 1;
var822 = string__NativeString__to_s_with_length(var820, var821);
var819 = var822;
varonce818 = var819;
}
{
var824 = string__FlatString___61d_61d(var_pname, var819);
var823 = var824;
}
if (var823){
var825 = 0;
{
var826 = array__Array___91d_93d(var_arguments, var825);
}
if (varonce827) {
var828 = varonce827;
} else {
var829 = " + ";
var830 = 3;
var831 = string__NativeString__to_s_with_length(var829, var830);
var828 = var831;
varonce827 = var828;
}
var832 = 1;
{
var833 = array__Array___91d_93d(var_arguments, var832);
}
var834 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var834 = array_instance Array[Object] */
var835 = 3;
var836 = NEW_array__NativeArray(var835, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var836)->values[0] = (val*) var826;
((struct instance_array__NativeArray*)var836)->values[1] = (val*) var828;
((struct instance_array__NativeArray*)var836)->values[2] = (val*) var833;
{
((void (*)(val*, val*, long))(var834->class->vft[COLOR_array__Array__with_native]))(var834, var836, var835) /* with_native on <var834:Array[Object]>*/;
}
}
{
var837 = ((val* (*)(val*))(var834->class->vft[COLOR_string__Object__to_s]))(var834) /* to_s on <var834:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2135);
show_backtrace(1);
}
{
var838 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var837, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var838); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var839 = 1;
var = var839;
goto RET_LABEL;
} else {
if (varonce840) {
var841 = varonce840;
} else {
var842 = "-";
var843 = 1;
var844 = string__NativeString__to_s_with_length(var842, var843);
var841 = var844;
varonce840 = var841;
}
{
var846 = string__FlatString___61d_61d(var_pname, var841);
var845 = var846;
}
if (var845){
var847 = 0;
{
var848 = array__Array___91d_93d(var_arguments, var847);
}
if (varonce849) {
var850 = varonce849;
} else {
var851 = " - ";
var852 = 3;
var853 = string__NativeString__to_s_with_length(var851, var852);
var850 = var853;
varonce849 = var850;
}
var854 = 1;
{
var855 = array__Array___91d_93d(var_arguments, var854);
}
var856 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var856 = array_instance Array[Object] */
var857 = 3;
var858 = NEW_array__NativeArray(var857, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var858)->values[0] = (val*) var848;
((struct instance_array__NativeArray*)var858)->values[1] = (val*) var850;
((struct instance_array__NativeArray*)var858)->values[2] = (val*) var855;
{
((void (*)(val*, val*, long))(var856->class->vft[COLOR_array__Array__with_native]))(var856, var858, var857) /* with_native on <var856:Array[Object]>*/;
}
}
{
var859 = ((val* (*)(val*))(var856->class->vft[COLOR_string__Object__to_s]))(var856) /* to_s on <var856:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2138);
show_backtrace(1);
}
{
var860 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var859, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var860); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var861 = 1;
var = var861;
goto RET_LABEL;
} else {
if (varonce862) {
var863 = varonce862;
} else {
var864 = "unary -";
var865 = 7;
var866 = string__NativeString__to_s_with_length(var864, var865);
var863 = var866;
varonce862 = var863;
}
{
var868 = string__FlatString___61d_61d(var_pname, var863);
var867 = var868;
}
if (var867){
if (varonce869) {
var870 = varonce869;
} else {
var871 = "-";
var872 = 1;
var873 = string__NativeString__to_s_with_length(var871, var872);
var870 = var873;
varonce869 = var870;
}
var874 = 0;
{
var875 = array__Array___91d_93d(var_arguments, var874);
}
var876 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var876 = array_instance Array[Object] */
var877 = 2;
var878 = NEW_array__NativeArray(var877, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var878)->values[0] = (val*) var870;
((struct instance_array__NativeArray*)var878)->values[1] = (val*) var875;
{
((void (*)(val*, val*, long))(var876->class->vft[COLOR_array__Array__with_native]))(var876, var878, var877) /* with_native on <var876:Array[Object]>*/;
}
}
{
var879 = ((val* (*)(val*))(var876->class->vft[COLOR_string__Object__to_s]))(var876) /* to_s on <var876:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2141);
show_backtrace(1);
}
{
var880 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var879, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var880); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var881 = 1;
var = var881;
goto RET_LABEL;
} else {
if (varonce882) {
var883 = varonce882;
} else {
var884 = "succ";
var885 = 4;
var886 = string__NativeString__to_s_with_length(var884, var885);
var883 = var886;
varonce882 = var883;
}
{
var888 = string__FlatString___61d_61d(var_pname, var883);
var887 = var888;
}
if (var887){
var889 = 0;
{
var890 = array__Array___91d_93d(var_arguments, var889);
}
if (varonce891) {
var892 = varonce891;
} else {
var893 = "+1";
var894 = 2;
var895 = string__NativeString__to_s_with_length(var893, var894);
var892 = var895;
varonce891 = var892;
}
var896 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var896 = array_instance Array[Object] */
var897 = 2;
var898 = NEW_array__NativeArray(var897, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var898)->values[0] = (val*) var890;
((struct instance_array__NativeArray*)var898)->values[1] = (val*) var892;
{
((void (*)(val*, val*, long))(var896->class->vft[COLOR_array__Array__with_native]))(var896, var898, var897) /* with_native on <var896:Array[Object]>*/;
}
}
{
var899 = ((val* (*)(val*))(var896->class->vft[COLOR_string__Object__to_s]))(var896) /* to_s on <var896:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2144);
show_backtrace(1);
}
{
var900 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var899, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var900); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var901 = 1;
var = var901;
goto RET_LABEL;
} else {
if (varonce902) {
var903 = varonce902;
} else {
var904 = "prec";
var905 = 4;
var906 = string__NativeString__to_s_with_length(var904, var905);
var903 = var906;
varonce902 = var903;
}
{
var908 = string__FlatString___61d_61d(var_pname, var903);
var907 = var908;
}
if (var907){
var909 = 0;
{
var910 = array__Array___91d_93d(var_arguments, var909);
}
if (varonce911) {
var912 = varonce911;
} else {
var913 = "-1";
var914 = 2;
var915 = string__NativeString__to_s_with_length(var913, var914);
var912 = var915;
varonce911 = var912;
}
var916 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var916 = array_instance Array[Object] */
var917 = 2;
var918 = NEW_array__NativeArray(var917, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var918)->values[0] = (val*) var910;
((struct instance_array__NativeArray*)var918)->values[1] = (val*) var912;
{
((void (*)(val*, val*, long))(var916->class->vft[COLOR_array__Array__with_native]))(var916, var918, var917) /* with_native on <var916:Array[Object]>*/;
}
}
{
var919 = ((val* (*)(val*))(var916->class->vft[COLOR_string__Object__to_s]))(var916) /* to_s on <var916:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2147);
show_backtrace(1);
}
{
var920 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var919, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var920); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var921 = 1;
var = var921;
goto RET_LABEL;
} else {
if (varonce922) {
var923 = varonce922;
} else {
var924 = "*";
var925 = 1;
var926 = string__NativeString__to_s_with_length(var924, var925);
var923 = var926;
varonce922 = var923;
}
{
var928 = string__FlatString___61d_61d(var_pname, var923);
var927 = var928;
}
if (var927){
var929 = 0;
{
var930 = array__Array___91d_93d(var_arguments, var929);
}
if (varonce931) {
var932 = varonce931;
} else {
var933 = " * ";
var934 = 3;
var935 = string__NativeString__to_s_with_length(var933, var934);
var932 = var935;
varonce931 = var932;
}
var936 = 1;
{
var937 = array__Array___91d_93d(var_arguments, var936);
}
var938 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var938 = array_instance Array[Object] */
var939 = 3;
var940 = NEW_array__NativeArray(var939, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var940)->values[0] = (val*) var930;
((struct instance_array__NativeArray*)var940)->values[1] = (val*) var932;
((struct instance_array__NativeArray*)var940)->values[2] = (val*) var937;
{
((void (*)(val*, val*, long))(var938->class->vft[COLOR_array__Array__with_native]))(var938, var940, var939) /* with_native on <var938:Array[Object]>*/;
}
}
{
var941 = ((val* (*)(val*))(var938->class->vft[COLOR_string__Object__to_s]))(var938) /* to_s on <var938:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2150);
show_backtrace(1);
}
{
var942 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var941, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var942); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var943 = 1;
var = var943;
goto RET_LABEL;
} else {
if (varonce944) {
var945 = varonce944;
} else {
var946 = "/";
var947 = 1;
var948 = string__NativeString__to_s_with_length(var946, var947);
var945 = var948;
varonce944 = var945;
}
{
var950 = string__FlatString___61d_61d(var_pname, var945);
var949 = var950;
}
if (var949){
var951 = 0;
{
var952 = array__Array___91d_93d(var_arguments, var951);
}
if (varonce953) {
var954 = varonce953;
} else {
var955 = " / ";
var956 = 3;
var957 = string__NativeString__to_s_with_length(var955, var956);
var954 = var957;
varonce953 = var954;
}
var958 = 1;
{
var959 = array__Array___91d_93d(var_arguments, var958);
}
var960 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var960 = array_instance Array[Object] */
var961 = 3;
var962 = NEW_array__NativeArray(var961, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var962)->values[0] = (val*) var952;
((struct instance_array__NativeArray*)var962)->values[1] = (val*) var954;
((struct instance_array__NativeArray*)var962)->values[2] = (val*) var959;
{
((void (*)(val*, val*, long))(var960->class->vft[COLOR_array__Array__with_native]))(var960, var962, var961) /* with_native on <var960:Array[Object]>*/;
}
}
{
var963 = ((val* (*)(val*))(var960->class->vft[COLOR_string__Object__to_s]))(var960) /* to_s on <var960:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2153);
show_backtrace(1);
}
{
var964 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var963, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var964); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var965 = 1;
var = var965;
goto RET_LABEL;
} else {
if (varonce966) {
var967 = varonce966;
} else {
var968 = "==";
var969 = 2;
var970 = string__NativeString__to_s_with_length(var968, var969);
var967 = var970;
varonce966 = var967;
}
{
var972 = string__FlatString___61d_61d(var_pname, var967);
var971 = var972;
}
if (var971){
var973 = 0;
{
var974 = array__Array___91d_93d(var_arguments, var973);
}
var975 = 1;
{
var976 = array__Array___91d_93d(var_arguments, var975);
}
{
var977 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var974, var976);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var977); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var978 = 1;
var = var978;
goto RET_LABEL;
} else {
if (varonce979) {
var980 = varonce979;
} else {
var981 = "!=";
var982 = 2;
var983 = string__NativeString__to_s_with_length(var981, var982);
var980 = var983;
varonce979 = var980;
}
{
var985 = string__FlatString___61d_61d(var_pname, var980);
var984 = var985;
}
if (var984){
var986 = 0;
{
var987 = array__Array___91d_93d(var_arguments, var986);
}
var988 = 1;
{
var989 = array__Array___91d_93d(var_arguments, var988);
}
{
var990 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var987, var989);
}
var_res991 = var990;
if (varonce992) {
var993 = varonce992;
} else {
var994 = "!";
var995 = 1;
var996 = string__NativeString__to_s_with_length(var994, var995);
var993 = var996;
varonce992 = var993;
}
var997 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var997 = array_instance Array[Object] */
var998 = 2;
var999 = NEW_array__NativeArray(var998, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var999)->values[0] = (val*) var993;
((struct instance_array__NativeArray*)var999)->values[1] = (val*) var_res991;
{
((void (*)(val*, val*, long))(var997->class->vft[COLOR_array__Array__with_native]))(var997, var999, var998) /* with_native on <var997:Array[Object]>*/;
}
}
{
var1000 = ((val* (*)(val*))(var997->class->vft[COLOR_string__Object__to_s]))(var997) /* to_s on <var997:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2160);
show_backtrace(1);
}
{
var1001 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1000, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1001); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1002 = 1;
var = var1002;
goto RET_LABEL;
} else {
if (varonce1003) {
var1004 = varonce1003;
} else {
var1005 = "<";
var1006 = 1;
var1007 = string__NativeString__to_s_with_length(var1005, var1006);
var1004 = var1007;
varonce1003 = var1004;
}
{
var1009 = string__FlatString___61d_61d(var_pname, var1004);
var1008 = var1009;
}
if (var1008){
var1010 = 0;
{
var1011 = array__Array___91d_93d(var_arguments, var1010);
}
if (varonce1012) {
var1013 = varonce1012;
} else {
var1014 = " < ";
var1015 = 3;
var1016 = string__NativeString__to_s_with_length(var1014, var1015);
var1013 = var1016;
varonce1012 = var1013;
}
var1017 = 1;
{
var1018 = array__Array___91d_93d(var_arguments, var1017);
}
var1019 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1019 = array_instance Array[Object] */
var1020 = 3;
var1021 = NEW_array__NativeArray(var1020, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1021)->values[0] = (val*) var1011;
((struct instance_array__NativeArray*)var1021)->values[1] = (val*) var1013;
((struct instance_array__NativeArray*)var1021)->values[2] = (val*) var1018;
{
((void (*)(val*, val*, long))(var1019->class->vft[COLOR_array__Array__with_native]))(var1019, var1021, var1020) /* with_native on <var1019:Array[Object]>*/;
}
}
{
var1022 = ((val* (*)(val*))(var1019->class->vft[COLOR_string__Object__to_s]))(var1019) /* to_s on <var1019:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2163);
show_backtrace(1);
}
{
var1023 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1022, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1023); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1024 = 1;
var = var1024;
goto RET_LABEL;
} else {
if (varonce1025) {
var1026 = varonce1025;
} else {
var1027 = ">";
var1028 = 1;
var1029 = string__NativeString__to_s_with_length(var1027, var1028);
var1026 = var1029;
varonce1025 = var1026;
}
{
var1031 = string__FlatString___61d_61d(var_pname, var1026);
var1030 = var1031;
}
if (var1030){
var1032 = 0;
{
var1033 = array__Array___91d_93d(var_arguments, var1032);
}
if (varonce1034) {
var1035 = varonce1034;
} else {
var1036 = " > ";
var1037 = 3;
var1038 = string__NativeString__to_s_with_length(var1036, var1037);
var1035 = var1038;
varonce1034 = var1035;
}
var1039 = 1;
{
var1040 = array__Array___91d_93d(var_arguments, var1039);
}
var1041 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1041 = array_instance Array[Object] */
var1042 = 3;
var1043 = NEW_array__NativeArray(var1042, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1043)->values[0] = (val*) var1033;
((struct instance_array__NativeArray*)var1043)->values[1] = (val*) var1035;
((struct instance_array__NativeArray*)var1043)->values[2] = (val*) var1040;
{
((void (*)(val*, val*, long))(var1041->class->vft[COLOR_array__Array__with_native]))(var1041, var1043, var1042) /* with_native on <var1041:Array[Object]>*/;
}
}
{
var1044 = ((val* (*)(val*))(var1041->class->vft[COLOR_string__Object__to_s]))(var1041) /* to_s on <var1041:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2166);
show_backtrace(1);
}
{
var1045 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1044, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1045); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1046 = 1;
var = var1046;
goto RET_LABEL;
} else {
if (varonce1047) {
var1048 = varonce1047;
} else {
var1049 = "<=";
var1050 = 2;
var1051 = string__NativeString__to_s_with_length(var1049, var1050);
var1048 = var1051;
varonce1047 = var1048;
}
{
var1053 = string__FlatString___61d_61d(var_pname, var1048);
var1052 = var1053;
}
if (var1052){
var1054 = 0;
{
var1055 = array__Array___91d_93d(var_arguments, var1054);
}
if (varonce1056) {
var1057 = varonce1056;
} else {
var1058 = " <= ";
var1059 = 4;
var1060 = string__NativeString__to_s_with_length(var1058, var1059);
var1057 = var1060;
varonce1056 = var1057;
}
var1061 = 1;
{
var1062 = array__Array___91d_93d(var_arguments, var1061);
}
var1063 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1063 = array_instance Array[Object] */
var1064 = 3;
var1065 = NEW_array__NativeArray(var1064, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1065)->values[0] = (val*) var1055;
((struct instance_array__NativeArray*)var1065)->values[1] = (val*) var1057;
((struct instance_array__NativeArray*)var1065)->values[2] = (val*) var1062;
{
((void (*)(val*, val*, long))(var1063->class->vft[COLOR_array__Array__with_native]))(var1063, var1065, var1064) /* with_native on <var1063:Array[Object]>*/;
}
}
{
var1066 = ((val* (*)(val*))(var1063->class->vft[COLOR_string__Object__to_s]))(var1063) /* to_s on <var1063:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2169);
show_backtrace(1);
}
{
var1067 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1066, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1067); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1068 = 1;
var = var1068;
goto RET_LABEL;
} else {
if (varonce1069) {
var1070 = varonce1069;
} else {
var1071 = ">=";
var1072 = 2;
var1073 = string__NativeString__to_s_with_length(var1071, var1072);
var1070 = var1073;
varonce1069 = var1070;
}
{
var1075 = string__FlatString___61d_61d(var_pname, var1070);
var1074 = var1075;
}
if (var1074){
var1076 = 0;
{
var1077 = array__Array___91d_93d(var_arguments, var1076);
}
if (varonce1078) {
var1079 = varonce1078;
} else {
var1080 = " >= ";
var1081 = 4;
var1082 = string__NativeString__to_s_with_length(var1080, var1081);
var1079 = var1082;
varonce1078 = var1079;
}
var1083 = 1;
{
var1084 = array__Array___91d_93d(var_arguments, var1083);
}
var1085 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1085 = array_instance Array[Object] */
var1086 = 3;
var1087 = NEW_array__NativeArray(var1086, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1087)->values[0] = (val*) var1077;
((struct instance_array__NativeArray*)var1087)->values[1] = (val*) var1079;
((struct instance_array__NativeArray*)var1087)->values[2] = (val*) var1084;
{
((void (*)(val*, val*, long))(var1085->class->vft[COLOR_array__Array__with_native]))(var1085, var1087, var1086) /* with_native on <var1085:Array[Object]>*/;
}
}
{
var1088 = ((val* (*)(val*))(var1085->class->vft[COLOR_string__Object__to_s]))(var1085) /* to_s on <var1085:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2172);
show_backtrace(1);
}
{
var1089 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1088, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1089); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1090 = 1;
var = var1090;
goto RET_LABEL;
} else {
if (varonce1091) {
var1092 = varonce1091;
} else {
var1093 = "to_i";
var1094 = 4;
var1095 = string__NativeString__to_s_with_length(var1093, var1094);
var1092 = var1095;
varonce1091 = var1092;
}
{
var1097 = string__FlatString___61d_61d(var_pname, var1092);
var1096 = var1097;
}
if (var1096){
if (varonce1098) {
var1099 = varonce1098;
} else {
var1100 = "(long)";
var1101 = 6;
var1102 = string__NativeString__to_s_with_length(var1100, var1101);
var1099 = var1102;
varonce1098 = var1099;
}
var1103 = 0;
{
var1104 = array__Array___91d_93d(var_arguments, var1103);
}
var1105 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1105 = array_instance Array[Object] */
var1106 = 2;
var1107 = NEW_array__NativeArray(var1106, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1107)->values[0] = (val*) var1099;
((struct instance_array__NativeArray*)var1107)->values[1] = (val*) var1104;
{
((void (*)(val*, val*, long))(var1105->class->vft[COLOR_array__Array__with_native]))(var1105, var1107, var1106) /* with_native on <var1105:Array[Object]>*/;
}
}
{
var1108 = ((val* (*)(val*))(var1105->class->vft[COLOR_string__Object__to_s]))(var1105) /* to_s on <var1105:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2175);
show_backtrace(1);
}
{
var1109 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1108, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1109); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1110 = 1;
var = var1110;
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
} else {
if (varonce1111) {
var1112 = varonce1111;
} else {
var1113 = "NativeString";
var1114 = 12;
var1115 = string__NativeString__to_s_with_length(var1113, var1114);
var1112 = var1115;
varonce1111 = var1112;
}
{
var1117 = string__FlatString___61d_61d(var_cname, var1112);
var1116 = var1117;
}
if (var1116){
if (varonce1118) {
var1119 = varonce1118;
} else {
var1120 = "[]";
var1121 = 2;
var1122 = string__NativeString__to_s_with_length(var1120, var1121);
var1119 = var1122;
varonce1118 = var1119;
}
{
var1124 = string__FlatString___61d_61d(var_pname, var1119);
var1123 = var1124;
}
if (var1123){
var1125 = 0;
{
var1126 = array__Array___91d_93d(var_arguments, var1125);
}
if (varonce1127) {
var1128 = varonce1127;
} else {
var1129 = "[";
var1130 = 1;
var1131 = string__NativeString__to_s_with_length(var1129, var1130);
var1128 = var1131;
varonce1127 = var1128;
}
var1132 = 1;
{
var1133 = array__Array___91d_93d(var_arguments, var1132);
}
if (varonce1134) {
var1135 = varonce1134;
} else {
var1136 = "]";
var1137 = 1;
var1138 = string__NativeString__to_s_with_length(var1136, var1137);
var1135 = var1138;
varonce1134 = var1135;
}
var1139 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1139 = array_instance Array[Object] */
var1140 = 4;
var1141 = NEW_array__NativeArray(var1140, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1141)->values[0] = (val*) var1126;
((struct instance_array__NativeArray*)var1141)->values[1] = (val*) var1128;
((struct instance_array__NativeArray*)var1141)->values[2] = (val*) var1133;
((struct instance_array__NativeArray*)var1141)->values[3] = (val*) var1135;
{
((void (*)(val*, val*, long))(var1139->class->vft[COLOR_array__Array__with_native]))(var1139, var1141, var1140) /* with_native on <var1139:Array[Object]>*/;
}
}
{
var1142 = ((val* (*)(val*))(var1139->class->vft[COLOR_string__Object__to_s]))(var1139) /* to_s on <var1139:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2180);
show_backtrace(1);
}
{
var1143 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1142, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1143); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1144 = 1;
var = var1144;
goto RET_LABEL;
} else {
if (varonce1145) {
var1146 = varonce1145;
} else {
var1147 = "[]=";
var1148 = 3;
var1149 = string__NativeString__to_s_with_length(var1147, var1148);
var1146 = var1149;
varonce1145 = var1146;
}
{
var1151 = string__FlatString___61d_61d(var_pname, var1146);
var1150 = var1151;
}
if (var1150){
var1152 = 0;
{
var1153 = array__Array___91d_93d(var_arguments, var1152);
}
if (varonce1154) {
var1155 = varonce1154;
} else {
var1156 = "[";
var1157 = 1;
var1158 = string__NativeString__to_s_with_length(var1156, var1157);
var1155 = var1158;
varonce1154 = var1155;
}
var1159 = 1;
{
var1160 = array__Array___91d_93d(var_arguments, var1159);
}
if (varonce1161) {
var1162 = varonce1161;
} else {
var1163 = "]=";
var1164 = 2;
var1165 = string__NativeString__to_s_with_length(var1163, var1164);
var1162 = var1165;
varonce1161 = var1162;
}
var1166 = 2;
{
var1167 = array__Array___91d_93d(var_arguments, var1166);
}
if (varonce1168) {
var1169 = varonce1168;
} else {
var1170 = ";";
var1171 = 1;
var1172 = string__NativeString__to_s_with_length(var1170, var1171);
var1169 = var1172;
varonce1168 = var1169;
}
var1173 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1173 = array_instance Array[Object] */
var1174 = 6;
var1175 = NEW_array__NativeArray(var1174, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1175)->values[0] = (val*) var1153;
((struct instance_array__NativeArray*)var1175)->values[1] = (val*) var1155;
((struct instance_array__NativeArray*)var1175)->values[2] = (val*) var1160;
((struct instance_array__NativeArray*)var1175)->values[3] = (val*) var1162;
((struct instance_array__NativeArray*)var1175)->values[4] = (val*) var1167;
((struct instance_array__NativeArray*)var1175)->values[5] = (val*) var1169;
{
((void (*)(val*, val*, long))(var1173->class->vft[COLOR_array__Array__with_native]))(var1173, var1175, var1174) /* with_native on <var1173:Array[Object]>*/;
}
}
{
var1176 = ((val* (*)(val*))(var1173->class->vft[COLOR_string__Object__to_s]))(var1173) /* to_s on <var1173:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1176); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var1177 = 1;
var = var1177;
goto RET_LABEL;
} else {
if (varonce1178) {
var1179 = varonce1178;
} else {
var1180 = "copy_to";
var1181 = 7;
var1182 = string__NativeString__to_s_with_length(var1180, var1181);
var1179 = var1182;
varonce1178 = var1179;
}
{
var1184 = string__FlatString___61d_61d(var_pname, var1179);
var1183 = var1184;
}
if (var1183){
if (varonce1185) {
var1186 = varonce1185;
} else {
var1187 = "memmove(";
var1188 = 8;
var1189 = string__NativeString__to_s_with_length(var1187, var1188);
var1186 = var1189;
varonce1185 = var1186;
}
var1190 = 1;
{
var1191 = array__Array___91d_93d(var_arguments, var1190);
}
if (varonce1192) {
var1193 = varonce1192;
} else {
var1194 = "+";
var1195 = 1;
var1196 = string__NativeString__to_s_with_length(var1194, var1195);
var1193 = var1196;
varonce1192 = var1193;
}
var1197 = 4;
{
var1198 = array__Array___91d_93d(var_arguments, var1197);
}
if (varonce1199) {
var1200 = varonce1199;
} else {
var1201 = ",";
var1202 = 1;
var1203 = string__NativeString__to_s_with_length(var1201, var1202);
var1200 = var1203;
varonce1199 = var1200;
}
var1204 = 0;
{
var1205 = array__Array___91d_93d(var_arguments, var1204);
}
if (varonce1206) {
var1207 = varonce1206;
} else {
var1208 = "+";
var1209 = 1;
var1210 = string__NativeString__to_s_with_length(var1208, var1209);
var1207 = var1210;
varonce1206 = var1207;
}
var1211 = 3;
{
var1212 = array__Array___91d_93d(var_arguments, var1211);
}
if (varonce1213) {
var1214 = varonce1213;
} else {
var1215 = ",";
var1216 = 1;
var1217 = string__NativeString__to_s_with_length(var1215, var1216);
var1214 = var1217;
varonce1213 = var1214;
}
var1218 = 2;
{
var1219 = array__Array___91d_93d(var_arguments, var1218);
}
if (varonce1220) {
var1221 = varonce1220;
} else {
var1222 = ");";
var1223 = 2;
var1224 = string__NativeString__to_s_with_length(var1222, var1223);
var1221 = var1224;
varonce1220 = var1221;
}
var1225 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1225 = array_instance Array[Object] */
var1226 = 11;
var1227 = NEW_array__NativeArray(var1226, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1227)->values[0] = (val*) var1186;
((struct instance_array__NativeArray*)var1227)->values[1] = (val*) var1191;
((struct instance_array__NativeArray*)var1227)->values[2] = (val*) var1193;
((struct instance_array__NativeArray*)var1227)->values[3] = (val*) var1198;
((struct instance_array__NativeArray*)var1227)->values[4] = (val*) var1200;
((struct instance_array__NativeArray*)var1227)->values[5] = (val*) var1205;
((struct instance_array__NativeArray*)var1227)->values[6] = (val*) var1207;
((struct instance_array__NativeArray*)var1227)->values[7] = (val*) var1212;
((struct instance_array__NativeArray*)var1227)->values[8] = (val*) var1214;
((struct instance_array__NativeArray*)var1227)->values[9] = (val*) var1219;
((struct instance_array__NativeArray*)var1227)->values[10] = (val*) var1221;
{
((void (*)(val*, val*, long))(var1225->class->vft[COLOR_array__Array__with_native]))(var1225, var1227, var1226) /* with_native on <var1225:Array[Object]>*/;
}
}
{
var1228 = ((val* (*)(val*))(var1225->class->vft[COLOR_string__Object__to_s]))(var1225) /* to_s on <var1225:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1228); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var1229 = 1;
var = var1229;
goto RET_LABEL;
} else {
if (varonce1230) {
var1231 = varonce1230;
} else {
var1232 = "atoi";
var1233 = 4;
var1234 = string__NativeString__to_s_with_length(var1232, var1233);
var1231 = var1234;
varonce1230 = var1231;
}
{
var1236 = string__FlatString___61d_61d(var_pname, var1231);
var1235 = var1236;
}
if (var1235){
if (varonce1237) {
var1238 = varonce1237;
} else {
var1239 = "atoi(";
var1240 = 5;
var1241 = string__NativeString__to_s_with_length(var1239, var1240);
var1238 = var1241;
varonce1237 = var1238;
}
var1242 = 0;
{
var1243 = array__Array___91d_93d(var_arguments, var1242);
}
if (varonce1244) {
var1245 = varonce1244;
} else {
var1246 = ");";
var1247 = 2;
var1248 = string__NativeString__to_s_with_length(var1246, var1247);
var1245 = var1248;
varonce1244 = var1245;
}
var1249 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1249 = array_instance Array[Object] */
var1250 = 3;
var1251 = NEW_array__NativeArray(var1250, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1251)->values[0] = (val*) var1238;
((struct instance_array__NativeArray*)var1251)->values[1] = (val*) var1243;
((struct instance_array__NativeArray*)var1251)->values[2] = (val*) var1245;
{
((void (*)(val*, val*, long))(var1249->class->vft[COLOR_array__Array__with_native]))(var1249, var1251, var1250) /* with_native on <var1249:Array[Object]>*/;
}
}
{
var1252 = ((val* (*)(val*))(var1249->class->vft[COLOR_string__Object__to_s]))(var1249) /* to_s on <var1249:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2189);
show_backtrace(1);
}
{
var1253 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1252, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1253); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1254 = 1;
var = var1254;
goto RET_LABEL;
} else {
if (varonce1255) {
var1256 = varonce1255;
} else {
var1257 = "new";
var1258 = 3;
var1259 = string__NativeString__to_s_with_length(var1257, var1258);
var1256 = var1259;
varonce1255 = var1256;
}
{
var1261 = string__FlatString___61d_61d(var_pname, var1256);
var1260 = var1261;
}
if (var1260){
if (varonce1262) {
var1263 = varonce1262;
} else {
var1264 = "(char*)nit_alloc(";
var1265 = 17;
var1266 = string__NativeString__to_s_with_length(var1264, var1265);
var1263 = var1266;
varonce1262 = var1263;
}
var1267 = 1;
{
var1268 = array__Array___91d_93d(var_arguments, var1267);
}
if (varonce1269) {
var1270 = varonce1269;
} else {
var1271 = ")";
var1272 = 1;
var1273 = string__NativeString__to_s_with_length(var1271, var1272);
var1270 = var1273;
varonce1269 = var1270;
}
var1274 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1274 = array_instance Array[Object] */
var1275 = 3;
var1276 = NEW_array__NativeArray(var1275, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1276)->values[0] = (val*) var1263;
((struct instance_array__NativeArray*)var1276)->values[1] = (val*) var1268;
((struct instance_array__NativeArray*)var1276)->values[2] = (val*) var1270;
{
((void (*)(val*, val*, long))(var1274->class->vft[COLOR_array__Array__with_native]))(var1274, var1276, var1275) /* with_native on <var1274:Array[Object]>*/;
}
}
{
var1277 = ((val* (*)(val*))(var1274->class->vft[COLOR_string__Object__to_s]))(var1274) /* to_s on <var1274:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2192);
show_backtrace(1);
}
{
var1278 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1277, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1278); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1279 = 1;
var = var1279;
goto RET_LABEL;
} else {
}
}
}
}
}
} else {
if (varonce1280) {
var1281 = varonce1280;
} else {
var1282 = "NativeArray";
var1283 = 11;
var1284 = string__NativeString__to_s_with_length(var1282, var1283);
var1281 = var1284;
varonce1280 = var1281;
}
{
var1286 = string__FlatString___61d_61d(var_cname, var1281);
var1285 = var1286;
}
if (var1285){
{
separate_compiler__SeparateCompilerVisitor__native_array_def(var_v, var_pname, var_ret, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#native_array_def on <var_v:AbstractCompilerVisitor>*/
}
var1287 = 1;
var = var1287;
goto RET_LABEL;
} else {
}
}
}
}
}
}
if (varonce1288) {
var1289 = varonce1288;
} else {
var1290 = "exit";
var1291 = 4;
var1292 = string__NativeString__to_s_with_length(var1290, var1291);
var1289 = var1292;
varonce1288 = var1289;
}
{
var1294 = string__FlatString___61d_61d(var_pname, var1289);
var1293 = var1294;
}
if (var1293){
if (varonce1295) {
var1296 = varonce1295;
} else {
var1297 = "exit(";
var1298 = 5;
var1299 = string__NativeString__to_s_with_length(var1297, var1298);
var1296 = var1299;
varonce1295 = var1296;
}
var1300 = 1;
{
var1301 = array__Array___91d_93d(var_arguments, var1300);
}
if (varonce1302) {
var1303 = varonce1302;
} else {
var1304 = ");";
var1305 = 2;
var1306 = string__NativeString__to_s_with_length(var1304, var1305);
var1303 = var1306;
varonce1302 = var1303;
}
var1307 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1307 = array_instance Array[Object] */
var1308 = 3;
var1309 = NEW_array__NativeArray(var1308, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1309)->values[0] = (val*) var1296;
((struct instance_array__NativeArray*)var1309)->values[1] = (val*) var1301;
((struct instance_array__NativeArray*)var1309)->values[2] = (val*) var1303;
{
((void (*)(val*, val*, long))(var1307->class->vft[COLOR_array__Array__with_native]))(var1307, var1309, var1308) /* with_native on <var1307:Array[Object]>*/;
}
}
{
var1310 = ((val* (*)(val*))(var1307->class->vft[COLOR_string__Object__to_s]))(var1307) /* to_s on <var1307:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1310); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var1311 = 1;
var = var1311;
goto RET_LABEL;
} else {
if (varonce1312) {
var1313 = varonce1312;
} else {
var1314 = "sys";
var1315 = 3;
var1316 = string__NativeString__to_s_with_length(var1314, var1315);
var1313 = var1316;
varonce1312 = var1313;
}
{
var1318 = string__FlatString___61d_61d(var_pname, var1313);
var1317 = var1318;
}
if (var1317){
if (varonce1319) {
var1320 = varonce1319;
} else {
var1321 = "glob_sys";
var1322 = 8;
var1323 = string__NativeString__to_s_with_length(var1321, var1322);
var1320 = var1323;
varonce1319 = var1320;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2203);
show_backtrace(1);
}
{
var1324 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1320, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1324); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1325 = 1;
var = var1325;
goto RET_LABEL;
} else {
if (varonce1326) {
var1327 = varonce1326;
} else {
var1328 = "calloc_string";
var1329 = 13;
var1330 = string__NativeString__to_s_with_length(var1328, var1329);
var1327 = var1330;
varonce1326 = var1327;
}
{
var1332 = string__FlatString___61d_61d(var_pname, var1327);
var1331 = var1332;
}
if (var1331){
if (varonce1333) {
var1334 = varonce1333;
} else {
var1335 = "(char*)nit_alloc(";
var1336 = 17;
var1337 = string__NativeString__to_s_with_length(var1335, var1336);
var1334 = var1337;
varonce1333 = var1334;
}
var1338 = 1;
{
var1339 = array__Array___91d_93d(var_arguments, var1338);
}
if (varonce1340) {
var1341 = varonce1340;
} else {
var1342 = ")";
var1343 = 1;
var1344 = string__NativeString__to_s_with_length(var1342, var1343);
var1341 = var1344;
varonce1340 = var1341;
}
var1345 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1345 = array_instance Array[Object] */
var1346 = 3;
var1347 = NEW_array__NativeArray(var1346, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1347)->values[0] = (val*) var1334;
((struct instance_array__NativeArray*)var1347)->values[1] = (val*) var1339;
((struct instance_array__NativeArray*)var1347)->values[2] = (val*) var1341;
{
((void (*)(val*, val*, long))(var1345->class->vft[COLOR_array__Array__with_native]))(var1345, var1347, var1346) /* with_native on <var1345:Array[Object]>*/;
}
}
{
var1348 = ((val* (*)(val*))(var1345->class->vft[COLOR_string__Object__to_s]))(var1345) /* to_s on <var1345:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2206);
show_backtrace(1);
}
{
var1349 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1348, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1349); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1350 = 1;
var = var1350;
goto RET_LABEL;
} else {
if (varonce1351) {
var1352 = varonce1351;
} else {
var1353 = "calloc_array";
var1354 = 12;
var1355 = string__NativeString__to_s_with_length(var1353, var1354);
var1352 = var1355;
varonce1351 = var1352;
}
{
var1357 = string__FlatString___61d_61d(var_pname, var1352);
var1356 = var1357;
}
if (var1356){
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2209);
show_backtrace(1);
}
{
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__calloc_array]))(var_v, var_ret, var_arguments) /* calloc_array on <var_v:AbstractCompilerVisitor>*/;
}
var1358 = 1;
var = var1358;
goto RET_LABEL;
} else {
if (varonce1359) {
var1360 = varonce1359;
} else {
var1361 = "object_id";
var1362 = 9;
var1363 = string__NativeString__to_s_with_length(var1361, var1362);
var1360 = var1363;
varonce1359 = var1360;
}
{
var1365 = string__FlatString___61d_61d(var_pname, var1360);
var1364 = var1365;
}
if (var1364){
if (varonce1366) {
var1367 = varonce1366;
} else {
var1368 = "(long)";
var1369 = 6;
var1370 = string__NativeString__to_s_with_length(var1368, var1369);
var1367 = var1370;
varonce1366 = var1367;
}
{
var1371 = abstract_collection__SequenceRead__first(var_arguments);
}
var1372 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1372 = array_instance Array[Object] */
var1373 = 2;
var1374 = NEW_array__NativeArray(var1373, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1374)->values[0] = (val*) var1367;
((struct instance_array__NativeArray*)var1374)->values[1] = (val*) var1371;
{
((void (*)(val*, val*, long))(var1372->class->vft[COLOR_array__Array__with_native]))(var1372, var1374, var1373) /* with_native on <var1372:Array[Object]>*/;
}
}
{
var1375 = ((val* (*)(val*))(var1372->class->vft[COLOR_string__Object__to_s]))(var1372) /* to_s on <var1372:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2212);
show_backtrace(1);
}
{
var1376 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1375, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1376); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1377 = 1;
var = var1377;
goto RET_LABEL;
} else {
if (varonce1378) {
var1379 = varonce1378;
} else {
var1380 = "is_same_type";
var1381 = 12;
var1382 = string__NativeString__to_s_with_length(var1380, var1381);
var1379 = var1382;
varonce1378 = var1379;
}
{
var1384 = string__FlatString___61d_61d(var_pname, var1379);
var1383 = var1384;
}
if (var1383){
var1385 = 0;
{
var1386 = array__Array___91d_93d(var_arguments, var1385);
}
var1387 = 1;
{
var1388 = array__Array___91d_93d(var_arguments, var1387);
}
{
var1389 = separate_compiler__SeparateCompilerVisitor__is_same_type_test(var_v, var1386, var1388);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1389); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1390 = 1;
var = var1390;
goto RET_LABEL;
} else {
if (varonce1391) {
var1392 = varonce1391;
} else {
var1393 = "is_same_instance";
var1394 = 16;
var1395 = string__NativeString__to_s_with_length(var1393, var1394);
var1392 = var1395;
varonce1391 = var1392;
}
{
var1397 = string__FlatString___61d_61d(var_pname, var1392);
var1396 = var1397;
}
if (var1396){
var1398 = 0;
{
var1399 = array__Array___91d_93d(var_arguments, var1398);
}
var1400 = 1;
{
var1401 = array__Array___91d_93d(var_arguments, var1400);
}
{
var1402 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var1399, var1401);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1402); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1403 = 1;
var = var1403;
goto RET_LABEL;
} else {
if (varonce1404) {
var1405 = varonce1404;
} else {
var1406 = "output_class_name";
var1407 = 17;
var1408 = string__NativeString__to_s_with_length(var1406, var1407);
var1405 = var1408;
varonce1404 = var1405;
}
{
var1410 = string__FlatString___61d_61d(var_pname, var1405);
var1409 = var1410;
}
if (var1409){
{
var1411 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var1412 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1411) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_nat = var1412;
if (varonce1413) {
var1414 = varonce1413;
} else {
var1415 = "printf(\"%s\\n\", ";
var1416 = 15;
var1417 = string__NativeString__to_s_with_length(var1415, var1416);
var1414 = var1417;
varonce1413 = var1414;
}
if (varonce1418) {
var1419 = varonce1418;
} else {
var1420 = ");";
var1421 = 2;
var1422 = string__NativeString__to_s_with_length(var1420, var1421);
var1419 = var1422;
varonce1418 = var1419;
}
var1423 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1423 = array_instance Array[Object] */
var1424 = 3;
var1425 = NEW_array__NativeArray(var1424, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1425)->values[0] = (val*) var1414;
((struct instance_array__NativeArray*)var1425)->values[1] = (val*) var_nat;
((struct instance_array__NativeArray*)var1425)->values[2] = (val*) var1419;
{
((void (*)(val*, val*, long))(var1423->class->vft[COLOR_array__Array__with_native]))(var1423, var1425, var1424) /* with_native on <var1423:Array[Object]>*/;
}
}
{
var1426 = ((val* (*)(val*))(var1423->class->vft[COLOR_string__Object__to_s]))(var1423) /* to_s on <var1423:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1426); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var1427 = 1;
var = var1427;
goto RET_LABEL;
} else {
if (varonce1428) {
var1429 = varonce1428;
} else {
var1430 = "native_class_name";
var1431 = 17;
var1432 = string__NativeString__to_s_with_length(var1430, var1431);
var1429 = var1432;
varonce1428 = var1429;
}
{
var1434 = string__FlatString___61d_61d(var_pname, var1429);
var1433 = var1434;
}
if (var1433){
{
var1435 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var1436 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1435) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_nat1437 = var1436;
if (varonce1438) {
var1439 = varonce1438;
} else {
var1440 = "(char*)";
var1441 = 7;
var1442 = string__NativeString__to_s_with_length(var1440, var1441);
var1439 = var1442;
varonce1438 = var1439;
}
var1443 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1443 = array_instance Array[Object] */
var1444 = 2;
var1445 = NEW_array__NativeArray(var1444, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1445)->values[0] = (val*) var1439;
((struct instance_array__NativeArray*)var1445)->values[1] = (val*) var_nat1437;
{
((void (*)(val*, val*, long))(var1443->class->vft[COLOR_array__Array__with_native]))(var1443, var1445, var1444) /* with_native on <var1443:Array[Object]>*/;
}
}
{
var1446 = ((val* (*)(val*))(var1443->class->vft[COLOR_string__Object__to_s]))(var1443) /* to_s on <var1443:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2226);
show_backtrace(1);
}
{
var1447 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1446, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1447); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1448 = 1;
var = var1448;
goto RET_LABEL;
} else {
if (varonce1449) {
var1450 = varonce1449;
} else {
var1451 = "force_garbage_collection";
var1452 = 24;
var1453 = string__NativeString__to_s_with_length(var1451, var1452);
var1450 = var1453;
varonce1449 = var1450;
}
{
var1455 = string__FlatString___61d_61d(var_pname, var1450);
var1454 = var1455;
}
if (var1454){
if (varonce1456) {
var1457 = varonce1456;
} else {
var1458 = "nit_gcollect();";
var1459 = 15;
var1460 = string__NativeString__to_s_with_length(var1458, var1459);
var1457 = var1460;
varonce1456 = var1457;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1457); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var1461 = 1;
var = var1461;
goto RET_LABEL;
} else {
if (varonce1462) {
var1463 = varonce1462;
} else {
var1464 = "native_argc";
var1465 = 11;
var1466 = string__NativeString__to_s_with_length(var1464, var1465);
var1463 = var1466;
varonce1462 = var1463;
}
{
var1468 = string__FlatString___61d_61d(var_pname, var1463);
var1467 = var1468;
}
if (var1467){
if (varonce1469) {
var1470 = varonce1469;
} else {
var1471 = "glob_argc";
var1472 = 9;
var1473 = string__NativeString__to_s_with_length(var1471, var1472);
var1470 = var1473;
varonce1469 = var1470;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2232);
show_backtrace(1);
}
{
var1474 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1470, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1474); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1475 = 1;
var = var1475;
goto RET_LABEL;
} else {
if (varonce1476) {
var1477 = varonce1476;
} else {
var1478 = "native_argv";
var1479 = 11;
var1480 = string__NativeString__to_s_with_length(var1478, var1479);
var1477 = var1480;
varonce1476 = var1477;
}
{
var1482 = string__FlatString___61d_61d(var_pname, var1477);
var1481 = var1482;
}
if (var1481){
if (varonce1483) {
var1484 = varonce1483;
} else {
var1485 = "glob_argv[";
var1486 = 10;
var1487 = string__NativeString__to_s_with_length(var1485, var1486);
var1484 = var1487;
varonce1483 = var1484;
}
var1488 = 1;
{
var1489 = array__Array___91d_93d(var_arguments, var1488);
}
if (varonce1490) {
var1491 = varonce1490;
} else {
var1492 = "]";
var1493 = 1;
var1494 = string__NativeString__to_s_with_length(var1492, var1493);
var1491 = var1494;
varonce1490 = var1491;
}
var1495 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1495 = array_instance Array[Object] */
var1496 = 3;
var1497 = NEW_array__NativeArray(var1496, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1497)->values[0] = (val*) var1484;
((struct instance_array__NativeArray*)var1497)->values[1] = (val*) var1489;
((struct instance_array__NativeArray*)var1497)->values[2] = (val*) var1491;
{
((void (*)(val*, val*, long))(var1495->class->vft[COLOR_array__Array__with_native]))(var1495, var1497, var1496) /* with_native on <var1495:Array[Object]>*/;
}
}
{
var1498 = ((val* (*)(val*))(var1495->class->vft[COLOR_string__Object__to_s]))(var1495) /* to_s on <var1495:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2235);
show_backtrace(1);
}
{
var1499 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1498, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1499); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1500 = 1;
var = var1500;
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
var1501 = 0;
var = var1501;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_intern_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int VIRTUAL_abstract_compiler__AMethPropdef__compile_intern_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__AMethPropdef__compile_intern_to_c(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_externmeth_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int abstract_compiler__AMethPropdef__compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var11 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : AbstractCompiler */;
val* var21 /* : AbstractCompiler */;
val* var22 /* : ModelBuilder */;
val* var24 /* : ModelBuilder */;
val* var25 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : Location */;
val* var33 /* : Location */;
val* var34 /* : nullable SourceFile */;
val* var36 /* : nullable SourceFile */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : Location */;
val* var46 /* : Location */;
val* var47 /* : nullable SourceFile */;
val* var49 /* : nullable SourceFile */;
val* var50 /* : String */;
val* var52 /* : String */;
val* var_file /* var file: String */;
val* var53 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var54 /* : nullable MSignature */;
val* var56 /* : nullable MSignature */;
val* var57 /* : nullable MType */;
val* var59 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var60 /* : null */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
val* var68 /* : MType */;
val* var69 /* : RuntimeVariable */;
val* var70 /* : null */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var_other74 /* var other: nullable Object */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : Array[Object] */;
long var95 /* : Int */;
val* var96 /* : NativeArray[Object] */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : Array[Object] */;
long var120 /* : Int */;
val* var121 /* : NativeArray[Object] */;
val* var122 /* : String */;
val* var123 /* : RuntimeVariable */;
short int var124 /* : Bool */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "extern";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = annotation__Prod__get_single_annotation(self, var1, var8);
}
var_at = var11;
var12 = NULL;
if (var_at == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,var12) on <var_at:nullable AAnnotation> */
var_other = var12;
{
var17 = ((short int (*)(val*, val*))(var_at->class->vft[COLOR_kernel__Object___61d_61d]))(var_at, var_other) /* == on <var_at:nullable AAnnotation(AAnnotation)>*/;
var16 = var17;
}
var18 = !var16;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var21 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var19) on <var19:AbstractCompiler> */
var24 = var19->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var19:AbstractCompiler> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = annotation__AAnnotation__arg_as_string(var_at, var22);
}
var_externname = var25;
var26 = NULL;
if (var_externname == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
var28 = string__FlatString___61d_61d(var_externname, var26);
var27 = var28;
}
if (var27){
var29 = 0;
var = var29;
goto RET_LABEL;
} else {
}
} else {
var30 = 0;
var = var30;
goto RET_LABEL;
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var33 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline location#Location#file (var31) on <var31:Location> */
var36 = var31->attrs[COLOR_location__Location___file].val; /* _file on <var31:Location> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = NULL;
if (var34 == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var34,var37) on <var34:nullable SourceFile> */
var_other = var37;
{
var42 = ((short int (*)(val*, val*))(var34->class->vft[COLOR_kernel__Object___61d_61d]))(var34, var_other) /* == on <var34:nullable SourceFile(SourceFile)>*/;
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
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var46 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline location#Location#file (var44) on <var44:Location> */
var49 = var44->attrs[COLOR_location__Location___file].val; /* _file on <var44:Location> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (var47 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2254);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var47) on <var47:nullable SourceFile> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var52 = var47->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var47:nullable SourceFile> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_file = var50;
{
abstract_compiler__AbstractCompilerVisitor__add_extern(var_v, var_file); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
var53 = NULL;
var_res = var53;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var56 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2258);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var54) on <var54:nullable MSignature> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1468);
show_backtrace(1);
}
var59 = var54->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var54:nullable MSignature> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_ret = var57;
var60 = NULL;
if (var_ret == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var60) on <var_ret:nullable MType> */
var_other = var60;
{
var65 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var64 = var65;
}
var66 = !var64;
var62 = var66;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
{
var67 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var68 = abstract_compiler__AbstractCompilerVisitor__resolve_for(var_v, var_ret, var67);
}
var_ret = var68;
{
var69 = abstract_compiler__AbstractCompilerVisitor__new_var_extern(var_v, var_ret);
}
var_res = var69;
} else {
}
{
separate_compiler__SeparateCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
separate_compiler__SeparateCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
var70 = NULL;
if (var_res == NULL) {
var71 = 1; /* is null */
} else {
var71 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var70) on <var_res:nullable RuntimeVariable> */
var_other74 = var70;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other74) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var77 = var_res == var_other74;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var72 = var75;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
if (varonce78) {
var79 = varonce78;
} else {
var80 = "(";
var81 = 1;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
if (varonce83) {
var84 = varonce83;
} else {
var85 = ", ";
var86 = 2;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
var88 = string__Collection__join(var_arguments, var84);
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = ");";
var92 = 2;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var94 = array_instance Array[Object] */
var95 = 4;
var96 = NEW_array__NativeArray(var95, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var96)->values[0] = (val*) var_externname;
((struct instance_array__NativeArray*)var96)->values[1] = (val*) var79;
((struct instance_array__NativeArray*)var96)->values[2] = (val*) var88;
((struct instance_array__NativeArray*)var96)->values[3] = (val*) var90;
{
((void (*)(val*, val*, long))(var94->class->vft[COLOR_array__Array__with_native]))(var94, var96, var95) /* with_native on <var94:Array[Object]>*/;
}
}
{
var97 = ((val* (*)(val*))(var94->class->vft[COLOR_string__Object__to_s]))(var94) /* to_s on <var94:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce98) {
var99 = varonce98;
} else {
var100 = " = ";
var101 = 3;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "(";
var106 = 1;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = ", ";
var111 = 2;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
{
var113 = string__Collection__join(var_arguments, var109);
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = ");";
var117 = 2;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 6;
var121 = NEW_array__NativeArray(var120, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var121)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var121)->values[1] = (val*) var99;
((struct instance_array__NativeArray*)var121)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var121)->values[3] = (val*) var104;
((struct instance_array__NativeArray*)var121)->values[4] = (val*) var113;
((struct instance_array__NativeArray*)var121)->values[5] = (val*) var115;
{
((void (*)(val*, val*, long))(var119->class->vft[COLOR_array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
}
}
{
var122 = ((val* (*)(val*))(var119->class->vft[COLOR_string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var122); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2270);
show_backtrace(1);
}
{
var123 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret) /* box_extern on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var123;
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
}
var124 = 1;
var = var124;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_externmeth_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int VIRTUAL_abstract_compiler__AMethPropdef__compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__AMethPropdef__compile_externmeth_to_c(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_externinit_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int abstract_compiler__AMethPropdef__compile_externinit_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var11 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : AbstractCompiler */;
val* var21 /* : AbstractCompiler */;
val* var22 /* : ModelBuilder */;
val* var24 /* : ModelBuilder */;
val* var25 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : Location */;
val* var33 /* : Location */;
val* var34 /* : nullable SourceFile */;
val* var36 /* : nullable SourceFile */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : Location */;
val* var46 /* : Location */;
val* var47 /* : nullable SourceFile */;
val* var49 /* : nullable SourceFile */;
val* var50 /* : String */;
val* var52 /* : String */;
val* var_file /* var file: String */;
val* var53 /* : nullable Object */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var_ret /* var ret: MType */;
val* var57 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var58 /* : nullable Object */;
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
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
val* var80 /* : Array[Object] */;
long var81 /* : Int */;
val* var82 /* : NativeArray[Object] */;
val* var83 /* : String */;
val* var84 /* : RuntimeVariable */;
short int var85 /* : Bool */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "extern";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = annotation__Prod__get_single_annotation(self, var1, var8);
}
var_at = var11;
var12 = NULL;
if (var_at == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,var12) on <var_at:nullable AAnnotation> */
var_other = var12;
{
var17 = ((short int (*)(val*, val*))(var_at->class->vft[COLOR_kernel__Object___61d_61d]))(var_at, var_other) /* == on <var_at:nullable AAnnotation(AAnnotation)>*/;
var16 = var17;
}
var18 = !var16;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var21 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var19) on <var19:AbstractCompiler> */
var24 = var19->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var19:AbstractCompiler> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = annotation__AAnnotation__arg_as_string(var_at, var22);
}
var_externname = var25;
var26 = NULL;
if (var_externname == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
var28 = string__FlatString___61d_61d(var_externname, var26);
var27 = var28;
}
if (var27){
var29 = 0;
var = var29;
goto RET_LABEL;
} else {
}
} else {
var30 = 0;
var = var30;
goto RET_LABEL;
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var33 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline location#Location#file (var31) on <var31:Location> */
var36 = var31->attrs[COLOR_location__Location___file].val; /* _file on <var31:Location> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = NULL;
if (var34 == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var34,var37) on <var34:nullable SourceFile> */
var_other = var37;
{
var42 = ((short int (*)(val*, val*))(var34->class->vft[COLOR_kernel__Object___61d_61d]))(var34, var_other) /* == on <var34:nullable SourceFile(SourceFile)>*/;
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
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var46 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline location#Location#file (var44) on <var44:Location> */
var49 = var44->attrs[COLOR_location__Location___file].val; /* _file on <var44:Location> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (var47 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2289);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var47) on <var47:nullable SourceFile> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var52 = var47->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var47:nullable SourceFile> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_file = var50;
{
abstract_compiler__AbstractCompilerVisitor__add_extern(var_v, var_file); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
separate_compiler__SeparateCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
separate_compiler__SeparateCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
{
var53 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var53) on <var53:nullable Object(RuntimeVariable)> */
var56 = var53->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var53:nullable Object(RuntimeVariable)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_ret = var54;
{
var57 = abstract_compiler__AbstractCompilerVisitor__new_var_extern(var_v, var_ret);
}
var_res = var57;
{
var58 = array__AbstractArray__shift(var_arguments);
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = " = ";
var62 = 3;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "(";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = ", ";
var72 = 2;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
var74 = string__Collection__join(var_arguments, var70);
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = ");";
var78 = 2;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var80 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var80 = array_instance Array[Object] */
var81 = 6;
var82 = NEW_array__NativeArray(var81, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var82)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var82)->values[1] = (val*) var60;
((struct instance_array__NativeArray*)var82)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var82)->values[3] = (val*) var65;
((struct instance_array__NativeArray*)var82)->values[4] = (val*) var74;
((struct instance_array__NativeArray*)var82)->values[5] = (val*) var76;
{
((void (*)(val*, val*, long))(var80->class->vft[COLOR_array__Array__with_native]))(var80, var82, var81) /* with_native on <var80:Array[Object]>*/;
}
}
{
var83 = ((val* (*)(val*))(var80->class->vft[COLOR_string__Object__to_s]))(var80) /* to_s on <var80:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var83); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var84 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret) /* box_extern on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var84;
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var85 = 1;
var = var85;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_externinit_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int VIRTUAL_abstract_compiler__AMethPropdef__compile_externinit_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__AMethPropdef__compile_externinit_to_c(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrPropdef#compile_to_c for (self: AAttrPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AAttrPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable MPropDef */;
val* var23 /* : nullable MPropDef */;
val* var24 /* : nullable MType */;
val* var26 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var27 /* : Bool */;
val* var28 /* : String */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var_ /* var : Bool */;
short int var35 /* : Bool */;
int cltype;
int idtype;
short int var36 /* : Bool */;
short int var_useiset /* var useiset: Bool */;
val* var37 /* : nullable MAttributeDef */;
val* var39 /* : nullable MAttributeDef */;
val* var40 /* : MProperty */;
val* var42 /* : MProperty */;
val* var_guard /* var guard: MAttribute */;
val* var43 /* : nullable MPropDef */;
val* var45 /* : nullable MPropDef */;
val* var46 /* : MProperty */;
val* var48 /* : MProperty */;
val* var49 /* : RuntimeVariable */;
val* var_set /* var set: nullable Object */;
val* var50 /* : RuntimeVariable */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
val* var65 /* : nullable MPropDef */;
val* var67 /* : nullable MPropDef */;
val* var68 /* : MProperty */;
val* var70 /* : MProperty */;
val* var71 /* : RuntimeVariable */;
val* var_res /* var res: nullable Object */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
short int var78 /* : Bool */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : MClassType */;
val* var85 /* : RuntimeVariable */;
val* var_true_v /* var true_v: RuntimeVariable */;
val* var86 /* : nullable Object */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
val* var92 /* : nullable MPropDef */;
val* var94 /* : nullable MPropDef */;
val* var95 /* : MProperty */;
val* var97 /* : MProperty */;
val* var98 /* : nullable Object */;
val* var99 /* : RuntimeVariable */;
val* var100 /* : nullable Frame */;
val* var102 /* : nullable Frame */;
val* var103 /* : nullable RuntimeVariable */;
val* var105 /* : nullable RuntimeVariable */;
val* var106 /* : nullable MMethodDef */;
val* var108 /* : nullable MMethodDef */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
long var115 /* : Int */;
long var117 /* : Int */;
long var118 /* : Int */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : nullable MPropDef */;
val* var125 /* : nullable MPropDef */;
val* var126 /* : MProperty */;
val* var128 /* : MProperty */;
val* var129 /* : nullable Object */;
long var130 /* : Int */;
val* var131 /* : nullable Object */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
val* var135 /* : nullable MPropDef */;
val* var137 /* : nullable MPropDef */;
val* var138 /* : nullable MType */;
val* var140 /* : nullable MType */;
val* var_ret141 /* var ret: nullable MType */;
short int var142 /* : Bool */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : FlatString */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var_151 /* var : Bool */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
short int var155 /* : Bool */;
short int var_useiset156 /* var useiset: Bool */;
short int var157 /* : Bool */;
val* var158 /* : nullable MAttributeDef */;
val* var160 /* : nullable MAttributeDef */;
val* var161 /* : MProperty */;
val* var163 /* : MProperty */;
val* var164 /* : nullable Object */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : FlatString */;
val* var170 /* : MClassType */;
val* var171 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var) on <var_mpropdef:MMethodDef> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var8 = var_mpropdef == var_other;
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
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var11 = var_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = 1;
{
{ /* Inline kernel#Int#== (var9,var12) on <var9:Int> */
var16 = var9 == var12;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2310);
show_backtrace(1);
}
{
var17 = abstract_collection__SequenceRead__first(var_arguments);
}
var_recv = var17;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var20 = self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var23 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2315);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var21) on <var21:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2006);
show_backtrace(1);
}
var26 = var21->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var21:nullable MPropDef(nullable MAttributeDef)> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_ret = var24;
if (var_ret == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2316);
show_backtrace(1);
} else {
var28 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType>*/;
}
if (varonce) {
var29 = varonce;
} else {
var30 = "val*";
var31 = 4;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce = var29;
}
{
var34 = string__FlatString___61d_61d(var28, var29);
var33 = var34;
}
var_ = var33;
if (var33){
/* <var_ret:nullable MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(var_ret == NULL) {
var35 = 0;
} else {
if(cltype >= var_ret->type->table_size) {
var35 = 0;
} else {
var35 = var_ret->type->type_table[cltype] == idtype;
}
}
var36 = !var35;
var27 = var36;
} else {
var27 = var_;
}
var_useiset = var27;
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var39 = self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (var37 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2317);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var37) on <var37:nullable MAttributeDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var42 = var37->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var37:nullable MAttributeDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_guard = var40;
if (var_useiset){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var45 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2319);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var43) on <var43:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var48 = var43->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var43:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = separate_compiler__SeparateCompilerVisitor__isset_attribute(var_v, var46, var_recv);
}
var_set = var49;
} else {
{
var50 = separate_compiler__SeparateCompilerVisitor__read_attribute(var_v, var_guard, var_recv);
}
var_set = var50;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "if(likely(";
var54 = 10;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ")) {";
var59 = 4;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 3;
var63 = NEW_array__NativeArray(var62, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var63)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var63)->values[1] = (val*) var_set;
((struct instance_array__NativeArray*)var63)->values[2] = (val*) var57;
{
((void (*)(val*, val*, long))(var61->class->vft[COLOR_array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val*))(var61->class->vft[COLOR_string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var67 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (var65 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2324);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var65) on <var65:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var70 = var65->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var65:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = separate_compiler__SeparateCompilerVisitor__read_attribute(var_v, var68, var_recv);
}
var_res = var71;
if (varonce72) {
var73 = varonce72;
} else {
var74 = "} else {";
var75 = 8;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var77 = abstract_compiler__AAttrPropdef__evaluate_expr(self, var_v, var_recv);
}
var_value = var77;
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var_value); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var78 = !var_useiset;
if (var78){
if (varonce79) {
var80 = varonce79;
} else {
var81 = "1";
var82 = 1;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
var84 = abstract_compiler__AbstractCompilerVisitor__bool_type(var_v);
}
{
var85 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var80, var84);
}
var_true_v = var85;
{
var86 = abstract_collection__SequenceRead__first(var_arguments);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var_guard, var86, var_true_v); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = "}";
var90 = 1;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var88); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var94 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (var92 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2336);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var92) on <var92:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var97 = var92->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var92:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var99 = separate_compiler__SeparateCompilerVisitor__read_attribute(var_v, var95, var98);
}
var_res = var99;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var102 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (var100 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2338);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#returnvar (var100) on <var100:nullable Frame> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1691);
show_backtrace(1);
}
var105 = var100->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var100:nullable Frame> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2338);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var103, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var108 = self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var106) on <var_mpropdef:MMethodDef> */
var_other = var106;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var114 = var_mpropdef == var_other;
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
var109 = var110;
}
if (var109){
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var117 = var_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
var118 = 2;
{
{ /* Inline kernel#Int#== (var115,var118) on <var115:Int> */
var122 = var115 == var118;
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
var119 = var120;
}
if (unlikely(!var119)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2340);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var125 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
if (var123 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2341);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var123) on <var123:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var128 = var123->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var123:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = abstract_collection__SequenceRead__first(var_arguments);
}
var130 = 1;
{
var131 = array__Array___91d_93d(var_arguments, var130);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var126, var129, var131); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var134 = self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (var132){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var137 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var135 = var137;
RET_LABEL136:(void)0;
}
}
if (var135 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2343);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var135) on <var135:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2006);
show_backtrace(1);
}
var140 = var135->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var135:nullable MPropDef(nullable MAttributeDef)> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
var_ret141 = var138;
if (var_ret141 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2344);
show_backtrace(1);
} else {
var143 = ((val* (*)(val*))(var_ret141->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret141) /* ctype on <var_ret141:nullable MType>*/;
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = "val*";
var147 = 4;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
{
var150 = string__FlatString___61d_61d(var143, var145);
var149 = var150;
}
var_151 = var149;
if (var149){
/* <var_ret141:nullable MType> isa MNullableType */
cltype153 = type_model__MNullableType.color;
idtype154 = type_model__MNullableType.id;
if(var_ret141 == NULL) {
var152 = 0;
} else {
if(cltype153 >= var_ret141->type->table_size) {
var152 = 0;
} else {
var152 = var_ret141->type->type_table[cltype153] == idtype154;
}
}
var155 = !var152;
var142 = var155;
} else {
var142 = var_151;
}
var_useiset156 = var142;
var157 = !var_useiset156;
if (var157){
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var160 = self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
if (var158 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2346);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var158) on <var158:nullable MAttributeDef> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var163 = var158->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var158:nullable MAttributeDef> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
var164 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = "1";
var168 = 1;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
{
var170 = abstract_compiler__AbstractCompilerVisitor__bool_type(var_v);
}
{
var171 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var166, var170);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var161, var164, var171); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2350);
show_backtrace(1);
}
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AAttrPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AAttrPropdef__compile_to_c(self, p0, p1, p2); /* Direct call abstract_compiler#AAttrPropdef#compile_to_c on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#init_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AAttrPropdef__init_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
var_recv = p1;
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var6 = self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = !var4;
var = var7;
} else {
var = var_;
}
if (var){
{
var8 = abstract_compiler__AAttrPropdef__evaluate_expr(self, var_v, var_recv);
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#init_expr for (self: Object, AbstractCompilerVisitor, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AAttrPropdef__init_expr(val* self, val* p0, val* p1) {
abstract_compiler__AAttrPropdef__init_expr(self, p0, p1); /* Direct call abstract_compiler#AAttrPropdef#init_expr on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#evaluate_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable): RuntimeVariable */
val* abstract_compiler__AAttrPropdef__evaluate_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var5 /* : nullable Frame */;
val* var7 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
val* var8 /* : Frame */;
val* var9 /* : nullable MPropDef */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MType */;
val* var14 /* : MType */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var16 /* : Array[RuntimeVariable] */;
long var17 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: Frame */;
val* var19 /* : nullable MPropDef */;
val* var21 /* : nullable MPropDef */;
val* var22 /* : nullable MType */;
val* var24 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : nullable AExpr */;
val* var34 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var35 /* : nullable AExpr */;
val* var37 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var38 /* : null */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : RuntimeVariable */;
val* var_value /* var value: nullable Object */;
val* var46 /* : null */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : RuntimeVariable */;
static val* varonce;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
val* var59 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : nullable String */;
val* var68 /* : nullable String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
val* var83 /* : nullable MPropDef */;
val* var85 /* : nullable MPropDef */;
val* var86 /* : MProperty */;
val* var88 /* : MProperty */;
var_v = p0;
var_recv = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_oldnode = var1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,self) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = self; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_old_frame = var5;
var8 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var11 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2365);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var14 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
/* <var12:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var12->type->table_size) {
var15 = 0;
} else {
var15 = var12->type->type_table[cltype] == idtype;
}
if (unlikely(!var15)) {
var_class_name = var12 == NULL ? "null" : var12->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2365);
show_backtrace(1);
}
var16 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var17 = 1;
{
array__Array__with_capacity(var16, var17); /* Direct call array#Array#with_capacity on <var16:Array[RuntimeVariable]>*/
}
var_ = var16;
{
array__AbstractArray__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
((void (*)(val*, val*))(var8->class->vft[COLOR_abstract_compiler__Frame__visitor_61d]))(var8, var_v) /* visitor= on <var8:Frame>*/;
}
{
((void (*)(val*, val*))(var8->class->vft[COLOR_abstract_compiler__Frame__mpropdef_61d]))(var8, var9) /* mpropdef= on <var8:Frame>*/;
}
{
((void (*)(val*, val*))(var8->class->vft[COLOR_abstract_compiler__Frame__receiver_61d]))(var8, var12) /* receiver= on <var8:Frame>*/;
}
{
((void (*)(val*, val*))(var8->class->vft[COLOR_abstract_compiler__Frame__arguments_61d]))(var8, var_) /* arguments= on <var8:Frame>*/;
}
{
((void (*)(val*))(var8->class->vft[COLOR_kernel__Object__init]))(var8) /* init on <var8:Frame>*/;
}
var_frame = var8;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var21 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2369);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var19) on <var19:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2006);
show_backtrace(1);
}
var24 = var19->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var19:nullable MPropDef(nullable MAttributeDef)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_mtype = var22;
var25 = NULL;
if (var_mtype == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var25) on <var_mtype:nullable MType> */
var_other = var25;
{
var30 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
var29 = var30;
}
var31 = !var29;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2370);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var34 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_nexpr = var32;
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var37 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_nblock = var35;
var38 = NULL;
if (var_nexpr == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var38) on <var_nexpr:nullable AExpr> */
var_other = var38;
{
var43 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var42 = var43;
}
var44 = !var42;
var40 = var44;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
var45 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_nexpr, var_mtype);
}
var_value = var45;
} else {
var46 = NULL;
if (var_nblock == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,var46) on <var_nblock:nullable AExpr> */
var_other = var46;
{
var51 = ((short int (*)(val*, val*))(var_nblock->class->vft[COLOR_kernel__Object___61d_61d]))(var_nblock, var_other) /* == on <var_nblock:nullable AExpr(AExpr)>*/;
var50 = var51;
}
var52 = !var50;
var48 = var52;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (var47){
{
var53 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_mtype);
}
var_value = var53;
{
{ /* Inline abstract_compiler#Frame#returnvar= (var_frame,var_value) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val = var_value; /* _returnvar on <var_frame:Frame> */
RET_LABEL54:(void)0;
}
}
if (varonce) {
var55 = varonce;
} else {
var56 = "RET_LABEL";
var57 = 9;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce = var55;
}
{
var59 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var55);
}
{
{ /* Inline abstract_compiler#Frame#returnlabel= (var_frame,var59) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = var59; /* _returnlabel on <var_frame:Frame> */
RET_LABEL60:(void)0;
}
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = "{";
var64 = 1;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var62); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var_nblock); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#Frame#returnlabel (var_frame) on <var_frame:Frame> */
var68 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var_frame:Frame> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2382);
show_backtrace(1);
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = ":(void)0;";
var72 = 9;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 2;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var66;
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var70;
{
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
}
{
var77 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var77); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "}";
var81 = 1;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var79); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2385);
show_backtrace(1);
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var85 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (var83 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2388);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var83) on <var83:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var88 = var83->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var83:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var86, var_recv, var_value); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_old_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL89:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL90:(void)0;
}
}
var = var_value;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrPropdef#evaluate_expr for (self: Object, AbstractCompilerVisitor, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAttrPropdef__evaluate_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AAttrPropdef__evaluate_expr(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AClassdef#compile_to_c for (self: AClassdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AClassdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MProperty */;
val* var11 /* : MProperty */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var26 /* : MType */;
val* var28 /* : MType */;
short int var29 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var30 /* : nullable RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline modelize_property#AClassdef#mfree_init (self) on <self:AClassdef> */
var2 = self->attrs[COLOR_modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <self:AClassdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var) on <var_mpropdef:MMethodDef> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var8 = var_mpropdef == var_other;
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
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var11 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var9) on <var9:MProperty(MMethod)> */
var14 = var9->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <var9:MProperty(MMethod)> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2417);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var17 = var_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var18 = 1;
{
{ /* Inline kernel#Int#== (var15,var18) on <var15:Int> */
var22 = var15 == var18;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2418);
show_backtrace(1);
}
{
var23 = model__MPropDef__is_intro(var_mpropdef);
}
var24 = !var23;
if (var24){
{
var25 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var25) on <var25:nullable Object(RuntimeVariable)> */
var28 = var25->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var25:nullable Object(RuntimeVariable)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
/* <var26:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var26->type->table_size) {
var29 = 0;
} else {
var29 = var26->type->type_table[cltype] == idtype;
}
if (unlikely(!var29)) {
var_class_name = var26 == NULL ? "null" : var26->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2420);
show_backtrace(1);
}
{
var30 = separate_compiler__SeparateCompilerVisitor__supercall(var_v, var_mpropdef, var26, var_arguments);
}
} else {
}
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2424);
show_backtrace(1);
}
RET_LABEL:;
}
/* method abstract_compiler#AClassdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AClassdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AClassdef__compile_to_c(self, p0, p1, p2); /* Direct call abstract_compiler#AClassdef#compile_to_c on <self:Object(AClassdef)>*/
RET_LABEL:;
}
/* method abstract_compiler#AExpr#expr for (self: AExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Location */;
val* var13 /* : Location */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
val* var24 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : null */;
val* var33 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var3 = 33;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = string__Object__class_name(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ":";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AExpr> */
var13 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AExpr> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = location__Location__to_s(var11);
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "\\n\");";
var18 = 5;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 5;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var22)->values[2] = (val*) var7;
((struct instance_array__NativeArray*)var22)->values[3] = (val*) var14;
((struct instance_array__NativeArray*)var22)->values[4] = (val*) var16;
{
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var24 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
}
var_mtype = var24;
var25 = NULL;
if (var_mtype == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var25) on <var_mtype:nullable MType> */
var_other = var25;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var31 = var_mtype == var_other;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
var32 = NULL;
var = var32;
goto RET_LABEL;
} else {
{
var33 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_mtype);
}
var_res = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "/* ";
var37 = 3;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = " = NOT YET ";
var42 = 11;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
{
var44 = string__Object__class_name(self);
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = " */";
var48 = 3;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 5;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var40;
((struct instance_array__NativeArray*)var52)->values[3] = (val*) var44;
((struct instance_array__NativeArray*)var52)->values[4] = (val*) var46;
{
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AExpr#stmt for (self: AExpr, AbstractCompilerVisitor) */
void abstract_compiler__AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable RuntimeVariable */;
var_v = p0;
{
var = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AExpr__expr]))(self, var_v) /* expr on <self:AExpr>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#AExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AExpr__stmt(val* self, val* p0) {
abstract_compiler__AExpr__stmt(self, p0); /* Direct call abstract_compiler#AExpr#stmt on <self:Object(AExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#stmt for (self: ABlockExpr, AbstractCompilerVisitor) */
void abstract_compiler__ABlockExpr__stmt(val* self, val* p0) {
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
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = parser_nodes__ANodes__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_4) /* is_ok on <var_4:Iterator[AExpr]>*/;
}
if (var5){
{
var6 = ((val* (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__item]))(var_4) /* item on <var_4:Iterator[AExpr]>*/;
}
var_e = var6;
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__next]))(var_4) /* next on <var_4:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_4) on <var_4:Iterator[AExpr]> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ABlockExpr__stmt(val* self, val* p0) {
abstract_compiler__ABlockExpr__stmt(self, p0); /* Direct call abstract_compiler#ABlockExpr#stmt on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#expr for (self: ABlockExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ABlockExpr__expr(val* self, val* p0) {
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
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var19 /* : null */;
val* var20 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_collection__SequenceRead__last(var1);
}
var_last = var4;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var7 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = parser_nodes__ANodes__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int (*)(val*))(var_9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_9) /* is_ok on <var_9:Iterator[AExpr]>*/;
}
if (var10){
{
var11 = ((val* (*)(val*))(var_9->class->vft[COLOR_abstract_collection__Iterator__item]))(var_9) /* item on <var_9:Iterator[AExpr]>*/;
}
var_e = var11;
{
{ /* Inline kernel#Object#== (var_e,var_last) on <var_e:AExpr> */
var_other = var_last;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:AExpr> */
var17 = var_e == var_other;
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
goto BREAK_label;
} else {
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void (*)(val*))(var_9->class->vft[COLOR_abstract_collection__Iterator__next]))(var_9) /* next on <var_9:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_9) on <var_9:Iterator[AExpr]> */
RET_LABEL18:(void)0;
}
}
var19 = NULL;
{
var20 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_last, var19);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ABlockExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ABlockExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ABlockExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVardeclExpr#stmt for (self: AVardeclExpr, AbstractCompilerVisitor) */
void abstract_compiler__AVardeclExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var_ne /* var ne: nullable AExpr */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable MType */;
val* var15 /* : nullable MType */;
val* var16 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var17 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2472);
show_backtrace(1);
}
var_variable = var;
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (self) on <self:AVardeclExpr> */
var5 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ne = var3;
var6 = NULL;
if (var_ne == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ne,var6) on <var_ne:nullable AExpr> */
var_other = var6;
{
var11 = ((short int (*)(val*, val*))(var_ne->class->vft[COLOR_kernel__Object___61d_61d]))(var_ne, var_other) /* == on <var_ne:nullable AExpr(AExpr)>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var15 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_ne, var13);
}
var_i = var16;
{
var17 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var17, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AVardeclExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AVardeclExpr__stmt(val* self, val* p0) {
abstract_compiler__AVardeclExpr__stmt(self, p0); /* Direct call abstract_compiler#AVardeclExpr#stmt on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AVarExpr#expr for (self: AVarExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AVarExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2484);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var1);
}
var_res = var4;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AVarExpr> */
var7 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AVarExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2485);
show_backtrace(1);
}
var_mtype = var5;
{
var8 = abstract_compiler__AbstractCompilerVisitor__autoadapt(var_v, var_res, var_mtype);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AVarExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AVarExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarAssignExpr#expr for (self: AVarAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AVarAssignExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2493);
show_backtrace(1);
}
var_variable = var1;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AVarAssignExpr> */
var6 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1445);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var9 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var4, var7);
}
var_i = var10;
{
var11 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var11, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarAssignExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AVarAssignExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AVarAssignExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarReassignExpr#stmt for (self: AVarReassignExpr, AbstractCompilerVisitor) */
void abstract_compiler__AVarReassignExpr__stmt(val* self, val* p0) {
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
long var15 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var16 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2503);
show_backtrace(1);
}
var_variable = var;
{
var3 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
var_vari = var3;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AVarReassignExpr> */
var6 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1452);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var9 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var4, var7);
}
var_value = var10;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var13 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2506);
show_backtrace(1);
}
var14 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var15 = 2;
{
array__Array__with_capacity(var14, var15); /* Direct call array#Array#with_capacity on <var14:Array[RuntimeVariable]>*/
}
var_ = var14;
{
array__AbstractArray__push(var_, var_vari); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var16 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var11, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var16;
var17 = NULL;
if (var_res == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var17) on <var_res:nullable RuntimeVariable> */
var_other = var17;
{
var22 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var21 = var22;
}
var23 = !var21;
var19 = var23;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2507);
show_backtrace(1);
}
{
var24 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var24, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AVarReassignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AVarReassignExpr__stmt(val* self, val* p0) {
abstract_compiler__AVarReassignExpr__stmt(self, p0); /* Direct call abstract_compiler#AVarReassignExpr#stmt on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#ASelfExpr#expr for (self: ASelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASelfExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Frame */;
val* var3 /* : nullable Frame */;
val* var4 /* : Array[RuntimeVariable] */;
val* var6 /* : Array[RuntimeVariable] */;
val* var7 /* : nullable Object */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2513);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var1) on <var1:nullable Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var1:nullable Frame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = abstract_collection__SequenceRead__first(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASelfExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASelfExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASelfExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AEscapeExpr#stmt for (self: AEscapeExpr, AbstractCompilerVisitor) */
void abstract_compiler__AEscapeExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable EscapeMark */;
val* var6 /* : nullable EscapeMark */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "goto BREAK_";
var2 = 11;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
{ /* Inline scope#AEscapeExpr#escapemark (self) on <self:AEscapeExpr> */
var6 = self->attrs[COLOR_scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:AEscapeExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(var_v, var4);
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = ";";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var9;
{
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var16); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AEscapeExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AEscapeExpr__stmt(val* self, val* p0) {
abstract_compiler__AEscapeExpr__stmt(self, p0); /* Direct call abstract_compiler#AEscapeExpr#stmt on <self:Object(AEscapeExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: AReturnExpr, AbstractCompilerVisitor) */
void abstract_compiler__AReturnExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Frame */;
val* var12 /* : nullable Frame */;
val* var13 /* : nullable RuntimeVariable */;
val* var15 /* : nullable RuntimeVariable */;
val* var_returnvar /* var returnvar: RuntimeVariable */;
val* var16 /* : MType */;
val* var18 /* : MType */;
val* var19 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : nullable Frame */;
val* var26 /* : nullable Frame */;
val* var27 /* : nullable String */;
val* var29 /* : nullable String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var37 /* : NativeArray[Object] */;
val* var38 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AReturnExpr#n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
var3 = NULL;
if (var_nexpr == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var3) on <var_nexpr:nullable AExpr> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var12 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2525);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#returnvar (var10) on <var10:nullable Frame> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1691);
show_backtrace(1);
}
var15 = var10->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var10:nullable Frame> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2525);
show_backtrace(1);
}
var_returnvar = var13;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_returnvar) on <var_returnvar:RuntimeVariable> */
var18 = var_returnvar->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_returnvar:RuntimeVariable> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_nexpr, var16);
}
var_i = var19;
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_returnvar, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce) {
var20 = varonce;
} else {
var21 = "goto ";
var22 = 5;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var26 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2529);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#returnlabel (var24) on <var24:nullable Frame> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1694);
show_backtrace(1);
}
var29 = var24->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var24:nullable Frame> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2529);
show_backtrace(1);
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = ";";
var33 = 1;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var35 = array_instance Array[Object] */
var36 = 3;
var37 = NEW_array__NativeArray(var36, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var37)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var37)->values[1] = (val*) var27;
((struct instance_array__NativeArray*)var37)->values[2] = (val*) var31;
{
((void (*)(val*, val*, long))(var35->class->vft[COLOR_array__Array__with_native]))(var35, var37, var36) /* with_native on <var35:Array[Object]>*/;
}
}
{
var38 = ((val* (*)(val*))(var35->class->vft[COLOR_string__Object__to_s]))(var35) /* to_s on <var35:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AReturnExpr__stmt(val* self, val* p0) {
abstract_compiler__AReturnExpr__stmt(self, p0); /* Direct call abstract_compiler#AReturnExpr#stmt on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AAbortExpr#stmt for (self: AAbortExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAbortExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Aborted";
var2 = 7;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AAbortExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAbortExpr__stmt(val* self, val* p0) {
abstract_compiler__AAbortExpr__stmt(self, p0); /* Direct call abstract_compiler#AAbortExpr#stmt on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#stmt for (self: AIfExpr, AbstractCompilerVisitor) */
void abstract_compiler__AIfExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
val* var17 /* : nullable AExpr */;
val* var19 /* : nullable AExpr */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : nullable AExpr */;
val* var27 /* : nullable AExpr */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1387);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var);
}
var_cond = var3;
if (varonce) {
var4 = varonce;
} else {
var5 = "if (";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = "){";
var11 = 2;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var4;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var9;
{
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var16); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var19 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var17); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "} else {";
var23 = 8;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var27 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "}";
var31 = 1;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AIfExpr__stmt(val* self, val* p0) {
abstract_compiler__AIfExpr__stmt(self, p0); /* Direct call abstract_compiler#AIfExpr#stmt on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#expr for (self: AIfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIfExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
val* var22 /* : nullable AExpr */;
val* var24 /* : nullable AExpr */;
val* var25 /* : null */;
val* var26 /* : RuntimeVariable */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : nullable AExpr */;
val* var34 /* : nullable AExpr */;
val* var35 /* : null */;
val* var36 /* : RuntimeVariable */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfExpr> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AIfExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2550);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var7 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1387);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var5);
}
var_cond = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if (";
var11 = 4;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "){";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var24 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2553);
show_backtrace(1);
}
var25 = NULL;
{
var26 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var22, var25);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "} else {";
var30 = 8;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var34 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2555);
show_backtrace(1);
}
var35 = NULL;
{
var36 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var32, var35);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = "}";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIfExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIfExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIfExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIfexprExpr#expr for (self: AIfexprExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIfexprExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
val* var22 /* : AExpr */;
val* var24 /* : AExpr */;
val* var25 /* : null */;
val* var26 /* : RuntimeVariable */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : null */;
val* var36 /* : RuntimeVariable */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfexprExpr> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AIfexprExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2564);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:AIfexprExpr> */
var7 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1396);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var5);
}
var_cond = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if (";
var11 = 4;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "){";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:AIfexprExpr> */
var24 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1398);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = NULL;
{
var26 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var22, var25);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "} else {";
var30 = 8;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:AIfexprExpr> */
var34 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1400);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = NULL;
{
var36 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var32, var35);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = "}";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIfexprExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIfexprExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIfexprExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADoExpr#stmt for (self: ADoExpr, AbstractCompilerVisitor) */
void abstract_compiler__ADoExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable EscapeMark */;
val* var5 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ADoExpr#break_mark (self) on <self:ADoExpr> */
var5 = self->attrs[COLOR_scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__add_escape_label(var_v, var3); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ADoExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ADoExpr__stmt(val* self, val* p0) {
abstract_compiler__ADoExpr__stmt(self, p0); /* Direct call abstract_compiler#ADoExpr#stmt on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: AWhileExpr, AbstractCompilerVisitor) */
void abstract_compiler__AWhileExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
val* var22 /* : nullable AExpr */;
val* var24 /* : nullable AExpr */;
val* var25 /* : nullable EscapeMark */;
val* var27 /* : nullable EscapeMark */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : nullable EscapeMark */;
val* var35 /* : nullable EscapeMark */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = 9;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var6 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1408);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var4);
}
var_cond = var7;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "if (!";
var11 = 5;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ") break;";
var16 = 8;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var24 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AWhileExpr#continue_mark (self) on <self:AWhileExpr> */
var27 = self->attrs[COLOR_scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__add_escape_label(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "}";
var31 = 1;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var35 = self->attrs[COLOR_scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__add_escape_label(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AWhileExpr__stmt(val* self, val* p0) {
abstract_compiler__AWhileExpr__stmt(self, p0); /* Direct call abstract_compiler#AWhileExpr#stmt on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: ALoopExpr, AbstractCompilerVisitor) */
void abstract_compiler__ALoopExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable EscapeMark */;
val* var9 /* : nullable EscapeMark */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : nullable EscapeMark */;
val* var17 /* : nullable EscapeMark */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = 9;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var6 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var4); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ALoopExpr#continue_mark (self) on <self:ALoopExpr> */
var9 = self->attrs[COLOR_scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__add_escape_label(var_v, var7); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "}";
var13 = 1;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var11); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ALoopExpr#break_mark (self) on <self:ALoopExpr> */
var17 = self->attrs[COLOR_scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__add_escape_label(var_v, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ALoopExpr__stmt(val* self, val* p0) {
abstract_compiler__ALoopExpr__stmt(self, p0); /* Direct call abstract_compiler#ALoopExpr#stmt on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
