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
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var29 /* : MType */;
short int var30 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
val* var65 /* : nullable Object */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : Array[Object] */;
long var72 /* : Int */;
val* var73 /* : NativeArray[Object] */;
val* var74 /* : String */;
short int var75 /* : Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
short int var81 /* : Bool */;
val* var82 /* : nullable Object */;
short int var83 /* : Bool */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
short int var89 /* : Bool */;
long var90 /* : Int */;
val* var91 /* : nullable Object */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
long var97 /* : Int */;
val* var98 /* : nullable Object */;
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[Object] */;
val* var102 /* : String */;
val* var103 /* : RuntimeVariable */;
short int var104 /* : Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
short int var110 /* : Bool */;
long var111 /* : Int */;
val* var112 /* : nullable Object */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
long var118 /* : Int */;
val* var119 /* : nullable Object */;
val* var120 /* : Array[Object] */;
long var121 /* : Int */;
val* var122 /* : NativeArray[Object] */;
val* var123 /* : String */;
val* var124 /* : RuntimeVariable */;
short int var125 /* : Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
short int var131 /* : Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
long var137 /* : Int */;
val* var138 /* : nullable Object */;
val* var139 /* : Array[Object] */;
long var140 /* : Int */;
val* var141 /* : NativeArray[Object] */;
val* var142 /* : String */;
val* var143 /* : RuntimeVariable */;
short int var144 /* : Bool */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : FlatString */;
short int var150 /* : Bool */;
long var151 /* : Int */;
val* var152 /* : nullable Object */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
long var158 /* : Int */;
val* var159 /* : nullable Object */;
val* var160 /* : Array[Object] */;
long var161 /* : Int */;
val* var162 /* : NativeArray[Object] */;
val* var163 /* : String */;
val* var164 /* : RuntimeVariable */;
short int var165 /* : Bool */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
short int var171 /* : Bool */;
long var172 /* : Int */;
val* var173 /* : nullable Object */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : FlatString */;
long var179 /* : Int */;
val* var180 /* : nullable Object */;
val* var181 /* : Array[Object] */;
long var182 /* : Int */;
val* var183 /* : NativeArray[Object] */;
val* var184 /* : String */;
val* var185 /* : RuntimeVariable */;
short int var186 /* : Bool */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
short int var192 /* : Bool */;
long var193 /* : Int */;
val* var194 /* : nullable Object */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
long var200 /* : Int */;
val* var201 /* : nullable Object */;
val* var202 /* : Array[Object] */;
long var203 /* : Int */;
val* var204 /* : NativeArray[Object] */;
val* var205 /* : String */;
val* var206 /* : RuntimeVariable */;
short int var207 /* : Bool */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : FlatString */;
short int var213 /* : Bool */;
long var214 /* : Int */;
val* var215 /* : nullable Object */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : FlatString */;
long var221 /* : Int */;
val* var222 /* : nullable Object */;
val* var223 /* : Array[Object] */;
long var224 /* : Int */;
val* var225 /* : NativeArray[Object] */;
val* var226 /* : String */;
val* var227 /* : RuntimeVariable */;
short int var228 /* : Bool */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : FlatString */;
short int var234 /* : Bool */;
long var235 /* : Int */;
val* var236 /* : nullable Object */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
long var240 /* : Int */;
val* var241 /* : FlatString */;
long var242 /* : Int */;
val* var243 /* : nullable Object */;
val* var244 /* : Array[Object] */;
long var245 /* : Int */;
val* var246 /* : NativeArray[Object] */;
val* var247 /* : String */;
val* var248 /* : RuntimeVariable */;
short int var249 /* : Bool */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
long var253 /* : Int */;
val* var254 /* : FlatString */;
short int var255 /* : Bool */;
long var256 /* : Int */;
val* var257 /* : nullable Object */;
long var258 /* : Int */;
val* var259 /* : nullable Object */;
val* var260 /* : RuntimeVariable */;
short int var261 /* : Bool */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : FlatString */;
short int var267 /* : Bool */;
long var268 /* : Int */;
val* var269 /* : nullable Object */;
long var270 /* : Int */;
val* var271 /* : nullable Object */;
val* var272 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : FlatString */;
val* var278 /* : Array[Object] */;
long var279 /* : Int */;
val* var280 /* : NativeArray[Object] */;
val* var281 /* : String */;
val* var282 /* : RuntimeVariable */;
short int var283 /* : Bool */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
long var287 /* : Int */;
val* var288 /* : FlatString */;
short int var289 /* : Bool */;
long var290 /* : Int */;
val* var291 /* : nullable Object */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : FlatString */;
long var297 /* : Int */;
val* var298 /* : nullable Object */;
val* var299 /* : Array[Object] */;
long var300 /* : Int */;
val* var301 /* : NativeArray[Object] */;
val* var302 /* : String */;
val* var303 /* : RuntimeVariable */;
short int var304 /* : Bool */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
long var308 /* : Int */;
val* var309 /* : FlatString */;
short int var310 /* : Bool */;
long var311 /* : Int */;
val* var312 /* : nullable Object */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : FlatString */;
long var318 /* : Int */;
val* var319 /* : nullable Object */;
val* var320 /* : Array[Object] */;
long var321 /* : Int */;
val* var322 /* : NativeArray[Object] */;
val* var323 /* : String */;
val* var324 /* : RuntimeVariable */;
short int var325 /* : Bool */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
long var329 /* : Int */;
val* var330 /* : FlatString */;
short int var331 /* : Bool */;
long var332 /* : Int */;
val* var333 /* : nullable Object */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : FlatString */;
long var339 /* : Int */;
val* var340 /* : nullable Object */;
val* var341 /* : Array[Object] */;
long var342 /* : Int */;
val* var343 /* : NativeArray[Object] */;
val* var344 /* : String */;
val* var345 /* : RuntimeVariable */;
short int var346 /* : Bool */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
long var350 /* : Int */;
val* var351 /* : FlatString */;
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
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : NativeString */;
long var377 /* : Int */;
val* var378 /* : FlatString */;
long var379 /* : Int */;
val* var380 /* : nullable Object */;
val* var381 /* : Array[Object] */;
long var382 /* : Int */;
val* var383 /* : NativeArray[Object] */;
val* var384 /* : String */;
val* var385 /* : RuntimeVariable */;
short int var386 /* : Bool */;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : NativeString */;
long var390 /* : Int */;
val* var391 /* : FlatString */;
short int var392 /* : Bool */;
long var393 /* : Int */;
val* var394 /* : nullable Object */;
val* var395 /* : Array[Object] */;
long var396 /* : Int */;
val* var397 /* : NativeArray[Object] */;
val* var398 /* : String */;
val* var399 /* : RuntimeVariable */;
short int var400 /* : Bool */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
long var404 /* : Int */;
val* var405 /* : FlatString */;
short int var406 /* : Bool */;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : NativeString */;
long var410 /* : Int */;
val* var411 /* : FlatString */;
short int var412 /* : Bool */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : FlatString */;
val* var418 /* : nullable Object */;
static val* varonce419;
val* var420 /* : String */;
char* var421 /* : NativeString */;
long var422 /* : Int */;
val* var423 /* : FlatString */;
val* var424 /* : Array[Object] */;
long var425 /* : Int */;
val* var426 /* : NativeArray[Object] */;
val* var427 /* : String */;
short int var428 /* : Bool */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
long var432 /* : Int */;
val* var433 /* : FlatString */;
short int var434 /* : Bool */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
long var438 /* : Int */;
val* var439 /* : FlatString */;
val* var440 /* : nullable Object */;
val* var441 /* : Array[Object] */;
long var442 /* : Int */;
val* var443 /* : NativeArray[Object] */;
val* var444 /* : String */;
val* var445 /* : RuntimeVariable */;
short int var446 /* : Bool */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
long var450 /* : Int */;
val* var451 /* : FlatString */;
short int var452 /* : Bool */;
long var453 /* : Int */;
val* var454 /* : nullable Object */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
long var458 /* : Int */;
val* var459 /* : FlatString */;
long var460 /* : Int */;
val* var461 /* : nullable Object */;
val* var462 /* : Array[Object] */;
long var463 /* : Int */;
val* var464 /* : NativeArray[Object] */;
val* var465 /* : String */;
val* var466 /* : RuntimeVariable */;
short int var467 /* : Bool */;
static val* varonce468;
val* var469 /* : String */;
char* var470 /* : NativeString */;
long var471 /* : Int */;
val* var472 /* : FlatString */;
short int var473 /* : Bool */;
long var474 /* : Int */;
val* var475 /* : nullable Object */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : NativeString */;
long var479 /* : Int */;
val* var480 /* : FlatString */;
long var481 /* : Int */;
val* var482 /* : nullable Object */;
val* var483 /* : Array[Object] */;
long var484 /* : Int */;
val* var485 /* : NativeArray[Object] */;
val* var486 /* : String */;
val* var487 /* : RuntimeVariable */;
short int var488 /* : Bool */;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : NativeString */;
long var492 /* : Int */;
val* var493 /* : FlatString */;
short int var494 /* : Bool */;
long var495 /* : Int */;
val* var496 /* : nullable Object */;
long var497 /* : Int */;
val* var498 /* : nullable Object */;
val* var499 /* : RuntimeVariable */;
short int var500 /* : Bool */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
long var504 /* : Int */;
val* var505 /* : FlatString */;
short int var506 /* : Bool */;
long var507 /* : Int */;
val* var508 /* : nullable Object */;
long var509 /* : Int */;
val* var510 /* : nullable Object */;
val* var511 /* : RuntimeVariable */;
val* var_res512 /* var res: RuntimeVariable */;
static val* varonce513;
val* var514 /* : String */;
char* var515 /* : NativeString */;
long var516 /* : Int */;
val* var517 /* : FlatString */;
val* var518 /* : Array[Object] */;
long var519 /* : Int */;
val* var520 /* : NativeArray[Object] */;
val* var521 /* : String */;
val* var522 /* : RuntimeVariable */;
short int var523 /* : Bool */;
static val* varonce524;
val* var525 /* : String */;
char* var526 /* : NativeString */;
long var527 /* : Int */;
val* var528 /* : FlatString */;
short int var529 /* : Bool */;
long var530 /* : Int */;
val* var531 /* : nullable Object */;
static val* varonce532;
val* var533 /* : String */;
char* var534 /* : NativeString */;
long var535 /* : Int */;
val* var536 /* : FlatString */;
long var537 /* : Int */;
val* var538 /* : nullable Object */;
val* var539 /* : Array[Object] */;
long var540 /* : Int */;
val* var541 /* : NativeArray[Object] */;
val* var542 /* : String */;
val* var543 /* : RuntimeVariable */;
short int var544 /* : Bool */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : NativeString */;
long var548 /* : Int */;
val* var549 /* : FlatString */;
short int var550 /* : Bool */;
long var551 /* : Int */;
val* var552 /* : nullable Object */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
long var556 /* : Int */;
val* var557 /* : FlatString */;
long var558 /* : Int */;
val* var559 /* : nullable Object */;
val* var560 /* : Array[Object] */;
long var561 /* : Int */;
val* var562 /* : NativeArray[Object] */;
val* var563 /* : String */;
val* var564 /* : RuntimeVariable */;
short int var565 /* : Bool */;
static val* varonce566;
val* var567 /* : String */;
char* var568 /* : NativeString */;
long var569 /* : Int */;
val* var570 /* : FlatString */;
short int var571 /* : Bool */;
long var572 /* : Int */;
val* var573 /* : nullable Object */;
static val* varonce574;
val* var575 /* : String */;
char* var576 /* : NativeString */;
long var577 /* : Int */;
val* var578 /* : FlatString */;
long var579 /* : Int */;
val* var580 /* : nullable Object */;
val* var581 /* : Array[Object] */;
long var582 /* : Int */;
val* var583 /* : NativeArray[Object] */;
val* var584 /* : String */;
val* var585 /* : RuntimeVariable */;
short int var586 /* : Bool */;
static val* varonce587;
val* var588 /* : String */;
char* var589 /* : NativeString */;
long var590 /* : Int */;
val* var591 /* : FlatString */;
short int var592 /* : Bool */;
long var593 /* : Int */;
val* var594 /* : nullable Object */;
static val* varonce595;
val* var596 /* : String */;
char* var597 /* : NativeString */;
long var598 /* : Int */;
val* var599 /* : FlatString */;
long var600 /* : Int */;
val* var601 /* : nullable Object */;
val* var602 /* : Array[Object] */;
long var603 /* : Int */;
val* var604 /* : NativeArray[Object] */;
val* var605 /* : String */;
val* var606 /* : RuntimeVariable */;
short int var607 /* : Bool */;
static val* varonce608;
val* var609 /* : String */;
char* var610 /* : NativeString */;
long var611 /* : Int */;
val* var612 /* : FlatString */;
short int var613 /* : Bool */;
long var614 /* : Int */;
val* var615 /* : nullable Object */;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : NativeString */;
long var619 /* : Int */;
val* var620 /* : FlatString */;
val* var621 /* : Array[Object] */;
long var622 /* : Int */;
val* var623 /* : NativeArray[Object] */;
val* var624 /* : String */;
val* var625 /* : RuntimeVariable */;
short int var626 /* : Bool */;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
long var630 /* : Int */;
val* var631 /* : FlatString */;
short int var632 /* : Bool */;
static val* varonce633;
val* var634 /* : String */;
char* var635 /* : NativeString */;
long var636 /* : Int */;
val* var637 /* : FlatString */;
long var638 /* : Int */;
val* var639 /* : nullable Object */;
val* var640 /* : Array[Object] */;
long var641 /* : Int */;
val* var642 /* : NativeArray[Object] */;
val* var643 /* : String */;
val* var644 /* : RuntimeVariable */;
short int var645 /* : Bool */;
static val* varonce646;
val* var647 /* : String */;
char* var648 /* : NativeString */;
long var649 /* : Int */;
val* var650 /* : FlatString */;
short int var651 /* : Bool */;
static val* varonce652;
val* var653 /* : String */;
char* var654 /* : NativeString */;
long var655 /* : Int */;
val* var656 /* : FlatString */;
short int var657 /* : Bool */;
static val* varonce658;
val* var659 /* : String */;
char* var660 /* : NativeString */;
long var661 /* : Int */;
val* var662 /* : FlatString */;
val* var663 /* : nullable Object */;
static val* varonce664;
val* var665 /* : String */;
char* var666 /* : NativeString */;
long var667 /* : Int */;
val* var668 /* : FlatString */;
val* var669 /* : Array[Object] */;
long var670 /* : Int */;
val* var671 /* : NativeArray[Object] */;
val* var672 /* : String */;
short int var673 /* : Bool */;
static val* varonce674;
val* var675 /* : String */;
char* var676 /* : NativeString */;
long var677 /* : Int */;
val* var678 /* : FlatString */;
short int var679 /* : Bool */;
static val* varonce680;
val* var681 /* : String */;
char* var682 /* : NativeString */;
long var683 /* : Int */;
val* var684 /* : FlatString */;
val* var685 /* : nullable Object */;
val* var686 /* : Array[Object] */;
long var687 /* : Int */;
val* var688 /* : NativeArray[Object] */;
val* var689 /* : String */;
val* var690 /* : RuntimeVariable */;
short int var691 /* : Bool */;
static val* varonce692;
val* var693 /* : String */;
char* var694 /* : NativeString */;
long var695 /* : Int */;
val* var696 /* : FlatString */;
short int var697 /* : Bool */;
long var698 /* : Int */;
val* var699 /* : nullable Object */;
long var700 /* : Int */;
val* var701 /* : nullable Object */;
val* var702 /* : RuntimeVariable */;
short int var703 /* : Bool */;
static val* varonce704;
val* var705 /* : String */;
char* var706 /* : NativeString */;
long var707 /* : Int */;
val* var708 /* : FlatString */;
short int var709 /* : Bool */;
long var710 /* : Int */;
val* var711 /* : nullable Object */;
long var712 /* : Int */;
val* var713 /* : nullable Object */;
val* var714 /* : RuntimeVariable */;
val* var_res715 /* var res: RuntimeVariable */;
static val* varonce716;
val* var717 /* : String */;
char* var718 /* : NativeString */;
long var719 /* : Int */;
val* var720 /* : FlatString */;
val* var721 /* : Array[Object] */;
long var722 /* : Int */;
val* var723 /* : NativeArray[Object] */;
val* var724 /* : String */;
val* var725 /* : RuntimeVariable */;
short int var726 /* : Bool */;
static val* varonce727;
val* var728 /* : String */;
char* var729 /* : NativeString */;
long var730 /* : Int */;
val* var731 /* : FlatString */;
short int var732 /* : Bool */;
static val* varonce733;
val* var734 /* : String */;
char* var735 /* : NativeString */;
long var736 /* : Int */;
val* var737 /* : FlatString */;
short int var738 /* : Bool */;
static val* varonce739;
val* var740 /* : String */;
char* var741 /* : NativeString */;
long var742 /* : Int */;
val* var743 /* : FlatString */;
val* var744 /* : nullable Object */;
static val* varonce745;
val* var746 /* : String */;
char* var747 /* : NativeString */;
long var748 /* : Int */;
val* var749 /* : FlatString */;
val* var750 /* : Array[Object] */;
long var751 /* : Int */;
val* var752 /* : NativeArray[Object] */;
val* var753 /* : String */;
short int var754 /* : Bool */;
static val* varonce755;
val* var756 /* : String */;
char* var757 /* : NativeString */;
long var758 /* : Int */;
val* var759 /* : FlatString */;
short int var760 /* : Bool */;
static val* varonce761;
val* var762 /* : String */;
char* var763 /* : NativeString */;
long var764 /* : Int */;
val* var765 /* : FlatString */;
val* var766 /* : nullable Object */;
val* var767 /* : Array[Object] */;
long var768 /* : Int */;
val* var769 /* : NativeArray[Object] */;
val* var770 /* : String */;
val* var771 /* : RuntimeVariable */;
short int var772 /* : Bool */;
static val* varonce773;
val* var774 /* : String */;
char* var775 /* : NativeString */;
long var776 /* : Int */;
val* var777 /* : FlatString */;
short int var778 /* : Bool */;
long var779 /* : Int */;
val* var780 /* : nullable Object */;
static val* varonce781;
val* var782 /* : String */;
char* var783 /* : NativeString */;
long var784 /* : Int */;
val* var785 /* : FlatString */;
long var786 /* : Int */;
val* var787 /* : nullable Object */;
val* var788 /* : Array[Object] */;
long var789 /* : Int */;
val* var790 /* : NativeArray[Object] */;
val* var791 /* : String */;
val* var792 /* : RuntimeVariable */;
short int var793 /* : Bool */;
static val* varonce794;
val* var795 /* : String */;
char* var796 /* : NativeString */;
long var797 /* : Int */;
val* var798 /* : FlatString */;
short int var799 /* : Bool */;
long var800 /* : Int */;
val* var801 /* : nullable Object */;
static val* varonce802;
val* var803 /* : String */;
char* var804 /* : NativeString */;
long var805 /* : Int */;
val* var806 /* : FlatString */;
long var807 /* : Int */;
val* var808 /* : nullable Object */;
val* var809 /* : Array[Object] */;
long var810 /* : Int */;
val* var811 /* : NativeArray[Object] */;
val* var812 /* : String */;
val* var813 /* : RuntimeVariable */;
short int var814 /* : Bool */;
static val* varonce815;
val* var816 /* : String */;
char* var817 /* : NativeString */;
long var818 /* : Int */;
val* var819 /* : FlatString */;
short int var820 /* : Bool */;
static val* varonce821;
val* var822 /* : String */;
char* var823 /* : NativeString */;
long var824 /* : Int */;
val* var825 /* : FlatString */;
long var826 /* : Int */;
val* var827 /* : nullable Object */;
val* var828 /* : Array[Object] */;
long var829 /* : Int */;
val* var830 /* : NativeArray[Object] */;
val* var831 /* : String */;
val* var832 /* : RuntimeVariable */;
short int var833 /* : Bool */;
static val* varonce834;
val* var835 /* : String */;
char* var836 /* : NativeString */;
long var837 /* : Int */;
val* var838 /* : FlatString */;
short int var839 /* : Bool */;
long var840 /* : Int */;
val* var841 /* : nullable Object */;
static val* varonce842;
val* var843 /* : String */;
char* var844 /* : NativeString */;
long var845 /* : Int */;
val* var846 /* : FlatString */;
val* var847 /* : Array[Object] */;
long var848 /* : Int */;
val* var849 /* : NativeArray[Object] */;
val* var850 /* : String */;
val* var851 /* : RuntimeVariable */;
short int var852 /* : Bool */;
static val* varonce853;
val* var854 /* : String */;
char* var855 /* : NativeString */;
long var856 /* : Int */;
val* var857 /* : FlatString */;
short int var858 /* : Bool */;
long var859 /* : Int */;
val* var860 /* : nullable Object */;
static val* varonce861;
val* var862 /* : String */;
char* var863 /* : NativeString */;
long var864 /* : Int */;
val* var865 /* : FlatString */;
val* var866 /* : Array[Object] */;
long var867 /* : Int */;
val* var868 /* : NativeArray[Object] */;
val* var869 /* : String */;
val* var870 /* : RuntimeVariable */;
short int var871 /* : Bool */;
static val* varonce872;
val* var873 /* : String */;
char* var874 /* : NativeString */;
long var875 /* : Int */;
val* var876 /* : FlatString */;
short int var877 /* : Bool */;
long var878 /* : Int */;
val* var879 /* : nullable Object */;
static val* varonce880;
val* var881 /* : String */;
char* var882 /* : NativeString */;
long var883 /* : Int */;
val* var884 /* : FlatString */;
long var885 /* : Int */;
val* var886 /* : nullable Object */;
val* var887 /* : Array[Object] */;
long var888 /* : Int */;
val* var889 /* : NativeArray[Object] */;
val* var890 /* : String */;
val* var891 /* : RuntimeVariable */;
short int var892 /* : Bool */;
static val* varonce893;
val* var894 /* : String */;
char* var895 /* : NativeString */;
long var896 /* : Int */;
val* var897 /* : FlatString */;
short int var898 /* : Bool */;
long var899 /* : Int */;
val* var900 /* : nullable Object */;
static val* varonce901;
val* var902 /* : String */;
char* var903 /* : NativeString */;
long var904 /* : Int */;
val* var905 /* : FlatString */;
long var906 /* : Int */;
val* var907 /* : nullable Object */;
val* var908 /* : Array[Object] */;
long var909 /* : Int */;
val* var910 /* : NativeArray[Object] */;
val* var911 /* : String */;
val* var912 /* : RuntimeVariable */;
short int var913 /* : Bool */;
static val* varonce914;
val* var915 /* : String */;
char* var916 /* : NativeString */;
long var917 /* : Int */;
val* var918 /* : FlatString */;
short int var919 /* : Bool */;
long var920 /* : Int */;
val* var921 /* : nullable Object */;
long var922 /* : Int */;
val* var923 /* : nullable Object */;
val* var924 /* : RuntimeVariable */;
short int var925 /* : Bool */;
static val* varonce926;
val* var927 /* : String */;
char* var928 /* : NativeString */;
long var929 /* : Int */;
val* var930 /* : FlatString */;
short int var931 /* : Bool */;
long var932 /* : Int */;
val* var933 /* : nullable Object */;
long var934 /* : Int */;
val* var935 /* : nullable Object */;
val* var936 /* : RuntimeVariable */;
val* var_res937 /* var res: RuntimeVariable */;
static val* varonce938;
val* var939 /* : String */;
char* var940 /* : NativeString */;
long var941 /* : Int */;
val* var942 /* : FlatString */;
val* var943 /* : Array[Object] */;
long var944 /* : Int */;
val* var945 /* : NativeArray[Object] */;
val* var946 /* : String */;
val* var947 /* : RuntimeVariable */;
short int var948 /* : Bool */;
static val* varonce949;
val* var950 /* : String */;
char* var951 /* : NativeString */;
long var952 /* : Int */;
val* var953 /* : FlatString */;
short int var954 /* : Bool */;
long var955 /* : Int */;
val* var956 /* : nullable Object */;
static val* varonce957;
val* var958 /* : String */;
char* var959 /* : NativeString */;
long var960 /* : Int */;
val* var961 /* : FlatString */;
long var962 /* : Int */;
val* var963 /* : nullable Object */;
val* var964 /* : Array[Object] */;
long var965 /* : Int */;
val* var966 /* : NativeArray[Object] */;
val* var967 /* : String */;
val* var968 /* : RuntimeVariable */;
short int var969 /* : Bool */;
static val* varonce970;
val* var971 /* : String */;
char* var972 /* : NativeString */;
long var973 /* : Int */;
val* var974 /* : FlatString */;
short int var975 /* : Bool */;
long var976 /* : Int */;
val* var977 /* : nullable Object */;
static val* varonce978;
val* var979 /* : String */;
char* var980 /* : NativeString */;
long var981 /* : Int */;
val* var982 /* : FlatString */;
long var983 /* : Int */;
val* var984 /* : nullable Object */;
val* var985 /* : Array[Object] */;
long var986 /* : Int */;
val* var987 /* : NativeArray[Object] */;
val* var988 /* : String */;
val* var989 /* : RuntimeVariable */;
short int var990 /* : Bool */;
static val* varonce991;
val* var992 /* : String */;
char* var993 /* : NativeString */;
long var994 /* : Int */;
val* var995 /* : FlatString */;
short int var996 /* : Bool */;
long var997 /* : Int */;
val* var998 /* : nullable Object */;
static val* varonce999;
val* var1000 /* : String */;
char* var1001 /* : NativeString */;
long var1002 /* : Int */;
val* var1003 /* : FlatString */;
long var1004 /* : Int */;
val* var1005 /* : nullable Object */;
val* var1006 /* : Array[Object] */;
long var1007 /* : Int */;
val* var1008 /* : NativeArray[Object] */;
val* var1009 /* : String */;
val* var1010 /* : RuntimeVariable */;
short int var1011 /* : Bool */;
static val* varonce1012;
val* var1013 /* : String */;
char* var1014 /* : NativeString */;
long var1015 /* : Int */;
val* var1016 /* : FlatString */;
short int var1017 /* : Bool */;
long var1018 /* : Int */;
val* var1019 /* : nullable Object */;
static val* varonce1020;
val* var1021 /* : String */;
char* var1022 /* : NativeString */;
long var1023 /* : Int */;
val* var1024 /* : FlatString */;
long var1025 /* : Int */;
val* var1026 /* : nullable Object */;
val* var1027 /* : Array[Object] */;
long var1028 /* : Int */;
val* var1029 /* : NativeArray[Object] */;
val* var1030 /* : String */;
val* var1031 /* : RuntimeVariable */;
short int var1032 /* : Bool */;
static val* varonce1033;
val* var1034 /* : String */;
char* var1035 /* : NativeString */;
long var1036 /* : Int */;
val* var1037 /* : FlatString */;
short int var1038 /* : Bool */;
static val* varonce1039;
val* var1040 /* : String */;
char* var1041 /* : NativeString */;
long var1042 /* : Int */;
val* var1043 /* : FlatString */;
long var1044 /* : Int */;
val* var1045 /* : nullable Object */;
val* var1046 /* : Array[Object] */;
long var1047 /* : Int */;
val* var1048 /* : NativeArray[Object] */;
val* var1049 /* : String */;
val* var1050 /* : RuntimeVariable */;
short int var1051 /* : Bool */;
static val* varonce1052;
val* var1053 /* : String */;
char* var1054 /* : NativeString */;
long var1055 /* : Int */;
val* var1056 /* : FlatString */;
short int var1057 /* : Bool */;
static val* varonce1058;
val* var1059 /* : String */;
char* var1060 /* : NativeString */;
long var1061 /* : Int */;
val* var1062 /* : FlatString */;
short int var1063 /* : Bool */;
long var1064 /* : Int */;
val* var1065 /* : nullable Object */;
static val* varonce1066;
val* var1067 /* : String */;
char* var1068 /* : NativeString */;
long var1069 /* : Int */;
val* var1070 /* : FlatString */;
long var1071 /* : Int */;
val* var1072 /* : nullable Object */;
static val* varonce1073;
val* var1074 /* : String */;
char* var1075 /* : NativeString */;
long var1076 /* : Int */;
val* var1077 /* : FlatString */;
val* var1078 /* : Array[Object] */;
long var1079 /* : Int */;
val* var1080 /* : NativeArray[Object] */;
val* var1081 /* : String */;
val* var1082 /* : RuntimeVariable */;
short int var1083 /* : Bool */;
static val* varonce1084;
val* var1085 /* : String */;
char* var1086 /* : NativeString */;
long var1087 /* : Int */;
val* var1088 /* : FlatString */;
short int var1089 /* : Bool */;
long var1090 /* : Int */;
val* var1091 /* : nullable Object */;
static val* varonce1092;
val* var1093 /* : String */;
char* var1094 /* : NativeString */;
long var1095 /* : Int */;
val* var1096 /* : FlatString */;
long var1097 /* : Int */;
val* var1098 /* : nullable Object */;
static val* varonce1099;
val* var1100 /* : String */;
char* var1101 /* : NativeString */;
long var1102 /* : Int */;
val* var1103 /* : FlatString */;
long var1104 /* : Int */;
val* var1105 /* : nullable Object */;
static val* varonce1106;
val* var1107 /* : String */;
char* var1108 /* : NativeString */;
long var1109 /* : Int */;
val* var1110 /* : FlatString */;
val* var1111 /* : Array[Object] */;
long var1112 /* : Int */;
val* var1113 /* : NativeArray[Object] */;
val* var1114 /* : String */;
short int var1115 /* : Bool */;
static val* varonce1116;
val* var1117 /* : String */;
char* var1118 /* : NativeString */;
long var1119 /* : Int */;
val* var1120 /* : FlatString */;
short int var1121 /* : Bool */;
static val* varonce1122;
val* var1123 /* : String */;
char* var1124 /* : NativeString */;
long var1125 /* : Int */;
val* var1126 /* : FlatString */;
long var1127 /* : Int */;
val* var1128 /* : nullable Object */;
static val* varonce1129;
val* var1130 /* : String */;
char* var1131 /* : NativeString */;
long var1132 /* : Int */;
val* var1133 /* : FlatString */;
long var1134 /* : Int */;
val* var1135 /* : nullable Object */;
static val* varonce1136;
val* var1137 /* : String */;
char* var1138 /* : NativeString */;
long var1139 /* : Int */;
val* var1140 /* : FlatString */;
long var1141 /* : Int */;
val* var1142 /* : nullable Object */;
static val* varonce1143;
val* var1144 /* : String */;
char* var1145 /* : NativeString */;
long var1146 /* : Int */;
val* var1147 /* : FlatString */;
long var1148 /* : Int */;
val* var1149 /* : nullable Object */;
static val* varonce1150;
val* var1151 /* : String */;
char* var1152 /* : NativeString */;
long var1153 /* : Int */;
val* var1154 /* : FlatString */;
long var1155 /* : Int */;
val* var1156 /* : nullable Object */;
static val* varonce1157;
val* var1158 /* : String */;
char* var1159 /* : NativeString */;
long var1160 /* : Int */;
val* var1161 /* : FlatString */;
val* var1162 /* : Array[Object] */;
long var1163 /* : Int */;
val* var1164 /* : NativeArray[Object] */;
val* var1165 /* : String */;
short int var1166 /* : Bool */;
static val* varonce1167;
val* var1168 /* : String */;
char* var1169 /* : NativeString */;
long var1170 /* : Int */;
val* var1171 /* : FlatString */;
short int var1172 /* : Bool */;
static val* varonce1173;
val* var1174 /* : String */;
char* var1175 /* : NativeString */;
long var1176 /* : Int */;
val* var1177 /* : FlatString */;
long var1178 /* : Int */;
val* var1179 /* : nullable Object */;
static val* varonce1180;
val* var1181 /* : String */;
char* var1182 /* : NativeString */;
long var1183 /* : Int */;
val* var1184 /* : FlatString */;
val* var1185 /* : Array[Object] */;
long var1186 /* : Int */;
val* var1187 /* : NativeArray[Object] */;
val* var1188 /* : String */;
val* var1189 /* : RuntimeVariable */;
short int var1190 /* : Bool */;
static val* varonce1191;
val* var1192 /* : String */;
char* var1193 /* : NativeString */;
long var1194 /* : Int */;
val* var1195 /* : FlatString */;
short int var1196 /* : Bool */;
static val* varonce1197;
val* var1198 /* : String */;
char* var1199 /* : NativeString */;
long var1200 /* : Int */;
val* var1201 /* : FlatString */;
long var1202 /* : Int */;
val* var1203 /* : nullable Object */;
static val* varonce1204;
val* var1205 /* : String */;
char* var1206 /* : NativeString */;
long var1207 /* : Int */;
val* var1208 /* : FlatString */;
val* var1209 /* : Array[Object] */;
long var1210 /* : Int */;
val* var1211 /* : NativeArray[Object] */;
val* var1212 /* : String */;
val* var1213 /* : RuntimeVariable */;
short int var1214 /* : Bool */;
static val* varonce1215;
val* var1216 /* : String */;
char* var1217 /* : NativeString */;
long var1218 /* : Int */;
val* var1219 /* : FlatString */;
short int var1220 /* : Bool */;
short int var1221 /* : Bool */;
static val* varonce1222;
val* var1223 /* : String */;
char* var1224 /* : NativeString */;
long var1225 /* : Int */;
val* var1226 /* : FlatString */;
short int var1227 /* : Bool */;
static val* varonce1228;
val* var1229 /* : String */;
char* var1230 /* : NativeString */;
long var1231 /* : Int */;
val* var1232 /* : FlatString */;
long var1233 /* : Int */;
val* var1234 /* : nullable Object */;
static val* varonce1235;
val* var1236 /* : String */;
char* var1237 /* : NativeString */;
long var1238 /* : Int */;
val* var1239 /* : FlatString */;
val* var1240 /* : Array[Object] */;
long var1241 /* : Int */;
val* var1242 /* : NativeArray[Object] */;
val* var1243 /* : String */;
short int var1244 /* : Bool */;
static val* varonce1245;
val* var1246 /* : String */;
char* var1247 /* : NativeString */;
long var1248 /* : Int */;
val* var1249 /* : FlatString */;
short int var1250 /* : Bool */;
static val* varonce1251;
val* var1252 /* : String */;
char* var1253 /* : NativeString */;
long var1254 /* : Int */;
val* var1255 /* : FlatString */;
val* var1256 /* : RuntimeVariable */;
short int var1257 /* : Bool */;
static val* varonce1258;
val* var1259 /* : String */;
char* var1260 /* : NativeString */;
long var1261 /* : Int */;
val* var1262 /* : FlatString */;
short int var1263 /* : Bool */;
static val* varonce1264;
val* var1265 /* : String */;
char* var1266 /* : NativeString */;
long var1267 /* : Int */;
val* var1268 /* : FlatString */;
long var1269 /* : Int */;
val* var1270 /* : nullable Object */;
static val* varonce1271;
val* var1272 /* : String */;
char* var1273 /* : NativeString */;
long var1274 /* : Int */;
val* var1275 /* : FlatString */;
val* var1276 /* : Array[Object] */;
long var1277 /* : Int */;
val* var1278 /* : NativeArray[Object] */;
val* var1279 /* : String */;
val* var1280 /* : RuntimeVariable */;
short int var1281 /* : Bool */;
static val* varonce1282;
val* var1283 /* : String */;
char* var1284 /* : NativeString */;
long var1285 /* : Int */;
val* var1286 /* : FlatString */;
short int var1287 /* : Bool */;
short int var1288 /* : Bool */;
static val* varonce1289;
val* var1290 /* : String */;
char* var1291 /* : NativeString */;
long var1292 /* : Int */;
val* var1293 /* : FlatString */;
short int var1294 /* : Bool */;
static val* varonce1295;
val* var1296 /* : String */;
char* var1297 /* : NativeString */;
long var1298 /* : Int */;
val* var1299 /* : FlatString */;
val* var1300 /* : nullable Object */;
val* var1301 /* : Array[Object] */;
long var1302 /* : Int */;
val* var1303 /* : NativeArray[Object] */;
val* var1304 /* : String */;
val* var1305 /* : RuntimeVariable */;
short int var1306 /* : Bool */;
static val* varonce1307;
val* var1308 /* : String */;
char* var1309 /* : NativeString */;
long var1310 /* : Int */;
val* var1311 /* : FlatString */;
short int var1312 /* : Bool */;
long var1313 /* : Int */;
val* var1314 /* : nullable Object */;
long var1315 /* : Int */;
val* var1316 /* : nullable Object */;
val* var1317 /* : RuntimeVariable */;
short int var1318 /* : Bool */;
static val* varonce1319;
val* var1320 /* : String */;
char* var1321 /* : NativeString */;
long var1322 /* : Int */;
val* var1323 /* : FlatString */;
short int var1324 /* : Bool */;
long var1325 /* : Int */;
val* var1326 /* : nullable Object */;
long var1327 /* : Int */;
val* var1328 /* : nullable Object */;
val* var1329 /* : RuntimeVariable */;
short int var1330 /* : Bool */;
static val* varonce1331;
val* var1332 /* : String */;
char* var1333 /* : NativeString */;
long var1334 /* : Int */;
val* var1335 /* : FlatString */;
short int var1336 /* : Bool */;
val* var1337 /* : nullable Object */;
val* var1338 /* : String */;
val* var_nat /* var nat: String */;
static val* varonce1339;
val* var1340 /* : String */;
char* var1341 /* : NativeString */;
long var1342 /* : Int */;
val* var1343 /* : FlatString */;
static val* varonce1344;
val* var1345 /* : String */;
char* var1346 /* : NativeString */;
long var1347 /* : Int */;
val* var1348 /* : FlatString */;
val* var1349 /* : Array[Object] */;
long var1350 /* : Int */;
val* var1351 /* : NativeArray[Object] */;
val* var1352 /* : String */;
short int var1353 /* : Bool */;
static val* varonce1354;
val* var1355 /* : String */;
char* var1356 /* : NativeString */;
long var1357 /* : Int */;
val* var1358 /* : FlatString */;
short int var1359 /* : Bool */;
val* var1360 /* : nullable Object */;
val* var1361 /* : String */;
val* var_nat1362 /* var nat: String */;
static val* varonce1363;
val* var1364 /* : String */;
char* var1365 /* : NativeString */;
long var1366 /* : Int */;
val* var1367 /* : FlatString */;
val* var1368 /* : Array[Object] */;
long var1369 /* : Int */;
val* var1370 /* : NativeArray[Object] */;
val* var1371 /* : String */;
val* var1372 /* : RuntimeVariable */;
short int var1373 /* : Bool */;
static val* varonce1374;
val* var1375 /* : String */;
char* var1376 /* : NativeString */;
long var1377 /* : Int */;
val* var1378 /* : FlatString */;
short int var1379 /* : Bool */;
static val* varonce1380;
val* var1381 /* : String */;
char* var1382 /* : NativeString */;
long var1383 /* : Int */;
val* var1384 /* : FlatString */;
short int var1385 /* : Bool */;
static val* varonce1386;
val* var1387 /* : String */;
char* var1388 /* : NativeString */;
long var1389 /* : Int */;
val* var1390 /* : FlatString */;
short int var1391 /* : Bool */;
static val* varonce1392;
val* var1393 /* : String */;
char* var1394 /* : NativeString */;
long var1395 /* : Int */;
val* var1396 /* : FlatString */;
val* var1397 /* : RuntimeVariable */;
short int var1398 /* : Bool */;
static val* varonce1399;
val* var1400 /* : String */;
char* var1401 /* : NativeString */;
long var1402 /* : Int */;
val* var1403 /* : FlatString */;
short int var1404 /* : Bool */;
static val* varonce1405;
val* var1406 /* : String */;
char* var1407 /* : NativeString */;
long var1408 /* : Int */;
val* var1409 /* : FlatString */;
long var1410 /* : Int */;
val* var1411 /* : nullable Object */;
static val* varonce1412;
val* var1413 /* : String */;
char* var1414 /* : NativeString */;
long var1415 /* : Int */;
val* var1416 /* : FlatString */;
val* var1417 /* : Array[Object] */;
long var1418 /* : Int */;
val* var1419 /* : NativeArray[Object] */;
val* var1420 /* : String */;
val* var1421 /* : RuntimeVariable */;
short int var1422 /* : Bool */;
short int var1423 /* : Bool */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var3 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1963);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var16) on <var16:nullable MSignature> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1595);
show_backtrace(1);
}
var21 = var16->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var16:nullable MSignature> */
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
var26 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
var28 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var29 = nit___nit__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var28);
}
var_ret = var29;
} else {
}
if (varonce) {
var31 = varonce;
} else {
var32 = "==";
var33 = 2;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce = var31;
}
{
{ /* Inline kernel#Object#!= (var_pname,var31) on <var_pname:String> */
var_other = var31;
{
var37 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var_other) /* == on <var_pname:String>*/;
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_ = var35;
if (var35){
if (varonce39) {
var40 = varonce39;
} else {
var41 = "!=";
var42 = 2;
var43 = standard___standard__NativeString___to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
{
{ /* Inline kernel#Object#!= (var_pname,var40) on <var_pname:String> */
var_other = var40;
{
var46 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var_other) /* == on <var_pname:String>*/;
}
var47 = !var46;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var30 = var44;
} else {
var30 = var_;
}
if (var30){
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Int";
var51 = 3;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
var53 = ((short int (*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var49) /* == on <var_cname:String>*/;
}
if (var53){
if (varonce54) {
var55 = varonce54;
} else {
var56 = "output";
var57 = 6;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
var59 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var55) /* == on <var_pname:String>*/;
}
if (var59){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "printf(\"%ld\\n\", ";
var63 = 16;
var64 = standard___standard__NativeString___to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
var65 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = ");";
var69 = 2;
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 3;
var73 = NEW_standard__NativeArray(var72, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var73)->values[0] = (val*) var61;
((struct instance_standard__NativeArray*)var73)->values[1] = (val*) var65;
((struct instance_standard__NativeArray*)var73)->values[2] = (val*) var67;
{
((void (*)(val* self, val* p0, long p1))(var71->class->vft[COLOR_standard__array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
}
{
var74 = ((val* (*)(val* self))(var71->class->vft[COLOR_standard__string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var74); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var75 = 1;
var = var75;
goto RET_LABEL;
} else {
if (varonce76) {
var77 = varonce76;
} else {
var78 = "object_id";
var79 = 9;
var80 = standard___standard__NativeString___to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
var81 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var77) /* == on <var_pname:String>*/;
}
if (var81){
{
var82 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var82); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var83 = 1;
var = var83;
goto RET_LABEL;
} else {
if (varonce84) {
var85 = varonce84;
} else {
var86 = "+";
var87 = 1;
var88 = standard___standard__NativeString___to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
{
var89 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var85) /* == on <var_pname:String>*/;
}
if (var89){
var90 = 0;
{
var91 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var90);
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = " + ";
var95 = 3;
var96 = standard___standard__NativeString___to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = 1;
{
var98 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var97);
}
var99 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var99 = array_instance Array[Object] */
var100 = 3;
var101 = NEW_standard__NativeArray(var100, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var101)->values[0] = (val*) var91;
((struct instance_standard__NativeArray*)var101)->values[1] = (val*) var93;
((struct instance_standard__NativeArray*)var101)->values[2] = (val*) var98;
{
((void (*)(val* self, val* p0, long p1))(var99->class->vft[COLOR_standard__array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[Object]>*/;
}
}
{
var102 = ((val* (*)(val* self))(var99->class->vft[COLOR_standard__string__Object__to_s]))(var99) /* to_s on <var99:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1979);
show_backtrace(1);
}
{
var103 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var102, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var103); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var104 = 1;
var = var104;
goto RET_LABEL;
} else {
if (varonce105) {
var106 = varonce105;
} else {
var107 = "-";
var108 = 1;
var109 = standard___standard__NativeString___to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
{
var110 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var106) /* == on <var_pname:String>*/;
}
if (var110){
var111 = 0;
{
var112 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var111);
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = " - ";
var116 = 3;
var117 = standard___standard__NativeString___to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = 1;
{
var119 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var118);
}
var120 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var120 = array_instance Array[Object] */
var121 = 3;
var122 = NEW_standard__NativeArray(var121, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var122)->values[0] = (val*) var112;
((struct instance_standard__NativeArray*)var122)->values[1] = (val*) var114;
((struct instance_standard__NativeArray*)var122)->values[2] = (val*) var119;
{
((void (*)(val* self, val* p0, long p1))(var120->class->vft[COLOR_standard__array__Array__with_native]))(var120, var122, var121) /* with_native on <var120:Array[Object]>*/;
}
}
{
var123 = ((val* (*)(val* self))(var120->class->vft[COLOR_standard__string__Object__to_s]))(var120) /* to_s on <var120:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1982);
show_backtrace(1);
}
{
var124 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var123, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var124); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var125 = 1;
var = var125;
goto RET_LABEL;
} else {
if (varonce126) {
var127 = varonce126;
} else {
var128 = "unary -";
var129 = 7;
var130 = standard___standard__NativeString___to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
{
var131 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var127) /* == on <var_pname:String>*/;
}
if (var131){
if (varonce132) {
var133 = varonce132;
} else {
var134 = "-";
var135 = 1;
var136 = standard___standard__NativeString___to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = 0;
{
var138 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var137);
}
var139 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var139 = array_instance Array[Object] */
var140 = 2;
var141 = NEW_standard__NativeArray(var140, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var141)->values[0] = (val*) var133;
((struct instance_standard__NativeArray*)var141)->values[1] = (val*) var138;
{
((void (*)(val* self, val* p0, long p1))(var139->class->vft[COLOR_standard__array__Array__with_native]))(var139, var141, var140) /* with_native on <var139:Array[Object]>*/;
}
}
{
var142 = ((val* (*)(val* self))(var139->class->vft[COLOR_standard__string__Object__to_s]))(var139) /* to_s on <var139:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1985);
show_backtrace(1);
}
{
var143 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var142, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var144 = 1;
var = var144;
goto RET_LABEL;
} else {
if (varonce145) {
var146 = varonce145;
} else {
var147 = "*";
var148 = 1;
var149 = standard___standard__NativeString___to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
{
var150 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var146) /* == on <var_pname:String>*/;
}
if (var150){
var151 = 0;
{
var152 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var151);
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = " * ";
var156 = 3;
var157 = standard___standard__NativeString___to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
var158 = 1;
{
var159 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var158);
}
var160 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var160 = array_instance Array[Object] */
var161 = 3;
var162 = NEW_standard__NativeArray(var161, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var162)->values[0] = (val*) var152;
((struct instance_standard__NativeArray*)var162)->values[1] = (val*) var154;
((struct instance_standard__NativeArray*)var162)->values[2] = (val*) var159;
{
((void (*)(val* self, val* p0, long p1))(var160->class->vft[COLOR_standard__array__Array__with_native]))(var160, var162, var161) /* with_native on <var160:Array[Object]>*/;
}
}
{
var163 = ((val* (*)(val* self))(var160->class->vft[COLOR_standard__string__Object__to_s]))(var160) /* to_s on <var160:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1988);
show_backtrace(1);
}
{
var164 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var163, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var164); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var165 = 1;
var = var165;
goto RET_LABEL;
} else {
if (varonce166) {
var167 = varonce166;
} else {
var168 = "/";
var169 = 1;
var170 = standard___standard__NativeString___to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
{
var171 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var167) /* == on <var_pname:String>*/;
}
if (var171){
var172 = 0;
{
var173 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var172);
}
if (varonce174) {
var175 = varonce174;
} else {
var176 = " / ";
var177 = 3;
var178 = standard___standard__NativeString___to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
var179 = 1;
{
var180 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var179);
}
var181 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var181 = array_instance Array[Object] */
var182 = 3;
var183 = NEW_standard__NativeArray(var182, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var183)->values[0] = (val*) var173;
((struct instance_standard__NativeArray*)var183)->values[1] = (val*) var175;
((struct instance_standard__NativeArray*)var183)->values[2] = (val*) var180;
{
((void (*)(val* self, val* p0, long p1))(var181->class->vft[COLOR_standard__array__Array__with_native]))(var181, var183, var182) /* with_native on <var181:Array[Object]>*/;
}
}
{
var184 = ((val* (*)(val* self))(var181->class->vft[COLOR_standard__string__Object__to_s]))(var181) /* to_s on <var181:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1991);
show_backtrace(1);
}
{
var185 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var184, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var185); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var186 = 1;
var = var186;
goto RET_LABEL;
} else {
if (varonce187) {
var188 = varonce187;
} else {
var189 = "%";
var190 = 1;
var191 = standard___standard__NativeString___to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
{
var192 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var188) /* == on <var_pname:String>*/;
}
if (var192){
var193 = 0;
{
var194 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var193);
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = " % ";
var198 = 3;
var199 = standard___standard__NativeString___to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
var200 = 1;
{
var201 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var200);
}
var202 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var202 = array_instance Array[Object] */
var203 = 3;
var204 = NEW_standard__NativeArray(var203, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var204)->values[0] = (val*) var194;
((struct instance_standard__NativeArray*)var204)->values[1] = (val*) var196;
((struct instance_standard__NativeArray*)var204)->values[2] = (val*) var201;
{
((void (*)(val* self, val* p0, long p1))(var202->class->vft[COLOR_standard__array__Array__with_native]))(var202, var204, var203) /* with_native on <var202:Array[Object]>*/;
}
}
{
var205 = ((val* (*)(val* self))(var202->class->vft[COLOR_standard__string__Object__to_s]))(var202) /* to_s on <var202:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1994);
show_backtrace(1);
}
{
var206 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var205, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var206); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var207 = 1;
var = var207;
goto RET_LABEL;
} else {
if (varonce208) {
var209 = varonce208;
} else {
var210 = "lshift";
var211 = 6;
var212 = standard___standard__NativeString___to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
{
var213 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var209) /* == on <var_pname:String>*/;
}
if (var213){
var214 = 0;
{
var215 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var214);
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = " << ";
var219 = 4;
var220 = standard___standard__NativeString___to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
var221 = 1;
{
var222 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var221);
}
var223 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var223 = array_instance Array[Object] */
var224 = 3;
var225 = NEW_standard__NativeArray(var224, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var225)->values[0] = (val*) var215;
((struct instance_standard__NativeArray*)var225)->values[1] = (val*) var217;
((struct instance_standard__NativeArray*)var225)->values[2] = (val*) var222;
{
((void (*)(val* self, val* p0, long p1))(var223->class->vft[COLOR_standard__array__Array__with_native]))(var223, var225, var224) /* with_native on <var223:Array[Object]>*/;
}
}
{
var226 = ((val* (*)(val* self))(var223->class->vft[COLOR_standard__string__Object__to_s]))(var223) /* to_s on <var223:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1997);
show_backtrace(1);
}
{
var227 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var226, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var227); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var228 = 1;
var = var228;
goto RET_LABEL;
} else {
if (varonce229) {
var230 = varonce229;
} else {
var231 = "rshift";
var232 = 6;
var233 = standard___standard__NativeString___to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
{
var234 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var230) /* == on <var_pname:String>*/;
}
if (var234){
var235 = 0;
{
var236 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var235);
}
if (varonce237) {
var238 = varonce237;
} else {
var239 = " >> ";
var240 = 4;
var241 = standard___standard__NativeString___to_s_with_length(var239, var240);
var238 = var241;
varonce237 = var238;
}
var242 = 1;
{
var243 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var242);
}
var244 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var244 = array_instance Array[Object] */
var245 = 3;
var246 = NEW_standard__NativeArray(var245, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var246)->values[0] = (val*) var236;
((struct instance_standard__NativeArray*)var246)->values[1] = (val*) var238;
((struct instance_standard__NativeArray*)var246)->values[2] = (val*) var243;
{
((void (*)(val* self, val* p0, long p1))(var244->class->vft[COLOR_standard__array__Array__with_native]))(var244, var246, var245) /* with_native on <var244:Array[Object]>*/;
}
}
{
var247 = ((val* (*)(val* self))(var244->class->vft[COLOR_standard__string__Object__to_s]))(var244) /* to_s on <var244:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2000);
show_backtrace(1);
}
{
var248 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var247, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var248); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var249 = 1;
var = var249;
goto RET_LABEL;
} else {
if (varonce250) {
var251 = varonce250;
} else {
var252 = "==";
var253 = 2;
var254 = standard___standard__NativeString___to_s_with_length(var252, var253);
var251 = var254;
varonce250 = var251;
}
{
var255 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var251) /* == on <var_pname:String>*/;
}
if (var255){
var256 = 0;
{
var257 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var256);
}
var258 = 1;
{
var259 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var258);
}
{
var260 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var257, var259);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var260); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var261 = 1;
var = var261;
goto RET_LABEL;
} else {
if (varonce262) {
var263 = varonce262;
} else {
var264 = "!=";
var265 = 2;
var266 = standard___standard__NativeString___to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
{
var267 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var263) /* == on <var_pname:String>*/;
}
if (var267){
var268 = 0;
{
var269 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var268);
}
var270 = 1;
{
var271 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var270);
}
{
var272 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var269, var271);
}
var_res = var272;
if (varonce273) {
var274 = varonce273;
} else {
var275 = "!";
var276 = 1;
var277 = standard___standard__NativeString___to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
var278 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var278 = array_instance Array[Object] */
var279 = 2;
var280 = NEW_standard__NativeArray(var279, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var280)->values[0] = (val*) var274;
((struct instance_standard__NativeArray*)var280)->values[1] = (val*) var_res;
{
((void (*)(val* self, val* p0, long p1))(var278->class->vft[COLOR_standard__array__Array__with_native]))(var278, var280, var279) /* with_native on <var278:Array[Object]>*/;
}
}
{
var281 = ((val* (*)(val* self))(var278->class->vft[COLOR_standard__string__Object__to_s]))(var278) /* to_s on <var278:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2007);
show_backtrace(1);
}
{
var282 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var281, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var282); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var283 = 1;
var = var283;
goto RET_LABEL;
} else {
if (varonce284) {
var285 = varonce284;
} else {
var286 = "<";
var287 = 1;
var288 = standard___standard__NativeString___to_s_with_length(var286, var287);
var285 = var288;
varonce284 = var285;
}
{
var289 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var285) /* == on <var_pname:String>*/;
}
if (var289){
var290 = 0;
{
var291 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var290);
}
if (varonce292) {
var293 = varonce292;
} else {
var294 = " < ";
var295 = 3;
var296 = standard___standard__NativeString___to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
var297 = 1;
{
var298 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var297);
}
var299 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var299 = array_instance Array[Object] */
var300 = 3;
var301 = NEW_standard__NativeArray(var300, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var301)->values[0] = (val*) var291;
((struct instance_standard__NativeArray*)var301)->values[1] = (val*) var293;
((struct instance_standard__NativeArray*)var301)->values[2] = (val*) var298;
{
((void (*)(val* self, val* p0, long p1))(var299->class->vft[COLOR_standard__array__Array__with_native]))(var299, var301, var300) /* with_native on <var299:Array[Object]>*/;
}
}
{
var302 = ((val* (*)(val* self))(var299->class->vft[COLOR_standard__string__Object__to_s]))(var299) /* to_s on <var299:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2010);
show_backtrace(1);
}
{
var303 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var302, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var303); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var304 = 1;
var = var304;
goto RET_LABEL;
} else {
if (varonce305) {
var306 = varonce305;
} else {
var307 = ">";
var308 = 1;
var309 = standard___standard__NativeString___to_s_with_length(var307, var308);
var306 = var309;
varonce305 = var306;
}
{
var310 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var306) /* == on <var_pname:String>*/;
}
if (var310){
var311 = 0;
{
var312 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var311);
}
if (varonce313) {
var314 = varonce313;
} else {
var315 = " > ";
var316 = 3;
var317 = standard___standard__NativeString___to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
var318 = 1;
{
var319 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var318);
}
var320 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var320 = array_instance Array[Object] */
var321 = 3;
var322 = NEW_standard__NativeArray(var321, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var322)->values[0] = (val*) var312;
((struct instance_standard__NativeArray*)var322)->values[1] = (val*) var314;
((struct instance_standard__NativeArray*)var322)->values[2] = (val*) var319;
{
((void (*)(val* self, val* p0, long p1))(var320->class->vft[COLOR_standard__array__Array__with_native]))(var320, var322, var321) /* with_native on <var320:Array[Object]>*/;
}
}
{
var323 = ((val* (*)(val* self))(var320->class->vft[COLOR_standard__string__Object__to_s]))(var320) /* to_s on <var320:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2013);
show_backtrace(1);
}
{
var324 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var323, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var324); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var325 = 1;
var = var325;
goto RET_LABEL;
} else {
if (varonce326) {
var327 = varonce326;
} else {
var328 = "<=";
var329 = 2;
var330 = standard___standard__NativeString___to_s_with_length(var328, var329);
var327 = var330;
varonce326 = var327;
}
{
var331 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var327) /* == on <var_pname:String>*/;
}
if (var331){
var332 = 0;
{
var333 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var332);
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = " <= ";
var337 = 4;
var338 = standard___standard__NativeString___to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
var339 = 1;
{
var340 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var339);
}
var341 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var341 = array_instance Array[Object] */
var342 = 3;
var343 = NEW_standard__NativeArray(var342, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var343)->values[0] = (val*) var333;
((struct instance_standard__NativeArray*)var343)->values[1] = (val*) var335;
((struct instance_standard__NativeArray*)var343)->values[2] = (val*) var340;
{
((void (*)(val* self, val* p0, long p1))(var341->class->vft[COLOR_standard__array__Array__with_native]))(var341, var343, var342) /* with_native on <var341:Array[Object]>*/;
}
}
{
var344 = ((val* (*)(val* self))(var341->class->vft[COLOR_standard__string__Object__to_s]))(var341) /* to_s on <var341:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2016);
show_backtrace(1);
}
{
var345 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var344, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var345); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var346 = 1;
var = var346;
goto RET_LABEL;
} else {
if (varonce347) {
var348 = varonce347;
} else {
var349 = ">=";
var350 = 2;
var351 = standard___standard__NativeString___to_s_with_length(var349, var350);
var348 = var351;
varonce347 = var348;
}
{
var352 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var348) /* == on <var_pname:String>*/;
}
if (var352){
var353 = 0;
{
var354 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var353);
}
if (varonce355) {
var356 = varonce355;
} else {
var357 = " >= ";
var358 = 4;
var359 = standard___standard__NativeString___to_s_with_length(var357, var358);
var356 = var359;
varonce355 = var356;
}
var360 = 1;
{
var361 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var360);
}
var362 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var362 = array_instance Array[Object] */
var363 = 3;
var364 = NEW_standard__NativeArray(var363, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var364)->values[0] = (val*) var354;
((struct instance_standard__NativeArray*)var364)->values[1] = (val*) var356;
((struct instance_standard__NativeArray*)var364)->values[2] = (val*) var361;
{
((void (*)(val* self, val* p0, long p1))(var362->class->vft[COLOR_standard__array__Array__with_native]))(var362, var364, var363) /* with_native on <var362:Array[Object]>*/;
}
}
{
var365 = ((val* (*)(val* self))(var362->class->vft[COLOR_standard__string__Object__to_s]))(var362) /* to_s on <var362:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2019);
show_backtrace(1);
}
{
var366 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var365, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var366); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var367 = 1;
var = var367;
goto RET_LABEL;
} else {
if (varonce368) {
var369 = varonce368;
} else {
var370 = "to_f";
var371 = 4;
var372 = standard___standard__NativeString___to_s_with_length(var370, var371);
var369 = var372;
varonce368 = var369;
}
{
var373 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var369) /* == on <var_pname:String>*/;
}
if (var373){
if (varonce374) {
var375 = varonce374;
} else {
var376 = "(double)";
var377 = 8;
var378 = standard___standard__NativeString___to_s_with_length(var376, var377);
var375 = var378;
varonce374 = var375;
}
var379 = 0;
{
var380 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var379);
}
var381 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var381 = array_instance Array[Object] */
var382 = 2;
var383 = NEW_standard__NativeArray(var382, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var383)->values[0] = (val*) var375;
((struct instance_standard__NativeArray*)var383)->values[1] = (val*) var380;
{
((void (*)(val* self, val* p0, long p1))(var381->class->vft[COLOR_standard__array__Array__with_native]))(var381, var383, var382) /* with_native on <var381:Array[Object]>*/;
}
}
{
var384 = ((val* (*)(val* self))(var381->class->vft[COLOR_standard__string__Object__to_s]))(var381) /* to_s on <var381:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2022);
show_backtrace(1);
}
{
var385 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var384, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var385); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var386 = 1;
var = var386;
goto RET_LABEL;
} else {
if (varonce387) {
var388 = varonce387;
} else {
var389 = "ascii";
var390 = 5;
var391 = standard___standard__NativeString___to_s_with_length(var389, var390);
var388 = var391;
varonce387 = var388;
}
{
var392 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var388) /* == on <var_pname:String>*/;
}
if (var392){
var393 = 0;
{
var394 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var393);
}
var395 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var395 = array_instance Array[Object] */
var396 = 1;
var397 = NEW_standard__NativeArray(var396, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var397)->values[0] = (val*) var394;
{
((void (*)(val* self, val* p0, long p1))(var395->class->vft[COLOR_standard__array__Array__with_native]))(var395, var397, var396) /* with_native on <var395:Array[Object]>*/;
}
}
{
var398 = ((val* (*)(val* self))(var395->class->vft[COLOR_standard__string__Object__to_s]))(var395) /* to_s on <var395:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2025);
show_backtrace(1);
}
{
var399 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var398, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var399); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var400 = 1;
var = var400;
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
if (varonce401) {
var402 = varonce401;
} else {
var403 = "Char";
var404 = 4;
var405 = standard___standard__NativeString___to_s_with_length(var403, var404);
var402 = var405;
varonce401 = var402;
}
{
var406 = ((short int (*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var402) /* == on <var_cname:String>*/;
}
if (var406){
if (varonce407) {
var408 = varonce407;
} else {
var409 = "output";
var410 = 6;
var411 = standard___standard__NativeString___to_s_with_length(var409, var410);
var408 = var411;
varonce407 = var408;
}
{
var412 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var408) /* == on <var_pname:String>*/;
}
if (var412){
if (varonce413) {
var414 = varonce413;
} else {
var415 = "printf(\"%c\", ";
var416 = 13;
var417 = standard___standard__NativeString___to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
{
var418 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
if (varonce419) {
var420 = varonce419;
} else {
var421 = ");";
var422 = 2;
var423 = standard___standard__NativeString___to_s_with_length(var421, var422);
var420 = var423;
varonce419 = var420;
}
var424 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var424 = array_instance Array[Object] */
var425 = 3;
var426 = NEW_standard__NativeArray(var425, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var426)->values[0] = (val*) var414;
((struct instance_standard__NativeArray*)var426)->values[1] = (val*) var418;
((struct instance_standard__NativeArray*)var426)->values[2] = (val*) var420;
{
((void (*)(val* self, val* p0, long p1))(var424->class->vft[COLOR_standard__array__Array__with_native]))(var424, var426, var425) /* with_native on <var424:Array[Object]>*/;
}
}
{
var427 = ((val* (*)(val* self))(var424->class->vft[COLOR_standard__string__Object__to_s]))(var424) /* to_s on <var424:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var427); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var428 = 1;
var = var428;
goto RET_LABEL;
} else {
if (varonce429) {
var430 = varonce429;
} else {
var431 = "object_id";
var432 = 9;
var433 = standard___standard__NativeString___to_s_with_length(var431, var432);
var430 = var433;
varonce429 = var430;
}
{
var434 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var430) /* == on <var_pname:String>*/;
}
if (var434){
if (varonce435) {
var436 = varonce435;
} else {
var437 = "(long)";
var438 = 6;
var439 = standard___standard__NativeString___to_s_with_length(var437, var438);
var436 = var439;
varonce435 = var436;
}
{
var440 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var441 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var441 = array_instance Array[Object] */
var442 = 2;
var443 = NEW_standard__NativeArray(var442, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var443)->values[0] = (val*) var436;
((struct instance_standard__NativeArray*)var443)->values[1] = (val*) var440;
{
((void (*)(val* self, val* p0, long p1))(var441->class->vft[COLOR_standard__array__Array__with_native]))(var441, var443, var442) /* with_native on <var441:Array[Object]>*/;
}
}
{
var444 = ((val* (*)(val* self))(var441->class->vft[COLOR_standard__string__Object__to_s]))(var441) /* to_s on <var441:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2033);
show_backtrace(1);
}
{
var445 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var444, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var445); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var446 = 1;
var = var446;
goto RET_LABEL;
} else {
if (varonce447) {
var448 = varonce447;
} else {
var449 = "successor";
var450 = 9;
var451 = standard___standard__NativeString___to_s_with_length(var449, var450);
var448 = var451;
varonce447 = var448;
}
{
var452 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var448) /* == on <var_pname:String>*/;
}
if (var452){
var453 = 0;
{
var454 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var453);
}
if (varonce455) {
var456 = varonce455;
} else {
var457 = " + ";
var458 = 3;
var459 = standard___standard__NativeString___to_s_with_length(var457, var458);
var456 = var459;
varonce455 = var456;
}
var460 = 1;
{
var461 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var460);
}
var462 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var462 = array_instance Array[Object] */
var463 = 3;
var464 = NEW_standard__NativeArray(var463, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var464)->values[0] = (val*) var454;
((struct instance_standard__NativeArray*)var464)->values[1] = (val*) var456;
((struct instance_standard__NativeArray*)var464)->values[2] = (val*) var461;
{
((void (*)(val* self, val* p0, long p1))(var462->class->vft[COLOR_standard__array__Array__with_native]))(var462, var464, var463) /* with_native on <var462:Array[Object]>*/;
}
}
{
var465 = ((val* (*)(val* self))(var462->class->vft[COLOR_standard__string__Object__to_s]))(var462) /* to_s on <var462:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2036);
show_backtrace(1);
}
{
var466 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var465, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var466); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var467 = 1;
var = var467;
goto RET_LABEL;
} else {
if (varonce468) {
var469 = varonce468;
} else {
var470 = "predecessor";
var471 = 11;
var472 = standard___standard__NativeString___to_s_with_length(var470, var471);
var469 = var472;
varonce468 = var469;
}
{
var473 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var469) /* == on <var_pname:String>*/;
}
if (var473){
var474 = 0;
{
var475 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var474);
}
if (varonce476) {
var477 = varonce476;
} else {
var478 = " - ";
var479 = 3;
var480 = standard___standard__NativeString___to_s_with_length(var478, var479);
var477 = var480;
varonce476 = var477;
}
var481 = 1;
{
var482 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var481);
}
var483 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var483 = array_instance Array[Object] */
var484 = 3;
var485 = NEW_standard__NativeArray(var484, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var485)->values[0] = (val*) var475;
((struct instance_standard__NativeArray*)var485)->values[1] = (val*) var477;
((struct instance_standard__NativeArray*)var485)->values[2] = (val*) var482;
{
((void (*)(val* self, val* p0, long p1))(var483->class->vft[COLOR_standard__array__Array__with_native]))(var483, var485, var484) /* with_native on <var483:Array[Object]>*/;
}
}
{
var486 = ((val* (*)(val* self))(var483->class->vft[COLOR_standard__string__Object__to_s]))(var483) /* to_s on <var483:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2039);
show_backtrace(1);
}
{
var487 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var486, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var487); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var488 = 1;
var = var488;
goto RET_LABEL;
} else {
if (varonce489) {
var490 = varonce489;
} else {
var491 = "==";
var492 = 2;
var493 = standard___standard__NativeString___to_s_with_length(var491, var492);
var490 = var493;
varonce489 = var490;
}
{
var494 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var490) /* == on <var_pname:String>*/;
}
if (var494){
var495 = 0;
{
var496 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var495);
}
var497 = 1;
{
var498 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var497);
}
{
var499 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var496, var498);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var499); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var500 = 1;
var = var500;
goto RET_LABEL;
} else {
if (varonce501) {
var502 = varonce501;
} else {
var503 = "!=";
var504 = 2;
var505 = standard___standard__NativeString___to_s_with_length(var503, var504);
var502 = var505;
varonce501 = var502;
}
{
var506 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var502) /* == on <var_pname:String>*/;
}
if (var506){
var507 = 0;
{
var508 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var507);
}
var509 = 1;
{
var510 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var509);
}
{
var511 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var508, var510);
}
var_res512 = var511;
if (varonce513) {
var514 = varonce513;
} else {
var515 = "!";
var516 = 1;
var517 = standard___standard__NativeString___to_s_with_length(var515, var516);
var514 = var517;
varonce513 = var514;
}
var518 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var518 = array_instance Array[Object] */
var519 = 2;
var520 = NEW_standard__NativeArray(var519, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var520)->values[0] = (val*) var514;
((struct instance_standard__NativeArray*)var520)->values[1] = (val*) var_res512;
{
((void (*)(val* self, val* p0, long p1))(var518->class->vft[COLOR_standard__array__Array__with_native]))(var518, var520, var519) /* with_native on <var518:Array[Object]>*/;
}
}
{
var521 = ((val* (*)(val* self))(var518->class->vft[COLOR_standard__string__Object__to_s]))(var518) /* to_s on <var518:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2046);
show_backtrace(1);
}
{
var522 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var521, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var522); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var523 = 1;
var = var523;
goto RET_LABEL;
} else {
if (varonce524) {
var525 = varonce524;
} else {
var526 = "<";
var527 = 1;
var528 = standard___standard__NativeString___to_s_with_length(var526, var527);
var525 = var528;
varonce524 = var525;
}
{
var529 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var525) /* == on <var_pname:String>*/;
}
if (var529){
var530 = 0;
{
var531 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var530);
}
if (varonce532) {
var533 = varonce532;
} else {
var534 = " < ";
var535 = 3;
var536 = standard___standard__NativeString___to_s_with_length(var534, var535);
var533 = var536;
varonce532 = var533;
}
var537 = 1;
{
var538 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var537);
}
var539 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var539 = array_instance Array[Object] */
var540 = 3;
var541 = NEW_standard__NativeArray(var540, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var541)->values[0] = (val*) var531;
((struct instance_standard__NativeArray*)var541)->values[1] = (val*) var533;
((struct instance_standard__NativeArray*)var541)->values[2] = (val*) var538;
{
((void (*)(val* self, val* p0, long p1))(var539->class->vft[COLOR_standard__array__Array__with_native]))(var539, var541, var540) /* with_native on <var539:Array[Object]>*/;
}
}
{
var542 = ((val* (*)(val* self))(var539->class->vft[COLOR_standard__string__Object__to_s]))(var539) /* to_s on <var539:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2049);
show_backtrace(1);
}
{
var543 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var542, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var543); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var544 = 1;
var = var544;
goto RET_LABEL;
} else {
if (varonce545) {
var546 = varonce545;
} else {
var547 = ">";
var548 = 1;
var549 = standard___standard__NativeString___to_s_with_length(var547, var548);
var546 = var549;
varonce545 = var546;
}
{
var550 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var546) /* == on <var_pname:String>*/;
}
if (var550){
var551 = 0;
{
var552 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var551);
}
if (varonce553) {
var554 = varonce553;
} else {
var555 = " > ";
var556 = 3;
var557 = standard___standard__NativeString___to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
var558 = 1;
{
var559 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var558);
}
var560 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var560 = array_instance Array[Object] */
var561 = 3;
var562 = NEW_standard__NativeArray(var561, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var562)->values[0] = (val*) var552;
((struct instance_standard__NativeArray*)var562)->values[1] = (val*) var554;
((struct instance_standard__NativeArray*)var562)->values[2] = (val*) var559;
{
((void (*)(val* self, val* p0, long p1))(var560->class->vft[COLOR_standard__array__Array__with_native]))(var560, var562, var561) /* with_native on <var560:Array[Object]>*/;
}
}
{
var563 = ((val* (*)(val* self))(var560->class->vft[COLOR_standard__string__Object__to_s]))(var560) /* to_s on <var560:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2052);
show_backtrace(1);
}
{
var564 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var563, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var564); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var565 = 1;
var = var565;
goto RET_LABEL;
} else {
if (varonce566) {
var567 = varonce566;
} else {
var568 = "<=";
var569 = 2;
var570 = standard___standard__NativeString___to_s_with_length(var568, var569);
var567 = var570;
varonce566 = var567;
}
{
var571 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var567) /* == on <var_pname:String>*/;
}
if (var571){
var572 = 0;
{
var573 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var572);
}
if (varonce574) {
var575 = varonce574;
} else {
var576 = " <= ";
var577 = 4;
var578 = standard___standard__NativeString___to_s_with_length(var576, var577);
var575 = var578;
varonce574 = var575;
}
var579 = 1;
{
var580 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var579);
}
var581 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var581 = array_instance Array[Object] */
var582 = 3;
var583 = NEW_standard__NativeArray(var582, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var583)->values[0] = (val*) var573;
((struct instance_standard__NativeArray*)var583)->values[1] = (val*) var575;
((struct instance_standard__NativeArray*)var583)->values[2] = (val*) var580;
{
((void (*)(val* self, val* p0, long p1))(var581->class->vft[COLOR_standard__array__Array__with_native]))(var581, var583, var582) /* with_native on <var581:Array[Object]>*/;
}
}
{
var584 = ((val* (*)(val* self))(var581->class->vft[COLOR_standard__string__Object__to_s]))(var581) /* to_s on <var581:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2055);
show_backtrace(1);
}
{
var585 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var584, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var585); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var586 = 1;
var = var586;
goto RET_LABEL;
} else {
if (varonce587) {
var588 = varonce587;
} else {
var589 = ">=";
var590 = 2;
var591 = standard___standard__NativeString___to_s_with_length(var589, var590);
var588 = var591;
varonce587 = var588;
}
{
var592 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var588) /* == on <var_pname:String>*/;
}
if (var592){
var593 = 0;
{
var594 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var593);
}
if (varonce595) {
var596 = varonce595;
} else {
var597 = " >= ";
var598 = 4;
var599 = standard___standard__NativeString___to_s_with_length(var597, var598);
var596 = var599;
varonce595 = var596;
}
var600 = 1;
{
var601 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var600);
}
var602 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var602 = array_instance Array[Object] */
var603 = 3;
var604 = NEW_standard__NativeArray(var603, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var604)->values[0] = (val*) var594;
((struct instance_standard__NativeArray*)var604)->values[1] = (val*) var596;
((struct instance_standard__NativeArray*)var604)->values[2] = (val*) var601;
{
((void (*)(val* self, val* p0, long p1))(var602->class->vft[COLOR_standard__array__Array__with_native]))(var602, var604, var603) /* with_native on <var602:Array[Object]>*/;
}
}
{
var605 = ((val* (*)(val* self))(var602->class->vft[COLOR_standard__string__Object__to_s]))(var602) /* to_s on <var602:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2058);
show_backtrace(1);
}
{
var606 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var605, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var606); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var607 = 1;
var = var607;
goto RET_LABEL;
} else {
if (varonce608) {
var609 = varonce608;
} else {
var610 = "to_i";
var611 = 4;
var612 = standard___standard__NativeString___to_s_with_length(var610, var611);
var609 = var612;
varonce608 = var609;
}
{
var613 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var609) /* == on <var_pname:String>*/;
}
if (var613){
var614 = 0;
{
var615 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var614);
}
if (varonce616) {
var617 = varonce616;
} else {
var618 = "-\'0\'";
var619 = 4;
var620 = standard___standard__NativeString___to_s_with_length(var618, var619);
var617 = var620;
varonce616 = var617;
}
var621 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var621 = array_instance Array[Object] */
var622 = 2;
var623 = NEW_standard__NativeArray(var622, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var623)->values[0] = (val*) var615;
((struct instance_standard__NativeArray*)var623)->values[1] = (val*) var617;
{
((void (*)(val* self, val* p0, long p1))(var621->class->vft[COLOR_standard__array__Array__with_native]))(var621, var623, var622) /* with_native on <var621:Array[Object]>*/;
}
}
{
var624 = ((val* (*)(val* self))(var621->class->vft[COLOR_standard__string__Object__to_s]))(var621) /* to_s on <var621:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2061);
show_backtrace(1);
}
{
var625 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var624, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var625); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var626 = 1;
var = var626;
goto RET_LABEL;
} else {
if (varonce627) {
var628 = varonce627;
} else {
var629 = "ascii";
var630 = 5;
var631 = standard___standard__NativeString___to_s_with_length(var629, var630);
var628 = var631;
varonce627 = var628;
}
{
var632 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var628) /* == on <var_pname:String>*/;
}
if (var632){
if (varonce633) {
var634 = varonce633;
} else {
var635 = "(unsigned char)";
var636 = 15;
var637 = standard___standard__NativeString___to_s_with_length(var635, var636);
var634 = var637;
varonce633 = var634;
}
var638 = 0;
{
var639 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var638);
}
var640 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var640 = array_instance Array[Object] */
var641 = 2;
var642 = NEW_standard__NativeArray(var641, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var642)->values[0] = (val*) var634;
((struct instance_standard__NativeArray*)var642)->values[1] = (val*) var639;
{
((void (*)(val* self, val* p0, long p1))(var640->class->vft[COLOR_standard__array__Array__with_native]))(var640, var642, var641) /* with_native on <var640:Array[Object]>*/;
}
}
{
var643 = ((val* (*)(val* self))(var640->class->vft[COLOR_standard__string__Object__to_s]))(var640) /* to_s on <var640:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2064);
show_backtrace(1);
}
{
var644 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var643, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var644); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var645 = 1;
var = var645;
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
if (varonce646) {
var647 = varonce646;
} else {
var648 = "Bool";
var649 = 4;
var650 = standard___standard__NativeString___to_s_with_length(var648, var649);
var647 = var650;
varonce646 = var647;
}
{
var651 = ((short int (*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var647) /* == on <var_cname:String>*/;
}
if (var651){
if (varonce652) {
var653 = varonce652;
} else {
var654 = "output";
var655 = 6;
var656 = standard___standard__NativeString___to_s_with_length(var654, var655);
var653 = var656;
varonce652 = var653;
}
{
var657 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var653) /* == on <var_pname:String>*/;
}
if (var657){
if (varonce658) {
var659 = varonce658;
} else {
var660 = "printf(";
var661 = 7;
var662 = standard___standard__NativeString___to_s_with_length(var660, var661);
var659 = var662;
varonce658 = var659;
}
{
var663 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
if (varonce664) {
var665 = varonce664;
} else {
var666 = "?\"true\\n\":\"false\\n\");";
var667 = 21;
var668 = standard___standard__NativeString___to_s_with_length(var666, var667);
var665 = var668;
varonce664 = var665;
}
var669 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var669 = array_instance Array[Object] */
var670 = 3;
var671 = NEW_standard__NativeArray(var670, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var671)->values[0] = (val*) var659;
((struct instance_standard__NativeArray*)var671)->values[1] = (val*) var663;
((struct instance_standard__NativeArray*)var671)->values[2] = (val*) var665;
{
((void (*)(val* self, val* p0, long p1))(var669->class->vft[COLOR_standard__array__Array__with_native]))(var669, var671, var670) /* with_native on <var669:Array[Object]>*/;
}
}
{
var672 = ((val* (*)(val* self))(var669->class->vft[COLOR_standard__string__Object__to_s]))(var669) /* to_s on <var669:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var672); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var673 = 1;
var = var673;
goto RET_LABEL;
} else {
if (varonce674) {
var675 = varonce674;
} else {
var676 = "object_id";
var677 = 9;
var678 = standard___standard__NativeString___to_s_with_length(var676, var677);
var675 = var678;
varonce674 = var675;
}
{
var679 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var675) /* == on <var_pname:String>*/;
}
if (var679){
if (varonce680) {
var681 = varonce680;
} else {
var682 = "(long)";
var683 = 6;
var684 = standard___standard__NativeString___to_s_with_length(var682, var683);
var681 = var684;
varonce680 = var681;
}
{
var685 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var686 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var686 = array_instance Array[Object] */
var687 = 2;
var688 = NEW_standard__NativeArray(var687, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var688)->values[0] = (val*) var681;
((struct instance_standard__NativeArray*)var688)->values[1] = (val*) var685;
{
((void (*)(val* self, val* p0, long p1))(var686->class->vft[COLOR_standard__array__Array__with_native]))(var686, var688, var687) /* with_native on <var686:Array[Object]>*/;
}
}
{
var689 = ((val* (*)(val* self))(var686->class->vft[COLOR_standard__string__Object__to_s]))(var686) /* to_s on <var686:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2072);
show_backtrace(1);
}
{
var690 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var689, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var690); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var691 = 1;
var = var691;
goto RET_LABEL;
} else {
if (varonce692) {
var693 = varonce692;
} else {
var694 = "==";
var695 = 2;
var696 = standard___standard__NativeString___to_s_with_length(var694, var695);
var693 = var696;
varonce692 = var693;
}
{
var697 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var693) /* == on <var_pname:String>*/;
}
if (var697){
var698 = 0;
{
var699 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var698);
}
var700 = 1;
{
var701 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var700);
}
{
var702 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var699, var701);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var702); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var703 = 1;
var = var703;
goto RET_LABEL;
} else {
if (varonce704) {
var705 = varonce704;
} else {
var706 = "!=";
var707 = 2;
var708 = standard___standard__NativeString___to_s_with_length(var706, var707);
var705 = var708;
varonce704 = var705;
}
{
var709 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var705) /* == on <var_pname:String>*/;
}
if (var709){
var710 = 0;
{
var711 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var710);
}
var712 = 1;
{
var713 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var712);
}
{
var714 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var711, var713);
}
var_res715 = var714;
if (varonce716) {
var717 = varonce716;
} else {
var718 = "!";
var719 = 1;
var720 = standard___standard__NativeString___to_s_with_length(var718, var719);
var717 = var720;
varonce716 = var717;
}
var721 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var721 = array_instance Array[Object] */
var722 = 2;
var723 = NEW_standard__NativeArray(var722, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var723)->values[0] = (val*) var717;
((struct instance_standard__NativeArray*)var723)->values[1] = (val*) var_res715;
{
((void (*)(val* self, val* p0, long p1))(var721->class->vft[COLOR_standard__array__Array__with_native]))(var721, var723, var722) /* with_native on <var721:Array[Object]>*/;
}
}
{
var724 = ((val* (*)(val* self))(var721->class->vft[COLOR_standard__string__Object__to_s]))(var721) /* to_s on <var721:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2079);
show_backtrace(1);
}
{
var725 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var724, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var725); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var726 = 1;
var = var726;
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (varonce727) {
var728 = varonce727;
} else {
var729 = "Float";
var730 = 5;
var731 = standard___standard__NativeString___to_s_with_length(var729, var730);
var728 = var731;
varonce727 = var728;
}
{
var732 = ((short int (*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var728) /* == on <var_cname:String>*/;
}
if (var732){
if (varonce733) {
var734 = varonce733;
} else {
var735 = "output";
var736 = 6;
var737 = standard___standard__NativeString___to_s_with_length(var735, var736);
var734 = var737;
varonce733 = var734;
}
{
var738 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var734) /* == on <var_pname:String>*/;
}
if (var738){
if (varonce739) {
var740 = varonce739;
} else {
var741 = "printf(\"%f\\n\", ";
var742 = 15;
var743 = standard___standard__NativeString___to_s_with_length(var741, var742);
var740 = var743;
varonce739 = var740;
}
{
var744 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
if (varonce745) {
var746 = varonce745;
} else {
var747 = ");";
var748 = 2;
var749 = standard___standard__NativeString___to_s_with_length(var747, var748);
var746 = var749;
varonce745 = var746;
}
var750 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var750 = array_instance Array[Object] */
var751 = 3;
var752 = NEW_standard__NativeArray(var751, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var752)->values[0] = (val*) var740;
((struct instance_standard__NativeArray*)var752)->values[1] = (val*) var744;
((struct instance_standard__NativeArray*)var752)->values[2] = (val*) var746;
{
((void (*)(val* self, val* p0, long p1))(var750->class->vft[COLOR_standard__array__Array__with_native]))(var750, var752, var751) /* with_native on <var750:Array[Object]>*/;
}
}
{
var753 = ((val* (*)(val* self))(var750->class->vft[COLOR_standard__string__Object__to_s]))(var750) /* to_s on <var750:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var753); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var754 = 1;
var = var754;
goto RET_LABEL;
} else {
if (varonce755) {
var756 = varonce755;
} else {
var757 = "object_id";
var758 = 9;
var759 = standard___standard__NativeString___to_s_with_length(var757, var758);
var756 = var759;
varonce755 = var756;
}
{
var760 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var756) /* == on <var_pname:String>*/;
}
if (var760){
if (varonce761) {
var762 = varonce761;
} else {
var763 = "(double)";
var764 = 8;
var765 = standard___standard__NativeString___to_s_with_length(var763, var764);
var762 = var765;
varonce761 = var762;
}
{
var766 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var767 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var767 = array_instance Array[Object] */
var768 = 2;
var769 = NEW_standard__NativeArray(var768, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var769)->values[0] = (val*) var762;
((struct instance_standard__NativeArray*)var769)->values[1] = (val*) var766;
{
((void (*)(val* self, val* p0, long p1))(var767->class->vft[COLOR_standard__array__Array__with_native]))(var767, var769, var768) /* with_native on <var767:Array[Object]>*/;
}
}
{
var770 = ((val* (*)(val* self))(var767->class->vft[COLOR_standard__string__Object__to_s]))(var767) /* to_s on <var767:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2087);
show_backtrace(1);
}
{
var771 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var770, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var771); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var772 = 1;
var = var772;
goto RET_LABEL;
} else {
if (varonce773) {
var774 = varonce773;
} else {
var775 = "+";
var776 = 1;
var777 = standard___standard__NativeString___to_s_with_length(var775, var776);
var774 = var777;
varonce773 = var774;
}
{
var778 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var774) /* == on <var_pname:String>*/;
}
if (var778){
var779 = 0;
{
var780 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var779);
}
if (varonce781) {
var782 = varonce781;
} else {
var783 = " + ";
var784 = 3;
var785 = standard___standard__NativeString___to_s_with_length(var783, var784);
var782 = var785;
varonce781 = var782;
}
var786 = 1;
{
var787 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var786);
}
var788 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var788 = array_instance Array[Object] */
var789 = 3;
var790 = NEW_standard__NativeArray(var789, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var790)->values[0] = (val*) var780;
((struct instance_standard__NativeArray*)var790)->values[1] = (val*) var782;
((struct instance_standard__NativeArray*)var790)->values[2] = (val*) var787;
{
((void (*)(val* self, val* p0, long p1))(var788->class->vft[COLOR_standard__array__Array__with_native]))(var788, var790, var789) /* with_native on <var788:Array[Object]>*/;
}
}
{
var791 = ((val* (*)(val* self))(var788->class->vft[COLOR_standard__string__Object__to_s]))(var788) /* to_s on <var788:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2090);
show_backtrace(1);
}
{
var792 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var791, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var792); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var793 = 1;
var = var793;
goto RET_LABEL;
} else {
if (varonce794) {
var795 = varonce794;
} else {
var796 = "-";
var797 = 1;
var798 = standard___standard__NativeString___to_s_with_length(var796, var797);
var795 = var798;
varonce794 = var795;
}
{
var799 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var795) /* == on <var_pname:String>*/;
}
if (var799){
var800 = 0;
{
var801 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var800);
}
if (varonce802) {
var803 = varonce802;
} else {
var804 = " - ";
var805 = 3;
var806 = standard___standard__NativeString___to_s_with_length(var804, var805);
var803 = var806;
varonce802 = var803;
}
var807 = 1;
{
var808 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var807);
}
var809 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var809 = array_instance Array[Object] */
var810 = 3;
var811 = NEW_standard__NativeArray(var810, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var811)->values[0] = (val*) var801;
((struct instance_standard__NativeArray*)var811)->values[1] = (val*) var803;
((struct instance_standard__NativeArray*)var811)->values[2] = (val*) var808;
{
((void (*)(val* self, val* p0, long p1))(var809->class->vft[COLOR_standard__array__Array__with_native]))(var809, var811, var810) /* with_native on <var809:Array[Object]>*/;
}
}
{
var812 = ((val* (*)(val* self))(var809->class->vft[COLOR_standard__string__Object__to_s]))(var809) /* to_s on <var809:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2093);
show_backtrace(1);
}
{
var813 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var812, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var813); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var814 = 1;
var = var814;
goto RET_LABEL;
} else {
if (varonce815) {
var816 = varonce815;
} else {
var817 = "unary -";
var818 = 7;
var819 = standard___standard__NativeString___to_s_with_length(var817, var818);
var816 = var819;
varonce815 = var816;
}
{
var820 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var816) /* == on <var_pname:String>*/;
}
if (var820){
if (varonce821) {
var822 = varonce821;
} else {
var823 = "-";
var824 = 1;
var825 = standard___standard__NativeString___to_s_with_length(var823, var824);
var822 = var825;
varonce821 = var822;
}
var826 = 0;
{
var827 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var826);
}
var828 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var828 = array_instance Array[Object] */
var829 = 2;
var830 = NEW_standard__NativeArray(var829, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var830)->values[0] = (val*) var822;
((struct instance_standard__NativeArray*)var830)->values[1] = (val*) var827;
{
((void (*)(val* self, val* p0, long p1))(var828->class->vft[COLOR_standard__array__Array__with_native]))(var828, var830, var829) /* with_native on <var828:Array[Object]>*/;
}
}
{
var831 = ((val* (*)(val* self))(var828->class->vft[COLOR_standard__string__Object__to_s]))(var828) /* to_s on <var828:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2096);
show_backtrace(1);
}
{
var832 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var831, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var832); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var833 = 1;
var = var833;
goto RET_LABEL;
} else {
if (varonce834) {
var835 = varonce834;
} else {
var836 = "succ";
var837 = 4;
var838 = standard___standard__NativeString___to_s_with_length(var836, var837);
var835 = var838;
varonce834 = var835;
}
{
var839 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var835) /* == on <var_pname:String>*/;
}
if (var839){
var840 = 0;
{
var841 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var840);
}
if (varonce842) {
var843 = varonce842;
} else {
var844 = "+1";
var845 = 2;
var846 = standard___standard__NativeString___to_s_with_length(var844, var845);
var843 = var846;
varonce842 = var843;
}
var847 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var847 = array_instance Array[Object] */
var848 = 2;
var849 = NEW_standard__NativeArray(var848, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var849)->values[0] = (val*) var841;
((struct instance_standard__NativeArray*)var849)->values[1] = (val*) var843;
{
((void (*)(val* self, val* p0, long p1))(var847->class->vft[COLOR_standard__array__Array__with_native]))(var847, var849, var848) /* with_native on <var847:Array[Object]>*/;
}
}
{
var850 = ((val* (*)(val* self))(var847->class->vft[COLOR_standard__string__Object__to_s]))(var847) /* to_s on <var847:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2099);
show_backtrace(1);
}
{
var851 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var850, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var851); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var852 = 1;
var = var852;
goto RET_LABEL;
} else {
if (varonce853) {
var854 = varonce853;
} else {
var855 = "prec";
var856 = 4;
var857 = standard___standard__NativeString___to_s_with_length(var855, var856);
var854 = var857;
varonce853 = var854;
}
{
var858 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var854) /* == on <var_pname:String>*/;
}
if (var858){
var859 = 0;
{
var860 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var859);
}
if (varonce861) {
var862 = varonce861;
} else {
var863 = "-1";
var864 = 2;
var865 = standard___standard__NativeString___to_s_with_length(var863, var864);
var862 = var865;
varonce861 = var862;
}
var866 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var866 = array_instance Array[Object] */
var867 = 2;
var868 = NEW_standard__NativeArray(var867, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var868)->values[0] = (val*) var860;
((struct instance_standard__NativeArray*)var868)->values[1] = (val*) var862;
{
((void (*)(val* self, val* p0, long p1))(var866->class->vft[COLOR_standard__array__Array__with_native]))(var866, var868, var867) /* with_native on <var866:Array[Object]>*/;
}
}
{
var869 = ((val* (*)(val* self))(var866->class->vft[COLOR_standard__string__Object__to_s]))(var866) /* to_s on <var866:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2102);
show_backtrace(1);
}
{
var870 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var869, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var870); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var871 = 1;
var = var871;
goto RET_LABEL;
} else {
if (varonce872) {
var873 = varonce872;
} else {
var874 = "*";
var875 = 1;
var876 = standard___standard__NativeString___to_s_with_length(var874, var875);
var873 = var876;
varonce872 = var873;
}
{
var877 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var873) /* == on <var_pname:String>*/;
}
if (var877){
var878 = 0;
{
var879 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var878);
}
if (varonce880) {
var881 = varonce880;
} else {
var882 = " * ";
var883 = 3;
var884 = standard___standard__NativeString___to_s_with_length(var882, var883);
var881 = var884;
varonce880 = var881;
}
var885 = 1;
{
var886 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var885);
}
var887 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var887 = array_instance Array[Object] */
var888 = 3;
var889 = NEW_standard__NativeArray(var888, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var889)->values[0] = (val*) var879;
((struct instance_standard__NativeArray*)var889)->values[1] = (val*) var881;
((struct instance_standard__NativeArray*)var889)->values[2] = (val*) var886;
{
((void (*)(val* self, val* p0, long p1))(var887->class->vft[COLOR_standard__array__Array__with_native]))(var887, var889, var888) /* with_native on <var887:Array[Object]>*/;
}
}
{
var890 = ((val* (*)(val* self))(var887->class->vft[COLOR_standard__string__Object__to_s]))(var887) /* to_s on <var887:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2105);
show_backtrace(1);
}
{
var891 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var890, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var891); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var892 = 1;
var = var892;
goto RET_LABEL;
} else {
if (varonce893) {
var894 = varonce893;
} else {
var895 = "/";
var896 = 1;
var897 = standard___standard__NativeString___to_s_with_length(var895, var896);
var894 = var897;
varonce893 = var894;
}
{
var898 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var894) /* == on <var_pname:String>*/;
}
if (var898){
var899 = 0;
{
var900 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var899);
}
if (varonce901) {
var902 = varonce901;
} else {
var903 = " / ";
var904 = 3;
var905 = standard___standard__NativeString___to_s_with_length(var903, var904);
var902 = var905;
varonce901 = var902;
}
var906 = 1;
{
var907 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var906);
}
var908 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var908 = array_instance Array[Object] */
var909 = 3;
var910 = NEW_standard__NativeArray(var909, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var910)->values[0] = (val*) var900;
((struct instance_standard__NativeArray*)var910)->values[1] = (val*) var902;
((struct instance_standard__NativeArray*)var910)->values[2] = (val*) var907;
{
((void (*)(val* self, val* p0, long p1))(var908->class->vft[COLOR_standard__array__Array__with_native]))(var908, var910, var909) /* with_native on <var908:Array[Object]>*/;
}
}
{
var911 = ((val* (*)(val* self))(var908->class->vft[COLOR_standard__string__Object__to_s]))(var908) /* to_s on <var908:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2108);
show_backtrace(1);
}
{
var912 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var911, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var912); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var913 = 1;
var = var913;
goto RET_LABEL;
} else {
if (varonce914) {
var915 = varonce914;
} else {
var916 = "==";
var917 = 2;
var918 = standard___standard__NativeString___to_s_with_length(var916, var917);
var915 = var918;
varonce914 = var915;
}
{
var919 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var915) /* == on <var_pname:String>*/;
}
if (var919){
var920 = 0;
{
var921 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var920);
}
var922 = 1;
{
var923 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var922);
}
{
var924 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var921, var923);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var924); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var925 = 1;
var = var925;
goto RET_LABEL;
} else {
if (varonce926) {
var927 = varonce926;
} else {
var928 = "!=";
var929 = 2;
var930 = standard___standard__NativeString___to_s_with_length(var928, var929);
var927 = var930;
varonce926 = var927;
}
{
var931 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var927) /* == on <var_pname:String>*/;
}
if (var931){
var932 = 0;
{
var933 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var932);
}
var934 = 1;
{
var935 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var934);
}
{
var936 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var933, var935);
}
var_res937 = var936;
if (varonce938) {
var939 = varonce938;
} else {
var940 = "!";
var941 = 1;
var942 = standard___standard__NativeString___to_s_with_length(var940, var941);
var939 = var942;
varonce938 = var939;
}
var943 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var943 = array_instance Array[Object] */
var944 = 2;
var945 = NEW_standard__NativeArray(var944, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var945)->values[0] = (val*) var939;
((struct instance_standard__NativeArray*)var945)->values[1] = (val*) var_res937;
{
((void (*)(val* self, val* p0, long p1))(var943->class->vft[COLOR_standard__array__Array__with_native]))(var943, var945, var944) /* with_native on <var943:Array[Object]>*/;
}
}
{
var946 = ((val* (*)(val* self))(var943->class->vft[COLOR_standard__string__Object__to_s]))(var943) /* to_s on <var943:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2115);
show_backtrace(1);
}
{
var947 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var946, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var947); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var948 = 1;
var = var948;
goto RET_LABEL;
} else {
if (varonce949) {
var950 = varonce949;
} else {
var951 = "<";
var952 = 1;
var953 = standard___standard__NativeString___to_s_with_length(var951, var952);
var950 = var953;
varonce949 = var950;
}
{
var954 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var950) /* == on <var_pname:String>*/;
}
if (var954){
var955 = 0;
{
var956 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var955);
}
if (varonce957) {
var958 = varonce957;
} else {
var959 = " < ";
var960 = 3;
var961 = standard___standard__NativeString___to_s_with_length(var959, var960);
var958 = var961;
varonce957 = var958;
}
var962 = 1;
{
var963 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var962);
}
var964 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var964 = array_instance Array[Object] */
var965 = 3;
var966 = NEW_standard__NativeArray(var965, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var966)->values[0] = (val*) var956;
((struct instance_standard__NativeArray*)var966)->values[1] = (val*) var958;
((struct instance_standard__NativeArray*)var966)->values[2] = (val*) var963;
{
((void (*)(val* self, val* p0, long p1))(var964->class->vft[COLOR_standard__array__Array__with_native]))(var964, var966, var965) /* with_native on <var964:Array[Object]>*/;
}
}
{
var967 = ((val* (*)(val* self))(var964->class->vft[COLOR_standard__string__Object__to_s]))(var964) /* to_s on <var964:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2118);
show_backtrace(1);
}
{
var968 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var967, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var968); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var969 = 1;
var = var969;
goto RET_LABEL;
} else {
if (varonce970) {
var971 = varonce970;
} else {
var972 = ">";
var973 = 1;
var974 = standard___standard__NativeString___to_s_with_length(var972, var973);
var971 = var974;
varonce970 = var971;
}
{
var975 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var971) /* == on <var_pname:String>*/;
}
if (var975){
var976 = 0;
{
var977 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var976);
}
if (varonce978) {
var979 = varonce978;
} else {
var980 = " > ";
var981 = 3;
var982 = standard___standard__NativeString___to_s_with_length(var980, var981);
var979 = var982;
varonce978 = var979;
}
var983 = 1;
{
var984 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var983);
}
var985 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var985 = array_instance Array[Object] */
var986 = 3;
var987 = NEW_standard__NativeArray(var986, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var987)->values[0] = (val*) var977;
((struct instance_standard__NativeArray*)var987)->values[1] = (val*) var979;
((struct instance_standard__NativeArray*)var987)->values[2] = (val*) var984;
{
((void (*)(val* self, val* p0, long p1))(var985->class->vft[COLOR_standard__array__Array__with_native]))(var985, var987, var986) /* with_native on <var985:Array[Object]>*/;
}
}
{
var988 = ((val* (*)(val* self))(var985->class->vft[COLOR_standard__string__Object__to_s]))(var985) /* to_s on <var985:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2121);
show_backtrace(1);
}
{
var989 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var988, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var989); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var990 = 1;
var = var990;
goto RET_LABEL;
} else {
if (varonce991) {
var992 = varonce991;
} else {
var993 = "<=";
var994 = 2;
var995 = standard___standard__NativeString___to_s_with_length(var993, var994);
var992 = var995;
varonce991 = var992;
}
{
var996 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var992) /* == on <var_pname:String>*/;
}
if (var996){
var997 = 0;
{
var998 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var997);
}
if (varonce999) {
var1000 = varonce999;
} else {
var1001 = " <= ";
var1002 = 4;
var1003 = standard___standard__NativeString___to_s_with_length(var1001, var1002);
var1000 = var1003;
varonce999 = var1000;
}
var1004 = 1;
{
var1005 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1004);
}
var1006 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1006 = array_instance Array[Object] */
var1007 = 3;
var1008 = NEW_standard__NativeArray(var1007, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1008)->values[0] = (val*) var998;
((struct instance_standard__NativeArray*)var1008)->values[1] = (val*) var1000;
((struct instance_standard__NativeArray*)var1008)->values[2] = (val*) var1005;
{
((void (*)(val* self, val* p0, long p1))(var1006->class->vft[COLOR_standard__array__Array__with_native]))(var1006, var1008, var1007) /* with_native on <var1006:Array[Object]>*/;
}
}
{
var1009 = ((val* (*)(val* self))(var1006->class->vft[COLOR_standard__string__Object__to_s]))(var1006) /* to_s on <var1006:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2124);
show_backtrace(1);
}
{
var1010 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1009, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1010); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1011 = 1;
var = var1011;
goto RET_LABEL;
} else {
if (varonce1012) {
var1013 = varonce1012;
} else {
var1014 = ">=";
var1015 = 2;
var1016 = standard___standard__NativeString___to_s_with_length(var1014, var1015);
var1013 = var1016;
varonce1012 = var1013;
}
{
var1017 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1013) /* == on <var_pname:String>*/;
}
if (var1017){
var1018 = 0;
{
var1019 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1018);
}
if (varonce1020) {
var1021 = varonce1020;
} else {
var1022 = " >= ";
var1023 = 4;
var1024 = standard___standard__NativeString___to_s_with_length(var1022, var1023);
var1021 = var1024;
varonce1020 = var1021;
}
var1025 = 1;
{
var1026 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1025);
}
var1027 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1027 = array_instance Array[Object] */
var1028 = 3;
var1029 = NEW_standard__NativeArray(var1028, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1029)->values[0] = (val*) var1019;
((struct instance_standard__NativeArray*)var1029)->values[1] = (val*) var1021;
((struct instance_standard__NativeArray*)var1029)->values[2] = (val*) var1026;
{
((void (*)(val* self, val* p0, long p1))(var1027->class->vft[COLOR_standard__array__Array__with_native]))(var1027, var1029, var1028) /* with_native on <var1027:Array[Object]>*/;
}
}
{
var1030 = ((val* (*)(val* self))(var1027->class->vft[COLOR_standard__string__Object__to_s]))(var1027) /* to_s on <var1027:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2127);
show_backtrace(1);
}
{
var1031 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1030, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1031); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1032 = 1;
var = var1032;
goto RET_LABEL;
} else {
if (varonce1033) {
var1034 = varonce1033;
} else {
var1035 = "to_i";
var1036 = 4;
var1037 = standard___standard__NativeString___to_s_with_length(var1035, var1036);
var1034 = var1037;
varonce1033 = var1034;
}
{
var1038 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1034) /* == on <var_pname:String>*/;
}
if (var1038){
if (varonce1039) {
var1040 = varonce1039;
} else {
var1041 = "(long)";
var1042 = 6;
var1043 = standard___standard__NativeString___to_s_with_length(var1041, var1042);
var1040 = var1043;
varonce1039 = var1040;
}
var1044 = 0;
{
var1045 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1044);
}
var1046 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1046 = array_instance Array[Object] */
var1047 = 2;
var1048 = NEW_standard__NativeArray(var1047, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1048)->values[0] = (val*) var1040;
((struct instance_standard__NativeArray*)var1048)->values[1] = (val*) var1045;
{
((void (*)(val* self, val* p0, long p1))(var1046->class->vft[COLOR_standard__array__Array__with_native]))(var1046, var1048, var1047) /* with_native on <var1046:Array[Object]>*/;
}
}
{
var1049 = ((val* (*)(val* self))(var1046->class->vft[COLOR_standard__string__Object__to_s]))(var1046) /* to_s on <var1046:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2130);
show_backtrace(1);
}
{
var1050 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1049, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1050); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1051 = 1;
var = var1051;
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
if (varonce1052) {
var1053 = varonce1052;
} else {
var1054 = "NativeString";
var1055 = 12;
var1056 = standard___standard__NativeString___to_s_with_length(var1054, var1055);
var1053 = var1056;
varonce1052 = var1053;
}
{
var1057 = ((short int (*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var1053) /* == on <var_cname:String>*/;
}
if (var1057){
if (varonce1058) {
var1059 = varonce1058;
} else {
var1060 = "[]";
var1061 = 2;
var1062 = standard___standard__NativeString___to_s_with_length(var1060, var1061);
var1059 = var1062;
varonce1058 = var1059;
}
{
var1063 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1059) /* == on <var_pname:String>*/;
}
if (var1063){
var1064 = 0;
{
var1065 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1064);
}
if (varonce1066) {
var1067 = varonce1066;
} else {
var1068 = "[";
var1069 = 1;
var1070 = standard___standard__NativeString___to_s_with_length(var1068, var1069);
var1067 = var1070;
varonce1066 = var1067;
}
var1071 = 1;
{
var1072 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1071);
}
if (varonce1073) {
var1074 = varonce1073;
} else {
var1075 = "]";
var1076 = 1;
var1077 = standard___standard__NativeString___to_s_with_length(var1075, var1076);
var1074 = var1077;
varonce1073 = var1074;
}
var1078 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1078 = array_instance Array[Object] */
var1079 = 4;
var1080 = NEW_standard__NativeArray(var1079, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1080)->values[0] = (val*) var1065;
((struct instance_standard__NativeArray*)var1080)->values[1] = (val*) var1067;
((struct instance_standard__NativeArray*)var1080)->values[2] = (val*) var1072;
((struct instance_standard__NativeArray*)var1080)->values[3] = (val*) var1074;
{
((void (*)(val* self, val* p0, long p1))(var1078->class->vft[COLOR_standard__array__Array__with_native]))(var1078, var1080, var1079) /* with_native on <var1078:Array[Object]>*/;
}
}
{
var1081 = ((val* (*)(val* self))(var1078->class->vft[COLOR_standard__string__Object__to_s]))(var1078) /* to_s on <var1078:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2135);
show_backtrace(1);
}
{
var1082 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1081, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1082); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1083 = 1;
var = var1083;
goto RET_LABEL;
} else {
if (varonce1084) {
var1085 = varonce1084;
} else {
var1086 = "[]=";
var1087 = 3;
var1088 = standard___standard__NativeString___to_s_with_length(var1086, var1087);
var1085 = var1088;
varonce1084 = var1085;
}
{
var1089 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1085) /* == on <var_pname:String>*/;
}
if (var1089){
var1090 = 0;
{
var1091 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1090);
}
if (varonce1092) {
var1093 = varonce1092;
} else {
var1094 = "[";
var1095 = 1;
var1096 = standard___standard__NativeString___to_s_with_length(var1094, var1095);
var1093 = var1096;
varonce1092 = var1093;
}
var1097 = 1;
{
var1098 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1097);
}
if (varonce1099) {
var1100 = varonce1099;
} else {
var1101 = "]=";
var1102 = 2;
var1103 = standard___standard__NativeString___to_s_with_length(var1101, var1102);
var1100 = var1103;
varonce1099 = var1100;
}
var1104 = 2;
{
var1105 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1104);
}
if (varonce1106) {
var1107 = varonce1106;
} else {
var1108 = ";";
var1109 = 1;
var1110 = standard___standard__NativeString___to_s_with_length(var1108, var1109);
var1107 = var1110;
varonce1106 = var1107;
}
var1111 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1111 = array_instance Array[Object] */
var1112 = 6;
var1113 = NEW_standard__NativeArray(var1112, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1113)->values[0] = (val*) var1091;
((struct instance_standard__NativeArray*)var1113)->values[1] = (val*) var1093;
((struct instance_standard__NativeArray*)var1113)->values[2] = (val*) var1098;
((struct instance_standard__NativeArray*)var1113)->values[3] = (val*) var1100;
((struct instance_standard__NativeArray*)var1113)->values[4] = (val*) var1105;
((struct instance_standard__NativeArray*)var1113)->values[5] = (val*) var1107;
{
((void (*)(val* self, val* p0, long p1))(var1111->class->vft[COLOR_standard__array__Array__with_native]))(var1111, var1113, var1112) /* with_native on <var1111:Array[Object]>*/;
}
}
{
var1114 = ((val* (*)(val* self))(var1111->class->vft[COLOR_standard__string__Object__to_s]))(var1111) /* to_s on <var1111:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1114); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var1115 = 1;
var = var1115;
goto RET_LABEL;
} else {
if (varonce1116) {
var1117 = varonce1116;
} else {
var1118 = "copy_to";
var1119 = 7;
var1120 = standard___standard__NativeString___to_s_with_length(var1118, var1119);
var1117 = var1120;
varonce1116 = var1117;
}
{
var1121 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1117) /* == on <var_pname:String>*/;
}
if (var1121){
if (varonce1122) {
var1123 = varonce1122;
} else {
var1124 = "memmove(";
var1125 = 8;
var1126 = standard___standard__NativeString___to_s_with_length(var1124, var1125);
var1123 = var1126;
varonce1122 = var1123;
}
var1127 = 1;
{
var1128 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1127);
}
if (varonce1129) {
var1130 = varonce1129;
} else {
var1131 = "+";
var1132 = 1;
var1133 = standard___standard__NativeString___to_s_with_length(var1131, var1132);
var1130 = var1133;
varonce1129 = var1130;
}
var1134 = 4;
{
var1135 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1134);
}
if (varonce1136) {
var1137 = varonce1136;
} else {
var1138 = ",";
var1139 = 1;
var1140 = standard___standard__NativeString___to_s_with_length(var1138, var1139);
var1137 = var1140;
varonce1136 = var1137;
}
var1141 = 0;
{
var1142 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1141);
}
if (varonce1143) {
var1144 = varonce1143;
} else {
var1145 = "+";
var1146 = 1;
var1147 = standard___standard__NativeString___to_s_with_length(var1145, var1146);
var1144 = var1147;
varonce1143 = var1144;
}
var1148 = 3;
{
var1149 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1148);
}
if (varonce1150) {
var1151 = varonce1150;
} else {
var1152 = ",";
var1153 = 1;
var1154 = standard___standard__NativeString___to_s_with_length(var1152, var1153);
var1151 = var1154;
varonce1150 = var1151;
}
var1155 = 2;
{
var1156 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1155);
}
if (varonce1157) {
var1158 = varonce1157;
} else {
var1159 = ");";
var1160 = 2;
var1161 = standard___standard__NativeString___to_s_with_length(var1159, var1160);
var1158 = var1161;
varonce1157 = var1158;
}
var1162 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1162 = array_instance Array[Object] */
var1163 = 11;
var1164 = NEW_standard__NativeArray(var1163, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1164)->values[0] = (val*) var1123;
((struct instance_standard__NativeArray*)var1164)->values[1] = (val*) var1128;
((struct instance_standard__NativeArray*)var1164)->values[2] = (val*) var1130;
((struct instance_standard__NativeArray*)var1164)->values[3] = (val*) var1135;
((struct instance_standard__NativeArray*)var1164)->values[4] = (val*) var1137;
((struct instance_standard__NativeArray*)var1164)->values[5] = (val*) var1142;
((struct instance_standard__NativeArray*)var1164)->values[6] = (val*) var1144;
((struct instance_standard__NativeArray*)var1164)->values[7] = (val*) var1149;
((struct instance_standard__NativeArray*)var1164)->values[8] = (val*) var1151;
((struct instance_standard__NativeArray*)var1164)->values[9] = (val*) var1156;
((struct instance_standard__NativeArray*)var1164)->values[10] = (val*) var1158;
{
((void (*)(val* self, val* p0, long p1))(var1162->class->vft[COLOR_standard__array__Array__with_native]))(var1162, var1164, var1163) /* with_native on <var1162:Array[Object]>*/;
}
}
{
var1165 = ((val* (*)(val* self))(var1162->class->vft[COLOR_standard__string__Object__to_s]))(var1162) /* to_s on <var1162:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1165); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var1166 = 1;
var = var1166;
goto RET_LABEL;
} else {
if (varonce1167) {
var1168 = varonce1167;
} else {
var1169 = "atoi";
var1170 = 4;
var1171 = standard___standard__NativeString___to_s_with_length(var1169, var1170);
var1168 = var1171;
varonce1167 = var1168;
}
{
var1172 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1168) /* == on <var_pname:String>*/;
}
if (var1172){
if (varonce1173) {
var1174 = varonce1173;
} else {
var1175 = "atoi(";
var1176 = 5;
var1177 = standard___standard__NativeString___to_s_with_length(var1175, var1176);
var1174 = var1177;
varonce1173 = var1174;
}
var1178 = 0;
{
var1179 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1178);
}
if (varonce1180) {
var1181 = varonce1180;
} else {
var1182 = ");";
var1183 = 2;
var1184 = standard___standard__NativeString___to_s_with_length(var1182, var1183);
var1181 = var1184;
varonce1180 = var1181;
}
var1185 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1185 = array_instance Array[Object] */
var1186 = 3;
var1187 = NEW_standard__NativeArray(var1186, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1187)->values[0] = (val*) var1174;
((struct instance_standard__NativeArray*)var1187)->values[1] = (val*) var1179;
((struct instance_standard__NativeArray*)var1187)->values[2] = (val*) var1181;
{
((void (*)(val* self, val* p0, long p1))(var1185->class->vft[COLOR_standard__array__Array__with_native]))(var1185, var1187, var1186) /* with_native on <var1185:Array[Object]>*/;
}
}
{
var1188 = ((val* (*)(val* self))(var1185->class->vft[COLOR_standard__string__Object__to_s]))(var1185) /* to_s on <var1185:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2144);
show_backtrace(1);
}
{
var1189 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1188, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1189); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1190 = 1;
var = var1190;
goto RET_LABEL;
} else {
if (varonce1191) {
var1192 = varonce1191;
} else {
var1193 = "new";
var1194 = 3;
var1195 = standard___standard__NativeString___to_s_with_length(var1193, var1194);
var1192 = var1195;
varonce1191 = var1192;
}
{
var1196 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1192) /* == on <var_pname:String>*/;
}
if (var1196){
if (varonce1197) {
var1198 = varonce1197;
} else {
var1199 = "(char*)nit_alloc(";
var1200 = 17;
var1201 = standard___standard__NativeString___to_s_with_length(var1199, var1200);
var1198 = var1201;
varonce1197 = var1198;
}
var1202 = 1;
{
var1203 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1202);
}
if (varonce1204) {
var1205 = varonce1204;
} else {
var1206 = ")";
var1207 = 1;
var1208 = standard___standard__NativeString___to_s_with_length(var1206, var1207);
var1205 = var1208;
varonce1204 = var1205;
}
var1209 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1209 = array_instance Array[Object] */
var1210 = 3;
var1211 = NEW_standard__NativeArray(var1210, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1211)->values[0] = (val*) var1198;
((struct instance_standard__NativeArray*)var1211)->values[1] = (val*) var1203;
((struct instance_standard__NativeArray*)var1211)->values[2] = (val*) var1205;
{
((void (*)(val* self, val* p0, long p1))(var1209->class->vft[COLOR_standard__array__Array__with_native]))(var1209, var1211, var1210) /* with_native on <var1209:Array[Object]>*/;
}
}
{
var1212 = ((val* (*)(val* self))(var1209->class->vft[COLOR_standard__string__Object__to_s]))(var1209) /* to_s on <var1209:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2147);
show_backtrace(1);
}
{
var1213 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1212, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1213); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1214 = 1;
var = var1214;
goto RET_LABEL;
} else {
}
}
}
}
}
} else {
if (varonce1215) {
var1216 = varonce1215;
} else {
var1217 = "NativeArray";
var1218 = 11;
var1219 = standard___standard__NativeString___to_s_with_length(var1217, var1218);
var1216 = var1219;
varonce1215 = var1216;
}
{
var1220 = ((short int (*)(val* self, val* p0))(var_cname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cname, var1216) /* == on <var_cname:String>*/;
}
if (var1220){
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_def(var_v, var_pname, var_ret, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#native_array_def on <var_v:AbstractCompilerVisitor>*/
}
var1221 = 1;
var = var1221;
goto RET_LABEL;
} else {
}
}
}
}
}
}
if (varonce1222) {
var1223 = varonce1222;
} else {
var1224 = "exit";
var1225 = 4;
var1226 = standard___standard__NativeString___to_s_with_length(var1224, var1225);
var1223 = var1226;
varonce1222 = var1223;
}
{
var1227 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1223) /* == on <var_pname:String>*/;
}
if (var1227){
if (varonce1228) {
var1229 = varonce1228;
} else {
var1230 = "exit(";
var1231 = 5;
var1232 = standard___standard__NativeString___to_s_with_length(var1230, var1231);
var1229 = var1232;
varonce1228 = var1229;
}
var1233 = 1;
{
var1234 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1233);
}
if (varonce1235) {
var1236 = varonce1235;
} else {
var1237 = ");";
var1238 = 2;
var1239 = standard___standard__NativeString___to_s_with_length(var1237, var1238);
var1236 = var1239;
varonce1235 = var1236;
}
var1240 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1240 = array_instance Array[Object] */
var1241 = 3;
var1242 = NEW_standard__NativeArray(var1241, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1242)->values[0] = (val*) var1229;
((struct instance_standard__NativeArray*)var1242)->values[1] = (val*) var1234;
((struct instance_standard__NativeArray*)var1242)->values[2] = (val*) var1236;
{
((void (*)(val* self, val* p0, long p1))(var1240->class->vft[COLOR_standard__array__Array__with_native]))(var1240, var1242, var1241) /* with_native on <var1240:Array[Object]>*/;
}
}
{
var1243 = ((val* (*)(val* self))(var1240->class->vft[COLOR_standard__string__Object__to_s]))(var1240) /* to_s on <var1240:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1243); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var1244 = 1;
var = var1244;
goto RET_LABEL;
} else {
if (varonce1245) {
var1246 = varonce1245;
} else {
var1247 = "sys";
var1248 = 3;
var1249 = standard___standard__NativeString___to_s_with_length(var1247, var1248);
var1246 = var1249;
varonce1245 = var1246;
}
{
var1250 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1246) /* == on <var_pname:String>*/;
}
if (var1250){
if (varonce1251) {
var1252 = varonce1251;
} else {
var1253 = "glob_sys";
var1254 = 8;
var1255 = standard___standard__NativeString___to_s_with_length(var1253, var1254);
var1252 = var1255;
varonce1251 = var1252;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2158);
show_backtrace(1);
}
{
var1256 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1252, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1256); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1257 = 1;
var = var1257;
goto RET_LABEL;
} else {
if (varonce1258) {
var1259 = varonce1258;
} else {
var1260 = "calloc_string";
var1261 = 13;
var1262 = standard___standard__NativeString___to_s_with_length(var1260, var1261);
var1259 = var1262;
varonce1258 = var1259;
}
{
var1263 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1259) /* == on <var_pname:String>*/;
}
if (var1263){
if (varonce1264) {
var1265 = varonce1264;
} else {
var1266 = "(char*)nit_alloc(";
var1267 = 17;
var1268 = standard___standard__NativeString___to_s_with_length(var1266, var1267);
var1265 = var1268;
varonce1264 = var1265;
}
var1269 = 1;
{
var1270 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1269);
}
if (varonce1271) {
var1272 = varonce1271;
} else {
var1273 = ")";
var1274 = 1;
var1275 = standard___standard__NativeString___to_s_with_length(var1273, var1274);
var1272 = var1275;
varonce1271 = var1272;
}
var1276 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1276 = array_instance Array[Object] */
var1277 = 3;
var1278 = NEW_standard__NativeArray(var1277, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1278)->values[0] = (val*) var1265;
((struct instance_standard__NativeArray*)var1278)->values[1] = (val*) var1270;
((struct instance_standard__NativeArray*)var1278)->values[2] = (val*) var1272;
{
((void (*)(val* self, val* p0, long p1))(var1276->class->vft[COLOR_standard__array__Array__with_native]))(var1276, var1278, var1277) /* with_native on <var1276:Array[Object]>*/;
}
}
{
var1279 = ((val* (*)(val* self))(var1276->class->vft[COLOR_standard__string__Object__to_s]))(var1276) /* to_s on <var1276:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2161);
show_backtrace(1);
}
{
var1280 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1279, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1280); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1281 = 1;
var = var1281;
goto RET_LABEL;
} else {
if (varonce1282) {
var1283 = varonce1282;
} else {
var1284 = "calloc_array";
var1285 = 12;
var1286 = standard___standard__NativeString___to_s_with_length(var1284, var1285);
var1283 = var1286;
varonce1282 = var1283;
}
{
var1287 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1283) /* == on <var_pname:String>*/;
}
if (var1287){
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2164);
show_backtrace(1);
}
{
((void (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__calloc_array]))(var_v, var_ret, var_arguments) /* calloc_array on <var_v:AbstractCompilerVisitor>*/;
}
var1288 = 1;
var = var1288;
goto RET_LABEL;
} else {
if (varonce1289) {
var1290 = varonce1289;
} else {
var1291 = "object_id";
var1292 = 9;
var1293 = standard___standard__NativeString___to_s_with_length(var1291, var1292);
var1290 = var1293;
varonce1289 = var1290;
}
{
var1294 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1290) /* == on <var_pname:String>*/;
}
if (var1294){
if (varonce1295) {
var1296 = varonce1295;
} else {
var1297 = "(long)";
var1298 = 6;
var1299 = standard___standard__NativeString___to_s_with_length(var1297, var1298);
var1296 = var1299;
varonce1295 = var1296;
}
{
var1300 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var1301 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1301 = array_instance Array[Object] */
var1302 = 2;
var1303 = NEW_standard__NativeArray(var1302, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1303)->values[0] = (val*) var1296;
((struct instance_standard__NativeArray*)var1303)->values[1] = (val*) var1300;
{
((void (*)(val* self, val* p0, long p1))(var1301->class->vft[COLOR_standard__array__Array__with_native]))(var1301, var1303, var1302) /* with_native on <var1301:Array[Object]>*/;
}
}
{
var1304 = ((val* (*)(val* self))(var1301->class->vft[COLOR_standard__string__Object__to_s]))(var1301) /* to_s on <var1301:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2167);
show_backtrace(1);
}
{
var1305 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1304, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1305); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1306 = 1;
var = var1306;
goto RET_LABEL;
} else {
if (varonce1307) {
var1308 = varonce1307;
} else {
var1309 = "is_same_type";
var1310 = 12;
var1311 = standard___standard__NativeString___to_s_with_length(var1309, var1310);
var1308 = var1311;
varonce1307 = var1308;
}
{
var1312 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1308) /* == on <var_pname:String>*/;
}
if (var1312){
var1313 = 0;
{
var1314 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1313);
}
var1315 = 1;
{
var1316 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1315);
}
{
var1317 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__is_same_type_test(var_v, var1314, var1316);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1317); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1318 = 1;
var = var1318;
goto RET_LABEL;
} else {
if (varonce1319) {
var1320 = varonce1319;
} else {
var1321 = "is_same_instance";
var1322 = 16;
var1323 = standard___standard__NativeString___to_s_with_length(var1321, var1322);
var1320 = var1323;
varonce1319 = var1320;
}
{
var1324 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1320) /* == on <var_pname:String>*/;
}
if (var1324){
var1325 = 0;
{
var1326 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1325);
}
var1327 = 1;
{
var1328 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1327);
}
{
var1329 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1326, var1328);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1329); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1330 = 1;
var = var1330;
goto RET_LABEL;
} else {
if (varonce1331) {
var1332 = varonce1331;
} else {
var1333 = "output_class_name";
var1334 = 17;
var1335 = standard___standard__NativeString___to_s_with_length(var1333, var1334);
var1332 = var1335;
varonce1331 = var1332;
}
{
var1336 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1332) /* == on <var_pname:String>*/;
}
if (var1336){
{
var1337 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var1338 = ((val* (*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1337) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_nat = var1338;
if (varonce1339) {
var1340 = varonce1339;
} else {
var1341 = "printf(\"%s\\n\", ";
var1342 = 15;
var1343 = standard___standard__NativeString___to_s_with_length(var1341, var1342);
var1340 = var1343;
varonce1339 = var1340;
}
if (varonce1344) {
var1345 = varonce1344;
} else {
var1346 = ");";
var1347 = 2;
var1348 = standard___standard__NativeString___to_s_with_length(var1346, var1347);
var1345 = var1348;
varonce1344 = var1345;
}
var1349 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1349 = array_instance Array[Object] */
var1350 = 3;
var1351 = NEW_standard__NativeArray(var1350, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1351)->values[0] = (val*) var1340;
((struct instance_standard__NativeArray*)var1351)->values[1] = (val*) var_nat;
((struct instance_standard__NativeArray*)var1351)->values[2] = (val*) var1345;
{
((void (*)(val* self, val* p0, long p1))(var1349->class->vft[COLOR_standard__array__Array__with_native]))(var1349, var1351, var1350) /* with_native on <var1349:Array[Object]>*/;
}
}
{
var1352 = ((val* (*)(val* self))(var1349->class->vft[COLOR_standard__string__Object__to_s]))(var1349) /* to_s on <var1349:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1352); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var1353 = 1;
var = var1353;
goto RET_LABEL;
} else {
if (varonce1354) {
var1355 = varonce1354;
} else {
var1356 = "native_class_name";
var1357 = 17;
var1358 = standard___standard__NativeString___to_s_with_length(var1356, var1357);
var1355 = var1358;
varonce1354 = var1355;
}
{
var1359 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1355) /* == on <var_pname:String>*/;
}
if (var1359){
{
var1360 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var1361 = ((val* (*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1360) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_nat1362 = var1361;
if (varonce1363) {
var1364 = varonce1363;
} else {
var1365 = "(char*)";
var1366 = 7;
var1367 = standard___standard__NativeString___to_s_with_length(var1365, var1366);
var1364 = var1367;
varonce1363 = var1364;
}
var1368 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1368 = array_instance Array[Object] */
var1369 = 2;
var1370 = NEW_standard__NativeArray(var1369, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1370)->values[0] = (val*) var1364;
((struct instance_standard__NativeArray*)var1370)->values[1] = (val*) var_nat1362;
{
((void (*)(val* self, val* p0, long p1))(var1368->class->vft[COLOR_standard__array__Array__with_native]))(var1368, var1370, var1369) /* with_native on <var1368:Array[Object]>*/;
}
}
{
var1371 = ((val* (*)(val* self))(var1368->class->vft[COLOR_standard__string__Object__to_s]))(var1368) /* to_s on <var1368:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2181);
show_backtrace(1);
}
{
var1372 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1371, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1372); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1373 = 1;
var = var1373;
goto RET_LABEL;
} else {
if (varonce1374) {
var1375 = varonce1374;
} else {
var1376 = "force_garbage_collection";
var1377 = 24;
var1378 = standard___standard__NativeString___to_s_with_length(var1376, var1377);
var1375 = var1378;
varonce1374 = var1375;
}
{
var1379 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1375) /* == on <var_pname:String>*/;
}
if (var1379){
if (varonce1380) {
var1381 = varonce1380;
} else {
var1382 = "nit_gcollect();";
var1383 = 15;
var1384 = standard___standard__NativeString___to_s_with_length(var1382, var1383);
var1381 = var1384;
varonce1380 = var1381;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1381); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var1385 = 1;
var = var1385;
goto RET_LABEL;
} else {
if (varonce1386) {
var1387 = varonce1386;
} else {
var1388 = "native_argc";
var1389 = 11;
var1390 = standard___standard__NativeString___to_s_with_length(var1388, var1389);
var1387 = var1390;
varonce1386 = var1387;
}
{
var1391 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1387) /* == on <var_pname:String>*/;
}
if (var1391){
if (varonce1392) {
var1393 = varonce1392;
} else {
var1394 = "glob_argc";
var1395 = 9;
var1396 = standard___standard__NativeString___to_s_with_length(var1394, var1395);
var1393 = var1396;
varonce1392 = var1393;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2187);
show_backtrace(1);
}
{
var1397 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1393, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1397); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1398 = 1;
var = var1398;
goto RET_LABEL;
} else {
if (varonce1399) {
var1400 = varonce1399;
} else {
var1401 = "native_argv";
var1402 = 11;
var1403 = standard___standard__NativeString___to_s_with_length(var1401, var1402);
var1400 = var1403;
varonce1399 = var1400;
}
{
var1404 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var1400) /* == on <var_pname:String>*/;
}
if (var1404){
if (varonce1405) {
var1406 = varonce1405;
} else {
var1407 = "glob_argv[";
var1408 = 10;
var1409 = standard___standard__NativeString___to_s_with_length(var1407, var1408);
var1406 = var1409;
varonce1405 = var1406;
}
var1410 = 1;
{
var1411 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var1410);
}
if (varonce1412) {
var1413 = varonce1412;
} else {
var1414 = "]";
var1415 = 1;
var1416 = standard___standard__NativeString___to_s_with_length(var1414, var1415);
var1413 = var1416;
varonce1412 = var1413;
}
var1417 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1417 = array_instance Array[Object] */
var1418 = 3;
var1419 = NEW_standard__NativeArray(var1418, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1419)->values[0] = (val*) var1406;
((struct instance_standard__NativeArray*)var1419)->values[1] = (val*) var1411;
((struct instance_standard__NativeArray*)var1419)->values[2] = (val*) var1413;
{
((void (*)(val* self, val* p0, long p1))(var1417->class->vft[COLOR_standard__array__Array__with_native]))(var1417, var1419, var1418) /* with_native on <var1417:Array[Object]>*/;
}
}
{
var1420 = ((val* (*)(val* self))(var1417->class->vft[COLOR_standard__string__Object__to_s]))(var1417) /* to_s on <var1417:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2190);
show_backtrace(1);
}
{
var1421 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1420, var_ret);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var1421); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var1422 = 1;
var = var1422;
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
var1423 = 0;
var = var1423;
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
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var11 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
val* var19 /* : ANodes[AExpr] */;
val* var21 /* : ANodes[AExpr] */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : AbstractCompiler */;
val* var29 /* : AbstractCompiler */;
val* var30 /* : ModelBuilder */;
val* var32 /* : ModelBuilder */;
val* var33 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MClassDef */;
val* var41 /* : MClassDef */;
val* var42 /* : MModule */;
val* var44 /* : MModule */;
val* var45 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var46 /* : nullable MSignature */;
val* var48 /* : nullable MSignature */;
val* var49 /* : nullable MType */;
val* var51 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var59 /* : MType */;
val* var60 /* : RuntimeVariable */;
val* var61 /* : null */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var_other65 /* var other: nullable Object */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
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
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var87 /* : NativeArray[Object] */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
val* var114 /* : RuntimeVariable */;
short int var115 /* : Bool */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "extern";
var3 = 6;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit__annotation___Prod___get_single_annotation(self, var1, var8);
}
var_at = var11;
var13 = NULL;
if (var_at == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,var13) on <var_at:nullable AAnnotation> */
var_other = var13;
{
var17 = ((short int (*)(val* self, val* p0))(var_at->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_at, var_other) /* == on <var_at:nullable AAnnotation(AAnnotation)>*/;
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
var_ = var14;
if (var14){
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_at) on <var_at:nullable AAnnotation(AAnnotation)> */
var21 = var_at->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_at:nullable AAnnotation(AAnnotation)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2552);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var19);
}
var23 = 1;
{
{ /* Inline kernel#Int#== (var22,var23) on <var22:Int> */
var26 = var22 == var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var12 = var24;
} else {
var12 = var_;
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var29 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var27) on <var27:AbstractCompiler> */
var32 = var27->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var27:AbstractCompiler> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = nit__annotation___AAnnotation___arg_as_string(var_at, var30);
}
var_externname = var33;
var34 = NULL;
if (var_externname == NULL) {
var35 = 1; /* is null */
} else {
var35 = 0; /* arg is null but recv is not */
}
if (0) {
var36 = ((short int (*)(val* self, val* p0))(var_externname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_externname, var34) /* == on <var_externname:nullable Object(nullable String)>*/;
var35 = var36;
}
if (var35){
var37 = 0;
var = var37;
goto RET_LABEL;
} else {
}
} else {
var38 = 0;
var = var38;
goto RET_LABEL;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var41 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var39) on <var39:MClassDef> */
var44 = var39->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var39:MClassDef> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_extern(var_v, var42); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
var45 = NULL;
var_res = var45;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var48 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2210);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var46) on <var46:nullable MSignature> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1595);
show_backtrace(1);
}
var51 = var46->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var46:nullable MSignature> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_ret = var49;
var52 = NULL;
if (var_ret == NULL) {
var53 = 0; /* is null */
} else {
var53 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var52) on <var_ret:nullable MType> */
var_other = var52;
{
var56 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
}
var57 = !var56;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
{
var58 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var59 = nit___nit__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var58);
}
var_ret = var59;
{
var60 = nit___nit__AbstractCompilerVisitor___new_var_extern(var_v, var_ret);
}
var_res = var60;
} else {
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
var61 = NULL;
if (var_res == NULL) {
var62 = 1; /* is null */
} else {
var62 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var61) on <var_res:nullable RuntimeVariable> */
var_other65 = var61;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other65) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var68 = var_res == var_other65;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var63 = var66;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
if (varonce69) {
var70 = varonce69;
} else {
var71 = "(";
var72 = 1;
var73 = standard___standard__NativeString___to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = ", ";
var77 = 2;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
var79 = standard__string___Collection___join(var_arguments, var75);
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = ");";
var83 = 2;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 4;
var87 = NEW_standard__NativeArray(var86, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var87)->values[0] = (val*) var_externname;
((struct instance_standard__NativeArray*)var87)->values[1] = (val*) var70;
((struct instance_standard__NativeArray*)var87)->values[2] = (val*) var79;
((struct instance_standard__NativeArray*)var87)->values[3] = (val*) var81;
{
((void (*)(val* self, val* p0, long p1))(var85->class->vft[COLOR_standard__array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
}
{
var88 = ((val* (*)(val* self))(var85->class->vft[COLOR_standard__string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var88); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce89) {
var90 = varonce89;
} else {
var91 = " = ";
var92 = 3;
var93 = standard___standard__NativeString___to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "(";
var97 = 1;
var98 = standard___standard__NativeString___to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = ", ";
var102 = 2;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
var104 = standard__string___Collection___join(var_arguments, var100);
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = ");";
var108 = 2;
var109 = standard___standard__NativeString___to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 6;
var112 = NEW_standard__NativeArray(var111, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var112)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var112)->values[1] = (val*) var90;
((struct instance_standard__NativeArray*)var112)->values[2] = (val*) var_externname;
((struct instance_standard__NativeArray*)var112)->values[3] = (val*) var95;
((struct instance_standard__NativeArray*)var112)->values[4] = (val*) var104;
((struct instance_standard__NativeArray*)var112)->values[5] = (val*) var106;
{
((void (*)(val* self, val* p0, long p1))(var110->class->vft[COLOR_standard__array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
}
{
var113 = ((val* (*)(val* self))(var110->class->vft[COLOR_standard__string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var113); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2222);
show_backtrace(1);
}
{
var114 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret) /* box_extern on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var114;
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
}
var115 = 1;
var = var115;
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
val* var18 /* : AbstractCompiler */;
val* var20 /* : AbstractCompiler */;
val* var21 /* : ModelBuilder */;
val* var23 /* : ModelBuilder */;
val* var24 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : MClassDef */;
val* var32 /* : MClassDef */;
val* var33 /* : MModule */;
val* var35 /* : MModule */;
val* var36 /* : nullable Object */;
val* var37 /* : MType */;
val* var39 /* : MType */;
val* var_ret /* var ret: MType */;
val* var40 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var41 /* : nullable Object */;
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
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : String */;
val* var67 /* : RuntimeVariable */;
short int var68 /* : Bool */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "extern";
var3 = 6;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit__annotation___Prod___get_single_annotation(self, var1, var8);
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
var16 = ((short int (*)(val* self, val* p0))(var_at->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_at, var_other) /* == on <var_at:nullable AAnnotation(AAnnotation)>*/;
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var20 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var18) on <var18:AbstractCompiler> */
var23 = var18->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var18:AbstractCompiler> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nit__annotation___AAnnotation___arg_as_string(var_at, var21);
}
var_externname = var24;
var25 = NULL;
if (var_externname == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
var27 = ((short int (*)(val* self, val* p0))(var_externname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_externname, var25) /* == on <var_externname:nullable Object(nullable String)>*/;
var26 = var27;
}
if (var26){
var28 = 0;
var = var28;
goto RET_LABEL;
} else {
}
} else {
var29 = 0;
var = var29;
goto RET_LABEL;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var32 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var30) on <var30:MClassDef> */
var35 = var30->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var30:MClassDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_extern(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
{
var36 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var36) on <var36:nullable Object(RuntimeVariable)> */
var39 = var36->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var36:nullable Object(RuntimeVariable)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_ret = var37;
{
var40 = nit___nit__AbstractCompilerVisitor___new_var_extern(var_v, var_ret);
}
var_res = var40;
{
var41 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(var_arguments);
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " = ";
var45 = 3;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "(";
var50 = 1;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = ", ";
var55 = 2;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
var57 = standard__string___Collection___join(var_arguments, var53);
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = ");";
var61 = 2;
var62 = standard___standard__NativeString___to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 6;
var65 = NEW_standard__NativeArray(var64, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var65)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var65)->values[1] = (val*) var43;
((struct instance_standard__NativeArray*)var65)->values[2] = (val*) var_externname;
((struct instance_standard__NativeArray*)var65)->values[3] = (val*) var48;
((struct instance_standard__NativeArray*)var65)->values[4] = (val*) var57;
((struct instance_standard__NativeArray*)var65)->values[5] = (val*) var59;
{
((void (*)(val* self, val* p0, long p1))(var63->class->vft[COLOR_standard__array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
}
{
var66 = ((val* (*)(val* self))(var63->class->vft[COLOR_standard__string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var67 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret) /* box_extern on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var67;
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var68 = 1;
var = var68;
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
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable MPropDef */;
val* var21 /* : nullable MPropDef */;
val* var22 /* : nullable MType */;
val* var24 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var25 /* : Bool */;
val* var26 /* : String */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
short int var31 /* : Bool */;
short int var_ /* var : Bool */;
short int var32 /* : Bool */;
int cltype;
int idtype;
short int var33 /* : Bool */;
short int var_useiset /* var useiset: Bool */;
val* var34 /* : nullable MAttributeDef */;
val* var36 /* : nullable MAttributeDef */;
val* var37 /* : MProperty */;
val* var39 /* : MProperty */;
val* var_guard /* var guard: MAttribute */;
val* var40 /* : nullable MPropDef */;
val* var42 /* : nullable MPropDef */;
val* var43 /* : MProperty */;
val* var45 /* : MProperty */;
val* var46 /* : RuntimeVariable */;
val* var_set /* var set: nullable Object */;
val* var47 /* : RuntimeVariable */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
val* var62 /* : nullable MPropDef */;
val* var64 /* : nullable MPropDef */;
val* var65 /* : MProperty */;
val* var67 /* : MProperty */;
val* var68 /* : RuntimeVariable */;
val* var_res /* var res: nullable Object */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
short int var75 /* : Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : MClassType */;
val* var82 /* : RuntimeVariable */;
val* var_true_v /* var true_v: RuntimeVariable */;
val* var83 /* : nullable Object */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
val* var89 /* : nullable MPropDef */;
val* var91 /* : nullable MPropDef */;
val* var92 /* : MProperty */;
val* var94 /* : MProperty */;
val* var95 /* : nullable Object */;
val* var96 /* : RuntimeVariable */;
val* var97 /* : nullable StaticFrame */;
val* var99 /* : nullable StaticFrame */;
val* var100 /* : nullable RuntimeVariable */;
val* var102 /* : nullable RuntimeVariable */;
val* var103 /* : nullable MMethodDef */;
val* var105 /* : nullable MMethodDef */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
long var111 /* : Int */;
long var113 /* : Int */;
long var114 /* : Int */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
val* var118 /* : nullable MPropDef */;
val* var120 /* : nullable MPropDef */;
val* var121 /* : MProperty */;
val* var123 /* : MProperty */;
val* var124 /* : nullable Object */;
long var125 /* : Int */;
val* var126 /* : nullable Object */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : nullable MPropDef */;
val* var132 /* : nullable MPropDef */;
val* var133 /* : nullable MType */;
val* var135 /* : nullable MType */;
val* var_ret136 /* var ret: nullable MType */;
short int var137 /* : Bool */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : FlatString */;
short int var144 /* : Bool */;
short int var_145 /* var : Bool */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
short int var149 /* : Bool */;
short int var_useiset150 /* var useiset: Bool */;
short int var151 /* : Bool */;
val* var152 /* : nullable MAttributeDef */;
val* var154 /* : nullable MAttributeDef */;
val* var155 /* : MProperty */;
val* var157 /* : MProperty */;
val* var158 /* : nullable Object */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : FlatString */;
val* var164 /* : MClassType */;
val* var165 /* : RuntimeVariable */;
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
var11 = 1;
{
{ /* Inline kernel#Int#== (var8,var11) on <var8:Int> */
var14 = var8 == var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2261);
show_backtrace(1);
}
{
var15 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var_recv = var15;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var18 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var21 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2266);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var19) on <var19:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2180);
show_backtrace(1);
}
var24 = var19->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var19:nullable MPropDef(nullable MAttributeDef)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ret = var22;
if (var_ret == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2267);
show_backtrace(1);
} else {
var26 = ((val* (*)(val* self))(var_ret->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType>*/;
}
if (varonce) {
var27 = varonce;
} else {
var28 = "val*";
var29 = 4;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
{
var31 = ((short int (*)(val* self, val* p0))(var26->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var26, var27) /* == on <var26:String>*/;
}
var_ = var31;
if (var31){
/* <var_ret:nullable MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(var_ret == NULL) {
var32 = 0;
} else {
if(cltype >= var_ret->type->table_size) {
var32 = 0;
} else {
var32 = var_ret->type->type_table[cltype] == idtype;
}
}
var33 = !var32;
var25 = var33;
} else {
var25 = var_;
}
var_useiset = var25;
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var36 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2268);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var34) on <var34:nullable MAttributeDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var39 = var34->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var34:nullable MAttributeDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_guard = var37;
if (var_useiset){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var42 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (var40 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2270);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var40) on <var40:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var45 = var40->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var40:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute(var_v, var43, var_recv);
}
var_set = var46;
} else {
{
var47 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var_guard, var_recv);
}
var_set = var47;
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "if(likely(";
var51 = 10;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = ")) {";
var56 = 4;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 3;
var60 = NEW_standard__NativeArray(var59, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var60)->values[0] = (val*) var49;
((struct instance_standard__NativeArray*)var60)->values[1] = (val*) var_set;
((struct instance_standard__NativeArray*)var60)->values[2] = (val*) var54;
{
((void (*)(val* self, val* p0, long p1))(var58->class->vft[COLOR_standard__array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val* self))(var58->class->vft[COLOR_standard__string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var64 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (var62 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2275);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var62) on <var62:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var67 = var62->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var62:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var65, var_recv);
}
var_res = var68;
if (varonce69) {
var70 = varonce69;
} else {
var71 = "} else {";
var72 = 8;
var73 = standard___standard__NativeString___to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var70); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var74 = nit__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv);
}
var_value = var74;
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var_value); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var75 = !var_useiset;
if (var75){
if (varonce76) {
var77 = varonce76;
} else {
var78 = "1";
var79 = 1;
var80 = standard___standard__NativeString___to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
var81 = nit___nit__AbstractCompilerVisitor___bool_type(var_v);
}
{
var82 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var77, var81);
}
var_true_v = var82;
{
var83 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_guard, var83, var_true_v); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = "}";
var87 = 1;
var88 = standard___standard__NativeString___to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var85); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var91 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (var89 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2287);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var89) on <var89:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var94 = var89->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var89:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var96 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var92, var95);
}
var_res = var96;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var99 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (var97 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2289);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnvar (var97) on <var97:nullable StaticFrame> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1734);
show_backtrace(1);
}
var102 = var97->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var97:nullable StaticFrame> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2289);
show_backtrace(1);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var100, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var105 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var103) on <var_mpropdef:MMethodDef> */
var_other = var103;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var110 = var_mpropdef == var_other;
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
if (var106){
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var113 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
var114 = 2;
{
{ /* Inline kernel#Int#== (var111,var114) on <var111:Int> */
var117 = var111 == var114;
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
if (unlikely(!var115)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2291);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var120 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (var118 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2292);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var118) on <var118:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var123 = var118->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var118:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var125 = 1;
{
var126 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var125);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var121, var124, var126); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var129 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
if (var127){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var132 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
if (var130 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2294);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var130) on <var130:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2180);
show_backtrace(1);
}
var135 = var130->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var130:nullable MPropDef(nullable MAttributeDef)> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
var_ret136 = var133;
if (var_ret136 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2295);
show_backtrace(1);
} else {
var138 = ((val* (*)(val* self))(var_ret136->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_ret136) /* ctype on <var_ret136:nullable MType>*/;
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "val*";
var142 = 4;
var143 = standard___standard__NativeString___to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
{
var144 = ((short int (*)(val* self, val* p0))(var138->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var138, var140) /* == on <var138:String>*/;
}
var_145 = var144;
if (var144){
/* <var_ret136:nullable MType> isa MNullableType */
cltype147 = type_nit__MNullableType.color;
idtype148 = type_nit__MNullableType.id;
if(var_ret136 == NULL) {
var146 = 0;
} else {
if(cltype147 >= var_ret136->type->table_size) {
var146 = 0;
} else {
var146 = var_ret136->type->type_table[cltype147] == idtype148;
}
}
var149 = !var146;
var137 = var149;
} else {
var137 = var_145;
}
var_useiset150 = var137;
var151 = !var_useiset150;
if (var151){
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var154 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var152 = var154;
RET_LABEL153:(void)0;
}
}
if (var152 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2297);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var152) on <var152:nullable MAttributeDef> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var157 = var152->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var152:nullable MAttributeDef> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
var158 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = "1";
var162 = 1;
var163 = standard___standard__NativeString___to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
var164 = nit___nit__AbstractCompilerVisitor___bool_type(var_v);
}
{
var165 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var160, var164);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var155, var158, var165); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2301);
show_backtrace(1);
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
var3 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var6 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
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
var8 = nit__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv);
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
val* var9 /* : nullable MPropDef */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MType */;
val* var14 /* : MType */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var17 /* : Array[RuntimeVariable] */;
long var18 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: StaticFrame */;
val* var20 /* : nullable MPropDef */;
val* var22 /* : nullable MPropDef */;
val* var23 /* : nullable MType */;
val* var25 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
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
val* var44 /* : RuntimeVariable */;
val* var_value /* var value: nullable Object */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : RuntimeVariable */;
static val* varonce;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : nullable String */;
val* var66 /* : nullable String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : nullable MPropDef */;
val* var83 /* : nullable MPropDef */;
val* var84 /* : MProperty */;
val* var86 /* : MProperty */;
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
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var11 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2316);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var14 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val* (*)(val* self))(var12->class->vft[COLOR_nit__model__MType__as_notnullable]))(var12) /* as_notnullable on <var12:MType>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2316);
show_backtrace(1);
}
var17 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var18 = 1;
{
standard___standard__Array___with_capacity(var17, var18); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
((void (*)(val* self, val* p0))(var8->class->vft[COLOR_nit__abstract_compiler__StaticFrame__visitor_61d]))(var8, var_v) /* visitor= on <var8:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var8->class->vft[COLOR_nit__abstract_compiler__StaticFrame__mpropdef_61d]))(var8, var9) /* mpropdef= on <var8:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var8->class->vft[COLOR_nit__abstract_compiler__StaticFrame__receiver_61d]))(var8, var15) /* receiver= on <var8:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var8->class->vft[COLOR_nit__abstract_compiler__StaticFrame__arguments_61d]))(var8, var_) /* arguments= on <var8:StaticFrame>*/;
}
{
((void (*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8) /* init on <var8:StaticFrame>*/;
}
var_frame = var8;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var22 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2320);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var20) on <var20:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2180);
show_backtrace(1);
}
var25 = var20->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var20:nullable MPropDef(nullable MAttributeDef)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_mtype = var23;
var26 = NULL;
if (var_mtype == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var26) on <var_mtype:nullable MType> */
var_other = var26;
{
var30 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
}
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2321);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var34 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_nexpr = var32;
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var37 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
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
var42 = ((short int (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
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
var44 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_nexpr, var_mtype);
}
var_value = var44;
} else {
var45 = NULL;
if (var_nblock == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,var45) on <var_nblock:nullable AExpr> */
var_other = var45;
{
var49 = ((short int (*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nblock, var_other) /* == on <var_nblock:nullable AExpr(AExpr)>*/;
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
{
var51 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_value = var51;
{
{ /* Inline abstract_compiler#StaticFrame#returnvar= (var_frame,var_value) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val = var_value; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL52:(void)0;
}
}
if (varonce) {
var53 = varonce;
} else {
var54 = "RET_LABEL";
var55 = 9;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce = var53;
}
{
var57 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var53);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel= (var_frame,var57) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val = var57; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL58:(void)0;
}
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "{";
var62 = 1;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var60); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var_nblock); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var_frame) on <var_frame:StaticFrame> */
var66 = var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2333);
show_backtrace(1);
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = ":(void)0;";
var70 = 9;
var71 = standard___standard__NativeString___to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 2;
var74 = NEW_standard__NativeArray(var73, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var74)->values[0] = (val*) var64;
((struct instance_standard__NativeArray*)var74)->values[1] = (val*) var68;
{
((void (*)(val* self, val* p0, long p1))(var72->class->vft[COLOR_standard__array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
}
{
var75 = ((val* (*)(val* self))(var72->class->vft[COLOR_standard__string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = "}";
var79 = 1;
var80 = standard___standard__NativeString___to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var77); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2336);
show_backtrace(1);
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var83 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (var81 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2339);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var81) on <var81:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var86 = var81->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var81:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var84, var_recv, var_value); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_old_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL87:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL88:(void)0;
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
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var24 /* : MType */;
val* var26 /* : MType */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var28 /* : nullable RuntimeVariable */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2368);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var16 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = 1;
{
{ /* Inline kernel#Int#== (var14,var17) on <var14:Int> */
var20 = var14 == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2369);
show_backtrace(1);
}
{
var21 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var22 = !var21;
if (var22){
{
var23 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var23) on <var23:nullable Object(RuntimeVariable)> */
var26 = var23->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var23:nullable Object(RuntimeVariable)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
/* <var24:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var24->type->table_size) {
var27 = 0;
} else {
var27 = var24->type->type_table[cltype] == idtype;
}
if (unlikely(!var27)) {
var_class_name = var24 == NULL ? "null" : var24->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2371);
show_backtrace(1);
}
{
var28 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var24, var_arguments);
}
} else {
}
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2375);
show_backtrace(1);
}
RET_LABEL:;
}
/* method abstract_compiler#AExpr#expr for (self: AExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AExpr___expr(val* self, val* p0) {
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
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = standard__string___Object___class_name(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ":";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AExpr> */
var13 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AExpr> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nit___nit__Location___standard__string__Object__to_s(var11);
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "\\n\");";
var18 = 5;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 5;
var22 = NEW_standard__NativeArray(var21, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var22)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var22)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var22)->values[2] = (val*) var7;
((struct instance_standard__NativeArray*)var22)->values[3] = (val*) var14;
((struct instance_standard__NativeArray*)var22)->values[4] = (val*) var16;
{
((void (*)(val* self, val* p0, long p1))(var20->class->vft[COLOR_standard__array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val* self))(var20->class->vft[COLOR_standard__string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var24 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
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
var33 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "/* ";
var37 = 3;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = " = NOT YET ";
var42 = 11;
var43 = standard___standard__NativeString___to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
{
var44 = standard__string___Object___class_name(self);
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = " */";
var48 = 3;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 5;
var52 = NEW_standard__NativeArray(var51, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var52)->values[0] = (val*) var35;
((struct instance_standard__NativeArray*)var52)->values[1] = (val*) var_res;
((struct instance_standard__NativeArray*)var52)->values[2] = (val*) var40;
((struct instance_standard__NativeArray*)var52)->values[3] = (val*) var44;
((struct instance_standard__NativeArray*)var52)->values[4] = (val*) var46;
{
((void (*)(val* self, val* p0, long p1))(var50->class->vft[COLOR_standard__array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val* self))(var50->class->vft[COLOR_standard__string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
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
var = ((val* (*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler__AExpr__expr]))(self, var_v) /* expr on <self:AExpr>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
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
var5 = ((short int (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4) /* is_ok on <var_4:Iterator[AExpr]>*/;
}
if (var5){
{
var6 = ((val* (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4) /* item on <var_4:Iterator[AExpr]>*/;
}
var_e = var6;
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4) /* next on <var_4:Iterator[AExpr]>*/;
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
val* var18 /* : null */;
val* var19 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
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
var10 = ((short int (*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9) /* is_ok on <var_9:Iterator[AExpr]>*/;
}
if (var10){
{
var11 = ((val* (*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9) /* item on <var_9:Iterator[AExpr]>*/;
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
((void (*)(val* self))(var_9->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9) /* next on <var_9:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_9) on <var_9:Iterator[AExpr]> */
RET_LABEL17:(void)0;
}
}
var18 = NULL;
{
var19 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_last, var18);
}
var = var19;
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
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var15 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var16 /* : RuntimeVariable */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2423);
show_backtrace(1);
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
var10 = ((short int (*)(val* self, val* p0))(var_ne->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ne, var_other) /* == on <var_ne:nullable AExpr(AExpr)>*/;
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var14 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_ne, var12);
}
var_i = var15;
{
var16 = nit___nit__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var16, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2435);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2436);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2444);
show_backtrace(1);
}
var_variable = var1;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AVarAssignExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1772);
show_backtrace(1);
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
val* var23 /* : RuntimeVariable */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2454);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2457);
show_backtrace(1);
}
var14 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var15 = 2;
{
standard___standard__Array___with_capacity(var14, var15); /* Direct call array#Array#with_capacity on <var14:Array[RuntimeVariable]>*/
}
var_ = var14;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_vari); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var16 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var11, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
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
var21 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2458);
show_backtrace(1);
}
{
var23 = nit___nit__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var23, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2464);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var1) on <var1:nullable StaticFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var1:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
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
/* method abstract_compiler#AEscapeExpr#stmt for (self: AEscapeExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AEscapeExpr___AExpr__stmt(val* self, val* p0) {
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
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
{ /* Inline scope#AEscapeExpr#escapemark (self) on <self:AEscapeExpr> */
var6 = self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:AEscapeExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__AbstractCompilerVisitor___escapemark_name(var_v, var4);
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = ";";
var11 = 1;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_standard__NativeArray(var14, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var15)->values[0] = (val*) var;
((struct instance_standard__NativeArray*)var15)->values[1] = (val*) var7;
((struct instance_standard__NativeArray*)var15)->values[2] = (val*) var9;
{
((void (*)(val* self, val* p0, long p1))(var13->class->vft[COLOR_standard__array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val* self))(var13->class->vft[COLOR_standard__string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var16); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: AReturnExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AReturnExpr___AExpr__stmt(val* self, val* p0) {
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
val* var9 /* : nullable StaticFrame */;
val* var11 /* : nullable StaticFrame */;
val* var12 /* : nullable RuntimeVariable */;
val* var14 /* : nullable RuntimeVariable */;
val* var_returnvar /* var returnvar: RuntimeVariable */;
val* var15 /* : MType */;
val* var17 /* : MType */;
val* var18 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
val* var23 /* : nullable StaticFrame */;
val* var25 /* : nullable StaticFrame */;
val* var26 /* : nullable String */;
val* var28 /* : nullable String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AReturnExpr#n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
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
var7 = ((short int (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var11 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2476);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnvar (var9) on <var9:nullable StaticFrame> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1734);
show_backtrace(1);
}
var14 = var9->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var9:nullable StaticFrame> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2476);
show_backtrace(1);
}
var_returnvar = var12;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_returnvar) on <var_returnvar:RuntimeVariable> */
var17 = var_returnvar->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_returnvar:RuntimeVariable> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_nexpr, var15);
}
var_i = var18;
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_returnvar, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce) {
var19 = varonce;
} else {
var20 = "goto ";
var21 = 5;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce = var19;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var25 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2480);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var23) on <var23:nullable StaticFrame> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1737);
show_backtrace(1);
}
var28 = var23->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var23:nullable StaticFrame> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2480);
show_backtrace(1);
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = ";";
var32 = 1;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_standard__NativeArray(var35, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var36)->values[0] = (val*) var19;
((struct instance_standard__NativeArray*)var36)->values[1] = (val*) var26;
((struct instance_standard__NativeArray*)var36)->values[2] = (val*) var30;
{
((void (*)(val* self, val* p0, long p1))(var34->class->vft[COLOR_standard__array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val* self))(var34->class->vft[COLOR_standard__string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AAbortExpr#stmt for (self: AAbortExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AAbortExpr___AExpr__stmt(val* self, val* p0) {
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
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
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
var2 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1664);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var);
}
var_cond = var3;
if (varonce) {
var4 = varonce;
} else {
var5 = "if (";
var6 = 4;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = "){";
var11 = 2;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_standard__NativeArray(var14, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var15)->values[0] = (val*) var4;
((struct instance_standard__NativeArray*)var15)->values[1] = (val*) var_cond;
((struct instance_standard__NativeArray*)var15)->values[2] = (val*) var9;
{
((void (*)(val* self, val* p0, long p1))(var13->class->vft[COLOR_standard__array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val* self))(var13->class->vft[COLOR_standard__string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var16); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var19 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var17); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "} else {";
var23 = 8;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var27 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "}";
var31 = 1;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#expr for (self: AIfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AIfExpr___AExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AIfExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2501);
show_backtrace(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1664);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_cond = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if (";
var11 = 4;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "){";
var16 = 2;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var_cond;
((struct instance_standard__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var24 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2504);
show_backtrace(1);
}
var25 = NULL;
{
var26 = nit___nit__AbstractCompilerVisitor___expr(var_v, var22, var25);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "} else {";
var30 = 8;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var34 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2506);
show_backtrace(1);
}
var35 = NULL;
{
var36 = nit___nit__AbstractCompilerVisitor___expr(var_v, var32, var35);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = "}";
var40 = 1;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIfexprExpr#expr for (self: AIfexprExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AIfexprExpr___AExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AIfexprExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2515);
show_backtrace(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:AIfexprExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1681);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_cond = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if (";
var11 = 4;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "){";
var16 = 2;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var_cond;
((struct instance_standard__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:AIfexprExpr> */
var24 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1687);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = NULL;
{
var26 = nit___nit__AbstractCompilerVisitor___expr(var_v, var22, var25);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "} else {";
var30 = 8;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:AIfexprExpr> */
var34 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = NULL;
{
var36 = nit___nit__AbstractCompilerVisitor___expr(var_v, var32, var35);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = "}";
var40 = 1;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADoExpr#stmt for (self: ADoExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___ADoExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable EscapeMark */;
val* var5 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ADoExpr#break_mark (self) on <self:ADoExpr> */
var5 = self->attrs[COLOR_nit__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var3); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: AWhileExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AWhileExpr___AExpr__stmt(val* self, val* p0) {
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
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1705);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var4);
}
var_cond = var7;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "if (!";
var11 = 5;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ") break;";
var16 = 8;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var_cond;
((struct instance_standard__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var24 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AWhileExpr#continue_mark (self) on <self:AWhileExpr> */
var27 = self->attrs[COLOR_nit__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "}";
var31 = 1;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var35 = self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: ALoopExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___ALoopExpr___AExpr__stmt(val* self, val* p0) {
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
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var4); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ALoopExpr#continue_mark (self) on <self:ALoopExpr> */
var9 = self->attrs[COLOR_nit__scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var7); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "}";
var13 = 1;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var11); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ALoopExpr#break_mark (self) on <self:ALoopExpr> */
var17 = self->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
