#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AMethPropdef#compile_intern_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AMethPropdef__compile_intern_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : MProperty */;
val* var2 /* : MProperty */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var_pname /* var pname: String */;
val* var6 /* : MClassDef */;
val* var8 /* : MClassDef */;
val* var9 /* : MClass */;
val* var11 /* : MClass */;
val* var12 /* : String */;
val* var14 /* : String */;
val* var_cname /* var cname: String */;
val* var15 /* : nullable MSignature */;
val* var17 /* : nullable MSignature */;
val* var18 /* : nullable MType */;
val* var20 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var29 /* : MType */;
val* var30 /* : MProperty */;
val* var32 /* : MProperty */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var37 /* : MType */;
val* var39 /* : MType */;
short int var40 /* : Bool */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : nullable Object */;
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
short int var96 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : nullable Object */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
long var106 /* : Int */;
val* var107 /* : nullable Object */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
long var113 /* : Int */;
val* var114 /* : nullable Object */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[Object] */;
val* var118 /* : String */;
val* var119 /* : RuntimeVariable */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
long var127 /* : Int */;
val* var128 /* : nullable Object */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
long var134 /* : Int */;
val* var135 /* : nullable Object */;
val* var136 /* : Array[Object] */;
long var137 /* : Int */;
val* var138 /* : NativeArray[Object] */;
val* var139 /* : String */;
val* var140 /* : RuntimeVariable */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
long var153 /* : Int */;
val* var154 /* : nullable Object */;
val* var155 /* : Array[Object] */;
long var156 /* : Int */;
val* var157 /* : NativeArray[Object] */;
val* var158 /* : String */;
val* var159 /* : RuntimeVariable */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
long var167 /* : Int */;
val* var168 /* : nullable Object */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : FlatString */;
long var174 /* : Int */;
val* var175 /* : nullable Object */;
val* var176 /* : Array[Object] */;
long var177 /* : Int */;
val* var178 /* : NativeArray[Object] */;
val* var179 /* : String */;
val* var180 /* : RuntimeVariable */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
long var188 /* : Int */;
val* var189 /* : nullable Object */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
long var195 /* : Int */;
val* var196 /* : nullable Object */;
val* var197 /* : Array[Object] */;
long var198 /* : Int */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : String */;
val* var201 /* : RuntimeVariable */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
long var205 /* : Int */;
val* var206 /* : FlatString */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
long var209 /* : Int */;
val* var210 /* : nullable Object */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : FlatString */;
long var216 /* : Int */;
val* var217 /* : nullable Object */;
val* var218 /* : Array[Object] */;
long var219 /* : Int */;
val* var220 /* : NativeArray[Object] */;
val* var221 /* : String */;
val* var222 /* : RuntimeVariable */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : FlatString */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
long var230 /* : Int */;
val* var231 /* : nullable Object */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
long var235 /* : Int */;
val* var236 /* : FlatString */;
long var237 /* : Int */;
val* var238 /* : nullable Object */;
val* var239 /* : Array[Object] */;
long var240 /* : Int */;
val* var241 /* : NativeArray[Object] */;
val* var242 /* : String */;
val* var243 /* : RuntimeVariable */;
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
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
long var268 /* : Int */;
val* var269 /* : FlatString */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
long var272 /* : Int */;
val* var273 /* : nullable Object */;
long var274 /* : Int */;
val* var275 /* : nullable Object */;
val* var276 /* : RuntimeVariable */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
long var280 /* : Int */;
val* var281 /* : FlatString */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
long var284 /* : Int */;
val* var285 /* : nullable Object */;
long var286 /* : Int */;
val* var287 /* : nullable Object */;
val* var288 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
long var292 /* : Int */;
val* var293 /* : FlatString */;
val* var294 /* : Array[Object] */;
long var295 /* : Int */;
val* var296 /* : NativeArray[Object] */;
val* var297 /* : String */;
val* var298 /* : RuntimeVariable */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
long var302 /* : Int */;
val* var303 /* : FlatString */;
short int var304 /* : Bool */;
short int var305 /* : Bool */;
long var306 /* : Int */;
val* var307 /* : nullable Object */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
long var311 /* : Int */;
val* var312 /* : FlatString */;
long var313 /* : Int */;
val* var314 /* : nullable Object */;
val* var315 /* : Array[Object] */;
long var316 /* : Int */;
val* var317 /* : NativeArray[Object] */;
val* var318 /* : String */;
val* var319 /* : RuntimeVariable */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
long var323 /* : Int */;
val* var324 /* : FlatString */;
short int var325 /* : Bool */;
short int var326 /* : Bool */;
long var327 /* : Int */;
val* var328 /* : nullable Object */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
long var334 /* : Int */;
val* var335 /* : nullable Object */;
val* var336 /* : Array[Object] */;
long var337 /* : Int */;
val* var338 /* : NativeArray[Object] */;
val* var339 /* : String */;
val* var340 /* : RuntimeVariable */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : NativeString */;
long var344 /* : Int */;
val* var345 /* : FlatString */;
short int var346 /* : Bool */;
short int var347 /* : Bool */;
long var348 /* : Int */;
val* var349 /* : nullable Object */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
long var353 /* : Int */;
val* var354 /* : FlatString */;
long var355 /* : Int */;
val* var356 /* : nullable Object */;
val* var357 /* : Array[Object] */;
long var358 /* : Int */;
val* var359 /* : NativeArray[Object] */;
val* var360 /* : String */;
val* var361 /* : RuntimeVariable */;
static val* varonce362;
val* var363 /* : String */;
char* var364 /* : NativeString */;
long var365 /* : Int */;
val* var366 /* : FlatString */;
short int var367 /* : Bool */;
short int var368 /* : Bool */;
long var369 /* : Int */;
val* var370 /* : nullable Object */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
long var374 /* : Int */;
val* var375 /* : FlatString */;
long var376 /* : Int */;
val* var377 /* : nullable Object */;
val* var378 /* : Array[Object] */;
long var379 /* : Int */;
val* var380 /* : NativeArray[Object] */;
val* var381 /* : String */;
val* var382 /* : RuntimeVariable */;
static val* varonce383;
val* var384 /* : String */;
char* var385 /* : NativeString */;
long var386 /* : Int */;
val* var387 /* : FlatString */;
short int var388 /* : Bool */;
short int var389 /* : Bool */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
long var393 /* : Int */;
val* var394 /* : FlatString */;
long var395 /* : Int */;
val* var396 /* : nullable Object */;
val* var397 /* : Array[Object] */;
long var398 /* : Int */;
val* var399 /* : NativeArray[Object] */;
val* var400 /* : String */;
val* var401 /* : RuntimeVariable */;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : NativeString */;
long var405 /* : Int */;
val* var406 /* : FlatString */;
short int var407 /* : Bool */;
short int var408 /* : Bool */;
long var409 /* : Int */;
val* var410 /* : nullable Object */;
val* var411 /* : Array[Object] */;
long var412 /* : Int */;
val* var413 /* : NativeArray[Object] */;
val* var414 /* : String */;
val* var415 /* : RuntimeVariable */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
long var419 /* : Int */;
val* var420 /* : FlatString */;
short int var421 /* : Bool */;
short int var422 /* : Bool */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
long var426 /* : Int */;
val* var427 /* : FlatString */;
short int var428 /* : Bool */;
short int var429 /* : Bool */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : NativeString */;
long var433 /* : Int */;
val* var434 /* : FlatString */;
val* var435 /* : nullable Object */;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
long var439 /* : Int */;
val* var440 /* : FlatString */;
val* var441 /* : Array[Object] */;
long var442 /* : Int */;
val* var443 /* : NativeArray[Object] */;
val* var444 /* : String */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
long var448 /* : Int */;
val* var449 /* : FlatString */;
short int var450 /* : Bool */;
short int var451 /* : Bool */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
long var455 /* : Int */;
val* var456 /* : FlatString */;
val* var457 /* : nullable Object */;
val* var458 /* : Array[Object] */;
long var459 /* : Int */;
val* var460 /* : NativeArray[Object] */;
val* var461 /* : String */;
val* var462 /* : RuntimeVariable */;
static val* varonce463;
val* var464 /* : String */;
char* var465 /* : NativeString */;
long var466 /* : Int */;
val* var467 /* : FlatString */;
short int var468 /* : Bool */;
short int var469 /* : Bool */;
long var470 /* : Int */;
val* var471 /* : nullable Object */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : NativeString */;
long var475 /* : Int */;
val* var476 /* : FlatString */;
long var477 /* : Int */;
val* var478 /* : nullable Object */;
val* var479 /* : Array[Object] */;
long var480 /* : Int */;
val* var481 /* : NativeArray[Object] */;
val* var482 /* : String */;
val* var483 /* : RuntimeVariable */;
static val* varonce484;
val* var485 /* : String */;
char* var486 /* : NativeString */;
long var487 /* : Int */;
val* var488 /* : FlatString */;
short int var489 /* : Bool */;
short int var490 /* : Bool */;
long var491 /* : Int */;
val* var492 /* : nullable Object */;
static val* varonce493;
val* var494 /* : String */;
char* var495 /* : NativeString */;
long var496 /* : Int */;
val* var497 /* : FlatString */;
long var498 /* : Int */;
val* var499 /* : nullable Object */;
val* var500 /* : Array[Object] */;
long var501 /* : Int */;
val* var502 /* : NativeArray[Object] */;
val* var503 /* : String */;
val* var504 /* : RuntimeVariable */;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : NativeString */;
long var508 /* : Int */;
val* var509 /* : FlatString */;
short int var510 /* : Bool */;
short int var511 /* : Bool */;
long var512 /* : Int */;
val* var513 /* : nullable Object */;
long var514 /* : Int */;
val* var515 /* : nullable Object */;
val* var516 /* : RuntimeVariable */;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : NativeString */;
long var520 /* : Int */;
val* var521 /* : FlatString */;
short int var522 /* : Bool */;
short int var523 /* : Bool */;
long var524 /* : Int */;
val* var525 /* : nullable Object */;
long var526 /* : Int */;
val* var527 /* : nullable Object */;
val* var528 /* : RuntimeVariable */;
val* var_res529 /* var res: RuntimeVariable */;
static val* varonce530;
val* var531 /* : String */;
char* var532 /* : NativeString */;
long var533 /* : Int */;
val* var534 /* : FlatString */;
val* var535 /* : Array[Object] */;
long var536 /* : Int */;
val* var537 /* : NativeArray[Object] */;
val* var538 /* : String */;
val* var539 /* : RuntimeVariable */;
static val* varonce540;
val* var541 /* : String */;
char* var542 /* : NativeString */;
long var543 /* : Int */;
val* var544 /* : FlatString */;
short int var545 /* : Bool */;
short int var546 /* : Bool */;
long var547 /* : Int */;
val* var548 /* : nullable Object */;
static val* varonce549;
val* var550 /* : String */;
char* var551 /* : NativeString */;
long var552 /* : Int */;
val* var553 /* : FlatString */;
long var554 /* : Int */;
val* var555 /* : nullable Object */;
val* var556 /* : Array[Object] */;
long var557 /* : Int */;
val* var558 /* : NativeArray[Object] */;
val* var559 /* : String */;
val* var560 /* : RuntimeVariable */;
static val* varonce561;
val* var562 /* : String */;
char* var563 /* : NativeString */;
long var564 /* : Int */;
val* var565 /* : FlatString */;
short int var566 /* : Bool */;
short int var567 /* : Bool */;
long var568 /* : Int */;
val* var569 /* : nullable Object */;
static val* varonce570;
val* var571 /* : String */;
char* var572 /* : NativeString */;
long var573 /* : Int */;
val* var574 /* : FlatString */;
long var575 /* : Int */;
val* var576 /* : nullable Object */;
val* var577 /* : Array[Object] */;
long var578 /* : Int */;
val* var579 /* : NativeArray[Object] */;
val* var580 /* : String */;
val* var581 /* : RuntimeVariable */;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : NativeString */;
long var585 /* : Int */;
val* var586 /* : FlatString */;
short int var587 /* : Bool */;
short int var588 /* : Bool */;
long var589 /* : Int */;
val* var590 /* : nullable Object */;
static val* varonce591;
val* var592 /* : String */;
char* var593 /* : NativeString */;
long var594 /* : Int */;
val* var595 /* : FlatString */;
long var596 /* : Int */;
val* var597 /* : nullable Object */;
val* var598 /* : Array[Object] */;
long var599 /* : Int */;
val* var600 /* : NativeArray[Object] */;
val* var601 /* : String */;
val* var602 /* : RuntimeVariable */;
static val* varonce603;
val* var604 /* : String */;
char* var605 /* : NativeString */;
long var606 /* : Int */;
val* var607 /* : FlatString */;
short int var608 /* : Bool */;
short int var609 /* : Bool */;
long var610 /* : Int */;
val* var611 /* : nullable Object */;
static val* varonce612;
val* var613 /* : String */;
char* var614 /* : NativeString */;
long var615 /* : Int */;
val* var616 /* : FlatString */;
long var617 /* : Int */;
val* var618 /* : nullable Object */;
val* var619 /* : Array[Object] */;
long var620 /* : Int */;
val* var621 /* : NativeArray[Object] */;
val* var622 /* : String */;
val* var623 /* : RuntimeVariable */;
static val* varonce624;
val* var625 /* : String */;
char* var626 /* : NativeString */;
long var627 /* : Int */;
val* var628 /* : FlatString */;
short int var629 /* : Bool */;
short int var630 /* : Bool */;
long var631 /* : Int */;
val* var632 /* : nullable Object */;
static val* varonce633;
val* var634 /* : String */;
char* var635 /* : NativeString */;
long var636 /* : Int */;
val* var637 /* : FlatString */;
val* var638 /* : Array[Object] */;
long var639 /* : Int */;
val* var640 /* : NativeArray[Object] */;
val* var641 /* : String */;
val* var642 /* : RuntimeVariable */;
static val* varonce643;
val* var644 /* : String */;
char* var645 /* : NativeString */;
long var646 /* : Int */;
val* var647 /* : FlatString */;
short int var648 /* : Bool */;
short int var649 /* : Bool */;
static val* varonce650;
val* var651 /* : String */;
char* var652 /* : NativeString */;
long var653 /* : Int */;
val* var654 /* : FlatString */;
long var655 /* : Int */;
val* var656 /* : nullable Object */;
val* var657 /* : Array[Object] */;
long var658 /* : Int */;
val* var659 /* : NativeArray[Object] */;
val* var660 /* : String */;
val* var661 /* : RuntimeVariable */;
static val* varonce662;
val* var663 /* : String */;
char* var664 /* : NativeString */;
long var665 /* : Int */;
val* var666 /* : FlatString */;
short int var667 /* : Bool */;
short int var668 /* : Bool */;
static val* varonce669;
val* var670 /* : String */;
char* var671 /* : NativeString */;
long var672 /* : Int */;
val* var673 /* : FlatString */;
short int var674 /* : Bool */;
short int var675 /* : Bool */;
static val* varonce676;
val* var677 /* : String */;
char* var678 /* : NativeString */;
long var679 /* : Int */;
val* var680 /* : FlatString */;
val* var681 /* : nullable Object */;
static val* varonce682;
val* var683 /* : String */;
char* var684 /* : NativeString */;
long var685 /* : Int */;
val* var686 /* : FlatString */;
val* var687 /* : Array[Object] */;
long var688 /* : Int */;
val* var689 /* : NativeArray[Object] */;
val* var690 /* : String */;
static val* varonce691;
val* var692 /* : String */;
char* var693 /* : NativeString */;
long var694 /* : Int */;
val* var695 /* : FlatString */;
short int var696 /* : Bool */;
short int var697 /* : Bool */;
static val* varonce698;
val* var699 /* : String */;
char* var700 /* : NativeString */;
long var701 /* : Int */;
val* var702 /* : FlatString */;
val* var703 /* : nullable Object */;
val* var704 /* : Array[Object] */;
long var705 /* : Int */;
val* var706 /* : NativeArray[Object] */;
val* var707 /* : String */;
val* var708 /* : RuntimeVariable */;
static val* varonce709;
val* var710 /* : String */;
char* var711 /* : NativeString */;
long var712 /* : Int */;
val* var713 /* : FlatString */;
short int var714 /* : Bool */;
short int var715 /* : Bool */;
long var716 /* : Int */;
val* var717 /* : nullable Object */;
long var718 /* : Int */;
val* var719 /* : nullable Object */;
val* var720 /* : RuntimeVariable */;
static val* varonce721;
val* var722 /* : String */;
char* var723 /* : NativeString */;
long var724 /* : Int */;
val* var725 /* : FlatString */;
short int var726 /* : Bool */;
short int var727 /* : Bool */;
long var728 /* : Int */;
val* var729 /* : nullable Object */;
long var730 /* : Int */;
val* var731 /* : nullable Object */;
val* var732 /* : RuntimeVariable */;
val* var_res733 /* var res: RuntimeVariable */;
static val* varonce734;
val* var735 /* : String */;
char* var736 /* : NativeString */;
long var737 /* : Int */;
val* var738 /* : FlatString */;
val* var739 /* : Array[Object] */;
long var740 /* : Int */;
val* var741 /* : NativeArray[Object] */;
val* var742 /* : String */;
val* var743 /* : RuntimeVariable */;
static val* varonce744;
val* var745 /* : String */;
char* var746 /* : NativeString */;
long var747 /* : Int */;
val* var748 /* : FlatString */;
short int var749 /* : Bool */;
short int var750 /* : Bool */;
static val* varonce751;
val* var752 /* : String */;
char* var753 /* : NativeString */;
long var754 /* : Int */;
val* var755 /* : FlatString */;
short int var756 /* : Bool */;
short int var757 /* : Bool */;
static val* varonce758;
val* var759 /* : String */;
char* var760 /* : NativeString */;
long var761 /* : Int */;
val* var762 /* : FlatString */;
val* var763 /* : nullable Object */;
static val* varonce764;
val* var765 /* : String */;
char* var766 /* : NativeString */;
long var767 /* : Int */;
val* var768 /* : FlatString */;
val* var769 /* : Array[Object] */;
long var770 /* : Int */;
val* var771 /* : NativeArray[Object] */;
val* var772 /* : String */;
static val* varonce773;
val* var774 /* : String */;
char* var775 /* : NativeString */;
long var776 /* : Int */;
val* var777 /* : FlatString */;
short int var778 /* : Bool */;
short int var779 /* : Bool */;
static val* varonce780;
val* var781 /* : String */;
char* var782 /* : NativeString */;
long var783 /* : Int */;
val* var784 /* : FlatString */;
val* var785 /* : nullable Object */;
val* var786 /* : Array[Object] */;
long var787 /* : Int */;
val* var788 /* : NativeArray[Object] */;
val* var789 /* : String */;
val* var790 /* : RuntimeVariable */;
static val* varonce791;
val* var792 /* : String */;
char* var793 /* : NativeString */;
long var794 /* : Int */;
val* var795 /* : FlatString */;
short int var796 /* : Bool */;
short int var797 /* : Bool */;
long var798 /* : Int */;
val* var799 /* : nullable Object */;
static val* varonce800;
val* var801 /* : String */;
char* var802 /* : NativeString */;
long var803 /* : Int */;
val* var804 /* : FlatString */;
long var805 /* : Int */;
val* var806 /* : nullable Object */;
val* var807 /* : Array[Object] */;
long var808 /* : Int */;
val* var809 /* : NativeArray[Object] */;
val* var810 /* : String */;
val* var811 /* : RuntimeVariable */;
static val* varonce812;
val* var813 /* : String */;
char* var814 /* : NativeString */;
long var815 /* : Int */;
val* var816 /* : FlatString */;
short int var817 /* : Bool */;
short int var818 /* : Bool */;
long var819 /* : Int */;
val* var820 /* : nullable Object */;
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
static val* varonce833;
val* var834 /* : String */;
char* var835 /* : NativeString */;
long var836 /* : Int */;
val* var837 /* : FlatString */;
short int var838 /* : Bool */;
short int var839 /* : Bool */;
static val* varonce840;
val* var841 /* : String */;
char* var842 /* : NativeString */;
long var843 /* : Int */;
val* var844 /* : FlatString */;
long var845 /* : Int */;
val* var846 /* : nullable Object */;
val* var847 /* : Array[Object] */;
long var848 /* : Int */;
val* var849 /* : NativeArray[Object] */;
val* var850 /* : String */;
val* var851 /* : RuntimeVariable */;
static val* varonce852;
val* var853 /* : String */;
char* var854 /* : NativeString */;
long var855 /* : Int */;
val* var856 /* : FlatString */;
short int var857 /* : Bool */;
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
static val* varonce871;
val* var872 /* : String */;
char* var873 /* : NativeString */;
long var874 /* : Int */;
val* var875 /* : FlatString */;
short int var876 /* : Bool */;
short int var877 /* : Bool */;
long var878 /* : Int */;
val* var879 /* : nullable Object */;
static val* varonce880;
val* var881 /* : String */;
char* var882 /* : NativeString */;
long var883 /* : Int */;
val* var884 /* : FlatString */;
val* var885 /* : Array[Object] */;
long var886 /* : Int */;
val* var887 /* : NativeArray[Object] */;
val* var888 /* : String */;
val* var889 /* : RuntimeVariable */;
static val* varonce890;
val* var891 /* : String */;
char* var892 /* : NativeString */;
long var893 /* : Int */;
val* var894 /* : FlatString */;
short int var895 /* : Bool */;
short int var896 /* : Bool */;
long var897 /* : Int */;
val* var898 /* : nullable Object */;
static val* varonce899;
val* var900 /* : String */;
char* var901 /* : NativeString */;
long var902 /* : Int */;
val* var903 /* : FlatString */;
long var904 /* : Int */;
val* var905 /* : nullable Object */;
val* var906 /* : Array[Object] */;
long var907 /* : Int */;
val* var908 /* : NativeArray[Object] */;
val* var909 /* : String */;
val* var910 /* : RuntimeVariable */;
static val* varonce911;
val* var912 /* : String */;
char* var913 /* : NativeString */;
long var914 /* : Int */;
val* var915 /* : FlatString */;
short int var916 /* : Bool */;
short int var917 /* : Bool */;
long var918 /* : Int */;
val* var919 /* : nullable Object */;
static val* varonce920;
val* var921 /* : String */;
char* var922 /* : NativeString */;
long var923 /* : Int */;
val* var924 /* : FlatString */;
long var925 /* : Int */;
val* var926 /* : nullable Object */;
val* var927 /* : Array[Object] */;
long var928 /* : Int */;
val* var929 /* : NativeArray[Object] */;
val* var930 /* : String */;
val* var931 /* : RuntimeVariable */;
static val* varonce932;
val* var933 /* : String */;
char* var934 /* : NativeString */;
long var935 /* : Int */;
val* var936 /* : FlatString */;
short int var937 /* : Bool */;
short int var938 /* : Bool */;
long var939 /* : Int */;
val* var940 /* : nullable Object */;
long var941 /* : Int */;
val* var942 /* : nullable Object */;
val* var943 /* : RuntimeVariable */;
static val* varonce944;
val* var945 /* : String */;
char* var946 /* : NativeString */;
long var947 /* : Int */;
val* var948 /* : FlatString */;
short int var949 /* : Bool */;
short int var950 /* : Bool */;
long var951 /* : Int */;
val* var952 /* : nullable Object */;
long var953 /* : Int */;
val* var954 /* : nullable Object */;
val* var955 /* : RuntimeVariable */;
val* var_res956 /* var res: RuntimeVariable */;
static val* varonce957;
val* var958 /* : String */;
char* var959 /* : NativeString */;
long var960 /* : Int */;
val* var961 /* : FlatString */;
val* var962 /* : Array[Object] */;
long var963 /* : Int */;
val* var964 /* : NativeArray[Object] */;
val* var965 /* : String */;
val* var966 /* : RuntimeVariable */;
static val* varonce967;
val* var968 /* : String */;
char* var969 /* : NativeString */;
long var970 /* : Int */;
val* var971 /* : FlatString */;
short int var972 /* : Bool */;
short int var973 /* : Bool */;
long var974 /* : Int */;
val* var975 /* : nullable Object */;
static val* varonce976;
val* var977 /* : String */;
char* var978 /* : NativeString */;
long var979 /* : Int */;
val* var980 /* : FlatString */;
long var981 /* : Int */;
val* var982 /* : nullable Object */;
val* var983 /* : Array[Object] */;
long var984 /* : Int */;
val* var985 /* : NativeArray[Object] */;
val* var986 /* : String */;
val* var987 /* : RuntimeVariable */;
static val* varonce988;
val* var989 /* : String */;
char* var990 /* : NativeString */;
long var991 /* : Int */;
val* var992 /* : FlatString */;
short int var993 /* : Bool */;
short int var994 /* : Bool */;
long var995 /* : Int */;
val* var996 /* : nullable Object */;
static val* varonce997;
val* var998 /* : String */;
char* var999 /* : NativeString */;
long var1000 /* : Int */;
val* var1001 /* : FlatString */;
long var1002 /* : Int */;
val* var1003 /* : nullable Object */;
val* var1004 /* : Array[Object] */;
long var1005 /* : Int */;
val* var1006 /* : NativeArray[Object] */;
val* var1007 /* : String */;
val* var1008 /* : RuntimeVariable */;
static val* varonce1009;
val* var1010 /* : String */;
char* var1011 /* : NativeString */;
long var1012 /* : Int */;
val* var1013 /* : FlatString */;
short int var1014 /* : Bool */;
short int var1015 /* : Bool */;
long var1016 /* : Int */;
val* var1017 /* : nullable Object */;
static val* varonce1018;
val* var1019 /* : String */;
char* var1020 /* : NativeString */;
long var1021 /* : Int */;
val* var1022 /* : FlatString */;
long var1023 /* : Int */;
val* var1024 /* : nullable Object */;
val* var1025 /* : Array[Object] */;
long var1026 /* : Int */;
val* var1027 /* : NativeArray[Object] */;
val* var1028 /* : String */;
val* var1029 /* : RuntimeVariable */;
static val* varonce1030;
val* var1031 /* : String */;
char* var1032 /* : NativeString */;
long var1033 /* : Int */;
val* var1034 /* : FlatString */;
short int var1035 /* : Bool */;
short int var1036 /* : Bool */;
long var1037 /* : Int */;
val* var1038 /* : nullable Object */;
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
static val* varonce1051;
val* var1052 /* : String */;
char* var1053 /* : NativeString */;
long var1054 /* : Int */;
val* var1055 /* : FlatString */;
short int var1056 /* : Bool */;
short int var1057 /* : Bool */;
static val* varonce1058;
val* var1059 /* : String */;
char* var1060 /* : NativeString */;
long var1061 /* : Int */;
val* var1062 /* : FlatString */;
long var1063 /* : Int */;
val* var1064 /* : nullable Object */;
val* var1065 /* : Array[Object] */;
long var1066 /* : Int */;
val* var1067 /* : NativeArray[Object] */;
val* var1068 /* : String */;
val* var1069 /* : RuntimeVariable */;
static val* varonce1070;
val* var1071 /* : String */;
char* var1072 /* : NativeString */;
long var1073 /* : Int */;
val* var1074 /* : FlatString */;
short int var1075 /* : Bool */;
short int var1076 /* : Bool */;
static val* varonce1077;
val* var1078 /* : String */;
char* var1079 /* : NativeString */;
long var1080 /* : Int */;
val* var1081 /* : FlatString */;
short int var1082 /* : Bool */;
short int var1083 /* : Bool */;
long var1084 /* : Int */;
val* var1085 /* : nullable Object */;
static val* varonce1086;
val* var1087 /* : String */;
char* var1088 /* : NativeString */;
long var1089 /* : Int */;
val* var1090 /* : FlatString */;
long var1091 /* : Int */;
val* var1092 /* : nullable Object */;
static val* varonce1093;
val* var1094 /* : String */;
char* var1095 /* : NativeString */;
long var1096 /* : Int */;
val* var1097 /* : FlatString */;
val* var1098 /* : Array[Object] */;
long var1099 /* : Int */;
val* var1100 /* : NativeArray[Object] */;
val* var1101 /* : String */;
val* var1102 /* : RuntimeVariable */;
static val* varonce1103;
val* var1104 /* : String */;
char* var1105 /* : NativeString */;
long var1106 /* : Int */;
val* var1107 /* : FlatString */;
short int var1108 /* : Bool */;
short int var1109 /* : Bool */;
long var1110 /* : Int */;
val* var1111 /* : nullable Object */;
static val* varonce1112;
val* var1113 /* : String */;
char* var1114 /* : NativeString */;
long var1115 /* : Int */;
val* var1116 /* : FlatString */;
long var1117 /* : Int */;
val* var1118 /* : nullable Object */;
static val* varonce1119;
val* var1120 /* : String */;
char* var1121 /* : NativeString */;
long var1122 /* : Int */;
val* var1123 /* : FlatString */;
long var1124 /* : Int */;
val* var1125 /* : nullable Object */;
static val* varonce1126;
val* var1127 /* : String */;
char* var1128 /* : NativeString */;
long var1129 /* : Int */;
val* var1130 /* : FlatString */;
val* var1131 /* : Array[Object] */;
long var1132 /* : Int */;
val* var1133 /* : NativeArray[Object] */;
val* var1134 /* : String */;
static val* varonce1135;
val* var1136 /* : String */;
char* var1137 /* : NativeString */;
long var1138 /* : Int */;
val* var1139 /* : FlatString */;
short int var1140 /* : Bool */;
short int var1141 /* : Bool */;
static val* varonce1142;
val* var1143 /* : String */;
char* var1144 /* : NativeString */;
long var1145 /* : Int */;
val* var1146 /* : FlatString */;
long var1147 /* : Int */;
val* var1148 /* : nullable Object */;
static val* varonce1149;
val* var1150 /* : String */;
char* var1151 /* : NativeString */;
long var1152 /* : Int */;
val* var1153 /* : FlatString */;
long var1154 /* : Int */;
val* var1155 /* : nullable Object */;
static val* varonce1156;
val* var1157 /* : String */;
char* var1158 /* : NativeString */;
long var1159 /* : Int */;
val* var1160 /* : FlatString */;
long var1161 /* : Int */;
val* var1162 /* : nullable Object */;
static val* varonce1163;
val* var1164 /* : String */;
char* var1165 /* : NativeString */;
long var1166 /* : Int */;
val* var1167 /* : FlatString */;
long var1168 /* : Int */;
val* var1169 /* : nullable Object */;
static val* varonce1170;
val* var1171 /* : String */;
char* var1172 /* : NativeString */;
long var1173 /* : Int */;
val* var1174 /* : FlatString */;
long var1175 /* : Int */;
val* var1176 /* : nullable Object */;
static val* varonce1177;
val* var1178 /* : String */;
char* var1179 /* : NativeString */;
long var1180 /* : Int */;
val* var1181 /* : FlatString */;
val* var1182 /* : Array[Object] */;
long var1183 /* : Int */;
val* var1184 /* : NativeArray[Object] */;
val* var1185 /* : String */;
static val* varonce1186;
val* var1187 /* : String */;
char* var1188 /* : NativeString */;
long var1189 /* : Int */;
val* var1190 /* : FlatString */;
short int var1191 /* : Bool */;
short int var1192 /* : Bool */;
static val* varonce1193;
val* var1194 /* : String */;
char* var1195 /* : NativeString */;
long var1196 /* : Int */;
val* var1197 /* : FlatString */;
long var1198 /* : Int */;
val* var1199 /* : nullable Object */;
static val* varonce1200;
val* var1201 /* : String */;
char* var1202 /* : NativeString */;
long var1203 /* : Int */;
val* var1204 /* : FlatString */;
val* var1205 /* : Array[Object] */;
long var1206 /* : Int */;
val* var1207 /* : NativeArray[Object] */;
val* var1208 /* : String */;
val* var1209 /* : RuntimeVariable */;
static val* varonce1210;
val* var1211 /* : String */;
char* var1212 /* : NativeString */;
long var1213 /* : Int */;
val* var1214 /* : FlatString */;
short int var1215 /* : Bool */;
short int var1216 /* : Bool */;
static val* varonce1217;
val* var1218 /* : String */;
char* var1219 /* : NativeString */;
long var1220 /* : Int */;
val* var1221 /* : FlatString */;
long var1222 /* : Int */;
val* var1223 /* : nullable Object */;
static val* varonce1224;
val* var1225 /* : String */;
char* var1226 /* : NativeString */;
long var1227 /* : Int */;
val* var1228 /* : FlatString */;
val* var1229 /* : Array[Object] */;
long var1230 /* : Int */;
val* var1231 /* : NativeArray[Object] */;
val* var1232 /* : String */;
val* var1233 /* : RuntimeVariable */;
static val* varonce1234;
val* var1235 /* : String */;
char* var1236 /* : NativeString */;
long var1237 /* : Int */;
val* var1238 /* : FlatString */;
short int var1239 /* : Bool */;
short int var1240 /* : Bool */;
static val* varonce1241;
val* var1242 /* : String */;
char* var1243 /* : NativeString */;
long var1244 /* : Int */;
val* var1245 /* : FlatString */;
short int var1246 /* : Bool */;
short int var1247 /* : Bool */;
static val* varonce1248;
val* var1249 /* : String */;
char* var1250 /* : NativeString */;
long var1251 /* : Int */;
val* var1252 /* : FlatString */;
long var1253 /* : Int */;
val* var1254 /* : nullable Object */;
static val* varonce1255;
val* var1256 /* : String */;
char* var1257 /* : NativeString */;
long var1258 /* : Int */;
val* var1259 /* : FlatString */;
val* var1260 /* : Array[Object] */;
long var1261 /* : Int */;
val* var1262 /* : NativeArray[Object] */;
val* var1263 /* : String */;
static val* varonce1264;
val* var1265 /* : String */;
char* var1266 /* : NativeString */;
long var1267 /* : Int */;
val* var1268 /* : FlatString */;
short int var1269 /* : Bool */;
short int var1270 /* : Bool */;
static val* varonce1271;
val* var1272 /* : String */;
char* var1273 /* : NativeString */;
long var1274 /* : Int */;
val* var1275 /* : FlatString */;
val* var1276 /* : RuntimeVariable */;
static val* varonce1277;
val* var1278 /* : String */;
char* var1279 /* : NativeString */;
long var1280 /* : Int */;
val* var1281 /* : FlatString */;
short int var1282 /* : Bool */;
short int var1283 /* : Bool */;
static val* varonce1284;
val* var1285 /* : String */;
char* var1286 /* : NativeString */;
long var1287 /* : Int */;
val* var1288 /* : FlatString */;
long var1289 /* : Int */;
val* var1290 /* : nullable Object */;
static val* varonce1291;
val* var1292 /* : String */;
char* var1293 /* : NativeString */;
long var1294 /* : Int */;
val* var1295 /* : FlatString */;
val* var1296 /* : Array[Object] */;
long var1297 /* : Int */;
val* var1298 /* : NativeArray[Object] */;
val* var1299 /* : String */;
val* var1300 /* : RuntimeVariable */;
static val* varonce1301;
val* var1302 /* : String */;
char* var1303 /* : NativeString */;
long var1304 /* : Int */;
val* var1305 /* : FlatString */;
short int var1306 /* : Bool */;
short int var1307 /* : Bool */;
static val* varonce1308;
val* var1309 /* : String */;
char* var1310 /* : NativeString */;
long var1311 /* : Int */;
val* var1312 /* : FlatString */;
short int var1313 /* : Bool */;
short int var1314 /* : Bool */;
static val* varonce1315;
val* var1316 /* : String */;
char* var1317 /* : NativeString */;
long var1318 /* : Int */;
val* var1319 /* : FlatString */;
val* var1320 /* : nullable Object */;
val* var1321 /* : Array[Object] */;
long var1322 /* : Int */;
val* var1323 /* : NativeArray[Object] */;
val* var1324 /* : String */;
val* var1325 /* : RuntimeVariable */;
static val* varonce1326;
val* var1327 /* : String */;
char* var1328 /* : NativeString */;
long var1329 /* : Int */;
val* var1330 /* : FlatString */;
short int var1331 /* : Bool */;
short int var1332 /* : Bool */;
long var1333 /* : Int */;
val* var1334 /* : nullable Object */;
long var1335 /* : Int */;
val* var1336 /* : nullable Object */;
val* var1337 /* : RuntimeVariable */;
static val* varonce1338;
val* var1339 /* : String */;
char* var1340 /* : NativeString */;
long var1341 /* : Int */;
val* var1342 /* : FlatString */;
short int var1343 /* : Bool */;
short int var1344 /* : Bool */;
long var1345 /* : Int */;
val* var1346 /* : nullable Object */;
long var1347 /* : Int */;
val* var1348 /* : nullable Object */;
val* var1349 /* : RuntimeVariable */;
static val* varonce1350;
val* var1351 /* : String */;
char* var1352 /* : NativeString */;
long var1353 /* : Int */;
val* var1354 /* : FlatString */;
short int var1355 /* : Bool */;
short int var1356 /* : Bool */;
val* var1357 /* : nullable Object */;
val* var1358 /* : String */;
val* var_nat /* var nat: String */;
static val* varonce1359;
val* var1360 /* : String */;
char* var1361 /* : NativeString */;
long var1362 /* : Int */;
val* var1363 /* : FlatString */;
static val* varonce1364;
val* var1365 /* : String */;
char* var1366 /* : NativeString */;
long var1367 /* : Int */;
val* var1368 /* : FlatString */;
val* var1369 /* : Array[Object] */;
long var1370 /* : Int */;
val* var1371 /* : NativeArray[Object] */;
val* var1372 /* : String */;
static val* varonce1373;
val* var1374 /* : String */;
char* var1375 /* : NativeString */;
long var1376 /* : Int */;
val* var1377 /* : FlatString */;
short int var1378 /* : Bool */;
short int var1379 /* : Bool */;
val* var1380 /* : nullable Object */;
val* var1381 /* : String */;
val* var_nat1382 /* var nat: String */;
static val* varonce1383;
val* var1384 /* : String */;
char* var1385 /* : NativeString */;
long var1386 /* : Int */;
val* var1387 /* : FlatString */;
val* var1388 /* : Array[Object] */;
long var1389 /* : Int */;
val* var1390 /* : NativeArray[Object] */;
val* var1391 /* : String */;
val* var1392 /* : RuntimeVariable */;
static val* varonce1393;
val* var1394 /* : String */;
char* var1395 /* : NativeString */;
long var1396 /* : Int */;
val* var1397 /* : FlatString */;
short int var1398 /* : Bool */;
short int var1399 /* : Bool */;
static val* varonce1400;
val* var1401 /* : String */;
char* var1402 /* : NativeString */;
long var1403 /* : Int */;
val* var1404 /* : FlatString */;
static val* varonce1405;
val* var1406 /* : String */;
char* var1407 /* : NativeString */;
long var1408 /* : Int */;
val* var1409 /* : FlatString */;
short int var1410 /* : Bool */;
short int var1411 /* : Bool */;
static val* varonce1412;
val* var1413 /* : String */;
char* var1414 /* : NativeString */;
long var1415 /* : Int */;
val* var1416 /* : FlatString */;
val* var1417 /* : RuntimeVariable */;
static val* varonce1418;
val* var1419 /* : String */;
char* var1420 /* : NativeString */;
long var1421 /* : Int */;
val* var1422 /* : FlatString */;
short int var1423 /* : Bool */;
short int var1424 /* : Bool */;
static val* varonce1425;
val* var1426 /* : String */;
char* var1427 /* : NativeString */;
long var1428 /* : Int */;
val* var1429 /* : FlatString */;
long var1430 /* : Int */;
val* var1431 /* : nullable Object */;
static val* varonce1432;
val* var1433 /* : String */;
char* var1434 /* : NativeString */;
long var1435 /* : Int */;
val* var1436 /* : FlatString */;
val* var1437 /* : Array[Object] */;
long var1438 /* : Int */;
val* var1439 /* : NativeArray[Object] */;
val* var1440 /* : String */;
val* var1441 /* : RuntimeVariable */;
static val* varonce1442;
val* var1443 /* : String */;
char* var1444 /* : NativeString */;
long var1445 /* : Int */;
val* var1446 /* : FlatString */;
val* var1447 /* : String */;
static val* varonce1448;
val* var1449 /* : String */;
char* var1450 /* : NativeString */;
long var1451 /* : Int */;
val* var1452 /* : FlatString */;
static val* varonce1453;
val* var1454 /* : String */;
char* var1455 /* : NativeString */;
long var1456 /* : Int */;
val* var1457 /* : FlatString */;
val* var1458 /* : Location */;
val* var1459 /* : String */;
static val* varonce1460;
val* var1461 /* : String */;
char* var1462 /* : NativeString */;
long var1463 /* : Int */;
val* var1464 /* : FlatString */;
val* var1465 /* : Array[Object] */;
long var1466 /* : Int */;
val* var1467 /* : NativeArray[Object] */;
val* var1468 /* : String */;
static val* varonce1469;
val* var1470 /* : String */;
char* var1471 /* : NativeString */;
long var1472 /* : Int */;
val* var1473 /* : FlatString */;
val* var1474 /* : Array[Object] */;
long var1475 /* : Int */;
val* var1476 /* : NativeArray[Object] */;
val* var1477 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var) on <var:MProperty(MMethod)> */
var5 = var->attrs[COLOR_model__MProperty___name].val; /* _name on <var:MProperty(MMethod)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_pname = var3;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var8 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var6) on <var6:MClassDef> */
var11 = var6->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var6:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClass#name (var9) on <var9:MClass> */
var14 = var9->attrs[COLOR_model__MClass___name].val; /* _name on <var9:MClass> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_cname = var12;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var17 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1831);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var15) on <var15:nullable MSignature> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1455);
show_backtrace(1);
}
var20 = var15->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var15:nullable MSignature> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ret = var18;
var21 = NULL;
if (var_ret == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var21) on <var_ret:nullable MType> */
var_other = var21;
{
var26 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var25 = var26;
}
var27 = !var25;
var23 = var27;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
var28 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var29 = abstract_compiler__AbstractCompilerVisitor__resolve_for(var_v, var_ret, var28);
}
var_ret = var29;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var32 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var30) on <var30:MProperty(MMethod)> */
var35 = var30->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var30:MProperty(MMethod)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (var33){
{
var36 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var36) on <var36:nullable Object(RuntimeVariable)> */
var39 = var36->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var36:nullable Object(RuntimeVariable)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_ret = var37;
} else {
}
}
if (varonce) {
var41 = varonce;
} else {
var42 = "==";
var43 = 2;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce = var41;
}
{
{ /* Inline kernel#Object#!= (var_pname,var41) on <var_pname:String> */
var_other = var41;
{
var49 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var_other) /* == on <var_pname:String>*/;
var48 = var49;
}
var50 = !var48;
var46 = var50;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
var_ = var45;
if (var45){
if (varonce51) {
var52 = varonce51;
} else {
var53 = "!=";
var54 = 2;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
{ /* Inline kernel#Object#!= (var_pname,var52) on <var_pname:String> */
var_other = var52;
{
var60 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var_other) /* == on <var_pname:String>*/;
var59 = var60;
}
var61 = !var59;
var57 = var61;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
var40 = var56;
} else {
var40 = var_;
}
if (var40){
{
separate_compiler__SeparateCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = "Int";
var65 = 3;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
{
var68 = string__FlatString___61d_61d(var_cname, var63);
var67 = var68;
}
if (var67){
if (varonce69) {
var70 = varonce69;
} else {
var71 = "output";
var72 = 6;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
var75 = string__FlatString___61d_61d(var_pname, var70);
var74 = var75;
}
if (var74){
if (varonce76) {
var77 = varonce76;
} else {
var78 = "printf(\"%ld\\n\", ";
var79 = 16;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
var81 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = ");";
var85 = 2;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var87 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var87 = array_instance Array[Object] */
var88 = 3;
var89 = NEW_array__NativeArray(var88, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var89)->values[0] = (val*) var77;
((struct instance_array__NativeArray*)var89)->values[1] = (val*) var81;
((struct instance_array__NativeArray*)var89)->values[2] = (val*) var83;
{
((void (*)(val*, val*, long))(var87->class->vft[COLOR_array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[Object]>*/;
}
}
{
var90 = ((val* (*)(val*))(var87->class->vft[COLOR_string__Object__to_s]))(var87) /* to_s on <var87:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce91) {
var92 = varonce91;
} else {
var93 = "object_id";
var94 = 9;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
var97 = string__FlatString___61d_61d(var_pname, var92);
var96 = var97;
}
if (var96){
{
var98 = abstract_collection__SequenceRead__first(var_arguments);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var98); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce99) {
var100 = varonce99;
} else {
var101 = "+";
var102 = 1;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
var105 = string__FlatString___61d_61d(var_pname, var100);
var104 = var105;
}
if (var104){
var106 = 0;
{
var107 = array__Array___91d_93d(var_arguments, var106);
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = " + ";
var111 = 3;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
var113 = 1;
{
var114 = array__Array___91d_93d(var_arguments, var113);
}
var115 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var115 = array_instance Array[Object] */
var116 = 3;
var117 = NEW_array__NativeArray(var116, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var117)->values[0] = (val*) var107;
((struct instance_array__NativeArray*)var117)->values[1] = (val*) var109;
((struct instance_array__NativeArray*)var117)->values[2] = (val*) var114;
{
((void (*)(val*, val*, long))(var115->class->vft[COLOR_array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[Object]>*/;
}
}
{
var118 = ((val* (*)(val*))(var115->class->vft[COLOR_string__Object__to_s]))(var115) /* to_s on <var115:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1848);
show_backtrace(1);
}
{
var119 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var118, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var119); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce120) {
var121 = varonce120;
} else {
var122 = "-";
var123 = 1;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
{
var126 = string__FlatString___61d_61d(var_pname, var121);
var125 = var126;
}
if (var125){
var127 = 0;
{
var128 = array__Array___91d_93d(var_arguments, var127);
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = " - ";
var132 = 3;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
var134 = 1;
{
var135 = array__Array___91d_93d(var_arguments, var134);
}
var136 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var136 = array_instance Array[Object] */
var137 = 3;
var138 = NEW_array__NativeArray(var137, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var138)->values[0] = (val*) var128;
((struct instance_array__NativeArray*)var138)->values[1] = (val*) var130;
((struct instance_array__NativeArray*)var138)->values[2] = (val*) var135;
{
((void (*)(val*, val*, long))(var136->class->vft[COLOR_array__Array__with_native]))(var136, var138, var137) /* with_native on <var136:Array[Object]>*/;
}
}
{
var139 = ((val* (*)(val*))(var136->class->vft[COLOR_string__Object__to_s]))(var136) /* to_s on <var136:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1851);
show_backtrace(1);
}
{
var140 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var139, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce141) {
var142 = varonce141;
} else {
var143 = "unary -";
var144 = 7;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
{
var147 = string__FlatString___61d_61d(var_pname, var142);
var146 = var147;
}
if (var146){
if (varonce148) {
var149 = varonce148;
} else {
var150 = "-";
var151 = 1;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
var153 = 0;
{
var154 = array__Array___91d_93d(var_arguments, var153);
}
var155 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var155 = array_instance Array[Object] */
var156 = 2;
var157 = NEW_array__NativeArray(var156, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var157)->values[0] = (val*) var149;
((struct instance_array__NativeArray*)var157)->values[1] = (val*) var154;
{
((void (*)(val*, val*, long))(var155->class->vft[COLOR_array__Array__with_native]))(var155, var157, var156) /* with_native on <var155:Array[Object]>*/;
}
}
{
var158 = ((val* (*)(val*))(var155->class->vft[COLOR_string__Object__to_s]))(var155) /* to_s on <var155:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1854);
show_backtrace(1);
}
{
var159 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var158, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var159); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce160) {
var161 = varonce160;
} else {
var162 = "*";
var163 = 1;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
{
var166 = string__FlatString___61d_61d(var_pname, var161);
var165 = var166;
}
if (var165){
var167 = 0;
{
var168 = array__Array___91d_93d(var_arguments, var167);
}
if (varonce169) {
var170 = varonce169;
} else {
var171 = " * ";
var172 = 3;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
var174 = 1;
{
var175 = array__Array___91d_93d(var_arguments, var174);
}
var176 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var176 = array_instance Array[Object] */
var177 = 3;
var178 = NEW_array__NativeArray(var177, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var178)->values[0] = (val*) var168;
((struct instance_array__NativeArray*)var178)->values[1] = (val*) var170;
((struct instance_array__NativeArray*)var178)->values[2] = (val*) var175;
{
((void (*)(val*, val*, long))(var176->class->vft[COLOR_array__Array__with_native]))(var176, var178, var177) /* with_native on <var176:Array[Object]>*/;
}
}
{
var179 = ((val* (*)(val*))(var176->class->vft[COLOR_string__Object__to_s]))(var176) /* to_s on <var176:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1857);
show_backtrace(1);
}
{
var180 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var179, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var180); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce181) {
var182 = varonce181;
} else {
var183 = "/";
var184 = 1;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
{
var187 = string__FlatString___61d_61d(var_pname, var182);
var186 = var187;
}
if (var186){
var188 = 0;
{
var189 = array__Array___91d_93d(var_arguments, var188);
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = " / ";
var193 = 3;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
var195 = 1;
{
var196 = array__Array___91d_93d(var_arguments, var195);
}
var197 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 3;
var199 = NEW_array__NativeArray(var198, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var199)->values[0] = (val*) var189;
((struct instance_array__NativeArray*)var199)->values[1] = (val*) var191;
((struct instance_array__NativeArray*)var199)->values[2] = (val*) var196;
{
((void (*)(val*, val*, long))(var197->class->vft[COLOR_array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
}
}
{
var200 = ((val* (*)(val*))(var197->class->vft[COLOR_string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1860);
show_backtrace(1);
}
{
var201 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var200, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var201); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce202) {
var203 = varonce202;
} else {
var204 = "%";
var205 = 1;
var206 = string__NativeString__to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
{
var208 = string__FlatString___61d_61d(var_pname, var203);
var207 = var208;
}
if (var207){
var209 = 0;
{
var210 = array__Array___91d_93d(var_arguments, var209);
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = " % ";
var214 = 3;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
var216 = 1;
{
var217 = array__Array___91d_93d(var_arguments, var216);
}
var218 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var218 = array_instance Array[Object] */
var219 = 3;
var220 = NEW_array__NativeArray(var219, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var220)->values[0] = (val*) var210;
((struct instance_array__NativeArray*)var220)->values[1] = (val*) var212;
((struct instance_array__NativeArray*)var220)->values[2] = (val*) var217;
{
((void (*)(val*, val*, long))(var218->class->vft[COLOR_array__Array__with_native]))(var218, var220, var219) /* with_native on <var218:Array[Object]>*/;
}
}
{
var221 = ((val* (*)(val*))(var218->class->vft[COLOR_string__Object__to_s]))(var218) /* to_s on <var218:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1863);
show_backtrace(1);
}
{
var222 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var221, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var222); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce223) {
var224 = varonce223;
} else {
var225 = "lshift";
var226 = 6;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
{
var229 = string__FlatString___61d_61d(var_pname, var224);
var228 = var229;
}
if (var228){
var230 = 0;
{
var231 = array__Array___91d_93d(var_arguments, var230);
}
if (varonce232) {
var233 = varonce232;
} else {
var234 = " << ";
var235 = 4;
var236 = string__NativeString__to_s_with_length(var234, var235);
var233 = var236;
varonce232 = var233;
}
var237 = 1;
{
var238 = array__Array___91d_93d(var_arguments, var237);
}
var239 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var239 = array_instance Array[Object] */
var240 = 3;
var241 = NEW_array__NativeArray(var240, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var241)->values[0] = (val*) var231;
((struct instance_array__NativeArray*)var241)->values[1] = (val*) var233;
((struct instance_array__NativeArray*)var241)->values[2] = (val*) var238;
{
((void (*)(val*, val*, long))(var239->class->vft[COLOR_array__Array__with_native]))(var239, var241, var240) /* with_native on <var239:Array[Object]>*/;
}
}
{
var242 = ((val* (*)(val*))(var239->class->vft[COLOR_string__Object__to_s]))(var239) /* to_s on <var239:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1866);
show_backtrace(1);
}
{
var243 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var242, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var243); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1869);
show_backtrace(1);
}
{
var264 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var263, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var264); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce265) {
var266 = varonce265;
} else {
var267 = "==";
var268 = 2;
var269 = string__NativeString__to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
{
var271 = string__FlatString___61d_61d(var_pname, var266);
var270 = var271;
}
if (var270){
var272 = 0;
{
var273 = array__Array___91d_93d(var_arguments, var272);
}
var274 = 1;
{
var275 = array__Array___91d_93d(var_arguments, var274);
}
{
var276 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var273, var275);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var276); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce277) {
var278 = varonce277;
} else {
var279 = "!=";
var280 = 2;
var281 = string__NativeString__to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
{
var283 = string__FlatString___61d_61d(var_pname, var278);
var282 = var283;
}
if (var282){
var284 = 0;
{
var285 = array__Array___91d_93d(var_arguments, var284);
}
var286 = 1;
{
var287 = array__Array___91d_93d(var_arguments, var286);
}
{
var288 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var285, var287);
}
var_res = var288;
if (varonce289) {
var290 = varonce289;
} else {
var291 = "!";
var292 = 1;
var293 = string__NativeString__to_s_with_length(var291, var292);
var290 = var293;
varonce289 = var290;
}
var294 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var294 = array_instance Array[Object] */
var295 = 2;
var296 = NEW_array__NativeArray(var295, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var296)->values[0] = (val*) var290;
((struct instance_array__NativeArray*)var296)->values[1] = (val*) var_res;
{
((void (*)(val*, val*, long))(var294->class->vft[COLOR_array__Array__with_native]))(var294, var296, var295) /* with_native on <var294:Array[Object]>*/;
}
}
{
var297 = ((val* (*)(val*))(var294->class->vft[COLOR_string__Object__to_s]))(var294) /* to_s on <var294:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1876);
show_backtrace(1);
}
{
var298 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var297, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var298); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce299) {
var300 = varonce299;
} else {
var301 = "<";
var302 = 1;
var303 = string__NativeString__to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
{
var305 = string__FlatString___61d_61d(var_pname, var300);
var304 = var305;
}
if (var304){
var306 = 0;
{
var307 = array__Array___91d_93d(var_arguments, var306);
}
if (varonce308) {
var309 = varonce308;
} else {
var310 = " < ";
var311 = 3;
var312 = string__NativeString__to_s_with_length(var310, var311);
var309 = var312;
varonce308 = var309;
}
var313 = 1;
{
var314 = array__Array___91d_93d(var_arguments, var313);
}
var315 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var315 = array_instance Array[Object] */
var316 = 3;
var317 = NEW_array__NativeArray(var316, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var317)->values[0] = (val*) var307;
((struct instance_array__NativeArray*)var317)->values[1] = (val*) var309;
((struct instance_array__NativeArray*)var317)->values[2] = (val*) var314;
{
((void (*)(val*, val*, long))(var315->class->vft[COLOR_array__Array__with_native]))(var315, var317, var316) /* with_native on <var315:Array[Object]>*/;
}
}
{
var318 = ((val* (*)(val*))(var315->class->vft[COLOR_string__Object__to_s]))(var315) /* to_s on <var315:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1879);
show_backtrace(1);
}
{
var319 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var318, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var319); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce320) {
var321 = varonce320;
} else {
var322 = ">";
var323 = 1;
var324 = string__NativeString__to_s_with_length(var322, var323);
var321 = var324;
varonce320 = var321;
}
{
var326 = string__FlatString___61d_61d(var_pname, var321);
var325 = var326;
}
if (var325){
var327 = 0;
{
var328 = array__Array___91d_93d(var_arguments, var327);
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = " > ";
var332 = 3;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
var334 = 1;
{
var335 = array__Array___91d_93d(var_arguments, var334);
}
var336 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var336 = array_instance Array[Object] */
var337 = 3;
var338 = NEW_array__NativeArray(var337, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var338)->values[0] = (val*) var328;
((struct instance_array__NativeArray*)var338)->values[1] = (val*) var330;
((struct instance_array__NativeArray*)var338)->values[2] = (val*) var335;
{
((void (*)(val*, val*, long))(var336->class->vft[COLOR_array__Array__with_native]))(var336, var338, var337) /* with_native on <var336:Array[Object]>*/;
}
}
{
var339 = ((val* (*)(val*))(var336->class->vft[COLOR_string__Object__to_s]))(var336) /* to_s on <var336:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1882);
show_backtrace(1);
}
{
var340 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var339, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var340); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce341) {
var342 = varonce341;
} else {
var343 = "<=";
var344 = 2;
var345 = string__NativeString__to_s_with_length(var343, var344);
var342 = var345;
varonce341 = var342;
}
{
var347 = string__FlatString___61d_61d(var_pname, var342);
var346 = var347;
}
if (var346){
var348 = 0;
{
var349 = array__Array___91d_93d(var_arguments, var348);
}
if (varonce350) {
var351 = varonce350;
} else {
var352 = " <= ";
var353 = 4;
var354 = string__NativeString__to_s_with_length(var352, var353);
var351 = var354;
varonce350 = var351;
}
var355 = 1;
{
var356 = array__Array___91d_93d(var_arguments, var355);
}
var357 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var357 = array_instance Array[Object] */
var358 = 3;
var359 = NEW_array__NativeArray(var358, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var359)->values[0] = (val*) var349;
((struct instance_array__NativeArray*)var359)->values[1] = (val*) var351;
((struct instance_array__NativeArray*)var359)->values[2] = (val*) var356;
{
((void (*)(val*, val*, long))(var357->class->vft[COLOR_array__Array__with_native]))(var357, var359, var358) /* with_native on <var357:Array[Object]>*/;
}
}
{
var360 = ((val* (*)(val*))(var357->class->vft[COLOR_string__Object__to_s]))(var357) /* to_s on <var357:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1885);
show_backtrace(1);
}
{
var361 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var360, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var361); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce362) {
var363 = varonce362;
} else {
var364 = ">=";
var365 = 2;
var366 = string__NativeString__to_s_with_length(var364, var365);
var363 = var366;
varonce362 = var363;
}
{
var368 = string__FlatString___61d_61d(var_pname, var363);
var367 = var368;
}
if (var367){
var369 = 0;
{
var370 = array__Array___91d_93d(var_arguments, var369);
}
if (varonce371) {
var372 = varonce371;
} else {
var373 = " >= ";
var374 = 4;
var375 = string__NativeString__to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
var376 = 1;
{
var377 = array__Array___91d_93d(var_arguments, var376);
}
var378 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var378 = array_instance Array[Object] */
var379 = 3;
var380 = NEW_array__NativeArray(var379, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var380)->values[0] = (val*) var370;
((struct instance_array__NativeArray*)var380)->values[1] = (val*) var372;
((struct instance_array__NativeArray*)var380)->values[2] = (val*) var377;
{
((void (*)(val*, val*, long))(var378->class->vft[COLOR_array__Array__with_native]))(var378, var380, var379) /* with_native on <var378:Array[Object]>*/;
}
}
{
var381 = ((val* (*)(val*))(var378->class->vft[COLOR_string__Object__to_s]))(var378) /* to_s on <var378:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1888);
show_backtrace(1);
}
{
var382 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var381, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var382); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce383) {
var384 = varonce383;
} else {
var385 = "to_f";
var386 = 4;
var387 = string__NativeString__to_s_with_length(var385, var386);
var384 = var387;
varonce383 = var384;
}
{
var389 = string__FlatString___61d_61d(var_pname, var384);
var388 = var389;
}
if (var388){
if (varonce390) {
var391 = varonce390;
} else {
var392 = "(double)";
var393 = 8;
var394 = string__NativeString__to_s_with_length(var392, var393);
var391 = var394;
varonce390 = var391;
}
var395 = 0;
{
var396 = array__Array___91d_93d(var_arguments, var395);
}
var397 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var397 = array_instance Array[Object] */
var398 = 2;
var399 = NEW_array__NativeArray(var398, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var399)->values[0] = (val*) var391;
((struct instance_array__NativeArray*)var399)->values[1] = (val*) var396;
{
((void (*)(val*, val*, long))(var397->class->vft[COLOR_array__Array__with_native]))(var397, var399, var398) /* with_native on <var397:Array[Object]>*/;
}
}
{
var400 = ((val* (*)(val*))(var397->class->vft[COLOR_string__Object__to_s]))(var397) /* to_s on <var397:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1891);
show_backtrace(1);
}
{
var401 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var400, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var401); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce402) {
var403 = varonce402;
} else {
var404 = "ascii";
var405 = 5;
var406 = string__NativeString__to_s_with_length(var404, var405);
var403 = var406;
varonce402 = var403;
}
{
var408 = string__FlatString___61d_61d(var_pname, var403);
var407 = var408;
}
if (var407){
var409 = 0;
{
var410 = array__Array___91d_93d(var_arguments, var409);
}
var411 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var411 = array_instance Array[Object] */
var412 = 1;
var413 = NEW_array__NativeArray(var412, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var413)->values[0] = (val*) var410;
{
((void (*)(val*, val*, long))(var411->class->vft[COLOR_array__Array__with_native]))(var411, var413, var412) /* with_native on <var411:Array[Object]>*/;
}
}
{
var414 = ((val* (*)(val*))(var411->class->vft[COLOR_string__Object__to_s]))(var411) /* to_s on <var411:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1894);
show_backtrace(1);
}
{
var415 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var414, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var415); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
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
if (varonce416) {
var417 = varonce416;
} else {
var418 = "Char";
var419 = 4;
var420 = string__NativeString__to_s_with_length(var418, var419);
var417 = var420;
varonce416 = var417;
}
{
var422 = string__FlatString___61d_61d(var_cname, var417);
var421 = var422;
}
if (var421){
if (varonce423) {
var424 = varonce423;
} else {
var425 = "output";
var426 = 6;
var427 = string__NativeString__to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
{
var429 = string__FlatString___61d_61d(var_pname, var424);
var428 = var429;
}
if (var428){
if (varonce430) {
var431 = varonce430;
} else {
var432 = "printf(\"%c\", ";
var433 = 13;
var434 = string__NativeString__to_s_with_length(var432, var433);
var431 = var434;
varonce430 = var431;
}
{
var435 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce436) {
var437 = varonce436;
} else {
var438 = ");";
var439 = 2;
var440 = string__NativeString__to_s_with_length(var438, var439);
var437 = var440;
varonce436 = var437;
}
var441 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var441 = array_instance Array[Object] */
var442 = 3;
var443 = NEW_array__NativeArray(var442, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var443)->values[0] = (val*) var431;
((struct instance_array__NativeArray*)var443)->values[1] = (val*) var435;
((struct instance_array__NativeArray*)var443)->values[2] = (val*) var437;
{
((void (*)(val*, val*, long))(var441->class->vft[COLOR_array__Array__with_native]))(var441, var443, var442) /* with_native on <var441:Array[Object]>*/;
}
}
{
var444 = ((val* (*)(val*))(var441->class->vft[COLOR_string__Object__to_s]))(var441) /* to_s on <var441:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var444); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce445) {
var446 = varonce445;
} else {
var447 = "object_id";
var448 = 9;
var449 = string__NativeString__to_s_with_length(var447, var448);
var446 = var449;
varonce445 = var446;
}
{
var451 = string__FlatString___61d_61d(var_pname, var446);
var450 = var451;
}
if (var450){
if (varonce452) {
var453 = varonce452;
} else {
var454 = "(long)";
var455 = 6;
var456 = string__NativeString__to_s_with_length(var454, var455);
var453 = var456;
varonce452 = var453;
}
{
var457 = abstract_collection__SequenceRead__first(var_arguments);
}
var458 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var458 = array_instance Array[Object] */
var459 = 2;
var460 = NEW_array__NativeArray(var459, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var460)->values[0] = (val*) var453;
((struct instance_array__NativeArray*)var460)->values[1] = (val*) var457;
{
((void (*)(val*, val*, long))(var458->class->vft[COLOR_array__Array__with_native]))(var458, var460, var459) /* with_native on <var458:Array[Object]>*/;
}
}
{
var461 = ((val* (*)(val*))(var458->class->vft[COLOR_string__Object__to_s]))(var458) /* to_s on <var458:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1902);
show_backtrace(1);
}
{
var462 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var461, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var462); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce463) {
var464 = varonce463;
} else {
var465 = "successor";
var466 = 9;
var467 = string__NativeString__to_s_with_length(var465, var466);
var464 = var467;
varonce463 = var464;
}
{
var469 = string__FlatString___61d_61d(var_pname, var464);
var468 = var469;
}
if (var468){
var470 = 0;
{
var471 = array__Array___91d_93d(var_arguments, var470);
}
if (varonce472) {
var473 = varonce472;
} else {
var474 = " + ";
var475 = 3;
var476 = string__NativeString__to_s_with_length(var474, var475);
var473 = var476;
varonce472 = var473;
}
var477 = 1;
{
var478 = array__Array___91d_93d(var_arguments, var477);
}
var479 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var479 = array_instance Array[Object] */
var480 = 3;
var481 = NEW_array__NativeArray(var480, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var481)->values[0] = (val*) var471;
((struct instance_array__NativeArray*)var481)->values[1] = (val*) var473;
((struct instance_array__NativeArray*)var481)->values[2] = (val*) var478;
{
((void (*)(val*, val*, long))(var479->class->vft[COLOR_array__Array__with_native]))(var479, var481, var480) /* with_native on <var479:Array[Object]>*/;
}
}
{
var482 = ((val* (*)(val*))(var479->class->vft[COLOR_string__Object__to_s]))(var479) /* to_s on <var479:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1905);
show_backtrace(1);
}
{
var483 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var482, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var483); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce484) {
var485 = varonce484;
} else {
var486 = "predecessor";
var487 = 11;
var488 = string__NativeString__to_s_with_length(var486, var487);
var485 = var488;
varonce484 = var485;
}
{
var490 = string__FlatString___61d_61d(var_pname, var485);
var489 = var490;
}
if (var489){
var491 = 0;
{
var492 = array__Array___91d_93d(var_arguments, var491);
}
if (varonce493) {
var494 = varonce493;
} else {
var495 = " - ";
var496 = 3;
var497 = string__NativeString__to_s_with_length(var495, var496);
var494 = var497;
varonce493 = var494;
}
var498 = 1;
{
var499 = array__Array___91d_93d(var_arguments, var498);
}
var500 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var500 = array_instance Array[Object] */
var501 = 3;
var502 = NEW_array__NativeArray(var501, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var502)->values[0] = (val*) var492;
((struct instance_array__NativeArray*)var502)->values[1] = (val*) var494;
((struct instance_array__NativeArray*)var502)->values[2] = (val*) var499;
{
((void (*)(val*, val*, long))(var500->class->vft[COLOR_array__Array__with_native]))(var500, var502, var501) /* with_native on <var500:Array[Object]>*/;
}
}
{
var503 = ((val* (*)(val*))(var500->class->vft[COLOR_string__Object__to_s]))(var500) /* to_s on <var500:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1908);
show_backtrace(1);
}
{
var504 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var503, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var504); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce505) {
var506 = varonce505;
} else {
var507 = "==";
var508 = 2;
var509 = string__NativeString__to_s_with_length(var507, var508);
var506 = var509;
varonce505 = var506;
}
{
var511 = string__FlatString___61d_61d(var_pname, var506);
var510 = var511;
}
if (var510){
var512 = 0;
{
var513 = array__Array___91d_93d(var_arguments, var512);
}
var514 = 1;
{
var515 = array__Array___91d_93d(var_arguments, var514);
}
{
var516 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var513, var515);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var516); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce517) {
var518 = varonce517;
} else {
var519 = "!=";
var520 = 2;
var521 = string__NativeString__to_s_with_length(var519, var520);
var518 = var521;
varonce517 = var518;
}
{
var523 = string__FlatString___61d_61d(var_pname, var518);
var522 = var523;
}
if (var522){
var524 = 0;
{
var525 = array__Array___91d_93d(var_arguments, var524);
}
var526 = 1;
{
var527 = array__Array___91d_93d(var_arguments, var526);
}
{
var528 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var525, var527);
}
var_res529 = var528;
if (varonce530) {
var531 = varonce530;
} else {
var532 = "!";
var533 = 1;
var534 = string__NativeString__to_s_with_length(var532, var533);
var531 = var534;
varonce530 = var531;
}
var535 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var535 = array_instance Array[Object] */
var536 = 2;
var537 = NEW_array__NativeArray(var536, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var537)->values[0] = (val*) var531;
((struct instance_array__NativeArray*)var537)->values[1] = (val*) var_res529;
{
((void (*)(val*, val*, long))(var535->class->vft[COLOR_array__Array__with_native]))(var535, var537, var536) /* with_native on <var535:Array[Object]>*/;
}
}
{
var538 = ((val* (*)(val*))(var535->class->vft[COLOR_string__Object__to_s]))(var535) /* to_s on <var535:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1915);
show_backtrace(1);
}
{
var539 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var538, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var539); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce540) {
var541 = varonce540;
} else {
var542 = "<";
var543 = 1;
var544 = string__NativeString__to_s_with_length(var542, var543);
var541 = var544;
varonce540 = var541;
}
{
var546 = string__FlatString___61d_61d(var_pname, var541);
var545 = var546;
}
if (var545){
var547 = 0;
{
var548 = array__Array___91d_93d(var_arguments, var547);
}
if (varonce549) {
var550 = varonce549;
} else {
var551 = " < ";
var552 = 3;
var553 = string__NativeString__to_s_with_length(var551, var552);
var550 = var553;
varonce549 = var550;
}
var554 = 1;
{
var555 = array__Array___91d_93d(var_arguments, var554);
}
var556 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var556 = array_instance Array[Object] */
var557 = 3;
var558 = NEW_array__NativeArray(var557, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var558)->values[0] = (val*) var548;
((struct instance_array__NativeArray*)var558)->values[1] = (val*) var550;
((struct instance_array__NativeArray*)var558)->values[2] = (val*) var555;
{
((void (*)(val*, val*, long))(var556->class->vft[COLOR_array__Array__with_native]))(var556, var558, var557) /* with_native on <var556:Array[Object]>*/;
}
}
{
var559 = ((val* (*)(val*))(var556->class->vft[COLOR_string__Object__to_s]))(var556) /* to_s on <var556:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1918);
show_backtrace(1);
}
{
var560 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var559, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var560); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce561) {
var562 = varonce561;
} else {
var563 = ">";
var564 = 1;
var565 = string__NativeString__to_s_with_length(var563, var564);
var562 = var565;
varonce561 = var562;
}
{
var567 = string__FlatString___61d_61d(var_pname, var562);
var566 = var567;
}
if (var566){
var568 = 0;
{
var569 = array__Array___91d_93d(var_arguments, var568);
}
if (varonce570) {
var571 = varonce570;
} else {
var572 = " > ";
var573 = 3;
var574 = string__NativeString__to_s_with_length(var572, var573);
var571 = var574;
varonce570 = var571;
}
var575 = 1;
{
var576 = array__Array___91d_93d(var_arguments, var575);
}
var577 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var577 = array_instance Array[Object] */
var578 = 3;
var579 = NEW_array__NativeArray(var578, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var579)->values[0] = (val*) var569;
((struct instance_array__NativeArray*)var579)->values[1] = (val*) var571;
((struct instance_array__NativeArray*)var579)->values[2] = (val*) var576;
{
((void (*)(val*, val*, long))(var577->class->vft[COLOR_array__Array__with_native]))(var577, var579, var578) /* with_native on <var577:Array[Object]>*/;
}
}
{
var580 = ((val* (*)(val*))(var577->class->vft[COLOR_string__Object__to_s]))(var577) /* to_s on <var577:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1921);
show_backtrace(1);
}
{
var581 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var580, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var581); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce582) {
var583 = varonce582;
} else {
var584 = "<=";
var585 = 2;
var586 = string__NativeString__to_s_with_length(var584, var585);
var583 = var586;
varonce582 = var583;
}
{
var588 = string__FlatString___61d_61d(var_pname, var583);
var587 = var588;
}
if (var587){
var589 = 0;
{
var590 = array__Array___91d_93d(var_arguments, var589);
}
if (varonce591) {
var592 = varonce591;
} else {
var593 = " <= ";
var594 = 4;
var595 = string__NativeString__to_s_with_length(var593, var594);
var592 = var595;
varonce591 = var592;
}
var596 = 1;
{
var597 = array__Array___91d_93d(var_arguments, var596);
}
var598 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var598 = array_instance Array[Object] */
var599 = 3;
var600 = NEW_array__NativeArray(var599, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var600)->values[0] = (val*) var590;
((struct instance_array__NativeArray*)var600)->values[1] = (val*) var592;
((struct instance_array__NativeArray*)var600)->values[2] = (val*) var597;
{
((void (*)(val*, val*, long))(var598->class->vft[COLOR_array__Array__with_native]))(var598, var600, var599) /* with_native on <var598:Array[Object]>*/;
}
}
{
var601 = ((val* (*)(val*))(var598->class->vft[COLOR_string__Object__to_s]))(var598) /* to_s on <var598:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1924);
show_backtrace(1);
}
{
var602 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var601, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var602); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce603) {
var604 = varonce603;
} else {
var605 = ">=";
var606 = 2;
var607 = string__NativeString__to_s_with_length(var605, var606);
var604 = var607;
varonce603 = var604;
}
{
var609 = string__FlatString___61d_61d(var_pname, var604);
var608 = var609;
}
if (var608){
var610 = 0;
{
var611 = array__Array___91d_93d(var_arguments, var610);
}
if (varonce612) {
var613 = varonce612;
} else {
var614 = " >= ";
var615 = 4;
var616 = string__NativeString__to_s_with_length(var614, var615);
var613 = var616;
varonce612 = var613;
}
var617 = 1;
{
var618 = array__Array___91d_93d(var_arguments, var617);
}
var619 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var619 = array_instance Array[Object] */
var620 = 3;
var621 = NEW_array__NativeArray(var620, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var621)->values[0] = (val*) var611;
((struct instance_array__NativeArray*)var621)->values[1] = (val*) var613;
((struct instance_array__NativeArray*)var621)->values[2] = (val*) var618;
{
((void (*)(val*, val*, long))(var619->class->vft[COLOR_array__Array__with_native]))(var619, var621, var620) /* with_native on <var619:Array[Object]>*/;
}
}
{
var622 = ((val* (*)(val*))(var619->class->vft[COLOR_string__Object__to_s]))(var619) /* to_s on <var619:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1927);
show_backtrace(1);
}
{
var623 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var622, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var623); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce624) {
var625 = varonce624;
} else {
var626 = "to_i";
var627 = 4;
var628 = string__NativeString__to_s_with_length(var626, var627);
var625 = var628;
varonce624 = var625;
}
{
var630 = string__FlatString___61d_61d(var_pname, var625);
var629 = var630;
}
if (var629){
var631 = 0;
{
var632 = array__Array___91d_93d(var_arguments, var631);
}
if (varonce633) {
var634 = varonce633;
} else {
var635 = "-\'0\'";
var636 = 4;
var637 = string__NativeString__to_s_with_length(var635, var636);
var634 = var637;
varonce633 = var634;
}
var638 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var638 = array_instance Array[Object] */
var639 = 2;
var640 = NEW_array__NativeArray(var639, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var640)->values[0] = (val*) var632;
((struct instance_array__NativeArray*)var640)->values[1] = (val*) var634;
{
((void (*)(val*, val*, long))(var638->class->vft[COLOR_array__Array__with_native]))(var638, var640, var639) /* with_native on <var638:Array[Object]>*/;
}
}
{
var641 = ((val* (*)(val*))(var638->class->vft[COLOR_string__Object__to_s]))(var638) /* to_s on <var638:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1930);
show_backtrace(1);
}
{
var642 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var641, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var642); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce643) {
var644 = varonce643;
} else {
var645 = "ascii";
var646 = 5;
var647 = string__NativeString__to_s_with_length(var645, var646);
var644 = var647;
varonce643 = var644;
}
{
var649 = string__FlatString___61d_61d(var_pname, var644);
var648 = var649;
}
if (var648){
if (varonce650) {
var651 = varonce650;
} else {
var652 = "(unsigned char)";
var653 = 15;
var654 = string__NativeString__to_s_with_length(var652, var653);
var651 = var654;
varonce650 = var651;
}
var655 = 0;
{
var656 = array__Array___91d_93d(var_arguments, var655);
}
var657 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var657 = array_instance Array[Object] */
var658 = 2;
var659 = NEW_array__NativeArray(var658, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var659)->values[0] = (val*) var651;
((struct instance_array__NativeArray*)var659)->values[1] = (val*) var656;
{
((void (*)(val*, val*, long))(var657->class->vft[COLOR_array__Array__with_native]))(var657, var659, var658) /* with_native on <var657:Array[Object]>*/;
}
}
{
var660 = ((val* (*)(val*))(var657->class->vft[COLOR_string__Object__to_s]))(var657) /* to_s on <var657:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1933);
show_backtrace(1);
}
{
var661 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var660, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var661); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
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
if (varonce662) {
var663 = varonce662;
} else {
var664 = "Bool";
var665 = 4;
var666 = string__NativeString__to_s_with_length(var664, var665);
var663 = var666;
varonce662 = var663;
}
{
var668 = string__FlatString___61d_61d(var_cname, var663);
var667 = var668;
}
if (var667){
if (varonce669) {
var670 = varonce669;
} else {
var671 = "output";
var672 = 6;
var673 = string__NativeString__to_s_with_length(var671, var672);
var670 = var673;
varonce669 = var670;
}
{
var675 = string__FlatString___61d_61d(var_pname, var670);
var674 = var675;
}
if (var674){
if (varonce676) {
var677 = varonce676;
} else {
var678 = "printf(";
var679 = 7;
var680 = string__NativeString__to_s_with_length(var678, var679);
var677 = var680;
varonce676 = var677;
}
{
var681 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce682) {
var683 = varonce682;
} else {
var684 = "?\"true\\n\":\"false\\n\");";
var685 = 21;
var686 = string__NativeString__to_s_with_length(var684, var685);
var683 = var686;
varonce682 = var683;
}
var687 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var687 = array_instance Array[Object] */
var688 = 3;
var689 = NEW_array__NativeArray(var688, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var689)->values[0] = (val*) var677;
((struct instance_array__NativeArray*)var689)->values[1] = (val*) var681;
((struct instance_array__NativeArray*)var689)->values[2] = (val*) var683;
{
((void (*)(val*, val*, long))(var687->class->vft[COLOR_array__Array__with_native]))(var687, var689, var688) /* with_native on <var687:Array[Object]>*/;
}
}
{
var690 = ((val* (*)(val*))(var687->class->vft[COLOR_string__Object__to_s]))(var687) /* to_s on <var687:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var690); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce691) {
var692 = varonce691;
} else {
var693 = "object_id";
var694 = 9;
var695 = string__NativeString__to_s_with_length(var693, var694);
var692 = var695;
varonce691 = var692;
}
{
var697 = string__FlatString___61d_61d(var_pname, var692);
var696 = var697;
}
if (var696){
if (varonce698) {
var699 = varonce698;
} else {
var700 = "(long)";
var701 = 6;
var702 = string__NativeString__to_s_with_length(var700, var701);
var699 = var702;
varonce698 = var699;
}
{
var703 = abstract_collection__SequenceRead__first(var_arguments);
}
var704 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var704 = array_instance Array[Object] */
var705 = 2;
var706 = NEW_array__NativeArray(var705, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var706)->values[0] = (val*) var699;
((struct instance_array__NativeArray*)var706)->values[1] = (val*) var703;
{
((void (*)(val*, val*, long))(var704->class->vft[COLOR_array__Array__with_native]))(var704, var706, var705) /* with_native on <var704:Array[Object]>*/;
}
}
{
var707 = ((val* (*)(val*))(var704->class->vft[COLOR_string__Object__to_s]))(var704) /* to_s on <var704:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1941);
show_backtrace(1);
}
{
var708 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var707, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var708); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce709) {
var710 = varonce709;
} else {
var711 = "==";
var712 = 2;
var713 = string__NativeString__to_s_with_length(var711, var712);
var710 = var713;
varonce709 = var710;
}
{
var715 = string__FlatString___61d_61d(var_pname, var710);
var714 = var715;
}
if (var714){
var716 = 0;
{
var717 = array__Array___91d_93d(var_arguments, var716);
}
var718 = 1;
{
var719 = array__Array___91d_93d(var_arguments, var718);
}
{
var720 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var717, var719);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var720); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce721) {
var722 = varonce721;
} else {
var723 = "!=";
var724 = 2;
var725 = string__NativeString__to_s_with_length(var723, var724);
var722 = var725;
varonce721 = var722;
}
{
var727 = string__FlatString___61d_61d(var_pname, var722);
var726 = var727;
}
if (var726){
var728 = 0;
{
var729 = array__Array___91d_93d(var_arguments, var728);
}
var730 = 1;
{
var731 = array__Array___91d_93d(var_arguments, var730);
}
{
var732 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var729, var731);
}
var_res733 = var732;
if (varonce734) {
var735 = varonce734;
} else {
var736 = "!";
var737 = 1;
var738 = string__NativeString__to_s_with_length(var736, var737);
var735 = var738;
varonce734 = var735;
}
var739 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var739 = array_instance Array[Object] */
var740 = 2;
var741 = NEW_array__NativeArray(var740, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var741)->values[0] = (val*) var735;
((struct instance_array__NativeArray*)var741)->values[1] = (val*) var_res733;
{
((void (*)(val*, val*, long))(var739->class->vft[COLOR_array__Array__with_native]))(var739, var741, var740) /* with_native on <var739:Array[Object]>*/;
}
}
{
var742 = ((val* (*)(val*))(var739->class->vft[COLOR_string__Object__to_s]))(var739) /* to_s on <var739:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1948);
show_backtrace(1);
}
{
var743 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var742, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var743); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (varonce744) {
var745 = varonce744;
} else {
var746 = "Float";
var747 = 5;
var748 = string__NativeString__to_s_with_length(var746, var747);
var745 = var748;
varonce744 = var745;
}
{
var750 = string__FlatString___61d_61d(var_cname, var745);
var749 = var750;
}
if (var749){
if (varonce751) {
var752 = varonce751;
} else {
var753 = "output";
var754 = 6;
var755 = string__NativeString__to_s_with_length(var753, var754);
var752 = var755;
varonce751 = var752;
}
{
var757 = string__FlatString___61d_61d(var_pname, var752);
var756 = var757;
}
if (var756){
if (varonce758) {
var759 = varonce758;
} else {
var760 = "printf(\"%f\\n\", ";
var761 = 15;
var762 = string__NativeString__to_s_with_length(var760, var761);
var759 = var762;
varonce758 = var759;
}
{
var763 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce764) {
var765 = varonce764;
} else {
var766 = ");";
var767 = 2;
var768 = string__NativeString__to_s_with_length(var766, var767);
var765 = var768;
varonce764 = var765;
}
var769 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var769 = array_instance Array[Object] */
var770 = 3;
var771 = NEW_array__NativeArray(var770, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var771)->values[0] = (val*) var759;
((struct instance_array__NativeArray*)var771)->values[1] = (val*) var763;
((struct instance_array__NativeArray*)var771)->values[2] = (val*) var765;
{
((void (*)(val*, val*, long))(var769->class->vft[COLOR_array__Array__with_native]))(var769, var771, var770) /* with_native on <var769:Array[Object]>*/;
}
}
{
var772 = ((val* (*)(val*))(var769->class->vft[COLOR_string__Object__to_s]))(var769) /* to_s on <var769:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var772); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce773) {
var774 = varonce773;
} else {
var775 = "object_id";
var776 = 9;
var777 = string__NativeString__to_s_with_length(var775, var776);
var774 = var777;
varonce773 = var774;
}
{
var779 = string__FlatString___61d_61d(var_pname, var774);
var778 = var779;
}
if (var778){
if (varonce780) {
var781 = varonce780;
} else {
var782 = "(double)";
var783 = 8;
var784 = string__NativeString__to_s_with_length(var782, var783);
var781 = var784;
varonce780 = var781;
}
{
var785 = abstract_collection__SequenceRead__first(var_arguments);
}
var786 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var786 = array_instance Array[Object] */
var787 = 2;
var788 = NEW_array__NativeArray(var787, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var788)->values[0] = (val*) var781;
((struct instance_array__NativeArray*)var788)->values[1] = (val*) var785;
{
((void (*)(val*, val*, long))(var786->class->vft[COLOR_array__Array__with_native]))(var786, var788, var787) /* with_native on <var786:Array[Object]>*/;
}
}
{
var789 = ((val* (*)(val*))(var786->class->vft[COLOR_string__Object__to_s]))(var786) /* to_s on <var786:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1956);
show_backtrace(1);
}
{
var790 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var789, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var790); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce791) {
var792 = varonce791;
} else {
var793 = "+";
var794 = 1;
var795 = string__NativeString__to_s_with_length(var793, var794);
var792 = var795;
varonce791 = var792;
}
{
var797 = string__FlatString___61d_61d(var_pname, var792);
var796 = var797;
}
if (var796){
var798 = 0;
{
var799 = array__Array___91d_93d(var_arguments, var798);
}
if (varonce800) {
var801 = varonce800;
} else {
var802 = " + ";
var803 = 3;
var804 = string__NativeString__to_s_with_length(var802, var803);
var801 = var804;
varonce800 = var801;
}
var805 = 1;
{
var806 = array__Array___91d_93d(var_arguments, var805);
}
var807 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var807 = array_instance Array[Object] */
var808 = 3;
var809 = NEW_array__NativeArray(var808, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var809)->values[0] = (val*) var799;
((struct instance_array__NativeArray*)var809)->values[1] = (val*) var801;
((struct instance_array__NativeArray*)var809)->values[2] = (val*) var806;
{
((void (*)(val*, val*, long))(var807->class->vft[COLOR_array__Array__with_native]))(var807, var809, var808) /* with_native on <var807:Array[Object]>*/;
}
}
{
var810 = ((val* (*)(val*))(var807->class->vft[COLOR_string__Object__to_s]))(var807) /* to_s on <var807:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1959);
show_backtrace(1);
}
{
var811 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var810, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var811); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce812) {
var813 = varonce812;
} else {
var814 = "-";
var815 = 1;
var816 = string__NativeString__to_s_with_length(var814, var815);
var813 = var816;
varonce812 = var813;
}
{
var818 = string__FlatString___61d_61d(var_pname, var813);
var817 = var818;
}
if (var817){
var819 = 0;
{
var820 = array__Array___91d_93d(var_arguments, var819);
}
if (varonce821) {
var822 = varonce821;
} else {
var823 = " - ";
var824 = 3;
var825 = string__NativeString__to_s_with_length(var823, var824);
var822 = var825;
varonce821 = var822;
}
var826 = 1;
{
var827 = array__Array___91d_93d(var_arguments, var826);
}
var828 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var828 = array_instance Array[Object] */
var829 = 3;
var830 = NEW_array__NativeArray(var829, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var830)->values[0] = (val*) var820;
((struct instance_array__NativeArray*)var830)->values[1] = (val*) var822;
((struct instance_array__NativeArray*)var830)->values[2] = (val*) var827;
{
((void (*)(val*, val*, long))(var828->class->vft[COLOR_array__Array__with_native]))(var828, var830, var829) /* with_native on <var828:Array[Object]>*/;
}
}
{
var831 = ((val* (*)(val*))(var828->class->vft[COLOR_string__Object__to_s]))(var828) /* to_s on <var828:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1962);
show_backtrace(1);
}
{
var832 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var831, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var832); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce833) {
var834 = varonce833;
} else {
var835 = "unary -";
var836 = 7;
var837 = string__NativeString__to_s_with_length(var835, var836);
var834 = var837;
varonce833 = var834;
}
{
var839 = string__FlatString___61d_61d(var_pname, var834);
var838 = var839;
}
if (var838){
if (varonce840) {
var841 = varonce840;
} else {
var842 = "-";
var843 = 1;
var844 = string__NativeString__to_s_with_length(var842, var843);
var841 = var844;
varonce840 = var841;
}
var845 = 0;
{
var846 = array__Array___91d_93d(var_arguments, var845);
}
var847 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var847 = array_instance Array[Object] */
var848 = 2;
var849 = NEW_array__NativeArray(var848, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var849)->values[0] = (val*) var841;
((struct instance_array__NativeArray*)var849)->values[1] = (val*) var846;
{
((void (*)(val*, val*, long))(var847->class->vft[COLOR_array__Array__with_native]))(var847, var849, var848) /* with_native on <var847:Array[Object]>*/;
}
}
{
var850 = ((val* (*)(val*))(var847->class->vft[COLOR_string__Object__to_s]))(var847) /* to_s on <var847:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1965);
show_backtrace(1);
}
{
var851 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var850, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var851); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce852) {
var853 = varonce852;
} else {
var854 = "succ";
var855 = 4;
var856 = string__NativeString__to_s_with_length(var854, var855);
var853 = var856;
varonce852 = var853;
}
{
var858 = string__FlatString___61d_61d(var_pname, var853);
var857 = var858;
}
if (var857){
var859 = 0;
{
var860 = array__Array___91d_93d(var_arguments, var859);
}
if (varonce861) {
var862 = varonce861;
} else {
var863 = "+1";
var864 = 2;
var865 = string__NativeString__to_s_with_length(var863, var864);
var862 = var865;
varonce861 = var862;
}
var866 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var866 = array_instance Array[Object] */
var867 = 2;
var868 = NEW_array__NativeArray(var867, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var868)->values[0] = (val*) var860;
((struct instance_array__NativeArray*)var868)->values[1] = (val*) var862;
{
((void (*)(val*, val*, long))(var866->class->vft[COLOR_array__Array__with_native]))(var866, var868, var867) /* with_native on <var866:Array[Object]>*/;
}
}
{
var869 = ((val* (*)(val*))(var866->class->vft[COLOR_string__Object__to_s]))(var866) /* to_s on <var866:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1968);
show_backtrace(1);
}
{
var870 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var869, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var870); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce871) {
var872 = varonce871;
} else {
var873 = "prec";
var874 = 4;
var875 = string__NativeString__to_s_with_length(var873, var874);
var872 = var875;
varonce871 = var872;
}
{
var877 = string__FlatString___61d_61d(var_pname, var872);
var876 = var877;
}
if (var876){
var878 = 0;
{
var879 = array__Array___91d_93d(var_arguments, var878);
}
if (varonce880) {
var881 = varonce880;
} else {
var882 = "-1";
var883 = 2;
var884 = string__NativeString__to_s_with_length(var882, var883);
var881 = var884;
varonce880 = var881;
}
var885 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var885 = array_instance Array[Object] */
var886 = 2;
var887 = NEW_array__NativeArray(var886, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var887)->values[0] = (val*) var879;
((struct instance_array__NativeArray*)var887)->values[1] = (val*) var881;
{
((void (*)(val*, val*, long))(var885->class->vft[COLOR_array__Array__with_native]))(var885, var887, var886) /* with_native on <var885:Array[Object]>*/;
}
}
{
var888 = ((val* (*)(val*))(var885->class->vft[COLOR_string__Object__to_s]))(var885) /* to_s on <var885:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1971);
show_backtrace(1);
}
{
var889 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var888, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var889); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce890) {
var891 = varonce890;
} else {
var892 = "*";
var893 = 1;
var894 = string__NativeString__to_s_with_length(var892, var893);
var891 = var894;
varonce890 = var891;
}
{
var896 = string__FlatString___61d_61d(var_pname, var891);
var895 = var896;
}
if (var895){
var897 = 0;
{
var898 = array__Array___91d_93d(var_arguments, var897);
}
if (varonce899) {
var900 = varonce899;
} else {
var901 = " * ";
var902 = 3;
var903 = string__NativeString__to_s_with_length(var901, var902);
var900 = var903;
varonce899 = var900;
}
var904 = 1;
{
var905 = array__Array___91d_93d(var_arguments, var904);
}
var906 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var906 = array_instance Array[Object] */
var907 = 3;
var908 = NEW_array__NativeArray(var907, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var908)->values[0] = (val*) var898;
((struct instance_array__NativeArray*)var908)->values[1] = (val*) var900;
((struct instance_array__NativeArray*)var908)->values[2] = (val*) var905;
{
((void (*)(val*, val*, long))(var906->class->vft[COLOR_array__Array__with_native]))(var906, var908, var907) /* with_native on <var906:Array[Object]>*/;
}
}
{
var909 = ((val* (*)(val*))(var906->class->vft[COLOR_string__Object__to_s]))(var906) /* to_s on <var906:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1974);
show_backtrace(1);
}
{
var910 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var909, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var910); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce911) {
var912 = varonce911;
} else {
var913 = "/";
var914 = 1;
var915 = string__NativeString__to_s_with_length(var913, var914);
var912 = var915;
varonce911 = var912;
}
{
var917 = string__FlatString___61d_61d(var_pname, var912);
var916 = var917;
}
if (var916){
var918 = 0;
{
var919 = array__Array___91d_93d(var_arguments, var918);
}
if (varonce920) {
var921 = varonce920;
} else {
var922 = " / ";
var923 = 3;
var924 = string__NativeString__to_s_with_length(var922, var923);
var921 = var924;
varonce920 = var921;
}
var925 = 1;
{
var926 = array__Array___91d_93d(var_arguments, var925);
}
var927 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var927 = array_instance Array[Object] */
var928 = 3;
var929 = NEW_array__NativeArray(var928, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var929)->values[0] = (val*) var919;
((struct instance_array__NativeArray*)var929)->values[1] = (val*) var921;
((struct instance_array__NativeArray*)var929)->values[2] = (val*) var926;
{
((void (*)(val*, val*, long))(var927->class->vft[COLOR_array__Array__with_native]))(var927, var929, var928) /* with_native on <var927:Array[Object]>*/;
}
}
{
var930 = ((val* (*)(val*))(var927->class->vft[COLOR_string__Object__to_s]))(var927) /* to_s on <var927:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1977);
show_backtrace(1);
}
{
var931 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var930, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var931); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce932) {
var933 = varonce932;
} else {
var934 = "==";
var935 = 2;
var936 = string__NativeString__to_s_with_length(var934, var935);
var933 = var936;
varonce932 = var933;
}
{
var938 = string__FlatString___61d_61d(var_pname, var933);
var937 = var938;
}
if (var937){
var939 = 0;
{
var940 = array__Array___91d_93d(var_arguments, var939);
}
var941 = 1;
{
var942 = array__Array___91d_93d(var_arguments, var941);
}
{
var943 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var940, var942);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var943); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce944) {
var945 = varonce944;
} else {
var946 = "!=";
var947 = 2;
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
var953 = 1;
{
var954 = array__Array___91d_93d(var_arguments, var953);
}
{
var955 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var952, var954);
}
var_res956 = var955;
if (varonce957) {
var958 = varonce957;
} else {
var959 = "!";
var960 = 1;
var961 = string__NativeString__to_s_with_length(var959, var960);
var958 = var961;
varonce957 = var958;
}
var962 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var962 = array_instance Array[Object] */
var963 = 2;
var964 = NEW_array__NativeArray(var963, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var964)->values[0] = (val*) var958;
((struct instance_array__NativeArray*)var964)->values[1] = (val*) var_res956;
{
((void (*)(val*, val*, long))(var962->class->vft[COLOR_array__Array__with_native]))(var962, var964, var963) /* with_native on <var962:Array[Object]>*/;
}
}
{
var965 = ((val* (*)(val*))(var962->class->vft[COLOR_string__Object__to_s]))(var962) /* to_s on <var962:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1984);
show_backtrace(1);
}
{
var966 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var965, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var966); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce967) {
var968 = varonce967;
} else {
var969 = "<";
var970 = 1;
var971 = string__NativeString__to_s_with_length(var969, var970);
var968 = var971;
varonce967 = var968;
}
{
var973 = string__FlatString___61d_61d(var_pname, var968);
var972 = var973;
}
if (var972){
var974 = 0;
{
var975 = array__Array___91d_93d(var_arguments, var974);
}
if (varonce976) {
var977 = varonce976;
} else {
var978 = " < ";
var979 = 3;
var980 = string__NativeString__to_s_with_length(var978, var979);
var977 = var980;
varonce976 = var977;
}
var981 = 1;
{
var982 = array__Array___91d_93d(var_arguments, var981);
}
var983 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var983 = array_instance Array[Object] */
var984 = 3;
var985 = NEW_array__NativeArray(var984, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var985)->values[0] = (val*) var975;
((struct instance_array__NativeArray*)var985)->values[1] = (val*) var977;
((struct instance_array__NativeArray*)var985)->values[2] = (val*) var982;
{
((void (*)(val*, val*, long))(var983->class->vft[COLOR_array__Array__with_native]))(var983, var985, var984) /* with_native on <var983:Array[Object]>*/;
}
}
{
var986 = ((val* (*)(val*))(var983->class->vft[COLOR_string__Object__to_s]))(var983) /* to_s on <var983:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1987);
show_backtrace(1);
}
{
var987 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var986, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var987); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce988) {
var989 = varonce988;
} else {
var990 = ">";
var991 = 1;
var992 = string__NativeString__to_s_with_length(var990, var991);
var989 = var992;
varonce988 = var989;
}
{
var994 = string__FlatString___61d_61d(var_pname, var989);
var993 = var994;
}
if (var993){
var995 = 0;
{
var996 = array__Array___91d_93d(var_arguments, var995);
}
if (varonce997) {
var998 = varonce997;
} else {
var999 = " > ";
var1000 = 3;
var1001 = string__NativeString__to_s_with_length(var999, var1000);
var998 = var1001;
varonce997 = var998;
}
var1002 = 1;
{
var1003 = array__Array___91d_93d(var_arguments, var1002);
}
var1004 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1004 = array_instance Array[Object] */
var1005 = 3;
var1006 = NEW_array__NativeArray(var1005, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1006)->values[0] = (val*) var996;
((struct instance_array__NativeArray*)var1006)->values[1] = (val*) var998;
((struct instance_array__NativeArray*)var1006)->values[2] = (val*) var1003;
{
((void (*)(val*, val*, long))(var1004->class->vft[COLOR_array__Array__with_native]))(var1004, var1006, var1005) /* with_native on <var1004:Array[Object]>*/;
}
}
{
var1007 = ((val* (*)(val*))(var1004->class->vft[COLOR_string__Object__to_s]))(var1004) /* to_s on <var1004:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1990);
show_backtrace(1);
}
{
var1008 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1007, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1008); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1009) {
var1010 = varonce1009;
} else {
var1011 = "<=";
var1012 = 2;
var1013 = string__NativeString__to_s_with_length(var1011, var1012);
var1010 = var1013;
varonce1009 = var1010;
}
{
var1015 = string__FlatString___61d_61d(var_pname, var1010);
var1014 = var1015;
}
if (var1014){
var1016 = 0;
{
var1017 = array__Array___91d_93d(var_arguments, var1016);
}
if (varonce1018) {
var1019 = varonce1018;
} else {
var1020 = " <= ";
var1021 = 4;
var1022 = string__NativeString__to_s_with_length(var1020, var1021);
var1019 = var1022;
varonce1018 = var1019;
}
var1023 = 1;
{
var1024 = array__Array___91d_93d(var_arguments, var1023);
}
var1025 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1025 = array_instance Array[Object] */
var1026 = 3;
var1027 = NEW_array__NativeArray(var1026, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1027)->values[0] = (val*) var1017;
((struct instance_array__NativeArray*)var1027)->values[1] = (val*) var1019;
((struct instance_array__NativeArray*)var1027)->values[2] = (val*) var1024;
{
((void (*)(val*, val*, long))(var1025->class->vft[COLOR_array__Array__with_native]))(var1025, var1027, var1026) /* with_native on <var1025:Array[Object]>*/;
}
}
{
var1028 = ((val* (*)(val*))(var1025->class->vft[COLOR_string__Object__to_s]))(var1025) /* to_s on <var1025:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1993);
show_backtrace(1);
}
{
var1029 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1028, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1029); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1030) {
var1031 = varonce1030;
} else {
var1032 = ">=";
var1033 = 2;
var1034 = string__NativeString__to_s_with_length(var1032, var1033);
var1031 = var1034;
varonce1030 = var1031;
}
{
var1036 = string__FlatString___61d_61d(var_pname, var1031);
var1035 = var1036;
}
if (var1035){
var1037 = 0;
{
var1038 = array__Array___91d_93d(var_arguments, var1037);
}
if (varonce1039) {
var1040 = varonce1039;
} else {
var1041 = " >= ";
var1042 = 4;
var1043 = string__NativeString__to_s_with_length(var1041, var1042);
var1040 = var1043;
varonce1039 = var1040;
}
var1044 = 1;
{
var1045 = array__Array___91d_93d(var_arguments, var1044);
}
var1046 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1046 = array_instance Array[Object] */
var1047 = 3;
var1048 = NEW_array__NativeArray(var1047, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1048)->values[0] = (val*) var1038;
((struct instance_array__NativeArray*)var1048)->values[1] = (val*) var1040;
((struct instance_array__NativeArray*)var1048)->values[2] = (val*) var1045;
{
((void (*)(val*, val*, long))(var1046->class->vft[COLOR_array__Array__with_native]))(var1046, var1048, var1047) /* with_native on <var1046:Array[Object]>*/;
}
}
{
var1049 = ((val* (*)(val*))(var1046->class->vft[COLOR_string__Object__to_s]))(var1046) /* to_s on <var1046:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1996);
show_backtrace(1);
}
{
var1050 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1049, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1050); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1051) {
var1052 = varonce1051;
} else {
var1053 = "to_i";
var1054 = 4;
var1055 = string__NativeString__to_s_with_length(var1053, var1054);
var1052 = var1055;
varonce1051 = var1052;
}
{
var1057 = string__FlatString___61d_61d(var_pname, var1052);
var1056 = var1057;
}
if (var1056){
if (varonce1058) {
var1059 = varonce1058;
} else {
var1060 = "(long)";
var1061 = 6;
var1062 = string__NativeString__to_s_with_length(var1060, var1061);
var1059 = var1062;
varonce1058 = var1059;
}
var1063 = 0;
{
var1064 = array__Array___91d_93d(var_arguments, var1063);
}
var1065 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1065 = array_instance Array[Object] */
var1066 = 2;
var1067 = NEW_array__NativeArray(var1066, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1067)->values[0] = (val*) var1059;
((struct instance_array__NativeArray*)var1067)->values[1] = (val*) var1064;
{
((void (*)(val*, val*, long))(var1065->class->vft[COLOR_array__Array__with_native]))(var1065, var1067, var1066) /* with_native on <var1065:Array[Object]>*/;
}
}
{
var1068 = ((val* (*)(val*))(var1065->class->vft[COLOR_string__Object__to_s]))(var1065) /* to_s on <var1065:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1999);
show_backtrace(1);
}
{
var1069 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1068, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1069); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
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
if (varonce1070) {
var1071 = varonce1070;
} else {
var1072 = "NativeString";
var1073 = 12;
var1074 = string__NativeString__to_s_with_length(var1072, var1073);
var1071 = var1074;
varonce1070 = var1071;
}
{
var1076 = string__FlatString___61d_61d(var_cname, var1071);
var1075 = var1076;
}
if (var1075){
if (varonce1077) {
var1078 = varonce1077;
} else {
var1079 = "[]";
var1080 = 2;
var1081 = string__NativeString__to_s_with_length(var1079, var1080);
var1078 = var1081;
varonce1077 = var1078;
}
{
var1083 = string__FlatString___61d_61d(var_pname, var1078);
var1082 = var1083;
}
if (var1082){
var1084 = 0;
{
var1085 = array__Array___91d_93d(var_arguments, var1084);
}
if (varonce1086) {
var1087 = varonce1086;
} else {
var1088 = "[";
var1089 = 1;
var1090 = string__NativeString__to_s_with_length(var1088, var1089);
var1087 = var1090;
varonce1086 = var1087;
}
var1091 = 1;
{
var1092 = array__Array___91d_93d(var_arguments, var1091);
}
if (varonce1093) {
var1094 = varonce1093;
} else {
var1095 = "]";
var1096 = 1;
var1097 = string__NativeString__to_s_with_length(var1095, var1096);
var1094 = var1097;
varonce1093 = var1094;
}
var1098 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1098 = array_instance Array[Object] */
var1099 = 4;
var1100 = NEW_array__NativeArray(var1099, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1100)->values[0] = (val*) var1085;
((struct instance_array__NativeArray*)var1100)->values[1] = (val*) var1087;
((struct instance_array__NativeArray*)var1100)->values[2] = (val*) var1092;
((struct instance_array__NativeArray*)var1100)->values[3] = (val*) var1094;
{
((void (*)(val*, val*, long))(var1098->class->vft[COLOR_array__Array__with_native]))(var1098, var1100, var1099) /* with_native on <var1098:Array[Object]>*/;
}
}
{
var1101 = ((val* (*)(val*))(var1098->class->vft[COLOR_string__Object__to_s]))(var1098) /* to_s on <var1098:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2004);
show_backtrace(1);
}
{
var1102 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1101, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1102); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1103) {
var1104 = varonce1103;
} else {
var1105 = "[]=";
var1106 = 3;
var1107 = string__NativeString__to_s_with_length(var1105, var1106);
var1104 = var1107;
varonce1103 = var1104;
}
{
var1109 = string__FlatString___61d_61d(var_pname, var1104);
var1108 = var1109;
}
if (var1108){
var1110 = 0;
{
var1111 = array__Array___91d_93d(var_arguments, var1110);
}
if (varonce1112) {
var1113 = varonce1112;
} else {
var1114 = "[";
var1115 = 1;
var1116 = string__NativeString__to_s_with_length(var1114, var1115);
var1113 = var1116;
varonce1112 = var1113;
}
var1117 = 1;
{
var1118 = array__Array___91d_93d(var_arguments, var1117);
}
if (varonce1119) {
var1120 = varonce1119;
} else {
var1121 = "]=";
var1122 = 2;
var1123 = string__NativeString__to_s_with_length(var1121, var1122);
var1120 = var1123;
varonce1119 = var1120;
}
var1124 = 2;
{
var1125 = array__Array___91d_93d(var_arguments, var1124);
}
if (varonce1126) {
var1127 = varonce1126;
} else {
var1128 = ";";
var1129 = 1;
var1130 = string__NativeString__to_s_with_length(var1128, var1129);
var1127 = var1130;
varonce1126 = var1127;
}
var1131 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1131 = array_instance Array[Object] */
var1132 = 6;
var1133 = NEW_array__NativeArray(var1132, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1133)->values[0] = (val*) var1111;
((struct instance_array__NativeArray*)var1133)->values[1] = (val*) var1113;
((struct instance_array__NativeArray*)var1133)->values[2] = (val*) var1118;
((struct instance_array__NativeArray*)var1133)->values[3] = (val*) var1120;
((struct instance_array__NativeArray*)var1133)->values[4] = (val*) var1125;
((struct instance_array__NativeArray*)var1133)->values[5] = (val*) var1127;
{
((void (*)(val*, val*, long))(var1131->class->vft[COLOR_array__Array__with_native]))(var1131, var1133, var1132) /* with_native on <var1131:Array[Object]>*/;
}
}
{
var1134 = ((val* (*)(val*))(var1131->class->vft[COLOR_string__Object__to_s]))(var1131) /* to_s on <var1131:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1134); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1135) {
var1136 = varonce1135;
} else {
var1137 = "copy_to";
var1138 = 7;
var1139 = string__NativeString__to_s_with_length(var1137, var1138);
var1136 = var1139;
varonce1135 = var1136;
}
{
var1141 = string__FlatString___61d_61d(var_pname, var1136);
var1140 = var1141;
}
if (var1140){
if (varonce1142) {
var1143 = varonce1142;
} else {
var1144 = "memcpy(";
var1145 = 7;
var1146 = string__NativeString__to_s_with_length(var1144, var1145);
var1143 = var1146;
varonce1142 = var1143;
}
var1147 = 1;
{
var1148 = array__Array___91d_93d(var_arguments, var1147);
}
if (varonce1149) {
var1150 = varonce1149;
} else {
var1151 = "+";
var1152 = 1;
var1153 = string__NativeString__to_s_with_length(var1151, var1152);
var1150 = var1153;
varonce1149 = var1150;
}
var1154 = 4;
{
var1155 = array__Array___91d_93d(var_arguments, var1154);
}
if (varonce1156) {
var1157 = varonce1156;
} else {
var1158 = ",";
var1159 = 1;
var1160 = string__NativeString__to_s_with_length(var1158, var1159);
var1157 = var1160;
varonce1156 = var1157;
}
var1161 = 0;
{
var1162 = array__Array___91d_93d(var_arguments, var1161);
}
if (varonce1163) {
var1164 = varonce1163;
} else {
var1165 = "+";
var1166 = 1;
var1167 = string__NativeString__to_s_with_length(var1165, var1166);
var1164 = var1167;
varonce1163 = var1164;
}
var1168 = 3;
{
var1169 = array__Array___91d_93d(var_arguments, var1168);
}
if (varonce1170) {
var1171 = varonce1170;
} else {
var1172 = ",";
var1173 = 1;
var1174 = string__NativeString__to_s_with_length(var1172, var1173);
var1171 = var1174;
varonce1170 = var1171;
}
var1175 = 2;
{
var1176 = array__Array___91d_93d(var_arguments, var1175);
}
if (varonce1177) {
var1178 = varonce1177;
} else {
var1179 = ");";
var1180 = 2;
var1181 = string__NativeString__to_s_with_length(var1179, var1180);
var1178 = var1181;
varonce1177 = var1178;
}
var1182 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1182 = array_instance Array[Object] */
var1183 = 11;
var1184 = NEW_array__NativeArray(var1183, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1184)->values[0] = (val*) var1143;
((struct instance_array__NativeArray*)var1184)->values[1] = (val*) var1148;
((struct instance_array__NativeArray*)var1184)->values[2] = (val*) var1150;
((struct instance_array__NativeArray*)var1184)->values[3] = (val*) var1155;
((struct instance_array__NativeArray*)var1184)->values[4] = (val*) var1157;
((struct instance_array__NativeArray*)var1184)->values[5] = (val*) var1162;
((struct instance_array__NativeArray*)var1184)->values[6] = (val*) var1164;
((struct instance_array__NativeArray*)var1184)->values[7] = (val*) var1169;
((struct instance_array__NativeArray*)var1184)->values[8] = (val*) var1171;
((struct instance_array__NativeArray*)var1184)->values[9] = (val*) var1176;
((struct instance_array__NativeArray*)var1184)->values[10] = (val*) var1178;
{
((void (*)(val*, val*, long))(var1182->class->vft[COLOR_array__Array__with_native]))(var1182, var1184, var1183) /* with_native on <var1182:Array[Object]>*/;
}
}
{
var1185 = ((val* (*)(val*))(var1182->class->vft[COLOR_string__Object__to_s]))(var1182) /* to_s on <var1182:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1185); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1186) {
var1187 = varonce1186;
} else {
var1188 = "atoi";
var1189 = 4;
var1190 = string__NativeString__to_s_with_length(var1188, var1189);
var1187 = var1190;
varonce1186 = var1187;
}
{
var1192 = string__FlatString___61d_61d(var_pname, var1187);
var1191 = var1192;
}
if (var1191){
if (varonce1193) {
var1194 = varonce1193;
} else {
var1195 = "atoi(";
var1196 = 5;
var1197 = string__NativeString__to_s_with_length(var1195, var1196);
var1194 = var1197;
varonce1193 = var1194;
}
var1198 = 0;
{
var1199 = array__Array___91d_93d(var_arguments, var1198);
}
if (varonce1200) {
var1201 = varonce1200;
} else {
var1202 = ");";
var1203 = 2;
var1204 = string__NativeString__to_s_with_length(var1202, var1203);
var1201 = var1204;
varonce1200 = var1201;
}
var1205 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1205 = array_instance Array[Object] */
var1206 = 3;
var1207 = NEW_array__NativeArray(var1206, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1207)->values[0] = (val*) var1194;
((struct instance_array__NativeArray*)var1207)->values[1] = (val*) var1199;
((struct instance_array__NativeArray*)var1207)->values[2] = (val*) var1201;
{
((void (*)(val*, val*, long))(var1205->class->vft[COLOR_array__Array__with_native]))(var1205, var1207, var1206) /* with_native on <var1205:Array[Object]>*/;
}
}
{
var1208 = ((val* (*)(val*))(var1205->class->vft[COLOR_string__Object__to_s]))(var1205) /* to_s on <var1205:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2013);
show_backtrace(1);
}
{
var1209 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1208, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1209); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1210) {
var1211 = varonce1210;
} else {
var1212 = "init";
var1213 = 4;
var1214 = string__NativeString__to_s_with_length(var1212, var1213);
var1211 = var1214;
varonce1210 = var1211;
}
{
var1216 = string__FlatString___61d_61d(var_pname, var1211);
var1215 = var1216;
}
if (var1215){
if (varonce1217) {
var1218 = varonce1217;
} else {
var1219 = "(char*)nit_alloc(";
var1220 = 17;
var1221 = string__NativeString__to_s_with_length(var1219, var1220);
var1218 = var1221;
varonce1217 = var1218;
}
var1222 = 1;
{
var1223 = array__Array___91d_93d(var_arguments, var1222);
}
if (varonce1224) {
var1225 = varonce1224;
} else {
var1226 = ")";
var1227 = 1;
var1228 = string__NativeString__to_s_with_length(var1226, var1227);
var1225 = var1228;
varonce1224 = var1225;
}
var1229 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1229 = array_instance Array[Object] */
var1230 = 3;
var1231 = NEW_array__NativeArray(var1230, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1231)->values[0] = (val*) var1218;
((struct instance_array__NativeArray*)var1231)->values[1] = (val*) var1223;
((struct instance_array__NativeArray*)var1231)->values[2] = (val*) var1225;
{
((void (*)(val*, val*, long))(var1229->class->vft[COLOR_array__Array__with_native]))(var1229, var1231, var1230) /* with_native on <var1229:Array[Object]>*/;
}
}
{
var1232 = ((val* (*)(val*))(var1229->class->vft[COLOR_string__Object__to_s]))(var1229) /* to_s on <var1229:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2016);
show_backtrace(1);
}
{
var1233 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1232, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1233); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
}
}
} else {
if (varonce1234) {
var1235 = varonce1234;
} else {
var1236 = "NativeArray";
var1237 = 11;
var1238 = string__NativeString__to_s_with_length(var1236, var1237);
var1235 = var1238;
varonce1234 = var1235;
}
{
var1240 = string__FlatString___61d_61d(var_cname, var1235);
var1239 = var1240;
}
if (var1239){
{
separate_compiler__SeparateCompilerVisitor__native_array_def(var_v, var_pname, var_ret, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#native_array_def on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
}
}
}
if (varonce1241) {
var1242 = varonce1241;
} else {
var1243 = "exit";
var1244 = 4;
var1245 = string__NativeString__to_s_with_length(var1243, var1244);
var1242 = var1245;
varonce1241 = var1242;
}
{
var1247 = string__FlatString___61d_61d(var_pname, var1242);
var1246 = var1247;
}
if (var1246){
if (varonce1248) {
var1249 = varonce1248;
} else {
var1250 = "exit(";
var1251 = 5;
var1252 = string__NativeString__to_s_with_length(var1250, var1251);
var1249 = var1252;
varonce1248 = var1249;
}
var1253 = 1;
{
var1254 = array__Array___91d_93d(var_arguments, var1253);
}
if (varonce1255) {
var1256 = varonce1255;
} else {
var1257 = ");";
var1258 = 2;
var1259 = string__NativeString__to_s_with_length(var1257, var1258);
var1256 = var1259;
varonce1255 = var1256;
}
var1260 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1260 = array_instance Array[Object] */
var1261 = 3;
var1262 = NEW_array__NativeArray(var1261, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1262)->values[0] = (val*) var1249;
((struct instance_array__NativeArray*)var1262)->values[1] = (val*) var1254;
((struct instance_array__NativeArray*)var1262)->values[2] = (val*) var1256;
{
((void (*)(val*, val*, long))(var1260->class->vft[COLOR_array__Array__with_native]))(var1260, var1262, var1261) /* with_native on <var1260:Array[Object]>*/;
}
}
{
var1263 = ((val* (*)(val*))(var1260->class->vft[COLOR_string__Object__to_s]))(var1260) /* to_s on <var1260:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1263); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1264) {
var1265 = varonce1264;
} else {
var1266 = "sys";
var1267 = 3;
var1268 = string__NativeString__to_s_with_length(var1266, var1267);
var1265 = var1268;
varonce1264 = var1265;
}
{
var1270 = string__FlatString___61d_61d(var_pname, var1265);
var1269 = var1270;
}
if (var1269){
if (varonce1271) {
var1272 = varonce1271;
} else {
var1273 = "glob_sys";
var1274 = 8;
var1275 = string__NativeString__to_s_with_length(var1273, var1274);
var1272 = var1275;
varonce1271 = var1272;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2027);
show_backtrace(1);
}
{
var1276 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1272, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1276); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1277) {
var1278 = varonce1277;
} else {
var1279 = "calloc_string";
var1280 = 13;
var1281 = string__NativeString__to_s_with_length(var1279, var1280);
var1278 = var1281;
varonce1277 = var1278;
}
{
var1283 = string__FlatString___61d_61d(var_pname, var1278);
var1282 = var1283;
}
if (var1282){
if (varonce1284) {
var1285 = varonce1284;
} else {
var1286 = "(char*)nit_alloc(";
var1287 = 17;
var1288 = string__NativeString__to_s_with_length(var1286, var1287);
var1285 = var1288;
varonce1284 = var1285;
}
var1289 = 1;
{
var1290 = array__Array___91d_93d(var_arguments, var1289);
}
if (varonce1291) {
var1292 = varonce1291;
} else {
var1293 = ")";
var1294 = 1;
var1295 = string__NativeString__to_s_with_length(var1293, var1294);
var1292 = var1295;
varonce1291 = var1292;
}
var1296 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1296 = array_instance Array[Object] */
var1297 = 3;
var1298 = NEW_array__NativeArray(var1297, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1298)->values[0] = (val*) var1285;
((struct instance_array__NativeArray*)var1298)->values[1] = (val*) var1290;
((struct instance_array__NativeArray*)var1298)->values[2] = (val*) var1292;
{
((void (*)(val*, val*, long))(var1296->class->vft[COLOR_array__Array__with_native]))(var1296, var1298, var1297) /* with_native on <var1296:Array[Object]>*/;
}
}
{
var1299 = ((val* (*)(val*))(var1296->class->vft[COLOR_string__Object__to_s]))(var1296) /* to_s on <var1296:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2030);
show_backtrace(1);
}
{
var1300 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1299, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1300); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1301) {
var1302 = varonce1301;
} else {
var1303 = "calloc_array";
var1304 = 12;
var1305 = string__NativeString__to_s_with_length(var1303, var1304);
var1302 = var1305;
varonce1301 = var1302;
}
{
var1307 = string__FlatString___61d_61d(var_pname, var1302);
var1306 = var1307;
}
if (var1306){
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2033);
show_backtrace(1);
}
{
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__calloc_array]))(var_v, var_ret, var_arguments) /* calloc_array on <var_v:AbstractCompilerVisitor>*/;
}
goto RET_LABEL;
} else {
if (varonce1308) {
var1309 = varonce1308;
} else {
var1310 = "object_id";
var1311 = 9;
var1312 = string__NativeString__to_s_with_length(var1310, var1311);
var1309 = var1312;
varonce1308 = var1309;
}
{
var1314 = string__FlatString___61d_61d(var_pname, var1309);
var1313 = var1314;
}
if (var1313){
if (varonce1315) {
var1316 = varonce1315;
} else {
var1317 = "(long)";
var1318 = 6;
var1319 = string__NativeString__to_s_with_length(var1317, var1318);
var1316 = var1319;
varonce1315 = var1316;
}
{
var1320 = abstract_collection__SequenceRead__first(var_arguments);
}
var1321 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1321 = array_instance Array[Object] */
var1322 = 2;
var1323 = NEW_array__NativeArray(var1322, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1323)->values[0] = (val*) var1316;
((struct instance_array__NativeArray*)var1323)->values[1] = (val*) var1320;
{
((void (*)(val*, val*, long))(var1321->class->vft[COLOR_array__Array__with_native]))(var1321, var1323, var1322) /* with_native on <var1321:Array[Object]>*/;
}
}
{
var1324 = ((val* (*)(val*))(var1321->class->vft[COLOR_string__Object__to_s]))(var1321) /* to_s on <var1321:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2036);
show_backtrace(1);
}
{
var1325 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1324, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1325); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1326) {
var1327 = varonce1326;
} else {
var1328 = "is_same_type";
var1329 = 12;
var1330 = string__NativeString__to_s_with_length(var1328, var1329);
var1327 = var1330;
varonce1326 = var1327;
}
{
var1332 = string__FlatString___61d_61d(var_pname, var1327);
var1331 = var1332;
}
if (var1331){
var1333 = 0;
{
var1334 = array__Array___91d_93d(var_arguments, var1333);
}
var1335 = 1;
{
var1336 = array__Array___91d_93d(var_arguments, var1335);
}
{
var1337 = separate_compiler__SeparateCompilerVisitor__is_same_type_test(var_v, var1334, var1336);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1337); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1338) {
var1339 = varonce1338;
} else {
var1340 = "is_same_instance";
var1341 = 16;
var1342 = string__NativeString__to_s_with_length(var1340, var1341);
var1339 = var1342;
varonce1338 = var1339;
}
{
var1344 = string__FlatString___61d_61d(var_pname, var1339);
var1343 = var1344;
}
if (var1343){
var1345 = 0;
{
var1346 = array__Array___91d_93d(var_arguments, var1345);
}
var1347 = 1;
{
var1348 = array__Array___91d_93d(var_arguments, var1347);
}
{
var1349 = separate_compiler__SeparateCompilerVisitor__equal_test(var_v, var1346, var1348);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1349); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1350) {
var1351 = varonce1350;
} else {
var1352 = "output_class_name";
var1353 = 17;
var1354 = string__NativeString__to_s_with_length(var1352, var1353);
var1351 = var1354;
varonce1350 = var1351;
}
{
var1356 = string__FlatString___61d_61d(var_pname, var1351);
var1355 = var1356;
}
if (var1355){
{
var1357 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var1358 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1357) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_nat = var1358;
if (varonce1359) {
var1360 = varonce1359;
} else {
var1361 = "printf(\"%s\\n\", ";
var1362 = 15;
var1363 = string__NativeString__to_s_with_length(var1361, var1362);
var1360 = var1363;
varonce1359 = var1360;
}
if (varonce1364) {
var1365 = varonce1364;
} else {
var1366 = ");";
var1367 = 2;
var1368 = string__NativeString__to_s_with_length(var1366, var1367);
var1365 = var1368;
varonce1364 = var1365;
}
var1369 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1369 = array_instance Array[Object] */
var1370 = 3;
var1371 = NEW_array__NativeArray(var1370, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1371)->values[0] = (val*) var1360;
((struct instance_array__NativeArray*)var1371)->values[1] = (val*) var_nat;
((struct instance_array__NativeArray*)var1371)->values[2] = (val*) var1365;
{
((void (*)(val*, val*, long))(var1369->class->vft[COLOR_array__Array__with_native]))(var1369, var1371, var1370) /* with_native on <var1369:Array[Object]>*/;
}
}
{
var1372 = ((val* (*)(val*))(var1369->class->vft[COLOR_string__Object__to_s]))(var1369) /* to_s on <var1369:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1372); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1373) {
var1374 = varonce1373;
} else {
var1375 = "native_class_name";
var1376 = 17;
var1377 = string__NativeString__to_s_with_length(var1375, var1376);
var1374 = var1377;
varonce1373 = var1374;
}
{
var1379 = string__FlatString___61d_61d(var_pname, var1374);
var1378 = var1379;
}
if (var1378){
{
var1380 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var1381 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1380) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_nat1382 = var1381;
if (varonce1383) {
var1384 = varonce1383;
} else {
var1385 = "(char*)";
var1386 = 7;
var1387 = string__NativeString__to_s_with_length(var1385, var1386);
var1384 = var1387;
varonce1383 = var1384;
}
var1388 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1388 = array_instance Array[Object] */
var1389 = 2;
var1390 = NEW_array__NativeArray(var1389, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1390)->values[0] = (val*) var1384;
((struct instance_array__NativeArray*)var1390)->values[1] = (val*) var_nat1382;
{
((void (*)(val*, val*, long))(var1388->class->vft[COLOR_array__Array__with_native]))(var1388, var1390, var1389) /* with_native on <var1388:Array[Object]>*/;
}
}
{
var1391 = ((val* (*)(val*))(var1388->class->vft[COLOR_string__Object__to_s]))(var1388) /* to_s on <var1388:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2050);
show_backtrace(1);
}
{
var1392 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1391, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1392); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1393) {
var1394 = varonce1393;
} else {
var1395 = "force_garbage_collection";
var1396 = 24;
var1397 = string__NativeString__to_s_with_length(var1395, var1396);
var1394 = var1397;
varonce1393 = var1394;
}
{
var1399 = string__FlatString___61d_61d(var_pname, var1394);
var1398 = var1399;
}
if (var1398){
if (varonce1400) {
var1401 = varonce1400;
} else {
var1402 = "nit_gcollect();";
var1403 = 15;
var1404 = string__NativeString__to_s_with_length(var1402, var1403);
var1401 = var1404;
varonce1400 = var1401;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1401); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1405) {
var1406 = varonce1405;
} else {
var1407 = "native_argc";
var1408 = 11;
var1409 = string__NativeString__to_s_with_length(var1407, var1408);
var1406 = var1409;
varonce1405 = var1406;
}
{
var1411 = string__FlatString___61d_61d(var_pname, var1406);
var1410 = var1411;
}
if (var1410){
if (varonce1412) {
var1413 = varonce1412;
} else {
var1414 = "glob_argc";
var1415 = 9;
var1416 = string__NativeString__to_s_with_length(var1414, var1415);
var1413 = var1416;
varonce1412 = var1413;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2056);
show_backtrace(1);
}
{
var1417 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1413, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1417); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce1418) {
var1419 = varonce1418;
} else {
var1420 = "native_argv";
var1421 = 11;
var1422 = string__NativeString__to_s_with_length(var1420, var1421);
var1419 = var1422;
varonce1418 = var1419;
}
{
var1424 = string__FlatString___61d_61d(var_pname, var1419);
var1423 = var1424;
}
if (var1423){
if (varonce1425) {
var1426 = varonce1425;
} else {
var1427 = "glob_argv[";
var1428 = 10;
var1429 = string__NativeString__to_s_with_length(var1427, var1428);
var1426 = var1429;
varonce1425 = var1426;
}
var1430 = 1;
{
var1431 = array__Array___91d_93d(var_arguments, var1430);
}
if (varonce1432) {
var1433 = varonce1432;
} else {
var1434 = "]";
var1435 = 1;
var1436 = string__NativeString__to_s_with_length(var1434, var1435);
var1433 = var1436;
varonce1432 = var1433;
}
var1437 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1437 = array_instance Array[Object] */
var1438 = 3;
var1439 = NEW_array__NativeArray(var1438, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1439)->values[0] = (val*) var1426;
((struct instance_array__NativeArray*)var1439)->values[1] = (val*) var1431;
((struct instance_array__NativeArray*)var1439)->values[2] = (val*) var1433;
{
((void (*)(val*, val*, long))(var1437->class->vft[COLOR_array__Array__with_native]))(var1437, var1439, var1438) /* with_native on <var1437:Array[Object]>*/;
}
}
{
var1440 = ((val* (*)(val*))(var1437->class->vft[COLOR_string__Object__to_s]))(var1437) /* to_s on <var1437:Array[Object]>*/;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2059);
show_backtrace(1);
}
{
var1441 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1440, var_ret);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var1441); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
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
if (varonce1442) {
var1443 = varonce1442;
} else {
var1444 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var1445 = 33;
var1446 = string__NativeString__to_s_with_length(var1444, var1445);
var1443 = var1446;
varonce1442 = var1443;
}
{
var1447 = string__Object__class_name(self);
}
if (varonce1448) {
var1449 = varonce1448;
} else {
var1450 = ":";
var1451 = 1;
var1452 = string__NativeString__to_s_with_length(var1450, var1451);
var1449 = var1452;
varonce1448 = var1449;
}
if (varonce1453) {
var1454 = varonce1453;
} else {
var1455 = " at ";
var1456 = 4;
var1457 = string__NativeString__to_s_with_length(var1455, var1456);
var1454 = var1457;
varonce1453 = var1454;
}
{
var1458 = parser_nodes__ANode__location(self);
}
{
var1459 = location__Location__to_s(var1458);
}
if (varonce1460) {
var1461 = varonce1460;
} else {
var1462 = "\\n\");";
var1463 = 5;
var1464 = string__NativeString__to_s_with_length(var1462, var1463);
var1461 = var1464;
varonce1460 = var1461;
}
var1465 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1465 = array_instance Array[Object] */
var1466 = 7;
var1467 = NEW_array__NativeArray(var1466, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1467)->values[0] = (val*) var1443;
((struct instance_array__NativeArray*)var1467)->values[1] = (val*) var1447;
((struct instance_array__NativeArray*)var1467)->values[2] = (val*) var1449;
((struct instance_array__NativeArray*)var1467)->values[3] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var1467)->values[4] = (val*) var1454;
((struct instance_array__NativeArray*)var1467)->values[5] = (val*) var1459;
((struct instance_array__NativeArray*)var1467)->values[6] = (val*) var1461;
{
((void (*)(val*, val*, long))(var1465->class->vft[COLOR_array__Array__with_native]))(var1465, var1467, var1466) /* with_native on <var1465:Array[Object]>*/;
}
}
{
var1468 = ((val* (*)(val*))(var1465->class->vft[COLOR_string__Object__to_s]))(var1465) /* to_s on <var1465:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1468); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce1469) {
var1470 = varonce1469;
} else {
var1471 = "Not implemented ";
var1472 = 16;
var1473 = string__NativeString__to_s_with_length(var1471, var1472);
var1470 = var1473;
varonce1469 = var1470;
}
var1474 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1474 = array_instance Array[Object] */
var1475 = 2;
var1476 = NEW_array__NativeArray(var1475, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1476)->values[0] = (val*) var1470;
((struct instance_array__NativeArray*)var1476)->values[1] = (val*) var_mpropdef;
{
((void (*)(val*, val*, long))(var1474->class->vft[COLOR_array__Array__with_native]))(var1474, var1476, var1475) /* with_native on <var1474:Array[Object]>*/;
}
}
{
var1477 = ((val* (*)(val*))(var1474->class->vft[COLOR_string__Object__to_s]))(var1474) /* to_s on <var1474:Array[Object]>*/;
}
{
parser_nodes__ANode__debug(self, var1477); /* Direct call parser_nodes#ANode#debug on <self:AMethPropdef>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AMethPropdef#compile_intern_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AMethPropdef__compile_intern_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AMethPropdef__compile_intern_to_c(self, p0, p1, p2); /* Direct call abstract_compiler#AMethPropdef#compile_intern_to_c on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method abstract_compiler#AMethPropdef#compile_externmeth_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AMethPropdef__compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable TString */;
val* var_nextern /* var nextern: nullable TString */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : Location */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
long var34 /* : Int */;
val* var35 /* : String */;
long var36 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var43 /* : Int */;
val* var44 /* : String */;
val* var_externname /* var externname: nullable Object */;
val* var45 /* : Location */;
val* var46 /* : nullable SourceFile */;
val* var48 /* : nullable SourceFile */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other53 /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : Location */;
val* var58 /* : nullable SourceFile */;
val* var60 /* : nullable SourceFile */;
val* var61 /* : String */;
val* var63 /* : String */;
val* var_file /* var file: String */;
val* var64 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var65 /* : nullable MSignature */;
val* var67 /* : nullable MSignature */;
val* var68 /* : nullable MType */;
val* var70 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var71 /* : null */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : nullable Object */;
val* var79 /* : MType */;
val* var80 /* : RuntimeVariable */;
val* var81 /* : null */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
val* var129 /* : Array[Object] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[Object] */;
val* var132 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
var = parser_nodes__AMethPropdef__n_extern(self);
}
var_nextern = var;
var1 = NULL;
if (var_nextern == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nextern,var1) on <var_nextern:nullable TString> */
var_other = var1;
{
{ /* Inline kernel#Object#is_same_instance (var_nextern,var_other) on <var_nextern:nullable TString(TString)> */
var7 = var_nextern == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
if (varonce) {
var8 = varonce;
} else {
var9 = "PRINT_ERROR(\"NOT YET IMPLEMENTED nitni for ";
var10 = 43;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = " at ";
var15 = 4;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
{
var17 = parser_nodes__ANode__location(self);
}
{
var18 = location__Location__to_s(var17);
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "\\n\");";
var22 = 5;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 5;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var13;
((struct instance_array__NativeArray*)var26)->values[3] = (val*) var18;
((struct instance_array__NativeArray*)var26)->values[4] = (val*) var20;
{
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "show_backtrace(1);";
var31 = 18;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var33 = lexer_work__Token__text(var_nextern);
}
var34 = 1;
{
var35 = lexer_work__Token__text(var_nextern);
}
{
{ /* Inline string#FlatText#length (var35) on <var35:String> */
var38 = var35->attrs[COLOR_string__FlatText___length].l; /* _length on <var35:String> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = 2;
{
{ /* Inline kernel#Int#- (var36,var39) on <var36:Int> */
/* Covariant cast for argument 0 (i) <var39:Int> isa OTHER */
/* <var39:Int> isa OTHER */
var42 = 1; /* easy <var39:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var43 = var36 - var39;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
var44 = string__FlatString__substring(var33, var34, var40);
}
var_externname = var44;
{
var45 = parser_nodes__ANode__location(self);
}
{
{ /* Inline location#Location#file (var45) on <var45:Location> */
var48 = var45->attrs[COLOR_location__Location___file].val; /* _file on <var45:Location> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = NULL;
if (var46 == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var46,var49) on <var46:nullable SourceFile> */
var_other53 = var49;
{
var55 = ((short int (*)(val*, val*))(var46->class->vft[COLOR_kernel__Object___61d_61d]))(var46, var_other53) /* == on <var46:nullable SourceFile(SourceFile)>*/;
var54 = var55;
}
var56 = !var54;
var51 = var56;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
{
var57 = parser_nodes__ANode__location(self);
}
{
{ /* Inline location#Location#file (var57) on <var57:Location> */
var60 = var57->attrs[COLOR_location__Location___file].val; /* _file on <var57:Location> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2077);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var58) on <var58:nullable SourceFile> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var63 = var58->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var58:nullable SourceFile> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_file = var61;
{
abstract_compiler__AbstractCompilerVisitor__add_extern(var_v, var_file); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
var64 = NULL;
var_res = var64;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var67 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (var65 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2081);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var65) on <var65:nullable MSignature> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1455);
show_backtrace(1);
}
var70 = var65->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var65:nullable MSignature> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_ret = var68;
var71 = NULL;
if (var_ret == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var71) on <var_ret:nullable MType> */
var_other53 = var71;
{
var76 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other53) /* == on <var_ret:nullable MType(MType)>*/;
var75 = var76;
}
var77 = !var75;
var73 = var77;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
if (var72){
{
var78 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var79 = abstract_compiler__AbstractCompilerVisitor__resolve_for(var_v, var_ret, var78);
}
var_ret = var79;
{
var80 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_ret);
}
var_res = var80;
} else {
}
{
separate_compiler__SeparateCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
var81 = NULL;
if (var_res == NULL) {
var82 = 1; /* is null */
} else {
var82 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var81) on <var_res:nullable RuntimeVariable> */
var_other = var81;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var87 = var_res == var_other;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
if (var82){
if (varonce88) {
var89 = varonce88;
} else {
var90 = "(";
var91 = 1;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = ", ";
var96 = 2;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
{
var98 = string__Collection__join(var_arguments, var94);
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = ");";
var102 = 2;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
var104 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 4;
var106 = NEW_array__NativeArray(var105, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var106)->values[0] = (val*) var_externname;
((struct instance_array__NativeArray*)var106)->values[1] = (val*) var89;
((struct instance_array__NativeArray*)var106)->values[2] = (val*) var98;
((struct instance_array__NativeArray*)var106)->values[3] = (val*) var100;
{
((void (*)(val*, val*, long))(var104->class->vft[COLOR_array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
}
{
var107 = ((val* (*)(val*))(var104->class->vft[COLOR_string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var107); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce108) {
var109 = varonce108;
} else {
var110 = " = ";
var111 = 3;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "(";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = ", ";
var121 = 2;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
{
var123 = string__Collection__join(var_arguments, var119);
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = ");";
var127 = 2;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var129 = array_instance Array[Object] */
var130 = 6;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var131)->values[1] = (val*) var109;
((struct instance_array__NativeArray*)var131)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var131)->values[3] = (val*) var114;
((struct instance_array__NativeArray*)var131)->values[4] = (val*) var123;
((struct instance_array__NativeArray*)var131)->values[5] = (val*) var125;
{
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[Object]>*/;
}
}
{
var132 = ((val* (*)(val*))(var129->class->vft[COLOR_string__Object__to_s]))(var129) /* to_s on <var129:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var132); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
}
RET_LABEL:;
}
/* method abstract_compiler#AMethPropdef#compile_externmeth_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AMethPropdef__compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AMethPropdef__compile_externmeth_to_c(self, p0, p1, p2); /* Direct call abstract_compiler#AMethPropdef#compile_externmeth_to_c on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method abstract_compiler#AMethPropdef#compile_externinit_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AMethPropdef__compile_externinit_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable TString */;
val* var_nextern /* var nextern: nullable TString */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : Location */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
long var34 /* : Int */;
val* var35 /* : String */;
long var36 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var43 /* : Int */;
val* var44 /* : String */;
val* var_externname /* var externname: nullable Object */;
val* var45 /* : Location */;
val* var46 /* : nullable SourceFile */;
val* var48 /* : nullable SourceFile */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other53 /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : Location */;
val* var58 /* : nullable SourceFile */;
val* var60 /* : nullable SourceFile */;
val* var61 /* : String */;
val* var63 /* : String */;
val* var_file /* var file: String */;
val* var64 /* : nullable Object */;
val* var65 /* : MType */;
val* var67 /* : MType */;
val* var_ret /* var ret: MType */;
val* var68 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var69 /* : nullable Object */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
val* var91 /* : Array[Object] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[Object] */;
val* var94 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
var = parser_nodes__AMethPropdef__n_extern(self);
}
var_nextern = var;
var1 = NULL;
if (var_nextern == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nextern,var1) on <var_nextern:nullable TString> */
var_other = var1;
{
{ /* Inline kernel#Object#is_same_instance (var_nextern,var_other) on <var_nextern:nullable TString(TString)> */
var7 = var_nextern == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
if (varonce) {
var8 = varonce;
} else {
var9 = "PRINT_ERROR(\"NOT YET IMPLEMENTED nitni for ";
var10 = 43;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = " at ";
var15 = 4;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
{
var17 = parser_nodes__ANode__location(self);
}
{
var18 = location__Location__to_s(var17);
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "\\n\");";
var22 = 5;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 5;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var13;
((struct instance_array__NativeArray*)var26)->values[3] = (val*) var18;
((struct instance_array__NativeArray*)var26)->values[4] = (val*) var20;
{
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "show_backtrace(1);";
var31 = 18;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var33 = lexer_work__Token__text(var_nextern);
}
var34 = 1;
{
var35 = lexer_work__Token__text(var_nextern);
}
{
{ /* Inline string#FlatText#length (var35) on <var35:String> */
var38 = var35->attrs[COLOR_string__FlatText___length].l; /* _length on <var35:String> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = 2;
{
{ /* Inline kernel#Int#- (var36,var39) on <var36:Int> */
/* Covariant cast for argument 0 (i) <var39:Int> isa OTHER */
/* <var39:Int> isa OTHER */
var42 = 1; /* easy <var39:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var43 = var36 - var39;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
var44 = string__FlatString__substring(var33, var34, var40);
}
var_externname = var44;
{
var45 = parser_nodes__ANode__location(self);
}
{
{ /* Inline location#Location#file (var45) on <var45:Location> */
var48 = var45->attrs[COLOR_location__Location___file].val; /* _file on <var45:Location> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = NULL;
if (var46 == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var46,var49) on <var46:nullable SourceFile> */
var_other53 = var49;
{
var55 = ((short int (*)(val*, val*))(var46->class->vft[COLOR_kernel__Object___61d_61d]))(var46, var_other53) /* == on <var46:nullable SourceFile(SourceFile)>*/;
var54 = var55;
}
var56 = !var54;
var51 = var56;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
{
var57 = parser_nodes__ANode__location(self);
}
{
{ /* Inline location#Location#file (var57) on <var57:Location> */
var60 = var57->attrs[COLOR_location__Location___file].val; /* _file on <var57:Location> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2107);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var58) on <var58:nullable SourceFile> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var63 = var58->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var58:nullable SourceFile> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_file = var61;
{
abstract_compiler__AbstractCompilerVisitor__add_extern(var_v, var_file); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
separate_compiler__SeparateCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
var64 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var64) on <var64:nullable Object(RuntimeVariable)> */
var67 = var64->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var64:nullable Object(RuntimeVariable)> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_ret = var65;
{
var68 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_ret);
}
var_res = var68;
{
var69 = array__AbstractArray__shift(var_arguments);
}
var69;
if (varonce70) {
var71 = varonce70;
} else {
var72 = " = ";
var73 = 3;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = "(";
var78 = 1;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = ", ";
var83 = 2;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{
var85 = string__Collection__join(var_arguments, var81);
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = ");";
var89 = 2;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 6;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var93)->values[1] = (val*) var71;
((struct instance_array__NativeArray*)var93)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var93)->values[3] = (val*) var76;
((struct instance_array__NativeArray*)var93)->values[4] = (val*) var85;
((struct instance_array__NativeArray*)var93)->values[5] = (val*) var87;
{
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
}
{
var94 = ((val* (*)(val*))(var91->class->vft[COLOR_string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var94); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AMethPropdef#compile_externinit_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AMethPropdef__compile_externinit_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AMethPropdef__compile_externinit_to_c(self, p0, p1, p2); /* Direct call abstract_compiler#AMethPropdef#compile_externinit_to_c on <self:Object(AMethPropdef)>*/
RET_LABEL:;
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
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable MPropDef */;
val* var29 /* : nullable MPropDef */;
val* var30 /* : nullable MType */;
val* var32 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var33 /* : Bool */;
val* var34 /* : String */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var_ /* var : Bool */;
short int var41 /* : Bool */;
int cltype;
int idtype;
short int var42 /* : Bool */;
short int var_useiset /* var useiset: Bool */;
val* var43 /* : nullable MAttributeDef */;
val* var45 /* : nullable MAttributeDef */;
val* var46 /* : MProperty */;
val* var48 /* : MProperty */;
val* var_guard /* var guard: MAttribute */;
val* var49 /* : nullable MPropDef */;
val* var51 /* : nullable MPropDef */;
val* var52 /* : MProperty */;
val* var54 /* : MProperty */;
val* var55 /* : nullable Object */;
val* var56 /* : RuntimeVariable */;
val* var_set /* var set: nullable Object */;
val* var57 /* : nullable Object */;
val* var58 /* : RuntimeVariable */;
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
val* var73 /* : nullable MPropDef */;
val* var75 /* : nullable MPropDef */;
val* var76 /* : MProperty */;
val* var78 /* : MProperty */;
val* var79 /* : nullable Object */;
val* var80 /* : RuntimeVariable */;
val* var_res /* var res: nullable Object */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : nullable MPropDef */;
val* var88 /* : nullable MPropDef */;
val* var89 /* : nullable MType */;
val* var91 /* : nullable MType */;
val* var92 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var93 /* : nullable MPropDef */;
val* var95 /* : nullable MPropDef */;
val* var96 /* : MProperty */;
val* var98 /* : MProperty */;
val* var99 /* : nullable Object */;
short int var100 /* : Bool */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : MClassType */;
val* var107 /* : RuntimeVariable */;
val* var_true_v /* var true_v: RuntimeVariable */;
val* var108 /* : nullable Object */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
val* var114 /* : nullable MPropDef */;
val* var116 /* : nullable MPropDef */;
val* var117 /* : MProperty */;
val* var119 /* : MProperty */;
val* var120 /* : nullable Object */;
val* var121 /* : RuntimeVariable */;
val* var122 /* : nullable Frame */;
val* var124 /* : nullable Frame */;
val* var125 /* : nullable RuntimeVariable */;
val* var127 /* : nullable RuntimeVariable */;
val* var128 /* : nullable MMethodDef */;
val* var130 /* : nullable MMethodDef */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
long var137 /* : Int */;
long var138 /* : Int */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
val* var143 /* : nullable MPropDef */;
val* var145 /* : nullable MPropDef */;
val* var146 /* : MProperty */;
val* var148 /* : MProperty */;
val* var149 /* : nullable Object */;
long var150 /* : Int */;
val* var151 /* : nullable Object */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : nullable MPropDef */;
val* var157 /* : nullable MPropDef */;
val* var158 /* : nullable MType */;
val* var160 /* : nullable MType */;
val* var_ret161 /* var ret: nullable MType */;
short int var162 /* : Bool */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : FlatString */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var_171 /* var : Bool */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
short int var175 /* : Bool */;
short int var_useiset176 /* var useiset: Bool */;
short int var177 /* : Bool */;
val* var178 /* : nullable MAttributeDef */;
val* var180 /* : nullable MAttributeDef */;
val* var181 /* : MProperty */;
val* var183 /* : MProperty */;
val* var184 /* : nullable Object */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : FlatString */;
val* var190 /* : MClassType */;
val* var191 /* : RuntimeVariable */;
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
var9 = array__AbstractArrayRead__length(var_arguments);
}
var10 = 1;
{
{ /* Inline kernel#Int#== (var9,var10) on <var9:Int> */
var14 = var9 == var10;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2125);
show_backtrace(1);
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var17 = self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var18 = parser_nodes__AAttrPropdef__n_expr(self);
}
var_nexpr = var18;
var19 = NULL;
if (var_nexpr == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var19) on <var_nexpr:nullable AExpr> */
var_other23 = var19;
{
var25 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other23) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var24 = var25;
}
var26 = !var24;
var21 = var26;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2129);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var29 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2131);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var27) on <var27:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1963);
show_backtrace(1);
}
var32 = var27->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var27:nullable MPropDef(nullable MAttributeDef)> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_ret = var30;
if (var_ret == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2132);
show_backtrace(1);
} else {
var34 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType>*/;
}
if (varonce) {
var35 = varonce;
} else {
var36 = "val*";
var37 = 4;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce = var35;
}
{
var40 = string__FlatString___61d_61d(var34, var35);
var39 = var40;
}
var_ = var39;
if (var39){
/* <var_ret:nullable MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(var_ret == NULL) {
var41 = 0;
} else {
if(cltype >= var_ret->type->table_size) {
var41 = 0;
} else {
var41 = var_ret->type->type_table[cltype] == idtype;
}
}
var42 = !var41;
var33 = var42;
} else {
var33 = var_;
}
var_useiset = var33;
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var45 = self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2133);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var43) on <var43:nullable MAttributeDef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var48 = var43->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var43:nullable MAttributeDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_guard = var46;
if (var_useiset){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var51 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (var49 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2135);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var49) on <var49:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var54 = var49->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var49:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var56 = separate_compiler__SeparateCompilerVisitor__isset_attribute(var_v, var52, var55);
}
var_set = var56;
} else {
{
var57 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var58 = separate_compiler__SeparateCompilerVisitor__read_attribute(var_v, var_guard, var57);
}
var_set = var58;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "if(likely(";
var62 = 10;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = ")) {";
var67 = 4;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var_set;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var65;
{
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var75 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (var73 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2140);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var73) on <var73:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var78 = var73->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var73:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var80 = separate_compiler__SeparateCompilerVisitor__read_attribute(var_v, var76, var79);
}
var_res = var80;
if (varonce81) {
var82 = varonce81;
} else {
var83 = "} else {";
var84 = 8;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var82); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var88 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (var86 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2142);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var86) on <var86:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1963);
show_backtrace(1);
}
var91 = var86->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var86:nullable MPropDef(nullable MAttributeDef)> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_nexpr, var89);
}
var_value = var92;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var95 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (var93 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2143);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var93) on <var93:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var98 = var93->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var93:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = abstract_collection__SequenceRead__first(var_arguments);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var96, var99, var_value); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var_value); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var100 = !var_useiset;
if (var100){
if (varonce101) {
var102 = varonce101;
} else {
var103 = "1";
var104 = 1;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
var106 = abstract_compiler__AbstractCompilerVisitor__bool_type(var_v);
}
{
var107 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var102, var106);
}
var_true_v = var107;
{
var108 = abstract_collection__SequenceRead__first(var_arguments);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var_guard, var108, var_true_v); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = "}";
var112 = 1;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var110); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var116 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
if (var114 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2151);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var114) on <var114:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var119 = var114->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var114:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var121 = separate_compiler__SeparateCompilerVisitor__read_attribute(var_v, var117, var120);
}
var_res = var121;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var124 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
if (var122 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2153);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#returnvar (var122) on <var122:nullable Frame> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1541);
show_backtrace(1);
}
var127 = var122->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var122:nullable Frame> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2153);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var125, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var130 = self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var128) on <var_mpropdef:MMethodDef> */
var_other = var128;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var136 = var_mpropdef == var_other;
var134 = var136;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
var132 = var134;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
var131 = var132;
}
if (var131){
{
var137 = array__AbstractArrayRead__length(var_arguments);
}
var138 = 2;
{
{ /* Inline kernel#Int#== (var137,var138) on <var137:Int> */
var142 = var137 == var138;
var140 = var142;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
var139 = var140;
}
if (unlikely(!var139)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2155);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var145 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
if (var143 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2156);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var143) on <var143:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var148 = var143->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var143:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
var149 = abstract_collection__SequenceRead__first(var_arguments);
}
var150 = 1;
{
var151 = array__Array___91d_93d(var_arguments, var150);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var146, var149, var151); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var154 = self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var152 = var154;
RET_LABEL153:(void)0;
}
}
if (var152){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var157 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
if (var155 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2158);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var155) on <var155:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1963);
show_backtrace(1);
}
var160 = var155->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var155:nullable MPropDef(nullable MAttributeDef)> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
var_ret161 = var158;
if (var_ret161 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2159);
show_backtrace(1);
} else {
var163 = ((val* (*)(val*))(var_ret161->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret161) /* ctype on <var_ret161:nullable MType>*/;
}
if (varonce164) {
var165 = varonce164;
} else {
var166 = "val*";
var167 = 4;
var168 = string__NativeString__to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
{
var170 = string__FlatString___61d_61d(var163, var165);
var169 = var170;
}
var_171 = var169;
if (var169){
/* <var_ret161:nullable MType> isa MNullableType */
cltype173 = type_model__MNullableType.color;
idtype174 = type_model__MNullableType.id;
if(var_ret161 == NULL) {
var172 = 0;
} else {
if(cltype173 >= var_ret161->type->table_size) {
var172 = 0;
} else {
var172 = var_ret161->type->type_table[cltype173] == idtype174;
}
}
var175 = !var172;
var162 = var175;
} else {
var162 = var_171;
}
var_useiset176 = var162;
var177 = !var_useiset176;
if (var177){
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var180 = self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var178 = var180;
RET_LABEL179:(void)0;
}
}
if (var178 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2161);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var178) on <var178:nullable MAttributeDef> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var183 = var178->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var178:nullable MAttributeDef> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
var184 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = "1";
var188 = 1;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
{
var190 = abstract_compiler__AbstractCompilerVisitor__bool_type(var_v);
}
{
var191 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var186, var190);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var181, var184, var191); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2165);
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
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable ANode */;
val* var15 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var17 /* : nullable Frame */;
val* var19 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
val* var20 /* : Frame */;
val* var21 /* : nullable MPropDef */;
val* var23 /* : nullable MPropDef */;
val* var24 /* : MType */;
val* var26 /* : MType */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var28 /* : Array[RuntimeVariable] */;
long var29 /* : Int */;
val* var_30 /* var : Array[RuntimeVariable] */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const struct type* type_struct;
const char* var_class_name35;
val* var_frame /* var frame: Frame */;
val* var37 /* : nullable MPropDef */;
val* var39 /* : nullable MPropDef */;
val* var40 /* : nullable MType */;
val* var42 /* : nullable MType */;
val* var43 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var44 /* : nullable MPropDef */;
val* var46 /* : nullable MPropDef */;
val* var47 /* : MProperty */;
val* var49 /* : MProperty */;
var_v = p0;
var_recv = p1;
{
var = parser_nodes__AAttrPropdef__n_expr(self);
}
var_nexpr = var;
var2 = NULL;
if (var_nexpr == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var2) on <var_nexpr:nullable AExpr> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
var_ = var3;
if (var3){
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var11 = self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = !var9;
var1 = var12;
} else {
var1 = var_;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var15 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_oldnode = var13;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,self) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = self; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var19 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_old_frame = var17;
var20 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var23 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2176);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var26 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
/* <var24:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var24->type->table_size) {
var27 = 0;
} else {
var27 = var24->type->type_table[cltype] == idtype;
}
if (unlikely(!var27)) {
var_class_name = var24 == NULL ? "null" : var24->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2176);
show_backtrace(1);
}
var28 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var29 = 1;
{
array__Array__with_capacity(var28, var29); /* Direct call array#Array#with_capacity on <var28:Array[RuntimeVariable]>*/
}
var_30 = var28;
{
array__AbstractArray__push(var_30, var_recv); /* Direct call array#AbstractArray#push on <var_30:Array[RuntimeVariable]>*/
}
{
{ /* Inline abstract_compiler#Frame#init (var20,var_v,var21,var24,var_30) on <var20:Frame> */
/* Covariant cast for argument 0 (visitor) <var_v:AbstractCompilerVisitor> isa VISITOR */
/* <var_v:AbstractCompilerVisitor> isa VISITOR */
type_struct = var20->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype33 = type_struct->color;
idtype34 = type_struct->id;
if(cltype33 >= var_v->type->table_size) {
var32 = 0;
} else {
var32 = var_v->type->type_table[cltype33] == idtype34;
}
if (unlikely(!var32)) {
var_class_name35 = var_v == NULL ? "null" : var_v->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1523);
show_backtrace(1);
}
var20->attrs[COLOR_abstract_compiler__Frame___visitor].val = var_v; /* _visitor on <var20:Frame> */
var20->attrs[COLOR_abstract_compiler__Frame___mpropdef].val = var21; /* _mpropdef on <var20:Frame> */
var20->attrs[COLOR_abstract_compiler__Frame___receiver].val = var24; /* _receiver on <var20:Frame> */
var20->attrs[COLOR_abstract_compiler__Frame___arguments].val = var_30; /* _arguments on <var20:Frame> */
RET_LABEL31:(void)0;
}
}
var_frame = var20;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL36:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var39 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (var37 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2178);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var37) on <var37:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1963);
show_backtrace(1);
}
var42 = var37->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var37:nullable MPropDef(nullable MAttributeDef)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_nexpr, var40);
}
var_value = var43;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var46 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (var44 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2179);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var44) on <var44:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var49 = var44->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var44:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var47, var_recv, var_value); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_old_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL50:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL51:(void)0;
}
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
val* var9 /* : nullable Collection[MMethod] */;
val* var11 /* : nullable Collection[MMethod] */;
val* var_super_inits /* var super_inits: nullable Collection[MMethod] */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other16 /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_args_of_super /* var args_of_super: Array[RuntimeVariable] */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var25 /* : Bool */;
val* var26 /* : Array[RuntimeVariable] */;
long var27 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var28 /* : nullable Object */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_su /* var su: MMethod */;
val* var32 /* : nullable RuntimeVariable */;
val* var33 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var34 /* : Int */;
long var_i /* var i: Int */;
val* var35 /* : ANodes[APropdef] */;
val* var37 /* : ANodes[APropdef] */;
val* var38 /* : Iterator[ANode] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
short int var_46 /* var : Bool */;
val* var47 /* : nullable AExpr */;
val* var48 /* : null */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : nullable MPropDef */;
val* var62 /* : nullable MPropDef */;
val* var63 /* : MProperty */;
val* var65 /* : MProperty */;
val* var66 /* : nullable Object */;
long var67 /* : Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
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
{ /* Inline modelize_property#AClassdef#super_inits (self) on <self:AClassdef> */
var11 = self->attrs[COLOR_modelize_property__AClassdef___super_inits].val; /* _super_inits on <self:AClassdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_super_inits = var9;
var12 = NULL;
if (var_super_inits == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_super_inits,var12) on <var_super_inits:nullable Collection[MMethod]> */
var_other16 = var12;
{
var18 = ((short int (*)(val*, val*))(var_super_inits->class->vft[COLOR_kernel__Object___61d_61d]))(var_super_inits, var_other16) /* == on <var_super_inits:nullable Collection[MMethod](Collection[MMethod])>*/;
var17 = var18;
}
var19 = !var17;
var14 = var19;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
var_args_of_super = var_arguments;
{
var20 = array__AbstractArrayRead__length(var_arguments);
}
var21 = 1;
{
{ /* Inline kernel#Int#> (var20,var21) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var25 = var20 > var21;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var26 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var27 = 1;
{
array__Array__with_capacity(var26, var27); /* Direct call array#Array#with_capacity on <var26:Array[RuntimeVariable]>*/
}
var_ = var26;
{
var28 = abstract_collection__SequenceRead__first(var_arguments);
}
{
array__AbstractArray__push(var_, var28); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args_of_super = var_;
} else {
}
{
var29 = ((val* (*)(val*))(var_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_inits) /* iterator on <var_super_inits:nullable Collection[MMethod](Collection[MMethod])>*/;
}
for(;;) {
{
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
}
if(!var30) break;
{
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
}
var_su = var31;
{
var32 = separate_compiler__SeparateCompilerVisitor__send(var_v, var_su, var_args_of_super);
}
var32;
CONTINUE_label: (void)0;
{
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
} else {
}
{
var33 = abstract_collection__SequenceRead__first(var_arguments);
}
var_recv = var33;
var34 = 1;
var_i = var34;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AClassdef> */
var37 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AClassdef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 802);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = parser_nodes__ANodes__iterator(var35);
}
for(;;) {
{
var39 = ((short int (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var38) /* is_ok on <var38:Iterator[ANode]>*/;
}
if(!var39) break;
{
var40 = ((val* (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__item]))(var38) /* item on <var38:Iterator[ANode]>*/;
}
var_npropdef = var40;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype44 = type_parser_nodes__AAttrPropdef.color;
idtype45 = type_parser_nodes__AAttrPropdef.id;
if(cltype44 >= var_npropdef->type->table_size) {
var43 = 0;
} else {
var43 = var_npropdef->type->type_table[cltype44] == idtype45;
}
var_46 = var43;
if (var43){
{
var47 = parser_nodes__AAttrPropdef__n_expr(var_npropdef);
}
var48 = NULL;
if (var47 == NULL) {
var49 = 1; /* is null */
} else {
var49 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var47,var48) on <var47:nullable AExpr> */
var_other = var48;
{
{ /* Inline kernel#Object#is_same_instance (var47,var_other) on <var47:nullable AExpr(AExpr)> */
var54 = var47 == var_other;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
var42 = var49;
} else {
var42 = var_46;
}
var_55 = var42;
if (var42){
{
{ /* Inline modelize_property#AAttrPropdef#noinit (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var58 = var_npropdef->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s; /* _noinit on <var_npropdef:APropdef(AAttrPropdef)> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
var59 = !var56;
var41 = var59;
} else {
var41 = var_55;
}
if (var41){
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var62 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (var60 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2219);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var60) on <var60:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var65 = var60->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var60:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = array__Array___91d_93d(var_arguments, var_i);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var63, var_recv, var66); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
var67 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var67) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var67:Int> isa OTHER */
/* <var67:Int> isa OTHER */
var70 = 1; /* easy <var67:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var74 = var_i + var67;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_i = var68;
} else {
}
CONTINUE_label75: (void)0;
{
((void (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__next]))(var38) /* next on <var38:Iterator[ANode]>*/;
}
}
BREAK_label75: (void)0;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2224);
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
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
val* var22 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : null */;
val* var31 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : Array[Object] */;
long var49 /* : Int */;
val* var50 /* : NativeArray[Object] */;
val* var51 /* : String */;
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
var11 = parser_nodes__ANode__location(self);
}
{
var12 = location__Location__to_s(var11);
}
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
var22 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
}
var_mtype = var22;
var23 = NULL;
if (var_mtype == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var23) on <var_mtype:nullable MType> */
var_other = var23;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var29 = var_mtype == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
var30 = NULL;
var = var30;
goto RET_LABEL;
} else {
{
var31 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_mtype);
}
var_res = var31;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "/* ";
var35 = 3;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = " = NOT YET ";
var40 = 11;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
var42 = string__Object__class_name(self);
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = " */";
var46 = 3;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var48 = array_instance Array[Object] */
var49 = 5;
var50 = NEW_array__NativeArray(var49, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var50)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var50)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var50)->values[2] = (val*) var38;
((struct instance_array__NativeArray*)var50)->values[3] = (val*) var42;
((struct instance_array__NativeArray*)var50)->values[4] = (val*) var44;
{
((void (*)(val*, val*, long))(var48->class->vft[COLOR_array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Object]>*/;
}
}
{
var51 = ((val* (*)(val*))(var48->class->vft[COLOR_string__Object__to_s]))(var48) /* to_s on <var48:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var51); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
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
val* var_res /* var res: nullable RuntimeVariable */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
val* var12 /* : Array[Object] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Object] */;
val* var15 /* : String */;
var_v = p0;
{
var = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AExpr__expr]))(self, var_v) /* expr on <self:AExpr>*/;
}
var_res = var;
var1 = NULL;
if (var_res == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var1) on <var_res:nullable RuntimeVariable> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
if (varonce) {
var8 = varonce;
} else {
var9 = ";";
var10 = 1;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var12 = array_instance Array[Object] */
var13 = 2;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var14)->values[1] = (val*) var8;
{
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Object]>*/;
}
}
{
var15 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
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
val* var3 /* : Iterator[ANode] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = parser_nodes__ANodes__iterator(var);
}
for(;;) {
{
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[ANode]>*/;
}
if(!var4) break;
{
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[ANode]>*/;
}
var_e = var5;
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
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
val* var8 /* : Iterator[ANode] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : null */;
val* var18 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = parser_nodes__ANodes__iterator(var5);
}
for(;;) {
{
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[ANode]>*/;
}
if(!var9) break;
{
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[ANode]>*/;
}
var_e = var10;
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
var11 = var12;
}
if (var11){
goto BREAK_label;
} else {
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
var17 = NULL;
{
var18 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_last, var17);
}
var = var18;
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
val* var_ne /* var ne: nullable AExpr */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
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
var2 = self->attrs[COLOR_scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2273);
show_backtrace(1);
}
var_variable = var;
{
var3 = parser_nodes__AVardeclExpr__n_expr(self);
}
var_ne = var3;
var4 = NULL;
if (var_ne == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ne,var4) on <var_ne:nullable AExpr> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_ne->class->vft[COLOR_kernel__Object___61d_61d]))(var_ne, var_other) /* == on <var_ne:nullable AExpr(AExpr)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var13 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_ne, var11);
}
var_i = var14;
{
var15 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var15, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2285);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2286);
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
/* method abstract_compiler#AVarAssignExpr#stmt for (self: AVarAssignExpr, AbstractCompilerVisitor) */
void abstract_compiler__AVarAssignExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var7 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarAssignExpr> */
var2 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2294);
show_backtrace(1);
}
var_variable = var;
{
var3 = parser_nodes__AAssignFormExpr__n_value(self);
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var6 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var3, var4);
}
var_i = var7;
{
var8 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var8, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AVarAssignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AVarAssignExpr__stmt(val* self, val* p0) {
abstract_compiler__AVarAssignExpr__stmt(self, p0); /* Direct call abstract_compiler#AVarAssignExpr#stmt on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AVarAssignExpr#expr for (self: AVarAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AVarAssignExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var4 /* : AExpr */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var9 /* : RuntimeVariable */;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2300);
show_backtrace(1);
}
var_variable = var1;
{
var4 = parser_nodes__AAssignFormExpr__n_value(self);
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var7 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var4, var5);
}
var_i = var8;
{
var9 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var9, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
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
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var9 /* : nullable CallSite */;
val* var11 /* : nullable CallSite */;
val* var12 /* : Array[RuntimeVariable] */;
long var13 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var14 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : RuntimeVariable */;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2310);
show_backtrace(1);
}
var_variable = var;
{
var3 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
var_vari = var3;
{
var4 = parser_nodes__AReassignFormExpr__n_value(self);
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var7 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var4, var5);
}
var_value = var8;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var11 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2313);
show_backtrace(1);
}
var12 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var13 = 2;
{
array__Array__with_capacity(var12, var13); /* Direct call array#Array#with_capacity on <var12:Array[RuntimeVariable]>*/
}
var_ = var12;
{
array__AbstractArray__push(var_, var_vari); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var14 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var9, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var14;
var15 = NULL;
if (var_res == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var15) on <var_res:nullable RuntimeVariable> */
var_other = var15;
{
var20 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var19 = var20;
}
var21 = !var19;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2314);
show_backtrace(1);
}
{
var22 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var22, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2320);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var1) on <var1:nullable Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var1:nullable Frame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
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
/* method abstract_compiler#AContinueExpr#stmt for (self: AContinueExpr, AbstractCompilerVisitor) */
void abstract_compiler__AContinueExpr__stmt(val* self, val* p0) {
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
var1 = "goto CONTINUE_";
var2 = 14;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
{ /* Inline scope#AContinueExpr#escapemark (self) on <self:AContinueExpr> */
var6 = self->attrs[COLOR_scope__AContinueExpr___escapemark].val; /* _escapemark on <self:AContinueExpr> */
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
/* method abstract_compiler#AContinueExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AContinueExpr__stmt(val* self, val* p0) {
abstract_compiler__AContinueExpr__stmt(self, p0); /* Direct call abstract_compiler#AContinueExpr#stmt on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#ABreakExpr#stmt for (self: ABreakExpr, AbstractCompilerVisitor) */
void abstract_compiler__ABreakExpr__stmt(val* self, val* p0) {
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
{ /* Inline scope#ABreakExpr#escapemark (self) on <self:ABreakExpr> */
var6 = self->attrs[COLOR_scope__ABreakExpr___escapemark].val; /* _escapemark on <self:ABreakExpr> */
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
/* method abstract_compiler#ABreakExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ABreakExpr__stmt(val* self, val* p0) {
abstract_compiler__ABreakExpr__stmt(self, p0); /* Direct call abstract_compiler#ABreakExpr#stmt on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: AReturnExpr, AbstractCompilerVisitor) */
void abstract_compiler__AReturnExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Frame */;
val* var10 /* : nullable Frame */;
val* var11 /* : nullable RuntimeVariable */;
val* var13 /* : nullable RuntimeVariable */;
val* var_returnvar /* var returnvar: RuntimeVariable */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : nullable Frame */;
val* var24 /* : nullable Frame */;
val* var25 /* : nullable String */;
val* var27 /* : nullable String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : String */;
var_v = p0;
{
var = parser_nodes__AReturnExpr__n_expr(self);
}
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var1) on <var_nexpr:nullable AExpr> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var10 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2336);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#returnvar (var8) on <var8:nullable Frame> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1541);
show_backtrace(1);
}
var13 = var8->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var8:nullable Frame> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2336);
show_backtrace(1);
}
var_returnvar = var11;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_returnvar) on <var_returnvar:RuntimeVariable> */
var16 = var_returnvar->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_returnvar:RuntimeVariable> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_nexpr, var14);
}
var_i = var17;
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_returnvar, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce) {
var18 = varonce;
} else {
var19 = "goto ";
var20 = 5;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var24 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2340);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#returnlabel (var22) on <var22:nullable Frame> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1544);
show_backtrace(1);
}
var27 = var22->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var22:nullable Frame> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2340);
show_backtrace(1);
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = ";";
var31 = 1;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 3;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var25;
((struct instance_array__NativeArray*)var35)->values[2] = (val*) var29;
{
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
}
{
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
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
val* var1 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
val* var15 /* : nullable AExpr */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : nullable AExpr */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
var_v = p0;
{
var = parser_nodes__AIfExpr__n_expr(self);
}
{
var1 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var);
}
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
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var14); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var15 = parser_nodes__AIfExpr__n_then(self);
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "} else {";
var19 = 8;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var17); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var21 = parser_nodes__AIfExpr__n_else(self);
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "}";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
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
val* var6 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : nullable AExpr */;
val* var21 /* : null */;
val* var22 /* : RuntimeVariable */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : nullable AExpr */;
val* var29 /* : null */;
val* var30 /* : RuntimeVariable */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2361);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
var5 = parser_nodes__AIfExpr__n_expr(self);
}
{
var6 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var5);
}
var_cond = var6;
if (varonce) {
var7 = varonce;
} else {
var8 = "if (";
var9 = 4;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "){";
var14 = 2;
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
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var20 = parser_nodes__AIfExpr__n_then(self);
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2364);
show_backtrace(1);
}
var21 = NULL;
{
var22 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var20, var21);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "} else {";
var26 = 8;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var28 = parser_nodes__AIfExpr__n_else(self);
}
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2366);
show_backtrace(1);
}
var29 = NULL;
{
var30 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var28, var29);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "}";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
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
val* var6 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : AExpr */;
val* var21 /* : null */;
val* var22 /* : RuntimeVariable */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : AExpr */;
val* var29 /* : null */;
val* var30 /* : RuntimeVariable */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 2375);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
var5 = parser_nodes__AIfexprExpr__n_expr(self);
}
{
var6 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var5);
}
var_cond = var6;
if (varonce) {
var7 = varonce;
} else {
var8 = "if (";
var9 = 4;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "){";
var14 = 2;
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
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var20 = parser_nodes__AIfexprExpr__n_then(self);
}
var21 = NULL;
{
var22 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var20, var21);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "} else {";
var26 = 8;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var28 = parser_nodes__AIfexprExpr__n_else(self);
}
var29 = NULL;
{
var30 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var28, var29);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "}";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
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
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
var_v = p0;
{
var = parser_nodes__ADoExpr__n_block(self);
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ADoExpr#escapemark (self) on <self:ADoExpr> */
var3 = self->attrs[COLOR_scope__ADoExpr___escapemark].val; /* _escapemark on <self:ADoExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_escapemark = var1;
var4 = NULL;
if (var_escapemark == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_escapemark,var4) on <var_escapemark:nullable EscapeMark> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_escapemark->class->vft[COLOR_kernel__Object___61d_61d]))(var_escapemark, var_other) /* == on <var_escapemark:nullable EscapeMark(EscapeMark)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
if (varonce) {
var11 = varonce;
} else {
var12 = "BREAK_";
var13 = 6;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
var15 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(var_v, var_escapemark);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = ": (void)0;";
var19 = 10;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var15;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var17;
{
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
}
{
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#ADoExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ADoExpr__stmt(val* self, val* p0) {
abstract_compiler__ADoExpr__stmt(self, p0); /* Direct call abstract_compiler#ADoExpr#stmt on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
