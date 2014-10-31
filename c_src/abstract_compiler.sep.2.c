#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AbstractCompiler#compile_main_function for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__compile_main_function(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : ModelBuilder */;
val* var7 /* : ModelBuilder */;
val* var8 /* : ToolContext */;
val* var10 /* : ToolContext */;
val* var11 /* : OptionString */;
val* var13 /* : OptionString */;
val* var14 /* : nullable Object */;
val* var16 /* : nullable Object */;
val* var_ost /* var ost: nullable String */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var20 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
short int var21 /* : Bool */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
val* var40 /* : ModelBuilder */;
val* var42 /* : ModelBuilder */;
val* var43 /* : ToolContext */;
val* var45 /* : ToolContext */;
val* var46 /* : OptionBool */;
val* var48 /* : OptionBool */;
val* var49 /* : nullable Object */;
val* var51 /* : nullable Object */;
short int var52 /* : Bool */;
short int var_no_main /* var no_main: Bool */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var_61 /* var : Bool */;
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
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
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
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : ModelBuilder */;
val* var108 /* : ModelBuilder */;
val* var109 /* : ToolContext */;
val* var111 /* : ToolContext */;
val* var112 /* : OptionBool */;
val* var114 /* : OptionBool */;
val* var115 /* : nullable Object */;
val* var117 /* : nullable Object */;
short int var118 /* : Bool */;
val* var119 /* : Array[String] */;
val* var121 /* : Array[String] */;
val* var_122 /* var : Array[String] */;
val* var123 /* : ArrayIterator[nullable Object] */;
val* var_124 /* var : ArrayIterator[String] */;
short int var125 /* : Bool */;
val* var126 /* : nullable Object */;
val* var_tag /* var tag: String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : FlatString */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
val* var137 /* : Array[Object] */;
long var138 /* : Int */;
val* var139 /* : NativeArray[Object] */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : FlatString */;
val* var151 /* : Array[Object] */;
long var152 /* : Int */;
val* var153 /* : NativeArray[Object] */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : FlatString */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
val* var165 /* : Array[Object] */;
long var166 /* : Int */;
val* var167 /* : NativeArray[Object] */;
val* var168 /* : String */;
val* var169 /* : AbstractCompiler */;
val* var171 /* : AbstractCompiler */;
val* var172 /* : CodeWriter */;
val* var174 /* : CodeWriter */;
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
val* var189 /* : AbstractCompiler */;
val* var191 /* : AbstractCompiler */;
val* var192 /* : CodeWriter */;
val* var194 /* : CodeWriter */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
val* var205 /* : Array[Object] */;
long var206 /* : Int */;
val* var207 /* : NativeArray[Object] */;
val* var208 /* : String */;
val* var209 /* : AbstractCompiler */;
val* var211 /* : AbstractCompiler */;
val* var212 /* : CodeWriter */;
val* var214 /* : CodeWriter */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : FlatString */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
long var223 /* : Int */;
val* var224 /* : FlatString */;
val* var225 /* : Array[Object] */;
long var226 /* : Int */;
val* var227 /* : NativeArray[Object] */;
val* var228 /* : String */;
val* var230 /* : ModelBuilder */;
val* var232 /* : ModelBuilder */;
val* var233 /* : ToolContext */;
val* var235 /* : ToolContext */;
val* var236 /* : OptionBool */;
val* var238 /* : OptionBool */;
val* var239 /* : nullable Object */;
val* var241 /* : nullable Object */;
short int var242 /* : Bool */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
long var246 /* : Int */;
val* var247 /* : FlatString */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
long var251 /* : Int */;
val* var252 /* : FlatString */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
long var256 /* : Int */;
val* var257 /* : FlatString */;
val* var258 /* : AbstractCompiler */;
val* var260 /* : AbstractCompiler */;
val* var261 /* : CodeWriter */;
val* var263 /* : CodeWriter */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
long var267 /* : Int */;
val* var268 /* : FlatString */;
val* var269 /* : AbstractCompiler */;
val* var271 /* : AbstractCompiler */;
val* var272 /* : CodeWriter */;
val* var274 /* : CodeWriter */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : FlatString */;
val* var280 /* : AbstractCompiler */;
val* var282 /* : AbstractCompiler */;
val* var283 /* : CodeWriter */;
val* var285 /* : CodeWriter */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
long var289 /* : Int */;
val* var290 /* : FlatString */;
val* var291 /* : ModelBuilder */;
val* var293 /* : ModelBuilder */;
val* var294 /* : ToolContext */;
val* var296 /* : ToolContext */;
val* var297 /* : OptionBool */;
val* var299 /* : OptionBool */;
val* var300 /* : nullable Object */;
val* var302 /* : nullable Object */;
short int var303 /* : Bool */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
long var307 /* : Int */;
val* var308 /* : FlatString */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
long var312 /* : Int */;
val* var313 /* : FlatString */;
val* var314 /* : AbstractCompiler */;
val* var316 /* : AbstractCompiler */;
val* var317 /* : CodeWriter */;
val* var319 /* : CodeWriter */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
long var323 /* : Int */;
val* var324 /* : FlatString */;
val* var325 /* : AbstractCompiler */;
val* var327 /* : AbstractCompiler */;
val* var328 /* : CodeWriter */;
val* var330 /* : CodeWriter */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : FlatString */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : FlatString */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : NativeString */;
long var344 /* : Int */;
val* var345 /* : FlatString */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : NativeString */;
long var349 /* : Int */;
val* var350 /* : FlatString */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : FlatString */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
long var359 /* : Int */;
val* var360 /* : FlatString */;
short int var361 /* : Bool */;
static val* varonce362;
val* var363 /* : String */;
char* var364 /* : NativeString */;
long var365 /* : Int */;
val* var366 /* : FlatString */;
short int var367 /* : Bool */;
short int var368 /* : Bool */;
short int var_369 /* var : Bool */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : FlatString */;
short int var375 /* : Bool */;
short int var376 /* : Bool */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
long var380 /* : Int */;
val* var381 /* : FlatString */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
long var385 /* : Int */;
val* var386 /* : FlatString */;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : NativeString */;
long var390 /* : Int */;
val* var391 /* : FlatString */;
static val* varonce392;
val* var393 /* : String */;
char* var394 /* : NativeString */;
long var395 /* : Int */;
val* var396 /* : FlatString */;
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
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : NativeString */;
long var415 /* : Int */;
val* var416 /* : FlatString */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
long var420 /* : Int */;
val* var421 /* : FlatString */;
static val* varonce422;
val* var423 /* : String */;
char* var424 /* : NativeString */;
long var425 /* : Int */;
val* var426 /* : FlatString */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
long var430 /* : Int */;
val* var431 /* : FlatString */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : NativeString */;
long var435 /* : Int */;
val* var436 /* : FlatString */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : NativeString */;
long var440 /* : Int */;
val* var441 /* : FlatString */;
static val* varonce442;
val* var443 /* : String */;
char* var444 /* : NativeString */;
long var445 /* : Int */;
val* var446 /* : FlatString */;
short int var447 /* : Bool */;
short int var448 /* : Bool */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : NativeString */;
long var452 /* : Int */;
val* var453 /* : FlatString */;
static val* varonce454;
val* var455 /* : String */;
char* var456 /* : NativeString */;
long var457 /* : Int */;
val* var458 /* : FlatString */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
long var462 /* : Int */;
val* var463 /* : FlatString */;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : NativeString */;
long var467 /* : Int */;
val* var468 /* : FlatString */;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : NativeString */;
long var472 /* : Int */;
val* var473 /* : FlatString */;
static val* varonce474;
val* var475 /* : String */;
char* var476 /* : NativeString */;
long var477 /* : Int */;
val* var478 /* : FlatString */;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : NativeString */;
long var482 /* : Int */;
val* var483 /* : FlatString */;
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
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : NativeString */;
long var502 /* : Int */;
val* var503 /* : FlatString */;
static val* varonce504;
val* var505 /* : String */;
char* var506 /* : NativeString */;
long var507 /* : Int */;
val* var508 /* : FlatString */;
static val* varonce509;
val* var510 /* : String */;
char* var511 /* : NativeString */;
long var512 /* : Int */;
val* var513 /* : FlatString */;
static val* varonce514;
val* var515 /* : String */;
char* var516 /* : NativeString */;
long var517 /* : Int */;
val* var518 /* : FlatString */;
static val* varonce519;
val* var520 /* : String */;
char* var521 /* : NativeString */;
long var522 /* : Int */;
val* var523 /* : FlatString */;
static val* varonce524;
val* var525 /* : String */;
char* var526 /* : NativeString */;
long var527 /* : Int */;
val* var528 /* : FlatString */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : NativeString */;
long var532 /* : Int */;
val* var533 /* : FlatString */;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : NativeString */;
long var537 /* : Int */;
val* var538 /* : FlatString */;
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
static val* varonce549;
val* var550 /* : String */;
char* var551 /* : NativeString */;
long var552 /* : Int */;
val* var553 /* : FlatString */;
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
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : NativeString */;
long var567 /* : Int */;
val* var568 /* : FlatString */;
static val* varonce569;
val* var570 /* : String */;
char* var571 /* : NativeString */;
long var572 /* : Int */;
val* var573 /* : FlatString */;
val* var574 /* : MModule */;
val* var576 /* : MModule */;
val* var577 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
val* var578 /* : null */;
short int var579 /* : Bool */;
short int var580 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var582 /* : Bool */;
short int var583 /* : Bool */;
short int var584 /* : Bool */;
val* var585 /* : AbstractCompiler */;
val* var587 /* : AbstractCompiler */;
val* var588 /* : MModule */;
val* var590 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var591 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
static val* varonce592;
val* var593 /* : String */;
char* var594 /* : NativeString */;
long var595 /* : Int */;
val* var596 /* : FlatString */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
long var600 /* : Int */;
val* var601 /* : FlatString */;
val* var602 /* : Array[Object] */;
long var603 /* : Int */;
val* var604 /* : NativeArray[Object] */;
val* var605 /* : String */;
static val* varonce606;
val* var607 /* : String */;
char* var608 /* : NativeString */;
long var609 /* : Int */;
val* var610 /* : FlatString */;
val* var611 /* : MClass */;
val* var613 /* : MClass */;
val* var614 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
val* var615 /* : null */;
short int var616 /* : Bool */;
short int var617 /* : Bool */;
short int var619 /* : Bool */;
short int var620 /* : Bool */;
short int var621 /* : Bool */;
val* var622 /* : Array[RuntimeVariable] */;
long var623 /* : Int */;
val* var_624 /* var : Array[RuntimeVariable] */;
val* var625 /* : nullable RuntimeVariable */;
val* var626 /* : nullable MMethod */;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
long var630 /* : Int */;
val* var631 /* : FlatString */;
val* var632 /* : MClass */;
val* var634 /* : MClass */;
val* var635 /* : nullable MMethod */;
static val* varonce636;
val* var637 /* : String */;
char* var638 /* : NativeString */;
long var639 /* : Int */;
val* var640 /* : FlatString */;
val* var641 /* : MClass */;
val* var643 /* : MClass */;
val* var644 /* : nullable MMethod */;
val* var_main_method /* var main_method: nullable MMethod */;
val* var645 /* : null */;
short int var646 /* : Bool */;
short int var647 /* : Bool */;
short int var649 /* : Bool */;
short int var650 /* : Bool */;
short int var651 /* : Bool */;
val* var652 /* : Array[RuntimeVariable] */;
long var653 /* : Int */;
val* var_654 /* var : Array[RuntimeVariable] */;
val* var655 /* : nullable RuntimeVariable */;
val* var656 /* : ModelBuilder */;
val* var658 /* : ModelBuilder */;
val* var659 /* : ToolContext */;
val* var661 /* : ToolContext */;
val* var662 /* : OptionBool */;
val* var664 /* : OptionBool */;
val* var665 /* : nullable Object */;
val* var667 /* : nullable Object */;
short int var668 /* : Bool */;
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
static val* varonce679;
val* var680 /* : String */;
char* var681 /* : NativeString */;
long var682 /* : Int */;
val* var683 /* : FlatString */;
static val* varonce684;
val* var685 /* : String */;
char* var686 /* : NativeString */;
long var687 /* : Int */;
val* var688 /* : FlatString */;
val* var689 /* : Array[String] */;
val* var691 /* : Array[String] */;
val* var_692 /* var : Array[String] */;
val* var693 /* : ArrayIterator[nullable Object] */;
val* var_694 /* var : ArrayIterator[String] */;
short int var695 /* : Bool */;
val* var696 /* : nullable Object */;
val* var_tag697 /* var tag: String */;
static val* varonce698;
val* var699 /* : String */;
char* var700 /* : NativeString */;
long var701 /* : Int */;
val* var702 /* : FlatString */;
static val* varonce703;
val* var704 /* : String */;
char* var705 /* : NativeString */;
long var706 /* : Int */;
val* var707 /* : FlatString */;
val* var708 /* : Array[Object] */;
long var709 /* : Int */;
val* var710 /* : NativeArray[Object] */;
val* var711 /* : String */;
static val* varonce712;
val* var713 /* : String */;
char* var714 /* : NativeString */;
long var715 /* : Int */;
val* var716 /* : FlatString */;
static val* varonce717;
val* var718 /* : String */;
char* var719 /* : NativeString */;
long var720 /* : Int */;
val* var721 /* : FlatString */;
static val* varonce722;
val* var723 /* : String */;
char* var724 /* : NativeString */;
long var725 /* : Int */;
val* var726 /* : FlatString */;
static val* varonce727;
val* var728 /* : String */;
char* var729 /* : NativeString */;
long var730 /* : Int */;
val* var731 /* : FlatString */;
static val* varonce732;
val* var733 /* : String */;
char* var734 /* : NativeString */;
long var735 /* : Int */;
val* var736 /* : FlatString */;
val* var737 /* : Array[Object] */;
long var738 /* : Int */;
val* var739 /* : NativeArray[Object] */;
val* var740 /* : String */;
static val* varonce741;
val* var742 /* : String */;
char* var743 /* : NativeString */;
long var744 /* : Int */;
val* var745 /* : FlatString */;
static val* varonce746;
val* var747 /* : String */;
char* var748 /* : NativeString */;
long var749 /* : Int */;
val* var750 /* : FlatString */;
val* var751 /* : Array[Object] */;
long var752 /* : Int */;
val* var753 /* : NativeArray[Object] */;
val* var754 /* : String */;
static val* varonce755;
val* var756 /* : String */;
char* var757 /* : NativeString */;
long var758 /* : Int */;
val* var759 /* : FlatString */;
static val* varonce760;
val* var761 /* : String */;
char* var762 /* : NativeString */;
long var763 /* : Int */;
val* var764 /* : FlatString */;
val* var765 /* : Array[Object] */;
long var766 /* : Int */;
val* var767 /* : NativeArray[Object] */;
val* var768 /* : String */;
static val* varonce769;
val* var770 /* : String */;
char* var771 /* : NativeString */;
long var772 /* : Int */;
val* var773 /* : FlatString */;
static val* varonce774;
val* var775 /* : String */;
char* var776 /* : NativeString */;
long var777 /* : Int */;
val* var778 /* : FlatString */;
val* var779 /* : Array[Object] */;
long var780 /* : Int */;
val* var781 /* : NativeArray[Object] */;
val* var782 /* : String */;
static val* varonce783;
val* var784 /* : String */;
char* var785 /* : NativeString */;
long var786 /* : Int */;
val* var787 /* : FlatString */;
static val* varonce788;
val* var789 /* : String */;
char* var790 /* : NativeString */;
long var791 /* : Int */;
val* var792 /* : FlatString */;
val* var793 /* : Array[Object] */;
long var794 /* : Int */;
val* var795 /* : NativeArray[Object] */;
val* var796 /* : String */;
static val* varonce799;
val* var800 /* : String */;
char* var801 /* : NativeString */;
long var802 /* : Int */;
val* var803 /* : FlatString */;
static val* varonce804;
val* var805 /* : String */;
char* var806 /* : NativeString */;
long var807 /* : Int */;
val* var808 /* : FlatString */;
val* var809 /* : Array[String] */;
val* var811 /* : Array[String] */;
val* var812 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce813;
val* var814 /* : String */;
char* var815 /* : NativeString */;
long var816 /* : Int */;
val* var817 /* : FlatString */;
val* var_818 /* var : Array[String] */;
val* var819 /* : ArrayIterator[nullable Object] */;
val* var_820 /* var : ArrayIterator[String] */;
short int var821 /* : Bool */;
val* var822 /* : nullable Object */;
val* var_tag823 /* var tag: String */;
static val* varonce824;
val* var825 /* : String */;
char* var826 /* : NativeString */;
long var827 /* : Int */;
val* var828 /* : FlatString */;
static val* varonce829;
val* var830 /* : String */;
char* var831 /* : NativeString */;
long var832 /* : Int */;
val* var833 /* : FlatString */;
val* var834 /* : Array[Object] */;
long var835 /* : Int */;
val* var836 /* : NativeArray[Object] */;
val* var837 /* : String */;
static val* varonce838;
val* var839 /* : String */;
char* var840 /* : NativeString */;
long var841 /* : Int */;
val* var842 /* : FlatString */;
static val* varonce843;
val* var844 /* : String */;
char* var845 /* : NativeString */;
long var846 /* : Int */;
val* var847 /* : FlatString */;
static val* varonce848;
val* var849 /* : String */;
char* var850 /* : NativeString */;
long var851 /* : Int */;
val* var852 /* : FlatString */;
val* var853 /* : Array[Object] */;
long var854 /* : Int */;
val* var855 /* : NativeArray[Object] */;
val* var856 /* : String */;
static val* varonce857;
val* var858 /* : String */;
char* var859 /* : NativeString */;
long var860 /* : Int */;
val* var861 /* : FlatString */;
static val* varonce862;
val* var863 /* : String */;
char* var864 /* : NativeString */;
long var865 /* : Int */;
val* var866 /* : FlatString */;
static val* varonce867;
val* var868 /* : String */;
char* var869 /* : NativeString */;
long var870 /* : Int */;
val* var871 /* : FlatString */;
val* var872 /* : Array[Object] */;
long var873 /* : Int */;
val* var874 /* : NativeArray[Object] */;
val* var875 /* : String */;
static val* varonce876;
val* var877 /* : String */;
char* var878 /* : NativeString */;
long var879 /* : Int */;
val* var880 /* : FlatString */;
static val* varonce881;
val* var882 /* : String */;
char* var883 /* : NativeString */;
long var884 /* : Int */;
val* var885 /* : FlatString */;
static val* varonce886;
val* var887 /* : String */;
char* var888 /* : NativeString */;
long var889 /* : Int */;
val* var890 /* : FlatString */;
val* var891 /* : Array[Object] */;
long var892 /* : Int */;
val* var893 /* : NativeArray[Object] */;
val* var894 /* : String */;
static val* varonce895;
val* var896 /* : String */;
char* var897 /* : NativeString */;
long var898 /* : Int */;
val* var899 /* : FlatString */;
static val* varonce900;
val* var901 /* : String */;
char* var902 /* : NativeString */;
long var903 /* : Int */;
val* var904 /* : FlatString */;
static val* varonce905;
val* var906 /* : String */;
char* var907 /* : NativeString */;
long var908 /* : Int */;
val* var909 /* : FlatString */;
val* var910 /* : Array[Object] */;
long var911 /* : Int */;
val* var912 /* : NativeArray[Object] */;
val* var913 /* : String */;
val* var916 /* : ModelBuilder */;
val* var918 /* : ModelBuilder */;
val* var919 /* : ToolContext */;
val* var921 /* : ToolContext */;
val* var922 /* : OptionBool */;
val* var924 /* : OptionBool */;
val* var925 /* : nullable Object */;
val* var927 /* : nullable Object */;
short int var928 /* : Bool */;
static val* varonce929;
val* var930 /* : String */;
char* var931 /* : NativeString */;
long var932 /* : Int */;
val* var933 /* : FlatString */;
static val* varonce934;
val* var935 /* : String */;
char* var936 /* : NativeString */;
long var937 /* : Int */;
val* var938 /* : FlatString */;
static val* varonce939;
val* var940 /* : String */;
char* var941 /* : NativeString */;
long var942 /* : Int */;
val* var943 /* : FlatString */;
static val* varonce944;
val* var945 /* : String */;
char* var946 /* : NativeString */;
long var947 /* : Int */;
val* var948 /* : FlatString */;
static val* varonce949;
val* var950 /* : String */;
char* var951 /* : NativeString */;
long var952 /* : Int */;
val* var953 /* : FlatString */;
static val* varonce954;
val* var955 /* : String */;
char* var956 /* : NativeString */;
long var957 /* : Int */;
val* var958 /* : FlatString */;
val* var959 /* : ModelBuilder */;
val* var961 /* : ModelBuilder */;
val* var962 /* : ToolContext */;
val* var964 /* : ToolContext */;
val* var965 /* : OptionBool */;
val* var967 /* : OptionBool */;
val* var968 /* : nullable Object */;
val* var970 /* : nullable Object */;
short int var971 /* : Bool */;
static val* varonce972;
val* var973 /* : String */;
char* var974 /* : NativeString */;
long var975 /* : Int */;
val* var976 /* : FlatString */;
static val* varonce977;
val* var978 /* : String */;
char* var979 /* : NativeString */;
long var980 /* : Int */;
val* var981 /* : FlatString */;
static val* varonce982;
val* var983 /* : String */;
char* var984 /* : NativeString */;
long var985 /* : Int */;
val* var986 /* : FlatString */;
static val* varonce987;
val* var988 /* : String */;
char* var989 /* : NativeString */;
long var990 /* : Int */;
val* var991 /* : FlatString */;
{
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:AbstractCompiler>*/;
}
var_v = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "#include <signal.h>";
var3 = 19;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var1); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var7 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var5) on <var5:ModelBuilder> */
var10 = var5->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var5:ModelBuilder> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (var8) on <var8:ToolContext> */
var13 = var8->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <var8:ToolContext> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 67);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline opts#Option#value (var11) on <var11:OptionString> */
var16 = var11->attrs[COLOR_opts__Option___value].val; /* _value on <var11:OptionString> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_ost = var14;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var19 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = platform__MModule__target_platform(var17);
}
var_platform = var20;
var22 = NULL;
if (var_platform == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
var24 = ((short int (*)(val*, val*))(var_platform->class->vft[COLOR_kernel__Object___33d_61d]))(var_platform, var22) /* != on <var_platform:nullable Platform>*/;
var23 = var24;
}
var_ = var23;
if (var23){
{
var25 = ((short int (*)(val*))(var_platform->class->vft[COLOR_platform__Platform__supports_libunwind]))(var_platform) /* supports_libunwind on <var_platform:nullable Platform(Platform)>*/;
}
var26 = !var25;
var21 = var26;
} else {
var21 = var_;
}
if (var21){
if (varonce27) {
var28 = varonce27;
} else {
var29 = "none";
var30 = 4;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var_ost = var28;
} else {
}
var34 = NULL;
if (var_platform == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
var36 = ((short int (*)(val*, val*))(var_platform->class->vft[COLOR_kernel__Object___33d_61d]))(var_platform, var34) /* != on <var_platform:nullable Platform>*/;
var35 = var36;
}
var_37 = var35;
if (var35){
{
var38 = ((short int (*)(val*))(var_platform->class->vft[COLOR_platform__Platform__no_main]))(var_platform) /* no_main on <var_platform:nullable Platform(Platform)>*/;
}
var33 = var38;
} else {
var33 = var_37;
}
var_39 = var33;
if (var33){
var32 = var_39;
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var42 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var40) on <var40:ModelBuilder> */
var45 = var40->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var40:ModelBuilder> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (var43) on <var43:ToolContext> */
var48 = var43->attrs[COLOR_abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <var43:ToolContext> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 35);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline opts#Option#value (var46) on <var46:OptionBool> */
var51 = var46->attrs[COLOR_opts__Option___value].val; /* _value on <var46:OptionBool> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var52 = ((struct instance_kernel__Bool*)var49)->value; /* autounbox from nullable Object to Bool */;
var32 = var52;
}
var_no_main = var32;
if (varonce54) {
var55 = varonce54;
} else {
var56 = "nitstack";
var57 = 8;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (var_ost == NULL) {
var59 = 0; /* <var55:String> cannot be null */
} else {
var60 = string__FlatString___61d_61d(var_ost, var55);
var59 = var60;
}
var_61 = var59;
if (var59){
var53 = var_61;
} else {
if (varonce62) {
var63 = varonce62;
} else {
var64 = "libunwind";
var65 = 9;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (var_ost == NULL) {
var67 = 0; /* <var63:String> cannot be null */
} else {
var68 = string__FlatString___61d_61d(var_ost, var63);
var67 = var68;
}
var53 = var67;
}
if (var53){
if (varonce69) {
var70 = varonce69;
} else {
var71 = "#define UNW_LOCAL_ONLY";
var72 = 22;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var70); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "#include <libunwind.h>";
var77 = 22;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "nitstack";
var82 = 8;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
if (var_ost == NULL) {
var84 = 0; /* <var80:String> cannot be null */
} else {
var85 = string__FlatString___61d_61d(var_ost, var80);
var84 = var85;
}
if (var84){
if (varonce86) {
var87 = varonce86;
} else {
var88 = "#include \"c_functions_hash.h\"";
var89 = 29;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var87); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "int glob_argc;";
var94 = 14;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var92); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = "char **glob_argv;";
var99 = 17;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "val *glob_sys;";
var104 = 14;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var108 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var106) on <var106:ModelBuilder> */
var111 = var106->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var106:ModelBuilder> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var109) on <var109:ToolContext> */
var114 = var109->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var109:ToolContext> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 61);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline opts#Option#value (var112) on <var112:OptionBool> */
var117 = var112->attrs[COLOR_opts__Option___value].val; /* _value on <var112:OptionBool> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
var118 = ((struct instance_kernel__Bool*)var115)->value; /* autounbox from nullable Object to Bool */;
if (var118){
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var121 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 944);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
var_122 = var119;
{
var123 = array__AbstractArrayRead__iterator(var_122);
}
var_124 = var123;
for(;;) {
{
var125 = array__ArrayIterator__is_ok(var_124);
}
if (var125){
{
var126 = array__ArrayIterator__item(var_124);
}
var_tag = var126;
if (varonce127) {
var128 = varonce127;
} else {
var129 = "long count_type_test_resolved_";
var130 = 30;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = ";";
var135 = 1;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var137 = array_instance Array[Object] */
var138 = 3;
var139 = NEW_array__NativeArray(var138, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var139)->values[0] = (val*) var128;
((struct instance_array__NativeArray*)var139)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var139)->values[2] = (val*) var133;
{
((void (*)(val*, val*, long))(var137->class->vft[COLOR_array__Array__with_native]))(var137, var139, var138) /* with_native on <var137:Array[Object]>*/;
}
}
{
var140 = ((val* (*)(val*))(var137->class->vft[COLOR_string__Object__to_s]))(var137) /* to_s on <var137:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = "long count_type_test_unresolved_";
var144 = 32;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = ";";
var149 = 1;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
var151 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var151 = array_instance Array[Object] */
var152 = 3;
var153 = NEW_array__NativeArray(var152, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var153)->values[0] = (val*) var142;
((struct instance_array__NativeArray*)var153)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var153)->values[2] = (val*) var147;
{
((void (*)(val*, val*, long))(var151->class->vft[COLOR_array__Array__with_native]))(var151, var153, var152) /* with_native on <var151:Array[Object]>*/;
}
}
{
var154 = ((val* (*)(val*))(var151->class->vft[COLOR_string__Object__to_s]))(var151) /* to_s on <var151:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var154); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = "long count_type_test_skipped_";
var158 = 29;
var159 = string__NativeString__to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
if (varonce160) {
var161 = varonce160;
} else {
var162 = ";";
var163 = 1;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
var165 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var165 = array_instance Array[Object] */
var166 = 3;
var167 = NEW_array__NativeArray(var166, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var167)->values[0] = (val*) var156;
((struct instance_array__NativeArray*)var167)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var167)->values[2] = (val*) var161;
{
((void (*)(val*, val*, long))(var165->class->vft[COLOR_array__Array__with_native]))(var165, var167, var166) /* with_native on <var165:Array[Object]>*/;
}
}
{
var168 = ((val* (*)(val*))(var165->class->vft[COLOR_string__Object__to_s]))(var165) /* to_s on <var165:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var168); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var171 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var169) on <var169:AbstractCompiler> */
var174 = var169->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var169:AbstractCompiler> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = "extern long count_type_test_resolved_";
var178 = 37;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = ";";
var183 = 1;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
var185 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var185 = array_instance Array[Object] */
var186 = 3;
var187 = NEW_array__NativeArray(var186, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var187)->values[0] = (val*) var176;
((struct instance_array__NativeArray*)var187)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var187)->values[2] = (val*) var181;
{
((void (*)(val*, val*, long))(var185->class->vft[COLOR_array__Array__with_native]))(var185, var187, var186) /* with_native on <var185:Array[Object]>*/;
}
}
{
var188 = ((val* (*)(val*))(var185->class->vft[COLOR_string__Object__to_s]))(var185) /* to_s on <var185:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var172, var188); /* Direct call abstract_compiler#CodeWriter#add_decl on <var172:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var191 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var189) on <var189:AbstractCompiler> */
var194 = var189->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var189:AbstractCompiler> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = "extern long count_type_test_unresolved_";
var198 = 39;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = ";";
var203 = 1;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
var205 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var205 = array_instance Array[Object] */
var206 = 3;
var207 = NEW_array__NativeArray(var206, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var207)->values[0] = (val*) var196;
((struct instance_array__NativeArray*)var207)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var207)->values[2] = (val*) var201;
{
((void (*)(val*, val*, long))(var205->class->vft[COLOR_array__Array__with_native]))(var205, var207, var206) /* with_native on <var205:Array[Object]>*/;
}
}
{
var208 = ((val* (*)(val*))(var205->class->vft[COLOR_string__Object__to_s]))(var205) /* to_s on <var205:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var192, var208); /* Direct call abstract_compiler#CodeWriter#add_decl on <var192:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var211 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var209) on <var209:AbstractCompiler> */
var214 = var209->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var209:AbstractCompiler> */
if (unlikely(var214 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var212 = var214;
RET_LABEL213:(void)0;
}
}
if (varonce215) {
var216 = varonce215;
} else {
var217 = "extern long count_type_test_skipped_";
var218 = 36;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
if (varonce220) {
var221 = varonce220;
} else {
var222 = ";";
var223 = 1;
var224 = string__NativeString__to_s_with_length(var222, var223);
var221 = var224;
varonce220 = var221;
}
var225 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var225 = array_instance Array[Object] */
var226 = 3;
var227 = NEW_array__NativeArray(var226, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var227)->values[0] = (val*) var216;
((struct instance_array__NativeArray*)var227)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var227)->values[2] = (val*) var221;
{
((void (*)(val*, val*, long))(var225->class->vft[COLOR_array__Array__with_native]))(var225, var227, var226) /* with_native on <var225:Array[Object]>*/;
}
}
{
var228 = ((val* (*)(val*))(var225->class->vft[COLOR_string__Object__to_s]))(var225) /* to_s on <var225:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var212, var228); /* Direct call abstract_compiler#CodeWriter#add_decl on <var212:CodeWriter>*/
}
{
array__ArrayIterator__next(var_124); /* Direct call array#ArrayIterator#next on <var_124:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_124) on <var_124:ArrayIterator[String]> */
RET_LABEL229:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var232 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var230) on <var230:ModelBuilder> */
var235 = var230->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var230:ModelBuilder> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var233) on <var233:ToolContext> */
var238 = var233->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var233:ToolContext> */
if (unlikely(var238 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 63);
show_backtrace(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
{ /* Inline opts#Option#value (var236) on <var236:OptionBool> */
var241 = var236->attrs[COLOR_opts__Option___value].val; /* _value on <var236:OptionBool> */
var239 = var241;
RET_LABEL240:(void)0;
}
}
var242 = ((struct instance_kernel__Bool*)var239)->value; /* autounbox from nullable Object to Bool */;
if (var242){
if (varonce243) {
var244 = varonce243;
} else {
var245 = "long count_invoke_by_tables;";
var246 = 28;
var247 = string__NativeString__to_s_with_length(var245, var246);
var244 = var247;
varonce243 = var244;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var244); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce248) {
var249 = varonce248;
} else {
var250 = "long count_invoke_by_direct;";
var251 = 28;
var252 = string__NativeString__to_s_with_length(var250, var251);
var249 = var252;
varonce248 = var249;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var249); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce253) {
var254 = varonce253;
} else {
var255 = "long count_invoke_by_inline;";
var256 = 28;
var257 = string__NativeString__to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var254); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var260 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var260 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var258) on <var258:AbstractCompiler> */
var263 = var258->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var258:AbstractCompiler> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
if (varonce264) {
var265 = varonce264;
} else {
var266 = "extern long count_invoke_by_tables;";
var267 = 35;
var268 = string__NativeString__to_s_with_length(var266, var267);
var265 = var268;
varonce264 = var265;
}
{
abstract_compiler__CodeWriter__add_decl(var261, var265); /* Direct call abstract_compiler#CodeWriter#add_decl on <var261:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var271 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var271 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var269) on <var269:AbstractCompiler> */
var274 = var269->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var269:AbstractCompiler> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
if (varonce275) {
var276 = varonce275;
} else {
var277 = "extern long count_invoke_by_direct;";
var278 = 35;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
{
abstract_compiler__CodeWriter__add_decl(var272, var276); /* Direct call abstract_compiler#CodeWriter#add_decl on <var272:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var282 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var280) on <var280:AbstractCompiler> */
var285 = var280->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var280:AbstractCompiler> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
if (varonce286) {
var287 = varonce286;
} else {
var288 = "extern long count_invoke_by_inline;";
var289 = 35;
var290 = string__NativeString__to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
{
abstract_compiler__CodeWriter__add_decl(var283, var287); /* Direct call abstract_compiler#CodeWriter#add_decl on <var283:CodeWriter>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var293 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var293 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var291 = var293;
RET_LABEL292:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var291) on <var291:ModelBuilder> */
var296 = var291->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var291:ModelBuilder> */
if (unlikely(var296 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var294 = var296;
RET_LABEL295:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var294) on <var294:ToolContext> */
var299 = var294->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var294:ToolContext> */
if (unlikely(var299 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 65);
show_backtrace(1);
}
var297 = var299;
RET_LABEL298:(void)0;
}
}
{
{ /* Inline opts#Option#value (var297) on <var297:OptionBool> */
var302 = var297->attrs[COLOR_opts__Option___value].val; /* _value on <var297:OptionBool> */
var300 = var302;
RET_LABEL301:(void)0;
}
}
var303 = ((struct instance_kernel__Bool*)var300)->value; /* autounbox from nullable Object to Bool */;
if (var303){
if (varonce304) {
var305 = varonce304;
} else {
var306 = "long count_attr_reads = 0;";
var307 = 26;
var308 = string__NativeString__to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var305); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce309) {
var310 = varonce309;
} else {
var311 = "long count_isset_checks = 0;";
var312 = 28;
var313 = string__NativeString__to_s_with_length(var311, var312);
var310 = var313;
varonce309 = var310;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var310); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var316 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var316 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var314) on <var314:AbstractCompiler> */
var319 = var314->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var314:AbstractCompiler> */
if (unlikely(var319 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var317 = var319;
RET_LABEL318:(void)0;
}
}
if (varonce320) {
var321 = varonce320;
} else {
var322 = "extern long count_attr_reads;";
var323 = 29;
var324 = string__NativeString__to_s_with_length(var322, var323);
var321 = var324;
varonce320 = var321;
}
{
abstract_compiler__CodeWriter__add_decl(var317, var321); /* Direct call abstract_compiler#CodeWriter#add_decl on <var317:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var327 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var327 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var325 = var327;
RET_LABEL326:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var325) on <var325:AbstractCompiler> */
var330 = var325->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var325:AbstractCompiler> */
if (unlikely(var330 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
if (varonce331) {
var332 = varonce331;
} else {
var333 = "extern long count_isset_checks;";
var334 = 31;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
{
abstract_compiler__CodeWriter__add_decl(var328, var332); /* Direct call abstract_compiler#CodeWriter#add_decl on <var328:CodeWriter>*/
}
} else {
}
if (varonce336) {
var337 = varonce336;
} else {
var338 = "void sig_handler(int signo){";
var339 = 28;
var340 = string__NativeString__to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var337); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce341) {
var342 = varonce341;
} else {
var343 = "PRINT_ERROR(\"Caught signal : %s\\n\", strsignal(signo));";
var344 = 54;
var345 = string__NativeString__to_s_with_length(var343, var344);
var342 = var345;
varonce341 = var342;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var342); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce346) {
var347 = varonce346;
} else {
var348 = "show_backtrace(signo);";
var349 = 22;
var350 = string__NativeString__to_s_with_length(var348, var349);
var347 = var350;
varonce346 = var347;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var347); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce351) {
var352 = varonce351;
} else {
var353 = "}";
var354 = 1;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var352); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce356) {
var357 = varonce356;
} else {
var358 = "void show_backtrace (int signo) {";
var359 = 33;
var360 = string__NativeString__to_s_with_length(var358, var359);
var357 = var360;
varonce356 = var357;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var357); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce362) {
var363 = varonce362;
} else {
var364 = "nitstack";
var365 = 8;
var366 = string__NativeString__to_s_with_length(var364, var365);
var363 = var366;
varonce362 = var363;
}
if (var_ost == NULL) {
var367 = 0; /* <var363:String> cannot be null */
} else {
var368 = string__FlatString___61d_61d(var_ost, var363);
var367 = var368;
}
var_369 = var367;
if (var367){
var361 = var_369;
} else {
if (varonce370) {
var371 = varonce370;
} else {
var372 = "libunwind";
var373 = 9;
var374 = string__NativeString__to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
if (var_ost == NULL) {
var375 = 0; /* <var371:String> cannot be null */
} else {
var376 = string__FlatString___61d_61d(var_ost, var371);
var375 = var376;
}
var361 = var375;
}
if (var361){
if (varonce377) {
var378 = varonce377;
} else {
var379 = "char* opt = getenv(\"NIT_NO_STACK\");";
var380 = 35;
var381 = string__NativeString__to_s_with_length(var379, var380);
var378 = var381;
varonce377 = var378;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var378); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce382) {
var383 = varonce382;
} else {
var384 = "unw_cursor_t cursor;";
var385 = 20;
var386 = string__NativeString__to_s_with_length(var384, var385);
var383 = var386;
varonce382 = var383;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var383); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce387) {
var388 = varonce387;
} else {
var389 = "if(opt==NULL){";
var390 = 14;
var391 = string__NativeString__to_s_with_length(var389, var390);
var388 = var391;
varonce387 = var388;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var388); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce392) {
var393 = varonce392;
} else {
var394 = "unw_context_t uc;";
var395 = 17;
var396 = string__NativeString__to_s_with_length(var394, var395);
var393 = var396;
varonce392 = var393;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var393); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce397) {
var398 = varonce397;
} else {
var399 = "unw_word_t ip;";
var400 = 14;
var401 = string__NativeString__to_s_with_length(var399, var400);
var398 = var401;
varonce397 = var398;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var398); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce402) {
var403 = varonce402;
} else {
var404 = "char* procname = malloc(sizeof(char) * 100);";
var405 = 44;
var406 = string__NativeString__to_s_with_length(var404, var405);
var403 = var406;
varonce402 = var403;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var403); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce407) {
var408 = varonce407;
} else {
var409 = "unw_getcontext(&uc);";
var410 = 20;
var411 = string__NativeString__to_s_with_length(var409, var410);
var408 = var411;
varonce407 = var408;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var408); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce412) {
var413 = varonce412;
} else {
var414 = "unw_init_local(&cursor, &uc);";
var415 = 29;
var416 = string__NativeString__to_s_with_length(var414, var415);
var413 = var416;
varonce412 = var413;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var413); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce417) {
var418 = varonce417;
} else {
var419 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var420 = 67;
var421 = string__NativeString__to_s_with_length(var419, var420);
var418 = var421;
varonce417 = var418;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var418); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce422) {
var423 = varonce422;
} else {
var424 = "PRINT_ERROR(\"--   Stack Trace   ------------------------------\\n\");";
var425 = 67;
var426 = string__NativeString__to_s_with_length(var424, var425);
var423 = var426;
varonce422 = var423;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var423); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce427) {
var428 = varonce427;
} else {
var429 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var430 = 67;
var431 = string__NativeString__to_s_with_length(var429, var430);
var428 = var431;
varonce427 = var428;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var428); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce432) {
var433 = varonce432;
} else {
var434 = "while (unw_step(&cursor) > 0) {";
var435 = 31;
var436 = string__NativeString__to_s_with_length(var434, var435);
var433 = var436;
varonce432 = var433;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var433); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce437) {
var438 = varonce437;
} else {
var439 = "\11unw_get_proc_name(&cursor, procname, 100, &ip);";
var440 = 48;
var441 = string__NativeString__to_s_with_length(var439, var440);
var438 = var441;
varonce437 = var438;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var438); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce442) {
var443 = varonce442;
} else {
var444 = "nitstack";
var445 = 8;
var446 = string__NativeString__to_s_with_length(var444, var445);
var443 = var446;
varonce442 = var443;
}
if (var_ost == NULL) {
var447 = 0; /* <var443:String> cannot be null */
} else {
var448 = string__FlatString___61d_61d(var_ost, var443);
var447 = var448;
}
if (var447){
if (varonce449) {
var450 = varonce449;
} else {
var451 = "\11const char* recv = get_nit_name(procname, strlen(procname));";
var452 = 61;
var453 = string__NativeString__to_s_with_length(var451, var452);
var450 = var453;
varonce449 = var450;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var450); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce454) {
var455 = varonce454;
} else {
var456 = "\11if (recv != NULL){";
var457 = 19;
var458 = string__NativeString__to_s_with_length(var456, var457);
var455 = var458;
varonce454 = var455;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var455); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce459) {
var460 = varonce459;
} else {
var461 = "\11\11PRINT_ERROR(\"` %s\\n\", recv);";
var462 = 30;
var463 = string__NativeString__to_s_with_length(var461, var462);
var460 = var463;
varonce459 = var460;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var460); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce464) {
var465 = varonce464;
} else {
var466 = "\11}else{";
var467 = 7;
var468 = string__NativeString__to_s_with_length(var466, var467);
var465 = var468;
varonce464 = var465;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var465); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce469) {
var470 = varonce469;
} else {
var471 = "\11\11PRINT_ERROR(\"` %s\\n\", procname);";
var472 = 34;
var473 = string__NativeString__to_s_with_length(var471, var472);
var470 = var473;
varonce469 = var470;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var470); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce474) {
var475 = varonce474;
} else {
var476 = "\11}";
var477 = 2;
var478 = string__NativeString__to_s_with_length(var476, var477);
var475 = var478;
varonce474 = var475;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var475); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce479) {
var480 = varonce479;
} else {
var481 = "\11PRINT_ERROR(\"` %s \\n\",procname);";
var482 = 33;
var483 = string__NativeString__to_s_with_length(var481, var482);
var480 = var483;
varonce479 = var480;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var480); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
if (varonce484) {
var485 = varonce484;
} else {
var486 = "}";
var487 = 1;
var488 = string__NativeString__to_s_with_length(var486, var487);
var485 = var488;
varonce484 = var485;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var485); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce489) {
var490 = varonce489;
} else {
var491 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var492 = 67;
var493 = string__NativeString__to_s_with_length(var491, var492);
var490 = var493;
varonce489 = var490;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var490); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce494) {
var495 = varonce494;
} else {
var496 = "free(procname);";
var497 = 15;
var498 = string__NativeString__to_s_with_length(var496, var497);
var495 = var498;
varonce494 = var495;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var495); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce499) {
var500 = varonce499;
} else {
var501 = "}";
var502 = 1;
var503 = string__NativeString__to_s_with_length(var501, var502);
var500 = var503;
varonce499 = var500;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var500); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce504) {
var505 = varonce504;
} else {
var506 = "exit(signo);";
var507 = 12;
var508 = string__NativeString__to_s_with_length(var506, var507);
var505 = var508;
varonce504 = var505;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var505); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce509) {
var510 = varonce509;
} else {
var511 = "}";
var512 = 1;
var513 = string__NativeString__to_s_with_length(var511, var512);
var510 = var513;
varonce509 = var510;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var510); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (var_no_main){
if (varonce514) {
var515 = varonce514;
} else {
var516 = "int nit_main(int argc, char** argv) {";
var517 = 37;
var518 = string__NativeString__to_s_with_length(var516, var517);
var515 = var518;
varonce514 = var515;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var515); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce519) {
var520 = varonce519;
} else {
var521 = "int main(int argc, char** argv) {";
var522 = 33;
var523 = string__NativeString__to_s_with_length(var521, var522);
var520 = var523;
varonce519 = var520;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var520); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
if (varonce524) {
var525 = varonce524;
} else {
var526 = "signal(SIGABRT, sig_handler);";
var527 = 29;
var528 = string__NativeString__to_s_with_length(var526, var527);
var525 = var528;
varonce524 = var525;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var525); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce529) {
var530 = varonce529;
} else {
var531 = "signal(SIGFPE, sig_handler);";
var532 = 28;
var533 = string__NativeString__to_s_with_length(var531, var532);
var530 = var533;
varonce529 = var530;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var530); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce534) {
var535 = varonce534;
} else {
var536 = "signal(SIGILL, sig_handler);";
var537 = 28;
var538 = string__NativeString__to_s_with_length(var536, var537);
var535 = var538;
varonce534 = var535;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var535); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce539) {
var540 = varonce539;
} else {
var541 = "signal(SIGINT, sig_handler);";
var542 = 28;
var543 = string__NativeString__to_s_with_length(var541, var542);
var540 = var543;
varonce539 = var540;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var540); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce544) {
var545 = varonce544;
} else {
var546 = "signal(SIGTERM, sig_handler);";
var547 = 29;
var548 = string__NativeString__to_s_with_length(var546, var547);
var545 = var548;
varonce544 = var545;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var545); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce549) {
var550 = varonce549;
} else {
var551 = "signal(SIGSEGV, sig_handler);";
var552 = 29;
var553 = string__NativeString__to_s_with_length(var551, var552);
var550 = var553;
varonce549 = var550;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var550); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce554) {
var555 = varonce554;
} else {
var556 = "signal(SIGPIPE, sig_handler);";
var557 = 29;
var558 = string__NativeString__to_s_with_length(var556, var557);
var555 = var558;
varonce554 = var555;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var555); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce559) {
var560 = varonce559;
} else {
var561 = "glob_argc = argc; glob_argv = argv;";
var562 = 35;
var563 = string__NativeString__to_s_with_length(var561, var562);
var560 = var563;
varonce559 = var560;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var560); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce564) {
var565 = varonce564;
} else {
var566 = "initialize_gc_option();";
var567 = 23;
var568 = string__NativeString__to_s_with_length(var566, var567);
var565 = var568;
varonce564 = var565;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var565); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce569) {
var570 = varonce569;
} else {
var571 = "initialize_nitni_global_refs();";
var572 = 31;
var573 = string__NativeString__to_s_with_length(var571, var572);
var570 = var573;
varonce569 = var570;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var570); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var576 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var576 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var574 = var576;
RET_LABEL575:(void)0;
}
}
{
var577 = model__MModule__sys_type(var574);
}
var_main_type = var577;
var578 = NULL;
if (var_main_type == NULL) {
var579 = 0; /* is null */
} else {
var579 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_type,var578) on <var_main_type:nullable MClassType> */
var_other = var578;
{
var583 = ((short int (*)(val*, val*))(var_main_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_main_type, var_other) /* == on <var_main_type:nullable MClassType(MClassType)>*/;
var582 = var583;
}
var584 = !var582;
var580 = var584;
goto RET_LABEL581;
RET_LABEL581:(void)0;
}
var579 = var580;
}
if (var579){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var587 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var587 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var585 = var587;
RET_LABEL586:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var585) on <var585:AbstractCompiler> */
var590 = var585->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var585:AbstractCompiler> */
if (unlikely(var590 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var588 = var590;
RET_LABEL589:(void)0;
}
}
var_mainmodule = var588;
{
var591 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_glob_sys = var591;
if (varonce592) {
var593 = varonce592;
} else {
var594 = "glob_sys = ";
var595 = 11;
var596 = string__NativeString__to_s_with_length(var594, var595);
var593 = var596;
varonce592 = var593;
}
if (varonce597) {
var598 = varonce597;
} else {
var599 = ";";
var600 = 1;
var601 = string__NativeString__to_s_with_length(var599, var600);
var598 = var601;
varonce597 = var598;
}
var602 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var602 = array_instance Array[Object] */
var603 = 3;
var604 = NEW_array__NativeArray(var603, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var604)->values[0] = (val*) var593;
((struct instance_array__NativeArray*)var604)->values[1] = (val*) var_glob_sys;
((struct instance_array__NativeArray*)var604)->values[2] = (val*) var598;
{
((void (*)(val*, val*, long))(var602->class->vft[COLOR_array__Array__with_native]))(var602, var604, var603) /* with_native on <var602:Array[Object]>*/;
}
}
{
var605 = ((val* (*)(val*))(var602->class->vft[COLOR_string__Object__to_s]))(var602) /* to_s on <var602:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var605); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce606) {
var607 = varonce606;
} else {
var608 = "init";
var609 = 4;
var610 = string__NativeString__to_s_with_length(var608, var609);
var607 = var610;
varonce606 = var607;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var613 = var_main_type->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var613 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var611 = var613;
RET_LABEL612:(void)0;
}
}
{
var614 = model__MModule__try_get_primitive_method(var_mainmodule, var607, var611);
}
var_main_init = var614;
var615 = NULL;
if (var_main_init == NULL) {
var616 = 0; /* is null */
} else {
var616 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_init,var615) on <var_main_init:nullable MMethod> */
var_other = var615;
{
var620 = ((short int (*)(val*, val*))(var_main_init->class->vft[COLOR_kernel__Object___61d_61d]))(var_main_init, var_other) /* == on <var_main_init:nullable MMethod(MMethod)>*/;
var619 = var620;
}
var621 = !var619;
var617 = var621;
goto RET_LABEL618;
RET_LABEL618:(void)0;
}
var616 = var617;
}
if (var616){
var622 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var623 = 1;
{
array__Array__with_capacity(var622, var623); /* Direct call array#Array#with_capacity on <var622:Array[RuntimeVariable]>*/
}
var_624 = var622;
{
array__AbstractArray__push(var_624, var_glob_sys); /* Direct call array#AbstractArray#push on <var_624:Array[RuntimeVariable]>*/
}
{
var625 = separate_compiler__SeparateCompilerVisitor__send(var_v, var_main_init, var_624);
}
} else {
}
if (varonce627) {
var628 = varonce627;
} else {
var629 = "run";
var630 = 3;
var631 = string__NativeString__to_s_with_length(var629, var630);
var628 = var631;
varonce627 = var628;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var634 = var_main_type->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var634 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var632 = var634;
RET_LABEL633:(void)0;
}
}
{
var635 = model__MModule__try_get_primitive_method(var_mainmodule, var628, var632);
}
if (var635!=NULL) {
var626 = var635;
} else {
if (varonce636) {
var637 = varonce636;
} else {
var638 = "main";
var639 = 4;
var640 = string__NativeString__to_s_with_length(var638, var639);
var637 = var640;
varonce636 = var637;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var643 = var_main_type->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var643 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var641 = var643;
RET_LABEL642:(void)0;
}
}
{
var644 = model__MModule__try_get_primitive_method(var_mainmodule, var637, var641);
}
var626 = var644;
}
var_main_method = var626;
var645 = NULL;
if (var_main_method == NULL) {
var646 = 0; /* is null */
} else {
var646 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_method,var645) on <var_main_method:nullable MMethod> */
var_other = var645;
{
var650 = ((short int (*)(val*, val*))(var_main_method->class->vft[COLOR_kernel__Object___61d_61d]))(var_main_method, var_other) /* == on <var_main_method:nullable MMethod(MMethod)>*/;
var649 = var650;
}
var651 = !var649;
var647 = var651;
goto RET_LABEL648;
RET_LABEL648:(void)0;
}
var646 = var647;
}
if (var646){
var652 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var653 = 1;
{
array__Array__with_capacity(var652, var653); /* Direct call array#Array#with_capacity on <var652:Array[RuntimeVariable]>*/
}
var_654 = var652;
{
array__AbstractArray__push(var_654, var_glob_sys); /* Direct call array#AbstractArray#push on <var_654:Array[RuntimeVariable]>*/
}
{
var655 = separate_compiler__SeparateCompilerVisitor__send(var_v, var_main_method, var_654);
}
} else {
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var658 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var658 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var656 = var658;
RET_LABEL657:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var656) on <var656:ModelBuilder> */
var661 = var656->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var656:ModelBuilder> */
if (unlikely(var661 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var659 = var661;
RET_LABEL660:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var659) on <var659:ToolContext> */
var664 = var659->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var659:ToolContext> */
if (unlikely(var664 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 61);
show_backtrace(1);
}
var662 = var664;
RET_LABEL663:(void)0;
}
}
{
{ /* Inline opts#Option#value (var662) on <var662:OptionBool> */
var667 = var662->attrs[COLOR_opts__Option___value].val; /* _value on <var662:OptionBool> */
var665 = var667;
RET_LABEL666:(void)0;
}
}
var668 = ((struct instance_kernel__Bool*)var665)->value; /* autounbox from nullable Object to Bool */;
if (var668){
if (varonce669) {
var670 = varonce669;
} else {
var671 = "long count_type_test_resolved_total = 0;";
var672 = 40;
var673 = string__NativeString__to_s_with_length(var671, var672);
var670 = var673;
varonce669 = var670;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var670); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce674) {
var675 = varonce674;
} else {
var676 = "long count_type_test_unresolved_total = 0;";
var677 = 42;
var678 = string__NativeString__to_s_with_length(var676, var677);
var675 = var678;
varonce674 = var675;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var675); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce679) {
var680 = varonce679;
} else {
var681 = "long count_type_test_skipped_total = 0;";
var682 = 39;
var683 = string__NativeString__to_s_with_length(var681, var682);
var680 = var683;
varonce679 = var680;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var680); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce684) {
var685 = varonce684;
} else {
var686 = "long count_type_test_total_total = 0;";
var687 = 37;
var688 = string__NativeString__to_s_with_length(var686, var687);
var685 = var688;
varonce684 = var685;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var685); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var691 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var691 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 944);
show_backtrace(1);
}
var689 = var691;
RET_LABEL690:(void)0;
}
}
var_692 = var689;
{
var693 = array__AbstractArrayRead__iterator(var_692);
}
var_694 = var693;
for(;;) {
{
var695 = array__ArrayIterator__is_ok(var_694);
}
if (var695){
{
var696 = array__ArrayIterator__item(var_694);
}
var_tag697 = var696;
if (varonce698) {
var699 = varonce698;
} else {
var700 = "long count_type_test_total_";
var701 = 27;
var702 = string__NativeString__to_s_with_length(var700, var701);
var699 = var702;
varonce698 = var699;
}
if (varonce703) {
var704 = varonce703;
} else {
var705 = ";";
var706 = 1;
var707 = string__NativeString__to_s_with_length(var705, var706);
var704 = var707;
varonce703 = var704;
}
var708 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var708 = array_instance Array[Object] */
var709 = 3;
var710 = NEW_array__NativeArray(var709, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var710)->values[0] = (val*) var699;
((struct instance_array__NativeArray*)var710)->values[1] = (val*) var_tag697;
((struct instance_array__NativeArray*)var710)->values[2] = (val*) var704;
{
((void (*)(val*, val*, long))(var708->class->vft[COLOR_array__Array__with_native]))(var708, var710, var709) /* with_native on <var708:Array[Object]>*/;
}
}
{
var711 = ((val* (*)(val*))(var708->class->vft[COLOR_string__Object__to_s]))(var708) /* to_s on <var708:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var711); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce712) {
var713 = varonce712;
} else {
var714 = "count_type_test_total_";
var715 = 22;
var716 = string__NativeString__to_s_with_length(var714, var715);
var713 = var716;
varonce712 = var713;
}
if (varonce717) {
var718 = varonce717;
} else {
var719 = " = count_type_test_resolved_";
var720 = 28;
var721 = string__NativeString__to_s_with_length(var719, var720);
var718 = var721;
varonce717 = var718;
}
if (varonce722) {
var723 = varonce722;
} else {
var724 = " + count_type_test_unresolved_";
var725 = 30;
var726 = string__NativeString__to_s_with_length(var724, var725);
var723 = var726;
varonce722 = var723;
}
if (varonce727) {
var728 = varonce727;
} else {
var729 = " + count_type_test_skipped_";
var730 = 27;
var731 = string__NativeString__to_s_with_length(var729, var730);
var728 = var731;
varonce727 = var728;
}
if (varonce732) {
var733 = varonce732;
} else {
var734 = ";";
var735 = 1;
var736 = string__NativeString__to_s_with_length(var734, var735);
var733 = var736;
varonce732 = var733;
}
var737 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var737 = array_instance Array[Object] */
var738 = 9;
var739 = NEW_array__NativeArray(var738, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var739)->values[0] = (val*) var713;
((struct instance_array__NativeArray*)var739)->values[1] = (val*) var_tag697;
((struct instance_array__NativeArray*)var739)->values[2] = (val*) var718;
((struct instance_array__NativeArray*)var739)->values[3] = (val*) var_tag697;
((struct instance_array__NativeArray*)var739)->values[4] = (val*) var723;
((struct instance_array__NativeArray*)var739)->values[5] = (val*) var_tag697;
((struct instance_array__NativeArray*)var739)->values[6] = (val*) var728;
((struct instance_array__NativeArray*)var739)->values[7] = (val*) var_tag697;
((struct instance_array__NativeArray*)var739)->values[8] = (val*) var733;
{
((void (*)(val*, val*, long))(var737->class->vft[COLOR_array__Array__with_native]))(var737, var739, var738) /* with_native on <var737:Array[Object]>*/;
}
}
{
var740 = ((val* (*)(val*))(var737->class->vft[COLOR_string__Object__to_s]))(var737) /* to_s on <var737:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var740); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce741) {
var742 = varonce741;
} else {
var743 = "count_type_test_resolved_total += count_type_test_resolved_";
var744 = 59;
var745 = string__NativeString__to_s_with_length(var743, var744);
var742 = var745;
varonce741 = var742;
}
if (varonce746) {
var747 = varonce746;
} else {
var748 = ";";
var749 = 1;
var750 = string__NativeString__to_s_with_length(var748, var749);
var747 = var750;
varonce746 = var747;
}
var751 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var751 = array_instance Array[Object] */
var752 = 3;
var753 = NEW_array__NativeArray(var752, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var753)->values[0] = (val*) var742;
((struct instance_array__NativeArray*)var753)->values[1] = (val*) var_tag697;
((struct instance_array__NativeArray*)var753)->values[2] = (val*) var747;
{
((void (*)(val*, val*, long))(var751->class->vft[COLOR_array__Array__with_native]))(var751, var753, var752) /* with_native on <var751:Array[Object]>*/;
}
}
{
var754 = ((val* (*)(val*))(var751->class->vft[COLOR_string__Object__to_s]))(var751) /* to_s on <var751:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var754); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce755) {
var756 = varonce755;
} else {
var757 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var758 = 63;
var759 = string__NativeString__to_s_with_length(var757, var758);
var756 = var759;
varonce755 = var756;
}
if (varonce760) {
var761 = varonce760;
} else {
var762 = ";";
var763 = 1;
var764 = string__NativeString__to_s_with_length(var762, var763);
var761 = var764;
varonce760 = var761;
}
var765 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var765 = array_instance Array[Object] */
var766 = 3;
var767 = NEW_array__NativeArray(var766, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var767)->values[0] = (val*) var756;
((struct instance_array__NativeArray*)var767)->values[1] = (val*) var_tag697;
((struct instance_array__NativeArray*)var767)->values[2] = (val*) var761;
{
((void (*)(val*, val*, long))(var765->class->vft[COLOR_array__Array__with_native]))(var765, var767, var766) /* with_native on <var765:Array[Object]>*/;
}
}
{
var768 = ((val* (*)(val*))(var765->class->vft[COLOR_string__Object__to_s]))(var765) /* to_s on <var765:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var768); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce769) {
var770 = varonce769;
} else {
var771 = "count_type_test_skipped_total += count_type_test_skipped_";
var772 = 57;
var773 = string__NativeString__to_s_with_length(var771, var772);
var770 = var773;
varonce769 = var770;
}
if (varonce774) {
var775 = varonce774;
} else {
var776 = ";";
var777 = 1;
var778 = string__NativeString__to_s_with_length(var776, var777);
var775 = var778;
varonce774 = var775;
}
var779 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var779 = array_instance Array[Object] */
var780 = 3;
var781 = NEW_array__NativeArray(var780, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var781)->values[0] = (val*) var770;
((struct instance_array__NativeArray*)var781)->values[1] = (val*) var_tag697;
((struct instance_array__NativeArray*)var781)->values[2] = (val*) var775;
{
((void (*)(val*, val*, long))(var779->class->vft[COLOR_array__Array__with_native]))(var779, var781, var780) /* with_native on <var779:Array[Object]>*/;
}
}
{
var782 = ((val* (*)(val*))(var779->class->vft[COLOR_string__Object__to_s]))(var779) /* to_s on <var779:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var782); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce783) {
var784 = varonce783;
} else {
var785 = "count_type_test_total_total += count_type_test_total_";
var786 = 53;
var787 = string__NativeString__to_s_with_length(var785, var786);
var784 = var787;
varonce783 = var784;
}
if (varonce788) {
var789 = varonce788;
} else {
var790 = ";";
var791 = 1;
var792 = string__NativeString__to_s_with_length(var790, var791);
var789 = var792;
varonce788 = var789;
}
var793 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var793 = array_instance Array[Object] */
var794 = 3;
var795 = NEW_array__NativeArray(var794, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var795)->values[0] = (val*) var784;
((struct instance_array__NativeArray*)var795)->values[1] = (val*) var_tag697;
((struct instance_array__NativeArray*)var795)->values[2] = (val*) var789;
{
((void (*)(val*, val*, long))(var793->class->vft[COLOR_array__Array__with_native]))(var793, var795, var794) /* with_native on <var793:Array[Object]>*/;
}
}
{
var796 = ((val* (*)(val*))(var793->class->vft[COLOR_string__Object__to_s]))(var793) /* to_s on <var793:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var796); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
array__ArrayIterator__next(var_694); /* Direct call array#ArrayIterator#next on <var_694:ArrayIterator[String]>*/
}
} else {
goto BREAK_label797;
}
}
BREAK_label797: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_694) on <var_694:ArrayIterator[String]> */
RET_LABEL798:(void)0;
}
}
if (varonce799) {
var800 = varonce799;
} else {
var801 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var802 = 48;
var803 = string__NativeString__to_s_with_length(var801, var802);
var800 = var803;
varonce799 = var800;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var800); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce804) {
var805 = varonce804;
} else {
var806 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var807 = 51;
var808 = string__NativeString__to_s_with_length(var806, var807);
var805 = var808;
varonce804 = var805;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var805); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var811 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var811 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 944);
show_backtrace(1);
}
var809 = var811;
RET_LABEL810:(void)0;
}
}
{
var812 = array__Collection__to_a(var809);
}
var_tags = var812;
if (varonce813) {
var814 = varonce813;
} else {
var815 = "total";
var816 = 5;
var817 = string__NativeString__to_s_with_length(var815, var816);
var814 = var817;
varonce813 = var814;
}
{
array__Array__add(var_tags, var814); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
var_818 = var_tags;
{
var819 = array__AbstractArrayRead__iterator(var_818);
}
var_820 = var819;
for(;;) {
{
var821 = array__ArrayIterator__is_ok(var_820);
}
if (var821){
{
var822 = array__ArrayIterator__item(var_820);
}
var_tag823 = var822;
if (varonce824) {
var825 = varonce824;
} else {
var826 = "printf(\"";
var827 = 8;
var828 = string__NativeString__to_s_with_length(var826, var827);
var825 = var828;
varonce824 = var825;
}
if (varonce829) {
var830 = varonce829;
} else {
var831 = "\");";
var832 = 3;
var833 = string__NativeString__to_s_with_length(var831, var832);
var830 = var833;
varonce829 = var830;
}
var834 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var834 = array_instance Array[Object] */
var835 = 3;
var836 = NEW_array__NativeArray(var835, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var836)->values[0] = (val*) var825;
((struct instance_array__NativeArray*)var836)->values[1] = (val*) var_tag823;
((struct instance_array__NativeArray*)var836)->values[2] = (val*) var830;
{
((void (*)(val*, val*, long))(var834->class->vft[COLOR_array__Array__with_native]))(var834, var836, var835) /* with_native on <var834:Array[Object]>*/;
}
}
{
var837 = ((val* (*)(val*))(var834->class->vft[COLOR_string__Object__to_s]))(var834) /* to_s on <var834:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var837); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce838) {
var839 = varonce838;
} else {
var840 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var841 = 50;
var842 = string__NativeString__to_s_with_length(var840, var841);
var839 = var842;
varonce838 = var839;
}
if (varonce843) {
var844 = varonce843;
} else {
var845 = ", 100.0*count_type_test_resolved_";
var846 = 33;
var847 = string__NativeString__to_s_with_length(var845, var846);
var844 = var847;
varonce843 = var844;
}
if (varonce848) {
var849 = varonce848;
} else {
var850 = "/count_type_test_total_total);";
var851 = 30;
var852 = string__NativeString__to_s_with_length(var850, var851);
var849 = var852;
varonce848 = var849;
}
var853 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var853 = array_instance Array[Object] */
var854 = 5;
var855 = NEW_array__NativeArray(var854, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var855)->values[0] = (val*) var839;
((struct instance_array__NativeArray*)var855)->values[1] = (val*) var_tag823;
((struct instance_array__NativeArray*)var855)->values[2] = (val*) var844;
((struct instance_array__NativeArray*)var855)->values[3] = (val*) var_tag823;
((struct instance_array__NativeArray*)var855)->values[4] = (val*) var849;
{
((void (*)(val*, val*, long))(var853->class->vft[COLOR_array__Array__with_native]))(var853, var855, var854) /* with_native on <var853:Array[Object]>*/;
}
}
{
var856 = ((val* (*)(val*))(var853->class->vft[COLOR_string__Object__to_s]))(var853) /* to_s on <var853:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var856); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce857) {
var858 = varonce857;
} else {
var859 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var860 = 52;
var861 = string__NativeString__to_s_with_length(var859, var860);
var858 = var861;
varonce857 = var858;
}
if (varonce862) {
var863 = varonce862;
} else {
var864 = ", 100.0*count_type_test_unresolved_";
var865 = 35;
var866 = string__NativeString__to_s_with_length(var864, var865);
var863 = var866;
varonce862 = var863;
}
if (varonce867) {
var868 = varonce867;
} else {
var869 = "/count_type_test_total_total);";
var870 = 30;
var871 = string__NativeString__to_s_with_length(var869, var870);
var868 = var871;
varonce867 = var868;
}
var872 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var872 = array_instance Array[Object] */
var873 = 5;
var874 = NEW_array__NativeArray(var873, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var874)->values[0] = (val*) var858;
((struct instance_array__NativeArray*)var874)->values[1] = (val*) var_tag823;
((struct instance_array__NativeArray*)var874)->values[2] = (val*) var863;
((struct instance_array__NativeArray*)var874)->values[3] = (val*) var_tag823;
((struct instance_array__NativeArray*)var874)->values[4] = (val*) var868;
{
((void (*)(val*, val*, long))(var872->class->vft[COLOR_array__Array__with_native]))(var872, var874, var873) /* with_native on <var872:Array[Object]>*/;
}
}
{
var875 = ((val* (*)(val*))(var872->class->vft[COLOR_string__Object__to_s]))(var872) /* to_s on <var872:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var875); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce876) {
var877 = varonce876;
} else {
var878 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var879 = 49;
var880 = string__NativeString__to_s_with_length(var878, var879);
var877 = var880;
varonce876 = var877;
}
if (varonce881) {
var882 = varonce881;
} else {
var883 = ", 100.0*count_type_test_skipped_";
var884 = 32;
var885 = string__NativeString__to_s_with_length(var883, var884);
var882 = var885;
varonce881 = var882;
}
if (varonce886) {
var887 = varonce886;
} else {
var888 = "/count_type_test_total_total);";
var889 = 30;
var890 = string__NativeString__to_s_with_length(var888, var889);
var887 = var890;
varonce886 = var887;
}
var891 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var891 = array_instance Array[Object] */
var892 = 5;
var893 = NEW_array__NativeArray(var892, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var893)->values[0] = (val*) var877;
((struct instance_array__NativeArray*)var893)->values[1] = (val*) var_tag823;
((struct instance_array__NativeArray*)var893)->values[2] = (val*) var882;
((struct instance_array__NativeArray*)var893)->values[3] = (val*) var_tag823;
((struct instance_array__NativeArray*)var893)->values[4] = (val*) var887;
{
((void (*)(val*, val*, long))(var891->class->vft[COLOR_array__Array__with_native]))(var891, var893, var892) /* with_native on <var891:Array[Object]>*/;
}
}
{
var894 = ((val* (*)(val*))(var891->class->vft[COLOR_string__Object__to_s]))(var891) /* to_s on <var891:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var894); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce895) {
var896 = varonce895;
} else {
var897 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var898 = 49;
var899 = string__NativeString__to_s_with_length(var897, var898);
var896 = var899;
varonce895 = var896;
}
if (varonce900) {
var901 = varonce900;
} else {
var902 = ", 100.0*count_type_test_total_";
var903 = 30;
var904 = string__NativeString__to_s_with_length(var902, var903);
var901 = var904;
varonce900 = var901;
}
if (varonce905) {
var906 = varonce905;
} else {
var907 = "/count_type_test_total_total);";
var908 = 30;
var909 = string__NativeString__to_s_with_length(var907, var908);
var906 = var909;
varonce905 = var906;
}
var910 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var910 = array_instance Array[Object] */
var911 = 5;
var912 = NEW_array__NativeArray(var911, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var912)->values[0] = (val*) var896;
((struct instance_array__NativeArray*)var912)->values[1] = (val*) var_tag823;
((struct instance_array__NativeArray*)var912)->values[2] = (val*) var901;
((struct instance_array__NativeArray*)var912)->values[3] = (val*) var_tag823;
((struct instance_array__NativeArray*)var912)->values[4] = (val*) var906;
{
((void (*)(val*, val*, long))(var910->class->vft[COLOR_array__Array__with_native]))(var910, var912, var911) /* with_native on <var910:Array[Object]>*/;
}
}
{
var913 = ((val* (*)(val*))(var910->class->vft[COLOR_string__Object__to_s]))(var910) /* to_s on <var910:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var913); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
array__ArrayIterator__next(var_820); /* Direct call array#ArrayIterator#next on <var_820:ArrayIterator[String]>*/
}
} else {
goto BREAK_label914;
}
}
BREAK_label914: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_820) on <var_820:ArrayIterator[String]> */
RET_LABEL915:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var918 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var918 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var916 = var918;
RET_LABEL917:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var916) on <var916:ModelBuilder> */
var921 = var916->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var916:ModelBuilder> */
if (unlikely(var921 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var919 = var921;
RET_LABEL920:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var919) on <var919:ToolContext> */
var924 = var919->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var919:ToolContext> */
if (unlikely(var924 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 63);
show_backtrace(1);
}
var922 = var924;
RET_LABEL923:(void)0;
}
}
{
{ /* Inline opts#Option#value (var922) on <var922:OptionBool> */
var927 = var922->attrs[COLOR_opts__Option___value].val; /* _value on <var922:OptionBool> */
var925 = var927;
RET_LABEL926:(void)0;
}
}
var928 = ((struct instance_kernel__Bool*)var925)->value; /* autounbox from nullable Object to Bool */;
if (var928){
if (varonce929) {
var930 = varonce929;
} else {
var931 = "long count_invoke_total;";
var932 = 24;
var933 = string__NativeString__to_s_with_length(var931, var932);
var930 = var933;
varonce929 = var930;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var930); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce934) {
var935 = varonce934;
} else {
var936 = "count_invoke_total = count_invoke_by_tables + count_invoke_by_direct + count_invoke_by_inline;";
var937 = 94;
var938 = string__NativeString__to_s_with_length(var936, var937);
var935 = var938;
varonce934 = var935;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var935); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce939) {
var940 = varonce939;
} else {
var941 = "printf(\"# dynamic count_invocation: total %ld\\n\", count_invoke_total);";
var942 = 70;
var943 = string__NativeString__to_s_with_length(var941, var942);
var940 = var943;
varonce939 = var940;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var940); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce944) {
var945 = varonce944;
} else {
var946 = "printf(\"by table: %ld (%.2f%%)\\n\", count_invoke_by_tables, 100.0*count_invoke_by_tables/count_invoke_total);";
var947 = 108;
var948 = string__NativeString__to_s_with_length(var946, var947);
var945 = var948;
varonce944 = var945;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var945); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce949) {
var950 = varonce949;
} else {
var951 = "printf(\"direct:   %ld (%.2f%%)\\n\", count_invoke_by_direct, 100.0*count_invoke_by_direct/count_invoke_total);";
var952 = 108;
var953 = string__NativeString__to_s_with_length(var951, var952);
var950 = var953;
varonce949 = var950;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var950); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce954) {
var955 = varonce954;
} else {
var956 = "printf(\"inlined:  %ld (%.2f%%)\\n\", count_invoke_by_inline, 100.0*count_invoke_by_inline/count_invoke_total);";
var957 = 108;
var958 = string__NativeString__to_s_with_length(var956, var957);
var955 = var958;
varonce954 = var955;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var955); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var961 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var961 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var959 = var961;
RET_LABEL960:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var959) on <var959:ModelBuilder> */
var964 = var959->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var959:ModelBuilder> */
if (unlikely(var964 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var962 = var964;
RET_LABEL963:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var962) on <var962:ToolContext> */
var967 = var962->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var962:ToolContext> */
if (unlikely(var967 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 65);
show_backtrace(1);
}
var965 = var967;
RET_LABEL966:(void)0;
}
}
{
{ /* Inline opts#Option#value (var965) on <var965:OptionBool> */
var970 = var965->attrs[COLOR_opts__Option___value].val; /* _value on <var965:OptionBool> */
var968 = var970;
RET_LABEL969:(void)0;
}
}
var971 = ((struct instance_kernel__Bool*)var968)->value; /* autounbox from nullable Object to Bool */;
if (var971){
if (varonce972) {
var973 = varonce972;
} else {
var974 = "printf(\"# dynamic attribute reads: %ld\\n\", count_attr_reads);";
var975 = 61;
var976 = string__NativeString__to_s_with_length(var974, var975);
var973 = var976;
varonce972 = var973;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var973); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce977) {
var978 = varonce977;
} else {
var979 = "printf(\"# dynamic isset checks: %ld\\n\", count_isset_checks);";
var980 = 60;
var981 = string__NativeString__to_s_with_length(var979, var980);
var978 = var981;
varonce977 = var978;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var978); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce982) {
var983 = varonce982;
} else {
var984 = "return 0;";
var985 = 9;
var986 = string__NativeString__to_s_with_length(var984, var985);
var983 = var986;
varonce982 = var983;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var983); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce987) {
var988 = varonce987;
} else {
var989 = "}";
var990 = 1;
var991 = string__NativeString__to_s_with_length(var989, var990);
var988 = var991;
varonce987 = var988;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var988); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_main_function for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function(val* self) {
abstract_compiler__AbstractCompiler__compile_main_function(self); /* Direct call abstract_compiler#AbstractCompiler#compile_main_function on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
{
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:AbstractCompiler>*/;
}
var_v = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "struct nitni_global_ref_list_t *nitni_global_ref_list;\nvoid initialize_nitni_global_refs() {\n\11nitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));\n\11nitni_global_ref_list->head = NULL;\n\11nitni_global_ref_list->tail = NULL;\n}\n\nvoid nitni_global_ref_add( struct nitni_ref *ref ) {\n\11if ( nitni_global_ref_list->head == NULL ) {\n\11\11nitni_global_ref_list->head = ref;\n\11\11ref->prev = NULL;\n\11} else {\n\11\11nitni_global_ref_list->tail->next = ref;\n\11\11ref->prev = nitni_global_ref_list->tail;\n\11}\n\11nitni_global_ref_list->tail = ref;\n\n\11ref->next = NULL;\n}\n\nvoid nitni_global_ref_remove( struct nitni_ref *ref ) {\n\11if ( ref->prev == NULL ) {\n\11\11nitni_global_ref_list->head = ref->next;\n\11} else {\n\11\11ref->prev->next = ref->next;\n\11}\n\n\11if ( ref->next == NULL ) {\n\11\11nitni_global_ref_list->tail = ref->prev;\n\11} else {\n\11\11ref->next->prev = ref->prev;\n\11}\n}\n\nextern void nitni_global_ref_incr( struct nitni_ref *ref ) {\n\11if ( ref->count == 0 ) /* not registered */\n\11{\n\11\11/* add to list */\n\11\11nitni_global_ref_add( ref );\n\11}\n\n\11ref->count ++;\n}\n\nextern void nitni_global_ref_decr( struct nitni_ref *ref ) {\n\11if ( ref->count == 1 ) /* was last reference */\n\11{\n\11\11/* remove from list */\n\11\11nitni_global_ref_remove( ref );\n\11}\n\n\11ref->count --;\n}\n";
var3 = 1260;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var1); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions(val* self) {
abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions(self); /* Direct call abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies for (self: AbstractCompiler): Array[ExternFile] */
val* abstract_compiler__AbstractCompiler__extern_bodies(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 901);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies for (self: Object): Array[ExternFile] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
val* var3 /* : Array[ExternFile] */;
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 901);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files_to_copy for (self: AbstractCompiler): Array[String] */
val* abstract_compiler__AbstractCompiler__files_to_copy(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 904);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files_to_copy for (self: Object): Array[String] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var3 /* : Array[String] */;
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 904);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#seen_extern for (self: AbstractCompiler): ArraySet[String] */
val* abstract_compiler__AbstractCompiler__seen_extern(val* self) {
val* var /* : ArraySet[String] */;
val* var1 /* : ArraySet[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 907);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#seen_extern for (self: Object): ArraySet[String] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern(val* self) {
val* var /* : ArraySet[String] */;
val* var1 /* : ArraySet[String] */;
val* var3 /* : ArraySet[String] */;
{ /* Inline abstract_compiler#AbstractCompiler#seen_extern (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 907);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#generate_init_attr for (self: AbstractCompiler, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void abstract_compiler__AbstractCompiler__generate_init_attr(val* self, val* p0, val* p1, val* p2) {
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
val* var9 /* : ArrayIterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MClassDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : HashMap[MClassDef, AClassdef] */;
val* var18 /* : HashMap[MClassDef, AClassdef] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : ModelBuilder */;
val* var23 /* : ModelBuilder */;
val* var24 /* : HashMap[MClassDef, AClassdef] */;
val* var26 /* : HashMap[MClassDef, AClassdef] */;
val* var27 /* : nullable Object */;
val* var_n /* var n: AClassdef */;
val* var28 /* : ANodes[APropdef] */;
val* var30 /* : ANodes[APropdef] */;
val* var_31 /* var : ANodes[APropdef] */;
val* var32 /* : Iterator[ANode] */;
val* var_33 /* var : Iterator[APropdef] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 910);
show_backtrace(1);
}
var_v = p0;
var_recv = p1;
var_mtype = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__MClassType__collect_mclassdefs(var_mtype, var1);
}
{
var5 = array__Collection__to_a(var4);
}
var_cds = var5;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var8 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
model__MModule__linearize_mclassdefs(var6, var_cds); /* Direct call model#MModule#linearize_mclassdefs on <var6:MModule>*/
}
var_ = var_cds;
{
var9 = array__AbstractArrayRead__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = array__ArrayIterator__is_ok(var_10);
}
if (var11){
{
var12 = array__ArrayIterator__item(var_10);
}
var_cd = var12;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var15 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var13) on <var13:ModelBuilder> */
var18 = var13->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var13:ModelBuilder> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = abstract_collection__MapRead__has_key(var16, var_cd);
}
var20 = !var19;
if (var20){
goto BREAK_label;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var23 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var21) on <var21:ModelBuilder> */
var26 = var21->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var21:ModelBuilder> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = hash_collection__HashMap___91d_93d(var24, var_cd);
}
var_n = var27;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_n) on <var_n:AClassdef> */
var30 = var_n->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_n:AClassdef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_31 = var28;
{
var32 = parser_nodes__ANodes__iterator(var_31);
}
var_33 = var32;
for(;;) {
{
var34 = ((short int (*)(val*))(var_33->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_33) /* is_ok on <var_33:Iterator[APropdef]>*/;
}
if (var34){
{
var35 = ((val* (*)(val*))(var_33->class->vft[COLOR_abstract_collection__Iterator__item]))(var_33) /* item on <var_33:Iterator[APropdef]>*/;
}
var_npropdef = var35;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype37 = type_parser_nodes__AAttrPropdef.color;
idtype38 = type_parser_nodes__AAttrPropdef.id;
if(cltype37 >= var_npropdef->type->table_size) {
var36 = 0;
} else {
var36 = var_npropdef->type->type_table[cltype37] == idtype38;
}
if (var36){
{
abstract_compiler__AAttrPropdef__init_expr(var_npropdef, var_v, var_recv); /* Direct call abstract_compiler#AAttrPropdef#init_expr on <var_npropdef:APropdef(AAttrPropdef)>*/
}
} else {
}
{
((void (*)(val*))(var_33->class->vft[COLOR_abstract_collection__Iterator__next]))(var_33) /* next on <var_33:Iterator[APropdef]>*/;
}
} else {
goto BREAK_label39;
}
}
BREAK_label39: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_33) on <var_33:Iterator[APropdef]> */
RET_LABEL40:(void)0;
}
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_10); /* Direct call array#ArrayIterator#next on <var_10:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label41;
}
}
BREAK_label41: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_10) on <var_10:ArrayIterator[MClassDef]> */
RET_LABEL42:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#generate_init_attr for (self: Object, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void VIRTUAL_abstract_compiler__AbstractCompiler__generate_init_attr(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompiler__generate_init_attr(self, p0, p1, p2); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_tags for (self: AbstractCompiler): Array[String] */
val* abstract_compiler__AbstractCompiler__count_type_test_tags(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 944);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_tags for (self: Object): Array[String] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var3 /* : Array[String] */;
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 944);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_resolved for (self: AbstractCompiler): HashMap[String, Int] */
val* abstract_compiler__AbstractCompiler__count_type_test_resolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 945);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_resolved for (self: Object): HashMap[String, Int] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
val* var3 /* : HashMap[String, Int] */;
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 945);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_unresolved for (self: AbstractCompiler): HashMap[String, Int] */
val* abstract_compiler__AbstractCompiler__count_type_test_unresolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 946);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_unresolved for (self: Object): HashMap[String, Int] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
val* var3 /* : HashMap[String, Int] */;
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 946);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_skipped for (self: AbstractCompiler): HashMap[String, Int] */
val* abstract_compiler__AbstractCompiler__count_type_test_skipped(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 947);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_skipped for (self: Object): HashMap[String, Int] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
val* var3 /* : HashMap[String, Int] */;
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 947);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#init_count_type_test_tags for (self: AbstractCompiler): HashMap[String, Int] */
val* abstract_compiler__AbstractCompiler__init_count_type_test_tags(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
val* var_res /* var res: HashMap[String, Int] */;
val* var2 /* : Array[String] */;
val* var4 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var5 /* : ArrayIterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[String] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_tag /* var tag: String */;
long var9 /* : Int */;
val* var10 /* : nullable Object */;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringkernel__Int);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashMap[String, Int]>*/;
}
var_res = var1;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var4 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 944);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = array__AbstractArrayRead__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = array__ArrayIterator__is_ok(var_6);
}
if (var7){
{
var8 = array__ArrayIterator__item(var_6);
}
var_tag = var8;
var9 = 0;
{
var10 = BOX_kernel__Int(var9); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_res, var_tag, var10); /* Direct call hash_collection#HashMap#[]= on <var_res:HashMap[String, Int]>*/
}
{
array__ArrayIterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_6) on <var_6:ArrayIterator[String]> */
RET_LABEL11:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#init_count_type_test_tags for (self: Object): HashMap[String, Int] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__init_count_type_test_tags(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = abstract_compiler__AbstractCompiler__init_count_type_test_tags(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#display_stats for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : HashMap[String, Int] */;
val* var_count_type_test_total /* var count_type_test_total: HashMap[String, Int] */;
val* var23 /* : HashMap[String, Int] */;
val* var25 /* : HashMap[String, Int] */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
long var31 /* : Int */;
val* var32 /* : nullable Object */;
val* var33 /* : HashMap[String, Int] */;
val* var35 /* : HashMap[String, Int] */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
long var41 /* : Int */;
val* var42 /* : nullable Object */;
val* var43 /* : HashMap[String, Int] */;
val* var45 /* : HashMap[String, Int] */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
long var51 /* : Int */;
val* var52 /* : nullable Object */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
long var58 /* : Int */;
val* var59 /* : nullable Object */;
val* var60 /* : Array[String] */;
val* var62 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var63 /* : ArrayIterator[nullable Object] */;
val* var_64 /* var : ArrayIterator[String] */;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var67 /* : HashMap[String, Int] */;
val* var69 /* : HashMap[String, Int] */;
val* var70 /* : nullable Object */;
val* var71 /* : HashMap[String, Int] */;
val* var73 /* : HashMap[String, Int] */;
val* var74 /* : nullable Object */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var78 /* : Int */;
long var79 /* : Int */;
long var80 /* : Int */;
val* var81 /* : HashMap[String, Int] */;
val* var83 /* : HashMap[String, Int] */;
val* var84 /* : nullable Object */;
long var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
long var91 /* : Int */;
long var92 /* : Int */;
val* var93 /* : nullable Object */;
val* var94 /* : HashMap[String, Int] */;
val* var96 /* : HashMap[String, Int] */;
val* var_97 /* var : HashMap[String, Int] */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
val* var_103 /* var : String */;
val* var104 /* : nullable Object */;
val* var105 /* : HashMap[String, Int] */;
val* var107 /* : HashMap[String, Int] */;
val* var108 /* : nullable Object */;
long var109 /* : Int */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
const char* var_class_name114;
long var115 /* : Int */;
long var116 /* : Int */;
long var117 /* : Int */;
val* var118 /* : nullable Object */;
val* var119 /* : HashMap[String, Int] */;
val* var121 /* : HashMap[String, Int] */;
val* var_122 /* var : HashMap[String, Int] */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
val* var_128 /* var : String */;
val* var129 /* : nullable Object */;
val* var130 /* : HashMap[String, Int] */;
val* var132 /* : HashMap[String, Int] */;
val* var133 /* : nullable Object */;
long var134 /* : Int */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
long var140 /* : Int */;
long var141 /* : Int */;
long var142 /* : Int */;
val* var143 /* : nullable Object */;
val* var144 /* : HashMap[String, Int] */;
val* var146 /* : HashMap[String, Int] */;
val* var_147 /* var : HashMap[String, Int] */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
val* var_153 /* var : String */;
val* var154 /* : nullable Object */;
val* var155 /* : HashMap[String, Int] */;
val* var157 /* : HashMap[String, Int] */;
val* var158 /* : nullable Object */;
long var159 /* : Int */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
const char* var_class_name164;
long var165 /* : Int */;
long var166 /* : Int */;
long var167 /* : Int */;
val* var168 /* : nullable Object */;
val* var_169 /* var : HashMap[String, Int] */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var_175 /* var : String */;
val* var176 /* : nullable Object */;
val* var177 /* : nullable Object */;
long var178 /* : Int */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
long var184 /* : Int */;
long var185 /* : Int */;
long var186 /* : Int */;
val* var187 /* : nullable Object */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : FlatString */;
val* var194 /* : nullable Object */;
long var195 /* : Int */;
long var_count_type_test /* var count_type_test: Int */;
val* var196 /* : Array[String] */;
val* var198 /* : Array[String] */;
val* var199 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
val* var_205 /* var : Array[String] */;
val* var206 /* : ArrayIterator[nullable Object] */;
val* var_207 /* var : ArrayIterator[String] */;
short int var208 /* : Bool */;
val* var209 /* : nullable Object */;
val* var_tag210 /* var tag: String */;
val* var211 /* : Array[Object] */;
long var212 /* : Int */;
val* var213 /* : NativeArray[Object] */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
long var217 /* : Int */;
val* var218 /* : FlatString */;
val* var219 /* : HashMap[String, Int] */;
val* var221 /* : HashMap[String, Int] */;
val* var222 /* : nullable Object */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : FlatString */;
val* var228 /* : HashMap[String, Int] */;
val* var230 /* : HashMap[String, Int] */;
val* var231 /* : nullable Object */;
val* var232 /* : String */;
long var233 /* : Int */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : FlatString */;
val* var239 /* : Array[Object] */;
long var240 /* : Int */;
val* var241 /* : NativeArray[Object] */;
val* var242 /* : String */;
val* var243 /* : Array[Object] */;
long var244 /* : Int */;
val* var245 /* : NativeArray[Object] */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
long var249 /* : Int */;
val* var250 /* : FlatString */;
val* var251 /* : HashMap[String, Int] */;
val* var253 /* : HashMap[String, Int] */;
val* var254 /* : nullable Object */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
long var258 /* : Int */;
val* var259 /* : FlatString */;
val* var260 /* : HashMap[String, Int] */;
val* var262 /* : HashMap[String, Int] */;
val* var263 /* : nullable Object */;
val* var264 /* : String */;
long var265 /* : Int */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
long var269 /* : Int */;
val* var270 /* : FlatString */;
val* var271 /* : Array[Object] */;
long var272 /* : Int */;
val* var273 /* : NativeArray[Object] */;
val* var274 /* : String */;
val* var275 /* : Array[Object] */;
long var276 /* : Int */;
val* var277 /* : NativeArray[Object] */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
long var281 /* : Int */;
val* var282 /* : FlatString */;
val* var283 /* : HashMap[String, Int] */;
val* var285 /* : HashMap[String, Int] */;
val* var286 /* : nullable Object */;
static val* varonce287;
val* var288 /* : String */;
char* var289 /* : NativeString */;
long var290 /* : Int */;
val* var291 /* : FlatString */;
val* var292 /* : HashMap[String, Int] */;
val* var294 /* : HashMap[String, Int] */;
val* var295 /* : nullable Object */;
val* var296 /* : String */;
long var297 /* : Int */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : FlatString */;
val* var303 /* : Array[Object] */;
long var304 /* : Int */;
val* var305 /* : NativeArray[Object] */;
val* var306 /* : String */;
val* var307 /* : Array[Object] */;
long var308 /* : Int */;
val* var309 /* : NativeArray[Object] */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
long var313 /* : Int */;
val* var314 /* : FlatString */;
val* var315 /* : nullable Object */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
long var319 /* : Int */;
val* var320 /* : FlatString */;
val* var321 /* : nullable Object */;
val* var322 /* : String */;
long var323 /* : Int */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : FlatString */;
val* var329 /* : Array[Object] */;
long var330 /* : Int */;
val* var331 /* : NativeArray[Object] */;
val* var332 /* : String */;
val* var333 /* : Array[Object] */;
long var334 /* : Int */;
val* var335 /* : NativeArray[Object] */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 61);
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
if (varonce) {
var13 = varonce;
} else {
var14 = "# static count_type_test";
var15 = 24;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
{
file__Object__print(self, var13); /* Direct call file#Object#print on <self:AbstractCompiler>*/
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "\11resolved:\11unresolved\11skipped\11total";
var20 = 35;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
file__Object__print(self, var18); /* Direct call file#Object#print on <self:AbstractCompiler>*/
}
{
var22 = abstract_compiler__AbstractCompiler__init_count_type_test_tags(self);
}
var_count_type_test_total = var22;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 945);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "total";
var29 = 5;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = 0;
{
var32 = BOX_kernel__Int(var31); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var23, var27, var32); /* Direct call hash_collection#HashMap#[]= on <var23:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var35 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 946);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "total";
var39 = 5;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = 0;
{
var42 = BOX_kernel__Int(var41); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var33, var37, var42); /* Direct call hash_collection#HashMap#[]= on <var33:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var45 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 947);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "total";
var49 = 5;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = 0;
{
var52 = BOX_kernel__Int(var51); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var43, var47, var52); /* Direct call hash_collection#HashMap#[]= on <var43:HashMap[String, Int]>*/
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "total";
var56 = 5;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = 0;
{
var59 = BOX_kernel__Int(var58); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_count_type_test_total, var54, var59); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var62 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 944);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var_ = var60;
{
var63 = array__AbstractArrayRead__iterator(var_);
}
var_64 = var63;
for(;;) {
{
var65 = array__ArrayIterator__is_ok(var_64);
}
if (var65){
{
var66 = array__ArrayIterator__item(var_64);
}
var_tag = var66;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var69 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 945);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = hash_collection__HashMap___91d_93d(var67, var_tag);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var73 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 946);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = hash_collection__HashMap___91d_93d(var71, var_tag);
}
{
{ /* Inline kernel#Int#+ (var70,var74) on <var70:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var74:nullable Object(Int)> isa OTHER */
/* <var74:nullable Object(Int)> isa OTHER */
var77 = 1; /* easy <var74:nullable Object(Int)> isa OTHER*/
if (unlikely(!var77)) {
var_class_name = var74 == NULL ? "null" : var74->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var78 = ((struct instance_kernel__Int*)var70)->value; /* autounbox from nullable Object to Int */;
var79 = ((struct instance_kernel__Int*)var74)->value; /* autounbox from nullable Object to Int */;
var80 = var78 + var79;
var75 = var80;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var83 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 947);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = hash_collection__HashMap___91d_93d(var81, var_tag);
}
{
{ /* Inline kernel#Int#+ (var75,var84) on <var75:Int> */
/* Covariant cast for argument 0 (i) <var84:nullable Object(Int)> isa OTHER */
/* <var84:nullable Object(Int)> isa OTHER */
var87 = 1; /* easy <var84:nullable Object(Int)> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = var84 == NULL ? "null" : var84->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var91 = ((struct instance_kernel__Int*)var84)->value; /* autounbox from nullable Object to Int */;
var92 = var75 + var91;
var85 = var92;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
{
var93 = BOX_kernel__Int(var85); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_count_type_test_total, var_tag, var93); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var96 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 945);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
var_97 = var94;
if (varonce98) {
var99 = varonce98;
} else {
var100 = "total";
var101 = 5;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
var_103 = var99;
{
var104 = hash_collection__HashMap___91d_93d(var_97, var_103);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var107 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 945);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = hash_collection__HashMap___91d_93d(var105, var_tag);
}
{
{ /* Inline kernel#Int#+ (var104,var108) on <var104:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var108:nullable Object(Int)> isa OTHER */
/* <var108:nullable Object(Int)> isa OTHER */
var111 = 1; /* easy <var108:nullable Object(Int)> isa OTHER*/
if (unlikely(!var111)) {
var_class_name114 = var108 == NULL ? "null" : var108->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name114);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var115 = ((struct instance_kernel__Int*)var104)->value; /* autounbox from nullable Object to Int */;
var116 = ((struct instance_kernel__Int*)var108)->value; /* autounbox from nullable Object to Int */;
var117 = var115 + var116;
var109 = var117;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
{
var118 = BOX_kernel__Int(var109); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_97, var_103, var118); /* Direct call hash_collection#HashMap#[]= on <var_97:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var121 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 946);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
var_122 = var119;
if (varonce123) {
var124 = varonce123;
} else {
var125 = "total";
var126 = 5;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var_128 = var124;
{
var129 = hash_collection__HashMap___91d_93d(var_122, var_128);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var132 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 946);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
var133 = hash_collection__HashMap___91d_93d(var130, var_tag);
}
{
{ /* Inline kernel#Int#+ (var129,var133) on <var129:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var133:nullable Object(Int)> isa OTHER */
/* <var133:nullable Object(Int)> isa OTHER */
var136 = 1; /* easy <var133:nullable Object(Int)> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = var133 == NULL ? "null" : var133->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var140 = ((struct instance_kernel__Int*)var129)->value; /* autounbox from nullable Object to Int */;
var141 = ((struct instance_kernel__Int*)var133)->value; /* autounbox from nullable Object to Int */;
var142 = var140 + var141;
var134 = var142;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
{
var143 = BOX_kernel__Int(var134); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_122, var_128, var143); /* Direct call hash_collection#HashMap#[]= on <var_122:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var146 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 947);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
var_147 = var144;
if (varonce148) {
var149 = varonce148;
} else {
var150 = "total";
var151 = 5;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
var_153 = var149;
{
var154 = hash_collection__HashMap___91d_93d(var_147, var_153);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var157 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 947);
show_backtrace(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
var158 = hash_collection__HashMap___91d_93d(var155, var_tag);
}
{
{ /* Inline kernel#Int#+ (var154,var158) on <var154:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var158:nullable Object(Int)> isa OTHER */
/* <var158:nullable Object(Int)> isa OTHER */
var161 = 1; /* easy <var158:nullable Object(Int)> isa OTHER*/
if (unlikely(!var161)) {
var_class_name164 = var158 == NULL ? "null" : var158->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name164);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var165 = ((struct instance_kernel__Int*)var154)->value; /* autounbox from nullable Object to Int */;
var166 = ((struct instance_kernel__Int*)var158)->value; /* autounbox from nullable Object to Int */;
var167 = var165 + var166;
var159 = var167;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
{
var168 = BOX_kernel__Int(var159); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_147, var_153, var168); /* Direct call hash_collection#HashMap#[]= on <var_147:HashMap[String, Int]>*/
}
var_169 = var_count_type_test_total;
if (varonce170) {
var171 = varonce170;
} else {
var172 = "total";
var173 = 5;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
var_175 = var171;
{
var176 = hash_collection__HashMap___91d_93d(var_169, var_175);
}
{
var177 = hash_collection__HashMap___91d_93d(var_count_type_test_total, var_tag);
}
{
{ /* Inline kernel#Int#+ (var176,var177) on <var176:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var177:nullable Object(Int)> isa OTHER */
/* <var177:nullable Object(Int)> isa OTHER */
var180 = 1; /* easy <var177:nullable Object(Int)> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = var177 == NULL ? "null" : var177->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var184 = ((struct instance_kernel__Int*)var176)->value; /* autounbox from nullable Object to Int */;
var185 = ((struct instance_kernel__Int*)var177)->value; /* autounbox from nullable Object to Int */;
var186 = var184 + var185;
var178 = var186;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
{
var187 = BOX_kernel__Int(var178); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_169, var_175, var187); /* Direct call hash_collection#HashMap#[]= on <var_169:HashMap[String, Int]>*/
}
{
array__ArrayIterator__next(var_64); /* Direct call array#ArrayIterator#next on <var_64:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_64) on <var_64:ArrayIterator[String]> */
RET_LABEL188:(void)0;
}
}
if (varonce189) {
var190 = varonce189;
} else {
var191 = "total";
var192 = 5;
var193 = string__NativeString__to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
{
var194 = hash_collection__HashMap___91d_93d(var_count_type_test_total, var190);
}
var195 = ((struct instance_kernel__Int*)var194)->value; /* autounbox from nullable Object to Int */;
var_count_type_test = var195;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var198 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 944);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
{
var199 = array__Collection__to_a(var196);
}
var_tags = var199;
if (varonce200) {
var201 = varonce200;
} else {
var202 = "total";
var203 = 5;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
{
array__Array__add(var_tags, var201); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
var_205 = var_tags;
{
var206 = array__AbstractArrayRead__iterator(var_205);
}
var_207 = var206;
for(;;) {
{
var208 = array__ArrayIterator__is_ok(var_207);
}
if (var208){
{
var209 = array__ArrayIterator__item(var_207);
}
var_tag210 = var209;
var211 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var211 = array_instance Array[Object] */
var212 = 1;
var213 = NEW_array__NativeArray(var212, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var213)->values[0] = (val*) var_tag210;
{
((void (*)(val*, val*, long))(var211->class->vft[COLOR_array__Array__with_native]))(var211, var213, var212) /* with_native on <var211:Array[Object]>*/;
}
}
{
file__Object__printn(self, var211); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce214) {
var215 = varonce214;
} else {
var216 = "\11";
var217 = 1;
var218 = string__NativeString__to_s_with_length(var216, var217);
var215 = var218;
varonce214 = var215;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var221 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 945);
show_backtrace(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = hash_collection__HashMap___91d_93d(var219, var_tag210);
}
if (varonce223) {
var224 = varonce223;
} else {
var225 = " (";
var226 = 2;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var230 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var230 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 945);
show_backtrace(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
var231 = hash_collection__HashMap___91d_93d(var228, var_tag210);
}
{
var233 = ((struct instance_kernel__Int*)var231)->value; /* autounbox from nullable Object to Int */;
var232 = abstract_compiler__AbstractCompiler__div(self, var233, var_count_type_test);
}
if (varonce234) {
var235 = varonce234;
} else {
var236 = "%)";
var237 = 2;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
var239 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var239 = array_instance Array[Object] */
var240 = 5;
var241 = NEW_array__NativeArray(var240, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var241)->values[0] = (val*) var215;
((struct instance_array__NativeArray*)var241)->values[1] = (val*) var222;
((struct instance_array__NativeArray*)var241)->values[2] = (val*) var224;
((struct instance_array__NativeArray*)var241)->values[3] = (val*) var232;
((struct instance_array__NativeArray*)var241)->values[4] = (val*) var235;
{
((void (*)(val*, val*, long))(var239->class->vft[COLOR_array__Array__with_native]))(var239, var241, var240) /* with_native on <var239:Array[Object]>*/;
}
}
{
var242 = ((val* (*)(val*))(var239->class->vft[COLOR_string__Object__to_s]))(var239) /* to_s on <var239:Array[Object]>*/;
}
var243 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var243 = array_instance Array[Object] */
var244 = 1;
var245 = NEW_array__NativeArray(var244, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var245)->values[0] = (val*) var242;
{
((void (*)(val*, val*, long))(var243->class->vft[COLOR_array__Array__with_native]))(var243, var245, var244) /* with_native on <var243:Array[Object]>*/;
}
}
{
file__Object__printn(self, var243); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce246) {
var247 = varonce246;
} else {
var248 = "\11";
var249 = 1;
var250 = string__NativeString__to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var253 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 946);
show_backtrace(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
var254 = hash_collection__HashMap___91d_93d(var251, var_tag210);
}
if (varonce255) {
var256 = varonce255;
} else {
var257 = " (";
var258 = 2;
var259 = string__NativeString__to_s_with_length(var257, var258);
var256 = var259;
varonce255 = var256;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var262 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 946);
show_backtrace(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
var263 = hash_collection__HashMap___91d_93d(var260, var_tag210);
}
{
var265 = ((struct instance_kernel__Int*)var263)->value; /* autounbox from nullable Object to Int */;
var264 = abstract_compiler__AbstractCompiler__div(self, var265, var_count_type_test);
}
if (varonce266) {
var267 = varonce266;
} else {
var268 = "%)";
var269 = 2;
var270 = string__NativeString__to_s_with_length(var268, var269);
var267 = var270;
varonce266 = var267;
}
var271 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var271 = array_instance Array[Object] */
var272 = 5;
var273 = NEW_array__NativeArray(var272, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var273)->values[0] = (val*) var247;
((struct instance_array__NativeArray*)var273)->values[1] = (val*) var254;
((struct instance_array__NativeArray*)var273)->values[2] = (val*) var256;
((struct instance_array__NativeArray*)var273)->values[3] = (val*) var264;
((struct instance_array__NativeArray*)var273)->values[4] = (val*) var267;
{
((void (*)(val*, val*, long))(var271->class->vft[COLOR_array__Array__with_native]))(var271, var273, var272) /* with_native on <var271:Array[Object]>*/;
}
}
{
var274 = ((val* (*)(val*))(var271->class->vft[COLOR_string__Object__to_s]))(var271) /* to_s on <var271:Array[Object]>*/;
}
var275 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var275 = array_instance Array[Object] */
var276 = 1;
var277 = NEW_array__NativeArray(var276, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var277)->values[0] = (val*) var274;
{
((void (*)(val*, val*, long))(var275->class->vft[COLOR_array__Array__with_native]))(var275, var277, var276) /* with_native on <var275:Array[Object]>*/;
}
}
{
file__Object__printn(self, var275); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce278) {
var279 = varonce278;
} else {
var280 = "\11";
var281 = 1;
var282 = string__NativeString__to_s_with_length(var280, var281);
var279 = var282;
varonce278 = var279;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var285 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 947);
show_backtrace(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
var286 = hash_collection__HashMap___91d_93d(var283, var_tag210);
}
if (varonce287) {
var288 = varonce287;
} else {
var289 = " (";
var290 = 2;
var291 = string__NativeString__to_s_with_length(var289, var290);
var288 = var291;
varonce287 = var288;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var294 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var294 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 947);
show_backtrace(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
{
var295 = hash_collection__HashMap___91d_93d(var292, var_tag210);
}
{
var297 = ((struct instance_kernel__Int*)var295)->value; /* autounbox from nullable Object to Int */;
var296 = abstract_compiler__AbstractCompiler__div(self, var297, var_count_type_test);
}
if (varonce298) {
var299 = varonce298;
} else {
var300 = "%)";
var301 = 2;
var302 = string__NativeString__to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
var303 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var303 = array_instance Array[Object] */
var304 = 5;
var305 = NEW_array__NativeArray(var304, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var305)->values[0] = (val*) var279;
((struct instance_array__NativeArray*)var305)->values[1] = (val*) var286;
((struct instance_array__NativeArray*)var305)->values[2] = (val*) var288;
((struct instance_array__NativeArray*)var305)->values[3] = (val*) var296;
((struct instance_array__NativeArray*)var305)->values[4] = (val*) var299;
{
((void (*)(val*, val*, long))(var303->class->vft[COLOR_array__Array__with_native]))(var303, var305, var304) /* with_native on <var303:Array[Object]>*/;
}
}
{
var306 = ((val* (*)(val*))(var303->class->vft[COLOR_string__Object__to_s]))(var303) /* to_s on <var303:Array[Object]>*/;
}
var307 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var307 = array_instance Array[Object] */
var308 = 1;
var309 = NEW_array__NativeArray(var308, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var309)->values[0] = (val*) var306;
{
((void (*)(val*, val*, long))(var307->class->vft[COLOR_array__Array__with_native]))(var307, var309, var308) /* with_native on <var307:Array[Object]>*/;
}
}
{
file__Object__printn(self, var307); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce310) {
var311 = varonce310;
} else {
var312 = "\11";
var313 = 1;
var314 = string__NativeString__to_s_with_length(var312, var313);
var311 = var314;
varonce310 = var311;
}
{
var315 = hash_collection__HashMap___91d_93d(var_count_type_test_total, var_tag210);
}
if (varonce316) {
var317 = varonce316;
} else {
var318 = " (";
var319 = 2;
var320 = string__NativeString__to_s_with_length(var318, var319);
var317 = var320;
varonce316 = var317;
}
{
var321 = hash_collection__HashMap___91d_93d(var_count_type_test_total, var_tag210);
}
{
var323 = ((struct instance_kernel__Int*)var321)->value; /* autounbox from nullable Object to Int */;
var322 = abstract_compiler__AbstractCompiler__div(self, var323, var_count_type_test);
}
if (varonce324) {
var325 = varonce324;
} else {
var326 = "%)";
var327 = 2;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
var329 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var329 = array_instance Array[Object] */
var330 = 5;
var331 = NEW_array__NativeArray(var330, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var331)->values[0] = (val*) var311;
((struct instance_array__NativeArray*)var331)->values[1] = (val*) var315;
((struct instance_array__NativeArray*)var331)->values[2] = (val*) var317;
((struct instance_array__NativeArray*)var331)->values[3] = (val*) var322;
((struct instance_array__NativeArray*)var331)->values[4] = (val*) var325;
{
((void (*)(val*, val*, long))(var329->class->vft[COLOR_array__Array__with_native]))(var329, var331, var330) /* with_native on <var329:Array[Object]>*/;
}
}
{
var332 = ((val* (*)(val*))(var329->class->vft[COLOR_string__Object__to_s]))(var329) /* to_s on <var329:Array[Object]>*/;
}
var333 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var333 = array_instance Array[Object] */
var334 = 1;
var335 = NEW_array__NativeArray(var334, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var335)->values[0] = (val*) var332;
{
((void (*)(val*, val*, long))(var333->class->vft[COLOR_array__Array__with_native]))(var333, var335, var334) /* with_native on <var333:Array[Object]>*/;
}
}
{
file__Object__printn(self, var333); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce336) {
var337 = varonce336;
} else {
var338 = "";
var339 = 0;
var340 = string__NativeString__to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
{
file__Object__print(self, var337); /* Direct call file#Object#print on <self:AbstractCompiler>*/
}
{
array__ArrayIterator__next(var_207); /* Direct call array#ArrayIterator#next on <var_207:ArrayIterator[String]>*/
}
} else {
goto BREAK_label341;
}
}
BREAK_label341: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_207) on <var_207:ArrayIterator[String]> */
RET_LABEL342:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#display_stats for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__display_stats(val* self) {
abstract_compiler__AbstractCompiler__display_stats(self); /* Direct call abstract_compiler#AbstractCompiler#display_stats on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#finalize_ffi_for_module for (self: AbstractCompiler, MModule) */
void abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var_c /* var c: AbstractCompiler */;
var_mmodule = p0;
{
{ /* Inline abstract_compiler#MModule#finalize_ffi (var_mmodule,self) on <var_mmodule:MModule> */
var_c = self;
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#finalize_ffi_for_module for (self: Object, MModule) */
void VIRTUAL_abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0) {
abstract_compiler__AbstractCompiler__finalize_ffi_for_module(self, p0); /* Direct call abstract_compiler#AbstractCompiler#finalize_ffi_for_module on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#div for (self: AbstractCompiler, Int, Int): String */
val* abstract_compiler__AbstractCompiler__div(val* self, long p0, long p1) {
val* var /* : String */;
long var_a /* var a: Int */;
long var_b /* var b: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
double var22 /* : Float */;
double var24 /* : Float */;
double var25 /* : Float */;
double var26 /* : Float */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
double var32 /* : Float */;
long var33 /* : Int */;
val* var34 /* : String */;
var_a = p0;
var_b = p1;
var1 = 0;
{
{ /* Inline kernel#Int#== (var_b,var1) on <var_b:Int> */
var5 = var_b == var1;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
if (varonce) {
var6 = varonce;
} else {
var7 = "n/a";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var = var6;
goto RET_LABEL;
} else {
}
var10 = 10000;
{
{ /* Inline kernel#Int#* (var_a,var10) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 378);
show_backtrace(1);
}
var14 = var_a * var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var11,var_b) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var_b:Int> isa OTHER */
/* <var_b:Int> isa OTHER */
var17 = 1; /* easy <var_b:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 379);
show_backtrace(1);
}
var21 = var11 / var_b;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#to_f (var15) on <var15:Int> */
var24 = (double)var15;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var25 = 100.0;
{
{ /* Inline kernel#Float#/ (var22,var25) on <var22:Float> */
/* Covariant cast for argument 0 (i) <var25:Float> isa OTHER */
/* <var25:Float> isa OTHER */
var28 = 1; /* easy <var25:Float> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 306);
show_backtrace(1);
}
var32 = var22 / var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var33 = 2;
{
var34 = string__Float__to_precision(var26, var33);
}
var = var34;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#div for (self: Object, Int, Int): String */
val* VIRTUAL_abstract_compiler__AbstractCompiler__div(val* self, long p0, long p1) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractCompiler__div(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#name for (self: CodeFile): String */
val* abstract_compiler__CodeFile__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__CodeFile___name].val; /* _name on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1011);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#name for (self: Object): String */
val* VIRTUAL_abstract_compiler__CodeFile__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline abstract_compiler#CodeFile#name (self) on <self:Object(CodeFile)> */
var3 = self->attrs[COLOR_abstract_compiler__CodeFile___name].val; /* _name on <self:Object(CodeFile)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1011);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#name= for (self: CodeFile, String) */
void abstract_compiler__CodeFile__name_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__CodeFile___name].val = p0; /* _name on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#name= for (self: Object, String) */
void VIRTUAL_abstract_compiler__CodeFile__name_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#CodeFile#name= (self,p0) on <self:Object(CodeFile)> */
self->attrs[COLOR_abstract_compiler__CodeFile___name].val = p0; /* _name on <self:Object(CodeFile)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#writers for (self: CodeFile): Array[CodeWriter] */
val* abstract_compiler__CodeFile__writers(val* self) {
val* var /* : Array[CodeWriter] */;
val* var1 /* : Array[CodeWriter] */;
var1 = self->attrs[COLOR_abstract_compiler__CodeFile___writers].val; /* _writers on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1012);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#writers for (self: Object): Array[CodeWriter] */
val* VIRTUAL_abstract_compiler__CodeFile__writers(val* self) {
val* var /* : Array[CodeWriter] */;
val* var1 /* : Array[CodeWriter] */;
val* var3 /* : Array[CodeWriter] */;
{ /* Inline abstract_compiler#CodeFile#writers (self) on <self:Object(CodeFile)> */
var3 = self->attrs[COLOR_abstract_compiler__CodeFile___writers].val; /* _writers on <self:Object(CodeFile)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1012);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#required_declarations for (self: CodeFile): HashSet[String] */
val* abstract_compiler__CodeFile__required_declarations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1013);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#required_declarations for (self: Object): HashSet[String] */
val* VIRTUAL_abstract_compiler__CodeFile__required_declarations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
val* var3 /* : HashSet[String] */;
{ /* Inline abstract_compiler#CodeFile#required_declarations (self) on <self:Object(CodeFile)> */
var3 = self->attrs[COLOR_abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <self:Object(CodeFile)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1013);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#init for (self: CodeFile) */
void abstract_compiler__CodeFile__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__CodeFile__init]))(self) /* init on <self:CodeFile>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#init for (self: Object) */
void VIRTUAL_abstract_compiler__CodeFile__init(val* self) {
{ /* Inline abstract_compiler#CodeFile#init (self) on <self:Object(CodeFile)> */
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__CodeFile__init]))(self) /* init on <self:Object(CodeFile)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#file for (self: CodeWriter): CodeFile */
val* abstract_compiler__CodeWriter__file(val* self) {
val* var /* : CodeFile */;
val* var1 /* : CodeFile */;
var1 = self->attrs[COLOR_abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1018);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#file for (self: Object): CodeFile */
val* VIRTUAL_abstract_compiler__CodeWriter__file(val* self) {
val* var /* : CodeFile */;
val* var1 /* : CodeFile */;
val* var3 /* : CodeFile */;
{ /* Inline abstract_compiler#CodeWriter#file (self) on <self:Object(CodeWriter)> */
var3 = self->attrs[COLOR_abstract_compiler__CodeWriter___file].val; /* _file on <self:Object(CodeWriter)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1018);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#file= for (self: CodeWriter, CodeFile) */
void abstract_compiler__CodeWriter__file_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__CodeWriter___file].val = p0; /* _file on <self:CodeWriter> */
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#file= for (self: Object, CodeFile) */
void VIRTUAL_abstract_compiler__CodeWriter__file_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#CodeWriter#file= (self,p0) on <self:Object(CodeWriter)> */
self->attrs[COLOR_abstract_compiler__CodeWriter___file].val = p0; /* _file on <self:Object(CodeWriter)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#lines for (self: CodeWriter): List[String] */
val* abstract_compiler__CodeWriter__lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
var1 = self->attrs[COLOR_abstract_compiler__CodeWriter___lines].val; /* _lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1019);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#lines for (self: Object): List[String] */
val* VIRTUAL_abstract_compiler__CodeWriter__lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
val* var3 /* : List[String] */;
{ /* Inline abstract_compiler#CodeWriter#lines (self) on <self:Object(CodeWriter)> */
var3 = self->attrs[COLOR_abstract_compiler__CodeWriter___lines].val; /* _lines on <self:Object(CodeWriter)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1019);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#decl_lines for (self: CodeWriter): List[String] */
val* abstract_compiler__CodeWriter__decl_lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
var1 = self->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1020);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#decl_lines for (self: Object): List[String] */
val* VIRTUAL_abstract_compiler__CodeWriter__decl_lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
val* var3 /* : List[String] */;
{ /* Inline abstract_compiler#CodeWriter#decl_lines (self) on <self:Object(CodeWriter)> */
var3 = self->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:Object(CodeWriter)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1020);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#add_decl for (self: CodeWriter, String) */
void abstract_compiler__CodeWriter__add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : List[String] */;
val* var2 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1020);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
abstract_collection__Sequence__add(var, var_s); /* Direct call abstract_collection#Sequence#add on <var:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#add_decl for (self: Object, String) */
void VIRTUAL_abstract_compiler__CodeWriter__add_decl(val* self, val* p0) {
abstract_compiler__CodeWriter__add_decl(self, p0); /* Direct call abstract_compiler#CodeWriter#add_decl on <self:Object(CodeWriter)>*/
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#init for (self: CodeWriter, CodeFile) */
void abstract_compiler__CodeWriter__init(val* self, val* p0) {
val* var_file /* var file: CodeFile */;
val* var /* : Array[CodeWriter] */;
val* var3 /* : Array[CodeWriter] */;
var_file = p0;
{
{ /* Inline abstract_compiler#CodeWriter#file= (self,var_file) on <self:CodeWriter> */
self->attrs[COLOR_abstract_compiler__CodeWriter___file].val = var_file; /* _file on <self:CodeWriter> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#writers (var_file) on <var_file:CodeFile> */
var3 = var_file->attrs[COLOR_abstract_compiler__CodeFile___writers].val; /* _writers on <var_file:CodeFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1012);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
array__Array__add(var, self); /* Direct call array#Array#add on <var:Array[CodeWriter]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#init for (self: Object, CodeFile) */
void VIRTUAL_abstract_compiler__CodeWriter__init(val* self, val* p0) {
abstract_compiler__CodeWriter__init(self, p0); /* Direct call abstract_compiler#CodeWriter#init on <self:Object(CodeWriter)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler for (self: AbstractCompilerVisitor): AbstractCompiler */
val* abstract_compiler__AbstractCompilerVisitor__compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler for (self: Object): AbstractCompiler */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:Object(AbstractCompilerVisitor)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:Object(AbstractCompilerVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler= for (self: AbstractCompilerVisitor, AbstractCompiler) */
void abstract_compiler__AbstractCompilerVisitor__compiler_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompilerVisitor_VTCOMPILER];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val = p0; /* _compiler on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler= for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler= (self,p0) on <self:Object(AbstractCompilerVisitor)> */
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompilerVisitor_VTCOMPILER];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val = p0; /* _compiler on <self:Object(AbstractCompilerVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node for (self: AbstractCompilerVisitor): nullable ANode */
val* abstract_compiler__AbstractCompilerVisitor__current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node for (self: Object): nullable ANode */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:Object(AbstractCompilerVisitor)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:Object(AbstractCompilerVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node= for (self: AbstractCompilerVisitor, nullable ANode) */
void abstract_compiler__AbstractCompilerVisitor__current_node_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = p0; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node= for (self: Object, nullable ANode) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,p0) on <self:Object(AbstractCompilerVisitor)> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = p0; /* _current_node on <self:Object(AbstractCompilerVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame for (self: AbstractCompilerVisitor): nullable Frame */
val* abstract_compiler__AbstractCompilerVisitor__frame(val* self) {
val* var /* : nullable Frame */;
val* var1 /* : nullable Frame */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame for (self: Object): nullable Frame */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame(val* self) {
val* var /* : nullable Frame */;
val* var1 /* : nullable Frame */;
val* var3 /* : nullable Frame */;
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:Object(AbstractCompilerVisitor)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:Object(AbstractCompilerVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame= for (self: AbstractCompilerVisitor, nullable Frame) */
void abstract_compiler__AbstractCompilerVisitor__frame_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = p0; /* _frame on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame= for (self: Object, nullable Frame) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,p0) on <self:Object(AbstractCompilerVisitor)> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = p0; /* _frame on <self:Object(AbstractCompilerVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#object_type for (self: AbstractCompilerVisitor): MClassType */
val* abstract_compiler__AbstractCompilerVisitor__object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = model__MModule__object_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#object_type for (self: Object): MClassType */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = abstract_compiler__AbstractCompilerVisitor__object_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_type for (self: AbstractCompilerVisitor): MClassType */
val* abstract_compiler__AbstractCompilerVisitor__bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = model__MModule__bool_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_type for (self: Object): MClassType */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer for (self: AbstractCompilerVisitor): CodeWriter */
val* abstract_compiler__AbstractCompilerVisitor__writer(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1056);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer for (self: Object): CodeWriter */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
val* var3 /* : CodeWriter */;
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:Object(AbstractCompilerVisitor)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:Object(AbstractCompilerVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1056);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer= for (self: AbstractCompilerVisitor, CodeWriter) */
void abstract_compiler__AbstractCompilerVisitor__writer_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val = p0; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer= for (self: Object, CodeWriter) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer= (self,p0) on <self:Object(AbstractCompilerVisitor)> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val = p0; /* _writer on <self:Object(AbstractCompilerVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init for (self: AbstractCompilerVisitor, AbstractCompiler) */
void abstract_compiler__AbstractCompilerVisitor__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var7 /* : CodeWriter */;
val* var8 /* : List[CodeFile] */;
val* var10 /* : List[CodeFile] */;
val* var11 /* : nullable Object */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompilerVisitor_VTCOMPILER];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1058);
show_backtrace(1);
}
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler= (self,var_compiler) on <self:AbstractCompilerVisitor> */
/* Covariant cast for argument 0 (compiler) <var_compiler:AbstractCompiler> isa COMPILER */
/* <var_compiler:AbstractCompiler> isa COMPILER */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompilerVisitor_VTCOMPILER];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= var_compiler->type->table_size) {
var2 = 0;
} else {
var2 = var_compiler->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = var_compiler == NULL ? "null" : var_compiler->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val = var_compiler; /* _compiler on <self:AbstractCompilerVisitor> */
RET_LABEL1:(void)0;
}
}
var7 = NEW_abstract_compiler__CodeWriter(&type_abstract_compiler__CodeWriter);
{
{ /* Inline abstract_compiler#AbstractCompiler#files (var_compiler) on <var_compiler:AbstractCompiler> */
var10 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val; /* _files on <var_compiler:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 499);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = list__List__last(var8);
}
{
abstract_compiler__CodeWriter__init(var7, var11); /* Direct call abstract_compiler#CodeWriter#init on <var7:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer= (self,var7) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val = var7; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__init(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__init(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#init on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_class for (self: AbstractCompilerVisitor, String): MClass */
val* abstract_compiler__AbstractCompilerVisitor__get_class(val* self, val* p0) {
val* var /* : MClass */;
val* var_name /* var name: String */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClass */;
var_name = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = model__MModule__get_primitive_class(var4, var_name);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_class for (self: Object, String): MClass */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_class(val* self, val* p0) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = abstract_compiler__AbstractCompilerVisitor__get_class(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_property for (self: AbstractCompilerVisitor, String, MType): MMethod */
val* abstract_compiler__AbstractCompilerVisitor__get_property(val* self, val* p0, val* p1) {
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
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_recv->type->table_size) {
var1 = 0;
} else {
var1 = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1070);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var10 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MType(MClassType)> */
var13 = var_recv->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recv:MType(MClassType)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var16 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var14) on <var14:AbstractCompiler> */
var19 = var14->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var14:AbstractCompiler> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = modelbuilder__ModelBuilder__force_get_primitive_method(var5, var8, var_name, var11, var17);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_property for (self: Object, String, MType): MMethod */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_property(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = abstract_compiler__AbstractCompilerVisitor__get_property(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compile_callsite for (self: AbstractCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : Array[MProperty] */;
val* var6 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var10 /* : Int */;
long var_i /* var i: Int */;
val* var_ /* var : Array[MProperty] */;
val* var11 /* : ArrayIterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[MProperty] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : Array[RuntimeVariable] */;
long var17 /* : Int */;
val* var_18 /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var19 /* : MPropDef */;
val* var21 /* : MPropDef */;
val* var22 /* : nullable MSignature */;
val* var24 /* : nullable MSignature */;
val* var25 /* : Array[MParameter] */;
val* var27 /* : Array[MParameter] */;
val* var_28 /* var : Array[MParameter] */;
val* var29 /* : ArrayIterator[nullable Object] */;
val* var_30 /* var : ArrayIterator[MParameter] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_x /* var x: MParameter */;
val* var33 /* : nullable Object */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name;
long var40 /* : Int */;
val* var42 /* : nullable RuntimeVariable */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var57 /* : Int */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : MMethod */;
val* var66 /* : MMethod */;
val* var67 /* : Array[RuntimeVariable] */;
long var68 /* : Int */;
val* var_69 /* var : Array[RuntimeVariable] */;
val* var70 /* : nullable RuntimeVariable */;
val* var71 /* : MMethod */;
val* var73 /* : MMethod */;
val* var74 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_arguments = p1;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 486);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_initializers = var4;
{
var7 = array__AbstractArrayRead__is_empty(var_initializers);
}
var8 = !var7;
if (var8){
{
var9 = abstract_collection__SequenceRead__first(var_arguments);
}
var_recv = var9;
var10 = 1;
var_i = var10;
var_ = var_initializers;
{
var11 = array__AbstractArrayRead__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = array__ArrayIterator__is_ok(var_12);
}
if (var13){
{
var14 = array__ArrayIterator__item(var_12);
}
var_p = var14;
/* <var_p:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_p->type->table_size) {
var15 = 0;
} else {
var15 = var_p->type->type_table[cltype] == idtype;
}
if (var15){
var16 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var17 = 1;
{
array__Array__with_capacity(var16, var17); /* Direct call array#Array#with_capacity on <var16:Array[RuntimeVariable]>*/
}
var_18 = var16;
{
array__AbstractArray__push(var_18, var_recv); /* Direct call array#AbstractArray#push on <var_18:Array[RuntimeVariable]>*/
}
var_args = var_18;
{
{ /* Inline model#MProperty#intro (var_p) on <var_p:MProperty(MMethod)> */
var21 = var_p->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_p:MProperty(MMethod)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var19) on <var19:MPropDef(MMethodDef)> */
var24 = var19->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var19:MPropDef(MMethodDef)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1084);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var22) on <var22:nullable MSignature> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var27 = var22->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var22:nullable MSignature> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_28 = var25;
{
var29 = array__AbstractArrayRead__iterator(var_28);
}
var_30 = var29;
for(;;) {
{
var31 = array__ArrayIterator__is_ok(var_30);
}
if (var31){
{
var32 = array__ArrayIterator__item(var_30);
}
var_x = var32;
{
var33 = array__Array___91d_93d(var_arguments, var_i);
}
{
array__Array__add(var_args, var33); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
var34 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var34) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var40 = var_i + var34;
var35 = var40;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_i = var35;
{
array__ArrayIterator__next(var_30); /* Direct call array#ArrayIterator#next on <var_30:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_30) on <var_30:ArrayIterator[MParameter]> */
RET_LABEL41:(void)0;
}
}
{
var42 = separate_compiler__SeparateCompilerVisitor__send(self, var_p, var_args);
}
} else {
/* <var_p:MProperty> isa MAttribute */
cltype44 = type_model__MAttribute.color;
idtype45 = type_model__MAttribute.id;
if(cltype44 >= var_p->type->table_size) {
var43 = 0;
} else {
var43 = var_p->type->type_table[cltype44] == idtype45;
}
if (var43){
{
var46 = array__Array___91d_93d(var_arguments, var_i);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(self, var_p, var_recv, var46); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <self:AbstractCompilerVisitor>*/
}
var47 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var54 = var_i + var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_i = var48;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1092);
show_backtrace(1);
}
}
{
array__ArrayIterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label55;
}
}
BREAK_label55: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_12) on <var_12:ArrayIterator[MProperty]> */
RET_LABEL56:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var59 = var_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var57) on <var_i:Int> */
var63 = var_i == var57;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (unlikely(!var60)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1094);
show_backtrace(1);
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var66 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
var67 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var68 = 1;
{
array__Array__with_capacity(var67, var68); /* Direct call array#Array#with_capacity on <var67:Array[RuntimeVariable]>*/
}
var_69 = var67;
{
array__AbstractArray__push(var_69, var_recv); /* Direct call array#AbstractArray#push on <var_69:Array[RuntimeVariable]>*/
}
{
var70 = separate_compiler__SeparateCompilerVisitor__send(self, var64, var_69);
}
var = var70;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var73 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = separate_compiler__SeparateCompilerVisitor__send(self, var71, var_arguments);
}
var = var74;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compile_callsite for (self: Object, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__compile_callsite(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#varargize for (self: AbstractCompilerVisitor, MMethodDef, RuntimeVariable, SequenceRead[AExpr]): Array[RuntimeVariable] */
val* abstract_compiler__AbstractCompilerVisitor__varargize(val* self, val* p0, val* p1, val* p2) {
val* var /* : Array[RuntimeVariable] */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
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
short int var9 /* : Bool */;
long var10 /* : Int */;
long var12 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var13 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var18 /* : Int */;
long var_vararg_len /* var vararg_len: Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
long var_i /* var i: Int */;
long var29 /* : Int */;
long var_ /* var : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : AExpr */;
val* var47 /* : AExpr */;
val* var48 /* : null */;
val* var49 /* : RuntimeVariable */;
val* var_e /* var e: RuntimeVariable */;
val* var50 /* : Array[RuntimeVariable] */;
val* var_vararg /* var vararg: Array[RuntimeVariable] */;
long var_j /* var j: Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
long var_58 /* var : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
val* var67 /* : null */;
val* var68 /* : RuntimeVariable */;
val* var_e69 /* var e: RuntimeVariable */;
long var70 /* : Int */;
long var71 /* : Int */;
val* var73 /* : Array[MParameter] */;
val* var75 /* : Array[MParameter] */;
val* var76 /* : nullable Object */;
val* var77 /* : MType */;
val* var79 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var80 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
long var_j81 /* var j: Int */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
short int var88 /* : Bool */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
val* var96 /* : nullable Object */;
val* var97 /* : null */;
val* var98 /* : RuntimeVariable */;
val* var_e99 /* var e: RuntimeVariable */;
long var100 /* : Int */;
long var101 /* : Int */;
var_mpropdef = p0;
var_recv = p1;
var_args = p2;
{
{ /* Inline model#MMethodDef#new_msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var4 = var_mpropdef->attrs[COLOR_model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2!=NULL) {
var1 = var2;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1113);
show_backtrace(1);
}
var1 = var5;
}
var_msignature = var1;
var8 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
((void (*)(val*))(var8->class->vft[COLOR_kernel__Object__init]))(var8) /* init on <var8:Array[RuntimeVariable]>*/;
}
var_res = var8;
{
array__Array__add(var_res, var_recv); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
{
var9 = ((short int (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_args) /* is_empty on <var_args:SequenceRead[AExpr]>*/;
}
if (var9){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var12 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_vararg_rank = var10;
{
var13 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:SequenceRead[AExpr]>*/;
}
{
var14 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#- (var13,var14) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var18 = var13 - var14;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_vararg_len = var15;
var19 = 0;
{
{ /* Inline kernel#Int#< (var_vararg_len,var19) on <var_vararg_len:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var26 = var_vararg_len < var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var27 = 0;
var_vararg_len = var27;
} else {
}
var28 = 0;
var_i = var28;
{
var29 = model__MSignature__arity(var_msignature);
}
var_ = var29;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var32 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var36 = var_i < var_;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var40 = var_i == var_vararg_rank;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
var41 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var_i) /* [] on <var_args:SequenceRead[AExpr]>*/;
}
var_ne = var41;
/* <var_ne:AExpr> isa AVarargExpr */
cltype43 = type_parser_nodes__AVarargExpr.color;
idtype44 = type_parser_nodes__AVarargExpr.id;
if(cltype43 >= var_ne->type->table_size) {
var42 = 0;
} else {
var42 = var_ne->type->type_table[cltype43] == idtype44;
}
if (var42){
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (var_ne) on <var_ne:AExpr(AVarargExpr)> */
var47 = var_ne->attrs[COLOR_parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_ne:AExpr(AVarargExpr)> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1902);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = NULL;
{
var49 = abstract_compiler__AbstractCompilerVisitor__expr(self, var45, var48);
}
var_e = var49;
{
array__Array__add(var_res, var_e); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label;
} else {
}
var50 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
((void (*)(val*))(var50->class->vft[COLOR_kernel__Object__init]))(var50) /* init on <var50:Array[RuntimeVariable]>*/;
}
var_vararg = var50;
var_j = var_vararg_rank;
{
{ /* Inline kernel#Int#+ (var_vararg_rank,var_vararg_len) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_len:Int> isa OTHER */
/* <var_vararg_len:Int> isa OTHER */
var53 = 1; /* easy <var_vararg_len:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var57 = var_vararg_rank + var_vararg_len;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_58 = var51;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j,var_58) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_58:Int> isa OTHER */
/* <var_58:Int> isa OTHER */
var61 = 1; /* easy <var_58:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var65 = var_j <= var_58;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
{
var66 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var_j) /* [] on <var_args:SequenceRead[AExpr]>*/;
}
var67 = NULL;
{
var68 = abstract_compiler__AbstractCompilerVisitor__expr(self, var66, var67);
}
var_e69 = var68;
{
array__Array__add(var_vararg, var_e69); /* Direct call array#Array#add on <var_vararg:Array[RuntimeVariable]>*/
}
var70 = 1;
{
var71 = kernel__Int__successor(var_j, var70);
}
var_j = var71;
} else {
goto BREAK_label72;
}
}
BREAK_label72: (void)0;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var75 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = array__Array___91d_93d(var73, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var76) on <var76:nullable Object(MParameter)> */
var79 = var76->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var76:nullable Object(MParameter)> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_elttype = var77;
{
var80 = separate_compiler__SeparateCompilerVisitor__vararg_instance(self, var_mpropdef, var_recv, var_vararg, var_elttype);
}
var_arg = var80;
{
array__Array__add(var_res, var_arg); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
} else {
var_j81 = var_i;
{
{ /* Inline kernel#Int#> (var_i,var_vararg_rank) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_rank:Int> isa OTHER */
/* <var_vararg_rank:Int> isa OTHER */
var84 = 1; /* easy <var_vararg_rank:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var88 = var_i > var_vararg_rank;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
if (var82){
{
{ /* Inline kernel#Int#+ (var_j81,var_vararg_len) on <var_j81:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_len:Int> isa OTHER */
/* <var_vararg_len:Int> isa OTHER */
var91 = 1; /* easy <var_vararg_len:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var95 = var_j81 + var_vararg_len;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var_j81 = var89;
} else {
}
{
var96 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var_j81) /* [] on <var_args:SequenceRead[AExpr]>*/;
}
var97 = NULL;
{
var98 = abstract_compiler__AbstractCompilerVisitor__expr(self, var96, var97);
}
var_e99 = var98;
{
array__Array__add(var_res, var_e99); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
}
BREAK_label: (void)0;
var100 = 1;
{
var101 = kernel__Int__successor(var_i, var100);
}
var_i = var101;
} else {
goto BREAK_label102;
}
}
BREAK_label102: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#varargize for (self: Object, MMethodDef, RuntimeVariable, SequenceRead[AExpr]): Array[RuntimeVariable] */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize(val* self, val* p0, val* p1, val* p2) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = abstract_compiler__AbstractCompilerVisitor__varargize(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#anchor for (self: AbstractCompilerVisitor, MType): MType */
val* abstract_compiler__AbstractCompilerVisitor__anchor(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : nullable Frame */;
val* var11 /* : nullable Frame */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MType */;
var_mtype = p0;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1155);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#receiver (var9) on <var9:nullable Frame> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1685);
show_backtrace(1);
}
var14 = var9->attrs[COLOR_abstract_compiler__Frame___receiver].val; /* _receiver on <var9:nullable Frame> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1685);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var6, var12) /* anchor_to on <var_mtype:MType>*/;
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#anchor for (self: Object, MType): MType */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__anchor(val* self, val* p0) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = abstract_compiler__AbstractCompilerVisitor__anchor(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#resolve_for for (self: AbstractCompilerVisitor, MType, RuntimeVariable): MType */
val* abstract_compiler__AbstractCompilerVisitor__resolve_for(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_recv /* var recv: RuntimeVariable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : nullable Frame */;
val* var8 /* : nullable Frame */;
val* var9 /* : MClassType */;
val* var11 /* : MClassType */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
short int var18 /* : Bool */;
val* var19 /* : MType */;
var_mtype = p0;
var_recv = p1;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var5 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1161);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#receiver (var6) on <var6:nullable Frame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1685);
show_backtrace(1);
}
var11 = var6->attrs[COLOR_abstract_compiler__Frame___receiver].val; /* _receiver on <var6:nullable Frame> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1685);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var14 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var18 = 1;
{
var19 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var3, var9, var15, var18) /* resolve_for on <var_mtype:MType>*/;
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#resolve_for for (self: Object, MType, RuntimeVariable): MType */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__resolve_for(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = abstract_compiler__AbstractCompilerVisitor__resolve_for(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#autoadapt for (self: AbstractCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__autoadapt(val* self, val* p0, val* p1) {
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
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var15 /* : MType */;
val* var17 /* : MType */;
val* var18 /* : AbstractCompiler */;
val* var20 /* : AbstractCompiler */;
val* var21 /* : MModule */;
val* var23 /* : MModule */;
val* var24 /* : null */;
short int var25 /* : Bool */;
val* var26 /* : RuntimeVariable */;
val* var27 /* : String */;
val* var29 /* : String */;
val* var30 /* : MType */;
val* var32 /* : MType */;
val* var_res /* var res: RuntimeVariable */;
val* var33 /* : RuntimeVariable */;
val* var34 /* : String */;
val* var36 /* : String */;
val* var_res37 /* var res: RuntimeVariable */;
var_value = p0;
var_mtype = p1;
{
var1 = abstract_compiler__AbstractCompilerVisitor__anchor(self, var_mtype);
}
var_mtype = var1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var4 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_valmtype = var2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = NULL;
{
var12 = model__MType__is_subtype(var_valmtype, var8, var11, var_mtype);
}
if (var12){
var = var_value;
goto RET_LABEL;
} else {
}
/* <var_valmtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_valmtype->type->table_size) {
var14 = 0;
} else {
var14 = var_valmtype->type->type_table[cltype] == idtype;
}
var_ = var14;
if (var14){
{
{ /* Inline model#MNullableType#mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var17 = var_valmtype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var20 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var18) on <var18:AbstractCompiler> */
var23 = var18->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var18:AbstractCompiler> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = NULL;
{
var25 = model__MType__is_subtype(var15, var21, var24, var_mtype);
}
var13 = var25;
} else {
var13 = var_;
}
if (var13){
var26 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_value) on <var_value:RuntimeVariable> */
var29 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1631);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var32 = var_valmtype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
abstract_compiler__RuntimeVariable__init(var26, var27, var_valmtype, var30); /* Direct call abstract_compiler#RuntimeVariable#init on <var26:RuntimeVariable>*/
}
var_res = var26;
var = var_res;
goto RET_LABEL;
} else {
var33 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_value) on <var_value:RuntimeVariable> */
var36 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1631);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
abstract_compiler__RuntimeVariable__init(var33, var34, var_valmtype, var_mtype); /* Direct call abstract_compiler#RuntimeVariable#init on <var33:RuntimeVariable>*/
}
var_res37 = var33;
var = var_res37;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#autoadapt for (self: Object, RuntimeVariable, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autoadapt(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__autoadapt(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_send for (self: AbstractCompilerVisitor, MMethod, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__monomorphic_send(val* self, val* p0, val* p1, val* p2) {
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
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1224);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = model__MProperty__lookup_first_definition(var_m, var5, var_t);
}
var_propdef = var8;
{
var9 = separate_compiler__SeparateCompilerVisitor__call(self, var_propdef, var_t, var_args);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_send for (self: Object, MMethod, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__monomorphic_send(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send for (self: AbstractCompilerVisitor, MMethodDef, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send(val* self, val* p0, val* p1, val* p2) {
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
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1232);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = model__MPropDef__lookup_next_definition(var_m, var5, var_t);
}
var_m = var8;
{
var9 = separate_compiler__SeparateCompilerVisitor__call(self, var_m, var_t, var_args);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send for (self: Object, MMethodDef, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#check_recv_notnull for (self: AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(val* self, val* p0) {
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
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
var_recv = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 57);
show_backtrace(1);
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
var15 = ((struct instance_kernel__Bool*)var12)->value; /* autounbox from nullable Object to Bool */;
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var19 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
/* <var17:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
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
var23 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
/* <var21:MType> isa MNullType */
cltype25 = type_model__MNullType.color;
idtype26 = type_model__MNullType.id;
if(cltype25 >= var21->type->table_size) {
var24 = 0;
} else {
var24 = var21->type->type_table[cltype25] == idtype26;
}
var16 = var24;
}
var_maybenull = var16;
if (var_maybenull){
if (varonce) {
var27 = varonce;
} else {
var28 = "if (unlikely(";
var29 = 13;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = " == NULL)) {";
var34 = 12;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 3;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var32;
{
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
}
{
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Receiver is null";
var43 = 16;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:AbstractCompilerVisitor>*/
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
{
abstract_compiler__AbstractCompilerVisitor__add(self, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#check_recv_notnull for (self: Object, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#names for (self: AbstractCompilerVisitor): HashSet[String] */
val* abstract_compiler__AbstractCompilerVisitor__names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1265);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#names for (self: Object): HashSet[String] */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
val* var3 /* : HashSet[String] */;
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:Object(AbstractCompilerVisitor)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:Object(AbstractCompilerVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1265);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last for (self: AbstractCompilerVisitor): Int */
long abstract_compiler__AbstractCompilerVisitor__last(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last for (self: Object): Int */
long VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last (self) on <self:Object(AbstractCompilerVisitor)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:Object(AbstractCompilerVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last= for (self: AbstractCompilerVisitor, Int) */
void abstract_compiler__AbstractCompilerVisitor__last_61d(val* self, long p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___last].l = p0; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#last= for (self: Object, Int) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d(val* self, long p0) {
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last= (self,p0) on <self:Object(AbstractCompilerVisitor)> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___last].l = p0; /* _last on <self:Object(AbstractCompilerVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_name for (self: AbstractCompilerVisitor, String): String */
val* abstract_compiler__AbstractCompilerVisitor__get_name(val* self, val* p0) {
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
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var16 /* : Int */;
long var_i /* var i: Int */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_s2 /* var s2: String */;
val* var19 /* : HashSet[String] */;
val* var21 /* : HashSet[String] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : HashSet[String] */;
val* var27 /* : HashSet[String] */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1265);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = hash_collection__HashSet__has(var1, var_s);
}
var5 = !var4;
if (var5){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1265);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
hash_collection__HashSet__add(var6, var_s); /* Direct call hash_collection#HashSet#add on <var6:HashSet[String]>*/
}
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = 1;
{
{ /* Inline kernel#Int#+ (var9,var12) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var16 = var9 + var12;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_i = var13;
for(;;) {
{
var17 = string__Int__to_s(var_i);
}
{
var18 = string__FlatString___43d(var_s, var17);
}
var_s2 = var18;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var21 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1265);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = hash_collection__HashSet__has(var19, var_s2);
}
var23 = !var22;
if (var23){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last= (self,var_i) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___last].l = var_i; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var27 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1265);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
hash_collection__HashSet__add(var25, var_s2); /* Direct call hash_collection#HashSet#add on <var25:HashSet[String]>*/
}
var = var_s2;
goto RET_LABEL;
} else {
}
var28 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var28) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var35 = var_i + var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_i = var29;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_name for (self: Object, String): String */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractCompilerVisitor__get_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_name for (self: AbstractCompilerVisitor, nullable EscapeMark): String */
val* abstract_compiler__AbstractCompilerVisitor__escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var_e /* var e: nullable EscapeMark */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : HashMap[EscapeMark, String] */;
val* var10 /* : HashMap[EscapeMark, String] */;
short int var11 /* : Bool */;
val* var12 /* : HashMap[EscapeMark, String] */;
val* var14 /* : HashMap[EscapeMark, String] */;
val* var15 /* : nullable Object */;
val* var16 /* : nullable String */;
val* var18 /* : nullable String */;
val* var_name /* var name: nullable String */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var27 /* : HashMap[EscapeMark, String] */;
val* var29 /* : HashMap[EscapeMark, String] */;
var_e = p0;
var1 = NULL;
if (var_e == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_e,var1) on <var_e:nullable EscapeMark> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___61d_61d]))(var_e, var_other) /* == on <var_e:nullable EscapeMark(EscapeMark)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1290);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#escapemark_names (self) on <self:AbstractCompilerVisitor> */
var10 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___escapemark_names].val; /* _escapemark_names on <self:AbstractCompilerVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1307);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = abstract_collection__MapRead__has_key(var8, var_e);
}
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#escapemark_names (self) on <self:AbstractCompilerVisitor> */
var14 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___escapemark_names].val; /* _escapemark_names on <self:AbstractCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1307);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = hash_collection__HashMap___91d_93d(var12, var_e);
}
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#name (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var18 = var_e->attrs[COLOR_scope__EscapeMark___name].val; /* _name on <var_e:nullable EscapeMark(EscapeMark)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_name = var16;
var19 = NULL;
if (var_name == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
var21 = string__FlatString___61d_61d(var_name, var19);
var20 = var21;
}
if (var20){
if (varonce) {
var22 = varonce;
} else {
var23 = "label";
var24 = 5;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
var_name = var22;
} else {
}
{
var26 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var_name);
}
var_name = var26;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#escapemark_names (self) on <self:AbstractCompilerVisitor> */
var29 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___escapemark_names].val; /* _escapemark_names on <self:AbstractCompilerVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1307);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var27, var_e, var_name); /* Direct call hash_collection#HashMap#[]= on <var27:HashMap[EscapeMark, String]>*/
}
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_name for (self: Object, nullable EscapeMark): String */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_escape_label for (self: AbstractCompilerVisitor, nullable EscapeMark) */
void abstract_compiler__AbstractCompilerVisitor__add_escape_label(val* self, val* p0) {
val* var_e /* var e: nullable EscapeMark */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[AEscapeExpr] */;
val* var9 /* : Array[AEscapeExpr] */;
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
var_e = p0;
var = NULL;
if (var_e == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,var) on <var_e:nullable EscapeMark> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable EscapeMark(EscapeMark)> */
var6 = var_e == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#escapes (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var9 = var_e->attrs[COLOR_scope__EscapeMark___escapes].val; /* _escapes on <var_e:nullable EscapeMark(EscapeMark)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 57);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = array__AbstractArrayRead__is_empty(var7);
}
if (var10){
goto RET_LABEL;
} else {
}
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
var15 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(self, var_e);
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
abstract_compiler__AbstractCompilerVisitor__add(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_escape_label for (self: Object, nullable EscapeMark) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_escape_label(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_escape_label(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names for (self: AbstractCompilerVisitor): HashMap[EscapeMark, String] */
val* abstract_compiler__AbstractCompilerVisitor__escapemark_names(val* self) {
val* var /* : HashMap[EscapeMark, String] */;
val* var1 /* : HashMap[EscapeMark, String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___escapemark_names].val; /* _escapemark_names on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1307);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names for (self: Object): HashMap[EscapeMark, String] */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names(val* self) {
val* var /* : HashMap[EscapeMark, String] */;
val* var1 /* : HashMap[EscapeMark, String] */;
val* var3 /* : HashMap[EscapeMark, String] */;
{ /* Inline abstract_compiler#AbstractCompilerVisitor#escapemark_names (self) on <self:Object(AbstractCompilerVisitor)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___escapemark_names].val; /* _escapemark_names on <self:Object(AbstractCompilerVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1307);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables for (self: AbstractCompilerVisitor): HashMap[Variable, RuntimeVariable] */
val* abstract_compiler__AbstractCompilerVisitor__variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1315);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables for (self: Object): HashMap[Variable, RuntimeVariable] */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
val* var3 /* : HashMap[Variable, RuntimeVariable] */;
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:Object(AbstractCompilerVisitor)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:Object(AbstractCompilerVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1315);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variable for (self: AbstractCompilerVisitor, Variable): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__variable(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
val* var3 /* : HashMap[Variable, RuntimeVariable] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[Variable, RuntimeVariable] */;
val* var7 /* : HashMap[Variable, RuntimeVariable] */;
val* var8 /* : nullable Object */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var_name /* var name: String */;
val* var21 /* : nullable MType */;
val* var23 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var24 /* : MType */;
val* var25 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
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
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
val* var51 /* : HashMap[Variable, RuntimeVariable] */;
val* var53 /* : HashMap[Variable, RuntimeVariable] */;
var_variable = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1315);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_collection__MapRead__has_key(var1, var_variable);
}
if (var4){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1315);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = hash_collection__HashMap___91d_93d(var5, var_variable);
}
var = var8;
goto RET_LABEL;
} else {
if (varonce) {
var9 = varonce;
} else {
var10 = "var_";
var11 = 4;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:Variable> */
var15 = var_variable->attrs[COLOR_scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 34);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 2;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var13;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
var20 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var19);
}
var_name = var20;
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var23 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1324);
show_backtrace(1);
}
var_mtype = var21;
{
var24 = abstract_compiler__AbstractCompilerVisitor__anchor(self, var_mtype);
}
var_mtype = var24;
var25 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
{
abstract_compiler__RuntimeVariable__init(var25, var_name, var_mtype, var_mtype); /* Direct call abstract_compiler#RuntimeVariable#init on <var25:RuntimeVariable>*/
}
var_res = var25;
{
var26 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " ";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = " /* var ";
var35 = 8;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ": ";
var40 = 2;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " */;";
var45 = 4;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 8;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var28;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var49)->values[3] = (val*) var33;
((struct instance_array__NativeArray*)var49)->values[4] = (val*) var_variable;
((struct instance_array__NativeArray*)var49)->values[5] = (val*) var38;
((struct instance_array__NativeArray*)var49)->values[6] = (val*) var_mtype;
((struct instance_array__NativeArray*)var49)->values[7] = (val*) var43;
{
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var53 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1315);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var51, var_variable, var_res); /* Direct call hash_collection#HashMap#[]= on <var51:HashMap[Variable, RuntimeVariable]>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variable for (self: Object, Variable): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__variable(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_var(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var_name /* var name: String */;
val* var7 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
var_mtype = p0;
{
var1 = abstract_compiler__AbstractCompilerVisitor__anchor(self, var_mtype);
}
var_mtype = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "var";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
var6 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var2);
}
var_name = var6;
var7 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
{
abstract_compiler__RuntimeVariable__init(var7, var_name, var_mtype, var_mtype); /* Direct call abstract_compiler#RuntimeVariable#init on <var7:RuntimeVariable>*/
}
var_res = var7;
{
var8 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = " ";
var12 = 1;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = " /* : ";
var17 = 6;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = " */;";
var22 = 4;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 6;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var10;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var26)->values[3] = (val*) var15;
((struct instance_array__NativeArray*)var26)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var26)->values[5] = (val*) var20;
{
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var for (self: Object, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_var(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var_extern for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_var_extern(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var_name /* var name: String */;
val* var7 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
var_mtype = p0;
{
var1 = abstract_compiler__AbstractCompilerVisitor__anchor(self, var_mtype);
}
var_mtype = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "var";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
var6 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var2);
}
var_name = var6;
var7 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
{
abstract_compiler__RuntimeVariable__init(var7, var_name, var_mtype, var_mtype); /* Direct call abstract_compiler#RuntimeVariable#init on <var7:RuntimeVariable>*/
}
var_res = var7;
{
var8 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype_extern]))(var_mtype) /* ctype_extern on <var_mtype:MType>*/;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = " ";
var12 = 1;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = " /* : ";
var17 = 6;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = " for extern */;";
var22 = 15;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 6;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var10;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var26)->values[3] = (val*) var15;
((struct instance_array__NativeArray*)var26)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var26)->values[5] = (val*) var20;
{
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var_extern for (self: Object, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var_extern(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_var_extern(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_named_var for (self: AbstractCompilerVisitor, MType, String): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_named_var(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : String */;
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
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
var_mtype = p0;
var_name = p1;
{
var1 = abstract_compiler__AbstractCompilerVisitor__anchor(self, var_mtype);
}
var_mtype = var1;
var2 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
{
abstract_compiler__RuntimeVariable__init(var2, var_name, var_mtype, var_mtype); /* Direct call abstract_compiler#RuntimeVariable#init on <var2:RuntimeVariable>*/
}
var_res = var2;
{
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce) {
var4 = varonce;
} else {
var5 = " ";
var6 = 1;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = " /* : ";
var11 = 6;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = " */;";
var16 = 4;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 6;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var20)->values[3] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var20)->values[5] = (val*) var14;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_named_var for (self: Object, MType, String): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_named_var(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#assign for (self: AbstractCompilerVisitor, RuntimeVariable, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__assign(val* self, val* p0, val* p1) {
val* var_left /* var left: RuntimeVariable */;
val* var_right /* var right: RuntimeVariable */;
val* var /* : MType */;
val* var2 /* : MType */;
val* var3 /* : RuntimeVariable */;
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
var_left = p0;
var_right = p1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_left) on <var_left:RuntimeVariable> */
var2 = var_left->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_left:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_right, var);
}
var_right = var3;
if (varonce) {
var4 = varonce;
} else {
var5 = " = ";
var6 = 3;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
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
var14 = 4;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var_left;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var_right;
((struct instance_array__NativeArray*)var15)->values[3] = (val*) var9;
{
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var16); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#assign for (self: Object, RuntimeVariable, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign(val* self, val* p0, val* p1) {
abstract_compiler__AbstractCompilerVisitor__assign(self, p0, p1); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#set_finalizer for (self: AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__set_finalizer(val* self, val* p0) {
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
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_21 /* var : Bool */;
val* var22 /* : AbstractCompiler */;
val* var24 /* : AbstractCompiler */;
val* var25 /* : MModule */;
val* var27 /* : MModule */;
val* var28 /* : null */;
short int var29 /* : Bool */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
var_recv = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var2 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = model__MModule__finalizable_type(var6);
}
var_finalizable_type = var9;
var12 = NULL;
if (var_finalizable_type == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalizable_type,var12) on <var_finalizable_type:nullable MClassType> */
var_other = var12;
{
var17 = ((short int (*)(val*, val*))(var_finalizable_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_finalizable_type, var_other) /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/;
var16 = var17;
}
var18 = !var16;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var_ = var13;
if (var13){
{
var19 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var20 = !var19;
var11 = var20;
} else {
var11 = var_;
}
var_21 = var11;
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var24 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var22) on <var22:AbstractCompiler> */
var27 = var22->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var22:AbstractCompiler> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = NULL;
{
var29 = model__MType__is_subtype(var_mtype, var25, var28, var_finalizable_type);
}
var10 = var29;
} else {
var10 = var_21;
}
if (var10){
if (varonce) {
var30 = varonce;
} else {
var31 = "gc_register_finalizer(";
var32 = 22;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = ");";
var37 = 2;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 3;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var30;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var41)->values[2] = (val*) var35;
{
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
}
{
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var42); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#set_finalizer for (self: Object, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__set_finalizer(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__set_finalizer(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#set_finalizer on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#int_instance for (self: AbstractCompilerVisitor, Int): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__int_instance(val* self, long p0) {
val* var /* : RuntimeVariable */;
long var_value /* var value: Int */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : Object */;
val* var24 /* : String */;
var_value = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "Int";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var1);
}
{
{ /* Inline model#MClass#mclass_type (var5) on <var5:MClass> */
var8 = var5->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var5:MClass> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var6);
}
var_res = var9;
if (varonce10) {
var11 = varonce10;
} else {
var12 = " = ";
var13 = 3;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = ";";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 4;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var11;
var23 = BOX_kernel__Int(var_value); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var22)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var22)->values[3] = (val*) var16;
{
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var24 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int_instance for (self: Object, Int): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance(val* self, long p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__int_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_instance for (self: AbstractCompilerVisitor, Bool): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__bool_instance(val* self, short int p0) {
val* var /* : RuntimeVariable */;
short int var_value /* var value: Bool */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
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
var_value = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "Bool";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var1);
}
{
{ /* Inline model#MClass#mclass_type (var5) on <var5:MClass> */
var8 = var5->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var5:MClass> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var6);
}
var_res = var9;
if (var_value){
if (varonce10) {
var11 = varonce10;
} else {
var12 = " = 1;";
var13 = 5;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 2;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var11;
{
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
}
{
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var18); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
if (varonce19) {
var20 = varonce19;
} else {
var21 = " = 0;";
var22 = 5;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 2;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var20;
{
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_instance for (self: Object, Bool): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_instance(val* self, short int p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__bool_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
