#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AInternMethPropdef#compile_to_c for (self: AInternMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AInternMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : MProperty */;
val* var1 /* : String */;
val* var_pname /* var pname: String */;
val* var2 /* : MClassDef */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var_cname /* var cname: String */;
val* var5 /* : nullable MSignature */;
val* var6 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : nullable Object */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
short int var62 /* : Bool */;
long var63 /* : Int */;
val* var64 /* : nullable Object */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
long var70 /* : Int */;
val* var71 /* : nullable Object */;
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : String */;
val* var76 /* : RuntimeVariable */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
short int var82 /* : Bool */;
long var83 /* : Int */;
val* var84 /* : nullable Object */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
long var90 /* : Int */;
val* var91 /* : nullable Object */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
val* var96 /* : RuntimeVariable */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
short int var102 /* : Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : String */;
long var108 /* : Int */;
val* var109 /* : nullable Object */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
val* var114 /* : RuntimeVariable */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
short int var120 /* : Bool */;
long var121 /* : Int */;
val* var122 /* : nullable Object */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : String */;
val* var128 /* : Array[Object] */;
long var129 /* : Int */;
val* var130 /* : NativeArray[Object] */;
val* var131 /* : String */;
val* var132 /* : RuntimeVariable */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
short int var138 /* : Bool */;
long var139 /* : Int */;
val* var140 /* : nullable Object */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
val* var146 /* : Array[Object] */;
long var147 /* : Int */;
val* var148 /* : NativeArray[Object] */;
val* var149 /* : String */;
val* var150 /* : RuntimeVariable */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
short int var156 /* : Bool */;
long var157 /* : Int */;
val* var158 /* : nullable Object */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
long var164 /* : Int */;
val* var165 /* : nullable Object */;
val* var166 /* : Array[Object] */;
long var167 /* : Int */;
val* var168 /* : NativeArray[Object] */;
val* var169 /* : String */;
val* var170 /* : RuntimeVariable */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : String */;
short int var176 /* : Bool */;
long var177 /* : Int */;
val* var178 /* : nullable Object */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : String */;
long var184 /* : Int */;
val* var185 /* : nullable Object */;
val* var186 /* : Array[Object] */;
long var187 /* : Int */;
val* var188 /* : NativeArray[Object] */;
val* var189 /* : String */;
val* var190 /* : RuntimeVariable */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : String */;
short int var196 /* : Bool */;
long var197 /* : Int */;
val* var198 /* : nullable Object */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : String */;
long var204 /* : Int */;
val* var205 /* : nullable Object */;
val* var206 /* : Array[Object] */;
long var207 /* : Int */;
val* var208 /* : NativeArray[Object] */;
val* var209 /* : String */;
val* var210 /* : RuntimeVariable */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : String */;
short int var216 /* : Bool */;
long var217 /* : Int */;
val* var218 /* : nullable Object */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
long var222 /* : Int */;
val* var223 /* : String */;
long var224 /* : Int */;
val* var225 /* : nullable Object */;
val* var226 /* : Array[Object] */;
long var227 /* : Int */;
val* var228 /* : NativeArray[Object] */;
val* var229 /* : String */;
val* var230 /* : RuntimeVariable */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : String */;
short int var236 /* : Bool */;
long var237 /* : Int */;
val* var238 /* : nullable Object */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : String */;
long var244 /* : Int */;
val* var245 /* : nullable Object */;
val* var246 /* : Array[Object] */;
long var247 /* : Int */;
val* var248 /* : NativeArray[Object] */;
val* var249 /* : String */;
val* var250 /* : RuntimeVariable */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
long var254 /* : Int */;
val* var255 /* : String */;
short int var256 /* : Bool */;
long var257 /* : Int */;
val* var258 /* : nullable Object */;
long var259 /* : Int */;
val* var260 /* : nullable Object */;
val* var261 /* : RuntimeVariable */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : String */;
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
val* var277 /* : String */;
val* var278 /* : Array[Object] */;
long var279 /* : Int */;
val* var280 /* : NativeArray[Object] */;
val* var281 /* : String */;
val* var282 /* : RuntimeVariable */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : NativeString */;
long var286 /* : Int */;
val* var287 /* : String */;
short int var288 /* : Bool */;
long var289 /* : Int */;
val* var290 /* : nullable Object */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : String */;
long var296 /* : Int */;
val* var297 /* : nullable Object */;
val* var298 /* : Array[Object] */;
long var299 /* : Int */;
val* var300 /* : NativeArray[Object] */;
val* var301 /* : String */;
val* var302 /* : RuntimeVariable */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
long var306 /* : Int */;
val* var307 /* : String */;
short int var308 /* : Bool */;
long var309 /* : Int */;
val* var310 /* : nullable Object */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : String */;
long var316 /* : Int */;
val* var317 /* : nullable Object */;
val* var318 /* : Array[Object] */;
long var319 /* : Int */;
val* var320 /* : NativeArray[Object] */;
val* var321 /* : String */;
val* var322 /* : RuntimeVariable */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
long var326 /* : Int */;
val* var327 /* : String */;
short int var328 /* : Bool */;
long var329 /* : Int */;
val* var330 /* : nullable Object */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : String */;
long var336 /* : Int */;
val* var337 /* : nullable Object */;
val* var338 /* : Array[Object] */;
long var339 /* : Int */;
val* var340 /* : NativeArray[Object] */;
val* var341 /* : String */;
val* var342 /* : RuntimeVariable */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : String */;
short int var348 /* : Bool */;
long var349 /* : Int */;
val* var350 /* : nullable Object */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : String */;
long var356 /* : Int */;
val* var357 /* : nullable Object */;
val* var358 /* : Array[Object] */;
long var359 /* : Int */;
val* var360 /* : NativeArray[Object] */;
val* var361 /* : String */;
val* var362 /* : RuntimeVariable */;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : NativeString */;
long var366 /* : Int */;
val* var367 /* : String */;
short int var368 /* : Bool */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
long var372 /* : Int */;
val* var373 /* : String */;
long var374 /* : Int */;
val* var375 /* : nullable Object */;
val* var376 /* : Array[Object] */;
long var377 /* : Int */;
val* var378 /* : NativeArray[Object] */;
val* var379 /* : String */;
val* var380 /* : RuntimeVariable */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
long var384 /* : Int */;
val* var385 /* : String */;
short int var386 /* : Bool */;
long var387 /* : Int */;
val* var388 /* : nullable Object */;
val* var389 /* : Array[Object] */;
long var390 /* : Int */;
val* var391 /* : NativeArray[Object] */;
val* var392 /* : String */;
val* var393 /* : RuntimeVariable */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : String */;
short int var399 /* : Bool */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
long var403 /* : Int */;
val* var404 /* : String */;
short int var405 /* : Bool */;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
long var409 /* : Int */;
val* var410 /* : String */;
val* var411 /* : nullable Object */;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : NativeString */;
long var415 /* : Int */;
val* var416 /* : String */;
val* var417 /* : Array[Object] */;
long var418 /* : Int */;
val* var419 /* : NativeArray[Object] */;
val* var420 /* : String */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
long var424 /* : Int */;
val* var425 /* : String */;
short int var426 /* : Bool */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
long var430 /* : Int */;
val* var431 /* : String */;
val* var432 /* : nullable Object */;
val* var433 /* : Array[Object] */;
long var434 /* : Int */;
val* var435 /* : NativeArray[Object] */;
val* var436 /* : String */;
val* var437 /* : RuntimeVariable */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : NativeString */;
long var441 /* : Int */;
val* var442 /* : String */;
short int var443 /* : Bool */;
long var444 /* : Int */;
val* var445 /* : nullable Object */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
long var449 /* : Int */;
val* var450 /* : String */;
long var451 /* : Int */;
val* var452 /* : nullable Object */;
val* var453 /* : Array[Object] */;
long var454 /* : Int */;
val* var455 /* : NativeArray[Object] */;
val* var456 /* : String */;
val* var457 /* : RuntimeVariable */;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : NativeString */;
long var461 /* : Int */;
val* var462 /* : String */;
short int var463 /* : Bool */;
long var464 /* : Int */;
val* var465 /* : nullable Object */;
static val* varonce466;
val* var467 /* : String */;
char* var468 /* : NativeString */;
long var469 /* : Int */;
val* var470 /* : String */;
long var471 /* : Int */;
val* var472 /* : nullable Object */;
val* var473 /* : Array[Object] */;
long var474 /* : Int */;
val* var475 /* : NativeArray[Object] */;
val* var476 /* : String */;
val* var477 /* : RuntimeVariable */;
static val* varonce478;
val* var479 /* : String */;
char* var480 /* : NativeString */;
long var481 /* : Int */;
val* var482 /* : String */;
short int var483 /* : Bool */;
long var484 /* : Int */;
val* var485 /* : nullable Object */;
static val* varonce486;
val* var487 /* : String */;
char* var488 /* : NativeString */;
long var489 /* : Int */;
val* var490 /* : String */;
long var491 /* : Int */;
val* var492 /* : nullable Object */;
val* var493 /* : Array[Object] */;
long var494 /* : Int */;
val* var495 /* : NativeArray[Object] */;
val* var496 /* : String */;
val* var497 /* : RuntimeVariable */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : NativeString */;
long var501 /* : Int */;
val* var502 /* : String */;
short int var503 /* : Bool */;
long var504 /* : Int */;
val* var505 /* : nullable Object */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
long var509 /* : Int */;
val* var510 /* : String */;
long var511 /* : Int */;
val* var512 /* : nullable Object */;
val* var513 /* : Array[Object] */;
long var514 /* : Int */;
val* var515 /* : NativeArray[Object] */;
val* var516 /* : String */;
val* var517 /* : RuntimeVariable */;
static val* varonce518;
val* var519 /* : String */;
char* var520 /* : NativeString */;
long var521 /* : Int */;
val* var522 /* : String */;
short int var523 /* : Bool */;
long var524 /* : Int */;
val* var525 /* : nullable Object */;
long var526 /* : Int */;
val* var527 /* : nullable Object */;
val* var528 /* : RuntimeVariable */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : NativeString */;
long var532 /* : Int */;
val* var533 /* : String */;
short int var534 /* : Bool */;
long var535 /* : Int */;
val* var536 /* : nullable Object */;
long var537 /* : Int */;
val* var538 /* : nullable Object */;
val* var539 /* : RuntimeVariable */;
val* var_res540 /* var res: RuntimeVariable */;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : NativeString */;
long var544 /* : Int */;
val* var545 /* : String */;
val* var546 /* : Array[Object] */;
long var547 /* : Int */;
val* var548 /* : NativeArray[Object] */;
val* var549 /* : String */;
val* var550 /* : RuntimeVariable */;
static val* varonce551;
val* var552 /* : String */;
char* var553 /* : NativeString */;
long var554 /* : Int */;
val* var555 /* : String */;
short int var556 /* : Bool */;
long var557 /* : Int */;
val* var558 /* : nullable Object */;
static val* varonce559;
val* var560 /* : String */;
char* var561 /* : NativeString */;
long var562 /* : Int */;
val* var563 /* : String */;
val* var564 /* : Array[Object] */;
long var565 /* : Int */;
val* var566 /* : NativeArray[Object] */;
val* var567 /* : String */;
val* var568 /* : RuntimeVariable */;
static val* varonce569;
val* var570 /* : String */;
char* var571 /* : NativeString */;
long var572 /* : Int */;
val* var573 /* : String */;
short int var574 /* : Bool */;
long var575 /* : Int */;
val* var576 /* : nullable Object */;
static val* varonce577;
val* var578 /* : String */;
char* var579 /* : NativeString */;
long var580 /* : Int */;
val* var581 /* : String */;
val* var582 /* : Array[Object] */;
long var583 /* : Int */;
val* var584 /* : NativeArray[Object] */;
val* var585 /* : String */;
val* var586 /* : RuntimeVariable */;
static val* varonce587;
val* var588 /* : String */;
char* var589 /* : NativeString */;
long var590 /* : Int */;
val* var591 /* : String */;
short int var592 /* : Bool */;
long var593 /* : Int */;
val* var594 /* : nullable Object */;
static val* varonce595;
val* var596 /* : String */;
char* var597 /* : NativeString */;
long var598 /* : Int */;
val* var599 /* : String */;
long var600 /* : Int */;
val* var601 /* : nullable Object */;
val* var602 /* : Array[Object] */;
long var603 /* : Int */;
val* var604 /* : NativeArray[Object] */;
val* var605 /* : String */;
val* var606 /* : RuntimeVariable */;
static val* varonce607;
val* var608 /* : String */;
char* var609 /* : NativeString */;
long var610 /* : Int */;
val* var611 /* : String */;
short int var612 /* : Bool */;
long var613 /* : Int */;
val* var614 /* : nullable Object */;
static val* varonce615;
val* var616 /* : String */;
char* var617 /* : NativeString */;
long var618 /* : Int */;
val* var619 /* : String */;
long var620 /* : Int */;
val* var621 /* : nullable Object */;
val* var622 /* : Array[Object] */;
long var623 /* : Int */;
val* var624 /* : NativeArray[Object] */;
val* var625 /* : String */;
val* var626 /* : RuntimeVariable */;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
long var630 /* : Int */;
val* var631 /* : String */;
short int var632 /* : Bool */;
long var633 /* : Int */;
val* var634 /* : nullable Object */;
static val* varonce635;
val* var636 /* : String */;
char* var637 /* : NativeString */;
long var638 /* : Int */;
val* var639 /* : String */;
long var640 /* : Int */;
val* var641 /* : nullable Object */;
val* var642 /* : Array[Object] */;
long var643 /* : Int */;
val* var644 /* : NativeArray[Object] */;
val* var645 /* : String */;
val* var646 /* : RuntimeVariable */;
static val* varonce647;
val* var648 /* : String */;
char* var649 /* : NativeString */;
long var650 /* : Int */;
val* var651 /* : String */;
short int var652 /* : Bool */;
long var653 /* : Int */;
val* var654 /* : nullable Object */;
static val* varonce655;
val* var656 /* : String */;
char* var657 /* : NativeString */;
long var658 /* : Int */;
val* var659 /* : String */;
long var660 /* : Int */;
val* var661 /* : nullable Object */;
val* var662 /* : Array[Object] */;
long var663 /* : Int */;
val* var664 /* : NativeArray[Object] */;
val* var665 /* : String */;
val* var666 /* : RuntimeVariable */;
static val* varonce667;
val* var668 /* : String */;
char* var669 /* : NativeString */;
long var670 /* : Int */;
val* var671 /* : String */;
short int var672 /* : Bool */;
long var673 /* : Int */;
val* var674 /* : nullable Object */;
static val* varonce675;
val* var676 /* : String */;
char* var677 /* : NativeString */;
long var678 /* : Int */;
val* var679 /* : String */;
val* var680 /* : Array[Object] */;
long var681 /* : Int */;
val* var682 /* : NativeArray[Object] */;
val* var683 /* : String */;
val* var684 /* : RuntimeVariable */;
static val* varonce685;
val* var686 /* : String */;
char* var687 /* : NativeString */;
long var688 /* : Int */;
val* var689 /* : String */;
short int var690 /* : Bool */;
static val* varonce691;
val* var692 /* : String */;
char* var693 /* : NativeString */;
long var694 /* : Int */;
val* var695 /* : String */;
long var696 /* : Int */;
val* var697 /* : nullable Object */;
val* var698 /* : Array[Object] */;
long var699 /* : Int */;
val* var700 /* : NativeArray[Object] */;
val* var701 /* : String */;
val* var702 /* : RuntimeVariable */;
static val* varonce703;
val* var704 /* : String */;
char* var705 /* : NativeString */;
long var706 /* : Int */;
val* var707 /* : String */;
short int var708 /* : Bool */;
static val* varonce709;
val* var710 /* : String */;
char* var711 /* : NativeString */;
long var712 /* : Int */;
val* var713 /* : String */;
short int var714 /* : Bool */;
static val* varonce715;
val* var716 /* : String */;
char* var717 /* : NativeString */;
long var718 /* : Int */;
val* var719 /* : String */;
val* var720 /* : nullable Object */;
static val* varonce721;
val* var722 /* : String */;
char* var723 /* : NativeString */;
long var724 /* : Int */;
val* var725 /* : String */;
val* var726 /* : Array[Object] */;
long var727 /* : Int */;
val* var728 /* : NativeArray[Object] */;
val* var729 /* : String */;
static val* varonce730;
val* var731 /* : String */;
char* var732 /* : NativeString */;
long var733 /* : Int */;
val* var734 /* : String */;
short int var735 /* : Bool */;
static val* varonce736;
val* var737 /* : String */;
char* var738 /* : NativeString */;
long var739 /* : Int */;
val* var740 /* : String */;
val* var741 /* : nullable Object */;
val* var742 /* : Array[Object] */;
long var743 /* : Int */;
val* var744 /* : NativeArray[Object] */;
val* var745 /* : String */;
val* var746 /* : RuntimeVariable */;
static val* varonce747;
val* var748 /* : String */;
char* var749 /* : NativeString */;
long var750 /* : Int */;
val* var751 /* : String */;
short int var752 /* : Bool */;
long var753 /* : Int */;
val* var754 /* : nullable Object */;
long var755 /* : Int */;
val* var756 /* : nullable Object */;
val* var757 /* : RuntimeVariable */;
static val* varonce758;
val* var759 /* : String */;
char* var760 /* : NativeString */;
long var761 /* : Int */;
val* var762 /* : String */;
short int var763 /* : Bool */;
long var764 /* : Int */;
val* var765 /* : nullable Object */;
long var766 /* : Int */;
val* var767 /* : nullable Object */;
val* var768 /* : RuntimeVariable */;
val* var_res769 /* var res: RuntimeVariable */;
static val* varonce770;
val* var771 /* : String */;
char* var772 /* : NativeString */;
long var773 /* : Int */;
val* var774 /* : String */;
val* var775 /* : Array[Object] */;
long var776 /* : Int */;
val* var777 /* : NativeArray[Object] */;
val* var778 /* : String */;
val* var779 /* : RuntimeVariable */;
static val* varonce780;
val* var781 /* : String */;
char* var782 /* : NativeString */;
long var783 /* : Int */;
val* var784 /* : String */;
short int var785 /* : Bool */;
static val* varonce786;
val* var787 /* : String */;
char* var788 /* : NativeString */;
long var789 /* : Int */;
val* var790 /* : String */;
short int var791 /* : Bool */;
static val* varonce792;
val* var793 /* : String */;
char* var794 /* : NativeString */;
long var795 /* : Int */;
val* var796 /* : String */;
val* var797 /* : nullable Object */;
static val* varonce798;
val* var799 /* : String */;
char* var800 /* : NativeString */;
long var801 /* : Int */;
val* var802 /* : String */;
val* var803 /* : Array[Object] */;
long var804 /* : Int */;
val* var805 /* : NativeArray[Object] */;
val* var806 /* : String */;
static val* varonce807;
val* var808 /* : String */;
char* var809 /* : NativeString */;
long var810 /* : Int */;
val* var811 /* : String */;
short int var812 /* : Bool */;
static val* varonce813;
val* var814 /* : String */;
char* var815 /* : NativeString */;
long var816 /* : Int */;
val* var817 /* : String */;
val* var818 /* : nullable Object */;
val* var819 /* : Array[Object] */;
long var820 /* : Int */;
val* var821 /* : NativeArray[Object] */;
val* var822 /* : String */;
val* var823 /* : RuntimeVariable */;
static val* varonce824;
val* var825 /* : String */;
char* var826 /* : NativeString */;
long var827 /* : Int */;
val* var828 /* : String */;
short int var829 /* : Bool */;
long var830 /* : Int */;
val* var831 /* : nullable Object */;
static val* varonce832;
val* var833 /* : String */;
char* var834 /* : NativeString */;
long var835 /* : Int */;
val* var836 /* : String */;
long var837 /* : Int */;
val* var838 /* : nullable Object */;
val* var839 /* : Array[Object] */;
long var840 /* : Int */;
val* var841 /* : NativeArray[Object] */;
val* var842 /* : String */;
val* var843 /* : RuntimeVariable */;
static val* varonce844;
val* var845 /* : String */;
char* var846 /* : NativeString */;
long var847 /* : Int */;
val* var848 /* : String */;
short int var849 /* : Bool */;
long var850 /* : Int */;
val* var851 /* : nullable Object */;
static val* varonce852;
val* var853 /* : String */;
char* var854 /* : NativeString */;
long var855 /* : Int */;
val* var856 /* : String */;
long var857 /* : Int */;
val* var858 /* : nullable Object */;
val* var859 /* : Array[Object] */;
long var860 /* : Int */;
val* var861 /* : NativeArray[Object] */;
val* var862 /* : String */;
val* var863 /* : RuntimeVariable */;
static val* varonce864;
val* var865 /* : String */;
char* var866 /* : NativeString */;
long var867 /* : Int */;
val* var868 /* : String */;
short int var869 /* : Bool */;
static val* varonce870;
val* var871 /* : String */;
char* var872 /* : NativeString */;
long var873 /* : Int */;
val* var874 /* : String */;
long var875 /* : Int */;
val* var876 /* : nullable Object */;
val* var877 /* : Array[Object] */;
long var878 /* : Int */;
val* var879 /* : NativeArray[Object] */;
val* var880 /* : String */;
val* var881 /* : RuntimeVariable */;
static val* varonce882;
val* var883 /* : String */;
char* var884 /* : NativeString */;
long var885 /* : Int */;
val* var886 /* : String */;
short int var887 /* : Bool */;
long var888 /* : Int */;
val* var889 /* : nullable Object */;
static val* varonce890;
val* var891 /* : String */;
char* var892 /* : NativeString */;
long var893 /* : Int */;
val* var894 /* : String */;
val* var895 /* : Array[Object] */;
long var896 /* : Int */;
val* var897 /* : NativeArray[Object] */;
val* var898 /* : String */;
val* var899 /* : RuntimeVariable */;
static val* varonce900;
val* var901 /* : String */;
char* var902 /* : NativeString */;
long var903 /* : Int */;
val* var904 /* : String */;
short int var905 /* : Bool */;
long var906 /* : Int */;
val* var907 /* : nullable Object */;
static val* varonce908;
val* var909 /* : String */;
char* var910 /* : NativeString */;
long var911 /* : Int */;
val* var912 /* : String */;
val* var913 /* : Array[Object] */;
long var914 /* : Int */;
val* var915 /* : NativeArray[Object] */;
val* var916 /* : String */;
val* var917 /* : RuntimeVariable */;
static val* varonce918;
val* var919 /* : String */;
char* var920 /* : NativeString */;
long var921 /* : Int */;
val* var922 /* : String */;
short int var923 /* : Bool */;
long var924 /* : Int */;
val* var925 /* : nullable Object */;
static val* varonce926;
val* var927 /* : String */;
char* var928 /* : NativeString */;
long var929 /* : Int */;
val* var930 /* : String */;
long var931 /* : Int */;
val* var932 /* : nullable Object */;
val* var933 /* : Array[Object] */;
long var934 /* : Int */;
val* var935 /* : NativeArray[Object] */;
val* var936 /* : String */;
val* var937 /* : RuntimeVariable */;
static val* varonce938;
val* var939 /* : String */;
char* var940 /* : NativeString */;
long var941 /* : Int */;
val* var942 /* : String */;
short int var943 /* : Bool */;
long var944 /* : Int */;
val* var945 /* : nullable Object */;
static val* varonce946;
val* var947 /* : String */;
char* var948 /* : NativeString */;
long var949 /* : Int */;
val* var950 /* : String */;
long var951 /* : Int */;
val* var952 /* : nullable Object */;
val* var953 /* : Array[Object] */;
long var954 /* : Int */;
val* var955 /* : NativeArray[Object] */;
val* var956 /* : String */;
val* var957 /* : RuntimeVariable */;
static val* varonce958;
val* var959 /* : String */;
char* var960 /* : NativeString */;
long var961 /* : Int */;
val* var962 /* : String */;
short int var963 /* : Bool */;
long var964 /* : Int */;
val* var965 /* : nullable Object */;
long var966 /* : Int */;
val* var967 /* : nullable Object */;
val* var968 /* : RuntimeVariable */;
static val* varonce969;
val* var970 /* : String */;
char* var971 /* : NativeString */;
long var972 /* : Int */;
val* var973 /* : String */;
short int var974 /* : Bool */;
long var975 /* : Int */;
val* var976 /* : nullable Object */;
long var977 /* : Int */;
val* var978 /* : nullable Object */;
val* var979 /* : RuntimeVariable */;
val* var_res980 /* var res: RuntimeVariable */;
static val* varonce981;
val* var982 /* : String */;
char* var983 /* : NativeString */;
long var984 /* : Int */;
val* var985 /* : String */;
val* var986 /* : Array[Object] */;
long var987 /* : Int */;
val* var988 /* : NativeArray[Object] */;
val* var989 /* : String */;
val* var990 /* : RuntimeVariable */;
static val* varonce991;
val* var992 /* : String */;
char* var993 /* : NativeString */;
long var994 /* : Int */;
val* var995 /* : String */;
short int var996 /* : Bool */;
long var997 /* : Int */;
val* var998 /* : nullable Object */;
static val* varonce999;
val* var1000 /* : String */;
char* var1001 /* : NativeString */;
long var1002 /* : Int */;
val* var1003 /* : String */;
long var1004 /* : Int */;
val* var1005 /* : nullable Object */;
val* var1006 /* : Array[Object] */;
long var1007 /* : Int */;
val* var1008 /* : NativeArray[Object] */;
val* var1009 /* : String */;
val* var1010 /* : RuntimeVariable */;
static val* varonce1011;
val* var1012 /* : String */;
char* var1013 /* : NativeString */;
long var1014 /* : Int */;
val* var1015 /* : String */;
short int var1016 /* : Bool */;
long var1017 /* : Int */;
val* var1018 /* : nullable Object */;
static val* varonce1019;
val* var1020 /* : String */;
char* var1021 /* : NativeString */;
long var1022 /* : Int */;
val* var1023 /* : String */;
long var1024 /* : Int */;
val* var1025 /* : nullable Object */;
val* var1026 /* : Array[Object] */;
long var1027 /* : Int */;
val* var1028 /* : NativeArray[Object] */;
val* var1029 /* : String */;
val* var1030 /* : RuntimeVariable */;
static val* varonce1031;
val* var1032 /* : String */;
char* var1033 /* : NativeString */;
long var1034 /* : Int */;
val* var1035 /* : String */;
short int var1036 /* : Bool */;
long var1037 /* : Int */;
val* var1038 /* : nullable Object */;
static val* varonce1039;
val* var1040 /* : String */;
char* var1041 /* : NativeString */;
long var1042 /* : Int */;
val* var1043 /* : String */;
long var1044 /* : Int */;
val* var1045 /* : nullable Object */;
val* var1046 /* : Array[Object] */;
long var1047 /* : Int */;
val* var1048 /* : NativeArray[Object] */;
val* var1049 /* : String */;
val* var1050 /* : RuntimeVariable */;
static val* varonce1051;
val* var1052 /* : String */;
char* var1053 /* : NativeString */;
long var1054 /* : Int */;
val* var1055 /* : String */;
short int var1056 /* : Bool */;
long var1057 /* : Int */;
val* var1058 /* : nullable Object */;
static val* varonce1059;
val* var1060 /* : String */;
char* var1061 /* : NativeString */;
long var1062 /* : Int */;
val* var1063 /* : String */;
long var1064 /* : Int */;
val* var1065 /* : nullable Object */;
val* var1066 /* : Array[Object] */;
long var1067 /* : Int */;
val* var1068 /* : NativeArray[Object] */;
val* var1069 /* : String */;
val* var1070 /* : RuntimeVariable */;
static val* varonce1071;
val* var1072 /* : String */;
char* var1073 /* : NativeString */;
long var1074 /* : Int */;
val* var1075 /* : String */;
short int var1076 /* : Bool */;
static val* varonce1077;
val* var1078 /* : String */;
char* var1079 /* : NativeString */;
long var1080 /* : Int */;
val* var1081 /* : String */;
long var1082 /* : Int */;
val* var1083 /* : nullable Object */;
val* var1084 /* : Array[Object] */;
long var1085 /* : Int */;
val* var1086 /* : NativeArray[Object] */;
val* var1087 /* : String */;
val* var1088 /* : RuntimeVariable */;
static val* varonce1089;
val* var1090 /* : String */;
char* var1091 /* : NativeString */;
long var1092 /* : Int */;
val* var1093 /* : String */;
short int var1094 /* : Bool */;
static val* varonce1095;
val* var1096 /* : String */;
char* var1097 /* : NativeString */;
long var1098 /* : Int */;
val* var1099 /* : String */;
short int var1100 /* : Bool */;
long var1101 /* : Int */;
val* var1102 /* : nullable Object */;
static val* varonce1103;
val* var1104 /* : String */;
char* var1105 /* : NativeString */;
long var1106 /* : Int */;
val* var1107 /* : String */;
long var1108 /* : Int */;
val* var1109 /* : nullable Object */;
static val* varonce1110;
val* var1111 /* : String */;
char* var1112 /* : NativeString */;
long var1113 /* : Int */;
val* var1114 /* : String */;
val* var1115 /* : Array[Object] */;
long var1116 /* : Int */;
val* var1117 /* : NativeArray[Object] */;
val* var1118 /* : String */;
val* var1119 /* : RuntimeVariable */;
static val* varonce1120;
val* var1121 /* : String */;
char* var1122 /* : NativeString */;
long var1123 /* : Int */;
val* var1124 /* : String */;
short int var1125 /* : Bool */;
long var1126 /* : Int */;
val* var1127 /* : nullable Object */;
static val* varonce1128;
val* var1129 /* : String */;
char* var1130 /* : NativeString */;
long var1131 /* : Int */;
val* var1132 /* : String */;
long var1133 /* : Int */;
val* var1134 /* : nullable Object */;
static val* varonce1135;
val* var1136 /* : String */;
char* var1137 /* : NativeString */;
long var1138 /* : Int */;
val* var1139 /* : String */;
long var1140 /* : Int */;
val* var1141 /* : nullable Object */;
static val* varonce1142;
val* var1143 /* : String */;
char* var1144 /* : NativeString */;
long var1145 /* : Int */;
val* var1146 /* : String */;
val* var1147 /* : Array[Object] */;
long var1148 /* : Int */;
val* var1149 /* : NativeArray[Object] */;
val* var1150 /* : String */;
static val* varonce1151;
val* var1152 /* : String */;
char* var1153 /* : NativeString */;
long var1154 /* : Int */;
val* var1155 /* : String */;
short int var1156 /* : Bool */;
static val* varonce1157;
val* var1158 /* : String */;
char* var1159 /* : NativeString */;
long var1160 /* : Int */;
val* var1161 /* : String */;
long var1162 /* : Int */;
val* var1163 /* : nullable Object */;
static val* varonce1164;
val* var1165 /* : String */;
char* var1166 /* : NativeString */;
long var1167 /* : Int */;
val* var1168 /* : String */;
long var1169 /* : Int */;
val* var1170 /* : nullable Object */;
static val* varonce1171;
val* var1172 /* : String */;
char* var1173 /* : NativeString */;
long var1174 /* : Int */;
val* var1175 /* : String */;
long var1176 /* : Int */;
val* var1177 /* : nullable Object */;
static val* varonce1178;
val* var1179 /* : String */;
char* var1180 /* : NativeString */;
long var1181 /* : Int */;
val* var1182 /* : String */;
long var1183 /* : Int */;
val* var1184 /* : nullable Object */;
static val* varonce1185;
val* var1186 /* : String */;
char* var1187 /* : NativeString */;
long var1188 /* : Int */;
val* var1189 /* : String */;
long var1190 /* : Int */;
val* var1191 /* : nullable Object */;
static val* varonce1192;
val* var1193 /* : String */;
char* var1194 /* : NativeString */;
long var1195 /* : Int */;
val* var1196 /* : String */;
val* var1197 /* : Array[Object] */;
long var1198 /* : Int */;
val* var1199 /* : NativeArray[Object] */;
val* var1200 /* : String */;
static val* varonce1201;
val* var1202 /* : String */;
char* var1203 /* : NativeString */;
long var1204 /* : Int */;
val* var1205 /* : String */;
short int var1206 /* : Bool */;
static val* varonce1207;
val* var1208 /* : String */;
char* var1209 /* : NativeString */;
long var1210 /* : Int */;
val* var1211 /* : String */;
long var1212 /* : Int */;
val* var1213 /* : nullable Object */;
static val* varonce1214;
val* var1215 /* : String */;
char* var1216 /* : NativeString */;
long var1217 /* : Int */;
val* var1218 /* : String */;
val* var1219 /* : Array[Object] */;
long var1220 /* : Int */;
val* var1221 /* : NativeArray[Object] */;
val* var1222 /* : String */;
val* var1223 /* : RuntimeVariable */;
static val* varonce1224;
val* var1225 /* : String */;
char* var1226 /* : NativeString */;
long var1227 /* : Int */;
val* var1228 /* : String */;
short int var1229 /* : Bool */;
static val* varonce1230;
val* var1231 /* : String */;
char* var1232 /* : NativeString */;
long var1233 /* : Int */;
val* var1234 /* : String */;
short int var1235 /* : Bool */;
static val* varonce1236;
val* var1237 /* : String */;
char* var1238 /* : NativeString */;
long var1239 /* : Int */;
val* var1240 /* : String */;
long var1241 /* : Int */;
val* var1242 /* : nullable Object */;
static val* varonce1243;
val* var1244 /* : String */;
char* var1245 /* : NativeString */;
long var1246 /* : Int */;
val* var1247 /* : String */;
val* var1248 /* : Array[Object] */;
long var1249 /* : Int */;
val* var1250 /* : NativeArray[Object] */;
val* var1251 /* : String */;
static val* varonce1252;
val* var1253 /* : String */;
char* var1254 /* : NativeString */;
long var1255 /* : Int */;
val* var1256 /* : String */;
short int var1257 /* : Bool */;
static val* varonce1258;
val* var1259 /* : String */;
char* var1260 /* : NativeString */;
long var1261 /* : Int */;
val* var1262 /* : String */;
val* var1263 /* : RuntimeVariable */;
static val* varonce1264;
val* var1265 /* : String */;
char* var1266 /* : NativeString */;
long var1267 /* : Int */;
val* var1268 /* : String */;
short int var1269 /* : Bool */;
static val* varonce1270;
val* var1271 /* : String */;
char* var1272 /* : NativeString */;
long var1273 /* : Int */;
val* var1274 /* : String */;
long var1275 /* : Int */;
val* var1276 /* : nullable Object */;
static val* varonce1277;
val* var1278 /* : String */;
char* var1279 /* : NativeString */;
long var1280 /* : Int */;
val* var1281 /* : String */;
val* var1282 /* : Array[Object] */;
long var1283 /* : Int */;
val* var1284 /* : NativeArray[Object] */;
val* var1285 /* : String */;
val* var1286 /* : RuntimeVariable */;
static val* varonce1287;
val* var1288 /* : String */;
char* var1289 /* : NativeString */;
long var1290 /* : Int */;
val* var1291 /* : String */;
short int var1292 /* : Bool */;
static val* varonce1293;
val* var1294 /* : String */;
char* var1295 /* : NativeString */;
long var1296 /* : Int */;
val* var1297 /* : String */;
short int var1298 /* : Bool */;
static val* varonce1299;
val* var1300 /* : String */;
char* var1301 /* : NativeString */;
long var1302 /* : Int */;
val* var1303 /* : String */;
val* var1304 /* : nullable Object */;
val* var1305 /* : Array[Object] */;
long var1306 /* : Int */;
val* var1307 /* : NativeArray[Object] */;
val* var1308 /* : String */;
val* var1309 /* : RuntimeVariable */;
static val* varonce1310;
val* var1311 /* : String */;
char* var1312 /* : NativeString */;
long var1313 /* : Int */;
val* var1314 /* : String */;
short int var1315 /* : Bool */;
long var1316 /* : Int */;
val* var1317 /* : nullable Object */;
long var1318 /* : Int */;
val* var1319 /* : nullable Object */;
val* var1320 /* : RuntimeVariable */;
static val* varonce1321;
val* var1322 /* : String */;
char* var1323 /* : NativeString */;
long var1324 /* : Int */;
val* var1325 /* : String */;
short int var1326 /* : Bool */;
long var1327 /* : Int */;
val* var1328 /* : nullable Object */;
long var1329 /* : Int */;
val* var1330 /* : nullable Object */;
val* var1331 /* : RuntimeVariable */;
static val* varonce1332;
val* var1333 /* : String */;
char* var1334 /* : NativeString */;
long var1335 /* : Int */;
val* var1336 /* : String */;
short int var1337 /* : Bool */;
val* var1338 /* : nullable Object */;
val* var1339 /* : String */;
val* var_nat /* var nat: String */;
static val* varonce1340;
val* var1341 /* : String */;
char* var1342 /* : NativeString */;
long var1343 /* : Int */;
val* var1344 /* : String */;
static val* varonce1345;
val* var1346 /* : String */;
char* var1347 /* : NativeString */;
long var1348 /* : Int */;
val* var1349 /* : String */;
val* var1350 /* : Array[Object] */;
long var1351 /* : Int */;
val* var1352 /* : NativeArray[Object] */;
val* var1353 /* : String */;
static val* varonce1354;
val* var1355 /* : String */;
char* var1356 /* : NativeString */;
long var1357 /* : Int */;
val* var1358 /* : String */;
short int var1359 /* : Bool */;
val* var1360 /* : nullable Object */;
val* var1361 /* : String */;
val* var_nat1362 /* var nat: String */;
static val* varonce1363;
val* var1364 /* : String */;
char* var1365 /* : NativeString */;
long var1366 /* : Int */;
val* var1367 /* : String */;
val* var1368 /* : Array[Object] */;
long var1369 /* : Int */;
val* var1370 /* : NativeArray[Object] */;
val* var1371 /* : String */;
val* var1372 /* : RuntimeVariable */;
static val* varonce1373;
val* var1374 /* : String */;
char* var1375 /* : NativeString */;
long var1376 /* : Int */;
val* var1377 /* : String */;
short int var1378 /* : Bool */;
static val* varonce1379;
val* var1380 /* : String */;
char* var1381 /* : NativeString */;
long var1382 /* : Int */;
val* var1383 /* : String */;
static val* varonce1384;
val* var1385 /* : String */;
char* var1386 /* : NativeString */;
long var1387 /* : Int */;
val* var1388 /* : String */;
short int var1389 /* : Bool */;
static val* varonce1390;
val* var1391 /* : String */;
char* var1392 /* : NativeString */;
long var1393 /* : Int */;
val* var1394 /* : String */;
val* var1395 /* : RuntimeVariable */;
static val* varonce1396;
val* var1397 /* : String */;
char* var1398 /* : NativeString */;
long var1399 /* : Int */;
val* var1400 /* : String */;
short int var1401 /* : Bool */;
static val* varonce1402;
val* var1403 /* : String */;
char* var1404 /* : NativeString */;
long var1405 /* : Int */;
val* var1406 /* : String */;
long var1407 /* : Int */;
val* var1408 /* : nullable Object */;
static val* varonce1409;
val* var1410 /* : String */;
char* var1411 /* : NativeString */;
long var1412 /* : Int */;
val* var1413 /* : String */;
val* var1414 /* : Array[Object] */;
long var1415 /* : Int */;
val* var1416 /* : NativeArray[Object] */;
val* var1417 /* : String */;
val* var1418 /* : RuntimeVariable */;
static val* varonce1419;
val* var1420 /* : String */;
char* var1421 /* : NativeString */;
long var1422 /* : Int */;
val* var1423 /* : String */;
val* var1424 /* : String */;
static val* varonce1425;
val* var1426 /* : String */;
char* var1427 /* : NativeString */;
long var1428 /* : Int */;
val* var1429 /* : String */;
static val* varonce1430;
val* var1431 /* : String */;
char* var1432 /* : NativeString */;
long var1433 /* : Int */;
val* var1434 /* : String */;
val* var1435 /* : Location */;
val* var1436 /* : String */;
static val* varonce1437;
val* var1438 /* : String */;
char* var1439 /* : NativeString */;
long var1440 /* : Int */;
val* var1441 /* : String */;
val* var1442 /* : Array[Object] */;
long var1443 /* : Int */;
val* var1444 /* : NativeArray[Object] */;
val* var1445 /* : String */;
static val* varonce1446;
val* var1447 /* : String */;
char* var1448 /* : NativeString */;
long var1449 /* : Int */;
val* var1450 /* : String */;
val* var1451 /* : Array[Object] */;
long var1452 /* : Int */;
val* var1453 /* : NativeArray[Object] */;
val* var1454 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MProperty__name]))(var) /* name on <var:MProperty(MMethod)>*/;
var_pname = var1;
var2 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__mclass]))(var2) /* mclass on <var2:MClassDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClass__name]))(var3) /* name on <var3:MClass>*/;
var_cname = var4;
var5 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1587);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MSignature__return_mtype]))(var5) /* return_mtype on <var5:nullable MSignature>*/;
}
var_ret = var6;
var7 = NULL;
if (var_ret == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var10 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(var_v, var_ret, var9) /* resolve_for on <var_v:AbstractCompilerVisitor>*/;
var_ret = var10;
} else {
}
if (varonce) {
var12 = varonce;
} else {
var13 = "==";
var14 = 2;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
var16 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___33d_61d]))(var_pname, var12) /* != on <var_pname:String>*/;
var_ = var16;
if (var16){
if (varonce17) {
var18 = varonce17;
} else {
var19 = "!=";
var20 = 2;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___33d_61d]))(var_pname, var18) /* != on <var_pname:String>*/;
var11 = var22;
} else {
var11 = var_;
}
if (var11){
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments) /* adapt_signature on <var_v:AbstractCompilerVisitor>*/;
} else {
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "Int";
var26 = 3;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var24) /* == on <var_cname:String>*/;
if (var28){
if (varonce29) {
var30 = varonce29;
} else {
var31 = "output";
var32 = 6;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var30) /* == on <var_pname:String>*/;
if (var34){
if (varonce35) {
var36 = varonce35;
} else {
var37 = "printf(\"%ld\\n\", ";
var38 = 16;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = ");";
var44 = 2;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var40;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var42;
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var49) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce50) {
var51 = varonce50;
} else {
var52 = "object_id";
var53 = 9;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var51) /* == on <var_pname:String>*/;
if (var55){
var56 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var56) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce57) {
var58 = varonce57;
} else {
var59 = "+";
var60 = 1;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var62 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var58) /* == on <var_pname:String>*/;
if (var62){
var63 = 0;
var64 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var63) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = " + ";
var68 = 3;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = 1;
var71 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var70) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var72 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 3;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var64;
((struct instance_array__NativeArray*)var74)->values[1] = (val*) var66;
((struct instance_array__NativeArray*)var74)->values[2] = (val*) var71;
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
var75 = ((val* (*)(val*))(var72->class->vft[COLOR_string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1602);
show_backtrace(1);
}
var76 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var75, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var76) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce77) {
var78 = varonce77;
} else {
var79 = "-";
var80 = 1;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var78) /* == on <var_pname:String>*/;
if (var82){
var83 = 0;
var84 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var83) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce85) {
var86 = varonce85;
} else {
var87 = " - ";
var88 = 3;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = 1;
var91 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var90) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var92 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 3;
var94 = NEW_array__NativeArray(var93, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var94)->values[0] = (val*) var84;
((struct instance_array__NativeArray*)var94)->values[1] = (val*) var86;
((struct instance_array__NativeArray*)var94)->values[2] = (val*) var91;
((void (*)(val*, val*, long))(var92->class->vft[COLOR_array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
var95 = ((val* (*)(val*))(var92->class->vft[COLOR_string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1605);
show_backtrace(1);
}
var96 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var95, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var96) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce97) {
var98 = varonce97;
} else {
var99 = "unary -";
var100 = 7;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var98) /* == on <var_pname:String>*/;
if (var102){
if (varonce103) {
var104 = varonce103;
} else {
var105 = "-";
var106 = 1;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var108 = 0;
var109 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var108) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var110 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 2;
var112 = NEW_array__NativeArray(var111, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var112)->values[0] = (val*) var104;
((struct instance_array__NativeArray*)var112)->values[1] = (val*) var109;
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
var113 = ((val* (*)(val*))(var110->class->vft[COLOR_string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1608);
show_backtrace(1);
}
var114 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var113, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var114) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce115) {
var116 = varonce115;
} else {
var117 = "succ";
var118 = 4;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var116) /* == on <var_pname:String>*/;
if (var120){
var121 = 0;
var122 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var121) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce123) {
var124 = varonce123;
} else {
var125 = "+1";
var126 = 2;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var128 = array_instance Array[Object] */
var129 = 2;
var130 = NEW_array__NativeArray(var129, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var130)->values[0] = (val*) var122;
((struct instance_array__NativeArray*)var130)->values[1] = (val*) var124;
((void (*)(val*, val*, long))(var128->class->vft[COLOR_array__Array__with_native]))(var128, var130, var129) /* with_native on <var128:Array[Object]>*/;
}
var131 = ((val* (*)(val*))(var128->class->vft[COLOR_string__Object__to_s]))(var128) /* to_s on <var128:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1611);
show_backtrace(1);
}
var132 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var131, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var132) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce133) {
var134 = varonce133;
} else {
var135 = "prec";
var136 = 4;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
var138 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var134) /* == on <var_pname:String>*/;
if (var138){
var139 = 0;
var140 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var139) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce141) {
var142 = varonce141;
} else {
var143 = "-1";
var144 = 2;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var146 = array_instance Array[Object] */
var147 = 2;
var148 = NEW_array__NativeArray(var147, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var148)->values[0] = (val*) var140;
((struct instance_array__NativeArray*)var148)->values[1] = (val*) var142;
((void (*)(val*, val*, long))(var146->class->vft[COLOR_array__Array__with_native]))(var146, var148, var147) /* with_native on <var146:Array[Object]>*/;
}
var149 = ((val* (*)(val*))(var146->class->vft[COLOR_string__Object__to_s]))(var146) /* to_s on <var146:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1614);
show_backtrace(1);
}
var150 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var149, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var150) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce151) {
var152 = varonce151;
} else {
var153 = "*";
var154 = 1;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var152) /* == on <var_pname:String>*/;
if (var156){
var157 = 0;
var158 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var157) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce159) {
var160 = varonce159;
} else {
var161 = " * ";
var162 = 3;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = 1;
var165 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var164) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var166 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var166 = array_instance Array[Object] */
var167 = 3;
var168 = NEW_array__NativeArray(var167, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var168)->values[0] = (val*) var158;
((struct instance_array__NativeArray*)var168)->values[1] = (val*) var160;
((struct instance_array__NativeArray*)var168)->values[2] = (val*) var165;
((void (*)(val*, val*, long))(var166->class->vft[COLOR_array__Array__with_native]))(var166, var168, var167) /* with_native on <var166:Array[Object]>*/;
}
var169 = ((val* (*)(val*))(var166->class->vft[COLOR_string__Object__to_s]))(var166) /* to_s on <var166:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1617);
show_backtrace(1);
}
var170 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var169, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var170) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce171) {
var172 = varonce171;
} else {
var173 = "/";
var174 = 1;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
var176 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var172) /* == on <var_pname:String>*/;
if (var176){
var177 = 0;
var178 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var177) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce179) {
var180 = varonce179;
} else {
var181 = " / ";
var182 = 3;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
var184 = 1;
var185 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var184) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var186 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var186 = array_instance Array[Object] */
var187 = 3;
var188 = NEW_array__NativeArray(var187, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var188)->values[0] = (val*) var178;
((struct instance_array__NativeArray*)var188)->values[1] = (val*) var180;
((struct instance_array__NativeArray*)var188)->values[2] = (val*) var185;
((void (*)(val*, val*, long))(var186->class->vft[COLOR_array__Array__with_native]))(var186, var188, var187) /* with_native on <var186:Array[Object]>*/;
}
var189 = ((val* (*)(val*))(var186->class->vft[COLOR_string__Object__to_s]))(var186) /* to_s on <var186:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1620);
show_backtrace(1);
}
var190 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var189, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var190) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce191) {
var192 = varonce191;
} else {
var193 = "%";
var194 = 1;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
var196 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var192) /* == on <var_pname:String>*/;
if (var196){
var197 = 0;
var198 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var197) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce199) {
var200 = varonce199;
} else {
var201 = " % ";
var202 = 3;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
var204 = 1;
var205 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var204) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var206 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var206 = array_instance Array[Object] */
var207 = 3;
var208 = NEW_array__NativeArray(var207, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var208)->values[0] = (val*) var198;
((struct instance_array__NativeArray*)var208)->values[1] = (val*) var200;
((struct instance_array__NativeArray*)var208)->values[2] = (val*) var205;
((void (*)(val*, val*, long))(var206->class->vft[COLOR_array__Array__with_native]))(var206, var208, var207) /* with_native on <var206:Array[Object]>*/;
}
var209 = ((val* (*)(val*))(var206->class->vft[COLOR_string__Object__to_s]))(var206) /* to_s on <var206:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1623);
show_backtrace(1);
}
var210 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var209, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var210) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce211) {
var212 = varonce211;
} else {
var213 = "lshift";
var214 = 6;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
var216 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var212) /* == on <var_pname:String>*/;
if (var216){
var217 = 0;
var218 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var217) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce219) {
var220 = varonce219;
} else {
var221 = " << ";
var222 = 4;
var223 = string__NativeString__to_s_with_length(var221, var222);
var220 = var223;
varonce219 = var220;
}
var224 = 1;
var225 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var224) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var226 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var226 = array_instance Array[Object] */
var227 = 3;
var228 = NEW_array__NativeArray(var227, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var228)->values[0] = (val*) var218;
((struct instance_array__NativeArray*)var228)->values[1] = (val*) var220;
((struct instance_array__NativeArray*)var228)->values[2] = (val*) var225;
((void (*)(val*, val*, long))(var226->class->vft[COLOR_array__Array__with_native]))(var226, var228, var227) /* with_native on <var226:Array[Object]>*/;
}
var229 = ((val* (*)(val*))(var226->class->vft[COLOR_string__Object__to_s]))(var226) /* to_s on <var226:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1626);
show_backtrace(1);
}
var230 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var229, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var230) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce231) {
var232 = varonce231;
} else {
var233 = "rshift";
var234 = 6;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
var236 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var232) /* == on <var_pname:String>*/;
if (var236){
var237 = 0;
var238 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var237) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce239) {
var240 = varonce239;
} else {
var241 = " >> ";
var242 = 4;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
var244 = 1;
var245 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var244) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var246 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var246 = array_instance Array[Object] */
var247 = 3;
var248 = NEW_array__NativeArray(var247, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var248)->values[0] = (val*) var238;
((struct instance_array__NativeArray*)var248)->values[1] = (val*) var240;
((struct instance_array__NativeArray*)var248)->values[2] = (val*) var245;
((void (*)(val*, val*, long))(var246->class->vft[COLOR_array__Array__with_native]))(var246, var248, var247) /* with_native on <var246:Array[Object]>*/;
}
var249 = ((val* (*)(val*))(var246->class->vft[COLOR_string__Object__to_s]))(var246) /* to_s on <var246:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1629);
show_backtrace(1);
}
var250 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var249, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var250) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce251) {
var252 = varonce251;
} else {
var253 = "==";
var254 = 2;
var255 = string__NativeString__to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
var256 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var252) /* == on <var_pname:String>*/;
if (var256){
var257 = 0;
var258 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var257) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var259 = 1;
var260 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var259) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var261 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var258, var260) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var261) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce262) {
var263 = varonce262;
} else {
var264 = "!=";
var265 = 2;
var266 = string__NativeString__to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
var267 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var263) /* == on <var_pname:String>*/;
if (var267){
var268 = 0;
var269 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var268) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var270 = 1;
var271 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var270) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var272 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var269, var271) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
var_res = var272;
if (varonce273) {
var274 = varonce273;
} else {
var275 = "!";
var276 = 1;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
var278 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var278 = array_instance Array[Object] */
var279 = 2;
var280 = NEW_array__NativeArray(var279, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var280)->values[0] = (val*) var274;
((struct instance_array__NativeArray*)var280)->values[1] = (val*) var_res;
((void (*)(val*, val*, long))(var278->class->vft[COLOR_array__Array__with_native]))(var278, var280, var279) /* with_native on <var278:Array[Object]>*/;
}
var281 = ((val* (*)(val*))(var278->class->vft[COLOR_string__Object__to_s]))(var278) /* to_s on <var278:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1636);
show_backtrace(1);
}
var282 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var281, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var282) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce283) {
var284 = varonce283;
} else {
var285 = "<";
var286 = 1;
var287 = string__NativeString__to_s_with_length(var285, var286);
var284 = var287;
varonce283 = var284;
}
var288 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var284) /* == on <var_pname:String>*/;
if (var288){
var289 = 0;
var290 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var289) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce291) {
var292 = varonce291;
} else {
var293 = " < ";
var294 = 3;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
var296 = 1;
var297 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var296) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var298 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var298 = array_instance Array[Object] */
var299 = 3;
var300 = NEW_array__NativeArray(var299, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var300)->values[0] = (val*) var290;
((struct instance_array__NativeArray*)var300)->values[1] = (val*) var292;
((struct instance_array__NativeArray*)var300)->values[2] = (val*) var297;
((void (*)(val*, val*, long))(var298->class->vft[COLOR_array__Array__with_native]))(var298, var300, var299) /* with_native on <var298:Array[Object]>*/;
}
var301 = ((val* (*)(val*))(var298->class->vft[COLOR_string__Object__to_s]))(var298) /* to_s on <var298:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1639);
show_backtrace(1);
}
var302 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var301, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var302) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce303) {
var304 = varonce303;
} else {
var305 = ">";
var306 = 1;
var307 = string__NativeString__to_s_with_length(var305, var306);
var304 = var307;
varonce303 = var304;
}
var308 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var304) /* == on <var_pname:String>*/;
if (var308){
var309 = 0;
var310 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var309) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce311) {
var312 = varonce311;
} else {
var313 = " > ";
var314 = 3;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
var316 = 1;
var317 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var316) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var318 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var318 = array_instance Array[Object] */
var319 = 3;
var320 = NEW_array__NativeArray(var319, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var320)->values[0] = (val*) var310;
((struct instance_array__NativeArray*)var320)->values[1] = (val*) var312;
((struct instance_array__NativeArray*)var320)->values[2] = (val*) var317;
((void (*)(val*, val*, long))(var318->class->vft[COLOR_array__Array__with_native]))(var318, var320, var319) /* with_native on <var318:Array[Object]>*/;
}
var321 = ((val* (*)(val*))(var318->class->vft[COLOR_string__Object__to_s]))(var318) /* to_s on <var318:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1642);
show_backtrace(1);
}
var322 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var321, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var322) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce323) {
var324 = varonce323;
} else {
var325 = "<=";
var326 = 2;
var327 = string__NativeString__to_s_with_length(var325, var326);
var324 = var327;
varonce323 = var324;
}
var328 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var324) /* == on <var_pname:String>*/;
if (var328){
var329 = 0;
var330 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var329) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce331) {
var332 = varonce331;
} else {
var333 = " <= ";
var334 = 4;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
var336 = 1;
var337 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var336) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var338 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var338 = array_instance Array[Object] */
var339 = 3;
var340 = NEW_array__NativeArray(var339, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var340)->values[0] = (val*) var330;
((struct instance_array__NativeArray*)var340)->values[1] = (val*) var332;
((struct instance_array__NativeArray*)var340)->values[2] = (val*) var337;
((void (*)(val*, val*, long))(var338->class->vft[COLOR_array__Array__with_native]))(var338, var340, var339) /* with_native on <var338:Array[Object]>*/;
}
var341 = ((val* (*)(val*))(var338->class->vft[COLOR_string__Object__to_s]))(var338) /* to_s on <var338:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1645);
show_backtrace(1);
}
var342 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var341, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var342) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce343) {
var344 = varonce343;
} else {
var345 = ">=";
var346 = 2;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
var348 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var344) /* == on <var_pname:String>*/;
if (var348){
var349 = 0;
var350 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var349) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce351) {
var352 = varonce351;
} else {
var353 = " >= ";
var354 = 4;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
var356 = 1;
var357 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var356) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var358 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var358 = array_instance Array[Object] */
var359 = 3;
var360 = NEW_array__NativeArray(var359, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var360)->values[0] = (val*) var350;
((struct instance_array__NativeArray*)var360)->values[1] = (val*) var352;
((struct instance_array__NativeArray*)var360)->values[2] = (val*) var357;
((void (*)(val*, val*, long))(var358->class->vft[COLOR_array__Array__with_native]))(var358, var360, var359) /* with_native on <var358:Array[Object]>*/;
}
var361 = ((val* (*)(val*))(var358->class->vft[COLOR_string__Object__to_s]))(var358) /* to_s on <var358:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1648);
show_backtrace(1);
}
var362 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var361, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var362) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce363) {
var364 = varonce363;
} else {
var365 = "to_f";
var366 = 4;
var367 = string__NativeString__to_s_with_length(var365, var366);
var364 = var367;
varonce363 = var364;
}
var368 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var364) /* == on <var_pname:String>*/;
if (var368){
if (varonce369) {
var370 = varonce369;
} else {
var371 = "(double)";
var372 = 8;
var373 = string__NativeString__to_s_with_length(var371, var372);
var370 = var373;
varonce369 = var370;
}
var374 = 0;
var375 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var374) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var376 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var376 = array_instance Array[Object] */
var377 = 2;
var378 = NEW_array__NativeArray(var377, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var378)->values[0] = (val*) var370;
((struct instance_array__NativeArray*)var378)->values[1] = (val*) var375;
((void (*)(val*, val*, long))(var376->class->vft[COLOR_array__Array__with_native]))(var376, var378, var377) /* with_native on <var376:Array[Object]>*/;
}
var379 = ((val* (*)(val*))(var376->class->vft[COLOR_string__Object__to_s]))(var376) /* to_s on <var376:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1651);
show_backtrace(1);
}
var380 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var379, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var380) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce381) {
var382 = varonce381;
} else {
var383 = "ascii";
var384 = 5;
var385 = string__NativeString__to_s_with_length(var383, var384);
var382 = var385;
varonce381 = var382;
}
var386 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var382) /* == on <var_pname:String>*/;
if (var386){
var387 = 0;
var388 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var387) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var389 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var389 = array_instance Array[Object] */
var390 = 1;
var391 = NEW_array__NativeArray(var390, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var391)->values[0] = (val*) var388;
((void (*)(val*, val*, long))(var389->class->vft[COLOR_array__Array__with_native]))(var389, var391, var390) /* with_native on <var389:Array[Object]>*/;
}
var392 = ((val* (*)(val*))(var389->class->vft[COLOR_string__Object__to_s]))(var389) /* to_s on <var389:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1654);
show_backtrace(1);
}
var393 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var392, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var393) /* ret on <var_v:AbstractCompilerVisitor>*/;
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
if (varonce394) {
var395 = varonce394;
} else {
var396 = "Char";
var397 = 4;
var398 = string__NativeString__to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
var399 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var395) /* == on <var_cname:String>*/;
if (var399){
if (varonce400) {
var401 = varonce400;
} else {
var402 = "output";
var403 = 6;
var404 = string__NativeString__to_s_with_length(var402, var403);
var401 = var404;
varonce400 = var401;
}
var405 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var401) /* == on <var_pname:String>*/;
if (var405){
if (varonce406) {
var407 = varonce406;
} else {
var408 = "printf(\"%c\", ";
var409 = 13;
var410 = string__NativeString__to_s_with_length(var408, var409);
var407 = var410;
varonce406 = var407;
}
var411 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce412) {
var413 = varonce412;
} else {
var414 = ");";
var415 = 2;
var416 = string__NativeString__to_s_with_length(var414, var415);
var413 = var416;
varonce412 = var413;
}
var417 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var417 = array_instance Array[Object] */
var418 = 3;
var419 = NEW_array__NativeArray(var418, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var419)->values[0] = (val*) var407;
((struct instance_array__NativeArray*)var419)->values[1] = (val*) var411;
((struct instance_array__NativeArray*)var419)->values[2] = (val*) var413;
((void (*)(val*, val*, long))(var417->class->vft[COLOR_array__Array__with_native]))(var417, var419, var418) /* with_native on <var417:Array[Object]>*/;
}
var420 = ((val* (*)(val*))(var417->class->vft[COLOR_string__Object__to_s]))(var417) /* to_s on <var417:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var420) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce421) {
var422 = varonce421;
} else {
var423 = "object_id";
var424 = 9;
var425 = string__NativeString__to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
var426 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var422) /* == on <var_pname:String>*/;
if (var426){
if (varonce427) {
var428 = varonce427;
} else {
var429 = "(long)";
var430 = 6;
var431 = string__NativeString__to_s_with_length(var429, var430);
var428 = var431;
varonce427 = var428;
}
var432 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var433 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var433 = array_instance Array[Object] */
var434 = 2;
var435 = NEW_array__NativeArray(var434, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var435)->values[0] = (val*) var428;
((struct instance_array__NativeArray*)var435)->values[1] = (val*) var432;
((void (*)(val*, val*, long))(var433->class->vft[COLOR_array__Array__with_native]))(var433, var435, var434) /* with_native on <var433:Array[Object]>*/;
}
var436 = ((val* (*)(val*))(var433->class->vft[COLOR_string__Object__to_s]))(var433) /* to_s on <var433:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1662);
show_backtrace(1);
}
var437 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var436, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var437) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce438) {
var439 = varonce438;
} else {
var440 = "+";
var441 = 1;
var442 = string__NativeString__to_s_with_length(var440, var441);
var439 = var442;
varonce438 = var439;
}
var443 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var439) /* == on <var_pname:String>*/;
if (var443){
var444 = 0;
var445 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var444) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce446) {
var447 = varonce446;
} else {
var448 = " + ";
var449 = 3;
var450 = string__NativeString__to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
var451 = 1;
var452 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var451) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var453 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var453 = array_instance Array[Object] */
var454 = 3;
var455 = NEW_array__NativeArray(var454, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var455)->values[0] = (val*) var445;
((struct instance_array__NativeArray*)var455)->values[1] = (val*) var447;
((struct instance_array__NativeArray*)var455)->values[2] = (val*) var452;
((void (*)(val*, val*, long))(var453->class->vft[COLOR_array__Array__with_native]))(var453, var455, var454) /* with_native on <var453:Array[Object]>*/;
}
var456 = ((val* (*)(val*))(var453->class->vft[COLOR_string__Object__to_s]))(var453) /* to_s on <var453:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1665);
show_backtrace(1);
}
var457 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var456, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var457) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce458) {
var459 = varonce458;
} else {
var460 = "-";
var461 = 1;
var462 = string__NativeString__to_s_with_length(var460, var461);
var459 = var462;
varonce458 = var459;
}
var463 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var459) /* == on <var_pname:String>*/;
if (var463){
var464 = 0;
var465 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var464) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce466) {
var467 = varonce466;
} else {
var468 = " - ";
var469 = 3;
var470 = string__NativeString__to_s_with_length(var468, var469);
var467 = var470;
varonce466 = var467;
}
var471 = 1;
var472 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var471) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var473 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var473 = array_instance Array[Object] */
var474 = 3;
var475 = NEW_array__NativeArray(var474, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var475)->values[0] = (val*) var465;
((struct instance_array__NativeArray*)var475)->values[1] = (val*) var467;
((struct instance_array__NativeArray*)var475)->values[2] = (val*) var472;
((void (*)(val*, val*, long))(var473->class->vft[COLOR_array__Array__with_native]))(var473, var475, var474) /* with_native on <var473:Array[Object]>*/;
}
var476 = ((val* (*)(val*))(var473->class->vft[COLOR_string__Object__to_s]))(var473) /* to_s on <var473:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1668);
show_backtrace(1);
}
var477 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var476, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var477) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce478) {
var479 = varonce478;
} else {
var480 = "successor";
var481 = 9;
var482 = string__NativeString__to_s_with_length(var480, var481);
var479 = var482;
varonce478 = var479;
}
var483 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var479) /* == on <var_pname:String>*/;
if (var483){
var484 = 0;
var485 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var484) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce486) {
var487 = varonce486;
} else {
var488 = " + ";
var489 = 3;
var490 = string__NativeString__to_s_with_length(var488, var489);
var487 = var490;
varonce486 = var487;
}
var491 = 1;
var492 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var491) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var493 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var493 = array_instance Array[Object] */
var494 = 3;
var495 = NEW_array__NativeArray(var494, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var495)->values[0] = (val*) var485;
((struct instance_array__NativeArray*)var495)->values[1] = (val*) var487;
((struct instance_array__NativeArray*)var495)->values[2] = (val*) var492;
((void (*)(val*, val*, long))(var493->class->vft[COLOR_array__Array__with_native]))(var493, var495, var494) /* with_native on <var493:Array[Object]>*/;
}
var496 = ((val* (*)(val*))(var493->class->vft[COLOR_string__Object__to_s]))(var493) /* to_s on <var493:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1671);
show_backtrace(1);
}
var497 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var496, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var497) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce498) {
var499 = varonce498;
} else {
var500 = "predecessor";
var501 = 11;
var502 = string__NativeString__to_s_with_length(var500, var501);
var499 = var502;
varonce498 = var499;
}
var503 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var499) /* == on <var_pname:String>*/;
if (var503){
var504 = 0;
var505 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var504) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce506) {
var507 = varonce506;
} else {
var508 = " - ";
var509 = 3;
var510 = string__NativeString__to_s_with_length(var508, var509);
var507 = var510;
varonce506 = var507;
}
var511 = 1;
var512 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var511) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var513 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var513 = array_instance Array[Object] */
var514 = 3;
var515 = NEW_array__NativeArray(var514, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var515)->values[0] = (val*) var505;
((struct instance_array__NativeArray*)var515)->values[1] = (val*) var507;
((struct instance_array__NativeArray*)var515)->values[2] = (val*) var512;
((void (*)(val*, val*, long))(var513->class->vft[COLOR_array__Array__with_native]))(var513, var515, var514) /* with_native on <var513:Array[Object]>*/;
}
var516 = ((val* (*)(val*))(var513->class->vft[COLOR_string__Object__to_s]))(var513) /* to_s on <var513:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1674);
show_backtrace(1);
}
var517 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var516, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var517) /* ret on <var_v:AbstractCompilerVisitor>*/;
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
var523 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var519) /* == on <var_pname:String>*/;
if (var523){
var524 = 0;
var525 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var524) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var526 = 1;
var527 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var526) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var528 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var525, var527) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var528) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce529) {
var530 = varonce529;
} else {
var531 = "!=";
var532 = 2;
var533 = string__NativeString__to_s_with_length(var531, var532);
var530 = var533;
varonce529 = var530;
}
var534 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var530) /* == on <var_pname:String>*/;
if (var534){
var535 = 0;
var536 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var535) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var537 = 1;
var538 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var537) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var539 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var536, var538) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
var_res540 = var539;
if (varonce541) {
var542 = varonce541;
} else {
var543 = "!";
var544 = 1;
var545 = string__NativeString__to_s_with_length(var543, var544);
var542 = var545;
varonce541 = var542;
}
var546 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var546 = array_instance Array[Object] */
var547 = 2;
var548 = NEW_array__NativeArray(var547, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var548)->values[0] = (val*) var542;
((struct instance_array__NativeArray*)var548)->values[1] = (val*) var_res540;
((void (*)(val*, val*, long))(var546->class->vft[COLOR_array__Array__with_native]))(var546, var548, var547) /* with_native on <var546:Array[Object]>*/;
}
var549 = ((val* (*)(val*))(var546->class->vft[COLOR_string__Object__to_s]))(var546) /* to_s on <var546:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var550 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var549, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var550) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce551) {
var552 = varonce551;
} else {
var553 = "succ";
var554 = 4;
var555 = string__NativeString__to_s_with_length(var553, var554);
var552 = var555;
varonce551 = var552;
}
var556 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var552) /* == on <var_pname:String>*/;
if (var556){
var557 = 0;
var558 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var557) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce559) {
var560 = varonce559;
} else {
var561 = "+1";
var562 = 2;
var563 = string__NativeString__to_s_with_length(var561, var562);
var560 = var563;
varonce559 = var560;
}
var564 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var564 = array_instance Array[Object] */
var565 = 2;
var566 = NEW_array__NativeArray(var565, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var566)->values[0] = (val*) var558;
((struct instance_array__NativeArray*)var566)->values[1] = (val*) var560;
((void (*)(val*, val*, long))(var564->class->vft[COLOR_array__Array__with_native]))(var564, var566, var565) /* with_native on <var564:Array[Object]>*/;
}
var567 = ((val* (*)(val*))(var564->class->vft[COLOR_string__Object__to_s]))(var564) /* to_s on <var564:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1684);
show_backtrace(1);
}
var568 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var567, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var568) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce569) {
var570 = varonce569;
} else {
var571 = "prec";
var572 = 4;
var573 = string__NativeString__to_s_with_length(var571, var572);
var570 = var573;
varonce569 = var570;
}
var574 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var570) /* == on <var_pname:String>*/;
if (var574){
var575 = 0;
var576 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var575) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce577) {
var578 = varonce577;
} else {
var579 = "-1";
var580 = 2;
var581 = string__NativeString__to_s_with_length(var579, var580);
var578 = var581;
varonce577 = var578;
}
var582 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var582 = array_instance Array[Object] */
var583 = 2;
var584 = NEW_array__NativeArray(var583, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var584)->values[0] = (val*) var576;
((struct instance_array__NativeArray*)var584)->values[1] = (val*) var578;
((void (*)(val*, val*, long))(var582->class->vft[COLOR_array__Array__with_native]))(var582, var584, var583) /* with_native on <var582:Array[Object]>*/;
}
var585 = ((val* (*)(val*))(var582->class->vft[COLOR_string__Object__to_s]))(var582) /* to_s on <var582:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1687);
show_backtrace(1);
}
var586 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var585, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var586) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce587) {
var588 = varonce587;
} else {
var589 = "<";
var590 = 1;
var591 = string__NativeString__to_s_with_length(var589, var590);
var588 = var591;
varonce587 = var588;
}
var592 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var588) /* == on <var_pname:String>*/;
if (var592){
var593 = 0;
var594 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var593) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce595) {
var596 = varonce595;
} else {
var597 = " < ";
var598 = 3;
var599 = string__NativeString__to_s_with_length(var597, var598);
var596 = var599;
varonce595 = var596;
}
var600 = 1;
var601 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var600) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var602 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var602 = array_instance Array[Object] */
var603 = 3;
var604 = NEW_array__NativeArray(var603, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var604)->values[0] = (val*) var594;
((struct instance_array__NativeArray*)var604)->values[1] = (val*) var596;
((struct instance_array__NativeArray*)var604)->values[2] = (val*) var601;
((void (*)(val*, val*, long))(var602->class->vft[COLOR_array__Array__with_native]))(var602, var604, var603) /* with_native on <var602:Array[Object]>*/;
}
var605 = ((val* (*)(val*))(var602->class->vft[COLOR_string__Object__to_s]))(var602) /* to_s on <var602:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1690);
show_backtrace(1);
}
var606 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var605, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var606) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce607) {
var608 = varonce607;
} else {
var609 = ">";
var610 = 1;
var611 = string__NativeString__to_s_with_length(var609, var610);
var608 = var611;
varonce607 = var608;
}
var612 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var608) /* == on <var_pname:String>*/;
if (var612){
var613 = 0;
var614 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var613) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce615) {
var616 = varonce615;
} else {
var617 = " > ";
var618 = 3;
var619 = string__NativeString__to_s_with_length(var617, var618);
var616 = var619;
varonce615 = var616;
}
var620 = 1;
var621 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var620) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var622 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var622 = array_instance Array[Object] */
var623 = 3;
var624 = NEW_array__NativeArray(var623, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var624)->values[0] = (val*) var614;
((struct instance_array__NativeArray*)var624)->values[1] = (val*) var616;
((struct instance_array__NativeArray*)var624)->values[2] = (val*) var621;
((void (*)(val*, val*, long))(var622->class->vft[COLOR_array__Array__with_native]))(var622, var624, var623) /* with_native on <var622:Array[Object]>*/;
}
var625 = ((val* (*)(val*))(var622->class->vft[COLOR_string__Object__to_s]))(var622) /* to_s on <var622:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1693);
show_backtrace(1);
}
var626 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var625, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var626) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce627) {
var628 = varonce627;
} else {
var629 = "<=";
var630 = 2;
var631 = string__NativeString__to_s_with_length(var629, var630);
var628 = var631;
varonce627 = var628;
}
var632 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var628) /* == on <var_pname:String>*/;
if (var632){
var633 = 0;
var634 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var633) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce635) {
var636 = varonce635;
} else {
var637 = " <= ";
var638 = 4;
var639 = string__NativeString__to_s_with_length(var637, var638);
var636 = var639;
varonce635 = var636;
}
var640 = 1;
var641 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var640) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var642 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var642 = array_instance Array[Object] */
var643 = 3;
var644 = NEW_array__NativeArray(var643, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var644)->values[0] = (val*) var634;
((struct instance_array__NativeArray*)var644)->values[1] = (val*) var636;
((struct instance_array__NativeArray*)var644)->values[2] = (val*) var641;
((void (*)(val*, val*, long))(var642->class->vft[COLOR_array__Array__with_native]))(var642, var644, var643) /* with_native on <var642:Array[Object]>*/;
}
var645 = ((val* (*)(val*))(var642->class->vft[COLOR_string__Object__to_s]))(var642) /* to_s on <var642:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1696);
show_backtrace(1);
}
var646 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var645, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var646) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce647) {
var648 = varonce647;
} else {
var649 = ">=";
var650 = 2;
var651 = string__NativeString__to_s_with_length(var649, var650);
var648 = var651;
varonce647 = var648;
}
var652 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var648) /* == on <var_pname:String>*/;
if (var652){
var653 = 0;
var654 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var653) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce655) {
var656 = varonce655;
} else {
var657 = " >= ";
var658 = 4;
var659 = string__NativeString__to_s_with_length(var657, var658);
var656 = var659;
varonce655 = var656;
}
var660 = 1;
var661 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var660) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var662 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var662 = array_instance Array[Object] */
var663 = 3;
var664 = NEW_array__NativeArray(var663, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var664)->values[0] = (val*) var654;
((struct instance_array__NativeArray*)var664)->values[1] = (val*) var656;
((struct instance_array__NativeArray*)var664)->values[2] = (val*) var661;
((void (*)(val*, val*, long))(var662->class->vft[COLOR_array__Array__with_native]))(var662, var664, var663) /* with_native on <var662:Array[Object]>*/;
}
var665 = ((val* (*)(val*))(var662->class->vft[COLOR_string__Object__to_s]))(var662) /* to_s on <var662:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1699);
show_backtrace(1);
}
var666 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var665, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var666) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce667) {
var668 = varonce667;
} else {
var669 = "to_i";
var670 = 4;
var671 = string__NativeString__to_s_with_length(var669, var670);
var668 = var671;
varonce667 = var668;
}
var672 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var668) /* == on <var_pname:String>*/;
if (var672){
var673 = 0;
var674 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var673) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce675) {
var676 = varonce675;
} else {
var677 = "-\'0\'";
var678 = 4;
var679 = string__NativeString__to_s_with_length(var677, var678);
var676 = var679;
varonce675 = var676;
}
var680 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var680 = array_instance Array[Object] */
var681 = 2;
var682 = NEW_array__NativeArray(var681, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var682)->values[0] = (val*) var674;
((struct instance_array__NativeArray*)var682)->values[1] = (val*) var676;
((void (*)(val*, val*, long))(var680->class->vft[COLOR_array__Array__with_native]))(var680, var682, var681) /* with_native on <var680:Array[Object]>*/;
}
var683 = ((val* (*)(val*))(var680->class->vft[COLOR_string__Object__to_s]))(var680) /* to_s on <var680:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1702);
show_backtrace(1);
}
var684 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var683, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var684) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce685) {
var686 = varonce685;
} else {
var687 = "ascii";
var688 = 5;
var689 = string__NativeString__to_s_with_length(var687, var688);
var686 = var689;
varonce685 = var686;
}
var690 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var686) /* == on <var_pname:String>*/;
if (var690){
if (varonce691) {
var692 = varonce691;
} else {
var693 = "(unsigned char)";
var694 = 15;
var695 = string__NativeString__to_s_with_length(var693, var694);
var692 = var695;
varonce691 = var692;
}
var696 = 0;
var697 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var696) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var698 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var698 = array_instance Array[Object] */
var699 = 2;
var700 = NEW_array__NativeArray(var699, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var700)->values[0] = (val*) var692;
((struct instance_array__NativeArray*)var700)->values[1] = (val*) var697;
((void (*)(val*, val*, long))(var698->class->vft[COLOR_array__Array__with_native]))(var698, var700, var699) /* with_native on <var698:Array[Object]>*/;
}
var701 = ((val* (*)(val*))(var698->class->vft[COLOR_string__Object__to_s]))(var698) /* to_s on <var698:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1705);
show_backtrace(1);
}
var702 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var701, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var702) /* ret on <var_v:AbstractCompilerVisitor>*/;
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
if (varonce703) {
var704 = varonce703;
} else {
var705 = "Bool";
var706 = 4;
var707 = string__NativeString__to_s_with_length(var705, var706);
var704 = var707;
varonce703 = var704;
}
var708 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var704) /* == on <var_cname:String>*/;
if (var708){
if (varonce709) {
var710 = varonce709;
} else {
var711 = "output";
var712 = 6;
var713 = string__NativeString__to_s_with_length(var711, var712);
var710 = var713;
varonce709 = var710;
}
var714 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var710) /* == on <var_pname:String>*/;
if (var714){
if (varonce715) {
var716 = varonce715;
} else {
var717 = "printf(";
var718 = 7;
var719 = string__NativeString__to_s_with_length(var717, var718);
var716 = var719;
varonce715 = var716;
}
var720 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce721) {
var722 = varonce721;
} else {
var723 = "?\"true\\n\":\"false\\n\");";
var724 = 21;
var725 = string__NativeString__to_s_with_length(var723, var724);
var722 = var725;
varonce721 = var722;
}
var726 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var726 = array_instance Array[Object] */
var727 = 3;
var728 = NEW_array__NativeArray(var727, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var728)->values[0] = (val*) var716;
((struct instance_array__NativeArray*)var728)->values[1] = (val*) var720;
((struct instance_array__NativeArray*)var728)->values[2] = (val*) var722;
((void (*)(val*, val*, long))(var726->class->vft[COLOR_array__Array__with_native]))(var726, var728, var727) /* with_native on <var726:Array[Object]>*/;
}
var729 = ((val* (*)(val*))(var726->class->vft[COLOR_string__Object__to_s]))(var726) /* to_s on <var726:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var729) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce730) {
var731 = varonce730;
} else {
var732 = "object_id";
var733 = 9;
var734 = string__NativeString__to_s_with_length(var732, var733);
var731 = var734;
varonce730 = var731;
}
var735 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var731) /* == on <var_pname:String>*/;
if (var735){
if (varonce736) {
var737 = varonce736;
} else {
var738 = "(long)";
var739 = 6;
var740 = string__NativeString__to_s_with_length(var738, var739);
var737 = var740;
varonce736 = var737;
}
var741 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var742 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var742 = array_instance Array[Object] */
var743 = 2;
var744 = NEW_array__NativeArray(var743, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var744)->values[0] = (val*) var737;
((struct instance_array__NativeArray*)var744)->values[1] = (val*) var741;
((void (*)(val*, val*, long))(var742->class->vft[COLOR_array__Array__with_native]))(var742, var744, var743) /* with_native on <var742:Array[Object]>*/;
}
var745 = ((val* (*)(val*))(var742->class->vft[COLOR_string__Object__to_s]))(var742) /* to_s on <var742:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1713);
show_backtrace(1);
}
var746 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var745, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var746) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce747) {
var748 = varonce747;
} else {
var749 = "==";
var750 = 2;
var751 = string__NativeString__to_s_with_length(var749, var750);
var748 = var751;
varonce747 = var748;
}
var752 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var748) /* == on <var_pname:String>*/;
if (var752){
var753 = 0;
var754 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var753) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var755 = 1;
var756 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var755) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var757 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var754, var756) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var757) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce758) {
var759 = varonce758;
} else {
var760 = "!=";
var761 = 2;
var762 = string__NativeString__to_s_with_length(var760, var761);
var759 = var762;
varonce758 = var759;
}
var763 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var759) /* == on <var_pname:String>*/;
if (var763){
var764 = 0;
var765 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var764) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var766 = 1;
var767 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var766) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var768 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var765, var767) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
var_res769 = var768;
if (varonce770) {
var771 = varonce770;
} else {
var772 = "!";
var773 = 1;
var774 = string__NativeString__to_s_with_length(var772, var773);
var771 = var774;
varonce770 = var771;
}
var775 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var775 = array_instance Array[Object] */
var776 = 2;
var777 = NEW_array__NativeArray(var776, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var777)->values[0] = (val*) var771;
((struct instance_array__NativeArray*)var777)->values[1] = (val*) var_res769;
((void (*)(val*, val*, long))(var775->class->vft[COLOR_array__Array__with_native]))(var775, var777, var776) /* with_native on <var775:Array[Object]>*/;
}
var778 = ((val* (*)(val*))(var775->class->vft[COLOR_string__Object__to_s]))(var775) /* to_s on <var775:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1720);
show_backtrace(1);
}
var779 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var778, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var779) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (varonce780) {
var781 = varonce780;
} else {
var782 = "Float";
var783 = 5;
var784 = string__NativeString__to_s_with_length(var782, var783);
var781 = var784;
varonce780 = var781;
}
var785 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var781) /* == on <var_cname:String>*/;
if (var785){
if (varonce786) {
var787 = varonce786;
} else {
var788 = "output";
var789 = 6;
var790 = string__NativeString__to_s_with_length(var788, var789);
var787 = var790;
varonce786 = var787;
}
var791 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var787) /* == on <var_pname:String>*/;
if (var791){
if (varonce792) {
var793 = varonce792;
} else {
var794 = "printf(\"%f\\n\", ";
var795 = 15;
var796 = string__NativeString__to_s_with_length(var794, var795);
var793 = var796;
varonce792 = var793;
}
var797 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce798) {
var799 = varonce798;
} else {
var800 = ");";
var801 = 2;
var802 = string__NativeString__to_s_with_length(var800, var801);
var799 = var802;
varonce798 = var799;
}
var803 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var803 = array_instance Array[Object] */
var804 = 3;
var805 = NEW_array__NativeArray(var804, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var805)->values[0] = (val*) var793;
((struct instance_array__NativeArray*)var805)->values[1] = (val*) var797;
((struct instance_array__NativeArray*)var805)->values[2] = (val*) var799;
((void (*)(val*, val*, long))(var803->class->vft[COLOR_array__Array__with_native]))(var803, var805, var804) /* with_native on <var803:Array[Object]>*/;
}
var806 = ((val* (*)(val*))(var803->class->vft[COLOR_string__Object__to_s]))(var803) /* to_s on <var803:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var806) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce807) {
var808 = varonce807;
} else {
var809 = "object_id";
var810 = 9;
var811 = string__NativeString__to_s_with_length(var809, var810);
var808 = var811;
varonce807 = var808;
}
var812 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var808) /* == on <var_pname:String>*/;
if (var812){
if (varonce813) {
var814 = varonce813;
} else {
var815 = "(double)";
var816 = 8;
var817 = string__NativeString__to_s_with_length(var815, var816);
var814 = var817;
varonce813 = var814;
}
var818 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var819 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var819 = array_instance Array[Object] */
var820 = 2;
var821 = NEW_array__NativeArray(var820, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var821)->values[0] = (val*) var814;
((struct instance_array__NativeArray*)var821)->values[1] = (val*) var818;
((void (*)(val*, val*, long))(var819->class->vft[COLOR_array__Array__with_native]))(var819, var821, var820) /* with_native on <var819:Array[Object]>*/;
}
var822 = ((val* (*)(val*))(var819->class->vft[COLOR_string__Object__to_s]))(var819) /* to_s on <var819:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1728);
show_backtrace(1);
}
var823 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var822, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var823) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce824) {
var825 = varonce824;
} else {
var826 = "+";
var827 = 1;
var828 = string__NativeString__to_s_with_length(var826, var827);
var825 = var828;
varonce824 = var825;
}
var829 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var825) /* == on <var_pname:String>*/;
if (var829){
var830 = 0;
var831 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var830) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce832) {
var833 = varonce832;
} else {
var834 = " + ";
var835 = 3;
var836 = string__NativeString__to_s_with_length(var834, var835);
var833 = var836;
varonce832 = var833;
}
var837 = 1;
var838 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var837) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var839 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var839 = array_instance Array[Object] */
var840 = 3;
var841 = NEW_array__NativeArray(var840, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var841)->values[0] = (val*) var831;
((struct instance_array__NativeArray*)var841)->values[1] = (val*) var833;
((struct instance_array__NativeArray*)var841)->values[2] = (val*) var838;
((void (*)(val*, val*, long))(var839->class->vft[COLOR_array__Array__with_native]))(var839, var841, var840) /* with_native on <var839:Array[Object]>*/;
}
var842 = ((val* (*)(val*))(var839->class->vft[COLOR_string__Object__to_s]))(var839) /* to_s on <var839:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1731);
show_backtrace(1);
}
var843 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var842, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var843) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce844) {
var845 = varonce844;
} else {
var846 = "-";
var847 = 1;
var848 = string__NativeString__to_s_with_length(var846, var847);
var845 = var848;
varonce844 = var845;
}
var849 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var845) /* == on <var_pname:String>*/;
if (var849){
var850 = 0;
var851 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var850) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce852) {
var853 = varonce852;
} else {
var854 = " - ";
var855 = 3;
var856 = string__NativeString__to_s_with_length(var854, var855);
var853 = var856;
varonce852 = var853;
}
var857 = 1;
var858 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var857) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var859 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var859 = array_instance Array[Object] */
var860 = 3;
var861 = NEW_array__NativeArray(var860, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var861)->values[0] = (val*) var851;
((struct instance_array__NativeArray*)var861)->values[1] = (val*) var853;
((struct instance_array__NativeArray*)var861)->values[2] = (val*) var858;
((void (*)(val*, val*, long))(var859->class->vft[COLOR_array__Array__with_native]))(var859, var861, var860) /* with_native on <var859:Array[Object]>*/;
}
var862 = ((val* (*)(val*))(var859->class->vft[COLOR_string__Object__to_s]))(var859) /* to_s on <var859:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1734);
show_backtrace(1);
}
var863 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var862, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var863) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce864) {
var865 = varonce864;
} else {
var866 = "unary -";
var867 = 7;
var868 = string__NativeString__to_s_with_length(var866, var867);
var865 = var868;
varonce864 = var865;
}
var869 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var865) /* == on <var_pname:String>*/;
if (var869){
if (varonce870) {
var871 = varonce870;
} else {
var872 = "-";
var873 = 1;
var874 = string__NativeString__to_s_with_length(var872, var873);
var871 = var874;
varonce870 = var871;
}
var875 = 0;
var876 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var875) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var877 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var877 = array_instance Array[Object] */
var878 = 2;
var879 = NEW_array__NativeArray(var878, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var879)->values[0] = (val*) var871;
((struct instance_array__NativeArray*)var879)->values[1] = (val*) var876;
((void (*)(val*, val*, long))(var877->class->vft[COLOR_array__Array__with_native]))(var877, var879, var878) /* with_native on <var877:Array[Object]>*/;
}
var880 = ((val* (*)(val*))(var877->class->vft[COLOR_string__Object__to_s]))(var877) /* to_s on <var877:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1737);
show_backtrace(1);
}
var881 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var880, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var881) /* ret on <var_v:AbstractCompilerVisitor>*/;
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
var887 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var883) /* == on <var_pname:String>*/;
if (var887){
var888 = 0;
var889 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var888) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce890) {
var891 = varonce890;
} else {
var892 = "+1";
var893 = 2;
var894 = string__NativeString__to_s_with_length(var892, var893);
var891 = var894;
varonce890 = var891;
}
var895 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var895 = array_instance Array[Object] */
var896 = 2;
var897 = NEW_array__NativeArray(var896, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var897)->values[0] = (val*) var889;
((struct instance_array__NativeArray*)var897)->values[1] = (val*) var891;
((void (*)(val*, val*, long))(var895->class->vft[COLOR_array__Array__with_native]))(var895, var897, var896) /* with_native on <var895:Array[Object]>*/;
}
var898 = ((val* (*)(val*))(var895->class->vft[COLOR_string__Object__to_s]))(var895) /* to_s on <var895:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1740);
show_backtrace(1);
}
var899 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var898, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var899) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce900) {
var901 = varonce900;
} else {
var902 = "prec";
var903 = 4;
var904 = string__NativeString__to_s_with_length(var902, var903);
var901 = var904;
varonce900 = var901;
}
var905 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var901) /* == on <var_pname:String>*/;
if (var905){
var906 = 0;
var907 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var906) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce908) {
var909 = varonce908;
} else {
var910 = "-1";
var911 = 2;
var912 = string__NativeString__to_s_with_length(var910, var911);
var909 = var912;
varonce908 = var909;
}
var913 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var913 = array_instance Array[Object] */
var914 = 2;
var915 = NEW_array__NativeArray(var914, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var915)->values[0] = (val*) var907;
((struct instance_array__NativeArray*)var915)->values[1] = (val*) var909;
((void (*)(val*, val*, long))(var913->class->vft[COLOR_array__Array__with_native]))(var913, var915, var914) /* with_native on <var913:Array[Object]>*/;
}
var916 = ((val* (*)(val*))(var913->class->vft[COLOR_string__Object__to_s]))(var913) /* to_s on <var913:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1743);
show_backtrace(1);
}
var917 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var916, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var917) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce918) {
var919 = varonce918;
} else {
var920 = "*";
var921 = 1;
var922 = string__NativeString__to_s_with_length(var920, var921);
var919 = var922;
varonce918 = var919;
}
var923 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var919) /* == on <var_pname:String>*/;
if (var923){
var924 = 0;
var925 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var924) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce926) {
var927 = varonce926;
} else {
var928 = " * ";
var929 = 3;
var930 = string__NativeString__to_s_with_length(var928, var929);
var927 = var930;
varonce926 = var927;
}
var931 = 1;
var932 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var931) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var933 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var933 = array_instance Array[Object] */
var934 = 3;
var935 = NEW_array__NativeArray(var934, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var935)->values[0] = (val*) var925;
((struct instance_array__NativeArray*)var935)->values[1] = (val*) var927;
((struct instance_array__NativeArray*)var935)->values[2] = (val*) var932;
((void (*)(val*, val*, long))(var933->class->vft[COLOR_array__Array__with_native]))(var933, var935, var934) /* with_native on <var933:Array[Object]>*/;
}
var936 = ((val* (*)(val*))(var933->class->vft[COLOR_string__Object__to_s]))(var933) /* to_s on <var933:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1746);
show_backtrace(1);
}
var937 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var936, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var937) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce938) {
var939 = varonce938;
} else {
var940 = "/";
var941 = 1;
var942 = string__NativeString__to_s_with_length(var940, var941);
var939 = var942;
varonce938 = var939;
}
var943 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var939) /* == on <var_pname:String>*/;
if (var943){
var944 = 0;
var945 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var944) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce946) {
var947 = varonce946;
} else {
var948 = " / ";
var949 = 3;
var950 = string__NativeString__to_s_with_length(var948, var949);
var947 = var950;
varonce946 = var947;
}
var951 = 1;
var952 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var951) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var953 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var953 = array_instance Array[Object] */
var954 = 3;
var955 = NEW_array__NativeArray(var954, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var955)->values[0] = (val*) var945;
((struct instance_array__NativeArray*)var955)->values[1] = (val*) var947;
((struct instance_array__NativeArray*)var955)->values[2] = (val*) var952;
((void (*)(val*, val*, long))(var953->class->vft[COLOR_array__Array__with_native]))(var953, var955, var954) /* with_native on <var953:Array[Object]>*/;
}
var956 = ((val* (*)(val*))(var953->class->vft[COLOR_string__Object__to_s]))(var953) /* to_s on <var953:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1749);
show_backtrace(1);
}
var957 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var956, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var957) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce958) {
var959 = varonce958;
} else {
var960 = "==";
var961 = 2;
var962 = string__NativeString__to_s_with_length(var960, var961);
var959 = var962;
varonce958 = var959;
}
var963 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var959) /* == on <var_pname:String>*/;
if (var963){
var964 = 0;
var965 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var964) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var966 = 1;
var967 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var966) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var968 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var965, var967) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var968) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce969) {
var970 = varonce969;
} else {
var971 = "!=";
var972 = 2;
var973 = string__NativeString__to_s_with_length(var971, var972);
var970 = var973;
varonce969 = var970;
}
var974 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var970) /* == on <var_pname:String>*/;
if (var974){
var975 = 0;
var976 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var975) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var977 = 1;
var978 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var977) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var979 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var976, var978) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
var_res980 = var979;
if (varonce981) {
var982 = varonce981;
} else {
var983 = "!";
var984 = 1;
var985 = string__NativeString__to_s_with_length(var983, var984);
var982 = var985;
varonce981 = var982;
}
var986 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var986 = array_instance Array[Object] */
var987 = 2;
var988 = NEW_array__NativeArray(var987, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var988)->values[0] = (val*) var982;
((struct instance_array__NativeArray*)var988)->values[1] = (val*) var_res980;
((void (*)(val*, val*, long))(var986->class->vft[COLOR_array__Array__with_native]))(var986, var988, var987) /* with_native on <var986:Array[Object]>*/;
}
var989 = ((val* (*)(val*))(var986->class->vft[COLOR_string__Object__to_s]))(var986) /* to_s on <var986:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1756);
show_backtrace(1);
}
var990 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var989, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var990) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce991) {
var992 = varonce991;
} else {
var993 = "<";
var994 = 1;
var995 = string__NativeString__to_s_with_length(var993, var994);
var992 = var995;
varonce991 = var992;
}
var996 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var992) /* == on <var_pname:String>*/;
if (var996){
var997 = 0;
var998 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var997) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce999) {
var1000 = varonce999;
} else {
var1001 = " < ";
var1002 = 3;
var1003 = string__NativeString__to_s_with_length(var1001, var1002);
var1000 = var1003;
varonce999 = var1000;
}
var1004 = 1;
var1005 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1004) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1006 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1006 = array_instance Array[Object] */
var1007 = 3;
var1008 = NEW_array__NativeArray(var1007, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1008)->values[0] = (val*) var998;
((struct instance_array__NativeArray*)var1008)->values[1] = (val*) var1000;
((struct instance_array__NativeArray*)var1008)->values[2] = (val*) var1005;
((void (*)(val*, val*, long))(var1006->class->vft[COLOR_array__Array__with_native]))(var1006, var1008, var1007) /* with_native on <var1006:Array[Object]>*/;
}
var1009 = ((val* (*)(val*))(var1006->class->vft[COLOR_string__Object__to_s]))(var1006) /* to_s on <var1006:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1759);
show_backtrace(1);
}
var1010 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1009, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1010) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1011) {
var1012 = varonce1011;
} else {
var1013 = ">";
var1014 = 1;
var1015 = string__NativeString__to_s_with_length(var1013, var1014);
var1012 = var1015;
varonce1011 = var1012;
}
var1016 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1012) /* == on <var_pname:String>*/;
if (var1016){
var1017 = 0;
var1018 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1017) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1019) {
var1020 = varonce1019;
} else {
var1021 = " > ";
var1022 = 3;
var1023 = string__NativeString__to_s_with_length(var1021, var1022);
var1020 = var1023;
varonce1019 = var1020;
}
var1024 = 1;
var1025 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1024) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1026 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1026 = array_instance Array[Object] */
var1027 = 3;
var1028 = NEW_array__NativeArray(var1027, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1028)->values[0] = (val*) var1018;
((struct instance_array__NativeArray*)var1028)->values[1] = (val*) var1020;
((struct instance_array__NativeArray*)var1028)->values[2] = (val*) var1025;
((void (*)(val*, val*, long))(var1026->class->vft[COLOR_array__Array__with_native]))(var1026, var1028, var1027) /* with_native on <var1026:Array[Object]>*/;
}
var1029 = ((val* (*)(val*))(var1026->class->vft[COLOR_string__Object__to_s]))(var1026) /* to_s on <var1026:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1762);
show_backtrace(1);
}
var1030 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1029, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1030) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1031) {
var1032 = varonce1031;
} else {
var1033 = "<=";
var1034 = 2;
var1035 = string__NativeString__to_s_with_length(var1033, var1034);
var1032 = var1035;
varonce1031 = var1032;
}
var1036 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1032) /* == on <var_pname:String>*/;
if (var1036){
var1037 = 0;
var1038 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1037) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1039) {
var1040 = varonce1039;
} else {
var1041 = " <= ";
var1042 = 4;
var1043 = string__NativeString__to_s_with_length(var1041, var1042);
var1040 = var1043;
varonce1039 = var1040;
}
var1044 = 1;
var1045 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1044) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1046 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1046 = array_instance Array[Object] */
var1047 = 3;
var1048 = NEW_array__NativeArray(var1047, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1048)->values[0] = (val*) var1038;
((struct instance_array__NativeArray*)var1048)->values[1] = (val*) var1040;
((struct instance_array__NativeArray*)var1048)->values[2] = (val*) var1045;
((void (*)(val*, val*, long))(var1046->class->vft[COLOR_array__Array__with_native]))(var1046, var1048, var1047) /* with_native on <var1046:Array[Object]>*/;
}
var1049 = ((val* (*)(val*))(var1046->class->vft[COLOR_string__Object__to_s]))(var1046) /* to_s on <var1046:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1765);
show_backtrace(1);
}
var1050 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1049, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1050) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1051) {
var1052 = varonce1051;
} else {
var1053 = ">=";
var1054 = 2;
var1055 = string__NativeString__to_s_with_length(var1053, var1054);
var1052 = var1055;
varonce1051 = var1052;
}
var1056 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1052) /* == on <var_pname:String>*/;
if (var1056){
var1057 = 0;
var1058 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1057) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1059) {
var1060 = varonce1059;
} else {
var1061 = " >= ";
var1062 = 4;
var1063 = string__NativeString__to_s_with_length(var1061, var1062);
var1060 = var1063;
varonce1059 = var1060;
}
var1064 = 1;
var1065 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1064) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1066 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1066 = array_instance Array[Object] */
var1067 = 3;
var1068 = NEW_array__NativeArray(var1067, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1068)->values[0] = (val*) var1058;
((struct instance_array__NativeArray*)var1068)->values[1] = (val*) var1060;
((struct instance_array__NativeArray*)var1068)->values[2] = (val*) var1065;
((void (*)(val*, val*, long))(var1066->class->vft[COLOR_array__Array__with_native]))(var1066, var1068, var1067) /* with_native on <var1066:Array[Object]>*/;
}
var1069 = ((val* (*)(val*))(var1066->class->vft[COLOR_string__Object__to_s]))(var1066) /* to_s on <var1066:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1768);
show_backtrace(1);
}
var1070 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1069, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1070) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1071) {
var1072 = varonce1071;
} else {
var1073 = "to_i";
var1074 = 4;
var1075 = string__NativeString__to_s_with_length(var1073, var1074);
var1072 = var1075;
varonce1071 = var1072;
}
var1076 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1072) /* == on <var_pname:String>*/;
if (var1076){
if (varonce1077) {
var1078 = varonce1077;
} else {
var1079 = "(long)";
var1080 = 6;
var1081 = string__NativeString__to_s_with_length(var1079, var1080);
var1078 = var1081;
varonce1077 = var1078;
}
var1082 = 0;
var1083 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1082) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1084 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1084 = array_instance Array[Object] */
var1085 = 2;
var1086 = NEW_array__NativeArray(var1085, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1086)->values[0] = (val*) var1078;
((struct instance_array__NativeArray*)var1086)->values[1] = (val*) var1083;
((void (*)(val*, val*, long))(var1084->class->vft[COLOR_array__Array__with_native]))(var1084, var1086, var1085) /* with_native on <var1084:Array[Object]>*/;
}
var1087 = ((val* (*)(val*))(var1084->class->vft[COLOR_string__Object__to_s]))(var1084) /* to_s on <var1084:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1771);
show_backtrace(1);
}
var1088 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1087, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1088) /* ret on <var_v:AbstractCompilerVisitor>*/;
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
if (varonce1089) {
var1090 = varonce1089;
} else {
var1091 = "NativeString";
var1092 = 12;
var1093 = string__NativeString__to_s_with_length(var1091, var1092);
var1090 = var1093;
varonce1089 = var1090;
}
var1094 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var1090) /* == on <var_cname:String>*/;
if (var1094){
if (varonce1095) {
var1096 = varonce1095;
} else {
var1097 = "[]";
var1098 = 2;
var1099 = string__NativeString__to_s_with_length(var1097, var1098);
var1096 = var1099;
varonce1095 = var1096;
}
var1100 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1096) /* == on <var_pname:String>*/;
if (var1100){
var1101 = 0;
var1102 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1101) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1103) {
var1104 = varonce1103;
} else {
var1105 = "[";
var1106 = 1;
var1107 = string__NativeString__to_s_with_length(var1105, var1106);
var1104 = var1107;
varonce1103 = var1104;
}
var1108 = 1;
var1109 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1108) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1110) {
var1111 = varonce1110;
} else {
var1112 = "]";
var1113 = 1;
var1114 = string__NativeString__to_s_with_length(var1112, var1113);
var1111 = var1114;
varonce1110 = var1111;
}
var1115 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1115 = array_instance Array[Object] */
var1116 = 4;
var1117 = NEW_array__NativeArray(var1116, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1117)->values[0] = (val*) var1102;
((struct instance_array__NativeArray*)var1117)->values[1] = (val*) var1104;
((struct instance_array__NativeArray*)var1117)->values[2] = (val*) var1109;
((struct instance_array__NativeArray*)var1117)->values[3] = (val*) var1111;
((void (*)(val*, val*, long))(var1115->class->vft[COLOR_array__Array__with_native]))(var1115, var1117, var1116) /* with_native on <var1115:Array[Object]>*/;
}
var1118 = ((val* (*)(val*))(var1115->class->vft[COLOR_string__Object__to_s]))(var1115) /* to_s on <var1115:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1776);
show_backtrace(1);
}
var1119 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1118, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1119) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1120) {
var1121 = varonce1120;
} else {
var1122 = "[]=";
var1123 = 3;
var1124 = string__NativeString__to_s_with_length(var1122, var1123);
var1121 = var1124;
varonce1120 = var1121;
}
var1125 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1121) /* == on <var_pname:String>*/;
if (var1125){
var1126 = 0;
var1127 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1126) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1128) {
var1129 = varonce1128;
} else {
var1130 = "[";
var1131 = 1;
var1132 = string__NativeString__to_s_with_length(var1130, var1131);
var1129 = var1132;
varonce1128 = var1129;
}
var1133 = 1;
var1134 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1133) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1135) {
var1136 = varonce1135;
} else {
var1137 = "]=";
var1138 = 2;
var1139 = string__NativeString__to_s_with_length(var1137, var1138);
var1136 = var1139;
varonce1135 = var1136;
}
var1140 = 2;
var1141 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1140) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1142) {
var1143 = varonce1142;
} else {
var1144 = ";";
var1145 = 1;
var1146 = string__NativeString__to_s_with_length(var1144, var1145);
var1143 = var1146;
varonce1142 = var1143;
}
var1147 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1147 = array_instance Array[Object] */
var1148 = 6;
var1149 = NEW_array__NativeArray(var1148, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1149)->values[0] = (val*) var1127;
((struct instance_array__NativeArray*)var1149)->values[1] = (val*) var1129;
((struct instance_array__NativeArray*)var1149)->values[2] = (val*) var1134;
((struct instance_array__NativeArray*)var1149)->values[3] = (val*) var1136;
((struct instance_array__NativeArray*)var1149)->values[4] = (val*) var1141;
((struct instance_array__NativeArray*)var1149)->values[5] = (val*) var1143;
((void (*)(val*, val*, long))(var1147->class->vft[COLOR_array__Array__with_native]))(var1147, var1149, var1148) /* with_native on <var1147:Array[Object]>*/;
}
var1150 = ((val* (*)(val*))(var1147->class->vft[COLOR_string__Object__to_s]))(var1147) /* to_s on <var1147:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1150) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1151) {
var1152 = varonce1151;
} else {
var1153 = "copy_to";
var1154 = 7;
var1155 = string__NativeString__to_s_with_length(var1153, var1154);
var1152 = var1155;
varonce1151 = var1152;
}
var1156 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1152) /* == on <var_pname:String>*/;
if (var1156){
if (varonce1157) {
var1158 = varonce1157;
} else {
var1159 = "memcpy(";
var1160 = 7;
var1161 = string__NativeString__to_s_with_length(var1159, var1160);
var1158 = var1161;
varonce1157 = var1158;
}
var1162 = 1;
var1163 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1162) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1164) {
var1165 = varonce1164;
} else {
var1166 = "+";
var1167 = 1;
var1168 = string__NativeString__to_s_with_length(var1166, var1167);
var1165 = var1168;
varonce1164 = var1165;
}
var1169 = 4;
var1170 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1169) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1171) {
var1172 = varonce1171;
} else {
var1173 = ",";
var1174 = 1;
var1175 = string__NativeString__to_s_with_length(var1173, var1174);
var1172 = var1175;
varonce1171 = var1172;
}
var1176 = 0;
var1177 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1176) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1178) {
var1179 = varonce1178;
} else {
var1180 = "+";
var1181 = 1;
var1182 = string__NativeString__to_s_with_length(var1180, var1181);
var1179 = var1182;
varonce1178 = var1179;
}
var1183 = 3;
var1184 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1183) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1185) {
var1186 = varonce1185;
} else {
var1187 = ",";
var1188 = 1;
var1189 = string__NativeString__to_s_with_length(var1187, var1188);
var1186 = var1189;
varonce1185 = var1186;
}
var1190 = 2;
var1191 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1190) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1192) {
var1193 = varonce1192;
} else {
var1194 = ");";
var1195 = 2;
var1196 = string__NativeString__to_s_with_length(var1194, var1195);
var1193 = var1196;
varonce1192 = var1193;
}
var1197 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1197 = array_instance Array[Object] */
var1198 = 11;
var1199 = NEW_array__NativeArray(var1198, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1199)->values[0] = (val*) var1158;
((struct instance_array__NativeArray*)var1199)->values[1] = (val*) var1163;
((struct instance_array__NativeArray*)var1199)->values[2] = (val*) var1165;
((struct instance_array__NativeArray*)var1199)->values[3] = (val*) var1170;
((struct instance_array__NativeArray*)var1199)->values[4] = (val*) var1172;
((struct instance_array__NativeArray*)var1199)->values[5] = (val*) var1177;
((struct instance_array__NativeArray*)var1199)->values[6] = (val*) var1179;
((struct instance_array__NativeArray*)var1199)->values[7] = (val*) var1184;
((struct instance_array__NativeArray*)var1199)->values[8] = (val*) var1186;
((struct instance_array__NativeArray*)var1199)->values[9] = (val*) var1191;
((struct instance_array__NativeArray*)var1199)->values[10] = (val*) var1193;
((void (*)(val*, val*, long))(var1197->class->vft[COLOR_array__Array__with_native]))(var1197, var1199, var1198) /* with_native on <var1197:Array[Object]>*/;
}
var1200 = ((val* (*)(val*))(var1197->class->vft[COLOR_string__Object__to_s]))(var1197) /* to_s on <var1197:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1200) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1201) {
var1202 = varonce1201;
} else {
var1203 = "atoi";
var1204 = 4;
var1205 = string__NativeString__to_s_with_length(var1203, var1204);
var1202 = var1205;
varonce1201 = var1202;
}
var1206 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1202) /* == on <var_pname:String>*/;
if (var1206){
if (varonce1207) {
var1208 = varonce1207;
} else {
var1209 = "atoi(";
var1210 = 5;
var1211 = string__NativeString__to_s_with_length(var1209, var1210);
var1208 = var1211;
varonce1207 = var1208;
}
var1212 = 0;
var1213 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1212) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1214) {
var1215 = varonce1214;
} else {
var1216 = ");";
var1217 = 2;
var1218 = string__NativeString__to_s_with_length(var1216, var1217);
var1215 = var1218;
varonce1214 = var1215;
}
var1219 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1219 = array_instance Array[Object] */
var1220 = 3;
var1221 = NEW_array__NativeArray(var1220, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1221)->values[0] = (val*) var1208;
((struct instance_array__NativeArray*)var1221)->values[1] = (val*) var1213;
((struct instance_array__NativeArray*)var1221)->values[2] = (val*) var1215;
((void (*)(val*, val*, long))(var1219->class->vft[COLOR_array__Array__with_native]))(var1219, var1221, var1220) /* with_native on <var1219:Array[Object]>*/;
}
var1222 = ((val* (*)(val*))(var1219->class->vft[COLOR_string__Object__to_s]))(var1219) /* to_s on <var1219:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1785);
show_backtrace(1);
}
var1223 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1222, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1223) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (varonce1224) {
var1225 = varonce1224;
} else {
var1226 = "NativeArray";
var1227 = 11;
var1228 = string__NativeString__to_s_with_length(var1226, var1227);
var1225 = var1228;
varonce1224 = var1225;
}
var1229 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var1225) /* == on <var_cname:String>*/;
if (var1229){
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__native_array_def]))(var_v, var_pname, var_ret, var_arguments) /* native_array_def on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
}
}
}
if (varonce1230) {
var1231 = varonce1230;
} else {
var1232 = "exit";
var1233 = 4;
var1234 = string__NativeString__to_s_with_length(var1232, var1233);
var1231 = var1234;
varonce1230 = var1231;
}
var1235 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1231) /* == on <var_pname:String>*/;
if (var1235){
if (varonce1236) {
var1237 = varonce1236;
} else {
var1238 = "exit(";
var1239 = 5;
var1240 = string__NativeString__to_s_with_length(var1238, var1239);
var1237 = var1240;
varonce1236 = var1237;
}
var1241 = 1;
var1242 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1241) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1243) {
var1244 = varonce1243;
} else {
var1245 = ");";
var1246 = 2;
var1247 = string__NativeString__to_s_with_length(var1245, var1246);
var1244 = var1247;
varonce1243 = var1244;
}
var1248 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1248 = array_instance Array[Object] */
var1249 = 3;
var1250 = NEW_array__NativeArray(var1249, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1250)->values[0] = (val*) var1237;
((struct instance_array__NativeArray*)var1250)->values[1] = (val*) var1242;
((struct instance_array__NativeArray*)var1250)->values[2] = (val*) var1244;
((void (*)(val*, val*, long))(var1248->class->vft[COLOR_array__Array__with_native]))(var1248, var1250, var1249) /* with_native on <var1248:Array[Object]>*/;
}
var1251 = ((val* (*)(val*))(var1248->class->vft[COLOR_string__Object__to_s]))(var1248) /* to_s on <var1248:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1251) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1252) {
var1253 = varonce1252;
} else {
var1254 = "sys";
var1255 = 3;
var1256 = string__NativeString__to_s_with_length(var1254, var1255);
var1253 = var1256;
varonce1252 = var1253;
}
var1257 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1253) /* == on <var_pname:String>*/;
if (var1257){
if (varonce1258) {
var1259 = varonce1258;
} else {
var1260 = "glob_sys";
var1261 = 8;
var1262 = string__NativeString__to_s_with_length(var1260, var1261);
var1259 = var1262;
varonce1258 = var1259;
}
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1796);
show_backtrace(1);
}
var1263 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1259, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1263) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1264) {
var1265 = varonce1264;
} else {
var1266 = "calloc_string";
var1267 = 13;
var1268 = string__NativeString__to_s_with_length(var1266, var1267);
var1265 = var1268;
varonce1264 = var1265;
}
var1269 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1265) /* == on <var_pname:String>*/;
if (var1269){
if (varonce1270) {
var1271 = varonce1270;
} else {
var1272 = "(char*)nit_alloc(";
var1273 = 17;
var1274 = string__NativeString__to_s_with_length(var1272, var1273);
var1271 = var1274;
varonce1270 = var1271;
}
var1275 = 1;
var1276 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1275) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1277) {
var1278 = varonce1277;
} else {
var1279 = ")";
var1280 = 1;
var1281 = string__NativeString__to_s_with_length(var1279, var1280);
var1278 = var1281;
varonce1277 = var1278;
}
var1282 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1282 = array_instance Array[Object] */
var1283 = 3;
var1284 = NEW_array__NativeArray(var1283, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1284)->values[0] = (val*) var1271;
((struct instance_array__NativeArray*)var1284)->values[1] = (val*) var1276;
((struct instance_array__NativeArray*)var1284)->values[2] = (val*) var1278;
((void (*)(val*, val*, long))(var1282->class->vft[COLOR_array__Array__with_native]))(var1282, var1284, var1283) /* with_native on <var1282:Array[Object]>*/;
}
var1285 = ((val* (*)(val*))(var1282->class->vft[COLOR_string__Object__to_s]))(var1282) /* to_s on <var1282:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1799);
show_backtrace(1);
}
var1286 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1285, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1286) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1287) {
var1288 = varonce1287;
} else {
var1289 = "calloc_array";
var1290 = 12;
var1291 = string__NativeString__to_s_with_length(var1289, var1290);
var1288 = var1291;
varonce1287 = var1288;
}
var1292 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1288) /* == on <var_pname:String>*/;
if (var1292){
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1802);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__calloc_array]))(var_v, var_ret, var_arguments) /* calloc_array on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1293) {
var1294 = varonce1293;
} else {
var1295 = "object_id";
var1296 = 9;
var1297 = string__NativeString__to_s_with_length(var1295, var1296);
var1294 = var1297;
varonce1293 = var1294;
}
var1298 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1294) /* == on <var_pname:String>*/;
if (var1298){
if (varonce1299) {
var1300 = varonce1299;
} else {
var1301 = "(long)";
var1302 = 6;
var1303 = string__NativeString__to_s_with_length(var1301, var1302);
var1300 = var1303;
varonce1299 = var1300;
}
var1304 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var1305 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1305 = array_instance Array[Object] */
var1306 = 2;
var1307 = NEW_array__NativeArray(var1306, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1307)->values[0] = (val*) var1300;
((struct instance_array__NativeArray*)var1307)->values[1] = (val*) var1304;
((void (*)(val*, val*, long))(var1305->class->vft[COLOR_array__Array__with_native]))(var1305, var1307, var1306) /* with_native on <var1305:Array[Object]>*/;
}
var1308 = ((val* (*)(val*))(var1305->class->vft[COLOR_string__Object__to_s]))(var1305) /* to_s on <var1305:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1805);
show_backtrace(1);
}
var1309 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1308, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1309) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1310) {
var1311 = varonce1310;
} else {
var1312 = "is_same_type";
var1313 = 12;
var1314 = string__NativeString__to_s_with_length(var1312, var1313);
var1311 = var1314;
varonce1310 = var1311;
}
var1315 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1311) /* == on <var_pname:String>*/;
if (var1315){
var1316 = 0;
var1317 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1316) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1318 = 1;
var1319 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1318) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1320 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__is_same_type_test]))(var_v, var1317, var1319) /* is_same_type_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1320) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1321) {
var1322 = varonce1321;
} else {
var1323 = "is_same_instance";
var1324 = 16;
var1325 = string__NativeString__to_s_with_length(var1323, var1324);
var1322 = var1325;
varonce1321 = var1322;
}
var1326 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1322) /* == on <var_pname:String>*/;
if (var1326){
var1327 = 0;
var1328 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1327) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1329 = 1;
var1330 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1329) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1331 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var1328, var1330) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1331) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1332) {
var1333 = varonce1332;
} else {
var1334 = "output_class_name";
var1335 = 17;
var1336 = string__NativeString__to_s_with_length(var1334, var1335);
var1333 = var1336;
varonce1332 = var1333;
}
var1337 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1333) /* == on <var_pname:String>*/;
if (var1337){
var1338 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var1339 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1338) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
var_nat = var1339;
if (varonce1340) {
var1341 = varonce1340;
} else {
var1342 = "printf(\"%s\\n\", ";
var1343 = 15;
var1344 = string__NativeString__to_s_with_length(var1342, var1343);
var1341 = var1344;
varonce1340 = var1341;
}
if (varonce1345) {
var1346 = varonce1345;
} else {
var1347 = ");";
var1348 = 2;
var1349 = string__NativeString__to_s_with_length(var1347, var1348);
var1346 = var1349;
varonce1345 = var1346;
}
var1350 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1350 = array_instance Array[Object] */
var1351 = 3;
var1352 = NEW_array__NativeArray(var1351, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1352)->values[0] = (val*) var1341;
((struct instance_array__NativeArray*)var1352)->values[1] = (val*) var_nat;
((struct instance_array__NativeArray*)var1352)->values[2] = (val*) var1346;
((void (*)(val*, val*, long))(var1350->class->vft[COLOR_array__Array__with_native]))(var1350, var1352, var1351) /* with_native on <var1350:Array[Object]>*/;
}
var1353 = ((val* (*)(val*))(var1350->class->vft[COLOR_string__Object__to_s]))(var1350) /* to_s on <var1350:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1353) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1354) {
var1355 = varonce1354;
} else {
var1356 = "native_class_name";
var1357 = 17;
var1358 = string__NativeString__to_s_with_length(var1356, var1357);
var1355 = var1358;
varonce1354 = var1355;
}
var1359 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1355) /* == on <var_pname:String>*/;
if (var1359){
var1360 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var1361 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1360) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
var_nat1362 = var1361;
if (varonce1363) {
var1364 = varonce1363;
} else {
var1365 = "(char*)";
var1366 = 7;
var1367 = string__NativeString__to_s_with_length(var1365, var1366);
var1364 = var1367;
varonce1363 = var1364;
}
var1368 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1368 = array_instance Array[Object] */
var1369 = 2;
var1370 = NEW_array__NativeArray(var1369, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1370)->values[0] = (val*) var1364;
((struct instance_array__NativeArray*)var1370)->values[1] = (val*) var_nat1362;
((void (*)(val*, val*, long))(var1368->class->vft[COLOR_array__Array__with_native]))(var1368, var1370, var1369) /* with_native on <var1368:Array[Object]>*/;
}
var1371 = ((val* (*)(val*))(var1368->class->vft[COLOR_string__Object__to_s]))(var1368) /* to_s on <var1368:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1819);
show_backtrace(1);
}
var1372 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1371, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1372) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1373) {
var1374 = varonce1373;
} else {
var1375 = "force_garbage_collection";
var1376 = 24;
var1377 = string__NativeString__to_s_with_length(var1375, var1376);
var1374 = var1377;
varonce1373 = var1374;
}
var1378 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1374) /* == on <var_pname:String>*/;
if (var1378){
if (varonce1379) {
var1380 = varonce1379;
} else {
var1381 = "nit_gcollect();";
var1382 = 15;
var1383 = string__NativeString__to_s_with_length(var1381, var1382);
var1380 = var1383;
varonce1379 = var1380;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1380) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1384) {
var1385 = varonce1384;
} else {
var1386 = "native_argc";
var1387 = 11;
var1388 = string__NativeString__to_s_with_length(var1386, var1387);
var1385 = var1388;
varonce1384 = var1385;
}
var1389 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1385) /* == on <var_pname:String>*/;
if (var1389){
if (varonce1390) {
var1391 = varonce1390;
} else {
var1392 = "glob_argc";
var1393 = 9;
var1394 = string__NativeString__to_s_with_length(var1392, var1393);
var1391 = var1394;
varonce1390 = var1391;
}
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1825);
show_backtrace(1);
}
var1395 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1391, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1395) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1396) {
var1397 = varonce1396;
} else {
var1398 = "native_argv";
var1399 = 11;
var1400 = string__NativeString__to_s_with_length(var1398, var1399);
var1397 = var1400;
varonce1396 = var1397;
}
var1401 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1397) /* == on <var_pname:String>*/;
if (var1401){
if (varonce1402) {
var1403 = varonce1402;
} else {
var1404 = "glob_argv[";
var1405 = 10;
var1406 = string__NativeString__to_s_with_length(var1404, var1405);
var1403 = var1406;
varonce1402 = var1403;
}
var1407 = 1;
var1408 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1407) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1409) {
var1410 = varonce1409;
} else {
var1411 = "]";
var1412 = 1;
var1413 = string__NativeString__to_s_with_length(var1411, var1412);
var1410 = var1413;
varonce1409 = var1410;
}
var1414 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1414 = array_instance Array[Object] */
var1415 = 3;
var1416 = NEW_array__NativeArray(var1415, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1416)->values[0] = (val*) var1403;
((struct instance_array__NativeArray*)var1416)->values[1] = (val*) var1408;
((struct instance_array__NativeArray*)var1416)->values[2] = (val*) var1410;
((void (*)(val*, val*, long))(var1414->class->vft[COLOR_array__Array__with_native]))(var1414, var1416, var1415) /* with_native on <var1414:Array[Object]>*/;
}
var1417 = ((val* (*)(val*))(var1414->class->vft[COLOR_string__Object__to_s]))(var1414) /* to_s on <var1414:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1828);
show_backtrace(1);
}
var1418 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1417, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1418) /* ret on <var_v:AbstractCompilerVisitor>*/;
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
if (varonce1419) {
var1420 = varonce1419;
} else {
var1421 = "printf(\"NOT YET IMPLEMENTED ";
var1422 = 28;
var1423 = string__NativeString__to_s_with_length(var1421, var1422);
var1420 = var1423;
varonce1419 = var1420;
}
var1424 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:AInternMethPropdef>*/;
if (varonce1425) {
var1426 = varonce1425;
} else {
var1427 = ":";
var1428 = 1;
var1429 = string__NativeString__to_s_with_length(var1427, var1428);
var1426 = var1429;
varonce1425 = var1426;
}
if (varonce1430) {
var1431 = varonce1430;
} else {
var1432 = " at ";
var1433 = 4;
var1434 = string__NativeString__to_s_with_length(var1432, var1433);
var1431 = var1434;
varonce1430 = var1431;
}
var1435 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AInternMethPropdef>*/;
var1436 = ((val* (*)(val*))(var1435->class->vft[COLOR_string__Object__to_s]))(var1435) /* to_s on <var1435:Location>*/;
if (varonce1437) {
var1438 = varonce1437;
} else {
var1439 = "\\n\");";
var1440 = 5;
var1441 = string__NativeString__to_s_with_length(var1439, var1440);
var1438 = var1441;
varonce1437 = var1438;
}
var1442 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1442 = array_instance Array[Object] */
var1443 = 7;
var1444 = NEW_array__NativeArray(var1443, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1444)->values[0] = (val*) var1420;
((struct instance_array__NativeArray*)var1444)->values[1] = (val*) var1424;
((struct instance_array__NativeArray*)var1444)->values[2] = (val*) var1426;
((struct instance_array__NativeArray*)var1444)->values[3] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var1444)->values[4] = (val*) var1431;
((struct instance_array__NativeArray*)var1444)->values[5] = (val*) var1436;
((struct instance_array__NativeArray*)var1444)->values[6] = (val*) var1438;
((void (*)(val*, val*, long))(var1442->class->vft[COLOR_array__Array__with_native]))(var1442, var1444, var1443) /* with_native on <var1442:Array[Object]>*/;
}
var1445 = ((val* (*)(val*))(var1442->class->vft[COLOR_string__Object__to_s]))(var1442) /* to_s on <var1442:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1445) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce1446) {
var1447 = varonce1446;
} else {
var1448 = "Not implemented ";
var1449 = 16;
var1450 = string__NativeString__to_s_with_length(var1448, var1449);
var1447 = var1450;
varonce1446 = var1447;
}
var1451 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1451 = array_instance Array[Object] */
var1452 = 2;
var1453 = NEW_array__NativeArray(var1452, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1453)->values[0] = (val*) var1447;
((struct instance_array__NativeArray*)var1453)->values[1] = (val*) var_mpropdef;
((void (*)(val*, val*, long))(var1451->class->vft[COLOR_array__Array__with_native]))(var1451, var1453, var1452) /* with_native on <var1451:Array[Object]>*/;
}
var1454 = ((val* (*)(val*))(var1451->class->vft[COLOR_string__Object__to_s]))(var1451) /* to_s on <var1451:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__debug]))(self, var1454) /* debug on <self:AInternMethPropdef>*/;
RET_LABEL:;
}
/* method abstract_compiler#AInternMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AInternMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AInternMethPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AExternMethPropdef#compile_to_c for (self: AExternMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AExternMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable TString */;
val* var_nextern /* var nextern: nullable TString */;
val* var1 /* : null */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : Location */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : String */;
long var29 /* : Int */;
val* var30 /* : String */;
long var31 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var_externname /* var externname: nullable Object */;
val* var37 /* : Location */;
val* var38 /* : nullable SourceFile */;
val* var39 /* : null */;
short int var40 /* : Bool */;
val* var41 /* : Location */;
val* var42 /* : nullable SourceFile */;
val* var43 /* : String */;
val* var_file /* var file: String */;
val* var44 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var45 /* : nullable MSignature */;
val* var46 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var47 /* : null */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var50 /* : MType */;
val* var51 /* : RuntimeVariable */;
val* var52 /* : null */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : String */;
val* var95 /* : Array[Object] */;
long var96 /* : Int */;
val* var97 /* : NativeArray[Object] */;
val* var98 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern]))(self) /* n_extern on <self:AExternMethPropdef>*/;
var_nextern = var;
var1 = NULL;
if (var_nextern == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "fprintf(stderr, \"NOT YET IMPLEMENTED nitni for ";
var5 = 47;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
if (varonce7) {
var8 = varonce7;
} else {
var9 = " at ";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternMethPropdef>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Location>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "\\n\");";
var17 = 5;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 5;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var8;
((struct instance_array__NativeArray*)var21)->values[3] = (val*) var13;
((struct instance_array__NativeArray*)var21)->values[4] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "show_backtrace(1);";
var26 = 18;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var24) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
var28 = ((val* (*)(val*))(var_nextern->class->vft[COLOR_parser_nodes__Token__text]))(var_nextern) /* text on <var_nextern:nullable TString(TString)>*/;
var29 = 1;
var30 = ((val* (*)(val*))(var_nextern->class->vft[COLOR_parser_nodes__Token__text]))(var_nextern) /* text on <var_nextern:nullable TString(TString)>*/;
var31 = ((long (*)(val*))(var30->class->vft[COLOR_abstract_collection__Collection__length]))(var30) /* length on <var30:String>*/;
var32 = 2;
{ /* Inline kernel#Int#- (var31,var32) */
var35 = var31 - var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var36 = ((val* (*)(val*, long, long))(var28->class->vft[COLOR_string__AbstractString__substring]))(var28, var29, var33) /* substring on <var28:String>*/;
var_externname = var36;
var37 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternMethPropdef>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_location__Location__file]))(var37) /* file on <var37:Location>*/;
var39 = NULL;
if (var38 == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (var40){
var41 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternMethPropdef>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_location__Location__file]))(var41) /* file on <var41:Location>*/;
if (var42 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1848);
show_backtrace(1);
} else {
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_location__SourceFile__filename]))(var42) /* filename on <var42:nullable SourceFile>*/;
}
var_file = var43;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_extern]))(var_v, var_file) /* add_extern on <var_v:AbstractCompilerVisitor>*/;
} else {
}
var44 = NULL;
var_res = var44;
var45 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var45 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1852);
show_backtrace(1);
} else {
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_model__MSignature__return_mtype]))(var45) /* return_mtype on <var45:nullable MSignature>*/;
}
var_ret = var46;
var47 = NULL;
if (var_ret == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (var48){
var49 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var50 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(var_v, var_ret, var49) /* resolve_for on <var_v:AbstractCompilerVisitor>*/;
var_ret = var50;
var51 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_ret) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var51;
} else {
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments) /* adapt_signature on <var_v:AbstractCompilerVisitor>*/;
var52 = NULL;
if (var_res == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (var53){
if (varonce54) {
var55 = varonce54;
} else {
var56 = "(";
var57 = 1;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = ", ";
var62 = 2;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var60) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = ");";
var68 = 2;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 4;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var_externname;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var64;
((struct instance_array__NativeArray*)var72)->values[3] = (val*) var66;
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var73) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
if (varonce74) {
var75 = varonce74;
} else {
var76 = " = ";
var77 = 3;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "(";
var82 = 1;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = ", ";
var87 = 2;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var85) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce90) {
var91 = varonce90;
} else {
var92 = ");";
var93 = 2;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 6;
var97 = NEW_array__NativeArray(var96, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var97)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var97)->values[1] = (val*) var75;
((struct instance_array__NativeArray*)var97)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var97)->values[3] = (val*) var80;
((struct instance_array__NativeArray*)var97)->values[4] = (val*) var89;
((struct instance_array__NativeArray*)var97)->values[5] = (val*) var91;
((void (*)(val*, val*, long))(var95->class->vft[COLOR_array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
}
var98 = ((val* (*)(val*))(var95->class->vft[COLOR_string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var98) /* add on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var_res) /* ret on <var_v:AbstractCompilerVisitor>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#AExternMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AExternMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AExternMethPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AExternInitPropdef#compile_to_c for (self: AExternInitPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AExternInitPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable TString */;
val* var_nextern /* var nextern: nullable TString */;
val* var1 /* : null */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : Location */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : String */;
long var29 /* : Int */;
val* var30 /* : String */;
long var31 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var_externname /* var externname: nullable Object */;
val* var37 /* : Location */;
val* var38 /* : nullable SourceFile */;
val* var39 /* : null */;
short int var40 /* : Bool */;
val* var41 /* : Location */;
val* var42 /* : nullable SourceFile */;
val* var43 /* : String */;
val* var_file /* var file: String */;
val* var44 /* : nullable Object */;
val* var45 /* : MType */;
val* var_ret /* var ret: MType */;
val* var46 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var47 /* : nullable Object */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern]))(self) /* n_extern on <self:AExternInitPropdef>*/;
var_nextern = var;
var1 = NULL;
if (var_nextern == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "printf(\"NOT YET IMPLEMENTED nitni for ";
var5 = 38;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
if (varonce7) {
var8 = varonce7;
} else {
var9 = " at ";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternInitPropdef>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Location>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "\\n\");";
var17 = 5;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 5;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var8;
((struct instance_array__NativeArray*)var21)->values[3] = (val*) var13;
((struct instance_array__NativeArray*)var21)->values[4] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "show_backtrace(1);";
var26 = 18;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var24) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
var28 = ((val* (*)(val*))(var_nextern->class->vft[COLOR_parser_nodes__Token__text]))(var_nextern) /* text on <var_nextern:nullable TString(TString)>*/;
var29 = 1;
var30 = ((val* (*)(val*))(var_nextern->class->vft[COLOR_parser_nodes__Token__text]))(var_nextern) /* text on <var_nextern:nullable TString(TString)>*/;
var31 = ((long (*)(val*))(var30->class->vft[COLOR_abstract_collection__Collection__length]))(var30) /* length on <var30:String>*/;
var32 = 2;
{ /* Inline kernel#Int#- (var31,var32) */
var35 = var31 - var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var36 = ((val* (*)(val*, long, long))(var28->class->vft[COLOR_string__AbstractString__substring]))(var28, var29, var33) /* substring on <var28:String>*/;
var_externname = var36;
var37 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternInitPropdef>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_location__Location__file]))(var37) /* file on <var37:Location>*/;
var39 = NULL;
if (var38 == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (var40){
var41 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternInitPropdef>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_location__Location__file]))(var41) /* file on <var41:Location>*/;
if (var42 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1880);
show_backtrace(1);
} else {
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_location__SourceFile__filename]))(var42) /* filename on <var42:nullable SourceFile>*/;
}
var_file = var43;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_extern]))(var_v, var_file) /* add_extern on <var_v:AbstractCompilerVisitor>*/;
} else {
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments) /* adapt_signature on <var_v:AbstractCompilerVisitor>*/;
var44 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var44) /* mtype on <var44:nullable Object(RuntimeVariable)>*/;
var_ret = var45;
var46 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_ret) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var46;
var47 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Sequence__shift]))(var_arguments) /* shift on <var_arguments:Array[RuntimeVariable]>*/;
var47;
if (varonce48) {
var49 = varonce48;
} else {
var50 = " = ";
var51 = 3;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "(";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = ", ";
var61 = 2;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var59) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce64) {
var65 = varonce64;
} else {
var66 = ");";
var67 = 2;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 6;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var49;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var71)->values[3] = (val*) var54;
((struct instance_array__NativeArray*)var71)->values[4] = (val*) var63;
((struct instance_array__NativeArray*)var71)->values[5] = (val*) var65;
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var72) /* add on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var_res) /* ret on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AExternInitPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AExternInitPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AExternInitPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#compile_to_c for (self: AAttrPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AAttrPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable MPropDef */;
val* var6 /* : MProperty */;
val* var7 /* : nullable Object */;
val* var8 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var9 /* : nullable Frame */;
val* var10 /* : nullable RuntimeVariable */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MProperty */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
val* var15 /* : nullable Object */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
var1 = 1;
{ /* Inline kernel#Int#== (var,var1) */
var4 = var == var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1898);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MPropDef__mproperty]))(var5) /* mproperty on <var5:nullable MPropDef(nullable MAttributeDef)>*/;
}
var7 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var8 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var6, var7) /* read_attribute on <var_v:AbstractCompilerVisitor>*/;
var_res = var8;
var9 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1899);
show_backtrace(1);
} else {
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var9) /* returnvar on <var9:nullable Frame>*/;
}
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1899);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var10, var_res) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1901);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MPropDef__mproperty]))(var11) /* mproperty on <var11:nullable MPropDef(nullable MAttributeDef)>*/;
}
var13 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var14 = 1;
var15 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var14) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var12, var13, var15) /* write_attribute on <var_v:AbstractCompilerVisitor>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AAttrPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AAttrPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#init_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AAttrPropdef__init_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var4 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
val* var5 /* : Frame */;
val* var6 /* : nullable MPropDef */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var9 /* : Array[RuntimeVariable] */;
long var10 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: Frame */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : nullable MType */;
val* var13 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var14 /* : nullable MPropDef */;
val* var15 /* : MProperty */;
var_v = p0;
var_recv = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_expr]))(self) /* n_expr on <self:AAttrPropdef>*/;
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(var_v) /* current_node on <var_v:AbstractCompilerVisitor>*/;
var_oldnode = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, self) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
var_old_frame = var4;
var5 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
var6 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1912);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_recv) /* mtype on <var_recv:RuntimeVariable>*/;
/* <var7:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (!var8) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1912);
show_backtrace(1);
}
var9 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var10 = 1;
((void (*)(val*, long))(var9->class->vft[COLOR_array__Array__with_capacity]))(var9, var10) /* with_capacity on <var9:Array[RuntimeVariable]>*/;
var_ = var9;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_recv) /* push on <var_:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*, val*, val*))(var5->class->vft[COLOR_abstract_compiler__Frame__init]))(var5, var_v, var6, var7, var_) /* init on <var5:Frame>*/;
var_frame = var5;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_frame) /* frame= on <var_v:AbstractCompilerVisitor>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1914);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var11) /* static_mtype on <var11:nullable MPropDef(nullable MAttributeDef)>*/;
}
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_nexpr, var12) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_value = var13;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1915);
show_backtrace(1);
} else {
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_model__MPropDef__mproperty]))(var14) /* mproperty on <var14:nullable MPropDef(nullable MAttributeDef)>*/;
}
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var15, var_recv, var_value) /* write_attribute on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_old_frame) /* frame= on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_oldnode) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#init_expr for (self: Object, AbstractCompilerVisitor, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AAttrPropdef__init_expr(val* self, val* p0, val* p1) {
abstract_compiler__AAttrPropdef__init_expr(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#check_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AAttrPropdef__check_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var4 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
val* var5 /* : Frame */;
val* var6 /* : nullable MPropDef */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var9 /* : Array[RuntimeVariable] */;
long var10 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: Frame */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MProperty */;
val* var13 /* : RuntimeVariable */;
var_v = p0;
var_recv = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_expr]))(self) /* n_expr on <self:AAttrPropdef>*/;
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(var_v) /* current_node on <var_v:AbstractCompilerVisitor>*/;
var_oldnode = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, self) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
var_old_frame = var4;
var5 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
var6 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1929);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_recv) /* mtype on <var_recv:RuntimeVariable>*/;
/* <var7:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (!var8) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1929);
show_backtrace(1);
}
var9 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var10 = 1;
((void (*)(val*, long))(var9->class->vft[COLOR_array__Array__with_capacity]))(var9, var10) /* with_capacity on <var9:Array[RuntimeVariable]>*/;
var_ = var9;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_recv) /* push on <var_:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*, val*, val*))(var5->class->vft[COLOR_abstract_compiler__Frame__init]))(var5, var_v, var6, var7, var_) /* init on <var5:Frame>*/;
var_frame = var5;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_frame) /* frame= on <var_v:AbstractCompilerVisitor>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1932);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MPropDef__mproperty]))(var11) /* mproperty on <var11:nullable MPropDef(nullable MAttributeDef)>*/;
}
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var12, var_recv) /* read_attribute on <var_v:AbstractCompilerVisitor>*/;
var13;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_old_frame) /* frame= on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_oldnode) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#check_expr for (self: Object, AbstractCompilerVisitor, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AAttrPropdef__check_expr(val* self, val* p0, val* p1) {
abstract_compiler__AAttrPropdef__check_expr(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AClassdef#compile_to_c for (self: AClassdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AClassdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable MMethodDef */;
short int var1 /* : Bool */;
val* var2 /* : nullable Collection[MMethod] */;
val* var_super_inits /* var super_inits: nullable Collection[MMethod] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_su /* var su: MMethod */;
val* var13 /* : nullable RuntimeVariable */;
val* var14 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var15 /* : Int */;
long var_i /* var i: Int */;
val* var16 /* : ANodes[APropdef] */;
val* var17 /* : Iterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var22 /* : nullable AExpr */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : nullable MPropDef */;
val* var26 /* : MProperty */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__AClassdef__mfree_init]))(self) /* mfree_init on <self:AClassdef>*/;
var1 = ((short int (*)(val*, val*))(var_mpropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mpropdef, var) /* == on <var_mpropdef:MMethodDef>*/;
if (var1){
var2 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__AClassdef__super_inits]))(self) /* super_inits on <self:AClassdef>*/;
var_super_inits = var2;
var3 = NULL;
if (var_super_inits == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
var6 = 1;
{ /* Inline kernel#Int#== (var5,var6) */
var9 = var5 == var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1944);
show_backtrace(1);
}
var10 = ((val* (*)(val*))(var_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_inits) /* iterator on <var_super_inits:nullable Collection[MMethod](Collection[MMethod])>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var_su = var12;
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_su, var_arguments) /* send on <var_v:AbstractCompilerVisitor>*/;
var13;
CONTINUE_label: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
goto RET_LABEL;
} else {
}
var14 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var_recv = var14;
var15 = 1;
var_i = var15;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(self) /* n_propdefs on <self:AClassdef>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__iterator]))(var16) /* iterator on <var16:ANodes[APropdef]>*/;
for(;;) {
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var17) /* is_ok on <var17:Iterator[nullable Object]>*/;
if(!var18) break;
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__item]))(var17) /* item on <var17:Iterator[nullable Object]>*/;
var_npropdef = var19;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype = type_parser_nodes__AAttrPropdef.color;
idtype = type_parser_nodes__AAttrPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var21 = 0;
} else {
var21 = var_npropdef->type->type_table[cltype] == idtype;
}
var_ = var21;
if (var21){
var22 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AAttrPropdef__n_expr]))(var_npropdef) /* n_expr on <var_npropdef:APropdef(AAttrPropdef)>*/;
var23 = NULL;
if (var22 == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
var20 = var24;
} else {
var20 = var_;
}
if (var20){
var25 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/;
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1955);
show_backtrace(1);
} else {
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_model__MPropDef__mproperty]))(var25) /* mproperty on <var25:nullable MPropDef(nullable MAttributeDef)>*/;
}
var27 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_i) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var26, var_recv, var27) /* write_attribute on <var_v:AbstractCompilerVisitor>*/;
var28 = 1;
{ /* Inline kernel#Int#+ (var_i,var28) */
var31 = var_i + var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var_i = var29;
} else {
}
CONTINUE_label32: (void)0;
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:Iterator[nullable Object]>*/;
}
BREAK_label32: (void)0;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1960);
show_backtrace(1);
}
RET_LABEL:;
}
/* method abstract_compiler#AClassdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AClassdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AClassdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#ADeferredMethPropdef#compile_to_c for (self: ADeferredMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__ADeferredMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var1 /* : String */;
val* var_cn /* var cn: String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : MProperty */;
val* var7 /* : String */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
var_cn = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "fprintf(stderr, \"Runtime error: Abstract method `%s` called on `%s`\", \"";
var4 = 71;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_model__MProperty__name]))(var6) /* name on <var6:MProperty(MMethod)>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_string__AbstractString__escape_to_c]))(var7) /* escape_to_c on <var7:String>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "\", ";
var12 = 3;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = ");";
var17 = 2;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 5;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var8;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var10;
((struct instance_array__NativeArray*)var21)->values[3] = (val*) var_cn;
((struct instance_array__NativeArray*)var21)->values[4] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_raw_abort]))(var_v) /* add_raw_abort on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#ADeferredMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__ADeferredMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__ADeferredMethPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#ADeferredMethPropdef#can_inline for (self: ADeferredMethPropdef): Bool */
short int abstract_compiler__ADeferredMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADeferredMethPropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__ADeferredMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__ADeferredMethPropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AExpr#expr for (self: AExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Location */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
val* var22 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : null */;
val* var26 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "printf(\"NOT YET IMPLEMENTED ";
var3 = 28;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:AExpr>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = ":";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExpr>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Location>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "\\n\");";
var16 = 5;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 5;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var7;
((struct instance_array__NativeArray*)var20)->values[3] = (val*) var12;
((struct instance_array__NativeArray*)var20)->values[4] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var21) /* add on <var_v:AbstractCompilerVisitor>*/;
var22 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
var_mtype = var22;
var23 = NULL;
if (var_mtype == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (var24){
var25 = NULL;
var = var25;
goto RET_LABEL;
} else {
var26 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_mtype) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var26;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "/* ";
var30 = 3;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = " = NOT YET ";
var35 = 11;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:AExpr>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = " */";
var41 = 3;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 5;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var45)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var45)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var45)->values[3] = (val*) var37;
((struct instance_array__NativeArray*)var45)->values[4] = (val*) var39;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
var46 = ((val* (*)(val*))(var43->class->vft[COLOR_string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var46) /* add on <var_v:AbstractCompilerVisitor>*/;
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
val* var_res /* var res: nullable RuntimeVariable */;
val* var1 /* : null */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
var_v = p0;
var = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AExpr__expr]))(self, var_v) /* expr on <self:AExpr>*/;
var_res = var;
var1 = NULL;
if (var_res == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = ";";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var3;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var10) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AExpr__stmt(val* self, val* p0) {
abstract_compiler__AExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#stmt for (self: ABlockExpr, AbstractCompilerVisitor) */
void abstract_compiler__ABlockExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : ANodes[AExpr] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_e /* var e: AExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[AExpr]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_e = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var_e) /* stmt on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ABlockExpr__stmt(val* self, val* p0) {
abstract_compiler__ABlockExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#expr for (self: ABlockExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ABlockExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : ANodes[AExpr] */;
val* var2 /* : nullable Object */;
val* var_last /* var last: AExpr */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var7 /* : Bool */;
val* var8 /* : null */;
val* var9 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var1) /* last on <var1:ANodes[AExpr]>*/;
var_last = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:ANodes[AExpr]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_e = var6;
var7 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___61d_61d]))(var_e, var_last) /* == on <var_e:AExpr>*/;
if (var7){
goto BREAK_label;
} else {
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var_e) /* stmt on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var8 = NULL;
var9 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_last, var8) /* expr on <var_v:AbstractCompilerVisitor>*/;
var = var9;
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
val* var_variable /* var variable: Variable */;
val* var1 /* : nullable AExpr */;
val* var_ne /* var ne: nullable AExpr */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable MType */;
val* var5 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var6 /* : RuntimeVariable */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVardeclExpr__variable]))(self) /* variable on <self:AVardeclExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2018);
show_backtrace(1);
}
var_variable = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AVardeclExpr__n_expr]))(self) /* n_expr on <self:AVardeclExpr>*/;
var_ne = var1;
var2 = NULL;
if (var_ne == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
var5 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_ne, var4) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var5;
var6 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var6, var_i) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AVardeclExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AVardeclExpr__stmt(val* self, val* p0) {
abstract_compiler__AVardeclExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AVarExpr#expr for (self: AVarExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AVarExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2030);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var1) /* variable on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AVarExpr>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2031);
show_backtrace(1);
}
var_mtype = var3;
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autoadapt]))(var_v, var_res, var_mtype) /* autoadapt on <var_v:AbstractCompilerVisitor>*/;
var = var4;
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
/* method abstract_compiler#AVarAssignExpr#stmt for (self: AVarAssignExpr, AbstractCompilerVisitor) */
void abstract_compiler__AVarAssignExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : AExpr */;
val* var2 /* : nullable MType */;
val* var3 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarAssignExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2039);
show_backtrace(1);
}
var_variable = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:AVarAssignExpr>*/;
var2 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var3;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var4, var_i) /* assign on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AVarAssignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AVarAssignExpr__stmt(val* self, val* p0) {
abstract_compiler__AVarAssignExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AVarAssignExpr#expr for (self: AVarAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AVarAssignExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var5 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarAssignExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2045);
show_backtrace(1);
}
var_variable = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:AVarAssignExpr>*/;
var3 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var2, var3) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var4;
var5 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var5, var_i) /* assign on <var_v:AbstractCompilerVisitor>*/;
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
val* var_variable /* var variable: Variable */;
val* var1 /* : RuntimeVariable */;
val* var_vari /* var vari: RuntimeVariable */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var5 /* : nullable CallSite */;
val* var6 /* : Array[RuntimeVariable] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[RuntimeVariable] */;
val* var9 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : RuntimeVariable */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarReassignExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2055);
show_backtrace(1);
}
var_variable = var;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
var_vari = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_value]))(self) /* n_value on <self:AVarReassignExpr>*/;
var3 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var2, var3) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_value = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:AVarReassignExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2058);
show_backtrace(1);
}
var6 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var6 = array_instance Array[RuntimeVariable] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var_vari;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var_value;
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[RuntimeVariable]>*/;
}
var9 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var5, var6) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
var_res = var9;
var10 = NULL;
if (var_res == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2059);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var12, var_res) /* assign on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AVarReassignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AVarReassignExpr__stmt(val* self, val* p0) {
abstract_compiler__AVarReassignExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ASelfExpr#expr for (self: ASelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASelfExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Frame */;
val* var2 /* : Array[RuntimeVariable] */;
val* var3 /* : nullable Object */;
var_v = p0;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2065);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__Frame__arguments]))(var1) /* arguments on <var1:nullable Frame>*/;
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__first]))(var2) /* first on <var2:Array[RuntimeVariable]>*/;
var = var3;
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
/* method abstract_compiler#AContinueExpr#stmt for (self: AContinueExpr, AbstractCompilerVisitor) */
void abstract_compiler__AContinueExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "goto CONTINUE_";
var2 = 14;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AContinueExpr__escapemark]))(self) /* escapemark on <self:AContinueExpr>*/;
var5 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var4) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = ";";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var14) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AContinueExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AContinueExpr__stmt(val* self, val* p0) {
abstract_compiler__AContinueExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ABreakExpr#stmt for (self: ABreakExpr, AbstractCompilerVisitor) */
void abstract_compiler__ABreakExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
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
var4 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ABreakExpr__escapemark]))(self) /* escapemark on <self:ABreakExpr>*/;
var5 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var4) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = ";";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var14) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#ABreakExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ABreakExpr__stmt(val* self, val* p0) {
abstract_compiler__ABreakExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: AReturnExpr, AbstractCompilerVisitor) */
void abstract_compiler__AReturnExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable Frame */;
val* var4 /* : nullable RuntimeVariable */;
val* var_returnvar /* var returnvar: RuntimeVariable */;
val* var5 /* : MType */;
val* var6 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : nullable Frame */;
val* var12 /* : nullable String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReturnExpr__n_expr]))(self) /* n_expr on <self:AReturnExpr>*/;
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2081);
show_backtrace(1);
} else {
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var3) /* returnvar on <var3:nullable Frame>*/;
}
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2081);
show_backtrace(1);
}
var_returnvar = var4;
var5 = ((val* (*)(val*))(var_returnvar->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_returnvar) /* mtype on <var_returnvar:RuntimeVariable>*/;
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_nexpr, var5) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var6;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_returnvar, var_i) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
}
if (varonce) {
var7 = varonce;
} else {
var8 = "goto ";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2085);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_compiler__Frame__returnlabel]))(var11) /* returnlabel on <var11:nullable Frame>*/;
}
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2085);
show_backtrace(1);
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ";";
var16 = 1;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var12;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var21) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AReturnExpr__stmt(val* self, val* p0) {
abstract_compiler__AReturnExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AAbortExpr#stmt for (self: AAbortExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAbortExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
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
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var) /* add_abort on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AAbortExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAbortExpr__stmt(val* self, val* p0) {
abstract_compiler__AAbortExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#stmt for (self: AIfExpr, AbstractCompilerVisitor) */
void abstract_compiler__AIfExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var1 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
val* var15 /* : nullable AExpr */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : nullable AExpr */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_expr]))(self) /* n_expr on <self:AIfExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "if (";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "){";
var9 = 2;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var14) /* add on <var_v:AbstractCompilerVisitor>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_then]))(self) /* n_then on <self:AIfExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var15) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "} else {";
var19 = 8;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
var21 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_else]))(self) /* n_else on <self:AIfExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var21) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "}";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var23) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AIfExpr__stmt(val* self, val* p0) {
abstract_compiler__AIfExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#expr for (self: AIfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIfExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
val* var18 /* : nullable AExpr */;
val* var19 /* : null */;
val* var20 /* : RuntimeVariable */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : nullable AExpr */;
val* var27 /* : null */;
val* var28 /* : RuntimeVariable */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AIfExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2106);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_expr]))(self) /* n_expr on <self:AIfExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var3) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "if (";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = "){";
var12 = 2;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_then]))(self) /* n_then on <self:AIfExpr>*/;
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2109);
show_backtrace(1);
}
var19 = NULL;
var20 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var18, var19) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var20) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "} else {";
var24 = 8;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_else]))(self) /* n_else on <self:AIfExpr>*/;
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2111);
show_backtrace(1);
}
var27 = NULL;
var28 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var26, var27) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var28) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce29) {
var30 = varonce29;
} else {
var31 = "}";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var30) /* add on <var_v:AbstractCompilerVisitor>*/;
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
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
val* var18 /* : AExpr */;
val* var19 /* : null */;
val* var20 /* : RuntimeVariable */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : AExpr */;
val* var27 /* : null */;
val* var28 /* : RuntimeVariable */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AIfexprExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2120);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_expr]))(self) /* n_expr on <self:AIfexprExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var3) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "if (";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = "){";
var12 = 2;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_then]))(self) /* n_then on <self:AIfexprExpr>*/;
var19 = NULL;
var20 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var18, var19) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var20) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "} else {";
var24 = 8;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_else]))(self) /* n_else on <self:AIfexprExpr>*/;
var27 = NULL;
var28 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var26, var27) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var28) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce29) {
var30 = varonce29;
} else {
var31 = "}";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var30) /* add on <var_v:AbstractCompilerVisitor>*/;
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
val* var1 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var2 /* : null */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ADoExpr__n_block]))(self) /* n_block on <self:ADoExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var) /* stmt on <var_v:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ADoExpr__escapemark]))(self) /* escapemark on <self:ADoExpr>*/;
var_escapemark = var1;
var2 = NULL;
if (var_escapemark == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
if (varonce) {
var4 = varonce;
} else {
var5 = "BREAK_";
var6 = 6;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var_escapemark) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = ": (void)0;";
var12 = 10;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var4;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var8;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#ADoExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ADoExpr__stmt(val* self, val* p0) {
abstract_compiler__ADoExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: AWhileExpr, AbstractCompilerVisitor) */
void abstract_compiler__AWhileExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : AExpr */;
val* var5 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : nullable AExpr */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : nullable EscapeMark */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : nullable EscapeMark */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : String */;
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
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var) /* add on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_expr]))(self) /* n_expr on <self:AWhileExpr>*/;
var5 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var4) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "if (!";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ") break;";
var14 = 8;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var19) /* add on <var_v:AbstractCompilerVisitor>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_block]))(self) /* n_block on <self:AWhileExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var20) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "CONTINUE_";
var24 = 9;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AWhileExpr__escapemark]))(self) /* escapemark on <self:AWhileExpr>*/;
var27 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var26) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = ": (void)0;";
var31 = 10;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 3;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var27;
((struct instance_array__NativeArray*)var35)->values[2] = (val*) var29;
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var36) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "}";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var38) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "BREAK_";
var45 = 6;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AWhileExpr__escapemark]))(self) /* escapemark on <self:AWhileExpr>*/;
var48 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var47) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce49) {
var50 = varonce49;
} else {
var51 = ": (void)0;";
var52 = 10;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 3;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var43;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var48;
((struct instance_array__NativeArray*)var56)->values[2] = (val*) var50;
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var57) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AWhileExpr__stmt(val* self, val* p0) {
abstract_compiler__AWhileExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: ALoopExpr, AbstractCompilerVisitor) */
void abstract_compiler__ALoopExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable AExpr */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : nullable EscapeMark */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : nullable EscapeMark */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
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
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var) /* add on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALoopExpr__n_block]))(self) /* n_block on <self:ALoopExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var4) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce5) {
var6 = varonce5;
} else {
var7 = "CONTINUE_";
var8 = 9;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ALoopExpr__escapemark]))(self) /* escapemark on <self:ALoopExpr>*/;
var11 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var10) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = ": (void)0;";
var15 = 10;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var11;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var20) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "}";
var24 = 1;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "BREAK_";
var29 = 6;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ALoopExpr__escapemark]))(self) /* escapemark on <self:ALoopExpr>*/;
var32 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var31) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = ": (void)0;";
var36 = 10;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var34;
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var41) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ALoopExpr__stmt(val* self, val* p0) {
abstract_compiler__ALoopExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AForExpr#stmt for (self: AForExpr, AbstractCompilerVisitor) */
void abstract_compiler__AForExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Array[Variable] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
short int var_10 /* var : Bool */;
val* var11 /* : AbstractCompiler */;
val* var12 /* : ModelBuilder */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AExpr */;
val* var19 /* : null */;
val* var20 /* : RuntimeVariable */;
val* var_from /* var from: RuntimeVariable */;
val* var21 /* : AExpr */;
val* var22 /* : null */;
val* var23 /* : RuntimeVariable */;
val* var_to /* var to: RuntimeVariable */;
val* var24 /* : nullable Array[Variable] */;
val* var25 /* : nullable Object */;
val* var26 /* : RuntimeVariable */;
val* var_variable /* var variable: RuntimeVariable */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : MType */;
val* var37 /* : MMethod */;
val* var38 /* : Array[RuntimeVariable] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[RuntimeVariable] */;
val* var41 /* : nullable RuntimeVariable */;
val* var_ok /* var ok: nullable RuntimeVariable */;
val* var42 /* : null */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : String */;
val* var58 /* : nullable AExpr */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : nullable EscapeMark */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
val* var71 /* : Array[Object] */;
long var72 /* : Int */;
val* var73 /* : NativeArray[Object] */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : String */;
val* var80 /* : MType */;
val* var81 /* : MMethod */;
val* var82 /* : Array[RuntimeVariable] */;
long var83 /* : Int */;
val* var84 /* : NativeArray[RuntimeVariable] */;
val* var85 /* : nullable RuntimeVariable */;
val* var_succ /* var succ: nullable RuntimeVariable */;
val* var86 /* : null */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : nullable EscapeMark */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : Array[Object] */;
long var106 /* : Int */;
val* var107 /* : NativeArray[Object] */;
val* var108 /* : String */;
val* var109 /* : AExpr */;
val* var110 /* : null */;
val* var111 /* : RuntimeVariable */;
val* var_cl /* var cl: RuntimeVariable */;
val* var112 /* : nullable MMethod */;
val* var_it_meth /* var it_meth: nullable MMethod */;
val* var113 /* : null */;
short int var114 /* : Bool */;
val* var115 /* : Array[RuntimeVariable] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[RuntimeVariable] */;
val* var118 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
val* var119 /* : null */;
short int var120 /* : Bool */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
val* var126 /* : nullable MMethod */;
val* var_isok_meth /* var isok_meth: nullable MMethod */;
val* var127 /* : null */;
short int var128 /* : Bool */;
val* var129 /* : Array[RuntimeVariable] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[RuntimeVariable] */;
val* var132 /* : nullable RuntimeVariable */;
val* var_ok133 /* var ok: nullable RuntimeVariable */;
val* var134 /* : null */;
short int var135 /* : Bool */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
val* var146 /* : Array[Object] */;
long var147 /* : Int */;
val* var148 /* : NativeArray[Object] */;
val* var149 /* : String */;
val* var150 /* : nullable Array[Variable] */;
long var151 /* : Int */;
long var152 /* : Int */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
val* var156 /* : nullable MMethod */;
val* var_item_meth /* var item_meth: nullable MMethod */;
val* var157 /* : null */;
short int var158 /* : Bool */;
val* var159 /* : Array[RuntimeVariable] */;
long var160 /* : Int */;
val* var161 /* : NativeArray[RuntimeVariable] */;
val* var162 /* : nullable RuntimeVariable */;
val* var_i /* var i: nullable RuntimeVariable */;
val* var163 /* : null */;
short int var164 /* : Bool */;
val* var165 /* : nullable Array[Variable] */;
val* var166 /* : nullable Object */;
val* var167 /* : RuntimeVariable */;
val* var168 /* : nullable Array[Variable] */;
long var169 /* : Int */;
long var170 /* : Int */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
val* var174 /* : nullable MMethod */;
val* var_key_meth /* var key_meth: nullable MMethod */;
val* var175 /* : null */;
short int var176 /* : Bool */;
val* var177 /* : Array[RuntimeVariable] */;
long var178 /* : Int */;
val* var179 /* : NativeArray[RuntimeVariable] */;
val* var180 /* : nullable RuntimeVariable */;
val* var_i181 /* var i: nullable RuntimeVariable */;
val* var182 /* : null */;
short int var183 /* : Bool */;
val* var184 /* : nullable Array[Variable] */;
long var185 /* : Int */;
val* var186 /* : nullable Object */;
val* var187 /* : RuntimeVariable */;
val* var188 /* : nullable MMethod */;
val* var_item_meth189 /* var item_meth: nullable MMethod */;
val* var190 /* : null */;
short int var191 /* : Bool */;
val* var192 /* : Array[RuntimeVariable] */;
long var193 /* : Int */;
val* var194 /* : NativeArray[RuntimeVariable] */;
val* var195 /* : nullable RuntimeVariable */;
val* var196 /* : null */;
short int var197 /* : Bool */;
val* var198 /* : nullable Array[Variable] */;
long var199 /* : Int */;
val* var200 /* : nullable Object */;
val* var201 /* : RuntimeVariable */;
val* var202 /* : nullable AExpr */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : String */;
val* var208 /* : nullable EscapeMark */;
val* var209 /* : String */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
long var213 /* : Int */;
val* var214 /* : String */;
val* var215 /* : Array[Object] */;
long var216 /* : Int */;
val* var217 /* : NativeArray[Object] */;
val* var218 /* : String */;
val* var219 /* : nullable MMethod */;
val* var_next_meth /* var next_meth: nullable MMethod */;
val* var220 /* : null */;
short int var221 /* : Bool */;
val* var222 /* : Array[RuntimeVariable] */;
long var223 /* : Int */;
val* var224 /* : NativeArray[RuntimeVariable] */;
val* var225 /* : nullable RuntimeVariable */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : String */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : String */;
val* var236 /* : nullable EscapeMark */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
long var241 /* : Int */;
val* var242 /* : String */;
val* var243 /* : Array[Object] */;
long var244 /* : Int */;
val* var245 /* : NativeArray[Object] */;
val* var246 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_expr]))(self) /* n_expr on <self:AForExpr>*/;
var_nexpr = var;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2172);
show_backtrace(1);
} else {
var4 = ((long (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__length]))(var3) /* length on <var3:nullable Array[Variable]>*/;
}
var5 = 1;
{ /* Inline kernel#Int#== (var4,var5) */
var8 = var4 == var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_ = var6;
if (var6){
/* <var_nexpr:AExpr> isa AOrangeExpr */
cltype = type_parser_nodes__AOrangeExpr.color;
idtype = type_parser_nodes__AOrangeExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var9 = 0;
} else {
var9 = var_nexpr->type->type_table[cltype] == idtype;
}
var2 = var9;
} else {
var2 = var_;
}
var_10 = var2;
if (var2){
var11 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var11) /* modelbuilder on <var11:AbstractCompiler>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var12) /* toolcontext on <var12:ModelBuilder>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_shortcut_range]))(var13) /* opt_no_shortcut_range on <var13:ToolContext>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_opts__Option__value]))(var14) /* value on <var14:OptionBool>*/;
var16 = ((struct instance_kernel__Bool*)var15)->value; /* autounbox from nullable Object to Bool */;
var17 = !var16;
var1 = var17;
} else {
var1 = var_10;
}
if (var1){
var18 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr]))(var_nexpr) /* n_expr on <var_nexpr:AExpr(AOrangeExpr)>*/;
var19 = NULL;
var20 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var18, var19) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_from = var20;
var21 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr2]))(var_nexpr) /* n_expr2 on <var_nexpr:AExpr(AOrangeExpr)>*/;
var22 = NULL;
var23 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var21, var22) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_to = var23;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2175);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_collection__Collection__first]))(var24) /* first on <var24:nullable Array[Variable]>*/;
}
var26 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var25) /* variable on <var_v:AbstractCompilerVisitor>*/;
var_variable = var26;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_variable, var_from) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce) {
var27 = varonce;
} else {
var28 = "for(;;) { /* shortcut range */";
var29 = 30;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var27) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "<";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = ((val* (*)(val*))(var_variable->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_variable) /* mtype on <var_variable:RuntimeVariable>*/;
var37 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(var_v, var32, var36) /* get_property on <var_v:AbstractCompilerVisitor>*/;
var38 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var38 = array_instance Array[RuntimeVariable] */
var39 = 2;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var_variable;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var_to;
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[RuntimeVariable]>*/;
}
var41 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var37, var38) /* send on <var_v:AbstractCompilerVisitor>*/;
var_ok = var41;
var42 = NULL;
if (var_ok == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (!var43) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2181);
show_backtrace(1);
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "if(!";
var47 = 4;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = ") break;";
var52 = 8;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 3;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var45;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var_ok;
((struct instance_array__NativeArray*)var56)->values[2] = (val*) var50;
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var57) /* add on <var_v:AbstractCompilerVisitor>*/;
var58 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_block]))(self) /* n_block on <self:AForExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var58) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "CONTINUE_";
var62 = 9;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__escapemark]))(self) /* escapemark on <self:AForExpr>*/;
var65 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var64) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce66) {
var67 = varonce66;
} else {
var68 = ": (void)0;";
var69 = 10;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 3;
var73 = NEW_array__NativeArray(var72, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var73)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var73)->values[1] = (val*) var65;
((struct instance_array__NativeArray*)var73)->values[2] = (val*) var67;
((void (*)(val*, val*, long))(var71->class->vft[COLOR_array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
var74 = ((val* (*)(val*))(var71->class->vft[COLOR_string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var74) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce75) {
var76 = varonce75;
} else {
var77 = "succ";
var78 = 4;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var80 = ((val* (*)(val*))(var_variable->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_variable) /* mtype on <var_variable:RuntimeVariable>*/;
var81 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(var_v, var76, var80) /* get_property on <var_v:AbstractCompilerVisitor>*/;
var82 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var82 = array_instance Array[RuntimeVariable] */
var83 = 1;
var84 = NEW_array__NativeArray(var83, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var84)->values[0] = (val*) var_variable;
((void (*)(val*, val*, long))(var82->class->vft[COLOR_array__Array__with_native]))(var82, var84, var83) /* with_native on <var82:Array[RuntimeVariable]>*/;
}
var85 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var81, var82) /* send on <var_v:AbstractCompilerVisitor>*/;
var_succ = var85;
var86 = NULL;
if (var_succ == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
if (!var87) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2188);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_variable, var_succ) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce88) {
var89 = varonce88;
} else {
var90 = "}";
var91 = 1;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var89) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce93) {
var94 = varonce93;
} else {
var95 = "BREAK_";
var96 = 6;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__escapemark]))(self) /* escapemark on <self:AForExpr>*/;
var99 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var98) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce100) {
var101 = varonce100;
} else {
var102 = ": (void)0;";
var103 = 10;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var105 = array_instance Array[Object] */
var106 = 3;
var107 = NEW_array__NativeArray(var106, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var107)->values[0] = (val*) var94;
((struct instance_array__NativeArray*)var107)->values[1] = (val*) var99;
((struct instance_array__NativeArray*)var107)->values[2] = (val*) var101;
((void (*)(val*, val*, long))(var105->class->vft[COLOR_array__Array__with_native]))(var105, var107, var106) /* with_native on <var105:Array[Object]>*/;
}
var108 = ((val* (*)(val*))(var105->class->vft[COLOR_string__Object__to_s]))(var105) /* to_s on <var105:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var108) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
var109 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_expr]))(self) /* n_expr on <self:AForExpr>*/;
var110 = NULL;
var111 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var109, var110) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_cl = var111;
var112 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_iterator]))(self) /* method_iterator on <self:AForExpr>*/;
var_it_meth = var112;
var113 = NULL;
if (var_it_meth == NULL) {
var114 = 0; /* is null */
} else {
var114 = 1; /* arg is null and recv is not */
}
if (!var114) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2197);
show_backtrace(1);
}
var115 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var115 = array_instance Array[RuntimeVariable] */
var116 = 1;
var117 = NEW_array__NativeArray(var116, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var117)->values[0] = (val*) var_cl;
((void (*)(val*, val*, long))(var115->class->vft[COLOR_array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[RuntimeVariable]>*/;
}
var118 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_it_meth, var115) /* send on <var_v:AbstractCompilerVisitor>*/;
var_it = var118;
var119 = NULL;
if (var_it == NULL) {
var120 = 0; /* is null */
} else {
var120 = 1; /* arg is null and recv is not */
}
if (!var120) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2199);
show_backtrace(1);
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = "for(;;) {";
var124 = 9;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var122) /* add on <var_v:AbstractCompilerVisitor>*/;
var126 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_is_ok]))(self) /* method_is_ok on <self:AForExpr>*/;
var_isok_meth = var126;
var127 = NULL;
if (var_isok_meth == NULL) {
var128 = 0; /* is null */
} else {
var128 = 1; /* arg is null and recv is not */
}
if (!var128) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2202);
show_backtrace(1);
}
var129 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var129 = array_instance Array[RuntimeVariable] */
var130 = 1;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var_it;
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[RuntimeVariable]>*/;
}
var132 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_isok_meth, var129) /* send on <var_v:AbstractCompilerVisitor>*/;
var_ok133 = var132;
var134 = NULL;
if (var_ok133 == NULL) {
var135 = 0; /* is null */
} else {
var135 = 1; /* arg is null and recv is not */
}
if (!var135) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2204);
show_backtrace(1);
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = "if(!";
var139 = 4;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = ") break;";
var144 = 8;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var146 = array_instance Array[Object] */
var147 = 3;
var148 = NEW_array__NativeArray(var147, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var148)->values[0] = (val*) var137;
((struct instance_array__NativeArray*)var148)->values[1] = (val*) var_ok133;
((struct instance_array__NativeArray*)var148)->values[2] = (val*) var142;
((void (*)(val*, val*, long))(var146->class->vft[COLOR_array__Array__with_native]))(var146, var148, var147) /* with_native on <var146:Array[Object]>*/;
}
var149 = ((val* (*)(val*))(var146->class->vft[COLOR_string__Object__to_s]))(var146) /* to_s on <var146:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var149) /* add on <var_v:AbstractCompilerVisitor>*/;
var150 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var150 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2206);
show_backtrace(1);
} else {
var151 = ((long (*)(val*))(var150->class->vft[COLOR_abstract_collection__Collection__length]))(var150) /* length on <var150:nullable Array[Variable]>*/;
}
var152 = 1;
{ /* Inline kernel#Int#== (var151,var152) */
var155 = var151 == var152;
var153 = var155;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
if (var153){
var156 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_item]))(self) /* method_item on <self:AForExpr>*/;
var_item_meth = var156;
var157 = NULL;
if (var_item_meth == NULL) {
var158 = 0; /* is null */
} else {
var158 = 1; /* arg is null and recv is not */
}
if (!var158) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2208);
show_backtrace(1);
}
var159 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var159 = array_instance Array[RuntimeVariable] */
var160 = 1;
var161 = NEW_array__NativeArray(var160, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var161)->values[0] = (val*) var_it;
((void (*)(val*, val*, long))(var159->class->vft[COLOR_array__Array__with_native]))(var159, var161, var160) /* with_native on <var159:Array[RuntimeVariable]>*/;
}
var162 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_item_meth, var159) /* send on <var_v:AbstractCompilerVisitor>*/;
var_i = var162;
var163 = NULL;
if (var_i == NULL) {
var164 = 0; /* is null */
} else {
var164 = 1; /* arg is null and recv is not */
}
if (!var164) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2210);
show_backtrace(1);
}
var165 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var165 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2211);
show_backtrace(1);
} else {
var166 = ((val* (*)(val*))(var165->class->vft[COLOR_abstract_collection__Collection__first]))(var165) /* first on <var165:nullable Array[Variable]>*/;
}
var167 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var166) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var167, var_i) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
var168 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var168 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2212);
show_backtrace(1);
} else {
var169 = ((long (*)(val*))(var168->class->vft[COLOR_abstract_collection__Collection__length]))(var168) /* length on <var168:nullable Array[Variable]>*/;
}
var170 = 2;
{ /* Inline kernel#Int#== (var169,var170) */
var173 = var169 == var170;
var171 = var173;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
if (var171){
var174 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_key]))(self) /* method_key on <self:AForExpr>*/;
var_key_meth = var174;
var175 = NULL;
if (var_key_meth == NULL) {
var176 = 0; /* is null */
} else {
var176 = 1; /* arg is null and recv is not */
}
if (!var176) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2214);
show_backtrace(1);
}
var177 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var177 = array_instance Array[RuntimeVariable] */
var178 = 1;
var179 = NEW_array__NativeArray(var178, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var179)->values[0] = (val*) var_it;
((void (*)(val*, val*, long))(var177->class->vft[COLOR_array__Array__with_native]))(var177, var179, var178) /* with_native on <var177:Array[RuntimeVariable]>*/;
}
var180 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_key_meth, var177) /* send on <var_v:AbstractCompilerVisitor>*/;
var_i181 = var180;
var182 = NULL;
if (var_i181 == NULL) {
var183 = 0; /* is null */
} else {
var183 = 1; /* arg is null and recv is not */
}
if (!var183) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2216);
show_backtrace(1);
}
var184 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
var185 = 0;
if (var184 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2217);
show_backtrace(1);
} else {
var186 = ((val* (*)(val*, long))(var184->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var184, var185) /* [] on <var184:nullable Array[Variable]>*/;
}
var187 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var186) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var187, var_i181) /* assign on <var_v:AbstractCompilerVisitor>*/;
var188 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_item]))(self) /* method_item on <self:AForExpr>*/;
var_item_meth189 = var188;
var190 = NULL;
if (var_item_meth189 == NULL) {
var191 = 0; /* is null */
} else {
var191 = 1; /* arg is null and recv is not */
}
if (!var191) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2219);
show_backtrace(1);
}
var192 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var192 = array_instance Array[RuntimeVariable] */
var193 = 1;
var194 = NEW_array__NativeArray(var193, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var194)->values[0] = (val*) var_it;
((void (*)(val*, val*, long))(var192->class->vft[COLOR_array__Array__with_native]))(var192, var194, var193) /* with_native on <var192:Array[RuntimeVariable]>*/;
}
var195 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_item_meth189, var192) /* send on <var_v:AbstractCompilerVisitor>*/;
var_i181 = var195;
var196 = NULL;
if (var_i181 == NULL) {
var197 = 0; /* is null */
} else {
var197 = 1; /* arg is null and recv is not */
}
if (!var197) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2221);
show_backtrace(1);
}
var198 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
var199 = 1;
if (var198 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2222);
show_backtrace(1);
} else {
var200 = ((val* (*)(val*, long))(var198->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var198, var199) /* [] on <var198:nullable Array[Variable]>*/;
}
var201 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var200) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var201, var_i181) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2224);
show_backtrace(1);
}
}
var202 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_block]))(self) /* n_block on <self:AForExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var202) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce203) {
var204 = varonce203;
} else {
var205 = "CONTINUE_";
var206 = 9;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
var208 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__escapemark]))(self) /* escapemark on <self:AForExpr>*/;
var209 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var208) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce210) {
var211 = varonce210;
} else {
var212 = ": (void)0;";
var213 = 10;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
var215 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var215 = array_instance Array[Object] */
var216 = 3;
var217 = NEW_array__NativeArray(var216, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var217)->values[0] = (val*) var204;
((struct instance_array__NativeArray*)var217)->values[1] = (val*) var209;
((struct instance_array__NativeArray*)var217)->values[2] = (val*) var211;
((void (*)(val*, val*, long))(var215->class->vft[COLOR_array__Array__with_native]))(var215, var217, var216) /* with_native on <var215:Array[Object]>*/;
}
var218 = ((val* (*)(val*))(var215->class->vft[COLOR_string__Object__to_s]))(var215) /* to_s on <var215:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var218) /* add on <var_v:AbstractCompilerVisitor>*/;
var219 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_next]))(self) /* method_next on <self:AForExpr>*/;
var_next_meth = var219;
var220 = NULL;
if (var_next_meth == NULL) {
var221 = 0; /* is null */
} else {
var221 = 1; /* arg is null and recv is not */
}
if (!var221) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2229);
show_backtrace(1);
}
var222 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var222 = array_instance Array[RuntimeVariable] */
var223 = 1;
var224 = NEW_array__NativeArray(var223, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var224)->values[0] = (val*) var_it;
((void (*)(val*, val*, long))(var222->class->vft[COLOR_array__Array__with_native]))(var222, var224, var223) /* with_native on <var222:Array[RuntimeVariable]>*/;
}
var225 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_next_meth, var222) /* send on <var_v:AbstractCompilerVisitor>*/;
var225;
if (varonce226) {
var227 = varonce226;
} else {
var228 = "}";
var229 = 1;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var227) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce231) {
var232 = varonce231;
} else {
var233 = "BREAK_";
var234 = 6;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
var236 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__escapemark]))(self) /* escapemark on <self:AForExpr>*/;
var237 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var236) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce238) {
var239 = varonce238;
} else {
var240 = ": (void)0;";
var241 = 10;
var242 = string__NativeString__to_s_with_length(var240, var241);
var239 = var242;
varonce238 = var239;
}
var243 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var243 = array_instance Array[Object] */
var244 = 3;
var245 = NEW_array__NativeArray(var244, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var245)->values[0] = (val*) var232;
((struct instance_array__NativeArray*)var245)->values[1] = (val*) var237;
((struct instance_array__NativeArray*)var245)->values[2] = (val*) var239;
((void (*)(val*, val*, long))(var243->class->vft[COLOR_array__Array__with_native]))(var243, var245, var244) /* with_native on <var243:Array[Object]>*/;
}
var246 = ((val* (*)(val*))(var243->class->vft[COLOR_string__Object__to_s]))(var243) /* to_s on <var243:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var246) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AForExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AForExpr__stmt(val* self, val* p0) {
abstract_compiler__AForExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: AAssertExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAssertExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AbstractCompiler */;
val* var1 /* : ModelBuilder */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
val* var6 /* : AExpr */;
val* var7 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
val* var21 /* : nullable AExpr */;
val* var22 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var23 /* : null */;
short int var24 /* : Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var) /* modelbuilder on <var:AbstractCompiler>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var1) /* toolcontext on <var1:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_assert]))(var2) /* opt_no_check_assert on <var2:ToolContext>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_opts__Option__value]))(var3) /* value on <var3:OptionBool>*/;
var5 = ((struct instance_kernel__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
if (var5){
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssertExpr__n_expr]))(self) /* n_expr on <self:AAssertExpr>*/;
var7 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var6) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var7;
if (varonce) {
var8 = varonce;
} else {
var9 = "if (!";
var10 = 5;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = ") {";
var15 = 3;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var20) /* add on <var_v:AbstractCompilerVisitor>*/;
var21 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssertExpr__n_else]))(self) /* n_else on <self:AAssertExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var21) /* stmt on <var_v:AbstractCompilerVisitor>*/;
var22 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssertExpr__n_id]))(self) /* n_id on <self:AAssertExpr>*/;
var_nid = var22;
var23 = NULL;
if (var_nid == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
if (varonce25) {
var26 = varonce25;
} else {
var27 = "Assert \'";
var28 = 8;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = ((val* (*)(val*))(var_nid->class->vft[COLOR_parser_nodes__Token__text]))(var_nid) /* text on <var_nid:nullable TId(TId)>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "\' failed";
var34 = 8;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 3;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var30;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var32;
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var39) /* add_abort on <var_v:AbstractCompilerVisitor>*/;
} else {
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Assert failed";
var43 = 13;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var41) /* add_abort on <var_v:AbstractCompilerVisitor>*/;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "}";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var46) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAssertExpr__stmt(val* self, val* p0) {
abstract_compiler__AAssertExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AOrExpr#expr for (self: AOrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : Array[Object] */;
long var24 /* : Int */;
val* var25 /* : NativeArray[Object] */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var33 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AOrExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2257);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr]))(self) /* n_expr on <self:AOrExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var3) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "if (";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = ") {";
var12 = 3;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = " = 1;";
var21 = 5;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 2;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var26) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "} else {";
var30 = 8;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var28) /* add on <var_v:AbstractCompilerVisitor>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr2]))(self) /* n_expr2 on <self:AOrExpr>*/;
var33 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var32) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = " = ";
var37 = 3;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = ";";
var42 = 1;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 4;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var46)->values[3] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var47) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "}";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var49) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: AImpliesExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AImpliesExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : Array[Object] */;
long var24 /* : Int */;
val* var25 /* : NativeArray[Object] */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var33 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AImpliesExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2272);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AImpliesExpr__n_expr]))(self) /* n_expr on <self:AImpliesExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var3) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "if (!";
var7 = 5;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = ") {";
var12 = 3;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = " = 1;";
var21 = 5;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 2;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var26) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "} else {";
var30 = 8;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var28) /* add on <var_v:AbstractCompilerVisitor>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AImpliesExpr__n_expr2]))(self) /* n_expr2 on <self:AImpliesExpr>*/;
var33 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var32) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = " = ";
var37 = 3;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = ";";
var42 = 1;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 4;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var46)->values[3] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var47) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "}";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var49) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AImpliesExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AImpliesExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: AAndExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAndExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : Array[Object] */;
long var24 /* : Int */;
val* var25 /* : NativeArray[Object] */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var33 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AAndExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2287);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr]))(self) /* n_expr on <self:AAndExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var3) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "if (!";
var7 = 5;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = ") {";
var12 = 3;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = " = 0;";
var21 = 5;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 2;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var26) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "} else {";
var30 = 8;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var28) /* add on <var_v:AbstractCompilerVisitor>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr2]))(self) /* n_expr2 on <self:AAndExpr>*/;
var33 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var32) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = " = ";
var37 = 3;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = ";";
var42 = 1;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 4;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var46)->values[3] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var47) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "}";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var49) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAndExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAndExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: ANotExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANotExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
val* var11 /* : nullable MType */;
val* var12 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANotExpr__n_expr]))(self) /* n_expr on <self:ANotExpr>*/;
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var1) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var2;
if (varonce) {
var3 = varonce;
} else {
var4 = "!";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var_cond;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ANotExpr>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2303);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var10, var11) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANotExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANotExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: AOrElseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrElseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : AExpr */;
val* var25 /* : null */;
val* var26 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AOrElseExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2310);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrElseExpr__n_expr]))(self) /* n_expr on <self:AOrElseExpr>*/;
var4 = NULL;
var5 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var3, var4) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var5;
if (varonce) {
var6 = varonce;
} else {
var7 = "if (";
var8 = 4;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "!=NULL) {";
var13 = 9;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 3;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var17)->values[2] = (val*) var11;
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var18) /* add on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var_i1) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "} else {";
var22 = 8;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var20) /* add on <var_v:AbstractCompilerVisitor>*/;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrElseExpr__n_expr2]))(self) /* n_expr2 on <self:AOrElseExpr>*/;
var25 = NULL;
var26 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var24, var25) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var26;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var_i2) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "}";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var28) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrElseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrElseExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntExpr#expr for (self: AIntExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIntExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Int */;
val* var2 /* : String */;
val* var3 /* : Array[Object] */;
long var4 /* : Int */;
val* var5 /* : NativeArray[Object] */;
val* var6 /* : String */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_literal__AIntExpr__value]))(self) /* value on <self:AIntExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2323);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_string__Object__to_s]))(var1) /* to_s on <var1:nullable Int>*/;
}
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var3 = array_instance Array[Object] */
var4 = 1;
var5 = NEW_array__NativeArray(var4, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var5)->values[0] = (val*) var2;
((void (*)(val*, val*, long))(var3->class->vft[COLOR_array__Array__with_native]))(var3, var5, var4) /* with_native on <var3:Array[Object]>*/;
}
var6 = ((val* (*)(val*))(var3->class->vft[COLOR_string__Object__to_s]))(var3) /* to_s on <var3:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AIntExpr>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2323);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var6, var7) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIntExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIntExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: AFloatExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AFloatExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : TFloat */;
val* var2 /* : String */;
val* var3 /* : Array[Object] */;
long var4 /* : Int */;
val* var5 /* : NativeArray[Object] */;
val* var6 /* : String */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AFloatExpr__n_float]))(self) /* n_float on <self:AFloatExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:TFloat>*/;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var3 = array_instance Array[Object] */
var4 = 1;
var5 = NEW_array__NativeArray(var4, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var5)->values[0] = (val*) var2;
((void (*)(val*, val*, long))(var3->class->vft[COLOR_array__Array__with_native]))(var3, var5, var4) /* with_native on <var3:Array[Object]>*/;
}
var6 = ((val* (*)(val*))(var3->class->vft[COLOR_string__Object__to_s]))(var3) /* to_s on <var3:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AFloatExpr>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2327);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var6, var7) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AFloatExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AFloatExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: ACharExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ACharExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable Char */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
val* var17 /* : nullable MType */;
val* var18 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "\'";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_literal__ACharExpr__value]))(self) /* value on <self:ACharExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2331);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:nullable Char>*/;
}
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_string__AbstractString__escape_to_c]))(var6) /* escape_to_c on <var6:String>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "\'";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var9;
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ACharExpr>*/;
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2331);
show_backtrace(1);
}
var18 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var16, var17) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ACharExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ACharExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: AArrayExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AArrayExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Array[MType] */;
val* var4 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var5 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var6 /* : AExprs */;
val* var7 /* : ANodes[AExpr] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var11 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var12 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AArrayExpr>*/;
/* <var1:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var1 == NULL) {
var2 = 0;
} else {
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2337);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassType__arguments]))(var1) /* arguments on <var1:nullable MType(MClassType)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__first]))(var3) /* first on <var3:Array[MType]>*/;
var_mtype = var4;
var5 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[RuntimeVariable]>*/;
var_array = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AArrayExpr__n_exprs]))(self) /* n_exprs on <self:AArrayExpr>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(var6) /* n_exprs on <var6:AExprs>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:ANodes[AExpr]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_nexpr = var10;
var11 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_nexpr, var_mtype) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var11;
((void (*)(val*, val*))(var_array->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_array, var_i) /* add on <var_array:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var12 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__array_instance]))(var_v, var_array, var_mtype) /* array_instance on <var_v:AbstractCompilerVisitor>*/;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AArrayExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AArrayExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: AStringFormExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AStringFormExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable String */;
val* var2 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_literal__AStringFormExpr__value]))(self) /* value on <self:AStringFormExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2348);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__string_instance]))(var_v, var1) /* string_instance on <var_v:AbstractCompilerVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AStringFormExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AStringFormExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: ASuperstringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASuperstringExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var8 /* : nullable String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
short int var13 /* : Bool */;
val* var14 /* : null */;
val* var15 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var16 /* : MClassType */;
val* var17 /* : RuntimeVariable */;
val* var_a /* var a: RuntimeVariable */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : MType */;
val* var24 /* : MMethod */;
val* var25 /* : Array[RuntimeVariable] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[RuntimeVariable] */;
val* var28 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
var_v = p0;
var1 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[RuntimeVariable]>*/;
var_array = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASuperstringExpr__n_exprs]))(self) /* n_exprs on <self:ASuperstringExpr>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:ANodes[AExpr]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_ne = var5;
/* <var_ne:AExpr> isa AStringFormExpr */
cltype = type_parser_nodes__AStringFormExpr.color;
idtype = type_parser_nodes__AStringFormExpr.id;
if(cltype >= var_ne->type->table_size) {
var7 = 0;
} else {
var7 = var_ne->type->type_table[cltype] == idtype;
}
var_ = var7;
if (var7){
var8 = ((val* (*)(val*))(var_ne->class->vft[COLOR_literal__AStringFormExpr__value]))(var_ne) /* value on <var_ne:AExpr(AStringFormExpr)>*/;
if (varonce) {
var9 = varonce;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (var8 == NULL) {
var13 = 0; /* <var9:String> cannot be null */
} else {
var13 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_kernel__Object___61d_61d]))(var8, var9) /* == on <var8:nullable String>*/;
}
var6 = var13;
} else {
var6 = var_;
}
if (var6){
goto CONTINUE_label;
} else {
}
var14 = NULL;
var15 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_ne, var14) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var15;
((void (*)(val*, val*))(var_array->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_array, var_i) /* add on <var_array:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var16 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__object_type]))(var_v) /* object_type on <var_v:AbstractCompilerVisitor>*/;
var17 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__array_instance]))(var_v, var_array, var16) /* array_instance on <var_v:AbstractCompilerVisitor>*/;
var_a = var17;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "to_s";
var21 = 4;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*))(var_a->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_a) /* mtype on <var_a:RuntimeVariable>*/;
var24 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(var_v, var19, var23) /* get_property on <var_v:AbstractCompilerVisitor>*/;
var25 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var25 = array_instance Array[RuntimeVariable] */
var26 = 1;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var_a;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[RuntimeVariable]>*/;
}
var28 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var24, var25) /* send on <var_v:AbstractCompilerVisitor>*/;
var_res = var28;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASuperstringExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASuperstringExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: ACrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ACrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var5 /* : null */;
val* var6 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var7 /* : nullable MType */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var9 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : MType */;
val* var15 /* : MMethod */;
val* var16 /* : Array[RuntimeVariable] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[RuntimeVariable] */;
val* var19 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr]))(self) /* n_expr on <self:ACrangeExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr2]))(self) /* n_expr2 on <self:ACrangeExpr>*/;
var5 = NULL;
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var4, var5) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ACrangeExpr>*/;
/* <var7:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var7 == NULL) {
var8 = 0;
} else {
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
}
if (!var8) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2371);
show_backtrace(1);
}
var_mtype = var7;
var9 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
var_res = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "init";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = ((val* (*)(val*))(var_res->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_res) /* mtype on <var_res:RuntimeVariable>*/;
var15 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(var_v, var10, var14) /* get_property on <var_v:AbstractCompilerVisitor>*/;
var16 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var16 = array_instance Array[RuntimeVariable] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var_i2;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[RuntimeVariable]>*/;
}
var19 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var15, var16) /* send on <var_v:AbstractCompilerVisitor>*/;
var_it = var19;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ACrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ACrangeExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: AOrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var5 /* : null */;
val* var6 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var7 /* : nullable MType */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var9 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : MType */;
val* var15 /* : MMethod */;
val* var16 /* : Array[RuntimeVariable] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[RuntimeVariable] */;
val* var19 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr]))(self) /* n_expr on <self:AOrangeExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr2]))(self) /* n_expr2 on <self:AOrangeExpr>*/;
var5 = NULL;
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var4, var5) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AOrangeExpr>*/;
/* <var7:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var7 == NULL) {
var8 = 0;
} else {
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
}
if (!var8) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2383);
show_backtrace(1);
}
var_mtype = var7;
var9 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
var_res = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "without_last";
var12 = 12;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = ((val* (*)(val*))(var_res->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_res) /* mtype on <var_res:RuntimeVariable>*/;
var15 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(var_v, var10, var14) /* get_property on <var_v:AbstractCompilerVisitor>*/;
var16 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var16 = array_instance Array[RuntimeVariable] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var_i2;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[RuntimeVariable]>*/;
}
var19 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var15, var16) /* send on <var_v:AbstractCompilerVisitor>*/;
var_it = var19;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrangeExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: ATrueExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ATrueExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable MType */;
val* var6 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "1";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ATrueExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2391);
show_backtrace(1);
}
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1, var5) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ATrueExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ATrueExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: AFalseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AFalseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable MType */;
val* var6 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "0";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AFalseExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2395);
show_backtrace(1);
}
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1, var5) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AFalseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AFalseExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: ANullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable MType */;
val* var6 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "NULL";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ANullExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2399);
show_backtrace(1);
}
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1, var5) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANullExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: AIsaExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIsaExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var4 /* : nullable MType */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIsaExpr__n_expr]))(self) /* n_expr on <self:AIsaExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AIsaExpr__cast_type]))(self) /* cast_type on <self:AIsaExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2406);
show_backtrace(1);
}
if (varonce) {
var5 = varonce;
} else {
var6 = "isa";
var7 = 3;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(var_v, var_i, var4, var5) /* type_test on <var_v:AbstractCompilerVisitor>*/;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIsaExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIsaExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsCastExpr#expr for (self: AAsCastExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAsCastExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var7 /* : OptionBool */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsCastExpr__n_expr]))(self) /* n_expr on <self:AAsCastExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var3;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var4) /* modelbuilder on <var4:AbstractCompiler>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var5) /* toolcontext on <var5:ModelBuilder>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_assert]))(var6) /* opt_no_check_assert on <var6:ToolContext>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_opts__Option__value]))(var7) /* value on <var7:OptionBool>*/;
var9 = ((struct instance_kernel__Bool*)var8)->value; /* autounbox from nullable Object to Bool */;
if (var9){
var = var_i;
goto RET_LABEL;
} else {
}
var10 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AAsCastExpr>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2416);
show_backtrace(1);
}
if (varonce) {
var11 = varonce;
} else {
var12 = "as";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_cast]))(var_v, var_i, var10, var11) /* add_cast on <var_v:AbstractCompilerVisitor>*/;
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
