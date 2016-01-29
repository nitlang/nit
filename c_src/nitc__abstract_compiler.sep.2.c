#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler#AbstractCompiler#compile_main_function for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_main_function(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : Platform */;
val* var6 /* : Platform */;
val* var_platform /* var platform: Platform */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : ModelBuilder */;
val* var11 /* : ModelBuilder */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : OptionBool */;
val* var17 /* : OptionBool */;
val* var18 /* : nullable Object */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
short int var_no_main /* var no_main: Bool */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
val* var55 /* : ModelBuilder */;
val* var57 /* : ModelBuilder */;
val* var58 /* : ToolContext */;
val* var60 /* : ToolContext */;
val* var61 /* : OptionBool */;
val* var63 /* : OptionBool */;
val* var64 /* : nullable Object */;
val* var66 /* : nullable Object */;
short int var67 /* : Bool */;
val* var68 /* : Array[String] */;
val* var70 /* : Array[String] */;
val* var_71 /* var : Array[String] */;
val* var72 /* : IndexedIterator[nullable Object] */;
val* var_73 /* var : IndexedIterator[String] */;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
val* var86 /* : String */;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var109 /* : AbstractCompiler */;
val* var111 /* : AbstractCompiler */;
val* var112 /* : CodeWriter */;
val* var114 /* : CodeWriter */;
val* var116 /* : NativeArray[String] */;
static val* varonce115;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : AbstractCompiler */;
val* var128 /* : AbstractCompiler */;
val* var129 /* : CodeWriter */;
val* var131 /* : CodeWriter */;
val* var133 /* : NativeArray[String] */;
static val* varonce132;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : String */;
val* var142 /* : String */;
val* var143 /* : AbstractCompiler */;
val* var145 /* : AbstractCompiler */;
val* var146 /* : CodeWriter */;
val* var148 /* : CodeWriter */;
val* var150 /* : NativeArray[String] */;
static val* varonce149;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : String */;
val* var159 /* : String */;
val* var160 /* : ModelBuilder */;
val* var162 /* : ModelBuilder */;
val* var163 /* : ToolContext */;
val* var165 /* : ToolContext */;
val* var166 /* : OptionBool */;
val* var168 /* : OptionBool */;
val* var169 /* : nullable Object */;
val* var171 /* : nullable Object */;
short int var172 /* : Bool */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : String */;
val* var185 /* : AbstractCompiler */;
val* var187 /* : AbstractCompiler */;
val* var188 /* : CodeWriter */;
val* var190 /* : CodeWriter */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : String */;
val* var195 /* : AbstractCompiler */;
val* var197 /* : AbstractCompiler */;
val* var198 /* : CodeWriter */;
val* var200 /* : CodeWriter */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
val* var204 /* : String */;
val* var205 /* : AbstractCompiler */;
val* var207 /* : AbstractCompiler */;
val* var208 /* : CodeWriter */;
val* var210 /* : CodeWriter */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : String */;
val* var215 /* : ModelBuilder */;
val* var217 /* : ModelBuilder */;
val* var218 /* : ToolContext */;
val* var220 /* : ToolContext */;
val* var221 /* : OptionBool */;
val* var223 /* : OptionBool */;
val* var224 /* : nullable Object */;
val* var226 /* : nullable Object */;
short int var227 /* : Bool */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
val* var231 /* : String */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
val* var235 /* : String */;
val* var236 /* : AbstractCompiler */;
val* var238 /* : AbstractCompiler */;
val* var239 /* : CodeWriter */;
val* var241 /* : CodeWriter */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : String */;
val* var246 /* : AbstractCompiler */;
val* var248 /* : AbstractCompiler */;
val* var249 /* : CodeWriter */;
val* var251 /* : CodeWriter */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
val* var255 /* : String */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
val* var259 /* : String */;
short int var260 /* : Bool */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
val* var264 /* : String */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
val* var276 /* : String */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
val* var288 /* : String */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
val* var292 /* : String */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
val* var296 /* : String */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
val* var300 /* : String */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
val* var304 /* : String */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
val* var308 /* : String */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
val* var312 /* : String */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
val* var316 /* : String */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
val* var320 /* : String */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
val* var324 /* : String */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
val* var332 /* : String */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : NativeString */;
val* var336 /* : String */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
val* var340 /* : String */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : NativeString */;
val* var344 /* : String */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
val* var348 /* : String */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : NativeString */;
val* var352 /* : String */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : NativeString */;
val* var356 /* : String */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
val* var360 /* : String */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : NativeString */;
val* var364 /* : String */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
val* var368 /* : String */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
val* var372 /* : String */;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : NativeString */;
val* var376 /* : String */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
val* var380 /* : String */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
val* var384 /* : String */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : NativeString */;
val* var388 /* : String */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
val* var392 /* : String */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
val* var396 /* : String */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
val* var400 /* : String */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
val* var404 /* : String */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
val* var408 /* : String */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
val* var412 /* : String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
val* var416 /* : String */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
val* var420 /* : String */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
val* var424 /* : String */;
static val* varonce425;
val* var426 /* : String */;
char* var427 /* : NativeString */;
val* var428 /* : String */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
val* var432 /* : String */;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : NativeString */;
val* var436 /* : String */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : NativeString */;
val* var440 /* : String */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
val* var444 /* : String */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
val* var448 /* : String */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : NativeString */;
val* var452 /* : String */;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : NativeString */;
val* var456 /* : String */;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : NativeString */;
val* var460 /* : String */;
val* var461 /* : MModule */;
val* var463 /* : MModule */;
val* var464 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
short int var465 /* : Bool */;
short int var466 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var468 /* : Bool */;
short int var469 /* : Bool */;
val* var470 /* : AbstractCompiler */;
val* var472 /* : AbstractCompiler */;
val* var473 /* : MModule */;
val* var475 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var476 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
val* var478 /* : NativeArray[String] */;
static val* varonce477;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : NativeString */;
val* var482 /* : String */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
val* var486 /* : String */;
val* var487 /* : String */;
val* var488 /* : String */;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : NativeString */;
val* var492 /* : String */;
val* var493 /* : MClass */;
val* var495 /* : MClass */;
val* var496 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
short int var497 /* : Bool */;
short int var498 /* : Bool */;
short int var500 /* : Bool */;
short int var501 /* : Bool */;
val* var502 /* : Array[RuntimeVariable] */;
val* var_503 /* var : Array[RuntimeVariable] */;
val* var504 /* : nullable RuntimeVariable */;
val* var505 /* : nullable MMethod */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
val* var509 /* : String */;
val* var510 /* : MClass */;
val* var512 /* : MClass */;
val* var513 /* : nullable MMethod */;
static val* varonce514;
val* var515 /* : String */;
char* var516 /* : NativeString */;
val* var517 /* : String */;
val* var518 /* : MClass */;
val* var520 /* : MClass */;
val* var521 /* : nullable MMethod */;
val* var_main_method /* var main_method: nullable MMethod */;
short int var522 /* : Bool */;
short int var523 /* : Bool */;
short int var525 /* : Bool */;
short int var526 /* : Bool */;
val* var527 /* : Array[RuntimeVariable] */;
val* var_528 /* var : Array[RuntimeVariable] */;
val* var529 /* : nullable RuntimeVariable */;
val* var530 /* : ModelBuilder */;
val* var532 /* : ModelBuilder */;
val* var533 /* : ToolContext */;
val* var535 /* : ToolContext */;
val* var536 /* : OptionBool */;
val* var538 /* : OptionBool */;
val* var539 /* : nullable Object */;
val* var541 /* : nullable Object */;
short int var542 /* : Bool */;
static val* varonce543;
val* var544 /* : String */;
char* var545 /* : NativeString */;
val* var546 /* : String */;
static val* varonce547;
val* var548 /* : String */;
char* var549 /* : NativeString */;
val* var550 /* : String */;
static val* varonce551;
val* var552 /* : String */;
char* var553 /* : NativeString */;
val* var554 /* : String */;
static val* varonce555;
val* var556 /* : String */;
char* var557 /* : NativeString */;
val* var558 /* : String */;
val* var559 /* : Array[String] */;
val* var561 /* : Array[String] */;
val* var_562 /* var : Array[String] */;
val* var563 /* : IndexedIterator[nullable Object] */;
val* var_564 /* var : IndexedIterator[String] */;
short int var565 /* : Bool */;
val* var567 /* : nullable Object */;
val* var_tag568 /* var tag: String */;
val* var570 /* : NativeArray[String] */;
static val* varonce569;
static val* varonce571;
val* var572 /* : String */;
char* var573 /* : NativeString */;
val* var574 /* : String */;
static val* varonce575;
val* var576 /* : String */;
char* var577 /* : NativeString */;
val* var578 /* : String */;
val* var579 /* : String */;
val* var581 /* : NativeArray[String] */;
static val* varonce580;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : NativeString */;
val* var585 /* : String */;
static val* varonce586;
val* var587 /* : String */;
char* var588 /* : NativeString */;
val* var589 /* : String */;
static val* varonce590;
val* var591 /* : String */;
char* var592 /* : NativeString */;
val* var593 /* : String */;
static val* varonce594;
val* var595 /* : String */;
char* var596 /* : NativeString */;
val* var597 /* : String */;
static val* varonce598;
val* var599 /* : String */;
char* var600 /* : NativeString */;
val* var601 /* : String */;
val* var602 /* : String */;
val* var604 /* : NativeArray[String] */;
static val* varonce603;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : NativeString */;
val* var608 /* : String */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : NativeString */;
val* var612 /* : String */;
val* var613 /* : String */;
val* var615 /* : NativeArray[String] */;
static val* varonce614;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : NativeString */;
val* var619 /* : String */;
static val* varonce620;
val* var621 /* : String */;
char* var622 /* : NativeString */;
val* var623 /* : String */;
val* var624 /* : String */;
val* var626 /* : NativeArray[String] */;
static val* varonce625;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
val* var630 /* : String */;
static val* varonce631;
val* var632 /* : String */;
char* var633 /* : NativeString */;
val* var634 /* : String */;
val* var635 /* : String */;
val* var637 /* : NativeArray[String] */;
static val* varonce636;
static val* varonce638;
val* var639 /* : String */;
char* var640 /* : NativeString */;
val* var641 /* : String */;
static val* varonce642;
val* var643 /* : String */;
char* var644 /* : NativeString */;
val* var645 /* : String */;
val* var646 /* : String */;
static val* varonce647;
val* var648 /* : String */;
char* var649 /* : NativeString */;
val* var650 /* : String */;
static val* varonce651;
val* var652 /* : String */;
char* var653 /* : NativeString */;
val* var654 /* : String */;
val* var655 /* : Array[String] */;
val* var657 /* : Array[String] */;
val* var658 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce659;
val* var660 /* : String */;
char* var661 /* : NativeString */;
val* var662 /* : String */;
val* var_663 /* var : Array[String] */;
val* var664 /* : IndexedIterator[nullable Object] */;
val* var_665 /* var : IndexedIterator[String] */;
short int var666 /* : Bool */;
val* var668 /* : nullable Object */;
val* var_tag669 /* var tag: String */;
val* var671 /* : NativeArray[String] */;
static val* varonce670;
static val* varonce672;
val* var673 /* : String */;
char* var674 /* : NativeString */;
val* var675 /* : String */;
static val* varonce676;
val* var677 /* : String */;
char* var678 /* : NativeString */;
val* var679 /* : String */;
val* var680 /* : String */;
val* var682 /* : NativeArray[String] */;
static val* varonce681;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : NativeString */;
val* var686 /* : String */;
static val* varonce687;
val* var688 /* : String */;
char* var689 /* : NativeString */;
val* var690 /* : String */;
static val* varonce691;
val* var692 /* : String */;
char* var693 /* : NativeString */;
val* var694 /* : String */;
val* var695 /* : String */;
val* var697 /* : NativeArray[String] */;
static val* varonce696;
static val* varonce698;
val* var699 /* : String */;
char* var700 /* : NativeString */;
val* var701 /* : String */;
static val* varonce702;
val* var703 /* : String */;
char* var704 /* : NativeString */;
val* var705 /* : String */;
static val* varonce706;
val* var707 /* : String */;
char* var708 /* : NativeString */;
val* var709 /* : String */;
val* var710 /* : String */;
val* var712 /* : NativeArray[String] */;
static val* varonce711;
static val* varonce713;
val* var714 /* : String */;
char* var715 /* : NativeString */;
val* var716 /* : String */;
static val* varonce717;
val* var718 /* : String */;
char* var719 /* : NativeString */;
val* var720 /* : String */;
static val* varonce721;
val* var722 /* : String */;
char* var723 /* : NativeString */;
val* var724 /* : String */;
val* var725 /* : String */;
val* var727 /* : NativeArray[String] */;
static val* varonce726;
static val* varonce728;
val* var729 /* : String */;
char* var730 /* : NativeString */;
val* var731 /* : String */;
static val* varonce732;
val* var733 /* : String */;
char* var734 /* : NativeString */;
val* var735 /* : String */;
static val* varonce736;
val* var737 /* : String */;
char* var738 /* : NativeString */;
val* var739 /* : String */;
val* var740 /* : String */;
val* var741 /* : ModelBuilder */;
val* var743 /* : ModelBuilder */;
val* var744 /* : ToolContext */;
val* var746 /* : ToolContext */;
val* var747 /* : OptionBool */;
val* var749 /* : OptionBool */;
val* var750 /* : nullable Object */;
val* var752 /* : nullable Object */;
short int var753 /* : Bool */;
static val* varonce754;
val* var755 /* : String */;
char* var756 /* : NativeString */;
val* var757 /* : String */;
static val* varonce758;
val* var759 /* : String */;
char* var760 /* : NativeString */;
val* var761 /* : String */;
static val* varonce762;
val* var763 /* : String */;
char* var764 /* : NativeString */;
val* var765 /* : String */;
static val* varonce766;
val* var767 /* : String */;
char* var768 /* : NativeString */;
val* var769 /* : String */;
static val* varonce770;
val* var771 /* : String */;
char* var772 /* : NativeString */;
val* var773 /* : String */;
static val* varonce774;
val* var775 /* : String */;
char* var776 /* : NativeString */;
val* var777 /* : String */;
val* var778 /* : ModelBuilder */;
val* var780 /* : ModelBuilder */;
val* var781 /* : ToolContext */;
val* var783 /* : ToolContext */;
val* var784 /* : OptionBool */;
val* var786 /* : OptionBool */;
val* var787 /* : nullable Object */;
val* var789 /* : nullable Object */;
short int var790 /* : Bool */;
static val* varonce791;
val* var792 /* : String */;
char* var793 /* : NativeString */;
val* var794 /* : String */;
static val* varonce795;
val* var796 /* : String */;
char* var797 /* : NativeString */;
val* var798 /* : String */;
static val* varonce799;
val* var800 /* : String */;
char* var801 /* : NativeString */;
val* var802 /* : String */;
static val* varonce803;
val* var804 /* : String */;
char* var805 /* : NativeString */;
val* var806 /* : String */;
val* var807 /* : MModule */;
val* var809 /* : MModule */;
val* var810 /* : POSetElement[MModule] */;
val* var812 /* : POSetElement[MModule] */;
val* var813 /* : Collection[nullable Object] */;
val* var_814 /* var : Collection[MModule] */;
val* var815 /* : Iterator[nullable Object] */;
val* var_816 /* var : Iterator[MModule] */;
short int var817 /* : Bool */;
val* var819 /* : nullable Object */;
val* var_m /* var m: MModule */;
static val* varonce820;
val* var821 /* : String */;
char* var822 /* : NativeString */;
val* var823 /* : String */;
val* var824 /* : String */;
val* var825 /* : String */;
val* var_f /* var f: String */;
val* var827 /* : NativeArray[String] */;
static val* varonce826;
static val* varonce828;
val* var829 /* : String */;
char* var830 /* : NativeString */;
val* var831 /* : String */;
static val* varonce832;
val* var833 /* : String */;
char* var834 /* : NativeString */;
val* var835 /* : String */;
static val* varonce836;
val* var837 /* : String */;
char* var838 /* : NativeString */;
val* var839 /* : String */;
val* var840 /* : Location */;
val* var842 /* : Location */;
val* var843 /* : nullable SourceFile */;
val* var845 /* : nullable SourceFile */;
val* var846 /* : String */;
val* var848 /* : String */;
val* var849 /* : String */;
val* var850 /* : String */;
val* var852 /* : NativeArray[String] */;
static val* varonce851;
static val* varonce853;
val* var854 /* : String */;
char* var855 /* : NativeString */;
val* var856 /* : String */;
static val* varonce857;
val* var858 /* : String */;
char* var859 /* : NativeString */;
val* var860 /* : String */;
val* var861 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "#include <signal.h>";
var3 = core__flat___NativeString___to_s_full(var2, 19l, 19l);
var1 = var3;
varonce = var1;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (self) on <self:AbstractCompiler> */
var6 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <self:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 549);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_platform = var4;
{
var8 = nitc___nitc__Platform___no_main(var_platform);
}
var_ = var8;
if (var8){
var7 = var_;
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var9) on <var9:ModelBuilder> */
var14 = var9->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var9:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 36);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline opts#Option#value (var15) on <var15:OptionBool> */
var20 = var15->attrs[COLOR_opts__Option___value].val; /* _value on <var15:OptionBool> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = (short int)((long)(var18)>>2);
var7 = var21;
}
var_no_main = var7;
{
var22 = nitc___nitc__Platform___supports_libunwind(var_platform);
}
if (var22){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "#ifndef NO_STACKTRACE";
var26 = core__flat___NativeString___to_s_full(var25, 21l, 21l);
var24 = var26;
varonce23 = var24;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "#define UNW_LOCAL_ONLY";
var30 = core__flat___NativeString___to_s_full(var29, 22l, 22l);
var28 = var30;
varonce27 = var28;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "#include <libunwind.h>";
var34 = core__flat___NativeString___to_s_full(var33, 22l, 22l);
var32 = var34;
varonce31 = var32;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "#include \"c_functions_hash.h\"";
var38 = core__flat___NativeString___to_s_full(var37, 29l, 29l);
var36 = var38;
varonce35 = var36;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "#endif";
var42 = core__flat___NativeString___to_s_full(var41, 6l, 6l);
var40 = var42;
varonce39 = var40;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "int glob_argc;";
var46 = core__flat___NativeString___to_s_full(var45, 14l, 14l);
var44 = var46;
varonce43 = var44;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var44); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "char **glob_argv;";
var50 = core__flat___NativeString___to_s_full(var49, 17l, 17l);
var48 = var50;
varonce47 = var48;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "val *glob_sys;";
var54 = core__flat___NativeString___to_s_full(var53, 14l, 14l);
var52 = var54;
varonce51 = var52;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var57 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var55) on <var55:ModelBuilder> */
var60 = var55->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var55:ModelBuilder> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var58) on <var58:ToolContext> */
var63 = var58->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var58:ToolContext> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline opts#Option#value (var61) on <var61:OptionBool> */
var66 = var61->attrs[COLOR_opts__Option___value].val; /* _value on <var61:OptionBool> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
var67 = (short int)((long)(var64)>>2);
if (var67){
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var70 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1045);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_71 = var68;
{
var72 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_71);
}
var_73 = var72;
for(;;) {
{
var74 = ((short int(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_73); /* is_ok on <var_73:IndexedIterator[String]>*/
}
if (var74){
} else {
goto BREAK_label;
}
{
var75 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_73); /* item on <var_73:IndexedIterator[String]>*/
}
var_tag = var75;
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "long count_type_test_resolved_";
var81 = core__flat___NativeString___to_s_full(var80, 30l, 30l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[0]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = ";";
var85 = core__flat___NativeString___to_s_full(var84, 1l, 1l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var77)->values[2]=var83;
} else {
var77 = varonce76;
varonce76 = NULL;
}
((struct instance_core__NativeArray*)var77)->values[1]=var_tag;
{
var86 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var86); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce87==NULL)) {
var88 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "long count_type_test_unresolved_";
var92 = core__flat___NativeString___to_s_full(var91, 32l, 32l);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var88)->values[0]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = ";";
var96 = core__flat___NativeString___to_s_full(var95, 1l, 1l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var88)->values[2]=var94;
} else {
var88 = varonce87;
varonce87 = NULL;
}
((struct instance_core__NativeArray*)var88)->values[1]=var_tag;
{
var97 = ((val*(*)(val* self))(var88->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "long count_type_test_skipped_";
var103 = core__flat___NativeString___to_s_full(var102, 29l, 29l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = ";";
var107 = core__flat___NativeString___to_s_full(var106, 1l, 1l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var99)->values[2]=var105;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_core__NativeArray*)var99)->values[1]=var_tag;
{
var108 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var108); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var111 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var109) on <var109:AbstractCompiler> */
var114 = var109->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var109:AbstractCompiler> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (unlikely(varonce115==NULL)) {
var116 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "extern long count_type_test_resolved_";
var120 = core__flat___NativeString___to_s_full(var119, 37l, 37l);
var118 = var120;
varonce117 = var118;
}
((struct instance_core__NativeArray*)var116)->values[0]=var118;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = ";";
var124 = core__flat___NativeString___to_s_full(var123, 1l, 1l);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var116)->values[2]=var122;
} else {
var116 = varonce115;
varonce115 = NULL;
}
((struct instance_core__NativeArray*)var116)->values[1]=var_tag;
{
var125 = ((val*(*)(val* self))(var116->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var116); /* native_to_s on <var116:NativeArray[String]>*/
}
varonce115 = var116;
{
nitc___nitc__CodeWriter___add_decl(var112, var125); /* Direct call abstract_compiler#CodeWriter#add_decl on <var112:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var128 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var126) on <var126:AbstractCompiler> */
var131 = var126->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var126:AbstractCompiler> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
if (unlikely(varonce132==NULL)) {
var133 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "extern long count_type_test_unresolved_";
var137 = core__flat___NativeString___to_s_full(var136, 39l, 39l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var133)->values[0]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = ";";
var141 = core__flat___NativeString___to_s_full(var140, 1l, 1l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var133)->values[2]=var139;
} else {
var133 = varonce132;
varonce132 = NULL;
}
((struct instance_core__NativeArray*)var133)->values[1]=var_tag;
{
var142 = ((val*(*)(val* self))(var133->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var133); /* native_to_s on <var133:NativeArray[String]>*/
}
varonce132 = var133;
{
nitc___nitc__CodeWriter___add_decl(var129, var142); /* Direct call abstract_compiler#CodeWriter#add_decl on <var129:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var145 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var143) on <var143:AbstractCompiler> */
var148 = var143->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var143:AbstractCompiler> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
if (unlikely(varonce149==NULL)) {
var150 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "extern long count_type_test_skipped_";
var154 = core__flat___NativeString___to_s_full(var153, 36l, 36l);
var152 = var154;
varonce151 = var152;
}
((struct instance_core__NativeArray*)var150)->values[0]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = ";";
var158 = core__flat___NativeString___to_s_full(var157, 1l, 1l);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var150)->values[2]=var156;
} else {
var150 = varonce149;
varonce149 = NULL;
}
((struct instance_core__NativeArray*)var150)->values[1]=var_tag;
{
var159 = ((val*(*)(val* self))(var150->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var150); /* native_to_s on <var150:NativeArray[String]>*/
}
varonce149 = var150;
{
nitc___nitc__CodeWriter___add_decl(var146, var159); /* Direct call abstract_compiler#CodeWriter#add_decl on <var146:CodeWriter>*/
}
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_73); /* next on <var_73:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_73); /* finish on <var_73:IndexedIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var162 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var160) on <var160:ModelBuilder> */
var165 = var160->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var160:ModelBuilder> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var163) on <var163:ToolContext> */
var168 = var163->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var163:ToolContext> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
{ /* Inline opts#Option#value (var166) on <var166:OptionBool> */
var171 = var166->attrs[COLOR_opts__Option___value].val; /* _value on <var166:OptionBool> */
var169 = var171;
RET_LABEL170:(void)0;
}
}
var172 = (short int)((long)(var169)>>2);
if (var172){
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "long count_invoke_by_tables;";
var176 = core__flat___NativeString___to_s_full(var175, 28l, 28l);
var174 = var176;
varonce173 = var174;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var174); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "long count_invoke_by_direct;";
var180 = core__flat___NativeString___to_s_full(var179, 28l, 28l);
var178 = var180;
varonce177 = var178;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var178); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "long count_invoke_by_inline;";
var184 = core__flat___NativeString___to_s_full(var183, 28l, 28l);
var182 = var184;
varonce181 = var182;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var182); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var187 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var185) on <var185:AbstractCompiler> */
var190 = var185->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var185:AbstractCompiler> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "extern long count_invoke_by_tables;";
var194 = core__flat___NativeString___to_s_full(var193, 35l, 35l);
var192 = var194;
varonce191 = var192;
}
{
nitc___nitc__CodeWriter___add_decl(var188, var192); /* Direct call abstract_compiler#CodeWriter#add_decl on <var188:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var197 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var195) on <var195:AbstractCompiler> */
var200 = var195->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var195:AbstractCompiler> */
if (unlikely(var200 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var198 = var200;
RET_LABEL199:(void)0;
}
}
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = "extern long count_invoke_by_direct;";
var204 = core__flat___NativeString___to_s_full(var203, 35l, 35l);
var202 = var204;
varonce201 = var202;
}
{
nitc___nitc__CodeWriter___add_decl(var198, var202); /* Direct call abstract_compiler#CodeWriter#add_decl on <var198:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var207 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var205) on <var205:AbstractCompiler> */
var210 = var205->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var205:AbstractCompiler> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "extern long count_invoke_by_inline;";
var214 = core__flat___NativeString___to_s_full(var213, 35l, 35l);
var212 = var214;
varonce211 = var212;
}
{
nitc___nitc__CodeWriter___add_decl(var208, var212); /* Direct call abstract_compiler#CodeWriter#add_decl on <var208:CodeWriter>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var217 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var215) on <var215:ModelBuilder> */
var220 = var215->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var215:ModelBuilder> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var218) on <var218:ToolContext> */
var223 = var218->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var218:ToolContext> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
{ /* Inline opts#Option#value (var221) on <var221:OptionBool> */
var226 = var221->attrs[COLOR_opts__Option___value].val; /* _value on <var221:OptionBool> */
var224 = var226;
RET_LABEL225:(void)0;
}
}
var227 = (short int)((long)(var224)>>2);
if (var227){
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = "long count_attr_reads = 0;";
var231 = core__flat___NativeString___to_s_full(var230, 26l, 26l);
var229 = var231;
varonce228 = var229;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var229); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce232!=NULL)) {
var233 = varonce232;
} else {
var234 = "long count_isset_checks = 0;";
var235 = core__flat___NativeString___to_s_full(var234, 28l, 28l);
var233 = var235;
varonce232 = var233;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var233); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var238 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var238 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var236) on <var236:AbstractCompiler> */
var241 = var236->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var236:AbstractCompiler> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "extern long count_attr_reads;";
var245 = core__flat___NativeString___to_s_full(var244, 29l, 29l);
var243 = var245;
varonce242 = var243;
}
{
nitc___nitc__CodeWriter___add_decl(var239, var243); /* Direct call abstract_compiler#CodeWriter#add_decl on <var239:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var248 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var246) on <var246:AbstractCompiler> */
var251 = var246->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var246:AbstractCompiler> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "extern long count_isset_checks;";
var255 = core__flat___NativeString___to_s_full(var254, 31l, 31l);
var253 = var255;
varonce252 = var253;
}
{
nitc___nitc__CodeWriter___add_decl(var249, var253); /* Direct call abstract_compiler#CodeWriter#add_decl on <var249:CodeWriter>*/
}
} else {
}
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = "static void show_backtrace(void) {";
var259 = core__flat___NativeString___to_s_full(var258, 34l, 34l);
var257 = var259;
varonce256 = var257;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var257); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var260 = nitc___nitc__Platform___supports_libunwind(var_platform);
}
if (var260){
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = "#ifndef NO_STACKTRACE";
var264 = core__flat___NativeString___to_s_full(var263, 21l, 21l);
var262 = var264;
varonce261 = var262;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var262); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "char* opt = getenv(\"NIT_NO_STACK\");";
var268 = core__flat___NativeString___to_s_full(var267, 35l, 35l);
var266 = var268;
varonce265 = var266;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var266); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "unw_cursor_t cursor;";
var272 = core__flat___NativeString___to_s_full(var271, 20l, 20l);
var270 = var272;
varonce269 = var270;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var270); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "if(opt==NULL){";
var276 = core__flat___NativeString___to_s_full(var275, 14l, 14l);
var274 = var276;
varonce273 = var274;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var274); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "unw_context_t uc;";
var280 = core__flat___NativeString___to_s_full(var279, 17l, 17l);
var278 = var280;
varonce277 = var278;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var278); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "unw_word_t ip;";
var284 = core__flat___NativeString___to_s_full(var283, 14l, 14l);
var282 = var284;
varonce281 = var282;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var282); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = "char* procname = malloc(sizeof(char) * 100);";
var288 = core__flat___NativeString___to_s_full(var287, 44l, 44l);
var286 = var288;
varonce285 = var286;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var286); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "unw_getcontext(&uc);";
var292 = core__flat___NativeString___to_s_full(var291, 20l, 20l);
var290 = var292;
varonce289 = var290;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var290); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = "unw_init_local(&cursor, &uc);";
var296 = core__flat___NativeString___to_s_full(var295, 29l, 29l);
var294 = var296;
varonce293 = var294;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var294); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var300 = core__flat___NativeString___to_s_full(var299, 67l, 67l);
var298 = var300;
varonce297 = var298;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var298); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = "PRINT_ERROR(\"--   Stack Trace   ------------------------------\\n\");";
var304 = core__flat___NativeString___to_s_full(var303, 67l, 67l);
var302 = var304;
varonce301 = var302;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var302); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce305!=NULL)) {
var306 = varonce305;
} else {
var307 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var308 = core__flat___NativeString___to_s_full(var307, 67l, 67l);
var306 = var308;
varonce305 = var306;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var306); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = "while (unw_step(&cursor) > 0) {";
var312 = core__flat___NativeString___to_s_full(var311, 31l, 31l);
var310 = var312;
varonce309 = var310;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var310); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce313!=NULL)) {
var314 = varonce313;
} else {
var315 = "\tunw_get_proc_name(&cursor, procname, 100, &ip);";
var316 = core__flat___NativeString___to_s_full(var315, 48l, 48l);
var314 = var316;
varonce313 = var314;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var314); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = "\tconst char* recv = get_nit_name(procname, strlen(procname));";
var320 = core__flat___NativeString___to_s_full(var319, 61l, 61l);
var318 = var320;
varonce317 = var318;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var318); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = "\tif (recv != NULL){";
var324 = core__flat___NativeString___to_s_full(var323, 19l, 19l);
var322 = var324;
varonce321 = var322;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var322); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = "\t\tPRINT_ERROR(\"` %s\\n\", recv);";
var328 = core__flat___NativeString___to_s_full(var327, 30l, 30l);
var326 = var328;
varonce325 = var326;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var326); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = "\t}else{";
var332 = core__flat___NativeString___to_s_full(var331, 7l, 7l);
var330 = var332;
varonce329 = var330;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var330); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = "\t\tPRINT_ERROR(\"` %s\\n\", procname);";
var336 = core__flat___NativeString___to_s_full(var335, 34l, 34l);
var334 = var336;
varonce333 = var334;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var334); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "\t}";
var340 = core__flat___NativeString___to_s_full(var339, 2l, 2l);
var338 = var340;
varonce337 = var338;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var338); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce341!=NULL)) {
var342 = varonce341;
} else {
var343 = "}";
var344 = core__flat___NativeString___to_s_full(var343, 1l, 1l);
var342 = var344;
varonce341 = var342;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var342); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var348 = core__flat___NativeString___to_s_full(var347, 67l, 67l);
var346 = var348;
varonce345 = var346;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var346); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce349!=NULL)) {
var350 = varonce349;
} else {
var351 = "free(procname);";
var352 = core__flat___NativeString___to_s_full(var351, 15l, 15l);
var350 = var352;
varonce349 = var350;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var350); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce353!=NULL)) {
var354 = varonce353;
} else {
var355 = "}";
var356 = core__flat___NativeString___to_s_full(var355, 1l, 1l);
var354 = var356;
varonce353 = var354;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var354); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce357!=NULL)) {
var358 = varonce357;
} else {
var359 = "#endif /* NO_STACKTRACE */";
var360 = core__flat___NativeString___to_s_full(var359, 26l, 26l);
var358 = var360;
varonce357 = var358;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var358); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce361!=NULL)) {
var362 = varonce361;
} else {
var363 = "}";
var364 = core__flat___NativeString___to_s_full(var363, 1l, 1l);
var362 = var364;
varonce361 = var362;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var362); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = "void sig_handler(int signo){";
var368 = core__flat___NativeString___to_s_full(var367, 28l, 28l);
var366 = var368;
varonce365 = var366;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var366); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce369!=NULL)) {
var370 = varonce369;
} else {
var371 = "PRINT_ERROR(\"Caught signal : %s\\n\", strsignal(signo));";
var372 = core__flat___NativeString___to_s_full(var371, 54l, 54l);
var370 = var372;
varonce369 = var370;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var370); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce373!=NULL)) {
var374 = varonce373;
} else {
var375 = "show_backtrace();";
var376 = core__flat___NativeString___to_s_full(var375, 17l, 17l);
var374 = var376;
varonce373 = var374;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var374); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce377!=NULL)) {
var378 = varonce377;
} else {
var379 = "signal(signo, SIG_DFL);";
var380 = core__flat___NativeString___to_s_full(var379, 23l, 23l);
var378 = var380;
varonce377 = var378;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var378); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce381!=NULL)) {
var382 = varonce381;
} else {
var383 = "kill(getpid(), signo);";
var384 = core__flat___NativeString___to_s_full(var383, 22l, 22l);
var382 = var384;
varonce381 = var382;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var382); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce385!=NULL)) {
var386 = varonce385;
} else {
var387 = "}";
var388 = core__flat___NativeString___to_s_full(var387, 1l, 1l);
var386 = var388;
varonce385 = var386;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var386); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce389!=NULL)) {
var390 = varonce389;
} else {
var391 = "void fatal_exit(int status) {";
var392 = core__flat___NativeString___to_s_full(var391, 29l, 29l);
var390 = var392;
varonce389 = var390;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var390); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = "show_backtrace();";
var396 = core__flat___NativeString___to_s_full(var395, 17l, 17l);
var394 = var396;
varonce393 = var394;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var394); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "exit(status);";
var400 = core__flat___NativeString___to_s_full(var399, 13l, 13l);
var398 = var400;
varonce397 = var398;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var398); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce401!=NULL)) {
var402 = varonce401;
} else {
var403 = "}";
var404 = core__flat___NativeString___to_s_full(var403, 1l, 1l);
var402 = var404;
varonce401 = var402;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var402); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (var_no_main){
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "int nit_main(int argc, char** argv) {";
var408 = core__flat___NativeString___to_s_full(var407, 37l, 37l);
var406 = var408;
varonce405 = var406;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var406); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce409!=NULL)) {
var410 = varonce409;
} else {
var411 = "int main(int argc, char** argv) {";
var412 = core__flat___NativeString___to_s_full(var411, 33l, 33l);
var410 = var412;
varonce409 = var410;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var410); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "#ifndef ANDROID";
var416 = core__flat___NativeString___to_s_full(var415, 15l, 15l);
var414 = var416;
varonce413 = var414;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var414); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "signal(SIGABRT, sig_handler);";
var420 = core__flat___NativeString___to_s_full(var419, 29l, 29l);
var418 = var420;
varonce417 = var418;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var418); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = "signal(SIGFPE, sig_handler);";
var424 = core__flat___NativeString___to_s_full(var423, 28l, 28l);
var422 = var424;
varonce421 = var422;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var422); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce425!=NULL)) {
var426 = varonce425;
} else {
var427 = "signal(SIGILL, sig_handler);";
var428 = core__flat___NativeString___to_s_full(var427, 28l, 28l);
var426 = var428;
varonce425 = var426;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var426); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "signal(SIGINT, sig_handler);";
var432 = core__flat___NativeString___to_s_full(var431, 28l, 28l);
var430 = var432;
varonce429 = var430;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var430); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce433!=NULL)) {
var434 = varonce433;
} else {
var435 = "signal(SIGTERM, sig_handler);";
var436 = core__flat___NativeString___to_s_full(var435, 29l, 29l);
var434 = var436;
varonce433 = var434;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var434); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce437!=NULL)) {
var438 = varonce437;
} else {
var439 = "signal(SIGSEGV, sig_handler);";
var440 = core__flat___NativeString___to_s_full(var439, 29l, 29l);
var438 = var440;
varonce437 = var438;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var438); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = "#endif";
var444 = core__flat___NativeString___to_s_full(var443, 6l, 6l);
var442 = var444;
varonce441 = var442;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var442); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = "signal(SIGPIPE, SIG_IGN);";
var448 = core__flat___NativeString___to_s_full(var447, 25l, 25l);
var446 = var448;
varonce445 = var446;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var446); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = "glob_argc = argc; glob_argv = argv;";
var452 = core__flat___NativeString___to_s_full(var451, 35l, 35l);
var450 = var452;
varonce449 = var450;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var450); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce453!=NULL)) {
var454 = varonce453;
} else {
var455 = "initialize_gc_option();";
var456 = core__flat___NativeString___to_s_full(var455, 23l, 23l);
var454 = var456;
varonce453 = var454;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var454); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce457!=NULL)) {
var458 = varonce457;
} else {
var459 = "initialize_nitni_global_refs();";
var460 = core__flat___NativeString___to_s_full(var459, 31l, 31l);
var458 = var460;
varonce457 = var458;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var458); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var463 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var463 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var461 = var463;
RET_LABEL462:(void)0;
}
}
{
var464 = nitc__model___MModule___sys_type(var461);
}
var_main_type = var464;
if (var_main_type == NULL) {
var465 = 0; /* is null */
} else {
var465 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_type,((val*)NULL)) on <var_main_type:nullable MClassType> */
var_other = ((val*)NULL);
{
var468 = ((short int(*)(val* self, val* p0))(var_main_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_type, var_other); /* == on <var_main_type:nullable MClassType(MClassType)>*/
}
var469 = !var468;
var466 = var469;
goto RET_LABEL467;
RET_LABEL467:(void)0;
}
var465 = var466;
}
if (var465){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var472 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var472 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var470 = var472;
RET_LABEL471:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var470) on <var470:AbstractCompiler> */
var475 = var470->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var470:AbstractCompiler> */
if (unlikely(var475 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var473 = var475;
RET_LABEL474:(void)0;
}
}
var_mainmodule = var473;
{
var476 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_glob_sys = var476;
if (unlikely(varonce477==NULL)) {
var478 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce479!=NULL)) {
var480 = varonce479;
} else {
var481 = "glob_sys = ";
var482 = core__flat___NativeString___to_s_full(var481, 11l, 11l);
var480 = var482;
varonce479 = var480;
}
((struct instance_core__NativeArray*)var478)->values[0]=var480;
if (likely(varonce483!=NULL)) {
var484 = varonce483;
} else {
var485 = ";";
var486 = core__flat___NativeString___to_s_full(var485, 1l, 1l);
var484 = var486;
varonce483 = var484;
}
((struct instance_core__NativeArray*)var478)->values[2]=var484;
} else {
var478 = varonce477;
varonce477 = NULL;
}
{
var487 = ((val*(*)(val* self))(var_glob_sys->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_glob_sys); /* to_s on <var_glob_sys:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var478)->values[1]=var487;
{
var488 = ((val*(*)(val* self))(var478->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var478); /* native_to_s on <var478:NativeArray[String]>*/
}
varonce477 = var478;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var488); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce489!=NULL)) {
var490 = varonce489;
} else {
var491 = "init";
var492 = core__flat___NativeString___to_s_full(var491, 4l, 4l);
var490 = var492;
varonce489 = var490;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var495 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var495 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var493 = var495;
RET_LABEL494:(void)0;
}
}
{
var496 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var490, var493);
}
var_main_init = var496;
if (var_main_init == NULL) {
var497 = 0; /* is null */
} else {
var497 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_init,((val*)NULL)) on <var_main_init:nullable MMethod> */
var_other = ((val*)NULL);
{
var500 = ((short int(*)(val* self, val* p0))(var_main_init->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_init, var_other); /* == on <var_main_init:nullable MMethod(MMethod)>*/
}
var501 = !var500;
var498 = var501;
goto RET_LABEL499;
RET_LABEL499:(void)0;
}
var497 = var498;
}
if (var497){
var502 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var502, 1l); /* Direct call array#Array#with_capacity on <var502:Array[RuntimeVariable]>*/
}
var_503 = var502;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_503, var_glob_sys); /* Direct call array#AbstractArray#push on <var_503:Array[RuntimeVariable]>*/
}
{
var504 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_main_init, var_503);
}
} else {
}
if (likely(varonce506!=NULL)) {
var507 = varonce506;
} else {
var508 = "run";
var509 = core__flat___NativeString___to_s_full(var508, 3l, 3l);
var507 = var509;
varonce506 = var507;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var512 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var512 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var510 = var512;
RET_LABEL511:(void)0;
}
}
{
var513 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var507, var510);
}
if (var513!=NULL) {
var505 = var513;
} else {
if (likely(varonce514!=NULL)) {
var515 = varonce514;
} else {
var516 = "main";
var517 = core__flat___NativeString___to_s_full(var516, 4l, 4l);
var515 = var517;
varonce514 = var515;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var520 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var520 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var518 = var520;
RET_LABEL519:(void)0;
}
}
{
var521 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var515, var518);
}
var505 = var521;
}
var_main_method = var505;
if (var_main_method == NULL) {
var522 = 0; /* is null */
} else {
var522 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_method,((val*)NULL)) on <var_main_method:nullable MMethod> */
var_other = ((val*)NULL);
{
var525 = ((short int(*)(val* self, val* p0))(var_main_method->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_method, var_other); /* == on <var_main_method:nullable MMethod(MMethod)>*/
}
var526 = !var525;
var523 = var526;
goto RET_LABEL524;
RET_LABEL524:(void)0;
}
var522 = var523;
}
if (var522){
var527 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var527, 1l); /* Direct call array#Array#with_capacity on <var527:Array[RuntimeVariable]>*/
}
var_528 = var527;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_528, var_glob_sys); /* Direct call array#AbstractArray#push on <var_528:Array[RuntimeVariable]>*/
}
{
var529 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_main_method, var_528);
}
} else {
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var532 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var532 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var530 = var532;
RET_LABEL531:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var530) on <var530:ModelBuilder> */
var535 = var530->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var530:ModelBuilder> */
if (unlikely(var535 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var533 = var535;
RET_LABEL534:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var533) on <var533:ToolContext> */
var538 = var533->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var533:ToolContext> */
if (unlikely(var538 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var536 = var538;
RET_LABEL537:(void)0;
}
}
{
{ /* Inline opts#Option#value (var536) on <var536:OptionBool> */
var541 = var536->attrs[COLOR_opts__Option___value].val; /* _value on <var536:OptionBool> */
var539 = var541;
RET_LABEL540:(void)0;
}
}
var542 = (short int)((long)(var539)>>2);
if (var542){
if (likely(varonce543!=NULL)) {
var544 = varonce543;
} else {
var545 = "long count_type_test_resolved_total = 0;";
var546 = core__flat___NativeString___to_s_full(var545, 40l, 40l);
var544 = var546;
varonce543 = var544;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var544); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce547!=NULL)) {
var548 = varonce547;
} else {
var549 = "long count_type_test_unresolved_total = 0;";
var550 = core__flat___NativeString___to_s_full(var549, 42l, 42l);
var548 = var550;
varonce547 = var548;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var548); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce551!=NULL)) {
var552 = varonce551;
} else {
var553 = "long count_type_test_skipped_total = 0;";
var554 = core__flat___NativeString___to_s_full(var553, 39l, 39l);
var552 = var554;
varonce551 = var552;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var552); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce555!=NULL)) {
var556 = varonce555;
} else {
var557 = "long count_type_test_total_total = 0;";
var558 = core__flat___NativeString___to_s_full(var557, 37l, 37l);
var556 = var558;
varonce555 = var556;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var556); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var561 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var561 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1045);
fatal_exit(1);
}
var559 = var561;
RET_LABEL560:(void)0;
}
}
var_562 = var559;
{
var563 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_562);
}
var_564 = var563;
for(;;) {
{
var565 = ((short int(*)(val* self))((((long)var_564&3)?class_info[((long)var_564&3)]:var_564->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_564); /* is_ok on <var_564:IndexedIterator[String]>*/
}
if (var565){
} else {
goto BREAK_label566;
}
{
var567 = ((val*(*)(val* self))((((long)var_564&3)?class_info[((long)var_564&3)]:var_564->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_564); /* item on <var_564:IndexedIterator[String]>*/
}
var_tag568 = var567;
if (unlikely(varonce569==NULL)) {
var570 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce571!=NULL)) {
var572 = varonce571;
} else {
var573 = "long count_type_test_total_";
var574 = core__flat___NativeString___to_s_full(var573, 27l, 27l);
var572 = var574;
varonce571 = var572;
}
((struct instance_core__NativeArray*)var570)->values[0]=var572;
if (likely(varonce575!=NULL)) {
var576 = varonce575;
} else {
var577 = ";";
var578 = core__flat___NativeString___to_s_full(var577, 1l, 1l);
var576 = var578;
varonce575 = var576;
}
((struct instance_core__NativeArray*)var570)->values[2]=var576;
} else {
var570 = varonce569;
varonce569 = NULL;
}
((struct instance_core__NativeArray*)var570)->values[1]=var_tag568;
{
var579 = ((val*(*)(val* self))(var570->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var570); /* native_to_s on <var570:NativeArray[String]>*/
}
varonce569 = var570;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var579); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce580==NULL)) {
var581 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce582!=NULL)) {
var583 = varonce582;
} else {
var584 = "count_type_test_total_";
var585 = core__flat___NativeString___to_s_full(var584, 22l, 22l);
var583 = var585;
varonce582 = var583;
}
((struct instance_core__NativeArray*)var581)->values[0]=var583;
if (likely(varonce586!=NULL)) {
var587 = varonce586;
} else {
var588 = " = count_type_test_resolved_";
var589 = core__flat___NativeString___to_s_full(var588, 28l, 28l);
var587 = var589;
varonce586 = var587;
}
((struct instance_core__NativeArray*)var581)->values[2]=var587;
if (likely(varonce590!=NULL)) {
var591 = varonce590;
} else {
var592 = " + count_type_test_unresolved_";
var593 = core__flat___NativeString___to_s_full(var592, 30l, 30l);
var591 = var593;
varonce590 = var591;
}
((struct instance_core__NativeArray*)var581)->values[4]=var591;
if (likely(varonce594!=NULL)) {
var595 = varonce594;
} else {
var596 = " + count_type_test_skipped_";
var597 = core__flat___NativeString___to_s_full(var596, 27l, 27l);
var595 = var597;
varonce594 = var595;
}
((struct instance_core__NativeArray*)var581)->values[6]=var595;
if (likely(varonce598!=NULL)) {
var599 = varonce598;
} else {
var600 = ";";
var601 = core__flat___NativeString___to_s_full(var600, 1l, 1l);
var599 = var601;
varonce598 = var599;
}
((struct instance_core__NativeArray*)var581)->values[8]=var599;
} else {
var581 = varonce580;
varonce580 = NULL;
}
((struct instance_core__NativeArray*)var581)->values[1]=var_tag568;
((struct instance_core__NativeArray*)var581)->values[3]=var_tag568;
((struct instance_core__NativeArray*)var581)->values[5]=var_tag568;
((struct instance_core__NativeArray*)var581)->values[7]=var_tag568;
{
var602 = ((val*(*)(val* self))(var581->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var581); /* native_to_s on <var581:NativeArray[String]>*/
}
varonce580 = var581;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var602); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce603==NULL)) {
var604 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce605!=NULL)) {
var606 = varonce605;
} else {
var607 = "count_type_test_resolved_total += count_type_test_resolved_";
var608 = core__flat___NativeString___to_s_full(var607, 59l, 59l);
var606 = var608;
varonce605 = var606;
}
((struct instance_core__NativeArray*)var604)->values[0]=var606;
if (likely(varonce609!=NULL)) {
var610 = varonce609;
} else {
var611 = ";";
var612 = core__flat___NativeString___to_s_full(var611, 1l, 1l);
var610 = var612;
varonce609 = var610;
}
((struct instance_core__NativeArray*)var604)->values[2]=var610;
} else {
var604 = varonce603;
varonce603 = NULL;
}
((struct instance_core__NativeArray*)var604)->values[1]=var_tag568;
{
var613 = ((val*(*)(val* self))(var604->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var604); /* native_to_s on <var604:NativeArray[String]>*/
}
varonce603 = var604;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var613); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce614==NULL)) {
var615 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce616!=NULL)) {
var617 = varonce616;
} else {
var618 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var619 = core__flat___NativeString___to_s_full(var618, 63l, 63l);
var617 = var619;
varonce616 = var617;
}
((struct instance_core__NativeArray*)var615)->values[0]=var617;
if (likely(varonce620!=NULL)) {
var621 = varonce620;
} else {
var622 = ";";
var623 = core__flat___NativeString___to_s_full(var622, 1l, 1l);
var621 = var623;
varonce620 = var621;
}
((struct instance_core__NativeArray*)var615)->values[2]=var621;
} else {
var615 = varonce614;
varonce614 = NULL;
}
((struct instance_core__NativeArray*)var615)->values[1]=var_tag568;
{
var624 = ((val*(*)(val* self))(var615->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var615); /* native_to_s on <var615:NativeArray[String]>*/
}
varonce614 = var615;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var624); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce625==NULL)) {
var626 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce627!=NULL)) {
var628 = varonce627;
} else {
var629 = "count_type_test_skipped_total += count_type_test_skipped_";
var630 = core__flat___NativeString___to_s_full(var629, 57l, 57l);
var628 = var630;
varonce627 = var628;
}
((struct instance_core__NativeArray*)var626)->values[0]=var628;
if (likely(varonce631!=NULL)) {
var632 = varonce631;
} else {
var633 = ";";
var634 = core__flat___NativeString___to_s_full(var633, 1l, 1l);
var632 = var634;
varonce631 = var632;
}
((struct instance_core__NativeArray*)var626)->values[2]=var632;
} else {
var626 = varonce625;
varonce625 = NULL;
}
((struct instance_core__NativeArray*)var626)->values[1]=var_tag568;
{
var635 = ((val*(*)(val* self))(var626->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var626); /* native_to_s on <var626:NativeArray[String]>*/
}
varonce625 = var626;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var635); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce636==NULL)) {
var637 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce638!=NULL)) {
var639 = varonce638;
} else {
var640 = "count_type_test_total_total += count_type_test_total_";
var641 = core__flat___NativeString___to_s_full(var640, 53l, 53l);
var639 = var641;
varonce638 = var639;
}
((struct instance_core__NativeArray*)var637)->values[0]=var639;
if (likely(varonce642!=NULL)) {
var643 = varonce642;
} else {
var644 = ";";
var645 = core__flat___NativeString___to_s_full(var644, 1l, 1l);
var643 = var645;
varonce642 = var643;
}
((struct instance_core__NativeArray*)var637)->values[2]=var643;
} else {
var637 = varonce636;
varonce636 = NULL;
}
((struct instance_core__NativeArray*)var637)->values[1]=var_tag568;
{
var646 = ((val*(*)(val* self))(var637->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var637); /* native_to_s on <var637:NativeArray[String]>*/
}
varonce636 = var637;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var646); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_564&3)?class_info[((long)var_564&3)]:var_564->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_564); /* next on <var_564:IndexedIterator[String]>*/
}
}
BREAK_label566: (void)0;
{
((void(*)(val* self))((((long)var_564&3)?class_info[((long)var_564&3)]:var_564->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_564); /* finish on <var_564:IndexedIterator[String]>*/
}
if (likely(varonce647!=NULL)) {
var648 = varonce647;
} else {
var649 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var650 = core__flat___NativeString___to_s_full(var649, 48l, 48l);
var648 = var650;
varonce647 = var648;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var648); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce651!=NULL)) {
var652 = varonce651;
} else {
var653 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var654 = core__flat___NativeString___to_s_full(var653, 51l, 51l);
var652 = var654;
varonce651 = var652;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var652); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var657 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var657 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1045);
fatal_exit(1);
}
var655 = var657;
RET_LABEL656:(void)0;
}
}
{
var658 = core__array___Collection___to_a(var655);
}
var_tags = var658;
if (likely(varonce659!=NULL)) {
var660 = varonce659;
} else {
var661 = "total";
var662 = core__flat___NativeString___to_s_full(var661, 5l, 5l);
var660 = var662;
varonce659 = var660;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tags, var660); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
var_663 = var_tags;
{
var664 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_663);
}
var_665 = var664;
for(;;) {
{
var666 = ((short int(*)(val* self))((((long)var_665&3)?class_info[((long)var_665&3)]:var_665->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_665); /* is_ok on <var_665:IndexedIterator[String]>*/
}
if (var666){
} else {
goto BREAK_label667;
}
{
var668 = ((val*(*)(val* self))((((long)var_665&3)?class_info[((long)var_665&3)]:var_665->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_665); /* item on <var_665:IndexedIterator[String]>*/
}
var_tag669 = var668;
if (unlikely(varonce670==NULL)) {
var671 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce672!=NULL)) {
var673 = varonce672;
} else {
var674 = "printf(\"";
var675 = core__flat___NativeString___to_s_full(var674, 8l, 8l);
var673 = var675;
varonce672 = var673;
}
((struct instance_core__NativeArray*)var671)->values[0]=var673;
if (likely(varonce676!=NULL)) {
var677 = varonce676;
} else {
var678 = "\");";
var679 = core__flat___NativeString___to_s_full(var678, 3l, 3l);
var677 = var679;
varonce676 = var677;
}
((struct instance_core__NativeArray*)var671)->values[2]=var677;
} else {
var671 = varonce670;
varonce670 = NULL;
}
((struct instance_core__NativeArray*)var671)->values[1]=var_tag669;
{
var680 = ((val*(*)(val* self))(var671->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var671); /* native_to_s on <var671:NativeArray[String]>*/
}
varonce670 = var671;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var680); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce681==NULL)) {
var682 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce683!=NULL)) {
var684 = varonce683;
} else {
var685 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var686 = core__flat___NativeString___to_s_full(var685, 50l, 50l);
var684 = var686;
varonce683 = var684;
}
((struct instance_core__NativeArray*)var682)->values[0]=var684;
if (likely(varonce687!=NULL)) {
var688 = varonce687;
} else {
var689 = ", 100.0*count_type_test_resolved_";
var690 = core__flat___NativeString___to_s_full(var689, 33l, 33l);
var688 = var690;
varonce687 = var688;
}
((struct instance_core__NativeArray*)var682)->values[2]=var688;
if (likely(varonce691!=NULL)) {
var692 = varonce691;
} else {
var693 = "/count_type_test_total_total);";
var694 = core__flat___NativeString___to_s_full(var693, 30l, 30l);
var692 = var694;
varonce691 = var692;
}
((struct instance_core__NativeArray*)var682)->values[4]=var692;
} else {
var682 = varonce681;
varonce681 = NULL;
}
((struct instance_core__NativeArray*)var682)->values[1]=var_tag669;
((struct instance_core__NativeArray*)var682)->values[3]=var_tag669;
{
var695 = ((val*(*)(val* self))(var682->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var682); /* native_to_s on <var682:NativeArray[String]>*/
}
varonce681 = var682;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var695); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce696==NULL)) {
var697 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce698!=NULL)) {
var699 = varonce698;
} else {
var700 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var701 = core__flat___NativeString___to_s_full(var700, 52l, 52l);
var699 = var701;
varonce698 = var699;
}
((struct instance_core__NativeArray*)var697)->values[0]=var699;
if (likely(varonce702!=NULL)) {
var703 = varonce702;
} else {
var704 = ", 100.0*count_type_test_unresolved_";
var705 = core__flat___NativeString___to_s_full(var704, 35l, 35l);
var703 = var705;
varonce702 = var703;
}
((struct instance_core__NativeArray*)var697)->values[2]=var703;
if (likely(varonce706!=NULL)) {
var707 = varonce706;
} else {
var708 = "/count_type_test_total_total);";
var709 = core__flat___NativeString___to_s_full(var708, 30l, 30l);
var707 = var709;
varonce706 = var707;
}
((struct instance_core__NativeArray*)var697)->values[4]=var707;
} else {
var697 = varonce696;
varonce696 = NULL;
}
((struct instance_core__NativeArray*)var697)->values[1]=var_tag669;
((struct instance_core__NativeArray*)var697)->values[3]=var_tag669;
{
var710 = ((val*(*)(val* self))(var697->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var697); /* native_to_s on <var697:NativeArray[String]>*/
}
varonce696 = var697;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var710); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce711==NULL)) {
var712 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce713!=NULL)) {
var714 = varonce713;
} else {
var715 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var716 = core__flat___NativeString___to_s_full(var715, 49l, 49l);
var714 = var716;
varonce713 = var714;
}
((struct instance_core__NativeArray*)var712)->values[0]=var714;
if (likely(varonce717!=NULL)) {
var718 = varonce717;
} else {
var719 = ", 100.0*count_type_test_skipped_";
var720 = core__flat___NativeString___to_s_full(var719, 32l, 32l);
var718 = var720;
varonce717 = var718;
}
((struct instance_core__NativeArray*)var712)->values[2]=var718;
if (likely(varonce721!=NULL)) {
var722 = varonce721;
} else {
var723 = "/count_type_test_total_total);";
var724 = core__flat___NativeString___to_s_full(var723, 30l, 30l);
var722 = var724;
varonce721 = var722;
}
((struct instance_core__NativeArray*)var712)->values[4]=var722;
} else {
var712 = varonce711;
varonce711 = NULL;
}
((struct instance_core__NativeArray*)var712)->values[1]=var_tag669;
((struct instance_core__NativeArray*)var712)->values[3]=var_tag669;
{
var725 = ((val*(*)(val* self))(var712->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var712); /* native_to_s on <var712:NativeArray[String]>*/
}
varonce711 = var712;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var725); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce726==NULL)) {
var727 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce728!=NULL)) {
var729 = varonce728;
} else {
var730 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var731 = core__flat___NativeString___to_s_full(var730, 49l, 49l);
var729 = var731;
varonce728 = var729;
}
((struct instance_core__NativeArray*)var727)->values[0]=var729;
if (likely(varonce732!=NULL)) {
var733 = varonce732;
} else {
var734 = ", 100.0*count_type_test_total_";
var735 = core__flat___NativeString___to_s_full(var734, 30l, 30l);
var733 = var735;
varonce732 = var733;
}
((struct instance_core__NativeArray*)var727)->values[2]=var733;
if (likely(varonce736!=NULL)) {
var737 = varonce736;
} else {
var738 = "/count_type_test_total_total);";
var739 = core__flat___NativeString___to_s_full(var738, 30l, 30l);
var737 = var739;
varonce736 = var737;
}
((struct instance_core__NativeArray*)var727)->values[4]=var737;
} else {
var727 = varonce726;
varonce726 = NULL;
}
((struct instance_core__NativeArray*)var727)->values[1]=var_tag669;
((struct instance_core__NativeArray*)var727)->values[3]=var_tag669;
{
var740 = ((val*(*)(val* self))(var727->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var727); /* native_to_s on <var727:NativeArray[String]>*/
}
varonce726 = var727;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var740); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_665&3)?class_info[((long)var_665&3)]:var_665->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_665); /* next on <var_665:IndexedIterator[String]>*/
}
}
BREAK_label667: (void)0;
{
((void(*)(val* self))((((long)var_665&3)?class_info[((long)var_665&3)]:var_665->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_665); /* finish on <var_665:IndexedIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var743 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var743 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var741 = var743;
RET_LABEL742:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var741) on <var741:ModelBuilder> */
var746 = var741->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var741:ModelBuilder> */
if (unlikely(var746 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var744 = var746;
RET_LABEL745:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var744) on <var744:ToolContext> */
var749 = var744->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var744:ToolContext> */
if (unlikely(var749 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var747 = var749;
RET_LABEL748:(void)0;
}
}
{
{ /* Inline opts#Option#value (var747) on <var747:OptionBool> */
var752 = var747->attrs[COLOR_opts__Option___value].val; /* _value on <var747:OptionBool> */
var750 = var752;
RET_LABEL751:(void)0;
}
}
var753 = (short int)((long)(var750)>>2);
if (var753){
if (likely(varonce754!=NULL)) {
var755 = varonce754;
} else {
var756 = "long count_invoke_total;";
var757 = core__flat___NativeString___to_s_full(var756, 24l, 24l);
var755 = var757;
varonce754 = var755;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var755); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce758!=NULL)) {
var759 = varonce758;
} else {
var760 = "count_invoke_total = count_invoke_by_tables + count_invoke_by_direct + count_invoke_by_inline;";
var761 = core__flat___NativeString___to_s_full(var760, 94l, 94l);
var759 = var761;
varonce758 = var759;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var759); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce762!=NULL)) {
var763 = varonce762;
} else {
var764 = "printf(\"# dynamic count_invocation: total %ld\\n\", count_invoke_total);";
var765 = core__flat___NativeString___to_s_full(var764, 70l, 70l);
var763 = var765;
varonce762 = var763;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var763); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce766!=NULL)) {
var767 = varonce766;
} else {
var768 = "printf(\"by table: %ld (%.2f%%)\\n\", count_invoke_by_tables, 100.0*count_invoke_by_tables/count_invoke_total);";
var769 = core__flat___NativeString___to_s_full(var768, 108l, 108l);
var767 = var769;
varonce766 = var767;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var767); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce770!=NULL)) {
var771 = varonce770;
} else {
var772 = "printf(\"direct:   %ld (%.2f%%)\\n\", count_invoke_by_direct, 100.0*count_invoke_by_direct/count_invoke_total);";
var773 = core__flat___NativeString___to_s_full(var772, 108l, 108l);
var771 = var773;
varonce770 = var771;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var771); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce774!=NULL)) {
var775 = varonce774;
} else {
var776 = "printf(\"inlined:  %ld (%.2f%%)\\n\", count_invoke_by_inline, 100.0*count_invoke_by_inline/count_invoke_total);";
var777 = core__flat___NativeString___to_s_full(var776, 108l, 108l);
var775 = var777;
varonce774 = var775;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var775); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var780 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var780 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var778 = var780;
RET_LABEL779:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var778) on <var778:ModelBuilder> */
var783 = var778->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var778:ModelBuilder> */
if (unlikely(var783 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var781 = var783;
RET_LABEL782:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var781) on <var781:ToolContext> */
var786 = var781->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var781:ToolContext> */
if (unlikely(var786 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var784 = var786;
RET_LABEL785:(void)0;
}
}
{
{ /* Inline opts#Option#value (var784) on <var784:OptionBool> */
var789 = var784->attrs[COLOR_opts__Option___value].val; /* _value on <var784:OptionBool> */
var787 = var789;
RET_LABEL788:(void)0;
}
}
var790 = (short int)((long)(var787)>>2);
if (var790){
if (likely(varonce791!=NULL)) {
var792 = varonce791;
} else {
var793 = "printf(\"# dynamic attribute reads: %ld\\n\", count_attr_reads);";
var794 = core__flat___NativeString___to_s_full(var793, 61l, 61l);
var792 = var794;
varonce791 = var792;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var792); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce795!=NULL)) {
var796 = varonce795;
} else {
var797 = "printf(\"# dynamic isset checks: %ld\\n\", count_isset_checks);";
var798 = core__flat___NativeString___to_s_full(var797, 60l, 60l);
var796 = var798;
varonce795 = var796;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var796); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce799!=NULL)) {
var800 = varonce799;
} else {
var801 = "return 0;";
var802 = core__flat___NativeString___to_s_full(var801, 9l, 9l);
var800 = var802;
varonce799 = var800;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var800); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce803!=NULL)) {
var804 = varonce803;
} else {
var805 = "}";
var806 = core__flat___NativeString___to_s_full(var805, 1l, 1l);
var804 = var806;
varonce803 = var804;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var804); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var809 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var809 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var807 = var809;
RET_LABEL808:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var807) on <var807:MModule> */
var812 = var807->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var807:MModule> */
if (unlikely(var812 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 104);
fatal_exit(1);
}
var810 = var812;
RET_LABEL811:(void)0;
}
}
{
var813 = poset___poset__POSetElement___greaters(var810);
}
var_814 = var813;
{
var815 = ((val*(*)(val* self))((((long)var_814&3)?class_info[((long)var_814&3)]:var_814->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_814); /* iterator on <var_814:Collection[MModule]>*/
}
var_816 = var815;
for(;;) {
{
var817 = ((short int(*)(val* self))((((long)var_816&3)?class_info[((long)var_816&3)]:var_816->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_816); /* is_ok on <var_816:Iterator[MModule]>*/
}
if (var817){
} else {
goto BREAK_label818;
}
{
var819 = ((val*(*)(val* self))((((long)var_816&3)?class_info[((long)var_816&3)]:var_816->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_816); /* item on <var_816:Iterator[MModule]>*/
}
var_m = var819;
if (likely(varonce820!=NULL)) {
var821 = varonce820;
} else {
var822 = "FILE_";
var823 = core__flat___NativeString___to_s_full(var822, 5l, 5l);
var821 = var823;
varonce820 = var821;
}
{
var824 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_m);
}
{
var825 = ((val*(*)(val* self, val* p0))(var821->class->vft[COLOR_core__abstract_text__String___43d]))(var821, var824); /* + on <var821:String>*/
}
var_f = var825;
if (unlikely(varonce826==NULL)) {
var827 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce828!=NULL)) {
var829 = varonce828;
} else {
var830 = "const char ";
var831 = core__flat___NativeString___to_s_full(var830, 11l, 11l);
var829 = var831;
varonce828 = var829;
}
((struct instance_core__NativeArray*)var827)->values[0]=var829;
if (likely(varonce832!=NULL)) {
var833 = varonce832;
} else {
var834 = "[] = \"";
var835 = core__flat___NativeString___to_s_full(var834, 6l, 6l);
var833 = var835;
varonce832 = var833;
}
((struct instance_core__NativeArray*)var827)->values[2]=var833;
if (likely(varonce836!=NULL)) {
var837 = varonce836;
} else {
var838 = "\";";
var839 = core__flat___NativeString___to_s_full(var838, 2l, 2l);
var837 = var839;
varonce836 = var837;
}
((struct instance_core__NativeArray*)var827)->values[4]=var837;
} else {
var827 = varonce826;
varonce826 = NULL;
}
((struct instance_core__NativeArray*)var827)->values[1]=var_f;
{
{ /* Inline mmodule#MModule#location (var_m) on <var_m:MModule> */
var842 = var_m->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_m:MModule> */
if (unlikely(var842 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 98);
fatal_exit(1);
}
var840 = var842;
RET_LABEL841:(void)0;
}
}
{
{ /* Inline location#Location#file (var840) on <var840:Location> */
var845 = var840->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var840:Location> */
var843 = var845;
RET_LABEL844:(void)0;
}
}
if (var843 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 944);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var843) on <var843:nullable SourceFile> */
if (unlikely(var843 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var848 = var843->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var843:nullable SourceFile> */
if (unlikely(var848 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var846 = var848;
RET_LABEL847:(void)0;
}
}
{
var849 = ((val*(*)(val* self))(var846->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var846); /* escape_to_c on <var846:String>*/
}
((struct instance_core__NativeArray*)var827)->values[3]=var849;
{
var850 = ((val*(*)(val* self))(var827->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var827); /* native_to_s on <var827:NativeArray[String]>*/
}
varonce826 = var827;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var850); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce851==NULL)) {
var852 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce853!=NULL)) {
var854 = varonce853;
} else {
var855 = "extern const char ";
var856 = core__flat___NativeString___to_s_full(var855, 18l, 18l);
var854 = var856;
varonce853 = var854;
}
((struct instance_core__NativeArray*)var852)->values[0]=var854;
if (likely(varonce857!=NULL)) {
var858 = varonce857;
} else {
var859 = "[];";
var860 = core__flat___NativeString___to_s_full(var859, 3l, 3l);
var858 = var860;
varonce857 = var858;
}
((struct instance_core__NativeArray*)var852)->values[2]=var858;
} else {
var852 = varonce851;
varonce851 = NULL;
}
((struct instance_core__NativeArray*)var852)->values[1]=var_f;
{
var861 = ((val*(*)(val* self))(var852->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var852); /* native_to_s on <var852:NativeArray[String]>*/
}
varonce851 = var852;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var_f, var861); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:AbstractCompiler>*/
}
{
((void(*)(val* self))((((long)var_816&3)?class_info[((long)var_816&3)]:var_816->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_816); /* next on <var_816:Iterator[MModule]>*/
}
}
BREAK_label818: (void)0;
{
((void(*)(val* self))((((long)var_816&3)?class_info[((long)var_816&3)]:var_816->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_816); /* finish on <var_816:Iterator[MModule]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_nitni_global_ref_functions(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "struct nitni_global_ref_list_t *nitni_global_ref_list;\nvoid initialize_nitni_global_refs() {\n\tnitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));\n\tnitni_global_ref_list->head = NULL;\n\tnitni_global_ref_list->tail = NULL;\n}\n\nvoid nitni_global_ref_add( struct nitni_ref *ref ) {\n\tif ( nitni_global_ref_list->head == NULL ) {\n\t\tnitni_global_ref_list->head = ref;\n\t\tref->prev = NULL;\n\t} else {\n\t\tnitni_global_ref_list->tail->next = ref;\n\t\tref->prev = nitni_global_ref_list->tail;\n\t}\n\tnitni_global_ref_list->tail = ref;\n\n\tref->next = NULL;\n}\n\nvoid nitni_global_ref_remove( struct nitni_ref *ref ) {\n\tif ( ref->prev == NULL ) {\n\t\tnitni_global_ref_list->head = ref->next;\n\t} else {\n\t\tref->prev->next = ref->next;\n\t}\n\n\tif ( ref->next == NULL ) {\n\t\tnitni_global_ref_list->tail = ref->prev;\n\t} else {\n\t\tref->next->prev = ref->prev;\n\t}\n}\n\nextern void nitni_global_ref_incr( struct nitni_ref *ref ) {\n\tif ( ref->count == 0 ) /* not registered */\n\t{\n\t\t/* add to list */\n\t\tnitni_global_ref_add( ref );\n\t}\n\n\tref->count ++;\n}\n\nextern void nitni_global_ref_decr( struct nitni_ref *ref ) {\n\tif ( ref->count == 1 ) /* was last reference */\n\t{\n\t\t/* remove from list */\n\t\tnitni_global_ref_remove( ref );\n\t}\n\n\tref->count --;\n}\n";
var3 = core__flat___NativeString___to_s_full(var2, 1260l, 1260l);
var1 = var3;
varonce = var1;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies for (self: AbstractCompiler): Array[ExternFile] */
val* nitc___nitc__AbstractCompiler___extern_bodies(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1010);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files_to_copy for (self: AbstractCompiler): Array[String] */
val* nitc___nitc__AbstractCompiler___files_to_copy(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1013);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#seen_extern for (self: AbstractCompiler): ArraySet[String] */
val* nitc___nitc__AbstractCompiler___seen_extern(val* self) {
val* var /* : ArraySet[String] */;
val* var1 /* : ArraySet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1016);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#generate_init_attr for (self: AbstractCompiler, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void nitc___nitc__AbstractCompiler___generate_init_attr(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : Set[MClassDef] */;
val* var5 /* : Array[nullable Object] */;
val* var_cds /* var cds: Array[MClassDef] */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_ /* var : Array[MClassDef] */;
val* var9 /* : IndexedIterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[MClassDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : Array[AAttrPropdef] */;
val* var_17 /* var : Array[AAttrPropdef] */;
val* var18 /* : IndexedIterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[AAttrPropdef] */;
short int var20 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_npropdef /* var npropdef: AAttrPropdef */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1019);
fatal_exit(1);
}
var_v = p0;
var_recv = p1;
var_mtype = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MClassType___MType__collect_mclassdefs(var_mtype, var1);
}
{
var5 = core__array___Collection___to_a(var4);
}
var_cds = var5;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nitc__model___MModule___linearize_mclassdefs(var6, var_cds); /* Direct call model#MModule#linearize_mclassdefs on <var6:MModule>*/
}
var_ = var_cds;
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[MClassDef]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[MClassDef]>*/
}
var_cd = var12;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__modelize_property___ModelBuilder___collect_attr_propdef(var13, var_cd);
}
var_17 = var16;
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_17);
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:IndexedIterator[AAttrPropdef]>*/
}
if (var20){
} else {
goto BREAK_label21;
}
{
var22 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:IndexedIterator[AAttrPropdef]>*/
}
var_npropdef = var22;
{
nitc__separate_compiler___AAttrPropdef___init_expr(var_npropdef, var_v, var_recv); /* Direct call separate_compiler#AAttrPropdef#init_expr on <var_npropdef:AAttrPropdef>*/
}
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:IndexedIterator[AAttrPropdef]>*/
}
}
BREAK_label21: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:IndexedIterator[AAttrPropdef]>*/
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[MClassDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[MClassDef]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_tags for (self: AbstractCompiler): Array[String] */
val* nitc___nitc__AbstractCompiler___count_type_test_tags(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1045);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_resolved for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_resolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1046);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_unresolved for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_unresolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1047);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_skipped for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_skipped(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1048);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#init_count_type_test_tags for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___init_count_type_test_tags(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
val* var_res /* var res: HashMap[String, Int] */;
val* var2 /* : Array[String] */;
val* var4 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var5 /* : IndexedIterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[String] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var9 /* : nullable Object */;
var1 = NEW_core__HashMap(&type_core__HashMap__core__String__core__Int);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[String, Int]>*/
}
var_res = var1;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1045);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[String]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[String]>*/
}
var_tag = var8;
{
var9 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_res, var_tag, var9); /* Direct call hash_collection#HashMap#[]= on <var_res:HashMap[String, Int]>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#display_stats for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : Sys */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : Sys */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
val* var22 /* : HashMap[String, Int] */;
val* var_count_type_test_total /* var count_type_test_total: HashMap[String, Int] */;
val* var23 /* : HashMap[String, Int] */;
val* var25 /* : HashMap[String, Int] */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
val* var30 /* : nullable Object */;
val* var31 /* : HashMap[String, Int] */;
val* var33 /* : HashMap[String, Int] */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : nullable Object */;
val* var39 /* : HashMap[String, Int] */;
val* var41 /* : HashMap[String, Int] */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
val* var46 /* : nullable Object */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : nullable Object */;
val* var52 /* : Array[String] */;
val* var54 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var55 /* : IndexedIterator[nullable Object] */;
val* var_56 /* var : IndexedIterator[String] */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var59 /* : HashMap[String, Int] */;
val* var61 /* : HashMap[String, Int] */;
val* var62 /* : nullable Object */;
val* var63 /* : HashMap[String, Int] */;
val* var65 /* : HashMap[String, Int] */;
val* var66 /* : nullable Object */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var70 /* : Int */;
long var71 /* : Int */;
long var72 /* : Int */;
val* var73 /* : HashMap[String, Int] */;
val* var75 /* : HashMap[String, Int] */;
val* var76 /* : nullable Object */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var84 /* : Int */;
val* var85 /* : nullable Object */;
val* var86 /* : HashMap[String, Int] */;
val* var88 /* : HashMap[String, Int] */;
val* var_89 /* var : HashMap[String, Int] */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
val* var_94 /* var : String */;
val* var95 /* : nullable Object */;
val* var96 /* : HashMap[String, Int] */;
val* var98 /* : HashMap[String, Int] */;
val* var99 /* : nullable Object */;
long var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
long var106 /* : Int */;
long var107 /* : Int */;
long var108 /* : Int */;
val* var109 /* : nullable Object */;
val* var110 /* : HashMap[String, Int] */;
val* var112 /* : HashMap[String, Int] */;
val* var_113 /* var : HashMap[String, Int] */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : String */;
val* var_118 /* var : String */;
val* var119 /* : nullable Object */;
val* var120 /* : HashMap[String, Int] */;
val* var122 /* : HashMap[String, Int] */;
val* var123 /* : nullable Object */;
long var124 /* : Int */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
long var130 /* : Int */;
long var131 /* : Int */;
long var132 /* : Int */;
val* var133 /* : nullable Object */;
val* var134 /* : HashMap[String, Int] */;
val* var136 /* : HashMap[String, Int] */;
val* var_137 /* var : HashMap[String, Int] */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : String */;
val* var_142 /* var : String */;
val* var143 /* : nullable Object */;
val* var144 /* : HashMap[String, Int] */;
val* var146 /* : HashMap[String, Int] */;
val* var147 /* : nullable Object */;
long var148 /* : Int */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
const char* var_class_name153;
long var154 /* : Int */;
long var155 /* : Int */;
long var156 /* : Int */;
val* var157 /* : nullable Object */;
val* var_158 /* var : HashMap[String, Int] */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : String */;
val* var_163 /* var : String */;
val* var164 /* : nullable Object */;
val* var165 /* : nullable Object */;
long var166 /* : Int */;
short int var168 /* : Bool */;
int cltype169;
int idtype170;
const char* var_class_name171;
long var172 /* : Int */;
long var173 /* : Int */;
long var174 /* : Int */;
val* var175 /* : nullable Object */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : String */;
val* var180 /* : nullable Object */;
long var181 /* : Int */;
long var_count_type_test /* var count_type_test: Int */;
val* var182 /* : Array[String] */;
val* var184 /* : Array[String] */;
val* var185 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
val* var189 /* : String */;
val* var_190 /* var : Array[String] */;
val* var191 /* : IndexedIterator[nullable Object] */;
val* var_192 /* var : IndexedIterator[String] */;
short int var193 /* : Bool */;
val* var195 /* : nullable Object */;
val* var_tag196 /* var tag: String */;
val* var197 /* : Sys */;
val* var198 /* : Array[Object] */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : Sys */;
val* var202 /* : NativeArray[String] */;
static val* varonce201;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : String */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
val* var210 /* : String */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : String */;
val* var215 /* : HashMap[String, Int] */;
val* var217 /* : HashMap[String, Int] */;
val* var218 /* : nullable Object */;
val* var219 /* : String */;
long var220 /* : Int */;
val* var221 /* : Sys */;
val* var222 /* : HashMap[String, Int] */;
val* var224 /* : HashMap[String, Int] */;
val* var225 /* : nullable Object */;
val* var226 /* : String */;
long var227 /* : Int */;
val* var228 /* : String */;
val* var229 /* : Array[Object] */;
val* var230 /* : NativeArray[Object] */;
val* var231 /* : Sys */;
val* var233 /* : NativeArray[String] */;
static val* varonce232;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : String */;
val* var246 /* : HashMap[String, Int] */;
val* var248 /* : HashMap[String, Int] */;
val* var249 /* : nullable Object */;
val* var250 /* : String */;
long var251 /* : Int */;
val* var252 /* : Sys */;
val* var253 /* : HashMap[String, Int] */;
val* var255 /* : HashMap[String, Int] */;
val* var256 /* : nullable Object */;
val* var257 /* : String */;
long var258 /* : Int */;
val* var259 /* : String */;
val* var260 /* : Array[Object] */;
val* var261 /* : NativeArray[Object] */;
val* var262 /* : Sys */;
val* var264 /* : NativeArray[String] */;
static val* varonce263;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
val* var276 /* : String */;
val* var277 /* : HashMap[String, Int] */;
val* var279 /* : HashMap[String, Int] */;
val* var280 /* : nullable Object */;
val* var281 /* : String */;
long var282 /* : Int */;
val* var283 /* : Sys */;
val* var284 /* : HashMap[String, Int] */;
val* var286 /* : HashMap[String, Int] */;
val* var287 /* : nullable Object */;
val* var288 /* : String */;
long var289 /* : Int */;
val* var290 /* : String */;
val* var291 /* : Array[Object] */;
val* var292 /* : NativeArray[Object] */;
val* var293 /* : Sys */;
val* var295 /* : NativeArray[String] */;
static val* varonce294;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
val* var299 /* : String */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
val* var307 /* : String */;
val* var308 /* : nullable Object */;
val* var309 /* : String */;
long var310 /* : Int */;
val* var311 /* : Sys */;
val* var312 /* : nullable Object */;
val* var313 /* : String */;
long var314 /* : Int */;
val* var315 /* : String */;
val* var316 /* : Array[Object] */;
val* var317 /* : NativeArray[Object] */;
val* var318 /* : Sys */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
val* var322 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
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
var12 = (short int)((long)(var9)>>2);
if (var12){
var13 = glob_sys;
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "# static count_type_test";
var16 = core__flat___NativeString___to_s_full(var15, 24l, 24l);
var14 = var16;
varonce = var14;
}
{
core__file___Sys___print(var13, var14); /* Direct call file#Sys#print on <var13:Sys>*/
}
var17 = glob_sys;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "\tresolved:\tunresolved\tskipped\ttotal";
var21 = core__flat___NativeString___to_s_full(var20, 35l, 35l);
var19 = var21;
varonce18 = var19;
}
{
core__file___Sys___print(var17, var19); /* Direct call file#Sys#print on <var17:Sys>*/
}
{
var22 = nitc___nitc__AbstractCompiler___init_count_type_test_tags(self);
}
var_count_type_test_total = var22;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1046);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "total";
var29 = core__flat___NativeString___to_s_full(var28, 5l, 5l);
var27 = var29;
varonce26 = var27;
}
{
var30 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var23, var27, var30); /* Direct call hash_collection#HashMap#[]= on <var23:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var33 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1047);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "total";
var37 = core__flat___NativeString___to_s_full(var36, 5l, 5l);
var35 = var37;
varonce34 = var35;
}
{
var38 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var31, var35, var38); /* Direct call hash_collection#HashMap#[]= on <var31:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var41 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1048);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "total";
var45 = core__flat___NativeString___to_s_full(var44, 5l, 5l);
var43 = var45;
varonce42 = var43;
}
{
var46 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var39, var43, var46); /* Direct call hash_collection#HashMap#[]= on <var39:HashMap[String, Int]>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "total";
var50 = core__flat___NativeString___to_s_full(var49, 5l, 5l);
var48 = var50;
varonce47 = var48;
}
{
var51 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var48, var51); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var54 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1045);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_ = var52;
{
var55 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_56 = var55;
for(;;) {
{
var57 = ((short int(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_56); /* is_ok on <var_56:IndexedIterator[String]>*/
}
if (var57){
} else {
goto BREAK_label;
}
{
var58 = ((val*(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_56); /* item on <var_56:IndexedIterator[String]>*/
}
var_tag = var58;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1046);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var59, var_tag);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var65 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1047);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var63, var_tag);
}
{
{ /* Inline kernel#Int#+ (var62,var66) on <var62:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var66:nullable Object(Int)> isa OTHER */
/* <var66:nullable Object(Int)> isa OTHER */
var69 = 1; /* easy <var66:nullable Object(Int)> isa OTHER*/
if (unlikely(!var69)) {
var_class_name = var66 == NULL ? "null" : (((long)var66&3)?type_info[((long)var66&3)]:var66->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var70 = (long)(var62)>>2;
var71 = (long)(var66)>>2;
var72 = var70 + var71;
var67 = var72;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var75 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1048);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var73, var_tag);
}
{
{ /* Inline kernel#Int#+ (var67,var76) on <var67:Int> */
/* Covariant cast for argument 0 (i) <var76:nullable Object(Int)> isa OTHER */
/* <var76:nullable Object(Int)> isa OTHER */
var79 = 1; /* easy <var76:nullable Object(Int)> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = var76 == NULL ? "null" : (((long)var76&3)?type_info[((long)var76&3)]:var76->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var83 = (long)(var76)>>2;
var84 = var67 + var83;
var77 = var84;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
var85 = (val*)(var77<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var_tag, var85); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var88 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1046);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_89 = var86;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "total";
var93 = core__flat___NativeString___to_s_full(var92, 5l, 5l);
var91 = var93;
varonce90 = var91;
}
var_94 = var91;
{
var95 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_89, var_94);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var98 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1046);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var96, var_tag);
}
{
{ /* Inline kernel#Int#+ (var95,var99) on <var95:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var99:nullable Object(Int)> isa OTHER */
/* <var99:nullable Object(Int)> isa OTHER */
var102 = 1; /* easy <var99:nullable Object(Int)> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = var99 == NULL ? "null" : (((long)var99&3)?type_info[((long)var99&3)]:var99->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var106 = (long)(var95)>>2;
var107 = (long)(var99)>>2;
var108 = var106 + var107;
var100 = var108;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
var109 = (val*)(var100<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_89, var_94, var109); /* Direct call hash_collection#HashMap#[]= on <var_89:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var112 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1047);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
var_113 = var110;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "total";
var117 = core__flat___NativeString___to_s_full(var116, 5l, 5l);
var115 = var117;
varonce114 = var115;
}
var_118 = var115;
{
var119 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_113, var_118);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var122 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1047);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var120, var_tag);
}
{
{ /* Inline kernel#Int#+ (var119,var123) on <var119:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var123:nullable Object(Int)> isa OTHER */
/* <var123:nullable Object(Int)> isa OTHER */
var126 = 1; /* easy <var123:nullable Object(Int)> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = var123 == NULL ? "null" : (((long)var123&3)?type_info[((long)var123&3)]:var123->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var130 = (long)(var119)>>2;
var131 = (long)(var123)>>2;
var132 = var130 + var131;
var124 = var132;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
var133 = (val*)(var124<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_113, var_118, var133); /* Direct call hash_collection#HashMap#[]= on <var_113:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var136 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1048);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_137 = var134;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "total";
var141 = core__flat___NativeString___to_s_full(var140, 5l, 5l);
var139 = var141;
varonce138 = var139;
}
var_142 = var139;
{
var143 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_137, var_142);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var146 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1048);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var144, var_tag);
}
{
{ /* Inline kernel#Int#+ (var143,var147) on <var143:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var147:nullable Object(Int)> isa OTHER */
/* <var147:nullable Object(Int)> isa OTHER */
var150 = 1; /* easy <var147:nullable Object(Int)> isa OTHER*/
if (unlikely(!var150)) {
var_class_name153 = var147 == NULL ? "null" : (((long)var147&3)?type_info[((long)var147&3)]:var147->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name153);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var154 = (long)(var143)>>2;
var155 = (long)(var147)>>2;
var156 = var154 + var155;
var148 = var156;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
{
var157 = (val*)(var148<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_137, var_142, var157); /* Direct call hash_collection#HashMap#[]= on <var_137:HashMap[String, Int]>*/
}
var_158 = var_count_type_test_total;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "total";
var162 = core__flat___NativeString___to_s_full(var161, 5l, 5l);
var160 = var162;
varonce159 = var160;
}
var_163 = var160;
{
var164 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_158, var_163);
}
{
var165 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag);
}
{
{ /* Inline kernel#Int#+ (var164,var165) on <var164:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var165:nullable Object(Int)> isa OTHER */
/* <var165:nullable Object(Int)> isa OTHER */
var168 = 1; /* easy <var165:nullable Object(Int)> isa OTHER*/
if (unlikely(!var168)) {
var_class_name171 = var165 == NULL ? "null" : (((long)var165&3)?type_info[((long)var165&3)]:var165->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name171);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var172 = (long)(var164)>>2;
var173 = (long)(var165)>>2;
var174 = var172 + var173;
var166 = var174;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
}
{
var175 = (val*)(var166<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_158, var_163, var175); /* Direct call hash_collection#HashMap#[]= on <var_158:HashMap[String, Int]>*/
}
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_56); /* next on <var_56:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_56); /* finish on <var_56:IndexedIterator[String]>*/
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "total";
var179 = core__flat___NativeString___to_s_full(var178, 5l, 5l);
var177 = var179;
varonce176 = var177;
}
{
var180 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var177);
}
var181 = (long)(var180)>>2;
var_count_type_test = var181;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var184 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1045);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
var185 = core__array___Collection___to_a(var182);
}
var_tags = var185;
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "total";
var189 = core__flat___NativeString___to_s_full(var188, 5l, 5l);
var187 = var189;
varonce186 = var187;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tags, var187); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
var_190 = var_tags;
{
var191 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_190);
}
var_192 = var191;
for(;;) {
{
var193 = ((short int(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_192); /* is_ok on <var_192:IndexedIterator[String]>*/
}
if (var193){
} else {
goto BREAK_label194;
}
{
var195 = ((val*(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_192); /* item on <var_192:IndexedIterator[String]>*/
}
var_tag196 = var195;
var197 = glob_sys;
var198 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var198 = array_instance Array[Object] */
var199 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var199)->values[0] = (val*) var_tag196;
{
((void(*)(val* self, val* p0, long p1))(var198->class->vft[COLOR_core__array__Array__with_native]))(var198, var199, 1l); /* with_native on <var198:Array[Object]>*/
}
}
{
core__file___Sys___printn(var197, var198); /* Direct call file#Sys#printn on <var197:Sys>*/
}
var200 = glob_sys;
if (unlikely(varonce201==NULL)) {
var202 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "\t";
var206 = core__flat___NativeString___to_s_full(var205, 1l, 1l);
var204 = var206;
varonce203 = var204;
}
((struct instance_core__NativeArray*)var202)->values[0]=var204;
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = " (";
var210 = core__flat___NativeString___to_s_full(var209, 2l, 2l);
var208 = var210;
varonce207 = var208;
}
((struct instance_core__NativeArray*)var202)->values[2]=var208;
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "%)";
var214 = core__flat___NativeString___to_s_full(var213, 2l, 2l);
var212 = var214;
varonce211 = var212;
}
((struct instance_core__NativeArray*)var202)->values[4]=var212;
} else {
var202 = varonce201;
varonce201 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var217 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1046);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
var218 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var215, var_tag196);
}
var220 = (long)(var218)>>2;
var219 = core__flat___Int___core__abstract_text__Object__to_s(var220);
((struct instance_core__NativeArray*)var202)->values[1]=var219;
var221 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var224 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1046);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
var225 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var222, var_tag196);
}
{
var227 = (long)(var225)>>2;
var226 = counter___core__Sys___div(var221, var227, var_count_type_test);
}
((struct instance_core__NativeArray*)var202)->values[3]=var226;
{
var228 = ((val*(*)(val* self))(var202->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var202); /* native_to_s on <var202:NativeArray[String]>*/
}
varonce201 = var202;
var229 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var229 = array_instance Array[Object] */
var230 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var230)->values[0] = (val*) var228;
{
((void(*)(val* self, val* p0, long p1))(var229->class->vft[COLOR_core__array__Array__with_native]))(var229, var230, 1l); /* with_native on <var229:Array[Object]>*/
}
}
{
core__file___Sys___printn(var200, var229); /* Direct call file#Sys#printn on <var200:Sys>*/
}
var231 = glob_sys;
if (unlikely(varonce232==NULL)) {
var233 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce234!=NULL)) {
var235 = varonce234;
} else {
var236 = "\t";
var237 = core__flat___NativeString___to_s_full(var236, 1l, 1l);
var235 = var237;
varonce234 = var235;
}
((struct instance_core__NativeArray*)var233)->values[0]=var235;
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = " (";
var241 = core__flat___NativeString___to_s_full(var240, 2l, 2l);
var239 = var241;
varonce238 = var239;
}
((struct instance_core__NativeArray*)var233)->values[2]=var239;
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "%)";
var245 = core__flat___NativeString___to_s_full(var244, 2l, 2l);
var243 = var245;
varonce242 = var243;
}
((struct instance_core__NativeArray*)var233)->values[4]=var243;
} else {
var233 = varonce232;
varonce232 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var248 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1047);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
var249 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var246, var_tag196);
}
var251 = (long)(var249)>>2;
var250 = core__flat___Int___core__abstract_text__Object__to_s(var251);
((struct instance_core__NativeArray*)var233)->values[1]=var250;
var252 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var255 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1047);
fatal_exit(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
{
var256 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var253, var_tag196);
}
{
var258 = (long)(var256)>>2;
var257 = counter___core__Sys___div(var252, var258, var_count_type_test);
}
((struct instance_core__NativeArray*)var233)->values[3]=var257;
{
var259 = ((val*(*)(val* self))(var233->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var233); /* native_to_s on <var233:NativeArray[String]>*/
}
varonce232 = var233;
var260 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var260 = array_instance Array[Object] */
var261 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var261)->values[0] = (val*) var259;
{
((void(*)(val* self, val* p0, long p1))(var260->class->vft[COLOR_core__array__Array__with_native]))(var260, var261, 1l); /* with_native on <var260:Array[Object]>*/
}
}
{
core__file___Sys___printn(var231, var260); /* Direct call file#Sys#printn on <var231:Sys>*/
}
var262 = glob_sys;
if (unlikely(varonce263==NULL)) {
var264 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "\t";
var268 = core__flat___NativeString___to_s_full(var267, 1l, 1l);
var266 = var268;
varonce265 = var266;
}
((struct instance_core__NativeArray*)var264)->values[0]=var266;
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = " (";
var272 = core__flat___NativeString___to_s_full(var271, 2l, 2l);
var270 = var272;
varonce269 = var270;
}
((struct instance_core__NativeArray*)var264)->values[2]=var270;
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "%)";
var276 = core__flat___NativeString___to_s_full(var275, 2l, 2l);
var274 = var276;
varonce273 = var274;
}
((struct instance_core__NativeArray*)var264)->values[4]=var274;
} else {
var264 = varonce263;
varonce263 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var279 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var279 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1048);
fatal_exit(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
var280 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var277, var_tag196);
}
var282 = (long)(var280)>>2;
var281 = core__flat___Int___core__abstract_text__Object__to_s(var282);
((struct instance_core__NativeArray*)var264)->values[1]=var281;
var283 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var286 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var286 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1048);
fatal_exit(1);
}
var284 = var286;
RET_LABEL285:(void)0;
}
}
{
var287 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var284, var_tag196);
}
{
var289 = (long)(var287)>>2;
var288 = counter___core__Sys___div(var283, var289, var_count_type_test);
}
((struct instance_core__NativeArray*)var264)->values[3]=var288;
{
var290 = ((val*(*)(val* self))(var264->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var264); /* native_to_s on <var264:NativeArray[String]>*/
}
varonce263 = var264;
var291 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var291 = array_instance Array[Object] */
var292 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var292)->values[0] = (val*) var290;
{
((void(*)(val* self, val* p0, long p1))(var291->class->vft[COLOR_core__array__Array__with_native]))(var291, var292, 1l); /* with_native on <var291:Array[Object]>*/
}
}
{
core__file___Sys___printn(var262, var291); /* Direct call file#Sys#printn on <var262:Sys>*/
}
var293 = glob_sys;
if (unlikely(varonce294==NULL)) {
var295 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce296!=NULL)) {
var297 = varonce296;
} else {
var298 = "\t";
var299 = core__flat___NativeString___to_s_full(var298, 1l, 1l);
var297 = var299;
varonce296 = var297;
}
((struct instance_core__NativeArray*)var295)->values[0]=var297;
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = " (";
var303 = core__flat___NativeString___to_s_full(var302, 2l, 2l);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var295)->values[2]=var301;
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "%)";
var307 = core__flat___NativeString___to_s_full(var306, 2l, 2l);
var305 = var307;
varonce304 = var305;
}
((struct instance_core__NativeArray*)var295)->values[4]=var305;
} else {
var295 = varonce294;
varonce294 = NULL;
}
{
var308 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag196);
}
var310 = (long)(var308)>>2;
var309 = core__flat___Int___core__abstract_text__Object__to_s(var310);
((struct instance_core__NativeArray*)var295)->values[1]=var309;
var311 = glob_sys;
{
var312 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag196);
}
{
var314 = (long)(var312)>>2;
var313 = counter___core__Sys___div(var311, var314, var_count_type_test);
}
((struct instance_core__NativeArray*)var295)->values[3]=var313;
{
var315 = ((val*(*)(val* self))(var295->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var295); /* native_to_s on <var295:NativeArray[String]>*/
}
varonce294 = var295;
var316 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var316 = array_instance Array[Object] */
var317 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var317)->values[0] = (val*) var315;
{
((void(*)(val* self, val* p0, long p1))(var316->class->vft[COLOR_core__array__Array__with_native]))(var316, var317, 1l); /* with_native on <var316:Array[Object]>*/
}
}
{
core__file___Sys___printn(var293, var316); /* Direct call file#Sys#printn on <var293:Sys>*/
}
var318 = glob_sys;
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = "";
var322 = core__flat___NativeString___to_s_full(var321, 0l, 0l);
var320 = var322;
varonce319 = var320;
}
{
core__file___Sys___print(var318, var320); /* Direct call file#Sys#print on <var318:Sys>*/
}
{
((void(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_192); /* next on <var_192:IndexedIterator[String]>*/
}
}
BREAK_label194: (void)0;
{
((void(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_192); /* finish on <var_192:IndexedIterator[String]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#finalize_ffi_for_module for (self: AbstractCompiler, MModule) */
void nitc___nitc__AbstractCompiler___finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
var_mmodule = p0;
{
nitc__light___MModule___finalize_ffi(var_mmodule, self); /* Direct call light#MModule#finalize_ffi on <var_mmodule:MModule>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#name for (self: CodeFile): String */
val* nitc___nitc__CodeFile___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1104);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#name= for (self: CodeFile, String) */
void nitc___nitc__CodeFile___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val = p0; /* _name on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#writers for (self: CodeFile): Array[CodeWriter] */
val* nitc___nitc__CodeFile___writers(val* self) {
val* var /* : Array[CodeWriter] */;
val* var1 /* : Array[CodeWriter] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val; /* _writers on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1105);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#required_declarations for (self: CodeFile): HashSet[String] */
val* nitc___nitc__CodeFile___required_declarations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1106);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#init for (self: CodeFile) */
void nitc___nitc__CodeFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CodeFile___core__kernel__Object__init]))(self); /* init on <self:CodeFile>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#file for (self: CodeWriter): CodeFile */
val* nitc___nitc__CodeWriter___file(val* self) {
val* var /* : CodeFile */;
val* var1 /* : CodeFile */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#file= for (self: CodeWriter, CodeFile) */
void nitc___nitc__CodeWriter___file_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val = p0; /* _file on <self:CodeWriter> */
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#lines for (self: CodeWriter): List[String] */
val* nitc___nitc__CodeWriter___lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1112);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#decl_lines for (self: CodeWriter): List[String] */
val* nitc___nitc__CodeWriter___decl_lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#add_decl for (self: CodeWriter, String) */
void nitc___nitc__CodeWriter___add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : List[String] */;
val* var2 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var, var_s); /* Direct call abstract_collection#Sequence#add on <var:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#init for (self: CodeWriter) */
void nitc___nitc__CodeWriter___core__kernel__Object__init(val* self) {
val* var /* : CodeFile */;
val* var2 /* : CodeFile */;
val* var3 /* : Array[CodeWriter] */;
val* var5 /* : Array[CodeWriter] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CodeWriter___core__kernel__Object__init]))(self); /* init on <self:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#CodeWriter#file (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#writers (var) on <var:CodeFile> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val; /* _writers on <var:CodeFile> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1105);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[CodeWriter]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler for (self: AbstractCompilerVisitor): AbstractCompiler */
val* nitc___nitc__AbstractCompilerVisitor___compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler= for (self: AbstractCompilerVisitor, AbstractCompiler) */
void nitc___nitc__AbstractCompilerVisitor___compiler_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__COMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val = p0; /* _compiler on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node for (self: AbstractCompilerVisitor): nullable ANode */
val* nitc___nitc__AbstractCompilerVisitor___current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node= for (self: AbstractCompilerVisitor, nullable ANode) */
void nitc___nitc__AbstractCompilerVisitor___current_node_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = p0; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame for (self: AbstractCompilerVisitor): nullable StaticFrame */
val* nitc___nitc__AbstractCompilerVisitor___frame(val* self) {
val* var /* : nullable StaticFrame */;
val* var1 /* : nullable StaticFrame */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame= for (self: AbstractCompilerVisitor, nullable StaticFrame) */
void nitc___nitc__AbstractCompilerVisitor___frame_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = p0; /* _frame on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#object_type for (self: AbstractCompilerVisitor): MClassType */
val* nitc___nitc__AbstractCompilerVisitor___object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__model___MModule___object_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_type for (self: AbstractCompilerVisitor): MClassType */
val* nitc___nitc__AbstractCompilerVisitor___bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__model___MModule___bool_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer for (self: AbstractCompilerVisitor): CodeWriter */
val* nitc___nitc__AbstractCompilerVisitor___writer(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1148);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer= for (self: AbstractCompilerVisitor, CodeWriter) */
void nitc___nitc__AbstractCompilerVisitor___writer_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val = p0; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init for (self: AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : List[CodeFile] */;
val* var6 /* : List[CodeFile] */;
val* var7 /* : nullable Object */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init]))(self); /* init on <self:AbstractCompilerVisitor>*/
}
var = NEW_nitc__CodeWriter(&type_nitc__CodeWriter);
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 578);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__List___core__abstract_collection__SequenceRead__last(var4);
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__abstract_compiler__CodeWriter__file_61d]))(var, var7); /* file= on <var:CodeWriter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer= (self,var) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val = var; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_property for (self: AbstractCompilerVisitor, String, MType): MMethod */
val* nitc___nitc__AbstractCompilerVisitor___get_property(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : ModelBuilder */;
val* var7 /* : ModelBuilder */;
val* var8 /* : nullable ANode */;
val* var10 /* : nullable ANode */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : AbstractCompiler */;
val* var16 /* : AbstractCompiler */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var20 /* : MMethod */;
var_name = p0;
var_recv = p1;
/* <var_recv:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_recv->type->table_size) {
var1 = 0;
} else {
var1 = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1158);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MType(MClassType)> */
var13 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:MType(MClassType)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var16 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var14) on <var14:AbstractCompiler> */
var19 = var14->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var14:AbstractCompiler> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__ModelBuilder___force_get_primitive_method(var5, var8, var_name, var11, var17);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compile_callsite for (self: AbstractCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var7 /* : Array[MProperty] */;
val* var9 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var_i /* var i: Int */;
val* var_ /* var : Array[MProperty] */;
val* var13 /* : IndexedIterator[nullable Object] */;
val* var_14 /* var : IndexedIterator[MProperty] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var18 /* : Array[RuntimeVariable] */;
val* var_19 /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var20 /* : MPropDef */;
val* var22 /* : MPropDef */;
val* var23 /* : nullable MSignature */;
val* var25 /* : nullable MSignature */;
val* var26 /* : Array[MParameter] */;
val* var28 /* : Array[MParameter] */;
val* var_29 /* var : Array[MParameter] */;
val* var30 /* : IndexedIterator[nullable Object] */;
val* var_31 /* var : IndexedIterator[MParameter] */;
short int var32 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_x /* var x: MParameter */;
val* var35 /* : nullable Object */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name;
long var41 /* : Int */;
val* var42 /* : nullable RuntimeVariable */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : MMethod */;
val* var62 /* : MMethod */;
val* var63 /* : Array[RuntimeVariable] */;
val* var_64 /* var : Array[RuntimeVariable] */;
val* var65 /* : nullable RuntimeVariable */;
val* var66 /* : MMethod */;
val* var68 /* : MMethod */;
val* var69 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_arguments = p1;
{
{ /* Inline model_base#MEntity#is_broken (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:CallSite> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var6 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var4) on <var4:MMethodDef> */
var9 = var4->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var4:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_initializers = var7;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_initializers);
}
var11 = !var10;
if (var11){
{
var12 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv = var12;
var_i = 1l;
var_ = var_initializers;
{
var13 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:IndexedIterator[MProperty]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:IndexedIterator[MProperty]>*/
}
var_p = var16;
/* <var_p:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_p->type->table_size) {
var17 = 0;
} else {
var17 = var_p->type->type_table[cltype] == idtype;
}
if (var17){
var18 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var18, 1l); /* Direct call array#Array#with_capacity on <var18:Array[RuntimeVariable]>*/
}
var_19 = var18;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_19, var_recv); /* Direct call array#AbstractArray#push on <var_19:Array[RuntimeVariable]>*/
}
var_args = var_19;
{
{ /* Inline model#MProperty#intro (var_p) on <var_p:MProperty(MMethod)> */
var22 = var_p->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_p:MProperty(MMethod)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var20) on <var20:MPropDef(MMethodDef)> */
var25 = var20->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var20:MPropDef(MMethodDef)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1173);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var23) on <var23:nullable MSignature> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var23:nullable MSignature> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_29 = var26;
{
var30 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_29);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:IndexedIterator[MParameter]>*/
}
if (var32){
} else {
goto BREAK_label33;
}
{
var34 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:IndexedIterator[MParameter]>*/
}
var_x = var34;
{
var35 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var35); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var41 = var_i + 1l;
var36 = var41;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_i = var36;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:IndexedIterator[MParameter]>*/
}
}
BREAK_label33: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:IndexedIterator[MParameter]>*/
}
{
var42 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var_p, var_args);
}
} else {
/* <var_p:MProperty> isa MAttribute */
cltype44 = type_nitc__MAttribute.color;
idtype45 = type_nitc__MAttribute.id;
if(cltype44 >= var_p->type->table_size) {
var43 = 0;
} else {
var43 = var_p->type->type_table[cltype44] == idtype45;
}
if (var43){
{
var46 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(self, var_p, var_recv, var46); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var53 = var_i + 1l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_i = var47;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1181);
fatal_exit(1);
}
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:IndexedIterator[MProperty]>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var56 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var54) on <var_i:Int> */
var59 = var_i == var54;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (unlikely(!var57)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1183);
fatal_exit(1);
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var62 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 653);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var63, 1l); /* Direct call array#Array#with_capacity on <var63:Array[RuntimeVariable]>*/
}
var_64 = var63;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_64, var_recv); /* Direct call array#AbstractArray#push on <var_64:Array[RuntimeVariable]>*/
}
{
var65 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var60, var_64);
}
var = var65;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var68 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 653);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var66, var_arguments);
}
var = var69;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#calloc_array for (self: AbstractCompilerVisitor, MType, Array[RuntimeVariable]) */
void nitc___nitc__AbstractCompilerVisitor___calloc_array(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "calloc_array", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1193);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#varargize for (self: AbstractCompilerVisitor, MMethodDef, nullable SignatureMap, RuntimeVariable, SequenceRead[AExpr]): Array[RuntimeVariable] */
val* nitc___nitc__AbstractCompilerVisitor___varargize(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : Array[RuntimeVariable] */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_map /* var map: nullable SignatureMap */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_args /* var args: SequenceRead[AExpr] */;
val* var1 /* : MSignature */;
val* var2 /* : nullable MSignature */;
val* var4 /* : nullable MSignature */;
val* var5 /* : nullable MSignature */;
val* var7 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var8 /* : Array[RuntimeVariable] */;
val* var_res /* var res: Array[RuntimeVariable] */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var_ /* var : SequenceRead[AExpr] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : IndexedIterator[AExpr] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
val* var28 /* : RuntimeVariable */;
val* var29 /* : Array[RuntimeVariable] */;
long var30 /* : Int */;
val* var_exprs /* var exprs: Array[RuntimeVariable] */;
val* var_31 /* var : SequenceRead[AExpr] */;
val* var32 /* : Iterator[nullable Object] */;
val* var_33 /* var : IndexedIterator[AExpr] */;
short int var34 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_ne37 /* var ne: AExpr */;
val* var38 /* : RuntimeVariable */;
long var_i /* var i: Int */;
long var39 /* : Int */;
long var_40 /* var : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var44 /* : Bool */;
val* var46 /* : Array[MParameter] */;
val* var48 /* : Array[MParameter] */;
val* var49 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var50 /* : ArrayMap[Int, Int] */;
val* var52 /* : ArrayMap[Int, Int] */;
val* var53 /* : nullable Object */;
val* var54 /* : nullable Object */;
val* var_j /* var j: nullable Int */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : RuntimeVariable */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var_65 /* var : Bool */;
val* var66 /* : nullable Object */;
long var67 /* : Int */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
long var78 /* : Int */;
long var80 /* : Int */;
val* var81 /* : Array[nullable Object] */;
long var82 /* : Int */;
val* var_vararg /* var vararg: Array[RuntimeVariable] */;
val* var83 /* : MType */;
val* var85 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var86 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var87 /* : nullable Object */;
long var88 /* : Int */;
long var89 /* : Int */;
var_mpropdef = p0;
var_map = p1;
var_recv = p2;
var_args = p3;
{
{ /* Inline model#MMethodDef#new_msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var4 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2!=NULL) {
var1 = var2;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1210);
fatal_exit(1);
}
var1 = var5;
}
var_msignature = var1;
var8 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[RuntimeVariable]>*/
}
var_res = var8;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_recv); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
{
var9 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var9,0l) on <var9:Int> */
var12 = var9 == 0l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = var_res;
goto RET_LABEL;
} else {
}
if (var_map == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_map,((val*)NULL)) on <var_map:nullable SignatureMap> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_map,var_other) on <var_map:nullable SignatureMap(SignatureMap)> */
var18 = var_map == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
var19 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
var20 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var19,var20) on <var19:Int> */
var23 = var19 == var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1217);
fatal_exit(1);
}
var_ = var_args;
{
var24 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[AExpr]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:IndexedIterator[AExpr]>*/
}
if (var26){
} else {
goto BREAK_label;
}
{
var27 = ((val*(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:IndexedIterator[AExpr]>*/
}
var_ne = var27;
{
var28 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_ne, ((val*)NULL));
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var28); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:IndexedIterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:IndexedIterator[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
var29 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
var30 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
core___core__Array___with_capacity(var29, var30); /* Direct call array#Array#with_capacity on <var29:Array[RuntimeVariable]>*/
}
var_exprs = var29;
var_31 = var_args;
{
var32 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_31); /* iterator on <var_31:SequenceRead[AExpr]>*/
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:IndexedIterator[AExpr]>*/
}
if (var34){
} else {
goto BREAK_label35;
}
{
var36 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:IndexedIterator[AExpr]>*/
}
var_ne37 = var36;
{
var38 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_ne37, ((val*)NULL));
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_exprs, var38); /* Direct call array#Array#add on <var_exprs:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:IndexedIterator[AExpr]>*/
}
}
BREAK_label35: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:IndexedIterator[AExpr]>*/
}
var_i = 0l;
{
var39 = nitc___nitc__MSignature___arity(var_msignature);
}
var_40 = var39;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_40) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_40:Int> isa OTHER */
/* <var_40:Int> isa OTHER */
var43 = 1; /* easy <var_40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var44 = var_i < var_40;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
} else {
goto BREAK_label45;
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var48 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var46, var_i);
}
var_param = var49;
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:nullable SignatureMap(SignatureMap)> */
var52 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:nullable SignatureMap(SignatureMap)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 628);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var54 = (val*)(var_i<<2|1);
var53 = core___core__MapRead___get_or_null(var50, var54);
}
var_j = var53;
if (var_j == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_j,((val*)NULL)) on <var_j:nullable Int> */
var58 = 0; /* incompatible types Int vs. null; cannot be NULL */
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (var55){
{
var59 = nitc___nitc__AbstractCompilerVisitor___null_instance(self);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var59); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label60;
} else {
}
{
{ /* Inline model#MParameter#is_vararg (var_param) on <var_param:MParameter> */
var64 = var_param->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_param:MParameter> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_65 = var62;
if (var62){
{
var66 = ((val*(*)(val* self, long p0))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i); /* [] on <var_args:SequenceRead[AExpr]>*/
}
{
{ /* Inline typing#AExpr#vararg_decl (var66) on <var66:nullable Object(AExpr)> */
var69 = var66->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <var66:nullable Object(AExpr)> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var67,0l) on <var67:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var72 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var76 = var67 > 0l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var61 = var70;
} else {
var61 = var_65;
}
if (var61){
{
var77 = ((val*(*)(val* self, long p0))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i); /* [] on <var_args:SequenceRead[AExpr]>*/
}
{
{ /* Inline typing#AExpr#vararg_decl (var77) on <var77:nullable Object(AExpr)> */
var80 = var77->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <var77:nullable Object(AExpr)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var82 = (long)(var_j)>>2;
var81 = core___core__AbstractArrayRead___sub(var_exprs, var82, var78);
}
var_vararg = var81;
{
{ /* Inline model#MParameter#mtype (var_param) on <var_param:MParameter> */
var85 = var_param->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
var_elttype = var83;
{
var86 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__vararg_instance(self, var_mpropdef, var_recv, var_vararg, var_elttype);
}
var_arg = var86;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_arg); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label60;
} else {
}
{
var88 = (long)(var_j)>>2;
var87 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_exprs, var88);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var87); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
BREAK_label60: (void)0;
{
var89 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var89;
}
BREAK_label45: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#anchor for (self: AbstractCompilerVisitor, MType): MType */
val* nitc___nitc__AbstractCompilerVisitor___anchor(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : nullable StaticFrame */;
val* var11 /* : nullable StaticFrame */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MType */;
var_mtype = p0;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1257);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#receiver (var9) on <var9:nullable StaticFrame> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1918);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var9:nullable StaticFrame> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1918);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var6, var12); /* anchor_to on <var_mtype:MType>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#resolve_for for (self: AbstractCompilerVisitor, MType, RuntimeVariable): MType */
val* nitc___nitc__AbstractCompilerVisitor___resolve_for(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_recv /* var recv: RuntimeVariable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : MClassType */;
val* var11 /* : MClassType */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : MType */;
var_mtype = p0;
var_recv = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var5 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1873);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1263);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#receiver (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1918);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1918);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_mtype, var3, var9, var15, 1); /* resolve_for on <var_mtype:MType>*/
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#autoadapt for (self: AbstractCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___autoadapt(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var2 /* : MType */;
val* var4 /* : MType */;
val* var_valmtype /* var valmtype: MType */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : MModule */;
val* var10 /* : MModule */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : AbstractCompiler */;
val* var19 /* : AbstractCompiler */;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
short int var23 /* : Bool */;
val* var24 /* : RuntimeVariable */;
val* var25 /* : String */;
val* var27 /* : String */;
val* var28 /* : MType */;
val* var30 /* : MType */;
val* var_res /* var res: RuntimeVariable */;
val* var31 /* : RuntimeVariable */;
val* var32 /* : String */;
val* var34 /* : String */;
val* var_res35 /* var res: RuntimeVariable */;
var_value = p0;
var_mtype = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var4 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1873);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_valmtype = var2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__MType___is_subtype(var_valmtype, var8, ((val*)NULL), var_mtype);
}
if (var11){
var = var_value;
goto RET_LABEL;
} else {
}
/* <var_valmtype:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_valmtype->type->table_size) {
var13 = 0;
} else {
var13 = var_valmtype->type->type_table[cltype] == idtype;
}
var_ = var13;
if (var13){
{
{ /* Inline model#MProxyType#mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var16 = var_valmtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1625);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var19 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var17) on <var17:AbstractCompiler> */
var22 = var17->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var17:AbstractCompiler> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc___nitc__MType___is_subtype(var14, var20, ((val*)NULL), var_mtype);
}
var12 = var23;
} else {
var12 = var_;
}
if (var12){
var24 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_value) on <var_value:RuntimeVariable> */
var27 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1867);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MProxyType#mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var30 = var_valmtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1625);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var24, var25); /* name= on <var24:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var24, var_valmtype); /* mtype= on <var24:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var24, var28); /* mcasttype= on <var24:RuntimeVariable>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_core__kernel__Object__init]))(var24); /* init on <var24:RuntimeVariable>*/
}
var_res = var24;
var = var_res;
goto RET_LABEL;
} else {
var31 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_value) on <var_value:RuntimeVariable> */
var34 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1867);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var31, var32); /* name= on <var31:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var31, var_valmtype); /* mtype= on <var31:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var31, var_mtype); /* mcasttype= on <var31:RuntimeVariable>*/
}
{
((void(*)(val* self))(var31->class->vft[COLOR_core__kernel__Object__init]))(var31); /* init on <var31:RuntimeVariable>*/
}
var_res35 = var31;
var = var_res35;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_send for (self: AbstractCompilerVisitor, MMethod, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___monomorphic_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethod */;
val* var_t /* var t: MType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var9 /* : nullable RuntimeVariable */;
var_m = p0;
var_t = p1;
var_args = p2;
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1326);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MProperty___lookup_first_definition(var_m, var5, var_t);
}
var_propdef = var8;
{
var9 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_propdef, var_t, var_args);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send for (self: AbstractCompilerVisitor, MMethodDef, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___monomorphic_super_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_t /* var t: MType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : MPropDef */;
val* var9 /* : nullable RuntimeVariable */;
var_m = p0;
var_t = p1;
var_args = p2;
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1334);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MPropDef___lookup_next_definition(var_m, var5, var_t);
}
var_m = var8;
{
var9 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_m, var_t, var_args);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#check_recv_notnull for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
short int var20 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var21 /* : MType */;
val* var23 /* : MType */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
short int var_maybenull /* var maybenull: Bool */;
val* var27 /* : NativeArray[String] */;
static val* varonce;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
var_recv = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#Option#value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = (short int)((long)(var12)>>2);
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var19 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1873);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
/* <var17:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var17->type->table_size) {
var20 = 0;
} else {
var20 = var17->type->type_table[cltype] == idtype;
}
var_ = var20;
if (var20){
var16 = var_;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var23 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1873);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
/* <var21:MType> isa MNullType */
cltype25 = type_nitc__MNullType.color;
idtype26 = type_nitc__MNullType.id;
if(cltype25 >= var21->type->table_size) {
var24 = 0;
} else {
var24 = var21->type->type_table[cltype25] == idtype26;
}
var16 = var24;
}
var_maybenull = var16;
if (var_maybenull){
if (unlikely(varonce==NULL)) {
var27 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "if (unlikely(";
var31 = core__flat___NativeString___to_s_full(var30, 13l, 13l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = " == NULL)) {";
var35 = core__flat___NativeString___to_s_full(var34, 12l, 12l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce;
varonce = NULL;
}
{
var36 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var27)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce = var27;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Receiver is null";
var41 = core__flat___NativeString___to_s_full(var40, 16l, 16l);
var39 = var41;
varonce38 = var39;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "}";
var45 = core__flat___NativeString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#names for (self: AbstractCompilerVisitor): HashSet[String] */
val* nitc___nitc__AbstractCompilerVisitor___names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1367);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last for (self: AbstractCompilerVisitor): Int */
long nitc___nitc__AbstractCompilerVisitor___last(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last= for (self: AbstractCompilerVisitor, Int) */
void nitc___nitc__AbstractCompilerVisitor___last_61d(val* self, long p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l = p0; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_name for (self: AbstractCompilerVisitor, String): String */
val* nitc___nitc__AbstractCompilerVisitor___get_name(val* self, val* p0) {
val* var /* : String */;
val* var_s /* var s: String */;
val* var1 /* : HashSet[String] */;
val* var3 /* : HashSet[String] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashSet[String] */;
val* var8 /* : HashSet[String] */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
long var_i /* var i: Int */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var_s2 /* var s2: String */;
val* var18 /* : HashSet[String] */;
val* var20 /* : HashSet[String] */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : HashSet[String] */;
val* var26 /* : HashSet[String] */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1367);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashSet___core__abstract_collection__Collection__has(var1, var_s);
}
var5 = !var4;
if (var5){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1367);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var6, var_s); /* Direct call hash_collection#HashSet#add on <var6:HashSet[String]>*/
}
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var15 = var9 + 1l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
for(;;) {
{
var16 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
}
{
var17 = ((val*(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__String___43d]))(var_s, var16); /* + on <var_s:String>*/
}
var_s2 = var17;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var20 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1367);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core___core__HashSet___core__abstract_collection__Collection__has(var18, var_s2);
}
var22 = !var21;
if (var22){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last= (self,var_i) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l = var_i; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var26 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1367);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var24, var_s2); /* Direct call hash_collection#HashSet#add on <var24:HashSet[String]>*/
}
var = var_s2;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var33 = var_i + 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_i = var27;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_name for (self: AbstractCompilerVisitor, nullable EscapeMark): String */
val* nitc___nitc__AbstractCompilerVisitor___escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var_e /* var e: nullable EscapeMark */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : HashMap[EscapeMark, String] */;
val* var11 /* : HashMap[EscapeMark, String] */;
short int var12 /* : Bool */;
val* var13 /* : nullable StaticFrame */;
val* var15 /* : nullable StaticFrame */;
val* var16 /* : HashMap[EscapeMark, String] */;
val* var18 /* : HashMap[EscapeMark, String] */;
val* var19 /* : nullable Object */;
val* var20 /* : nullable String */;
val* var22 /* : nullable String */;
val* var_name /* var name: nullable String */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : nullable StaticFrame */;
val* var31 /* : nullable StaticFrame */;
val* var32 /* : HashMap[EscapeMark, String] */;
val* var34 /* : HashMap[EscapeMark, String] */;
var_e = p0;
if (var_e == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_e,((val*)NULL)) on <var_e:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_e, var_other); /* == on <var_e:nullable EscapeMark(EscapeMark)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1392);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1393);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1930);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1930);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var9, var_e);
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1393);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var13) on <var13:nullable StaticFrame> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1930);
fatal_exit(1);
}
var18 = var13->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var13:nullable StaticFrame> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1930);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var16, var_e);
}
var = var19;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#name (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var22 = var_e->attrs[COLOR_nitc__scope__EscapeMark___name].val; /* _name on <var_e:nullable EscapeMark(EscapeMark)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_name = var20;
if (var_name == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, ((val*)NULL)); /* == on <var_name:nullable String>*/
var23 = var24;
}
if (var23){
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "label";
var27 = core__flat___NativeString___to_s_full(var26, 5l, 5l);
var25 = var27;
varonce = var25;
}
var_name = var25;
} else {
}
{
var28 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var_name);
}
var_name = var28;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var31 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1397);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var29) on <var29:nullable StaticFrame> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1930);
fatal_exit(1);
}
var34 = var29->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var29:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1930);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var32, var_e, var_name); /* Direct call hash_collection#HashMap#[]= on <var32:HashMap[EscapeMark, String]>*/
}
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_escape_label for (self: AbstractCompilerVisitor, nullable EscapeMark) */
void nitc___nitc__AbstractCompilerVisitor___add_escape_label(val* self, val* p0) {
val* var_e /* var e: nullable EscapeMark */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[AEscapeExpr] */;
val* var8 /* : Array[AEscapeExpr] */;
short int var9 /* : Bool */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
var_e = p0;
if (var_e == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,((val*)NULL)) on <var_e:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable EscapeMark(EscapeMark)> */
var5 = var_e == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#escapes (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var8 = var_e->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <var_e:nullable EscapeMark(EscapeMark)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var6);
}
if (var9){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "BREAK_";
var14 = core__flat___NativeString___to_s_full(var13, 6l, 6l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ": (void)0;";
var18 = core__flat___NativeString___to_s_full(var17, 10l, 10l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
{
var19 = nitc___nitc__AbstractCompilerVisitor___escapemark_name(self, var_e);
}
((struct instance_core__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var20); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables for (self: AbstractCompilerVisitor): HashMap[Variable, RuntimeVariable] */
val* nitc___nitc__AbstractCompilerVisitor___variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1415);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variable for (self: AbstractCompilerVisitor, Variable): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___variable(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
val* var3 /* : HashMap[Variable, RuntimeVariable] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[Variable, RuntimeVariable] */;
val* var7 /* : HashMap[Variable, RuntimeVariable] */;
val* var8 /* : nullable Object */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_name /* var name: String */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var22 /* : MType */;
val* var23 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : HashMap[Variable, RuntimeVariable] */;
val* var48 /* : HashMap[Variable, RuntimeVariable] */;
var_variable = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1415);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_variable);
}
if (var4){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1415);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_variable);
}
var = var8;
goto RET_LABEL;
} else {
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "var_";
var13 = core__flat___NativeString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
} else {
var9 = varonce;
varonce = NULL;
}
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:Variable> */
var16 = var_variable->attrs[COLOR_nitc__scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 36);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
((struct instance_core__NativeArray*)var9)->values[1]=var14;
{
var17 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
var18 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var17);
}
var_name = var18;
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var21 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1424);
fatal_exit(1);
}
var_mtype = var19;
{
var22 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var22;
var23 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var23, var_name); /* name= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var23, var_mtype); /* mtype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var23, var_mtype); /* mcasttype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:RuntimeVariable>*/
}
var_res = var23;
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = " ";
var29 = core__flat___NativeString___to_s_full(var28, 1l, 1l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[1]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " /* var ";
var33 = core__flat___NativeString___to_s_full(var32, 8l, 8l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[3]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ": ";
var37 = core__flat___NativeString___to_s_full(var36, 2l, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var25)->values[5]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " */;";
var41 = core__flat___NativeString___to_s_full(var40, 4l, 4l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var25)->values[7]=var39;
} else {
var25 = varonce24;
varonce24 = NULL;
}
{
var42 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var25)->values[0]=var42;
((struct instance_core__NativeArray*)var25)->values[2]=var_name;
{
var43 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_variable); /* to_s on <var_variable:Variable>*/
}
((struct instance_core__NativeArray*)var25)->values[4]=var43;
{
var44 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var25)->values[6]=var44;
{
var45 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var45); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var48 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1415);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var46, var_variable, var_res); /* Direct call hash_collection#HashMap#[]= on <var46:HashMap[Variable, RuntimeVariable]>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_var(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var_name /* var name: String */;
val* var6 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var_mtype = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "var";
var4 = core__flat___NativeString___to_s_full(var3, 3l, 3l);
var2 = var4;
varonce = var2;
}
{
var5 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var5;
var6 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var6, var_name); /* name= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var6, var_mtype); /* mtype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var6, var_mtype); /* mcasttype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:RuntimeVariable>*/
}
var_res = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " ";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[1]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " /* : ";
var16 = core__flat___NativeString___to_s_full(var15, 6l, 6l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[3]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " */;";
var20 = core__flat___NativeString___to_s_full(var19, 4l, 4l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var8)->values[5]=var18;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var21 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[0]=var21;
((struct instance_core__NativeArray*)var8)->values[2]=var_name;
{
var22 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[4]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var_extern for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_var_extern(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var_name /* var name: String */;
val* var6 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var_mtype = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "var";
var4 = core__flat___NativeString___to_s_full(var3, 3l, 3l);
var2 = var4;
varonce = var2;
}
{
var5 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var5;
var6 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var6, var_name); /* name= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var6, var_mtype); /* mtype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var6, var_mtype); /* mcasttype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:RuntimeVariable>*/
}
var_res = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " ";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[1]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " /* : ";
var16 = core__flat___NativeString___to_s_full(var15, 6l, 6l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[3]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " for extern */;";
var20 = core__flat___NativeString___to_s_full(var19, 15l, 15l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var8)->values[5]=var18;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var21 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype_extern]))(var_mtype); /* ctype_extern on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[0]=var21;
((struct instance_core__NativeArray*)var8)->values[2]=var_name;
{
var22 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[4]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_named_var for (self: AbstractCompilerVisitor, MType, String): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_named_var(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
var_mtype = p0;
var_name = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
var2 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var2, var_name); /* name= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var2, var_mtype); /* mtype= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var2, var_mtype); /* mcasttype= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:RuntimeVariable>*/
}
var_res = var2;
if (unlikely(varonce==NULL)) {
var3 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = " ";
var7 = core__flat___NativeString___to_s_full(var6, 1l, 1l);
var5 = var7;
varonce4 = var5;
}
((struct instance_core__NativeArray*)var3)->values[1]=var5;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = " /* : ";
var11 = core__flat___NativeString___to_s_full(var10, 6l, 6l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var3)->values[3]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = " */;";
var15 = core__flat___NativeString___to_s_full(var14, 4l, 4l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var3)->values[5]=var13;
} else {
var3 = varonce;
varonce = NULL;
}
{
var16 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var3)->values[0]=var16;
((struct instance_core__NativeArray*)var3)->values[2]=var_name;
{
var17 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var3)->values[4]=var17;
{
var18 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var18); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#assign for (self: AbstractCompilerVisitor, RuntimeVariable, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___assign(val* self, val* p0, val* p1) {
val* var_left /* var left: RuntimeVariable */;
val* var_right /* var right: RuntimeVariable */;
val* var /* : MType */;
val* var2 /* : MType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
var_left = p0;
var_right = p1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_left) on <var_left:RuntimeVariable> */
var2 = var_left->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_left:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_right, var);
}
var_right = var3;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " = ";
var8 = core__flat___NativeString___to_s_full(var7, 3l, 3l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ";";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[3]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = ((val*(*)(val* self))(var_left->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_left); /* to_s on <var_left:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[0]=var13;
{
var14 = ((val*(*)(val* self))(var_right->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_right); /* to_s on <var_right:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
{
var15 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init_instance_or_extern for (self: AbstractCompilerVisitor, MClassType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : String */;
val* var_ctype /* var ctype: String */;
val* var2 /* : MClass */;
val* var4 /* : MClass */;
val* var5 /* : String */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : RuntimeVariable */;
val* var_recv /* var recv: nullable Object */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
val* var27 /* : RuntimeVariable */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : RuntimeVariable */;
var_mtype = p0;
{
var1 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
var_ctype = var1;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var4 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MClass#name (var2) on <var2:MClass> */
var7 = var2->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var2:MClass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "NativeArray";
var10 = core__flat___NativeString___to_s_full(var9, 11l, 11l);
var8 = var10;
varonce = var8;
}
{
{ /* Inline kernel#Object#!= (var5,var8) on <var5:String> */
var_other = var8;
{
var13 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:String>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1482);
fatal_exit(1);
}
{
var15 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var16 = !var15;
if (var16){
{
var17 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_mtype); /* init_instance on <self:AbstractCompilerVisitor>*/
}
var_recv = var17;
} else {
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "char*";
var21 = core__flat___NativeString___to_s_full(var20, 5l, 5l);
var19 = var21;
varonce18 = var19;
}
{
var22 = ((short int(*)(val* self, val* p0))(var_ctype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ctype, var19); /* == on <var_ctype:String>*/
}
if (var22){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "NULL/*special!*/";
var26 = core__flat___NativeString___to_s_full(var25, 16l, 16l);
var24 = var26;
varonce23 = var24;
}
{
var27 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var24, var_mtype);
}
var_recv = var27;
} else {
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "(";
var33 = core__flat___NativeString___to_s_full(var32, 1l, 1l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ")0/*special!*/";
var37 = core__flat___NativeString___to_s_full(var36, 14l, 14l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var29)->values[2]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
((struct instance_core__NativeArray*)var29)->values[1]=var_ctype;
{
var38 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var38, var_mtype);
}
var_recv = var39;
}
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#set_finalizer for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___set_finalizer(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : MType */;
val* var2 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
short int var26 /* : Bool */;
val* var27 /* : NativeArray[String] */;
static val* varonce;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
var_recv = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var2 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc__model___MModule___finalizable_type(var6);
}
var_finalizable_type = var9;
if (var_finalizable_type == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_finalizable_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_finalizable_type, var_other); /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/
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
var17 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var18 = !var17;
var11 = var18;
} else {
var11 = var_;
}
var_19 = var11;
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var22 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var20) on <var20:AbstractCompiler> */
var25 = var20->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var20:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__MType___is_subtype(var_mtype, var23, ((val*)NULL), var_finalizable_type);
}
var10 = var26;
} else {
var10 = var_19;
}
if (var10){
if (unlikely(varonce==NULL)) {
var27 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "gc_register_finalizer(";
var31 = core__flat___NativeString___to_s_full(var30, 22l, 22l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ");";
var35 = core__flat___NativeString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce;
varonce = NULL;
}
{
var36 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var27)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce = var27;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#mmodule for (self: AbstractCompilerVisitor): MModule */
val* nitc___nitc__AbstractCompilerVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int_instance for (self: AbstractCompilerVisitor, Int): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int_instance(val* self, long p0) {
val* var /* : RuntimeVariable */;
long var_value /* var value: Int */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "l";
var8 = core__flat___NativeString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
{
var9 = core__flat___Int___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[0]=var9;
{
var10 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var10); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#byte_instance for (self: AbstractCompilerVisitor, Byte): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___byte_instance(val* self, unsigned char p0) {
val* var /* : RuntimeVariable */;
unsigned char var_value /* var value: Byte */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___byte_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((unsigned char)";
var8 = core__flat___NativeString___to_s_full(var7, 16l, 16l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core__abstract_text___Byte___Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int8_instance for (self: AbstractCompilerVisitor, Int8): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int8_instance(val* self, int8_t p0) {
val* var /* : RuntimeVariable */;
int8_t var_value /* var value: Int8 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int8_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((int8_t)";
var8 = core__flat___NativeString___to_s_full(var7, 9l, 9l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core___core__Int8___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int16_instance for (self: AbstractCompilerVisitor, Int16): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int16_instance(val* self, int16_t p0) {
val* var /* : RuntimeVariable */;
int16_t var_value /* var value: Int16 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int16_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((int16_t)";
var8 = core__flat___NativeString___to_s_full(var7, 10l, 10l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core___core__Int16___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#uint16_instance for (self: AbstractCompilerVisitor, UInt16): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___uint16_instance(val* self, uint16_t p0) {
val* var /* : RuntimeVariable */;
uint16_t var_value /* var value: UInt16 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___uint16_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((uint16_t)";
var8 = core__flat___NativeString___to_s_full(var7, 11l, 11l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core___core__UInt16___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int32_instance for (self: AbstractCompilerVisitor, Int32): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int32_instance(val* self, int32_t p0) {
val* var /* : RuntimeVariable */;
int32_t var_value /* var value: Int32 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int32_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((int32_t)";
var8 = core__flat___NativeString___to_s_full(var7, 10l, 10l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core___core__Int32___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#uint32_instance for (self: AbstractCompilerVisitor, UInt32): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___uint32_instance(val* self, uint32_t p0) {
val* var /* : RuntimeVariable */;
uint32_t var_value /* var value: UInt32 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___uint32_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((uint32_t)";
var8 = core__flat___NativeString___to_s_full(var7, 11l, 11l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core___core__UInt32___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#char_instance for (self: AbstractCompilerVisitor, Char): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___char_instance(val* self, uint32_t p0) {
val* var /* : RuntimeVariable */;
uint32_t var_value /* var value: Char */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : RuntimeVariable */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : RuntimeVariable */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
long var26 /* : Int */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___char_type(var1);
}
var_t = var2;
{
{ /* Inline kernel#Char#code_point (var_value) on <var_value:Char> */
var5 = (long)var_value;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var3,128l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var8 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var3 < 128l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "\'";
var15 = core__flat___NativeString___to_s_full(var14, 1l, 1l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "\'";
var19 = core__flat___NativeString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var11)->values[2]=var17;
} else {
var11 = varonce;
varonce = NULL;
}
{
var20 = core__abstract_text___Char___Object__to_s(var_value);
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var20); /* escape_to_c on <var20:String>*/
}
((struct instance_core__NativeArray*)var11)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var10, var22); /* name= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var10, var_t); /* mtype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var10, var_t); /* mcasttype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:RuntimeVariable>*/
}
var = var10;
goto RET_LABEL;
} else {
var23 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__String);
} else {
var25 = varonce24;
varonce24 = NULL;
}
{
{ /* Inline kernel#Char#code_point (var_value) on <var_value:Char> */
var28 = (long)var_value;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var29 = core__flat___Int___core__abstract_text__Object__to_s(var26);
((struct instance_core__NativeArray*)var25)->values[0]=var29;
{
var30 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var23, var30); /* name= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var23, var_t); /* mtype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var23, var_t); /* mcasttype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:RuntimeVariable>*/
}
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#float_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___float_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: String */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
val* var5 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___float_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__String);
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var4)->values[0]=var_value;
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var5); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_instance for (self: AbstractCompilerVisitor, Bool): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___bool_instance(val* self, short int p0) {
val* var /* : RuntimeVariable */;
short int var_value /* var value: Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var_s /* var s: String */;
val* var9 /* : RuntimeVariable */;
val* var10 /* : MClassType */;
val* var11 /* : MClassType */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
if (var_value){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "1";
var4 = core__flat___NativeString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
var1 = var2;
} else {
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "0";
var8 = core__flat___NativeString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
var1 = var6;
}
var_s = var1;
var9 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
var10 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var11 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var9, var_s); /* name= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var9, var10); /* mtype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var9, var11); /* mcasttype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:RuntimeVariable>*/
}
var_res = var9;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#null_instance for (self: AbstractCompilerVisitor): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___null_instance(val* self) {
val* var /* : RuntimeVariable */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : Model */;
val* var9 /* : Model */;
val* var10 /* : MNullType */;
val* var12 /* : MNullType */;
val* var_t /* var t: MNullType */;
val* var13 /* : RuntimeVariable */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var_res /* var res: RuntimeVariable */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var4:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 78);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#Model#null_type (var7) on <var7:Model> */
var12 = var7->attrs[COLOR_nitc__model__Model___null_type].val; /* _null_type on <var7:Model> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 94);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_t = var10;
var13 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "((val*)NULL)";
var16 = core__flat___NativeString___to_s_full(var15, 12l, 12l);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var13, var14); /* name= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var13, var_t); /* mtype= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var13, var_t); /* mcasttype= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:RuntimeVariable>*/
}
var_res = var13;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
