#include "separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompiler#compile_class_to_c for (self: SeparateCompiler, MClass) */
void separate_compiler__SeparateCompiler__compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
val* var /* : MClassDef */;
val* var1 /* : MClassType */;
val* var3 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var4 /* : String */;
val* var_c_name /* var c_name: String */;
val* var5 /* : String */;
val* var_c_instance_name /* var c_instance_name: String */;
val* var6 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var8 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var9 /* : nullable Object */;
val* var_vft /* var vft: Array[nullable MPropDef] */;
val* var10 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var12 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var13 /* : nullable Object */;
val* var_attrs /* var attrs: Array[nullable MPropDef] */;
val* var14 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var15 /* : nullable RapidTypeAnalysis */;
val* var17 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
val* var28 /* : HashSet[MClass] */;
val* var30 /* : HashSet[MClass] */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var_33 /* var : Bool */;
val* var34 /* : String */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
short int var39 /* : Bool */;
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
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var_is_dead /* var is_dead: Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : String */;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
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
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : String */;
long var108 /* : Int */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
val* var114 /* : Array[Object] */;
long var115 /* : Int */;
val* var116 /* : NativeArray[Object] */;
val* var117 /* : Object */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
val* var124 /* : Range[Int] */;
long var125 /* : Int */;
long var126 /* : Int */;
val* var127 /* : Discrete */;
val* var128 /* : Discrete */;
val* var129 /* : Iterator[Discrete] */;
short int var130 /* : Bool */;
val* var131 /* : nullable Object */;
long var_i /* var i: Int */;
long var132 /* : Int */;
val* var133 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
val* var134 /* : null */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
val* var_other138 /* var other: nullable Object */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : FlatString */;
short int var147 /* : Bool */;
int cltype;
int idtype;
short int var148 /* : Bool */;
val* var149 /* : null */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var_156 /* var : Bool */;
val* var157 /* : HashSet[MMethodDef] */;
val* var159 /* : HashSet[MMethodDef] */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
val* var167 /* : MModule */;
val* var169 /* : MModule */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : FlatString */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : FlatString */;
val* var185 /* : Array[Object] */;
long var186 /* : Int */;
val* var187 /* : NativeArray[Object] */;
val* var188 /* : String */;
val* var189 /* : AbstractRuntimeFunction */;
val* var_rf /* var rf: AbstractRuntimeFunction */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
val* var196 /* : String */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : FlatString */;
val* var202 /* : MModule */;
val* var204 /* : MModule */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : FlatString */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
long var213 /* : Int */;
val* var214 /* : FlatString */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : FlatString */;
val* var220 /* : Array[Object] */;
long var221 /* : Int */;
val* var222 /* : NativeArray[Object] */;
val* var223 /* : String */;
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
val* var234 /* : String */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : NativeString */;
long var238 /* : Int */;
val* var239 /* : FlatString */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
val* var247 /* : MClass */;
val* var249 /* : MClass */;
val* var250 /* : String */;
val* var252 /* : String */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
long var256 /* : Int */;
val* var257 /* : FlatString */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
short int var_260 /* var : Bool */;
val* var261 /* : MClass */;
val* var263 /* : MClass */;
val* var264 /* : MClassKind */;
val* var266 /* : MClassKind */;
val* var267 /* : MClassKind */;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
short int var273 /* : Bool */;
val* var274 /* : CodeWriter */;
val* var276 /* : CodeWriter */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
long var280 /* : Int */;
val* var281 /* : FlatString */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
val* var287 /* : Array[Object] */;
long var288 /* : Int */;
val* var289 /* : NativeArray[Object] */;
val* var290 /* : String */;
val* var291 /* : CodeWriter */;
val* var293 /* : CodeWriter */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : NativeString */;
long var297 /* : Int */;
val* var298 /* : FlatString */;
val* var299 /* : CodeWriter */;
val* var301 /* : CodeWriter */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
long var305 /* : Int */;
val* var306 /* : FlatString */;
val* var307 /* : CodeWriter */;
val* var309 /* : CodeWriter */;
val* var310 /* : String */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : FlatString */;
val* var316 /* : Array[Object] */;
long var317 /* : Int */;
val* var318 /* : NativeArray[Object] */;
val* var319 /* : String */;
val* var320 /* : CodeWriter */;
val* var322 /* : CodeWriter */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
long var326 /* : Int */;
val* var327 /* : FlatString */;
val* var328 /* : HashSet[MClassType] */;
val* var330 /* : HashSet[MClassType] */;
short int var331 /* : Bool */;
short int var332 /* : Bool */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : NativeString */;
long var336 /* : Int */;
val* var337 /* : FlatString */;
val* var338 /* : Array[Object] */;
long var339 /* : Int */;
val* var340 /* : NativeArray[Object] */;
val* var341 /* : String */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
long var345 /* : Int */;
val* var346 /* : FlatString */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
long var350 /* : Int */;
val* var351 /* : FlatString */;
val* var352 /* : String */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : NativeString */;
long var356 /* : Int */;
val* var357 /* : FlatString */;
val* var358 /* : Array[Object] */;
long var359 /* : Int */;
val* var360 /* : NativeArray[Object] */;
val* var361 /* : String */;
static val* varonce362;
val* var363 /* : String */;
char* var364 /* : NativeString */;
long var365 /* : Int */;
val* var366 /* : FlatString */;
static val* varonce367;
val* var368 /* : String */;
char* var369 /* : NativeString */;
long var370 /* : Int */;
val* var371 /* : FlatString */;
val* var372 /* : Array[Object] */;
long var373 /* : Int */;
val* var374 /* : NativeArray[Object] */;
val* var375 /* : String */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
long var379 /* : Int */;
val* var380 /* : FlatString */;
val* var381 /* : String */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
long var385 /* : Int */;
val* var386 /* : FlatString */;
val* var387 /* : String */;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : NativeString */;
long var391 /* : Int */;
val* var392 /* : FlatString */;
val* var393 /* : Array[Object] */;
long var394 /* : Int */;
val* var395 /* : NativeArray[Object] */;
val* var396 /* : String */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
long var400 /* : Int */;
val* var401 /* : FlatString */;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : NativeString */;
long var405 /* : Int */;
val* var406 /* : FlatString */;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : NativeString */;
long var410 /* : Int */;
val* var411 /* : FlatString */;
val* var412 /* : Array[Object] */;
long var413 /* : Int */;
val* var414 /* : NativeArray[Object] */;
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
val* var435 /* : Array[Object] */;
long var436 /* : Int */;
val* var437 /* : NativeArray[Object] */;
val* var438 /* : String */;
static val* varonce439;
val* var440 /* : String */;
char* var441 /* : NativeString */;
long var442 /* : Int */;
val* var443 /* : FlatString */;
val* var444 /* : Array[Object] */;
long var445 /* : Int */;
val* var446 /* : NativeArray[Object] */;
val* var447 /* : String */;
static val* varonce448;
val* var449 /* : String */;
char* var450 /* : NativeString */;
long var451 /* : Int */;
val* var452 /* : FlatString */;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : NativeString */;
long var456 /* : Int */;
val* var457 /* : FlatString */;
val* var458 /* : Array[Object] */;
long var459 /* : Int */;
val* var460 /* : NativeArray[Object] */;
val* var461 /* : String */;
static val* varonce462;
val* var463 /* : String */;
char* var464 /* : NativeString */;
long var465 /* : Int */;
val* var466 /* : FlatString */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
long var470 /* : Int */;
val* var471 /* : FlatString */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : NativeString */;
long var475 /* : Int */;
val* var476 /* : FlatString */;
val* var477 /* : String */;
val* var479 /* : String */;
static val* varonce480;
val* var481 /* : String */;
char* var482 /* : NativeString */;
long var483 /* : Int */;
val* var484 /* : FlatString */;
short int var485 /* : Bool */;
short int var486 /* : Bool */;
val* var487 /* : CodeWriter */;
val* var489 /* : CodeWriter */;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : NativeString */;
long var493 /* : Int */;
val* var494 /* : FlatString */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
long var498 /* : Int */;
val* var499 /* : FlatString */;
val* var500 /* : Array[Object] */;
long var501 /* : Int */;
val* var502 /* : NativeArray[Object] */;
val* var503 /* : String */;
val* var504 /* : CodeWriter */;
val* var506 /* : CodeWriter */;
static val* varonce507;
val* var508 /* : String */;
char* var509 /* : NativeString */;
long var510 /* : Int */;
val* var511 /* : FlatString */;
val* var512 /* : CodeWriter */;
val* var514 /* : CodeWriter */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
long var518 /* : Int */;
val* var519 /* : FlatString */;
val* var520 /* : CodeWriter */;
val* var522 /* : CodeWriter */;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : NativeString */;
long var526 /* : Int */;
val* var527 /* : FlatString */;
val* var528 /* : CodeWriter */;
val* var530 /* : CodeWriter */;
static val* varonce531;
val* var532 /* : String */;
char* var533 /* : NativeString */;
long var534 /* : Int */;
val* var535 /* : FlatString */;
val* var536 /* : CodeWriter */;
val* var538 /* : CodeWriter */;
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
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : NativeString */;
long var576 /* : Int */;
val* var577 /* : FlatString */;
val* var578 /* : Array[Object] */;
long var579 /* : Int */;
val* var580 /* : NativeArray[Object] */;
val* var581 /* : String */;
val* var582 /* : String */;
static val* varonce583;
val* var584 /* : String */;
char* var585 /* : NativeString */;
long var586 /* : Int */;
val* var587 /* : FlatString */;
static val* varonce588;
val* var589 /* : String */;
char* var590 /* : NativeString */;
long var591 /* : Int */;
val* var592 /* : FlatString */;
val* var593 /* : Array[Object] */;
long var594 /* : Int */;
val* var595 /* : NativeArray[Object] */;
val* var596 /* : String */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
long var600 /* : Int */;
val* var601 /* : FlatString */;
val* var602 /* : String */;
val* var_res /* var res: String */;
static val* varonce603;
val* var604 /* : String */;
char* var605 /* : NativeString */;
long var606 /* : Int */;
val* var607 /* : FlatString */;
static val* varonce608;
val* var609 /* : String */;
char* var610 /* : NativeString */;
long var611 /* : Int */;
val* var612 /* : FlatString */;
static val* varonce613;
val* var614 /* : String */;
char* var615 /* : NativeString */;
long var616 /* : Int */;
val* var617 /* : FlatString */;
val* var618 /* : Array[Object] */;
long var619 /* : Int */;
val* var620 /* : NativeArray[Object] */;
val* var621 /* : String */;
val* var622 /* : Array[MType] */;
val* var624 /* : Array[MType] */;
val* var625 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
static val* varonce626;
val* var627 /* : String */;
char* var628 /* : NativeString */;
long var629 /* : Int */;
val* var630 /* : FlatString */;
static val* varonce631;
val* var632 /* : String */;
char* var633 /* : NativeString */;
long var634 /* : Int */;
val* var635 /* : FlatString */;
val* var636 /* : String */;
static val* varonce637;
val* var638 /* : String */;
char* var639 /* : NativeString */;
long var640 /* : Int */;
val* var641 /* : FlatString */;
val* var642 /* : Array[Object] */;
long var643 /* : Int */;
val* var644 /* : NativeArray[Object] */;
val* var645 /* : String */;
static val* varonce646;
val* var647 /* : String */;
char* var648 /* : NativeString */;
long var649 /* : Int */;
val* var650 /* : FlatString */;
val* var651 /* : Array[Object] */;
long var652 /* : Int */;
val* var653 /* : NativeArray[Object] */;
val* var654 /* : String */;
static val* varonce655;
val* var656 /* : String */;
char* var657 /* : NativeString */;
long var658 /* : Int */;
val* var659 /* : FlatString */;
static val* varonce660;
val* var661 /* : String */;
char* var662 /* : NativeString */;
long var663 /* : Int */;
val* var664 /* : FlatString */;
val* var665 /* : Array[Object] */;
long var666 /* : Int */;
val* var667 /* : NativeArray[Object] */;
val* var668 /* : String */;
static val* varonce669;
val* var670 /* : String */;
char* var671 /* : NativeString */;
long var672 /* : Int */;
val* var673 /* : FlatString */;
static val* varonce674;
val* var675 /* : String */;
char* var676 /* : NativeString */;
long var677 /* : Int */;
val* var678 /* : FlatString */;
val* var679 /* : Array[Object] */;
long var680 /* : Int */;
val* var681 /* : NativeArray[Object] */;
val* var682 /* : String */;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : NativeString */;
long var686 /* : Int */;
val* var687 /* : FlatString */;
val* var688 /* : Array[Object] */;
long var689 /* : Int */;
val* var690 /* : NativeArray[Object] */;
val* var691 /* : String */;
static val* varonce692;
val* var693 /* : String */;
char* var694 /* : NativeString */;
long var695 /* : Int */;
val* var696 /* : FlatString */;
static val* varonce697;
val* var698 /* : String */;
char* var699 /* : NativeString */;
long var700 /* : Int */;
val* var701 /* : FlatString */;
val* var702 /* : Array[Object] */;
long var703 /* : Int */;
val* var704 /* : NativeArray[Object] */;
val* var705 /* : String */;
static val* varonce706;
val* var707 /* : String */;
char* var708 /* : NativeString */;
long var709 /* : Int */;
val* var710 /* : FlatString */;
static val* varonce711;
val* var712 /* : String */;
char* var713 /* : NativeString */;
long var714 /* : Int */;
val* var715 /* : FlatString */;
val* var716 /* : Array[Object] */;
long var717 /* : Int */;
val* var718 /* : NativeArray[Object] */;
val* var719 /* : String */;
val* var720 /* : String */;
static val* varonce721;
val* var722 /* : String */;
char* var723 /* : NativeString */;
long var724 /* : Int */;
val* var725 /* : FlatString */;
static val* varonce726;
val* var727 /* : String */;
char* var728 /* : NativeString */;
long var729 /* : Int */;
val* var730 /* : FlatString */;
val* var731 /* : Array[Object] */;
long var732 /* : Int */;
val* var733 /* : NativeArray[Object] */;
val* var734 /* : String */;
static val* varonce735;
val* var736 /* : String */;
char* var737 /* : NativeString */;
long var738 /* : Int */;
val* var739 /* : FlatString */;
static val* varonce740;
val* var741 /* : String */;
char* var742 /* : NativeString */;
long var743 /* : Int */;
val* var744 /* : FlatString */;
val* var745 /* : Array[Object] */;
long var746 /* : Int */;
val* var747 /* : NativeArray[Object] */;
val* var748 /* : String */;
val* var749 /* : String */;
static val* varonce750;
val* var751 /* : String */;
char* var752 /* : NativeString */;
long var753 /* : Int */;
val* var754 /* : FlatString */;
static val* varonce755;
val* var756 /* : String */;
char* var757 /* : NativeString */;
long var758 /* : Int */;
val* var759 /* : FlatString */;
val* var760 /* : Array[Object] */;
long var761 /* : Int */;
val* var762 /* : NativeArray[Object] */;
val* var763 /* : String */;
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
val* var778 /* : RuntimeVariable */;
val* var_res779 /* var res: RuntimeVariable */;
short int var780 /* : Bool */;
static val* varonce782;
val* var783 /* : String */;
char* var784 /* : NativeString */;
long var785 /* : Int */;
val* var786 /* : FlatString */;
long var787 /* : Int */;
static val* varonce788;
val* var789 /* : String */;
char* var790 /* : NativeString */;
long var791 /* : Int */;
val* var792 /* : FlatString */;
val* var793 /* : Array[Object] */;
long var794 /* : Int */;
val* var795 /* : NativeArray[Object] */;
val* var796 /* : Object */;
val* var797 /* : String */;
static val* varonce798;
val* var799 /* : String */;
char* var800 /* : NativeString */;
long var801 /* : Int */;
val* var802 /* : FlatString */;
val* var803 /* : Array[Object] */;
long var804 /* : Int */;
val* var805 /* : NativeArray[Object] */;
val* var806 /* : String */;
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
static val* varonce821;
val* var822 /* : String */;
char* var823 /* : NativeString */;
long var824 /* : Int */;
val* var825 /* : FlatString */;
static val* varonce826;
val* var827 /* : String */;
char* var828 /* : NativeString */;
long var829 /* : Int */;
val* var830 /* : FlatString */;
val* var831 /* : Array[Object] */;
long var832 /* : Int */;
val* var833 /* : NativeArray[Object] */;
val* var834 /* : String */;
static val* varonce835;
val* var836 /* : String */;
char* var837 /* : NativeString */;
long var838 /* : Int */;
val* var839 /* : FlatString */;
static val* varonce840;
val* var841 /* : String */;
char* var842 /* : NativeString */;
long var843 /* : Int */;
val* var844 /* : FlatString */;
val* var845 /* : Array[Object] */;
long var846 /* : Int */;
val* var847 /* : NativeArray[Object] */;
val* var848 /* : String */;
static val* varonce849;
val* var850 /* : String */;
char* var851 /* : NativeString */;
long var852 /* : Int */;
val* var853 /* : FlatString */;
var_mclass = p0;
{
var = model__MClass__intro(var_mclass);
}
{
{ /* Inline model#MClassDef#bound_mtype (var) on <var:MClassDef> */
var3 = var->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
{
var4 = abstract_compiler__MClass__c_name(var_mclass);
}
var_c_name = var4;
{
var5 = separate_compiler__MClass__c_instance_name(var_mclass);
}
var_c_instance_name = var5;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var8 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 792);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, var_mclass) /* [] on <var6:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_vft = var9;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var12 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 793);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val* (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var10, var_mclass) /* [] on <var10:Map[MClass, Array[nullable MPropDef]]>*/;
}
var_attrs = var13;
{
var14 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var_v = var14;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var17 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_rta = var15;
var21 = NULL;
if (var_rta == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var21) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var21;
{
var26 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var25 = var26;
}
var27 = !var25;
var23 = var27;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
var_ = var22;
if (var22){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var30 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 64);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = hash_collection__HashSet__has(var28, var_mclass);
}
var32 = !var31;
var20 = var32;
} else {
var20 = var_;
}
var_33 = var20;
if (var20){
{
var34 = abstract_compiler__MClassType__ctype(var_mtype);
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
var19 = var39;
} else {
var19 = var_33;
}
var_41 = var19;
if (var19){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var44 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
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
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
{ /* Inline kernel#Object#!= (var42,var46) on <var42:String> */
var_other = var46;
{
var54 = ((short int (*)(val*, val*))(var42->class->vft[COLOR_kernel__Object___61d_61d]))(var42, var_other) /* == on <var42:String>*/;
var53 = var54;
}
var55 = !var53;
var51 = var55;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
var18 = var50;
} else {
var18 = var_41;
}
var_is_dead = var18;
if (varonce56) {
var57 = varonce56;
} else {
var58 = "/* runtime class ";
var59 = 17;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = " */";
var64 = 3;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 3;
var68 = NEW_array__NativeArray(var67, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var68)->values[0] = (val*) var57;
((struct instance_array__NativeArray*)var68)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var68)->values[2] = (val*) var62;
{
((void (*)(val*, val*, long))(var66->class->vft[COLOR_array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
}
{
var69 = ((val* (*)(val*))(var66->class->vft[COLOR_string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var69); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var70 = !var_is_dead;
if (var70){
if (varonce71) {
var72 = varonce71;
} else {
var73 = "class_";
var74 = 6;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 2;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var72;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "extern const struct class class_";
var83 = 32;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = ";";
var88 = 1;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 3;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var81;
((struct instance_array__NativeArray*)var92)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var92)->values[2] = (val*) var86;
{
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
}
{
var93 = ((val* (*)(val*))(var90->class->vft[COLOR_string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var79, var93); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "const struct class class_";
var97 = 25;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = " = {";
var102 = 4;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
var104 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 3;
var106 = NEW_array__NativeArray(var105, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var106)->values[0] = (val*) var95;
((struct instance_array__NativeArray*)var106)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var106)->values[2] = (val*) var100;
{
((void (*)(val*, val*, long))(var104->class->vft[COLOR_array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
}
{
var107 = ((val* (*)(val*))(var104->class->vft[COLOR_string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var107); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var108 = separate_compiler__SeparateCompiler__box_kind_of(self, var_mclass);
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = ", /* box_kind */";
var112 = 16;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
var114 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var114 = array_instance Array[Object] */
var115 = 2;
var116 = NEW_array__NativeArray(var115, &type_array__NativeArraykernel__Object);
var117 = BOX_kernel__Int(var108); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var116)->values[0] = (val*) var117;
((struct instance_array__NativeArray*)var116)->values[1] = (val*) var110;
{
((void (*)(val*, val*, long))(var114->class->vft[COLOR_array__Array__with_native]))(var114, var116, var115) /* with_native on <var114:Array[Object]>*/;
}
}
{
var118 = ((val* (*)(val*))(var114->class->vft[COLOR_string__Object__to_s]))(var114) /* to_s on <var114:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var118); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = "{";
var122 = 1;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var124 = NEW_range__Range(&type_range__Rangekernel__Int);
var125 = 0;
{
var126 = array__AbstractArrayRead__length(var_vft);
}
{
var127 = BOX_kernel__Int(var125); /* autobox from Int to Discrete */
var128 = BOX_kernel__Int(var126); /* autobox from Int to Discrete */
range__Range__without_last(var124, var127, var128); /* Direct call range#Range#without_last on <var124:Range[Int]>*/
}
{
var129 = range__Range__iterator(var124);
}
for(;;) {
{
var130 = ((short int (*)(val*))(var129->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var129) /* is_ok on <var129:Iterator[Discrete]>*/;
}
if(!var130) break;
{
var131 = ((val* (*)(val*))(var129->class->vft[COLOR_abstract_collection__Iterator__item]))(var129) /* item on <var129:Iterator[Discrete]>*/;
}
var132 = ((struct instance_kernel__Int*)var131)->value; /* autounbox from nullable Object to Int */;
var_i = var132;
{
var133 = array__Array___91d_93d(var_vft, var_i);
}
var_mpropdef = var133;
var134 = NULL;
if (var_mpropdef == NULL) {
var135 = 1; /* is null */
} else {
var135 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var134) on <var_mpropdef:nullable MPropDef> */
var_other138 = var134;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other138) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var141 = var_mpropdef == var_other138;
var139 = var141;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
}
var136 = var139;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
var135 = var136;
}
if (var135){
if (varonce142) {
var143 = varonce142;
} else {
var144 = "NULL, /* empty */";
var145 = 17;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var147 = 0;
} else {
var147 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (unlikely(!var147)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 686);
show_backtrace(1);
}
var149 = NULL;
if (var_rta == NULL) {
var150 = 0; /* is null */
} else {
var150 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var149) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var149;
{
var154 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var153 = var154;
}
var155 = !var153;
var151 = var155;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
var150 = var151;
}
var_156 = var150;
if (var150){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var159 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 74);
show_backtrace(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = hash_collection__HashSet__has(var157, var_mpropdef);
}
var161 = !var160;
var148 = var161;
} else {
var148 = var_156;
}
if (var148){
if (varonce162) {
var163 = varonce162;
} else {
var164 = "NULL, /* DEAD ";
var165 = 14;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var169 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 335);
show_backtrace(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = ":";
var173 = 1;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = ":";
var178 = 1;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = " */";
var183 = 3;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
var185 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var185 = array_instance Array[Object] */
var186 = 7;
var187 = NEW_array__NativeArray(var186, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var187)->values[0] = (val*) var163;
((struct instance_array__NativeArray*)var187)->values[1] = (val*) var167;
((struct instance_array__NativeArray*)var187)->values[2] = (val*) var171;
((struct instance_array__NativeArray*)var187)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var187)->values[4] = (val*) var176;
((struct instance_array__NativeArray*)var187)->values[5] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var187)->values[6] = (val*) var181;
{
((void (*)(val*, val*, long))(var185->class->vft[COLOR_array__Array__with_native]))(var185, var187, var186) /* with_native on <var185:Array[Object]>*/;
}
}
{
var188 = ((val* (*)(val*))(var185->class->vft[COLOR_string__Object__to_s]))(var185) /* to_s on <var185:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var188); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto CONTINUE_label;
} else {
}
{
var189 = separate_compiler__MMethodDef__virtual_runtime_function(var_mpropdef);
}
var_rf = var189;
{
var190 = abstract_compiler__AbstractRuntimeFunction__c_name(var_rf);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var190); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = "(nitmethod_t)";
var194 = 13;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
{
var196 = abstract_compiler__AbstractRuntimeFunction__c_name(var_rf);
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = ", /* pointer to ";
var200 = 16;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var204 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 335);
show_backtrace(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
if (varonce205) {
var206 = varonce205;
} else {
var207 = ":";
var208 = 1;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
if (varonce210) {
var211 = varonce210;
} else {
var212 = ":";
var213 = 1;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
if (varonce215) {
var216 = varonce215;
} else {
var217 = " */";
var218 = 3;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
var220 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var220 = array_instance Array[Object] */
var221 = 9;
var222 = NEW_array__NativeArray(var221, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var222)->values[0] = (val*) var192;
((struct instance_array__NativeArray*)var222)->values[1] = (val*) var196;
((struct instance_array__NativeArray*)var222)->values[2] = (val*) var198;
((struct instance_array__NativeArray*)var222)->values[3] = (val*) var202;
((struct instance_array__NativeArray*)var222)->values[4] = (val*) var206;
((struct instance_array__NativeArray*)var222)->values[5] = (val*) var_mclass;
((struct instance_array__NativeArray*)var222)->values[6] = (val*) var211;
((struct instance_array__NativeArray*)var222)->values[7] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var222)->values[8] = (val*) var216;
{
((void (*)(val*, val*, long))(var220->class->vft[COLOR_array__Array__with_native]))(var220, var222, var221) /* with_native on <var220:Array[Object]>*/;
}
}
{
var223 = ((val* (*)(val*))(var220->class->vft[COLOR_string__Object__to_s]))(var220) /* to_s on <var220:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var223); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var129->class->vft[COLOR_abstract_collection__Iterator__next]))(var129) /* next on <var129:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
if (varonce224) {
var225 = varonce224;
} else {
var226 = "}";
var227 = 1;
var228 = string__NativeString__to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var225); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce229) {
var230 = varonce229;
} else {
var231 = "};";
var232 = 2;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var230); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
{
var234 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce235) {
var236 = varonce235;
} else {
var237 = "val*";
var238 = 4;
var239 = string__NativeString__to_s_with_length(var237, var238);
var236 = var239;
varonce235 = var236;
}
{
{ /* Inline kernel#Object#!= (var234,var236) on <var234:String> */
var_other = var236;
{
var244 = ((short int (*)(val*, val*))(var234->class->vft[COLOR_kernel__Object___61d_61d]))(var234, var_other) /* == on <var234:String>*/;
var243 = var244;
}
var245 = !var243;
var241 = var245;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
var240 = var241;
}
if (var240){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var249 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
{
{ /* Inline model#MClass#name (var247) on <var247:MClass> */
var252 = var247->attrs[COLOR_model__MClass___name].val; /* _name on <var247:MClass> */
if (unlikely(var252 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
if (varonce253) {
var254 = varonce253;
} else {
var255 = "Pointer";
var256 = 7;
var257 = string__NativeString__to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
{
var259 = string__FlatString___61d_61d(var250, var254);
var258 = var259;
}
var_260 = var258;
if (var258){
var246 = var_260;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var263 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var261) on <var261:MClass> */
var266 = var261->attrs[COLOR_model__MClass___kind].val; /* _kind on <var261:MClass> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
var267 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#!= (var264,var267) on <var264:MClassKind> */
var_other = var267;
{
var272 = ((short int (*)(val*, val*))(var264->class->vft[COLOR_kernel__Object___61d_61d]))(var264, var_other) /* == on <var264:MClassKind>*/;
var271 = var272;
}
var273 = !var271;
var269 = var273;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
var268 = var269;
}
var246 = var268;
}
if (var246){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var276 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var276 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
if (varonce277) {
var278 = varonce277;
} else {
var279 = "struct instance_";
var280 = 16;
var281 = string__NativeString__to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = " {";
var285 = 2;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
var287 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var287 = array_instance Array[Object] */
var288 = 3;
var289 = NEW_array__NativeArray(var288, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var289)->values[0] = (val*) var278;
((struct instance_array__NativeArray*)var289)->values[1] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var289)->values[2] = (val*) var283;
{
((void (*)(val*, val*, long))(var287->class->vft[COLOR_array__Array__with_native]))(var287, var289, var288) /* with_native on <var287:Array[Object]>*/;
}
}
{
var290 = ((val* (*)(val*))(var287->class->vft[COLOR_string__Object__to_s]))(var287) /* to_s on <var287:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var274, var290); /* Direct call abstract_compiler#CodeWriter#add_decl on <var274:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var293 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var293 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var291 = var293;
RET_LABEL292:(void)0;
}
}
if (varonce294) {
var295 = varonce294;
} else {
var296 = "const struct type *type;";
var297 = 24;
var298 = string__NativeString__to_s_with_length(var296, var297);
var295 = var298;
varonce294 = var295;
}
{
abstract_compiler__CodeWriter__add_decl(var291, var295); /* Direct call abstract_compiler#CodeWriter#add_decl on <var291:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var301 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
if (varonce302) {
var303 = varonce302;
} else {
var304 = "const struct class *class;";
var305 = 26;
var306 = string__NativeString__to_s_with_length(var304, var305);
var303 = var306;
varonce302 = var303;
}
{
abstract_compiler__CodeWriter__add_decl(var299, var303); /* Direct call abstract_compiler#CodeWriter#add_decl on <var299:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var309 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var309 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
{
var310 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce311) {
var312 = varonce311;
} else {
var313 = " value;";
var314 = 7;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
var316 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var316 = array_instance Array[Object] */
var317 = 2;
var318 = NEW_array__NativeArray(var317, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var318)->values[0] = (val*) var310;
((struct instance_array__NativeArray*)var318)->values[1] = (val*) var312;
{
((void (*)(val*, val*, long))(var316->class->vft[COLOR_array__Array__with_native]))(var316, var318, var317) /* with_native on <var316:Array[Object]>*/;
}
}
{
var319 = ((val* (*)(val*))(var316->class->vft[COLOR_string__Object__to_s]))(var316) /* to_s on <var316:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var307, var319); /* Direct call abstract_compiler#CodeWriter#add_decl on <var307:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var322 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var322 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
if (varonce323) {
var324 = varonce323;
} else {
var325 = "};";
var326 = 2;
var327 = string__NativeString__to_s_with_length(var325, var326);
var324 = var327;
varonce323 = var324;
}
{
abstract_compiler__CodeWriter__add_decl(var320, var324); /* Direct call abstract_compiler#CodeWriter#add_decl on <var320:CodeWriter>*/
}
} else {
}
if (var_rta == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 710);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var_rta) on <var_rta:nullable RapidTypeAnalysis> */
if (unlikely(var_rta == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var330 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var_rta:nullable RapidTypeAnalysis> */
if (unlikely(var330 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
{
var331 = hash_collection__HashSet__has(var328, var_mtype);
}
var332 = !var331;
if (var332){
goto RET_LABEL;
} else {
}
if (varonce333) {
var334 = varonce333;
} else {
var335 = "BOX_";
var336 = 4;
var337 = string__NativeString__to_s_with_length(var335, var336);
var334 = var337;
varonce333 = var334;
}
var338 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var338 = array_instance Array[Object] */
var339 = 2;
var340 = NEW_array__NativeArray(var339, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var340)->values[0] = (val*) var334;
((struct instance_array__NativeArray*)var340)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var338->class->vft[COLOR_array__Array__with_native]))(var338, var340, var339) /* with_native on <var338:Array[Object]>*/;
}
}
{
var341 = ((val* (*)(val*))(var338->class->vft[COLOR_string__Object__to_s]))(var338) /* to_s on <var338:Array[Object]>*/;
}
if (varonce342) {
var343 = varonce342;
} else {
var344 = "val* BOX_";
var345 = 9;
var346 = string__NativeString__to_s_with_length(var344, var345);
var343 = var346;
varonce342 = var343;
}
if (varonce347) {
var348 = varonce347;
} else {
var349 = "(";
var350 = 1;
var351 = string__NativeString__to_s_with_length(var349, var350);
var348 = var351;
varonce347 = var348;
}
{
var352 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce353) {
var354 = varonce353;
} else {
var355 = ");";
var356 = 2;
var357 = string__NativeString__to_s_with_length(var355, var356);
var354 = var357;
varonce353 = var354;
}
var358 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var358 = array_instance Array[Object] */
var359 = 5;
var360 = NEW_array__NativeArray(var359, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var360)->values[0] = (val*) var343;
((struct instance_array__NativeArray*)var360)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var360)->values[2] = (val*) var348;
((struct instance_array__NativeArray*)var360)->values[3] = (val*) var352;
((struct instance_array__NativeArray*)var360)->values[4] = (val*) var354;
{
((void (*)(val*, val*, long))(var358->class->vft[COLOR_array__Array__with_native]))(var358, var360, var359) /* with_native on <var358:Array[Object]>*/;
}
}
{
var361 = ((val* (*)(val*))(var358->class->vft[COLOR_string__Object__to_s]))(var358) /* to_s on <var358:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var341, var361); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce362) {
var363 = varonce362;
} else {
var364 = "/* allocate ";
var365 = 12;
var366 = string__NativeString__to_s_with_length(var364, var365);
var363 = var366;
varonce362 = var363;
}
if (varonce367) {
var368 = varonce367;
} else {
var369 = " */";
var370 = 3;
var371 = string__NativeString__to_s_with_length(var369, var370);
var368 = var371;
varonce367 = var368;
}
var372 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var372 = array_instance Array[Object] */
var373 = 3;
var374 = NEW_array__NativeArray(var373, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var374)->values[0] = (val*) var363;
((struct instance_array__NativeArray*)var374)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var374)->values[2] = (val*) var368;
{
((void (*)(val*, val*, long))(var372->class->vft[COLOR_array__Array__with_native]))(var372, var374, var373) /* with_native on <var372:Array[Object]>*/;
}
}
{
var375 = ((val* (*)(val*))(var372->class->vft[COLOR_string__Object__to_s]))(var372) /* to_s on <var372:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var375); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce376) {
var377 = varonce376;
} else {
var378 = "val* BOX_";
var379 = 9;
var380 = string__NativeString__to_s_with_length(var378, var379);
var377 = var380;
varonce376 = var377;
}
{
var381 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce382) {
var383 = varonce382;
} else {
var384 = "(";
var385 = 1;
var386 = string__NativeString__to_s_with_length(var384, var385);
var383 = var386;
varonce382 = var383;
}
{
var387 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce388) {
var389 = varonce388;
} else {
var390 = " value) {";
var391 = 9;
var392 = string__NativeString__to_s_with_length(var390, var391);
var389 = var392;
varonce388 = var389;
}
var393 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var393 = array_instance Array[Object] */
var394 = 5;
var395 = NEW_array__NativeArray(var394, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var395)->values[0] = (val*) var377;
((struct instance_array__NativeArray*)var395)->values[1] = (val*) var381;
((struct instance_array__NativeArray*)var395)->values[2] = (val*) var383;
((struct instance_array__NativeArray*)var395)->values[3] = (val*) var387;
((struct instance_array__NativeArray*)var395)->values[4] = (val*) var389;
{
((void (*)(val*, val*, long))(var393->class->vft[COLOR_array__Array__with_native]))(var393, var395, var394) /* with_native on <var393:Array[Object]>*/;
}
}
{
var396 = ((val* (*)(val*))(var393->class->vft[COLOR_string__Object__to_s]))(var393) /* to_s on <var393:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var396); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce397) {
var398 = varonce397;
} else {
var399 = "struct instance_";
var400 = 16;
var401 = string__NativeString__to_s_with_length(var399, var400);
var398 = var401;
varonce397 = var398;
}
if (varonce402) {
var403 = varonce402;
} else {
var404 = "*res = nit_alloc(sizeof(struct instance_";
var405 = 40;
var406 = string__NativeString__to_s_with_length(var404, var405);
var403 = var406;
varonce402 = var403;
}
if (varonce407) {
var408 = varonce407;
} else {
var409 = "));";
var410 = 3;
var411 = string__NativeString__to_s_with_length(var409, var410);
var408 = var411;
varonce407 = var408;
}
var412 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var412 = array_instance Array[Object] */
var413 = 5;
var414 = NEW_array__NativeArray(var413, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var414)->values[0] = (val*) var398;
((struct instance_array__NativeArray*)var414)->values[1] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var414)->values[2] = (val*) var403;
((struct instance_array__NativeArray*)var414)->values[3] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var414)->values[4] = (val*) var408;
{
((void (*)(val*, val*, long))(var412->class->vft[COLOR_array__Array__with_native]))(var412, var414, var413) /* with_native on <var412:Array[Object]>*/;
}
}
{
var415 = ((val* (*)(val*))(var412->class->vft[COLOR_string__Object__to_s]))(var412) /* to_s on <var412:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var415); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce416) {
var417 = varonce416;
} else {
var418 = "type_";
var419 = 5;
var420 = string__NativeString__to_s_with_length(var418, var419);
var417 = var420;
varonce416 = var417;
}
var421 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var421 = array_instance Array[Object] */
var422 = 2;
var423 = NEW_array__NativeArray(var422, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var423)->values[0] = (val*) var417;
((struct instance_array__NativeArray*)var423)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var421->class->vft[COLOR_array__Array__with_native]))(var421, var423, var422) /* with_native on <var421:Array[Object]>*/;
}
}
{
var424 = ((val* (*)(val*))(var421->class->vft[COLOR_string__Object__to_s]))(var421) /* to_s on <var421:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var424); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce425) {
var426 = varonce425;
} else {
var427 = "res->type = &type_";
var428 = 18;
var429 = string__NativeString__to_s_with_length(var427, var428);
var426 = var429;
varonce425 = var426;
}
if (varonce430) {
var431 = varonce430;
} else {
var432 = ";";
var433 = 1;
var434 = string__NativeString__to_s_with_length(var432, var433);
var431 = var434;
varonce430 = var431;
}
var435 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var435 = array_instance Array[Object] */
var436 = 3;
var437 = NEW_array__NativeArray(var436, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var437)->values[0] = (val*) var426;
((struct instance_array__NativeArray*)var437)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var437)->values[2] = (val*) var431;
{
((void (*)(val*, val*, long))(var435->class->vft[COLOR_array__Array__with_native]))(var435, var437, var436) /* with_native on <var435:Array[Object]>*/;
}
}
{
var438 = ((val* (*)(val*))(var435->class->vft[COLOR_string__Object__to_s]))(var435) /* to_s on <var435:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var438); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce439) {
var440 = varonce439;
} else {
var441 = "class_";
var442 = 6;
var443 = string__NativeString__to_s_with_length(var441, var442);
var440 = var443;
varonce439 = var440;
}
var444 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var444 = array_instance Array[Object] */
var445 = 2;
var446 = NEW_array__NativeArray(var445, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var446)->values[0] = (val*) var440;
((struct instance_array__NativeArray*)var446)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var444->class->vft[COLOR_array__Array__with_native]))(var444, var446, var445) /* with_native on <var444:Array[Object]>*/;
}
}
{
var447 = ((val* (*)(val*))(var444->class->vft[COLOR_string__Object__to_s]))(var444) /* to_s on <var444:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var447); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce448) {
var449 = varonce448;
} else {
var450 = "res->class = &class_";
var451 = 20;
var452 = string__NativeString__to_s_with_length(var450, var451);
var449 = var452;
varonce448 = var449;
}
if (varonce453) {
var454 = varonce453;
} else {
var455 = ";";
var456 = 1;
var457 = string__NativeString__to_s_with_length(var455, var456);
var454 = var457;
varonce453 = var454;
}
var458 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var458 = array_instance Array[Object] */
var459 = 3;
var460 = NEW_array__NativeArray(var459, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var460)->values[0] = (val*) var449;
((struct instance_array__NativeArray*)var460)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var460)->values[2] = (val*) var454;
{
((void (*)(val*, val*, long))(var458->class->vft[COLOR_array__Array__with_native]))(var458, var460, var459) /* with_native on <var458:Array[Object]>*/;
}
}
{
var461 = ((val* (*)(val*))(var458->class->vft[COLOR_string__Object__to_s]))(var458) /* to_s on <var458:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var461); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce462) {
var463 = varonce462;
} else {
var464 = "res->value = value;";
var465 = 19;
var466 = string__NativeString__to_s_with_length(var464, var465);
var463 = var466;
varonce462 = var463;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var463); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce467) {
var468 = varonce467;
} else {
var469 = "return (val*)res;";
var470 = 17;
var471 = string__NativeString__to_s_with_length(var469, var470);
var468 = var471;
varonce467 = var468;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var468); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce472) {
var473 = varonce472;
} else {
var474 = "}";
var475 = 1;
var476 = string__NativeString__to_s_with_length(var474, var475);
var473 = var476;
varonce472 = var473;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var473); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var479 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var479 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var477 = var479;
RET_LABEL478:(void)0;
}
}
if (varonce480) {
var481 = varonce480;
} else {
var482 = "NativeArray";
var483 = 11;
var484 = string__NativeString__to_s_with_length(var482, var483);
var481 = var484;
varonce480 = var481;
}
{
var486 = string__FlatString___61d_61d(var477, var481);
var485 = var486;
}
if (var485){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var489 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var489 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var487 = var489;
RET_LABEL488:(void)0;
}
}
if (varonce490) {
var491 = varonce490;
} else {
var492 = "struct instance_";
var493 = 16;
var494 = string__NativeString__to_s_with_length(var492, var493);
var491 = var494;
varonce490 = var491;
}
if (varonce495) {
var496 = varonce495;
} else {
var497 = " {";
var498 = 2;
var499 = string__NativeString__to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
var500 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var500 = array_instance Array[Object] */
var501 = 3;
var502 = NEW_array__NativeArray(var501, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var502)->values[0] = (val*) var491;
((struct instance_array__NativeArray*)var502)->values[1] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var502)->values[2] = (val*) var496;
{
((void (*)(val*, val*, long))(var500->class->vft[COLOR_array__Array__with_native]))(var500, var502, var501) /* with_native on <var500:Array[Object]>*/;
}
}
{
var503 = ((val* (*)(val*))(var500->class->vft[COLOR_string__Object__to_s]))(var500) /* to_s on <var500:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var487, var503); /* Direct call abstract_compiler#CodeWriter#add_decl on <var487:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var506 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var506 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var504 = var506;
RET_LABEL505:(void)0;
}
}
if (varonce507) {
var508 = varonce507;
} else {
var509 = "const struct type *type;";
var510 = 24;
var511 = string__NativeString__to_s_with_length(var509, var510);
var508 = var511;
varonce507 = var508;
}
{
abstract_compiler__CodeWriter__add_decl(var504, var508); /* Direct call abstract_compiler#CodeWriter#add_decl on <var504:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var514 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var514 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var512 = var514;
RET_LABEL513:(void)0;
}
}
if (varonce515) {
var516 = varonce515;
} else {
var517 = "const struct class *class;";
var518 = 26;
var519 = string__NativeString__to_s_with_length(var517, var518);
var516 = var519;
varonce515 = var516;
}
{
abstract_compiler__CodeWriter__add_decl(var512, var516); /* Direct call abstract_compiler#CodeWriter#add_decl on <var512:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var522 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var522 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var520 = var522;
RET_LABEL521:(void)0;
}
}
if (varonce523) {
var524 = varonce523;
} else {
var525 = "int length;";
var526 = 11;
var527 = string__NativeString__to_s_with_length(var525, var526);
var524 = var527;
varonce523 = var524;
}
{
abstract_compiler__CodeWriter__add_decl(var520, var524); /* Direct call abstract_compiler#CodeWriter#add_decl on <var520:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var530 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var530 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var528 = var530;
RET_LABEL529:(void)0;
}
}
if (varonce531) {
var532 = varonce531;
} else {
var533 = "val* values[0];";
var534 = 15;
var535 = string__NativeString__to_s_with_length(var533, var534);
var532 = var535;
varonce531 = var532;
}
{
abstract_compiler__CodeWriter__add_decl(var528, var532); /* Direct call abstract_compiler#CodeWriter#add_decl on <var528:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var538 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var538 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var536 = var538;
RET_LABEL537:(void)0;
}
}
if (varonce539) {
var540 = varonce539;
} else {
var541 = "};";
var542 = 2;
var543 = string__NativeString__to_s_with_length(var541, var542);
var540 = var543;
varonce539 = var540;
}
{
abstract_compiler__CodeWriter__add_decl(var536, var540); /* Direct call abstract_compiler#CodeWriter#add_decl on <var536:CodeWriter>*/
}
if (varonce544) {
var545 = varonce544;
} else {
var546 = "NEW_";
var547 = 4;
var548 = string__NativeString__to_s_with_length(var546, var547);
var545 = var548;
varonce544 = var545;
}
var549 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var549 = array_instance Array[Object] */
var550 = 2;
var551 = NEW_array__NativeArray(var550, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var551)->values[0] = (val*) var545;
((struct instance_array__NativeArray*)var551)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var549->class->vft[COLOR_array__Array__with_native]))(var549, var551, var550) /* with_native on <var549:Array[Object]>*/;
}
}
{
var552 = ((val* (*)(val*))(var549->class->vft[COLOR_string__Object__to_s]))(var549) /* to_s on <var549:Array[Object]>*/;
}
{
var553 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce554) {
var555 = varonce554;
} else {
var556 = " NEW_";
var557 = 5;
var558 = string__NativeString__to_s_with_length(var556, var557);
var555 = var558;
varonce554 = var555;
}
if (varonce559) {
var560 = varonce559;
} else {
var561 = "(int length, const struct type* type);";
var562 = 38;
var563 = string__NativeString__to_s_with_length(var561, var562);
var560 = var563;
varonce559 = var560;
}
var564 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var564 = array_instance Array[Object] */
var565 = 4;
var566 = NEW_array__NativeArray(var565, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var566)->values[0] = (val*) var553;
((struct instance_array__NativeArray*)var566)->values[1] = (val*) var555;
((struct instance_array__NativeArray*)var566)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var566)->values[3] = (val*) var560;
{
((void (*)(val*, val*, long))(var564->class->vft[COLOR_array__Array__with_native]))(var564, var566, var565) /* with_native on <var564:Array[Object]>*/;
}
}
{
var567 = ((val* (*)(val*))(var564->class->vft[COLOR_string__Object__to_s]))(var564) /* to_s on <var564:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var552, var567); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce568) {
var569 = varonce568;
} else {
var570 = "/* allocate ";
var571 = 12;
var572 = string__NativeString__to_s_with_length(var570, var571);
var569 = var572;
varonce568 = var569;
}
if (varonce573) {
var574 = varonce573;
} else {
var575 = " */";
var576 = 3;
var577 = string__NativeString__to_s_with_length(var575, var576);
var574 = var577;
varonce573 = var574;
}
var578 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var578 = array_instance Array[Object] */
var579 = 3;
var580 = NEW_array__NativeArray(var579, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var580)->values[0] = (val*) var569;
((struct instance_array__NativeArray*)var580)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var580)->values[2] = (val*) var574;
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
{
var582 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce583) {
var584 = varonce583;
} else {
var585 = " NEW_";
var586 = 5;
var587 = string__NativeString__to_s_with_length(var585, var586);
var584 = var587;
varonce583 = var584;
}
if (varonce588) {
var589 = varonce588;
} else {
var590 = "(int length, const struct type* type) {";
var591 = 39;
var592 = string__NativeString__to_s_with_length(var590, var591);
var589 = var592;
varonce588 = var589;
}
var593 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var593 = array_instance Array[Object] */
var594 = 4;
var595 = NEW_array__NativeArray(var594, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var595)->values[0] = (val*) var582;
((struct instance_array__NativeArray*)var595)->values[1] = (val*) var584;
((struct instance_array__NativeArray*)var595)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var595)->values[3] = (val*) var589;
{
((void (*)(val*, val*, long))(var593->class->vft[COLOR_array__Array__with_native]))(var593, var595, var594) /* with_native on <var593:Array[Object]>*/;
}
}
{
var596 = ((val* (*)(val*))(var593->class->vft[COLOR_string__Object__to_s]))(var593) /* to_s on <var593:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var596); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce597) {
var598 = varonce597;
} else {
var599 = "self";
var600 = 4;
var601 = string__NativeString__to_s_with_length(var599, var600);
var598 = var601;
varonce597 = var598;
}
{
var602 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var598);
}
var_res = var602;
if (varonce603) {
var604 = varonce603;
} else {
var605 = "struct instance_";
var606 = 16;
var607 = string__NativeString__to_s_with_length(var605, var606);
var604 = var607;
varonce603 = var604;
}
if (varonce608) {
var609 = varonce608;
} else {
var610 = " *";
var611 = 2;
var612 = string__NativeString__to_s_with_length(var610, var611);
var609 = var612;
varonce608 = var609;
}
if (varonce613) {
var614 = varonce613;
} else {
var615 = ";";
var616 = 1;
var617 = string__NativeString__to_s_with_length(var615, var616);
var614 = var617;
varonce613 = var614;
}
var618 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var618 = array_instance Array[Object] */
var619 = 5;
var620 = NEW_array__NativeArray(var619, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var620)->values[0] = (val*) var604;
((struct instance_array__NativeArray*)var620)->values[1] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var620)->values[2] = (val*) var609;
((struct instance_array__NativeArray*)var620)->values[3] = (val*) var_res;
((struct instance_array__NativeArray*)var620)->values[4] = (val*) var614;
{
((void (*)(val*, val*, long))(var618->class->vft[COLOR_array__Array__with_native]))(var618, var620, var619) /* with_native on <var618:Array[Object]>*/;
}
}
{
var621 = ((val* (*)(val*))(var618->class->vft[COLOR_string__Object__to_s]))(var618) /* to_s on <var618:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var621); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#arguments (var_mtype) on <var_mtype:MClassType> */
var624 = var_mtype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_mtype:MClassType> */
if (unlikely(var624 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var622 = var624;
RET_LABEL623:(void)0;
}
}
{
var625 = abstract_collection__SequenceRead__first(var622);
}
var_mtype_elt = var625;
if (varonce626) {
var627 = varonce626;
} else {
var628 = " = nit_alloc(sizeof(struct instance_";
var629 = 36;
var630 = string__NativeString__to_s_with_length(var628, var629);
var627 = var630;
varonce626 = var627;
}
if (varonce631) {
var632 = varonce631;
} else {
var633 = ") + length*sizeof(";
var634 = 18;
var635 = string__NativeString__to_s_with_length(var633, var634);
var632 = var635;
varonce631 = var632;
}
{
var636 = ((val* (*)(val*))(var_mtype_elt->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype_elt) /* ctype on <var_mtype_elt:MType>*/;
}
if (varonce637) {
var638 = varonce637;
} else {
var639 = "));";
var640 = 3;
var641 = string__NativeString__to_s_with_length(var639, var640);
var638 = var641;
varonce637 = var638;
}
var642 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var642 = array_instance Array[Object] */
var643 = 6;
var644 = NEW_array__NativeArray(var643, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var644)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var644)->values[1] = (val*) var627;
((struct instance_array__NativeArray*)var644)->values[2] = (val*) var_c_instance_name;
((struct instance_array__NativeArray*)var644)->values[3] = (val*) var632;
((struct instance_array__NativeArray*)var644)->values[4] = (val*) var636;
((struct instance_array__NativeArray*)var644)->values[5] = (val*) var638;
{
((void (*)(val*, val*, long))(var642->class->vft[COLOR_array__Array__with_native]))(var642, var644, var643) /* with_native on <var642:Array[Object]>*/;
}
}
{
var645 = ((val* (*)(val*))(var642->class->vft[COLOR_string__Object__to_s]))(var642) /* to_s on <var642:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var645); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce646) {
var647 = varonce646;
} else {
var648 = "->type = type;";
var649 = 14;
var650 = string__NativeString__to_s_with_length(var648, var649);
var647 = var650;
varonce646 = var647;
}
var651 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var651 = array_instance Array[Object] */
var652 = 2;
var653 = NEW_array__NativeArray(var652, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var653)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var653)->values[1] = (val*) var647;
{
((void (*)(val*, val*, long))(var651->class->vft[COLOR_array__Array__with_native]))(var651, var653, var652) /* with_native on <var651:Array[Object]>*/;
}
}
{
var654 = ((val* (*)(val*))(var651->class->vft[COLOR_string__Object__to_s]))(var651) /* to_s on <var651:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var654); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce655) {
var656 = varonce655;
} else {
var657 = "type";
var658 = 4;
var659 = string__NativeString__to_s_with_length(var657, var658);
var656 = var659;
varonce655 = var656;
}
{
separate_compiler__SeparateCompiler__hardening_live_type(self, var_v, var656); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (varonce660) {
var661 = varonce660;
} else {
var662 = "class_";
var663 = 6;
var664 = string__NativeString__to_s_with_length(var662, var663);
var661 = var664;
varonce660 = var661;
}
var665 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var665 = array_instance Array[Object] */
var666 = 2;
var667 = NEW_array__NativeArray(var666, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var667)->values[0] = (val*) var661;
((struct instance_array__NativeArray*)var667)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var665->class->vft[COLOR_array__Array__with_native]))(var665, var667, var666) /* with_native on <var665:Array[Object]>*/;
}
}
{
var668 = ((val* (*)(val*))(var665->class->vft[COLOR_string__Object__to_s]))(var665) /* to_s on <var665:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var668); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce669) {
var670 = varonce669;
} else {
var671 = "->class = &class_";
var672 = 17;
var673 = string__NativeString__to_s_with_length(var671, var672);
var670 = var673;
varonce669 = var670;
}
if (varonce674) {
var675 = varonce674;
} else {
var676 = ";";
var677 = 1;
var678 = string__NativeString__to_s_with_length(var676, var677);
var675 = var678;
varonce674 = var675;
}
var679 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var679 = array_instance Array[Object] */
var680 = 4;
var681 = NEW_array__NativeArray(var680, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var681)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var681)->values[1] = (val*) var670;
((struct instance_array__NativeArray*)var681)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var681)->values[3] = (val*) var675;
{
((void (*)(val*, val*, long))(var679->class->vft[COLOR_array__Array__with_native]))(var679, var681, var680) /* with_native on <var679:Array[Object]>*/;
}
}
{
var682 = ((val* (*)(val*))(var679->class->vft[COLOR_string__Object__to_s]))(var679) /* to_s on <var679:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var682); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce683) {
var684 = varonce683;
} else {
var685 = "->length = length;";
var686 = 18;
var687 = string__NativeString__to_s_with_length(var685, var686);
var684 = var687;
varonce683 = var684;
}
var688 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var688 = array_instance Array[Object] */
var689 = 2;
var690 = NEW_array__NativeArray(var689, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var690)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var690)->values[1] = (val*) var684;
{
((void (*)(val*, val*, long))(var688->class->vft[COLOR_array__Array__with_native]))(var688, var690, var689) /* with_native on <var688:Array[Object]>*/;
}
}
{
var691 = ((val* (*)(val*))(var688->class->vft[COLOR_string__Object__to_s]))(var688) /* to_s on <var688:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var691); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce692) {
var693 = varonce692;
} else {
var694 = "return (val*)";
var695 = 13;
var696 = string__NativeString__to_s_with_length(var694, var695);
var693 = var696;
varonce692 = var693;
}
if (varonce697) {
var698 = varonce697;
} else {
var699 = ";";
var700 = 1;
var701 = string__NativeString__to_s_with_length(var699, var700);
var698 = var701;
varonce697 = var698;
}
var702 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var702 = array_instance Array[Object] */
var703 = 3;
var704 = NEW_array__NativeArray(var703, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var704)->values[0] = (val*) var693;
((struct instance_array__NativeArray*)var704)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var704)->values[2] = (val*) var698;
{
((void (*)(val*, val*, long))(var702->class->vft[COLOR_array__Array__with_native]))(var702, var704, var703) /* with_native on <var702:Array[Object]>*/;
}
}
{
var705 = ((val* (*)(val*))(var702->class->vft[COLOR_string__Object__to_s]))(var702) /* to_s on <var702:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var705); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce706) {
var707 = varonce706;
} else {
var708 = "}";
var709 = 1;
var710 = string__NativeString__to_s_with_length(var708, var709);
var707 = var710;
varonce706 = var707;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var707); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
if (varonce711) {
var712 = varonce711;
} else {
var713 = "NEW_";
var714 = 4;
var715 = string__NativeString__to_s_with_length(var713, var714);
var712 = var715;
varonce711 = var712;
}
var716 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var716 = array_instance Array[Object] */
var717 = 2;
var718 = NEW_array__NativeArray(var717, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var718)->values[0] = (val*) var712;
((struct instance_array__NativeArray*)var718)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var716->class->vft[COLOR_array__Array__with_native]))(var716, var718, var717) /* with_native on <var716:Array[Object]>*/;
}
}
{
var719 = ((val* (*)(val*))(var716->class->vft[COLOR_string__Object__to_s]))(var716) /* to_s on <var716:Array[Object]>*/;
}
{
var720 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce721) {
var722 = varonce721;
} else {
var723 = " NEW_";
var724 = 5;
var725 = string__NativeString__to_s_with_length(var723, var724);
var722 = var725;
varonce721 = var722;
}
if (varonce726) {
var727 = varonce726;
} else {
var728 = "(const struct type* type);";
var729 = 26;
var730 = string__NativeString__to_s_with_length(var728, var729);
var727 = var730;
varonce726 = var727;
}
var731 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var731 = array_instance Array[Object] */
var732 = 4;
var733 = NEW_array__NativeArray(var732, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var733)->values[0] = (val*) var720;
((struct instance_array__NativeArray*)var733)->values[1] = (val*) var722;
((struct instance_array__NativeArray*)var733)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var733)->values[3] = (val*) var727;
{
((void (*)(val*, val*, long))(var731->class->vft[COLOR_array__Array__with_native]))(var731, var733, var732) /* with_native on <var731:Array[Object]>*/;
}
}
{
var734 = ((val* (*)(val*))(var731->class->vft[COLOR_string__Object__to_s]))(var731) /* to_s on <var731:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var719, var734); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce735) {
var736 = varonce735;
} else {
var737 = "/* allocate ";
var738 = 12;
var739 = string__NativeString__to_s_with_length(var737, var738);
var736 = var739;
varonce735 = var736;
}
if (varonce740) {
var741 = varonce740;
} else {
var742 = " */";
var743 = 3;
var744 = string__NativeString__to_s_with_length(var742, var743);
var741 = var744;
varonce740 = var741;
}
var745 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var745 = array_instance Array[Object] */
var746 = 3;
var747 = NEW_array__NativeArray(var746, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var747)->values[0] = (val*) var736;
((struct instance_array__NativeArray*)var747)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var747)->values[2] = (val*) var741;
{
((void (*)(val*, val*, long))(var745->class->vft[COLOR_array__Array__with_native]))(var745, var747, var746) /* with_native on <var745:Array[Object]>*/;
}
}
{
var748 = ((val* (*)(val*))(var745->class->vft[COLOR_string__Object__to_s]))(var745) /* to_s on <var745:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var748); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var749 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce750) {
var751 = varonce750;
} else {
var752 = " NEW_";
var753 = 5;
var754 = string__NativeString__to_s_with_length(var752, var753);
var751 = var754;
varonce750 = var751;
}
if (varonce755) {
var756 = varonce755;
} else {
var757 = "(const struct type* type) {";
var758 = 27;
var759 = string__NativeString__to_s_with_length(var757, var758);
var756 = var759;
varonce755 = var756;
}
var760 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var760 = array_instance Array[Object] */
var761 = 4;
var762 = NEW_array__NativeArray(var761, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var762)->values[0] = (val*) var749;
((struct instance_array__NativeArray*)var762)->values[1] = (val*) var751;
((struct instance_array__NativeArray*)var762)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var762)->values[3] = (val*) var756;
{
((void (*)(val*, val*, long))(var760->class->vft[COLOR_array__Array__with_native]))(var760, var762, var761) /* with_native on <var760:Array[Object]>*/;
}
}
{
var763 = ((val* (*)(val*))(var760->class->vft[COLOR_string__Object__to_s]))(var760) /* to_s on <var760:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var763); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (varonce764) {
var765 = varonce764;
} else {
var766 = " is DEAD";
var767 = 8;
var768 = string__NativeString__to_s_with_length(var766, var767);
var765 = var768;
varonce764 = var765;
}
var769 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var769 = array_instance Array[Object] */
var770 = 2;
var771 = NEW_array__NativeArray(var770, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var771)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var771)->values[1] = (val*) var765;
{
((void (*)(val*, val*, long))(var769->class->vft[COLOR_array__Array__with_native]))(var769, var771, var770) /* with_native on <var769:Array[Object]>*/;
}
}
{
var772 = ((val* (*)(val*))(var769->class->vft[COLOR_string__Object__to_s]))(var769) /* to_s on <var769:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var772); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce773) {
var774 = varonce773;
} else {
var775 = "self";
var776 = 4;
var777 = string__NativeString__to_s_with_length(var775, var776);
var774 = var777;
varonce773 = var774;
}
{
var778 = abstract_compiler__AbstractCompilerVisitor__new_named_var(var_v, var_mtype, var774);
}
var_res779 = var778;
var780 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res779,var780) on <var_res779:RuntimeVariable> */
var_res779->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = var780; /* _is_exact on <var_res779:RuntimeVariable> */
RET_LABEL781:(void)0;
}
}
if (varonce782) {
var783 = varonce782;
} else {
var784 = " = nit_alloc(sizeof(struct instance) + ";
var785 = 39;
var786 = string__NativeString__to_s_with_length(var784, var785);
var783 = var786;
varonce782 = var783;
}
{
var787 = array__AbstractArrayRead__length(var_attrs);
}
if (varonce788) {
var789 = varonce788;
} else {
var790 = "*sizeof(nitattribute_t));";
var791 = 25;
var792 = string__NativeString__to_s_with_length(var790, var791);
var789 = var792;
varonce788 = var789;
}
var793 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var793 = array_instance Array[Object] */
var794 = 4;
var795 = NEW_array__NativeArray(var794, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var795)->values[0] = (val*) var_res779;
((struct instance_array__NativeArray*)var795)->values[1] = (val*) var783;
var796 = BOX_kernel__Int(var787); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var795)->values[2] = (val*) var796;
((struct instance_array__NativeArray*)var795)->values[3] = (val*) var789;
{
((void (*)(val*, val*, long))(var793->class->vft[COLOR_array__Array__with_native]))(var793, var795, var794) /* with_native on <var793:Array[Object]>*/;
}
}
{
var797 = ((val* (*)(val*))(var793->class->vft[COLOR_string__Object__to_s]))(var793) /* to_s on <var793:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var797); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce798) {
var799 = varonce798;
} else {
var800 = "->type = type;";
var801 = 14;
var802 = string__NativeString__to_s_with_length(var800, var801);
var799 = var802;
varonce798 = var799;
}
var803 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var803 = array_instance Array[Object] */
var804 = 2;
var805 = NEW_array__NativeArray(var804, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var805)->values[0] = (val*) var_res779;
((struct instance_array__NativeArray*)var805)->values[1] = (val*) var799;
{
((void (*)(val*, val*, long))(var803->class->vft[COLOR_array__Array__with_native]))(var803, var805, var804) /* with_native on <var803:Array[Object]>*/;
}
}
{
var806 = ((val* (*)(val*))(var803->class->vft[COLOR_string__Object__to_s]))(var803) /* to_s on <var803:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var806); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (varonce807) {
var808 = varonce807;
} else {
var809 = "type";
var810 = 4;
var811 = string__NativeString__to_s_with_length(var809, var810);
var808 = var811;
varonce807 = var808;
}
{
separate_compiler__SeparateCompiler__hardening_live_type(self, var_v, var808); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (varonce812) {
var813 = varonce812;
} else {
var814 = "class_";
var815 = 6;
var816 = string__NativeString__to_s_with_length(var814, var815);
var813 = var816;
varonce812 = var813;
}
var817 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var817 = array_instance Array[Object] */
var818 = 2;
var819 = NEW_array__NativeArray(var818, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var819)->values[0] = (val*) var813;
((struct instance_array__NativeArray*)var819)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var817->class->vft[COLOR_array__Array__with_native]))(var817, var819, var818) /* with_native on <var817:Array[Object]>*/;
}
}
{
var820 = ((val* (*)(val*))(var817->class->vft[COLOR_string__Object__to_s]))(var817) /* to_s on <var817:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var820); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce821) {
var822 = varonce821;
} else {
var823 = "->class = &class_";
var824 = 17;
var825 = string__NativeString__to_s_with_length(var823, var824);
var822 = var825;
varonce821 = var822;
}
if (varonce826) {
var827 = varonce826;
} else {
var828 = ";";
var829 = 1;
var830 = string__NativeString__to_s_with_length(var828, var829);
var827 = var830;
varonce826 = var827;
}
var831 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var831 = array_instance Array[Object] */
var832 = 4;
var833 = NEW_array__NativeArray(var832, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var833)->values[0] = (val*) var_res779;
((struct instance_array__NativeArray*)var833)->values[1] = (val*) var822;
((struct instance_array__NativeArray*)var833)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var833)->values[3] = (val*) var827;
{
((void (*)(val*, val*, long))(var831->class->vft[COLOR_array__Array__with_native]))(var831, var833, var832) /* with_native on <var831:Array[Object]>*/;
}
}
{
var834 = ((val* (*)(val*))(var831->class->vft[COLOR_string__Object__to_s]))(var831) /* to_s on <var831:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var834); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompiler__generate_init_attr(self, var_v, var_res779, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:SeparateCompiler>*/
}
if (varonce835) {
var836 = varonce835;
} else {
var837 = "return ";
var838 = 7;
var839 = string__NativeString__to_s_with_length(var837, var838);
var836 = var839;
varonce835 = var836;
}
if (varonce840) {
var841 = varonce840;
} else {
var842 = ";";
var843 = 1;
var844 = string__NativeString__to_s_with_length(var842, var843);
var841 = var844;
varonce840 = var841;
}
var845 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var845 = array_instance Array[Object] */
var846 = 3;
var847 = NEW_array__NativeArray(var846, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var847)->values[0] = (val*) var836;
((struct instance_array__NativeArray*)var847)->values[1] = (val*) var_res779;
((struct instance_array__NativeArray*)var847)->values[2] = (val*) var841;
{
((void (*)(val*, val*, long))(var845->class->vft[COLOR_array__Array__with_native]))(var845, var847, var846) /* with_native on <var845:Array[Object]>*/;
}
}
{
var848 = ((val* (*)(val*))(var845->class->vft[COLOR_string__Object__to_s]))(var845) /* to_s on <var845:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var848); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce849) {
var850 = varonce849;
} else {
var851 = "}";
var852 = 1;
var853 = string__NativeString__to_s_with_length(var851, var852);
var850 = var853;
varonce849 = var850;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var850); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 773);
show_backtrace(1);
}
var_v = p0;
var_t = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var3 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 42);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 786);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 790);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 790);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 791);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 791);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 792);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 792);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 793);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 793);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 44);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 60);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
val* var14 /* : MapIterator[Object, nullable Object] */;
short int var15 /* : Bool */;
val* var16 /* : Object */;
val* var_t /* var t: MType */;
val* var17 /* : nullable Object */;
val* var_table /* var table: Array[nullable MType] */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
val* var23 /* : ArrayIterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_e /* var e: nullable MType */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
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
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : Object */;
val* var56 /* : Object */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
long var68 /* : Int */;
long var69 /* : Int */;
val* var70 /* : Map[MClassType, Array[nullable MType]] */;
val* var72 /* : Map[MClassType, Array[nullable MType]] */;
val* var73 /* : MapIterator[Object, nullable Object] */;
short int var74 /* : Bool */;
val* var75 /* : Object */;
val* var_t76 /* var t: MClassType */;
val* var77 /* : nullable Object */;
val* var_table78 /* var table: Array[nullable MType] */;
long var79 /* : Int */;
long var80 /* : Int */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
long var86 /* : Int */;
val* var87 /* : ArrayIterator[nullable Object] */;
short int var88 /* : Bool */;
val* var89 /* : nullable Object */;
val* var_e90 /* var e: nullable MType */;
val* var91 /* : null */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
long var98 /* : Int */;
long var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
long var105 /* : Int */;
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
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var120 /* : NativeArray[Object] */;
val* var121 /* : Object */;
val* var122 /* : Object */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
long var134 /* : Int */;
long var135 /* : Int */;
val* var136 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var138 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var139 /* : MapIterator[Object, nullable Object] */;
short int var140 /* : Bool */;
val* var141 /* : Object */;
val* var_t142 /* var t: MClass */;
val* var143 /* : nullable Object */;
val* var_table144 /* var table: Array[nullable MPropDef] */;
long var145 /* : Int */;
long var146 /* : Int */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
const char* var_class_name151;
long var152 /* : Int */;
val* var153 /* : ArrayIterator[nullable Object] */;
short int var154 /* : Bool */;
val* var155 /* : nullable Object */;
val* var_e156 /* var e: nullable MPropDef */;
val* var157 /* : null */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
long var164 /* : Int */;
long var165 /* : Int */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
const char* var_class_name170;
long var171 /* : Int */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : FlatString */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : FlatString */;
val* var184 /* : Array[Object] */;
long var185 /* : Int */;
val* var186 /* : NativeArray[Object] */;
val* var187 /* : Object */;
val* var188 /* : Object */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
long var200 /* : Int */;
long var201 /* : Int */;
val* var202 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var204 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var205 /* : MapIterator[Object, nullable Object] */;
short int var206 /* : Bool */;
val* var207 /* : Object */;
val* var_t208 /* var t: MClass */;
val* var209 /* : nullable Object */;
val* var_table210 /* var table: Array[nullable MPropDef] */;
long var211 /* : Int */;
long var212 /* : Int */;
short int var214 /* : Bool */;
int cltype215;
int idtype216;
const char* var_class_name217;
long var218 /* : Int */;
val* var219 /* : ArrayIterator[nullable Object] */;
short int var220 /* : Bool */;
val* var221 /* : nullable Object */;
val* var_e222 /* var e: nullable MPropDef */;
val* var223 /* : null */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
long var230 /* : Int */;
long var231 /* : Int */;
short int var233 /* : Bool */;
int cltype234;
int idtype235;
const char* var_class_name236;
long var237 /* : Int */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
long var243 /* : Int */;
val* var244 /* : FlatString */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
long var248 /* : Int */;
val* var249 /* : FlatString */;
val* var250 /* : Array[Object] */;
long var251 /* : Int */;
val* var252 /* : NativeArray[Object] */;
val* var253 /* : Object */;
val* var254 /* : Object */;
val* var255 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 790);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var11) /* iterator on <var11:Map[MType, Array[nullable MType]]>*/;
}
for(;;) {
{
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var14) /* is_ok on <var14:MapIterator[Object, nullable Object]>*/;
}
if(!var15) break;
{
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__MapIterator__key]))(var14) /* key on <var14:MapIterator[Object, nullable Object]>*/;
}
var_t = var16;
{
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__MapIterator__item]))(var14) /* item on <var14:MapIterator[Object, nullable Object]>*/;
}
var_table = var17;
{
var18 = array__AbstractArrayRead__length(var_table);
}
{
{ /* Inline kernel#Int#+ (var_total,var18) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var22 = var_total + var18;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_total = var19;
{
var23 = array__AbstractArrayRead__iterator(var_table);
}
for(;;) {
{
var24 = array__ArrayIterator__is_ok(var23);
}
if(!var24) break;
{
var25 = array__ArrayIterator__item(var23);
}
var_e = var25;
var26 = NULL;
if (var_e == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,var26) on <var_e:nullable MType> */
var_other = var26;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable MType(MType)> */
var32 = var_e == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
var33 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var33) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var40 = var_holes + var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_holes = var34;
} else {
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var23); /* Direct call array#ArrayIterator#next on <var23:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
CONTINUE_label41: (void)0;
{
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__MapIterator__next]))(var14) /* next on <var14:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label41: (void)0;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "\11";
var45 = 1;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "\11";
var50 = 1;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 4;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var43;
var55 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var54)->values[2] = (val*) var48;
var56 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var54)->values[3] = (val*) var56;
{
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
}
{
var57 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
}
{
file__Object__print(self, var57); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "# size of resolution tables";
var61 = 27;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
file__Object__print(self, var59); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = "\11total \11holes";
var66 = 13;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
{
file__Object__print(self, var64); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var68 = 0;
var_total = var68;
var69 = 0;
var_holes = var69;
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var72 = self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 791);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var70) /* iterator on <var70:Map[MClassType, Array[nullable MType]]>*/;
}
for(;;) {
{
var74 = ((short int (*)(val*))(var73->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var73) /* is_ok on <var73:MapIterator[Object, nullable Object]>*/;
}
if(!var74) break;
{
var75 = ((val* (*)(val*))(var73->class->vft[COLOR_abstract_collection__MapIterator__key]))(var73) /* key on <var73:MapIterator[Object, nullable Object]>*/;
}
var_t76 = var75;
{
var77 = ((val* (*)(val*))(var73->class->vft[COLOR_abstract_collection__MapIterator__item]))(var73) /* item on <var73:MapIterator[Object, nullable Object]>*/;
}
var_table78 = var77;
{
var79 = array__AbstractArrayRead__length(var_table78);
}
{
{ /* Inline kernel#Int#+ (var_total,var79) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var79:Int> isa OTHER */
/* <var79:Int> isa OTHER */
var82 = 1; /* easy <var79:Int> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var86 = var_total + var79;
var80 = var86;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var_total = var80;
{
var87 = array__AbstractArrayRead__iterator(var_table78);
}
for(;;) {
{
var88 = array__ArrayIterator__is_ok(var87);
}
if(!var88) break;
{
var89 = array__ArrayIterator__item(var87);
}
var_e90 = var89;
var91 = NULL;
if (var_e90 == NULL) {
var92 = 1; /* is null */
} else {
var92 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e90,var91) on <var_e90:nullable MType> */
var_other = var91;
{
{ /* Inline kernel#Object#is_same_instance (var_e90,var_other) on <var_e90:nullable MType(MType)> */
var97 = var_e90 == var_other;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (var92){
var98 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var98) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var98:Int> isa OTHER */
/* <var98:Int> isa OTHER */
var101 = 1; /* easy <var98:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var105 = var_holes + var98;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var_holes = var99;
} else {
}
CONTINUE_label106: (void)0;
{
array__ArrayIterator__next(var87); /* Direct call array#ArrayIterator#next on <var87:ArrayIterator[nullable Object]>*/
}
}
BREAK_label106: (void)0;
CONTINUE_label107: (void)0;
{
((void (*)(val*))(var73->class->vft[COLOR_abstract_collection__MapIterator__next]))(var73) /* next on <var73:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label107: (void)0;
if (varonce108) {
var109 = varonce108;
} else {
var110 = "\11";
var111 = 1;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "\11";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 4;
var120 = NEW_array__NativeArray(var119, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var120)->values[0] = (val*) var109;
var121 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var120)->values[1] = (val*) var121;
((struct instance_array__NativeArray*)var120)->values[2] = (val*) var114;
var122 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var120)->values[3] = (val*) var122;
{
((void (*)(val*, val*, long))(var118->class->vft[COLOR_array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
}
{
var123 = ((val* (*)(val*))(var118->class->vft[COLOR_string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
}
{
file__Object__print(self, var123); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "# size of methods tables";
var127 = 24;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
{
file__Object__print(self, var125); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = "\11total \11holes";
var132 = 13;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
{
file__Object__print(self, var130); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var134 = 0;
var_total = var134;
var135 = 0;
var_holes = var135;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var138 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 792);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
var139 = ((val* (*)(val*))(var136->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var136) /* iterator on <var136:Map[MClass, Array[nullable MPropDef]]>*/;
}
for(;;) {
{
var140 = ((short int (*)(val*))(var139->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var139) /* is_ok on <var139:MapIterator[Object, nullable Object]>*/;
}
if(!var140) break;
{
var141 = ((val* (*)(val*))(var139->class->vft[COLOR_abstract_collection__MapIterator__key]))(var139) /* key on <var139:MapIterator[Object, nullable Object]>*/;
}
var_t142 = var141;
{
var143 = ((val* (*)(val*))(var139->class->vft[COLOR_abstract_collection__MapIterator__item]))(var139) /* item on <var139:MapIterator[Object, nullable Object]>*/;
}
var_table144 = var143;
{
var145 = array__AbstractArrayRead__length(var_table144);
}
{
{ /* Inline kernel#Int#+ (var_total,var145) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var145:Int> isa OTHER */
/* <var145:Int> isa OTHER */
var148 = 1; /* easy <var145:Int> isa OTHER*/
if (unlikely(!var148)) {
var_class_name151 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name151);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var152 = var_total + var145;
var146 = var152;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
var_total = var146;
{
var153 = array__AbstractArrayRead__iterator(var_table144);
}
for(;;) {
{
var154 = array__ArrayIterator__is_ok(var153);
}
if(!var154) break;
{
var155 = array__ArrayIterator__item(var153);
}
var_e156 = var155;
var157 = NULL;
if (var_e156 == NULL) {
var158 = 1; /* is null */
} else {
var158 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e156,var157) on <var_e156:nullable MPropDef> */
var_other = var157;
{
{ /* Inline kernel#Object#is_same_instance (var_e156,var_other) on <var_e156:nullable MPropDef(MPropDef)> */
var163 = var_e156 == var_other;
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
if (var158){
var164 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var164) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var164:Int> isa OTHER */
/* <var164:Int> isa OTHER */
var167 = 1; /* easy <var164:Int> isa OTHER*/
if (unlikely(!var167)) {
var_class_name170 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name170);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var171 = var_holes + var164;
var165 = var171;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var_holes = var165;
} else {
}
CONTINUE_label172: (void)0;
{
array__ArrayIterator__next(var153); /* Direct call array#ArrayIterator#next on <var153:ArrayIterator[nullable Object]>*/
}
}
BREAK_label172: (void)0;
CONTINUE_label173: (void)0;
{
((void (*)(val*))(var139->class->vft[COLOR_abstract_collection__MapIterator__next]))(var139) /* next on <var139:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label173: (void)0;
if (varonce174) {
var175 = varonce174;
} else {
var176 = "\11";
var177 = 1;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
if (varonce179) {
var180 = varonce179;
} else {
var181 = "\11";
var182 = 1;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
var184 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var184 = array_instance Array[Object] */
var185 = 4;
var186 = NEW_array__NativeArray(var185, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var186)->values[0] = (val*) var175;
var187 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var186)->values[1] = (val*) var187;
((struct instance_array__NativeArray*)var186)->values[2] = (val*) var180;
var188 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var186)->values[3] = (val*) var188;
{
((void (*)(val*, val*, long))(var184->class->vft[COLOR_array__Array__with_native]))(var184, var186, var185) /* with_native on <var184:Array[Object]>*/;
}
}
{
var189 = ((val* (*)(val*))(var184->class->vft[COLOR_string__Object__to_s]))(var184) /* to_s on <var184:Array[Object]>*/;
}
{
file__Object__print(self, var189); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = "# size of attributes tables";
var193 = 27;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
{
file__Object__print(self, var191); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = "\11total \11holes";
var198 = 13;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
{
file__Object__print(self, var196); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
var200 = 0;
var_total = var200;
var201 = 0;
var_holes = var201;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var204 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 793);
show_backtrace(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
var205 = ((val* (*)(val*))(var202->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var202) /* iterator on <var202:Map[MClass, Array[nullable MPropDef]]>*/;
}
for(;;) {
{
var206 = ((short int (*)(val*))(var205->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var205) /* is_ok on <var205:MapIterator[Object, nullable Object]>*/;
}
if(!var206) break;
{
var207 = ((val* (*)(val*))(var205->class->vft[COLOR_abstract_collection__MapIterator__key]))(var205) /* key on <var205:MapIterator[Object, nullable Object]>*/;
}
var_t208 = var207;
{
var209 = ((val* (*)(val*))(var205->class->vft[COLOR_abstract_collection__MapIterator__item]))(var205) /* item on <var205:MapIterator[Object, nullable Object]>*/;
}
var_table210 = var209;
{
var211 = array__AbstractArrayRead__length(var_table210);
}
{
{ /* Inline kernel#Int#+ (var_total,var211) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var211:Int> isa OTHER */
/* <var211:Int> isa OTHER */
var214 = 1; /* easy <var211:Int> isa OTHER*/
if (unlikely(!var214)) {
var_class_name217 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name217);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var218 = var_total + var211;
var212 = var218;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
}
var_total = var212;
{
var219 = array__AbstractArrayRead__iterator(var_table210);
}
for(;;) {
{
var220 = array__ArrayIterator__is_ok(var219);
}
if(!var220) break;
{
var221 = array__ArrayIterator__item(var219);
}
var_e222 = var221;
var223 = NULL;
if (var_e222 == NULL) {
var224 = 1; /* is null */
} else {
var224 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e222,var223) on <var_e222:nullable MPropDef> */
var_other = var223;
{
{ /* Inline kernel#Object#is_same_instance (var_e222,var_other) on <var_e222:nullable MPropDef(MPropDef)> */
var229 = var_e222 == var_other;
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
var225 = var227;
goto RET_LABEL226;
RET_LABEL226:(void)0;
}
var224 = var225;
}
if (var224){
var230 = 1;
{
{ /* Inline kernel#Int#+ (var_holes,var230) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <var230:Int> isa OTHER */
/* <var230:Int> isa OTHER */
var233 = 1; /* easy <var230:Int> isa OTHER*/
if (unlikely(!var233)) {
var_class_name236 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name236);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var237 = var_holes + var230;
var231 = var237;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
}
var_holes = var231;
} else {
}
CONTINUE_label238: (void)0;
{
array__ArrayIterator__next(var219); /* Direct call array#ArrayIterator#next on <var219:ArrayIterator[nullable Object]>*/
}
}
BREAK_label238: (void)0;
CONTINUE_label239: (void)0;
{
((void (*)(val*))(var205->class->vft[COLOR_abstract_collection__MapIterator__next]))(var205) /* next on <var205:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label239: (void)0;
if (varonce240) {
var241 = varonce240;
} else {
var242 = "\11";
var243 = 1;
var244 = string__NativeString__to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
if (varonce245) {
var246 = varonce245;
} else {
var247 = "\11";
var248 = 1;
var249 = string__NativeString__to_s_with_length(var247, var248);
var246 = var249;
varonce245 = var246;
}
var250 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var250 = array_instance Array[Object] */
var251 = 4;
var252 = NEW_array__NativeArray(var251, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var252)->values[0] = (val*) var241;
var253 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var252)->values[1] = (val*) var253;
((struct instance_array__NativeArray*)var252)->values[2] = (val*) var246;
var254 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var252)->values[3] = (val*) var254;
{
((void (*)(val*, val*, long))(var250->class->vft[COLOR_array__Array__with_native]))(var250, var252, var251) /* with_native on <var250:Array[Object]>*/;
}
}
{
var255 = ((val* (*)(val*))(var250->class->vft[COLOR_string__Object__to_s]))(var250) /* to_s on <var250:Array[Object]>*/;
}
{
file__Object__print(self, var255); /* Direct call file#Object#print on <self:SeparateCompiler>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
val* var55 /* : Range[Int] */;
long var56 /* : Int */;
long var57 /* : Int */;
val* var58 /* : Discrete */;
val* var59 /* : Discrete */;
val* var60 /* : Iterator[Discrete] */;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
long var_i /* var i: Int */;
long var63 /* : Int */;
val* var64 /* : Array[MParameter] */;
val* var66 /* : Array[MParameter] */;
val* var67 /* : nullable Object */;
val* var68 /* : MType */;
val* var70 /* : MType */;
val* var_t /* var t: MType */;
long var71 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
long var78 /* : Int */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 1;
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 896);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
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
var55 = NEW_range__Range(&type_range__Rangekernel__Int);
var56 = 0;
{
var57 = model__MSignature__arity(var_msignature);
}
{
var58 = BOX_kernel__Int(var56); /* autobox from Int to Discrete */
var59 = BOX_kernel__Int(var57); /* autobox from Int to Discrete */
range__Range__without_last(var55, var58, var59); /* Direct call range#Range#without_last on <var55:Range[Int]>*/
}
{
var60 = range__Range__iterator(var55);
}
for(;;) {
{
var61 = ((short int (*)(val*))(var60->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var60) /* is_ok on <var60:Iterator[Discrete]>*/;
}
if(!var61) break;
{
var62 = ((val* (*)(val*))(var60->class->vft[COLOR_abstract_collection__Iterator__item]))(var60) /* item on <var60:Iterator[Discrete]>*/;
}
var63 = ((struct instance_kernel__Int*)var62)->value; /* autounbox from nullable Object to Int */;
var_i = var63;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var66 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = array__Array___91d_93d(var64, var_i);
}
{
{ /* Inline model#MParameter#mtype (var67) on <var67:nullable Object(MParameter)> */
var70 = var67->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var67:nullable Object(MParameter)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_t = var68;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var73 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var71) on <var_i:Int> */
var77 = var_i == var71;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
var78 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var78) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var82 = var_i + var78;
var79 = var82;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
var83 = array__Array___91d_93d(var_args, var79);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var83) on <var83:nullable Object(RuntimeVariable)> */
var86 = var83->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var83:nullable Object(RuntimeVariable)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
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
CONTINUE_label: (void)0;
{
((void (*)(val*))(var60->class->vft[COLOR_abstract_collection__Iterator__next]))(var60) /* next on <var60:Iterator[Discrete]>*/;
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
val* var86 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var87 /* : Bool */;
val* var88 /* : AbstractCompiler */;
val* var90 /* : AbstractCompiler */;
val* var91 /* : nullable RapidTypeAnalysis */;
val* var93 /* : nullable RapidTypeAnalysis */;
val* var94 /* : null */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var_other98 /* var other: nullable Object */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var_102 /* var : Bool */;
val* var103 /* : AbstractCompiler */;
val* var105 /* : AbstractCompiler */;
val* var106 /* : nullable RapidTypeAnalysis */;
val* var108 /* : nullable RapidTypeAnalysis */;
val* var109 /* : HashSet[MClassType] */;
val* var111 /* : HashSet[MClassType] */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : MType */;
val* var121 /* : MType */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : FlatString */;
val* var132 /* : MType */;
val* var134 /* : MType */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
val* var140 /* : Array[Object] */;
long var141 /* : Int */;
val* var142 /* : NativeArray[Object] */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : FlatString */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : FlatString */;
val* var154 /* : String */;
val* var155 /* : Array[Object] */;
long var156 /* : Int */;
val* var157 /* : NativeArray[Object] */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : FlatString */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : FlatString */;
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
val* var188 /* : Array[Object] */;
long var189 /* : Int */;
val* var190 /* : NativeArray[Object] */;
val* var191 /* : String */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
val* var195 /* : MType */;
val* var197 /* : MType */;
val* var198 /* : String */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : FlatString */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
short int var_206 /* var : Bool */;
val* var207 /* : String */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : FlatString */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
short int var_215 /* var : Bool */;
short int var216 /* : Bool */;
val* var217 /* : MType */;
val* var219 /* : MType */;
val* var220 /* : String */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
long var224 /* : Int */;
val* var225 /* : FlatString */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
short int var_228 /* var : Bool */;
val* var229 /* : String */;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : NativeString */;
long var233 /* : Int */;
val* var234 /* : FlatString */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var_237 /* var : Bool */;
short int var238 /* : Bool */;
val* var239 /* : MType */;
val* var241 /* : MType */;
val* var242 /* : String */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
long var246 /* : Int */;
val* var247 /* : FlatString */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
short int var_250 /* var : Bool */;
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : FlatString */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
val* var259 /* : RuntimeVariable */;
val* var_res260 /* var res: RuntimeVariable */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
long var264 /* : Int */;
val* var265 /* : FlatString */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
long var269 /* : Int */;
val* var270 /* : FlatString */;
val* var271 /* : MType */;
val* var273 /* : MType */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
long var277 /* : Int */;
val* var278 /* : FlatString */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : NativeString */;
long var282 /* : Int */;
val* var283 /* : FlatString */;
val* var284 /* : Array[Object] */;
long var285 /* : Int */;
val* var286 /* : NativeArray[Object] */;
val* var287 /* : String */;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : NativeString */;
long var291 /* : Int */;
val* var292 /* : FlatString */;
val* var293 /* : MType */;
val* var295 /* : MType */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
long var299 /* : Int */;
val* var300 /* : FlatString */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : FlatString */;
val* var306 /* : Array[Object] */;
long var307 /* : Int */;
val* var308 /* : NativeArray[Object] */;
val* var309 /* : String */;
var_value = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
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
var45 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__c_instance_name]))(var_mtype) /* c_instance_name on <var_mtype:MType>*/;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 919);
show_backtrace(1);
}
var_valtype = var82;
{
var86 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_mtype);
}
var_res = var86;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var90 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var88) on <var88:AbstractCompiler(SeparateCompiler)> */
var93 = var88->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var88:AbstractCompiler(SeparateCompiler)> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var94 = NULL;
if (var91 == NULL) {
var95 = 0; /* is null */
} else {
var95 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var91,var94) on <var91:nullable RapidTypeAnalysis> */
var_other98 = var94;
{
var100 = ((short int (*)(val*, val*))(var91->class->vft[COLOR_kernel__Object___61d_61d]))(var91, var_other98) /* == on <var91:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var99 = var100;
}
var101 = !var99;
var96 = var101;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
var_102 = var95;
if (var95){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var105 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var103) on <var103:AbstractCompiler(SeparateCompiler)> */
var108 = var103->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var103:AbstractCompiler(SeparateCompiler)> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
if (var106 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 921);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var106) on <var106:nullable RapidTypeAnalysis> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var111 = var106->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var106:nullable RapidTypeAnalysis> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
var112 = hash_collection__HashSet__has(var109, var_valtype);
}
var113 = !var112;
var87 = var113;
} else {
var87 = var_102;
}
if (var87){
if (varonce114) {
var115 = varonce114;
} else {
var116 = "/*no autobox from ";
var117 = 18;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var121 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " to ";
var125 = 4;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = ": ";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var134 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = " is not live! */";
var138 = 16;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
var140 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var140 = array_instance Array[Object] */
var141 = 7;
var142 = NEW_array__NativeArray(var141, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var142)->values[0] = (val*) var115;
((struct instance_array__NativeArray*)var142)->values[1] = (val*) var119;
((struct instance_array__NativeArray*)var142)->values[2] = (val*) var123;
((struct instance_array__NativeArray*)var142)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var142)->values[4] = (val*) var128;
((struct instance_array__NativeArray*)var142)->values[5] = (val*) var132;
((struct instance_array__NativeArray*)var142)->values[6] = (val*) var136;
{
((void (*)(val*, val*, long))(var140->class->vft[COLOR_array__Array__with_native]))(var140, var142, var141) /* with_native on <var140:Array[Object]>*/;
}
}
{
var143 = ((val* (*)(val*))(var140->class->vft[COLOR_string__Object__to_s]))(var140) /* to_s on <var140:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = "PRINT_ERROR(\"Dead code executed!\\n\"); show_backtrace(1);";
var147 = 56;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var145); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce149) {
var150 = varonce149;
} else {
var151 = "BOX_";
var152 = 4;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
{
var154 = ((val* (*)(val*))(var_valtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
var155 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var155 = array_instance Array[Object] */
var156 = 2;
var157 = NEW_array__NativeArray(var156, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var157)->values[0] = (val*) var150;
((struct instance_array__NativeArray*)var157)->values[1] = (val*) var154;
{
((void (*)(val*, val*, long))(var155->class->vft[COLOR_array__Array__with_native]))(var155, var157, var156) /* with_native on <var155:Array[Object]>*/;
}
}
{
var158 = ((val* (*)(val*))(var155->class->vft[COLOR_string__Object__to_s]))(var155) /* to_s on <var155:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var158); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = " = BOX_";
var162 = 7;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
var164 = ((val* (*)(val*))(var_valtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = "(";
var168 = 1;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = "); /* autobox from ";
var173 = 19;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var177 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
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
var185 = " */";
var186 = 3;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 10;
var190 = NEW_array__NativeArray(var189, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var190)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var190)->values[1] = (val*) var160;
((struct instance_array__NativeArray*)var190)->values[2] = (val*) var164;
((struct instance_array__NativeArray*)var190)->values[3] = (val*) var166;
((struct instance_array__NativeArray*)var190)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var190)->values[5] = (val*) var171;
((struct instance_array__NativeArray*)var190)->values[6] = (val*) var175;
((struct instance_array__NativeArray*)var190)->values[7] = (val*) var179;
((struct instance_array__NativeArray*)var190)->values[8] = (val*) var_mtype;
((struct instance_array__NativeArray*)var190)->values[9] = (val*) var184;
{
((void (*)(val*, val*, long))(var188->class->vft[COLOR_array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
}
{
var191 = ((val* (*)(val*))(var188->class->vft[COLOR_string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var191); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var197 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
var198 = ((val* (*)(val*))(var195->class->vft[COLOR_abstract_compiler__MType__ctype]))(var195) /* ctype on <var195:MType>*/;
}
if (varonce199) {
var200 = varonce199;
} else {
var201 = "void*";
var202 = 5;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
{
var205 = string__FlatString___61d_61d(var198, var200);
var204 = var205;
}
var_206 = var204;
if (var204){
{
var207 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce208) {
var209 = varonce208;
} else {
var210 = "void*";
var211 = 5;
var212 = string__NativeString__to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
{
var214 = string__FlatString___61d_61d(var207, var209);
var213 = var214;
}
var194 = var213;
} else {
var194 = var_206;
}
var_215 = var194;
if (var194){
var193 = var_215;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var219 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var219 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
{
var220 = ((val* (*)(val*))(var217->class->vft[COLOR_abstract_compiler__MType__ctype]))(var217) /* ctype on <var217:MType>*/;
}
if (varonce221) {
var222 = varonce221;
} else {
var223 = "char*";
var224 = 5;
var225 = string__NativeString__to_s_with_length(var223, var224);
var222 = var225;
varonce221 = var222;
}
{
var227 = string__FlatString___61d_61d(var220, var222);
var226 = var227;
}
var_228 = var226;
if (var226){
{
var229 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce230) {
var231 = varonce230;
} else {
var232 = "void*";
var233 = 5;
var234 = string__NativeString__to_s_with_length(var232, var233);
var231 = var234;
varonce230 = var231;
}
{
var236 = string__FlatString___61d_61d(var229, var231);
var235 = var236;
}
var216 = var235;
} else {
var216 = var_228;
}
var193 = var216;
}
var_237 = var193;
if (var193){
var192 = var_237;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var241 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
{
var242 = ((val* (*)(val*))(var239->class->vft[COLOR_abstract_compiler__MType__ctype]))(var239) /* ctype on <var239:MType>*/;
}
if (varonce243) {
var244 = varonce243;
} else {
var245 = "void*";
var246 = 5;
var247 = string__NativeString__to_s_with_length(var245, var246);
var244 = var247;
varonce243 = var244;
}
{
var249 = string__FlatString___61d_61d(var242, var244);
var248 = var249;
}
var_250 = var248;
if (var248){
{
var251 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce252) {
var253 = varonce252;
} else {
var254 = "char*";
var255 = 5;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
{
var258 = string__FlatString___61d_61d(var251, var253);
var257 = var258;
}
var238 = var257;
} else {
var238 = var_250;
}
var192 = var238;
}
if (var192){
var = var_value;
goto RET_LABEL;
} else {
{
var259 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_mtype);
}
var_res260 = var259;
if (varonce261) {
var262 = varonce261;
} else {
var263 = "/* ";
var264 = 3;
var265 = string__NativeString__to_s_with_length(var263, var264);
var262 = var265;
varonce261 = var262;
}
if (varonce266) {
var267 = varonce266;
} else {
var268 = " left unintialized (cannot convert ";
var269 = 35;
var270 = string__NativeString__to_s_with_length(var268, var269);
var267 = var270;
varonce266 = var267;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var273 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var273 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var271 = var273;
RET_LABEL272:(void)0;
}
}
if (varonce274) {
var275 = varonce274;
} else {
var276 = " to ";
var277 = 4;
var278 = string__NativeString__to_s_with_length(var276, var277);
var275 = var278;
varonce274 = var275;
}
if (varonce279) {
var280 = varonce279;
} else {
var281 = ") */";
var282 = 4;
var283 = string__NativeString__to_s_with_length(var281, var282);
var280 = var283;
varonce279 = var280;
}
var284 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var284 = array_instance Array[Object] */
var285 = 7;
var286 = NEW_array__NativeArray(var285, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var286)->values[0] = (val*) var262;
((struct instance_array__NativeArray*)var286)->values[1] = (val*) var_res260;
((struct instance_array__NativeArray*)var286)->values[2] = (val*) var267;
((struct instance_array__NativeArray*)var286)->values[3] = (val*) var271;
((struct instance_array__NativeArray*)var286)->values[4] = (val*) var275;
((struct instance_array__NativeArray*)var286)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var286)->values[6] = (val*) var280;
{
((void (*)(val*, val*, long))(var284->class->vft[COLOR_array__Array__with_native]))(var284, var286, var285) /* with_native on <var284:Array[Object]>*/;
}
}
{
var287 = ((val* (*)(val*))(var284->class->vft[COLOR_string__Object__to_s]))(var284) /* to_s on <var284:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var287); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce288) {
var289 = varonce288;
} else {
var290 = "PRINT_ERROR(\"Cast error: Cannot cast %s to %s.\\n\", \"";
var291 = 52;
var292 = string__NativeString__to_s_with_length(var290, var291);
var289 = var292;
varonce288 = var289;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var295 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var295 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var293 = var295;
RET_LABEL294:(void)0;
}
}
if (varonce296) {
var297 = varonce296;
} else {
var298 = "\", \"";
var299 = 4;
var300 = string__NativeString__to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
if (varonce301) {
var302 = varonce301;
} else {
var303 = "\"); show_backtrace(1);";
var304 = 22;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
var306 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var306 = array_instance Array[Object] */
var307 = 5;
var308 = NEW_array__NativeArray(var307, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var308)->values[0] = (val*) var289;
((struct instance_array__NativeArray*)var308)->values[1] = (val*) var293;
((struct instance_array__NativeArray*)var308)->values[2] = (val*) var297;
((struct instance_array__NativeArray*)var308)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var308)->values[4] = (val*) var302;
{
((void (*)(val*, val*, long))(var306->class->vft[COLOR_array__Array__with_native]))(var306, var308, var307) /* with_native on <var306:Array[Object]>*/;
}
}
{
var309 = ((val* (*)(val*))(var306->class->vft[COLOR_string__Object__to_s]))(var306) /* to_s on <var306:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var309); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res260;
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
/* method separate_compiler#SeparateCompilerVisitor#type_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* separate_compiler__SeparateCompilerVisitor__type_info(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : Set[MType] */;
val* var25 /* : Set[MType] */;
val* var26 /* : MType */;
val* var28 /* : MType */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : MType */;
val* var36 /* : MType */;
val* var37 /* : String */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : MType */;
val* var49 /* : MType */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__MType__ctype]))(var1) /* ctype on <var1:MType>*/;
}
if (varonce) {
var5 = varonce;
} else {
var6 = "val*";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var10 = string__FlatString___61d_61d(var4, var5);
var9 = var10;
}
if (var9){
if (varonce11) {
var12 = varonce11;
} else {
var13 = "->type";
var14 = 6;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 2;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var_value;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
var = var19;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var22 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var20) on <var20:AbstractCompiler(SeparateCompiler)> */
var25 = var20->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var20:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 155);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var28 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
((void (*)(val*, val*))(var23->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var23, var26) /* add on <var23:Set[MType]>*/;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "type_";
var32 = 5;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var36 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_compiler__MType__c_name]))(var34) /* c_name on <var34:MType>*/;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 2;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var30;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var37;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "(&type_";
var45 = 7;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var49 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_abstract_compiler__MType__c_name]))(var47) /* c_name on <var47:MType>*/;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ")";
var54 = 1;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 3;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var43;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var50;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var52;
{
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
}
{
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
}
var = var59;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_info for (self: Object, RuntimeVariable): String */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateCompilerVisitor__type_info(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#compile_callsite for (self: SeparateCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : nullable RapidTypeAnalysis */;
val* var6 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
val* var7 /* : nullable Object */;
val* var8 /* : MType */;
val* var10 /* : MType */;
val* var_recv /* var recv: MType */;
short int var11 /* : Bool */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : ModelBuilder */;
val* var17 /* : ModelBuilder */;
val* var18 /* : ToolContext */;
val* var20 /* : ToolContext */;
val* var21 /* : OptionBool */;
val* var23 /* : OptionBool */;
val* var24 /* : nullable Object */;
val* var26 /* : nullable Object */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : Set[MMethodDef] */;
val* var_tgs /* var tgs: Set[MMethodDef] */;
long var36 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : MMethod */;
val* var44 /* : MMethod */;
val* var_mmethod /* var mmethod: MMethod */;
val* var45 /* : MPropDef */;
val* var46 /* : MPropDef */;
val* var47 /* : nullable MSignature */;
val* var49 /* : nullable MSignature */;
val* var50 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var51 /* : nullable Object */;
val* var52 /* : nullable Object */;
val* var53 /* : MClassDef */;
val* var55 /* : MClassDef */;
val* var56 /* : MClassType */;
val* var58 /* : MClassType */;
val* var59 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var60 /* : null */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : null */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
static val* varonce;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_args = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var1:AbstractCompiler(SeparateCompiler)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_rta = var4;
{
var7 = abstract_collection__SequenceRead__first(var_args);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var7) on <var7:nullable Object(RuntimeVariable)> */
var10 = var7->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var7:nullable Object(RuntimeVariable)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_recv = var8;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var14 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var12) on <var12:AbstractCompiler(SeparateCompiler)> */
var17 = var12->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var12:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var15) on <var15:ModelBuilder> */
var20 = var15->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var15:ModelBuilder> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_direct_call_monomorph (var18) on <var18:ToolContext> */
var23 = var18->attrs[COLOR_separate_compiler__ToolContext___opt_direct_call_monomorph].val; /* _opt_direct_call_monomorph on <var18:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 36);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline opts#Option#value (var21) on <var21:OptionBool> */
var26 = var21->attrs[COLOR_opts__Option___value].val; /* _value on <var21:OptionBool> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = ((struct instance_kernel__Bool*)var24)->value; /* autounbox from nullable Object to Bool */;
var_ = var27;
if (var27){
var28 = NULL;
if (var_rta == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var28) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var28;
{
var33 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var32 = var33;
}
var34 = !var32;
var30 = var34;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
var11 = var29;
} else {
var11 = var_;
}
if (var11){
{
var35 = rapid_type_analysis__RapidTypeAnalysis__live_targets(var_rta, var_callsite);
}
var_tgs = var35;
{
var36 = ((long (*)(val*))(var_tgs->class->vft[COLOR_abstract_collection__Collection__length]))(var_tgs) /* length on <var_tgs:Set[MMethodDef]>*/;
}
var37 = 1;
{
{ /* Inline kernel#Int#== (var36,var37) on <var36:Int> */
var41 = var36 == var37;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var44 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_mmethod = var42;
{
var45 = model__MProperty__intro(var_mmethod);
}
{
var46 = model__MProperty__intro(var_mmethod);
}
{
{ /* Inline model#MMethodDef#msignature (var46) on <var46:MPropDef(MMethodDef)> */
var49 = var46->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var46:MPropDef(MMethodDef)> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 964);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__varargize(self, var45, var47, var_args); /* Direct call abstract_compiler#AbstractCompilerVisitor#varargize on <self:SeparateCompilerVisitor>*/
}
{
var50 = separate_compiler__SeparateCompilerVisitor__before_send(self, var_mmethod, var_args);
}
var_res0 = var50;
{
var51 = ((val* (*)(val*))(var_tgs->class->vft[COLOR_abstract_collection__Collection__first]))(var_tgs) /* first on <var_tgs:Set[MMethodDef]>*/;
}
{
var52 = ((val* (*)(val*))(var_tgs->class->vft[COLOR_abstract_collection__Collection__first]))(var_tgs) /* first on <var_tgs:Set[MMethodDef]>*/;
}
{
{ /* Inline model#MPropDef#mclassdef (var52) on <var52:nullable Object(MMethodDef)> */
var55 = var52->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var52:nullable Object(MMethodDef)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var53) on <var53:MClassDef> */
var58 = var53->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var53:MClassDef> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = separate_compiler__SeparateCompilerVisitor__call(self, var51, var56, var_args);
}
var_res = var59;
var60 = NULL;
if (var_res0 == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res0,var60) on <var_res0:nullable RuntimeVariable> */
var_other = var60;
{
var65 = ((short int (*)(val*, val*))(var_res0->class->vft[COLOR_kernel__Object___61d_61d]))(var_res0, var_other) /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/;
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
var67 = NULL;
if (var_res == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var67) on <var_res:nullable RuntimeVariable> */
var_other = var67;
{
var72 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var71 = var72;
}
var73 = !var71;
var69 = var73;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (unlikely(!var68)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 968);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(self, var_res0, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (varonce) {
var74 = varonce;
} else {
var75 = "}";
var76 = 1;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce = var74;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var74); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
{
var78 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__compile_callsite]))(self, p0, p1) /* compile_callsite on <self:SeparateCompilerVisitor>*/;
}
var = var78;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#compile_callsite for (self: Object, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__compile_callsite(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : MPropDef */;
val* var2 /* : MPropDef */;
val* var3 /* : nullable MSignature */;
val* var5 /* : nullable MSignature */;
val* var6 /* : nullable Object */;
val* var7 /* : MType */;
val* var9 /* : MType */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : AbstractCompiler */;
val* var23 /* : AbstractCompiler */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var_m /* var m: MModule */;
val* var27 /* : AbstractCompiler */;
val* var29 /* : AbstractCompiler */;
val* var30 /* : AbstractCompiler */;
val* var32 /* : AbstractCompiler */;
val* var33 /* : MModule */;
val* var35 /* : MModule */;
val* var37 /* : nullable Object */;
val* var38 /* : MType */;
val* var40 /* : MType */;
val* var41 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var42 /* : AbstractCompiler */;
val* var44 /* : AbstractCompiler */;
val* var46 /* : String */;
val* var47 /* : nullable RuntimeVariable */;
var_mmethod = p0;
var_arguments = p1;
{
var1 = model__MProperty__intro(var_mmethod);
}
{
var2 = model__MProperty__intro(var_mmethod);
}
{
{ /* Inline model#MMethodDef#msignature (var2) on <var2:MPropDef(MMethodDef)> */
var5 = var2->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var2:MPropDef(MMethodDef)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 980);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__varargize(self, var1, var3, var_arguments); /* Direct call abstract_compiler#AbstractCompilerVisitor#varargize on <self:SeparateCompilerVisitor>*/
}
{
var6 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var6) on <var6:nullable Object(RuntimeVariable)> */
var9 = var6->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var6:nullable Object(RuntimeVariable)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_compiler__MType__ctype]))(var7) /* ctype on <var7:MType>*/;
}
if (varonce) {
var11 = varonce;
} else {
var12 = "val*";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
{ /* Inline kernel#Object#!= (var10,var11) on <var10:String> */
var_other = var11;
{
var19 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var_other) /* == on <var10:String>*/;
var18 = var19;
}
var20 = !var18;
var16 = var20;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var23 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var21) on <var21:AbstractCompiler(SeparateCompiler)> */
var26 = var21->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var21:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_m = var24;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var29 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var32 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule (var30) on <var30:AbstractCompiler(SeparateCompiler)> */
var35 = var30->attrs[COLOR_abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var30:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 440);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var27,var33) on <var27:AbstractCompiler(SeparateCompiler)> */
var27->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var33; /* _mainmodule on <var27:AbstractCompiler(SeparateCompiler)> */
RET_LABEL36:(void)0;
}
}
{
var37 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var37) on <var37:nullable Object(RuntimeVariable)> */
var40 = var37->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var37:nullable Object(RuntimeVariable)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = abstract_compiler__AbstractCompilerVisitor__monomorphic_send(self, var_mmethod, var38, var_arguments);
}
var_res = var41;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var44 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var42,var_m) on <var42:AbstractCompiler(SeparateCompiler)> */
var42->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var_m; /* _mainmodule on <var42:AbstractCompiler(SeparateCompiler)> */
RET_LABEL45:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var46 = separate_compiler__MProperty__const_color(var_mmethod);
}
{
var47 = separate_compiler__SeparateCompilerVisitor__table_send(self, var_mmethod, var_arguments, var46);
}
var = var47;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#send for (self: Object, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__send(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#before_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__before_send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var2 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var16 /* : OptionBool */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
val* var22 /* : String */;
val* var24 /* : String */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
val* var32 /* : String */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var_consider_null /* var consider_null: Bool */;
short int var42 /* : Bool */;
val* var43 /* : MType */;
val* var45 /* : MType */;
short int var46 /* : Bool */;
int cltype;
int idtype;
short int var_47 /* var : Bool */;
short int var_maybenull /* var maybenull: Bool */;
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
val* var62 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : MClassType */;
val* var73 /* : RuntimeVariable */;
long var74 /* : Int */;
val* var75 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var76 /* : MType */;
val* var78 /* : MType */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
val* var96 /* : MType */;
val* var98 /* : MType */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
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
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : FlatString */;
val* var122 /* : Array[Object] */;
long var123 /* : Int */;
val* var124 /* : NativeArray[Object] */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
val* var136 /* : MClassType */;
val* var137 /* : RuntimeVariable */;
long var138 /* : Int */;
val* var139 /* : nullable Object */;
val* var_arg140 /* var arg: RuntimeVariable */;
val* var141 /* : MType */;
val* var143 /* : MType */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : FlatString */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
val* var157 /* : Array[Object] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[Object] */;
val* var160 /* : String */;
val* var161 /* : MType */;
val* var163 /* : MType */;
short int var164 /* : Bool */;
int cltype165;
int idtype166;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : Array[Object] */;
long var173 /* : Int */;
val* var174 /* : NativeArray[Object] */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : FlatString */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : FlatString */;
val* var187 /* : Array[Object] */;
long var188 /* : Int */;
val* var189 /* : NativeArray[Object] */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : FlatString */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : FlatString */;
short int var206 /* : Bool */;
val* var207 /* : AbstractCompiler */;
val* var209 /* : AbstractCompiler */;
val* var210 /* : ModelBuilder */;
val* var212 /* : ModelBuilder */;
val* var213 /* : ToolContext */;
val* var215 /* : ToolContext */;
val* var216 /* : OptionBool */;
val* var218 /* : OptionBool */;
val* var219 /* : nullable Object */;
val* var221 /* : nullable Object */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var_224 /* var : Bool */;
short int var225 /* : Bool */;
val* var226 /* : String */;
val* var228 /* : String */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : FlatString */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var_236 /* var : Bool */;
val* var237 /* : String */;
val* var239 /* : String */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
long var243 /* : Int */;
val* var244 /* : FlatString */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
val* var247 /* : null */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
val* var254 /* : MClassType */;
val* var255 /* : RuntimeVariable */;
long var256 /* : Int */;
val* var257 /* : nullable Object */;
val* var_arg258 /* var arg: RuntimeVariable */;
val* var259 /* : MType */;
val* var261 /* : MType */;
short int var262 /* : Bool */;
int cltype263;
int idtype264;
val* var265 /* : String */;
val* var267 /* : String */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : FlatString */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : FlatString */;
val* var280 /* : Array[Object] */;
long var281 /* : Int */;
val* var282 /* : NativeArray[Object] */;
val* var283 /* : String */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
long var287 /* : Int */;
val* var288 /* : FlatString */;
val* var289 /* : Array[Object] */;
long var290 /* : Int */;
val* var291 /* : NativeArray[Object] */;
val* var292 /* : String */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
long var296 /* : Int */;
val* var297 /* : FlatString */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : FlatString */;
var_mmethod = p0;
var_arguments = p1;
var1 = NULL;
var_res = var1;
{
var2 = abstract_collection__SequenceRead__first(var_arguments);
}
var_recv = var2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var7 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler(SeparateCompiler)> */
var10 = var5->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_other (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_other].val; /* _opt_no_check_other on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_other");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 54);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts#Option#value (var14) on <var14:OptionBool> */
var19 = var14->attrs[COLOR_opts__Option___value].val; /* _value on <var14:OptionBool> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = ((struct instance_kernel__Bool*)var17)->value; /* autounbox from nullable Object to Bool */;
var21 = !var20;
var_ = var21;
if (var21){
var4 = var_;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var24 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (varonce) {
var25 = varonce;
} else {
var26 = "==";
var27 = 2;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
var30 = string__FlatString___61d_61d(var22, var25);
var29 = var30;
}
var4 = var29;
}
var_31 = var4;
if (var4){
var3 = var_31;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var34 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "!=";
var38 = 2;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
var41 = string__FlatString___61d_61d(var32, var36);
var40 = var41;
}
var3 = var40;
}
var_consider_null = var3;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var45 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
/* <var43:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var43->type->table_size) {
var46 = 0;
} else {
var46 = var43->type->type_table[cltype] == idtype;
}
var_47 = var46;
if (var46){
var42 = var_consider_null;
} else {
var42 = var_47;
}
var_maybenull = var42;
if (var_maybenull){
if (varonce48) {
var49 = varonce48;
} else {
var50 = "if (";
var51 = 4;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = " == NULL) {";
var56 = 11;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 3;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var49;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var54;
{
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var64 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "==";
var68 = 2;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
var71 = string__FlatString___61d_61d(var62, var66);
var70 = var71;
}
if (var70){
{
var72 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var73 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var72);
}
var_res = var73;
var74 = 1;
{
var75 = array__Array___91d_93d(var_arguments, var74);
}
var_arg = var75;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var78 = var_arg->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
/* <var76:MType> isa MNullableType */
cltype80 = type_model__MNullableType.color;
idtype81 = type_model__MNullableType.id;
if(cltype80 >= var76->type->table_size) {
var79 = 0;
} else {
var79 = var76->type->type_table[cltype80] == idtype81;
}
if (var79){
if (varonce82) {
var83 = varonce82;
} else {
var84 = " = (";
var85 = 4;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = " == NULL);";
var90 = 10;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 4;
var94 = NEW_array__NativeArray(var93, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var94)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var94)->values[1] = (val*) var83;
((struct instance_array__NativeArray*)var94)->values[2] = (val*) var_arg;
((struct instance_array__NativeArray*)var94)->values[3] = (val*) var88;
{
((void (*)(val*, val*, long))(var92->class->vft[COLOR_array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
}
{
var95 = ((val* (*)(val*))(var92->class->vft[COLOR_string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var95); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var98 = var_arg->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
/* <var96:MType> isa MNullType */
cltype100 = type_model__MNullType.color;
idtype101 = type_model__MNullType.id;
if(cltype100 >= var96->type->table_size) {
var99 = 0;
} else {
var99 = var96->type->type_table[cltype100] == idtype101;
}
if (var99){
if (varonce102) {
var103 = varonce102;
} else {
var104 = " = 1; /* is null */";
var105 = 19;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 2;
var109 = NEW_array__NativeArray(var108, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var109)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var109)->values[1] = (val*) var103;
{
((void (*)(val*, val*, long))(var107->class->vft[COLOR_array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
}
{
var110 = ((val* (*)(val*))(var107->class->vft[COLOR_string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var110); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce111) {
var112 = varonce111;
} else {
var113 = " = 0; /* ";
var114 = 9;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
{
var116 = abstract_compiler__RuntimeVariable__inspect(var_arg);
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = " cannot be null */";
var120 = 18;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
var122 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var122 = array_instance Array[Object] */
var123 = 4;
var124 = NEW_array__NativeArray(var123, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var124)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var124)->values[1] = (val*) var112;
((struct instance_array__NativeArray*)var124)->values[2] = (val*) var116;
((struct instance_array__NativeArray*)var124)->values[3] = (val*) var118;
{
((void (*)(val*, val*, long))(var122->class->vft[COLOR_array__Array__with_native]))(var122, var124, var123) /* with_native on <var122:Array[Object]>*/;
}
}
{
var125 = ((val* (*)(val*))(var122->class->vft[COLOR_string__Object__to_s]))(var122) /* to_s on <var122:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var125); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var128 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = "!=";
var132 = 2;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
{
var135 = string__FlatString___61d_61d(var126, var130);
var134 = var135;
}
if (var134){
{
var136 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var137 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var136);
}
var_res = var137;
var138 = 1;
{
var139 = array__Array___91d_93d(var_arguments, var138);
}
var_arg140 = var139;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg140) on <var_arg140:RuntimeVariable> */
var143 = var_arg140->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg140:RuntimeVariable> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
/* <var141:MType> isa MNullableType */
cltype145 = type_model__MNullableType.color;
idtype146 = type_model__MNullableType.id;
if(cltype145 >= var141->type->table_size) {
var144 = 0;
} else {
var144 = var141->type->type_table[cltype145] == idtype146;
}
if (var144){
if (varonce147) {
var148 = varonce147;
} else {
var149 = " = (";
var150 = 4;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = " != NULL);";
var155 = 10;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var157 = array_instance Array[Object] */
var158 = 4;
var159 = NEW_array__NativeArray(var158, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var159)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var159)->values[1] = (val*) var148;
((struct instance_array__NativeArray*)var159)->values[2] = (val*) var_arg140;
((struct instance_array__NativeArray*)var159)->values[3] = (val*) var153;
{
((void (*)(val*, val*, long))(var157->class->vft[COLOR_array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[Object]>*/;
}
}
{
var160 = ((val* (*)(val*))(var157->class->vft[COLOR_string__Object__to_s]))(var157) /* to_s on <var157:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var160); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg140) on <var_arg140:RuntimeVariable> */
var163 = var_arg140->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg140:RuntimeVariable> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
/* <var161:MType> isa MNullType */
cltype165 = type_model__MNullType.color;
idtype166 = type_model__MNullType.id;
if(cltype165 >= var161->type->table_size) {
var164 = 0;
} else {
var164 = var161->type->type_table[cltype165] == idtype166;
}
if (var164){
if (varonce167) {
var168 = varonce167;
} else {
var169 = " = 0; /* is null */";
var170 = 19;
var171 = string__NativeString__to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
var172 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var172 = array_instance Array[Object] */
var173 = 2;
var174 = NEW_array__NativeArray(var173, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var174)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var174)->values[1] = (val*) var168;
{
((void (*)(val*, val*, long))(var172->class->vft[COLOR_array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[Object]>*/;
}
}
{
var175 = ((val* (*)(val*))(var172->class->vft[COLOR_string__Object__to_s]))(var172) /* to_s on <var172:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var175); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce176) {
var177 = varonce176;
} else {
var178 = " = 1; /* ";
var179 = 9;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
{
var181 = abstract_compiler__RuntimeVariable__inspect(var_arg140);
}
if (varonce182) {
var183 = varonce182;
} else {
var184 = " cannot be null */";
var185 = 18;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
var187 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var187 = array_instance Array[Object] */
var188 = 4;
var189 = NEW_array__NativeArray(var188, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var189)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var189)->values[1] = (val*) var177;
((struct instance_array__NativeArray*)var189)->values[2] = (val*) var181;
((struct instance_array__NativeArray*)var189)->values[3] = (val*) var183;
{
((void (*)(val*, val*, long))(var187->class->vft[COLOR_array__Array__with_native]))(var187, var189, var188) /* with_native on <var187:Array[Object]>*/;
}
}
{
var190 = ((val* (*)(val*))(var187->class->vft[COLOR_string__Object__to_s]))(var187) /* to_s on <var187:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var190); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (varonce191) {
var192 = varonce191;
} else {
var193 = "Receiver is null";
var194 = 16;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var192); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
}
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = "} else {";
var199 = 8;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var197); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce201) {
var202 = varonce201;
} else {
var203 = "{";
var204 = 1;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var202); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var209 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var207) on <var207:AbstractCompiler(SeparateCompiler)> */
var212 = var207->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var207:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var210) on <var210:ModelBuilder> */
var215 = var210->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var210:ModelBuilder> */
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_shortcut_equate (var213) on <var213:ToolContext> */
var218 = var213->attrs[COLOR_separate_compiler__ToolContext___opt_no_shortcut_equate].val; /* _opt_no_shortcut_equate on <var213:ToolContext> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_equate");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 30);
show_backtrace(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
{
{ /* Inline opts#Option#value (var216) on <var216:OptionBool> */
var221 = var216->attrs[COLOR_opts__Option___value].val; /* _value on <var216:OptionBool> */
var219 = var221;
RET_LABEL220:(void)0;
}
}
var222 = ((struct instance_kernel__Bool*)var219)->value; /* autounbox from nullable Object to Bool */;
var223 = !var222;
var_224 = var223;
if (var223){
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var228 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
if (varonce229) {
var230 = varonce229;
} else {
var231 = "==";
var232 = 2;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
{
var235 = string__FlatString___61d_61d(var226, var230);
var234 = var235;
}
var_236 = var234;
if (var234){
var225 = var_236;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var239 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (varonce240) {
var241 = varonce240;
} else {
var242 = "!=";
var243 = 2;
var244 = string__NativeString__to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
{
var246 = string__FlatString___61d_61d(var237, var241);
var245 = var246;
}
var225 = var245;
}
var206 = var225;
} else {
var206 = var_224;
}
if (var206){
var247 = NULL;
if (var_res == NULL) {
var248 = 1; /* is null */
} else {
var248 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var247) on <var_res:nullable RuntimeVariable> */
var_other = var247;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var253 = var_res == var_other;
var251 = var253;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
}
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
var248 = var249;
}
if (var248){
{
var254 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var255 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var254);
}
var_res = var255;
} else {
}
var256 = 1;
{
var257 = array__Array___91d_93d(var_arguments, var256);
}
var_arg258 = var257;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg258) on <var_arg258:RuntimeVariable> */
var261 = var_arg258->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg258:RuntimeVariable> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
/* <var259:MType> isa MNullType */
cltype263 = type_model__MNullType.color;
idtype264 = type_model__MNullType.id;
if(cltype263 >= var259->type->table_size) {
var262 = 0;
} else {
var262 = var259->type->type_table[cltype263] == idtype264;
}
if (var262){
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var267 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var267 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = "==";
var271 = 2;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
{
var274 = string__FlatString___61d_61d(var265, var269);
var273 = var274;
}
if (var273){
if (varonce275) {
var276 = varonce275;
} else {
var277 = " = 0; /* arg is null but recv is not */";
var278 = 39;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
var280 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var280 = array_instance Array[Object] */
var281 = 2;
var282 = NEW_array__NativeArray(var281, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var282)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var282)->values[1] = (val*) var276;
{
((void (*)(val*, val*, long))(var280->class->vft[COLOR_array__Array__with_native]))(var280, var282, var281) /* with_native on <var280:Array[Object]>*/;
}
}
{
var283 = ((val* (*)(val*))(var280->class->vft[COLOR_string__Object__to_s]))(var280) /* to_s on <var280:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var283); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce284) {
var285 = varonce284;
} else {
var286 = " = 1; /* arg is null and recv is not */";
var287 = 39;
var288 = string__NativeString__to_s_with_length(var286, var287);
var285 = var288;
varonce284 = var285;
}
var289 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var289 = array_instance Array[Object] */
var290 = 2;
var291 = NEW_array__NativeArray(var290, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var291)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var291)->values[1] = (val*) var285;
{
((void (*)(val*, val*, long))(var289->class->vft[COLOR_array__Array__with_native]))(var289, var291, var290) /* with_native on <var289:Array[Object]>*/;
}
}
{
var292 = ((val* (*)(val*))(var289->class->vft[COLOR_string__Object__to_s]))(var289) /* to_s on <var289:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var292); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
if (varonce293) {
var294 = varonce293;
} else {
var295 = "}";
var296 = 1;
var297 = string__NativeString__to_s_with_length(var295, var296);
var294 = var297;
varonce293 = var294;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var294); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce298) {
var299 = varonce298;
} else {
var300 = "if (0) {";
var301 = 8;
var302 = string__NativeString__to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var299); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#before_send for (self: Object, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__before_send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__before_send(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
