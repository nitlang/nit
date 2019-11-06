#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler$AMethPropdef$compile_intern_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
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
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Bool */;
val* var60 /* : nullable Bool */;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
short int var70 /* : Bool */;
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
val* var89 /* : nullable Object */;
val* var90 /* : String */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : CString */;
val* var95 /* : String */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Bool */;
val* var99 /* : nullable Bool */;
short int var100 /* : Bool */;
val* var101 /* : nullable Object */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Bool */;
val* var109 /* : nullable Bool */;
short int var110 /* : Bool */;
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
val* var121 /* : nullable Object */;
val* var122 /* : String */;
val* var123 /* : nullable Object */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : RuntimeVariable */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Bool */;
val* var134 /* : nullable Bool */;
short int var135 /* : Bool */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Bool */;
val* var145 /* : nullable Bool */;
val* var146 /* : nullable Object */;
val* var147 /* : String */;
val* var148 /* : nullable Object */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : RuntimeVariable */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : CString */;
val* var155 /* : String */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Int */;
val* var158 /* : nullable Bool */;
val* var159 /* : nullable Bool */;
short int var160 /* : Bool */;
val* var162 /* : NativeArray[String] */;
static val* varonce161;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Bool */;
val* var170 /* : nullable Bool */;
val* var171 /* : nullable Object */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var174 /* : RuntimeVariable */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : CString */;
val* var178 /* : String */;
val* var179 /* : nullable Int */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Bool */;
val* var182 /* : nullable Bool */;
short int var183 /* : Bool */;
val* var184 /* : nullable Object */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable Bool */;
short int var193 /* : Bool */;
val* var195 /* : NativeArray[String] */;
static val* varonce194;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Bool */;
val* var203 /* : nullable Bool */;
val* var204 /* : nullable Object */;
val* var205 /* : String */;
val* var206 /* : nullable Object */;
val* var207 /* : String */;
val* var208 /* : String */;
val* var209 /* : RuntimeVariable */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
val* var214 /* : nullable Int */;
val* var215 /* : nullable Int */;
val* var216 /* : nullable Bool */;
val* var217 /* : nullable Bool */;
short int var218 /* : Bool */;
val* var220 /* : NativeArray[String] */;
static val* varonce219;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : CString */;
val* var224 /* : String */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Bool */;
val* var228 /* : nullable Bool */;
val* var229 /* : nullable Object */;
val* var230 /* : String */;
val* var231 /* : nullable Object */;
val* var232 /* : String */;
val* var233 /* : String */;
val* var234 /* : RuntimeVariable */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : CString */;
val* var238 /* : String */;
val* var239 /* : nullable Int */;
val* var240 /* : nullable Int */;
val* var241 /* : nullable Bool */;
val* var242 /* : nullable Bool */;
short int var243 /* : Bool */;
val* var245 /* : NativeArray[String] */;
static val* varonce244;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : CString */;
val* var249 /* : String */;
val* var250 /* : nullable Int */;
val* var251 /* : nullable Int */;
val* var252 /* : nullable Bool */;
val* var253 /* : nullable Bool */;
val* var254 /* : nullable Object */;
val* var255 /* : String */;
val* var256 /* : nullable Object */;
val* var257 /* : String */;
val* var258 /* : String */;
val* var259 /* : RuntimeVariable */;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : CString */;
val* var263 /* : String */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Int */;
val* var266 /* : nullable Bool */;
val* var267 /* : nullable Bool */;
short int var268 /* : Bool */;
val* var269 /* : nullable Object */;
val* var270 /* : nullable Object */;
val* var271 /* : RuntimeVariable */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : CString */;
val* var275 /* : String */;
val* var276 /* : nullable Int */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Bool */;
val* var279 /* : nullable Bool */;
short int var280 /* : Bool */;
val* var281 /* : nullable Object */;
val* var282 /* : nullable Object */;
val* var283 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var285 /* : NativeArray[String] */;
static val* varonce284;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : CString */;
val* var289 /* : String */;
val* var290 /* : nullable Int */;
val* var291 /* : nullable Int */;
val* var292 /* : nullable Bool */;
val* var293 /* : nullable Bool */;
val* var294 /* : String */;
val* var295 /* : String */;
val* var296 /* : RuntimeVariable */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : CString */;
val* var300 /* : String */;
val* var301 /* : nullable Int */;
val* var302 /* : nullable Int */;
val* var303 /* : nullable Bool */;
val* var304 /* : nullable Bool */;
short int var305 /* : Bool */;
val* var307 /* : NativeArray[String] */;
static val* varonce306;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : CString */;
val* var311 /* : String */;
val* var312 /* : nullable Int */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Bool */;
val* var315 /* : nullable Bool */;
val* var316 /* : nullable Object */;
val* var317 /* : String */;
val* var318 /* : nullable Object */;
val* var319 /* : String */;
val* var320 /* : String */;
val* var321 /* : RuntimeVariable */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : CString */;
val* var325 /* : String */;
val* var326 /* : nullable Int */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Bool */;
val* var329 /* : nullable Bool */;
short int var330 /* : Bool */;
val* var332 /* : NativeArray[String] */;
static val* varonce331;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : CString */;
val* var336 /* : String */;
val* var337 /* : nullable Int */;
val* var338 /* : nullable Int */;
val* var339 /* : nullable Bool */;
val* var340 /* : nullable Bool */;
val* var341 /* : nullable Object */;
val* var342 /* : String */;
val* var343 /* : nullable Object */;
val* var344 /* : String */;
val* var345 /* : String */;
val* var346 /* : RuntimeVariable */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : CString */;
val* var350 /* : String */;
val* var351 /* : nullable Int */;
val* var352 /* : nullable Int */;
val* var353 /* : nullable Bool */;
val* var354 /* : nullable Bool */;
short int var355 /* : Bool */;
val* var357 /* : NativeArray[String] */;
static val* varonce356;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : CString */;
val* var361 /* : String */;
val* var362 /* : nullable Int */;
val* var363 /* : nullable Int */;
val* var364 /* : nullable Bool */;
val* var365 /* : nullable Bool */;
val* var366 /* : nullable Object */;
val* var367 /* : String */;
val* var368 /* : nullable Object */;
val* var369 /* : String */;
val* var370 /* : String */;
val* var371 /* : RuntimeVariable */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : CString */;
val* var375 /* : String */;
val* var376 /* : nullable Int */;
val* var377 /* : nullable Int */;
val* var378 /* : nullable Bool */;
val* var379 /* : nullable Bool */;
short int var380 /* : Bool */;
val* var382 /* : NativeArray[String] */;
static val* varonce381;
static val* varonce383;
val* var384 /* : String */;
char* var385 /* : CString */;
val* var386 /* : String */;
val* var387 /* : nullable Int */;
val* var388 /* : nullable Int */;
val* var389 /* : nullable Bool */;
val* var390 /* : nullable Bool */;
val* var391 /* : nullable Object */;
val* var392 /* : String */;
val* var393 /* : nullable Object */;
val* var394 /* : String */;
val* var395 /* : String */;
val* var396 /* : RuntimeVariable */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : CString */;
val* var400 /* : String */;
val* var401 /* : nullable Int */;
val* var402 /* : nullable Int */;
val* var403 /* : nullable Bool */;
val* var404 /* : nullable Bool */;
short int var405 /* : Bool */;
val* var407 /* : NativeArray[String] */;
static val* varonce406;
static val* varonce408;
val* var409 /* : String */;
char* var410 /* : CString */;
val* var411 /* : String */;
val* var412 /* : nullable Int */;
val* var413 /* : nullable Int */;
val* var414 /* : nullable Bool */;
val* var415 /* : nullable Bool */;
val* var416 /* : nullable Object */;
val* var417 /* : String */;
val* var418 /* : String */;
val* var419 /* : RuntimeVariable */;
static val* varonce420;
val* var421 /* : String */;
char* var422 /* : CString */;
val* var423 /* : String */;
val* var424 /* : nullable Int */;
val* var425 /* : nullable Int */;
val* var426 /* : nullable Bool */;
val* var427 /* : nullable Bool */;
short int var428 /* : Bool */;
val* var430 /* : NativeArray[String] */;
static val* varonce429;
static val* varonce431;
val* var432 /* : String */;
char* var433 /* : CString */;
val* var434 /* : String */;
val* var435 /* : nullable Int */;
val* var436 /* : nullable Int */;
val* var437 /* : nullable Bool */;
val* var438 /* : nullable Bool */;
val* var439 /* : nullable Object */;
val* var440 /* : String */;
val* var441 /* : String */;
val* var442 /* : RuntimeVariable */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : CString */;
val* var446 /* : String */;
val* var447 /* : nullable Int */;
val* var448 /* : nullable Int */;
val* var449 /* : nullable Bool */;
val* var450 /* : nullable Bool */;
short int var451 /* : Bool */;
val* var453 /* : NativeArray[String] */;
static val* varonce452;
static val* varonce454;
val* var455 /* : String */;
char* var456 /* : CString */;
val* var457 /* : String */;
val* var458 /* : nullable Int */;
val* var459 /* : nullable Int */;
val* var460 /* : nullable Bool */;
val* var461 /* : nullable Bool */;
val* var462 /* : nullable Object */;
val* var463 /* : String */;
val* var464 /* : String */;
val* var465 /* : RuntimeVariable */;
static val* varonce466;
val* var467 /* : String */;
char* var468 /* : CString */;
val* var469 /* : String */;
val* var470 /* : nullable Int */;
val* var471 /* : nullable Int */;
val* var472 /* : nullable Bool */;
val* var473 /* : nullable Bool */;
short int var474 /* : Bool */;
val* var476 /* : NativeArray[String] */;
static val* varonce475;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : CString */;
val* var480 /* : String */;
val* var481 /* : nullable Int */;
val* var482 /* : nullable Int */;
val* var483 /* : nullable Bool */;
val* var484 /* : nullable Bool */;
val* var485 /* : nullable Object */;
val* var486 /* : String */;
val* var487 /* : String */;
val* var488 /* : RuntimeVariable */;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : CString */;
val* var492 /* : String */;
val* var493 /* : nullable Int */;
val* var494 /* : nullable Int */;
val* var495 /* : nullable Bool */;
val* var496 /* : nullable Bool */;
short int var497 /* : Bool */;
val* var499 /* : NativeArray[String] */;
static val* varonce498;
static val* varonce500;
val* var501 /* : String */;
char* var502 /* : CString */;
val* var503 /* : String */;
val* var504 /* : nullable Int */;
val* var505 /* : nullable Int */;
val* var506 /* : nullable Bool */;
val* var507 /* : nullable Bool */;
val* var508 /* : nullable Object */;
val* var509 /* : String */;
val* var510 /* : String */;
val* var511 /* : RuntimeVariable */;
static val* varonce512;
val* var513 /* : String */;
char* var514 /* : CString */;
val* var515 /* : String */;
val* var516 /* : nullable Int */;
val* var517 /* : nullable Int */;
val* var518 /* : nullable Bool */;
val* var519 /* : nullable Bool */;
short int var520 /* : Bool */;
val* var522 /* : NativeArray[String] */;
static val* varonce521;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : CString */;
val* var526 /* : String */;
val* var527 /* : nullable Int */;
val* var528 /* : nullable Int */;
val* var529 /* : nullable Bool */;
val* var530 /* : nullable Bool */;
val* var531 /* : nullable Object */;
val* var532 /* : String */;
val* var533 /* : String */;
val* var534 /* : RuntimeVariable */;
static val* varonce535;
val* var536 /* : String */;
char* var537 /* : CString */;
val* var538 /* : String */;
val* var539 /* : nullable Int */;
val* var540 /* : nullable Int */;
val* var541 /* : nullable Bool */;
val* var542 /* : nullable Bool */;
short int var543 /* : Bool */;
val* var545 /* : NativeArray[String] */;
static val* varonce544;
static val* varonce546;
val* var547 /* : String */;
char* var548 /* : CString */;
val* var549 /* : String */;
val* var550 /* : nullable Int */;
val* var551 /* : nullable Int */;
val* var552 /* : nullable Bool */;
val* var553 /* : nullable Bool */;
val* var554 /* : nullable Object */;
val* var555 /* : String */;
val* var556 /* : String */;
val* var557 /* : RuntimeVariable */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : CString */;
val* var561 /* : String */;
val* var562 /* : nullable Int */;
val* var563 /* : nullable Int */;
val* var564 /* : nullable Bool */;
val* var565 /* : nullable Bool */;
short int var566 /* : Bool */;
val* var568 /* : NativeArray[String] */;
static val* varonce567;
static val* varonce569;
val* var570 /* : String */;
char* var571 /* : CString */;
val* var572 /* : String */;
val* var573 /* : nullable Int */;
val* var574 /* : nullable Int */;
val* var575 /* : nullable Bool */;
val* var576 /* : nullable Bool */;
val* var577 /* : nullable Object */;
val* var578 /* : String */;
val* var579 /* : String */;
val* var580 /* : RuntimeVariable */;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : CString */;
val* var584 /* : String */;
val* var585 /* : nullable Int */;
val* var586 /* : nullable Int */;
val* var587 /* : nullable Bool */;
val* var588 /* : nullable Bool */;
short int var589 /* : Bool */;
val* var591 /* : NativeArray[String] */;
static val* varonce590;
static val* varonce592;
val* var593 /* : String */;
char* var594 /* : CString */;
val* var595 /* : String */;
val* var596 /* : nullable Int */;
val* var597 /* : nullable Int */;
val* var598 /* : nullable Bool */;
val* var599 /* : nullable Bool */;
val* var600 /* : nullable Object */;
val* var601 /* : String */;
val* var602 /* : nullable Object */;
val* var603 /* : String */;
val* var604 /* : String */;
val* var605 /* : RuntimeVariable */;
static val* varonce606;
val* var607 /* : String */;
char* var608 /* : CString */;
val* var609 /* : String */;
val* var610 /* : nullable Int */;
val* var611 /* : nullable Int */;
val* var612 /* : nullable Bool */;
val* var613 /* : nullable Bool */;
short int var614 /* : Bool */;
val* var616 /* : NativeArray[String] */;
static val* varonce615;
static val* varonce617;
val* var618 /* : String */;
char* var619 /* : CString */;
val* var620 /* : String */;
val* var621 /* : nullable Int */;
val* var622 /* : nullable Int */;
val* var623 /* : nullable Bool */;
val* var624 /* : nullable Bool */;
val* var625 /* : nullable Object */;
val* var626 /* : String */;
val* var627 /* : nullable Object */;
val* var628 /* : String */;
val* var629 /* : String */;
val* var630 /* : RuntimeVariable */;
static val* varonce631;
val* var632 /* : String */;
char* var633 /* : CString */;
val* var634 /* : String */;
val* var635 /* : nullable Int */;
val* var636 /* : nullable Int */;
val* var637 /* : nullable Bool */;
val* var638 /* : nullable Bool */;
short int var639 /* : Bool */;
val* var641 /* : NativeArray[String] */;
static val* varonce640;
static val* varonce642;
val* var643 /* : String */;
char* var644 /* : CString */;
val* var645 /* : String */;
val* var646 /* : nullable Int */;
val* var647 /* : nullable Int */;
val* var648 /* : nullable Bool */;
val* var649 /* : nullable Bool */;
val* var650 /* : nullable Object */;
val* var651 /* : String */;
val* var652 /* : nullable Object */;
val* var653 /* : String */;
val* var654 /* : String */;
val* var655 /* : RuntimeVariable */;
static val* varonce656;
val* var657 /* : String */;
char* var658 /* : CString */;
val* var659 /* : String */;
val* var660 /* : nullable Int */;
val* var661 /* : nullable Int */;
val* var662 /* : nullable Bool */;
val* var663 /* : nullable Bool */;
short int var664 /* : Bool */;
val* var666 /* : NativeArray[String] */;
static val* varonce665;
static val* varonce667;
val* var668 /* : String */;
char* var669 /* : CString */;
val* var670 /* : String */;
val* var671 /* : nullable Int */;
val* var672 /* : nullable Int */;
val* var673 /* : nullable Bool */;
val* var674 /* : nullable Bool */;
val* var675 /* : nullable Object */;
val* var676 /* : String */;
val* var677 /* : nullable Object */;
val* var678 /* : String */;
val* var679 /* : String */;
val* var680 /* : RuntimeVariable */;
static val* varonce681;
val* var682 /* : String */;
char* var683 /* : CString */;
val* var684 /* : String */;
val* var685 /* : nullable Int */;
val* var686 /* : nullable Int */;
val* var687 /* : nullable Bool */;
val* var688 /* : nullable Bool */;
short int var689 /* : Bool */;
static val* varonce690;
val* var691 /* : String */;
char* var692 /* : CString */;
val* var693 /* : String */;
val* var694 /* : nullable Int */;
val* var695 /* : nullable Int */;
val* var696 /* : nullable Bool */;
val* var697 /* : nullable Bool */;
short int var698 /* : Bool */;
val* var700 /* : NativeArray[String] */;
static val* varonce699;
static val* varonce701;
val* var702 /* : String */;
char* var703 /* : CString */;
val* var704 /* : String */;
val* var705 /* : nullable Int */;
val* var706 /* : nullable Int */;
val* var707 /* : nullable Bool */;
val* var708 /* : nullable Bool */;
val* var709 /* : nullable Object */;
val* var710 /* : String */;
val* var711 /* : String */;
val* var712 /* : RuntimeVariable */;
static val* varonce713;
val* var714 /* : String */;
char* var715 /* : CString */;
val* var716 /* : String */;
val* var717 /* : nullable Int */;
val* var718 /* : nullable Int */;
val* var719 /* : nullable Bool */;
val* var720 /* : nullable Bool */;
short int var721 /* : Bool */;
val* var723 /* : NativeArray[String] */;
static val* varonce722;
static val* varonce724;
val* var725 /* : String */;
char* var726 /* : CString */;
val* var727 /* : String */;
val* var728 /* : nullable Int */;
val* var729 /* : nullable Int */;
val* var730 /* : nullable Bool */;
val* var731 /* : nullable Bool */;
val* var732 /* : nullable Object */;
val* var733 /* : String */;
val* var734 /* : nullable Object */;
val* var735 /* : String */;
val* var736 /* : String */;
val* var737 /* : RuntimeVariable */;
static val* varonce738;
val* var739 /* : String */;
char* var740 /* : CString */;
val* var741 /* : String */;
val* var742 /* : nullable Int */;
val* var743 /* : nullable Int */;
val* var744 /* : nullable Bool */;
val* var745 /* : nullable Bool */;
short int var746 /* : Bool */;
val* var748 /* : NativeArray[String] */;
static val* varonce747;
static val* varonce749;
val* var750 /* : String */;
char* var751 /* : CString */;
val* var752 /* : String */;
val* var753 /* : nullable Int */;
val* var754 /* : nullable Int */;
val* var755 /* : nullable Bool */;
val* var756 /* : nullable Bool */;
val* var757 /* : nullable Object */;
val* var758 /* : String */;
val* var759 /* : nullable Object */;
val* var760 /* : String */;
val* var761 /* : String */;
val* var762 /* : RuntimeVariable */;
static val* varonce763;
val* var764 /* : String */;
char* var765 /* : CString */;
val* var766 /* : String */;
val* var767 /* : nullable Int */;
val* var768 /* : nullable Int */;
val* var769 /* : nullable Bool */;
val* var770 /* : nullable Bool */;
short int var771 /* : Bool */;
val* var772 /* : nullable Object */;
val* var773 /* : nullable Object */;
val* var774 /* : RuntimeVariable */;
static val* varonce775;
val* var776 /* : String */;
char* var777 /* : CString */;
val* var778 /* : String */;
val* var779 /* : nullable Int */;
val* var780 /* : nullable Int */;
val* var781 /* : nullable Bool */;
val* var782 /* : nullable Bool */;
short int var783 /* : Bool */;
val* var784 /* : nullable Object */;
val* var785 /* : nullable Object */;
val* var786 /* : RuntimeVariable */;
val* var_res787 /* var res: RuntimeVariable */;
val* var789 /* : NativeArray[String] */;
static val* varonce788;
static val* varonce790;
val* var791 /* : String */;
char* var792 /* : CString */;
val* var793 /* : String */;
val* var794 /* : nullable Int */;
val* var795 /* : nullable Int */;
val* var796 /* : nullable Bool */;
val* var797 /* : nullable Bool */;
val* var798 /* : String */;
val* var799 /* : String */;
val* var800 /* : RuntimeVariable */;
static val* varonce801;
val* var802 /* : String */;
char* var803 /* : CString */;
val* var804 /* : String */;
val* var805 /* : nullable Int */;
val* var806 /* : nullable Int */;
val* var807 /* : nullable Bool */;
val* var808 /* : nullable Bool */;
short int var809 /* : Bool */;
val* var811 /* : NativeArray[String] */;
static val* varonce810;
static val* varonce812;
val* var813 /* : String */;
char* var814 /* : CString */;
val* var815 /* : String */;
val* var816 /* : nullable Int */;
val* var817 /* : nullable Int */;
val* var818 /* : nullable Bool */;
val* var819 /* : nullable Bool */;
val* var820 /* : nullable Object */;
val* var821 /* : String */;
val* var822 /* : nullable Object */;
val* var823 /* : String */;
val* var824 /* : String */;
val* var825 /* : RuntimeVariable */;
static val* varonce826;
val* var827 /* : String */;
char* var828 /* : CString */;
val* var829 /* : String */;
val* var830 /* : nullable Int */;
val* var831 /* : nullable Int */;
val* var832 /* : nullable Bool */;
val* var833 /* : nullable Bool */;
short int var834 /* : Bool */;
val* var836 /* : NativeArray[String] */;
static val* varonce835;
static val* varonce837;
val* var838 /* : String */;
char* var839 /* : CString */;
val* var840 /* : String */;
val* var841 /* : nullable Int */;
val* var842 /* : nullable Int */;
val* var843 /* : nullable Bool */;
val* var844 /* : nullable Bool */;
val* var845 /* : nullable Object */;
val* var846 /* : String */;
val* var847 /* : nullable Object */;
val* var848 /* : String */;
val* var849 /* : String */;
val* var850 /* : RuntimeVariable */;
static val* varonce851;
val* var852 /* : String */;
char* var853 /* : CString */;
val* var854 /* : String */;
val* var855 /* : nullable Int */;
val* var856 /* : nullable Int */;
val* var857 /* : nullable Bool */;
val* var858 /* : nullable Bool */;
short int var859 /* : Bool */;
val* var861 /* : NativeArray[String] */;
static val* varonce860;
static val* varonce862;
val* var863 /* : String */;
char* var864 /* : CString */;
val* var865 /* : String */;
val* var866 /* : nullable Int */;
val* var867 /* : nullable Int */;
val* var868 /* : nullable Bool */;
val* var869 /* : nullable Bool */;
val* var870 /* : nullable Object */;
val* var871 /* : String */;
val* var872 /* : nullable Object */;
val* var873 /* : String */;
val* var874 /* : String */;
val* var875 /* : RuntimeVariable */;
static val* varonce876;
val* var877 /* : String */;
char* var878 /* : CString */;
val* var879 /* : String */;
val* var880 /* : nullable Int */;
val* var881 /* : nullable Int */;
val* var882 /* : nullable Bool */;
val* var883 /* : nullable Bool */;
short int var884 /* : Bool */;
val* var886 /* : NativeArray[String] */;
static val* varonce885;
static val* varonce887;
val* var888 /* : String */;
char* var889 /* : CString */;
val* var890 /* : String */;
val* var891 /* : nullable Int */;
val* var892 /* : nullable Int */;
val* var893 /* : nullable Bool */;
val* var894 /* : nullable Bool */;
val* var895 /* : nullable Object */;
val* var896 /* : String */;
val* var897 /* : nullable Object */;
val* var898 /* : String */;
val* var899 /* : String */;
val* var900 /* : RuntimeVariable */;
static val* varonce901;
val* var902 /* : String */;
char* var903 /* : CString */;
val* var904 /* : String */;
val* var905 /* : nullable Int */;
val* var906 /* : nullable Int */;
val* var907 /* : nullable Bool */;
val* var908 /* : nullable Bool */;
short int var909 /* : Bool */;
val* var911 /* : NativeArray[String] */;
static val* varonce910;
static val* varonce912;
val* var913 /* : String */;
char* var914 /* : CString */;
val* var915 /* : String */;
val* var916 /* : nullable Int */;
val* var917 /* : nullable Int */;
val* var918 /* : nullable Bool */;
val* var919 /* : nullable Bool */;
val* var920 /* : nullable Object */;
val* var921 /* : String */;
val* var922 /* : String */;
val* var923 /* : RuntimeVariable */;
static val* varonce924;
val* var925 /* : String */;
char* var926 /* : CString */;
val* var927 /* : String */;
val* var928 /* : nullable Int */;
val* var929 /* : nullable Int */;
val* var930 /* : nullable Bool */;
val* var931 /* : nullable Bool */;
short int var932 /* : Bool */;
val* var934 /* : NativeArray[String] */;
static val* varonce933;
static val* varonce935;
val* var936 /* : String */;
char* var937 /* : CString */;
val* var938 /* : String */;
val* var939 /* : nullable Int */;
val* var940 /* : nullable Int */;
val* var941 /* : nullable Bool */;
val* var942 /* : nullable Bool */;
val* var943 /* : nullable Object */;
val* var944 /* : String */;
val* var945 /* : String */;
val* var946 /* : RuntimeVariable */;
static val* varonce947;
val* var948 /* : String */;
char* var949 /* : CString */;
val* var950 /* : String */;
val* var951 /* : nullable Int */;
val* var952 /* : nullable Int */;
val* var953 /* : nullable Bool */;
val* var954 /* : nullable Bool */;
short int var955 /* : Bool */;
static val* varonce956;
val* var957 /* : String */;
char* var958 /* : CString */;
val* var959 /* : String */;
val* var960 /* : nullable Int */;
val* var961 /* : nullable Int */;
val* var962 /* : nullable Bool */;
val* var963 /* : nullable Bool */;
short int var964 /* : Bool */;
val* var966 /* : NativeArray[String] */;
static val* varonce965;
static val* varonce967;
val* var968 /* : String */;
char* var969 /* : CString */;
val* var970 /* : String */;
val* var971 /* : nullable Int */;
val* var972 /* : nullable Int */;
val* var973 /* : nullable Bool */;
val* var974 /* : nullable Bool */;
static val* varonce975;
val* var976 /* : String */;
char* var977 /* : CString */;
val* var978 /* : String */;
val* var979 /* : nullable Int */;
val* var980 /* : nullable Int */;
val* var981 /* : nullable Bool */;
val* var982 /* : nullable Bool */;
val* var983 /* : nullable Object */;
val* var984 /* : String */;
val* var985 /* : String */;
static val* varonce986;
val* var987 /* : String */;
char* var988 /* : CString */;
val* var989 /* : String */;
val* var990 /* : nullable Int */;
val* var991 /* : nullable Int */;
val* var992 /* : nullable Bool */;
val* var993 /* : nullable Bool */;
short int var994 /* : Bool */;
val* var996 /* : NativeArray[String] */;
static val* varonce995;
static val* varonce997;
val* var998 /* : String */;
char* var999 /* : CString */;
val* var1000 /* : String */;
val* var1001 /* : nullable Int */;
val* var1002 /* : nullable Int */;
val* var1003 /* : nullable Bool */;
val* var1004 /* : nullable Bool */;
val* var1005 /* : nullable Object */;
val* var1006 /* : String */;
val* var1007 /* : String */;
val* var1008 /* : RuntimeVariable */;
static val* varonce1009;
val* var1010 /* : String */;
char* var1011 /* : CString */;
val* var1012 /* : String */;
val* var1013 /* : nullable Int */;
val* var1014 /* : nullable Int */;
val* var1015 /* : nullable Bool */;
val* var1016 /* : nullable Bool */;
short int var1017 /* : Bool */;
val* var1019 /* : NativeArray[String] */;
static val* varonce1018;
static val* varonce1020;
val* var1021 /* : String */;
char* var1022 /* : CString */;
val* var1023 /* : String */;
val* var1024 /* : nullable Int */;
val* var1025 /* : nullable Int */;
val* var1026 /* : nullable Bool */;
val* var1027 /* : nullable Bool */;
val* var1028 /* : nullable Object */;
val* var1029 /* : String */;
val* var1030 /* : nullable Object */;
val* var1031 /* : String */;
val* var1032 /* : String */;
val* var1033 /* : RuntimeVariable */;
static val* varonce1034;
val* var1035 /* : String */;
char* var1036 /* : CString */;
val* var1037 /* : String */;
val* var1038 /* : nullable Int */;
val* var1039 /* : nullable Int */;
val* var1040 /* : nullable Bool */;
val* var1041 /* : nullable Bool */;
short int var1042 /* : Bool */;
val* var1044 /* : NativeArray[String] */;
static val* varonce1043;
static val* varonce1045;
val* var1046 /* : String */;
char* var1047 /* : CString */;
val* var1048 /* : String */;
val* var1049 /* : nullable Int */;
val* var1050 /* : nullable Int */;
val* var1051 /* : nullable Bool */;
val* var1052 /* : nullable Bool */;
val* var1053 /* : nullable Object */;
val* var1054 /* : String */;
val* var1055 /* : nullable Object */;
val* var1056 /* : String */;
val* var1057 /* : String */;
val* var1058 /* : RuntimeVariable */;
static val* varonce1059;
val* var1060 /* : String */;
char* var1061 /* : CString */;
val* var1062 /* : String */;
val* var1063 /* : nullable Int */;
val* var1064 /* : nullable Int */;
val* var1065 /* : nullable Bool */;
val* var1066 /* : nullable Bool */;
short int var1067 /* : Bool */;
val* var1069 /* : NativeArray[String] */;
static val* varonce1068;
static val* varonce1070;
val* var1071 /* : String */;
char* var1072 /* : CString */;
val* var1073 /* : String */;
val* var1074 /* : nullable Int */;
val* var1075 /* : nullable Int */;
val* var1076 /* : nullable Bool */;
val* var1077 /* : nullable Bool */;
val* var1078 /* : nullable Object */;
val* var1079 /* : String */;
val* var1080 /* : String */;
val* var1081 /* : RuntimeVariable */;
static val* varonce1082;
val* var1083 /* : String */;
char* var1084 /* : CString */;
val* var1085 /* : String */;
val* var1086 /* : nullable Int */;
val* var1087 /* : nullable Int */;
val* var1088 /* : nullable Bool */;
val* var1089 /* : nullable Bool */;
short int var1090 /* : Bool */;
val* var1091 /* : nullable Object */;
static val* varonce1092;
val* var1093 /* : String */;
char* var1094 /* : CString */;
val* var1095 /* : String */;
val* var1096 /* : nullable Int */;
val* var1097 /* : nullable Int */;
val* var1098 /* : nullable Bool */;
val* var1099 /* : nullable Bool */;
short int var1100 /* : Bool */;
val* var1102 /* : NativeArray[String] */;
static val* varonce1101;
static val* varonce1103;
val* var1104 /* : String */;
char* var1105 /* : CString */;
val* var1106 /* : String */;
val* var1107 /* : nullable Int */;
val* var1108 /* : nullable Int */;
val* var1109 /* : nullable Bool */;
val* var1110 /* : nullable Bool */;
val* var1111 /* : nullable Object */;
val* var1112 /* : String */;
val* var1113 /* : nullable Object */;
val* var1114 /* : String */;
val* var1115 /* : String */;
val* var1116 /* : RuntimeVariable */;
static val* varonce1117;
val* var1118 /* : String */;
char* var1119 /* : CString */;
val* var1120 /* : String */;
val* var1121 /* : nullable Int */;
val* var1122 /* : nullable Int */;
val* var1123 /* : nullable Bool */;
val* var1124 /* : nullable Bool */;
short int var1125 /* : Bool */;
val* var1127 /* : NativeArray[String] */;
static val* varonce1126;
static val* varonce1128;
val* var1129 /* : String */;
char* var1130 /* : CString */;
val* var1131 /* : String */;
val* var1132 /* : nullable Int */;
val* var1133 /* : nullable Int */;
val* var1134 /* : nullable Bool */;
val* var1135 /* : nullable Bool */;
val* var1136 /* : nullable Object */;
val* var1137 /* : String */;
val* var1138 /* : nullable Object */;
val* var1139 /* : String */;
val* var1140 /* : String */;
val* var1141 /* : RuntimeVariable */;
static val* varonce1142;
val* var1143 /* : String */;
char* var1144 /* : CString */;
val* var1145 /* : String */;
val* var1146 /* : nullable Int */;
val* var1147 /* : nullable Int */;
val* var1148 /* : nullable Bool */;
val* var1149 /* : nullable Bool */;
short int var1150 /* : Bool */;
val* var1152 /* : NativeArray[String] */;
static val* varonce1151;
static val* varonce1153;
val* var1154 /* : String */;
char* var1155 /* : CString */;
val* var1156 /* : String */;
val* var1157 /* : nullable Int */;
val* var1158 /* : nullable Int */;
val* var1159 /* : nullable Bool */;
val* var1160 /* : nullable Bool */;
val* var1161 /* : nullable Object */;
val* var1162 /* : String */;
val* var1163 /* : nullable Object */;
val* var1164 /* : String */;
val* var1165 /* : String */;
val* var1166 /* : RuntimeVariable */;
static val* varonce1167;
val* var1168 /* : String */;
char* var1169 /* : CString */;
val* var1170 /* : String */;
val* var1171 /* : nullable Int */;
val* var1172 /* : nullable Int */;
val* var1173 /* : nullable Bool */;
val* var1174 /* : nullable Bool */;
short int var1175 /* : Bool */;
val* var1176 /* : nullable Object */;
val* var1177 /* : nullable Object */;
val* var1178 /* : RuntimeVariable */;
static val* varonce1179;
val* var1180 /* : String */;
char* var1181 /* : CString */;
val* var1182 /* : String */;
val* var1183 /* : nullable Int */;
val* var1184 /* : nullable Int */;
val* var1185 /* : nullable Bool */;
val* var1186 /* : nullable Bool */;
short int var1187 /* : Bool */;
val* var1188 /* : nullable Object */;
val* var1189 /* : nullable Object */;
val* var1190 /* : RuntimeVariable */;
val* var_res1191 /* var res: RuntimeVariable */;
val* var1193 /* : NativeArray[String] */;
static val* varonce1192;
static val* varonce1194;
val* var1195 /* : String */;
char* var1196 /* : CString */;
val* var1197 /* : String */;
val* var1198 /* : nullable Int */;
val* var1199 /* : nullable Int */;
val* var1200 /* : nullable Bool */;
val* var1201 /* : nullable Bool */;
val* var1202 /* : String */;
val* var1203 /* : String */;
val* var1204 /* : RuntimeVariable */;
static val* varonce1205;
val* var1206 /* : String */;
char* var1207 /* : CString */;
val* var1208 /* : String */;
val* var1209 /* : nullable Int */;
val* var1210 /* : nullable Int */;
val* var1211 /* : nullable Bool */;
val* var1212 /* : nullable Bool */;
short int var1213 /* : Bool */;
val* var1215 /* : NativeArray[String] */;
static val* varonce1214;
static val* varonce1216;
val* var1217 /* : String */;
char* var1218 /* : CString */;
val* var1219 /* : String */;
val* var1220 /* : nullable Int */;
val* var1221 /* : nullable Int */;
val* var1222 /* : nullable Bool */;
val* var1223 /* : nullable Bool */;
val* var1224 /* : nullable Object */;
val* var1225 /* : String */;
val* var1226 /* : nullable Object */;
val* var1227 /* : String */;
val* var1228 /* : String */;
val* var1229 /* : RuntimeVariable */;
static val* varonce1230;
val* var1231 /* : String */;
char* var1232 /* : CString */;
val* var1233 /* : String */;
val* var1234 /* : nullable Int */;
val* var1235 /* : nullable Int */;
val* var1236 /* : nullable Bool */;
val* var1237 /* : nullable Bool */;
short int var1238 /* : Bool */;
val* var1240 /* : NativeArray[String] */;
static val* varonce1239;
static val* varonce1241;
val* var1242 /* : String */;
char* var1243 /* : CString */;
val* var1244 /* : String */;
val* var1245 /* : nullable Int */;
val* var1246 /* : nullable Int */;
val* var1247 /* : nullable Bool */;
val* var1248 /* : nullable Bool */;
val* var1249 /* : nullable Object */;
val* var1250 /* : String */;
val* var1251 /* : nullable Object */;
val* var1252 /* : String */;
val* var1253 /* : String */;
val* var1254 /* : RuntimeVariable */;
static val* varonce1255;
val* var1256 /* : String */;
char* var1257 /* : CString */;
val* var1258 /* : String */;
val* var1259 /* : nullable Int */;
val* var1260 /* : nullable Int */;
val* var1261 /* : nullable Bool */;
val* var1262 /* : nullable Bool */;
short int var1263 /* : Bool */;
val* var1265 /* : NativeArray[String] */;
static val* varonce1264;
static val* varonce1266;
val* var1267 /* : String */;
char* var1268 /* : CString */;
val* var1269 /* : String */;
val* var1270 /* : nullable Int */;
val* var1271 /* : nullable Int */;
val* var1272 /* : nullable Bool */;
val* var1273 /* : nullable Bool */;
val* var1274 /* : nullable Object */;
val* var1275 /* : String */;
val* var1276 /* : nullable Object */;
val* var1277 /* : String */;
val* var1278 /* : String */;
val* var1279 /* : RuntimeVariable */;
static val* varonce1280;
val* var1281 /* : String */;
char* var1282 /* : CString */;
val* var1283 /* : String */;
val* var1284 /* : nullable Int */;
val* var1285 /* : nullable Int */;
val* var1286 /* : nullable Bool */;
val* var1287 /* : nullable Bool */;
short int var1288 /* : Bool */;
val* var1290 /* : NativeArray[String] */;
static val* varonce1289;
static val* varonce1291;
val* var1292 /* : String */;
char* var1293 /* : CString */;
val* var1294 /* : String */;
val* var1295 /* : nullable Int */;
val* var1296 /* : nullable Int */;
val* var1297 /* : nullable Bool */;
val* var1298 /* : nullable Bool */;
val* var1299 /* : nullable Object */;
val* var1300 /* : String */;
val* var1301 /* : nullable Object */;
val* var1302 /* : String */;
val* var1303 /* : String */;
val* var1304 /* : RuntimeVariable */;
static val* varonce1305;
val* var1306 /* : String */;
char* var1307 /* : CString */;
val* var1308 /* : String */;
val* var1309 /* : nullable Int */;
val* var1310 /* : nullable Int */;
val* var1311 /* : nullable Bool */;
val* var1312 /* : nullable Bool */;
short int var1313 /* : Bool */;
val* var1315 /* : NativeArray[String] */;
static val* varonce1314;
static val* varonce1316;
val* var1317 /* : String */;
char* var1318 /* : CString */;
val* var1319 /* : String */;
val* var1320 /* : nullable Int */;
val* var1321 /* : nullable Int */;
val* var1322 /* : nullable Bool */;
val* var1323 /* : nullable Bool */;
val* var1324 /* : nullable Object */;
val* var1325 /* : String */;
val* var1326 /* : nullable Object */;
val* var1327 /* : String */;
val* var1328 /* : String */;
val* var1329 /* : RuntimeVariable */;
static val* varonce1330;
val* var1331 /* : String */;
char* var1332 /* : CString */;
val* var1333 /* : String */;
val* var1334 /* : nullable Int */;
val* var1335 /* : nullable Int */;
val* var1336 /* : nullable Bool */;
val* var1337 /* : nullable Bool */;
short int var1338 /* : Bool */;
val* var1340 /* : NativeArray[String] */;
static val* varonce1339;
static val* varonce1341;
val* var1342 /* : String */;
char* var1343 /* : CString */;
val* var1344 /* : String */;
val* var1345 /* : nullable Int */;
val* var1346 /* : nullable Int */;
val* var1347 /* : nullable Bool */;
val* var1348 /* : nullable Bool */;
val* var1349 /* : nullable Object */;
val* var1350 /* : String */;
val* var1351 /* : nullable Object */;
val* var1352 /* : String */;
val* var1353 /* : String */;
val* var1354 /* : RuntimeVariable */;
static val* varonce1355;
val* var1356 /* : String */;
char* var1357 /* : CString */;
val* var1358 /* : String */;
val* var1359 /* : nullable Int */;
val* var1360 /* : nullable Int */;
val* var1361 /* : nullable Bool */;
val* var1362 /* : nullable Bool */;
short int var1363 /* : Bool */;
val* var1365 /* : NativeArray[String] */;
static val* varonce1364;
static val* varonce1366;
val* var1367 /* : String */;
char* var1368 /* : CString */;
val* var1369 /* : String */;
val* var1370 /* : nullable Int */;
val* var1371 /* : nullable Int */;
val* var1372 /* : nullable Bool */;
val* var1373 /* : nullable Bool */;
val* var1374 /* : nullable Object */;
val* var1375 /* : String */;
val* var1376 /* : nullable Object */;
val* var1377 /* : String */;
val* var1378 /* : String */;
val* var1379 /* : RuntimeVariable */;
static val* varonce1380;
val* var1381 /* : String */;
char* var1382 /* : CString */;
val* var1383 /* : String */;
val* var1384 /* : nullable Int */;
val* var1385 /* : nullable Int */;
val* var1386 /* : nullable Bool */;
val* var1387 /* : nullable Bool */;
short int var1388 /* : Bool */;
val* var1390 /* : NativeArray[String] */;
static val* varonce1389;
static val* varonce1391;
val* var1392 /* : String */;
char* var1393 /* : CString */;
val* var1394 /* : String */;
val* var1395 /* : nullable Int */;
val* var1396 /* : nullable Int */;
val* var1397 /* : nullable Bool */;
val* var1398 /* : nullable Bool */;
val* var1399 /* : nullable Object */;
val* var1400 /* : String */;
val* var1401 /* : String */;
val* var1402 /* : RuntimeVariable */;
static val* varonce1403;
val* var1404 /* : String */;
char* var1405 /* : CString */;
val* var1406 /* : String */;
val* var1407 /* : nullable Int */;
val* var1408 /* : nullable Int */;
val* var1409 /* : nullable Bool */;
val* var1410 /* : nullable Bool */;
short int var1411 /* : Bool */;
val* var1413 /* : NativeArray[String] */;
static val* varonce1412;
static val* varonce1414;
val* var1415 /* : String */;
char* var1416 /* : CString */;
val* var1417 /* : String */;
val* var1418 /* : nullable Int */;
val* var1419 /* : nullable Int */;
val* var1420 /* : nullable Bool */;
val* var1421 /* : nullable Bool */;
val* var1422 /* : nullable Object */;
val* var1423 /* : String */;
val* var1424 /* : String */;
val* var1425 /* : RuntimeVariable */;
static val* varonce1426;
val* var1427 /* : String */;
char* var1428 /* : CString */;
val* var1429 /* : String */;
val* var1430 /* : nullable Int */;
val* var1431 /* : nullable Int */;
val* var1432 /* : nullable Bool */;
val* var1433 /* : nullable Bool */;
short int var1434 /* : Bool */;
val* var1436 /* : NativeArray[String] */;
static val* varonce1435;
static val* varonce1437;
val* var1438 /* : String */;
char* var1439 /* : CString */;
val* var1440 /* : String */;
val* var1441 /* : nullable Int */;
val* var1442 /* : nullable Int */;
val* var1443 /* : nullable Bool */;
val* var1444 /* : nullable Bool */;
val* var1445 /* : nullable Object */;
val* var1446 /* : String */;
val* var1447 /* : String */;
val* var1448 /* : RuntimeVariable */;
static val* varonce1449;
val* var1450 /* : String */;
char* var1451 /* : CString */;
val* var1452 /* : String */;
val* var1453 /* : nullable Int */;
val* var1454 /* : nullable Int */;
val* var1455 /* : nullable Bool */;
val* var1456 /* : nullable Bool */;
short int var1457 /* : Bool */;
val* var1459 /* : NativeArray[String] */;
static val* varonce1458;
static val* varonce1460;
val* var1461 /* : String */;
char* var1462 /* : CString */;
val* var1463 /* : String */;
val* var1464 /* : nullable Int */;
val* var1465 /* : nullable Int */;
val* var1466 /* : nullable Bool */;
val* var1467 /* : nullable Bool */;
val* var1468 /* : nullable Object */;
val* var1469 /* : String */;
val* var1470 /* : String */;
val* var1471 /* : RuntimeVariable */;
static val* varonce1472;
val* var1473 /* : String */;
char* var1474 /* : CString */;
val* var1475 /* : String */;
val* var1476 /* : nullable Int */;
val* var1477 /* : nullable Int */;
val* var1478 /* : nullable Bool */;
val* var1479 /* : nullable Bool */;
short int var1480 /* : Bool */;
val* var1482 /* : NativeArray[String] */;
static val* varonce1481;
static val* varonce1483;
val* var1484 /* : String */;
char* var1485 /* : CString */;
val* var1486 /* : String */;
val* var1487 /* : nullable Int */;
val* var1488 /* : nullable Int */;
val* var1489 /* : nullable Bool */;
val* var1490 /* : nullable Bool */;
val* var1491 /* : nullable Object */;
val* var1492 /* : String */;
val* var1493 /* : String */;
val* var1494 /* : RuntimeVariable */;
static val* varonce1495;
val* var1496 /* : String */;
char* var1497 /* : CString */;
val* var1498 /* : String */;
val* var1499 /* : nullable Int */;
val* var1500 /* : nullable Int */;
val* var1501 /* : nullable Bool */;
val* var1502 /* : nullable Bool */;
short int var1503 /* : Bool */;
val* var1505 /* : NativeArray[String] */;
static val* varonce1504;
static val* varonce1506;
val* var1507 /* : String */;
char* var1508 /* : CString */;
val* var1509 /* : String */;
val* var1510 /* : nullable Int */;
val* var1511 /* : nullable Int */;
val* var1512 /* : nullable Bool */;
val* var1513 /* : nullable Bool */;
val* var1514 /* : nullable Object */;
val* var1515 /* : String */;
val* var1516 /* : String */;
val* var1517 /* : RuntimeVariable */;
static val* varonce1518;
val* var1519 /* : String */;
char* var1520 /* : CString */;
val* var1521 /* : String */;
val* var1522 /* : nullable Int */;
val* var1523 /* : nullable Int */;
val* var1524 /* : nullable Bool */;
val* var1525 /* : nullable Bool */;
short int var1526 /* : Bool */;
val* var1528 /* : NativeArray[String] */;
static val* varonce1527;
static val* varonce1529;
val* var1530 /* : String */;
char* var1531 /* : CString */;
val* var1532 /* : String */;
val* var1533 /* : nullable Int */;
val* var1534 /* : nullable Int */;
val* var1535 /* : nullable Bool */;
val* var1536 /* : nullable Bool */;
val* var1537 /* : nullable Object */;
val* var1538 /* : String */;
val* var1539 /* : String */;
val* var1540 /* : RuntimeVariable */;
static val* varonce1541;
val* var1542 /* : String */;
char* var1543 /* : CString */;
val* var1544 /* : String */;
val* var1545 /* : nullable Int */;
val* var1546 /* : nullable Int */;
val* var1547 /* : nullable Bool */;
val* var1548 /* : nullable Bool */;
short int var1549 /* : Bool */;
val* var1551 /* : NativeArray[String] */;
static val* varonce1550;
static val* varonce1552;
val* var1553 /* : String */;
char* var1554 /* : CString */;
val* var1555 /* : String */;
val* var1556 /* : nullable Int */;
val* var1557 /* : nullable Int */;
val* var1558 /* : nullable Bool */;
val* var1559 /* : nullable Bool */;
val* var1560 /* : nullable Object */;
val* var1561 /* : String */;
val* var1562 /* : String */;
val* var1563 /* : RuntimeVariable */;
static val* varonce1564;
val* var1565 /* : String */;
char* var1566 /* : CString */;
val* var1567 /* : String */;
val* var1568 /* : nullable Int */;
val* var1569 /* : nullable Int */;
val* var1570 /* : nullable Bool */;
val* var1571 /* : nullable Bool */;
short int var1572 /* : Bool */;
static val* varonce1573;
val* var1574 /* : String */;
char* var1575 /* : CString */;
val* var1576 /* : String */;
val* var1577 /* : nullable Int */;
val* var1578 /* : nullable Int */;
val* var1579 /* : nullable Bool */;
val* var1580 /* : nullable Bool */;
short int var1581 /* : Bool */;
val* var1583 /* : NativeArray[String] */;
static val* varonce1582;
static val* varonce1584;
val* var1585 /* : String */;
char* var1586 /* : CString */;
val* var1587 /* : String */;
val* var1588 /* : nullable Int */;
val* var1589 /* : nullable Int */;
val* var1590 /* : nullable Bool */;
val* var1591 /* : nullable Bool */;
static val* varonce1592;
val* var1593 /* : String */;
char* var1594 /* : CString */;
val* var1595 /* : String */;
val* var1596 /* : nullable Int */;
val* var1597 /* : nullable Int */;
val* var1598 /* : nullable Bool */;
val* var1599 /* : nullable Bool */;
val* var1600 /* : nullable Object */;
val* var1601 /* : String */;
val* var1602 /* : String */;
static val* varonce1603;
val* var1604 /* : String */;
char* var1605 /* : CString */;
val* var1606 /* : String */;
val* var1607 /* : nullable Int */;
val* var1608 /* : nullable Int */;
val* var1609 /* : nullable Bool */;
val* var1610 /* : nullable Bool */;
short int var1611 /* : Bool */;
val* var1613 /* : NativeArray[String] */;
static val* varonce1612;
static val* varonce1614;
val* var1615 /* : String */;
char* var1616 /* : CString */;
val* var1617 /* : String */;
val* var1618 /* : nullable Int */;
val* var1619 /* : nullable Int */;
val* var1620 /* : nullable Bool */;
val* var1621 /* : nullable Bool */;
val* var1622 /* : nullable Object */;
val* var1623 /* : String */;
val* var1624 /* : String */;
val* var1625 /* : RuntimeVariable */;
static val* varonce1626;
val* var1627 /* : String */;
char* var1628 /* : CString */;
val* var1629 /* : String */;
val* var1630 /* : nullable Int */;
val* var1631 /* : nullable Int */;
val* var1632 /* : nullable Bool */;
val* var1633 /* : nullable Bool */;
short int var1634 /* : Bool */;
val* var1635 /* : nullable Object */;
val* var1636 /* : nullable Object */;
val* var1637 /* : RuntimeVariable */;
static val* varonce1638;
val* var1639 /* : String */;
char* var1640 /* : CString */;
val* var1641 /* : String */;
val* var1642 /* : nullable Int */;
val* var1643 /* : nullable Int */;
val* var1644 /* : nullable Bool */;
val* var1645 /* : nullable Bool */;
short int var1646 /* : Bool */;
val* var1647 /* : nullable Object */;
val* var1648 /* : nullable Object */;
val* var1649 /* : RuntimeVariable */;
val* var_res1650 /* var res: RuntimeVariable */;
val* var1652 /* : NativeArray[String] */;
static val* varonce1651;
static val* varonce1653;
val* var1654 /* : String */;
char* var1655 /* : CString */;
val* var1656 /* : String */;
val* var1657 /* : nullable Int */;
val* var1658 /* : nullable Int */;
val* var1659 /* : nullable Bool */;
val* var1660 /* : nullable Bool */;
val* var1661 /* : String */;
val* var1662 /* : String */;
val* var1663 /* : RuntimeVariable */;
static val* varonce1664;
val* var1665 /* : String */;
char* var1666 /* : CString */;
val* var1667 /* : String */;
val* var1668 /* : nullable Int */;
val* var1669 /* : nullable Int */;
val* var1670 /* : nullable Bool */;
val* var1671 /* : nullable Bool */;
short int var1672 /* : Bool */;
static val* varonce1673;
val* var1674 /* : String */;
char* var1675 /* : CString */;
val* var1676 /* : String */;
val* var1677 /* : nullable Int */;
val* var1678 /* : nullable Int */;
val* var1679 /* : nullable Bool */;
val* var1680 /* : nullable Bool */;
short int var1681 /* : Bool */;
val* var1683 /* : NativeArray[String] */;
static val* varonce1682;
static val* varonce1684;
val* var1685 /* : String */;
char* var1686 /* : CString */;
val* var1687 /* : String */;
val* var1688 /* : nullable Int */;
val* var1689 /* : nullable Int */;
val* var1690 /* : nullable Bool */;
val* var1691 /* : nullable Bool */;
static val* varonce1692;
val* var1693 /* : String */;
char* var1694 /* : CString */;
val* var1695 /* : String */;
val* var1696 /* : nullable Int */;
val* var1697 /* : nullable Int */;
val* var1698 /* : nullable Bool */;
val* var1699 /* : nullable Bool */;
val* var1700 /* : nullable Object */;
val* var1701 /* : String */;
val* var1702 /* : String */;
static val* varonce1703;
val* var1704 /* : String */;
char* var1705 /* : CString */;
val* var1706 /* : String */;
val* var1707 /* : nullable Int */;
val* var1708 /* : nullable Int */;
val* var1709 /* : nullable Bool */;
val* var1710 /* : nullable Bool */;
short int var1711 /* : Bool */;
val* var1713 /* : NativeArray[String] */;
static val* varonce1712;
static val* varonce1714;
val* var1715 /* : String */;
char* var1716 /* : CString */;
val* var1717 /* : String */;
val* var1718 /* : nullable Int */;
val* var1719 /* : nullable Int */;
val* var1720 /* : nullable Bool */;
val* var1721 /* : nullable Bool */;
val* var1722 /* : nullable Object */;
val* var1723 /* : String */;
val* var1724 /* : String */;
val* var1725 /* : RuntimeVariable */;
static val* varonce1726;
val* var1727 /* : String */;
char* var1728 /* : CString */;
val* var1729 /* : String */;
val* var1730 /* : nullable Int */;
val* var1731 /* : nullable Int */;
val* var1732 /* : nullable Bool */;
val* var1733 /* : nullable Bool */;
short int var1734 /* : Bool */;
val* var1736 /* : NativeArray[String] */;
static val* varonce1735;
static val* varonce1737;
val* var1738 /* : String */;
char* var1739 /* : CString */;
val* var1740 /* : String */;
val* var1741 /* : nullable Int */;
val* var1742 /* : nullable Int */;
val* var1743 /* : nullable Bool */;
val* var1744 /* : nullable Bool */;
val* var1745 /* : nullable Object */;
val* var1746 /* : String */;
val* var1747 /* : nullable Object */;
val* var1748 /* : String */;
val* var1749 /* : String */;
val* var1750 /* : RuntimeVariable */;
static val* varonce1751;
val* var1752 /* : String */;
char* var1753 /* : CString */;
val* var1754 /* : String */;
val* var1755 /* : nullable Int */;
val* var1756 /* : nullable Int */;
val* var1757 /* : nullable Bool */;
val* var1758 /* : nullable Bool */;
short int var1759 /* : Bool */;
val* var1761 /* : NativeArray[String] */;
static val* varonce1760;
static val* varonce1762;
val* var1763 /* : String */;
char* var1764 /* : CString */;
val* var1765 /* : String */;
val* var1766 /* : nullable Int */;
val* var1767 /* : nullable Int */;
val* var1768 /* : nullable Bool */;
val* var1769 /* : nullable Bool */;
val* var1770 /* : nullable Object */;
val* var1771 /* : String */;
val* var1772 /* : nullable Object */;
val* var1773 /* : String */;
val* var1774 /* : String */;
val* var1775 /* : RuntimeVariable */;
static val* varonce1776;
val* var1777 /* : String */;
char* var1778 /* : CString */;
val* var1779 /* : String */;
val* var1780 /* : nullable Int */;
val* var1781 /* : nullable Int */;
val* var1782 /* : nullable Bool */;
val* var1783 /* : nullable Bool */;
short int var1784 /* : Bool */;
val* var1786 /* : NativeArray[String] */;
static val* varonce1785;
static val* varonce1787;
val* var1788 /* : String */;
char* var1789 /* : CString */;
val* var1790 /* : String */;
val* var1791 /* : nullable Int */;
val* var1792 /* : nullable Int */;
val* var1793 /* : nullable Bool */;
val* var1794 /* : nullable Bool */;
val* var1795 /* : nullable Object */;
val* var1796 /* : String */;
val* var1797 /* : String */;
val* var1798 /* : RuntimeVariable */;
static val* varonce1799;
val* var1800 /* : String */;
char* var1801 /* : CString */;
val* var1802 /* : String */;
val* var1803 /* : nullable Int */;
val* var1804 /* : nullable Int */;
val* var1805 /* : nullable Bool */;
val* var1806 /* : nullable Bool */;
short int var1807 /* : Bool */;
val* var1808 /* : nullable Object */;
static val* varonce1809;
val* var1810 /* : String */;
char* var1811 /* : CString */;
val* var1812 /* : String */;
val* var1813 /* : nullable Int */;
val* var1814 /* : nullable Int */;
val* var1815 /* : nullable Bool */;
val* var1816 /* : nullable Bool */;
short int var1817 /* : Bool */;
val* var1819 /* : NativeArray[String] */;
static val* varonce1818;
static val* varonce1820;
val* var1821 /* : String */;
char* var1822 /* : CString */;
val* var1823 /* : String */;
val* var1824 /* : nullable Int */;
val* var1825 /* : nullable Int */;
val* var1826 /* : nullable Bool */;
val* var1827 /* : nullable Bool */;
val* var1828 /* : nullable Object */;
val* var1829 /* : String */;
val* var1830 /* : String */;
val* var1831 /* : RuntimeVariable */;
static val* varonce1832;
val* var1833 /* : String */;
char* var1834 /* : CString */;
val* var1835 /* : String */;
val* var1836 /* : nullable Int */;
val* var1837 /* : nullable Int */;
val* var1838 /* : nullable Bool */;
val* var1839 /* : nullable Bool */;
short int var1840 /* : Bool */;
val* var1842 /* : NativeArray[String] */;
static val* varonce1841;
static val* varonce1843;
val* var1844 /* : String */;
char* var1845 /* : CString */;
val* var1846 /* : String */;
val* var1847 /* : nullable Int */;
val* var1848 /* : nullable Int */;
val* var1849 /* : nullable Bool */;
val* var1850 /* : nullable Bool */;
val* var1851 /* : nullable Object */;
val* var1852 /* : String */;
val* var1853 /* : String */;
val* var1854 /* : RuntimeVariable */;
static val* varonce1855;
val* var1856 /* : String */;
char* var1857 /* : CString */;
val* var1858 /* : String */;
val* var1859 /* : nullable Int */;
val* var1860 /* : nullable Int */;
val* var1861 /* : nullable Bool */;
val* var1862 /* : nullable Bool */;
short int var1863 /* : Bool */;
val* var1865 /* : NativeArray[String] */;
static val* varonce1864;
static val* varonce1866;
val* var1867 /* : String */;
char* var1868 /* : CString */;
val* var1869 /* : String */;
val* var1870 /* : nullable Int */;
val* var1871 /* : nullable Int */;
val* var1872 /* : nullable Bool */;
val* var1873 /* : nullable Bool */;
val* var1874 /* : nullable Object */;
val* var1875 /* : String */;
val* var1876 /* : nullable Object */;
val* var1877 /* : String */;
val* var1878 /* : String */;
val* var1879 /* : RuntimeVariable */;
static val* varonce1880;
val* var1881 /* : String */;
char* var1882 /* : CString */;
val* var1883 /* : String */;
val* var1884 /* : nullable Int */;
val* var1885 /* : nullable Int */;
val* var1886 /* : nullable Bool */;
val* var1887 /* : nullable Bool */;
short int var1888 /* : Bool */;
val* var1890 /* : NativeArray[String] */;
static val* varonce1889;
static val* varonce1891;
val* var1892 /* : String */;
char* var1893 /* : CString */;
val* var1894 /* : String */;
val* var1895 /* : nullable Int */;
val* var1896 /* : nullable Int */;
val* var1897 /* : nullable Bool */;
val* var1898 /* : nullable Bool */;
val* var1899 /* : nullable Object */;
val* var1900 /* : String */;
val* var1901 /* : nullable Object */;
val* var1902 /* : String */;
val* var1903 /* : String */;
val* var1904 /* : RuntimeVariable */;
static val* varonce1905;
val* var1906 /* : String */;
char* var1907 /* : CString */;
val* var1908 /* : String */;
val* var1909 /* : nullable Int */;
val* var1910 /* : nullable Int */;
val* var1911 /* : nullable Bool */;
val* var1912 /* : nullable Bool */;
short int var1913 /* : Bool */;
val* var1914 /* : nullable Object */;
val* var1915 /* : nullable Object */;
val* var1916 /* : RuntimeVariable */;
static val* varonce1917;
val* var1918 /* : String */;
char* var1919 /* : CString */;
val* var1920 /* : String */;
val* var1921 /* : nullable Int */;
val* var1922 /* : nullable Int */;
val* var1923 /* : nullable Bool */;
val* var1924 /* : nullable Bool */;
short int var1925 /* : Bool */;
val* var1926 /* : nullable Object */;
val* var1927 /* : nullable Object */;
val* var1928 /* : RuntimeVariable */;
val* var_res1929 /* var res: RuntimeVariable */;
val* var1931 /* : NativeArray[String] */;
static val* varonce1930;
static val* varonce1932;
val* var1933 /* : String */;
char* var1934 /* : CString */;
val* var1935 /* : String */;
val* var1936 /* : nullable Int */;
val* var1937 /* : nullable Int */;
val* var1938 /* : nullable Bool */;
val* var1939 /* : nullable Bool */;
val* var1940 /* : String */;
val* var1941 /* : String */;
val* var1942 /* : RuntimeVariable */;
static val* varonce1943;
val* var1944 /* : String */;
char* var1945 /* : CString */;
val* var1946 /* : String */;
val* var1947 /* : nullable Int */;
val* var1948 /* : nullable Int */;
val* var1949 /* : nullable Bool */;
val* var1950 /* : nullable Bool */;
short int var1951 /* : Bool */;
val* var1953 /* : NativeArray[String] */;
static val* varonce1952;
static val* varonce1954;
val* var1955 /* : String */;
char* var1956 /* : CString */;
val* var1957 /* : String */;
val* var1958 /* : nullable Int */;
val* var1959 /* : nullable Int */;
val* var1960 /* : nullable Bool */;
val* var1961 /* : nullable Bool */;
val* var1962 /* : nullable Object */;
val* var1963 /* : String */;
val* var1964 /* : nullable Object */;
val* var1965 /* : String */;
val* var1966 /* : String */;
val* var1967 /* : RuntimeVariable */;
static val* varonce1968;
val* var1969 /* : String */;
char* var1970 /* : CString */;
val* var1971 /* : String */;
val* var1972 /* : nullable Int */;
val* var1973 /* : nullable Int */;
val* var1974 /* : nullable Bool */;
val* var1975 /* : nullable Bool */;
short int var1976 /* : Bool */;
val* var1978 /* : NativeArray[String] */;
static val* varonce1977;
static val* varonce1979;
val* var1980 /* : String */;
char* var1981 /* : CString */;
val* var1982 /* : String */;
val* var1983 /* : nullable Int */;
val* var1984 /* : nullable Int */;
val* var1985 /* : nullable Bool */;
val* var1986 /* : nullable Bool */;
val* var1987 /* : nullable Object */;
val* var1988 /* : String */;
val* var1989 /* : nullable Object */;
val* var1990 /* : String */;
val* var1991 /* : String */;
val* var1992 /* : RuntimeVariable */;
static val* varonce1993;
val* var1994 /* : String */;
char* var1995 /* : CString */;
val* var1996 /* : String */;
val* var1997 /* : nullable Int */;
val* var1998 /* : nullable Int */;
val* var1999 /* : nullable Bool */;
val* var2000 /* : nullable Bool */;
short int var2001 /* : Bool */;
val* var2003 /* : NativeArray[String] */;
static val* varonce2002;
static val* varonce2004;
val* var2005 /* : String */;
char* var2006 /* : CString */;
val* var2007 /* : String */;
val* var2008 /* : nullable Int */;
val* var2009 /* : nullable Int */;
val* var2010 /* : nullable Bool */;
val* var2011 /* : nullable Bool */;
val* var2012 /* : nullable Object */;
val* var2013 /* : String */;
val* var2014 /* : nullable Object */;
val* var2015 /* : String */;
val* var2016 /* : String */;
val* var2017 /* : RuntimeVariable */;
static val* varonce2018;
val* var2019 /* : String */;
char* var2020 /* : CString */;
val* var2021 /* : String */;
val* var2022 /* : nullable Int */;
val* var2023 /* : nullable Int */;
val* var2024 /* : nullable Bool */;
val* var2025 /* : nullable Bool */;
short int var2026 /* : Bool */;
val* var2028 /* : NativeArray[String] */;
static val* varonce2027;
static val* varonce2029;
val* var2030 /* : String */;
char* var2031 /* : CString */;
val* var2032 /* : String */;
val* var2033 /* : nullable Int */;
val* var2034 /* : nullable Int */;
val* var2035 /* : nullable Bool */;
val* var2036 /* : nullable Bool */;
val* var2037 /* : nullable Object */;
val* var2038 /* : String */;
val* var2039 /* : nullable Object */;
val* var2040 /* : String */;
val* var2041 /* : String */;
val* var2042 /* : RuntimeVariable */;
static val* varonce2043;
val* var2044 /* : String */;
char* var2045 /* : CString */;
val* var2046 /* : String */;
val* var2047 /* : nullable Int */;
val* var2048 /* : nullable Int */;
val* var2049 /* : nullable Bool */;
val* var2050 /* : nullable Bool */;
short int var2051 /* : Bool */;
val* var2053 /* : NativeArray[String] */;
static val* varonce2052;
static val* varonce2054;
val* var2055 /* : String */;
char* var2056 /* : CString */;
val* var2057 /* : String */;
val* var2058 /* : nullable Int */;
val* var2059 /* : nullable Int */;
val* var2060 /* : nullable Bool */;
val* var2061 /* : nullable Bool */;
val* var2062 /* : nullable Object */;
val* var2063 /* : String */;
val* var2064 /* : String */;
val* var2065 /* : RuntimeVariable */;
static val* varonce2066;
val* var2067 /* : String */;
char* var2068 /* : CString */;
val* var2069 /* : String */;
val* var2070 /* : nullable Int */;
val* var2071 /* : nullable Int */;
val* var2072 /* : nullable Bool */;
val* var2073 /* : nullable Bool */;
short int var2074 /* : Bool */;
val* var2076 /* : NativeArray[String] */;
static val* varonce2075;
static val* varonce2077;
val* var2078 /* : String */;
char* var2079 /* : CString */;
val* var2080 /* : String */;
val* var2081 /* : nullable Int */;
val* var2082 /* : nullable Int */;
val* var2083 /* : nullable Bool */;
val* var2084 /* : nullable Bool */;
val* var2085 /* : nullable Object */;
val* var2086 /* : String */;
val* var2087 /* : String */;
val* var2088 /* : RuntimeVariable */;
static val* varonce2089;
val* var2090 /* : String */;
char* var2091 /* : CString */;
val* var2092 /* : String */;
val* var2093 /* : nullable Int */;
val* var2094 /* : nullable Int */;
val* var2095 /* : nullable Bool */;
val* var2096 /* : nullable Bool */;
short int var2097 /* : Bool */;
val* var2099 /* : NativeArray[String] */;
static val* varonce2098;
static val* varonce2100;
val* var2101 /* : String */;
char* var2102 /* : CString */;
val* var2103 /* : String */;
val* var2104 /* : nullable Int */;
val* var2105 /* : nullable Int */;
val* var2106 /* : nullable Bool */;
val* var2107 /* : nullable Bool */;
val* var2108 /* : nullable Object */;
val* var2109 /* : String */;
val* var2110 /* : String */;
val* var2111 /* : RuntimeVariable */;
static val* varonce2112;
val* var2113 /* : String */;
char* var2114 /* : CString */;
val* var2115 /* : String */;
val* var2116 /* : nullable Int */;
val* var2117 /* : nullable Int */;
val* var2118 /* : nullable Bool */;
val* var2119 /* : nullable Bool */;
short int var2120 /* : Bool */;
val* var2122 /* : NativeArray[String] */;
static val* varonce2121;
static val* varonce2123;
val* var2124 /* : String */;
char* var2125 /* : CString */;
val* var2126 /* : String */;
val* var2127 /* : nullable Int */;
val* var2128 /* : nullable Int */;
val* var2129 /* : nullable Bool */;
val* var2130 /* : nullable Bool */;
val* var2131 /* : nullable Object */;
val* var2132 /* : String */;
val* var2133 /* : String */;
val* var2134 /* : RuntimeVariable */;
static val* varonce2135;
val* var2136 /* : String */;
char* var2137 /* : CString */;
val* var2138 /* : String */;
val* var2139 /* : nullable Int */;
val* var2140 /* : nullable Int */;
val* var2141 /* : nullable Bool */;
val* var2142 /* : nullable Bool */;
short int var2143 /* : Bool */;
val* var2145 /* : NativeArray[String] */;
static val* varonce2144;
static val* varonce2146;
val* var2147 /* : String */;
char* var2148 /* : CString */;
val* var2149 /* : String */;
val* var2150 /* : nullable Int */;
val* var2151 /* : nullable Int */;
val* var2152 /* : nullable Bool */;
val* var2153 /* : nullable Bool */;
val* var2154 /* : nullable Object */;
val* var2155 /* : String */;
val* var2156 /* : String */;
val* var2157 /* : RuntimeVariable */;
static val* varonce2158;
val* var2159 /* : String */;
char* var2160 /* : CString */;
val* var2161 /* : String */;
val* var2162 /* : nullable Int */;
val* var2163 /* : nullable Int */;
val* var2164 /* : nullable Bool */;
val* var2165 /* : nullable Bool */;
short int var2166 /* : Bool */;
val* var2168 /* : NativeArray[String] */;
static val* varonce2167;
static val* varonce2169;
val* var2170 /* : String */;
char* var2171 /* : CString */;
val* var2172 /* : String */;
val* var2173 /* : nullable Int */;
val* var2174 /* : nullable Int */;
val* var2175 /* : nullable Bool */;
val* var2176 /* : nullable Bool */;
val* var2177 /* : nullable Object */;
val* var2178 /* : String */;
val* var2179 /* : String */;
val* var2180 /* : RuntimeVariable */;
static val* varonce2181;
val* var2182 /* : String */;
char* var2183 /* : CString */;
val* var2184 /* : String */;
val* var2185 /* : nullable Int */;
val* var2186 /* : nullable Int */;
val* var2187 /* : nullable Bool */;
val* var2188 /* : nullable Bool */;
short int var2189 /* : Bool */;
val* var2191 /* : NativeArray[String] */;
static val* varonce2190;
static val* varonce2192;
val* var2193 /* : String */;
char* var2194 /* : CString */;
val* var2195 /* : String */;
val* var2196 /* : nullable Int */;
val* var2197 /* : nullable Int */;
val* var2198 /* : nullable Bool */;
val* var2199 /* : nullable Bool */;
val* var2200 /* : nullable Object */;
val* var2201 /* : String */;
val* var2202 /* : String */;
val* var2203 /* : RuntimeVariable */;
static val* varonce2204;
val* var2205 /* : String */;
char* var2206 /* : CString */;
val* var2207 /* : String */;
val* var2208 /* : nullable Int */;
val* var2209 /* : nullable Int */;
val* var2210 /* : nullable Bool */;
val* var2211 /* : nullable Bool */;
short int var2212 /* : Bool */;
static val* varonce2213;
val* var2214 /* : String */;
char* var2215 /* : CString */;
val* var2216 /* : String */;
val* var2217 /* : nullable Int */;
val* var2218 /* : nullable Int */;
val* var2219 /* : nullable Bool */;
val* var2220 /* : nullable Bool */;
short int var2221 /* : Bool */;
val* var2223 /* : NativeArray[String] */;
static val* varonce2222;
static val* varonce2224;
val* var2225 /* : String */;
char* var2226 /* : CString */;
val* var2227 /* : String */;
val* var2228 /* : nullable Int */;
val* var2229 /* : nullable Int */;
val* var2230 /* : nullable Bool */;
val* var2231 /* : nullable Bool */;
static val* varonce2232;
val* var2233 /* : String */;
char* var2234 /* : CString */;
val* var2235 /* : String */;
val* var2236 /* : nullable Int */;
val* var2237 /* : nullable Int */;
val* var2238 /* : nullable Bool */;
val* var2239 /* : nullable Bool */;
static val* varonce2240;
val* var2241 /* : String */;
char* var2242 /* : CString */;
val* var2243 /* : String */;
val* var2244 /* : nullable Int */;
val* var2245 /* : nullable Int */;
val* var2246 /* : nullable Bool */;
val* var2247 /* : nullable Bool */;
val* var2248 /* : nullable Object */;
val* var2249 /* : String */;
val* var2250 /* : nullable Object */;
val* var2251 /* : String */;
val* var2252 /* : String */;
val* var2253 /* : RuntimeVariable */;
static val* varonce2254;
val* var2255 /* : String */;
char* var2256 /* : CString */;
val* var2257 /* : String */;
val* var2258 /* : nullable Int */;
val* var2259 /* : nullable Int */;
val* var2260 /* : nullable Bool */;
val* var2261 /* : nullable Bool */;
short int var2262 /* : Bool */;
val* var2264 /* : NativeArray[String] */;
static val* varonce2263;
static val* varonce2265;
val* var2266 /* : String */;
char* var2267 /* : CString */;
val* var2268 /* : String */;
val* var2269 /* : nullable Int */;
val* var2270 /* : nullable Int */;
val* var2271 /* : nullable Bool */;
val* var2272 /* : nullable Bool */;
static val* varonce2273;
val* var2274 /* : String */;
char* var2275 /* : CString */;
val* var2276 /* : String */;
val* var2277 /* : nullable Int */;
val* var2278 /* : nullable Int */;
val* var2279 /* : nullable Bool */;
val* var2280 /* : nullable Bool */;
static val* varonce2281;
val* var2282 /* : String */;
char* var2283 /* : CString */;
val* var2284 /* : String */;
val* var2285 /* : nullable Int */;
val* var2286 /* : nullable Int */;
val* var2287 /* : nullable Bool */;
val* var2288 /* : nullable Bool */;
val* var2289 /* : nullable Object */;
val* var2290 /* : String */;
val* var2291 /* : nullable Object */;
val* var2292 /* : String */;
val* var2293 /* : nullable Object */;
val* var2294 /* : String */;
val* var2295 /* : String */;
static val* varonce2296;
val* var2297 /* : String */;
char* var2298 /* : CString */;
val* var2299 /* : String */;
val* var2300 /* : nullable Int */;
val* var2301 /* : nullable Int */;
val* var2302 /* : nullable Bool */;
val* var2303 /* : nullable Bool */;
short int var2304 /* : Bool */;
val* var2306 /* : NativeArray[String] */;
static val* varonce2305;
static val* varonce2307;
val* var2308 /* : String */;
char* var2309 /* : CString */;
val* var2310 /* : String */;
val* var2311 /* : nullable Int */;
val* var2312 /* : nullable Int */;
val* var2313 /* : nullable Bool */;
val* var2314 /* : nullable Bool */;
static val* varonce2315;
val* var2316 /* : String */;
char* var2317 /* : CString */;
val* var2318 /* : String */;
val* var2319 /* : nullable Int */;
val* var2320 /* : nullable Int */;
val* var2321 /* : nullable Bool */;
val* var2322 /* : nullable Bool */;
static val* varonce2323;
val* var2324 /* : String */;
char* var2325 /* : CString */;
val* var2326 /* : String */;
val* var2327 /* : nullable Int */;
val* var2328 /* : nullable Int */;
val* var2329 /* : nullable Bool */;
val* var2330 /* : nullable Bool */;
static val* varonce2331;
val* var2332 /* : String */;
char* var2333 /* : CString */;
val* var2334 /* : String */;
val* var2335 /* : nullable Int */;
val* var2336 /* : nullable Int */;
val* var2337 /* : nullable Bool */;
val* var2338 /* : nullable Bool */;
static val* varonce2339;
val* var2340 /* : String */;
char* var2341 /* : CString */;
val* var2342 /* : String */;
val* var2343 /* : nullable Int */;
val* var2344 /* : nullable Int */;
val* var2345 /* : nullable Bool */;
val* var2346 /* : nullable Bool */;
static val* varonce2347;
val* var2348 /* : String */;
char* var2349 /* : CString */;
val* var2350 /* : String */;
val* var2351 /* : nullable Int */;
val* var2352 /* : nullable Int */;
val* var2353 /* : nullable Bool */;
val* var2354 /* : nullable Bool */;
val* var2355 /* : nullable Object */;
val* var2356 /* : String */;
val* var2357 /* : nullable Object */;
val* var2358 /* : String */;
val* var2359 /* : nullable Object */;
val* var2360 /* : String */;
val* var2361 /* : nullable Object */;
val* var2362 /* : String */;
val* var2363 /* : nullable Object */;
val* var2364 /* : String */;
val* var2365 /* : String */;
static val* varonce2366;
val* var2367 /* : String */;
char* var2368 /* : CString */;
val* var2369 /* : String */;
val* var2370 /* : nullable Int */;
val* var2371 /* : nullable Int */;
val* var2372 /* : nullable Bool */;
val* var2373 /* : nullable Bool */;
short int var2374 /* : Bool */;
val* var2376 /* : NativeArray[String] */;
static val* varonce2375;
static val* varonce2377;
val* var2378 /* : String */;
char* var2379 /* : CString */;
val* var2380 /* : String */;
val* var2381 /* : nullable Int */;
val* var2382 /* : nullable Int */;
val* var2383 /* : nullable Bool */;
val* var2384 /* : nullable Bool */;
static val* varonce2385;
val* var2386 /* : String */;
char* var2387 /* : CString */;
val* var2388 /* : String */;
val* var2389 /* : nullable Int */;
val* var2390 /* : nullable Int */;
val* var2391 /* : nullable Bool */;
val* var2392 /* : nullable Bool */;
val* var2393 /* : nullable Object */;
val* var2394 /* : String */;
val* var2395 /* : String */;
val* var2396 /* : RuntimeVariable */;
static val* varonce2397;
val* var2398 /* : String */;
char* var2399 /* : CString */;
val* var2400 /* : String */;
val* var2401 /* : nullable Int */;
val* var2402 /* : nullable Int */;
val* var2403 /* : nullable Bool */;
val* var2404 /* : nullable Bool */;
short int var2405 /* : Bool */;
val* var2407 /* : NativeArray[String] */;
static val* varonce2406;
static val* varonce2408;
val* var2409 /* : String */;
char* var2410 /* : CString */;
val* var2411 /* : String */;
val* var2412 /* : nullable Int */;
val* var2413 /* : nullable Int */;
val* var2414 /* : nullable Bool */;
val* var2415 /* : nullable Bool */;
val* var2416 /* : nullable Object */;
val* var2417 /* : String */;
val* var2418 /* : nullable Object */;
val* var2419 /* : String */;
val* var2420 /* : String */;
val* var2421 /* : RuntimeVariable */;
static val* varonce2422;
val* var2423 /* : String */;
char* var2424 /* : CString */;
val* var2425 /* : String */;
val* var2426 /* : nullable Int */;
val* var2427 /* : nullable Int */;
val* var2428 /* : nullable Bool */;
val* var2429 /* : nullable Bool */;
short int var2430 /* : Bool */;
val* var2431 /* : nullable Object */;
val* var2432 /* : nullable Object */;
val* var2433 /* : RuntimeVariable */;
static val* varonce2434;
val* var2435 /* : String */;
char* var2436 /* : CString */;
val* var2437 /* : String */;
val* var2438 /* : nullable Int */;
val* var2439 /* : nullable Int */;
val* var2440 /* : nullable Bool */;
val* var2441 /* : nullable Bool */;
short int var2442 /* : Bool */;
val* var2443 /* : nullable Object */;
val* var2444 /* : nullable Object */;
val* var2445 /* : RuntimeVariable */;
val* var_res2446 /* var res: RuntimeVariable */;
val* var2448 /* : NativeArray[String] */;
static val* varonce2447;
static val* varonce2449;
val* var2450 /* : String */;
char* var2451 /* : CString */;
val* var2452 /* : String */;
val* var2453 /* : nullable Int */;
val* var2454 /* : nullable Int */;
val* var2455 /* : nullable Bool */;
val* var2456 /* : nullable Bool */;
val* var2457 /* : String */;
val* var2458 /* : String */;
val* var2459 /* : RuntimeVariable */;
static val* varonce2460;
val* var2461 /* : String */;
char* var2462 /* : CString */;
val* var2463 /* : String */;
val* var2464 /* : nullable Int */;
val* var2465 /* : nullable Int */;
val* var2466 /* : nullable Bool */;
val* var2467 /* : nullable Bool */;
short int var2468 /* : Bool */;
val* var2469 /* : nullable Object */;
val* var2470 /* : String */;
static val* varonce2471;
val* var2472 /* : String */;
char* var2473 /* : CString */;
val* var2474 /* : String */;
val* var2475 /* : nullable Int */;
val* var2476 /* : nullable Int */;
val* var2477 /* : nullable Bool */;
val* var2478 /* : nullable Bool */;
val* var2479 /* : String */;
val* var_alloc /* var alloc: String */;
val* var2481 /* : NativeArray[String] */;
static val* varonce2480;
static val* varonce2482;
val* var2483 /* : String */;
char* var2484 /* : CString */;
val* var2485 /* : String */;
val* var2486 /* : nullable Int */;
val* var2487 /* : nullable Int */;
val* var2488 /* : nullable Bool */;
val* var2489 /* : nullable Bool */;
val* var2490 /* : String */;
val* var2491 /* : RuntimeVariable */;
static val* varonce2492;
val* var2493 /* : String */;
char* var2494 /* : CString */;
val* var2495 /* : String */;
val* var2496 /* : nullable Int */;
val* var2497 /* : nullable Int */;
val* var2498 /* : nullable Bool */;
val* var2499 /* : nullable Bool */;
short int var2500 /* : Bool */;
val* var2502 /* : NativeArray[String] */;
static val* varonce2501;
static val* varonce2503;
val* var2504 /* : String */;
char* var2505 /* : CString */;
val* var2506 /* : String */;
val* var2507 /* : nullable Int */;
val* var2508 /* : nullable Int */;
val* var2509 /* : nullable Bool */;
val* var2510 /* : nullable Bool */;
static val* varonce2511;
val* var2512 /* : String */;
char* var2513 /* : CString */;
val* var2514 /* : String */;
val* var2515 /* : nullable Int */;
val* var2516 /* : nullable Int */;
val* var2517 /* : nullable Bool */;
val* var2518 /* : nullable Bool */;
static val* varonce2519;
val* var2520 /* : String */;
char* var2521 /* : CString */;
val* var2522 /* : String */;
val* var2523 /* : nullable Int */;
val* var2524 /* : nullable Int */;
val* var2525 /* : nullable Bool */;
val* var2526 /* : nullable Bool */;
val* var2527 /* : nullable Object */;
val* var2528 /* : String */;
val* var2529 /* : nullable Object */;
val* var2530 /* : String */;
val* var2531 /* : String */;
val* var2532 /* : RuntimeVariable */;
static val* varonce2533;
val* var2534 /* : String */;
char* var2535 /* : CString */;
val* var2536 /* : String */;
val* var2537 /* : nullable Int */;
val* var2538 /* : nullable Int */;
val* var2539 /* : nullable Bool */;
val* var2540 /* : nullable Bool */;
short int var2541 /* : Bool */;
val* var2543 /* : NativeArray[String] */;
static val* varonce2542;
static val* varonce2544;
val* var2545 /* : String */;
char* var2546 /* : CString */;
val* var2547 /* : String */;
val* var2548 /* : nullable Int */;
val* var2549 /* : nullable Int */;
val* var2550 /* : nullable Bool */;
val* var2551 /* : nullable Bool */;
static val* varonce2552;
val* var2553 /* : String */;
char* var2554 /* : CString */;
val* var2555 /* : String */;
val* var2556 /* : nullable Int */;
val* var2557 /* : nullable Int */;
val* var2558 /* : nullable Bool */;
val* var2559 /* : nullable Bool */;
static val* varonce2560;
val* var2561 /* : String */;
char* var2562 /* : CString */;
val* var2563 /* : String */;
val* var2564 /* : nullable Int */;
val* var2565 /* : nullable Int */;
val* var2566 /* : nullable Bool */;
val* var2567 /* : nullable Bool */;
val* var2568 /* : nullable Object */;
val* var2569 /* : String */;
val* var2570 /* : nullable Object */;
val* var2571 /* : String */;
val* var2572 /* : String */;
val* var2573 /* : RuntimeVariable */;
static val* varonce2574;
val* var2575 /* : String */;
char* var2576 /* : CString */;
val* var2577 /* : String */;
val* var2578 /* : nullable Int */;
val* var2579 /* : nullable Int */;
val* var2580 /* : nullable Bool */;
val* var2581 /* : nullable Bool */;
short int var2582 /* : Bool */;
short int var2583 /* : Bool */;
static val* varonce2584;
val* var2585 /* : String */;
char* var2586 /* : CString */;
val* var2587 /* : String */;
val* var2588 /* : nullable Int */;
val* var2589 /* : nullable Int */;
val* var2590 /* : nullable Bool */;
val* var2591 /* : nullable Bool */;
short int var2592 /* : Bool */;
static val* varonce2593;
val* var2594 /* : String */;
char* var2595 /* : CString */;
val* var2596 /* : String */;
val* var2597 /* : nullable Int */;
val* var2598 /* : nullable Int */;
val* var2599 /* : nullable Bool */;
val* var2600 /* : nullable Bool */;
short int var2601 /* : Bool */;
val* var2603 /* : NativeArray[String] */;
static val* varonce2602;
static val* varonce2604;
val* var2605 /* : String */;
char* var2606 /* : CString */;
val* var2607 /* : String */;
val* var2608 /* : nullable Int */;
val* var2609 /* : nullable Int */;
val* var2610 /* : nullable Bool */;
val* var2611 /* : nullable Bool */;
static val* varonce2612;
val* var2613 /* : String */;
char* var2614 /* : CString */;
val* var2615 /* : String */;
val* var2616 /* : nullable Int */;
val* var2617 /* : nullable Int */;
val* var2618 /* : nullable Bool */;
val* var2619 /* : nullable Bool */;
val* var2620 /* : nullable Object */;
val* var2621 /* : String */;
val* var2622 /* : String */;
static val* varonce2623;
val* var2624 /* : String */;
char* var2625 /* : CString */;
val* var2626 /* : String */;
val* var2627 /* : nullable Int */;
val* var2628 /* : nullable Int */;
val* var2629 /* : nullable Bool */;
val* var2630 /* : nullable Bool */;
short int var2631 /* : Bool */;
val* var2633 /* : NativeArray[String] */;
static val* varonce2632;
static val* varonce2634;
val* var2635 /* : String */;
char* var2636 /* : CString */;
val* var2637 /* : String */;
val* var2638 /* : nullable Int */;
val* var2639 /* : nullable Int */;
val* var2640 /* : nullable Bool */;
val* var2641 /* : nullable Bool */;
val* var2642 /* : nullable Object */;
val* var2643 /* : String */;
val* var2644 /* : String */;
val* var2645 /* : RuntimeVariable */;
static val* varonce2646;
val* var2647 /* : String */;
char* var2648 /* : CString */;
val* var2649 /* : String */;
val* var2650 /* : nullable Int */;
val* var2651 /* : nullable Int */;
val* var2652 /* : nullable Bool */;
val* var2653 /* : nullable Bool */;
short int var2654 /* : Bool */;
val* var2656 /* : NativeArray[String] */;
static val* varonce2655;
static val* varonce2657;
val* var2658 /* : String */;
char* var2659 /* : CString */;
val* var2660 /* : String */;
val* var2661 /* : nullable Int */;
val* var2662 /* : nullable Int */;
val* var2663 /* : nullable Bool */;
val* var2664 /* : nullable Bool */;
val* var2665 /* : nullable Object */;
val* var2666 /* : String */;
val* var2667 /* : nullable Object */;
val* var2668 /* : String */;
val* var2669 /* : String */;
val* var2670 /* : RuntimeVariable */;
static val* varonce2671;
val* var2672 /* : String */;
char* var2673 /* : CString */;
val* var2674 /* : String */;
val* var2675 /* : nullable Int */;
val* var2676 /* : nullable Int */;
val* var2677 /* : nullable Bool */;
val* var2678 /* : nullable Bool */;
short int var2679 /* : Bool */;
val* var2681 /* : NativeArray[String] */;
static val* varonce2680;
static val* varonce2682;
val* var2683 /* : String */;
char* var2684 /* : CString */;
val* var2685 /* : String */;
val* var2686 /* : nullable Int */;
val* var2687 /* : nullable Int */;
val* var2688 /* : nullable Bool */;
val* var2689 /* : nullable Bool */;
val* var2690 /* : nullable Object */;
val* var2691 /* : String */;
val* var2692 /* : nullable Object */;
val* var2693 /* : String */;
val* var2694 /* : String */;
val* var2695 /* : RuntimeVariable */;
static val* varonce2696;
val* var2697 /* : String */;
char* var2698 /* : CString */;
val* var2699 /* : String */;
val* var2700 /* : nullable Int */;
val* var2701 /* : nullable Int */;
val* var2702 /* : nullable Bool */;
val* var2703 /* : nullable Bool */;
short int var2704 /* : Bool */;
val* var2706 /* : NativeArray[String] */;
static val* varonce2705;
static val* varonce2707;
val* var2708 /* : String */;
char* var2709 /* : CString */;
val* var2710 /* : String */;
val* var2711 /* : nullable Int */;
val* var2712 /* : nullable Int */;
val* var2713 /* : nullable Bool */;
val* var2714 /* : nullable Bool */;
val* var2715 /* : nullable Object */;
val* var2716 /* : String */;
val* var2717 /* : String */;
val* var2718 /* : RuntimeVariable */;
static val* varonce2719;
val* var2720 /* : String */;
char* var2721 /* : CString */;
val* var2722 /* : String */;
val* var2723 /* : nullable Int */;
val* var2724 /* : nullable Int */;
val* var2725 /* : nullable Bool */;
val* var2726 /* : nullable Bool */;
short int var2727 /* : Bool */;
val* var2728 /* : nullable Object */;
static val* varonce2729;
val* var2730 /* : String */;
char* var2731 /* : CString */;
val* var2732 /* : String */;
val* var2733 /* : nullable Int */;
val* var2734 /* : nullable Int */;
val* var2735 /* : nullable Bool */;
val* var2736 /* : nullable Bool */;
short int var2737 /* : Bool */;
val* var2739 /* : NativeArray[String] */;
static val* varonce2738;
static val* varonce2740;
val* var2741 /* : String */;
char* var2742 /* : CString */;
val* var2743 /* : String */;
val* var2744 /* : nullable Int */;
val* var2745 /* : nullable Int */;
val* var2746 /* : nullable Bool */;
val* var2747 /* : nullable Bool */;
val* var2748 /* : nullable Object */;
val* var2749 /* : String */;
val* var2750 /* : nullable Object */;
val* var2751 /* : String */;
val* var2752 /* : String */;
val* var2753 /* : RuntimeVariable */;
static val* varonce2754;
val* var2755 /* : String */;
char* var2756 /* : CString */;
val* var2757 /* : String */;
val* var2758 /* : nullable Int */;
val* var2759 /* : nullable Int */;
val* var2760 /* : nullable Bool */;
val* var2761 /* : nullable Bool */;
short int var2762 /* : Bool */;
val* var2764 /* : NativeArray[String] */;
static val* varonce2763;
static val* varonce2765;
val* var2766 /* : String */;
char* var2767 /* : CString */;
val* var2768 /* : String */;
val* var2769 /* : nullable Int */;
val* var2770 /* : nullable Int */;
val* var2771 /* : nullable Bool */;
val* var2772 /* : nullable Bool */;
val* var2773 /* : nullable Object */;
val* var2774 /* : String */;
val* var2775 /* : nullable Object */;
val* var2776 /* : String */;
val* var2777 /* : String */;
val* var2778 /* : RuntimeVariable */;
static val* varonce2779;
val* var2780 /* : String */;
char* var2781 /* : CString */;
val* var2782 /* : String */;
val* var2783 /* : nullable Int */;
val* var2784 /* : nullable Int */;
val* var2785 /* : nullable Bool */;
val* var2786 /* : nullable Bool */;
short int var2787 /* : Bool */;
val* var2789 /* : NativeArray[String] */;
static val* varonce2788;
static val* varonce2790;
val* var2791 /* : String */;
char* var2792 /* : CString */;
val* var2793 /* : String */;
val* var2794 /* : nullable Int */;
val* var2795 /* : nullable Int */;
val* var2796 /* : nullable Bool */;
val* var2797 /* : nullable Bool */;
val* var2798 /* : nullable Object */;
val* var2799 /* : String */;
val* var2800 /* : nullable Object */;
val* var2801 /* : String */;
val* var2802 /* : String */;
val* var2803 /* : RuntimeVariable */;
static val* varonce2804;
val* var2805 /* : String */;
char* var2806 /* : CString */;
val* var2807 /* : String */;
val* var2808 /* : nullable Int */;
val* var2809 /* : nullable Int */;
val* var2810 /* : nullable Bool */;
val* var2811 /* : nullable Bool */;
short int var2812 /* : Bool */;
val* var2814 /* : NativeArray[String] */;
static val* varonce2813;
static val* varonce2815;
val* var2816 /* : String */;
char* var2817 /* : CString */;
val* var2818 /* : String */;
val* var2819 /* : nullable Int */;
val* var2820 /* : nullable Int */;
val* var2821 /* : nullable Bool */;
val* var2822 /* : nullable Bool */;
val* var2823 /* : nullable Object */;
val* var2824 /* : String */;
val* var2825 /* : nullable Object */;
val* var2826 /* : String */;
val* var2827 /* : String */;
val* var2828 /* : RuntimeVariable */;
static val* varonce2829;
val* var2830 /* : String */;
char* var2831 /* : CString */;
val* var2832 /* : String */;
val* var2833 /* : nullable Int */;
val* var2834 /* : nullable Int */;
val* var2835 /* : nullable Bool */;
val* var2836 /* : nullable Bool */;
short int var2837 /* : Bool */;
val* var2839 /* : NativeArray[String] */;
static val* varonce2838;
static val* varonce2840;
val* var2841 /* : String */;
char* var2842 /* : CString */;
val* var2843 /* : String */;
val* var2844 /* : nullable Int */;
val* var2845 /* : nullable Int */;
val* var2846 /* : nullable Bool */;
val* var2847 /* : nullable Bool */;
val* var2848 /* : nullable Object */;
val* var2849 /* : String */;
val* var2850 /* : nullable Object */;
val* var2851 /* : String */;
val* var2852 /* : String */;
val* var2853 /* : RuntimeVariable */;
static val* varonce2854;
val* var2855 /* : String */;
char* var2856 /* : CString */;
val* var2857 /* : String */;
val* var2858 /* : nullable Int */;
val* var2859 /* : nullable Int */;
val* var2860 /* : nullable Bool */;
val* var2861 /* : nullable Bool */;
short int var2862 /* : Bool */;
val* var2863 /* : nullable Object */;
val* var2864 /* : nullable Object */;
val* var2865 /* : RuntimeVariable */;
static val* varonce2866;
val* var2867 /* : String */;
char* var2868 /* : CString */;
val* var2869 /* : String */;
val* var2870 /* : nullable Int */;
val* var2871 /* : nullable Int */;
val* var2872 /* : nullable Bool */;
val* var2873 /* : nullable Bool */;
short int var2874 /* : Bool */;
val* var2875 /* : nullable Object */;
val* var2876 /* : nullable Object */;
val* var2877 /* : RuntimeVariable */;
val* var_res2878 /* var res: RuntimeVariable */;
val* var2880 /* : NativeArray[String] */;
static val* varonce2879;
static val* varonce2881;
val* var2882 /* : String */;
char* var2883 /* : CString */;
val* var2884 /* : String */;
val* var2885 /* : nullable Int */;
val* var2886 /* : nullable Int */;
val* var2887 /* : nullable Bool */;
val* var2888 /* : nullable Bool */;
val* var2889 /* : String */;
val* var2890 /* : String */;
val* var2891 /* : RuntimeVariable */;
static val* varonce2892;
val* var2893 /* : String */;
char* var2894 /* : CString */;
val* var2895 /* : String */;
val* var2896 /* : nullable Int */;
val* var2897 /* : nullable Int */;
val* var2898 /* : nullable Bool */;
val* var2899 /* : nullable Bool */;
short int var2900 /* : Bool */;
val* var2902 /* : NativeArray[String] */;
static val* varonce2901;
static val* varonce2903;
val* var2904 /* : String */;
char* var2905 /* : CString */;
val* var2906 /* : String */;
val* var2907 /* : nullable Int */;
val* var2908 /* : nullable Int */;
val* var2909 /* : nullable Bool */;
val* var2910 /* : nullable Bool */;
val* var2911 /* : nullable Object */;
val* var2912 /* : String */;
val* var2913 /* : nullable Object */;
val* var2914 /* : String */;
val* var2915 /* : String */;
val* var2916 /* : RuntimeVariable */;
static val* varonce2917;
val* var2918 /* : String */;
char* var2919 /* : CString */;
val* var2920 /* : String */;
val* var2921 /* : nullable Int */;
val* var2922 /* : nullable Int */;
val* var2923 /* : nullable Bool */;
val* var2924 /* : nullable Bool */;
short int var2925 /* : Bool */;
val* var2927 /* : NativeArray[String] */;
static val* varonce2926;
static val* varonce2928;
val* var2929 /* : String */;
char* var2930 /* : CString */;
val* var2931 /* : String */;
val* var2932 /* : nullable Int */;
val* var2933 /* : nullable Int */;
val* var2934 /* : nullable Bool */;
val* var2935 /* : nullable Bool */;
val* var2936 /* : nullable Object */;
val* var2937 /* : String */;
val* var2938 /* : nullable Object */;
val* var2939 /* : String */;
val* var2940 /* : String */;
val* var2941 /* : RuntimeVariable */;
static val* varonce2942;
val* var2943 /* : String */;
char* var2944 /* : CString */;
val* var2945 /* : String */;
val* var2946 /* : nullable Int */;
val* var2947 /* : nullable Int */;
val* var2948 /* : nullable Bool */;
val* var2949 /* : nullable Bool */;
short int var2950 /* : Bool */;
val* var2952 /* : NativeArray[String] */;
static val* varonce2951;
static val* varonce2953;
val* var2954 /* : String */;
char* var2955 /* : CString */;
val* var2956 /* : String */;
val* var2957 /* : nullable Int */;
val* var2958 /* : nullable Int */;
val* var2959 /* : nullable Bool */;
val* var2960 /* : nullable Bool */;
val* var2961 /* : nullable Object */;
val* var2962 /* : String */;
val* var2963 /* : nullable Object */;
val* var2964 /* : String */;
val* var2965 /* : String */;
val* var2966 /* : RuntimeVariable */;
static val* varonce2967;
val* var2968 /* : String */;
char* var2969 /* : CString */;
val* var2970 /* : String */;
val* var2971 /* : nullable Int */;
val* var2972 /* : nullable Int */;
val* var2973 /* : nullable Bool */;
val* var2974 /* : nullable Bool */;
short int var2975 /* : Bool */;
val* var2977 /* : NativeArray[String] */;
static val* varonce2976;
static val* varonce2978;
val* var2979 /* : String */;
char* var2980 /* : CString */;
val* var2981 /* : String */;
val* var2982 /* : nullable Int */;
val* var2983 /* : nullable Int */;
val* var2984 /* : nullable Bool */;
val* var2985 /* : nullable Bool */;
val* var2986 /* : nullable Object */;
val* var2987 /* : String */;
val* var2988 /* : nullable Object */;
val* var2989 /* : String */;
val* var2990 /* : String */;
val* var2991 /* : RuntimeVariable */;
static val* varonce2992;
val* var2993 /* : String */;
char* var2994 /* : CString */;
val* var2995 /* : String */;
val* var2996 /* : nullable Int */;
val* var2997 /* : nullable Int */;
val* var2998 /* : nullable Bool */;
val* var2999 /* : nullable Bool */;
short int var3000 /* : Bool */;
val* var3002 /* : NativeArray[String] */;
static val* varonce3001;
static val* varonce3003;
val* var3004 /* : String */;
char* var3005 /* : CString */;
val* var3006 /* : String */;
val* var3007 /* : nullable Int */;
val* var3008 /* : nullable Int */;
val* var3009 /* : nullable Bool */;
val* var3010 /* : nullable Bool */;
val* var3011 /* : nullable Object */;
val* var3012 /* : String */;
val* var3013 /* : String */;
val* var3014 /* : RuntimeVariable */;
static val* varonce3015;
val* var3016 /* : String */;
char* var3017 /* : CString */;
val* var3018 /* : String */;
val* var3019 /* : nullable Int */;
val* var3020 /* : nullable Int */;
val* var3021 /* : nullable Bool */;
val* var3022 /* : nullable Bool */;
short int var3023 /* : Bool */;
val* var3025 /* : NativeArray[String] */;
static val* varonce3024;
static val* varonce3026;
val* var3027 /* : String */;
char* var3028 /* : CString */;
val* var3029 /* : String */;
val* var3030 /* : nullable Int */;
val* var3031 /* : nullable Int */;
val* var3032 /* : nullable Bool */;
val* var3033 /* : nullable Bool */;
val* var3034 /* : nullable Object */;
val* var3035 /* : String */;
val* var3036 /* : String */;
val* var3037 /* : RuntimeVariable */;
static val* varonce3038;
val* var3039 /* : String */;
char* var3040 /* : CString */;
val* var3041 /* : String */;
val* var3042 /* : nullable Int */;
val* var3043 /* : nullable Int */;
val* var3044 /* : nullable Bool */;
val* var3045 /* : nullable Bool */;
short int var3046 /* : Bool */;
val* var3048 /* : NativeArray[String] */;
static val* varonce3047;
static val* varonce3049;
val* var3050 /* : String */;
char* var3051 /* : CString */;
val* var3052 /* : String */;
val* var3053 /* : nullable Int */;
val* var3054 /* : nullable Int */;
val* var3055 /* : nullable Bool */;
val* var3056 /* : nullable Bool */;
val* var3057 /* : nullable Object */;
val* var3058 /* : String */;
val* var3059 /* : String */;
val* var3060 /* : RuntimeVariable */;
static val* varonce3061;
val* var3062 /* : String */;
char* var3063 /* : CString */;
val* var3064 /* : String */;
val* var3065 /* : nullable Int */;
val* var3066 /* : nullable Int */;
val* var3067 /* : nullable Bool */;
val* var3068 /* : nullable Bool */;
short int var3069 /* : Bool */;
val* var3071 /* : NativeArray[String] */;
static val* varonce3070;
static val* varonce3072;
val* var3073 /* : String */;
char* var3074 /* : CString */;
val* var3075 /* : String */;
val* var3076 /* : nullable Int */;
val* var3077 /* : nullable Int */;
val* var3078 /* : nullable Bool */;
val* var3079 /* : nullable Bool */;
val* var3080 /* : nullable Object */;
val* var3081 /* : String */;
val* var3082 /* : String */;
val* var3083 /* : RuntimeVariable */;
static val* varonce3084;
val* var3085 /* : String */;
char* var3086 /* : CString */;
val* var3087 /* : String */;
val* var3088 /* : nullable Int */;
val* var3089 /* : nullable Int */;
val* var3090 /* : nullable Bool */;
val* var3091 /* : nullable Bool */;
short int var3092 /* : Bool */;
val* var3094 /* : NativeArray[String] */;
static val* varonce3093;
static val* varonce3095;
val* var3096 /* : String */;
char* var3097 /* : CString */;
val* var3098 /* : String */;
val* var3099 /* : nullable Int */;
val* var3100 /* : nullable Int */;
val* var3101 /* : nullable Bool */;
val* var3102 /* : nullable Bool */;
val* var3103 /* : nullable Object */;
val* var3104 /* : String */;
val* var3105 /* : String */;
val* var3106 /* : RuntimeVariable */;
static val* varonce3107;
val* var3108 /* : String */;
char* var3109 /* : CString */;
val* var3110 /* : String */;
val* var3111 /* : nullable Int */;
val* var3112 /* : nullable Int */;
val* var3113 /* : nullable Bool */;
val* var3114 /* : nullable Bool */;
short int var3115 /* : Bool */;
val* var3117 /* : NativeArray[String] */;
static val* varonce3116;
static val* varonce3118;
val* var3119 /* : String */;
char* var3120 /* : CString */;
val* var3121 /* : String */;
val* var3122 /* : nullable Int */;
val* var3123 /* : nullable Int */;
val* var3124 /* : nullable Bool */;
val* var3125 /* : nullable Bool */;
val* var3126 /* : nullable Object */;
val* var3127 /* : String */;
val* var3128 /* : String */;
val* var3129 /* : RuntimeVariable */;
static val* varonce3130;
val* var3131 /* : String */;
char* var3132 /* : CString */;
val* var3133 /* : String */;
val* var3134 /* : nullable Int */;
val* var3135 /* : nullable Int */;
val* var3136 /* : nullable Bool */;
val* var3137 /* : nullable Bool */;
short int var3138 /* : Bool */;
val* var3140 /* : NativeArray[String] */;
static val* varonce3139;
static val* varonce3141;
val* var3142 /* : String */;
char* var3143 /* : CString */;
val* var3144 /* : String */;
val* var3145 /* : nullable Int */;
val* var3146 /* : nullable Int */;
val* var3147 /* : nullable Bool */;
val* var3148 /* : nullable Bool */;
val* var3149 /* : nullable Object */;
val* var3150 /* : String */;
val* var3151 /* : String */;
val* var3152 /* : RuntimeVariable */;
static val* varonce3153;
val* var3154 /* : String */;
char* var3155 /* : CString */;
val* var3156 /* : String */;
val* var3157 /* : nullable Int */;
val* var3158 /* : nullable Int */;
val* var3159 /* : nullable Bool */;
val* var3160 /* : nullable Bool */;
short int var3161 /* : Bool */;
val* var3163 /* : NativeArray[String] */;
static val* varonce3162;
static val* varonce3164;
val* var3165 /* : String */;
char* var3166 /* : CString */;
val* var3167 /* : String */;
val* var3168 /* : nullable Int */;
val* var3169 /* : nullable Int */;
val* var3170 /* : nullable Bool */;
val* var3171 /* : nullable Bool */;
val* var3172 /* : nullable Object */;
val* var3173 /* : String */;
val* var3174 /* : nullable Object */;
val* var3175 /* : String */;
val* var3176 /* : String */;
val* var3177 /* : RuntimeVariable */;
static val* varonce3178;
val* var3179 /* : String */;
char* var3180 /* : CString */;
val* var3181 /* : String */;
val* var3182 /* : nullable Int */;
val* var3183 /* : nullable Int */;
val* var3184 /* : nullable Bool */;
val* var3185 /* : nullable Bool */;
short int var3186 /* : Bool */;
val* var3188 /* : NativeArray[String] */;
static val* varonce3187;
static val* varonce3189;
val* var3190 /* : String */;
char* var3191 /* : CString */;
val* var3192 /* : String */;
val* var3193 /* : nullable Int */;
val* var3194 /* : nullable Int */;
val* var3195 /* : nullable Bool */;
val* var3196 /* : nullable Bool */;
val* var3197 /* : nullable Object */;
val* var3198 /* : String */;
val* var3199 /* : nullable Object */;
val* var3200 /* : String */;
val* var3201 /* : String */;
val* var3202 /* : RuntimeVariable */;
static val* varonce3203;
val* var3204 /* : String */;
char* var3205 /* : CString */;
val* var3206 /* : String */;
val* var3207 /* : nullable Int */;
val* var3208 /* : nullable Int */;
val* var3209 /* : nullable Bool */;
val* var3210 /* : nullable Bool */;
short int var3211 /* : Bool */;
val* var3213 /* : NativeArray[String] */;
static val* varonce3212;
static val* varonce3214;
val* var3215 /* : String */;
char* var3216 /* : CString */;
val* var3217 /* : String */;
val* var3218 /* : nullable Int */;
val* var3219 /* : nullable Int */;
val* var3220 /* : nullable Bool */;
val* var3221 /* : nullable Bool */;
val* var3222 /* : nullable Object */;
val* var3223 /* : String */;
val* var3224 /* : nullable Object */;
val* var3225 /* : String */;
val* var3226 /* : String */;
val* var3227 /* : RuntimeVariable */;
static val* varonce3228;
val* var3229 /* : String */;
char* var3230 /* : CString */;
val* var3231 /* : String */;
val* var3232 /* : nullable Int */;
val* var3233 /* : nullable Int */;
val* var3234 /* : nullable Bool */;
val* var3235 /* : nullable Bool */;
short int var3236 /* : Bool */;
val* var3238 /* : NativeArray[String] */;
static val* varonce3237;
static val* varonce3239;
val* var3240 /* : String */;
char* var3241 /* : CString */;
val* var3242 /* : String */;
val* var3243 /* : nullable Int */;
val* var3244 /* : nullable Int */;
val* var3245 /* : nullable Bool */;
val* var3246 /* : nullable Bool */;
val* var3247 /* : nullable Object */;
val* var3248 /* : String */;
val* var3249 /* : String */;
val* var3250 /* : RuntimeVariable */;
static val* varonce3251;
val* var3252 /* : String */;
char* var3253 /* : CString */;
val* var3254 /* : String */;
val* var3255 /* : nullable Int */;
val* var3256 /* : nullable Int */;
val* var3257 /* : nullable Bool */;
val* var3258 /* : nullable Bool */;
short int var3259 /* : Bool */;
static val* varonce3260;
val* var3261 /* : String */;
char* var3262 /* : CString */;
val* var3263 /* : String */;
val* var3264 /* : nullable Int */;
val* var3265 /* : nullable Int */;
val* var3266 /* : nullable Bool */;
val* var3267 /* : nullable Bool */;
short int var3268 /* : Bool */;
val* var3270 /* : NativeArray[String] */;
static val* varonce3269;
static val* varonce3271;
val* var3272 /* : String */;
char* var3273 /* : CString */;
val* var3274 /* : String */;
val* var3275 /* : nullable Int */;
val* var3276 /* : nullable Int */;
val* var3277 /* : nullable Bool */;
val* var3278 /* : nullable Bool */;
static val* varonce3279;
val* var3280 /* : String */;
char* var3281 /* : CString */;
val* var3282 /* : String */;
val* var3283 /* : nullable Int */;
val* var3284 /* : nullable Int */;
val* var3285 /* : nullable Bool */;
val* var3286 /* : nullable Bool */;
val* var3287 /* : nullable Object */;
val* var3288 /* : String */;
val* var3289 /* : String */;
static val* varonce3290;
val* var3291 /* : String */;
char* var3292 /* : CString */;
val* var3293 /* : String */;
val* var3294 /* : nullable Int */;
val* var3295 /* : nullable Int */;
val* var3296 /* : nullable Bool */;
val* var3297 /* : nullable Bool */;
short int var3298 /* : Bool */;
val* var3300 /* : NativeArray[String] */;
static val* varonce3299;
static val* varonce3301;
val* var3302 /* : String */;
char* var3303 /* : CString */;
val* var3304 /* : String */;
val* var3305 /* : nullable Int */;
val* var3306 /* : nullable Int */;
val* var3307 /* : nullable Bool */;
val* var3308 /* : nullable Bool */;
val* var3309 /* : nullable Object */;
val* var3310 /* : String */;
val* var3311 /* : String */;
val* var3312 /* : RuntimeVariable */;
static val* varonce3313;
val* var3314 /* : String */;
char* var3315 /* : CString */;
val* var3316 /* : String */;
val* var3317 /* : nullable Int */;
val* var3318 /* : nullable Int */;
val* var3319 /* : nullable Bool */;
val* var3320 /* : nullable Bool */;
short int var3321 /* : Bool */;
val* var3323 /* : NativeArray[String] */;
static val* varonce3322;
static val* varonce3324;
val* var3325 /* : String */;
char* var3326 /* : CString */;
val* var3327 /* : String */;
val* var3328 /* : nullable Int */;
val* var3329 /* : nullable Int */;
val* var3330 /* : nullable Bool */;
val* var3331 /* : nullable Bool */;
val* var3332 /* : nullable Object */;
val* var3333 /* : String */;
val* var3334 /* : nullable Object */;
val* var3335 /* : String */;
val* var3336 /* : String */;
val* var3337 /* : RuntimeVariable */;
static val* varonce3338;
val* var3339 /* : String */;
char* var3340 /* : CString */;
val* var3341 /* : String */;
val* var3342 /* : nullable Int */;
val* var3343 /* : nullable Int */;
val* var3344 /* : nullable Bool */;
val* var3345 /* : nullable Bool */;
short int var3346 /* : Bool */;
val* var3348 /* : NativeArray[String] */;
static val* varonce3347;
static val* varonce3349;
val* var3350 /* : String */;
char* var3351 /* : CString */;
val* var3352 /* : String */;
val* var3353 /* : nullable Int */;
val* var3354 /* : nullable Int */;
val* var3355 /* : nullable Bool */;
val* var3356 /* : nullable Bool */;
val* var3357 /* : nullable Object */;
val* var3358 /* : String */;
val* var3359 /* : nullable Object */;
val* var3360 /* : String */;
val* var3361 /* : String */;
val* var3362 /* : RuntimeVariable */;
static val* varonce3363;
val* var3364 /* : String */;
char* var3365 /* : CString */;
val* var3366 /* : String */;
val* var3367 /* : nullable Int */;
val* var3368 /* : nullable Int */;
val* var3369 /* : nullable Bool */;
val* var3370 /* : nullable Bool */;
short int var3371 /* : Bool */;
val* var3373 /* : NativeArray[String] */;
static val* varonce3372;
static val* varonce3374;
val* var3375 /* : String */;
char* var3376 /* : CString */;
val* var3377 /* : String */;
val* var3378 /* : nullable Int */;
val* var3379 /* : nullable Int */;
val* var3380 /* : nullable Bool */;
val* var3381 /* : nullable Bool */;
val* var3382 /* : nullable Object */;
val* var3383 /* : String */;
val* var3384 /* : String */;
val* var3385 /* : RuntimeVariable */;
static val* varonce3386;
val* var3387 /* : String */;
char* var3388 /* : CString */;
val* var3389 /* : String */;
val* var3390 /* : nullable Int */;
val* var3391 /* : nullable Int */;
val* var3392 /* : nullable Bool */;
val* var3393 /* : nullable Bool */;
short int var3394 /* : Bool */;
val* var3395 /* : nullable Object */;
static val* varonce3396;
val* var3397 /* : String */;
char* var3398 /* : CString */;
val* var3399 /* : String */;
val* var3400 /* : nullable Int */;
val* var3401 /* : nullable Int */;
val* var3402 /* : nullable Bool */;
val* var3403 /* : nullable Bool */;
short int var3404 /* : Bool */;
val* var3406 /* : NativeArray[String] */;
static val* varonce3405;
static val* varonce3407;
val* var3408 /* : String */;
char* var3409 /* : CString */;
val* var3410 /* : String */;
val* var3411 /* : nullable Int */;
val* var3412 /* : nullable Int */;
val* var3413 /* : nullable Bool */;
val* var3414 /* : nullable Bool */;
val* var3415 /* : nullable Object */;
val* var3416 /* : String */;
val* var3417 /* : nullable Object */;
val* var3418 /* : String */;
val* var3419 /* : String */;
val* var3420 /* : RuntimeVariable */;
static val* varonce3421;
val* var3422 /* : String */;
char* var3423 /* : CString */;
val* var3424 /* : String */;
val* var3425 /* : nullable Int */;
val* var3426 /* : nullable Int */;
val* var3427 /* : nullable Bool */;
val* var3428 /* : nullable Bool */;
short int var3429 /* : Bool */;
val* var3431 /* : NativeArray[String] */;
static val* varonce3430;
static val* varonce3432;
val* var3433 /* : String */;
char* var3434 /* : CString */;
val* var3435 /* : String */;
val* var3436 /* : nullable Int */;
val* var3437 /* : nullable Int */;
val* var3438 /* : nullable Bool */;
val* var3439 /* : nullable Bool */;
val* var3440 /* : nullable Object */;
val* var3441 /* : String */;
val* var3442 /* : nullable Object */;
val* var3443 /* : String */;
val* var3444 /* : String */;
val* var3445 /* : RuntimeVariable */;
static val* varonce3446;
val* var3447 /* : String */;
char* var3448 /* : CString */;
val* var3449 /* : String */;
val* var3450 /* : nullable Int */;
val* var3451 /* : nullable Int */;
val* var3452 /* : nullable Bool */;
val* var3453 /* : nullable Bool */;
short int var3454 /* : Bool */;
val* var3456 /* : NativeArray[String] */;
static val* varonce3455;
static val* varonce3457;
val* var3458 /* : String */;
char* var3459 /* : CString */;
val* var3460 /* : String */;
val* var3461 /* : nullable Int */;
val* var3462 /* : nullable Int */;
val* var3463 /* : nullable Bool */;
val* var3464 /* : nullable Bool */;
val* var3465 /* : nullable Object */;
val* var3466 /* : String */;
val* var3467 /* : nullable Object */;
val* var3468 /* : String */;
val* var3469 /* : String */;
val* var3470 /* : RuntimeVariable */;
static val* varonce3471;
val* var3472 /* : String */;
char* var3473 /* : CString */;
val* var3474 /* : String */;
val* var3475 /* : nullable Int */;
val* var3476 /* : nullable Int */;
val* var3477 /* : nullable Bool */;
val* var3478 /* : nullable Bool */;
short int var3479 /* : Bool */;
val* var3481 /* : NativeArray[String] */;
static val* varonce3480;
static val* varonce3482;
val* var3483 /* : String */;
char* var3484 /* : CString */;
val* var3485 /* : String */;
val* var3486 /* : nullable Int */;
val* var3487 /* : nullable Int */;
val* var3488 /* : nullable Bool */;
val* var3489 /* : nullable Bool */;
val* var3490 /* : nullable Object */;
val* var3491 /* : String */;
val* var3492 /* : nullable Object */;
val* var3493 /* : String */;
val* var3494 /* : String */;
val* var3495 /* : RuntimeVariable */;
static val* varonce3496;
val* var3497 /* : String */;
char* var3498 /* : CString */;
val* var3499 /* : String */;
val* var3500 /* : nullable Int */;
val* var3501 /* : nullable Int */;
val* var3502 /* : nullable Bool */;
val* var3503 /* : nullable Bool */;
short int var3504 /* : Bool */;
val* var3506 /* : NativeArray[String] */;
static val* varonce3505;
static val* varonce3507;
val* var3508 /* : String */;
char* var3509 /* : CString */;
val* var3510 /* : String */;
val* var3511 /* : nullable Int */;
val* var3512 /* : nullable Int */;
val* var3513 /* : nullable Bool */;
val* var3514 /* : nullable Bool */;
val* var3515 /* : nullable Object */;
val* var3516 /* : String */;
val* var3517 /* : nullable Object */;
val* var3518 /* : String */;
val* var3519 /* : String */;
val* var3520 /* : RuntimeVariable */;
static val* varonce3521;
val* var3522 /* : String */;
char* var3523 /* : CString */;
val* var3524 /* : String */;
val* var3525 /* : nullable Int */;
val* var3526 /* : nullable Int */;
val* var3527 /* : nullable Bool */;
val* var3528 /* : nullable Bool */;
short int var3529 /* : Bool */;
val* var3530 /* : nullable Object */;
val* var3531 /* : nullable Object */;
val* var3532 /* : RuntimeVariable */;
static val* varonce3533;
val* var3534 /* : String */;
char* var3535 /* : CString */;
val* var3536 /* : String */;
val* var3537 /* : nullable Int */;
val* var3538 /* : nullable Int */;
val* var3539 /* : nullable Bool */;
val* var3540 /* : nullable Bool */;
short int var3541 /* : Bool */;
val* var3542 /* : nullable Object */;
val* var3543 /* : nullable Object */;
val* var3544 /* : RuntimeVariable */;
val* var_res3545 /* var res: RuntimeVariable */;
val* var3547 /* : NativeArray[String] */;
static val* varonce3546;
static val* varonce3548;
val* var3549 /* : String */;
char* var3550 /* : CString */;
val* var3551 /* : String */;
val* var3552 /* : nullable Int */;
val* var3553 /* : nullable Int */;
val* var3554 /* : nullable Bool */;
val* var3555 /* : nullable Bool */;
val* var3556 /* : String */;
val* var3557 /* : String */;
val* var3558 /* : RuntimeVariable */;
static val* varonce3559;
val* var3560 /* : String */;
char* var3561 /* : CString */;
val* var3562 /* : String */;
val* var3563 /* : nullable Int */;
val* var3564 /* : nullable Int */;
val* var3565 /* : nullable Bool */;
val* var3566 /* : nullable Bool */;
short int var3567 /* : Bool */;
val* var3569 /* : NativeArray[String] */;
static val* varonce3568;
static val* varonce3570;
val* var3571 /* : String */;
char* var3572 /* : CString */;
val* var3573 /* : String */;
val* var3574 /* : nullable Int */;
val* var3575 /* : nullable Int */;
val* var3576 /* : nullable Bool */;
val* var3577 /* : nullable Bool */;
val* var3578 /* : nullable Object */;
val* var3579 /* : String */;
val* var3580 /* : nullable Object */;
val* var3581 /* : String */;
val* var3582 /* : String */;
val* var3583 /* : RuntimeVariable */;
static val* varonce3584;
val* var3585 /* : String */;
char* var3586 /* : CString */;
val* var3587 /* : String */;
val* var3588 /* : nullable Int */;
val* var3589 /* : nullable Int */;
val* var3590 /* : nullable Bool */;
val* var3591 /* : nullable Bool */;
short int var3592 /* : Bool */;
val* var3594 /* : NativeArray[String] */;
static val* varonce3593;
static val* varonce3595;
val* var3596 /* : String */;
char* var3597 /* : CString */;
val* var3598 /* : String */;
val* var3599 /* : nullable Int */;
val* var3600 /* : nullable Int */;
val* var3601 /* : nullable Bool */;
val* var3602 /* : nullable Bool */;
val* var3603 /* : nullable Object */;
val* var3604 /* : String */;
val* var3605 /* : nullable Object */;
val* var3606 /* : String */;
val* var3607 /* : String */;
val* var3608 /* : RuntimeVariable */;
static val* varonce3609;
val* var3610 /* : String */;
char* var3611 /* : CString */;
val* var3612 /* : String */;
val* var3613 /* : nullable Int */;
val* var3614 /* : nullable Int */;
val* var3615 /* : nullable Bool */;
val* var3616 /* : nullable Bool */;
short int var3617 /* : Bool */;
val* var3619 /* : NativeArray[String] */;
static val* varonce3618;
static val* varonce3620;
val* var3621 /* : String */;
char* var3622 /* : CString */;
val* var3623 /* : String */;
val* var3624 /* : nullable Int */;
val* var3625 /* : nullable Int */;
val* var3626 /* : nullable Bool */;
val* var3627 /* : nullable Bool */;
val* var3628 /* : nullable Object */;
val* var3629 /* : String */;
val* var3630 /* : nullable Object */;
val* var3631 /* : String */;
val* var3632 /* : String */;
val* var3633 /* : RuntimeVariable */;
static val* varonce3634;
val* var3635 /* : String */;
char* var3636 /* : CString */;
val* var3637 /* : String */;
val* var3638 /* : nullable Int */;
val* var3639 /* : nullable Int */;
val* var3640 /* : nullable Bool */;
val* var3641 /* : nullable Bool */;
short int var3642 /* : Bool */;
val* var3644 /* : NativeArray[String] */;
static val* varonce3643;
static val* varonce3645;
val* var3646 /* : String */;
char* var3647 /* : CString */;
val* var3648 /* : String */;
val* var3649 /* : nullable Int */;
val* var3650 /* : nullable Int */;
val* var3651 /* : nullable Bool */;
val* var3652 /* : nullable Bool */;
val* var3653 /* : nullable Object */;
val* var3654 /* : String */;
val* var3655 /* : nullable Object */;
val* var3656 /* : String */;
val* var3657 /* : String */;
val* var3658 /* : RuntimeVariable */;
static val* varonce3659;
val* var3660 /* : String */;
char* var3661 /* : CString */;
val* var3662 /* : String */;
val* var3663 /* : nullable Int */;
val* var3664 /* : nullable Int */;
val* var3665 /* : nullable Bool */;
val* var3666 /* : nullable Bool */;
short int var3667 /* : Bool */;
val* var3669 /* : NativeArray[String] */;
static val* varonce3668;
static val* varonce3670;
val* var3671 /* : String */;
char* var3672 /* : CString */;
val* var3673 /* : String */;
val* var3674 /* : nullable Int */;
val* var3675 /* : nullable Int */;
val* var3676 /* : nullable Bool */;
val* var3677 /* : nullable Bool */;
val* var3678 /* : nullable Object */;
val* var3679 /* : String */;
val* var3680 /* : String */;
val* var3681 /* : RuntimeVariable */;
static val* varonce3682;
val* var3683 /* : String */;
char* var3684 /* : CString */;
val* var3685 /* : String */;
val* var3686 /* : nullable Int */;
val* var3687 /* : nullable Int */;
val* var3688 /* : nullable Bool */;
val* var3689 /* : nullable Bool */;
short int var3690 /* : Bool */;
val* var3692 /* : NativeArray[String] */;
static val* varonce3691;
static val* varonce3693;
val* var3694 /* : String */;
char* var3695 /* : CString */;
val* var3696 /* : String */;
val* var3697 /* : nullable Int */;
val* var3698 /* : nullable Int */;
val* var3699 /* : nullable Bool */;
val* var3700 /* : nullable Bool */;
val* var3701 /* : nullable Object */;
val* var3702 /* : String */;
val* var3703 /* : String */;
val* var3704 /* : RuntimeVariable */;
static val* varonce3705;
val* var3706 /* : String */;
char* var3707 /* : CString */;
val* var3708 /* : String */;
val* var3709 /* : nullable Int */;
val* var3710 /* : nullable Int */;
val* var3711 /* : nullable Bool */;
val* var3712 /* : nullable Bool */;
short int var3713 /* : Bool */;
val* var3715 /* : NativeArray[String] */;
static val* varonce3714;
static val* varonce3716;
val* var3717 /* : String */;
char* var3718 /* : CString */;
val* var3719 /* : String */;
val* var3720 /* : nullable Int */;
val* var3721 /* : nullable Int */;
val* var3722 /* : nullable Bool */;
val* var3723 /* : nullable Bool */;
val* var3724 /* : nullable Object */;
val* var3725 /* : String */;
val* var3726 /* : String */;
val* var3727 /* : RuntimeVariable */;
static val* varonce3728;
val* var3729 /* : String */;
char* var3730 /* : CString */;
val* var3731 /* : String */;
val* var3732 /* : nullable Int */;
val* var3733 /* : nullable Int */;
val* var3734 /* : nullable Bool */;
val* var3735 /* : nullable Bool */;
short int var3736 /* : Bool */;
val* var3738 /* : NativeArray[String] */;
static val* varonce3737;
static val* varonce3739;
val* var3740 /* : String */;
char* var3741 /* : CString */;
val* var3742 /* : String */;
val* var3743 /* : nullable Int */;
val* var3744 /* : nullable Int */;
val* var3745 /* : nullable Bool */;
val* var3746 /* : nullable Bool */;
val* var3747 /* : nullable Object */;
val* var3748 /* : String */;
val* var3749 /* : String */;
val* var3750 /* : RuntimeVariable */;
static val* varonce3751;
val* var3752 /* : String */;
char* var3753 /* : CString */;
val* var3754 /* : String */;
val* var3755 /* : nullable Int */;
val* var3756 /* : nullable Int */;
val* var3757 /* : nullable Bool */;
val* var3758 /* : nullable Bool */;
short int var3759 /* : Bool */;
val* var3761 /* : NativeArray[String] */;
static val* varonce3760;
static val* varonce3762;
val* var3763 /* : String */;
char* var3764 /* : CString */;
val* var3765 /* : String */;
val* var3766 /* : nullable Int */;
val* var3767 /* : nullable Int */;
val* var3768 /* : nullable Bool */;
val* var3769 /* : nullable Bool */;
val* var3770 /* : nullable Object */;
val* var3771 /* : String */;
val* var3772 /* : String */;
val* var3773 /* : RuntimeVariable */;
static val* varonce3774;
val* var3775 /* : String */;
char* var3776 /* : CString */;
val* var3777 /* : String */;
val* var3778 /* : nullable Int */;
val* var3779 /* : nullable Int */;
val* var3780 /* : nullable Bool */;
val* var3781 /* : nullable Bool */;
short int var3782 /* : Bool */;
val* var3784 /* : NativeArray[String] */;
static val* varonce3783;
static val* varonce3785;
val* var3786 /* : String */;
char* var3787 /* : CString */;
val* var3788 /* : String */;
val* var3789 /* : nullable Int */;
val* var3790 /* : nullable Int */;
val* var3791 /* : nullable Bool */;
val* var3792 /* : nullable Bool */;
val* var3793 /* : nullable Object */;
val* var3794 /* : String */;
val* var3795 /* : String */;
val* var3796 /* : RuntimeVariable */;
static val* varonce3797;
val* var3798 /* : String */;
char* var3799 /* : CString */;
val* var3800 /* : String */;
val* var3801 /* : nullable Int */;
val* var3802 /* : nullable Int */;
val* var3803 /* : nullable Bool */;
val* var3804 /* : nullable Bool */;
short int var3805 /* : Bool */;
val* var3807 /* : NativeArray[String] */;
static val* varonce3806;
static val* varonce3808;
val* var3809 /* : String */;
char* var3810 /* : CString */;
val* var3811 /* : String */;
val* var3812 /* : nullable Int */;
val* var3813 /* : nullable Int */;
val* var3814 /* : nullable Bool */;
val* var3815 /* : nullable Bool */;
val* var3816 /* : nullable Object */;
val* var3817 /* : String */;
val* var3818 /* : String */;
val* var3819 /* : RuntimeVariable */;
static val* varonce3820;
val* var3821 /* : String */;
char* var3822 /* : CString */;
val* var3823 /* : String */;
val* var3824 /* : nullable Int */;
val* var3825 /* : nullable Int */;
val* var3826 /* : nullable Bool */;
val* var3827 /* : nullable Bool */;
short int var3828 /* : Bool */;
val* var3830 /* : NativeArray[String] */;
static val* varonce3829;
static val* varonce3831;
val* var3832 /* : String */;
char* var3833 /* : CString */;
val* var3834 /* : String */;
val* var3835 /* : nullable Int */;
val* var3836 /* : nullable Int */;
val* var3837 /* : nullable Bool */;
val* var3838 /* : nullable Bool */;
val* var3839 /* : nullable Object */;
val* var3840 /* : String */;
val* var3841 /* : nullable Object */;
val* var3842 /* : String */;
val* var3843 /* : String */;
val* var3844 /* : RuntimeVariable */;
static val* varonce3845;
val* var3846 /* : String */;
char* var3847 /* : CString */;
val* var3848 /* : String */;
val* var3849 /* : nullable Int */;
val* var3850 /* : nullable Int */;
val* var3851 /* : nullable Bool */;
val* var3852 /* : nullable Bool */;
short int var3853 /* : Bool */;
val* var3855 /* : NativeArray[String] */;
static val* varonce3854;
static val* varonce3856;
val* var3857 /* : String */;
char* var3858 /* : CString */;
val* var3859 /* : String */;
val* var3860 /* : nullable Int */;
val* var3861 /* : nullable Int */;
val* var3862 /* : nullable Bool */;
val* var3863 /* : nullable Bool */;
val* var3864 /* : nullable Object */;
val* var3865 /* : String */;
val* var3866 /* : nullable Object */;
val* var3867 /* : String */;
val* var3868 /* : String */;
val* var3869 /* : RuntimeVariable */;
static val* varonce3870;
val* var3871 /* : String */;
char* var3872 /* : CString */;
val* var3873 /* : String */;
val* var3874 /* : nullable Int */;
val* var3875 /* : nullable Int */;
val* var3876 /* : nullable Bool */;
val* var3877 /* : nullable Bool */;
short int var3878 /* : Bool */;
val* var3880 /* : NativeArray[String] */;
static val* varonce3879;
static val* varonce3881;
val* var3882 /* : String */;
char* var3883 /* : CString */;
val* var3884 /* : String */;
val* var3885 /* : nullable Int */;
val* var3886 /* : nullable Int */;
val* var3887 /* : nullable Bool */;
val* var3888 /* : nullable Bool */;
val* var3889 /* : nullable Object */;
val* var3890 /* : String */;
val* var3891 /* : nullable Object */;
val* var3892 /* : String */;
val* var3893 /* : String */;
val* var3894 /* : RuntimeVariable */;
static val* varonce3895;
val* var3896 /* : String */;
char* var3897 /* : CString */;
val* var3898 /* : String */;
val* var3899 /* : nullable Int */;
val* var3900 /* : nullable Int */;
val* var3901 /* : nullable Bool */;
val* var3902 /* : nullable Bool */;
short int var3903 /* : Bool */;
val* var3905 /* : NativeArray[String] */;
static val* varonce3904;
static val* varonce3906;
val* var3907 /* : String */;
char* var3908 /* : CString */;
val* var3909 /* : String */;
val* var3910 /* : nullable Int */;
val* var3911 /* : nullable Int */;
val* var3912 /* : nullable Bool */;
val* var3913 /* : nullable Bool */;
val* var3914 /* : nullable Object */;
val* var3915 /* : String */;
val* var3916 /* : String */;
val* var3917 /* : RuntimeVariable */;
static val* varonce3918;
val* var3919 /* : String */;
char* var3920 /* : CString */;
val* var3921 /* : String */;
val* var3922 /* : nullable Int */;
val* var3923 /* : nullable Int */;
val* var3924 /* : nullable Bool */;
val* var3925 /* : nullable Bool */;
short int var3926 /* : Bool */;
static val* varonce3927;
val* var3928 /* : String */;
char* var3929 /* : CString */;
val* var3930 /* : String */;
val* var3931 /* : nullable Int */;
val* var3932 /* : nullable Int */;
val* var3933 /* : nullable Bool */;
val* var3934 /* : nullable Bool */;
short int var3935 /* : Bool */;
val* var3937 /* : NativeArray[String] */;
static val* varonce3936;
static val* varonce3938;
val* var3939 /* : String */;
char* var3940 /* : CString */;
val* var3941 /* : String */;
val* var3942 /* : nullable Int */;
val* var3943 /* : nullable Int */;
val* var3944 /* : nullable Bool */;
val* var3945 /* : nullable Bool */;
static val* varonce3946;
val* var3947 /* : String */;
char* var3948 /* : CString */;
val* var3949 /* : String */;
val* var3950 /* : nullable Int */;
val* var3951 /* : nullable Int */;
val* var3952 /* : nullable Bool */;
val* var3953 /* : nullable Bool */;
val* var3954 /* : nullable Object */;
val* var3955 /* : String */;
val* var3956 /* : String */;
static val* varonce3957;
val* var3958 /* : String */;
char* var3959 /* : CString */;
val* var3960 /* : String */;
val* var3961 /* : nullable Int */;
val* var3962 /* : nullable Int */;
val* var3963 /* : nullable Bool */;
val* var3964 /* : nullable Bool */;
short int var3965 /* : Bool */;
val* var3967 /* : NativeArray[String] */;
static val* varonce3966;
static val* varonce3968;
val* var3969 /* : String */;
char* var3970 /* : CString */;
val* var3971 /* : String */;
val* var3972 /* : nullable Int */;
val* var3973 /* : nullable Int */;
val* var3974 /* : nullable Bool */;
val* var3975 /* : nullable Bool */;
val* var3976 /* : nullable Object */;
val* var3977 /* : String */;
val* var3978 /* : String */;
val* var3979 /* : RuntimeVariable */;
static val* varonce3980;
val* var3981 /* : String */;
char* var3982 /* : CString */;
val* var3983 /* : String */;
val* var3984 /* : nullable Int */;
val* var3985 /* : nullable Int */;
val* var3986 /* : nullable Bool */;
val* var3987 /* : nullable Bool */;
short int var3988 /* : Bool */;
val* var3990 /* : NativeArray[String] */;
static val* varonce3989;
static val* varonce3991;
val* var3992 /* : String */;
char* var3993 /* : CString */;
val* var3994 /* : String */;
val* var3995 /* : nullable Int */;
val* var3996 /* : nullable Int */;
val* var3997 /* : nullable Bool */;
val* var3998 /* : nullable Bool */;
val* var3999 /* : nullable Object */;
val* var4000 /* : String */;
val* var4001 /* : nullable Object */;
val* var4002 /* : String */;
val* var4003 /* : String */;
val* var4004 /* : RuntimeVariable */;
static val* varonce4005;
val* var4006 /* : String */;
char* var4007 /* : CString */;
val* var4008 /* : String */;
val* var4009 /* : nullable Int */;
val* var4010 /* : nullable Int */;
val* var4011 /* : nullable Bool */;
val* var4012 /* : nullable Bool */;
short int var4013 /* : Bool */;
val* var4015 /* : NativeArray[String] */;
static val* varonce4014;
static val* varonce4016;
val* var4017 /* : String */;
char* var4018 /* : CString */;
val* var4019 /* : String */;
val* var4020 /* : nullable Int */;
val* var4021 /* : nullable Int */;
val* var4022 /* : nullable Bool */;
val* var4023 /* : nullable Bool */;
val* var4024 /* : nullable Object */;
val* var4025 /* : String */;
val* var4026 /* : nullable Object */;
val* var4027 /* : String */;
val* var4028 /* : String */;
val* var4029 /* : RuntimeVariable */;
static val* varonce4030;
val* var4031 /* : String */;
char* var4032 /* : CString */;
val* var4033 /* : String */;
val* var4034 /* : nullable Int */;
val* var4035 /* : nullable Int */;
val* var4036 /* : nullable Bool */;
val* var4037 /* : nullable Bool */;
short int var4038 /* : Bool */;
val* var4040 /* : NativeArray[String] */;
static val* varonce4039;
static val* varonce4041;
val* var4042 /* : String */;
char* var4043 /* : CString */;
val* var4044 /* : String */;
val* var4045 /* : nullable Int */;
val* var4046 /* : nullable Int */;
val* var4047 /* : nullable Bool */;
val* var4048 /* : nullable Bool */;
val* var4049 /* : nullable Object */;
val* var4050 /* : String */;
val* var4051 /* : String */;
val* var4052 /* : RuntimeVariable */;
static val* varonce4053;
val* var4054 /* : String */;
char* var4055 /* : CString */;
val* var4056 /* : String */;
val* var4057 /* : nullable Int */;
val* var4058 /* : nullable Int */;
val* var4059 /* : nullable Bool */;
val* var4060 /* : nullable Bool */;
short int var4061 /* : Bool */;
val* var4062 /* : nullable Object */;
static val* varonce4063;
val* var4064 /* : String */;
char* var4065 /* : CString */;
val* var4066 /* : String */;
val* var4067 /* : nullable Int */;
val* var4068 /* : nullable Int */;
val* var4069 /* : nullable Bool */;
val* var4070 /* : nullable Bool */;
short int var4071 /* : Bool */;
val* var4073 /* : NativeArray[String] */;
static val* varonce4072;
static val* varonce4074;
val* var4075 /* : String */;
char* var4076 /* : CString */;
val* var4077 /* : String */;
val* var4078 /* : nullable Int */;
val* var4079 /* : nullable Int */;
val* var4080 /* : nullable Bool */;
val* var4081 /* : nullable Bool */;
val* var4082 /* : nullable Object */;
val* var4083 /* : String */;
val* var4084 /* : nullable Object */;
val* var4085 /* : String */;
val* var4086 /* : String */;
val* var4087 /* : RuntimeVariable */;
static val* varonce4088;
val* var4089 /* : String */;
char* var4090 /* : CString */;
val* var4091 /* : String */;
val* var4092 /* : nullable Int */;
val* var4093 /* : nullable Int */;
val* var4094 /* : nullable Bool */;
val* var4095 /* : nullable Bool */;
short int var4096 /* : Bool */;
val* var4098 /* : NativeArray[String] */;
static val* varonce4097;
static val* varonce4099;
val* var4100 /* : String */;
char* var4101 /* : CString */;
val* var4102 /* : String */;
val* var4103 /* : nullable Int */;
val* var4104 /* : nullable Int */;
val* var4105 /* : nullable Bool */;
val* var4106 /* : nullable Bool */;
val* var4107 /* : nullable Object */;
val* var4108 /* : String */;
val* var4109 /* : nullable Object */;
val* var4110 /* : String */;
val* var4111 /* : String */;
val* var4112 /* : RuntimeVariable */;
static val* varonce4113;
val* var4114 /* : String */;
char* var4115 /* : CString */;
val* var4116 /* : String */;
val* var4117 /* : nullable Int */;
val* var4118 /* : nullable Int */;
val* var4119 /* : nullable Bool */;
val* var4120 /* : nullable Bool */;
short int var4121 /* : Bool */;
val* var4123 /* : NativeArray[String] */;
static val* varonce4122;
static val* varonce4124;
val* var4125 /* : String */;
char* var4126 /* : CString */;
val* var4127 /* : String */;
val* var4128 /* : nullable Int */;
val* var4129 /* : nullable Int */;
val* var4130 /* : nullable Bool */;
val* var4131 /* : nullable Bool */;
val* var4132 /* : nullable Object */;
val* var4133 /* : String */;
val* var4134 /* : nullable Object */;
val* var4135 /* : String */;
val* var4136 /* : String */;
val* var4137 /* : RuntimeVariable */;
static val* varonce4138;
val* var4139 /* : String */;
char* var4140 /* : CString */;
val* var4141 /* : String */;
val* var4142 /* : nullable Int */;
val* var4143 /* : nullable Int */;
val* var4144 /* : nullable Bool */;
val* var4145 /* : nullable Bool */;
short int var4146 /* : Bool */;
val* var4148 /* : NativeArray[String] */;
static val* varonce4147;
static val* varonce4149;
val* var4150 /* : String */;
char* var4151 /* : CString */;
val* var4152 /* : String */;
val* var4153 /* : nullable Int */;
val* var4154 /* : nullable Int */;
val* var4155 /* : nullable Bool */;
val* var4156 /* : nullable Bool */;
val* var4157 /* : nullable Object */;
val* var4158 /* : String */;
val* var4159 /* : nullable Object */;
val* var4160 /* : String */;
val* var4161 /* : String */;
val* var4162 /* : RuntimeVariable */;
static val* varonce4163;
val* var4164 /* : String */;
char* var4165 /* : CString */;
val* var4166 /* : String */;
val* var4167 /* : nullable Int */;
val* var4168 /* : nullable Int */;
val* var4169 /* : nullable Bool */;
val* var4170 /* : nullable Bool */;
short int var4171 /* : Bool */;
val* var4173 /* : NativeArray[String] */;
static val* varonce4172;
static val* varonce4174;
val* var4175 /* : String */;
char* var4176 /* : CString */;
val* var4177 /* : String */;
val* var4178 /* : nullable Int */;
val* var4179 /* : nullable Int */;
val* var4180 /* : nullable Bool */;
val* var4181 /* : nullable Bool */;
val* var4182 /* : nullable Object */;
val* var4183 /* : String */;
val* var4184 /* : nullable Object */;
val* var4185 /* : String */;
val* var4186 /* : String */;
val* var4187 /* : RuntimeVariable */;
static val* varonce4188;
val* var4189 /* : String */;
char* var4190 /* : CString */;
val* var4191 /* : String */;
val* var4192 /* : nullable Int */;
val* var4193 /* : nullable Int */;
val* var4194 /* : nullable Bool */;
val* var4195 /* : nullable Bool */;
short int var4196 /* : Bool */;
val* var4197 /* : nullable Object */;
val* var4198 /* : nullable Object */;
val* var4199 /* : RuntimeVariable */;
static val* varonce4200;
val* var4201 /* : String */;
char* var4202 /* : CString */;
val* var4203 /* : String */;
val* var4204 /* : nullable Int */;
val* var4205 /* : nullable Int */;
val* var4206 /* : nullable Bool */;
val* var4207 /* : nullable Bool */;
short int var4208 /* : Bool */;
val* var4209 /* : nullable Object */;
val* var4210 /* : nullable Object */;
val* var4211 /* : RuntimeVariable */;
val* var_res4212 /* var res: RuntimeVariable */;
val* var4214 /* : NativeArray[String] */;
static val* varonce4213;
static val* varonce4215;
val* var4216 /* : String */;
char* var4217 /* : CString */;
val* var4218 /* : String */;
val* var4219 /* : nullable Int */;
val* var4220 /* : nullable Int */;
val* var4221 /* : nullable Bool */;
val* var4222 /* : nullable Bool */;
val* var4223 /* : String */;
val* var4224 /* : String */;
val* var4225 /* : RuntimeVariable */;
static val* varonce4226;
val* var4227 /* : String */;
char* var4228 /* : CString */;
val* var4229 /* : String */;
val* var4230 /* : nullable Int */;
val* var4231 /* : nullable Int */;
val* var4232 /* : nullable Bool */;
val* var4233 /* : nullable Bool */;
short int var4234 /* : Bool */;
val* var4236 /* : NativeArray[String] */;
static val* varonce4235;
static val* varonce4237;
val* var4238 /* : String */;
char* var4239 /* : CString */;
val* var4240 /* : String */;
val* var4241 /* : nullable Int */;
val* var4242 /* : nullable Int */;
val* var4243 /* : nullable Bool */;
val* var4244 /* : nullable Bool */;
val* var4245 /* : nullable Object */;
val* var4246 /* : String */;
val* var4247 /* : nullable Object */;
val* var4248 /* : String */;
val* var4249 /* : String */;
val* var4250 /* : RuntimeVariable */;
static val* varonce4251;
val* var4252 /* : String */;
char* var4253 /* : CString */;
val* var4254 /* : String */;
val* var4255 /* : nullable Int */;
val* var4256 /* : nullable Int */;
val* var4257 /* : nullable Bool */;
val* var4258 /* : nullable Bool */;
short int var4259 /* : Bool */;
val* var4261 /* : NativeArray[String] */;
static val* varonce4260;
static val* varonce4262;
val* var4263 /* : String */;
char* var4264 /* : CString */;
val* var4265 /* : String */;
val* var4266 /* : nullable Int */;
val* var4267 /* : nullable Int */;
val* var4268 /* : nullable Bool */;
val* var4269 /* : nullable Bool */;
val* var4270 /* : nullable Object */;
val* var4271 /* : String */;
val* var4272 /* : nullable Object */;
val* var4273 /* : String */;
val* var4274 /* : String */;
val* var4275 /* : RuntimeVariable */;
static val* varonce4276;
val* var4277 /* : String */;
char* var4278 /* : CString */;
val* var4279 /* : String */;
val* var4280 /* : nullable Int */;
val* var4281 /* : nullable Int */;
val* var4282 /* : nullable Bool */;
val* var4283 /* : nullable Bool */;
short int var4284 /* : Bool */;
val* var4286 /* : NativeArray[String] */;
static val* varonce4285;
static val* varonce4287;
val* var4288 /* : String */;
char* var4289 /* : CString */;
val* var4290 /* : String */;
val* var4291 /* : nullable Int */;
val* var4292 /* : nullable Int */;
val* var4293 /* : nullable Bool */;
val* var4294 /* : nullable Bool */;
val* var4295 /* : nullable Object */;
val* var4296 /* : String */;
val* var4297 /* : nullable Object */;
val* var4298 /* : String */;
val* var4299 /* : String */;
val* var4300 /* : RuntimeVariable */;
static val* varonce4301;
val* var4302 /* : String */;
char* var4303 /* : CString */;
val* var4304 /* : String */;
val* var4305 /* : nullable Int */;
val* var4306 /* : nullable Int */;
val* var4307 /* : nullable Bool */;
val* var4308 /* : nullable Bool */;
short int var4309 /* : Bool */;
val* var4311 /* : NativeArray[String] */;
static val* varonce4310;
static val* varonce4312;
val* var4313 /* : String */;
char* var4314 /* : CString */;
val* var4315 /* : String */;
val* var4316 /* : nullable Int */;
val* var4317 /* : nullable Int */;
val* var4318 /* : nullable Bool */;
val* var4319 /* : nullable Bool */;
val* var4320 /* : nullable Object */;
val* var4321 /* : String */;
val* var4322 /* : nullable Object */;
val* var4323 /* : String */;
val* var4324 /* : String */;
val* var4325 /* : RuntimeVariable */;
static val* varonce4326;
val* var4327 /* : String */;
char* var4328 /* : CString */;
val* var4329 /* : String */;
val* var4330 /* : nullable Int */;
val* var4331 /* : nullable Int */;
val* var4332 /* : nullable Bool */;
val* var4333 /* : nullable Bool */;
short int var4334 /* : Bool */;
val* var4336 /* : NativeArray[String] */;
static val* varonce4335;
static val* varonce4337;
val* var4338 /* : String */;
char* var4339 /* : CString */;
val* var4340 /* : String */;
val* var4341 /* : nullable Int */;
val* var4342 /* : nullable Int */;
val* var4343 /* : nullable Bool */;
val* var4344 /* : nullable Bool */;
val* var4345 /* : nullable Object */;
val* var4346 /* : String */;
val* var4347 /* : String */;
val* var4348 /* : RuntimeVariable */;
static val* varonce4349;
val* var4350 /* : String */;
char* var4351 /* : CString */;
val* var4352 /* : String */;
val* var4353 /* : nullable Int */;
val* var4354 /* : nullable Int */;
val* var4355 /* : nullable Bool */;
val* var4356 /* : nullable Bool */;
short int var4357 /* : Bool */;
val* var4359 /* : NativeArray[String] */;
static val* varonce4358;
static val* varonce4360;
val* var4361 /* : String */;
char* var4362 /* : CString */;
val* var4363 /* : String */;
val* var4364 /* : nullable Int */;
val* var4365 /* : nullable Int */;
val* var4366 /* : nullable Bool */;
val* var4367 /* : nullable Bool */;
val* var4368 /* : nullable Object */;
val* var4369 /* : String */;
val* var4370 /* : String */;
val* var4371 /* : RuntimeVariable */;
static val* varonce4372;
val* var4373 /* : String */;
char* var4374 /* : CString */;
val* var4375 /* : String */;
val* var4376 /* : nullable Int */;
val* var4377 /* : nullable Int */;
val* var4378 /* : nullable Bool */;
val* var4379 /* : nullable Bool */;
short int var4380 /* : Bool */;
val* var4382 /* : NativeArray[String] */;
static val* varonce4381;
static val* varonce4383;
val* var4384 /* : String */;
char* var4385 /* : CString */;
val* var4386 /* : String */;
val* var4387 /* : nullable Int */;
val* var4388 /* : nullable Int */;
val* var4389 /* : nullable Bool */;
val* var4390 /* : nullable Bool */;
val* var4391 /* : nullable Object */;
val* var4392 /* : String */;
val* var4393 /* : String */;
val* var4394 /* : RuntimeVariable */;
static val* varonce4395;
val* var4396 /* : String */;
char* var4397 /* : CString */;
val* var4398 /* : String */;
val* var4399 /* : nullable Int */;
val* var4400 /* : nullable Int */;
val* var4401 /* : nullable Bool */;
val* var4402 /* : nullable Bool */;
short int var4403 /* : Bool */;
val* var4405 /* : NativeArray[String] */;
static val* varonce4404;
static val* varonce4406;
val* var4407 /* : String */;
char* var4408 /* : CString */;
val* var4409 /* : String */;
val* var4410 /* : nullable Int */;
val* var4411 /* : nullable Int */;
val* var4412 /* : nullable Bool */;
val* var4413 /* : nullable Bool */;
val* var4414 /* : nullable Object */;
val* var4415 /* : String */;
val* var4416 /* : String */;
val* var4417 /* : RuntimeVariable */;
static val* varonce4418;
val* var4419 /* : String */;
char* var4420 /* : CString */;
val* var4421 /* : String */;
val* var4422 /* : nullable Int */;
val* var4423 /* : nullable Int */;
val* var4424 /* : nullable Bool */;
val* var4425 /* : nullable Bool */;
short int var4426 /* : Bool */;
val* var4428 /* : NativeArray[String] */;
static val* varonce4427;
static val* varonce4429;
val* var4430 /* : String */;
char* var4431 /* : CString */;
val* var4432 /* : String */;
val* var4433 /* : nullable Int */;
val* var4434 /* : nullable Int */;
val* var4435 /* : nullable Bool */;
val* var4436 /* : nullable Bool */;
val* var4437 /* : nullable Object */;
val* var4438 /* : String */;
val* var4439 /* : String */;
val* var4440 /* : RuntimeVariable */;
static val* varonce4441;
val* var4442 /* : String */;
char* var4443 /* : CString */;
val* var4444 /* : String */;
val* var4445 /* : nullable Int */;
val* var4446 /* : nullable Int */;
val* var4447 /* : nullable Bool */;
val* var4448 /* : nullable Bool */;
short int var4449 /* : Bool */;
val* var4451 /* : NativeArray[String] */;
static val* varonce4450;
static val* varonce4452;
val* var4453 /* : String */;
char* var4454 /* : CString */;
val* var4455 /* : String */;
val* var4456 /* : nullable Int */;
val* var4457 /* : nullable Int */;
val* var4458 /* : nullable Bool */;
val* var4459 /* : nullable Bool */;
val* var4460 /* : nullable Object */;
val* var4461 /* : String */;
val* var4462 /* : String */;
val* var4463 /* : RuntimeVariable */;
static val* varonce4464;
val* var4465 /* : String */;
char* var4466 /* : CString */;
val* var4467 /* : String */;
val* var4468 /* : nullable Int */;
val* var4469 /* : nullable Int */;
val* var4470 /* : nullable Bool */;
val* var4471 /* : nullable Bool */;
short int var4472 /* : Bool */;
val* var4474 /* : NativeArray[String] */;
static val* varonce4473;
static val* varonce4475;
val* var4476 /* : String */;
char* var4477 /* : CString */;
val* var4478 /* : String */;
val* var4479 /* : nullable Int */;
val* var4480 /* : nullable Int */;
val* var4481 /* : nullable Bool */;
val* var4482 /* : nullable Bool */;
val* var4483 /* : nullable Object */;
val* var4484 /* : String */;
val* var4485 /* : String */;
val* var4486 /* : RuntimeVariable */;
static val* varonce4487;
val* var4488 /* : String */;
char* var4489 /* : CString */;
val* var4490 /* : String */;
val* var4491 /* : nullable Int */;
val* var4492 /* : nullable Int */;
val* var4493 /* : nullable Bool */;
val* var4494 /* : nullable Bool */;
short int var4495 /* : Bool */;
val* var4497 /* : NativeArray[String] */;
static val* varonce4496;
static val* varonce4498;
val* var4499 /* : String */;
char* var4500 /* : CString */;
val* var4501 /* : String */;
val* var4502 /* : nullable Int */;
val* var4503 /* : nullable Int */;
val* var4504 /* : nullable Bool */;
val* var4505 /* : nullable Bool */;
val* var4506 /* : nullable Object */;
val* var4507 /* : String */;
val* var4508 /* : nullable Object */;
val* var4509 /* : String */;
val* var4510 /* : String */;
val* var4511 /* : RuntimeVariable */;
static val* varonce4512;
val* var4513 /* : String */;
char* var4514 /* : CString */;
val* var4515 /* : String */;
val* var4516 /* : nullable Int */;
val* var4517 /* : nullable Int */;
val* var4518 /* : nullable Bool */;
val* var4519 /* : nullable Bool */;
short int var4520 /* : Bool */;
val* var4522 /* : NativeArray[String] */;
static val* varonce4521;
static val* varonce4523;
val* var4524 /* : String */;
char* var4525 /* : CString */;
val* var4526 /* : String */;
val* var4527 /* : nullable Int */;
val* var4528 /* : nullable Int */;
val* var4529 /* : nullable Bool */;
val* var4530 /* : nullable Bool */;
val* var4531 /* : nullable Object */;
val* var4532 /* : String */;
val* var4533 /* : nullable Object */;
val* var4534 /* : String */;
val* var4535 /* : String */;
val* var4536 /* : RuntimeVariable */;
static val* varonce4537;
val* var4538 /* : String */;
char* var4539 /* : CString */;
val* var4540 /* : String */;
val* var4541 /* : nullable Int */;
val* var4542 /* : nullable Int */;
val* var4543 /* : nullable Bool */;
val* var4544 /* : nullable Bool */;
short int var4545 /* : Bool */;
val* var4547 /* : NativeArray[String] */;
static val* varonce4546;
static val* varonce4548;
val* var4549 /* : String */;
char* var4550 /* : CString */;
val* var4551 /* : String */;
val* var4552 /* : nullable Int */;
val* var4553 /* : nullable Int */;
val* var4554 /* : nullable Bool */;
val* var4555 /* : nullable Bool */;
val* var4556 /* : nullable Object */;
val* var4557 /* : String */;
val* var4558 /* : nullable Object */;
val* var4559 /* : String */;
val* var4560 /* : String */;
val* var4561 /* : RuntimeVariable */;
static val* varonce4562;
val* var4563 /* : String */;
char* var4564 /* : CString */;
val* var4565 /* : String */;
val* var4566 /* : nullable Int */;
val* var4567 /* : nullable Int */;
val* var4568 /* : nullable Bool */;
val* var4569 /* : nullable Bool */;
short int var4570 /* : Bool */;
val* var4572 /* : NativeArray[String] */;
static val* varonce4571;
static val* varonce4573;
val* var4574 /* : String */;
char* var4575 /* : CString */;
val* var4576 /* : String */;
val* var4577 /* : nullable Int */;
val* var4578 /* : nullable Int */;
val* var4579 /* : nullable Bool */;
val* var4580 /* : nullable Bool */;
val* var4581 /* : nullable Object */;
val* var4582 /* : String */;
val* var4583 /* : String */;
val* var4584 /* : RuntimeVariable */;
static val* varonce4585;
val* var4586 /* : String */;
char* var4587 /* : CString */;
val* var4588 /* : String */;
val* var4589 /* : nullable Int */;
val* var4590 /* : nullable Int */;
val* var4591 /* : nullable Bool */;
val* var4592 /* : nullable Bool */;
short int var4593 /* : Bool */;
static val* varonce4594;
val* var4595 /* : String */;
char* var4596 /* : CString */;
val* var4597 /* : String */;
val* var4598 /* : nullable Int */;
val* var4599 /* : nullable Int */;
val* var4600 /* : nullable Bool */;
val* var4601 /* : nullable Bool */;
short int var4602 /* : Bool */;
val* var4604 /* : NativeArray[String] */;
static val* varonce4603;
static val* varonce4605;
val* var4606 /* : String */;
char* var4607 /* : CString */;
val* var4608 /* : String */;
val* var4609 /* : nullable Int */;
val* var4610 /* : nullable Int */;
val* var4611 /* : nullable Bool */;
val* var4612 /* : nullable Bool */;
static val* varonce4613;
val* var4614 /* : String */;
char* var4615 /* : CString */;
val* var4616 /* : String */;
val* var4617 /* : nullable Int */;
val* var4618 /* : nullable Int */;
val* var4619 /* : nullable Bool */;
val* var4620 /* : nullable Bool */;
val* var4621 /* : nullable Object */;
val* var4622 /* : String */;
val* var4623 /* : String */;
static val* varonce4624;
val* var4625 /* : String */;
char* var4626 /* : CString */;
val* var4627 /* : String */;
val* var4628 /* : nullable Int */;
val* var4629 /* : nullable Int */;
val* var4630 /* : nullable Bool */;
val* var4631 /* : nullable Bool */;
short int var4632 /* : Bool */;
val* var4634 /* : NativeArray[String] */;
static val* varonce4633;
static val* varonce4635;
val* var4636 /* : String */;
char* var4637 /* : CString */;
val* var4638 /* : String */;
val* var4639 /* : nullable Int */;
val* var4640 /* : nullable Int */;
val* var4641 /* : nullable Bool */;
val* var4642 /* : nullable Bool */;
val* var4643 /* : nullable Object */;
val* var4644 /* : String */;
val* var4645 /* : String */;
val* var4646 /* : RuntimeVariable */;
static val* varonce4647;
val* var4648 /* : String */;
char* var4649 /* : CString */;
val* var4650 /* : String */;
val* var4651 /* : nullable Int */;
val* var4652 /* : nullable Int */;
val* var4653 /* : nullable Bool */;
val* var4654 /* : nullable Bool */;
short int var4655 /* : Bool */;
val* var4657 /* : NativeArray[String] */;
static val* varonce4656;
static val* varonce4658;
val* var4659 /* : String */;
char* var4660 /* : CString */;
val* var4661 /* : String */;
val* var4662 /* : nullable Int */;
val* var4663 /* : nullable Int */;
val* var4664 /* : nullable Bool */;
val* var4665 /* : nullable Bool */;
val* var4666 /* : nullable Object */;
val* var4667 /* : String */;
val* var4668 /* : nullable Object */;
val* var4669 /* : String */;
val* var4670 /* : String */;
val* var4671 /* : RuntimeVariable */;
static val* varonce4672;
val* var4673 /* : String */;
char* var4674 /* : CString */;
val* var4675 /* : String */;
val* var4676 /* : nullable Int */;
val* var4677 /* : nullable Int */;
val* var4678 /* : nullable Bool */;
val* var4679 /* : nullable Bool */;
short int var4680 /* : Bool */;
val* var4682 /* : NativeArray[String] */;
static val* varonce4681;
static val* varonce4683;
val* var4684 /* : String */;
char* var4685 /* : CString */;
val* var4686 /* : String */;
val* var4687 /* : nullable Int */;
val* var4688 /* : nullable Int */;
val* var4689 /* : nullable Bool */;
val* var4690 /* : nullable Bool */;
val* var4691 /* : nullable Object */;
val* var4692 /* : String */;
val* var4693 /* : nullable Object */;
val* var4694 /* : String */;
val* var4695 /* : String */;
val* var4696 /* : RuntimeVariable */;
static val* varonce4697;
val* var4698 /* : String */;
char* var4699 /* : CString */;
val* var4700 /* : String */;
val* var4701 /* : nullable Int */;
val* var4702 /* : nullable Int */;
val* var4703 /* : nullable Bool */;
val* var4704 /* : nullable Bool */;
short int var4705 /* : Bool */;
val* var4707 /* : NativeArray[String] */;
static val* varonce4706;
static val* varonce4708;
val* var4709 /* : String */;
char* var4710 /* : CString */;
val* var4711 /* : String */;
val* var4712 /* : nullable Int */;
val* var4713 /* : nullable Int */;
val* var4714 /* : nullable Bool */;
val* var4715 /* : nullable Bool */;
val* var4716 /* : nullable Object */;
val* var4717 /* : String */;
val* var4718 /* : String */;
val* var4719 /* : RuntimeVariable */;
static val* varonce4720;
val* var4721 /* : String */;
char* var4722 /* : CString */;
val* var4723 /* : String */;
val* var4724 /* : nullable Int */;
val* var4725 /* : nullable Int */;
val* var4726 /* : nullable Bool */;
val* var4727 /* : nullable Bool */;
short int var4728 /* : Bool */;
val* var4729 /* : nullable Object */;
static val* varonce4730;
val* var4731 /* : String */;
char* var4732 /* : CString */;
val* var4733 /* : String */;
val* var4734 /* : nullable Int */;
val* var4735 /* : nullable Int */;
val* var4736 /* : nullable Bool */;
val* var4737 /* : nullable Bool */;
short int var4738 /* : Bool */;
val* var4740 /* : NativeArray[String] */;
static val* varonce4739;
static val* varonce4741;
val* var4742 /* : String */;
char* var4743 /* : CString */;
val* var4744 /* : String */;
val* var4745 /* : nullable Int */;
val* var4746 /* : nullable Int */;
val* var4747 /* : nullable Bool */;
val* var4748 /* : nullable Bool */;
val* var4749 /* : nullable Object */;
val* var4750 /* : String */;
val* var4751 /* : nullable Object */;
val* var4752 /* : String */;
val* var4753 /* : String */;
val* var4754 /* : RuntimeVariable */;
static val* varonce4755;
val* var4756 /* : String */;
char* var4757 /* : CString */;
val* var4758 /* : String */;
val* var4759 /* : nullable Int */;
val* var4760 /* : nullable Int */;
val* var4761 /* : nullable Bool */;
val* var4762 /* : nullable Bool */;
short int var4763 /* : Bool */;
val* var4765 /* : NativeArray[String] */;
static val* varonce4764;
static val* varonce4766;
val* var4767 /* : String */;
char* var4768 /* : CString */;
val* var4769 /* : String */;
val* var4770 /* : nullable Int */;
val* var4771 /* : nullable Int */;
val* var4772 /* : nullable Bool */;
val* var4773 /* : nullable Bool */;
val* var4774 /* : nullable Object */;
val* var4775 /* : String */;
val* var4776 /* : nullable Object */;
val* var4777 /* : String */;
val* var4778 /* : String */;
val* var4779 /* : RuntimeVariable */;
static val* varonce4780;
val* var4781 /* : String */;
char* var4782 /* : CString */;
val* var4783 /* : String */;
val* var4784 /* : nullable Int */;
val* var4785 /* : nullable Int */;
val* var4786 /* : nullable Bool */;
val* var4787 /* : nullable Bool */;
short int var4788 /* : Bool */;
val* var4790 /* : NativeArray[String] */;
static val* varonce4789;
static val* varonce4791;
val* var4792 /* : String */;
char* var4793 /* : CString */;
val* var4794 /* : String */;
val* var4795 /* : nullable Int */;
val* var4796 /* : nullable Int */;
val* var4797 /* : nullable Bool */;
val* var4798 /* : nullable Bool */;
val* var4799 /* : nullable Object */;
val* var4800 /* : String */;
val* var4801 /* : nullable Object */;
val* var4802 /* : String */;
val* var4803 /* : String */;
val* var4804 /* : RuntimeVariable */;
static val* varonce4805;
val* var4806 /* : String */;
char* var4807 /* : CString */;
val* var4808 /* : String */;
val* var4809 /* : nullable Int */;
val* var4810 /* : nullable Int */;
val* var4811 /* : nullable Bool */;
val* var4812 /* : nullable Bool */;
short int var4813 /* : Bool */;
val* var4815 /* : NativeArray[String] */;
static val* varonce4814;
static val* varonce4816;
val* var4817 /* : String */;
char* var4818 /* : CString */;
val* var4819 /* : String */;
val* var4820 /* : nullable Int */;
val* var4821 /* : nullable Int */;
val* var4822 /* : nullable Bool */;
val* var4823 /* : nullable Bool */;
val* var4824 /* : nullable Object */;
val* var4825 /* : String */;
val* var4826 /* : nullable Object */;
val* var4827 /* : String */;
val* var4828 /* : String */;
val* var4829 /* : RuntimeVariable */;
static val* varonce4830;
val* var4831 /* : String */;
char* var4832 /* : CString */;
val* var4833 /* : String */;
val* var4834 /* : nullable Int */;
val* var4835 /* : nullable Int */;
val* var4836 /* : nullable Bool */;
val* var4837 /* : nullable Bool */;
short int var4838 /* : Bool */;
val* var4840 /* : NativeArray[String] */;
static val* varonce4839;
static val* varonce4841;
val* var4842 /* : String */;
char* var4843 /* : CString */;
val* var4844 /* : String */;
val* var4845 /* : nullable Int */;
val* var4846 /* : nullable Int */;
val* var4847 /* : nullable Bool */;
val* var4848 /* : nullable Bool */;
val* var4849 /* : nullable Object */;
val* var4850 /* : String */;
val* var4851 /* : nullable Object */;
val* var4852 /* : String */;
val* var4853 /* : String */;
val* var4854 /* : RuntimeVariable */;
static val* varonce4855;
val* var4856 /* : String */;
char* var4857 /* : CString */;
val* var4858 /* : String */;
val* var4859 /* : nullable Int */;
val* var4860 /* : nullable Int */;
val* var4861 /* : nullable Bool */;
val* var4862 /* : nullable Bool */;
short int var4863 /* : Bool */;
val* var4864 /* : nullable Object */;
val* var4865 /* : nullable Object */;
val* var4866 /* : RuntimeVariable */;
static val* varonce4867;
val* var4868 /* : String */;
char* var4869 /* : CString */;
val* var4870 /* : String */;
val* var4871 /* : nullable Int */;
val* var4872 /* : nullable Int */;
val* var4873 /* : nullable Bool */;
val* var4874 /* : nullable Bool */;
short int var4875 /* : Bool */;
val* var4876 /* : nullable Object */;
val* var4877 /* : nullable Object */;
val* var4878 /* : RuntimeVariable */;
val* var_res4879 /* var res: RuntimeVariable */;
val* var4881 /* : NativeArray[String] */;
static val* varonce4880;
static val* varonce4882;
val* var4883 /* : String */;
char* var4884 /* : CString */;
val* var4885 /* : String */;
val* var4886 /* : nullable Int */;
val* var4887 /* : nullable Int */;
val* var4888 /* : nullable Bool */;
val* var4889 /* : nullable Bool */;
val* var4890 /* : String */;
val* var4891 /* : String */;
val* var4892 /* : RuntimeVariable */;
static val* varonce4893;
val* var4894 /* : String */;
char* var4895 /* : CString */;
val* var4896 /* : String */;
val* var4897 /* : nullable Int */;
val* var4898 /* : nullable Int */;
val* var4899 /* : nullable Bool */;
val* var4900 /* : nullable Bool */;
short int var4901 /* : Bool */;
val* var4903 /* : NativeArray[String] */;
static val* varonce4902;
static val* varonce4904;
val* var4905 /* : String */;
char* var4906 /* : CString */;
val* var4907 /* : String */;
val* var4908 /* : nullable Int */;
val* var4909 /* : nullable Int */;
val* var4910 /* : nullable Bool */;
val* var4911 /* : nullable Bool */;
val* var4912 /* : nullable Object */;
val* var4913 /* : String */;
val* var4914 /* : nullable Object */;
val* var4915 /* : String */;
val* var4916 /* : String */;
val* var4917 /* : RuntimeVariable */;
static val* varonce4918;
val* var4919 /* : String */;
char* var4920 /* : CString */;
val* var4921 /* : String */;
val* var4922 /* : nullable Int */;
val* var4923 /* : nullable Int */;
val* var4924 /* : nullable Bool */;
val* var4925 /* : nullable Bool */;
short int var4926 /* : Bool */;
val* var4928 /* : NativeArray[String] */;
static val* varonce4927;
static val* varonce4929;
val* var4930 /* : String */;
char* var4931 /* : CString */;
val* var4932 /* : String */;
val* var4933 /* : nullable Int */;
val* var4934 /* : nullable Int */;
val* var4935 /* : nullable Bool */;
val* var4936 /* : nullable Bool */;
val* var4937 /* : nullable Object */;
val* var4938 /* : String */;
val* var4939 /* : nullable Object */;
val* var4940 /* : String */;
val* var4941 /* : String */;
val* var4942 /* : RuntimeVariable */;
static val* varonce4943;
val* var4944 /* : String */;
char* var4945 /* : CString */;
val* var4946 /* : String */;
val* var4947 /* : nullable Int */;
val* var4948 /* : nullable Int */;
val* var4949 /* : nullable Bool */;
val* var4950 /* : nullable Bool */;
short int var4951 /* : Bool */;
val* var4953 /* : NativeArray[String] */;
static val* varonce4952;
static val* varonce4954;
val* var4955 /* : String */;
char* var4956 /* : CString */;
val* var4957 /* : String */;
val* var4958 /* : nullable Int */;
val* var4959 /* : nullable Int */;
val* var4960 /* : nullable Bool */;
val* var4961 /* : nullable Bool */;
val* var4962 /* : nullable Object */;
val* var4963 /* : String */;
val* var4964 /* : nullable Object */;
val* var4965 /* : String */;
val* var4966 /* : String */;
val* var4967 /* : RuntimeVariable */;
static val* varonce4968;
val* var4969 /* : String */;
char* var4970 /* : CString */;
val* var4971 /* : String */;
val* var4972 /* : nullable Int */;
val* var4973 /* : nullable Int */;
val* var4974 /* : nullable Bool */;
val* var4975 /* : nullable Bool */;
short int var4976 /* : Bool */;
val* var4978 /* : NativeArray[String] */;
static val* varonce4977;
static val* varonce4979;
val* var4980 /* : String */;
char* var4981 /* : CString */;
val* var4982 /* : String */;
val* var4983 /* : nullable Int */;
val* var4984 /* : nullable Int */;
val* var4985 /* : nullable Bool */;
val* var4986 /* : nullable Bool */;
val* var4987 /* : nullable Object */;
val* var4988 /* : String */;
val* var4989 /* : nullable Object */;
val* var4990 /* : String */;
val* var4991 /* : String */;
val* var4992 /* : RuntimeVariable */;
static val* varonce4993;
val* var4994 /* : String */;
char* var4995 /* : CString */;
val* var4996 /* : String */;
val* var4997 /* : nullable Int */;
val* var4998 /* : nullable Int */;
val* var4999 /* : nullable Bool */;
val* var5000 /* : nullable Bool */;
short int var5001 /* : Bool */;
val* var5003 /* : NativeArray[String] */;
static val* varonce5002;
static val* varonce5004;
val* var5005 /* : String */;
char* var5006 /* : CString */;
val* var5007 /* : String */;
val* var5008 /* : nullable Int */;
val* var5009 /* : nullable Int */;
val* var5010 /* : nullable Bool */;
val* var5011 /* : nullable Bool */;
val* var5012 /* : nullable Object */;
val* var5013 /* : String */;
val* var5014 /* : String */;
val* var5015 /* : RuntimeVariable */;
static val* varonce5016;
val* var5017 /* : String */;
char* var5018 /* : CString */;
val* var5019 /* : String */;
val* var5020 /* : nullable Int */;
val* var5021 /* : nullable Int */;
val* var5022 /* : nullable Bool */;
val* var5023 /* : nullable Bool */;
short int var5024 /* : Bool */;
val* var5026 /* : NativeArray[String] */;
static val* varonce5025;
static val* varonce5027;
val* var5028 /* : String */;
char* var5029 /* : CString */;
val* var5030 /* : String */;
val* var5031 /* : nullable Int */;
val* var5032 /* : nullable Int */;
val* var5033 /* : nullable Bool */;
val* var5034 /* : nullable Bool */;
val* var5035 /* : nullable Object */;
val* var5036 /* : String */;
val* var5037 /* : String */;
val* var5038 /* : RuntimeVariable */;
static val* varonce5039;
val* var5040 /* : String */;
char* var5041 /* : CString */;
val* var5042 /* : String */;
val* var5043 /* : nullable Int */;
val* var5044 /* : nullable Int */;
val* var5045 /* : nullable Bool */;
val* var5046 /* : nullable Bool */;
short int var5047 /* : Bool */;
val* var5049 /* : NativeArray[String] */;
static val* varonce5048;
static val* varonce5050;
val* var5051 /* : String */;
char* var5052 /* : CString */;
val* var5053 /* : String */;
val* var5054 /* : nullable Int */;
val* var5055 /* : nullable Int */;
val* var5056 /* : nullable Bool */;
val* var5057 /* : nullable Bool */;
val* var5058 /* : nullable Object */;
val* var5059 /* : String */;
val* var5060 /* : String */;
val* var5061 /* : RuntimeVariable */;
static val* varonce5062;
val* var5063 /* : String */;
char* var5064 /* : CString */;
val* var5065 /* : String */;
val* var5066 /* : nullable Int */;
val* var5067 /* : nullable Int */;
val* var5068 /* : nullable Bool */;
val* var5069 /* : nullable Bool */;
short int var5070 /* : Bool */;
val* var5072 /* : NativeArray[String] */;
static val* varonce5071;
static val* varonce5073;
val* var5074 /* : String */;
char* var5075 /* : CString */;
val* var5076 /* : String */;
val* var5077 /* : nullable Int */;
val* var5078 /* : nullable Int */;
val* var5079 /* : nullable Bool */;
val* var5080 /* : nullable Bool */;
val* var5081 /* : nullable Object */;
val* var5082 /* : String */;
val* var5083 /* : String */;
val* var5084 /* : RuntimeVariable */;
static val* varonce5085;
val* var5086 /* : String */;
char* var5087 /* : CString */;
val* var5088 /* : String */;
val* var5089 /* : nullable Int */;
val* var5090 /* : nullable Int */;
val* var5091 /* : nullable Bool */;
val* var5092 /* : nullable Bool */;
short int var5093 /* : Bool */;
val* var5095 /* : NativeArray[String] */;
static val* varonce5094;
static val* varonce5096;
val* var5097 /* : String */;
char* var5098 /* : CString */;
val* var5099 /* : String */;
val* var5100 /* : nullable Int */;
val* var5101 /* : nullable Int */;
val* var5102 /* : nullable Bool */;
val* var5103 /* : nullable Bool */;
val* var5104 /* : nullable Object */;
val* var5105 /* : String */;
val* var5106 /* : String */;
val* var5107 /* : RuntimeVariable */;
static val* varonce5108;
val* var5109 /* : String */;
char* var5110 /* : CString */;
val* var5111 /* : String */;
val* var5112 /* : nullable Int */;
val* var5113 /* : nullable Int */;
val* var5114 /* : nullable Bool */;
val* var5115 /* : nullable Bool */;
short int var5116 /* : Bool */;
val* var5118 /* : NativeArray[String] */;
static val* varonce5117;
static val* varonce5119;
val* var5120 /* : String */;
char* var5121 /* : CString */;
val* var5122 /* : String */;
val* var5123 /* : nullable Int */;
val* var5124 /* : nullable Int */;
val* var5125 /* : nullable Bool */;
val* var5126 /* : nullable Bool */;
val* var5127 /* : nullable Object */;
val* var5128 /* : String */;
val* var5129 /* : String */;
val* var5130 /* : RuntimeVariable */;
static val* varonce5131;
val* var5132 /* : String */;
char* var5133 /* : CString */;
val* var5134 /* : String */;
val* var5135 /* : nullable Int */;
val* var5136 /* : nullable Int */;
val* var5137 /* : nullable Bool */;
val* var5138 /* : nullable Bool */;
short int var5139 /* : Bool */;
val* var5141 /* : NativeArray[String] */;
static val* varonce5140;
static val* varonce5142;
val* var5143 /* : String */;
char* var5144 /* : CString */;
val* var5145 /* : String */;
val* var5146 /* : nullable Int */;
val* var5147 /* : nullable Int */;
val* var5148 /* : nullable Bool */;
val* var5149 /* : nullable Bool */;
val* var5150 /* : nullable Object */;
val* var5151 /* : String */;
val* var5152 /* : String */;
val* var5153 /* : RuntimeVariable */;
static val* varonce5154;
val* var5155 /* : String */;
char* var5156 /* : CString */;
val* var5157 /* : String */;
val* var5158 /* : nullable Int */;
val* var5159 /* : nullable Int */;
val* var5160 /* : nullable Bool */;
val* var5161 /* : nullable Bool */;
short int var5162 /* : Bool */;
val* var5164 /* : NativeArray[String] */;
static val* varonce5163;
static val* varonce5165;
val* var5166 /* : String */;
char* var5167 /* : CString */;
val* var5168 /* : String */;
val* var5169 /* : nullable Int */;
val* var5170 /* : nullable Int */;
val* var5171 /* : nullable Bool */;
val* var5172 /* : nullable Bool */;
val* var5173 /* : nullable Object */;
val* var5174 /* : String */;
val* var5175 /* : nullable Object */;
val* var5176 /* : String */;
val* var5177 /* : String */;
val* var5178 /* : RuntimeVariable */;
static val* varonce5179;
val* var5180 /* : String */;
char* var5181 /* : CString */;
val* var5182 /* : String */;
val* var5183 /* : nullable Int */;
val* var5184 /* : nullable Int */;
val* var5185 /* : nullable Bool */;
val* var5186 /* : nullable Bool */;
short int var5187 /* : Bool */;
val* var5189 /* : NativeArray[String] */;
static val* varonce5188;
static val* varonce5190;
val* var5191 /* : String */;
char* var5192 /* : CString */;
val* var5193 /* : String */;
val* var5194 /* : nullable Int */;
val* var5195 /* : nullable Int */;
val* var5196 /* : nullable Bool */;
val* var5197 /* : nullable Bool */;
val* var5198 /* : nullable Object */;
val* var5199 /* : String */;
val* var5200 /* : nullable Object */;
val* var5201 /* : String */;
val* var5202 /* : String */;
val* var5203 /* : RuntimeVariable */;
static val* varonce5204;
val* var5205 /* : String */;
char* var5206 /* : CString */;
val* var5207 /* : String */;
val* var5208 /* : nullable Int */;
val* var5209 /* : nullable Int */;
val* var5210 /* : nullable Bool */;
val* var5211 /* : nullable Bool */;
short int var5212 /* : Bool */;
val* var5214 /* : NativeArray[String] */;
static val* varonce5213;
static val* varonce5215;
val* var5216 /* : String */;
char* var5217 /* : CString */;
val* var5218 /* : String */;
val* var5219 /* : nullable Int */;
val* var5220 /* : nullable Int */;
val* var5221 /* : nullable Bool */;
val* var5222 /* : nullable Bool */;
val* var5223 /* : nullable Object */;
val* var5224 /* : String */;
val* var5225 /* : nullable Object */;
val* var5226 /* : String */;
val* var5227 /* : String */;
val* var5228 /* : RuntimeVariable */;
static val* varonce5229;
val* var5230 /* : String */;
char* var5231 /* : CString */;
val* var5232 /* : String */;
val* var5233 /* : nullable Int */;
val* var5234 /* : nullable Int */;
val* var5235 /* : nullable Bool */;
val* var5236 /* : nullable Bool */;
short int var5237 /* : Bool */;
val* var5239 /* : NativeArray[String] */;
static val* varonce5238;
static val* varonce5240;
val* var5241 /* : String */;
char* var5242 /* : CString */;
val* var5243 /* : String */;
val* var5244 /* : nullable Int */;
val* var5245 /* : nullable Int */;
val* var5246 /* : nullable Bool */;
val* var5247 /* : nullable Bool */;
val* var5248 /* : nullable Object */;
val* var5249 /* : String */;
val* var5250 /* : String */;
val* var5251 /* : RuntimeVariable */;
static val* varonce5252;
val* var5253 /* : String */;
char* var5254 /* : CString */;
val* var5255 /* : String */;
val* var5256 /* : nullable Int */;
val* var5257 /* : nullable Int */;
val* var5258 /* : nullable Bool */;
val* var5259 /* : nullable Bool */;
short int var5260 /* : Bool */;
static val* varonce5261;
val* var5262 /* : String */;
char* var5263 /* : CString */;
val* var5264 /* : String */;
val* var5265 /* : nullable Int */;
val* var5266 /* : nullable Int */;
val* var5267 /* : nullable Bool */;
val* var5268 /* : nullable Bool */;
short int var5269 /* : Bool */;
val* var5271 /* : NativeArray[String] */;
static val* varonce5270;
static val* varonce5272;
val* var5273 /* : String */;
char* var5274 /* : CString */;
val* var5275 /* : String */;
val* var5276 /* : nullable Int */;
val* var5277 /* : nullable Int */;
val* var5278 /* : nullable Bool */;
val* var5279 /* : nullable Bool */;
static val* varonce5280;
val* var5281 /* : String */;
char* var5282 /* : CString */;
val* var5283 /* : String */;
val* var5284 /* : nullable Int */;
val* var5285 /* : nullable Int */;
val* var5286 /* : nullable Bool */;
val* var5287 /* : nullable Bool */;
val* var5288 /* : nullable Object */;
val* var5289 /* : String */;
val* var5290 /* : String */;
static val* varonce5291;
val* var5292 /* : String */;
char* var5293 /* : CString */;
val* var5294 /* : String */;
val* var5295 /* : nullable Int */;
val* var5296 /* : nullable Int */;
val* var5297 /* : nullable Bool */;
val* var5298 /* : nullable Bool */;
short int var5299 /* : Bool */;
val* var5301 /* : NativeArray[String] */;
static val* varonce5300;
static val* varonce5302;
val* var5303 /* : String */;
char* var5304 /* : CString */;
val* var5305 /* : String */;
val* var5306 /* : nullable Int */;
val* var5307 /* : nullable Int */;
val* var5308 /* : nullable Bool */;
val* var5309 /* : nullable Bool */;
val* var5310 /* : nullable Object */;
val* var5311 /* : String */;
val* var5312 /* : String */;
val* var5313 /* : RuntimeVariable */;
static val* varonce5314;
val* var5315 /* : String */;
char* var5316 /* : CString */;
val* var5317 /* : String */;
val* var5318 /* : nullable Int */;
val* var5319 /* : nullable Int */;
val* var5320 /* : nullable Bool */;
val* var5321 /* : nullable Bool */;
short int var5322 /* : Bool */;
val* var5324 /* : NativeArray[String] */;
static val* varonce5323;
static val* varonce5325;
val* var5326 /* : String */;
char* var5327 /* : CString */;
val* var5328 /* : String */;
val* var5329 /* : nullable Int */;
val* var5330 /* : nullable Int */;
val* var5331 /* : nullable Bool */;
val* var5332 /* : nullable Bool */;
val* var5333 /* : nullable Object */;
val* var5334 /* : String */;
val* var5335 /* : nullable Object */;
val* var5336 /* : String */;
val* var5337 /* : String */;
val* var5338 /* : RuntimeVariable */;
static val* varonce5339;
val* var5340 /* : String */;
char* var5341 /* : CString */;
val* var5342 /* : String */;
val* var5343 /* : nullable Int */;
val* var5344 /* : nullable Int */;
val* var5345 /* : nullable Bool */;
val* var5346 /* : nullable Bool */;
short int var5347 /* : Bool */;
val* var5349 /* : NativeArray[String] */;
static val* varonce5348;
static val* varonce5350;
val* var5351 /* : String */;
char* var5352 /* : CString */;
val* var5353 /* : String */;
val* var5354 /* : nullable Int */;
val* var5355 /* : nullable Int */;
val* var5356 /* : nullable Bool */;
val* var5357 /* : nullable Bool */;
val* var5358 /* : nullable Object */;
val* var5359 /* : String */;
val* var5360 /* : nullable Object */;
val* var5361 /* : String */;
val* var5362 /* : String */;
val* var5363 /* : RuntimeVariable */;
static val* varonce5364;
val* var5365 /* : String */;
char* var5366 /* : CString */;
val* var5367 /* : String */;
val* var5368 /* : nullable Int */;
val* var5369 /* : nullable Int */;
val* var5370 /* : nullable Bool */;
val* var5371 /* : nullable Bool */;
short int var5372 /* : Bool */;
val* var5374 /* : NativeArray[String] */;
static val* varonce5373;
static val* varonce5375;
val* var5376 /* : String */;
char* var5377 /* : CString */;
val* var5378 /* : String */;
val* var5379 /* : nullable Int */;
val* var5380 /* : nullable Int */;
val* var5381 /* : nullable Bool */;
val* var5382 /* : nullable Bool */;
val* var5383 /* : nullable Object */;
val* var5384 /* : String */;
val* var5385 /* : String */;
val* var5386 /* : RuntimeVariable */;
static val* varonce5387;
val* var5388 /* : String */;
char* var5389 /* : CString */;
val* var5390 /* : String */;
val* var5391 /* : nullable Int */;
val* var5392 /* : nullable Int */;
val* var5393 /* : nullable Bool */;
val* var5394 /* : nullable Bool */;
short int var5395 /* : Bool */;
val* var5396 /* : nullable Object */;
static val* varonce5397;
val* var5398 /* : String */;
char* var5399 /* : CString */;
val* var5400 /* : String */;
val* var5401 /* : nullable Int */;
val* var5402 /* : nullable Int */;
val* var5403 /* : nullable Bool */;
val* var5404 /* : nullable Bool */;
short int var5405 /* : Bool */;
val* var5407 /* : NativeArray[String] */;
static val* varonce5406;
static val* varonce5408;
val* var5409 /* : String */;
char* var5410 /* : CString */;
val* var5411 /* : String */;
val* var5412 /* : nullable Int */;
val* var5413 /* : nullable Int */;
val* var5414 /* : nullable Bool */;
val* var5415 /* : nullable Bool */;
val* var5416 /* : nullable Object */;
val* var5417 /* : String */;
val* var5418 /* : nullable Object */;
val* var5419 /* : String */;
val* var5420 /* : String */;
val* var5421 /* : RuntimeVariable */;
static val* varonce5422;
val* var5423 /* : String */;
char* var5424 /* : CString */;
val* var5425 /* : String */;
val* var5426 /* : nullable Int */;
val* var5427 /* : nullable Int */;
val* var5428 /* : nullable Bool */;
val* var5429 /* : nullable Bool */;
short int var5430 /* : Bool */;
val* var5432 /* : NativeArray[String] */;
static val* varonce5431;
static val* varonce5433;
val* var5434 /* : String */;
char* var5435 /* : CString */;
val* var5436 /* : String */;
val* var5437 /* : nullable Int */;
val* var5438 /* : nullable Int */;
val* var5439 /* : nullable Bool */;
val* var5440 /* : nullable Bool */;
val* var5441 /* : nullable Object */;
val* var5442 /* : String */;
val* var5443 /* : nullable Object */;
val* var5444 /* : String */;
val* var5445 /* : String */;
val* var5446 /* : RuntimeVariable */;
static val* varonce5447;
val* var5448 /* : String */;
char* var5449 /* : CString */;
val* var5450 /* : String */;
val* var5451 /* : nullable Int */;
val* var5452 /* : nullable Int */;
val* var5453 /* : nullable Bool */;
val* var5454 /* : nullable Bool */;
short int var5455 /* : Bool */;
val* var5457 /* : NativeArray[String] */;
static val* varonce5456;
static val* varonce5458;
val* var5459 /* : String */;
char* var5460 /* : CString */;
val* var5461 /* : String */;
val* var5462 /* : nullable Int */;
val* var5463 /* : nullable Int */;
val* var5464 /* : nullable Bool */;
val* var5465 /* : nullable Bool */;
val* var5466 /* : nullable Object */;
val* var5467 /* : String */;
val* var5468 /* : nullable Object */;
val* var5469 /* : String */;
val* var5470 /* : String */;
val* var5471 /* : RuntimeVariable */;
static val* varonce5472;
val* var5473 /* : String */;
char* var5474 /* : CString */;
val* var5475 /* : String */;
val* var5476 /* : nullable Int */;
val* var5477 /* : nullable Int */;
val* var5478 /* : nullable Bool */;
val* var5479 /* : nullable Bool */;
short int var5480 /* : Bool */;
val* var5482 /* : NativeArray[String] */;
static val* varonce5481;
static val* varonce5483;
val* var5484 /* : String */;
char* var5485 /* : CString */;
val* var5486 /* : String */;
val* var5487 /* : nullable Int */;
val* var5488 /* : nullable Int */;
val* var5489 /* : nullable Bool */;
val* var5490 /* : nullable Bool */;
val* var5491 /* : nullable Object */;
val* var5492 /* : String */;
val* var5493 /* : nullable Object */;
val* var5494 /* : String */;
val* var5495 /* : String */;
val* var5496 /* : RuntimeVariable */;
static val* varonce5497;
val* var5498 /* : String */;
char* var5499 /* : CString */;
val* var5500 /* : String */;
val* var5501 /* : nullable Int */;
val* var5502 /* : nullable Int */;
val* var5503 /* : nullable Bool */;
val* var5504 /* : nullable Bool */;
short int var5505 /* : Bool */;
val* var5507 /* : NativeArray[String] */;
static val* varonce5506;
static val* varonce5508;
val* var5509 /* : String */;
char* var5510 /* : CString */;
val* var5511 /* : String */;
val* var5512 /* : nullable Int */;
val* var5513 /* : nullable Int */;
val* var5514 /* : nullable Bool */;
val* var5515 /* : nullable Bool */;
val* var5516 /* : nullable Object */;
val* var5517 /* : String */;
val* var5518 /* : nullable Object */;
val* var5519 /* : String */;
val* var5520 /* : String */;
val* var5521 /* : RuntimeVariable */;
static val* varonce5522;
val* var5523 /* : String */;
char* var5524 /* : CString */;
val* var5525 /* : String */;
val* var5526 /* : nullable Int */;
val* var5527 /* : nullable Int */;
val* var5528 /* : nullable Bool */;
val* var5529 /* : nullable Bool */;
short int var5530 /* : Bool */;
val* var5531 /* : nullable Object */;
val* var5532 /* : nullable Object */;
val* var5533 /* : RuntimeVariable */;
static val* varonce5534;
val* var5535 /* : String */;
char* var5536 /* : CString */;
val* var5537 /* : String */;
val* var5538 /* : nullable Int */;
val* var5539 /* : nullable Int */;
val* var5540 /* : nullable Bool */;
val* var5541 /* : nullable Bool */;
short int var5542 /* : Bool */;
val* var5543 /* : nullable Object */;
val* var5544 /* : nullable Object */;
val* var5545 /* : RuntimeVariable */;
val* var_res5546 /* var res: RuntimeVariable */;
val* var5548 /* : NativeArray[String] */;
static val* varonce5547;
static val* varonce5549;
val* var5550 /* : String */;
char* var5551 /* : CString */;
val* var5552 /* : String */;
val* var5553 /* : nullable Int */;
val* var5554 /* : nullable Int */;
val* var5555 /* : nullable Bool */;
val* var5556 /* : nullable Bool */;
val* var5557 /* : String */;
val* var5558 /* : String */;
val* var5559 /* : RuntimeVariable */;
static val* varonce5560;
val* var5561 /* : String */;
char* var5562 /* : CString */;
val* var5563 /* : String */;
val* var5564 /* : nullable Int */;
val* var5565 /* : nullable Int */;
val* var5566 /* : nullable Bool */;
val* var5567 /* : nullable Bool */;
short int var5568 /* : Bool */;
val* var5570 /* : NativeArray[String] */;
static val* varonce5569;
static val* varonce5571;
val* var5572 /* : String */;
char* var5573 /* : CString */;
val* var5574 /* : String */;
val* var5575 /* : nullable Int */;
val* var5576 /* : nullable Int */;
val* var5577 /* : nullable Bool */;
val* var5578 /* : nullable Bool */;
val* var5579 /* : nullable Object */;
val* var5580 /* : String */;
val* var5581 /* : nullable Object */;
val* var5582 /* : String */;
val* var5583 /* : String */;
val* var5584 /* : RuntimeVariable */;
static val* varonce5585;
val* var5586 /* : String */;
char* var5587 /* : CString */;
val* var5588 /* : String */;
val* var5589 /* : nullable Int */;
val* var5590 /* : nullable Int */;
val* var5591 /* : nullable Bool */;
val* var5592 /* : nullable Bool */;
short int var5593 /* : Bool */;
val* var5595 /* : NativeArray[String] */;
static val* varonce5594;
static val* varonce5596;
val* var5597 /* : String */;
char* var5598 /* : CString */;
val* var5599 /* : String */;
val* var5600 /* : nullable Int */;
val* var5601 /* : nullable Int */;
val* var5602 /* : nullable Bool */;
val* var5603 /* : nullable Bool */;
val* var5604 /* : nullable Object */;
val* var5605 /* : String */;
val* var5606 /* : nullable Object */;
val* var5607 /* : String */;
val* var5608 /* : String */;
val* var5609 /* : RuntimeVariable */;
static val* varonce5610;
val* var5611 /* : String */;
char* var5612 /* : CString */;
val* var5613 /* : String */;
val* var5614 /* : nullable Int */;
val* var5615 /* : nullable Int */;
val* var5616 /* : nullable Bool */;
val* var5617 /* : nullable Bool */;
short int var5618 /* : Bool */;
val* var5620 /* : NativeArray[String] */;
static val* varonce5619;
static val* varonce5621;
val* var5622 /* : String */;
char* var5623 /* : CString */;
val* var5624 /* : String */;
val* var5625 /* : nullable Int */;
val* var5626 /* : nullable Int */;
val* var5627 /* : nullable Bool */;
val* var5628 /* : nullable Bool */;
val* var5629 /* : nullable Object */;
val* var5630 /* : String */;
val* var5631 /* : nullable Object */;
val* var5632 /* : String */;
val* var5633 /* : String */;
val* var5634 /* : RuntimeVariable */;
static val* varonce5635;
val* var5636 /* : String */;
char* var5637 /* : CString */;
val* var5638 /* : String */;
val* var5639 /* : nullable Int */;
val* var5640 /* : nullable Int */;
val* var5641 /* : nullable Bool */;
val* var5642 /* : nullable Bool */;
short int var5643 /* : Bool */;
val* var5645 /* : NativeArray[String] */;
static val* varonce5644;
static val* varonce5646;
val* var5647 /* : String */;
char* var5648 /* : CString */;
val* var5649 /* : String */;
val* var5650 /* : nullable Int */;
val* var5651 /* : nullable Int */;
val* var5652 /* : nullable Bool */;
val* var5653 /* : nullable Bool */;
val* var5654 /* : nullable Object */;
val* var5655 /* : String */;
val* var5656 /* : nullable Object */;
val* var5657 /* : String */;
val* var5658 /* : String */;
val* var5659 /* : RuntimeVariable */;
static val* varonce5660;
val* var5661 /* : String */;
char* var5662 /* : CString */;
val* var5663 /* : String */;
val* var5664 /* : nullable Int */;
val* var5665 /* : nullable Int */;
val* var5666 /* : nullable Bool */;
val* var5667 /* : nullable Bool */;
short int var5668 /* : Bool */;
val* var5670 /* : NativeArray[String] */;
static val* varonce5669;
static val* varonce5671;
val* var5672 /* : String */;
char* var5673 /* : CString */;
val* var5674 /* : String */;
val* var5675 /* : nullable Int */;
val* var5676 /* : nullable Int */;
val* var5677 /* : nullable Bool */;
val* var5678 /* : nullable Bool */;
val* var5679 /* : nullable Object */;
val* var5680 /* : String */;
val* var5681 /* : String */;
val* var5682 /* : RuntimeVariable */;
static val* varonce5683;
val* var5684 /* : String */;
char* var5685 /* : CString */;
val* var5686 /* : String */;
val* var5687 /* : nullable Int */;
val* var5688 /* : nullable Int */;
val* var5689 /* : nullable Bool */;
val* var5690 /* : nullable Bool */;
short int var5691 /* : Bool */;
val* var5693 /* : NativeArray[String] */;
static val* varonce5692;
static val* varonce5694;
val* var5695 /* : String */;
char* var5696 /* : CString */;
val* var5697 /* : String */;
val* var5698 /* : nullable Int */;
val* var5699 /* : nullable Int */;
val* var5700 /* : nullable Bool */;
val* var5701 /* : nullable Bool */;
val* var5702 /* : nullable Object */;
val* var5703 /* : String */;
val* var5704 /* : String */;
val* var5705 /* : RuntimeVariable */;
static val* varonce5706;
val* var5707 /* : String */;
char* var5708 /* : CString */;
val* var5709 /* : String */;
val* var5710 /* : nullable Int */;
val* var5711 /* : nullable Int */;
val* var5712 /* : nullable Bool */;
val* var5713 /* : nullable Bool */;
short int var5714 /* : Bool */;
val* var5716 /* : NativeArray[String] */;
static val* varonce5715;
static val* varonce5717;
val* var5718 /* : String */;
char* var5719 /* : CString */;
val* var5720 /* : String */;
val* var5721 /* : nullable Int */;
val* var5722 /* : nullable Int */;
val* var5723 /* : nullable Bool */;
val* var5724 /* : nullable Bool */;
val* var5725 /* : nullable Object */;
val* var5726 /* : String */;
val* var5727 /* : String */;
val* var5728 /* : RuntimeVariable */;
static val* varonce5729;
val* var5730 /* : String */;
char* var5731 /* : CString */;
val* var5732 /* : String */;
val* var5733 /* : nullable Int */;
val* var5734 /* : nullable Int */;
val* var5735 /* : nullable Bool */;
val* var5736 /* : nullable Bool */;
short int var5737 /* : Bool */;
val* var5739 /* : NativeArray[String] */;
static val* varonce5738;
static val* varonce5740;
val* var5741 /* : String */;
char* var5742 /* : CString */;
val* var5743 /* : String */;
val* var5744 /* : nullable Int */;
val* var5745 /* : nullable Int */;
val* var5746 /* : nullable Bool */;
val* var5747 /* : nullable Bool */;
val* var5748 /* : nullable Object */;
val* var5749 /* : String */;
val* var5750 /* : String */;
val* var5751 /* : RuntimeVariable */;
static val* varonce5752;
val* var5753 /* : String */;
char* var5754 /* : CString */;
val* var5755 /* : String */;
val* var5756 /* : nullable Int */;
val* var5757 /* : nullable Int */;
val* var5758 /* : nullable Bool */;
val* var5759 /* : nullable Bool */;
short int var5760 /* : Bool */;
val* var5762 /* : NativeArray[String] */;
static val* varonce5761;
static val* varonce5763;
val* var5764 /* : String */;
char* var5765 /* : CString */;
val* var5766 /* : String */;
val* var5767 /* : nullable Int */;
val* var5768 /* : nullable Int */;
val* var5769 /* : nullable Bool */;
val* var5770 /* : nullable Bool */;
val* var5771 /* : nullable Object */;
val* var5772 /* : String */;
val* var5773 /* : String */;
val* var5774 /* : RuntimeVariable */;
static val* varonce5775;
val* var5776 /* : String */;
char* var5777 /* : CString */;
val* var5778 /* : String */;
val* var5779 /* : nullable Int */;
val* var5780 /* : nullable Int */;
val* var5781 /* : nullable Bool */;
val* var5782 /* : nullable Bool */;
short int var5783 /* : Bool */;
val* var5785 /* : NativeArray[String] */;
static val* varonce5784;
static val* varonce5786;
val* var5787 /* : String */;
char* var5788 /* : CString */;
val* var5789 /* : String */;
val* var5790 /* : nullable Int */;
val* var5791 /* : nullable Int */;
val* var5792 /* : nullable Bool */;
val* var5793 /* : nullable Bool */;
val* var5794 /* : nullable Object */;
val* var5795 /* : String */;
val* var5796 /* : String */;
val* var5797 /* : RuntimeVariable */;
static val* varonce5798;
val* var5799 /* : String */;
char* var5800 /* : CString */;
val* var5801 /* : String */;
val* var5802 /* : nullable Int */;
val* var5803 /* : nullable Int */;
val* var5804 /* : nullable Bool */;
val* var5805 /* : nullable Bool */;
short int var5806 /* : Bool */;
val* var5808 /* : NativeArray[String] */;
static val* varonce5807;
static val* varonce5809;
val* var5810 /* : String */;
char* var5811 /* : CString */;
val* var5812 /* : String */;
val* var5813 /* : nullable Int */;
val* var5814 /* : nullable Int */;
val* var5815 /* : nullable Bool */;
val* var5816 /* : nullable Bool */;
val* var5817 /* : nullable Object */;
val* var5818 /* : String */;
val* var5819 /* : String */;
val* var5820 /* : RuntimeVariable */;
static val* varonce5821;
val* var5822 /* : String */;
char* var5823 /* : CString */;
val* var5824 /* : String */;
val* var5825 /* : nullable Int */;
val* var5826 /* : nullable Int */;
val* var5827 /* : nullable Bool */;
val* var5828 /* : nullable Bool */;
short int var5829 /* : Bool */;
val* var5831 /* : NativeArray[String] */;
static val* varonce5830;
static val* varonce5832;
val* var5833 /* : String */;
char* var5834 /* : CString */;
val* var5835 /* : String */;
val* var5836 /* : nullable Int */;
val* var5837 /* : nullable Int */;
val* var5838 /* : nullable Bool */;
val* var5839 /* : nullable Bool */;
val* var5840 /* : nullable Object */;
val* var5841 /* : String */;
val* var5842 /* : nullable Object */;
val* var5843 /* : String */;
val* var5844 /* : String */;
val* var5845 /* : RuntimeVariable */;
static val* varonce5846;
val* var5847 /* : String */;
char* var5848 /* : CString */;
val* var5849 /* : String */;
val* var5850 /* : nullable Int */;
val* var5851 /* : nullable Int */;
val* var5852 /* : nullable Bool */;
val* var5853 /* : nullable Bool */;
short int var5854 /* : Bool */;
val* var5856 /* : NativeArray[String] */;
static val* varonce5855;
static val* varonce5857;
val* var5858 /* : String */;
char* var5859 /* : CString */;
val* var5860 /* : String */;
val* var5861 /* : nullable Int */;
val* var5862 /* : nullable Int */;
val* var5863 /* : nullable Bool */;
val* var5864 /* : nullable Bool */;
val* var5865 /* : nullable Object */;
val* var5866 /* : String */;
val* var5867 /* : nullable Object */;
val* var5868 /* : String */;
val* var5869 /* : String */;
val* var5870 /* : RuntimeVariable */;
static val* varonce5871;
val* var5872 /* : String */;
char* var5873 /* : CString */;
val* var5874 /* : String */;
val* var5875 /* : nullable Int */;
val* var5876 /* : nullable Int */;
val* var5877 /* : nullable Bool */;
val* var5878 /* : nullable Bool */;
short int var5879 /* : Bool */;
val* var5881 /* : NativeArray[String] */;
static val* varonce5880;
static val* varonce5882;
val* var5883 /* : String */;
char* var5884 /* : CString */;
val* var5885 /* : String */;
val* var5886 /* : nullable Int */;
val* var5887 /* : nullable Int */;
val* var5888 /* : nullable Bool */;
val* var5889 /* : nullable Bool */;
val* var5890 /* : nullable Object */;
val* var5891 /* : String */;
val* var5892 /* : nullable Object */;
val* var5893 /* : String */;
val* var5894 /* : String */;
val* var5895 /* : RuntimeVariable */;
static val* varonce5896;
val* var5897 /* : String */;
char* var5898 /* : CString */;
val* var5899 /* : String */;
val* var5900 /* : nullable Int */;
val* var5901 /* : nullable Int */;
val* var5902 /* : nullable Bool */;
val* var5903 /* : nullable Bool */;
short int var5904 /* : Bool */;
val* var5906 /* : NativeArray[String] */;
static val* varonce5905;
static val* varonce5907;
val* var5908 /* : String */;
char* var5909 /* : CString */;
val* var5910 /* : String */;
val* var5911 /* : nullable Int */;
val* var5912 /* : nullable Int */;
val* var5913 /* : nullable Bool */;
val* var5914 /* : nullable Bool */;
val* var5915 /* : nullable Object */;
val* var5916 /* : String */;
val* var5917 /* : String */;
val* var5918 /* : RuntimeVariable */;
static val* varonce5919;
val* var5920 /* : String */;
char* var5921 /* : CString */;
val* var5922 /* : String */;
val* var5923 /* : nullable Int */;
val* var5924 /* : nullable Int */;
val* var5925 /* : nullable Bool */;
val* var5926 /* : nullable Bool */;
short int var5927 /* : Bool */;
val* var5929 /* : NativeArray[String] */;
static val* varonce5928;
static val* varonce5930;
val* var5931 /* : String */;
char* var5932 /* : CString */;
val* var5933 /* : String */;
val* var5934 /* : nullable Int */;
val* var5935 /* : nullable Int */;
val* var5936 /* : nullable Bool */;
val* var5937 /* : nullable Bool */;
static val* varonce5938;
val* var5939 /* : String */;
char* var5940 /* : CString */;
val* var5941 /* : String */;
val* var5942 /* : nullable Int */;
val* var5943 /* : nullable Int */;
val* var5944 /* : nullable Bool */;
val* var5945 /* : nullable Bool */;
val* var5946 /* : nullable Object */;
val* var5947 /* : String */;
val* var5948 /* : String */;
static val* varonce5949;
val* var5950 /* : String */;
char* var5951 /* : CString */;
val* var5952 /* : String */;
val* var5953 /* : nullable Int */;
val* var5954 /* : nullable Int */;
val* var5955 /* : nullable Bool */;
val* var5956 /* : nullable Bool */;
short int var5957 /* : Bool */;
static val* varonce5958;
val* var5959 /* : String */;
char* var5960 /* : CString */;
val* var5961 /* : String */;
val* var5962 /* : nullable Int */;
val* var5963 /* : nullable Int */;
val* var5964 /* : nullable Bool */;
val* var5965 /* : nullable Bool */;
val* var5966 /* : RuntimeVariable */;
static val* varonce5967;
val* var5968 /* : String */;
char* var5969 /* : CString */;
val* var5970 /* : String */;
val* var5971 /* : nullable Int */;
val* var5972 /* : nullable Int */;
val* var5973 /* : nullable Bool */;
val* var5974 /* : nullable Bool */;
short int var5975 /* : Bool */;
val* var5977 /* : NativeArray[String] */;
static val* varonce5976;
static val* varonce5978;
val* var5979 /* : String */;
char* var5980 /* : CString */;
val* var5981 /* : String */;
val* var5982 /* : nullable Int */;
val* var5983 /* : nullable Int */;
val* var5984 /* : nullable Bool */;
val* var5985 /* : nullable Bool */;
val* var5986 /* : nullable Object */;
val* var5987 /* : String */;
val* var5988 /* : String */;
val* var5989 /* : RuntimeVariable */;
static val* varonce5990;
val* var5991 /* : String */;
char* var5992 /* : CString */;
val* var5993 /* : String */;
val* var5994 /* : nullable Int */;
val* var5995 /* : nullable Int */;
val* var5996 /* : nullable Bool */;
val* var5997 /* : nullable Bool */;
short int var5998 /* : Bool */;
val* var5999 /* : nullable Object */;
val* var6000 /* : nullable Object */;
val* var6001 /* : RuntimeVariable */;
static val* varonce6002;
val* var6003 /* : String */;
char* var6004 /* : CString */;
val* var6005 /* : String */;
val* var6006 /* : nullable Int */;
val* var6007 /* : nullable Int */;
val* var6008 /* : nullable Bool */;
val* var6009 /* : nullable Bool */;
short int var6010 /* : Bool */;
val* var6011 /* : nullable Object */;
val* var6012 /* : nullable Object */;
val* var6013 /* : RuntimeVariable */;
static val* varonce6014;
val* var6015 /* : String */;
char* var6016 /* : CString */;
val* var6017 /* : String */;
val* var6018 /* : nullable Int */;
val* var6019 /* : nullable Int */;
val* var6020 /* : nullable Bool */;
val* var6021 /* : nullable Bool */;
short int var6022 /* : Bool */;
val* var6023 /* : nullable Object */;
val* var6024 /* : String */;
val* var_nat /* var nat: String */;
val* var6026 /* : NativeArray[String] */;
static val* varonce6025;
static val* varonce6027;
val* var6028 /* : String */;
char* var6029 /* : CString */;
val* var6030 /* : String */;
val* var6031 /* : nullable Int */;
val* var6032 /* : nullable Int */;
val* var6033 /* : nullable Bool */;
val* var6034 /* : nullable Bool */;
static val* varonce6035;
val* var6036 /* : String */;
char* var6037 /* : CString */;
val* var6038 /* : String */;
val* var6039 /* : nullable Int */;
val* var6040 /* : nullable Int */;
val* var6041 /* : nullable Bool */;
val* var6042 /* : nullable Bool */;
val* var6043 /* : String */;
static val* varonce6044;
val* var6045 /* : String */;
char* var6046 /* : CString */;
val* var6047 /* : String */;
val* var6048 /* : nullable Int */;
val* var6049 /* : nullable Int */;
val* var6050 /* : nullable Bool */;
val* var6051 /* : nullable Bool */;
short int var6052 /* : Bool */;
val* var6053 /* : nullable Object */;
val* var6054 /* : String */;
val* var_nat6055 /* var nat: String */;
val* var6057 /* : NativeArray[String] */;
static val* varonce6056;
static val* varonce6058;
val* var6059 /* : String */;
char* var6060 /* : CString */;
val* var6061 /* : String */;
val* var6062 /* : nullable Int */;
val* var6063 /* : nullable Int */;
val* var6064 /* : nullable Bool */;
val* var6065 /* : nullable Bool */;
val* var6066 /* : String */;
val* var6067 /* : RuntimeVariable */;
static val* varonce6068;
val* var6069 /* : String */;
char* var6070 /* : CString */;
val* var6071 /* : String */;
val* var6072 /* : nullable Int */;
val* var6073 /* : nullable Int */;
val* var6074 /* : nullable Bool */;
val* var6075 /* : nullable Bool */;
short int var6076 /* : Bool */;
static val* varonce6077;
val* var6078 /* : String */;
char* var6079 /* : CString */;
val* var6080 /* : String */;
val* var6081 /* : nullable Int */;
val* var6082 /* : nullable Int */;
val* var6083 /* : nullable Bool */;
val* var6084 /* : nullable Bool */;
static val* varonce6085;
val* var6086 /* : String */;
char* var6087 /* : CString */;
val* var6088 /* : String */;
val* var6089 /* : nullable Int */;
val* var6090 /* : nullable Int */;
val* var6091 /* : nullable Bool */;
val* var6092 /* : nullable Bool */;
short int var6093 /* : Bool */;
static val* varonce6094;
val* var6095 /* : String */;
char* var6096 /* : CString */;
val* var6097 /* : String */;
val* var6098 /* : nullable Int */;
val* var6099 /* : nullable Int */;
val* var6100 /* : nullable Bool */;
val* var6101 /* : nullable Bool */;
val* var6102 /* : RuntimeVariable */;
static val* varonce6103;
val* var6104 /* : String */;
char* var6105 /* : CString */;
val* var6106 /* : String */;
val* var6107 /* : nullable Int */;
val* var6108 /* : nullable Int */;
val* var6109 /* : nullable Bool */;
val* var6110 /* : nullable Bool */;
short int var6111 /* : Bool */;
val* var6113 /* : NativeArray[String] */;
static val* varonce6112;
static val* varonce6114;
val* var6115 /* : String */;
char* var6116 /* : CString */;
val* var6117 /* : String */;
val* var6118 /* : nullable Int */;
val* var6119 /* : nullable Int */;
val* var6120 /* : nullable Bool */;
val* var6121 /* : nullable Bool */;
static val* varonce6122;
val* var6123 /* : String */;
char* var6124 /* : CString */;
val* var6125 /* : String */;
val* var6126 /* : nullable Int */;
val* var6127 /* : nullable Int */;
val* var6128 /* : nullable Bool */;
val* var6129 /* : nullable Bool */;
val* var6130 /* : nullable Object */;
val* var6131 /* : String */;
val* var6132 /* : String */;
val* var6133 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var3 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var1) on <var1:MProperty(MMethod)> */
var6 = var1->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var1:MProperty(MMethod)> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_pname = var4;
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var9 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model$MClass$name (var10) on <var10:MClass> */
var15 = var10->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var10:MClass> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_cname = var13;
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var18 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2305);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$return_mtype (var16) on <var16:nullable MSignature> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
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
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
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
var33 = (val*)(2l<<2|1);
var34 = (val*)(2l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce = var30;
}
{
{ /* Inline kernel$Object$!= (var_pname,var30) on <var_pname:String> */
var_other = var30;
{
var39 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var_other); /* == on <var_pname:String>*/
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_ = var37;
if (var37){
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "!=";
var45 = (val*)(2l<<2|1);
var46 = (val*)(2l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
{
{ /* Inline kernel$Object$!= (var_pname,var42) on <var_pname:String> */
var_other = var42;
{
var51 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var_other); /* == on <var_pname:String>*/
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var29 = var49;
} else {
var29 = var_;
}
if (var29){
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "Int";
var57 = (val*)(3l<<2|1);
var58 = (val*)(3l<<2|1);
var59 = (val*)((long)(0)<<2|3);
var60 = (val*)((long)(0)<<2|3);
var56 = core__flat___CString___to_s_unsafe(var55, var57, var58, var59, var60);
var54 = var56;
varonce53 = var54;
}
{
var61 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var54); /* == on <var_cname:String>*/
}
if (var61){
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "output";
var66 = (val*)(6l<<2|1);
var67 = (val*)(6l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
{
var70 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var63); /* == on <var_pname:String>*/
}
if (var70){
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "printf(\"%ld\\n\", ";
var77 = (val*)(16l<<2|1);
var78 = (val*)(16l<<2|1);
var79 = (val*)((long)(0)<<2|3);
var80 = (val*)((long)(0)<<2|3);
var76 = core__flat___CString___to_s_unsafe(var75, var77, var78, var79, var80);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var72)->values[0]=var74;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = ");";
var85 = (val*)(2l<<2|1);
var86 = (val*)(2l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var72)->values[2]=var82;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
var89 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var90 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__Object__to_s]))(var89); /* to_s on <var89:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var72)->values[1]=var90;
{
var91 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var91); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "object_id";
var96 = (val*)(9l<<2|1);
var97 = (val*)(9l<<2|1);
var98 = (val*)((long)(0)<<2|3);
var99 = (val*)((long)(0)<<2|3);
var95 = core__flat___CString___to_s_unsafe(var94, var96, var97, var98, var99);
var93 = var95;
varonce92 = var93;
}
{
var100 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var93); /* == on <var_pname:String>*/
}
if (var100){
{
var101 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var101); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "+";
var106 = (val*)(1l<<2|1);
var107 = (val*)(1l<<2|1);
var108 = (val*)((long)(0)<<2|3);
var109 = (val*)((long)(0)<<2|3);
var105 = core__flat___CString___to_s_unsafe(var104, var106, var107, var108, var109);
var103 = var105;
varonce102 = var103;
}
{
var110 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var103); /* == on <var_pname:String>*/
}
if (var110){
if (unlikely(varonce111==NULL)) {
var112 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = " + ";
var117 = (val*)(3l<<2|1);
var118 = (val*)(3l<<2|1);
var119 = (val*)((long)(0)<<2|3);
var120 = (val*)((long)(0)<<2|3);
var116 = core__flat___CString___to_s_unsafe(var115, var117, var118, var119, var120);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var112)->values[1]=var114;
} else {
var112 = varonce111;
varonce111 = NULL;
}
{
var121 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var122 = ((val*(*)(val* self))(var121->class->vft[COLOR_core__abstract_text__Object__to_s]))(var121); /* to_s on <var121:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var112)->values[0]=var122;
{
var123 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var124 = ((val*(*)(val* self))(var123->class->vft[COLOR_core__abstract_text__Object__to_s]))(var123); /* to_s on <var123:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var112)->values[2]=var124;
{
var125 = ((val*(*)(val* self))(var112->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var112); /* native_to_s on <var112:NativeArray[String]>*/
}
varonce111 = var112;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2321);
fatal_exit(1);
}
{
var126 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var125, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var126); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "-";
var131 = (val*)(1l<<2|1);
var132 = (val*)(1l<<2|1);
var133 = (val*)((long)(0)<<2|3);
var134 = (val*)((long)(0)<<2|3);
var130 = core__flat___CString___to_s_unsafe(var129, var131, var132, var133, var134);
var128 = var130;
varonce127 = var128;
}
{
var135 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var128); /* == on <var_pname:String>*/
}
if (var135){
if (unlikely(varonce136==NULL)) {
var137 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = " - ";
var142 = (val*)(3l<<2|1);
var143 = (val*)(3l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var137)->values[1]=var139;
} else {
var137 = varonce136;
varonce136 = NULL;
}
{
var146 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var147 = ((val*(*)(val* self))(var146->class->vft[COLOR_core__abstract_text__Object__to_s]))(var146); /* to_s on <var146:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var137)->values[0]=var147;
{
var148 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var149 = ((val*(*)(val* self))(var148->class->vft[COLOR_core__abstract_text__Object__to_s]))(var148); /* to_s on <var148:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var137)->values[2]=var149;
{
var150 = ((val*(*)(val* self))(var137->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2324);
fatal_exit(1);
}
{
var151 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var150, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var151); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "unary -";
var156 = (val*)(7l<<2|1);
var157 = (val*)(7l<<2|1);
var158 = (val*)((long)(0)<<2|3);
var159 = (val*)((long)(0)<<2|3);
var155 = core__flat___CString___to_s_unsafe(var154, var156, var157, var158, var159);
var153 = var155;
varonce152 = var153;
}
{
var160 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var153); /* == on <var_pname:String>*/
}
if (var160){
if (unlikely(varonce161==NULL)) {
var162 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "-";
var167 = (val*)(1l<<2|1);
var168 = (val*)(1l<<2|1);
var169 = (val*)((long)(0)<<2|3);
var170 = (val*)((long)(0)<<2|3);
var166 = core__flat___CString___to_s_unsafe(var165, var167, var168, var169, var170);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var162)->values[0]=var164;
} else {
var162 = varonce161;
varonce161 = NULL;
}
{
var171 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var172 = ((val*(*)(val* self))(var171->class->vft[COLOR_core__abstract_text__Object__to_s]))(var171); /* to_s on <var171:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var162)->values[1]=var172;
{
var173 = ((val*(*)(val* self))(var162->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var162); /* native_to_s on <var162:NativeArray[String]>*/
}
varonce161 = var162;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2327);
fatal_exit(1);
}
{
var174 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var173, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var174); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "unary +";
var179 = (val*)(7l<<2|1);
var180 = (val*)(7l<<2|1);
var181 = (val*)((long)(0)<<2|3);
var182 = (val*)((long)(0)<<2|3);
var178 = core__flat___CString___to_s_unsafe(var177, var179, var180, var181, var182);
var176 = var178;
varonce175 = var176;
}
{
var183 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var176); /* == on <var_pname:String>*/
}
if (var183){
{
var184 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var184); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "*";
var189 = (val*)(1l<<2|1);
var190 = (val*)(1l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
{
var193 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var186); /* == on <var_pname:String>*/
}
if (var193){
if (unlikely(varonce194==NULL)) {
var195 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = " * ";
var200 = (val*)(3l<<2|1);
var201 = (val*)(3l<<2|1);
var202 = (val*)((long)(0)<<2|3);
var203 = (val*)((long)(0)<<2|3);
var199 = core__flat___CString___to_s_unsafe(var198, var200, var201, var202, var203);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var195)->values[1]=var197;
} else {
var195 = varonce194;
varonce194 = NULL;
}
{
var204 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var205 = ((val*(*)(val* self))(var204->class->vft[COLOR_core__abstract_text__Object__to_s]))(var204); /* to_s on <var204:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var195)->values[0]=var205;
{
var206 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var207 = ((val*(*)(val* self))(var206->class->vft[COLOR_core__abstract_text__Object__to_s]))(var206); /* to_s on <var206:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var195)->values[2]=var207;
{
var208 = ((val*(*)(val* self))(var195->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var195); /* native_to_s on <var195:NativeArray[String]>*/
}
varonce194 = var195;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2333);
fatal_exit(1);
}
{
var209 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var208, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var209); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "/";
var214 = (val*)(1l<<2|1);
var215 = (val*)(1l<<2|1);
var216 = (val*)((long)(0)<<2|3);
var217 = (val*)((long)(0)<<2|3);
var213 = core__flat___CString___to_s_unsafe(var212, var214, var215, var216, var217);
var211 = var213;
varonce210 = var211;
}
{
var218 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var211); /* == on <var_pname:String>*/
}
if (var218){
if (unlikely(varonce219==NULL)) {
var220 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = " / ";
var225 = (val*)(3l<<2|1);
var226 = (val*)(3l<<2|1);
var227 = (val*)((long)(0)<<2|3);
var228 = (val*)((long)(0)<<2|3);
var224 = core__flat___CString___to_s_unsafe(var223, var225, var226, var227, var228);
var222 = var224;
varonce221 = var222;
}
((struct instance_core__NativeArray*)var220)->values[1]=var222;
} else {
var220 = varonce219;
varonce219 = NULL;
}
{
var229 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var230 = ((val*(*)(val* self))(var229->class->vft[COLOR_core__abstract_text__Object__to_s]))(var229); /* to_s on <var229:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var220)->values[0]=var230;
{
var231 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var232 = ((val*(*)(val* self))(var231->class->vft[COLOR_core__abstract_text__Object__to_s]))(var231); /* to_s on <var231:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var220)->values[2]=var232;
{
var233 = ((val*(*)(val* self))(var220->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var220); /* native_to_s on <var220:NativeArray[String]>*/
}
varonce219 = var220;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2336);
fatal_exit(1);
}
{
var234 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var233, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var234); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce235!=NULL)) {
var236 = varonce235;
} else {
var237 = "%";
var239 = (val*)(1l<<2|1);
var240 = (val*)(1l<<2|1);
var241 = (val*)((long)(0)<<2|3);
var242 = (val*)((long)(0)<<2|3);
var238 = core__flat___CString___to_s_unsafe(var237, var239, var240, var241, var242);
var236 = var238;
varonce235 = var236;
}
{
var243 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var236); /* == on <var_pname:String>*/
}
if (var243){
if (unlikely(varonce244==NULL)) {
var245 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce246!=NULL)) {
var247 = varonce246;
} else {
var248 = " % ";
var250 = (val*)(3l<<2|1);
var251 = (val*)(3l<<2|1);
var252 = (val*)((long)(0)<<2|3);
var253 = (val*)((long)(0)<<2|3);
var249 = core__flat___CString___to_s_unsafe(var248, var250, var251, var252, var253);
var247 = var249;
varonce246 = var247;
}
((struct instance_core__NativeArray*)var245)->values[1]=var247;
} else {
var245 = varonce244;
varonce244 = NULL;
}
{
var254 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var255 = ((val*(*)(val* self))(var254->class->vft[COLOR_core__abstract_text__Object__to_s]))(var254); /* to_s on <var254:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var245)->values[0]=var255;
{
var256 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var257 = ((val*(*)(val* self))(var256->class->vft[COLOR_core__abstract_text__Object__to_s]))(var256); /* to_s on <var256:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var245)->values[2]=var257;
{
var258 = ((val*(*)(val* self))(var245->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var245); /* native_to_s on <var245:NativeArray[String]>*/
}
varonce244 = var245;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2339);
fatal_exit(1);
}
{
var259 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var258, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var259); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce260!=NULL)) {
var261 = varonce260;
} else {
var262 = "==";
var264 = (val*)(2l<<2|1);
var265 = (val*)(2l<<2|1);
var266 = (val*)((long)(0)<<2|3);
var267 = (val*)((long)(0)<<2|3);
var263 = core__flat___CString___to_s_unsafe(var262, var264, var265, var266, var267);
var261 = var263;
varonce260 = var261;
}
{
var268 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var261); /* == on <var_pname:String>*/
}
if (var268){
{
var269 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var270 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var271 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var269, var270);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var271); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "!=";
var276 = (val*)(2l<<2|1);
var277 = (val*)(2l<<2|1);
var278 = (val*)((long)(0)<<2|3);
var279 = (val*)((long)(0)<<2|3);
var275 = core__flat___CString___to_s_unsafe(var274, var276, var277, var278, var279);
var273 = var275;
varonce272 = var273;
}
{
var280 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var273); /* == on <var_pname:String>*/
}
if (var280){
{
var281 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var282 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var283 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var281, var282);
}
var_res = var283;
if (unlikely(varonce284==NULL)) {
var285 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = "!";
var290 = (val*)(1l<<2|1);
var291 = (val*)(1l<<2|1);
var292 = (val*)((long)(0)<<2|3);
var293 = (val*)((long)(0)<<2|3);
var289 = core__flat___CString___to_s_unsafe(var288, var290, var291, var292, var293);
var287 = var289;
varonce286 = var287;
}
((struct instance_core__NativeArray*)var285)->values[0]=var287;
} else {
var285 = varonce284;
varonce284 = NULL;
}
{
var294 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var285)->values[1]=var294;
{
var295 = ((val*(*)(val* self))(var285->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var285); /* native_to_s on <var285:NativeArray[String]>*/
}
varonce284 = var285;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2346);
fatal_exit(1);
}
{
var296 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var295, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var296); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "<";
var301 = (val*)(1l<<2|1);
var302 = (val*)(1l<<2|1);
var303 = (val*)((long)(0)<<2|3);
var304 = (val*)((long)(0)<<2|3);
var300 = core__flat___CString___to_s_unsafe(var299, var301, var302, var303, var304);
var298 = var300;
varonce297 = var298;
}
{
var305 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var298); /* == on <var_pname:String>*/
}
if (var305){
if (unlikely(varonce306==NULL)) {
var307 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = " < ";
var312 = (val*)(3l<<2|1);
var313 = (val*)(3l<<2|1);
var314 = (val*)((long)(0)<<2|3);
var315 = (val*)((long)(0)<<2|3);
var311 = core__flat___CString___to_s_unsafe(var310, var312, var313, var314, var315);
var309 = var311;
varonce308 = var309;
}
((struct instance_core__NativeArray*)var307)->values[1]=var309;
} else {
var307 = varonce306;
varonce306 = NULL;
}
{
var316 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var317 = ((val*(*)(val* self))(var316->class->vft[COLOR_core__abstract_text__Object__to_s]))(var316); /* to_s on <var316:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var307)->values[0]=var317;
{
var318 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var319 = ((val*(*)(val* self))(var318->class->vft[COLOR_core__abstract_text__Object__to_s]))(var318); /* to_s on <var318:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var307)->values[2]=var319;
{
var320 = ((val*(*)(val* self))(var307->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var307); /* native_to_s on <var307:NativeArray[String]>*/
}
varonce306 = var307;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2349);
fatal_exit(1);
}
{
var321 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var320, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var321); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = ">";
var326 = (val*)(1l<<2|1);
var327 = (val*)(1l<<2|1);
var328 = (val*)((long)(0)<<2|3);
var329 = (val*)((long)(0)<<2|3);
var325 = core__flat___CString___to_s_unsafe(var324, var326, var327, var328, var329);
var323 = var325;
varonce322 = var323;
}
{
var330 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var323); /* == on <var_pname:String>*/
}
if (var330){
if (unlikely(varonce331==NULL)) {
var332 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = " > ";
var337 = (val*)(3l<<2|1);
var338 = (val*)(3l<<2|1);
var339 = (val*)((long)(0)<<2|3);
var340 = (val*)((long)(0)<<2|3);
var336 = core__flat___CString___to_s_unsafe(var335, var337, var338, var339, var340);
var334 = var336;
varonce333 = var334;
}
((struct instance_core__NativeArray*)var332)->values[1]=var334;
} else {
var332 = varonce331;
varonce331 = NULL;
}
{
var341 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var342 = ((val*(*)(val* self))(var341->class->vft[COLOR_core__abstract_text__Object__to_s]))(var341); /* to_s on <var341:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var332)->values[0]=var342;
{
var343 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var344 = ((val*(*)(val* self))(var343->class->vft[COLOR_core__abstract_text__Object__to_s]))(var343); /* to_s on <var343:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var332)->values[2]=var344;
{
var345 = ((val*(*)(val* self))(var332->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var332); /* native_to_s on <var332:NativeArray[String]>*/
}
varonce331 = var332;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2352);
fatal_exit(1);
}
{
var346 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var345, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var346); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce347!=NULL)) {
var348 = varonce347;
} else {
var349 = "<=";
var351 = (val*)(2l<<2|1);
var352 = (val*)(2l<<2|1);
var353 = (val*)((long)(0)<<2|3);
var354 = (val*)((long)(0)<<2|3);
var350 = core__flat___CString___to_s_unsafe(var349, var351, var352, var353, var354);
var348 = var350;
varonce347 = var348;
}
{
var355 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var348); /* == on <var_pname:String>*/
}
if (var355){
if (unlikely(varonce356==NULL)) {
var357 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce358!=NULL)) {
var359 = varonce358;
} else {
var360 = " <= ";
var362 = (val*)(4l<<2|1);
var363 = (val*)(4l<<2|1);
var364 = (val*)((long)(0)<<2|3);
var365 = (val*)((long)(0)<<2|3);
var361 = core__flat___CString___to_s_unsafe(var360, var362, var363, var364, var365);
var359 = var361;
varonce358 = var359;
}
((struct instance_core__NativeArray*)var357)->values[1]=var359;
} else {
var357 = varonce356;
varonce356 = NULL;
}
{
var366 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var367 = ((val*(*)(val* self))(var366->class->vft[COLOR_core__abstract_text__Object__to_s]))(var366); /* to_s on <var366:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var357)->values[0]=var367;
{
var368 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var369 = ((val*(*)(val* self))(var368->class->vft[COLOR_core__abstract_text__Object__to_s]))(var368); /* to_s on <var368:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var357)->values[2]=var369;
{
var370 = ((val*(*)(val* self))(var357->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var357); /* native_to_s on <var357:NativeArray[String]>*/
}
varonce356 = var357;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2355);
fatal_exit(1);
}
{
var371 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var370, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var371); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce372!=NULL)) {
var373 = varonce372;
} else {
var374 = ">=";
var376 = (val*)(2l<<2|1);
var377 = (val*)(2l<<2|1);
var378 = (val*)((long)(0)<<2|3);
var379 = (val*)((long)(0)<<2|3);
var375 = core__flat___CString___to_s_unsafe(var374, var376, var377, var378, var379);
var373 = var375;
varonce372 = var373;
}
{
var380 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var373); /* == on <var_pname:String>*/
}
if (var380){
if (unlikely(varonce381==NULL)) {
var382 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce383!=NULL)) {
var384 = varonce383;
} else {
var385 = " >= ";
var387 = (val*)(4l<<2|1);
var388 = (val*)(4l<<2|1);
var389 = (val*)((long)(0)<<2|3);
var390 = (val*)((long)(0)<<2|3);
var386 = core__flat___CString___to_s_unsafe(var385, var387, var388, var389, var390);
var384 = var386;
varonce383 = var384;
}
((struct instance_core__NativeArray*)var382)->values[1]=var384;
} else {
var382 = varonce381;
varonce381 = NULL;
}
{
var391 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var392 = ((val*(*)(val* self))(var391->class->vft[COLOR_core__abstract_text__Object__to_s]))(var391); /* to_s on <var391:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var382)->values[0]=var392;
{
var393 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var394 = ((val*(*)(val* self))(var393->class->vft[COLOR_core__abstract_text__Object__to_s]))(var393); /* to_s on <var393:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var382)->values[2]=var394;
{
var395 = ((val*(*)(val* self))(var382->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var382); /* native_to_s on <var382:NativeArray[String]>*/
}
varonce381 = var382;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2358);
fatal_exit(1);
}
{
var396 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var395, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var396); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "to_i8";
var401 = (val*)(5l<<2|1);
var402 = (val*)(5l<<2|1);
var403 = (val*)((long)(0)<<2|3);
var404 = (val*)((long)(0)<<2|3);
var400 = core__flat___CString___to_s_unsafe(var399, var401, var402, var403, var404);
var398 = var400;
varonce397 = var398;
}
{
var405 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var398); /* == on <var_pname:String>*/
}
if (var405){
if (unlikely(varonce406==NULL)) {
var407 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce408!=NULL)) {
var409 = varonce408;
} else {
var410 = "(int8_t)";
var412 = (val*)(8l<<2|1);
var413 = (val*)(8l<<2|1);
var414 = (val*)((long)(0)<<2|3);
var415 = (val*)((long)(0)<<2|3);
var411 = core__flat___CString___to_s_unsafe(var410, var412, var413, var414, var415);
var409 = var411;
varonce408 = var409;
}
((struct instance_core__NativeArray*)var407)->values[0]=var409;
} else {
var407 = varonce406;
varonce406 = NULL;
}
{
var416 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var417 = ((val*(*)(val* self))(var416->class->vft[COLOR_core__abstract_text__Object__to_s]))(var416); /* to_s on <var416:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var407)->values[1]=var417;
{
var418 = ((val*(*)(val* self))(var407->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var407); /* native_to_s on <var407:NativeArray[String]>*/
}
varonce406 = var407;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2361);
fatal_exit(1);
}
{
var419 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var418, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var419); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce420!=NULL)) {
var421 = varonce420;
} else {
var422 = "to_i16";
var424 = (val*)(6l<<2|1);
var425 = (val*)(6l<<2|1);
var426 = (val*)((long)(0)<<2|3);
var427 = (val*)((long)(0)<<2|3);
var423 = core__flat___CString___to_s_unsafe(var422, var424, var425, var426, var427);
var421 = var423;
varonce420 = var421;
}
{
var428 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var421); /* == on <var_pname:String>*/
}
if (var428){
if (unlikely(varonce429==NULL)) {
var430 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce431!=NULL)) {
var432 = varonce431;
} else {
var433 = "(int16_t)";
var435 = (val*)(9l<<2|1);
var436 = (val*)(9l<<2|1);
var437 = (val*)((long)(0)<<2|3);
var438 = (val*)((long)(0)<<2|3);
var434 = core__flat___CString___to_s_unsafe(var433, var435, var436, var437, var438);
var432 = var434;
varonce431 = var432;
}
((struct instance_core__NativeArray*)var430)->values[0]=var432;
} else {
var430 = varonce429;
varonce429 = NULL;
}
{
var439 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var440 = ((val*(*)(val* self))(var439->class->vft[COLOR_core__abstract_text__Object__to_s]))(var439); /* to_s on <var439:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var430)->values[1]=var440;
{
var441 = ((val*(*)(val* self))(var430->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var430); /* native_to_s on <var430:NativeArray[String]>*/
}
varonce429 = var430;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2364);
fatal_exit(1);
}
{
var442 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var441, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var442); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "to_u16";
var447 = (val*)(6l<<2|1);
var448 = (val*)(6l<<2|1);
var449 = (val*)((long)(0)<<2|3);
var450 = (val*)((long)(0)<<2|3);
var446 = core__flat___CString___to_s_unsafe(var445, var447, var448, var449, var450);
var444 = var446;
varonce443 = var444;
}
{
var451 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var444); /* == on <var_pname:String>*/
}
if (var451){
if (unlikely(varonce452==NULL)) {
var453 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce454!=NULL)) {
var455 = varonce454;
} else {
var456 = "(uint16_t)";
var458 = (val*)(10l<<2|1);
var459 = (val*)(10l<<2|1);
var460 = (val*)((long)(0)<<2|3);
var461 = (val*)((long)(0)<<2|3);
var457 = core__flat___CString___to_s_unsafe(var456, var458, var459, var460, var461);
var455 = var457;
varonce454 = var455;
}
((struct instance_core__NativeArray*)var453)->values[0]=var455;
} else {
var453 = varonce452;
varonce452 = NULL;
}
{
var462 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var463 = ((val*(*)(val* self))(var462->class->vft[COLOR_core__abstract_text__Object__to_s]))(var462); /* to_s on <var462:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var453)->values[1]=var463;
{
var464 = ((val*(*)(val* self))(var453->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var453); /* native_to_s on <var453:NativeArray[String]>*/
}
varonce452 = var453;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2367);
fatal_exit(1);
}
{
var465 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var464, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var465); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce466!=NULL)) {
var467 = varonce466;
} else {
var468 = "to_i32";
var470 = (val*)(6l<<2|1);
var471 = (val*)(6l<<2|1);
var472 = (val*)((long)(0)<<2|3);
var473 = (val*)((long)(0)<<2|3);
var469 = core__flat___CString___to_s_unsafe(var468, var470, var471, var472, var473);
var467 = var469;
varonce466 = var467;
}
{
var474 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var467); /* == on <var_pname:String>*/
}
if (var474){
if (unlikely(varonce475==NULL)) {
var476 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce477!=NULL)) {
var478 = varonce477;
} else {
var479 = "(int32_t)";
var481 = (val*)(9l<<2|1);
var482 = (val*)(9l<<2|1);
var483 = (val*)((long)(0)<<2|3);
var484 = (val*)((long)(0)<<2|3);
var480 = core__flat___CString___to_s_unsafe(var479, var481, var482, var483, var484);
var478 = var480;
varonce477 = var478;
}
((struct instance_core__NativeArray*)var476)->values[0]=var478;
} else {
var476 = varonce475;
varonce475 = NULL;
}
{
var485 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var486 = ((val*(*)(val* self))(var485->class->vft[COLOR_core__abstract_text__Object__to_s]))(var485); /* to_s on <var485:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var476)->values[1]=var486;
{
var487 = ((val*(*)(val* self))(var476->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var476); /* native_to_s on <var476:NativeArray[String]>*/
}
varonce475 = var476;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2370);
fatal_exit(1);
}
{
var488 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var487, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var488); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce489!=NULL)) {
var490 = varonce489;
} else {
var491 = "to_u32";
var493 = (val*)(6l<<2|1);
var494 = (val*)(6l<<2|1);
var495 = (val*)((long)(0)<<2|3);
var496 = (val*)((long)(0)<<2|3);
var492 = core__flat___CString___to_s_unsafe(var491, var493, var494, var495, var496);
var490 = var492;
varonce489 = var490;
}
{
var497 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var490); /* == on <var_pname:String>*/
}
if (var497){
if (unlikely(varonce498==NULL)) {
var499 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce500!=NULL)) {
var501 = varonce500;
} else {
var502 = "(uint32_t)";
var504 = (val*)(10l<<2|1);
var505 = (val*)(10l<<2|1);
var506 = (val*)((long)(0)<<2|3);
var507 = (val*)((long)(0)<<2|3);
var503 = core__flat___CString___to_s_unsafe(var502, var504, var505, var506, var507);
var501 = var503;
varonce500 = var501;
}
((struct instance_core__NativeArray*)var499)->values[0]=var501;
} else {
var499 = varonce498;
varonce498 = NULL;
}
{
var508 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var509 = ((val*(*)(val* self))(var508->class->vft[COLOR_core__abstract_text__Object__to_s]))(var508); /* to_s on <var508:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var499)->values[1]=var509;
{
var510 = ((val*(*)(val* self))(var499->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var499); /* native_to_s on <var499:NativeArray[String]>*/
}
varonce498 = var499;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2373);
fatal_exit(1);
}
{
var511 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var510, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var511); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce512!=NULL)) {
var513 = varonce512;
} else {
var514 = "to_f";
var516 = (val*)(4l<<2|1);
var517 = (val*)(4l<<2|1);
var518 = (val*)((long)(0)<<2|3);
var519 = (val*)((long)(0)<<2|3);
var515 = core__flat___CString___to_s_unsafe(var514, var516, var517, var518, var519);
var513 = var515;
varonce512 = var513;
}
{
var520 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var513); /* == on <var_pname:String>*/
}
if (var520){
if (unlikely(varonce521==NULL)) {
var522 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce523!=NULL)) {
var524 = varonce523;
} else {
var525 = "(double)";
var527 = (val*)(8l<<2|1);
var528 = (val*)(8l<<2|1);
var529 = (val*)((long)(0)<<2|3);
var530 = (val*)((long)(0)<<2|3);
var526 = core__flat___CString___to_s_unsafe(var525, var527, var528, var529, var530);
var524 = var526;
varonce523 = var524;
}
((struct instance_core__NativeArray*)var522)->values[0]=var524;
} else {
var522 = varonce521;
varonce521 = NULL;
}
{
var531 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var532 = ((val*(*)(val* self))(var531->class->vft[COLOR_core__abstract_text__Object__to_s]))(var531); /* to_s on <var531:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var522)->values[1]=var532;
{
var533 = ((val*(*)(val* self))(var522->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var522); /* native_to_s on <var522:NativeArray[String]>*/
}
varonce521 = var522;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2376);
fatal_exit(1);
}
{
var534 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var533, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var534); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce535!=NULL)) {
var536 = varonce535;
} else {
var537 = "to_b";
var539 = (val*)(4l<<2|1);
var540 = (val*)(4l<<2|1);
var541 = (val*)((long)(0)<<2|3);
var542 = (val*)((long)(0)<<2|3);
var538 = core__flat___CString___to_s_unsafe(var537, var539, var540, var541, var542);
var536 = var538;
varonce535 = var536;
}
{
var543 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var536); /* == on <var_pname:String>*/
}
if (var543){
if (unlikely(varonce544==NULL)) {
var545 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce546!=NULL)) {
var547 = varonce546;
} else {
var548 = "(unsigned char)";
var550 = (val*)(15l<<2|1);
var551 = (val*)(15l<<2|1);
var552 = (val*)((long)(0)<<2|3);
var553 = (val*)((long)(0)<<2|3);
var549 = core__flat___CString___to_s_unsafe(var548, var550, var551, var552, var553);
var547 = var549;
varonce546 = var547;
}
((struct instance_core__NativeArray*)var545)->values[0]=var547;
} else {
var545 = varonce544;
varonce544 = NULL;
}
{
var554 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var555 = ((val*(*)(val* self))(var554->class->vft[COLOR_core__abstract_text__Object__to_s]))(var554); /* to_s on <var554:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var545)->values[1]=var555;
{
var556 = ((val*(*)(val* self))(var545->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var545); /* native_to_s on <var545:NativeArray[String]>*/
}
varonce544 = var545;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2379);
fatal_exit(1);
}
{
var557 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var556, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var557); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce558!=NULL)) {
var559 = varonce558;
} else {
var560 = "code_point";
var562 = (val*)(10l<<2|1);
var563 = (val*)(10l<<2|1);
var564 = (val*)((long)(0)<<2|3);
var565 = (val*)((long)(0)<<2|3);
var561 = core__flat___CString___to_s_unsafe(var560, var562, var563, var564, var565);
var559 = var561;
varonce558 = var559;
}
{
var566 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var559); /* == on <var_pname:String>*/
}
if (var566){
if (unlikely(varonce567==NULL)) {
var568 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce569!=NULL)) {
var570 = varonce569;
} else {
var571 = "(uint32_t)";
var573 = (val*)(10l<<2|1);
var574 = (val*)(10l<<2|1);
var575 = (val*)((long)(0)<<2|3);
var576 = (val*)((long)(0)<<2|3);
var572 = core__flat___CString___to_s_unsafe(var571, var573, var574, var575, var576);
var570 = var572;
varonce569 = var570;
}
((struct instance_core__NativeArray*)var568)->values[0]=var570;
} else {
var568 = varonce567;
varonce567 = NULL;
}
{
var577 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var578 = ((val*(*)(val* self))(var577->class->vft[COLOR_core__abstract_text__Object__to_s]))(var577); /* to_s on <var577:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var568)->values[1]=var578;
{
var579 = ((val*(*)(val* self))(var568->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var568); /* native_to_s on <var568:NativeArray[String]>*/
}
varonce567 = var568;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2382);
fatal_exit(1);
}
{
var580 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var579, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var580); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce581!=NULL)) {
var582 = varonce581;
} else {
var583 = "&";
var585 = (val*)(1l<<2|1);
var586 = (val*)(1l<<2|1);
var587 = (val*)((long)(0)<<2|3);
var588 = (val*)((long)(0)<<2|3);
var584 = core__flat___CString___to_s_unsafe(var583, var585, var586, var587, var588);
var582 = var584;
varonce581 = var582;
}
{
var589 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var582); /* == on <var_pname:String>*/
}
if (var589){
if (unlikely(varonce590==NULL)) {
var591 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce592!=NULL)) {
var593 = varonce592;
} else {
var594 = " & ";
var596 = (val*)(3l<<2|1);
var597 = (val*)(3l<<2|1);
var598 = (val*)((long)(0)<<2|3);
var599 = (val*)((long)(0)<<2|3);
var595 = core__flat___CString___to_s_unsafe(var594, var596, var597, var598, var599);
var593 = var595;
varonce592 = var593;
}
((struct instance_core__NativeArray*)var591)->values[1]=var593;
} else {
var591 = varonce590;
varonce590 = NULL;
}
{
var600 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var601 = ((val*(*)(val* self))(var600->class->vft[COLOR_core__abstract_text__Object__to_s]))(var600); /* to_s on <var600:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var591)->values[0]=var601;
{
var602 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var603 = ((val*(*)(val* self))(var602->class->vft[COLOR_core__abstract_text__Object__to_s]))(var602); /* to_s on <var602:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var591)->values[2]=var603;
{
var604 = ((val*(*)(val* self))(var591->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var591); /* native_to_s on <var591:NativeArray[String]>*/
}
varonce590 = var591;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2385);
fatal_exit(1);
}
{
var605 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var604, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var605); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce606!=NULL)) {
var607 = varonce606;
} else {
var608 = "|";
var610 = (val*)(1l<<2|1);
var611 = (val*)(1l<<2|1);
var612 = (val*)((long)(0)<<2|3);
var613 = (val*)((long)(0)<<2|3);
var609 = core__flat___CString___to_s_unsafe(var608, var610, var611, var612, var613);
var607 = var609;
varonce606 = var607;
}
{
var614 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var607); /* == on <var_pname:String>*/
}
if (var614){
if (unlikely(varonce615==NULL)) {
var616 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce617!=NULL)) {
var618 = varonce617;
} else {
var619 = " | ";
var621 = (val*)(3l<<2|1);
var622 = (val*)(3l<<2|1);
var623 = (val*)((long)(0)<<2|3);
var624 = (val*)((long)(0)<<2|3);
var620 = core__flat___CString___to_s_unsafe(var619, var621, var622, var623, var624);
var618 = var620;
varonce617 = var618;
}
((struct instance_core__NativeArray*)var616)->values[1]=var618;
} else {
var616 = varonce615;
varonce615 = NULL;
}
{
var625 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var626 = ((val*(*)(val* self))(var625->class->vft[COLOR_core__abstract_text__Object__to_s]))(var625); /* to_s on <var625:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var616)->values[0]=var626;
{
var627 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var628 = ((val*(*)(val* self))(var627->class->vft[COLOR_core__abstract_text__Object__to_s]))(var627); /* to_s on <var627:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var616)->values[2]=var628;
{
var629 = ((val*(*)(val* self))(var616->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var616); /* native_to_s on <var616:NativeArray[String]>*/
}
varonce615 = var616;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2388);
fatal_exit(1);
}
{
var630 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var629, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var630); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce631!=NULL)) {
var632 = varonce631;
} else {
var633 = ">>";
var635 = (val*)(2l<<2|1);
var636 = (val*)(2l<<2|1);
var637 = (val*)((long)(0)<<2|3);
var638 = (val*)((long)(0)<<2|3);
var634 = core__flat___CString___to_s_unsafe(var633, var635, var636, var637, var638);
var632 = var634;
varonce631 = var632;
}
{
var639 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var632); /* == on <var_pname:String>*/
}
if (var639){
if (unlikely(varonce640==NULL)) {
var641 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce642!=NULL)) {
var643 = varonce642;
} else {
var644 = " >> ";
var646 = (val*)(4l<<2|1);
var647 = (val*)(4l<<2|1);
var648 = (val*)((long)(0)<<2|3);
var649 = (val*)((long)(0)<<2|3);
var645 = core__flat___CString___to_s_unsafe(var644, var646, var647, var648, var649);
var643 = var645;
varonce642 = var643;
}
((struct instance_core__NativeArray*)var641)->values[1]=var643;
} else {
var641 = varonce640;
varonce640 = NULL;
}
{
var650 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var651 = ((val*(*)(val* self))(var650->class->vft[COLOR_core__abstract_text__Object__to_s]))(var650); /* to_s on <var650:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var641)->values[0]=var651;
{
var652 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var653 = ((val*(*)(val* self))(var652->class->vft[COLOR_core__abstract_text__Object__to_s]))(var652); /* to_s on <var652:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var641)->values[2]=var653;
{
var654 = ((val*(*)(val* self))(var641->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var641); /* native_to_s on <var641:NativeArray[String]>*/
}
varonce640 = var641;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2391);
fatal_exit(1);
}
{
var655 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var654, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var655); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce656!=NULL)) {
var657 = varonce656;
} else {
var658 = "<<";
var660 = (val*)(2l<<2|1);
var661 = (val*)(2l<<2|1);
var662 = (val*)((long)(0)<<2|3);
var663 = (val*)((long)(0)<<2|3);
var659 = core__flat___CString___to_s_unsafe(var658, var660, var661, var662, var663);
var657 = var659;
varonce656 = var657;
}
{
var664 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var657); /* == on <var_pname:String>*/
}
if (var664){
if (unlikely(varonce665==NULL)) {
var666 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce667!=NULL)) {
var668 = varonce667;
} else {
var669 = " << ";
var671 = (val*)(4l<<2|1);
var672 = (val*)(4l<<2|1);
var673 = (val*)((long)(0)<<2|3);
var674 = (val*)((long)(0)<<2|3);
var670 = core__flat___CString___to_s_unsafe(var669, var671, var672, var673, var674);
var668 = var670;
varonce667 = var668;
}
((struct instance_core__NativeArray*)var666)->values[1]=var668;
} else {
var666 = varonce665;
varonce665 = NULL;
}
{
var675 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var676 = ((val*(*)(val* self))(var675->class->vft[COLOR_core__abstract_text__Object__to_s]))(var675); /* to_s on <var675:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var666)->values[0]=var676;
{
var677 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var678 = ((val*(*)(val* self))(var677->class->vft[COLOR_core__abstract_text__Object__to_s]))(var677); /* to_s on <var677:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var666)->values[2]=var678;
{
var679 = ((val*(*)(val* self))(var666->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var666); /* native_to_s on <var666:NativeArray[String]>*/
}
varonce665 = var666;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2394);
fatal_exit(1);
}
{
var680 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var679, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var680); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce681!=NULL)) {
var682 = varonce681;
} else {
var683 = "Char";
var685 = (val*)(4l<<2|1);
var686 = (val*)(4l<<2|1);
var687 = (val*)((long)(0)<<2|3);
var688 = (val*)((long)(0)<<2|3);
var684 = core__flat___CString___to_s_unsafe(var683, var685, var686, var687, var688);
var682 = var684;
varonce681 = var682;
}
{
var689 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var682); /* == on <var_cname:String>*/
}
if (var689){
if (likely(varonce690!=NULL)) {
var691 = varonce690;
} else {
var692 = "object_id";
var694 = (val*)(9l<<2|1);
var695 = (val*)(9l<<2|1);
var696 = (val*)((long)(0)<<2|3);
var697 = (val*)((long)(0)<<2|3);
var693 = core__flat___CString___to_s_unsafe(var692, var694, var695, var696, var697);
var691 = var693;
varonce690 = var691;
}
{
var698 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var691); /* == on <var_pname:String>*/
}
if (var698){
if (unlikely(varonce699==NULL)) {
var700 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce701!=NULL)) {
var702 = varonce701;
} else {
var703 = "(long)";
var705 = (val*)(6l<<2|1);
var706 = (val*)(6l<<2|1);
var707 = (val*)((long)(0)<<2|3);
var708 = (val*)((long)(0)<<2|3);
var704 = core__flat___CString___to_s_unsafe(var703, var705, var706, var707, var708);
var702 = var704;
varonce701 = var702;
}
((struct instance_core__NativeArray*)var700)->values[0]=var702;
} else {
var700 = varonce699;
varonce699 = NULL;
}
{
var709 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var710 = ((val*(*)(val* self))(var709->class->vft[COLOR_core__abstract_text__Object__to_s]))(var709); /* to_s on <var709:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var700)->values[1]=var710;
{
var711 = ((val*(*)(val* self))(var700->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var700); /* native_to_s on <var700:NativeArray[String]>*/
}
varonce699 = var700;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2399);
fatal_exit(1);
}
{
var712 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var711, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var712); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce713!=NULL)) {
var714 = varonce713;
} else {
var715 = "successor";
var717 = (val*)(9l<<2|1);
var718 = (val*)(9l<<2|1);
var719 = (val*)((long)(0)<<2|3);
var720 = (val*)((long)(0)<<2|3);
var716 = core__flat___CString___to_s_unsafe(var715, var717, var718, var719, var720);
var714 = var716;
varonce713 = var714;
}
{
var721 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var714); /* == on <var_pname:String>*/
}
if (var721){
if (unlikely(varonce722==NULL)) {
var723 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce724!=NULL)) {
var725 = varonce724;
} else {
var726 = " + ";
var728 = (val*)(3l<<2|1);
var729 = (val*)(3l<<2|1);
var730 = (val*)((long)(0)<<2|3);
var731 = (val*)((long)(0)<<2|3);
var727 = core__flat___CString___to_s_unsafe(var726, var728, var729, var730, var731);
var725 = var727;
varonce724 = var725;
}
((struct instance_core__NativeArray*)var723)->values[1]=var725;
} else {
var723 = varonce722;
varonce722 = NULL;
}
{
var732 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var733 = ((val*(*)(val* self))(var732->class->vft[COLOR_core__abstract_text__Object__to_s]))(var732); /* to_s on <var732:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var723)->values[0]=var733;
{
var734 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var735 = ((val*(*)(val* self))(var734->class->vft[COLOR_core__abstract_text__Object__to_s]))(var734); /* to_s on <var734:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var723)->values[2]=var735;
{
var736 = ((val*(*)(val* self))(var723->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var723); /* native_to_s on <var723:NativeArray[String]>*/
}
varonce722 = var723;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2402);
fatal_exit(1);
}
{
var737 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var736, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var737); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce738!=NULL)) {
var739 = varonce738;
} else {
var740 = "predecessor";
var742 = (val*)(11l<<2|1);
var743 = (val*)(11l<<2|1);
var744 = (val*)((long)(0)<<2|3);
var745 = (val*)((long)(0)<<2|3);
var741 = core__flat___CString___to_s_unsafe(var740, var742, var743, var744, var745);
var739 = var741;
varonce738 = var739;
}
{
var746 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var739); /* == on <var_pname:String>*/
}
if (var746){
if (unlikely(varonce747==NULL)) {
var748 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce749!=NULL)) {
var750 = varonce749;
} else {
var751 = " - ";
var753 = (val*)(3l<<2|1);
var754 = (val*)(3l<<2|1);
var755 = (val*)((long)(0)<<2|3);
var756 = (val*)((long)(0)<<2|3);
var752 = core__flat___CString___to_s_unsafe(var751, var753, var754, var755, var756);
var750 = var752;
varonce749 = var750;
}
((struct instance_core__NativeArray*)var748)->values[1]=var750;
} else {
var748 = varonce747;
varonce747 = NULL;
}
{
var757 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var758 = ((val*(*)(val* self))(var757->class->vft[COLOR_core__abstract_text__Object__to_s]))(var757); /* to_s on <var757:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var748)->values[0]=var758;
{
var759 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var760 = ((val*(*)(val* self))(var759->class->vft[COLOR_core__abstract_text__Object__to_s]))(var759); /* to_s on <var759:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var748)->values[2]=var760;
{
var761 = ((val*(*)(val* self))(var748->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var748); /* native_to_s on <var748:NativeArray[String]>*/
}
varonce747 = var748;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2405);
fatal_exit(1);
}
{
var762 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var761, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var762); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce763!=NULL)) {
var764 = varonce763;
} else {
var765 = "==";
var767 = (val*)(2l<<2|1);
var768 = (val*)(2l<<2|1);
var769 = (val*)((long)(0)<<2|3);
var770 = (val*)((long)(0)<<2|3);
var766 = core__flat___CString___to_s_unsafe(var765, var767, var768, var769, var770);
var764 = var766;
varonce763 = var764;
}
{
var771 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var764); /* == on <var_pname:String>*/
}
if (var771){
{
var772 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var773 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var774 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var772, var773);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var774); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce775!=NULL)) {
var776 = varonce775;
} else {
var777 = "!=";
var779 = (val*)(2l<<2|1);
var780 = (val*)(2l<<2|1);
var781 = (val*)((long)(0)<<2|3);
var782 = (val*)((long)(0)<<2|3);
var778 = core__flat___CString___to_s_unsafe(var777, var779, var780, var781, var782);
var776 = var778;
varonce775 = var776;
}
{
var783 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var776); /* == on <var_pname:String>*/
}
if (var783){
{
var784 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var785 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var786 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var784, var785);
}
var_res787 = var786;
if (unlikely(varonce788==NULL)) {
var789 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce790!=NULL)) {
var791 = varonce790;
} else {
var792 = "!";
var794 = (val*)(1l<<2|1);
var795 = (val*)(1l<<2|1);
var796 = (val*)((long)(0)<<2|3);
var797 = (val*)((long)(0)<<2|3);
var793 = core__flat___CString___to_s_unsafe(var792, var794, var795, var796, var797);
var791 = var793;
varonce790 = var791;
}
((struct instance_core__NativeArray*)var789)->values[0]=var791;
} else {
var789 = varonce788;
varonce788 = NULL;
}
{
var798 = ((val*(*)(val* self))(var_res787->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res787); /* to_s on <var_res787:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var789)->values[1]=var798;
{
var799 = ((val*(*)(val* self))(var789->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var789); /* native_to_s on <var789:NativeArray[String]>*/
}
varonce788 = var789;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2412);
fatal_exit(1);
}
{
var800 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var799, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var800); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce801!=NULL)) {
var802 = varonce801;
} else {
var803 = "<";
var805 = (val*)(1l<<2|1);
var806 = (val*)(1l<<2|1);
var807 = (val*)((long)(0)<<2|3);
var808 = (val*)((long)(0)<<2|3);
var804 = core__flat___CString___to_s_unsafe(var803, var805, var806, var807, var808);
var802 = var804;
varonce801 = var802;
}
{
var809 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var802); /* == on <var_pname:String>*/
}
if (var809){
if (unlikely(varonce810==NULL)) {
var811 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce812!=NULL)) {
var813 = varonce812;
} else {
var814 = " < ";
var816 = (val*)(3l<<2|1);
var817 = (val*)(3l<<2|1);
var818 = (val*)((long)(0)<<2|3);
var819 = (val*)((long)(0)<<2|3);
var815 = core__flat___CString___to_s_unsafe(var814, var816, var817, var818, var819);
var813 = var815;
varonce812 = var813;
}
((struct instance_core__NativeArray*)var811)->values[1]=var813;
} else {
var811 = varonce810;
varonce810 = NULL;
}
{
var820 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var821 = ((val*(*)(val* self))(var820->class->vft[COLOR_core__abstract_text__Object__to_s]))(var820); /* to_s on <var820:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var811)->values[0]=var821;
{
var822 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var823 = ((val*(*)(val* self))(var822->class->vft[COLOR_core__abstract_text__Object__to_s]))(var822); /* to_s on <var822:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var811)->values[2]=var823;
{
var824 = ((val*(*)(val* self))(var811->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var811); /* native_to_s on <var811:NativeArray[String]>*/
}
varonce810 = var811;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2415);
fatal_exit(1);
}
{
var825 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var824, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var825); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce826!=NULL)) {
var827 = varonce826;
} else {
var828 = ">";
var830 = (val*)(1l<<2|1);
var831 = (val*)(1l<<2|1);
var832 = (val*)((long)(0)<<2|3);
var833 = (val*)((long)(0)<<2|3);
var829 = core__flat___CString___to_s_unsafe(var828, var830, var831, var832, var833);
var827 = var829;
varonce826 = var827;
}
{
var834 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var827); /* == on <var_pname:String>*/
}
if (var834){
if (unlikely(varonce835==NULL)) {
var836 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce837!=NULL)) {
var838 = varonce837;
} else {
var839 = " > ";
var841 = (val*)(3l<<2|1);
var842 = (val*)(3l<<2|1);
var843 = (val*)((long)(0)<<2|3);
var844 = (val*)((long)(0)<<2|3);
var840 = core__flat___CString___to_s_unsafe(var839, var841, var842, var843, var844);
var838 = var840;
varonce837 = var838;
}
((struct instance_core__NativeArray*)var836)->values[1]=var838;
} else {
var836 = varonce835;
varonce835 = NULL;
}
{
var845 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var846 = ((val*(*)(val* self))(var845->class->vft[COLOR_core__abstract_text__Object__to_s]))(var845); /* to_s on <var845:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var836)->values[0]=var846;
{
var847 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var848 = ((val*(*)(val* self))(var847->class->vft[COLOR_core__abstract_text__Object__to_s]))(var847); /* to_s on <var847:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var836)->values[2]=var848;
{
var849 = ((val*(*)(val* self))(var836->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var836); /* native_to_s on <var836:NativeArray[String]>*/
}
varonce835 = var836;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2418);
fatal_exit(1);
}
{
var850 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var849, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var850); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce851!=NULL)) {
var852 = varonce851;
} else {
var853 = "<=";
var855 = (val*)(2l<<2|1);
var856 = (val*)(2l<<2|1);
var857 = (val*)((long)(0)<<2|3);
var858 = (val*)((long)(0)<<2|3);
var854 = core__flat___CString___to_s_unsafe(var853, var855, var856, var857, var858);
var852 = var854;
varonce851 = var852;
}
{
var859 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var852); /* == on <var_pname:String>*/
}
if (var859){
if (unlikely(varonce860==NULL)) {
var861 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce862!=NULL)) {
var863 = varonce862;
} else {
var864 = " <= ";
var866 = (val*)(4l<<2|1);
var867 = (val*)(4l<<2|1);
var868 = (val*)((long)(0)<<2|3);
var869 = (val*)((long)(0)<<2|3);
var865 = core__flat___CString___to_s_unsafe(var864, var866, var867, var868, var869);
var863 = var865;
varonce862 = var863;
}
((struct instance_core__NativeArray*)var861)->values[1]=var863;
} else {
var861 = varonce860;
varonce860 = NULL;
}
{
var870 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var871 = ((val*(*)(val* self))(var870->class->vft[COLOR_core__abstract_text__Object__to_s]))(var870); /* to_s on <var870:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var861)->values[0]=var871;
{
var872 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var873 = ((val*(*)(val* self))(var872->class->vft[COLOR_core__abstract_text__Object__to_s]))(var872); /* to_s on <var872:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var861)->values[2]=var873;
{
var874 = ((val*(*)(val* self))(var861->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var861); /* native_to_s on <var861:NativeArray[String]>*/
}
varonce860 = var861;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2421);
fatal_exit(1);
}
{
var875 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var874, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var875); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce876!=NULL)) {
var877 = varonce876;
} else {
var878 = ">=";
var880 = (val*)(2l<<2|1);
var881 = (val*)(2l<<2|1);
var882 = (val*)((long)(0)<<2|3);
var883 = (val*)((long)(0)<<2|3);
var879 = core__flat___CString___to_s_unsafe(var878, var880, var881, var882, var883);
var877 = var879;
varonce876 = var877;
}
{
var884 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var877); /* == on <var_pname:String>*/
}
if (var884){
if (unlikely(varonce885==NULL)) {
var886 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce887!=NULL)) {
var888 = varonce887;
} else {
var889 = " >= ";
var891 = (val*)(4l<<2|1);
var892 = (val*)(4l<<2|1);
var893 = (val*)((long)(0)<<2|3);
var894 = (val*)((long)(0)<<2|3);
var890 = core__flat___CString___to_s_unsafe(var889, var891, var892, var893, var894);
var888 = var890;
varonce887 = var888;
}
((struct instance_core__NativeArray*)var886)->values[1]=var888;
} else {
var886 = varonce885;
varonce885 = NULL;
}
{
var895 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var896 = ((val*(*)(val* self))(var895->class->vft[COLOR_core__abstract_text__Object__to_s]))(var895); /* to_s on <var895:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var886)->values[0]=var896;
{
var897 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var898 = ((val*(*)(val* self))(var897->class->vft[COLOR_core__abstract_text__Object__to_s]))(var897); /* to_s on <var897:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var886)->values[2]=var898;
{
var899 = ((val*(*)(val* self))(var886->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var886); /* native_to_s on <var886:NativeArray[String]>*/
}
varonce885 = var886;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2424);
fatal_exit(1);
}
{
var900 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var899, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var900); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce901!=NULL)) {
var902 = varonce901;
} else {
var903 = "to_i";
var905 = (val*)(4l<<2|1);
var906 = (val*)(4l<<2|1);
var907 = (val*)((long)(0)<<2|3);
var908 = (val*)((long)(0)<<2|3);
var904 = core__flat___CString___to_s_unsafe(var903, var905, var906, var907, var908);
var902 = var904;
varonce901 = var902;
}
{
var909 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var902); /* == on <var_pname:String>*/
}
if (var909){
if (unlikely(varonce910==NULL)) {
var911 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce912!=NULL)) {
var913 = varonce912;
} else {
var914 = "-\'0\'";
var916 = (val*)(4l<<2|1);
var917 = (val*)(4l<<2|1);
var918 = (val*)((long)(0)<<2|3);
var919 = (val*)((long)(0)<<2|3);
var915 = core__flat___CString___to_s_unsafe(var914, var916, var917, var918, var919);
var913 = var915;
varonce912 = var913;
}
((struct instance_core__NativeArray*)var911)->values[1]=var913;
} else {
var911 = varonce910;
varonce910 = NULL;
}
{
var920 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var921 = ((val*(*)(val* self))(var920->class->vft[COLOR_core__abstract_text__Object__to_s]))(var920); /* to_s on <var920:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var911)->values[0]=var921;
{
var922 = ((val*(*)(val* self))(var911->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var911); /* native_to_s on <var911:NativeArray[String]>*/
}
varonce910 = var911;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2427);
fatal_exit(1);
}
{
var923 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var922, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var923); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce924!=NULL)) {
var925 = varonce924;
} else {
var926 = "code_point";
var928 = (val*)(10l<<2|1);
var929 = (val*)(10l<<2|1);
var930 = (val*)((long)(0)<<2|3);
var931 = (val*)((long)(0)<<2|3);
var927 = core__flat___CString___to_s_unsafe(var926, var928, var929, var930, var931);
var925 = var927;
varonce924 = var925;
}
{
var932 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var925); /* == on <var_pname:String>*/
}
if (var932){
if (unlikely(varonce933==NULL)) {
var934 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce935!=NULL)) {
var936 = varonce935;
} else {
var937 = "(long)";
var939 = (val*)(6l<<2|1);
var940 = (val*)(6l<<2|1);
var941 = (val*)((long)(0)<<2|3);
var942 = (val*)((long)(0)<<2|3);
var938 = core__flat___CString___to_s_unsafe(var937, var939, var940, var941, var942);
var936 = var938;
varonce935 = var936;
}
((struct instance_core__NativeArray*)var934)->values[0]=var936;
} else {
var934 = varonce933;
varonce933 = NULL;
}
{
var943 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var944 = ((val*(*)(val* self))(var943->class->vft[COLOR_core__abstract_text__Object__to_s]))(var943); /* to_s on <var943:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var934)->values[1]=var944;
{
var945 = ((val*(*)(val* self))(var934->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var934); /* native_to_s on <var934:NativeArray[String]>*/
}
varonce933 = var934;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2430);
fatal_exit(1);
}
{
var946 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var945, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var946); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce947!=NULL)) {
var948 = varonce947;
} else {
var949 = "Byte";
var951 = (val*)(4l<<2|1);
var952 = (val*)(4l<<2|1);
var953 = (val*)((long)(0)<<2|3);
var954 = (val*)((long)(0)<<2|3);
var950 = core__flat___CString___to_s_unsafe(var949, var951, var952, var953, var954);
var948 = var950;
varonce947 = var948;
}
{
var955 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var948); /* == on <var_cname:String>*/
}
if (var955){
if (likely(varonce956!=NULL)) {
var957 = varonce956;
} else {
var958 = "output";
var960 = (val*)(6l<<2|1);
var961 = (val*)(6l<<2|1);
var962 = (val*)((long)(0)<<2|3);
var963 = (val*)((long)(0)<<2|3);
var959 = core__flat___CString___to_s_unsafe(var958, var960, var961, var962, var963);
var957 = var959;
varonce956 = var957;
}
{
var964 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var957); /* == on <var_pname:String>*/
}
if (var964){
if (unlikely(varonce965==NULL)) {
var966 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce967!=NULL)) {
var968 = varonce967;
} else {
var969 = "printf(\"%x\\n\", ";
var971 = (val*)(15l<<2|1);
var972 = (val*)(15l<<2|1);
var973 = (val*)((long)(0)<<2|3);
var974 = (val*)((long)(0)<<2|3);
var970 = core__flat___CString___to_s_unsafe(var969, var971, var972, var973, var974);
var968 = var970;
varonce967 = var968;
}
((struct instance_core__NativeArray*)var966)->values[0]=var968;
if (likely(varonce975!=NULL)) {
var976 = varonce975;
} else {
var977 = ");";
var979 = (val*)(2l<<2|1);
var980 = (val*)(2l<<2|1);
var981 = (val*)((long)(0)<<2|3);
var982 = (val*)((long)(0)<<2|3);
var978 = core__flat___CString___to_s_unsafe(var977, var979, var980, var981, var982);
var976 = var978;
varonce975 = var976;
}
((struct instance_core__NativeArray*)var966)->values[2]=var976;
} else {
var966 = varonce965;
varonce965 = NULL;
}
{
var983 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var984 = ((val*(*)(val* self))(var983->class->vft[COLOR_core__abstract_text__Object__to_s]))(var983); /* to_s on <var983:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var966)->values[1]=var984;
{
var985 = ((val*(*)(val* self))(var966->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var966); /* native_to_s on <var966:NativeArray[String]>*/
}
varonce965 = var966;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var985); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce986!=NULL)) {
var987 = varonce986;
} else {
var988 = "object_id";
var990 = (val*)(9l<<2|1);
var991 = (val*)(9l<<2|1);
var992 = (val*)((long)(0)<<2|3);
var993 = (val*)((long)(0)<<2|3);
var989 = core__flat___CString___to_s_unsafe(var988, var990, var991, var992, var993);
var987 = var989;
varonce986 = var987;
}
{
var994 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var987); /* == on <var_pname:String>*/
}
if (var994){
if (unlikely(varonce995==NULL)) {
var996 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce997!=NULL)) {
var998 = varonce997;
} else {
var999 = "(long)";
var1001 = (val*)(6l<<2|1);
var1002 = (val*)(6l<<2|1);
var1003 = (val*)((long)(0)<<2|3);
var1004 = (val*)((long)(0)<<2|3);
var1000 = core__flat___CString___to_s_unsafe(var999, var1001, var1002, var1003, var1004);
var998 = var1000;
varonce997 = var998;
}
((struct instance_core__NativeArray*)var996)->values[0]=var998;
} else {
var996 = varonce995;
varonce995 = NULL;
}
{
var1005 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1006 = ((val*(*)(val* self))(var1005->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1005); /* to_s on <var1005:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var996)->values[1]=var1006;
{
var1007 = ((val*(*)(val* self))(var996->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var996); /* native_to_s on <var996:NativeArray[String]>*/
}
varonce995 = var996;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2438);
fatal_exit(1);
}
{
var1008 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1007, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1008); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1009!=NULL)) {
var1010 = varonce1009;
} else {
var1011 = "+";
var1013 = (val*)(1l<<2|1);
var1014 = (val*)(1l<<2|1);
var1015 = (val*)((long)(0)<<2|3);
var1016 = (val*)((long)(0)<<2|3);
var1012 = core__flat___CString___to_s_unsafe(var1011, var1013, var1014, var1015, var1016);
var1010 = var1012;
varonce1009 = var1010;
}
{
var1017 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1010); /* == on <var_pname:String>*/
}
if (var1017){
if (unlikely(varonce1018==NULL)) {
var1019 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1020!=NULL)) {
var1021 = varonce1020;
} else {
var1022 = " + ";
var1024 = (val*)(3l<<2|1);
var1025 = (val*)(3l<<2|1);
var1026 = (val*)((long)(0)<<2|3);
var1027 = (val*)((long)(0)<<2|3);
var1023 = core__flat___CString___to_s_unsafe(var1022, var1024, var1025, var1026, var1027);
var1021 = var1023;
varonce1020 = var1021;
}
((struct instance_core__NativeArray*)var1019)->values[1]=var1021;
} else {
var1019 = varonce1018;
varonce1018 = NULL;
}
{
var1028 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1029 = ((val*(*)(val* self))(var1028->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1028); /* to_s on <var1028:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1019)->values[0]=var1029;
{
var1030 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1031 = ((val*(*)(val* self))(var1030->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1030); /* to_s on <var1030:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1019)->values[2]=var1031;
{
var1032 = ((val*(*)(val* self))(var1019->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1019); /* native_to_s on <var1019:NativeArray[String]>*/
}
varonce1018 = var1019;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2441);
fatal_exit(1);
}
{
var1033 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1032, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1033); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1034!=NULL)) {
var1035 = varonce1034;
} else {
var1036 = "-";
var1038 = (val*)(1l<<2|1);
var1039 = (val*)(1l<<2|1);
var1040 = (val*)((long)(0)<<2|3);
var1041 = (val*)((long)(0)<<2|3);
var1037 = core__flat___CString___to_s_unsafe(var1036, var1038, var1039, var1040, var1041);
var1035 = var1037;
varonce1034 = var1035;
}
{
var1042 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1035); /* == on <var_pname:String>*/
}
if (var1042){
if (unlikely(varonce1043==NULL)) {
var1044 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1045!=NULL)) {
var1046 = varonce1045;
} else {
var1047 = " - ";
var1049 = (val*)(3l<<2|1);
var1050 = (val*)(3l<<2|1);
var1051 = (val*)((long)(0)<<2|3);
var1052 = (val*)((long)(0)<<2|3);
var1048 = core__flat___CString___to_s_unsafe(var1047, var1049, var1050, var1051, var1052);
var1046 = var1048;
varonce1045 = var1046;
}
((struct instance_core__NativeArray*)var1044)->values[1]=var1046;
} else {
var1044 = varonce1043;
varonce1043 = NULL;
}
{
var1053 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1054 = ((val*(*)(val* self))(var1053->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1053); /* to_s on <var1053:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1044)->values[0]=var1054;
{
var1055 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1056 = ((val*(*)(val* self))(var1055->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1055); /* to_s on <var1055:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1044)->values[2]=var1056;
{
var1057 = ((val*(*)(val* self))(var1044->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1044); /* native_to_s on <var1044:NativeArray[String]>*/
}
varonce1043 = var1044;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2444);
fatal_exit(1);
}
{
var1058 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1057, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1058); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1059!=NULL)) {
var1060 = varonce1059;
} else {
var1061 = "unary -";
var1063 = (val*)(7l<<2|1);
var1064 = (val*)(7l<<2|1);
var1065 = (val*)((long)(0)<<2|3);
var1066 = (val*)((long)(0)<<2|3);
var1062 = core__flat___CString___to_s_unsafe(var1061, var1063, var1064, var1065, var1066);
var1060 = var1062;
varonce1059 = var1060;
}
{
var1067 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1060); /* == on <var_pname:String>*/
}
if (var1067){
if (unlikely(varonce1068==NULL)) {
var1069 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1070!=NULL)) {
var1071 = varonce1070;
} else {
var1072 = "-";
var1074 = (val*)(1l<<2|1);
var1075 = (val*)(1l<<2|1);
var1076 = (val*)((long)(0)<<2|3);
var1077 = (val*)((long)(0)<<2|3);
var1073 = core__flat___CString___to_s_unsafe(var1072, var1074, var1075, var1076, var1077);
var1071 = var1073;
varonce1070 = var1071;
}
((struct instance_core__NativeArray*)var1069)->values[0]=var1071;
} else {
var1069 = varonce1068;
varonce1068 = NULL;
}
{
var1078 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1079 = ((val*(*)(val* self))(var1078->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1078); /* to_s on <var1078:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1069)->values[1]=var1079;
{
var1080 = ((val*(*)(val* self))(var1069->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1069); /* native_to_s on <var1069:NativeArray[String]>*/
}
varonce1068 = var1069;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2447);
fatal_exit(1);
}
{
var1081 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1080, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1081); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1082!=NULL)) {
var1083 = varonce1082;
} else {
var1084 = "unary +";
var1086 = (val*)(7l<<2|1);
var1087 = (val*)(7l<<2|1);
var1088 = (val*)((long)(0)<<2|3);
var1089 = (val*)((long)(0)<<2|3);
var1085 = core__flat___CString___to_s_unsafe(var1084, var1086, var1087, var1088, var1089);
var1083 = var1085;
varonce1082 = var1083;
}
{
var1090 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1083); /* == on <var_pname:String>*/
}
if (var1090){
{
var1091 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1091); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1092!=NULL)) {
var1093 = varonce1092;
} else {
var1094 = "*";
var1096 = (val*)(1l<<2|1);
var1097 = (val*)(1l<<2|1);
var1098 = (val*)((long)(0)<<2|3);
var1099 = (val*)((long)(0)<<2|3);
var1095 = core__flat___CString___to_s_unsafe(var1094, var1096, var1097, var1098, var1099);
var1093 = var1095;
varonce1092 = var1093;
}
{
var1100 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1093); /* == on <var_pname:String>*/
}
if (var1100){
if (unlikely(varonce1101==NULL)) {
var1102 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1103!=NULL)) {
var1104 = varonce1103;
} else {
var1105 = " * ";
var1107 = (val*)(3l<<2|1);
var1108 = (val*)(3l<<2|1);
var1109 = (val*)((long)(0)<<2|3);
var1110 = (val*)((long)(0)<<2|3);
var1106 = core__flat___CString___to_s_unsafe(var1105, var1107, var1108, var1109, var1110);
var1104 = var1106;
varonce1103 = var1104;
}
((struct instance_core__NativeArray*)var1102)->values[1]=var1104;
} else {
var1102 = varonce1101;
varonce1101 = NULL;
}
{
var1111 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1112 = ((val*(*)(val* self))(var1111->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1111); /* to_s on <var1111:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1102)->values[0]=var1112;
{
var1113 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1114 = ((val*(*)(val* self))(var1113->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1113); /* to_s on <var1113:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1102)->values[2]=var1114;
{
var1115 = ((val*(*)(val* self))(var1102->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1102); /* native_to_s on <var1102:NativeArray[String]>*/
}
varonce1101 = var1102;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2453);
fatal_exit(1);
}
{
var1116 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1115, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1116); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1117!=NULL)) {
var1118 = varonce1117;
} else {
var1119 = "/";
var1121 = (val*)(1l<<2|1);
var1122 = (val*)(1l<<2|1);
var1123 = (val*)((long)(0)<<2|3);
var1124 = (val*)((long)(0)<<2|3);
var1120 = core__flat___CString___to_s_unsafe(var1119, var1121, var1122, var1123, var1124);
var1118 = var1120;
varonce1117 = var1118;
}
{
var1125 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1118); /* == on <var_pname:String>*/
}
if (var1125){
if (unlikely(varonce1126==NULL)) {
var1127 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1128!=NULL)) {
var1129 = varonce1128;
} else {
var1130 = " / ";
var1132 = (val*)(3l<<2|1);
var1133 = (val*)(3l<<2|1);
var1134 = (val*)((long)(0)<<2|3);
var1135 = (val*)((long)(0)<<2|3);
var1131 = core__flat___CString___to_s_unsafe(var1130, var1132, var1133, var1134, var1135);
var1129 = var1131;
varonce1128 = var1129;
}
((struct instance_core__NativeArray*)var1127)->values[1]=var1129;
} else {
var1127 = varonce1126;
varonce1126 = NULL;
}
{
var1136 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1137 = ((val*(*)(val* self))(var1136->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1136); /* to_s on <var1136:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1127)->values[0]=var1137;
{
var1138 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1139 = ((val*(*)(val* self))(var1138->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1138); /* to_s on <var1138:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1127)->values[2]=var1139;
{
var1140 = ((val*(*)(val* self))(var1127->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1127); /* native_to_s on <var1127:NativeArray[String]>*/
}
varonce1126 = var1127;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2456);
fatal_exit(1);
}
{
var1141 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1140, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1141); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1142!=NULL)) {
var1143 = varonce1142;
} else {
var1144 = "%";
var1146 = (val*)(1l<<2|1);
var1147 = (val*)(1l<<2|1);
var1148 = (val*)((long)(0)<<2|3);
var1149 = (val*)((long)(0)<<2|3);
var1145 = core__flat___CString___to_s_unsafe(var1144, var1146, var1147, var1148, var1149);
var1143 = var1145;
varonce1142 = var1143;
}
{
var1150 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1143); /* == on <var_pname:String>*/
}
if (var1150){
if (unlikely(varonce1151==NULL)) {
var1152 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1153!=NULL)) {
var1154 = varonce1153;
} else {
var1155 = " % ";
var1157 = (val*)(3l<<2|1);
var1158 = (val*)(3l<<2|1);
var1159 = (val*)((long)(0)<<2|3);
var1160 = (val*)((long)(0)<<2|3);
var1156 = core__flat___CString___to_s_unsafe(var1155, var1157, var1158, var1159, var1160);
var1154 = var1156;
varonce1153 = var1154;
}
((struct instance_core__NativeArray*)var1152)->values[1]=var1154;
} else {
var1152 = varonce1151;
varonce1151 = NULL;
}
{
var1161 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1162 = ((val*(*)(val* self))(var1161->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1161); /* to_s on <var1161:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1152)->values[0]=var1162;
{
var1163 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1164 = ((val*(*)(val* self))(var1163->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1163); /* to_s on <var1163:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1152)->values[2]=var1164;
{
var1165 = ((val*(*)(val* self))(var1152->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1152); /* native_to_s on <var1152:NativeArray[String]>*/
}
varonce1151 = var1152;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2459);
fatal_exit(1);
}
{
var1166 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1165, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1166); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1167!=NULL)) {
var1168 = varonce1167;
} else {
var1169 = "==";
var1171 = (val*)(2l<<2|1);
var1172 = (val*)(2l<<2|1);
var1173 = (val*)((long)(0)<<2|3);
var1174 = (val*)((long)(0)<<2|3);
var1170 = core__flat___CString___to_s_unsafe(var1169, var1171, var1172, var1173, var1174);
var1168 = var1170;
varonce1167 = var1168;
}
{
var1175 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1168); /* == on <var_pname:String>*/
}
if (var1175){
{
var1176 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1177 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1178 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1176, var1177);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1178); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1179!=NULL)) {
var1180 = varonce1179;
} else {
var1181 = "!=";
var1183 = (val*)(2l<<2|1);
var1184 = (val*)(2l<<2|1);
var1185 = (val*)((long)(0)<<2|3);
var1186 = (val*)((long)(0)<<2|3);
var1182 = core__flat___CString___to_s_unsafe(var1181, var1183, var1184, var1185, var1186);
var1180 = var1182;
varonce1179 = var1180;
}
{
var1187 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1180); /* == on <var_pname:String>*/
}
if (var1187){
{
var1188 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1189 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1190 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1188, var1189);
}
var_res1191 = var1190;
if (unlikely(varonce1192==NULL)) {
var1193 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1194!=NULL)) {
var1195 = varonce1194;
} else {
var1196 = "!";
var1198 = (val*)(1l<<2|1);
var1199 = (val*)(1l<<2|1);
var1200 = (val*)((long)(0)<<2|3);
var1201 = (val*)((long)(0)<<2|3);
var1197 = core__flat___CString___to_s_unsafe(var1196, var1198, var1199, var1200, var1201);
var1195 = var1197;
varonce1194 = var1195;
}
((struct instance_core__NativeArray*)var1193)->values[0]=var1195;
} else {
var1193 = varonce1192;
varonce1192 = NULL;
}
{
var1202 = ((val*(*)(val* self))(var_res1191->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1191); /* to_s on <var_res1191:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1193)->values[1]=var1202;
{
var1203 = ((val*(*)(val* self))(var1193->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1193); /* native_to_s on <var1193:NativeArray[String]>*/
}
varonce1192 = var1193;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2466);
fatal_exit(1);
}
{
var1204 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1203, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1204); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1205!=NULL)) {
var1206 = varonce1205;
} else {
var1207 = "<";
var1209 = (val*)(1l<<2|1);
var1210 = (val*)(1l<<2|1);
var1211 = (val*)((long)(0)<<2|3);
var1212 = (val*)((long)(0)<<2|3);
var1208 = core__flat___CString___to_s_unsafe(var1207, var1209, var1210, var1211, var1212);
var1206 = var1208;
varonce1205 = var1206;
}
{
var1213 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1206); /* == on <var_pname:String>*/
}
if (var1213){
if (unlikely(varonce1214==NULL)) {
var1215 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1216!=NULL)) {
var1217 = varonce1216;
} else {
var1218 = " < ";
var1220 = (val*)(3l<<2|1);
var1221 = (val*)(3l<<2|1);
var1222 = (val*)((long)(0)<<2|3);
var1223 = (val*)((long)(0)<<2|3);
var1219 = core__flat___CString___to_s_unsafe(var1218, var1220, var1221, var1222, var1223);
var1217 = var1219;
varonce1216 = var1217;
}
((struct instance_core__NativeArray*)var1215)->values[1]=var1217;
} else {
var1215 = varonce1214;
varonce1214 = NULL;
}
{
var1224 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1225 = ((val*(*)(val* self))(var1224->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1224); /* to_s on <var1224:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1215)->values[0]=var1225;
{
var1226 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1227 = ((val*(*)(val* self))(var1226->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1226); /* to_s on <var1226:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1215)->values[2]=var1227;
{
var1228 = ((val*(*)(val* self))(var1215->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1215); /* native_to_s on <var1215:NativeArray[String]>*/
}
varonce1214 = var1215;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2469);
fatal_exit(1);
}
{
var1229 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1228, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1229); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1230!=NULL)) {
var1231 = varonce1230;
} else {
var1232 = ">";
var1234 = (val*)(1l<<2|1);
var1235 = (val*)(1l<<2|1);
var1236 = (val*)((long)(0)<<2|3);
var1237 = (val*)((long)(0)<<2|3);
var1233 = core__flat___CString___to_s_unsafe(var1232, var1234, var1235, var1236, var1237);
var1231 = var1233;
varonce1230 = var1231;
}
{
var1238 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1231); /* == on <var_pname:String>*/
}
if (var1238){
if (unlikely(varonce1239==NULL)) {
var1240 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1241!=NULL)) {
var1242 = varonce1241;
} else {
var1243 = " > ";
var1245 = (val*)(3l<<2|1);
var1246 = (val*)(3l<<2|1);
var1247 = (val*)((long)(0)<<2|3);
var1248 = (val*)((long)(0)<<2|3);
var1244 = core__flat___CString___to_s_unsafe(var1243, var1245, var1246, var1247, var1248);
var1242 = var1244;
varonce1241 = var1242;
}
((struct instance_core__NativeArray*)var1240)->values[1]=var1242;
} else {
var1240 = varonce1239;
varonce1239 = NULL;
}
{
var1249 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1250 = ((val*(*)(val* self))(var1249->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1249); /* to_s on <var1249:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1240)->values[0]=var1250;
{
var1251 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1252 = ((val*(*)(val* self))(var1251->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1251); /* to_s on <var1251:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1240)->values[2]=var1252;
{
var1253 = ((val*(*)(val* self))(var1240->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1240); /* native_to_s on <var1240:NativeArray[String]>*/
}
varonce1239 = var1240;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2472);
fatal_exit(1);
}
{
var1254 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1253, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1254); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1255!=NULL)) {
var1256 = varonce1255;
} else {
var1257 = "<=";
var1259 = (val*)(2l<<2|1);
var1260 = (val*)(2l<<2|1);
var1261 = (val*)((long)(0)<<2|3);
var1262 = (val*)((long)(0)<<2|3);
var1258 = core__flat___CString___to_s_unsafe(var1257, var1259, var1260, var1261, var1262);
var1256 = var1258;
varonce1255 = var1256;
}
{
var1263 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1256); /* == on <var_pname:String>*/
}
if (var1263){
if (unlikely(varonce1264==NULL)) {
var1265 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1266!=NULL)) {
var1267 = varonce1266;
} else {
var1268 = " <= ";
var1270 = (val*)(4l<<2|1);
var1271 = (val*)(4l<<2|1);
var1272 = (val*)((long)(0)<<2|3);
var1273 = (val*)((long)(0)<<2|3);
var1269 = core__flat___CString___to_s_unsafe(var1268, var1270, var1271, var1272, var1273);
var1267 = var1269;
varonce1266 = var1267;
}
((struct instance_core__NativeArray*)var1265)->values[1]=var1267;
} else {
var1265 = varonce1264;
varonce1264 = NULL;
}
{
var1274 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1275 = ((val*(*)(val* self))(var1274->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1274); /* to_s on <var1274:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1265)->values[0]=var1275;
{
var1276 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1277 = ((val*(*)(val* self))(var1276->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1276); /* to_s on <var1276:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1265)->values[2]=var1277;
{
var1278 = ((val*(*)(val* self))(var1265->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1265); /* native_to_s on <var1265:NativeArray[String]>*/
}
varonce1264 = var1265;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2475);
fatal_exit(1);
}
{
var1279 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1278, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1279); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1280!=NULL)) {
var1281 = varonce1280;
} else {
var1282 = ">=";
var1284 = (val*)(2l<<2|1);
var1285 = (val*)(2l<<2|1);
var1286 = (val*)((long)(0)<<2|3);
var1287 = (val*)((long)(0)<<2|3);
var1283 = core__flat___CString___to_s_unsafe(var1282, var1284, var1285, var1286, var1287);
var1281 = var1283;
varonce1280 = var1281;
}
{
var1288 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1281); /* == on <var_pname:String>*/
}
if (var1288){
if (unlikely(varonce1289==NULL)) {
var1290 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1291!=NULL)) {
var1292 = varonce1291;
} else {
var1293 = " >= ";
var1295 = (val*)(4l<<2|1);
var1296 = (val*)(4l<<2|1);
var1297 = (val*)((long)(0)<<2|3);
var1298 = (val*)((long)(0)<<2|3);
var1294 = core__flat___CString___to_s_unsafe(var1293, var1295, var1296, var1297, var1298);
var1292 = var1294;
varonce1291 = var1292;
}
((struct instance_core__NativeArray*)var1290)->values[1]=var1292;
} else {
var1290 = varonce1289;
varonce1289 = NULL;
}
{
var1299 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1300 = ((val*(*)(val* self))(var1299->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1299); /* to_s on <var1299:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1290)->values[0]=var1300;
{
var1301 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1302 = ((val*(*)(val* self))(var1301->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1301); /* to_s on <var1301:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1290)->values[2]=var1302;
{
var1303 = ((val*(*)(val* self))(var1290->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1290); /* native_to_s on <var1290:NativeArray[String]>*/
}
varonce1289 = var1290;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2478);
fatal_exit(1);
}
{
var1304 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1303, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1304); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1305!=NULL)) {
var1306 = varonce1305;
} else {
var1307 = ">>";
var1309 = (val*)(2l<<2|1);
var1310 = (val*)(2l<<2|1);
var1311 = (val*)((long)(0)<<2|3);
var1312 = (val*)((long)(0)<<2|3);
var1308 = core__flat___CString___to_s_unsafe(var1307, var1309, var1310, var1311, var1312);
var1306 = var1308;
varonce1305 = var1306;
}
{
var1313 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1306); /* == on <var_pname:String>*/
}
if (var1313){
if (unlikely(varonce1314==NULL)) {
var1315 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1316!=NULL)) {
var1317 = varonce1316;
} else {
var1318 = " >> ";
var1320 = (val*)(4l<<2|1);
var1321 = (val*)(4l<<2|1);
var1322 = (val*)((long)(0)<<2|3);
var1323 = (val*)((long)(0)<<2|3);
var1319 = core__flat___CString___to_s_unsafe(var1318, var1320, var1321, var1322, var1323);
var1317 = var1319;
varonce1316 = var1317;
}
((struct instance_core__NativeArray*)var1315)->values[1]=var1317;
} else {
var1315 = varonce1314;
varonce1314 = NULL;
}
{
var1324 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1325 = ((val*(*)(val* self))(var1324->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1324); /* to_s on <var1324:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1315)->values[0]=var1325;
{
var1326 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1327 = ((val*(*)(val* self))(var1326->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1326); /* to_s on <var1326:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1315)->values[2]=var1327;
{
var1328 = ((val*(*)(val* self))(var1315->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1315); /* native_to_s on <var1315:NativeArray[String]>*/
}
varonce1314 = var1315;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2481);
fatal_exit(1);
}
{
var1329 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1328, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1329); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1330!=NULL)) {
var1331 = varonce1330;
} else {
var1332 = "<<";
var1334 = (val*)(2l<<2|1);
var1335 = (val*)(2l<<2|1);
var1336 = (val*)((long)(0)<<2|3);
var1337 = (val*)((long)(0)<<2|3);
var1333 = core__flat___CString___to_s_unsafe(var1332, var1334, var1335, var1336, var1337);
var1331 = var1333;
varonce1330 = var1331;
}
{
var1338 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1331); /* == on <var_pname:String>*/
}
if (var1338){
if (unlikely(varonce1339==NULL)) {
var1340 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1341!=NULL)) {
var1342 = varonce1341;
} else {
var1343 = " << ";
var1345 = (val*)(4l<<2|1);
var1346 = (val*)(4l<<2|1);
var1347 = (val*)((long)(0)<<2|3);
var1348 = (val*)((long)(0)<<2|3);
var1344 = core__flat___CString___to_s_unsafe(var1343, var1345, var1346, var1347, var1348);
var1342 = var1344;
varonce1341 = var1342;
}
((struct instance_core__NativeArray*)var1340)->values[1]=var1342;
} else {
var1340 = varonce1339;
varonce1339 = NULL;
}
{
var1349 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1350 = ((val*(*)(val* self))(var1349->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1349); /* to_s on <var1349:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1340)->values[0]=var1350;
{
var1351 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1352 = ((val*(*)(val* self))(var1351->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1351); /* to_s on <var1351:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1340)->values[2]=var1352;
{
var1353 = ((val*(*)(val* self))(var1340->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1340); /* native_to_s on <var1340:NativeArray[String]>*/
}
varonce1339 = var1340;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2484);
fatal_exit(1);
}
{
var1354 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1353, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1354); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1355!=NULL)) {
var1356 = varonce1355;
} else {
var1357 = "&";
var1359 = (val*)(1l<<2|1);
var1360 = (val*)(1l<<2|1);
var1361 = (val*)((long)(0)<<2|3);
var1362 = (val*)((long)(0)<<2|3);
var1358 = core__flat___CString___to_s_unsafe(var1357, var1359, var1360, var1361, var1362);
var1356 = var1358;
varonce1355 = var1356;
}
{
var1363 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1356); /* == on <var_pname:String>*/
}
if (var1363){
if (unlikely(varonce1364==NULL)) {
var1365 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1366!=NULL)) {
var1367 = varonce1366;
} else {
var1368 = " & ";
var1370 = (val*)(3l<<2|1);
var1371 = (val*)(3l<<2|1);
var1372 = (val*)((long)(0)<<2|3);
var1373 = (val*)((long)(0)<<2|3);
var1369 = core__flat___CString___to_s_unsafe(var1368, var1370, var1371, var1372, var1373);
var1367 = var1369;
varonce1366 = var1367;
}
((struct instance_core__NativeArray*)var1365)->values[1]=var1367;
} else {
var1365 = varonce1364;
varonce1364 = NULL;
}
{
var1374 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1375 = ((val*(*)(val* self))(var1374->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1374); /* to_s on <var1374:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1365)->values[0]=var1375;
{
var1376 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1377 = ((val*(*)(val* self))(var1376->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1376); /* to_s on <var1376:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1365)->values[2]=var1377;
{
var1378 = ((val*(*)(val* self))(var1365->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1365); /* native_to_s on <var1365:NativeArray[String]>*/
}
varonce1364 = var1365;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2487);
fatal_exit(1);
}
{
var1379 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1378, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1379); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1380!=NULL)) {
var1381 = varonce1380;
} else {
var1382 = "to_i";
var1384 = (val*)(4l<<2|1);
var1385 = (val*)(4l<<2|1);
var1386 = (val*)((long)(0)<<2|3);
var1387 = (val*)((long)(0)<<2|3);
var1383 = core__flat___CString___to_s_unsafe(var1382, var1384, var1385, var1386, var1387);
var1381 = var1383;
varonce1380 = var1381;
}
{
var1388 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1381); /* == on <var_pname:String>*/
}
if (var1388){
if (unlikely(varonce1389==NULL)) {
var1390 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1391!=NULL)) {
var1392 = varonce1391;
} else {
var1393 = "(long)";
var1395 = (val*)(6l<<2|1);
var1396 = (val*)(6l<<2|1);
var1397 = (val*)((long)(0)<<2|3);
var1398 = (val*)((long)(0)<<2|3);
var1394 = core__flat___CString___to_s_unsafe(var1393, var1395, var1396, var1397, var1398);
var1392 = var1394;
varonce1391 = var1392;
}
((struct instance_core__NativeArray*)var1390)->values[0]=var1392;
} else {
var1390 = varonce1389;
varonce1389 = NULL;
}
{
var1399 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1400 = ((val*(*)(val* self))(var1399->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1399); /* to_s on <var1399:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1390)->values[1]=var1400;
{
var1401 = ((val*(*)(val* self))(var1390->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1390); /* native_to_s on <var1390:NativeArray[String]>*/
}
varonce1389 = var1390;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2490);
fatal_exit(1);
}
{
var1402 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1401, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1402); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1403!=NULL)) {
var1404 = varonce1403;
} else {
var1405 = "to_f";
var1407 = (val*)(4l<<2|1);
var1408 = (val*)(4l<<2|1);
var1409 = (val*)((long)(0)<<2|3);
var1410 = (val*)((long)(0)<<2|3);
var1406 = core__flat___CString___to_s_unsafe(var1405, var1407, var1408, var1409, var1410);
var1404 = var1406;
varonce1403 = var1404;
}
{
var1411 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1404); /* == on <var_pname:String>*/
}
if (var1411){
if (unlikely(varonce1412==NULL)) {
var1413 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1414!=NULL)) {
var1415 = varonce1414;
} else {
var1416 = "(double)";
var1418 = (val*)(8l<<2|1);
var1419 = (val*)(8l<<2|1);
var1420 = (val*)((long)(0)<<2|3);
var1421 = (val*)((long)(0)<<2|3);
var1417 = core__flat___CString___to_s_unsafe(var1416, var1418, var1419, var1420, var1421);
var1415 = var1417;
varonce1414 = var1415;
}
((struct instance_core__NativeArray*)var1413)->values[0]=var1415;
} else {
var1413 = varonce1412;
varonce1412 = NULL;
}
{
var1422 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1423 = ((val*(*)(val* self))(var1422->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1422); /* to_s on <var1422:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1413)->values[1]=var1423;
{
var1424 = ((val*(*)(val* self))(var1413->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1413); /* native_to_s on <var1413:NativeArray[String]>*/
}
varonce1412 = var1413;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2493);
fatal_exit(1);
}
{
var1425 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1424, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1425); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1426!=NULL)) {
var1427 = varonce1426;
} else {
var1428 = "to_i8";
var1430 = (val*)(5l<<2|1);
var1431 = (val*)(5l<<2|1);
var1432 = (val*)((long)(0)<<2|3);
var1433 = (val*)((long)(0)<<2|3);
var1429 = core__flat___CString___to_s_unsafe(var1428, var1430, var1431, var1432, var1433);
var1427 = var1429;
varonce1426 = var1427;
}
{
var1434 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1427); /* == on <var_pname:String>*/
}
if (var1434){
if (unlikely(varonce1435==NULL)) {
var1436 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1437!=NULL)) {
var1438 = varonce1437;
} else {
var1439 = "(int8_t)";
var1441 = (val*)(8l<<2|1);
var1442 = (val*)(8l<<2|1);
var1443 = (val*)((long)(0)<<2|3);
var1444 = (val*)((long)(0)<<2|3);
var1440 = core__flat___CString___to_s_unsafe(var1439, var1441, var1442, var1443, var1444);
var1438 = var1440;
varonce1437 = var1438;
}
((struct instance_core__NativeArray*)var1436)->values[0]=var1438;
} else {
var1436 = varonce1435;
varonce1435 = NULL;
}
{
var1445 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1446 = ((val*(*)(val* self))(var1445->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1445); /* to_s on <var1445:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1436)->values[1]=var1446;
{
var1447 = ((val*(*)(val* self))(var1436->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1436); /* native_to_s on <var1436:NativeArray[String]>*/
}
varonce1435 = var1436;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2496);
fatal_exit(1);
}
{
var1448 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1447, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1448); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1449!=NULL)) {
var1450 = varonce1449;
} else {
var1451 = "to_i16";
var1453 = (val*)(6l<<2|1);
var1454 = (val*)(6l<<2|1);
var1455 = (val*)((long)(0)<<2|3);
var1456 = (val*)((long)(0)<<2|3);
var1452 = core__flat___CString___to_s_unsafe(var1451, var1453, var1454, var1455, var1456);
var1450 = var1452;
varonce1449 = var1450;
}
{
var1457 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1450); /* == on <var_pname:String>*/
}
if (var1457){
if (unlikely(varonce1458==NULL)) {
var1459 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1460!=NULL)) {
var1461 = varonce1460;
} else {
var1462 = "(int16_t)";
var1464 = (val*)(9l<<2|1);
var1465 = (val*)(9l<<2|1);
var1466 = (val*)((long)(0)<<2|3);
var1467 = (val*)((long)(0)<<2|3);
var1463 = core__flat___CString___to_s_unsafe(var1462, var1464, var1465, var1466, var1467);
var1461 = var1463;
varonce1460 = var1461;
}
((struct instance_core__NativeArray*)var1459)->values[0]=var1461;
} else {
var1459 = varonce1458;
varonce1458 = NULL;
}
{
var1468 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1469 = ((val*(*)(val* self))(var1468->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1468); /* to_s on <var1468:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1459)->values[1]=var1469;
{
var1470 = ((val*(*)(val* self))(var1459->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1459); /* native_to_s on <var1459:NativeArray[String]>*/
}
varonce1458 = var1459;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2499);
fatal_exit(1);
}
{
var1471 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1470, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1471); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1472!=NULL)) {
var1473 = varonce1472;
} else {
var1474 = "to_u16";
var1476 = (val*)(6l<<2|1);
var1477 = (val*)(6l<<2|1);
var1478 = (val*)((long)(0)<<2|3);
var1479 = (val*)((long)(0)<<2|3);
var1475 = core__flat___CString___to_s_unsafe(var1474, var1476, var1477, var1478, var1479);
var1473 = var1475;
varonce1472 = var1473;
}
{
var1480 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1473); /* == on <var_pname:String>*/
}
if (var1480){
if (unlikely(varonce1481==NULL)) {
var1482 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1483!=NULL)) {
var1484 = varonce1483;
} else {
var1485 = "(uint16_t)";
var1487 = (val*)(10l<<2|1);
var1488 = (val*)(10l<<2|1);
var1489 = (val*)((long)(0)<<2|3);
var1490 = (val*)((long)(0)<<2|3);
var1486 = core__flat___CString___to_s_unsafe(var1485, var1487, var1488, var1489, var1490);
var1484 = var1486;
varonce1483 = var1484;
}
((struct instance_core__NativeArray*)var1482)->values[0]=var1484;
} else {
var1482 = varonce1481;
varonce1481 = NULL;
}
{
var1491 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1492 = ((val*(*)(val* self))(var1491->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1491); /* to_s on <var1491:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1482)->values[1]=var1492;
{
var1493 = ((val*(*)(val* self))(var1482->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1482); /* native_to_s on <var1482:NativeArray[String]>*/
}
varonce1481 = var1482;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2502);
fatal_exit(1);
}
{
var1494 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1493, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1494); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1495!=NULL)) {
var1496 = varonce1495;
} else {
var1497 = "to_i32";
var1499 = (val*)(6l<<2|1);
var1500 = (val*)(6l<<2|1);
var1501 = (val*)((long)(0)<<2|3);
var1502 = (val*)((long)(0)<<2|3);
var1498 = core__flat___CString___to_s_unsafe(var1497, var1499, var1500, var1501, var1502);
var1496 = var1498;
varonce1495 = var1496;
}
{
var1503 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1496); /* == on <var_pname:String>*/
}
if (var1503){
if (unlikely(varonce1504==NULL)) {
var1505 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1506!=NULL)) {
var1507 = varonce1506;
} else {
var1508 = "(int32_t)";
var1510 = (val*)(9l<<2|1);
var1511 = (val*)(9l<<2|1);
var1512 = (val*)((long)(0)<<2|3);
var1513 = (val*)((long)(0)<<2|3);
var1509 = core__flat___CString___to_s_unsafe(var1508, var1510, var1511, var1512, var1513);
var1507 = var1509;
varonce1506 = var1507;
}
((struct instance_core__NativeArray*)var1505)->values[0]=var1507;
} else {
var1505 = varonce1504;
varonce1504 = NULL;
}
{
var1514 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1515 = ((val*(*)(val* self))(var1514->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1514); /* to_s on <var1514:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1505)->values[1]=var1515;
{
var1516 = ((val*(*)(val* self))(var1505->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1505); /* native_to_s on <var1505:NativeArray[String]>*/
}
varonce1504 = var1505;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2505);
fatal_exit(1);
}
{
var1517 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1516, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1517); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1518!=NULL)) {
var1519 = varonce1518;
} else {
var1520 = "to_u32";
var1522 = (val*)(6l<<2|1);
var1523 = (val*)(6l<<2|1);
var1524 = (val*)((long)(0)<<2|3);
var1525 = (val*)((long)(0)<<2|3);
var1521 = core__flat___CString___to_s_unsafe(var1520, var1522, var1523, var1524, var1525);
var1519 = var1521;
varonce1518 = var1519;
}
{
var1526 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1519); /* == on <var_pname:String>*/
}
if (var1526){
if (unlikely(varonce1527==NULL)) {
var1528 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1529!=NULL)) {
var1530 = varonce1529;
} else {
var1531 = "(uint32_t)";
var1533 = (val*)(10l<<2|1);
var1534 = (val*)(10l<<2|1);
var1535 = (val*)((long)(0)<<2|3);
var1536 = (val*)((long)(0)<<2|3);
var1532 = core__flat___CString___to_s_unsafe(var1531, var1533, var1534, var1535, var1536);
var1530 = var1532;
varonce1529 = var1530;
}
((struct instance_core__NativeArray*)var1528)->values[0]=var1530;
} else {
var1528 = varonce1527;
varonce1527 = NULL;
}
{
var1537 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1538 = ((val*(*)(val* self))(var1537->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1537); /* to_s on <var1537:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1528)->values[1]=var1538;
{
var1539 = ((val*(*)(val* self))(var1528->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1528); /* native_to_s on <var1528:NativeArray[String]>*/
}
varonce1527 = var1528;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2508);
fatal_exit(1);
}
{
var1540 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1539, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1540); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1541!=NULL)) {
var1542 = varonce1541;
} else {
var1543 = "ascii";
var1545 = (val*)(5l<<2|1);
var1546 = (val*)(5l<<2|1);
var1547 = (val*)((long)(0)<<2|3);
var1548 = (val*)((long)(0)<<2|3);
var1544 = core__flat___CString___to_s_unsafe(var1543, var1545, var1546, var1547, var1548);
var1542 = var1544;
varonce1541 = var1542;
}
{
var1549 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1542); /* == on <var_pname:String>*/
}
if (var1549){
if (unlikely(varonce1550==NULL)) {
var1551 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1552!=NULL)) {
var1553 = varonce1552;
} else {
var1554 = "(uint32_t)";
var1556 = (val*)(10l<<2|1);
var1557 = (val*)(10l<<2|1);
var1558 = (val*)((long)(0)<<2|3);
var1559 = (val*)((long)(0)<<2|3);
var1555 = core__flat___CString___to_s_unsafe(var1554, var1556, var1557, var1558, var1559);
var1553 = var1555;
varonce1552 = var1553;
}
((struct instance_core__NativeArray*)var1551)->values[0]=var1553;
} else {
var1551 = varonce1550;
varonce1550 = NULL;
}
{
var1560 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1561 = ((val*(*)(val* self))(var1560->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1560); /* to_s on <var1560:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1551)->values[1]=var1561;
{
var1562 = ((val*(*)(val* self))(var1551->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1551); /* native_to_s on <var1551:NativeArray[String]>*/
}
varonce1550 = var1551;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2511);
fatal_exit(1);
}
{
var1563 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1562, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1563); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce1564!=NULL)) {
var1565 = varonce1564;
} else {
var1566 = "Bool";
var1568 = (val*)(4l<<2|1);
var1569 = (val*)(4l<<2|1);
var1570 = (val*)((long)(0)<<2|3);
var1571 = (val*)((long)(0)<<2|3);
var1567 = core__flat___CString___to_s_unsafe(var1566, var1568, var1569, var1570, var1571);
var1565 = var1567;
varonce1564 = var1565;
}
{
var1572 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1565); /* == on <var_cname:String>*/
}
if (var1572){
if (likely(varonce1573!=NULL)) {
var1574 = varonce1573;
} else {
var1575 = "output";
var1577 = (val*)(6l<<2|1);
var1578 = (val*)(6l<<2|1);
var1579 = (val*)((long)(0)<<2|3);
var1580 = (val*)((long)(0)<<2|3);
var1576 = core__flat___CString___to_s_unsafe(var1575, var1577, var1578, var1579, var1580);
var1574 = var1576;
varonce1573 = var1574;
}
{
var1581 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1574); /* == on <var_pname:String>*/
}
if (var1581){
if (unlikely(varonce1582==NULL)) {
var1583 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1584!=NULL)) {
var1585 = varonce1584;
} else {
var1586 = "printf(";
var1588 = (val*)(7l<<2|1);
var1589 = (val*)(7l<<2|1);
var1590 = (val*)((long)(0)<<2|3);
var1591 = (val*)((long)(0)<<2|3);
var1587 = core__flat___CString___to_s_unsafe(var1586, var1588, var1589, var1590, var1591);
var1585 = var1587;
varonce1584 = var1585;
}
((struct instance_core__NativeArray*)var1583)->values[0]=var1585;
if (likely(varonce1592!=NULL)) {
var1593 = varonce1592;
} else {
var1594 = "?\"true\\n\":\"false\\n\");";
var1596 = (val*)(21l<<2|1);
var1597 = (val*)(21l<<2|1);
var1598 = (val*)((long)(0)<<2|3);
var1599 = (val*)((long)(0)<<2|3);
var1595 = core__flat___CString___to_s_unsafe(var1594, var1596, var1597, var1598, var1599);
var1593 = var1595;
varonce1592 = var1593;
}
((struct instance_core__NativeArray*)var1583)->values[2]=var1593;
} else {
var1583 = varonce1582;
varonce1582 = NULL;
}
{
var1600 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1601 = ((val*(*)(val* self))(var1600->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1600); /* to_s on <var1600:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1583)->values[1]=var1601;
{
var1602 = ((val*(*)(val* self))(var1583->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1583); /* native_to_s on <var1583:NativeArray[String]>*/
}
varonce1582 = var1583;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1602); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1603!=NULL)) {
var1604 = varonce1603;
} else {
var1605 = "object_id";
var1607 = (val*)(9l<<2|1);
var1608 = (val*)(9l<<2|1);
var1609 = (val*)((long)(0)<<2|3);
var1610 = (val*)((long)(0)<<2|3);
var1606 = core__flat___CString___to_s_unsafe(var1605, var1607, var1608, var1609, var1610);
var1604 = var1606;
varonce1603 = var1604;
}
{
var1611 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1604); /* == on <var_pname:String>*/
}
if (var1611){
if (unlikely(varonce1612==NULL)) {
var1613 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1614!=NULL)) {
var1615 = varonce1614;
} else {
var1616 = "(long)";
var1618 = (val*)(6l<<2|1);
var1619 = (val*)(6l<<2|1);
var1620 = (val*)((long)(0)<<2|3);
var1621 = (val*)((long)(0)<<2|3);
var1617 = core__flat___CString___to_s_unsafe(var1616, var1618, var1619, var1620, var1621);
var1615 = var1617;
varonce1614 = var1615;
}
((struct instance_core__NativeArray*)var1613)->values[0]=var1615;
} else {
var1613 = varonce1612;
varonce1612 = NULL;
}
{
var1622 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1623 = ((val*(*)(val* self))(var1622->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1622); /* to_s on <var1622:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1613)->values[1]=var1623;
{
var1624 = ((val*(*)(val* self))(var1613->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1613); /* native_to_s on <var1613:NativeArray[String]>*/
}
varonce1612 = var1613;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2519);
fatal_exit(1);
}
{
var1625 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1624, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1625); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1626!=NULL)) {
var1627 = varonce1626;
} else {
var1628 = "==";
var1630 = (val*)(2l<<2|1);
var1631 = (val*)(2l<<2|1);
var1632 = (val*)((long)(0)<<2|3);
var1633 = (val*)((long)(0)<<2|3);
var1629 = core__flat___CString___to_s_unsafe(var1628, var1630, var1631, var1632, var1633);
var1627 = var1629;
varonce1626 = var1627;
}
{
var1634 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1627); /* == on <var_pname:String>*/
}
if (var1634){
{
var1635 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1636 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1637 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1635, var1636);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1637); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1638!=NULL)) {
var1639 = varonce1638;
} else {
var1640 = "!=";
var1642 = (val*)(2l<<2|1);
var1643 = (val*)(2l<<2|1);
var1644 = (val*)((long)(0)<<2|3);
var1645 = (val*)((long)(0)<<2|3);
var1641 = core__flat___CString___to_s_unsafe(var1640, var1642, var1643, var1644, var1645);
var1639 = var1641;
varonce1638 = var1639;
}
{
var1646 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1639); /* == on <var_pname:String>*/
}
if (var1646){
{
var1647 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1648 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1649 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1647, var1648);
}
var_res1650 = var1649;
if (unlikely(varonce1651==NULL)) {
var1652 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1653!=NULL)) {
var1654 = varonce1653;
} else {
var1655 = "!";
var1657 = (val*)(1l<<2|1);
var1658 = (val*)(1l<<2|1);
var1659 = (val*)((long)(0)<<2|3);
var1660 = (val*)((long)(0)<<2|3);
var1656 = core__flat___CString___to_s_unsafe(var1655, var1657, var1658, var1659, var1660);
var1654 = var1656;
varonce1653 = var1654;
}
((struct instance_core__NativeArray*)var1652)->values[0]=var1654;
} else {
var1652 = varonce1651;
varonce1651 = NULL;
}
{
var1661 = ((val*(*)(val* self))(var_res1650->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1650); /* to_s on <var_res1650:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1652)->values[1]=var1661;
{
var1662 = ((val*(*)(val* self))(var1652->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1652); /* native_to_s on <var1652:NativeArray[String]>*/
}
varonce1651 = var1652;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2526);
fatal_exit(1);
}
{
var1663 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1662, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1663); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (likely(varonce1664!=NULL)) {
var1665 = varonce1664;
} else {
var1666 = "Float";
var1668 = (val*)(5l<<2|1);
var1669 = (val*)(5l<<2|1);
var1670 = (val*)((long)(0)<<2|3);
var1671 = (val*)((long)(0)<<2|3);
var1667 = core__flat___CString___to_s_unsafe(var1666, var1668, var1669, var1670, var1671);
var1665 = var1667;
varonce1664 = var1665;
}
{
var1672 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1665); /* == on <var_cname:String>*/
}
if (var1672){
if (likely(varonce1673!=NULL)) {
var1674 = varonce1673;
} else {
var1675 = "output";
var1677 = (val*)(6l<<2|1);
var1678 = (val*)(6l<<2|1);
var1679 = (val*)((long)(0)<<2|3);
var1680 = (val*)((long)(0)<<2|3);
var1676 = core__flat___CString___to_s_unsafe(var1675, var1677, var1678, var1679, var1680);
var1674 = var1676;
varonce1673 = var1674;
}
{
var1681 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1674); /* == on <var_pname:String>*/
}
if (var1681){
if (unlikely(varonce1682==NULL)) {
var1683 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1684!=NULL)) {
var1685 = varonce1684;
} else {
var1686 = "printf(\"%f\\n\", ";
var1688 = (val*)(15l<<2|1);
var1689 = (val*)(15l<<2|1);
var1690 = (val*)((long)(0)<<2|3);
var1691 = (val*)((long)(0)<<2|3);
var1687 = core__flat___CString___to_s_unsafe(var1686, var1688, var1689, var1690, var1691);
var1685 = var1687;
varonce1684 = var1685;
}
((struct instance_core__NativeArray*)var1683)->values[0]=var1685;
if (likely(varonce1692!=NULL)) {
var1693 = varonce1692;
} else {
var1694 = ");";
var1696 = (val*)(2l<<2|1);
var1697 = (val*)(2l<<2|1);
var1698 = (val*)((long)(0)<<2|3);
var1699 = (val*)((long)(0)<<2|3);
var1695 = core__flat___CString___to_s_unsafe(var1694, var1696, var1697, var1698, var1699);
var1693 = var1695;
varonce1692 = var1693;
}
((struct instance_core__NativeArray*)var1683)->values[2]=var1693;
} else {
var1683 = varonce1682;
varonce1682 = NULL;
}
{
var1700 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1701 = ((val*(*)(val* self))(var1700->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1700); /* to_s on <var1700:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1683)->values[1]=var1701;
{
var1702 = ((val*(*)(val* self))(var1683->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1683); /* native_to_s on <var1683:NativeArray[String]>*/
}
varonce1682 = var1683;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1702); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1703!=NULL)) {
var1704 = varonce1703;
} else {
var1705 = "object_id";
var1707 = (val*)(9l<<2|1);
var1708 = (val*)(9l<<2|1);
var1709 = (val*)((long)(0)<<2|3);
var1710 = (val*)((long)(0)<<2|3);
var1706 = core__flat___CString___to_s_unsafe(var1705, var1707, var1708, var1709, var1710);
var1704 = var1706;
varonce1703 = var1704;
}
{
var1711 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1704); /* == on <var_pname:String>*/
}
if (var1711){
if (unlikely(varonce1712==NULL)) {
var1713 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1714!=NULL)) {
var1715 = varonce1714;
} else {
var1716 = "(double)";
var1718 = (val*)(8l<<2|1);
var1719 = (val*)(8l<<2|1);
var1720 = (val*)((long)(0)<<2|3);
var1721 = (val*)((long)(0)<<2|3);
var1717 = core__flat___CString___to_s_unsafe(var1716, var1718, var1719, var1720, var1721);
var1715 = var1717;
varonce1714 = var1715;
}
((struct instance_core__NativeArray*)var1713)->values[0]=var1715;
} else {
var1713 = varonce1712;
varonce1712 = NULL;
}
{
var1722 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1723 = ((val*(*)(val* self))(var1722->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1722); /* to_s on <var1722:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1713)->values[1]=var1723;
{
var1724 = ((val*(*)(val* self))(var1713->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1713); /* native_to_s on <var1713:NativeArray[String]>*/
}
varonce1712 = var1713;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2534);
fatal_exit(1);
}
{
var1725 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1724, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1725); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1726!=NULL)) {
var1727 = varonce1726;
} else {
var1728 = "+";
var1730 = (val*)(1l<<2|1);
var1731 = (val*)(1l<<2|1);
var1732 = (val*)((long)(0)<<2|3);
var1733 = (val*)((long)(0)<<2|3);
var1729 = core__flat___CString___to_s_unsafe(var1728, var1730, var1731, var1732, var1733);
var1727 = var1729;
varonce1726 = var1727;
}
{
var1734 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1727); /* == on <var_pname:String>*/
}
if (var1734){
if (unlikely(varonce1735==NULL)) {
var1736 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1737!=NULL)) {
var1738 = varonce1737;
} else {
var1739 = " + ";
var1741 = (val*)(3l<<2|1);
var1742 = (val*)(3l<<2|1);
var1743 = (val*)((long)(0)<<2|3);
var1744 = (val*)((long)(0)<<2|3);
var1740 = core__flat___CString___to_s_unsafe(var1739, var1741, var1742, var1743, var1744);
var1738 = var1740;
varonce1737 = var1738;
}
((struct instance_core__NativeArray*)var1736)->values[1]=var1738;
} else {
var1736 = varonce1735;
varonce1735 = NULL;
}
{
var1745 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1746 = ((val*(*)(val* self))(var1745->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1745); /* to_s on <var1745:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1736)->values[0]=var1746;
{
var1747 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1748 = ((val*(*)(val* self))(var1747->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1747); /* to_s on <var1747:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1736)->values[2]=var1748;
{
var1749 = ((val*(*)(val* self))(var1736->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1736); /* native_to_s on <var1736:NativeArray[String]>*/
}
varonce1735 = var1736;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2537);
fatal_exit(1);
}
{
var1750 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1749, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1750); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1751!=NULL)) {
var1752 = varonce1751;
} else {
var1753 = "-";
var1755 = (val*)(1l<<2|1);
var1756 = (val*)(1l<<2|1);
var1757 = (val*)((long)(0)<<2|3);
var1758 = (val*)((long)(0)<<2|3);
var1754 = core__flat___CString___to_s_unsafe(var1753, var1755, var1756, var1757, var1758);
var1752 = var1754;
varonce1751 = var1752;
}
{
var1759 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1752); /* == on <var_pname:String>*/
}
if (var1759){
if (unlikely(varonce1760==NULL)) {
var1761 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1762!=NULL)) {
var1763 = varonce1762;
} else {
var1764 = " - ";
var1766 = (val*)(3l<<2|1);
var1767 = (val*)(3l<<2|1);
var1768 = (val*)((long)(0)<<2|3);
var1769 = (val*)((long)(0)<<2|3);
var1765 = core__flat___CString___to_s_unsafe(var1764, var1766, var1767, var1768, var1769);
var1763 = var1765;
varonce1762 = var1763;
}
((struct instance_core__NativeArray*)var1761)->values[1]=var1763;
} else {
var1761 = varonce1760;
varonce1760 = NULL;
}
{
var1770 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1771 = ((val*(*)(val* self))(var1770->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1770); /* to_s on <var1770:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1761)->values[0]=var1771;
{
var1772 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1773 = ((val*(*)(val* self))(var1772->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1772); /* to_s on <var1772:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1761)->values[2]=var1773;
{
var1774 = ((val*(*)(val* self))(var1761->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1761); /* native_to_s on <var1761:NativeArray[String]>*/
}
varonce1760 = var1761;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2540);
fatal_exit(1);
}
{
var1775 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1774, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1775); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1776!=NULL)) {
var1777 = varonce1776;
} else {
var1778 = "unary -";
var1780 = (val*)(7l<<2|1);
var1781 = (val*)(7l<<2|1);
var1782 = (val*)((long)(0)<<2|3);
var1783 = (val*)((long)(0)<<2|3);
var1779 = core__flat___CString___to_s_unsafe(var1778, var1780, var1781, var1782, var1783);
var1777 = var1779;
varonce1776 = var1777;
}
{
var1784 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1777); /* == on <var_pname:String>*/
}
if (var1784){
if (unlikely(varonce1785==NULL)) {
var1786 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1787!=NULL)) {
var1788 = varonce1787;
} else {
var1789 = "-";
var1791 = (val*)(1l<<2|1);
var1792 = (val*)(1l<<2|1);
var1793 = (val*)((long)(0)<<2|3);
var1794 = (val*)((long)(0)<<2|3);
var1790 = core__flat___CString___to_s_unsafe(var1789, var1791, var1792, var1793, var1794);
var1788 = var1790;
varonce1787 = var1788;
}
((struct instance_core__NativeArray*)var1786)->values[0]=var1788;
} else {
var1786 = varonce1785;
varonce1785 = NULL;
}
{
var1795 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1796 = ((val*(*)(val* self))(var1795->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1795); /* to_s on <var1795:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1786)->values[1]=var1796;
{
var1797 = ((val*(*)(val* self))(var1786->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1786); /* native_to_s on <var1786:NativeArray[String]>*/
}
varonce1785 = var1786;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2543);
fatal_exit(1);
}
{
var1798 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1797, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1798); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1799!=NULL)) {
var1800 = varonce1799;
} else {
var1801 = "unary +";
var1803 = (val*)(7l<<2|1);
var1804 = (val*)(7l<<2|1);
var1805 = (val*)((long)(0)<<2|3);
var1806 = (val*)((long)(0)<<2|3);
var1802 = core__flat___CString___to_s_unsafe(var1801, var1803, var1804, var1805, var1806);
var1800 = var1802;
varonce1799 = var1800;
}
{
var1807 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1800); /* == on <var_pname:String>*/
}
if (var1807){
{
var1808 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1808); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1809!=NULL)) {
var1810 = varonce1809;
} else {
var1811 = "succ";
var1813 = (val*)(4l<<2|1);
var1814 = (val*)(4l<<2|1);
var1815 = (val*)((long)(0)<<2|3);
var1816 = (val*)((long)(0)<<2|3);
var1812 = core__flat___CString___to_s_unsafe(var1811, var1813, var1814, var1815, var1816);
var1810 = var1812;
varonce1809 = var1810;
}
{
var1817 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1810); /* == on <var_pname:String>*/
}
if (var1817){
if (unlikely(varonce1818==NULL)) {
var1819 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1820!=NULL)) {
var1821 = varonce1820;
} else {
var1822 = "+1";
var1824 = (val*)(2l<<2|1);
var1825 = (val*)(2l<<2|1);
var1826 = (val*)((long)(0)<<2|3);
var1827 = (val*)((long)(0)<<2|3);
var1823 = core__flat___CString___to_s_unsafe(var1822, var1824, var1825, var1826, var1827);
var1821 = var1823;
varonce1820 = var1821;
}
((struct instance_core__NativeArray*)var1819)->values[1]=var1821;
} else {
var1819 = varonce1818;
varonce1818 = NULL;
}
{
var1828 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1829 = ((val*(*)(val* self))(var1828->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1828); /* to_s on <var1828:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1819)->values[0]=var1829;
{
var1830 = ((val*(*)(val* self))(var1819->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1819); /* native_to_s on <var1819:NativeArray[String]>*/
}
varonce1818 = var1819;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2549);
fatal_exit(1);
}
{
var1831 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1830, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1831); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1832!=NULL)) {
var1833 = varonce1832;
} else {
var1834 = "prec";
var1836 = (val*)(4l<<2|1);
var1837 = (val*)(4l<<2|1);
var1838 = (val*)((long)(0)<<2|3);
var1839 = (val*)((long)(0)<<2|3);
var1835 = core__flat___CString___to_s_unsafe(var1834, var1836, var1837, var1838, var1839);
var1833 = var1835;
varonce1832 = var1833;
}
{
var1840 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1833); /* == on <var_pname:String>*/
}
if (var1840){
if (unlikely(varonce1841==NULL)) {
var1842 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1843!=NULL)) {
var1844 = varonce1843;
} else {
var1845 = "-1";
var1847 = (val*)(2l<<2|1);
var1848 = (val*)(2l<<2|1);
var1849 = (val*)((long)(0)<<2|3);
var1850 = (val*)((long)(0)<<2|3);
var1846 = core__flat___CString___to_s_unsafe(var1845, var1847, var1848, var1849, var1850);
var1844 = var1846;
varonce1843 = var1844;
}
((struct instance_core__NativeArray*)var1842)->values[1]=var1844;
} else {
var1842 = varonce1841;
varonce1841 = NULL;
}
{
var1851 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1852 = ((val*(*)(val* self))(var1851->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1851); /* to_s on <var1851:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1842)->values[0]=var1852;
{
var1853 = ((val*(*)(val* self))(var1842->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1842); /* native_to_s on <var1842:NativeArray[String]>*/
}
varonce1841 = var1842;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2552);
fatal_exit(1);
}
{
var1854 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1853, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1854); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1855!=NULL)) {
var1856 = varonce1855;
} else {
var1857 = "*";
var1859 = (val*)(1l<<2|1);
var1860 = (val*)(1l<<2|1);
var1861 = (val*)((long)(0)<<2|3);
var1862 = (val*)((long)(0)<<2|3);
var1858 = core__flat___CString___to_s_unsafe(var1857, var1859, var1860, var1861, var1862);
var1856 = var1858;
varonce1855 = var1856;
}
{
var1863 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1856); /* == on <var_pname:String>*/
}
if (var1863){
if (unlikely(varonce1864==NULL)) {
var1865 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1866!=NULL)) {
var1867 = varonce1866;
} else {
var1868 = " * ";
var1870 = (val*)(3l<<2|1);
var1871 = (val*)(3l<<2|1);
var1872 = (val*)((long)(0)<<2|3);
var1873 = (val*)((long)(0)<<2|3);
var1869 = core__flat___CString___to_s_unsafe(var1868, var1870, var1871, var1872, var1873);
var1867 = var1869;
varonce1866 = var1867;
}
((struct instance_core__NativeArray*)var1865)->values[1]=var1867;
} else {
var1865 = varonce1864;
varonce1864 = NULL;
}
{
var1874 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1875 = ((val*(*)(val* self))(var1874->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1874); /* to_s on <var1874:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1865)->values[0]=var1875;
{
var1876 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1877 = ((val*(*)(val* self))(var1876->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1876); /* to_s on <var1876:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1865)->values[2]=var1877;
{
var1878 = ((val*(*)(val* self))(var1865->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1865); /* native_to_s on <var1865:NativeArray[String]>*/
}
varonce1864 = var1865;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2555);
fatal_exit(1);
}
{
var1879 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1878, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1879); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1880!=NULL)) {
var1881 = varonce1880;
} else {
var1882 = "/";
var1884 = (val*)(1l<<2|1);
var1885 = (val*)(1l<<2|1);
var1886 = (val*)((long)(0)<<2|3);
var1887 = (val*)((long)(0)<<2|3);
var1883 = core__flat___CString___to_s_unsafe(var1882, var1884, var1885, var1886, var1887);
var1881 = var1883;
varonce1880 = var1881;
}
{
var1888 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1881); /* == on <var_pname:String>*/
}
if (var1888){
if (unlikely(varonce1889==NULL)) {
var1890 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1891!=NULL)) {
var1892 = varonce1891;
} else {
var1893 = " / ";
var1895 = (val*)(3l<<2|1);
var1896 = (val*)(3l<<2|1);
var1897 = (val*)((long)(0)<<2|3);
var1898 = (val*)((long)(0)<<2|3);
var1894 = core__flat___CString___to_s_unsafe(var1893, var1895, var1896, var1897, var1898);
var1892 = var1894;
varonce1891 = var1892;
}
((struct instance_core__NativeArray*)var1890)->values[1]=var1892;
} else {
var1890 = varonce1889;
varonce1889 = NULL;
}
{
var1899 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1900 = ((val*(*)(val* self))(var1899->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1899); /* to_s on <var1899:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1890)->values[0]=var1900;
{
var1901 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1902 = ((val*(*)(val* self))(var1901->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1901); /* to_s on <var1901:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1890)->values[2]=var1902;
{
var1903 = ((val*(*)(val* self))(var1890->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1890); /* native_to_s on <var1890:NativeArray[String]>*/
}
varonce1889 = var1890;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2558);
fatal_exit(1);
}
{
var1904 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1903, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1904); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1905!=NULL)) {
var1906 = varonce1905;
} else {
var1907 = "==";
var1909 = (val*)(2l<<2|1);
var1910 = (val*)(2l<<2|1);
var1911 = (val*)((long)(0)<<2|3);
var1912 = (val*)((long)(0)<<2|3);
var1908 = core__flat___CString___to_s_unsafe(var1907, var1909, var1910, var1911, var1912);
var1906 = var1908;
varonce1905 = var1906;
}
{
var1913 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1906); /* == on <var_pname:String>*/
}
if (var1913){
{
var1914 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1915 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1916 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1914, var1915);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1916); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1917!=NULL)) {
var1918 = varonce1917;
} else {
var1919 = "!=";
var1921 = (val*)(2l<<2|1);
var1922 = (val*)(2l<<2|1);
var1923 = (val*)((long)(0)<<2|3);
var1924 = (val*)((long)(0)<<2|3);
var1920 = core__flat___CString___to_s_unsafe(var1919, var1921, var1922, var1923, var1924);
var1918 = var1920;
varonce1917 = var1918;
}
{
var1925 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1918); /* == on <var_pname:String>*/
}
if (var1925){
{
var1926 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1927 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1928 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var1926, var1927);
}
var_res1929 = var1928;
if (unlikely(varonce1930==NULL)) {
var1931 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1932!=NULL)) {
var1933 = varonce1932;
} else {
var1934 = "!";
var1936 = (val*)(1l<<2|1);
var1937 = (val*)(1l<<2|1);
var1938 = (val*)((long)(0)<<2|3);
var1939 = (val*)((long)(0)<<2|3);
var1935 = core__flat___CString___to_s_unsafe(var1934, var1936, var1937, var1938, var1939);
var1933 = var1935;
varonce1932 = var1933;
}
((struct instance_core__NativeArray*)var1931)->values[0]=var1933;
} else {
var1931 = varonce1930;
varonce1930 = NULL;
}
{
var1940 = ((val*(*)(val* self))(var_res1929->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1929); /* to_s on <var_res1929:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1931)->values[1]=var1940;
{
var1941 = ((val*(*)(val* self))(var1931->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1931); /* native_to_s on <var1931:NativeArray[String]>*/
}
varonce1930 = var1931;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2565);
fatal_exit(1);
}
{
var1942 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1941, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1942); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1943!=NULL)) {
var1944 = varonce1943;
} else {
var1945 = "<";
var1947 = (val*)(1l<<2|1);
var1948 = (val*)(1l<<2|1);
var1949 = (val*)((long)(0)<<2|3);
var1950 = (val*)((long)(0)<<2|3);
var1946 = core__flat___CString___to_s_unsafe(var1945, var1947, var1948, var1949, var1950);
var1944 = var1946;
varonce1943 = var1944;
}
{
var1951 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1944); /* == on <var_pname:String>*/
}
if (var1951){
if (unlikely(varonce1952==NULL)) {
var1953 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1954!=NULL)) {
var1955 = varonce1954;
} else {
var1956 = " < ";
var1958 = (val*)(3l<<2|1);
var1959 = (val*)(3l<<2|1);
var1960 = (val*)((long)(0)<<2|3);
var1961 = (val*)((long)(0)<<2|3);
var1957 = core__flat___CString___to_s_unsafe(var1956, var1958, var1959, var1960, var1961);
var1955 = var1957;
varonce1954 = var1955;
}
((struct instance_core__NativeArray*)var1953)->values[1]=var1955;
} else {
var1953 = varonce1952;
varonce1952 = NULL;
}
{
var1962 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1963 = ((val*(*)(val* self))(var1962->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1962); /* to_s on <var1962:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1953)->values[0]=var1963;
{
var1964 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1965 = ((val*(*)(val* self))(var1964->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1964); /* to_s on <var1964:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1953)->values[2]=var1965;
{
var1966 = ((val*(*)(val* self))(var1953->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1953); /* native_to_s on <var1953:NativeArray[String]>*/
}
varonce1952 = var1953;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2568);
fatal_exit(1);
}
{
var1967 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1966, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1967); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1968!=NULL)) {
var1969 = varonce1968;
} else {
var1970 = ">";
var1972 = (val*)(1l<<2|1);
var1973 = (val*)(1l<<2|1);
var1974 = (val*)((long)(0)<<2|3);
var1975 = (val*)((long)(0)<<2|3);
var1971 = core__flat___CString___to_s_unsafe(var1970, var1972, var1973, var1974, var1975);
var1969 = var1971;
varonce1968 = var1969;
}
{
var1976 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1969); /* == on <var_pname:String>*/
}
if (var1976){
if (unlikely(varonce1977==NULL)) {
var1978 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1979!=NULL)) {
var1980 = varonce1979;
} else {
var1981 = " > ";
var1983 = (val*)(3l<<2|1);
var1984 = (val*)(3l<<2|1);
var1985 = (val*)((long)(0)<<2|3);
var1986 = (val*)((long)(0)<<2|3);
var1982 = core__flat___CString___to_s_unsafe(var1981, var1983, var1984, var1985, var1986);
var1980 = var1982;
varonce1979 = var1980;
}
((struct instance_core__NativeArray*)var1978)->values[1]=var1980;
} else {
var1978 = varonce1977;
varonce1977 = NULL;
}
{
var1987 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1988 = ((val*(*)(val* self))(var1987->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1987); /* to_s on <var1987:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1978)->values[0]=var1988;
{
var1989 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1990 = ((val*(*)(val* self))(var1989->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1989); /* to_s on <var1989:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1978)->values[2]=var1990;
{
var1991 = ((val*(*)(val* self))(var1978->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1978); /* native_to_s on <var1978:NativeArray[String]>*/
}
varonce1977 = var1978;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2571);
fatal_exit(1);
}
{
var1992 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1991, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1992); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1993!=NULL)) {
var1994 = varonce1993;
} else {
var1995 = "<=";
var1997 = (val*)(2l<<2|1);
var1998 = (val*)(2l<<2|1);
var1999 = (val*)((long)(0)<<2|3);
var2000 = (val*)((long)(0)<<2|3);
var1996 = core__flat___CString___to_s_unsafe(var1995, var1997, var1998, var1999, var2000);
var1994 = var1996;
varonce1993 = var1994;
}
{
var2001 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1994); /* == on <var_pname:String>*/
}
if (var2001){
if (unlikely(varonce2002==NULL)) {
var2003 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2004!=NULL)) {
var2005 = varonce2004;
} else {
var2006 = " <= ";
var2008 = (val*)(4l<<2|1);
var2009 = (val*)(4l<<2|1);
var2010 = (val*)((long)(0)<<2|3);
var2011 = (val*)((long)(0)<<2|3);
var2007 = core__flat___CString___to_s_unsafe(var2006, var2008, var2009, var2010, var2011);
var2005 = var2007;
varonce2004 = var2005;
}
((struct instance_core__NativeArray*)var2003)->values[1]=var2005;
} else {
var2003 = varonce2002;
varonce2002 = NULL;
}
{
var2012 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2013 = ((val*(*)(val* self))(var2012->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2012); /* to_s on <var2012:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2003)->values[0]=var2013;
{
var2014 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2015 = ((val*(*)(val* self))(var2014->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2014); /* to_s on <var2014:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2003)->values[2]=var2015;
{
var2016 = ((val*(*)(val* self))(var2003->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2003); /* native_to_s on <var2003:NativeArray[String]>*/
}
varonce2002 = var2003;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2574);
fatal_exit(1);
}
{
var2017 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2016, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2017); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2018!=NULL)) {
var2019 = varonce2018;
} else {
var2020 = ">=";
var2022 = (val*)(2l<<2|1);
var2023 = (val*)(2l<<2|1);
var2024 = (val*)((long)(0)<<2|3);
var2025 = (val*)((long)(0)<<2|3);
var2021 = core__flat___CString___to_s_unsafe(var2020, var2022, var2023, var2024, var2025);
var2019 = var2021;
varonce2018 = var2019;
}
{
var2026 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2019); /* == on <var_pname:String>*/
}
if (var2026){
if (unlikely(varonce2027==NULL)) {
var2028 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2029!=NULL)) {
var2030 = varonce2029;
} else {
var2031 = " >= ";
var2033 = (val*)(4l<<2|1);
var2034 = (val*)(4l<<2|1);
var2035 = (val*)((long)(0)<<2|3);
var2036 = (val*)((long)(0)<<2|3);
var2032 = core__flat___CString___to_s_unsafe(var2031, var2033, var2034, var2035, var2036);
var2030 = var2032;
varonce2029 = var2030;
}
((struct instance_core__NativeArray*)var2028)->values[1]=var2030;
} else {
var2028 = varonce2027;
varonce2027 = NULL;
}
{
var2037 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2038 = ((val*(*)(val* self))(var2037->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2037); /* to_s on <var2037:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2028)->values[0]=var2038;
{
var2039 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2040 = ((val*(*)(val* self))(var2039->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2039); /* to_s on <var2039:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2028)->values[2]=var2040;
{
var2041 = ((val*(*)(val* self))(var2028->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2028); /* native_to_s on <var2028:NativeArray[String]>*/
}
varonce2027 = var2028;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2577);
fatal_exit(1);
}
{
var2042 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2041, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2042); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2043!=NULL)) {
var2044 = varonce2043;
} else {
var2045 = "to_i";
var2047 = (val*)(4l<<2|1);
var2048 = (val*)(4l<<2|1);
var2049 = (val*)((long)(0)<<2|3);
var2050 = (val*)((long)(0)<<2|3);
var2046 = core__flat___CString___to_s_unsafe(var2045, var2047, var2048, var2049, var2050);
var2044 = var2046;
varonce2043 = var2044;
}
{
var2051 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2044); /* == on <var_pname:String>*/
}
if (var2051){
if (unlikely(varonce2052==NULL)) {
var2053 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2054!=NULL)) {
var2055 = varonce2054;
} else {
var2056 = "(long)";
var2058 = (val*)(6l<<2|1);
var2059 = (val*)(6l<<2|1);
var2060 = (val*)((long)(0)<<2|3);
var2061 = (val*)((long)(0)<<2|3);
var2057 = core__flat___CString___to_s_unsafe(var2056, var2058, var2059, var2060, var2061);
var2055 = var2057;
varonce2054 = var2055;
}
((struct instance_core__NativeArray*)var2053)->values[0]=var2055;
} else {
var2053 = varonce2052;
varonce2052 = NULL;
}
{
var2062 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2063 = ((val*(*)(val* self))(var2062->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2062); /* to_s on <var2062:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2053)->values[1]=var2063;
{
var2064 = ((val*(*)(val* self))(var2053->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2053); /* native_to_s on <var2053:NativeArray[String]>*/
}
varonce2052 = var2053;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2580);
fatal_exit(1);
}
{
var2065 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2064, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2065); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2066!=NULL)) {
var2067 = varonce2066;
} else {
var2068 = "to_b";
var2070 = (val*)(4l<<2|1);
var2071 = (val*)(4l<<2|1);
var2072 = (val*)((long)(0)<<2|3);
var2073 = (val*)((long)(0)<<2|3);
var2069 = core__flat___CString___to_s_unsafe(var2068, var2070, var2071, var2072, var2073);
var2067 = var2069;
varonce2066 = var2067;
}
{
var2074 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2067); /* == on <var_pname:String>*/
}
if (var2074){
if (unlikely(varonce2075==NULL)) {
var2076 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2077!=NULL)) {
var2078 = varonce2077;
} else {
var2079 = "(unsigned char)";
var2081 = (val*)(15l<<2|1);
var2082 = (val*)(15l<<2|1);
var2083 = (val*)((long)(0)<<2|3);
var2084 = (val*)((long)(0)<<2|3);
var2080 = core__flat___CString___to_s_unsafe(var2079, var2081, var2082, var2083, var2084);
var2078 = var2080;
varonce2077 = var2078;
}
((struct instance_core__NativeArray*)var2076)->values[0]=var2078;
} else {
var2076 = varonce2075;
varonce2075 = NULL;
}
{
var2085 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2086 = ((val*(*)(val* self))(var2085->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2085); /* to_s on <var2085:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2076)->values[1]=var2086;
{
var2087 = ((val*(*)(val* self))(var2076->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2076); /* native_to_s on <var2076:NativeArray[String]>*/
}
varonce2075 = var2076;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2583);
fatal_exit(1);
}
{
var2088 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2087, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2088); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2089!=NULL)) {
var2090 = varonce2089;
} else {
var2091 = "to_i8";
var2093 = (val*)(5l<<2|1);
var2094 = (val*)(5l<<2|1);
var2095 = (val*)((long)(0)<<2|3);
var2096 = (val*)((long)(0)<<2|3);
var2092 = core__flat___CString___to_s_unsafe(var2091, var2093, var2094, var2095, var2096);
var2090 = var2092;
varonce2089 = var2090;
}
{
var2097 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2090); /* == on <var_pname:String>*/
}
if (var2097){
if (unlikely(varonce2098==NULL)) {
var2099 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2100!=NULL)) {
var2101 = varonce2100;
} else {
var2102 = "(int8_t)";
var2104 = (val*)(8l<<2|1);
var2105 = (val*)(8l<<2|1);
var2106 = (val*)((long)(0)<<2|3);
var2107 = (val*)((long)(0)<<2|3);
var2103 = core__flat___CString___to_s_unsafe(var2102, var2104, var2105, var2106, var2107);
var2101 = var2103;
varonce2100 = var2101;
}
((struct instance_core__NativeArray*)var2099)->values[0]=var2101;
} else {
var2099 = varonce2098;
varonce2098 = NULL;
}
{
var2108 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2109 = ((val*(*)(val* self))(var2108->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2108); /* to_s on <var2108:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2099)->values[1]=var2109;
{
var2110 = ((val*(*)(val* self))(var2099->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2099); /* native_to_s on <var2099:NativeArray[String]>*/
}
varonce2098 = var2099;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2586);
fatal_exit(1);
}
{
var2111 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2110, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2111); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2112!=NULL)) {
var2113 = varonce2112;
} else {
var2114 = "to_i16";
var2116 = (val*)(6l<<2|1);
var2117 = (val*)(6l<<2|1);
var2118 = (val*)((long)(0)<<2|3);
var2119 = (val*)((long)(0)<<2|3);
var2115 = core__flat___CString___to_s_unsafe(var2114, var2116, var2117, var2118, var2119);
var2113 = var2115;
varonce2112 = var2113;
}
{
var2120 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2113); /* == on <var_pname:String>*/
}
if (var2120){
if (unlikely(varonce2121==NULL)) {
var2122 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2123!=NULL)) {
var2124 = varonce2123;
} else {
var2125 = "(int16_t)";
var2127 = (val*)(9l<<2|1);
var2128 = (val*)(9l<<2|1);
var2129 = (val*)((long)(0)<<2|3);
var2130 = (val*)((long)(0)<<2|3);
var2126 = core__flat___CString___to_s_unsafe(var2125, var2127, var2128, var2129, var2130);
var2124 = var2126;
varonce2123 = var2124;
}
((struct instance_core__NativeArray*)var2122)->values[0]=var2124;
} else {
var2122 = varonce2121;
varonce2121 = NULL;
}
{
var2131 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2132 = ((val*(*)(val* self))(var2131->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2131); /* to_s on <var2131:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2122)->values[1]=var2132;
{
var2133 = ((val*(*)(val* self))(var2122->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2122); /* native_to_s on <var2122:NativeArray[String]>*/
}
varonce2121 = var2122;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2589);
fatal_exit(1);
}
{
var2134 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2133, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2134); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2135!=NULL)) {
var2136 = varonce2135;
} else {
var2137 = "to_u16";
var2139 = (val*)(6l<<2|1);
var2140 = (val*)(6l<<2|1);
var2141 = (val*)((long)(0)<<2|3);
var2142 = (val*)((long)(0)<<2|3);
var2138 = core__flat___CString___to_s_unsafe(var2137, var2139, var2140, var2141, var2142);
var2136 = var2138;
varonce2135 = var2136;
}
{
var2143 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2136); /* == on <var_pname:String>*/
}
if (var2143){
if (unlikely(varonce2144==NULL)) {
var2145 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2146!=NULL)) {
var2147 = varonce2146;
} else {
var2148 = "(uint16_t)";
var2150 = (val*)(10l<<2|1);
var2151 = (val*)(10l<<2|1);
var2152 = (val*)((long)(0)<<2|3);
var2153 = (val*)((long)(0)<<2|3);
var2149 = core__flat___CString___to_s_unsafe(var2148, var2150, var2151, var2152, var2153);
var2147 = var2149;
varonce2146 = var2147;
}
((struct instance_core__NativeArray*)var2145)->values[0]=var2147;
} else {
var2145 = varonce2144;
varonce2144 = NULL;
}
{
var2154 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2155 = ((val*(*)(val* self))(var2154->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2154); /* to_s on <var2154:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2145)->values[1]=var2155;
{
var2156 = ((val*(*)(val* self))(var2145->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2145); /* native_to_s on <var2145:NativeArray[String]>*/
}
varonce2144 = var2145;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2592);
fatal_exit(1);
}
{
var2157 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2156, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2157); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2158!=NULL)) {
var2159 = varonce2158;
} else {
var2160 = "to_i32";
var2162 = (val*)(6l<<2|1);
var2163 = (val*)(6l<<2|1);
var2164 = (val*)((long)(0)<<2|3);
var2165 = (val*)((long)(0)<<2|3);
var2161 = core__flat___CString___to_s_unsafe(var2160, var2162, var2163, var2164, var2165);
var2159 = var2161;
varonce2158 = var2159;
}
{
var2166 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2159); /* == on <var_pname:String>*/
}
if (var2166){
if (unlikely(varonce2167==NULL)) {
var2168 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2169!=NULL)) {
var2170 = varonce2169;
} else {
var2171 = "(int32_t)";
var2173 = (val*)(9l<<2|1);
var2174 = (val*)(9l<<2|1);
var2175 = (val*)((long)(0)<<2|3);
var2176 = (val*)((long)(0)<<2|3);
var2172 = core__flat___CString___to_s_unsafe(var2171, var2173, var2174, var2175, var2176);
var2170 = var2172;
varonce2169 = var2170;
}
((struct instance_core__NativeArray*)var2168)->values[0]=var2170;
} else {
var2168 = varonce2167;
varonce2167 = NULL;
}
{
var2177 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2178 = ((val*(*)(val* self))(var2177->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2177); /* to_s on <var2177:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2168)->values[1]=var2178;
{
var2179 = ((val*(*)(val* self))(var2168->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2168); /* native_to_s on <var2168:NativeArray[String]>*/
}
varonce2167 = var2168;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2595);
fatal_exit(1);
}
{
var2180 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2179, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2180); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2181!=NULL)) {
var2182 = varonce2181;
} else {
var2183 = "to_u32";
var2185 = (val*)(6l<<2|1);
var2186 = (val*)(6l<<2|1);
var2187 = (val*)((long)(0)<<2|3);
var2188 = (val*)((long)(0)<<2|3);
var2184 = core__flat___CString___to_s_unsafe(var2183, var2185, var2186, var2187, var2188);
var2182 = var2184;
varonce2181 = var2182;
}
{
var2189 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2182); /* == on <var_pname:String>*/
}
if (var2189){
if (unlikely(varonce2190==NULL)) {
var2191 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2192!=NULL)) {
var2193 = varonce2192;
} else {
var2194 = "(uint32_t)";
var2196 = (val*)(10l<<2|1);
var2197 = (val*)(10l<<2|1);
var2198 = (val*)((long)(0)<<2|3);
var2199 = (val*)((long)(0)<<2|3);
var2195 = core__flat___CString___to_s_unsafe(var2194, var2196, var2197, var2198, var2199);
var2193 = var2195;
varonce2192 = var2193;
}
((struct instance_core__NativeArray*)var2191)->values[0]=var2193;
} else {
var2191 = varonce2190;
varonce2190 = NULL;
}
{
var2200 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2201 = ((val*(*)(val* self))(var2200->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2200); /* to_s on <var2200:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2191)->values[1]=var2201;
{
var2202 = ((val*(*)(val* self))(var2191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2191); /* native_to_s on <var2191:NativeArray[String]>*/
}
varonce2190 = var2191;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2598);
fatal_exit(1);
}
{
var2203 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2202, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2203); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce2204!=NULL)) {
var2205 = varonce2204;
} else {
var2206 = "CString";
var2208 = (val*)(7l<<2|1);
var2209 = (val*)(7l<<2|1);
var2210 = (val*)((long)(0)<<2|3);
var2211 = (val*)((long)(0)<<2|3);
var2207 = core__flat___CString___to_s_unsafe(var2206, var2208, var2209, var2210, var2211);
var2205 = var2207;
varonce2204 = var2205;
}
{
var2212 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var2205); /* == on <var_cname:String>*/
}
if (var2212){
if (likely(varonce2213!=NULL)) {
var2214 = varonce2213;
} else {
var2215 = "[]";
var2217 = (val*)(2l<<2|1);
var2218 = (val*)(2l<<2|1);
var2219 = (val*)((long)(0)<<2|3);
var2220 = (val*)((long)(0)<<2|3);
var2216 = core__flat___CString___to_s_unsafe(var2215, var2217, var2218, var2219, var2220);
var2214 = var2216;
varonce2213 = var2214;
}
{
var2221 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2214); /* == on <var_pname:String>*/
}
if (var2221){
if (unlikely(varonce2222==NULL)) {
var2223 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce2224!=NULL)) {
var2225 = varonce2224;
} else {
var2226 = "(unsigned char)((int)";
var2228 = (val*)(21l<<2|1);
var2229 = (val*)(21l<<2|1);
var2230 = (val*)((long)(0)<<2|3);
var2231 = (val*)((long)(0)<<2|3);
var2227 = core__flat___CString___to_s_unsafe(var2226, var2228, var2229, var2230, var2231);
var2225 = var2227;
varonce2224 = var2225;
}
((struct instance_core__NativeArray*)var2223)->values[0]=var2225;
if (likely(varonce2232!=NULL)) {
var2233 = varonce2232;
} else {
var2234 = "[";
var2236 = (val*)(1l<<2|1);
var2237 = (val*)(1l<<2|1);
var2238 = (val*)((long)(0)<<2|3);
var2239 = (val*)((long)(0)<<2|3);
var2235 = core__flat___CString___to_s_unsafe(var2234, var2236, var2237, var2238, var2239);
var2233 = var2235;
varonce2232 = var2233;
}
((struct instance_core__NativeArray*)var2223)->values[2]=var2233;
if (likely(varonce2240!=NULL)) {
var2241 = varonce2240;
} else {
var2242 = "])";
var2244 = (val*)(2l<<2|1);
var2245 = (val*)(2l<<2|1);
var2246 = (val*)((long)(0)<<2|3);
var2247 = (val*)((long)(0)<<2|3);
var2243 = core__flat___CString___to_s_unsafe(var2242, var2244, var2245, var2246, var2247);
var2241 = var2243;
varonce2240 = var2241;
}
((struct instance_core__NativeArray*)var2223)->values[4]=var2241;
} else {
var2223 = varonce2222;
varonce2222 = NULL;
}
{
var2248 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2249 = ((val*(*)(val* self))(var2248->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2248); /* to_s on <var2248:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2223)->values[1]=var2249;
{
var2250 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2251 = ((val*(*)(val* self))(var2250->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2250); /* to_s on <var2250:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2223)->values[3]=var2251;
{
var2252 = ((val*(*)(val* self))(var2223->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2223); /* native_to_s on <var2223:NativeArray[String]>*/
}
varonce2222 = var2223;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2603);
fatal_exit(1);
}
{
var2253 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2252, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2253); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2254!=NULL)) {
var2255 = varonce2254;
} else {
var2256 = "[]=";
var2258 = (val*)(3l<<2|1);
var2259 = (val*)(3l<<2|1);
var2260 = (val*)((long)(0)<<2|3);
var2261 = (val*)((long)(0)<<2|3);
var2257 = core__flat___CString___to_s_unsafe(var2256, var2258, var2259, var2260, var2261);
var2255 = var2257;
varonce2254 = var2255;
}
{
var2262 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2255); /* == on <var_pname:String>*/
}
if (var2262){
if (unlikely(varonce2263==NULL)) {
var2264 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce2265!=NULL)) {
var2266 = varonce2265;
} else {
var2267 = "[";
var2269 = (val*)(1l<<2|1);
var2270 = (val*)(1l<<2|1);
var2271 = (val*)((long)(0)<<2|3);
var2272 = (val*)((long)(0)<<2|3);
var2268 = core__flat___CString___to_s_unsafe(var2267, var2269, var2270, var2271, var2272);
var2266 = var2268;
varonce2265 = var2266;
}
((struct instance_core__NativeArray*)var2264)->values[1]=var2266;
if (likely(varonce2273!=NULL)) {
var2274 = varonce2273;
} else {
var2275 = "]=(unsigned char)";
var2277 = (val*)(17l<<2|1);
var2278 = (val*)(17l<<2|1);
var2279 = (val*)((long)(0)<<2|3);
var2280 = (val*)((long)(0)<<2|3);
var2276 = core__flat___CString___to_s_unsafe(var2275, var2277, var2278, var2279, var2280);
var2274 = var2276;
varonce2273 = var2274;
}
((struct instance_core__NativeArray*)var2264)->values[3]=var2274;
if (likely(varonce2281!=NULL)) {
var2282 = varonce2281;
} else {
var2283 = ";";
var2285 = (val*)(1l<<2|1);
var2286 = (val*)(1l<<2|1);
var2287 = (val*)((long)(0)<<2|3);
var2288 = (val*)((long)(0)<<2|3);
var2284 = core__flat___CString___to_s_unsafe(var2283, var2285, var2286, var2287, var2288);
var2282 = var2284;
varonce2281 = var2282;
}
((struct instance_core__NativeArray*)var2264)->values[5]=var2282;
} else {
var2264 = varonce2263;
varonce2263 = NULL;
}
{
var2289 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2290 = ((val*(*)(val* self))(var2289->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2289); /* to_s on <var2289:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2264)->values[0]=var2290;
{
var2291 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2292 = ((val*(*)(val* self))(var2291->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2291); /* to_s on <var2291:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2264)->values[2]=var2292;
{
var2293 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var2294 = ((val*(*)(val* self))(var2293->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2293); /* to_s on <var2293:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2264)->values[4]=var2294;
{
var2295 = ((val*(*)(val* self))(var2264->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2264); /* native_to_s on <var2264:NativeArray[String]>*/
}
varonce2263 = var2264;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var2295); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2296!=NULL)) {
var2297 = varonce2296;
} else {
var2298 = "copy_to";
var2300 = (val*)(7l<<2|1);
var2301 = (val*)(7l<<2|1);
var2302 = (val*)((long)(0)<<2|3);
var2303 = (val*)((long)(0)<<2|3);
var2299 = core__flat___CString___to_s_unsafe(var2298, var2300, var2301, var2302, var2303);
var2297 = var2299;
varonce2296 = var2297;
}
{
var2304 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2297); /* == on <var_pname:String>*/
}
if (var2304){
if (unlikely(varonce2305==NULL)) {
var2306 = NEW_core__NativeArray((int)11l, &type_core__NativeArray__core__String);
if (likely(varonce2307!=NULL)) {
var2308 = varonce2307;
} else {
var2309 = "memmove(";
var2311 = (val*)(8l<<2|1);
var2312 = (val*)(8l<<2|1);
var2313 = (val*)((long)(0)<<2|3);
var2314 = (val*)((long)(0)<<2|3);
var2310 = core__flat___CString___to_s_unsafe(var2309, var2311, var2312, var2313, var2314);
var2308 = var2310;
varonce2307 = var2308;
}
((struct instance_core__NativeArray*)var2306)->values[0]=var2308;
if (likely(varonce2315!=NULL)) {
var2316 = varonce2315;
} else {
var2317 = "+";
var2319 = (val*)(1l<<2|1);
var2320 = (val*)(1l<<2|1);
var2321 = (val*)((long)(0)<<2|3);
var2322 = (val*)((long)(0)<<2|3);
var2318 = core__flat___CString___to_s_unsafe(var2317, var2319, var2320, var2321, var2322);
var2316 = var2318;
varonce2315 = var2316;
}
((struct instance_core__NativeArray*)var2306)->values[2]=var2316;
if (likely(varonce2323!=NULL)) {
var2324 = varonce2323;
} else {
var2325 = ",";
var2327 = (val*)(1l<<2|1);
var2328 = (val*)(1l<<2|1);
var2329 = (val*)((long)(0)<<2|3);
var2330 = (val*)((long)(0)<<2|3);
var2326 = core__flat___CString___to_s_unsafe(var2325, var2327, var2328, var2329, var2330);
var2324 = var2326;
varonce2323 = var2324;
}
((struct instance_core__NativeArray*)var2306)->values[4]=var2324;
if (likely(varonce2331!=NULL)) {
var2332 = varonce2331;
} else {
var2333 = "+";
var2335 = (val*)(1l<<2|1);
var2336 = (val*)(1l<<2|1);
var2337 = (val*)((long)(0)<<2|3);
var2338 = (val*)((long)(0)<<2|3);
var2334 = core__flat___CString___to_s_unsafe(var2333, var2335, var2336, var2337, var2338);
var2332 = var2334;
varonce2331 = var2332;
}
((struct instance_core__NativeArray*)var2306)->values[6]=var2332;
if (likely(varonce2339!=NULL)) {
var2340 = varonce2339;
} else {
var2341 = ",";
var2343 = (val*)(1l<<2|1);
var2344 = (val*)(1l<<2|1);
var2345 = (val*)((long)(0)<<2|3);
var2346 = (val*)((long)(0)<<2|3);
var2342 = core__flat___CString___to_s_unsafe(var2341, var2343, var2344, var2345, var2346);
var2340 = var2342;
varonce2339 = var2340;
}
((struct instance_core__NativeArray*)var2306)->values[8]=var2340;
if (likely(varonce2347!=NULL)) {
var2348 = varonce2347;
} else {
var2349 = ");";
var2351 = (val*)(2l<<2|1);
var2352 = (val*)(2l<<2|1);
var2353 = (val*)((long)(0)<<2|3);
var2354 = (val*)((long)(0)<<2|3);
var2350 = core__flat___CString___to_s_unsafe(var2349, var2351, var2352, var2353, var2354);
var2348 = var2350;
varonce2347 = var2348;
}
((struct instance_core__NativeArray*)var2306)->values[10]=var2348;
} else {
var2306 = varonce2305;
varonce2305 = NULL;
}
{
var2355 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2356 = ((val*(*)(val* self))(var2355->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2355); /* to_s on <var2355:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2306)->values[1]=var2356;
{
var2357 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 4l);
}
{
var2358 = ((val*(*)(val* self))(var2357->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2357); /* to_s on <var2357:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2306)->values[3]=var2358;
{
var2359 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2360 = ((val*(*)(val* self))(var2359->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2359); /* to_s on <var2359:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2306)->values[5]=var2360;
{
var2361 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 3l);
}
{
var2362 = ((val*(*)(val* self))(var2361->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2361); /* to_s on <var2361:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2306)->values[7]=var2362;
{
var2363 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var2364 = ((val*(*)(val* self))(var2363->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2363); /* to_s on <var2363:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2306)->values[9]=var2364;
{
var2365 = ((val*(*)(val* self))(var2306->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2306); /* native_to_s on <var2306:NativeArray[String]>*/
}
varonce2305 = var2306;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var2365); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2366!=NULL)) {
var2367 = varonce2366;
} else {
var2368 = "atoi";
var2370 = (val*)(4l<<2|1);
var2371 = (val*)(4l<<2|1);
var2372 = (val*)((long)(0)<<2|3);
var2373 = (val*)((long)(0)<<2|3);
var2369 = core__flat___CString___to_s_unsafe(var2368, var2370, var2371, var2372, var2373);
var2367 = var2369;
varonce2366 = var2367;
}
{
var2374 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2367); /* == on <var_pname:String>*/
}
if (var2374){
if (unlikely(varonce2375==NULL)) {
var2376 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2377!=NULL)) {
var2378 = varonce2377;
} else {
var2379 = "atoi(";
var2381 = (val*)(5l<<2|1);
var2382 = (val*)(5l<<2|1);
var2383 = (val*)((long)(0)<<2|3);
var2384 = (val*)((long)(0)<<2|3);
var2380 = core__flat___CString___to_s_unsafe(var2379, var2381, var2382, var2383, var2384);
var2378 = var2380;
varonce2377 = var2378;
}
((struct instance_core__NativeArray*)var2376)->values[0]=var2378;
if (likely(varonce2385!=NULL)) {
var2386 = varonce2385;
} else {
var2387 = ");";
var2389 = (val*)(2l<<2|1);
var2390 = (val*)(2l<<2|1);
var2391 = (val*)((long)(0)<<2|3);
var2392 = (val*)((long)(0)<<2|3);
var2388 = core__flat___CString___to_s_unsafe(var2387, var2389, var2390, var2391, var2392);
var2386 = var2388;
varonce2385 = var2386;
}
((struct instance_core__NativeArray*)var2376)->values[2]=var2386;
} else {
var2376 = varonce2375;
varonce2375 = NULL;
}
{
var2393 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2394 = ((val*(*)(val* self))(var2393->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2393); /* to_s on <var2393:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2376)->values[1]=var2394;
{
var2395 = ((val*(*)(val* self))(var2376->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2376); /* native_to_s on <var2376:NativeArray[String]>*/
}
varonce2375 = var2376;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2612);
fatal_exit(1);
}
{
var2396 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2395, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2396); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2397!=NULL)) {
var2398 = varonce2397;
} else {
var2399 = "fast_cstring";
var2401 = (val*)(12l<<2|1);
var2402 = (val*)(12l<<2|1);
var2403 = (val*)((long)(0)<<2|3);
var2404 = (val*)((long)(0)<<2|3);
var2400 = core__flat___CString___to_s_unsafe(var2399, var2401, var2402, var2403, var2404);
var2398 = var2400;
varonce2397 = var2398;
}
{
var2405 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2398); /* == on <var_pname:String>*/
}
if (var2405){
if (unlikely(varonce2406==NULL)) {
var2407 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2408!=NULL)) {
var2409 = varonce2408;
} else {
var2410 = " + ";
var2412 = (val*)(3l<<2|1);
var2413 = (val*)(3l<<2|1);
var2414 = (val*)((long)(0)<<2|3);
var2415 = (val*)((long)(0)<<2|3);
var2411 = core__flat___CString___to_s_unsafe(var2410, var2412, var2413, var2414, var2415);
var2409 = var2411;
varonce2408 = var2409;
}
((struct instance_core__NativeArray*)var2407)->values[1]=var2409;
} else {
var2407 = varonce2406;
varonce2406 = NULL;
}
{
var2416 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2417 = ((val*(*)(val* self))(var2416->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2416); /* to_s on <var2416:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2407)->values[0]=var2417;
{
var2418 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2419 = ((val*(*)(val* self))(var2418->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2418); /* to_s on <var2418:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2407)->values[2]=var2419;
{
var2420 = ((val*(*)(val* self))(var2407->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2407); /* native_to_s on <var2407:NativeArray[String]>*/
}
varonce2406 = var2407;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2615);
fatal_exit(1);
}
{
var2421 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2420, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2421); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2422!=NULL)) {
var2423 = varonce2422;
} else {
var2424 = "==";
var2426 = (val*)(2l<<2|1);
var2427 = (val*)(2l<<2|1);
var2428 = (val*)((long)(0)<<2|3);
var2429 = (val*)((long)(0)<<2|3);
var2425 = core__flat___CString___to_s_unsafe(var2424, var2426, var2427, var2428, var2429);
var2423 = var2425;
varonce2422 = var2423;
}
{
var2430 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2423); /* == on <var_pname:String>*/
}
if (var2430){
{
var2431 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2432 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2433 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var2431, var2432);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2433); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2434!=NULL)) {
var2435 = varonce2434;
} else {
var2436 = "!=";
var2438 = (val*)(2l<<2|1);
var2439 = (val*)(2l<<2|1);
var2440 = (val*)((long)(0)<<2|3);
var2441 = (val*)((long)(0)<<2|3);
var2437 = core__flat___CString___to_s_unsafe(var2436, var2438, var2439, var2440, var2441);
var2435 = var2437;
varonce2434 = var2435;
}
{
var2442 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2435); /* == on <var_pname:String>*/
}
if (var2442){
{
var2443 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2444 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2445 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var2443, var2444);
}
var_res2446 = var2445;
if (unlikely(varonce2447==NULL)) {
var2448 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2449!=NULL)) {
var2450 = varonce2449;
} else {
var2451 = "!";
var2453 = (val*)(1l<<2|1);
var2454 = (val*)(1l<<2|1);
var2455 = (val*)((long)(0)<<2|3);
var2456 = (val*)((long)(0)<<2|3);
var2452 = core__flat___CString___to_s_unsafe(var2451, var2453, var2454, var2455, var2456);
var2450 = var2452;
varonce2449 = var2450;
}
((struct instance_core__NativeArray*)var2448)->values[0]=var2450;
} else {
var2448 = varonce2447;
varonce2447 = NULL;
}
{
var2457 = ((val*(*)(val* self))(var_res2446->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res2446); /* to_s on <var_res2446:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var2448)->values[1]=var2457;
{
var2458 = ((val*(*)(val* self))(var2448->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2448); /* native_to_s on <var2448:NativeArray[String]>*/
}
varonce2447 = var2448;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2622);
fatal_exit(1);
}
{
var2459 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2458, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2459); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2460!=NULL)) {
var2461 = varonce2460;
} else {
var2462 = "new";
var2464 = (val*)(3l<<2|1);
var2465 = (val*)(3l<<2|1);
var2466 = (val*)((long)(0)<<2|3);
var2467 = (val*)((long)(0)<<2|3);
var2463 = core__flat___CString___to_s_unsafe(var2462, var2464, var2465, var2466, var2467);
var2461 = var2463;
varonce2460 = var2461;
}
{
var2468 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2461); /* == on <var_pname:String>*/
}
if (var2468){
{
var2469 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2470 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__to_s(var2469);
}
if (likely(varonce2471!=NULL)) {
var2472 = varonce2471;
} else {
var2473 = "CString";
var2475 = (val*)(7l<<2|1);
var2476 = (val*)(7l<<2|1);
var2477 = (val*)((long)(0)<<2|3);
var2478 = (val*)((long)(0)<<2|3);
var2474 = core__flat___CString___to_s_unsafe(var2473, var2475, var2476, var2477, var2478);
var2472 = var2474;
varonce2471 = var2472;
}
{
var2479 = nitc___nitc__AbstractCompilerVisitor___nit_alloc(var_v, var2470, var2472);
}
var_alloc = var2479;
if (unlikely(varonce2480==NULL)) {
var2481 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2482!=NULL)) {
var2483 = varonce2482;
} else {
var2484 = "(char*)";
var2486 = (val*)(7l<<2|1);
var2487 = (val*)(7l<<2|1);
var2488 = (val*)((long)(0)<<2|3);
var2489 = (val*)((long)(0)<<2|3);
var2485 = core__flat___CString___to_s_unsafe(var2484, var2486, var2487, var2488, var2489);
var2483 = var2485;
varonce2482 = var2483;
}
((struct instance_core__NativeArray*)var2481)->values[0]=var2483;
} else {
var2481 = varonce2480;
varonce2480 = NULL;
}
((struct instance_core__NativeArray*)var2481)->values[1]=var_alloc;
{
var2490 = ((val*(*)(val* self))(var2481->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2481); /* native_to_s on <var2481:NativeArray[String]>*/
}
varonce2480 = var2481;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2626);
fatal_exit(1);
}
{
var2491 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2490, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2491); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2492!=NULL)) {
var2493 = varonce2492;
} else {
var2494 = "fetch_4_chars";
var2496 = (val*)(13l<<2|1);
var2497 = (val*)(13l<<2|1);
var2498 = (val*)((long)(0)<<2|3);
var2499 = (val*)((long)(0)<<2|3);
var2495 = core__flat___CString___to_s_unsafe(var2494, var2496, var2497, var2498, var2499);
var2493 = var2495;
varonce2492 = var2493;
}
{
var2500 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2493); /* == on <var_pname:String>*/
}
if (var2500){
if (unlikely(varonce2501==NULL)) {
var2502 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce2503!=NULL)) {
var2504 = varonce2503;
} else {
var2505 = "*((uint32_t*)(";
var2507 = (val*)(14l<<2|1);
var2508 = (val*)(14l<<2|1);
var2509 = (val*)((long)(0)<<2|3);
var2510 = (val*)((long)(0)<<2|3);
var2506 = core__flat___CString___to_s_unsafe(var2505, var2507, var2508, var2509, var2510);
var2504 = var2506;
varonce2503 = var2504;
}
((struct instance_core__NativeArray*)var2502)->values[0]=var2504;
if (likely(varonce2511!=NULL)) {
var2512 = varonce2511;
} else {
var2513 = " + ";
var2515 = (val*)(3l<<2|1);
var2516 = (val*)(3l<<2|1);
var2517 = (val*)((long)(0)<<2|3);
var2518 = (val*)((long)(0)<<2|3);
var2514 = core__flat___CString___to_s_unsafe(var2513, var2515, var2516, var2517, var2518);
var2512 = var2514;
varonce2511 = var2512;
}
((struct instance_core__NativeArray*)var2502)->values[2]=var2512;
if (likely(varonce2519!=NULL)) {
var2520 = varonce2519;
} else {
var2521 = "))";
var2523 = (val*)(2l<<2|1);
var2524 = (val*)(2l<<2|1);
var2525 = (val*)((long)(0)<<2|3);
var2526 = (val*)((long)(0)<<2|3);
var2522 = core__flat___CString___to_s_unsafe(var2521, var2523, var2524, var2525, var2526);
var2520 = var2522;
varonce2519 = var2520;
}
((struct instance_core__NativeArray*)var2502)->values[4]=var2520;
} else {
var2502 = varonce2501;
varonce2501 = NULL;
}
{
var2527 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2528 = ((val*(*)(val* self))(var2527->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2527); /* to_s on <var2527:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2502)->values[1]=var2528;
{
var2529 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2530 = ((val*(*)(val* self))(var2529->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2529); /* to_s on <var2529:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2502)->values[3]=var2530;
{
var2531 = ((val*(*)(val* self))(var2502->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2502); /* native_to_s on <var2502:NativeArray[String]>*/
}
varonce2501 = var2502;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2629);
fatal_exit(1);
}
{
var2532 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2531, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2532); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2533!=NULL)) {
var2534 = varonce2533;
} else {
var2535 = "fetch_4_hchars";
var2537 = (val*)(14l<<2|1);
var2538 = (val*)(14l<<2|1);
var2539 = (val*)((long)(0)<<2|3);
var2540 = (val*)((long)(0)<<2|3);
var2536 = core__flat___CString___to_s_unsafe(var2535, var2537, var2538, var2539, var2540);
var2534 = var2536;
varonce2533 = var2534;
}
{
var2541 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2534); /* == on <var_pname:String>*/
}
if (var2541){
if (unlikely(varonce2542==NULL)) {
var2543 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce2544!=NULL)) {
var2545 = varonce2544;
} else {
var2546 = "(uint32_t)be32toh(*((uint32_t*)(";
var2548 = (val*)(32l<<2|1);
var2549 = (val*)(32l<<2|1);
var2550 = (val*)((long)(0)<<2|3);
var2551 = (val*)((long)(0)<<2|3);
var2547 = core__flat___CString___to_s_unsafe(var2546, var2548, var2549, var2550, var2551);
var2545 = var2547;
varonce2544 = var2545;
}
((struct instance_core__NativeArray*)var2543)->values[0]=var2545;
if (likely(varonce2552!=NULL)) {
var2553 = varonce2552;
} else {
var2554 = " + ";
var2556 = (val*)(3l<<2|1);
var2557 = (val*)(3l<<2|1);
var2558 = (val*)((long)(0)<<2|3);
var2559 = (val*)((long)(0)<<2|3);
var2555 = core__flat___CString___to_s_unsafe(var2554, var2556, var2557, var2558, var2559);
var2553 = var2555;
varonce2552 = var2553;
}
((struct instance_core__NativeArray*)var2543)->values[2]=var2553;
if (likely(varonce2560!=NULL)) {
var2561 = varonce2560;
} else {
var2562 = ")))";
var2564 = (val*)(3l<<2|1);
var2565 = (val*)(3l<<2|1);
var2566 = (val*)((long)(0)<<2|3);
var2567 = (val*)((long)(0)<<2|3);
var2563 = core__flat___CString___to_s_unsafe(var2562, var2564, var2565, var2566, var2567);
var2561 = var2563;
varonce2560 = var2561;
}
((struct instance_core__NativeArray*)var2543)->values[4]=var2561;
} else {
var2543 = varonce2542;
varonce2542 = NULL;
}
{
var2568 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2569 = ((val*(*)(val* self))(var2568->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2568); /* to_s on <var2568:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2543)->values[1]=var2569;
{
var2570 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2571 = ((val*(*)(val* self))(var2570->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2570); /* to_s on <var2570:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2543)->values[3]=var2571;
{
var2572 = ((val*(*)(val* self))(var2543->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2543); /* native_to_s on <var2543:NativeArray[String]>*/
}
varonce2542 = var2543;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2632);
fatal_exit(1);
}
{
var2573 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2572, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2573); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce2574!=NULL)) {
var2575 = varonce2574;
} else {
var2576 = "NativeArray";
var2578 = (val*)(11l<<2|1);
var2579 = (val*)(11l<<2|1);
var2580 = (val*)((long)(0)<<2|3);
var2581 = (val*)((long)(0)<<2|3);
var2577 = core__flat___CString___to_s_unsafe(var2576, var2578, var2579, var2580, var2581);
var2575 = var2577;
varonce2574 = var2575;
}
{
var2582 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var2575); /* == on <var_cname:String>*/
}
if (var2582){
{
var2583 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_def(var_v, var_pname, var_ret, var_arguments);
}
var = var2583;
goto RET_LABEL;
} else {
if (likely(varonce2584!=NULL)) {
var2585 = varonce2584;
} else {
var2586 = "Int8";
var2588 = (val*)(4l<<2|1);
var2589 = (val*)(4l<<2|1);
var2590 = (val*)((long)(0)<<2|3);
var2591 = (val*)((long)(0)<<2|3);
var2587 = core__flat___CString___to_s_unsafe(var2586, var2588, var2589, var2590, var2591);
var2585 = var2587;
varonce2584 = var2585;
}
{
var2592 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var2585); /* == on <var_cname:String>*/
}
if (var2592){
if (likely(varonce2593!=NULL)) {
var2594 = varonce2593;
} else {
var2595 = "output";
var2597 = (val*)(6l<<2|1);
var2598 = (val*)(6l<<2|1);
var2599 = (val*)((long)(0)<<2|3);
var2600 = (val*)((long)(0)<<2|3);
var2596 = core__flat___CString___to_s_unsafe(var2595, var2597, var2598, var2599, var2600);
var2594 = var2596;
varonce2593 = var2594;
}
{
var2601 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2594); /* == on <var_pname:String>*/
}
if (var2601){
if (unlikely(varonce2602==NULL)) {
var2603 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2604!=NULL)) {
var2605 = varonce2604;
} else {
var2606 = "printf(\"%\"PRIi8 \"\\n\", ";
var2608 = (val*)(22l<<2|1);
var2609 = (val*)(22l<<2|1);
var2610 = (val*)((long)(0)<<2|3);
var2611 = (val*)((long)(0)<<2|3);
var2607 = core__flat___CString___to_s_unsafe(var2606, var2608, var2609, var2610, var2611);
var2605 = var2607;
varonce2604 = var2605;
}
((struct instance_core__NativeArray*)var2603)->values[0]=var2605;
if (likely(varonce2612!=NULL)) {
var2613 = varonce2612;
} else {
var2614 = ");";
var2616 = (val*)(2l<<2|1);
var2617 = (val*)(2l<<2|1);
var2618 = (val*)((long)(0)<<2|3);
var2619 = (val*)((long)(0)<<2|3);
var2615 = core__flat___CString___to_s_unsafe(var2614, var2616, var2617, var2618, var2619);
var2613 = var2615;
varonce2612 = var2613;
}
((struct instance_core__NativeArray*)var2603)->values[2]=var2613;
} else {
var2603 = varonce2602;
varonce2602 = NULL;
}
{
var2620 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var2621 = ((val*(*)(val* self))(var2620->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2620); /* to_s on <var2620:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2603)->values[1]=var2621;
{
var2622 = ((val*(*)(val* self))(var2603->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2603); /* native_to_s on <var2603:NativeArray[String]>*/
}
varonce2602 = var2603;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var2622); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2623!=NULL)) {
var2624 = varonce2623;
} else {
var2625 = "object_id";
var2627 = (val*)(9l<<2|1);
var2628 = (val*)(9l<<2|1);
var2629 = (val*)((long)(0)<<2|3);
var2630 = (val*)((long)(0)<<2|3);
var2626 = core__flat___CString___to_s_unsafe(var2625, var2627, var2628, var2629, var2630);
var2624 = var2626;
varonce2623 = var2624;
}
{
var2631 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2624); /* == on <var_pname:String>*/
}
if (var2631){
if (unlikely(varonce2632==NULL)) {
var2633 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2634!=NULL)) {
var2635 = varonce2634;
} else {
var2636 = "(long)";
var2638 = (val*)(6l<<2|1);
var2639 = (val*)(6l<<2|1);
var2640 = (val*)((long)(0)<<2|3);
var2641 = (val*)((long)(0)<<2|3);
var2637 = core__flat___CString___to_s_unsafe(var2636, var2638, var2639, var2640, var2641);
var2635 = var2637;
varonce2634 = var2635;
}
((struct instance_core__NativeArray*)var2633)->values[0]=var2635;
} else {
var2633 = varonce2632;
varonce2632 = NULL;
}
{
var2642 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var2643 = ((val*(*)(val* self))(var2642->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2642); /* to_s on <var2642:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2633)->values[1]=var2643;
{
var2644 = ((val*(*)(val* self))(var2633->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2633); /* native_to_s on <var2633:NativeArray[String]>*/
}
varonce2632 = var2633;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2642);
fatal_exit(1);
}
{
var2645 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2644, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2645); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2646!=NULL)) {
var2647 = varonce2646;
} else {
var2648 = "+";
var2650 = (val*)(1l<<2|1);
var2651 = (val*)(1l<<2|1);
var2652 = (val*)((long)(0)<<2|3);
var2653 = (val*)((long)(0)<<2|3);
var2649 = core__flat___CString___to_s_unsafe(var2648, var2650, var2651, var2652, var2653);
var2647 = var2649;
varonce2646 = var2647;
}
{
var2654 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2647); /* == on <var_pname:String>*/
}
if (var2654){
if (unlikely(varonce2655==NULL)) {
var2656 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2657!=NULL)) {
var2658 = varonce2657;
} else {
var2659 = " + ";
var2661 = (val*)(3l<<2|1);
var2662 = (val*)(3l<<2|1);
var2663 = (val*)((long)(0)<<2|3);
var2664 = (val*)((long)(0)<<2|3);
var2660 = core__flat___CString___to_s_unsafe(var2659, var2661, var2662, var2663, var2664);
var2658 = var2660;
varonce2657 = var2658;
}
((struct instance_core__NativeArray*)var2656)->values[1]=var2658;
} else {
var2656 = varonce2655;
varonce2655 = NULL;
}
{
var2665 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2666 = ((val*(*)(val* self))(var2665->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2665); /* to_s on <var2665:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2656)->values[0]=var2666;
{
var2667 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2668 = ((val*(*)(val* self))(var2667->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2667); /* to_s on <var2667:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2656)->values[2]=var2668;
{
var2669 = ((val*(*)(val* self))(var2656->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2656); /* native_to_s on <var2656:NativeArray[String]>*/
}
varonce2655 = var2656;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2645);
fatal_exit(1);
}
{
var2670 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2669, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2670); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2671!=NULL)) {
var2672 = varonce2671;
} else {
var2673 = "-";
var2675 = (val*)(1l<<2|1);
var2676 = (val*)(1l<<2|1);
var2677 = (val*)((long)(0)<<2|3);
var2678 = (val*)((long)(0)<<2|3);
var2674 = core__flat___CString___to_s_unsafe(var2673, var2675, var2676, var2677, var2678);
var2672 = var2674;
varonce2671 = var2672;
}
{
var2679 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2672); /* == on <var_pname:String>*/
}
if (var2679){
if (unlikely(varonce2680==NULL)) {
var2681 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2682!=NULL)) {
var2683 = varonce2682;
} else {
var2684 = " - ";
var2686 = (val*)(3l<<2|1);
var2687 = (val*)(3l<<2|1);
var2688 = (val*)((long)(0)<<2|3);
var2689 = (val*)((long)(0)<<2|3);
var2685 = core__flat___CString___to_s_unsafe(var2684, var2686, var2687, var2688, var2689);
var2683 = var2685;
varonce2682 = var2683;
}
((struct instance_core__NativeArray*)var2681)->values[1]=var2683;
} else {
var2681 = varonce2680;
varonce2680 = NULL;
}
{
var2690 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2691 = ((val*(*)(val* self))(var2690->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2690); /* to_s on <var2690:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2681)->values[0]=var2691;
{
var2692 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2693 = ((val*(*)(val* self))(var2692->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2692); /* to_s on <var2692:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2681)->values[2]=var2693;
{
var2694 = ((val*(*)(val* self))(var2681->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2681); /* native_to_s on <var2681:NativeArray[String]>*/
}
varonce2680 = var2681;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2648);
fatal_exit(1);
}
{
var2695 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2694, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2695); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2696!=NULL)) {
var2697 = varonce2696;
} else {
var2698 = "unary -";
var2700 = (val*)(7l<<2|1);
var2701 = (val*)(7l<<2|1);
var2702 = (val*)((long)(0)<<2|3);
var2703 = (val*)((long)(0)<<2|3);
var2699 = core__flat___CString___to_s_unsafe(var2698, var2700, var2701, var2702, var2703);
var2697 = var2699;
varonce2696 = var2697;
}
{
var2704 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2697); /* == on <var_pname:String>*/
}
if (var2704){
if (unlikely(varonce2705==NULL)) {
var2706 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2707!=NULL)) {
var2708 = varonce2707;
} else {
var2709 = "-";
var2711 = (val*)(1l<<2|1);
var2712 = (val*)(1l<<2|1);
var2713 = (val*)((long)(0)<<2|3);
var2714 = (val*)((long)(0)<<2|3);
var2710 = core__flat___CString___to_s_unsafe(var2709, var2711, var2712, var2713, var2714);
var2708 = var2710;
varonce2707 = var2708;
}
((struct instance_core__NativeArray*)var2706)->values[0]=var2708;
} else {
var2706 = varonce2705;
varonce2705 = NULL;
}
{
var2715 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2716 = ((val*(*)(val* self))(var2715->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2715); /* to_s on <var2715:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2706)->values[1]=var2716;
{
var2717 = ((val*(*)(val* self))(var2706->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2706); /* native_to_s on <var2706:NativeArray[String]>*/
}
varonce2705 = var2706;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2651);
fatal_exit(1);
}
{
var2718 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2717, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2718); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2719!=NULL)) {
var2720 = varonce2719;
} else {
var2721 = "unary +";
var2723 = (val*)(7l<<2|1);
var2724 = (val*)(7l<<2|1);
var2725 = (val*)((long)(0)<<2|3);
var2726 = (val*)((long)(0)<<2|3);
var2722 = core__flat___CString___to_s_unsafe(var2721, var2723, var2724, var2725, var2726);
var2720 = var2722;
varonce2719 = var2720;
}
{
var2727 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2720); /* == on <var_pname:String>*/
}
if (var2727){
{
var2728 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2728); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2729!=NULL)) {
var2730 = varonce2729;
} else {
var2731 = "*";
var2733 = (val*)(1l<<2|1);
var2734 = (val*)(1l<<2|1);
var2735 = (val*)((long)(0)<<2|3);
var2736 = (val*)((long)(0)<<2|3);
var2732 = core__flat___CString___to_s_unsafe(var2731, var2733, var2734, var2735, var2736);
var2730 = var2732;
varonce2729 = var2730;
}
{
var2737 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2730); /* == on <var_pname:String>*/
}
if (var2737){
if (unlikely(varonce2738==NULL)) {
var2739 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2740!=NULL)) {
var2741 = varonce2740;
} else {
var2742 = " * ";
var2744 = (val*)(3l<<2|1);
var2745 = (val*)(3l<<2|1);
var2746 = (val*)((long)(0)<<2|3);
var2747 = (val*)((long)(0)<<2|3);
var2743 = core__flat___CString___to_s_unsafe(var2742, var2744, var2745, var2746, var2747);
var2741 = var2743;
varonce2740 = var2741;
}
((struct instance_core__NativeArray*)var2739)->values[1]=var2741;
} else {
var2739 = varonce2738;
varonce2738 = NULL;
}
{
var2748 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2749 = ((val*(*)(val* self))(var2748->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2748); /* to_s on <var2748:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2739)->values[0]=var2749;
{
var2750 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2751 = ((val*(*)(val* self))(var2750->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2750); /* to_s on <var2750:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2739)->values[2]=var2751;
{
var2752 = ((val*(*)(val* self))(var2739->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2739); /* native_to_s on <var2739:NativeArray[String]>*/
}
varonce2738 = var2739;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2657);
fatal_exit(1);
}
{
var2753 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2752, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2753); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2754!=NULL)) {
var2755 = varonce2754;
} else {
var2756 = "/";
var2758 = (val*)(1l<<2|1);
var2759 = (val*)(1l<<2|1);
var2760 = (val*)((long)(0)<<2|3);
var2761 = (val*)((long)(0)<<2|3);
var2757 = core__flat___CString___to_s_unsafe(var2756, var2758, var2759, var2760, var2761);
var2755 = var2757;
varonce2754 = var2755;
}
{
var2762 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2755); /* == on <var_pname:String>*/
}
if (var2762){
if (unlikely(varonce2763==NULL)) {
var2764 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2765!=NULL)) {
var2766 = varonce2765;
} else {
var2767 = " / ";
var2769 = (val*)(3l<<2|1);
var2770 = (val*)(3l<<2|1);
var2771 = (val*)((long)(0)<<2|3);
var2772 = (val*)((long)(0)<<2|3);
var2768 = core__flat___CString___to_s_unsafe(var2767, var2769, var2770, var2771, var2772);
var2766 = var2768;
varonce2765 = var2766;
}
((struct instance_core__NativeArray*)var2764)->values[1]=var2766;
} else {
var2764 = varonce2763;
varonce2763 = NULL;
}
{
var2773 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2774 = ((val*(*)(val* self))(var2773->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2773); /* to_s on <var2773:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2764)->values[0]=var2774;
{
var2775 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2776 = ((val*(*)(val* self))(var2775->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2775); /* to_s on <var2775:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2764)->values[2]=var2776;
{
var2777 = ((val*(*)(val* self))(var2764->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2764); /* native_to_s on <var2764:NativeArray[String]>*/
}
varonce2763 = var2764;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2660);
fatal_exit(1);
}
{
var2778 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2777, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2778); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2779!=NULL)) {
var2780 = varonce2779;
} else {
var2781 = "%";
var2783 = (val*)(1l<<2|1);
var2784 = (val*)(1l<<2|1);
var2785 = (val*)((long)(0)<<2|3);
var2786 = (val*)((long)(0)<<2|3);
var2782 = core__flat___CString___to_s_unsafe(var2781, var2783, var2784, var2785, var2786);
var2780 = var2782;
varonce2779 = var2780;
}
{
var2787 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2780); /* == on <var_pname:String>*/
}
if (var2787){
if (unlikely(varonce2788==NULL)) {
var2789 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2790!=NULL)) {
var2791 = varonce2790;
} else {
var2792 = " % ";
var2794 = (val*)(3l<<2|1);
var2795 = (val*)(3l<<2|1);
var2796 = (val*)((long)(0)<<2|3);
var2797 = (val*)((long)(0)<<2|3);
var2793 = core__flat___CString___to_s_unsafe(var2792, var2794, var2795, var2796, var2797);
var2791 = var2793;
varonce2790 = var2791;
}
((struct instance_core__NativeArray*)var2789)->values[1]=var2791;
} else {
var2789 = varonce2788;
varonce2788 = NULL;
}
{
var2798 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2799 = ((val*(*)(val* self))(var2798->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2798); /* to_s on <var2798:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2789)->values[0]=var2799;
{
var2800 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2801 = ((val*(*)(val* self))(var2800->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2800); /* to_s on <var2800:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2789)->values[2]=var2801;
{
var2802 = ((val*(*)(val* self))(var2789->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2789); /* native_to_s on <var2789:NativeArray[String]>*/
}
varonce2788 = var2789;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2663);
fatal_exit(1);
}
{
var2803 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2802, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2803); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2804!=NULL)) {
var2805 = varonce2804;
} else {
var2806 = "<<";
var2808 = (val*)(2l<<2|1);
var2809 = (val*)(2l<<2|1);
var2810 = (val*)((long)(0)<<2|3);
var2811 = (val*)((long)(0)<<2|3);
var2807 = core__flat___CString___to_s_unsafe(var2806, var2808, var2809, var2810, var2811);
var2805 = var2807;
varonce2804 = var2805;
}
{
var2812 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2805); /* == on <var_pname:String>*/
}
if (var2812){
if (unlikely(varonce2813==NULL)) {
var2814 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2815!=NULL)) {
var2816 = varonce2815;
} else {
var2817 = " << ";
var2819 = (val*)(4l<<2|1);
var2820 = (val*)(4l<<2|1);
var2821 = (val*)((long)(0)<<2|3);
var2822 = (val*)((long)(0)<<2|3);
var2818 = core__flat___CString___to_s_unsafe(var2817, var2819, var2820, var2821, var2822);
var2816 = var2818;
varonce2815 = var2816;
}
((struct instance_core__NativeArray*)var2814)->values[1]=var2816;
} else {
var2814 = varonce2813;
varonce2813 = NULL;
}
{
var2823 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2824 = ((val*(*)(val* self))(var2823->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2823); /* to_s on <var2823:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2814)->values[0]=var2824;
{
var2825 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2826 = ((val*(*)(val* self))(var2825->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2825); /* to_s on <var2825:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2814)->values[2]=var2826;
{
var2827 = ((val*(*)(val* self))(var2814->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2814); /* native_to_s on <var2814:NativeArray[String]>*/
}
varonce2813 = var2814;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2666);
fatal_exit(1);
}
{
var2828 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2827, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2828); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2829!=NULL)) {
var2830 = varonce2829;
} else {
var2831 = ">>";
var2833 = (val*)(2l<<2|1);
var2834 = (val*)(2l<<2|1);
var2835 = (val*)((long)(0)<<2|3);
var2836 = (val*)((long)(0)<<2|3);
var2832 = core__flat___CString___to_s_unsafe(var2831, var2833, var2834, var2835, var2836);
var2830 = var2832;
varonce2829 = var2830;
}
{
var2837 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2830); /* == on <var_pname:String>*/
}
if (var2837){
if (unlikely(varonce2838==NULL)) {
var2839 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2840!=NULL)) {
var2841 = varonce2840;
} else {
var2842 = " >> ";
var2844 = (val*)(4l<<2|1);
var2845 = (val*)(4l<<2|1);
var2846 = (val*)((long)(0)<<2|3);
var2847 = (val*)((long)(0)<<2|3);
var2843 = core__flat___CString___to_s_unsafe(var2842, var2844, var2845, var2846, var2847);
var2841 = var2843;
varonce2840 = var2841;
}
((struct instance_core__NativeArray*)var2839)->values[1]=var2841;
} else {
var2839 = varonce2838;
varonce2838 = NULL;
}
{
var2848 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2849 = ((val*(*)(val* self))(var2848->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2848); /* to_s on <var2848:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2839)->values[0]=var2849;
{
var2850 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2851 = ((val*(*)(val* self))(var2850->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2850); /* to_s on <var2850:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2839)->values[2]=var2851;
{
var2852 = ((val*(*)(val* self))(var2839->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2839); /* native_to_s on <var2839:NativeArray[String]>*/
}
varonce2838 = var2839;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2669);
fatal_exit(1);
}
{
var2853 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2852, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2853); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2854!=NULL)) {
var2855 = varonce2854;
} else {
var2856 = "==";
var2858 = (val*)(2l<<2|1);
var2859 = (val*)(2l<<2|1);
var2860 = (val*)((long)(0)<<2|3);
var2861 = (val*)((long)(0)<<2|3);
var2857 = core__flat___CString___to_s_unsafe(var2856, var2858, var2859, var2860, var2861);
var2855 = var2857;
varonce2854 = var2855;
}
{
var2862 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2855); /* == on <var_pname:String>*/
}
if (var2862){
{
var2863 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2864 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2865 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var2863, var2864);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2865); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2866!=NULL)) {
var2867 = varonce2866;
} else {
var2868 = "!=";
var2870 = (val*)(2l<<2|1);
var2871 = (val*)(2l<<2|1);
var2872 = (val*)((long)(0)<<2|3);
var2873 = (val*)((long)(0)<<2|3);
var2869 = core__flat___CString___to_s_unsafe(var2868, var2870, var2871, var2872, var2873);
var2867 = var2869;
varonce2866 = var2867;
}
{
var2874 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2867); /* == on <var_pname:String>*/
}
if (var2874){
{
var2875 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2876 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2877 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var2875, var2876);
}
var_res2878 = var2877;
if (unlikely(varonce2879==NULL)) {
var2880 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2881!=NULL)) {
var2882 = varonce2881;
} else {
var2883 = "!";
var2885 = (val*)(1l<<2|1);
var2886 = (val*)(1l<<2|1);
var2887 = (val*)((long)(0)<<2|3);
var2888 = (val*)((long)(0)<<2|3);
var2884 = core__flat___CString___to_s_unsafe(var2883, var2885, var2886, var2887, var2888);
var2882 = var2884;
varonce2881 = var2882;
}
((struct instance_core__NativeArray*)var2880)->values[0]=var2882;
} else {
var2880 = varonce2879;
varonce2879 = NULL;
}
{
var2889 = ((val*(*)(val* self))(var_res2878->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res2878); /* to_s on <var_res2878:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var2880)->values[1]=var2889;
{
var2890 = ((val*(*)(val* self))(var2880->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2880); /* native_to_s on <var2880:NativeArray[String]>*/
}
varonce2879 = var2880;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2676);
fatal_exit(1);
}
{
var2891 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2890, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2891); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2892!=NULL)) {
var2893 = varonce2892;
} else {
var2894 = "<";
var2896 = (val*)(1l<<2|1);
var2897 = (val*)(1l<<2|1);
var2898 = (val*)((long)(0)<<2|3);
var2899 = (val*)((long)(0)<<2|3);
var2895 = core__flat___CString___to_s_unsafe(var2894, var2896, var2897, var2898, var2899);
var2893 = var2895;
varonce2892 = var2893;
}
{
var2900 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2893); /* == on <var_pname:String>*/
}
if (var2900){
if (unlikely(varonce2901==NULL)) {
var2902 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2903!=NULL)) {
var2904 = varonce2903;
} else {
var2905 = " < ";
var2907 = (val*)(3l<<2|1);
var2908 = (val*)(3l<<2|1);
var2909 = (val*)((long)(0)<<2|3);
var2910 = (val*)((long)(0)<<2|3);
var2906 = core__flat___CString___to_s_unsafe(var2905, var2907, var2908, var2909, var2910);
var2904 = var2906;
varonce2903 = var2904;
}
((struct instance_core__NativeArray*)var2902)->values[1]=var2904;
} else {
var2902 = varonce2901;
varonce2901 = NULL;
}
{
var2911 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2912 = ((val*(*)(val* self))(var2911->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2911); /* to_s on <var2911:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2902)->values[0]=var2912;
{
var2913 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2914 = ((val*(*)(val* self))(var2913->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2913); /* to_s on <var2913:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2902)->values[2]=var2914;
{
var2915 = ((val*(*)(val* self))(var2902->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2902); /* native_to_s on <var2902:NativeArray[String]>*/
}
varonce2901 = var2902;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2679);
fatal_exit(1);
}
{
var2916 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2915, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2916); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2917!=NULL)) {
var2918 = varonce2917;
} else {
var2919 = ">";
var2921 = (val*)(1l<<2|1);
var2922 = (val*)(1l<<2|1);
var2923 = (val*)((long)(0)<<2|3);
var2924 = (val*)((long)(0)<<2|3);
var2920 = core__flat___CString___to_s_unsafe(var2919, var2921, var2922, var2923, var2924);
var2918 = var2920;
varonce2917 = var2918;
}
{
var2925 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2918); /* == on <var_pname:String>*/
}
if (var2925){
if (unlikely(varonce2926==NULL)) {
var2927 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2928!=NULL)) {
var2929 = varonce2928;
} else {
var2930 = " > ";
var2932 = (val*)(3l<<2|1);
var2933 = (val*)(3l<<2|1);
var2934 = (val*)((long)(0)<<2|3);
var2935 = (val*)((long)(0)<<2|3);
var2931 = core__flat___CString___to_s_unsafe(var2930, var2932, var2933, var2934, var2935);
var2929 = var2931;
varonce2928 = var2929;
}
((struct instance_core__NativeArray*)var2927)->values[1]=var2929;
} else {
var2927 = varonce2926;
varonce2926 = NULL;
}
{
var2936 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2937 = ((val*(*)(val* self))(var2936->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2936); /* to_s on <var2936:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2927)->values[0]=var2937;
{
var2938 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2939 = ((val*(*)(val* self))(var2938->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2938); /* to_s on <var2938:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2927)->values[2]=var2939;
{
var2940 = ((val*(*)(val* self))(var2927->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2927); /* native_to_s on <var2927:NativeArray[String]>*/
}
varonce2926 = var2927;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2682);
fatal_exit(1);
}
{
var2941 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2940, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2941); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2942!=NULL)) {
var2943 = varonce2942;
} else {
var2944 = "<=";
var2946 = (val*)(2l<<2|1);
var2947 = (val*)(2l<<2|1);
var2948 = (val*)((long)(0)<<2|3);
var2949 = (val*)((long)(0)<<2|3);
var2945 = core__flat___CString___to_s_unsafe(var2944, var2946, var2947, var2948, var2949);
var2943 = var2945;
varonce2942 = var2943;
}
{
var2950 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2943); /* == on <var_pname:String>*/
}
if (var2950){
if (unlikely(varonce2951==NULL)) {
var2952 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2953!=NULL)) {
var2954 = varonce2953;
} else {
var2955 = " <= ";
var2957 = (val*)(4l<<2|1);
var2958 = (val*)(4l<<2|1);
var2959 = (val*)((long)(0)<<2|3);
var2960 = (val*)((long)(0)<<2|3);
var2956 = core__flat___CString___to_s_unsafe(var2955, var2957, var2958, var2959, var2960);
var2954 = var2956;
varonce2953 = var2954;
}
((struct instance_core__NativeArray*)var2952)->values[1]=var2954;
} else {
var2952 = varonce2951;
varonce2951 = NULL;
}
{
var2961 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2962 = ((val*(*)(val* self))(var2961->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2961); /* to_s on <var2961:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2952)->values[0]=var2962;
{
var2963 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2964 = ((val*(*)(val* self))(var2963->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2963); /* to_s on <var2963:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2952)->values[2]=var2964;
{
var2965 = ((val*(*)(val* self))(var2952->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2952); /* native_to_s on <var2952:NativeArray[String]>*/
}
varonce2951 = var2952;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2685);
fatal_exit(1);
}
{
var2966 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2965, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2966); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2967!=NULL)) {
var2968 = varonce2967;
} else {
var2969 = ">=";
var2971 = (val*)(2l<<2|1);
var2972 = (val*)(2l<<2|1);
var2973 = (val*)((long)(0)<<2|3);
var2974 = (val*)((long)(0)<<2|3);
var2970 = core__flat___CString___to_s_unsafe(var2969, var2971, var2972, var2973, var2974);
var2968 = var2970;
varonce2967 = var2968;
}
{
var2975 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2968); /* == on <var_pname:String>*/
}
if (var2975){
if (unlikely(varonce2976==NULL)) {
var2977 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2978!=NULL)) {
var2979 = varonce2978;
} else {
var2980 = " >= ";
var2982 = (val*)(4l<<2|1);
var2983 = (val*)(4l<<2|1);
var2984 = (val*)((long)(0)<<2|3);
var2985 = (val*)((long)(0)<<2|3);
var2981 = core__flat___CString___to_s_unsafe(var2980, var2982, var2983, var2984, var2985);
var2979 = var2981;
varonce2978 = var2979;
}
((struct instance_core__NativeArray*)var2977)->values[1]=var2979;
} else {
var2977 = varonce2976;
varonce2976 = NULL;
}
{
var2986 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2987 = ((val*(*)(val* self))(var2986->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2986); /* to_s on <var2986:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2977)->values[0]=var2987;
{
var2988 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2989 = ((val*(*)(val* self))(var2988->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2988); /* to_s on <var2988:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2977)->values[2]=var2989;
{
var2990 = ((val*(*)(val* self))(var2977->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2977); /* native_to_s on <var2977:NativeArray[String]>*/
}
varonce2976 = var2977;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2688);
fatal_exit(1);
}
{
var2991 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2990, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2991); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2992!=NULL)) {
var2993 = varonce2992;
} else {
var2994 = "to_i";
var2996 = (val*)(4l<<2|1);
var2997 = (val*)(4l<<2|1);
var2998 = (val*)((long)(0)<<2|3);
var2999 = (val*)((long)(0)<<2|3);
var2995 = core__flat___CString___to_s_unsafe(var2994, var2996, var2997, var2998, var2999);
var2993 = var2995;
varonce2992 = var2993;
}
{
var3000 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2993); /* == on <var_pname:String>*/
}
if (var3000){
if (unlikely(varonce3001==NULL)) {
var3002 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3003!=NULL)) {
var3004 = varonce3003;
} else {
var3005 = "(long)";
var3007 = (val*)(6l<<2|1);
var3008 = (val*)(6l<<2|1);
var3009 = (val*)((long)(0)<<2|3);
var3010 = (val*)((long)(0)<<2|3);
var3006 = core__flat___CString___to_s_unsafe(var3005, var3007, var3008, var3009, var3010);
var3004 = var3006;
varonce3003 = var3004;
}
((struct instance_core__NativeArray*)var3002)->values[0]=var3004;
} else {
var3002 = varonce3001;
varonce3001 = NULL;
}
{
var3011 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3012 = ((val*(*)(val* self))(var3011->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3011); /* to_s on <var3011:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3002)->values[1]=var3012;
{
var3013 = ((val*(*)(val* self))(var3002->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3002); /* native_to_s on <var3002:NativeArray[String]>*/
}
varonce3001 = var3002;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2691);
fatal_exit(1);
}
{
var3014 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3013, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3014); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3015!=NULL)) {
var3016 = varonce3015;
} else {
var3017 = "to_b";
var3019 = (val*)(4l<<2|1);
var3020 = (val*)(4l<<2|1);
var3021 = (val*)((long)(0)<<2|3);
var3022 = (val*)((long)(0)<<2|3);
var3018 = core__flat___CString___to_s_unsafe(var3017, var3019, var3020, var3021, var3022);
var3016 = var3018;
varonce3015 = var3016;
}
{
var3023 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3016); /* == on <var_pname:String>*/
}
if (var3023){
if (unlikely(varonce3024==NULL)) {
var3025 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3026!=NULL)) {
var3027 = varonce3026;
} else {
var3028 = "(unsigned char)";
var3030 = (val*)(15l<<2|1);
var3031 = (val*)(15l<<2|1);
var3032 = (val*)((long)(0)<<2|3);
var3033 = (val*)((long)(0)<<2|3);
var3029 = core__flat___CString___to_s_unsafe(var3028, var3030, var3031, var3032, var3033);
var3027 = var3029;
varonce3026 = var3027;
}
((struct instance_core__NativeArray*)var3025)->values[0]=var3027;
} else {
var3025 = varonce3024;
varonce3024 = NULL;
}
{
var3034 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3035 = ((val*(*)(val* self))(var3034->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3034); /* to_s on <var3034:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3025)->values[1]=var3035;
{
var3036 = ((val*(*)(val* self))(var3025->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3025); /* native_to_s on <var3025:NativeArray[String]>*/
}
varonce3024 = var3025;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2694);
fatal_exit(1);
}
{
var3037 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3036, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3037); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3038!=NULL)) {
var3039 = varonce3038;
} else {
var3040 = "to_i16";
var3042 = (val*)(6l<<2|1);
var3043 = (val*)(6l<<2|1);
var3044 = (val*)((long)(0)<<2|3);
var3045 = (val*)((long)(0)<<2|3);
var3041 = core__flat___CString___to_s_unsafe(var3040, var3042, var3043, var3044, var3045);
var3039 = var3041;
varonce3038 = var3039;
}
{
var3046 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3039); /* == on <var_pname:String>*/
}
if (var3046){
if (unlikely(varonce3047==NULL)) {
var3048 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3049!=NULL)) {
var3050 = varonce3049;
} else {
var3051 = "(int16_t)";
var3053 = (val*)(9l<<2|1);
var3054 = (val*)(9l<<2|1);
var3055 = (val*)((long)(0)<<2|3);
var3056 = (val*)((long)(0)<<2|3);
var3052 = core__flat___CString___to_s_unsafe(var3051, var3053, var3054, var3055, var3056);
var3050 = var3052;
varonce3049 = var3050;
}
((struct instance_core__NativeArray*)var3048)->values[0]=var3050;
} else {
var3048 = varonce3047;
varonce3047 = NULL;
}
{
var3057 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3058 = ((val*(*)(val* self))(var3057->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3057); /* to_s on <var3057:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3048)->values[1]=var3058;
{
var3059 = ((val*(*)(val* self))(var3048->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3048); /* native_to_s on <var3048:NativeArray[String]>*/
}
varonce3047 = var3048;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2697);
fatal_exit(1);
}
{
var3060 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3059, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3060); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3061!=NULL)) {
var3062 = varonce3061;
} else {
var3063 = "to_u16";
var3065 = (val*)(6l<<2|1);
var3066 = (val*)(6l<<2|1);
var3067 = (val*)((long)(0)<<2|3);
var3068 = (val*)((long)(0)<<2|3);
var3064 = core__flat___CString___to_s_unsafe(var3063, var3065, var3066, var3067, var3068);
var3062 = var3064;
varonce3061 = var3062;
}
{
var3069 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3062); /* == on <var_pname:String>*/
}
if (var3069){
if (unlikely(varonce3070==NULL)) {
var3071 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3072!=NULL)) {
var3073 = varonce3072;
} else {
var3074 = "(uint16_t)";
var3076 = (val*)(10l<<2|1);
var3077 = (val*)(10l<<2|1);
var3078 = (val*)((long)(0)<<2|3);
var3079 = (val*)((long)(0)<<2|3);
var3075 = core__flat___CString___to_s_unsafe(var3074, var3076, var3077, var3078, var3079);
var3073 = var3075;
varonce3072 = var3073;
}
((struct instance_core__NativeArray*)var3071)->values[0]=var3073;
} else {
var3071 = varonce3070;
varonce3070 = NULL;
}
{
var3080 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3081 = ((val*(*)(val* self))(var3080->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3080); /* to_s on <var3080:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3071)->values[1]=var3081;
{
var3082 = ((val*(*)(val* self))(var3071->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3071); /* native_to_s on <var3071:NativeArray[String]>*/
}
varonce3070 = var3071;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2700);
fatal_exit(1);
}
{
var3083 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3082, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3083); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3084!=NULL)) {
var3085 = varonce3084;
} else {
var3086 = "to_i32";
var3088 = (val*)(6l<<2|1);
var3089 = (val*)(6l<<2|1);
var3090 = (val*)((long)(0)<<2|3);
var3091 = (val*)((long)(0)<<2|3);
var3087 = core__flat___CString___to_s_unsafe(var3086, var3088, var3089, var3090, var3091);
var3085 = var3087;
varonce3084 = var3085;
}
{
var3092 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3085); /* == on <var_pname:String>*/
}
if (var3092){
if (unlikely(varonce3093==NULL)) {
var3094 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3095!=NULL)) {
var3096 = varonce3095;
} else {
var3097 = "(int32_t)";
var3099 = (val*)(9l<<2|1);
var3100 = (val*)(9l<<2|1);
var3101 = (val*)((long)(0)<<2|3);
var3102 = (val*)((long)(0)<<2|3);
var3098 = core__flat___CString___to_s_unsafe(var3097, var3099, var3100, var3101, var3102);
var3096 = var3098;
varonce3095 = var3096;
}
((struct instance_core__NativeArray*)var3094)->values[0]=var3096;
} else {
var3094 = varonce3093;
varonce3093 = NULL;
}
{
var3103 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3104 = ((val*(*)(val* self))(var3103->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3103); /* to_s on <var3103:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3094)->values[1]=var3104;
{
var3105 = ((val*(*)(val* self))(var3094->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3094); /* native_to_s on <var3094:NativeArray[String]>*/
}
varonce3093 = var3094;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2703);
fatal_exit(1);
}
{
var3106 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3105, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3106); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3107!=NULL)) {
var3108 = varonce3107;
} else {
var3109 = "to_u32";
var3111 = (val*)(6l<<2|1);
var3112 = (val*)(6l<<2|1);
var3113 = (val*)((long)(0)<<2|3);
var3114 = (val*)((long)(0)<<2|3);
var3110 = core__flat___CString___to_s_unsafe(var3109, var3111, var3112, var3113, var3114);
var3108 = var3110;
varonce3107 = var3108;
}
{
var3115 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3108); /* == on <var_pname:String>*/
}
if (var3115){
if (unlikely(varonce3116==NULL)) {
var3117 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3118!=NULL)) {
var3119 = varonce3118;
} else {
var3120 = "(uint32_t)";
var3122 = (val*)(10l<<2|1);
var3123 = (val*)(10l<<2|1);
var3124 = (val*)((long)(0)<<2|3);
var3125 = (val*)((long)(0)<<2|3);
var3121 = core__flat___CString___to_s_unsafe(var3120, var3122, var3123, var3124, var3125);
var3119 = var3121;
varonce3118 = var3119;
}
((struct instance_core__NativeArray*)var3117)->values[0]=var3119;
} else {
var3117 = varonce3116;
varonce3116 = NULL;
}
{
var3126 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3127 = ((val*(*)(val* self))(var3126->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3126); /* to_s on <var3126:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3117)->values[1]=var3127;
{
var3128 = ((val*(*)(val* self))(var3117->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3117); /* native_to_s on <var3117:NativeArray[String]>*/
}
varonce3116 = var3117;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2706);
fatal_exit(1);
}
{
var3129 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3128, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3129); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3130!=NULL)) {
var3131 = varonce3130;
} else {
var3132 = "to_f";
var3134 = (val*)(4l<<2|1);
var3135 = (val*)(4l<<2|1);
var3136 = (val*)((long)(0)<<2|3);
var3137 = (val*)((long)(0)<<2|3);
var3133 = core__flat___CString___to_s_unsafe(var3132, var3134, var3135, var3136, var3137);
var3131 = var3133;
varonce3130 = var3131;
}
{
var3138 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3131); /* == on <var_pname:String>*/
}
if (var3138){
if (unlikely(varonce3139==NULL)) {
var3140 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3141!=NULL)) {
var3142 = varonce3141;
} else {
var3143 = "(double)";
var3145 = (val*)(8l<<2|1);
var3146 = (val*)(8l<<2|1);
var3147 = (val*)((long)(0)<<2|3);
var3148 = (val*)((long)(0)<<2|3);
var3144 = core__flat___CString___to_s_unsafe(var3143, var3145, var3146, var3147, var3148);
var3142 = var3144;
varonce3141 = var3142;
}
((struct instance_core__NativeArray*)var3140)->values[0]=var3142;
} else {
var3140 = varonce3139;
varonce3139 = NULL;
}
{
var3149 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3150 = ((val*(*)(val* self))(var3149->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3149); /* to_s on <var3149:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3140)->values[1]=var3150;
{
var3151 = ((val*(*)(val* self))(var3140->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3140); /* native_to_s on <var3140:NativeArray[String]>*/
}
varonce3139 = var3140;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2709);
fatal_exit(1);
}
{
var3152 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3151, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3152); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3153!=NULL)) {
var3154 = varonce3153;
} else {
var3155 = "&";
var3157 = (val*)(1l<<2|1);
var3158 = (val*)(1l<<2|1);
var3159 = (val*)((long)(0)<<2|3);
var3160 = (val*)((long)(0)<<2|3);
var3156 = core__flat___CString___to_s_unsafe(var3155, var3157, var3158, var3159, var3160);
var3154 = var3156;
varonce3153 = var3154;
}
{
var3161 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3154); /* == on <var_pname:String>*/
}
if (var3161){
if (unlikely(varonce3162==NULL)) {
var3163 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3164!=NULL)) {
var3165 = varonce3164;
} else {
var3166 = " & ";
var3168 = (val*)(3l<<2|1);
var3169 = (val*)(3l<<2|1);
var3170 = (val*)((long)(0)<<2|3);
var3171 = (val*)((long)(0)<<2|3);
var3167 = core__flat___CString___to_s_unsafe(var3166, var3168, var3169, var3170, var3171);
var3165 = var3167;
varonce3164 = var3165;
}
((struct instance_core__NativeArray*)var3163)->values[1]=var3165;
} else {
var3163 = varonce3162;
varonce3162 = NULL;
}
{
var3172 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3173 = ((val*(*)(val* self))(var3172->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3172); /* to_s on <var3172:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3163)->values[0]=var3173;
{
var3174 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3175 = ((val*(*)(val* self))(var3174->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3174); /* to_s on <var3174:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3163)->values[2]=var3175;
{
var3176 = ((val*(*)(val* self))(var3163->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3163); /* native_to_s on <var3163:NativeArray[String]>*/
}
varonce3162 = var3163;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2712);
fatal_exit(1);
}
{
var3177 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3176, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3177); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3178!=NULL)) {
var3179 = varonce3178;
} else {
var3180 = "|";
var3182 = (val*)(1l<<2|1);
var3183 = (val*)(1l<<2|1);
var3184 = (val*)((long)(0)<<2|3);
var3185 = (val*)((long)(0)<<2|3);
var3181 = core__flat___CString___to_s_unsafe(var3180, var3182, var3183, var3184, var3185);
var3179 = var3181;
varonce3178 = var3179;
}
{
var3186 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3179); /* == on <var_pname:String>*/
}
if (var3186){
if (unlikely(varonce3187==NULL)) {
var3188 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3189!=NULL)) {
var3190 = varonce3189;
} else {
var3191 = " | ";
var3193 = (val*)(3l<<2|1);
var3194 = (val*)(3l<<2|1);
var3195 = (val*)((long)(0)<<2|3);
var3196 = (val*)((long)(0)<<2|3);
var3192 = core__flat___CString___to_s_unsafe(var3191, var3193, var3194, var3195, var3196);
var3190 = var3192;
varonce3189 = var3190;
}
((struct instance_core__NativeArray*)var3188)->values[1]=var3190;
} else {
var3188 = varonce3187;
varonce3187 = NULL;
}
{
var3197 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3198 = ((val*(*)(val* self))(var3197->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3197); /* to_s on <var3197:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3188)->values[0]=var3198;
{
var3199 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3200 = ((val*(*)(val* self))(var3199->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3199); /* to_s on <var3199:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3188)->values[2]=var3200;
{
var3201 = ((val*(*)(val* self))(var3188->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3188); /* native_to_s on <var3188:NativeArray[String]>*/
}
varonce3187 = var3188;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2715);
fatal_exit(1);
}
{
var3202 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3201, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3202); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3203!=NULL)) {
var3204 = varonce3203;
} else {
var3205 = "^";
var3207 = (val*)(1l<<2|1);
var3208 = (val*)(1l<<2|1);
var3209 = (val*)((long)(0)<<2|3);
var3210 = (val*)((long)(0)<<2|3);
var3206 = core__flat___CString___to_s_unsafe(var3205, var3207, var3208, var3209, var3210);
var3204 = var3206;
varonce3203 = var3204;
}
{
var3211 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3204); /* == on <var_pname:String>*/
}
if (var3211){
if (unlikely(varonce3212==NULL)) {
var3213 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3214!=NULL)) {
var3215 = varonce3214;
} else {
var3216 = " ^ ";
var3218 = (val*)(3l<<2|1);
var3219 = (val*)(3l<<2|1);
var3220 = (val*)((long)(0)<<2|3);
var3221 = (val*)((long)(0)<<2|3);
var3217 = core__flat___CString___to_s_unsafe(var3216, var3218, var3219, var3220, var3221);
var3215 = var3217;
varonce3214 = var3215;
}
((struct instance_core__NativeArray*)var3213)->values[1]=var3215;
} else {
var3213 = varonce3212;
varonce3212 = NULL;
}
{
var3222 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3223 = ((val*(*)(val* self))(var3222->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3222); /* to_s on <var3222:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3213)->values[0]=var3223;
{
var3224 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3225 = ((val*(*)(val* self))(var3224->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3224); /* to_s on <var3224:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3213)->values[2]=var3225;
{
var3226 = ((val*(*)(val* self))(var3213->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3213); /* native_to_s on <var3213:NativeArray[String]>*/
}
varonce3212 = var3213;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2718);
fatal_exit(1);
}
{
var3227 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3226, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3227); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3228!=NULL)) {
var3229 = varonce3228;
} else {
var3230 = "unary ~";
var3232 = (val*)(7l<<2|1);
var3233 = (val*)(7l<<2|1);
var3234 = (val*)((long)(0)<<2|3);
var3235 = (val*)((long)(0)<<2|3);
var3231 = core__flat___CString___to_s_unsafe(var3230, var3232, var3233, var3234, var3235);
var3229 = var3231;
varonce3228 = var3229;
}
{
var3236 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3229); /* == on <var_pname:String>*/
}
if (var3236){
if (unlikely(varonce3237==NULL)) {
var3238 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3239!=NULL)) {
var3240 = varonce3239;
} else {
var3241 = "~";
var3243 = (val*)(1l<<2|1);
var3244 = (val*)(1l<<2|1);
var3245 = (val*)((long)(0)<<2|3);
var3246 = (val*)((long)(0)<<2|3);
var3242 = core__flat___CString___to_s_unsafe(var3241, var3243, var3244, var3245, var3246);
var3240 = var3242;
varonce3239 = var3240;
}
((struct instance_core__NativeArray*)var3238)->values[0]=var3240;
} else {
var3238 = varonce3237;
varonce3237 = NULL;
}
{
var3247 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3248 = ((val*(*)(val* self))(var3247->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3247); /* to_s on <var3247:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3238)->values[1]=var3248;
{
var3249 = ((val*(*)(val* self))(var3238->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3238); /* native_to_s on <var3238:NativeArray[String]>*/
}
varonce3237 = var3238;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2721);
fatal_exit(1);
}
{
var3250 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3249, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3250); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce3251!=NULL)) {
var3252 = varonce3251;
} else {
var3253 = "Int16";
var3255 = (val*)(5l<<2|1);
var3256 = (val*)(5l<<2|1);
var3257 = (val*)((long)(0)<<2|3);
var3258 = (val*)((long)(0)<<2|3);
var3254 = core__flat___CString___to_s_unsafe(var3253, var3255, var3256, var3257, var3258);
var3252 = var3254;
varonce3251 = var3252;
}
{
var3259 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var3252); /* == on <var_cname:String>*/
}
if (var3259){
if (likely(varonce3260!=NULL)) {
var3261 = varonce3260;
} else {
var3262 = "output";
var3264 = (val*)(6l<<2|1);
var3265 = (val*)(6l<<2|1);
var3266 = (val*)((long)(0)<<2|3);
var3267 = (val*)((long)(0)<<2|3);
var3263 = core__flat___CString___to_s_unsafe(var3262, var3264, var3265, var3266, var3267);
var3261 = var3263;
varonce3260 = var3261;
}
{
var3268 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3261); /* == on <var_pname:String>*/
}
if (var3268){
if (unlikely(varonce3269==NULL)) {
var3270 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3271!=NULL)) {
var3272 = varonce3271;
} else {
var3273 = "printf(\"%\"PRIi16 \"\\n\", ";
var3275 = (val*)(23l<<2|1);
var3276 = (val*)(23l<<2|1);
var3277 = (val*)((long)(0)<<2|3);
var3278 = (val*)((long)(0)<<2|3);
var3274 = core__flat___CString___to_s_unsafe(var3273, var3275, var3276, var3277, var3278);
var3272 = var3274;
varonce3271 = var3272;
}
((struct instance_core__NativeArray*)var3270)->values[0]=var3272;
if (likely(varonce3279!=NULL)) {
var3280 = varonce3279;
} else {
var3281 = ");";
var3283 = (val*)(2l<<2|1);
var3284 = (val*)(2l<<2|1);
var3285 = (val*)((long)(0)<<2|3);
var3286 = (val*)((long)(0)<<2|3);
var3282 = core__flat___CString___to_s_unsafe(var3281, var3283, var3284, var3285, var3286);
var3280 = var3282;
varonce3279 = var3280;
}
((struct instance_core__NativeArray*)var3270)->values[2]=var3280;
} else {
var3270 = varonce3269;
varonce3269 = NULL;
}
{
var3287 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3288 = ((val*(*)(val* self))(var3287->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3287); /* to_s on <var3287:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3270)->values[1]=var3288;
{
var3289 = ((val*(*)(val* self))(var3270->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3270); /* native_to_s on <var3270:NativeArray[String]>*/
}
varonce3269 = var3270;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var3289); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3290!=NULL)) {
var3291 = varonce3290;
} else {
var3292 = "object_id";
var3294 = (val*)(9l<<2|1);
var3295 = (val*)(9l<<2|1);
var3296 = (val*)((long)(0)<<2|3);
var3297 = (val*)((long)(0)<<2|3);
var3293 = core__flat___CString___to_s_unsafe(var3292, var3294, var3295, var3296, var3297);
var3291 = var3293;
varonce3290 = var3291;
}
{
var3298 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3291); /* == on <var_pname:String>*/
}
if (var3298){
if (unlikely(varonce3299==NULL)) {
var3300 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3301!=NULL)) {
var3302 = varonce3301;
} else {
var3303 = "(long)";
var3305 = (val*)(6l<<2|1);
var3306 = (val*)(6l<<2|1);
var3307 = (val*)((long)(0)<<2|3);
var3308 = (val*)((long)(0)<<2|3);
var3304 = core__flat___CString___to_s_unsafe(var3303, var3305, var3306, var3307, var3308);
var3302 = var3304;
varonce3301 = var3302;
}
((struct instance_core__NativeArray*)var3300)->values[0]=var3302;
} else {
var3300 = varonce3299;
varonce3299 = NULL;
}
{
var3309 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3310 = ((val*(*)(val* self))(var3309->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3309); /* to_s on <var3309:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3300)->values[1]=var3310;
{
var3311 = ((val*(*)(val* self))(var3300->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3300); /* native_to_s on <var3300:NativeArray[String]>*/
}
varonce3299 = var3300;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2729);
fatal_exit(1);
}
{
var3312 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3311, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3312); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3313!=NULL)) {
var3314 = varonce3313;
} else {
var3315 = "+";
var3317 = (val*)(1l<<2|1);
var3318 = (val*)(1l<<2|1);
var3319 = (val*)((long)(0)<<2|3);
var3320 = (val*)((long)(0)<<2|3);
var3316 = core__flat___CString___to_s_unsafe(var3315, var3317, var3318, var3319, var3320);
var3314 = var3316;
varonce3313 = var3314;
}
{
var3321 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3314); /* == on <var_pname:String>*/
}
if (var3321){
if (unlikely(varonce3322==NULL)) {
var3323 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3324!=NULL)) {
var3325 = varonce3324;
} else {
var3326 = " + ";
var3328 = (val*)(3l<<2|1);
var3329 = (val*)(3l<<2|1);
var3330 = (val*)((long)(0)<<2|3);
var3331 = (val*)((long)(0)<<2|3);
var3327 = core__flat___CString___to_s_unsafe(var3326, var3328, var3329, var3330, var3331);
var3325 = var3327;
varonce3324 = var3325;
}
((struct instance_core__NativeArray*)var3323)->values[1]=var3325;
} else {
var3323 = varonce3322;
varonce3322 = NULL;
}
{
var3332 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3333 = ((val*(*)(val* self))(var3332->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3332); /* to_s on <var3332:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3323)->values[0]=var3333;
{
var3334 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3335 = ((val*(*)(val* self))(var3334->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3334); /* to_s on <var3334:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3323)->values[2]=var3335;
{
var3336 = ((val*(*)(val* self))(var3323->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3323); /* native_to_s on <var3323:NativeArray[String]>*/
}
varonce3322 = var3323;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2732);
fatal_exit(1);
}
{
var3337 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3336, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3337); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3338!=NULL)) {
var3339 = varonce3338;
} else {
var3340 = "-";
var3342 = (val*)(1l<<2|1);
var3343 = (val*)(1l<<2|1);
var3344 = (val*)((long)(0)<<2|3);
var3345 = (val*)((long)(0)<<2|3);
var3341 = core__flat___CString___to_s_unsafe(var3340, var3342, var3343, var3344, var3345);
var3339 = var3341;
varonce3338 = var3339;
}
{
var3346 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3339); /* == on <var_pname:String>*/
}
if (var3346){
if (unlikely(varonce3347==NULL)) {
var3348 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3349!=NULL)) {
var3350 = varonce3349;
} else {
var3351 = " - ";
var3353 = (val*)(3l<<2|1);
var3354 = (val*)(3l<<2|1);
var3355 = (val*)((long)(0)<<2|3);
var3356 = (val*)((long)(0)<<2|3);
var3352 = core__flat___CString___to_s_unsafe(var3351, var3353, var3354, var3355, var3356);
var3350 = var3352;
varonce3349 = var3350;
}
((struct instance_core__NativeArray*)var3348)->values[1]=var3350;
} else {
var3348 = varonce3347;
varonce3347 = NULL;
}
{
var3357 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3358 = ((val*(*)(val* self))(var3357->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3357); /* to_s on <var3357:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3348)->values[0]=var3358;
{
var3359 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3360 = ((val*(*)(val* self))(var3359->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3359); /* to_s on <var3359:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3348)->values[2]=var3360;
{
var3361 = ((val*(*)(val* self))(var3348->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3348); /* native_to_s on <var3348:NativeArray[String]>*/
}
varonce3347 = var3348;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2735);
fatal_exit(1);
}
{
var3362 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3361, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3362); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3363!=NULL)) {
var3364 = varonce3363;
} else {
var3365 = "unary -";
var3367 = (val*)(7l<<2|1);
var3368 = (val*)(7l<<2|1);
var3369 = (val*)((long)(0)<<2|3);
var3370 = (val*)((long)(0)<<2|3);
var3366 = core__flat___CString___to_s_unsafe(var3365, var3367, var3368, var3369, var3370);
var3364 = var3366;
varonce3363 = var3364;
}
{
var3371 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3364); /* == on <var_pname:String>*/
}
if (var3371){
if (unlikely(varonce3372==NULL)) {
var3373 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3374!=NULL)) {
var3375 = varonce3374;
} else {
var3376 = "-";
var3378 = (val*)(1l<<2|1);
var3379 = (val*)(1l<<2|1);
var3380 = (val*)((long)(0)<<2|3);
var3381 = (val*)((long)(0)<<2|3);
var3377 = core__flat___CString___to_s_unsafe(var3376, var3378, var3379, var3380, var3381);
var3375 = var3377;
varonce3374 = var3375;
}
((struct instance_core__NativeArray*)var3373)->values[0]=var3375;
} else {
var3373 = varonce3372;
varonce3372 = NULL;
}
{
var3382 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3383 = ((val*(*)(val* self))(var3382->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3382); /* to_s on <var3382:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3373)->values[1]=var3383;
{
var3384 = ((val*(*)(val* self))(var3373->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3373); /* native_to_s on <var3373:NativeArray[String]>*/
}
varonce3372 = var3373;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2738);
fatal_exit(1);
}
{
var3385 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3384, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3385); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3386!=NULL)) {
var3387 = varonce3386;
} else {
var3388 = "unary +";
var3390 = (val*)(7l<<2|1);
var3391 = (val*)(7l<<2|1);
var3392 = (val*)((long)(0)<<2|3);
var3393 = (val*)((long)(0)<<2|3);
var3389 = core__flat___CString___to_s_unsafe(var3388, var3390, var3391, var3392, var3393);
var3387 = var3389;
varonce3386 = var3387;
}
{
var3394 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3387); /* == on <var_pname:String>*/
}
if (var3394){
{
var3395 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3395); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3396!=NULL)) {
var3397 = varonce3396;
} else {
var3398 = "*";
var3400 = (val*)(1l<<2|1);
var3401 = (val*)(1l<<2|1);
var3402 = (val*)((long)(0)<<2|3);
var3403 = (val*)((long)(0)<<2|3);
var3399 = core__flat___CString___to_s_unsafe(var3398, var3400, var3401, var3402, var3403);
var3397 = var3399;
varonce3396 = var3397;
}
{
var3404 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3397); /* == on <var_pname:String>*/
}
if (var3404){
if (unlikely(varonce3405==NULL)) {
var3406 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3407!=NULL)) {
var3408 = varonce3407;
} else {
var3409 = " * ";
var3411 = (val*)(3l<<2|1);
var3412 = (val*)(3l<<2|1);
var3413 = (val*)((long)(0)<<2|3);
var3414 = (val*)((long)(0)<<2|3);
var3410 = core__flat___CString___to_s_unsafe(var3409, var3411, var3412, var3413, var3414);
var3408 = var3410;
varonce3407 = var3408;
}
((struct instance_core__NativeArray*)var3406)->values[1]=var3408;
} else {
var3406 = varonce3405;
varonce3405 = NULL;
}
{
var3415 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3416 = ((val*(*)(val* self))(var3415->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3415); /* to_s on <var3415:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3406)->values[0]=var3416;
{
var3417 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3418 = ((val*(*)(val* self))(var3417->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3417); /* to_s on <var3417:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3406)->values[2]=var3418;
{
var3419 = ((val*(*)(val* self))(var3406->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3406); /* native_to_s on <var3406:NativeArray[String]>*/
}
varonce3405 = var3406;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2744);
fatal_exit(1);
}
{
var3420 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3419, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3420); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3421!=NULL)) {
var3422 = varonce3421;
} else {
var3423 = "/";
var3425 = (val*)(1l<<2|1);
var3426 = (val*)(1l<<2|1);
var3427 = (val*)((long)(0)<<2|3);
var3428 = (val*)((long)(0)<<2|3);
var3424 = core__flat___CString___to_s_unsafe(var3423, var3425, var3426, var3427, var3428);
var3422 = var3424;
varonce3421 = var3422;
}
{
var3429 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3422); /* == on <var_pname:String>*/
}
if (var3429){
if (unlikely(varonce3430==NULL)) {
var3431 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3432!=NULL)) {
var3433 = varonce3432;
} else {
var3434 = " / ";
var3436 = (val*)(3l<<2|1);
var3437 = (val*)(3l<<2|1);
var3438 = (val*)((long)(0)<<2|3);
var3439 = (val*)((long)(0)<<2|3);
var3435 = core__flat___CString___to_s_unsafe(var3434, var3436, var3437, var3438, var3439);
var3433 = var3435;
varonce3432 = var3433;
}
((struct instance_core__NativeArray*)var3431)->values[1]=var3433;
} else {
var3431 = varonce3430;
varonce3430 = NULL;
}
{
var3440 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3441 = ((val*(*)(val* self))(var3440->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3440); /* to_s on <var3440:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3431)->values[0]=var3441;
{
var3442 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3443 = ((val*(*)(val* self))(var3442->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3442); /* to_s on <var3442:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3431)->values[2]=var3443;
{
var3444 = ((val*(*)(val* self))(var3431->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3431); /* native_to_s on <var3431:NativeArray[String]>*/
}
varonce3430 = var3431;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2747);
fatal_exit(1);
}
{
var3445 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3444, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3445); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3446!=NULL)) {
var3447 = varonce3446;
} else {
var3448 = "%";
var3450 = (val*)(1l<<2|1);
var3451 = (val*)(1l<<2|1);
var3452 = (val*)((long)(0)<<2|3);
var3453 = (val*)((long)(0)<<2|3);
var3449 = core__flat___CString___to_s_unsafe(var3448, var3450, var3451, var3452, var3453);
var3447 = var3449;
varonce3446 = var3447;
}
{
var3454 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3447); /* == on <var_pname:String>*/
}
if (var3454){
if (unlikely(varonce3455==NULL)) {
var3456 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3457!=NULL)) {
var3458 = varonce3457;
} else {
var3459 = " % ";
var3461 = (val*)(3l<<2|1);
var3462 = (val*)(3l<<2|1);
var3463 = (val*)((long)(0)<<2|3);
var3464 = (val*)((long)(0)<<2|3);
var3460 = core__flat___CString___to_s_unsafe(var3459, var3461, var3462, var3463, var3464);
var3458 = var3460;
varonce3457 = var3458;
}
((struct instance_core__NativeArray*)var3456)->values[1]=var3458;
} else {
var3456 = varonce3455;
varonce3455 = NULL;
}
{
var3465 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3466 = ((val*(*)(val* self))(var3465->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3465); /* to_s on <var3465:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3456)->values[0]=var3466;
{
var3467 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3468 = ((val*(*)(val* self))(var3467->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3467); /* to_s on <var3467:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3456)->values[2]=var3468;
{
var3469 = ((val*(*)(val* self))(var3456->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3456); /* native_to_s on <var3456:NativeArray[String]>*/
}
varonce3455 = var3456;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2750);
fatal_exit(1);
}
{
var3470 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3469, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3470); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3471!=NULL)) {
var3472 = varonce3471;
} else {
var3473 = "<<";
var3475 = (val*)(2l<<2|1);
var3476 = (val*)(2l<<2|1);
var3477 = (val*)((long)(0)<<2|3);
var3478 = (val*)((long)(0)<<2|3);
var3474 = core__flat___CString___to_s_unsafe(var3473, var3475, var3476, var3477, var3478);
var3472 = var3474;
varonce3471 = var3472;
}
{
var3479 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3472); /* == on <var_pname:String>*/
}
if (var3479){
if (unlikely(varonce3480==NULL)) {
var3481 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3482!=NULL)) {
var3483 = varonce3482;
} else {
var3484 = " << ";
var3486 = (val*)(4l<<2|1);
var3487 = (val*)(4l<<2|1);
var3488 = (val*)((long)(0)<<2|3);
var3489 = (val*)((long)(0)<<2|3);
var3485 = core__flat___CString___to_s_unsafe(var3484, var3486, var3487, var3488, var3489);
var3483 = var3485;
varonce3482 = var3483;
}
((struct instance_core__NativeArray*)var3481)->values[1]=var3483;
} else {
var3481 = varonce3480;
varonce3480 = NULL;
}
{
var3490 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3491 = ((val*(*)(val* self))(var3490->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3490); /* to_s on <var3490:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3481)->values[0]=var3491;
{
var3492 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3493 = ((val*(*)(val* self))(var3492->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3492); /* to_s on <var3492:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3481)->values[2]=var3493;
{
var3494 = ((val*(*)(val* self))(var3481->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3481); /* native_to_s on <var3481:NativeArray[String]>*/
}
varonce3480 = var3481;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2753);
fatal_exit(1);
}
{
var3495 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3494, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3495); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3496!=NULL)) {
var3497 = varonce3496;
} else {
var3498 = ">>";
var3500 = (val*)(2l<<2|1);
var3501 = (val*)(2l<<2|1);
var3502 = (val*)((long)(0)<<2|3);
var3503 = (val*)((long)(0)<<2|3);
var3499 = core__flat___CString___to_s_unsafe(var3498, var3500, var3501, var3502, var3503);
var3497 = var3499;
varonce3496 = var3497;
}
{
var3504 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3497); /* == on <var_pname:String>*/
}
if (var3504){
if (unlikely(varonce3505==NULL)) {
var3506 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3507!=NULL)) {
var3508 = varonce3507;
} else {
var3509 = " >> ";
var3511 = (val*)(4l<<2|1);
var3512 = (val*)(4l<<2|1);
var3513 = (val*)((long)(0)<<2|3);
var3514 = (val*)((long)(0)<<2|3);
var3510 = core__flat___CString___to_s_unsafe(var3509, var3511, var3512, var3513, var3514);
var3508 = var3510;
varonce3507 = var3508;
}
((struct instance_core__NativeArray*)var3506)->values[1]=var3508;
} else {
var3506 = varonce3505;
varonce3505 = NULL;
}
{
var3515 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3516 = ((val*(*)(val* self))(var3515->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3515); /* to_s on <var3515:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3506)->values[0]=var3516;
{
var3517 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3518 = ((val*(*)(val* self))(var3517->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3517); /* to_s on <var3517:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3506)->values[2]=var3518;
{
var3519 = ((val*(*)(val* self))(var3506->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3506); /* native_to_s on <var3506:NativeArray[String]>*/
}
varonce3505 = var3506;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2756);
fatal_exit(1);
}
{
var3520 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3519, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3520); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3521!=NULL)) {
var3522 = varonce3521;
} else {
var3523 = "==";
var3525 = (val*)(2l<<2|1);
var3526 = (val*)(2l<<2|1);
var3527 = (val*)((long)(0)<<2|3);
var3528 = (val*)((long)(0)<<2|3);
var3524 = core__flat___CString___to_s_unsafe(var3523, var3525, var3526, var3527, var3528);
var3522 = var3524;
varonce3521 = var3522;
}
{
var3529 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3522); /* == on <var_pname:String>*/
}
if (var3529){
{
var3530 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3531 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3532 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var3530, var3531);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3532); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3533!=NULL)) {
var3534 = varonce3533;
} else {
var3535 = "!=";
var3537 = (val*)(2l<<2|1);
var3538 = (val*)(2l<<2|1);
var3539 = (val*)((long)(0)<<2|3);
var3540 = (val*)((long)(0)<<2|3);
var3536 = core__flat___CString___to_s_unsafe(var3535, var3537, var3538, var3539, var3540);
var3534 = var3536;
varonce3533 = var3534;
}
{
var3541 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3534); /* == on <var_pname:String>*/
}
if (var3541){
{
var3542 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3543 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3544 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var3542, var3543);
}
var_res3545 = var3544;
if (unlikely(varonce3546==NULL)) {
var3547 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3548!=NULL)) {
var3549 = varonce3548;
} else {
var3550 = "!";
var3552 = (val*)(1l<<2|1);
var3553 = (val*)(1l<<2|1);
var3554 = (val*)((long)(0)<<2|3);
var3555 = (val*)((long)(0)<<2|3);
var3551 = core__flat___CString___to_s_unsafe(var3550, var3552, var3553, var3554, var3555);
var3549 = var3551;
varonce3548 = var3549;
}
((struct instance_core__NativeArray*)var3547)->values[0]=var3549;
} else {
var3547 = varonce3546;
varonce3546 = NULL;
}
{
var3556 = ((val*(*)(val* self))(var_res3545->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res3545); /* to_s on <var_res3545:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var3547)->values[1]=var3556;
{
var3557 = ((val*(*)(val* self))(var3547->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3547); /* native_to_s on <var3547:NativeArray[String]>*/
}
varonce3546 = var3547;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2763);
fatal_exit(1);
}
{
var3558 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3557, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3558); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3559!=NULL)) {
var3560 = varonce3559;
} else {
var3561 = "<";
var3563 = (val*)(1l<<2|1);
var3564 = (val*)(1l<<2|1);
var3565 = (val*)((long)(0)<<2|3);
var3566 = (val*)((long)(0)<<2|3);
var3562 = core__flat___CString___to_s_unsafe(var3561, var3563, var3564, var3565, var3566);
var3560 = var3562;
varonce3559 = var3560;
}
{
var3567 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3560); /* == on <var_pname:String>*/
}
if (var3567){
if (unlikely(varonce3568==NULL)) {
var3569 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3570!=NULL)) {
var3571 = varonce3570;
} else {
var3572 = " < ";
var3574 = (val*)(3l<<2|1);
var3575 = (val*)(3l<<2|1);
var3576 = (val*)((long)(0)<<2|3);
var3577 = (val*)((long)(0)<<2|3);
var3573 = core__flat___CString___to_s_unsafe(var3572, var3574, var3575, var3576, var3577);
var3571 = var3573;
varonce3570 = var3571;
}
((struct instance_core__NativeArray*)var3569)->values[1]=var3571;
} else {
var3569 = varonce3568;
varonce3568 = NULL;
}
{
var3578 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3579 = ((val*(*)(val* self))(var3578->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3578); /* to_s on <var3578:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3569)->values[0]=var3579;
{
var3580 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3581 = ((val*(*)(val* self))(var3580->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3580); /* to_s on <var3580:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3569)->values[2]=var3581;
{
var3582 = ((val*(*)(val* self))(var3569->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3569); /* native_to_s on <var3569:NativeArray[String]>*/
}
varonce3568 = var3569;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2766);
fatal_exit(1);
}
{
var3583 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3582, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3583); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3584!=NULL)) {
var3585 = varonce3584;
} else {
var3586 = ">";
var3588 = (val*)(1l<<2|1);
var3589 = (val*)(1l<<2|1);
var3590 = (val*)((long)(0)<<2|3);
var3591 = (val*)((long)(0)<<2|3);
var3587 = core__flat___CString___to_s_unsafe(var3586, var3588, var3589, var3590, var3591);
var3585 = var3587;
varonce3584 = var3585;
}
{
var3592 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3585); /* == on <var_pname:String>*/
}
if (var3592){
if (unlikely(varonce3593==NULL)) {
var3594 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3595!=NULL)) {
var3596 = varonce3595;
} else {
var3597 = " > ";
var3599 = (val*)(3l<<2|1);
var3600 = (val*)(3l<<2|1);
var3601 = (val*)((long)(0)<<2|3);
var3602 = (val*)((long)(0)<<2|3);
var3598 = core__flat___CString___to_s_unsafe(var3597, var3599, var3600, var3601, var3602);
var3596 = var3598;
varonce3595 = var3596;
}
((struct instance_core__NativeArray*)var3594)->values[1]=var3596;
} else {
var3594 = varonce3593;
varonce3593 = NULL;
}
{
var3603 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3604 = ((val*(*)(val* self))(var3603->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3603); /* to_s on <var3603:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3594)->values[0]=var3604;
{
var3605 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3606 = ((val*(*)(val* self))(var3605->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3605); /* to_s on <var3605:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3594)->values[2]=var3606;
{
var3607 = ((val*(*)(val* self))(var3594->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3594); /* native_to_s on <var3594:NativeArray[String]>*/
}
varonce3593 = var3594;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2769);
fatal_exit(1);
}
{
var3608 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3607, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3608); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3609!=NULL)) {
var3610 = varonce3609;
} else {
var3611 = "<=";
var3613 = (val*)(2l<<2|1);
var3614 = (val*)(2l<<2|1);
var3615 = (val*)((long)(0)<<2|3);
var3616 = (val*)((long)(0)<<2|3);
var3612 = core__flat___CString___to_s_unsafe(var3611, var3613, var3614, var3615, var3616);
var3610 = var3612;
varonce3609 = var3610;
}
{
var3617 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3610); /* == on <var_pname:String>*/
}
if (var3617){
if (unlikely(varonce3618==NULL)) {
var3619 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3620!=NULL)) {
var3621 = varonce3620;
} else {
var3622 = " <= ";
var3624 = (val*)(4l<<2|1);
var3625 = (val*)(4l<<2|1);
var3626 = (val*)((long)(0)<<2|3);
var3627 = (val*)((long)(0)<<2|3);
var3623 = core__flat___CString___to_s_unsafe(var3622, var3624, var3625, var3626, var3627);
var3621 = var3623;
varonce3620 = var3621;
}
((struct instance_core__NativeArray*)var3619)->values[1]=var3621;
} else {
var3619 = varonce3618;
varonce3618 = NULL;
}
{
var3628 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3629 = ((val*(*)(val* self))(var3628->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3628); /* to_s on <var3628:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3619)->values[0]=var3629;
{
var3630 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3631 = ((val*(*)(val* self))(var3630->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3630); /* to_s on <var3630:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3619)->values[2]=var3631;
{
var3632 = ((val*(*)(val* self))(var3619->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3619); /* native_to_s on <var3619:NativeArray[String]>*/
}
varonce3618 = var3619;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2772);
fatal_exit(1);
}
{
var3633 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3632, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3633); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3634!=NULL)) {
var3635 = varonce3634;
} else {
var3636 = ">=";
var3638 = (val*)(2l<<2|1);
var3639 = (val*)(2l<<2|1);
var3640 = (val*)((long)(0)<<2|3);
var3641 = (val*)((long)(0)<<2|3);
var3637 = core__flat___CString___to_s_unsafe(var3636, var3638, var3639, var3640, var3641);
var3635 = var3637;
varonce3634 = var3635;
}
{
var3642 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3635); /* == on <var_pname:String>*/
}
if (var3642){
if (unlikely(varonce3643==NULL)) {
var3644 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3645!=NULL)) {
var3646 = varonce3645;
} else {
var3647 = " >= ";
var3649 = (val*)(4l<<2|1);
var3650 = (val*)(4l<<2|1);
var3651 = (val*)((long)(0)<<2|3);
var3652 = (val*)((long)(0)<<2|3);
var3648 = core__flat___CString___to_s_unsafe(var3647, var3649, var3650, var3651, var3652);
var3646 = var3648;
varonce3645 = var3646;
}
((struct instance_core__NativeArray*)var3644)->values[1]=var3646;
} else {
var3644 = varonce3643;
varonce3643 = NULL;
}
{
var3653 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3654 = ((val*(*)(val* self))(var3653->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3653); /* to_s on <var3653:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3644)->values[0]=var3654;
{
var3655 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3656 = ((val*(*)(val* self))(var3655->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3655); /* to_s on <var3655:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3644)->values[2]=var3656;
{
var3657 = ((val*(*)(val* self))(var3644->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3644); /* native_to_s on <var3644:NativeArray[String]>*/
}
varonce3643 = var3644;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2775);
fatal_exit(1);
}
{
var3658 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3657, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3658); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3659!=NULL)) {
var3660 = varonce3659;
} else {
var3661 = "to_i";
var3663 = (val*)(4l<<2|1);
var3664 = (val*)(4l<<2|1);
var3665 = (val*)((long)(0)<<2|3);
var3666 = (val*)((long)(0)<<2|3);
var3662 = core__flat___CString___to_s_unsafe(var3661, var3663, var3664, var3665, var3666);
var3660 = var3662;
varonce3659 = var3660;
}
{
var3667 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3660); /* == on <var_pname:String>*/
}
if (var3667){
if (unlikely(varonce3668==NULL)) {
var3669 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3670!=NULL)) {
var3671 = varonce3670;
} else {
var3672 = "(long)";
var3674 = (val*)(6l<<2|1);
var3675 = (val*)(6l<<2|1);
var3676 = (val*)((long)(0)<<2|3);
var3677 = (val*)((long)(0)<<2|3);
var3673 = core__flat___CString___to_s_unsafe(var3672, var3674, var3675, var3676, var3677);
var3671 = var3673;
varonce3670 = var3671;
}
((struct instance_core__NativeArray*)var3669)->values[0]=var3671;
} else {
var3669 = varonce3668;
varonce3668 = NULL;
}
{
var3678 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3679 = ((val*(*)(val* self))(var3678->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3678); /* to_s on <var3678:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3669)->values[1]=var3679;
{
var3680 = ((val*(*)(val* self))(var3669->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3669); /* native_to_s on <var3669:NativeArray[String]>*/
}
varonce3668 = var3669;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2778);
fatal_exit(1);
}
{
var3681 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3680, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3681); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3682!=NULL)) {
var3683 = varonce3682;
} else {
var3684 = "to_b";
var3686 = (val*)(4l<<2|1);
var3687 = (val*)(4l<<2|1);
var3688 = (val*)((long)(0)<<2|3);
var3689 = (val*)((long)(0)<<2|3);
var3685 = core__flat___CString___to_s_unsafe(var3684, var3686, var3687, var3688, var3689);
var3683 = var3685;
varonce3682 = var3683;
}
{
var3690 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3683); /* == on <var_pname:String>*/
}
if (var3690){
if (unlikely(varonce3691==NULL)) {
var3692 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3693!=NULL)) {
var3694 = varonce3693;
} else {
var3695 = "(unsigned char)";
var3697 = (val*)(15l<<2|1);
var3698 = (val*)(15l<<2|1);
var3699 = (val*)((long)(0)<<2|3);
var3700 = (val*)((long)(0)<<2|3);
var3696 = core__flat___CString___to_s_unsafe(var3695, var3697, var3698, var3699, var3700);
var3694 = var3696;
varonce3693 = var3694;
}
((struct instance_core__NativeArray*)var3692)->values[0]=var3694;
} else {
var3692 = varonce3691;
varonce3691 = NULL;
}
{
var3701 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3702 = ((val*(*)(val* self))(var3701->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3701); /* to_s on <var3701:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3692)->values[1]=var3702;
{
var3703 = ((val*(*)(val* self))(var3692->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3692); /* native_to_s on <var3692:NativeArray[String]>*/
}
varonce3691 = var3692;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2781);
fatal_exit(1);
}
{
var3704 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3703, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3704); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3705!=NULL)) {
var3706 = varonce3705;
} else {
var3707 = "to_i8";
var3709 = (val*)(5l<<2|1);
var3710 = (val*)(5l<<2|1);
var3711 = (val*)((long)(0)<<2|3);
var3712 = (val*)((long)(0)<<2|3);
var3708 = core__flat___CString___to_s_unsafe(var3707, var3709, var3710, var3711, var3712);
var3706 = var3708;
varonce3705 = var3706;
}
{
var3713 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3706); /* == on <var_pname:String>*/
}
if (var3713){
if (unlikely(varonce3714==NULL)) {
var3715 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3716!=NULL)) {
var3717 = varonce3716;
} else {
var3718 = "(int8_t)";
var3720 = (val*)(8l<<2|1);
var3721 = (val*)(8l<<2|1);
var3722 = (val*)((long)(0)<<2|3);
var3723 = (val*)((long)(0)<<2|3);
var3719 = core__flat___CString___to_s_unsafe(var3718, var3720, var3721, var3722, var3723);
var3717 = var3719;
varonce3716 = var3717;
}
((struct instance_core__NativeArray*)var3715)->values[0]=var3717;
} else {
var3715 = varonce3714;
varonce3714 = NULL;
}
{
var3724 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3725 = ((val*(*)(val* self))(var3724->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3724); /* to_s on <var3724:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3715)->values[1]=var3725;
{
var3726 = ((val*(*)(val* self))(var3715->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3715); /* native_to_s on <var3715:NativeArray[String]>*/
}
varonce3714 = var3715;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2784);
fatal_exit(1);
}
{
var3727 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3726, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3727); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3728!=NULL)) {
var3729 = varonce3728;
} else {
var3730 = "to_u16";
var3732 = (val*)(6l<<2|1);
var3733 = (val*)(6l<<2|1);
var3734 = (val*)((long)(0)<<2|3);
var3735 = (val*)((long)(0)<<2|3);
var3731 = core__flat___CString___to_s_unsafe(var3730, var3732, var3733, var3734, var3735);
var3729 = var3731;
varonce3728 = var3729;
}
{
var3736 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3729); /* == on <var_pname:String>*/
}
if (var3736){
if (unlikely(varonce3737==NULL)) {
var3738 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3739!=NULL)) {
var3740 = varonce3739;
} else {
var3741 = "(uint16_t)";
var3743 = (val*)(10l<<2|1);
var3744 = (val*)(10l<<2|1);
var3745 = (val*)((long)(0)<<2|3);
var3746 = (val*)((long)(0)<<2|3);
var3742 = core__flat___CString___to_s_unsafe(var3741, var3743, var3744, var3745, var3746);
var3740 = var3742;
varonce3739 = var3740;
}
((struct instance_core__NativeArray*)var3738)->values[0]=var3740;
} else {
var3738 = varonce3737;
varonce3737 = NULL;
}
{
var3747 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3748 = ((val*(*)(val* self))(var3747->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3747); /* to_s on <var3747:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3738)->values[1]=var3748;
{
var3749 = ((val*(*)(val* self))(var3738->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3738); /* native_to_s on <var3738:NativeArray[String]>*/
}
varonce3737 = var3738;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2787);
fatal_exit(1);
}
{
var3750 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3749, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3750); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3751!=NULL)) {
var3752 = varonce3751;
} else {
var3753 = "to_i32";
var3755 = (val*)(6l<<2|1);
var3756 = (val*)(6l<<2|1);
var3757 = (val*)((long)(0)<<2|3);
var3758 = (val*)((long)(0)<<2|3);
var3754 = core__flat___CString___to_s_unsafe(var3753, var3755, var3756, var3757, var3758);
var3752 = var3754;
varonce3751 = var3752;
}
{
var3759 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3752); /* == on <var_pname:String>*/
}
if (var3759){
if (unlikely(varonce3760==NULL)) {
var3761 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3762!=NULL)) {
var3763 = varonce3762;
} else {
var3764 = "(int32_t)";
var3766 = (val*)(9l<<2|1);
var3767 = (val*)(9l<<2|1);
var3768 = (val*)((long)(0)<<2|3);
var3769 = (val*)((long)(0)<<2|3);
var3765 = core__flat___CString___to_s_unsafe(var3764, var3766, var3767, var3768, var3769);
var3763 = var3765;
varonce3762 = var3763;
}
((struct instance_core__NativeArray*)var3761)->values[0]=var3763;
} else {
var3761 = varonce3760;
varonce3760 = NULL;
}
{
var3770 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3771 = ((val*(*)(val* self))(var3770->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3770); /* to_s on <var3770:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3761)->values[1]=var3771;
{
var3772 = ((val*(*)(val* self))(var3761->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3761); /* native_to_s on <var3761:NativeArray[String]>*/
}
varonce3760 = var3761;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2790);
fatal_exit(1);
}
{
var3773 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3772, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3773); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3774!=NULL)) {
var3775 = varonce3774;
} else {
var3776 = "to_u32";
var3778 = (val*)(6l<<2|1);
var3779 = (val*)(6l<<2|1);
var3780 = (val*)((long)(0)<<2|3);
var3781 = (val*)((long)(0)<<2|3);
var3777 = core__flat___CString___to_s_unsafe(var3776, var3778, var3779, var3780, var3781);
var3775 = var3777;
varonce3774 = var3775;
}
{
var3782 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3775); /* == on <var_pname:String>*/
}
if (var3782){
if (unlikely(varonce3783==NULL)) {
var3784 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3785!=NULL)) {
var3786 = varonce3785;
} else {
var3787 = "(uint32_t)";
var3789 = (val*)(10l<<2|1);
var3790 = (val*)(10l<<2|1);
var3791 = (val*)((long)(0)<<2|3);
var3792 = (val*)((long)(0)<<2|3);
var3788 = core__flat___CString___to_s_unsafe(var3787, var3789, var3790, var3791, var3792);
var3786 = var3788;
varonce3785 = var3786;
}
((struct instance_core__NativeArray*)var3784)->values[0]=var3786;
} else {
var3784 = varonce3783;
varonce3783 = NULL;
}
{
var3793 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3794 = ((val*(*)(val* self))(var3793->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3793); /* to_s on <var3793:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3784)->values[1]=var3794;
{
var3795 = ((val*(*)(val* self))(var3784->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3784); /* native_to_s on <var3784:NativeArray[String]>*/
}
varonce3783 = var3784;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2793);
fatal_exit(1);
}
{
var3796 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3795, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3796); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3797!=NULL)) {
var3798 = varonce3797;
} else {
var3799 = "to_f";
var3801 = (val*)(4l<<2|1);
var3802 = (val*)(4l<<2|1);
var3803 = (val*)((long)(0)<<2|3);
var3804 = (val*)((long)(0)<<2|3);
var3800 = core__flat___CString___to_s_unsafe(var3799, var3801, var3802, var3803, var3804);
var3798 = var3800;
varonce3797 = var3798;
}
{
var3805 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3798); /* == on <var_pname:String>*/
}
if (var3805){
if (unlikely(varonce3806==NULL)) {
var3807 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3808!=NULL)) {
var3809 = varonce3808;
} else {
var3810 = "(double)";
var3812 = (val*)(8l<<2|1);
var3813 = (val*)(8l<<2|1);
var3814 = (val*)((long)(0)<<2|3);
var3815 = (val*)((long)(0)<<2|3);
var3811 = core__flat___CString___to_s_unsafe(var3810, var3812, var3813, var3814, var3815);
var3809 = var3811;
varonce3808 = var3809;
}
((struct instance_core__NativeArray*)var3807)->values[0]=var3809;
} else {
var3807 = varonce3806;
varonce3806 = NULL;
}
{
var3816 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3817 = ((val*(*)(val* self))(var3816->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3816); /* to_s on <var3816:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3807)->values[1]=var3817;
{
var3818 = ((val*(*)(val* self))(var3807->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3807); /* native_to_s on <var3807:NativeArray[String]>*/
}
varonce3806 = var3807;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2796);
fatal_exit(1);
}
{
var3819 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3818, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3819); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3820!=NULL)) {
var3821 = varonce3820;
} else {
var3822 = "&";
var3824 = (val*)(1l<<2|1);
var3825 = (val*)(1l<<2|1);
var3826 = (val*)((long)(0)<<2|3);
var3827 = (val*)((long)(0)<<2|3);
var3823 = core__flat___CString___to_s_unsafe(var3822, var3824, var3825, var3826, var3827);
var3821 = var3823;
varonce3820 = var3821;
}
{
var3828 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3821); /* == on <var_pname:String>*/
}
if (var3828){
if (unlikely(varonce3829==NULL)) {
var3830 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3831!=NULL)) {
var3832 = varonce3831;
} else {
var3833 = " & ";
var3835 = (val*)(3l<<2|1);
var3836 = (val*)(3l<<2|1);
var3837 = (val*)((long)(0)<<2|3);
var3838 = (val*)((long)(0)<<2|3);
var3834 = core__flat___CString___to_s_unsafe(var3833, var3835, var3836, var3837, var3838);
var3832 = var3834;
varonce3831 = var3832;
}
((struct instance_core__NativeArray*)var3830)->values[1]=var3832;
} else {
var3830 = varonce3829;
varonce3829 = NULL;
}
{
var3839 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3840 = ((val*(*)(val* self))(var3839->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3839); /* to_s on <var3839:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3830)->values[0]=var3840;
{
var3841 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3842 = ((val*(*)(val* self))(var3841->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3841); /* to_s on <var3841:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3830)->values[2]=var3842;
{
var3843 = ((val*(*)(val* self))(var3830->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3830); /* native_to_s on <var3830:NativeArray[String]>*/
}
varonce3829 = var3830;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2799);
fatal_exit(1);
}
{
var3844 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3843, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3844); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3845!=NULL)) {
var3846 = varonce3845;
} else {
var3847 = "|";
var3849 = (val*)(1l<<2|1);
var3850 = (val*)(1l<<2|1);
var3851 = (val*)((long)(0)<<2|3);
var3852 = (val*)((long)(0)<<2|3);
var3848 = core__flat___CString___to_s_unsafe(var3847, var3849, var3850, var3851, var3852);
var3846 = var3848;
varonce3845 = var3846;
}
{
var3853 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3846); /* == on <var_pname:String>*/
}
if (var3853){
if (unlikely(varonce3854==NULL)) {
var3855 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3856!=NULL)) {
var3857 = varonce3856;
} else {
var3858 = " | ";
var3860 = (val*)(3l<<2|1);
var3861 = (val*)(3l<<2|1);
var3862 = (val*)((long)(0)<<2|3);
var3863 = (val*)((long)(0)<<2|3);
var3859 = core__flat___CString___to_s_unsafe(var3858, var3860, var3861, var3862, var3863);
var3857 = var3859;
varonce3856 = var3857;
}
((struct instance_core__NativeArray*)var3855)->values[1]=var3857;
} else {
var3855 = varonce3854;
varonce3854 = NULL;
}
{
var3864 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3865 = ((val*(*)(val* self))(var3864->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3864); /* to_s on <var3864:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3855)->values[0]=var3865;
{
var3866 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3867 = ((val*(*)(val* self))(var3866->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3866); /* to_s on <var3866:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3855)->values[2]=var3867;
{
var3868 = ((val*(*)(val* self))(var3855->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3855); /* native_to_s on <var3855:NativeArray[String]>*/
}
varonce3854 = var3855;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2802);
fatal_exit(1);
}
{
var3869 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3868, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3869); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3870!=NULL)) {
var3871 = varonce3870;
} else {
var3872 = "^";
var3874 = (val*)(1l<<2|1);
var3875 = (val*)(1l<<2|1);
var3876 = (val*)((long)(0)<<2|3);
var3877 = (val*)((long)(0)<<2|3);
var3873 = core__flat___CString___to_s_unsafe(var3872, var3874, var3875, var3876, var3877);
var3871 = var3873;
varonce3870 = var3871;
}
{
var3878 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3871); /* == on <var_pname:String>*/
}
if (var3878){
if (unlikely(varonce3879==NULL)) {
var3880 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3881!=NULL)) {
var3882 = varonce3881;
} else {
var3883 = " ^ ";
var3885 = (val*)(3l<<2|1);
var3886 = (val*)(3l<<2|1);
var3887 = (val*)((long)(0)<<2|3);
var3888 = (val*)((long)(0)<<2|3);
var3884 = core__flat___CString___to_s_unsafe(var3883, var3885, var3886, var3887, var3888);
var3882 = var3884;
varonce3881 = var3882;
}
((struct instance_core__NativeArray*)var3880)->values[1]=var3882;
} else {
var3880 = varonce3879;
varonce3879 = NULL;
}
{
var3889 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3890 = ((val*(*)(val* self))(var3889->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3889); /* to_s on <var3889:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3880)->values[0]=var3890;
{
var3891 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3892 = ((val*(*)(val* self))(var3891->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3891); /* to_s on <var3891:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3880)->values[2]=var3892;
{
var3893 = ((val*(*)(val* self))(var3880->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3880); /* native_to_s on <var3880:NativeArray[String]>*/
}
varonce3879 = var3880;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2805);
fatal_exit(1);
}
{
var3894 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3893, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3894); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3895!=NULL)) {
var3896 = varonce3895;
} else {
var3897 = "unary ~";
var3899 = (val*)(7l<<2|1);
var3900 = (val*)(7l<<2|1);
var3901 = (val*)((long)(0)<<2|3);
var3902 = (val*)((long)(0)<<2|3);
var3898 = core__flat___CString___to_s_unsafe(var3897, var3899, var3900, var3901, var3902);
var3896 = var3898;
varonce3895 = var3896;
}
{
var3903 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3896); /* == on <var_pname:String>*/
}
if (var3903){
if (unlikely(varonce3904==NULL)) {
var3905 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3906!=NULL)) {
var3907 = varonce3906;
} else {
var3908 = "~";
var3910 = (val*)(1l<<2|1);
var3911 = (val*)(1l<<2|1);
var3912 = (val*)((long)(0)<<2|3);
var3913 = (val*)((long)(0)<<2|3);
var3909 = core__flat___CString___to_s_unsafe(var3908, var3910, var3911, var3912, var3913);
var3907 = var3909;
varonce3906 = var3907;
}
((struct instance_core__NativeArray*)var3905)->values[0]=var3907;
} else {
var3905 = varonce3904;
varonce3904 = NULL;
}
{
var3914 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3915 = ((val*(*)(val* self))(var3914->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3914); /* to_s on <var3914:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3905)->values[1]=var3915;
{
var3916 = ((val*(*)(val* self))(var3905->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3905); /* native_to_s on <var3905:NativeArray[String]>*/
}
varonce3904 = var3905;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2808);
fatal_exit(1);
}
{
var3917 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3916, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3917); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce3918!=NULL)) {
var3919 = varonce3918;
} else {
var3920 = "UInt16";
var3922 = (val*)(6l<<2|1);
var3923 = (val*)(6l<<2|1);
var3924 = (val*)((long)(0)<<2|3);
var3925 = (val*)((long)(0)<<2|3);
var3921 = core__flat___CString___to_s_unsafe(var3920, var3922, var3923, var3924, var3925);
var3919 = var3921;
varonce3918 = var3919;
}
{
var3926 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var3919); /* == on <var_cname:String>*/
}
if (var3926){
if (likely(varonce3927!=NULL)) {
var3928 = varonce3927;
} else {
var3929 = "output";
var3931 = (val*)(6l<<2|1);
var3932 = (val*)(6l<<2|1);
var3933 = (val*)((long)(0)<<2|3);
var3934 = (val*)((long)(0)<<2|3);
var3930 = core__flat___CString___to_s_unsafe(var3929, var3931, var3932, var3933, var3934);
var3928 = var3930;
varonce3927 = var3928;
}
{
var3935 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3928); /* == on <var_pname:String>*/
}
if (var3935){
if (unlikely(varonce3936==NULL)) {
var3937 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3938!=NULL)) {
var3939 = varonce3938;
} else {
var3940 = "printf(\"%\"PRIu16 \"\\n\", ";
var3942 = (val*)(23l<<2|1);
var3943 = (val*)(23l<<2|1);
var3944 = (val*)((long)(0)<<2|3);
var3945 = (val*)((long)(0)<<2|3);
var3941 = core__flat___CString___to_s_unsafe(var3940, var3942, var3943, var3944, var3945);
var3939 = var3941;
varonce3938 = var3939;
}
((struct instance_core__NativeArray*)var3937)->values[0]=var3939;
if (likely(varonce3946!=NULL)) {
var3947 = varonce3946;
} else {
var3948 = ");";
var3950 = (val*)(2l<<2|1);
var3951 = (val*)(2l<<2|1);
var3952 = (val*)((long)(0)<<2|3);
var3953 = (val*)((long)(0)<<2|3);
var3949 = core__flat___CString___to_s_unsafe(var3948, var3950, var3951, var3952, var3953);
var3947 = var3949;
varonce3946 = var3947;
}
((struct instance_core__NativeArray*)var3937)->values[2]=var3947;
} else {
var3937 = varonce3936;
varonce3936 = NULL;
}
{
var3954 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3955 = ((val*(*)(val* self))(var3954->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3954); /* to_s on <var3954:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3937)->values[1]=var3955;
{
var3956 = ((val*(*)(val* self))(var3937->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3937); /* native_to_s on <var3937:NativeArray[String]>*/
}
varonce3936 = var3937;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var3956); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3957!=NULL)) {
var3958 = varonce3957;
} else {
var3959 = "object_id";
var3961 = (val*)(9l<<2|1);
var3962 = (val*)(9l<<2|1);
var3963 = (val*)((long)(0)<<2|3);
var3964 = (val*)((long)(0)<<2|3);
var3960 = core__flat___CString___to_s_unsafe(var3959, var3961, var3962, var3963, var3964);
var3958 = var3960;
varonce3957 = var3958;
}
{
var3965 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3958); /* == on <var_pname:String>*/
}
if (var3965){
if (unlikely(varonce3966==NULL)) {
var3967 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3968!=NULL)) {
var3969 = varonce3968;
} else {
var3970 = "(long)";
var3972 = (val*)(6l<<2|1);
var3973 = (val*)(6l<<2|1);
var3974 = (val*)((long)(0)<<2|3);
var3975 = (val*)((long)(0)<<2|3);
var3971 = core__flat___CString___to_s_unsafe(var3970, var3972, var3973, var3974, var3975);
var3969 = var3971;
varonce3968 = var3969;
}
((struct instance_core__NativeArray*)var3967)->values[0]=var3969;
} else {
var3967 = varonce3966;
varonce3966 = NULL;
}
{
var3976 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3977 = ((val*(*)(val* self))(var3976->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3976); /* to_s on <var3976:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3967)->values[1]=var3977;
{
var3978 = ((val*(*)(val* self))(var3967->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3967); /* native_to_s on <var3967:NativeArray[String]>*/
}
varonce3966 = var3967;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2816);
fatal_exit(1);
}
{
var3979 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3978, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3979); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3980!=NULL)) {
var3981 = varonce3980;
} else {
var3982 = "+";
var3984 = (val*)(1l<<2|1);
var3985 = (val*)(1l<<2|1);
var3986 = (val*)((long)(0)<<2|3);
var3987 = (val*)((long)(0)<<2|3);
var3983 = core__flat___CString___to_s_unsafe(var3982, var3984, var3985, var3986, var3987);
var3981 = var3983;
varonce3980 = var3981;
}
{
var3988 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3981); /* == on <var_pname:String>*/
}
if (var3988){
if (unlikely(varonce3989==NULL)) {
var3990 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3991!=NULL)) {
var3992 = varonce3991;
} else {
var3993 = " + ";
var3995 = (val*)(3l<<2|1);
var3996 = (val*)(3l<<2|1);
var3997 = (val*)((long)(0)<<2|3);
var3998 = (val*)((long)(0)<<2|3);
var3994 = core__flat___CString___to_s_unsafe(var3993, var3995, var3996, var3997, var3998);
var3992 = var3994;
varonce3991 = var3992;
}
((struct instance_core__NativeArray*)var3990)->values[1]=var3992;
} else {
var3990 = varonce3989;
varonce3989 = NULL;
}
{
var3999 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4000 = ((val*(*)(val* self))(var3999->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3999); /* to_s on <var3999:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3990)->values[0]=var4000;
{
var4001 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4002 = ((val*(*)(val* self))(var4001->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4001); /* to_s on <var4001:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3990)->values[2]=var4002;
{
var4003 = ((val*(*)(val* self))(var3990->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3990); /* native_to_s on <var3990:NativeArray[String]>*/
}
varonce3989 = var3990;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2819);
fatal_exit(1);
}
{
var4004 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4003, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4004); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4005!=NULL)) {
var4006 = varonce4005;
} else {
var4007 = "-";
var4009 = (val*)(1l<<2|1);
var4010 = (val*)(1l<<2|1);
var4011 = (val*)((long)(0)<<2|3);
var4012 = (val*)((long)(0)<<2|3);
var4008 = core__flat___CString___to_s_unsafe(var4007, var4009, var4010, var4011, var4012);
var4006 = var4008;
varonce4005 = var4006;
}
{
var4013 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4006); /* == on <var_pname:String>*/
}
if (var4013){
if (unlikely(varonce4014==NULL)) {
var4015 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4016!=NULL)) {
var4017 = varonce4016;
} else {
var4018 = " - ";
var4020 = (val*)(3l<<2|1);
var4021 = (val*)(3l<<2|1);
var4022 = (val*)((long)(0)<<2|3);
var4023 = (val*)((long)(0)<<2|3);
var4019 = core__flat___CString___to_s_unsafe(var4018, var4020, var4021, var4022, var4023);
var4017 = var4019;
varonce4016 = var4017;
}
((struct instance_core__NativeArray*)var4015)->values[1]=var4017;
} else {
var4015 = varonce4014;
varonce4014 = NULL;
}
{
var4024 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4025 = ((val*(*)(val* self))(var4024->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4024); /* to_s on <var4024:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4015)->values[0]=var4025;
{
var4026 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4027 = ((val*(*)(val* self))(var4026->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4026); /* to_s on <var4026:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4015)->values[2]=var4027;
{
var4028 = ((val*(*)(val* self))(var4015->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4015); /* native_to_s on <var4015:NativeArray[String]>*/
}
varonce4014 = var4015;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2822);
fatal_exit(1);
}
{
var4029 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4028, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4029); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4030!=NULL)) {
var4031 = varonce4030;
} else {
var4032 = "unary -";
var4034 = (val*)(7l<<2|1);
var4035 = (val*)(7l<<2|1);
var4036 = (val*)((long)(0)<<2|3);
var4037 = (val*)((long)(0)<<2|3);
var4033 = core__flat___CString___to_s_unsafe(var4032, var4034, var4035, var4036, var4037);
var4031 = var4033;
varonce4030 = var4031;
}
{
var4038 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4031); /* == on <var_pname:String>*/
}
if (var4038){
if (unlikely(varonce4039==NULL)) {
var4040 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4041!=NULL)) {
var4042 = varonce4041;
} else {
var4043 = "-";
var4045 = (val*)(1l<<2|1);
var4046 = (val*)(1l<<2|1);
var4047 = (val*)((long)(0)<<2|3);
var4048 = (val*)((long)(0)<<2|3);
var4044 = core__flat___CString___to_s_unsafe(var4043, var4045, var4046, var4047, var4048);
var4042 = var4044;
varonce4041 = var4042;
}
((struct instance_core__NativeArray*)var4040)->values[0]=var4042;
} else {
var4040 = varonce4039;
varonce4039 = NULL;
}
{
var4049 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4050 = ((val*(*)(val* self))(var4049->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4049); /* to_s on <var4049:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4040)->values[1]=var4050;
{
var4051 = ((val*(*)(val* self))(var4040->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4040); /* native_to_s on <var4040:NativeArray[String]>*/
}
varonce4039 = var4040;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2825);
fatal_exit(1);
}
{
var4052 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4051, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4052); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4053!=NULL)) {
var4054 = varonce4053;
} else {
var4055 = "unary +";
var4057 = (val*)(7l<<2|1);
var4058 = (val*)(7l<<2|1);
var4059 = (val*)((long)(0)<<2|3);
var4060 = (val*)((long)(0)<<2|3);
var4056 = core__flat___CString___to_s_unsafe(var4055, var4057, var4058, var4059, var4060);
var4054 = var4056;
varonce4053 = var4054;
}
{
var4061 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4054); /* == on <var_pname:String>*/
}
if (var4061){
{
var4062 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4062); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4063!=NULL)) {
var4064 = varonce4063;
} else {
var4065 = "*";
var4067 = (val*)(1l<<2|1);
var4068 = (val*)(1l<<2|1);
var4069 = (val*)((long)(0)<<2|3);
var4070 = (val*)((long)(0)<<2|3);
var4066 = core__flat___CString___to_s_unsafe(var4065, var4067, var4068, var4069, var4070);
var4064 = var4066;
varonce4063 = var4064;
}
{
var4071 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4064); /* == on <var_pname:String>*/
}
if (var4071){
if (unlikely(varonce4072==NULL)) {
var4073 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4074!=NULL)) {
var4075 = varonce4074;
} else {
var4076 = " * ";
var4078 = (val*)(3l<<2|1);
var4079 = (val*)(3l<<2|1);
var4080 = (val*)((long)(0)<<2|3);
var4081 = (val*)((long)(0)<<2|3);
var4077 = core__flat___CString___to_s_unsafe(var4076, var4078, var4079, var4080, var4081);
var4075 = var4077;
varonce4074 = var4075;
}
((struct instance_core__NativeArray*)var4073)->values[1]=var4075;
} else {
var4073 = varonce4072;
varonce4072 = NULL;
}
{
var4082 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4083 = ((val*(*)(val* self))(var4082->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4082); /* to_s on <var4082:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4073)->values[0]=var4083;
{
var4084 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4085 = ((val*(*)(val* self))(var4084->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4084); /* to_s on <var4084:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4073)->values[2]=var4085;
{
var4086 = ((val*(*)(val* self))(var4073->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4073); /* native_to_s on <var4073:NativeArray[String]>*/
}
varonce4072 = var4073;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2831);
fatal_exit(1);
}
{
var4087 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4086, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4087); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4088!=NULL)) {
var4089 = varonce4088;
} else {
var4090 = "/";
var4092 = (val*)(1l<<2|1);
var4093 = (val*)(1l<<2|1);
var4094 = (val*)((long)(0)<<2|3);
var4095 = (val*)((long)(0)<<2|3);
var4091 = core__flat___CString___to_s_unsafe(var4090, var4092, var4093, var4094, var4095);
var4089 = var4091;
varonce4088 = var4089;
}
{
var4096 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4089); /* == on <var_pname:String>*/
}
if (var4096){
if (unlikely(varonce4097==NULL)) {
var4098 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4099!=NULL)) {
var4100 = varonce4099;
} else {
var4101 = " / ";
var4103 = (val*)(3l<<2|1);
var4104 = (val*)(3l<<2|1);
var4105 = (val*)((long)(0)<<2|3);
var4106 = (val*)((long)(0)<<2|3);
var4102 = core__flat___CString___to_s_unsafe(var4101, var4103, var4104, var4105, var4106);
var4100 = var4102;
varonce4099 = var4100;
}
((struct instance_core__NativeArray*)var4098)->values[1]=var4100;
} else {
var4098 = varonce4097;
varonce4097 = NULL;
}
{
var4107 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4108 = ((val*(*)(val* self))(var4107->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4107); /* to_s on <var4107:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4098)->values[0]=var4108;
{
var4109 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4110 = ((val*(*)(val* self))(var4109->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4109); /* to_s on <var4109:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4098)->values[2]=var4110;
{
var4111 = ((val*(*)(val* self))(var4098->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4098); /* native_to_s on <var4098:NativeArray[String]>*/
}
varonce4097 = var4098;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2834);
fatal_exit(1);
}
{
var4112 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4111, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4112); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4113!=NULL)) {
var4114 = varonce4113;
} else {
var4115 = "%";
var4117 = (val*)(1l<<2|1);
var4118 = (val*)(1l<<2|1);
var4119 = (val*)((long)(0)<<2|3);
var4120 = (val*)((long)(0)<<2|3);
var4116 = core__flat___CString___to_s_unsafe(var4115, var4117, var4118, var4119, var4120);
var4114 = var4116;
varonce4113 = var4114;
}
{
var4121 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4114); /* == on <var_pname:String>*/
}
if (var4121){
if (unlikely(varonce4122==NULL)) {
var4123 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4124!=NULL)) {
var4125 = varonce4124;
} else {
var4126 = " % ";
var4128 = (val*)(3l<<2|1);
var4129 = (val*)(3l<<2|1);
var4130 = (val*)((long)(0)<<2|3);
var4131 = (val*)((long)(0)<<2|3);
var4127 = core__flat___CString___to_s_unsafe(var4126, var4128, var4129, var4130, var4131);
var4125 = var4127;
varonce4124 = var4125;
}
((struct instance_core__NativeArray*)var4123)->values[1]=var4125;
} else {
var4123 = varonce4122;
varonce4122 = NULL;
}
{
var4132 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4133 = ((val*(*)(val* self))(var4132->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4132); /* to_s on <var4132:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4123)->values[0]=var4133;
{
var4134 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4135 = ((val*(*)(val* self))(var4134->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4134); /* to_s on <var4134:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4123)->values[2]=var4135;
{
var4136 = ((val*(*)(val* self))(var4123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4123); /* native_to_s on <var4123:NativeArray[String]>*/
}
varonce4122 = var4123;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2837);
fatal_exit(1);
}
{
var4137 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4136, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4137); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4138!=NULL)) {
var4139 = varonce4138;
} else {
var4140 = "<<";
var4142 = (val*)(2l<<2|1);
var4143 = (val*)(2l<<2|1);
var4144 = (val*)((long)(0)<<2|3);
var4145 = (val*)((long)(0)<<2|3);
var4141 = core__flat___CString___to_s_unsafe(var4140, var4142, var4143, var4144, var4145);
var4139 = var4141;
varonce4138 = var4139;
}
{
var4146 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4139); /* == on <var_pname:String>*/
}
if (var4146){
if (unlikely(varonce4147==NULL)) {
var4148 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4149!=NULL)) {
var4150 = varonce4149;
} else {
var4151 = " << ";
var4153 = (val*)(4l<<2|1);
var4154 = (val*)(4l<<2|1);
var4155 = (val*)((long)(0)<<2|3);
var4156 = (val*)((long)(0)<<2|3);
var4152 = core__flat___CString___to_s_unsafe(var4151, var4153, var4154, var4155, var4156);
var4150 = var4152;
varonce4149 = var4150;
}
((struct instance_core__NativeArray*)var4148)->values[1]=var4150;
} else {
var4148 = varonce4147;
varonce4147 = NULL;
}
{
var4157 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4158 = ((val*(*)(val* self))(var4157->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4157); /* to_s on <var4157:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4148)->values[0]=var4158;
{
var4159 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4160 = ((val*(*)(val* self))(var4159->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4159); /* to_s on <var4159:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4148)->values[2]=var4160;
{
var4161 = ((val*(*)(val* self))(var4148->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4148); /* native_to_s on <var4148:NativeArray[String]>*/
}
varonce4147 = var4148;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2840);
fatal_exit(1);
}
{
var4162 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4161, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4162); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4163!=NULL)) {
var4164 = varonce4163;
} else {
var4165 = ">>";
var4167 = (val*)(2l<<2|1);
var4168 = (val*)(2l<<2|1);
var4169 = (val*)((long)(0)<<2|3);
var4170 = (val*)((long)(0)<<2|3);
var4166 = core__flat___CString___to_s_unsafe(var4165, var4167, var4168, var4169, var4170);
var4164 = var4166;
varonce4163 = var4164;
}
{
var4171 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4164); /* == on <var_pname:String>*/
}
if (var4171){
if (unlikely(varonce4172==NULL)) {
var4173 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4174!=NULL)) {
var4175 = varonce4174;
} else {
var4176 = " >> ";
var4178 = (val*)(4l<<2|1);
var4179 = (val*)(4l<<2|1);
var4180 = (val*)((long)(0)<<2|3);
var4181 = (val*)((long)(0)<<2|3);
var4177 = core__flat___CString___to_s_unsafe(var4176, var4178, var4179, var4180, var4181);
var4175 = var4177;
varonce4174 = var4175;
}
((struct instance_core__NativeArray*)var4173)->values[1]=var4175;
} else {
var4173 = varonce4172;
varonce4172 = NULL;
}
{
var4182 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4183 = ((val*(*)(val* self))(var4182->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4182); /* to_s on <var4182:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4173)->values[0]=var4183;
{
var4184 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4185 = ((val*(*)(val* self))(var4184->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4184); /* to_s on <var4184:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4173)->values[2]=var4185;
{
var4186 = ((val*(*)(val* self))(var4173->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4173); /* native_to_s on <var4173:NativeArray[String]>*/
}
varonce4172 = var4173;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2843);
fatal_exit(1);
}
{
var4187 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4186, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4187); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4188!=NULL)) {
var4189 = varonce4188;
} else {
var4190 = "==";
var4192 = (val*)(2l<<2|1);
var4193 = (val*)(2l<<2|1);
var4194 = (val*)((long)(0)<<2|3);
var4195 = (val*)((long)(0)<<2|3);
var4191 = core__flat___CString___to_s_unsafe(var4190, var4192, var4193, var4194, var4195);
var4189 = var4191;
varonce4188 = var4189;
}
{
var4196 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4189); /* == on <var_pname:String>*/
}
if (var4196){
{
var4197 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4198 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4199 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var4197, var4198);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4199); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4200!=NULL)) {
var4201 = varonce4200;
} else {
var4202 = "!=";
var4204 = (val*)(2l<<2|1);
var4205 = (val*)(2l<<2|1);
var4206 = (val*)((long)(0)<<2|3);
var4207 = (val*)((long)(0)<<2|3);
var4203 = core__flat___CString___to_s_unsafe(var4202, var4204, var4205, var4206, var4207);
var4201 = var4203;
varonce4200 = var4201;
}
{
var4208 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4201); /* == on <var_pname:String>*/
}
if (var4208){
{
var4209 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4210 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4211 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var4209, var4210);
}
var_res4212 = var4211;
if (unlikely(varonce4213==NULL)) {
var4214 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4215!=NULL)) {
var4216 = varonce4215;
} else {
var4217 = "!";
var4219 = (val*)(1l<<2|1);
var4220 = (val*)(1l<<2|1);
var4221 = (val*)((long)(0)<<2|3);
var4222 = (val*)((long)(0)<<2|3);
var4218 = core__flat___CString___to_s_unsafe(var4217, var4219, var4220, var4221, var4222);
var4216 = var4218;
varonce4215 = var4216;
}
((struct instance_core__NativeArray*)var4214)->values[0]=var4216;
} else {
var4214 = varonce4213;
varonce4213 = NULL;
}
{
var4223 = ((val*(*)(val* self))(var_res4212->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res4212); /* to_s on <var_res4212:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4214)->values[1]=var4223;
{
var4224 = ((val*(*)(val* self))(var4214->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4214); /* native_to_s on <var4214:NativeArray[String]>*/
}
varonce4213 = var4214;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2850);
fatal_exit(1);
}
{
var4225 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4224, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4225); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4226!=NULL)) {
var4227 = varonce4226;
} else {
var4228 = "<";
var4230 = (val*)(1l<<2|1);
var4231 = (val*)(1l<<2|1);
var4232 = (val*)((long)(0)<<2|3);
var4233 = (val*)((long)(0)<<2|3);
var4229 = core__flat___CString___to_s_unsafe(var4228, var4230, var4231, var4232, var4233);
var4227 = var4229;
varonce4226 = var4227;
}
{
var4234 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4227); /* == on <var_pname:String>*/
}
if (var4234){
if (unlikely(varonce4235==NULL)) {
var4236 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4237!=NULL)) {
var4238 = varonce4237;
} else {
var4239 = " < ";
var4241 = (val*)(3l<<2|1);
var4242 = (val*)(3l<<2|1);
var4243 = (val*)((long)(0)<<2|3);
var4244 = (val*)((long)(0)<<2|3);
var4240 = core__flat___CString___to_s_unsafe(var4239, var4241, var4242, var4243, var4244);
var4238 = var4240;
varonce4237 = var4238;
}
((struct instance_core__NativeArray*)var4236)->values[1]=var4238;
} else {
var4236 = varonce4235;
varonce4235 = NULL;
}
{
var4245 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4246 = ((val*(*)(val* self))(var4245->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4245); /* to_s on <var4245:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4236)->values[0]=var4246;
{
var4247 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4248 = ((val*(*)(val* self))(var4247->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4247); /* to_s on <var4247:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4236)->values[2]=var4248;
{
var4249 = ((val*(*)(val* self))(var4236->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4236); /* native_to_s on <var4236:NativeArray[String]>*/
}
varonce4235 = var4236;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2853);
fatal_exit(1);
}
{
var4250 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4249, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4250); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4251!=NULL)) {
var4252 = varonce4251;
} else {
var4253 = ">";
var4255 = (val*)(1l<<2|1);
var4256 = (val*)(1l<<2|1);
var4257 = (val*)((long)(0)<<2|3);
var4258 = (val*)((long)(0)<<2|3);
var4254 = core__flat___CString___to_s_unsafe(var4253, var4255, var4256, var4257, var4258);
var4252 = var4254;
varonce4251 = var4252;
}
{
var4259 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4252); /* == on <var_pname:String>*/
}
if (var4259){
if (unlikely(varonce4260==NULL)) {
var4261 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4262!=NULL)) {
var4263 = varonce4262;
} else {
var4264 = " > ";
var4266 = (val*)(3l<<2|1);
var4267 = (val*)(3l<<2|1);
var4268 = (val*)((long)(0)<<2|3);
var4269 = (val*)((long)(0)<<2|3);
var4265 = core__flat___CString___to_s_unsafe(var4264, var4266, var4267, var4268, var4269);
var4263 = var4265;
varonce4262 = var4263;
}
((struct instance_core__NativeArray*)var4261)->values[1]=var4263;
} else {
var4261 = varonce4260;
varonce4260 = NULL;
}
{
var4270 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4271 = ((val*(*)(val* self))(var4270->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4270); /* to_s on <var4270:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4261)->values[0]=var4271;
{
var4272 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4273 = ((val*(*)(val* self))(var4272->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4272); /* to_s on <var4272:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4261)->values[2]=var4273;
{
var4274 = ((val*(*)(val* self))(var4261->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4261); /* native_to_s on <var4261:NativeArray[String]>*/
}
varonce4260 = var4261;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2856);
fatal_exit(1);
}
{
var4275 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4274, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4275); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4276!=NULL)) {
var4277 = varonce4276;
} else {
var4278 = "<=";
var4280 = (val*)(2l<<2|1);
var4281 = (val*)(2l<<2|1);
var4282 = (val*)((long)(0)<<2|3);
var4283 = (val*)((long)(0)<<2|3);
var4279 = core__flat___CString___to_s_unsafe(var4278, var4280, var4281, var4282, var4283);
var4277 = var4279;
varonce4276 = var4277;
}
{
var4284 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4277); /* == on <var_pname:String>*/
}
if (var4284){
if (unlikely(varonce4285==NULL)) {
var4286 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4287!=NULL)) {
var4288 = varonce4287;
} else {
var4289 = " <= ";
var4291 = (val*)(4l<<2|1);
var4292 = (val*)(4l<<2|1);
var4293 = (val*)((long)(0)<<2|3);
var4294 = (val*)((long)(0)<<2|3);
var4290 = core__flat___CString___to_s_unsafe(var4289, var4291, var4292, var4293, var4294);
var4288 = var4290;
varonce4287 = var4288;
}
((struct instance_core__NativeArray*)var4286)->values[1]=var4288;
} else {
var4286 = varonce4285;
varonce4285 = NULL;
}
{
var4295 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4296 = ((val*(*)(val* self))(var4295->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4295); /* to_s on <var4295:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4286)->values[0]=var4296;
{
var4297 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4298 = ((val*(*)(val* self))(var4297->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4297); /* to_s on <var4297:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4286)->values[2]=var4298;
{
var4299 = ((val*(*)(val* self))(var4286->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4286); /* native_to_s on <var4286:NativeArray[String]>*/
}
varonce4285 = var4286;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2859);
fatal_exit(1);
}
{
var4300 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4299, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4300); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4301!=NULL)) {
var4302 = varonce4301;
} else {
var4303 = ">=";
var4305 = (val*)(2l<<2|1);
var4306 = (val*)(2l<<2|1);
var4307 = (val*)((long)(0)<<2|3);
var4308 = (val*)((long)(0)<<2|3);
var4304 = core__flat___CString___to_s_unsafe(var4303, var4305, var4306, var4307, var4308);
var4302 = var4304;
varonce4301 = var4302;
}
{
var4309 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4302); /* == on <var_pname:String>*/
}
if (var4309){
if (unlikely(varonce4310==NULL)) {
var4311 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4312!=NULL)) {
var4313 = varonce4312;
} else {
var4314 = " >= ";
var4316 = (val*)(4l<<2|1);
var4317 = (val*)(4l<<2|1);
var4318 = (val*)((long)(0)<<2|3);
var4319 = (val*)((long)(0)<<2|3);
var4315 = core__flat___CString___to_s_unsafe(var4314, var4316, var4317, var4318, var4319);
var4313 = var4315;
varonce4312 = var4313;
}
((struct instance_core__NativeArray*)var4311)->values[1]=var4313;
} else {
var4311 = varonce4310;
varonce4310 = NULL;
}
{
var4320 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4321 = ((val*(*)(val* self))(var4320->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4320); /* to_s on <var4320:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4311)->values[0]=var4321;
{
var4322 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4323 = ((val*(*)(val* self))(var4322->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4322); /* to_s on <var4322:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4311)->values[2]=var4323;
{
var4324 = ((val*(*)(val* self))(var4311->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4311); /* native_to_s on <var4311:NativeArray[String]>*/
}
varonce4310 = var4311;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2862);
fatal_exit(1);
}
{
var4325 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4324, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4325); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4326!=NULL)) {
var4327 = varonce4326;
} else {
var4328 = "to_i";
var4330 = (val*)(4l<<2|1);
var4331 = (val*)(4l<<2|1);
var4332 = (val*)((long)(0)<<2|3);
var4333 = (val*)((long)(0)<<2|3);
var4329 = core__flat___CString___to_s_unsafe(var4328, var4330, var4331, var4332, var4333);
var4327 = var4329;
varonce4326 = var4327;
}
{
var4334 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4327); /* == on <var_pname:String>*/
}
if (var4334){
if (unlikely(varonce4335==NULL)) {
var4336 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4337!=NULL)) {
var4338 = varonce4337;
} else {
var4339 = "(long)";
var4341 = (val*)(6l<<2|1);
var4342 = (val*)(6l<<2|1);
var4343 = (val*)((long)(0)<<2|3);
var4344 = (val*)((long)(0)<<2|3);
var4340 = core__flat___CString___to_s_unsafe(var4339, var4341, var4342, var4343, var4344);
var4338 = var4340;
varonce4337 = var4338;
}
((struct instance_core__NativeArray*)var4336)->values[0]=var4338;
} else {
var4336 = varonce4335;
varonce4335 = NULL;
}
{
var4345 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4346 = ((val*(*)(val* self))(var4345->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4345); /* to_s on <var4345:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4336)->values[1]=var4346;
{
var4347 = ((val*(*)(val* self))(var4336->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4336); /* native_to_s on <var4336:NativeArray[String]>*/
}
varonce4335 = var4336;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2865);
fatal_exit(1);
}
{
var4348 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4347, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4348); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4349!=NULL)) {
var4350 = varonce4349;
} else {
var4351 = "to_b";
var4353 = (val*)(4l<<2|1);
var4354 = (val*)(4l<<2|1);
var4355 = (val*)((long)(0)<<2|3);
var4356 = (val*)((long)(0)<<2|3);
var4352 = core__flat___CString___to_s_unsafe(var4351, var4353, var4354, var4355, var4356);
var4350 = var4352;
varonce4349 = var4350;
}
{
var4357 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4350); /* == on <var_pname:String>*/
}
if (var4357){
if (unlikely(varonce4358==NULL)) {
var4359 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4360!=NULL)) {
var4361 = varonce4360;
} else {
var4362 = "(unsigned char)";
var4364 = (val*)(15l<<2|1);
var4365 = (val*)(15l<<2|1);
var4366 = (val*)((long)(0)<<2|3);
var4367 = (val*)((long)(0)<<2|3);
var4363 = core__flat___CString___to_s_unsafe(var4362, var4364, var4365, var4366, var4367);
var4361 = var4363;
varonce4360 = var4361;
}
((struct instance_core__NativeArray*)var4359)->values[0]=var4361;
} else {
var4359 = varonce4358;
varonce4358 = NULL;
}
{
var4368 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4369 = ((val*(*)(val* self))(var4368->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4368); /* to_s on <var4368:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4359)->values[1]=var4369;
{
var4370 = ((val*(*)(val* self))(var4359->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4359); /* native_to_s on <var4359:NativeArray[String]>*/
}
varonce4358 = var4359;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2868);
fatal_exit(1);
}
{
var4371 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4370, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4371); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4372!=NULL)) {
var4373 = varonce4372;
} else {
var4374 = "to_i8";
var4376 = (val*)(5l<<2|1);
var4377 = (val*)(5l<<2|1);
var4378 = (val*)((long)(0)<<2|3);
var4379 = (val*)((long)(0)<<2|3);
var4375 = core__flat___CString___to_s_unsafe(var4374, var4376, var4377, var4378, var4379);
var4373 = var4375;
varonce4372 = var4373;
}
{
var4380 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4373); /* == on <var_pname:String>*/
}
if (var4380){
if (unlikely(varonce4381==NULL)) {
var4382 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4383!=NULL)) {
var4384 = varonce4383;
} else {
var4385 = "(int8_t)";
var4387 = (val*)(8l<<2|1);
var4388 = (val*)(8l<<2|1);
var4389 = (val*)((long)(0)<<2|3);
var4390 = (val*)((long)(0)<<2|3);
var4386 = core__flat___CString___to_s_unsafe(var4385, var4387, var4388, var4389, var4390);
var4384 = var4386;
varonce4383 = var4384;
}
((struct instance_core__NativeArray*)var4382)->values[0]=var4384;
} else {
var4382 = varonce4381;
varonce4381 = NULL;
}
{
var4391 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4392 = ((val*(*)(val* self))(var4391->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4391); /* to_s on <var4391:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4382)->values[1]=var4392;
{
var4393 = ((val*(*)(val* self))(var4382->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4382); /* native_to_s on <var4382:NativeArray[String]>*/
}
varonce4381 = var4382;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2871);
fatal_exit(1);
}
{
var4394 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4393, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4394); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4395!=NULL)) {
var4396 = varonce4395;
} else {
var4397 = "to_i16";
var4399 = (val*)(6l<<2|1);
var4400 = (val*)(6l<<2|1);
var4401 = (val*)((long)(0)<<2|3);
var4402 = (val*)((long)(0)<<2|3);
var4398 = core__flat___CString___to_s_unsafe(var4397, var4399, var4400, var4401, var4402);
var4396 = var4398;
varonce4395 = var4396;
}
{
var4403 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4396); /* == on <var_pname:String>*/
}
if (var4403){
if (unlikely(varonce4404==NULL)) {
var4405 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4406!=NULL)) {
var4407 = varonce4406;
} else {
var4408 = "(int16_t)";
var4410 = (val*)(9l<<2|1);
var4411 = (val*)(9l<<2|1);
var4412 = (val*)((long)(0)<<2|3);
var4413 = (val*)((long)(0)<<2|3);
var4409 = core__flat___CString___to_s_unsafe(var4408, var4410, var4411, var4412, var4413);
var4407 = var4409;
varonce4406 = var4407;
}
((struct instance_core__NativeArray*)var4405)->values[0]=var4407;
} else {
var4405 = varonce4404;
varonce4404 = NULL;
}
{
var4414 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4415 = ((val*(*)(val* self))(var4414->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4414); /* to_s on <var4414:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4405)->values[1]=var4415;
{
var4416 = ((val*(*)(val* self))(var4405->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4405); /* native_to_s on <var4405:NativeArray[String]>*/
}
varonce4404 = var4405;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2874);
fatal_exit(1);
}
{
var4417 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4416, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4417); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4418!=NULL)) {
var4419 = varonce4418;
} else {
var4420 = "to_i32";
var4422 = (val*)(6l<<2|1);
var4423 = (val*)(6l<<2|1);
var4424 = (val*)((long)(0)<<2|3);
var4425 = (val*)((long)(0)<<2|3);
var4421 = core__flat___CString___to_s_unsafe(var4420, var4422, var4423, var4424, var4425);
var4419 = var4421;
varonce4418 = var4419;
}
{
var4426 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4419); /* == on <var_pname:String>*/
}
if (var4426){
if (unlikely(varonce4427==NULL)) {
var4428 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4429!=NULL)) {
var4430 = varonce4429;
} else {
var4431 = "(int32_t)";
var4433 = (val*)(9l<<2|1);
var4434 = (val*)(9l<<2|1);
var4435 = (val*)((long)(0)<<2|3);
var4436 = (val*)((long)(0)<<2|3);
var4432 = core__flat___CString___to_s_unsafe(var4431, var4433, var4434, var4435, var4436);
var4430 = var4432;
varonce4429 = var4430;
}
((struct instance_core__NativeArray*)var4428)->values[0]=var4430;
} else {
var4428 = varonce4427;
varonce4427 = NULL;
}
{
var4437 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4438 = ((val*(*)(val* self))(var4437->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4437); /* to_s on <var4437:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4428)->values[1]=var4438;
{
var4439 = ((val*(*)(val* self))(var4428->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4428); /* native_to_s on <var4428:NativeArray[String]>*/
}
varonce4427 = var4428;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2877);
fatal_exit(1);
}
{
var4440 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4439, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4440); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4441!=NULL)) {
var4442 = varonce4441;
} else {
var4443 = "to_u32";
var4445 = (val*)(6l<<2|1);
var4446 = (val*)(6l<<2|1);
var4447 = (val*)((long)(0)<<2|3);
var4448 = (val*)((long)(0)<<2|3);
var4444 = core__flat___CString___to_s_unsafe(var4443, var4445, var4446, var4447, var4448);
var4442 = var4444;
varonce4441 = var4442;
}
{
var4449 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4442); /* == on <var_pname:String>*/
}
if (var4449){
if (unlikely(varonce4450==NULL)) {
var4451 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4452!=NULL)) {
var4453 = varonce4452;
} else {
var4454 = "(uint32_t)";
var4456 = (val*)(10l<<2|1);
var4457 = (val*)(10l<<2|1);
var4458 = (val*)((long)(0)<<2|3);
var4459 = (val*)((long)(0)<<2|3);
var4455 = core__flat___CString___to_s_unsafe(var4454, var4456, var4457, var4458, var4459);
var4453 = var4455;
varonce4452 = var4453;
}
((struct instance_core__NativeArray*)var4451)->values[0]=var4453;
} else {
var4451 = varonce4450;
varonce4450 = NULL;
}
{
var4460 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4461 = ((val*(*)(val* self))(var4460->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4460); /* to_s on <var4460:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4451)->values[1]=var4461;
{
var4462 = ((val*(*)(val* self))(var4451->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4451); /* native_to_s on <var4451:NativeArray[String]>*/
}
varonce4450 = var4451;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2880);
fatal_exit(1);
}
{
var4463 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4462, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4463); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4464!=NULL)) {
var4465 = varonce4464;
} else {
var4466 = "to_f";
var4468 = (val*)(4l<<2|1);
var4469 = (val*)(4l<<2|1);
var4470 = (val*)((long)(0)<<2|3);
var4471 = (val*)((long)(0)<<2|3);
var4467 = core__flat___CString___to_s_unsafe(var4466, var4468, var4469, var4470, var4471);
var4465 = var4467;
varonce4464 = var4465;
}
{
var4472 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4465); /* == on <var_pname:String>*/
}
if (var4472){
if (unlikely(varonce4473==NULL)) {
var4474 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4475!=NULL)) {
var4476 = varonce4475;
} else {
var4477 = "(double)";
var4479 = (val*)(8l<<2|1);
var4480 = (val*)(8l<<2|1);
var4481 = (val*)((long)(0)<<2|3);
var4482 = (val*)((long)(0)<<2|3);
var4478 = core__flat___CString___to_s_unsafe(var4477, var4479, var4480, var4481, var4482);
var4476 = var4478;
varonce4475 = var4476;
}
((struct instance_core__NativeArray*)var4474)->values[0]=var4476;
} else {
var4474 = varonce4473;
varonce4473 = NULL;
}
{
var4483 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4484 = ((val*(*)(val* self))(var4483->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4483); /* to_s on <var4483:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4474)->values[1]=var4484;
{
var4485 = ((val*(*)(val* self))(var4474->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4474); /* native_to_s on <var4474:NativeArray[String]>*/
}
varonce4473 = var4474;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2883);
fatal_exit(1);
}
{
var4486 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4485, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4486); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4487!=NULL)) {
var4488 = varonce4487;
} else {
var4489 = "&";
var4491 = (val*)(1l<<2|1);
var4492 = (val*)(1l<<2|1);
var4493 = (val*)((long)(0)<<2|3);
var4494 = (val*)((long)(0)<<2|3);
var4490 = core__flat___CString___to_s_unsafe(var4489, var4491, var4492, var4493, var4494);
var4488 = var4490;
varonce4487 = var4488;
}
{
var4495 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4488); /* == on <var_pname:String>*/
}
if (var4495){
if (unlikely(varonce4496==NULL)) {
var4497 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4498!=NULL)) {
var4499 = varonce4498;
} else {
var4500 = " & ";
var4502 = (val*)(3l<<2|1);
var4503 = (val*)(3l<<2|1);
var4504 = (val*)((long)(0)<<2|3);
var4505 = (val*)((long)(0)<<2|3);
var4501 = core__flat___CString___to_s_unsafe(var4500, var4502, var4503, var4504, var4505);
var4499 = var4501;
varonce4498 = var4499;
}
((struct instance_core__NativeArray*)var4497)->values[1]=var4499;
} else {
var4497 = varonce4496;
varonce4496 = NULL;
}
{
var4506 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4507 = ((val*(*)(val* self))(var4506->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4506); /* to_s on <var4506:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4497)->values[0]=var4507;
{
var4508 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4509 = ((val*(*)(val* self))(var4508->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4508); /* to_s on <var4508:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4497)->values[2]=var4509;
{
var4510 = ((val*(*)(val* self))(var4497->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4497); /* native_to_s on <var4497:NativeArray[String]>*/
}
varonce4496 = var4497;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2886);
fatal_exit(1);
}
{
var4511 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4510, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4511); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4512!=NULL)) {
var4513 = varonce4512;
} else {
var4514 = "|";
var4516 = (val*)(1l<<2|1);
var4517 = (val*)(1l<<2|1);
var4518 = (val*)((long)(0)<<2|3);
var4519 = (val*)((long)(0)<<2|3);
var4515 = core__flat___CString___to_s_unsafe(var4514, var4516, var4517, var4518, var4519);
var4513 = var4515;
varonce4512 = var4513;
}
{
var4520 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4513); /* == on <var_pname:String>*/
}
if (var4520){
if (unlikely(varonce4521==NULL)) {
var4522 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4523!=NULL)) {
var4524 = varonce4523;
} else {
var4525 = " | ";
var4527 = (val*)(3l<<2|1);
var4528 = (val*)(3l<<2|1);
var4529 = (val*)((long)(0)<<2|3);
var4530 = (val*)((long)(0)<<2|3);
var4526 = core__flat___CString___to_s_unsafe(var4525, var4527, var4528, var4529, var4530);
var4524 = var4526;
varonce4523 = var4524;
}
((struct instance_core__NativeArray*)var4522)->values[1]=var4524;
} else {
var4522 = varonce4521;
varonce4521 = NULL;
}
{
var4531 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4532 = ((val*(*)(val* self))(var4531->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4531); /* to_s on <var4531:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4522)->values[0]=var4532;
{
var4533 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4534 = ((val*(*)(val* self))(var4533->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4533); /* to_s on <var4533:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4522)->values[2]=var4534;
{
var4535 = ((val*(*)(val* self))(var4522->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4522); /* native_to_s on <var4522:NativeArray[String]>*/
}
varonce4521 = var4522;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2889);
fatal_exit(1);
}
{
var4536 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4535, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4536); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4537!=NULL)) {
var4538 = varonce4537;
} else {
var4539 = "^";
var4541 = (val*)(1l<<2|1);
var4542 = (val*)(1l<<2|1);
var4543 = (val*)((long)(0)<<2|3);
var4544 = (val*)((long)(0)<<2|3);
var4540 = core__flat___CString___to_s_unsafe(var4539, var4541, var4542, var4543, var4544);
var4538 = var4540;
varonce4537 = var4538;
}
{
var4545 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4538); /* == on <var_pname:String>*/
}
if (var4545){
if (unlikely(varonce4546==NULL)) {
var4547 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4548!=NULL)) {
var4549 = varonce4548;
} else {
var4550 = " ^ ";
var4552 = (val*)(3l<<2|1);
var4553 = (val*)(3l<<2|1);
var4554 = (val*)((long)(0)<<2|3);
var4555 = (val*)((long)(0)<<2|3);
var4551 = core__flat___CString___to_s_unsafe(var4550, var4552, var4553, var4554, var4555);
var4549 = var4551;
varonce4548 = var4549;
}
((struct instance_core__NativeArray*)var4547)->values[1]=var4549;
} else {
var4547 = varonce4546;
varonce4546 = NULL;
}
{
var4556 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4557 = ((val*(*)(val* self))(var4556->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4556); /* to_s on <var4556:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4547)->values[0]=var4557;
{
var4558 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4559 = ((val*(*)(val* self))(var4558->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4558); /* to_s on <var4558:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4547)->values[2]=var4559;
{
var4560 = ((val*(*)(val* self))(var4547->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4547); /* native_to_s on <var4547:NativeArray[String]>*/
}
varonce4546 = var4547;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2892);
fatal_exit(1);
}
{
var4561 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4560, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4561); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4562!=NULL)) {
var4563 = varonce4562;
} else {
var4564 = "unary ~";
var4566 = (val*)(7l<<2|1);
var4567 = (val*)(7l<<2|1);
var4568 = (val*)((long)(0)<<2|3);
var4569 = (val*)((long)(0)<<2|3);
var4565 = core__flat___CString___to_s_unsafe(var4564, var4566, var4567, var4568, var4569);
var4563 = var4565;
varonce4562 = var4563;
}
{
var4570 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4563); /* == on <var_pname:String>*/
}
if (var4570){
if (unlikely(varonce4571==NULL)) {
var4572 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4573!=NULL)) {
var4574 = varonce4573;
} else {
var4575 = "~";
var4577 = (val*)(1l<<2|1);
var4578 = (val*)(1l<<2|1);
var4579 = (val*)((long)(0)<<2|3);
var4580 = (val*)((long)(0)<<2|3);
var4576 = core__flat___CString___to_s_unsafe(var4575, var4577, var4578, var4579, var4580);
var4574 = var4576;
varonce4573 = var4574;
}
((struct instance_core__NativeArray*)var4572)->values[0]=var4574;
} else {
var4572 = varonce4571;
varonce4571 = NULL;
}
{
var4581 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4582 = ((val*(*)(val* self))(var4581->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4581); /* to_s on <var4581:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4572)->values[1]=var4582;
{
var4583 = ((val*(*)(val* self))(var4572->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4572); /* native_to_s on <var4572:NativeArray[String]>*/
}
varonce4571 = var4572;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2895);
fatal_exit(1);
}
{
var4584 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4583, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4584); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce4585!=NULL)) {
var4586 = varonce4585;
} else {
var4587 = "Int32";
var4589 = (val*)(5l<<2|1);
var4590 = (val*)(5l<<2|1);
var4591 = (val*)((long)(0)<<2|3);
var4592 = (val*)((long)(0)<<2|3);
var4588 = core__flat___CString___to_s_unsafe(var4587, var4589, var4590, var4591, var4592);
var4586 = var4588;
varonce4585 = var4586;
}
{
var4593 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var4586); /* == on <var_cname:String>*/
}
if (var4593){
if (likely(varonce4594!=NULL)) {
var4595 = varonce4594;
} else {
var4596 = "output";
var4598 = (val*)(6l<<2|1);
var4599 = (val*)(6l<<2|1);
var4600 = (val*)((long)(0)<<2|3);
var4601 = (val*)((long)(0)<<2|3);
var4597 = core__flat___CString___to_s_unsafe(var4596, var4598, var4599, var4600, var4601);
var4595 = var4597;
varonce4594 = var4595;
}
{
var4602 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4595); /* == on <var_pname:String>*/
}
if (var4602){
if (unlikely(varonce4603==NULL)) {
var4604 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4605!=NULL)) {
var4606 = varonce4605;
} else {
var4607 = "printf(\"%\"PRIi32 \"\\n\", ";
var4609 = (val*)(23l<<2|1);
var4610 = (val*)(23l<<2|1);
var4611 = (val*)((long)(0)<<2|3);
var4612 = (val*)((long)(0)<<2|3);
var4608 = core__flat___CString___to_s_unsafe(var4607, var4609, var4610, var4611, var4612);
var4606 = var4608;
varonce4605 = var4606;
}
((struct instance_core__NativeArray*)var4604)->values[0]=var4606;
if (likely(varonce4613!=NULL)) {
var4614 = varonce4613;
} else {
var4615 = ");";
var4617 = (val*)(2l<<2|1);
var4618 = (val*)(2l<<2|1);
var4619 = (val*)((long)(0)<<2|3);
var4620 = (val*)((long)(0)<<2|3);
var4616 = core__flat___CString___to_s_unsafe(var4615, var4617, var4618, var4619, var4620);
var4614 = var4616;
varonce4613 = var4614;
}
((struct instance_core__NativeArray*)var4604)->values[2]=var4614;
} else {
var4604 = varonce4603;
varonce4603 = NULL;
}
{
var4621 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var4622 = ((val*(*)(val* self))(var4621->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4621); /* to_s on <var4621:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4604)->values[1]=var4622;
{
var4623 = ((val*(*)(val* self))(var4604->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4604); /* native_to_s on <var4604:NativeArray[String]>*/
}
varonce4603 = var4604;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var4623); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4624!=NULL)) {
var4625 = varonce4624;
} else {
var4626 = "object_id";
var4628 = (val*)(9l<<2|1);
var4629 = (val*)(9l<<2|1);
var4630 = (val*)((long)(0)<<2|3);
var4631 = (val*)((long)(0)<<2|3);
var4627 = core__flat___CString___to_s_unsafe(var4626, var4628, var4629, var4630, var4631);
var4625 = var4627;
varonce4624 = var4625;
}
{
var4632 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4625); /* == on <var_pname:String>*/
}
if (var4632){
if (unlikely(varonce4633==NULL)) {
var4634 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4635!=NULL)) {
var4636 = varonce4635;
} else {
var4637 = "(long)";
var4639 = (val*)(6l<<2|1);
var4640 = (val*)(6l<<2|1);
var4641 = (val*)((long)(0)<<2|3);
var4642 = (val*)((long)(0)<<2|3);
var4638 = core__flat___CString___to_s_unsafe(var4637, var4639, var4640, var4641, var4642);
var4636 = var4638;
varonce4635 = var4636;
}
((struct instance_core__NativeArray*)var4634)->values[0]=var4636;
} else {
var4634 = varonce4633;
varonce4633 = NULL;
}
{
var4643 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var4644 = ((val*(*)(val* self))(var4643->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4643); /* to_s on <var4643:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4634)->values[1]=var4644;
{
var4645 = ((val*(*)(val* self))(var4634->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4634); /* native_to_s on <var4634:NativeArray[String]>*/
}
varonce4633 = var4634;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2903);
fatal_exit(1);
}
{
var4646 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4645, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4646); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4647!=NULL)) {
var4648 = varonce4647;
} else {
var4649 = "+";
var4651 = (val*)(1l<<2|1);
var4652 = (val*)(1l<<2|1);
var4653 = (val*)((long)(0)<<2|3);
var4654 = (val*)((long)(0)<<2|3);
var4650 = core__flat___CString___to_s_unsafe(var4649, var4651, var4652, var4653, var4654);
var4648 = var4650;
varonce4647 = var4648;
}
{
var4655 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4648); /* == on <var_pname:String>*/
}
if (var4655){
if (unlikely(varonce4656==NULL)) {
var4657 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4658!=NULL)) {
var4659 = varonce4658;
} else {
var4660 = " + ";
var4662 = (val*)(3l<<2|1);
var4663 = (val*)(3l<<2|1);
var4664 = (val*)((long)(0)<<2|3);
var4665 = (val*)((long)(0)<<2|3);
var4661 = core__flat___CString___to_s_unsafe(var4660, var4662, var4663, var4664, var4665);
var4659 = var4661;
varonce4658 = var4659;
}
((struct instance_core__NativeArray*)var4657)->values[1]=var4659;
} else {
var4657 = varonce4656;
varonce4656 = NULL;
}
{
var4666 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4667 = ((val*(*)(val* self))(var4666->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4666); /* to_s on <var4666:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4657)->values[0]=var4667;
{
var4668 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4669 = ((val*(*)(val* self))(var4668->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4668); /* to_s on <var4668:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4657)->values[2]=var4669;
{
var4670 = ((val*(*)(val* self))(var4657->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4657); /* native_to_s on <var4657:NativeArray[String]>*/
}
varonce4656 = var4657;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2906);
fatal_exit(1);
}
{
var4671 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4670, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4671); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4672!=NULL)) {
var4673 = varonce4672;
} else {
var4674 = "-";
var4676 = (val*)(1l<<2|1);
var4677 = (val*)(1l<<2|1);
var4678 = (val*)((long)(0)<<2|3);
var4679 = (val*)((long)(0)<<2|3);
var4675 = core__flat___CString___to_s_unsafe(var4674, var4676, var4677, var4678, var4679);
var4673 = var4675;
varonce4672 = var4673;
}
{
var4680 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4673); /* == on <var_pname:String>*/
}
if (var4680){
if (unlikely(varonce4681==NULL)) {
var4682 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4683!=NULL)) {
var4684 = varonce4683;
} else {
var4685 = " - ";
var4687 = (val*)(3l<<2|1);
var4688 = (val*)(3l<<2|1);
var4689 = (val*)((long)(0)<<2|3);
var4690 = (val*)((long)(0)<<2|3);
var4686 = core__flat___CString___to_s_unsafe(var4685, var4687, var4688, var4689, var4690);
var4684 = var4686;
varonce4683 = var4684;
}
((struct instance_core__NativeArray*)var4682)->values[1]=var4684;
} else {
var4682 = varonce4681;
varonce4681 = NULL;
}
{
var4691 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4692 = ((val*(*)(val* self))(var4691->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4691); /* to_s on <var4691:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4682)->values[0]=var4692;
{
var4693 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4694 = ((val*(*)(val* self))(var4693->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4693); /* to_s on <var4693:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4682)->values[2]=var4694;
{
var4695 = ((val*(*)(val* self))(var4682->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4682); /* native_to_s on <var4682:NativeArray[String]>*/
}
varonce4681 = var4682;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2909);
fatal_exit(1);
}
{
var4696 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4695, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4696); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4697!=NULL)) {
var4698 = varonce4697;
} else {
var4699 = "unary -";
var4701 = (val*)(7l<<2|1);
var4702 = (val*)(7l<<2|1);
var4703 = (val*)((long)(0)<<2|3);
var4704 = (val*)((long)(0)<<2|3);
var4700 = core__flat___CString___to_s_unsafe(var4699, var4701, var4702, var4703, var4704);
var4698 = var4700;
varonce4697 = var4698;
}
{
var4705 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4698); /* == on <var_pname:String>*/
}
if (var4705){
if (unlikely(varonce4706==NULL)) {
var4707 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4708!=NULL)) {
var4709 = varonce4708;
} else {
var4710 = "-";
var4712 = (val*)(1l<<2|1);
var4713 = (val*)(1l<<2|1);
var4714 = (val*)((long)(0)<<2|3);
var4715 = (val*)((long)(0)<<2|3);
var4711 = core__flat___CString___to_s_unsafe(var4710, var4712, var4713, var4714, var4715);
var4709 = var4711;
varonce4708 = var4709;
}
((struct instance_core__NativeArray*)var4707)->values[0]=var4709;
} else {
var4707 = varonce4706;
varonce4706 = NULL;
}
{
var4716 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4717 = ((val*(*)(val* self))(var4716->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4716); /* to_s on <var4716:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4707)->values[1]=var4717;
{
var4718 = ((val*(*)(val* self))(var4707->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4707); /* native_to_s on <var4707:NativeArray[String]>*/
}
varonce4706 = var4707;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2912);
fatal_exit(1);
}
{
var4719 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4718, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4719); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4720!=NULL)) {
var4721 = varonce4720;
} else {
var4722 = "unary +";
var4724 = (val*)(7l<<2|1);
var4725 = (val*)(7l<<2|1);
var4726 = (val*)((long)(0)<<2|3);
var4727 = (val*)((long)(0)<<2|3);
var4723 = core__flat___CString___to_s_unsafe(var4722, var4724, var4725, var4726, var4727);
var4721 = var4723;
varonce4720 = var4721;
}
{
var4728 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4721); /* == on <var_pname:String>*/
}
if (var4728){
{
var4729 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4729); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4730!=NULL)) {
var4731 = varonce4730;
} else {
var4732 = "*";
var4734 = (val*)(1l<<2|1);
var4735 = (val*)(1l<<2|1);
var4736 = (val*)((long)(0)<<2|3);
var4737 = (val*)((long)(0)<<2|3);
var4733 = core__flat___CString___to_s_unsafe(var4732, var4734, var4735, var4736, var4737);
var4731 = var4733;
varonce4730 = var4731;
}
{
var4738 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4731); /* == on <var_pname:String>*/
}
if (var4738){
if (unlikely(varonce4739==NULL)) {
var4740 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4741!=NULL)) {
var4742 = varonce4741;
} else {
var4743 = " * ";
var4745 = (val*)(3l<<2|1);
var4746 = (val*)(3l<<2|1);
var4747 = (val*)((long)(0)<<2|3);
var4748 = (val*)((long)(0)<<2|3);
var4744 = core__flat___CString___to_s_unsafe(var4743, var4745, var4746, var4747, var4748);
var4742 = var4744;
varonce4741 = var4742;
}
((struct instance_core__NativeArray*)var4740)->values[1]=var4742;
} else {
var4740 = varonce4739;
varonce4739 = NULL;
}
{
var4749 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4750 = ((val*(*)(val* self))(var4749->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4749); /* to_s on <var4749:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4740)->values[0]=var4750;
{
var4751 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4752 = ((val*(*)(val* self))(var4751->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4751); /* to_s on <var4751:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4740)->values[2]=var4752;
{
var4753 = ((val*(*)(val* self))(var4740->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4740); /* native_to_s on <var4740:NativeArray[String]>*/
}
varonce4739 = var4740;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2918);
fatal_exit(1);
}
{
var4754 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4753, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4754); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4755!=NULL)) {
var4756 = varonce4755;
} else {
var4757 = "/";
var4759 = (val*)(1l<<2|1);
var4760 = (val*)(1l<<2|1);
var4761 = (val*)((long)(0)<<2|3);
var4762 = (val*)((long)(0)<<2|3);
var4758 = core__flat___CString___to_s_unsafe(var4757, var4759, var4760, var4761, var4762);
var4756 = var4758;
varonce4755 = var4756;
}
{
var4763 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4756); /* == on <var_pname:String>*/
}
if (var4763){
if (unlikely(varonce4764==NULL)) {
var4765 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4766!=NULL)) {
var4767 = varonce4766;
} else {
var4768 = " / ";
var4770 = (val*)(3l<<2|1);
var4771 = (val*)(3l<<2|1);
var4772 = (val*)((long)(0)<<2|3);
var4773 = (val*)((long)(0)<<2|3);
var4769 = core__flat___CString___to_s_unsafe(var4768, var4770, var4771, var4772, var4773);
var4767 = var4769;
varonce4766 = var4767;
}
((struct instance_core__NativeArray*)var4765)->values[1]=var4767;
} else {
var4765 = varonce4764;
varonce4764 = NULL;
}
{
var4774 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4775 = ((val*(*)(val* self))(var4774->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4774); /* to_s on <var4774:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4765)->values[0]=var4775;
{
var4776 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4777 = ((val*(*)(val* self))(var4776->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4776); /* to_s on <var4776:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4765)->values[2]=var4777;
{
var4778 = ((val*(*)(val* self))(var4765->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4765); /* native_to_s on <var4765:NativeArray[String]>*/
}
varonce4764 = var4765;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2921);
fatal_exit(1);
}
{
var4779 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4778, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4779); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4780!=NULL)) {
var4781 = varonce4780;
} else {
var4782 = "%";
var4784 = (val*)(1l<<2|1);
var4785 = (val*)(1l<<2|1);
var4786 = (val*)((long)(0)<<2|3);
var4787 = (val*)((long)(0)<<2|3);
var4783 = core__flat___CString___to_s_unsafe(var4782, var4784, var4785, var4786, var4787);
var4781 = var4783;
varonce4780 = var4781;
}
{
var4788 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4781); /* == on <var_pname:String>*/
}
if (var4788){
if (unlikely(varonce4789==NULL)) {
var4790 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4791!=NULL)) {
var4792 = varonce4791;
} else {
var4793 = " % ";
var4795 = (val*)(3l<<2|1);
var4796 = (val*)(3l<<2|1);
var4797 = (val*)((long)(0)<<2|3);
var4798 = (val*)((long)(0)<<2|3);
var4794 = core__flat___CString___to_s_unsafe(var4793, var4795, var4796, var4797, var4798);
var4792 = var4794;
varonce4791 = var4792;
}
((struct instance_core__NativeArray*)var4790)->values[1]=var4792;
} else {
var4790 = varonce4789;
varonce4789 = NULL;
}
{
var4799 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4800 = ((val*(*)(val* self))(var4799->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4799); /* to_s on <var4799:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4790)->values[0]=var4800;
{
var4801 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4802 = ((val*(*)(val* self))(var4801->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4801); /* to_s on <var4801:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4790)->values[2]=var4802;
{
var4803 = ((val*(*)(val* self))(var4790->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4790); /* native_to_s on <var4790:NativeArray[String]>*/
}
varonce4789 = var4790;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2924);
fatal_exit(1);
}
{
var4804 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4803, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4804); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4805!=NULL)) {
var4806 = varonce4805;
} else {
var4807 = "<<";
var4809 = (val*)(2l<<2|1);
var4810 = (val*)(2l<<2|1);
var4811 = (val*)((long)(0)<<2|3);
var4812 = (val*)((long)(0)<<2|3);
var4808 = core__flat___CString___to_s_unsafe(var4807, var4809, var4810, var4811, var4812);
var4806 = var4808;
varonce4805 = var4806;
}
{
var4813 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4806); /* == on <var_pname:String>*/
}
if (var4813){
if (unlikely(varonce4814==NULL)) {
var4815 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4816!=NULL)) {
var4817 = varonce4816;
} else {
var4818 = " << ";
var4820 = (val*)(4l<<2|1);
var4821 = (val*)(4l<<2|1);
var4822 = (val*)((long)(0)<<2|3);
var4823 = (val*)((long)(0)<<2|3);
var4819 = core__flat___CString___to_s_unsafe(var4818, var4820, var4821, var4822, var4823);
var4817 = var4819;
varonce4816 = var4817;
}
((struct instance_core__NativeArray*)var4815)->values[1]=var4817;
} else {
var4815 = varonce4814;
varonce4814 = NULL;
}
{
var4824 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4825 = ((val*(*)(val* self))(var4824->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4824); /* to_s on <var4824:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4815)->values[0]=var4825;
{
var4826 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4827 = ((val*(*)(val* self))(var4826->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4826); /* to_s on <var4826:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4815)->values[2]=var4827;
{
var4828 = ((val*(*)(val* self))(var4815->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4815); /* native_to_s on <var4815:NativeArray[String]>*/
}
varonce4814 = var4815;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2927);
fatal_exit(1);
}
{
var4829 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4828, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4829); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4830!=NULL)) {
var4831 = varonce4830;
} else {
var4832 = ">>";
var4834 = (val*)(2l<<2|1);
var4835 = (val*)(2l<<2|1);
var4836 = (val*)((long)(0)<<2|3);
var4837 = (val*)((long)(0)<<2|3);
var4833 = core__flat___CString___to_s_unsafe(var4832, var4834, var4835, var4836, var4837);
var4831 = var4833;
varonce4830 = var4831;
}
{
var4838 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4831); /* == on <var_pname:String>*/
}
if (var4838){
if (unlikely(varonce4839==NULL)) {
var4840 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4841!=NULL)) {
var4842 = varonce4841;
} else {
var4843 = " >> ";
var4845 = (val*)(4l<<2|1);
var4846 = (val*)(4l<<2|1);
var4847 = (val*)((long)(0)<<2|3);
var4848 = (val*)((long)(0)<<2|3);
var4844 = core__flat___CString___to_s_unsafe(var4843, var4845, var4846, var4847, var4848);
var4842 = var4844;
varonce4841 = var4842;
}
((struct instance_core__NativeArray*)var4840)->values[1]=var4842;
} else {
var4840 = varonce4839;
varonce4839 = NULL;
}
{
var4849 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4850 = ((val*(*)(val* self))(var4849->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4849); /* to_s on <var4849:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4840)->values[0]=var4850;
{
var4851 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4852 = ((val*(*)(val* self))(var4851->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4851); /* to_s on <var4851:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4840)->values[2]=var4852;
{
var4853 = ((val*(*)(val* self))(var4840->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4840); /* native_to_s on <var4840:NativeArray[String]>*/
}
varonce4839 = var4840;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2930);
fatal_exit(1);
}
{
var4854 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4853, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4854); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4855!=NULL)) {
var4856 = varonce4855;
} else {
var4857 = "==";
var4859 = (val*)(2l<<2|1);
var4860 = (val*)(2l<<2|1);
var4861 = (val*)((long)(0)<<2|3);
var4862 = (val*)((long)(0)<<2|3);
var4858 = core__flat___CString___to_s_unsafe(var4857, var4859, var4860, var4861, var4862);
var4856 = var4858;
varonce4855 = var4856;
}
{
var4863 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4856); /* == on <var_pname:String>*/
}
if (var4863){
{
var4864 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4865 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4866 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var4864, var4865);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4866); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4867!=NULL)) {
var4868 = varonce4867;
} else {
var4869 = "!=";
var4871 = (val*)(2l<<2|1);
var4872 = (val*)(2l<<2|1);
var4873 = (val*)((long)(0)<<2|3);
var4874 = (val*)((long)(0)<<2|3);
var4870 = core__flat___CString___to_s_unsafe(var4869, var4871, var4872, var4873, var4874);
var4868 = var4870;
varonce4867 = var4868;
}
{
var4875 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4868); /* == on <var_pname:String>*/
}
if (var4875){
{
var4876 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4877 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4878 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var4876, var4877);
}
var_res4879 = var4878;
if (unlikely(varonce4880==NULL)) {
var4881 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4882!=NULL)) {
var4883 = varonce4882;
} else {
var4884 = "!";
var4886 = (val*)(1l<<2|1);
var4887 = (val*)(1l<<2|1);
var4888 = (val*)((long)(0)<<2|3);
var4889 = (val*)((long)(0)<<2|3);
var4885 = core__flat___CString___to_s_unsafe(var4884, var4886, var4887, var4888, var4889);
var4883 = var4885;
varonce4882 = var4883;
}
((struct instance_core__NativeArray*)var4881)->values[0]=var4883;
} else {
var4881 = varonce4880;
varonce4880 = NULL;
}
{
var4890 = ((val*(*)(val* self))(var_res4879->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res4879); /* to_s on <var_res4879:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4881)->values[1]=var4890;
{
var4891 = ((val*(*)(val* self))(var4881->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4881); /* native_to_s on <var4881:NativeArray[String]>*/
}
varonce4880 = var4881;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2937);
fatal_exit(1);
}
{
var4892 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4891, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4892); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4893!=NULL)) {
var4894 = varonce4893;
} else {
var4895 = "<";
var4897 = (val*)(1l<<2|1);
var4898 = (val*)(1l<<2|1);
var4899 = (val*)((long)(0)<<2|3);
var4900 = (val*)((long)(0)<<2|3);
var4896 = core__flat___CString___to_s_unsafe(var4895, var4897, var4898, var4899, var4900);
var4894 = var4896;
varonce4893 = var4894;
}
{
var4901 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4894); /* == on <var_pname:String>*/
}
if (var4901){
if (unlikely(varonce4902==NULL)) {
var4903 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4904!=NULL)) {
var4905 = varonce4904;
} else {
var4906 = " < ";
var4908 = (val*)(3l<<2|1);
var4909 = (val*)(3l<<2|1);
var4910 = (val*)((long)(0)<<2|3);
var4911 = (val*)((long)(0)<<2|3);
var4907 = core__flat___CString___to_s_unsafe(var4906, var4908, var4909, var4910, var4911);
var4905 = var4907;
varonce4904 = var4905;
}
((struct instance_core__NativeArray*)var4903)->values[1]=var4905;
} else {
var4903 = varonce4902;
varonce4902 = NULL;
}
{
var4912 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4913 = ((val*(*)(val* self))(var4912->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4912); /* to_s on <var4912:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4903)->values[0]=var4913;
{
var4914 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4915 = ((val*(*)(val* self))(var4914->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4914); /* to_s on <var4914:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4903)->values[2]=var4915;
{
var4916 = ((val*(*)(val* self))(var4903->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4903); /* native_to_s on <var4903:NativeArray[String]>*/
}
varonce4902 = var4903;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2940);
fatal_exit(1);
}
{
var4917 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4916, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4917); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4918!=NULL)) {
var4919 = varonce4918;
} else {
var4920 = ">";
var4922 = (val*)(1l<<2|1);
var4923 = (val*)(1l<<2|1);
var4924 = (val*)((long)(0)<<2|3);
var4925 = (val*)((long)(0)<<2|3);
var4921 = core__flat___CString___to_s_unsafe(var4920, var4922, var4923, var4924, var4925);
var4919 = var4921;
varonce4918 = var4919;
}
{
var4926 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4919); /* == on <var_pname:String>*/
}
if (var4926){
if (unlikely(varonce4927==NULL)) {
var4928 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4929!=NULL)) {
var4930 = varonce4929;
} else {
var4931 = " > ";
var4933 = (val*)(3l<<2|1);
var4934 = (val*)(3l<<2|1);
var4935 = (val*)((long)(0)<<2|3);
var4936 = (val*)((long)(0)<<2|3);
var4932 = core__flat___CString___to_s_unsafe(var4931, var4933, var4934, var4935, var4936);
var4930 = var4932;
varonce4929 = var4930;
}
((struct instance_core__NativeArray*)var4928)->values[1]=var4930;
} else {
var4928 = varonce4927;
varonce4927 = NULL;
}
{
var4937 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4938 = ((val*(*)(val* self))(var4937->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4937); /* to_s on <var4937:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4928)->values[0]=var4938;
{
var4939 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4940 = ((val*(*)(val* self))(var4939->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4939); /* to_s on <var4939:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4928)->values[2]=var4940;
{
var4941 = ((val*(*)(val* self))(var4928->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4928); /* native_to_s on <var4928:NativeArray[String]>*/
}
varonce4927 = var4928;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2943);
fatal_exit(1);
}
{
var4942 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4941, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4942); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4943!=NULL)) {
var4944 = varonce4943;
} else {
var4945 = "<=";
var4947 = (val*)(2l<<2|1);
var4948 = (val*)(2l<<2|1);
var4949 = (val*)((long)(0)<<2|3);
var4950 = (val*)((long)(0)<<2|3);
var4946 = core__flat___CString___to_s_unsafe(var4945, var4947, var4948, var4949, var4950);
var4944 = var4946;
varonce4943 = var4944;
}
{
var4951 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4944); /* == on <var_pname:String>*/
}
if (var4951){
if (unlikely(varonce4952==NULL)) {
var4953 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4954!=NULL)) {
var4955 = varonce4954;
} else {
var4956 = " <= ";
var4958 = (val*)(4l<<2|1);
var4959 = (val*)(4l<<2|1);
var4960 = (val*)((long)(0)<<2|3);
var4961 = (val*)((long)(0)<<2|3);
var4957 = core__flat___CString___to_s_unsafe(var4956, var4958, var4959, var4960, var4961);
var4955 = var4957;
varonce4954 = var4955;
}
((struct instance_core__NativeArray*)var4953)->values[1]=var4955;
} else {
var4953 = varonce4952;
varonce4952 = NULL;
}
{
var4962 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4963 = ((val*(*)(val* self))(var4962->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4962); /* to_s on <var4962:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4953)->values[0]=var4963;
{
var4964 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4965 = ((val*(*)(val* self))(var4964->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4964); /* to_s on <var4964:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4953)->values[2]=var4965;
{
var4966 = ((val*(*)(val* self))(var4953->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4953); /* native_to_s on <var4953:NativeArray[String]>*/
}
varonce4952 = var4953;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2946);
fatal_exit(1);
}
{
var4967 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4966, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4967); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4968!=NULL)) {
var4969 = varonce4968;
} else {
var4970 = ">=";
var4972 = (val*)(2l<<2|1);
var4973 = (val*)(2l<<2|1);
var4974 = (val*)((long)(0)<<2|3);
var4975 = (val*)((long)(0)<<2|3);
var4971 = core__flat___CString___to_s_unsafe(var4970, var4972, var4973, var4974, var4975);
var4969 = var4971;
varonce4968 = var4969;
}
{
var4976 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4969); /* == on <var_pname:String>*/
}
if (var4976){
if (unlikely(varonce4977==NULL)) {
var4978 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce4979!=NULL)) {
var4980 = varonce4979;
} else {
var4981 = " >= ";
var4983 = (val*)(4l<<2|1);
var4984 = (val*)(4l<<2|1);
var4985 = (val*)((long)(0)<<2|3);
var4986 = (val*)((long)(0)<<2|3);
var4982 = core__flat___CString___to_s_unsafe(var4981, var4983, var4984, var4985, var4986);
var4980 = var4982;
varonce4979 = var4980;
}
((struct instance_core__NativeArray*)var4978)->values[1]=var4980;
} else {
var4978 = varonce4977;
varonce4977 = NULL;
}
{
var4987 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var4988 = ((val*(*)(val* self))(var4987->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4987); /* to_s on <var4987:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4978)->values[0]=var4988;
{
var4989 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4990 = ((val*(*)(val* self))(var4989->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4989); /* to_s on <var4989:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4978)->values[2]=var4990;
{
var4991 = ((val*(*)(val* self))(var4978->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4978); /* native_to_s on <var4978:NativeArray[String]>*/
}
varonce4977 = var4978;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2949);
fatal_exit(1);
}
{
var4992 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4991, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4992); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4993!=NULL)) {
var4994 = varonce4993;
} else {
var4995 = "to_i";
var4997 = (val*)(4l<<2|1);
var4998 = (val*)(4l<<2|1);
var4999 = (val*)((long)(0)<<2|3);
var5000 = (val*)((long)(0)<<2|3);
var4996 = core__flat___CString___to_s_unsafe(var4995, var4997, var4998, var4999, var5000);
var4994 = var4996;
varonce4993 = var4994;
}
{
var5001 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4994); /* == on <var_pname:String>*/
}
if (var5001){
if (unlikely(varonce5002==NULL)) {
var5003 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5004!=NULL)) {
var5005 = varonce5004;
} else {
var5006 = "(long)";
var5008 = (val*)(6l<<2|1);
var5009 = (val*)(6l<<2|1);
var5010 = (val*)((long)(0)<<2|3);
var5011 = (val*)((long)(0)<<2|3);
var5007 = core__flat___CString___to_s_unsafe(var5006, var5008, var5009, var5010, var5011);
var5005 = var5007;
varonce5004 = var5005;
}
((struct instance_core__NativeArray*)var5003)->values[0]=var5005;
} else {
var5003 = varonce5002;
varonce5002 = NULL;
}
{
var5012 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5013 = ((val*(*)(val* self))(var5012->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5012); /* to_s on <var5012:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5003)->values[1]=var5013;
{
var5014 = ((val*(*)(val* self))(var5003->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5003); /* native_to_s on <var5003:NativeArray[String]>*/
}
varonce5002 = var5003;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2952);
fatal_exit(1);
}
{
var5015 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5014, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5015); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5016!=NULL)) {
var5017 = varonce5016;
} else {
var5018 = "to_b";
var5020 = (val*)(4l<<2|1);
var5021 = (val*)(4l<<2|1);
var5022 = (val*)((long)(0)<<2|3);
var5023 = (val*)((long)(0)<<2|3);
var5019 = core__flat___CString___to_s_unsafe(var5018, var5020, var5021, var5022, var5023);
var5017 = var5019;
varonce5016 = var5017;
}
{
var5024 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5017); /* == on <var_pname:String>*/
}
if (var5024){
if (unlikely(varonce5025==NULL)) {
var5026 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5027!=NULL)) {
var5028 = varonce5027;
} else {
var5029 = "(unsigned char)";
var5031 = (val*)(15l<<2|1);
var5032 = (val*)(15l<<2|1);
var5033 = (val*)((long)(0)<<2|3);
var5034 = (val*)((long)(0)<<2|3);
var5030 = core__flat___CString___to_s_unsafe(var5029, var5031, var5032, var5033, var5034);
var5028 = var5030;
varonce5027 = var5028;
}
((struct instance_core__NativeArray*)var5026)->values[0]=var5028;
} else {
var5026 = varonce5025;
varonce5025 = NULL;
}
{
var5035 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5036 = ((val*(*)(val* self))(var5035->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5035); /* to_s on <var5035:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5026)->values[1]=var5036;
{
var5037 = ((val*(*)(val* self))(var5026->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5026); /* native_to_s on <var5026:NativeArray[String]>*/
}
varonce5025 = var5026;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2955);
fatal_exit(1);
}
{
var5038 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5037, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5038); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5039!=NULL)) {
var5040 = varonce5039;
} else {
var5041 = "to_i8";
var5043 = (val*)(5l<<2|1);
var5044 = (val*)(5l<<2|1);
var5045 = (val*)((long)(0)<<2|3);
var5046 = (val*)((long)(0)<<2|3);
var5042 = core__flat___CString___to_s_unsafe(var5041, var5043, var5044, var5045, var5046);
var5040 = var5042;
varonce5039 = var5040;
}
{
var5047 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5040); /* == on <var_pname:String>*/
}
if (var5047){
if (unlikely(varonce5048==NULL)) {
var5049 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5050!=NULL)) {
var5051 = varonce5050;
} else {
var5052 = "(int8_t)";
var5054 = (val*)(8l<<2|1);
var5055 = (val*)(8l<<2|1);
var5056 = (val*)((long)(0)<<2|3);
var5057 = (val*)((long)(0)<<2|3);
var5053 = core__flat___CString___to_s_unsafe(var5052, var5054, var5055, var5056, var5057);
var5051 = var5053;
varonce5050 = var5051;
}
((struct instance_core__NativeArray*)var5049)->values[0]=var5051;
} else {
var5049 = varonce5048;
varonce5048 = NULL;
}
{
var5058 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5059 = ((val*(*)(val* self))(var5058->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5058); /* to_s on <var5058:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5049)->values[1]=var5059;
{
var5060 = ((val*(*)(val* self))(var5049->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5049); /* native_to_s on <var5049:NativeArray[String]>*/
}
varonce5048 = var5049;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2958);
fatal_exit(1);
}
{
var5061 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5060, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5061); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5062!=NULL)) {
var5063 = varonce5062;
} else {
var5064 = "to_i16";
var5066 = (val*)(6l<<2|1);
var5067 = (val*)(6l<<2|1);
var5068 = (val*)((long)(0)<<2|3);
var5069 = (val*)((long)(0)<<2|3);
var5065 = core__flat___CString___to_s_unsafe(var5064, var5066, var5067, var5068, var5069);
var5063 = var5065;
varonce5062 = var5063;
}
{
var5070 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5063); /* == on <var_pname:String>*/
}
if (var5070){
if (unlikely(varonce5071==NULL)) {
var5072 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5073!=NULL)) {
var5074 = varonce5073;
} else {
var5075 = "(int16_t)";
var5077 = (val*)(9l<<2|1);
var5078 = (val*)(9l<<2|1);
var5079 = (val*)((long)(0)<<2|3);
var5080 = (val*)((long)(0)<<2|3);
var5076 = core__flat___CString___to_s_unsafe(var5075, var5077, var5078, var5079, var5080);
var5074 = var5076;
varonce5073 = var5074;
}
((struct instance_core__NativeArray*)var5072)->values[0]=var5074;
} else {
var5072 = varonce5071;
varonce5071 = NULL;
}
{
var5081 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5082 = ((val*(*)(val* self))(var5081->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5081); /* to_s on <var5081:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5072)->values[1]=var5082;
{
var5083 = ((val*(*)(val* self))(var5072->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5072); /* native_to_s on <var5072:NativeArray[String]>*/
}
varonce5071 = var5072;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2961);
fatal_exit(1);
}
{
var5084 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5083, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5084); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5085!=NULL)) {
var5086 = varonce5085;
} else {
var5087 = "to_u16";
var5089 = (val*)(6l<<2|1);
var5090 = (val*)(6l<<2|1);
var5091 = (val*)((long)(0)<<2|3);
var5092 = (val*)((long)(0)<<2|3);
var5088 = core__flat___CString___to_s_unsafe(var5087, var5089, var5090, var5091, var5092);
var5086 = var5088;
varonce5085 = var5086;
}
{
var5093 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5086); /* == on <var_pname:String>*/
}
if (var5093){
if (unlikely(varonce5094==NULL)) {
var5095 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5096!=NULL)) {
var5097 = varonce5096;
} else {
var5098 = "(uint16_t)";
var5100 = (val*)(10l<<2|1);
var5101 = (val*)(10l<<2|1);
var5102 = (val*)((long)(0)<<2|3);
var5103 = (val*)((long)(0)<<2|3);
var5099 = core__flat___CString___to_s_unsafe(var5098, var5100, var5101, var5102, var5103);
var5097 = var5099;
varonce5096 = var5097;
}
((struct instance_core__NativeArray*)var5095)->values[0]=var5097;
} else {
var5095 = varonce5094;
varonce5094 = NULL;
}
{
var5104 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5105 = ((val*(*)(val* self))(var5104->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5104); /* to_s on <var5104:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5095)->values[1]=var5105;
{
var5106 = ((val*(*)(val* self))(var5095->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5095); /* native_to_s on <var5095:NativeArray[String]>*/
}
varonce5094 = var5095;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2964);
fatal_exit(1);
}
{
var5107 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5106, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5107); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5108!=NULL)) {
var5109 = varonce5108;
} else {
var5110 = "to_u32";
var5112 = (val*)(6l<<2|1);
var5113 = (val*)(6l<<2|1);
var5114 = (val*)((long)(0)<<2|3);
var5115 = (val*)((long)(0)<<2|3);
var5111 = core__flat___CString___to_s_unsafe(var5110, var5112, var5113, var5114, var5115);
var5109 = var5111;
varonce5108 = var5109;
}
{
var5116 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5109); /* == on <var_pname:String>*/
}
if (var5116){
if (unlikely(varonce5117==NULL)) {
var5118 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5119!=NULL)) {
var5120 = varonce5119;
} else {
var5121 = "(uint32_t)";
var5123 = (val*)(10l<<2|1);
var5124 = (val*)(10l<<2|1);
var5125 = (val*)((long)(0)<<2|3);
var5126 = (val*)((long)(0)<<2|3);
var5122 = core__flat___CString___to_s_unsafe(var5121, var5123, var5124, var5125, var5126);
var5120 = var5122;
varonce5119 = var5120;
}
((struct instance_core__NativeArray*)var5118)->values[0]=var5120;
} else {
var5118 = varonce5117;
varonce5117 = NULL;
}
{
var5127 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5128 = ((val*(*)(val* self))(var5127->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5127); /* to_s on <var5127:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5118)->values[1]=var5128;
{
var5129 = ((val*(*)(val* self))(var5118->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5118); /* native_to_s on <var5118:NativeArray[String]>*/
}
varonce5117 = var5118;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2967);
fatal_exit(1);
}
{
var5130 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5129, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5130); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5131!=NULL)) {
var5132 = varonce5131;
} else {
var5133 = "to_f";
var5135 = (val*)(4l<<2|1);
var5136 = (val*)(4l<<2|1);
var5137 = (val*)((long)(0)<<2|3);
var5138 = (val*)((long)(0)<<2|3);
var5134 = core__flat___CString___to_s_unsafe(var5133, var5135, var5136, var5137, var5138);
var5132 = var5134;
varonce5131 = var5132;
}
{
var5139 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5132); /* == on <var_pname:String>*/
}
if (var5139){
if (unlikely(varonce5140==NULL)) {
var5141 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5142!=NULL)) {
var5143 = varonce5142;
} else {
var5144 = "(double)";
var5146 = (val*)(8l<<2|1);
var5147 = (val*)(8l<<2|1);
var5148 = (val*)((long)(0)<<2|3);
var5149 = (val*)((long)(0)<<2|3);
var5145 = core__flat___CString___to_s_unsafe(var5144, var5146, var5147, var5148, var5149);
var5143 = var5145;
varonce5142 = var5143;
}
((struct instance_core__NativeArray*)var5141)->values[0]=var5143;
} else {
var5141 = varonce5140;
varonce5140 = NULL;
}
{
var5150 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5151 = ((val*(*)(val* self))(var5150->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5150); /* to_s on <var5150:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5141)->values[1]=var5151;
{
var5152 = ((val*(*)(val* self))(var5141->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5141); /* native_to_s on <var5141:NativeArray[String]>*/
}
varonce5140 = var5141;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2970);
fatal_exit(1);
}
{
var5153 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5152, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5153); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5154!=NULL)) {
var5155 = varonce5154;
} else {
var5156 = "&";
var5158 = (val*)(1l<<2|1);
var5159 = (val*)(1l<<2|1);
var5160 = (val*)((long)(0)<<2|3);
var5161 = (val*)((long)(0)<<2|3);
var5157 = core__flat___CString___to_s_unsafe(var5156, var5158, var5159, var5160, var5161);
var5155 = var5157;
varonce5154 = var5155;
}
{
var5162 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5155); /* == on <var_pname:String>*/
}
if (var5162){
if (unlikely(varonce5163==NULL)) {
var5164 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5165!=NULL)) {
var5166 = varonce5165;
} else {
var5167 = " & ";
var5169 = (val*)(3l<<2|1);
var5170 = (val*)(3l<<2|1);
var5171 = (val*)((long)(0)<<2|3);
var5172 = (val*)((long)(0)<<2|3);
var5168 = core__flat___CString___to_s_unsafe(var5167, var5169, var5170, var5171, var5172);
var5166 = var5168;
varonce5165 = var5166;
}
((struct instance_core__NativeArray*)var5164)->values[1]=var5166;
} else {
var5164 = varonce5163;
varonce5163 = NULL;
}
{
var5173 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5174 = ((val*(*)(val* self))(var5173->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5173); /* to_s on <var5173:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5164)->values[0]=var5174;
{
var5175 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5176 = ((val*(*)(val* self))(var5175->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5175); /* to_s on <var5175:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5164)->values[2]=var5176;
{
var5177 = ((val*(*)(val* self))(var5164->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5164); /* native_to_s on <var5164:NativeArray[String]>*/
}
varonce5163 = var5164;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2973);
fatal_exit(1);
}
{
var5178 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5177, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5178); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5179!=NULL)) {
var5180 = varonce5179;
} else {
var5181 = "|";
var5183 = (val*)(1l<<2|1);
var5184 = (val*)(1l<<2|1);
var5185 = (val*)((long)(0)<<2|3);
var5186 = (val*)((long)(0)<<2|3);
var5182 = core__flat___CString___to_s_unsafe(var5181, var5183, var5184, var5185, var5186);
var5180 = var5182;
varonce5179 = var5180;
}
{
var5187 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5180); /* == on <var_pname:String>*/
}
if (var5187){
if (unlikely(varonce5188==NULL)) {
var5189 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5190!=NULL)) {
var5191 = varonce5190;
} else {
var5192 = " | ";
var5194 = (val*)(3l<<2|1);
var5195 = (val*)(3l<<2|1);
var5196 = (val*)((long)(0)<<2|3);
var5197 = (val*)((long)(0)<<2|3);
var5193 = core__flat___CString___to_s_unsafe(var5192, var5194, var5195, var5196, var5197);
var5191 = var5193;
varonce5190 = var5191;
}
((struct instance_core__NativeArray*)var5189)->values[1]=var5191;
} else {
var5189 = varonce5188;
varonce5188 = NULL;
}
{
var5198 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5199 = ((val*(*)(val* self))(var5198->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5198); /* to_s on <var5198:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5189)->values[0]=var5199;
{
var5200 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5201 = ((val*(*)(val* self))(var5200->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5200); /* to_s on <var5200:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5189)->values[2]=var5201;
{
var5202 = ((val*(*)(val* self))(var5189->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5189); /* native_to_s on <var5189:NativeArray[String]>*/
}
varonce5188 = var5189;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2976);
fatal_exit(1);
}
{
var5203 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5202, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5203); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5204!=NULL)) {
var5205 = varonce5204;
} else {
var5206 = "^";
var5208 = (val*)(1l<<2|1);
var5209 = (val*)(1l<<2|1);
var5210 = (val*)((long)(0)<<2|3);
var5211 = (val*)((long)(0)<<2|3);
var5207 = core__flat___CString___to_s_unsafe(var5206, var5208, var5209, var5210, var5211);
var5205 = var5207;
varonce5204 = var5205;
}
{
var5212 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5205); /* == on <var_pname:String>*/
}
if (var5212){
if (unlikely(varonce5213==NULL)) {
var5214 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5215!=NULL)) {
var5216 = varonce5215;
} else {
var5217 = " ^ ";
var5219 = (val*)(3l<<2|1);
var5220 = (val*)(3l<<2|1);
var5221 = (val*)((long)(0)<<2|3);
var5222 = (val*)((long)(0)<<2|3);
var5218 = core__flat___CString___to_s_unsafe(var5217, var5219, var5220, var5221, var5222);
var5216 = var5218;
varonce5215 = var5216;
}
((struct instance_core__NativeArray*)var5214)->values[1]=var5216;
} else {
var5214 = varonce5213;
varonce5213 = NULL;
}
{
var5223 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5224 = ((val*(*)(val* self))(var5223->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5223); /* to_s on <var5223:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5214)->values[0]=var5224;
{
var5225 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5226 = ((val*(*)(val* self))(var5225->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5225); /* to_s on <var5225:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5214)->values[2]=var5226;
{
var5227 = ((val*(*)(val* self))(var5214->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5214); /* native_to_s on <var5214:NativeArray[String]>*/
}
varonce5213 = var5214;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2979);
fatal_exit(1);
}
{
var5228 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5227, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5228); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5229!=NULL)) {
var5230 = varonce5229;
} else {
var5231 = "unary ~";
var5233 = (val*)(7l<<2|1);
var5234 = (val*)(7l<<2|1);
var5235 = (val*)((long)(0)<<2|3);
var5236 = (val*)((long)(0)<<2|3);
var5232 = core__flat___CString___to_s_unsafe(var5231, var5233, var5234, var5235, var5236);
var5230 = var5232;
varonce5229 = var5230;
}
{
var5237 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5230); /* == on <var_pname:String>*/
}
if (var5237){
if (unlikely(varonce5238==NULL)) {
var5239 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5240!=NULL)) {
var5241 = varonce5240;
} else {
var5242 = "~";
var5244 = (val*)(1l<<2|1);
var5245 = (val*)(1l<<2|1);
var5246 = (val*)((long)(0)<<2|3);
var5247 = (val*)((long)(0)<<2|3);
var5243 = core__flat___CString___to_s_unsafe(var5242, var5244, var5245, var5246, var5247);
var5241 = var5243;
varonce5240 = var5241;
}
((struct instance_core__NativeArray*)var5239)->values[0]=var5241;
} else {
var5239 = varonce5238;
varonce5238 = NULL;
}
{
var5248 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5249 = ((val*(*)(val* self))(var5248->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5248); /* to_s on <var5248:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5239)->values[1]=var5249;
{
var5250 = ((val*(*)(val* self))(var5239->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5239); /* native_to_s on <var5239:NativeArray[String]>*/
}
varonce5238 = var5239;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2982);
fatal_exit(1);
}
{
var5251 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5250, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5251); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce5252!=NULL)) {
var5253 = varonce5252;
} else {
var5254 = "UInt32";
var5256 = (val*)(6l<<2|1);
var5257 = (val*)(6l<<2|1);
var5258 = (val*)((long)(0)<<2|3);
var5259 = (val*)((long)(0)<<2|3);
var5255 = core__flat___CString___to_s_unsafe(var5254, var5256, var5257, var5258, var5259);
var5253 = var5255;
varonce5252 = var5253;
}
{
var5260 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var5253); /* == on <var_cname:String>*/
}
if (var5260){
if (likely(varonce5261!=NULL)) {
var5262 = varonce5261;
} else {
var5263 = "output";
var5265 = (val*)(6l<<2|1);
var5266 = (val*)(6l<<2|1);
var5267 = (val*)((long)(0)<<2|3);
var5268 = (val*)((long)(0)<<2|3);
var5264 = core__flat___CString___to_s_unsafe(var5263, var5265, var5266, var5267, var5268);
var5262 = var5264;
varonce5261 = var5262;
}
{
var5269 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5262); /* == on <var_pname:String>*/
}
if (var5269){
if (unlikely(varonce5270==NULL)) {
var5271 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5272!=NULL)) {
var5273 = varonce5272;
} else {
var5274 = "printf(\"%\"PRIu32 \"\\n\", ";
var5276 = (val*)(23l<<2|1);
var5277 = (val*)(23l<<2|1);
var5278 = (val*)((long)(0)<<2|3);
var5279 = (val*)((long)(0)<<2|3);
var5275 = core__flat___CString___to_s_unsafe(var5274, var5276, var5277, var5278, var5279);
var5273 = var5275;
varonce5272 = var5273;
}
((struct instance_core__NativeArray*)var5271)->values[0]=var5273;
if (likely(varonce5280!=NULL)) {
var5281 = varonce5280;
} else {
var5282 = ");";
var5284 = (val*)(2l<<2|1);
var5285 = (val*)(2l<<2|1);
var5286 = (val*)((long)(0)<<2|3);
var5287 = (val*)((long)(0)<<2|3);
var5283 = core__flat___CString___to_s_unsafe(var5282, var5284, var5285, var5286, var5287);
var5281 = var5283;
varonce5280 = var5281;
}
((struct instance_core__NativeArray*)var5271)->values[2]=var5281;
} else {
var5271 = varonce5270;
varonce5270 = NULL;
}
{
var5288 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var5289 = ((val*(*)(val* self))(var5288->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5288); /* to_s on <var5288:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5271)->values[1]=var5289;
{
var5290 = ((val*(*)(val* self))(var5271->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5271); /* native_to_s on <var5271:NativeArray[String]>*/
}
varonce5270 = var5271;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var5290); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5291!=NULL)) {
var5292 = varonce5291;
} else {
var5293 = "object_id";
var5295 = (val*)(9l<<2|1);
var5296 = (val*)(9l<<2|1);
var5297 = (val*)((long)(0)<<2|3);
var5298 = (val*)((long)(0)<<2|3);
var5294 = core__flat___CString___to_s_unsafe(var5293, var5295, var5296, var5297, var5298);
var5292 = var5294;
varonce5291 = var5292;
}
{
var5299 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5292); /* == on <var_pname:String>*/
}
if (var5299){
if (unlikely(varonce5300==NULL)) {
var5301 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5302!=NULL)) {
var5303 = varonce5302;
} else {
var5304 = "(long)";
var5306 = (val*)(6l<<2|1);
var5307 = (val*)(6l<<2|1);
var5308 = (val*)((long)(0)<<2|3);
var5309 = (val*)((long)(0)<<2|3);
var5305 = core__flat___CString___to_s_unsafe(var5304, var5306, var5307, var5308, var5309);
var5303 = var5305;
varonce5302 = var5303;
}
((struct instance_core__NativeArray*)var5301)->values[0]=var5303;
} else {
var5301 = varonce5300;
varonce5300 = NULL;
}
{
var5310 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var5311 = ((val*(*)(val* self))(var5310->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5310); /* to_s on <var5310:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5301)->values[1]=var5311;
{
var5312 = ((val*(*)(val* self))(var5301->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5301); /* native_to_s on <var5301:NativeArray[String]>*/
}
varonce5300 = var5301;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2990);
fatal_exit(1);
}
{
var5313 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5312, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5313); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5314!=NULL)) {
var5315 = varonce5314;
} else {
var5316 = "+";
var5318 = (val*)(1l<<2|1);
var5319 = (val*)(1l<<2|1);
var5320 = (val*)((long)(0)<<2|3);
var5321 = (val*)((long)(0)<<2|3);
var5317 = core__flat___CString___to_s_unsafe(var5316, var5318, var5319, var5320, var5321);
var5315 = var5317;
varonce5314 = var5315;
}
{
var5322 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5315); /* == on <var_pname:String>*/
}
if (var5322){
if (unlikely(varonce5323==NULL)) {
var5324 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5325!=NULL)) {
var5326 = varonce5325;
} else {
var5327 = " + ";
var5329 = (val*)(3l<<2|1);
var5330 = (val*)(3l<<2|1);
var5331 = (val*)((long)(0)<<2|3);
var5332 = (val*)((long)(0)<<2|3);
var5328 = core__flat___CString___to_s_unsafe(var5327, var5329, var5330, var5331, var5332);
var5326 = var5328;
varonce5325 = var5326;
}
((struct instance_core__NativeArray*)var5324)->values[1]=var5326;
} else {
var5324 = varonce5323;
varonce5323 = NULL;
}
{
var5333 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5334 = ((val*(*)(val* self))(var5333->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5333); /* to_s on <var5333:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5324)->values[0]=var5334;
{
var5335 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5336 = ((val*(*)(val* self))(var5335->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5335); /* to_s on <var5335:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5324)->values[2]=var5336;
{
var5337 = ((val*(*)(val* self))(var5324->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5324); /* native_to_s on <var5324:NativeArray[String]>*/
}
varonce5323 = var5324;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2993);
fatal_exit(1);
}
{
var5338 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5337, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5338); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5339!=NULL)) {
var5340 = varonce5339;
} else {
var5341 = "-";
var5343 = (val*)(1l<<2|1);
var5344 = (val*)(1l<<2|1);
var5345 = (val*)((long)(0)<<2|3);
var5346 = (val*)((long)(0)<<2|3);
var5342 = core__flat___CString___to_s_unsafe(var5341, var5343, var5344, var5345, var5346);
var5340 = var5342;
varonce5339 = var5340;
}
{
var5347 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5340); /* == on <var_pname:String>*/
}
if (var5347){
if (unlikely(varonce5348==NULL)) {
var5349 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5350!=NULL)) {
var5351 = varonce5350;
} else {
var5352 = " - ";
var5354 = (val*)(3l<<2|1);
var5355 = (val*)(3l<<2|1);
var5356 = (val*)((long)(0)<<2|3);
var5357 = (val*)((long)(0)<<2|3);
var5353 = core__flat___CString___to_s_unsafe(var5352, var5354, var5355, var5356, var5357);
var5351 = var5353;
varonce5350 = var5351;
}
((struct instance_core__NativeArray*)var5349)->values[1]=var5351;
} else {
var5349 = varonce5348;
varonce5348 = NULL;
}
{
var5358 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5359 = ((val*(*)(val* self))(var5358->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5358); /* to_s on <var5358:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5349)->values[0]=var5359;
{
var5360 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5361 = ((val*(*)(val* self))(var5360->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5360); /* to_s on <var5360:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5349)->values[2]=var5361;
{
var5362 = ((val*(*)(val* self))(var5349->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5349); /* native_to_s on <var5349:NativeArray[String]>*/
}
varonce5348 = var5349;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2996);
fatal_exit(1);
}
{
var5363 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5362, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5363); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5364!=NULL)) {
var5365 = varonce5364;
} else {
var5366 = "unary -";
var5368 = (val*)(7l<<2|1);
var5369 = (val*)(7l<<2|1);
var5370 = (val*)((long)(0)<<2|3);
var5371 = (val*)((long)(0)<<2|3);
var5367 = core__flat___CString___to_s_unsafe(var5366, var5368, var5369, var5370, var5371);
var5365 = var5367;
varonce5364 = var5365;
}
{
var5372 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5365); /* == on <var_pname:String>*/
}
if (var5372){
if (unlikely(varonce5373==NULL)) {
var5374 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5375!=NULL)) {
var5376 = varonce5375;
} else {
var5377 = "-";
var5379 = (val*)(1l<<2|1);
var5380 = (val*)(1l<<2|1);
var5381 = (val*)((long)(0)<<2|3);
var5382 = (val*)((long)(0)<<2|3);
var5378 = core__flat___CString___to_s_unsafe(var5377, var5379, var5380, var5381, var5382);
var5376 = var5378;
varonce5375 = var5376;
}
((struct instance_core__NativeArray*)var5374)->values[0]=var5376;
} else {
var5374 = varonce5373;
varonce5373 = NULL;
}
{
var5383 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5384 = ((val*(*)(val* self))(var5383->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5383); /* to_s on <var5383:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5374)->values[1]=var5384;
{
var5385 = ((val*(*)(val* self))(var5374->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5374); /* native_to_s on <var5374:NativeArray[String]>*/
}
varonce5373 = var5374;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2999);
fatal_exit(1);
}
{
var5386 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5385, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5386); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5387!=NULL)) {
var5388 = varonce5387;
} else {
var5389 = "unary +";
var5391 = (val*)(7l<<2|1);
var5392 = (val*)(7l<<2|1);
var5393 = (val*)((long)(0)<<2|3);
var5394 = (val*)((long)(0)<<2|3);
var5390 = core__flat___CString___to_s_unsafe(var5389, var5391, var5392, var5393, var5394);
var5388 = var5390;
varonce5387 = var5388;
}
{
var5395 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5388); /* == on <var_pname:String>*/
}
if (var5395){
{
var5396 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5396); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5397!=NULL)) {
var5398 = varonce5397;
} else {
var5399 = "*";
var5401 = (val*)(1l<<2|1);
var5402 = (val*)(1l<<2|1);
var5403 = (val*)((long)(0)<<2|3);
var5404 = (val*)((long)(0)<<2|3);
var5400 = core__flat___CString___to_s_unsafe(var5399, var5401, var5402, var5403, var5404);
var5398 = var5400;
varonce5397 = var5398;
}
{
var5405 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5398); /* == on <var_pname:String>*/
}
if (var5405){
if (unlikely(varonce5406==NULL)) {
var5407 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5408!=NULL)) {
var5409 = varonce5408;
} else {
var5410 = " * ";
var5412 = (val*)(3l<<2|1);
var5413 = (val*)(3l<<2|1);
var5414 = (val*)((long)(0)<<2|3);
var5415 = (val*)((long)(0)<<2|3);
var5411 = core__flat___CString___to_s_unsafe(var5410, var5412, var5413, var5414, var5415);
var5409 = var5411;
varonce5408 = var5409;
}
((struct instance_core__NativeArray*)var5407)->values[1]=var5409;
} else {
var5407 = varonce5406;
varonce5406 = NULL;
}
{
var5416 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5417 = ((val*(*)(val* self))(var5416->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5416); /* to_s on <var5416:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5407)->values[0]=var5417;
{
var5418 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5419 = ((val*(*)(val* self))(var5418->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5418); /* to_s on <var5418:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5407)->values[2]=var5419;
{
var5420 = ((val*(*)(val* self))(var5407->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5407); /* native_to_s on <var5407:NativeArray[String]>*/
}
varonce5406 = var5407;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3005);
fatal_exit(1);
}
{
var5421 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5420, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5421); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5422!=NULL)) {
var5423 = varonce5422;
} else {
var5424 = "/";
var5426 = (val*)(1l<<2|1);
var5427 = (val*)(1l<<2|1);
var5428 = (val*)((long)(0)<<2|3);
var5429 = (val*)((long)(0)<<2|3);
var5425 = core__flat___CString___to_s_unsafe(var5424, var5426, var5427, var5428, var5429);
var5423 = var5425;
varonce5422 = var5423;
}
{
var5430 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5423); /* == on <var_pname:String>*/
}
if (var5430){
if (unlikely(varonce5431==NULL)) {
var5432 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5433!=NULL)) {
var5434 = varonce5433;
} else {
var5435 = " / ";
var5437 = (val*)(3l<<2|1);
var5438 = (val*)(3l<<2|1);
var5439 = (val*)((long)(0)<<2|3);
var5440 = (val*)((long)(0)<<2|3);
var5436 = core__flat___CString___to_s_unsafe(var5435, var5437, var5438, var5439, var5440);
var5434 = var5436;
varonce5433 = var5434;
}
((struct instance_core__NativeArray*)var5432)->values[1]=var5434;
} else {
var5432 = varonce5431;
varonce5431 = NULL;
}
{
var5441 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5442 = ((val*(*)(val* self))(var5441->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5441); /* to_s on <var5441:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5432)->values[0]=var5442;
{
var5443 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5444 = ((val*(*)(val* self))(var5443->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5443); /* to_s on <var5443:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5432)->values[2]=var5444;
{
var5445 = ((val*(*)(val* self))(var5432->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5432); /* native_to_s on <var5432:NativeArray[String]>*/
}
varonce5431 = var5432;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3008);
fatal_exit(1);
}
{
var5446 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5445, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5446); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5447!=NULL)) {
var5448 = varonce5447;
} else {
var5449 = "%";
var5451 = (val*)(1l<<2|1);
var5452 = (val*)(1l<<2|1);
var5453 = (val*)((long)(0)<<2|3);
var5454 = (val*)((long)(0)<<2|3);
var5450 = core__flat___CString___to_s_unsafe(var5449, var5451, var5452, var5453, var5454);
var5448 = var5450;
varonce5447 = var5448;
}
{
var5455 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5448); /* == on <var_pname:String>*/
}
if (var5455){
if (unlikely(varonce5456==NULL)) {
var5457 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5458!=NULL)) {
var5459 = varonce5458;
} else {
var5460 = " % ";
var5462 = (val*)(3l<<2|1);
var5463 = (val*)(3l<<2|1);
var5464 = (val*)((long)(0)<<2|3);
var5465 = (val*)((long)(0)<<2|3);
var5461 = core__flat___CString___to_s_unsafe(var5460, var5462, var5463, var5464, var5465);
var5459 = var5461;
varonce5458 = var5459;
}
((struct instance_core__NativeArray*)var5457)->values[1]=var5459;
} else {
var5457 = varonce5456;
varonce5456 = NULL;
}
{
var5466 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5467 = ((val*(*)(val* self))(var5466->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5466); /* to_s on <var5466:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5457)->values[0]=var5467;
{
var5468 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5469 = ((val*(*)(val* self))(var5468->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5468); /* to_s on <var5468:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5457)->values[2]=var5469;
{
var5470 = ((val*(*)(val* self))(var5457->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5457); /* native_to_s on <var5457:NativeArray[String]>*/
}
varonce5456 = var5457;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3011);
fatal_exit(1);
}
{
var5471 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5470, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5471); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5472!=NULL)) {
var5473 = varonce5472;
} else {
var5474 = "<<";
var5476 = (val*)(2l<<2|1);
var5477 = (val*)(2l<<2|1);
var5478 = (val*)((long)(0)<<2|3);
var5479 = (val*)((long)(0)<<2|3);
var5475 = core__flat___CString___to_s_unsafe(var5474, var5476, var5477, var5478, var5479);
var5473 = var5475;
varonce5472 = var5473;
}
{
var5480 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5473); /* == on <var_pname:String>*/
}
if (var5480){
if (unlikely(varonce5481==NULL)) {
var5482 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5483!=NULL)) {
var5484 = varonce5483;
} else {
var5485 = " << ";
var5487 = (val*)(4l<<2|1);
var5488 = (val*)(4l<<2|1);
var5489 = (val*)((long)(0)<<2|3);
var5490 = (val*)((long)(0)<<2|3);
var5486 = core__flat___CString___to_s_unsafe(var5485, var5487, var5488, var5489, var5490);
var5484 = var5486;
varonce5483 = var5484;
}
((struct instance_core__NativeArray*)var5482)->values[1]=var5484;
} else {
var5482 = varonce5481;
varonce5481 = NULL;
}
{
var5491 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5492 = ((val*(*)(val* self))(var5491->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5491); /* to_s on <var5491:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5482)->values[0]=var5492;
{
var5493 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5494 = ((val*(*)(val* self))(var5493->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5493); /* to_s on <var5493:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5482)->values[2]=var5494;
{
var5495 = ((val*(*)(val* self))(var5482->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5482); /* native_to_s on <var5482:NativeArray[String]>*/
}
varonce5481 = var5482;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3014);
fatal_exit(1);
}
{
var5496 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5495, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5496); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5497!=NULL)) {
var5498 = varonce5497;
} else {
var5499 = ">>";
var5501 = (val*)(2l<<2|1);
var5502 = (val*)(2l<<2|1);
var5503 = (val*)((long)(0)<<2|3);
var5504 = (val*)((long)(0)<<2|3);
var5500 = core__flat___CString___to_s_unsafe(var5499, var5501, var5502, var5503, var5504);
var5498 = var5500;
varonce5497 = var5498;
}
{
var5505 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5498); /* == on <var_pname:String>*/
}
if (var5505){
if (unlikely(varonce5506==NULL)) {
var5507 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5508!=NULL)) {
var5509 = varonce5508;
} else {
var5510 = " >> ";
var5512 = (val*)(4l<<2|1);
var5513 = (val*)(4l<<2|1);
var5514 = (val*)((long)(0)<<2|3);
var5515 = (val*)((long)(0)<<2|3);
var5511 = core__flat___CString___to_s_unsafe(var5510, var5512, var5513, var5514, var5515);
var5509 = var5511;
varonce5508 = var5509;
}
((struct instance_core__NativeArray*)var5507)->values[1]=var5509;
} else {
var5507 = varonce5506;
varonce5506 = NULL;
}
{
var5516 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5517 = ((val*(*)(val* self))(var5516->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5516); /* to_s on <var5516:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5507)->values[0]=var5517;
{
var5518 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5519 = ((val*(*)(val* self))(var5518->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5518); /* to_s on <var5518:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5507)->values[2]=var5519;
{
var5520 = ((val*(*)(val* self))(var5507->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5507); /* native_to_s on <var5507:NativeArray[String]>*/
}
varonce5506 = var5507;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3017);
fatal_exit(1);
}
{
var5521 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5520, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5521); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5522!=NULL)) {
var5523 = varonce5522;
} else {
var5524 = "==";
var5526 = (val*)(2l<<2|1);
var5527 = (val*)(2l<<2|1);
var5528 = (val*)((long)(0)<<2|3);
var5529 = (val*)((long)(0)<<2|3);
var5525 = core__flat___CString___to_s_unsafe(var5524, var5526, var5527, var5528, var5529);
var5523 = var5525;
varonce5522 = var5523;
}
{
var5530 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5523); /* == on <var_pname:String>*/
}
if (var5530){
{
var5531 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5532 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5533 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var5531, var5532);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5533); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5534!=NULL)) {
var5535 = varonce5534;
} else {
var5536 = "!=";
var5538 = (val*)(2l<<2|1);
var5539 = (val*)(2l<<2|1);
var5540 = (val*)((long)(0)<<2|3);
var5541 = (val*)((long)(0)<<2|3);
var5537 = core__flat___CString___to_s_unsafe(var5536, var5538, var5539, var5540, var5541);
var5535 = var5537;
varonce5534 = var5535;
}
{
var5542 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5535); /* == on <var_pname:String>*/
}
if (var5542){
{
var5543 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5544 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5545 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var5543, var5544);
}
var_res5546 = var5545;
if (unlikely(varonce5547==NULL)) {
var5548 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5549!=NULL)) {
var5550 = varonce5549;
} else {
var5551 = "!";
var5553 = (val*)(1l<<2|1);
var5554 = (val*)(1l<<2|1);
var5555 = (val*)((long)(0)<<2|3);
var5556 = (val*)((long)(0)<<2|3);
var5552 = core__flat___CString___to_s_unsafe(var5551, var5553, var5554, var5555, var5556);
var5550 = var5552;
varonce5549 = var5550;
}
((struct instance_core__NativeArray*)var5548)->values[0]=var5550;
} else {
var5548 = varonce5547;
varonce5547 = NULL;
}
{
var5557 = ((val*(*)(val* self))(var_res5546->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res5546); /* to_s on <var_res5546:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var5548)->values[1]=var5557;
{
var5558 = ((val*(*)(val* self))(var5548->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5548); /* native_to_s on <var5548:NativeArray[String]>*/
}
varonce5547 = var5548;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3024);
fatal_exit(1);
}
{
var5559 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5558, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5559); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5560!=NULL)) {
var5561 = varonce5560;
} else {
var5562 = "<";
var5564 = (val*)(1l<<2|1);
var5565 = (val*)(1l<<2|1);
var5566 = (val*)((long)(0)<<2|3);
var5567 = (val*)((long)(0)<<2|3);
var5563 = core__flat___CString___to_s_unsafe(var5562, var5564, var5565, var5566, var5567);
var5561 = var5563;
varonce5560 = var5561;
}
{
var5568 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5561); /* == on <var_pname:String>*/
}
if (var5568){
if (unlikely(varonce5569==NULL)) {
var5570 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5571!=NULL)) {
var5572 = varonce5571;
} else {
var5573 = " < ";
var5575 = (val*)(3l<<2|1);
var5576 = (val*)(3l<<2|1);
var5577 = (val*)((long)(0)<<2|3);
var5578 = (val*)((long)(0)<<2|3);
var5574 = core__flat___CString___to_s_unsafe(var5573, var5575, var5576, var5577, var5578);
var5572 = var5574;
varonce5571 = var5572;
}
((struct instance_core__NativeArray*)var5570)->values[1]=var5572;
} else {
var5570 = varonce5569;
varonce5569 = NULL;
}
{
var5579 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5580 = ((val*(*)(val* self))(var5579->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5579); /* to_s on <var5579:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5570)->values[0]=var5580;
{
var5581 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5582 = ((val*(*)(val* self))(var5581->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5581); /* to_s on <var5581:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5570)->values[2]=var5582;
{
var5583 = ((val*(*)(val* self))(var5570->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5570); /* native_to_s on <var5570:NativeArray[String]>*/
}
varonce5569 = var5570;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3027);
fatal_exit(1);
}
{
var5584 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5583, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5584); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5585!=NULL)) {
var5586 = varonce5585;
} else {
var5587 = ">";
var5589 = (val*)(1l<<2|1);
var5590 = (val*)(1l<<2|1);
var5591 = (val*)((long)(0)<<2|3);
var5592 = (val*)((long)(0)<<2|3);
var5588 = core__flat___CString___to_s_unsafe(var5587, var5589, var5590, var5591, var5592);
var5586 = var5588;
varonce5585 = var5586;
}
{
var5593 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5586); /* == on <var_pname:String>*/
}
if (var5593){
if (unlikely(varonce5594==NULL)) {
var5595 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5596!=NULL)) {
var5597 = varonce5596;
} else {
var5598 = " > ";
var5600 = (val*)(3l<<2|1);
var5601 = (val*)(3l<<2|1);
var5602 = (val*)((long)(0)<<2|3);
var5603 = (val*)((long)(0)<<2|3);
var5599 = core__flat___CString___to_s_unsafe(var5598, var5600, var5601, var5602, var5603);
var5597 = var5599;
varonce5596 = var5597;
}
((struct instance_core__NativeArray*)var5595)->values[1]=var5597;
} else {
var5595 = varonce5594;
varonce5594 = NULL;
}
{
var5604 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5605 = ((val*(*)(val* self))(var5604->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5604); /* to_s on <var5604:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5595)->values[0]=var5605;
{
var5606 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5607 = ((val*(*)(val* self))(var5606->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5606); /* to_s on <var5606:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5595)->values[2]=var5607;
{
var5608 = ((val*(*)(val* self))(var5595->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5595); /* native_to_s on <var5595:NativeArray[String]>*/
}
varonce5594 = var5595;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3030);
fatal_exit(1);
}
{
var5609 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5608, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5609); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5610!=NULL)) {
var5611 = varonce5610;
} else {
var5612 = "<=";
var5614 = (val*)(2l<<2|1);
var5615 = (val*)(2l<<2|1);
var5616 = (val*)((long)(0)<<2|3);
var5617 = (val*)((long)(0)<<2|3);
var5613 = core__flat___CString___to_s_unsafe(var5612, var5614, var5615, var5616, var5617);
var5611 = var5613;
varonce5610 = var5611;
}
{
var5618 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5611); /* == on <var_pname:String>*/
}
if (var5618){
if (unlikely(varonce5619==NULL)) {
var5620 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5621!=NULL)) {
var5622 = varonce5621;
} else {
var5623 = " <= ";
var5625 = (val*)(4l<<2|1);
var5626 = (val*)(4l<<2|1);
var5627 = (val*)((long)(0)<<2|3);
var5628 = (val*)((long)(0)<<2|3);
var5624 = core__flat___CString___to_s_unsafe(var5623, var5625, var5626, var5627, var5628);
var5622 = var5624;
varonce5621 = var5622;
}
((struct instance_core__NativeArray*)var5620)->values[1]=var5622;
} else {
var5620 = varonce5619;
varonce5619 = NULL;
}
{
var5629 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5630 = ((val*(*)(val* self))(var5629->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5629); /* to_s on <var5629:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5620)->values[0]=var5630;
{
var5631 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5632 = ((val*(*)(val* self))(var5631->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5631); /* to_s on <var5631:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5620)->values[2]=var5632;
{
var5633 = ((val*(*)(val* self))(var5620->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5620); /* native_to_s on <var5620:NativeArray[String]>*/
}
varonce5619 = var5620;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3033);
fatal_exit(1);
}
{
var5634 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5633, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5634); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5635!=NULL)) {
var5636 = varonce5635;
} else {
var5637 = ">=";
var5639 = (val*)(2l<<2|1);
var5640 = (val*)(2l<<2|1);
var5641 = (val*)((long)(0)<<2|3);
var5642 = (val*)((long)(0)<<2|3);
var5638 = core__flat___CString___to_s_unsafe(var5637, var5639, var5640, var5641, var5642);
var5636 = var5638;
varonce5635 = var5636;
}
{
var5643 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5636); /* == on <var_pname:String>*/
}
if (var5643){
if (unlikely(varonce5644==NULL)) {
var5645 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5646!=NULL)) {
var5647 = varonce5646;
} else {
var5648 = " >= ";
var5650 = (val*)(4l<<2|1);
var5651 = (val*)(4l<<2|1);
var5652 = (val*)((long)(0)<<2|3);
var5653 = (val*)((long)(0)<<2|3);
var5649 = core__flat___CString___to_s_unsafe(var5648, var5650, var5651, var5652, var5653);
var5647 = var5649;
varonce5646 = var5647;
}
((struct instance_core__NativeArray*)var5645)->values[1]=var5647;
} else {
var5645 = varonce5644;
varonce5644 = NULL;
}
{
var5654 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5655 = ((val*(*)(val* self))(var5654->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5654); /* to_s on <var5654:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5645)->values[0]=var5655;
{
var5656 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5657 = ((val*(*)(val* self))(var5656->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5656); /* to_s on <var5656:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5645)->values[2]=var5657;
{
var5658 = ((val*(*)(val* self))(var5645->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5645); /* native_to_s on <var5645:NativeArray[String]>*/
}
varonce5644 = var5645;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3036);
fatal_exit(1);
}
{
var5659 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5658, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5659); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5660!=NULL)) {
var5661 = varonce5660;
} else {
var5662 = "to_i";
var5664 = (val*)(4l<<2|1);
var5665 = (val*)(4l<<2|1);
var5666 = (val*)((long)(0)<<2|3);
var5667 = (val*)((long)(0)<<2|3);
var5663 = core__flat___CString___to_s_unsafe(var5662, var5664, var5665, var5666, var5667);
var5661 = var5663;
varonce5660 = var5661;
}
{
var5668 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5661); /* == on <var_pname:String>*/
}
if (var5668){
if (unlikely(varonce5669==NULL)) {
var5670 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5671!=NULL)) {
var5672 = varonce5671;
} else {
var5673 = "(long)";
var5675 = (val*)(6l<<2|1);
var5676 = (val*)(6l<<2|1);
var5677 = (val*)((long)(0)<<2|3);
var5678 = (val*)((long)(0)<<2|3);
var5674 = core__flat___CString___to_s_unsafe(var5673, var5675, var5676, var5677, var5678);
var5672 = var5674;
varonce5671 = var5672;
}
((struct instance_core__NativeArray*)var5670)->values[0]=var5672;
} else {
var5670 = varonce5669;
varonce5669 = NULL;
}
{
var5679 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5680 = ((val*(*)(val* self))(var5679->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5679); /* to_s on <var5679:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5670)->values[1]=var5680;
{
var5681 = ((val*(*)(val* self))(var5670->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5670); /* native_to_s on <var5670:NativeArray[String]>*/
}
varonce5669 = var5670;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3039);
fatal_exit(1);
}
{
var5682 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5681, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5682); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5683!=NULL)) {
var5684 = varonce5683;
} else {
var5685 = "to_b";
var5687 = (val*)(4l<<2|1);
var5688 = (val*)(4l<<2|1);
var5689 = (val*)((long)(0)<<2|3);
var5690 = (val*)((long)(0)<<2|3);
var5686 = core__flat___CString___to_s_unsafe(var5685, var5687, var5688, var5689, var5690);
var5684 = var5686;
varonce5683 = var5684;
}
{
var5691 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5684); /* == on <var_pname:String>*/
}
if (var5691){
if (unlikely(varonce5692==NULL)) {
var5693 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5694!=NULL)) {
var5695 = varonce5694;
} else {
var5696 = "(unsigned char)";
var5698 = (val*)(15l<<2|1);
var5699 = (val*)(15l<<2|1);
var5700 = (val*)((long)(0)<<2|3);
var5701 = (val*)((long)(0)<<2|3);
var5697 = core__flat___CString___to_s_unsafe(var5696, var5698, var5699, var5700, var5701);
var5695 = var5697;
varonce5694 = var5695;
}
((struct instance_core__NativeArray*)var5693)->values[0]=var5695;
} else {
var5693 = varonce5692;
varonce5692 = NULL;
}
{
var5702 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5703 = ((val*(*)(val* self))(var5702->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5702); /* to_s on <var5702:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5693)->values[1]=var5703;
{
var5704 = ((val*(*)(val* self))(var5693->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5693); /* native_to_s on <var5693:NativeArray[String]>*/
}
varonce5692 = var5693;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3042);
fatal_exit(1);
}
{
var5705 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5704, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5705); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5706!=NULL)) {
var5707 = varonce5706;
} else {
var5708 = "to_i8";
var5710 = (val*)(5l<<2|1);
var5711 = (val*)(5l<<2|1);
var5712 = (val*)((long)(0)<<2|3);
var5713 = (val*)((long)(0)<<2|3);
var5709 = core__flat___CString___to_s_unsafe(var5708, var5710, var5711, var5712, var5713);
var5707 = var5709;
varonce5706 = var5707;
}
{
var5714 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5707); /* == on <var_pname:String>*/
}
if (var5714){
if (unlikely(varonce5715==NULL)) {
var5716 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5717!=NULL)) {
var5718 = varonce5717;
} else {
var5719 = "(int8_t)";
var5721 = (val*)(8l<<2|1);
var5722 = (val*)(8l<<2|1);
var5723 = (val*)((long)(0)<<2|3);
var5724 = (val*)((long)(0)<<2|3);
var5720 = core__flat___CString___to_s_unsafe(var5719, var5721, var5722, var5723, var5724);
var5718 = var5720;
varonce5717 = var5718;
}
((struct instance_core__NativeArray*)var5716)->values[0]=var5718;
} else {
var5716 = varonce5715;
varonce5715 = NULL;
}
{
var5725 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5726 = ((val*(*)(val* self))(var5725->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5725); /* to_s on <var5725:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5716)->values[1]=var5726;
{
var5727 = ((val*(*)(val* self))(var5716->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5716); /* native_to_s on <var5716:NativeArray[String]>*/
}
varonce5715 = var5716;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3045);
fatal_exit(1);
}
{
var5728 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5727, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5728); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5729!=NULL)) {
var5730 = varonce5729;
} else {
var5731 = "to_i16";
var5733 = (val*)(6l<<2|1);
var5734 = (val*)(6l<<2|1);
var5735 = (val*)((long)(0)<<2|3);
var5736 = (val*)((long)(0)<<2|3);
var5732 = core__flat___CString___to_s_unsafe(var5731, var5733, var5734, var5735, var5736);
var5730 = var5732;
varonce5729 = var5730;
}
{
var5737 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5730); /* == on <var_pname:String>*/
}
if (var5737){
if (unlikely(varonce5738==NULL)) {
var5739 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5740!=NULL)) {
var5741 = varonce5740;
} else {
var5742 = "(int16_t)";
var5744 = (val*)(9l<<2|1);
var5745 = (val*)(9l<<2|1);
var5746 = (val*)((long)(0)<<2|3);
var5747 = (val*)((long)(0)<<2|3);
var5743 = core__flat___CString___to_s_unsafe(var5742, var5744, var5745, var5746, var5747);
var5741 = var5743;
varonce5740 = var5741;
}
((struct instance_core__NativeArray*)var5739)->values[0]=var5741;
} else {
var5739 = varonce5738;
varonce5738 = NULL;
}
{
var5748 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5749 = ((val*(*)(val* self))(var5748->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5748); /* to_s on <var5748:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5739)->values[1]=var5749;
{
var5750 = ((val*(*)(val* self))(var5739->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5739); /* native_to_s on <var5739:NativeArray[String]>*/
}
varonce5738 = var5739;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3048);
fatal_exit(1);
}
{
var5751 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5750, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5751); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5752!=NULL)) {
var5753 = varonce5752;
} else {
var5754 = "to_u16";
var5756 = (val*)(6l<<2|1);
var5757 = (val*)(6l<<2|1);
var5758 = (val*)((long)(0)<<2|3);
var5759 = (val*)((long)(0)<<2|3);
var5755 = core__flat___CString___to_s_unsafe(var5754, var5756, var5757, var5758, var5759);
var5753 = var5755;
varonce5752 = var5753;
}
{
var5760 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5753); /* == on <var_pname:String>*/
}
if (var5760){
if (unlikely(varonce5761==NULL)) {
var5762 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5763!=NULL)) {
var5764 = varonce5763;
} else {
var5765 = "(uint16_t)";
var5767 = (val*)(10l<<2|1);
var5768 = (val*)(10l<<2|1);
var5769 = (val*)((long)(0)<<2|3);
var5770 = (val*)((long)(0)<<2|3);
var5766 = core__flat___CString___to_s_unsafe(var5765, var5767, var5768, var5769, var5770);
var5764 = var5766;
varonce5763 = var5764;
}
((struct instance_core__NativeArray*)var5762)->values[0]=var5764;
} else {
var5762 = varonce5761;
varonce5761 = NULL;
}
{
var5771 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5772 = ((val*(*)(val* self))(var5771->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5771); /* to_s on <var5771:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5762)->values[1]=var5772;
{
var5773 = ((val*(*)(val* self))(var5762->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5762); /* native_to_s on <var5762:NativeArray[String]>*/
}
varonce5761 = var5762;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3051);
fatal_exit(1);
}
{
var5774 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5773, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5774); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5775!=NULL)) {
var5776 = varonce5775;
} else {
var5777 = "to_i32";
var5779 = (val*)(6l<<2|1);
var5780 = (val*)(6l<<2|1);
var5781 = (val*)((long)(0)<<2|3);
var5782 = (val*)((long)(0)<<2|3);
var5778 = core__flat___CString___to_s_unsafe(var5777, var5779, var5780, var5781, var5782);
var5776 = var5778;
varonce5775 = var5776;
}
{
var5783 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5776); /* == on <var_pname:String>*/
}
if (var5783){
if (unlikely(varonce5784==NULL)) {
var5785 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5786!=NULL)) {
var5787 = varonce5786;
} else {
var5788 = "(int32_t)";
var5790 = (val*)(9l<<2|1);
var5791 = (val*)(9l<<2|1);
var5792 = (val*)((long)(0)<<2|3);
var5793 = (val*)((long)(0)<<2|3);
var5789 = core__flat___CString___to_s_unsafe(var5788, var5790, var5791, var5792, var5793);
var5787 = var5789;
varonce5786 = var5787;
}
((struct instance_core__NativeArray*)var5785)->values[0]=var5787;
} else {
var5785 = varonce5784;
varonce5784 = NULL;
}
{
var5794 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5795 = ((val*(*)(val* self))(var5794->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5794); /* to_s on <var5794:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5785)->values[1]=var5795;
{
var5796 = ((val*(*)(val* self))(var5785->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5785); /* native_to_s on <var5785:NativeArray[String]>*/
}
varonce5784 = var5785;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3054);
fatal_exit(1);
}
{
var5797 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5796, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5797); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5798!=NULL)) {
var5799 = varonce5798;
} else {
var5800 = "to_f";
var5802 = (val*)(4l<<2|1);
var5803 = (val*)(4l<<2|1);
var5804 = (val*)((long)(0)<<2|3);
var5805 = (val*)((long)(0)<<2|3);
var5801 = core__flat___CString___to_s_unsafe(var5800, var5802, var5803, var5804, var5805);
var5799 = var5801;
varonce5798 = var5799;
}
{
var5806 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5799); /* == on <var_pname:String>*/
}
if (var5806){
if (unlikely(varonce5807==NULL)) {
var5808 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5809!=NULL)) {
var5810 = varonce5809;
} else {
var5811 = "(double)";
var5813 = (val*)(8l<<2|1);
var5814 = (val*)(8l<<2|1);
var5815 = (val*)((long)(0)<<2|3);
var5816 = (val*)((long)(0)<<2|3);
var5812 = core__flat___CString___to_s_unsafe(var5811, var5813, var5814, var5815, var5816);
var5810 = var5812;
varonce5809 = var5810;
}
((struct instance_core__NativeArray*)var5808)->values[0]=var5810;
} else {
var5808 = varonce5807;
varonce5807 = NULL;
}
{
var5817 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5818 = ((val*(*)(val* self))(var5817->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5817); /* to_s on <var5817:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5808)->values[1]=var5818;
{
var5819 = ((val*(*)(val* self))(var5808->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5808); /* native_to_s on <var5808:NativeArray[String]>*/
}
varonce5807 = var5808;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3057);
fatal_exit(1);
}
{
var5820 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5819, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5820); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5821!=NULL)) {
var5822 = varonce5821;
} else {
var5823 = "&";
var5825 = (val*)(1l<<2|1);
var5826 = (val*)(1l<<2|1);
var5827 = (val*)((long)(0)<<2|3);
var5828 = (val*)((long)(0)<<2|3);
var5824 = core__flat___CString___to_s_unsafe(var5823, var5825, var5826, var5827, var5828);
var5822 = var5824;
varonce5821 = var5822;
}
{
var5829 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5822); /* == on <var_pname:String>*/
}
if (var5829){
if (unlikely(varonce5830==NULL)) {
var5831 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5832!=NULL)) {
var5833 = varonce5832;
} else {
var5834 = " & ";
var5836 = (val*)(3l<<2|1);
var5837 = (val*)(3l<<2|1);
var5838 = (val*)((long)(0)<<2|3);
var5839 = (val*)((long)(0)<<2|3);
var5835 = core__flat___CString___to_s_unsafe(var5834, var5836, var5837, var5838, var5839);
var5833 = var5835;
varonce5832 = var5833;
}
((struct instance_core__NativeArray*)var5831)->values[1]=var5833;
} else {
var5831 = varonce5830;
varonce5830 = NULL;
}
{
var5840 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5841 = ((val*(*)(val* self))(var5840->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5840); /* to_s on <var5840:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5831)->values[0]=var5841;
{
var5842 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5843 = ((val*(*)(val* self))(var5842->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5842); /* to_s on <var5842:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5831)->values[2]=var5843;
{
var5844 = ((val*(*)(val* self))(var5831->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5831); /* native_to_s on <var5831:NativeArray[String]>*/
}
varonce5830 = var5831;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3060);
fatal_exit(1);
}
{
var5845 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5844, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5845); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5846!=NULL)) {
var5847 = varonce5846;
} else {
var5848 = "|";
var5850 = (val*)(1l<<2|1);
var5851 = (val*)(1l<<2|1);
var5852 = (val*)((long)(0)<<2|3);
var5853 = (val*)((long)(0)<<2|3);
var5849 = core__flat___CString___to_s_unsafe(var5848, var5850, var5851, var5852, var5853);
var5847 = var5849;
varonce5846 = var5847;
}
{
var5854 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5847); /* == on <var_pname:String>*/
}
if (var5854){
if (unlikely(varonce5855==NULL)) {
var5856 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5857!=NULL)) {
var5858 = varonce5857;
} else {
var5859 = " | ";
var5861 = (val*)(3l<<2|1);
var5862 = (val*)(3l<<2|1);
var5863 = (val*)((long)(0)<<2|3);
var5864 = (val*)((long)(0)<<2|3);
var5860 = core__flat___CString___to_s_unsafe(var5859, var5861, var5862, var5863, var5864);
var5858 = var5860;
varonce5857 = var5858;
}
((struct instance_core__NativeArray*)var5856)->values[1]=var5858;
} else {
var5856 = varonce5855;
varonce5855 = NULL;
}
{
var5865 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5866 = ((val*(*)(val* self))(var5865->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5865); /* to_s on <var5865:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5856)->values[0]=var5866;
{
var5867 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5868 = ((val*(*)(val* self))(var5867->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5867); /* to_s on <var5867:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5856)->values[2]=var5868;
{
var5869 = ((val*(*)(val* self))(var5856->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5856); /* native_to_s on <var5856:NativeArray[String]>*/
}
varonce5855 = var5856;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3063);
fatal_exit(1);
}
{
var5870 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5869, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5870); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5871!=NULL)) {
var5872 = varonce5871;
} else {
var5873 = "^";
var5875 = (val*)(1l<<2|1);
var5876 = (val*)(1l<<2|1);
var5877 = (val*)((long)(0)<<2|3);
var5878 = (val*)((long)(0)<<2|3);
var5874 = core__flat___CString___to_s_unsafe(var5873, var5875, var5876, var5877, var5878);
var5872 = var5874;
varonce5871 = var5872;
}
{
var5879 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5872); /* == on <var_pname:String>*/
}
if (var5879){
if (unlikely(varonce5880==NULL)) {
var5881 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5882!=NULL)) {
var5883 = varonce5882;
} else {
var5884 = " ^ ";
var5886 = (val*)(3l<<2|1);
var5887 = (val*)(3l<<2|1);
var5888 = (val*)((long)(0)<<2|3);
var5889 = (val*)((long)(0)<<2|3);
var5885 = core__flat___CString___to_s_unsafe(var5884, var5886, var5887, var5888, var5889);
var5883 = var5885;
varonce5882 = var5883;
}
((struct instance_core__NativeArray*)var5881)->values[1]=var5883;
} else {
var5881 = varonce5880;
varonce5880 = NULL;
}
{
var5890 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5891 = ((val*(*)(val* self))(var5890->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5890); /* to_s on <var5890:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5881)->values[0]=var5891;
{
var5892 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5893 = ((val*(*)(val* self))(var5892->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5892); /* to_s on <var5892:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5881)->values[2]=var5893;
{
var5894 = ((val*(*)(val* self))(var5881->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5881); /* native_to_s on <var5881:NativeArray[String]>*/
}
varonce5880 = var5881;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3066);
fatal_exit(1);
}
{
var5895 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5894, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5895); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5896!=NULL)) {
var5897 = varonce5896;
} else {
var5898 = "unary ~";
var5900 = (val*)(7l<<2|1);
var5901 = (val*)(7l<<2|1);
var5902 = (val*)((long)(0)<<2|3);
var5903 = (val*)((long)(0)<<2|3);
var5899 = core__flat___CString___to_s_unsafe(var5898, var5900, var5901, var5902, var5903);
var5897 = var5899;
varonce5896 = var5897;
}
{
var5904 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5897); /* == on <var_pname:String>*/
}
if (var5904){
if (unlikely(varonce5905==NULL)) {
var5906 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5907!=NULL)) {
var5908 = varonce5907;
} else {
var5909 = "~";
var5911 = (val*)(1l<<2|1);
var5912 = (val*)(1l<<2|1);
var5913 = (val*)((long)(0)<<2|3);
var5914 = (val*)((long)(0)<<2|3);
var5910 = core__flat___CString___to_s_unsafe(var5909, var5911, var5912, var5913, var5914);
var5908 = var5910;
varonce5907 = var5908;
}
((struct instance_core__NativeArray*)var5906)->values[0]=var5908;
} else {
var5906 = varonce5905;
varonce5905 = NULL;
}
{
var5915 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var5916 = ((val*(*)(val* self))(var5915->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5915); /* to_s on <var5915:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5906)->values[1]=var5916;
{
var5917 = ((val*(*)(val* self))(var5906->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5906); /* native_to_s on <var5906:NativeArray[String]>*/
}
varonce5905 = var5906;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3069);
fatal_exit(1);
}
{
var5918 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5917, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5918); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
if (likely(varonce5919!=NULL)) {
var5920 = varonce5919;
} else {
var5921 = "exit";
var5923 = (val*)(4l<<2|1);
var5924 = (val*)(4l<<2|1);
var5925 = (val*)((long)(0)<<2|3);
var5926 = (val*)((long)(0)<<2|3);
var5922 = core__flat___CString___to_s_unsafe(var5921, var5923, var5924, var5925, var5926);
var5920 = var5922;
varonce5919 = var5920;
}
{
var5927 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5920); /* == on <var_pname:String>*/
}
if (var5927){
if (unlikely(varonce5928==NULL)) {
var5929 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5930!=NULL)) {
var5931 = varonce5930;
} else {
var5932 = "exit((int)";
var5934 = (val*)(10l<<2|1);
var5935 = (val*)(10l<<2|1);
var5936 = (val*)((long)(0)<<2|3);
var5937 = (val*)((long)(0)<<2|3);
var5933 = core__flat___CString___to_s_unsafe(var5932, var5934, var5935, var5936, var5937);
var5931 = var5933;
varonce5930 = var5931;
}
((struct instance_core__NativeArray*)var5929)->values[0]=var5931;
if (likely(varonce5938!=NULL)) {
var5939 = varonce5938;
} else {
var5940 = ");";
var5942 = (val*)(2l<<2|1);
var5943 = (val*)(2l<<2|1);
var5944 = (val*)((long)(0)<<2|3);
var5945 = (val*)((long)(0)<<2|3);
var5941 = core__flat___CString___to_s_unsafe(var5940, var5942, var5943, var5944, var5945);
var5939 = var5941;
varonce5938 = var5939;
}
((struct instance_core__NativeArray*)var5929)->values[2]=var5939;
} else {
var5929 = varonce5928;
varonce5928 = NULL;
}
{
var5946 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var5947 = ((val*(*)(val* self))(var5946->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5946); /* to_s on <var5946:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5929)->values[1]=var5947;
{
var5948 = ((val*(*)(val* self))(var5929->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5929); /* native_to_s on <var5929:NativeArray[String]>*/
}
varonce5928 = var5929;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var5948); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5949!=NULL)) {
var5950 = varonce5949;
} else {
var5951 = "sys";
var5953 = (val*)(3l<<2|1);
var5954 = (val*)(3l<<2|1);
var5955 = (val*)((long)(0)<<2|3);
var5956 = (val*)((long)(0)<<2|3);
var5952 = core__flat___CString___to_s_unsafe(var5951, var5953, var5954, var5955, var5956);
var5950 = var5952;
varonce5949 = var5950;
}
{
var5957 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5950); /* == on <var_pname:String>*/
}
if (var5957){
if (likely(varonce5958!=NULL)) {
var5959 = varonce5958;
} else {
var5960 = "glob_sys";
var5962 = (val*)(8l<<2|1);
var5963 = (val*)(8l<<2|1);
var5964 = (val*)((long)(0)<<2|3);
var5965 = (val*)((long)(0)<<2|3);
var5961 = core__flat___CString___to_s_unsafe(var5960, var5962, var5963, var5964, var5965);
var5959 = var5961;
varonce5958 = var5959;
}
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3077);
fatal_exit(1);
}
{
var5966 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5959, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5966); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5967!=NULL)) {
var5968 = varonce5967;
} else {
var5969 = "object_id";
var5971 = (val*)(9l<<2|1);
var5972 = (val*)(9l<<2|1);
var5973 = (val*)((long)(0)<<2|3);
var5974 = (val*)((long)(0)<<2|3);
var5970 = core__flat___CString___to_s_unsafe(var5969, var5971, var5972, var5973, var5974);
var5968 = var5970;
varonce5967 = var5968;
}
{
var5975 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5968); /* == on <var_pname:String>*/
}
if (var5975){
if (unlikely(varonce5976==NULL)) {
var5977 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5978!=NULL)) {
var5979 = varonce5978;
} else {
var5980 = "(long)";
var5982 = (val*)(6l<<2|1);
var5983 = (val*)(6l<<2|1);
var5984 = (val*)((long)(0)<<2|3);
var5985 = (val*)((long)(0)<<2|3);
var5981 = core__flat___CString___to_s_unsafe(var5980, var5982, var5983, var5984, var5985);
var5979 = var5981;
varonce5978 = var5979;
}
((struct instance_core__NativeArray*)var5977)->values[0]=var5979;
} else {
var5977 = varonce5976;
varonce5976 = NULL;
}
{
var5986 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var5987 = ((val*(*)(val* self))(var5986->class->vft[COLOR_core__abstract_text__Object__to_s]))(var5986); /* to_s on <var5986:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5977)->values[1]=var5987;
{
var5988 = ((val*(*)(val* self))(var5977->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5977); /* native_to_s on <var5977:NativeArray[String]>*/
}
varonce5976 = var5977;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3080);
fatal_exit(1);
}
{
var5989 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var5988, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var5989); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce5990!=NULL)) {
var5991 = varonce5990;
} else {
var5992 = "is_same_type";
var5994 = (val*)(12l<<2|1);
var5995 = (val*)(12l<<2|1);
var5996 = (val*)((long)(0)<<2|3);
var5997 = (val*)((long)(0)<<2|3);
var5993 = core__flat___CString___to_s_unsafe(var5992, var5994, var5995, var5996, var5997);
var5991 = var5993;
varonce5990 = var5991;
}
{
var5998 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var5991); /* == on <var_pname:String>*/
}
if (var5998){
{
var5999 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var6000 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var6001 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__is_same_type_test(var_v, var5999, var6000);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var6001); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce6002!=NULL)) {
var6003 = varonce6002;
} else {
var6004 = "is_same_instance";
var6006 = (val*)(16l<<2|1);
var6007 = (val*)(16l<<2|1);
var6008 = (val*)((long)(0)<<2|3);
var6009 = (val*)((long)(0)<<2|3);
var6005 = core__flat___CString___to_s_unsafe(var6004, var6006, var6007, var6008, var6009);
var6003 = var6005;
varonce6002 = var6003;
}
{
var6010 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var6003); /* == on <var_pname:String>*/
}
if (var6010){
{
var6011 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var6012 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var6013 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(var_v, var6011, var6012);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var6013); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce6014!=NULL)) {
var6015 = varonce6014;
} else {
var6016 = "output_class_name";
var6018 = (val*)(17l<<2|1);
var6019 = (val*)(17l<<2|1);
var6020 = (val*)((long)(0)<<2|3);
var6021 = (val*)((long)(0)<<2|3);
var6017 = core__flat___CString___to_s_unsafe(var6016, var6018, var6019, var6020, var6021);
var6015 = var6017;
varonce6014 = var6015;
}
{
var6022 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var6015); /* == on <var_pname:String>*/
}
if (var6022){
{
var6023 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var6024 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var6023); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_nat = var6024;
if (unlikely(varonce6025==NULL)) {
var6026 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce6027!=NULL)) {
var6028 = varonce6027;
} else {
var6029 = "printf(\"%s\\n\", ";
var6031 = (val*)(15l<<2|1);
var6032 = (val*)(15l<<2|1);
var6033 = (val*)((long)(0)<<2|3);
var6034 = (val*)((long)(0)<<2|3);
var6030 = core__flat___CString___to_s_unsafe(var6029, var6031, var6032, var6033, var6034);
var6028 = var6030;
varonce6027 = var6028;
}
((struct instance_core__NativeArray*)var6026)->values[0]=var6028;
if (likely(varonce6035!=NULL)) {
var6036 = varonce6035;
} else {
var6037 = ");";
var6039 = (val*)(2l<<2|1);
var6040 = (val*)(2l<<2|1);
var6041 = (val*)((long)(0)<<2|3);
var6042 = (val*)((long)(0)<<2|3);
var6038 = core__flat___CString___to_s_unsafe(var6037, var6039, var6040, var6041, var6042);
var6036 = var6038;
varonce6035 = var6036;
}
((struct instance_core__NativeArray*)var6026)->values[2]=var6036;
} else {
var6026 = varonce6025;
varonce6025 = NULL;
}
((struct instance_core__NativeArray*)var6026)->values[1]=var_nat;
{
var6043 = ((val*(*)(val* self))(var6026->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6026); /* native_to_s on <var6026:NativeArray[String]>*/
}
varonce6025 = var6026;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var6043); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce6044!=NULL)) {
var6045 = varonce6044;
} else {
var6046 = "native_class_name";
var6048 = (val*)(17l<<2|1);
var6049 = (val*)(17l<<2|1);
var6050 = (val*)((long)(0)<<2|3);
var6051 = (val*)((long)(0)<<2|3);
var6047 = core__flat___CString___to_s_unsafe(var6046, var6048, var6049, var6050, var6051);
var6045 = var6047;
varonce6044 = var6045;
}
{
var6052 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var6045); /* == on <var_pname:String>*/
}
if (var6052){
{
var6053 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var6054 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var6053); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_nat6055 = var6054;
if (unlikely(varonce6056==NULL)) {
var6057 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce6058!=NULL)) {
var6059 = varonce6058;
} else {
var6060 = "(char*)";
var6062 = (val*)(7l<<2|1);
var6063 = (val*)(7l<<2|1);
var6064 = (val*)((long)(0)<<2|3);
var6065 = (val*)((long)(0)<<2|3);
var6061 = core__flat___CString___to_s_unsafe(var6060, var6062, var6063, var6064, var6065);
var6059 = var6061;
varonce6058 = var6059;
}
((struct instance_core__NativeArray*)var6057)->values[0]=var6059;
} else {
var6057 = varonce6056;
varonce6056 = NULL;
}
((struct instance_core__NativeArray*)var6057)->values[1]=var_nat6055;
{
var6066 = ((val*(*)(val* self))(var6057->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6057); /* native_to_s on <var6057:NativeArray[String]>*/
}
varonce6056 = var6057;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3094);
fatal_exit(1);
}
{
var6067 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var6066, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var6067); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce6068!=NULL)) {
var6069 = varonce6068;
} else {
var6070 = "force_garbage_collection";
var6072 = (val*)(24l<<2|1);
var6073 = (val*)(24l<<2|1);
var6074 = (val*)((long)(0)<<2|3);
var6075 = (val*)((long)(0)<<2|3);
var6071 = core__flat___CString___to_s_unsafe(var6070, var6072, var6073, var6074, var6075);
var6069 = var6071;
varonce6068 = var6069;
}
{
var6076 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var6069); /* == on <var_pname:String>*/
}
if (var6076){
if (likely(varonce6077!=NULL)) {
var6078 = varonce6077;
} else {
var6079 = "nit_gcollect();";
var6081 = (val*)(15l<<2|1);
var6082 = (val*)(15l<<2|1);
var6083 = (val*)((long)(0)<<2|3);
var6084 = (val*)((long)(0)<<2|3);
var6080 = core__flat___CString___to_s_unsafe(var6079, var6081, var6082, var6083, var6084);
var6078 = var6080;
varonce6077 = var6078;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var6078); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce6085!=NULL)) {
var6086 = varonce6085;
} else {
var6087 = "native_argc";
var6089 = (val*)(11l<<2|1);
var6090 = (val*)(11l<<2|1);
var6091 = (val*)((long)(0)<<2|3);
var6092 = (val*)((long)(0)<<2|3);
var6088 = core__flat___CString___to_s_unsafe(var6087, var6089, var6090, var6091, var6092);
var6086 = var6088;
varonce6085 = var6086;
}
{
var6093 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var6086); /* == on <var_pname:String>*/
}
if (var6093){
if (likely(varonce6094!=NULL)) {
var6095 = varonce6094;
} else {
var6096 = "glob_argc";
var6098 = (val*)(9l<<2|1);
var6099 = (val*)(9l<<2|1);
var6100 = (val*)((long)(0)<<2|3);
var6101 = (val*)((long)(0)<<2|3);
var6097 = core__flat___CString___to_s_unsafe(var6096, var6098, var6099, var6100, var6101);
var6095 = var6097;
varonce6094 = var6095;
}
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3100);
fatal_exit(1);
}
{
var6102 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var6095, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var6102); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce6103!=NULL)) {
var6104 = varonce6103;
} else {
var6105 = "native_argv";
var6107 = (val*)(11l<<2|1);
var6108 = (val*)(11l<<2|1);
var6109 = (val*)((long)(0)<<2|3);
var6110 = (val*)((long)(0)<<2|3);
var6106 = core__flat___CString___to_s_unsafe(var6105, var6107, var6108, var6109, var6110);
var6104 = var6106;
varonce6103 = var6104;
}
{
var6111 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var6104); /* == on <var_pname:String>*/
}
if (var6111){
if (unlikely(varonce6112==NULL)) {
var6113 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce6114!=NULL)) {
var6115 = varonce6114;
} else {
var6116 = "glob_argv[";
var6118 = (val*)(10l<<2|1);
var6119 = (val*)(10l<<2|1);
var6120 = (val*)((long)(0)<<2|3);
var6121 = (val*)((long)(0)<<2|3);
var6117 = core__flat___CString___to_s_unsafe(var6116, var6118, var6119, var6120, var6121);
var6115 = var6117;
varonce6114 = var6115;
}
((struct instance_core__NativeArray*)var6113)->values[0]=var6115;
if (likely(varonce6122!=NULL)) {
var6123 = varonce6122;
} else {
var6124 = "]";
var6126 = (val*)(1l<<2|1);
var6127 = (val*)(1l<<2|1);
var6128 = (val*)((long)(0)<<2|3);
var6129 = (val*)((long)(0)<<2|3);
var6125 = core__flat___CString___to_s_unsafe(var6124, var6126, var6127, var6128, var6129);
var6123 = var6125;
varonce6122 = var6123;
}
((struct instance_core__NativeArray*)var6113)->values[2]=var6123;
} else {
var6113 = varonce6112;
varonce6112 = NULL;
}
{
var6130 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var6131 = ((val*(*)(val* self))(var6130->class->vft[COLOR_core__abstract_text__Object__to_s]))(var6130); /* to_s on <var6130:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var6113)->values[1]=var6131;
{
var6132 = ((val*(*)(val* self))(var6113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6113); /* native_to_s on <var6113:NativeArray[String]>*/
}
varonce6112 = var6113;
if (unlikely(var_ret == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3103);
fatal_exit(1);
}
{
var6133 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var6132, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var6133); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
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
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
