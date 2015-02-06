#include "nit__abstract_compiler.sep.0.h"
/* method abstract_compiler#AbstractCompiler#compile_main_function for (self: AbstractCompiler) */
void nit___nit__AbstractCompiler___compile_main_function(val* self) {
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
val* var17 /* : Platform */;
val* var19 /* : Platform */;
val* var_platform /* var platform: Platform */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_ /* var : Bool */;
val* var29 /* : ModelBuilder */;
val* var31 /* : ModelBuilder */;
val* var32 /* : ToolContext */;
val* var34 /* : ToolContext */;
val* var35 /* : OptionBool */;
val* var37 /* : OptionBool */;
val* var38 /* : nullable Object */;
val* var40 /* : nullable Object */;
short int var41 /* : Bool */;
short int var_no_main /* var no_main: Bool */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
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
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
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
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : FlatString */;
val* var95 /* : ModelBuilder */;
val* var97 /* : ModelBuilder */;
val* var98 /* : ToolContext */;
val* var100 /* : ToolContext */;
val* var101 /* : OptionBool */;
val* var103 /* : OptionBool */;
val* var104 /* : nullable Object */;
val* var106 /* : nullable Object */;
short int var107 /* : Bool */;
val* var108 /* : Array[String] */;
val* var110 /* : Array[String] */;
val* var_111 /* var : Array[String] */;
val* var112 /* : ArrayIterator[nullable Object] */;
val* var_113 /* var : ArrayIterator[String] */;
short int var114 /* : Bool */;
val* var115 /* : nullable Object */;
val* var_tag /* var tag: String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
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
val* var154 /* : Array[Object] */;
long var155 /* : Int */;
val* var156 /* : NativeArray[Object] */;
val* var157 /* : String */;
val* var158 /* : AbstractCompiler */;
val* var160 /* : AbstractCompiler */;
val* var161 /* : CodeWriter */;
val* var163 /* : CodeWriter */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : FlatString */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : FlatString */;
val* var174 /* : Array[Object] */;
long var175 /* : Int */;
val* var176 /* : NativeArray[Object] */;
val* var177 /* : String */;
val* var178 /* : AbstractCompiler */;
val* var180 /* : AbstractCompiler */;
val* var181 /* : CodeWriter */;
val* var183 /* : CodeWriter */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
long var187 /* : Int */;
val* var188 /* : FlatString */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : FlatString */;
val* var194 /* : Array[Object] */;
long var195 /* : Int */;
val* var196 /* : NativeArray[Object] */;
val* var197 /* : String */;
val* var198 /* : AbstractCompiler */;
val* var200 /* : AbstractCompiler */;
val* var201 /* : CodeWriter */;
val* var203 /* : CodeWriter */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : FlatString */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : FlatString */;
val* var214 /* : Array[Object] */;
long var215 /* : Int */;
val* var216 /* : NativeArray[Object] */;
val* var217 /* : String */;
val* var219 /* : ModelBuilder */;
val* var221 /* : ModelBuilder */;
val* var222 /* : ToolContext */;
val* var224 /* : ToolContext */;
val* var225 /* : OptionBool */;
val* var227 /* : OptionBool */;
val* var228 /* : nullable Object */;
val* var230 /* : nullable Object */;
short int var231 /* : Bool */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
long var235 /* : Int */;
val* var236 /* : FlatString */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
long var240 /* : Int */;
val* var241 /* : FlatString */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : FlatString */;
val* var247 /* : AbstractCompiler */;
val* var249 /* : AbstractCompiler */;
val* var250 /* : CodeWriter */;
val* var252 /* : CodeWriter */;
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
val* var280 /* : ModelBuilder */;
val* var282 /* : ModelBuilder */;
val* var283 /* : ToolContext */;
val* var285 /* : ToolContext */;
val* var286 /* : OptionBool */;
val* var288 /* : OptionBool */;
val* var289 /* : nullable Object */;
val* var291 /* : nullable Object */;
short int var292 /* : Bool */;
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
val* var303 /* : AbstractCompiler */;
val* var305 /* : AbstractCompiler */;
val* var306 /* : CodeWriter */;
val* var308 /* : CodeWriter */;
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
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
long var328 /* : Int */;
val* var329 /* : FlatString */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
long var333 /* : Int */;
val* var334 /* : FlatString */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
long var338 /* : Int */;
val* var339 /* : FlatString */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
long var343 /* : Int */;
val* var344 /* : FlatString */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
long var348 /* : Int */;
val* var349 /* : FlatString */;
short int var350 /* : Bool */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : FlatString */;
short int var356 /* : Bool */;
short int var357 /* : Bool */;
short int var_358 /* var : Bool */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
long var362 /* : Int */;
val* var363 /* : FlatString */;
short int var364 /* : Bool */;
short int var365 /* : Bool */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
long var369 /* : Int */;
val* var370 /* : FlatString */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
long var374 /* : Int */;
val* var375 /* : FlatString */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
long var379 /* : Int */;
val* var380 /* : FlatString */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
long var384 /* : Int */;
val* var385 /* : FlatString */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
long var389 /* : Int */;
val* var390 /* : FlatString */;
static val* varonce391;
val* var392 /* : String */;
char* var393 /* : NativeString */;
long var394 /* : Int */;
val* var395 /* : FlatString */;
static val* varonce396;
val* var397 /* : String */;
char* var398 /* : NativeString */;
long var399 /* : Int */;
val* var400 /* : FlatString */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
long var404 /* : Int */;
val* var405 /* : FlatString */;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
long var409 /* : Int */;
val* var410 /* : FlatString */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
long var414 /* : Int */;
val* var415 /* : FlatString */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
long var419 /* : Int */;
val* var420 /* : FlatString */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
long var424 /* : Int */;
val* var425 /* : FlatString */;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : NativeString */;
long var429 /* : Int */;
val* var430 /* : FlatString */;
static val* varonce431;
val* var432 /* : String */;
char* var433 /* : NativeString */;
long var434 /* : Int */;
val* var435 /* : FlatString */;
short int var436 /* : Bool */;
short int var437 /* : Bool */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : NativeString */;
long var441 /* : Int */;
val* var442 /* : FlatString */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
long var446 /* : Int */;
val* var447 /* : FlatString */;
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
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : NativeString */;
long var461 /* : Int */;
val* var462 /* : FlatString */;
static val* varonce463;
val* var464 /* : String */;
char* var465 /* : NativeString */;
long var466 /* : Int */;
val* var467 /* : FlatString */;
static val* varonce468;
val* var469 /* : String */;
char* var470 /* : NativeString */;
long var471 /* : Int */;
val* var472 /* : FlatString */;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : NativeString */;
long var476 /* : Int */;
val* var477 /* : FlatString */;
static val* varonce478;
val* var479 /* : String */;
char* var480 /* : NativeString */;
long var481 /* : Int */;
val* var482 /* : FlatString */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
long var486 /* : Int */;
val* var487 /* : FlatString */;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : NativeString */;
long var491 /* : Int */;
val* var492 /* : FlatString */;
static val* varonce493;
val* var494 /* : String */;
char* var495 /* : NativeString */;
long var496 /* : Int */;
val* var497 /* : FlatString */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : NativeString */;
long var501 /* : Int */;
val* var502 /* : FlatString */;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : NativeString */;
long var506 /* : Int */;
val* var507 /* : FlatString */;
static val* varonce508;
val* var509 /* : String */;
char* var510 /* : NativeString */;
long var511 /* : Int */;
val* var512 /* : FlatString */;
static val* varonce513;
val* var514 /* : String */;
char* var515 /* : NativeString */;
long var516 /* : Int */;
val* var517 /* : FlatString */;
static val* varonce518;
val* var519 /* : String */;
char* var520 /* : NativeString */;
long var521 /* : Int */;
val* var522 /* : FlatString */;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : NativeString */;
long var526 /* : Int */;
val* var527 /* : FlatString */;
static val* varonce528;
val* var529 /* : String */;
char* var530 /* : NativeString */;
long var531 /* : Int */;
val* var532 /* : FlatString */;
static val* varonce533;
val* var534 /* : String */;
char* var535 /* : NativeString */;
long var536 /* : Int */;
val* var537 /* : FlatString */;
static val* varonce538;
val* var539 /* : String */;
char* var540 /* : NativeString */;
long var541 /* : Int */;
val* var542 /* : FlatString */;
static val* varonce543;
val* var544 /* : String */;
char* var545 /* : NativeString */;
long var546 /* : Int */;
val* var547 /* : FlatString */;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : NativeString */;
long var551 /* : Int */;
val* var552 /* : FlatString */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
long var556 /* : Int */;
val* var557 /* : FlatString */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : NativeString */;
long var561 /* : Int */;
val* var562 /* : FlatString */;
val* var563 /* : MModule */;
val* var565 /* : MModule */;
val* var566 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
val* var567 /* : null */;
short int var568 /* : Bool */;
short int var569 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var571 /* : Bool */;
short int var572 /* : Bool */;
val* var573 /* : AbstractCompiler */;
val* var575 /* : AbstractCompiler */;
val* var576 /* : MModule */;
val* var578 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var579 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
static val* varonce580;
val* var581 /* : String */;
char* var582 /* : NativeString */;
long var583 /* : Int */;
val* var584 /* : FlatString */;
static val* varonce585;
val* var586 /* : String */;
char* var587 /* : NativeString */;
long var588 /* : Int */;
val* var589 /* : FlatString */;
val* var590 /* : Array[Object] */;
long var591 /* : Int */;
val* var592 /* : NativeArray[Object] */;
val* var593 /* : String */;
static val* varonce594;
val* var595 /* : String */;
char* var596 /* : NativeString */;
long var597 /* : Int */;
val* var598 /* : FlatString */;
val* var599 /* : MClass */;
val* var601 /* : MClass */;
val* var602 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
val* var603 /* : null */;
short int var604 /* : Bool */;
short int var605 /* : Bool */;
short int var607 /* : Bool */;
short int var608 /* : Bool */;
val* var609 /* : Array[RuntimeVariable] */;
long var610 /* : Int */;
val* var_611 /* var : Array[RuntimeVariable] */;
val* var612 /* : nullable RuntimeVariable */;
val* var613 /* : nullable MMethod */;
static val* varonce614;
val* var615 /* : String */;
char* var616 /* : NativeString */;
long var617 /* : Int */;
val* var618 /* : FlatString */;
val* var619 /* : MClass */;
val* var621 /* : MClass */;
val* var622 /* : nullable MMethod */;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : NativeString */;
long var626 /* : Int */;
val* var627 /* : FlatString */;
val* var628 /* : MClass */;
val* var630 /* : MClass */;
val* var631 /* : nullable MMethod */;
val* var_main_method /* var main_method: nullable MMethod */;
val* var632 /* : null */;
short int var633 /* : Bool */;
short int var634 /* : Bool */;
short int var636 /* : Bool */;
short int var637 /* : Bool */;
val* var638 /* : Array[RuntimeVariable] */;
long var639 /* : Int */;
val* var_640 /* var : Array[RuntimeVariable] */;
val* var641 /* : nullable RuntimeVariable */;
val* var642 /* : ModelBuilder */;
val* var644 /* : ModelBuilder */;
val* var645 /* : ToolContext */;
val* var647 /* : ToolContext */;
val* var648 /* : OptionBool */;
val* var650 /* : OptionBool */;
val* var651 /* : nullable Object */;
val* var653 /* : nullable Object */;
short int var654 /* : Bool */;
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
static val* varonce665;
val* var666 /* : String */;
char* var667 /* : NativeString */;
long var668 /* : Int */;
val* var669 /* : FlatString */;
static val* varonce670;
val* var671 /* : String */;
char* var672 /* : NativeString */;
long var673 /* : Int */;
val* var674 /* : FlatString */;
val* var675 /* : Array[String] */;
val* var677 /* : Array[String] */;
val* var_678 /* var : Array[String] */;
val* var679 /* : ArrayIterator[nullable Object] */;
val* var_680 /* var : ArrayIterator[String] */;
short int var681 /* : Bool */;
val* var682 /* : nullable Object */;
val* var_tag683 /* var tag: String */;
static val* varonce684;
val* var685 /* : String */;
char* var686 /* : NativeString */;
long var687 /* : Int */;
val* var688 /* : FlatString */;
static val* varonce689;
val* var690 /* : String */;
char* var691 /* : NativeString */;
long var692 /* : Int */;
val* var693 /* : FlatString */;
val* var694 /* : Array[Object] */;
long var695 /* : Int */;
val* var696 /* : NativeArray[Object] */;
val* var697 /* : String */;
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
static val* varonce708;
val* var709 /* : String */;
char* var710 /* : NativeString */;
long var711 /* : Int */;
val* var712 /* : FlatString */;
static val* varonce713;
val* var714 /* : String */;
char* var715 /* : NativeString */;
long var716 /* : Int */;
val* var717 /* : FlatString */;
static val* varonce718;
val* var719 /* : String */;
char* var720 /* : NativeString */;
long var721 /* : Int */;
val* var722 /* : FlatString */;
val* var723 /* : Array[Object] */;
long var724 /* : Int */;
val* var725 /* : NativeArray[Object] */;
val* var726 /* : String */;
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
static val* varonce785;
val* var786 /* : String */;
char* var787 /* : NativeString */;
long var788 /* : Int */;
val* var789 /* : FlatString */;
static val* varonce790;
val* var791 /* : String */;
char* var792 /* : NativeString */;
long var793 /* : Int */;
val* var794 /* : FlatString */;
val* var795 /* : Array[String] */;
val* var797 /* : Array[String] */;
val* var798 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce799;
val* var800 /* : String */;
char* var801 /* : NativeString */;
long var802 /* : Int */;
val* var803 /* : FlatString */;
val* var_804 /* var : Array[String] */;
val* var805 /* : ArrayIterator[nullable Object] */;
val* var_806 /* var : ArrayIterator[String] */;
short int var807 /* : Bool */;
val* var808 /* : nullable Object */;
val* var_tag809 /* var tag: String */;
static val* varonce810;
val* var811 /* : String */;
char* var812 /* : NativeString */;
long var813 /* : Int */;
val* var814 /* : FlatString */;
static val* varonce815;
val* var816 /* : String */;
char* var817 /* : NativeString */;
long var818 /* : Int */;
val* var819 /* : FlatString */;
val* var820 /* : Array[Object] */;
long var821 /* : Int */;
val* var822 /* : NativeArray[Object] */;
val* var823 /* : String */;
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
static val* varonce834;
val* var835 /* : String */;
char* var836 /* : NativeString */;
long var837 /* : Int */;
val* var838 /* : FlatString */;
val* var839 /* : Array[Object] */;
long var840 /* : Int */;
val* var841 /* : NativeArray[Object] */;
val* var842 /* : String */;
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
static val* varonce853;
val* var854 /* : String */;
char* var855 /* : NativeString */;
long var856 /* : Int */;
val* var857 /* : FlatString */;
val* var858 /* : Array[Object] */;
long var859 /* : Int */;
val* var860 /* : NativeArray[Object] */;
val* var861 /* : String */;
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
static val* varonce872;
val* var873 /* : String */;
char* var874 /* : NativeString */;
long var875 /* : Int */;
val* var876 /* : FlatString */;
val* var877 /* : Array[Object] */;
long var878 /* : Int */;
val* var879 /* : NativeArray[Object] */;
val* var880 /* : String */;
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
static val* varonce891;
val* var892 /* : String */;
char* var893 /* : NativeString */;
long var894 /* : Int */;
val* var895 /* : FlatString */;
val* var896 /* : Array[Object] */;
long var897 /* : Int */;
val* var898 /* : NativeArray[Object] */;
val* var899 /* : String */;
val* var902 /* : ModelBuilder */;
val* var904 /* : ModelBuilder */;
val* var905 /* : ToolContext */;
val* var907 /* : ToolContext */;
val* var908 /* : OptionBool */;
val* var910 /* : OptionBool */;
val* var911 /* : nullable Object */;
val* var913 /* : nullable Object */;
short int var914 /* : Bool */;
static val* varonce915;
val* var916 /* : String */;
char* var917 /* : NativeString */;
long var918 /* : Int */;
val* var919 /* : FlatString */;
static val* varonce920;
val* var921 /* : String */;
char* var922 /* : NativeString */;
long var923 /* : Int */;
val* var924 /* : FlatString */;
static val* varonce925;
val* var926 /* : String */;
char* var927 /* : NativeString */;
long var928 /* : Int */;
val* var929 /* : FlatString */;
static val* varonce930;
val* var931 /* : String */;
char* var932 /* : NativeString */;
long var933 /* : Int */;
val* var934 /* : FlatString */;
static val* varonce935;
val* var936 /* : String */;
char* var937 /* : NativeString */;
long var938 /* : Int */;
val* var939 /* : FlatString */;
static val* varonce940;
val* var941 /* : String */;
char* var942 /* : NativeString */;
long var943 /* : Int */;
val* var944 /* : FlatString */;
val* var945 /* : ModelBuilder */;
val* var947 /* : ModelBuilder */;
val* var948 /* : ToolContext */;
val* var950 /* : ToolContext */;
val* var951 /* : OptionBool */;
val* var953 /* : OptionBool */;
val* var954 /* : nullable Object */;
val* var956 /* : nullable Object */;
short int var957 /* : Bool */;
static val* varonce958;
val* var959 /* : String */;
char* var960 /* : NativeString */;
long var961 /* : Int */;
val* var962 /* : FlatString */;
static val* varonce963;
val* var964 /* : String */;
char* var965 /* : NativeString */;
long var966 /* : Int */;
val* var967 /* : FlatString */;
static val* varonce968;
val* var969 /* : String */;
char* var970 /* : NativeString */;
long var971 /* : Int */;
val* var972 /* : FlatString */;
static val* varonce973;
val* var974 /* : String */;
char* var975 /* : NativeString */;
long var976 /* : Int */;
val* var977 /* : FlatString */;
val* var978 /* : MModule */;
val* var980 /* : MModule */;
val* var981 /* : POSetElement[MModule] */;
val* var983 /* : POSetElement[MModule] */;
val* var984 /* : Collection[nullable Object] */;
val* var_985 /* var : Collection[MModule] */;
val* var986 /* : Iterator[nullable Object] */;
val* var_987 /* var : Iterator[MModule] */;
short int var988 /* : Bool */;
val* var989 /* : nullable Object */;
val* var_m /* var m: MModule */;
static val* varonce990;
val* var991 /* : String */;
char* var992 /* : NativeString */;
long var993 /* : Int */;
val* var994 /* : FlatString */;
val* var995 /* : String */;
val* var996 /* : String */;
val* var_f /* var f: String */;
static val* varonce997;
val* var998 /* : String */;
char* var999 /* : NativeString */;
long var1000 /* : Int */;
val* var1001 /* : FlatString */;
static val* varonce1002;
val* var1003 /* : String */;
char* var1004 /* : NativeString */;
long var1005 /* : Int */;
val* var1006 /* : FlatString */;
val* var1007 /* : Location */;
val* var1009 /* : Location */;
val* var1010 /* : nullable SourceFile */;
val* var1012 /* : nullable SourceFile */;
val* var1013 /* : String */;
val* var1015 /* : String */;
val* var1016 /* : String */;
static val* varonce1017;
val* var1018 /* : String */;
char* var1019 /* : NativeString */;
long var1020 /* : Int */;
val* var1021 /* : FlatString */;
val* var1022 /* : Array[Object] */;
long var1023 /* : Int */;
val* var1024 /* : NativeArray[Object] */;
val* var1025 /* : String */;
static val* varonce1026;
val* var1027 /* : String */;
char* var1028 /* : NativeString */;
long var1029 /* : Int */;
val* var1030 /* : FlatString */;
static val* varonce1031;
val* var1032 /* : String */;
char* var1033 /* : NativeString */;
long var1034 /* : Int */;
val* var1035 /* : FlatString */;
val* var1036 /* : Array[Object] */;
long var1037 /* : Int */;
val* var1038 /* : NativeArray[Object] */;
val* var1039 /* : String */;
{
var = ((val* (*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:AbstractCompiler>*/;
}
var_v = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "#include <signal.h>";
var3 = 19;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var1); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var7 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var5) on <var5:ModelBuilder> */
var10 = var5->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var5:ModelBuilder> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (var8) on <var8:ToolContext> */
var13 = var8->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <var8:ToolContext> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 65);
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
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (self) on <self:AbstractCompiler> */
var19 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <self:AbstractCompiler> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 487);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_platform = var17;
{
var20 = nit___nit__Platform___supports_libunwind(var_platform);
}
var21 = !var20;
if (var21){
if (varonce22) {
var23 = varonce22;
} else {
var24 = "none";
var25 = 4;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var_ost = var23;
} else {
}
{
var28 = nit___nit__Platform___no_main(var_platform);
}
var_ = var28;
if (var28){
var27 = var_;
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var31 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var29) on <var29:ModelBuilder> */
var34 = var29->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var29:ModelBuilder> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (var32) on <var32:ToolContext> */
var37 = var32->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <var32:ToolContext> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 35);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline opts#Option#value (var35) on <var35:OptionBool> */
var40 = var35->attrs[COLOR_opts__Option___value].val; /* _value on <var35:OptionBool> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var41 = ((struct instance_standard__Bool*)var38)->value; /* autounbox from nullable Object to Bool */;
var27 = var41;
}
var_no_main = var27;
if (varonce43) {
var44 = varonce43;
} else {
var45 = "nitstack";
var46 = 8;
var47 = standard___standard__NativeString___to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
if (var_ost == NULL) {
var48 = 0; /* <var44:String> cannot be null */
} else {
var49 = ((short int (*)(val* self, val* p0))(var_ost->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ost, var44) /* == on <var_ost:nullable String>*/;
var48 = var49;
}
var_50 = var48;
if (var48){
var42 = var_50;
} else {
if (varonce51) {
var52 = varonce51;
} else {
var53 = "libunwind";
var54 = 9;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (var_ost == NULL) {
var56 = 0; /* <var52:String> cannot be null */
} else {
var57 = ((short int (*)(val* self, val* p0))(var_ost->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ost, var52) /* == on <var_ost:nullable String>*/;
var56 = var57;
}
var42 = var56;
}
if (var42){
if (varonce58) {
var59 = varonce58;
} else {
var60 = "#define UNW_LOCAL_ONLY";
var61 = 22;
var62 = standard___standard__NativeString___to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = "#include <libunwind.h>";
var66 = 22;
var67 = standard___standard__NativeString___to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "nitstack";
var71 = 8;
var72 = standard___standard__NativeString___to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (var_ost == NULL) {
var73 = 0; /* <var69:String> cannot be null */
} else {
var74 = ((short int (*)(val* self, val* p0))(var_ost->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ost, var69) /* == on <var_ost:nullable String>*/;
var73 = var74;
}
if (var73){
if (varonce75) {
var76 = varonce75;
} else {
var77 = "#include \"c_functions_hash.h\"";
var78 = 29;
var79 = standard___standard__NativeString___to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var76); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "int glob_argc;";
var83 = 14;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "char **glob_argv;";
var88 = 17;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var86); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = "val *glob_sys;";
var93 = 14;
var94 = standard___standard__NativeString___to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var91); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var97 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var95) on <var95:ModelBuilder> */
var100 = var95->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var95:ModelBuilder> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var98) on <var98:ToolContext> */
var103 = var98->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var98:ToolContext> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline opts#Option#value (var101) on <var101:OptionBool> */
var106 = var101->attrs[COLOR_opts__Option___value].val; /* _value on <var101:OptionBool> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
var107 = ((struct instance_standard__Bool*)var104)->value; /* autounbox from nullable Object to Bool */;
if (var107){
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var110 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 963);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
var_111 = var108;
{
var112 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_111);
}
var_113 = var112;
for(;;) {
{
var114 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_113);
}
if (var114){
{
var115 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_113);
}
var_tag = var115;
if (varonce116) {
var117 = varonce116;
} else {
var118 = "long count_type_test_resolved_";
var119 = 30;
var120 = standard___standard__NativeString___to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = ";";
var124 = 1;
var125 = standard___standard__NativeString___to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 3;
var128 = NEW_standard__NativeArray(var127, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var128)->values[0] = (val*) var117;
((struct instance_standard__NativeArray*)var128)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var128)->values[2] = (val*) var122;
{
((void (*)(val* self, val* p0, long p1))(var126->class->vft[COLOR_standard__array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
}
{
var129 = ((val* (*)(val* self))(var126->class->vft[COLOR_standard__string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var129); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = "long count_type_test_unresolved_";
var133 = 32;
var134 = standard___standard__NativeString___to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = ";";
var138 = 1;
var139 = standard___standard__NativeString___to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
var140 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var140 = array_instance Array[Object] */
var141 = 3;
var142 = NEW_standard__NativeArray(var141, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var142)->values[0] = (val*) var131;
((struct instance_standard__NativeArray*)var142)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var142)->values[2] = (val*) var136;
{
((void (*)(val* self, val* p0, long p1))(var140->class->vft[COLOR_standard__array__Array__with_native]))(var140, var142, var141) /* with_native on <var140:Array[Object]>*/;
}
}
{
var143 = ((val* (*)(val* self))(var140->class->vft[COLOR_standard__string__Object__to_s]))(var140) /* to_s on <var140:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = "long count_type_test_skipped_";
var147 = 29;
var148 = standard___standard__NativeString___to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
if (varonce149) {
var150 = varonce149;
} else {
var151 = ";";
var152 = 1;
var153 = standard___standard__NativeString___to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
var154 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var154 = array_instance Array[Object] */
var155 = 3;
var156 = NEW_standard__NativeArray(var155, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var156)->values[0] = (val*) var145;
((struct instance_standard__NativeArray*)var156)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var156)->values[2] = (val*) var150;
{
((void (*)(val* self, val* p0, long p1))(var154->class->vft[COLOR_standard__array__Array__with_native]))(var154, var156, var155) /* with_native on <var154:Array[Object]>*/;
}
}
{
var157 = ((val* (*)(val* self))(var154->class->vft[COLOR_standard__string__Object__to_s]))(var154) /* to_s on <var154:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var157); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var160 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var158) on <var158:AbstractCompiler> */
var163 = var158->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var158:AbstractCompiler> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
if (varonce164) {
var165 = varonce164;
} else {
var166 = "extern long count_type_test_resolved_";
var167 = 37;
var168 = standard___standard__NativeString___to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
if (varonce169) {
var170 = varonce169;
} else {
var171 = ";";
var172 = 1;
var173 = standard___standard__NativeString___to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
var174 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var174 = array_instance Array[Object] */
var175 = 3;
var176 = NEW_standard__NativeArray(var175, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var176)->values[0] = (val*) var165;
((struct instance_standard__NativeArray*)var176)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var176)->values[2] = (val*) var170;
{
((void (*)(val* self, val* p0, long p1))(var174->class->vft[COLOR_standard__array__Array__with_native]))(var174, var176, var175) /* with_native on <var174:Array[Object]>*/;
}
}
{
var177 = ((val* (*)(val* self))(var174->class->vft[COLOR_standard__string__Object__to_s]))(var174) /* to_s on <var174:Array[Object]>*/;
}
{
nit___nit__CodeWriter___add_decl(var161, var177); /* Direct call abstract_compiler#CodeWriter#add_decl on <var161:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var180 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var178) on <var178:AbstractCompiler> */
var183 = var178->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var178:AbstractCompiler> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
if (varonce184) {
var185 = varonce184;
} else {
var186 = "extern long count_type_test_unresolved_";
var187 = 39;
var188 = standard___standard__NativeString___to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
if (varonce189) {
var190 = varonce189;
} else {
var191 = ";";
var192 = 1;
var193 = standard___standard__NativeString___to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
var194 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var194 = array_instance Array[Object] */
var195 = 3;
var196 = NEW_standard__NativeArray(var195, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var196)->values[0] = (val*) var185;
((struct instance_standard__NativeArray*)var196)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var196)->values[2] = (val*) var190;
{
((void (*)(val* self, val* p0, long p1))(var194->class->vft[COLOR_standard__array__Array__with_native]))(var194, var196, var195) /* with_native on <var194:Array[Object]>*/;
}
}
{
var197 = ((val* (*)(val* self))(var194->class->vft[COLOR_standard__string__Object__to_s]))(var194) /* to_s on <var194:Array[Object]>*/;
}
{
nit___nit__CodeWriter___add_decl(var181, var197); /* Direct call abstract_compiler#CodeWriter#add_decl on <var181:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var200 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var200 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var198 = var200;
RET_LABEL199:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var198) on <var198:AbstractCompiler> */
var203 = var198->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var198:AbstractCompiler> */
if (unlikely(var203 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
if (varonce204) {
var205 = varonce204;
} else {
var206 = "extern long count_type_test_skipped_";
var207 = 36;
var208 = standard___standard__NativeString___to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
if (varonce209) {
var210 = varonce209;
} else {
var211 = ";";
var212 = 1;
var213 = standard___standard__NativeString___to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
var214 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var214 = array_instance Array[Object] */
var215 = 3;
var216 = NEW_standard__NativeArray(var215, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var216)->values[0] = (val*) var205;
((struct instance_standard__NativeArray*)var216)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var216)->values[2] = (val*) var210;
{
((void (*)(val* self, val* p0, long p1))(var214->class->vft[COLOR_standard__array__Array__with_native]))(var214, var216, var215) /* with_native on <var214:Array[Object]>*/;
}
}
{
var217 = ((val* (*)(val* self))(var214->class->vft[COLOR_standard__string__Object__to_s]))(var214) /* to_s on <var214:Array[Object]>*/;
}
{
nit___nit__CodeWriter___add_decl(var201, var217); /* Direct call abstract_compiler#CodeWriter#add_decl on <var201:CodeWriter>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_113); /* Direct call array#ArrayIterator#next on <var_113:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_113) on <var_113:ArrayIterator[String]> */
RET_LABEL218:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var221 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var219) on <var219:ModelBuilder> */
var224 = var219->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var219:ModelBuilder> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var222) on <var222:ToolContext> */
var227 = var222->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var222:ToolContext> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 61);
show_backtrace(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline opts#Option#value (var225) on <var225:OptionBool> */
var230 = var225->attrs[COLOR_opts__Option___value].val; /* _value on <var225:OptionBool> */
var228 = var230;
RET_LABEL229:(void)0;
}
}
var231 = ((struct instance_standard__Bool*)var228)->value; /* autounbox from nullable Object to Bool */;
if (var231){
if (varonce232) {
var233 = varonce232;
} else {
var234 = "long count_invoke_by_tables;";
var235 = 28;
var236 = standard___standard__NativeString___to_s_with_length(var234, var235);
var233 = var236;
varonce232 = var233;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var233); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce237) {
var238 = varonce237;
} else {
var239 = "long count_invoke_by_direct;";
var240 = 28;
var241 = standard___standard__NativeString___to_s_with_length(var239, var240);
var238 = var241;
varonce237 = var238;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var238); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = "long count_invoke_by_inline;";
var245 = 28;
var246 = standard___standard__NativeString___to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var243); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var249 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var247) on <var247:AbstractCompiler> */
var252 = var247->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var247:AbstractCompiler> */
if (unlikely(var252 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
if (varonce253) {
var254 = varonce253;
} else {
var255 = "extern long count_invoke_by_tables;";
var256 = 35;
var257 = standard___standard__NativeString___to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
{
nit___nit__CodeWriter___add_decl(var250, var254); /* Direct call abstract_compiler#CodeWriter#add_decl on <var250:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var260 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var260 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var258) on <var258:AbstractCompiler> */
var263 = var258->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var258:AbstractCompiler> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
if (varonce264) {
var265 = varonce264;
} else {
var266 = "extern long count_invoke_by_direct;";
var267 = 35;
var268 = standard___standard__NativeString___to_s_with_length(var266, var267);
var265 = var268;
varonce264 = var265;
}
{
nit___nit__CodeWriter___add_decl(var261, var265); /* Direct call abstract_compiler#CodeWriter#add_decl on <var261:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var271 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var271 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var269) on <var269:AbstractCompiler> */
var274 = var269->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var269:AbstractCompiler> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
if (varonce275) {
var276 = varonce275;
} else {
var277 = "extern long count_invoke_by_inline;";
var278 = 35;
var279 = standard___standard__NativeString___to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
{
nit___nit__CodeWriter___add_decl(var272, var276); /* Direct call abstract_compiler#CodeWriter#add_decl on <var272:CodeWriter>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var282 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var280) on <var280:ModelBuilder> */
var285 = var280->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var280:ModelBuilder> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var283) on <var283:ToolContext> */
var288 = var283->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var283:ToolContext> */
if (unlikely(var288 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 63);
show_backtrace(1);
}
var286 = var288;
RET_LABEL287:(void)0;
}
}
{
{ /* Inline opts#Option#value (var286) on <var286:OptionBool> */
var291 = var286->attrs[COLOR_opts__Option___value].val; /* _value on <var286:OptionBool> */
var289 = var291;
RET_LABEL290:(void)0;
}
}
var292 = ((struct instance_standard__Bool*)var289)->value; /* autounbox from nullable Object to Bool */;
if (var292){
if (varonce293) {
var294 = varonce293;
} else {
var295 = "long count_attr_reads = 0;";
var296 = 26;
var297 = standard___standard__NativeString___to_s_with_length(var295, var296);
var294 = var297;
varonce293 = var294;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var294); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce298) {
var299 = varonce298;
} else {
var300 = "long count_isset_checks = 0;";
var301 = 28;
var302 = standard___standard__NativeString___to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var299); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var305 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var305 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var303) on <var303:AbstractCompiler> */
var308 = var303->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var303:AbstractCompiler> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
if (varonce309) {
var310 = varonce309;
} else {
var311 = "extern long count_attr_reads;";
var312 = 29;
var313 = standard___standard__NativeString___to_s_with_length(var311, var312);
var310 = var313;
varonce309 = var310;
}
{
nit___nit__CodeWriter___add_decl(var306, var310); /* Direct call abstract_compiler#CodeWriter#add_decl on <var306:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var316 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var316 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var314) on <var314:AbstractCompiler> */
var319 = var314->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var314:AbstractCompiler> */
if (unlikely(var319 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var317 = var319;
RET_LABEL318:(void)0;
}
}
if (varonce320) {
var321 = varonce320;
} else {
var322 = "extern long count_isset_checks;";
var323 = 31;
var324 = standard___standard__NativeString___to_s_with_length(var322, var323);
var321 = var324;
varonce320 = var321;
}
{
nit___nit__CodeWriter___add_decl(var317, var321); /* Direct call abstract_compiler#CodeWriter#add_decl on <var317:CodeWriter>*/
}
} else {
}
if (varonce325) {
var326 = varonce325;
} else {
var327 = "void sig_handler(int signo){";
var328 = 28;
var329 = standard___standard__NativeString___to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var326); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce330) {
var331 = varonce330;
} else {
var332 = "PRINT_ERROR(\"Caught signal : %s\\n\", strsignal(signo));";
var333 = 54;
var334 = standard___standard__NativeString___to_s_with_length(var332, var333);
var331 = var334;
varonce330 = var331;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var331); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce335) {
var336 = varonce335;
} else {
var337 = "show_backtrace(signo);";
var338 = 22;
var339 = standard___standard__NativeString___to_s_with_length(var337, var338);
var336 = var339;
varonce335 = var336;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var336); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce340) {
var341 = varonce340;
} else {
var342 = "}";
var343 = 1;
var344 = standard___standard__NativeString___to_s_with_length(var342, var343);
var341 = var344;
varonce340 = var341;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var341); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce345) {
var346 = varonce345;
} else {
var347 = "void show_backtrace (int signo) {";
var348 = 33;
var349 = standard___standard__NativeString___to_s_with_length(var347, var348);
var346 = var349;
varonce345 = var346;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var346); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce351) {
var352 = varonce351;
} else {
var353 = "nitstack";
var354 = 8;
var355 = standard___standard__NativeString___to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
if (var_ost == NULL) {
var356 = 0; /* <var352:String> cannot be null */
} else {
var357 = ((short int (*)(val* self, val* p0))(var_ost->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ost, var352) /* == on <var_ost:nullable String>*/;
var356 = var357;
}
var_358 = var356;
if (var356){
var350 = var_358;
} else {
if (varonce359) {
var360 = varonce359;
} else {
var361 = "libunwind";
var362 = 9;
var363 = standard___standard__NativeString___to_s_with_length(var361, var362);
var360 = var363;
varonce359 = var360;
}
if (var_ost == NULL) {
var364 = 0; /* <var360:String> cannot be null */
} else {
var365 = ((short int (*)(val* self, val* p0))(var_ost->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ost, var360) /* == on <var_ost:nullable String>*/;
var364 = var365;
}
var350 = var364;
}
if (var350){
if (varonce366) {
var367 = varonce366;
} else {
var368 = "char* opt = getenv(\"NIT_NO_STACK\");";
var369 = 35;
var370 = standard___standard__NativeString___to_s_with_length(var368, var369);
var367 = var370;
varonce366 = var367;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var367); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce371) {
var372 = varonce371;
} else {
var373 = "unw_cursor_t cursor;";
var374 = 20;
var375 = standard___standard__NativeString___to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var372); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce376) {
var377 = varonce376;
} else {
var378 = "if(opt==NULL){";
var379 = 14;
var380 = standard___standard__NativeString___to_s_with_length(var378, var379);
var377 = var380;
varonce376 = var377;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var377); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce381) {
var382 = varonce381;
} else {
var383 = "unw_context_t uc;";
var384 = 17;
var385 = standard___standard__NativeString___to_s_with_length(var383, var384);
var382 = var385;
varonce381 = var382;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var382); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce386) {
var387 = varonce386;
} else {
var388 = "unw_word_t ip;";
var389 = 14;
var390 = standard___standard__NativeString___to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var387); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce391) {
var392 = varonce391;
} else {
var393 = "char* procname = malloc(sizeof(char) * 100);";
var394 = 44;
var395 = standard___standard__NativeString___to_s_with_length(var393, var394);
var392 = var395;
varonce391 = var392;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var392); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce396) {
var397 = varonce396;
} else {
var398 = "unw_getcontext(&uc);";
var399 = 20;
var400 = standard___standard__NativeString___to_s_with_length(var398, var399);
var397 = var400;
varonce396 = var397;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var397); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce401) {
var402 = varonce401;
} else {
var403 = "unw_init_local(&cursor, &uc);";
var404 = 29;
var405 = standard___standard__NativeString___to_s_with_length(var403, var404);
var402 = var405;
varonce401 = var402;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var402); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce406) {
var407 = varonce406;
} else {
var408 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var409 = 67;
var410 = standard___standard__NativeString___to_s_with_length(var408, var409);
var407 = var410;
varonce406 = var407;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var407); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce411) {
var412 = varonce411;
} else {
var413 = "PRINT_ERROR(\"--   Stack Trace   ------------------------------\\n\");";
var414 = 67;
var415 = standard___standard__NativeString___to_s_with_length(var413, var414);
var412 = var415;
varonce411 = var412;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var412); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce416) {
var417 = varonce416;
} else {
var418 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var419 = 67;
var420 = standard___standard__NativeString___to_s_with_length(var418, var419);
var417 = var420;
varonce416 = var417;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var417); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce421) {
var422 = varonce421;
} else {
var423 = "while (unw_step(&cursor) > 0) {";
var424 = 31;
var425 = standard___standard__NativeString___to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var422); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce426) {
var427 = varonce426;
} else {
var428 = "\11unw_get_proc_name(&cursor, procname, 100, &ip);";
var429 = 48;
var430 = standard___standard__NativeString___to_s_with_length(var428, var429);
var427 = var430;
varonce426 = var427;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var427); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce431) {
var432 = varonce431;
} else {
var433 = "nitstack";
var434 = 8;
var435 = standard___standard__NativeString___to_s_with_length(var433, var434);
var432 = var435;
varonce431 = var432;
}
if (var_ost == NULL) {
var436 = 0; /* <var432:String> cannot be null */
} else {
var437 = ((short int (*)(val* self, val* p0))(var_ost->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ost, var432) /* == on <var_ost:nullable String>*/;
var436 = var437;
}
if (var436){
if (varonce438) {
var439 = varonce438;
} else {
var440 = "\11const char* recv = get_nit_name(procname, strlen(procname));";
var441 = 61;
var442 = standard___standard__NativeString___to_s_with_length(var440, var441);
var439 = var442;
varonce438 = var439;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var439); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce443) {
var444 = varonce443;
} else {
var445 = "\11if (recv != NULL){";
var446 = 19;
var447 = standard___standard__NativeString___to_s_with_length(var445, var446);
var444 = var447;
varonce443 = var444;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var444); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce448) {
var449 = varonce448;
} else {
var450 = "\11\11PRINT_ERROR(\"` %s\\n\", recv);";
var451 = 30;
var452 = standard___standard__NativeString___to_s_with_length(var450, var451);
var449 = var452;
varonce448 = var449;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var449); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce453) {
var454 = varonce453;
} else {
var455 = "\11}else{";
var456 = 7;
var457 = standard___standard__NativeString___to_s_with_length(var455, var456);
var454 = var457;
varonce453 = var454;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var454); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce458) {
var459 = varonce458;
} else {
var460 = "\11\11PRINT_ERROR(\"` %s\\n\", procname);";
var461 = 34;
var462 = standard___standard__NativeString___to_s_with_length(var460, var461);
var459 = var462;
varonce458 = var459;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var459); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce463) {
var464 = varonce463;
} else {
var465 = "\11}";
var466 = 2;
var467 = standard___standard__NativeString___to_s_with_length(var465, var466);
var464 = var467;
varonce463 = var464;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var464); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce468) {
var469 = varonce468;
} else {
var470 = "\11PRINT_ERROR(\"` %s \\n\",procname);";
var471 = 33;
var472 = standard___standard__NativeString___to_s_with_length(var470, var471);
var469 = var472;
varonce468 = var469;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var469); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
if (varonce473) {
var474 = varonce473;
} else {
var475 = "}";
var476 = 1;
var477 = standard___standard__NativeString___to_s_with_length(var475, var476);
var474 = var477;
varonce473 = var474;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var474); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce478) {
var479 = varonce478;
} else {
var480 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var481 = 67;
var482 = standard___standard__NativeString___to_s_with_length(var480, var481);
var479 = var482;
varonce478 = var479;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var479); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce483) {
var484 = varonce483;
} else {
var485 = "free(procname);";
var486 = 15;
var487 = standard___standard__NativeString___to_s_with_length(var485, var486);
var484 = var487;
varonce483 = var484;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var484); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce488) {
var489 = varonce488;
} else {
var490 = "}";
var491 = 1;
var492 = standard___standard__NativeString___to_s_with_length(var490, var491);
var489 = var492;
varonce488 = var489;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var489); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce493) {
var494 = varonce493;
} else {
var495 = "exit(signo);";
var496 = 12;
var497 = standard___standard__NativeString___to_s_with_length(var495, var496);
var494 = var497;
varonce493 = var494;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var494); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce498) {
var499 = varonce498;
} else {
var500 = "}";
var501 = 1;
var502 = standard___standard__NativeString___to_s_with_length(var500, var501);
var499 = var502;
varonce498 = var499;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var499); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (var_no_main){
if (varonce503) {
var504 = varonce503;
} else {
var505 = "int nit_main(int argc, char** argv) {";
var506 = 37;
var507 = standard___standard__NativeString___to_s_with_length(var505, var506);
var504 = var507;
varonce503 = var504;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var504); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce508) {
var509 = varonce508;
} else {
var510 = "int main(int argc, char** argv) {";
var511 = 33;
var512 = standard___standard__NativeString___to_s_with_length(var510, var511);
var509 = var512;
varonce508 = var509;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var509); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
if (varonce513) {
var514 = varonce513;
} else {
var515 = "signal(SIGABRT, sig_handler);";
var516 = 29;
var517 = standard___standard__NativeString___to_s_with_length(var515, var516);
var514 = var517;
varonce513 = var514;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var514); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce518) {
var519 = varonce518;
} else {
var520 = "signal(SIGFPE, sig_handler);";
var521 = 28;
var522 = standard___standard__NativeString___to_s_with_length(var520, var521);
var519 = var522;
varonce518 = var519;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var519); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce523) {
var524 = varonce523;
} else {
var525 = "signal(SIGILL, sig_handler);";
var526 = 28;
var527 = standard___standard__NativeString___to_s_with_length(var525, var526);
var524 = var527;
varonce523 = var524;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var524); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce528) {
var529 = varonce528;
} else {
var530 = "signal(SIGINT, sig_handler);";
var531 = 28;
var532 = standard___standard__NativeString___to_s_with_length(var530, var531);
var529 = var532;
varonce528 = var529;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var529); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce533) {
var534 = varonce533;
} else {
var535 = "signal(SIGTERM, sig_handler);";
var536 = 29;
var537 = standard___standard__NativeString___to_s_with_length(var535, var536);
var534 = var537;
varonce533 = var534;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var534); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce538) {
var539 = varonce538;
} else {
var540 = "signal(SIGSEGV, sig_handler);";
var541 = 29;
var542 = standard___standard__NativeString___to_s_with_length(var540, var541);
var539 = var542;
varonce538 = var539;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var539); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce543) {
var544 = varonce543;
} else {
var545 = "signal(SIGPIPE, sig_handler);";
var546 = 29;
var547 = standard___standard__NativeString___to_s_with_length(var545, var546);
var544 = var547;
varonce543 = var544;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var544); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce548) {
var549 = varonce548;
} else {
var550 = "glob_argc = argc; glob_argv = argv;";
var551 = 35;
var552 = standard___standard__NativeString___to_s_with_length(var550, var551);
var549 = var552;
varonce548 = var549;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var549); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce553) {
var554 = varonce553;
} else {
var555 = "initialize_gc_option();";
var556 = 23;
var557 = standard___standard__NativeString___to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var554); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce558) {
var559 = varonce558;
} else {
var560 = "initialize_nitni_global_refs();";
var561 = 31;
var562 = standard___standard__NativeString___to_s_with_length(var560, var561);
var559 = var562;
varonce558 = var559;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var559); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var565 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var565 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var563 = var565;
RET_LABEL564:(void)0;
}
}
{
var566 = nit__model___MModule___sys_type(var563);
}
var_main_type = var566;
var567 = NULL;
if (var_main_type == NULL) {
var568 = 0; /* is null */
} else {
var568 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_type,var567) on <var_main_type:nullable MClassType> */
var_other = var567;
{
var571 = ((short int (*)(val* self, val* p0))(var_main_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_main_type, var_other) /* == on <var_main_type:nullable MClassType(MClassType)>*/;
}
var572 = !var571;
var569 = var572;
goto RET_LABEL570;
RET_LABEL570:(void)0;
}
var568 = var569;
}
if (var568){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var575 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var575 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var573 = var575;
RET_LABEL574:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var573) on <var573:AbstractCompiler> */
var578 = var573->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var573:AbstractCompiler> */
if (unlikely(var578 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var576 = var578;
RET_LABEL577:(void)0;
}
}
var_mainmodule = var576;
{
var579 = ((val* (*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_glob_sys = var579;
if (varonce580) {
var581 = varonce580;
} else {
var582 = "glob_sys = ";
var583 = 11;
var584 = standard___standard__NativeString___to_s_with_length(var582, var583);
var581 = var584;
varonce580 = var581;
}
if (varonce585) {
var586 = varonce585;
} else {
var587 = ";";
var588 = 1;
var589 = standard___standard__NativeString___to_s_with_length(var587, var588);
var586 = var589;
varonce585 = var586;
}
var590 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var590 = array_instance Array[Object] */
var591 = 3;
var592 = NEW_standard__NativeArray(var591, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var592)->values[0] = (val*) var581;
((struct instance_standard__NativeArray*)var592)->values[1] = (val*) var_glob_sys;
((struct instance_standard__NativeArray*)var592)->values[2] = (val*) var586;
{
((void (*)(val* self, val* p0, long p1))(var590->class->vft[COLOR_standard__array__Array__with_native]))(var590, var592, var591) /* with_native on <var590:Array[Object]>*/;
}
}
{
var593 = ((val* (*)(val* self))(var590->class->vft[COLOR_standard__string__Object__to_s]))(var590) /* to_s on <var590:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var593); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce594) {
var595 = varonce594;
} else {
var596 = "init";
var597 = 4;
var598 = standard___standard__NativeString___to_s_with_length(var596, var597);
var595 = var598;
varonce594 = var595;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var601 = var_main_type->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var601 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var599 = var601;
RET_LABEL600:(void)0;
}
}
{
var602 = nit__model___MModule___try_get_primitive_method(var_mainmodule, var595, var599);
}
var_main_init = var602;
var603 = NULL;
if (var_main_init == NULL) {
var604 = 0; /* is null */
} else {
var604 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_init,var603) on <var_main_init:nullable MMethod> */
var_other = var603;
{
var607 = ((short int (*)(val* self, val* p0))(var_main_init->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_main_init, var_other) /* == on <var_main_init:nullable MMethod(MMethod)>*/;
}
var608 = !var607;
var605 = var608;
goto RET_LABEL606;
RET_LABEL606:(void)0;
}
var604 = var605;
}
if (var604){
var609 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var610 = 1;
{
standard___standard__Array___with_capacity(var609, var610); /* Direct call array#Array#with_capacity on <var609:Array[RuntimeVariable]>*/
}
var_611 = var609;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_611, var_glob_sys); /* Direct call array#AbstractArray#push on <var_611:Array[RuntimeVariable]>*/
}
{
var612 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_main_init, var_611);
}
} else {
}
if (varonce614) {
var615 = varonce614;
} else {
var616 = "run";
var617 = 3;
var618 = standard___standard__NativeString___to_s_with_length(var616, var617);
var615 = var618;
varonce614 = var615;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var621 = var_main_type->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var621 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var619 = var621;
RET_LABEL620:(void)0;
}
}
{
var622 = nit__model___MModule___try_get_primitive_method(var_mainmodule, var615, var619);
}
if (var622!=NULL) {
var613 = var622;
} else {
if (varonce623) {
var624 = varonce623;
} else {
var625 = "main";
var626 = 4;
var627 = standard___standard__NativeString___to_s_with_length(var625, var626);
var624 = var627;
varonce623 = var624;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var630 = var_main_type->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var630 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var628 = var630;
RET_LABEL629:(void)0;
}
}
{
var631 = nit__model___MModule___try_get_primitive_method(var_mainmodule, var624, var628);
}
var613 = var631;
}
var_main_method = var613;
var632 = NULL;
if (var_main_method == NULL) {
var633 = 0; /* is null */
} else {
var633 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_method,var632) on <var_main_method:nullable MMethod> */
var_other = var632;
{
var636 = ((short int (*)(val* self, val* p0))(var_main_method->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_main_method, var_other) /* == on <var_main_method:nullable MMethod(MMethod)>*/;
}
var637 = !var636;
var634 = var637;
goto RET_LABEL635;
RET_LABEL635:(void)0;
}
var633 = var634;
}
if (var633){
var638 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var639 = 1;
{
standard___standard__Array___with_capacity(var638, var639); /* Direct call array#Array#with_capacity on <var638:Array[RuntimeVariable]>*/
}
var_640 = var638;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_640, var_glob_sys); /* Direct call array#AbstractArray#push on <var_640:Array[RuntimeVariable]>*/
}
{
var641 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_main_method, var_640);
}
} else {
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var644 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var644 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var642 = var644;
RET_LABEL643:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var642) on <var642:ModelBuilder> */
var647 = var642->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var642:ModelBuilder> */
if (unlikely(var647 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var645 = var647;
RET_LABEL646:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var645) on <var645:ToolContext> */
var650 = var645->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var645:ToolContext> */
if (unlikely(var650 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
show_backtrace(1);
}
var648 = var650;
RET_LABEL649:(void)0;
}
}
{
{ /* Inline opts#Option#value (var648) on <var648:OptionBool> */
var653 = var648->attrs[COLOR_opts__Option___value].val; /* _value on <var648:OptionBool> */
var651 = var653;
RET_LABEL652:(void)0;
}
}
var654 = ((struct instance_standard__Bool*)var651)->value; /* autounbox from nullable Object to Bool */;
if (var654){
if (varonce655) {
var656 = varonce655;
} else {
var657 = "long count_type_test_resolved_total = 0;";
var658 = 40;
var659 = standard___standard__NativeString___to_s_with_length(var657, var658);
var656 = var659;
varonce655 = var656;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var656); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce660) {
var661 = varonce660;
} else {
var662 = "long count_type_test_unresolved_total = 0;";
var663 = 42;
var664 = standard___standard__NativeString___to_s_with_length(var662, var663);
var661 = var664;
varonce660 = var661;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var661); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce665) {
var666 = varonce665;
} else {
var667 = "long count_type_test_skipped_total = 0;";
var668 = 39;
var669 = standard___standard__NativeString___to_s_with_length(var667, var668);
var666 = var669;
varonce665 = var666;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var666); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce670) {
var671 = varonce670;
} else {
var672 = "long count_type_test_total_total = 0;";
var673 = 37;
var674 = standard___standard__NativeString___to_s_with_length(var672, var673);
var671 = var674;
varonce670 = var671;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var671); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var677 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var677 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 963);
show_backtrace(1);
}
var675 = var677;
RET_LABEL676:(void)0;
}
}
var_678 = var675;
{
var679 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_678);
}
var_680 = var679;
for(;;) {
{
var681 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_680);
}
if (var681){
{
var682 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_680);
}
var_tag683 = var682;
if (varonce684) {
var685 = varonce684;
} else {
var686 = "long count_type_test_total_";
var687 = 27;
var688 = standard___standard__NativeString___to_s_with_length(var686, var687);
var685 = var688;
varonce684 = var685;
}
if (varonce689) {
var690 = varonce689;
} else {
var691 = ";";
var692 = 1;
var693 = standard___standard__NativeString___to_s_with_length(var691, var692);
var690 = var693;
varonce689 = var690;
}
var694 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var694 = array_instance Array[Object] */
var695 = 3;
var696 = NEW_standard__NativeArray(var695, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var696)->values[0] = (val*) var685;
((struct instance_standard__NativeArray*)var696)->values[1] = (val*) var_tag683;
((struct instance_standard__NativeArray*)var696)->values[2] = (val*) var690;
{
((void (*)(val* self, val* p0, long p1))(var694->class->vft[COLOR_standard__array__Array__with_native]))(var694, var696, var695) /* with_native on <var694:Array[Object]>*/;
}
}
{
var697 = ((val* (*)(val* self))(var694->class->vft[COLOR_standard__string__Object__to_s]))(var694) /* to_s on <var694:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var697); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce698) {
var699 = varonce698;
} else {
var700 = "count_type_test_total_";
var701 = 22;
var702 = standard___standard__NativeString___to_s_with_length(var700, var701);
var699 = var702;
varonce698 = var699;
}
if (varonce703) {
var704 = varonce703;
} else {
var705 = " = count_type_test_resolved_";
var706 = 28;
var707 = standard___standard__NativeString___to_s_with_length(var705, var706);
var704 = var707;
varonce703 = var704;
}
if (varonce708) {
var709 = varonce708;
} else {
var710 = " + count_type_test_unresolved_";
var711 = 30;
var712 = standard___standard__NativeString___to_s_with_length(var710, var711);
var709 = var712;
varonce708 = var709;
}
if (varonce713) {
var714 = varonce713;
} else {
var715 = " + count_type_test_skipped_";
var716 = 27;
var717 = standard___standard__NativeString___to_s_with_length(var715, var716);
var714 = var717;
varonce713 = var714;
}
if (varonce718) {
var719 = varonce718;
} else {
var720 = ";";
var721 = 1;
var722 = standard___standard__NativeString___to_s_with_length(var720, var721);
var719 = var722;
varonce718 = var719;
}
var723 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var723 = array_instance Array[Object] */
var724 = 9;
var725 = NEW_standard__NativeArray(var724, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var725)->values[0] = (val*) var699;
((struct instance_standard__NativeArray*)var725)->values[1] = (val*) var_tag683;
((struct instance_standard__NativeArray*)var725)->values[2] = (val*) var704;
((struct instance_standard__NativeArray*)var725)->values[3] = (val*) var_tag683;
((struct instance_standard__NativeArray*)var725)->values[4] = (val*) var709;
((struct instance_standard__NativeArray*)var725)->values[5] = (val*) var_tag683;
((struct instance_standard__NativeArray*)var725)->values[6] = (val*) var714;
((struct instance_standard__NativeArray*)var725)->values[7] = (val*) var_tag683;
((struct instance_standard__NativeArray*)var725)->values[8] = (val*) var719;
{
((void (*)(val* self, val* p0, long p1))(var723->class->vft[COLOR_standard__array__Array__with_native]))(var723, var725, var724) /* with_native on <var723:Array[Object]>*/;
}
}
{
var726 = ((val* (*)(val* self))(var723->class->vft[COLOR_standard__string__Object__to_s]))(var723) /* to_s on <var723:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var726); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce727) {
var728 = varonce727;
} else {
var729 = "count_type_test_resolved_total += count_type_test_resolved_";
var730 = 59;
var731 = standard___standard__NativeString___to_s_with_length(var729, var730);
var728 = var731;
varonce727 = var728;
}
if (varonce732) {
var733 = varonce732;
} else {
var734 = ";";
var735 = 1;
var736 = standard___standard__NativeString___to_s_with_length(var734, var735);
var733 = var736;
varonce732 = var733;
}
var737 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var737 = array_instance Array[Object] */
var738 = 3;
var739 = NEW_standard__NativeArray(var738, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var739)->values[0] = (val*) var728;
((struct instance_standard__NativeArray*)var739)->values[1] = (val*) var_tag683;
((struct instance_standard__NativeArray*)var739)->values[2] = (val*) var733;
{
((void (*)(val* self, val* p0, long p1))(var737->class->vft[COLOR_standard__array__Array__with_native]))(var737, var739, var738) /* with_native on <var737:Array[Object]>*/;
}
}
{
var740 = ((val* (*)(val* self))(var737->class->vft[COLOR_standard__string__Object__to_s]))(var737) /* to_s on <var737:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var740); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce741) {
var742 = varonce741;
} else {
var743 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var744 = 63;
var745 = standard___standard__NativeString___to_s_with_length(var743, var744);
var742 = var745;
varonce741 = var742;
}
if (varonce746) {
var747 = varonce746;
} else {
var748 = ";";
var749 = 1;
var750 = standard___standard__NativeString___to_s_with_length(var748, var749);
var747 = var750;
varonce746 = var747;
}
var751 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var751 = array_instance Array[Object] */
var752 = 3;
var753 = NEW_standard__NativeArray(var752, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var753)->values[0] = (val*) var742;
((struct instance_standard__NativeArray*)var753)->values[1] = (val*) var_tag683;
((struct instance_standard__NativeArray*)var753)->values[2] = (val*) var747;
{
((void (*)(val* self, val* p0, long p1))(var751->class->vft[COLOR_standard__array__Array__with_native]))(var751, var753, var752) /* with_native on <var751:Array[Object]>*/;
}
}
{
var754 = ((val* (*)(val* self))(var751->class->vft[COLOR_standard__string__Object__to_s]))(var751) /* to_s on <var751:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var754); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce755) {
var756 = varonce755;
} else {
var757 = "count_type_test_skipped_total += count_type_test_skipped_";
var758 = 57;
var759 = standard___standard__NativeString___to_s_with_length(var757, var758);
var756 = var759;
varonce755 = var756;
}
if (varonce760) {
var761 = varonce760;
} else {
var762 = ";";
var763 = 1;
var764 = standard___standard__NativeString___to_s_with_length(var762, var763);
var761 = var764;
varonce760 = var761;
}
var765 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var765 = array_instance Array[Object] */
var766 = 3;
var767 = NEW_standard__NativeArray(var766, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var767)->values[0] = (val*) var756;
((struct instance_standard__NativeArray*)var767)->values[1] = (val*) var_tag683;
((struct instance_standard__NativeArray*)var767)->values[2] = (val*) var761;
{
((void (*)(val* self, val* p0, long p1))(var765->class->vft[COLOR_standard__array__Array__with_native]))(var765, var767, var766) /* with_native on <var765:Array[Object]>*/;
}
}
{
var768 = ((val* (*)(val* self))(var765->class->vft[COLOR_standard__string__Object__to_s]))(var765) /* to_s on <var765:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var768); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce769) {
var770 = varonce769;
} else {
var771 = "count_type_test_total_total += count_type_test_total_";
var772 = 53;
var773 = standard___standard__NativeString___to_s_with_length(var771, var772);
var770 = var773;
varonce769 = var770;
}
if (varonce774) {
var775 = varonce774;
} else {
var776 = ";";
var777 = 1;
var778 = standard___standard__NativeString___to_s_with_length(var776, var777);
var775 = var778;
varonce774 = var775;
}
var779 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var779 = array_instance Array[Object] */
var780 = 3;
var781 = NEW_standard__NativeArray(var780, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var781)->values[0] = (val*) var770;
((struct instance_standard__NativeArray*)var781)->values[1] = (val*) var_tag683;
((struct instance_standard__NativeArray*)var781)->values[2] = (val*) var775;
{
((void (*)(val* self, val* p0, long p1))(var779->class->vft[COLOR_standard__array__Array__with_native]))(var779, var781, var780) /* with_native on <var779:Array[Object]>*/;
}
}
{
var782 = ((val* (*)(val* self))(var779->class->vft[COLOR_standard__string__Object__to_s]))(var779) /* to_s on <var779:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var782); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_680); /* Direct call array#ArrayIterator#next on <var_680:ArrayIterator[String]>*/
}
} else {
goto BREAK_label783;
}
}
BREAK_label783: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_680) on <var_680:ArrayIterator[String]> */
RET_LABEL784:(void)0;
}
}
if (varonce785) {
var786 = varonce785;
} else {
var787 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var788 = 48;
var789 = standard___standard__NativeString___to_s_with_length(var787, var788);
var786 = var789;
varonce785 = var786;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var786); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce790) {
var791 = varonce790;
} else {
var792 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var793 = 51;
var794 = standard___standard__NativeString___to_s_with_length(var792, var793);
var791 = var794;
varonce790 = var791;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var791); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var797 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var797 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 963);
show_backtrace(1);
}
var795 = var797;
RET_LABEL796:(void)0;
}
}
{
var798 = standard__array___Collection___to_a(var795);
}
var_tags = var798;
if (varonce799) {
var800 = varonce799;
} else {
var801 = "total";
var802 = 5;
var803 = standard___standard__NativeString___to_s_with_length(var801, var802);
var800 = var803;
varonce799 = var800;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_tags, var800); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
var_804 = var_tags;
{
var805 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_804);
}
var_806 = var805;
for(;;) {
{
var807 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_806);
}
if (var807){
{
var808 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_806);
}
var_tag809 = var808;
if (varonce810) {
var811 = varonce810;
} else {
var812 = "printf(\"";
var813 = 8;
var814 = standard___standard__NativeString___to_s_with_length(var812, var813);
var811 = var814;
varonce810 = var811;
}
if (varonce815) {
var816 = varonce815;
} else {
var817 = "\");";
var818 = 3;
var819 = standard___standard__NativeString___to_s_with_length(var817, var818);
var816 = var819;
varonce815 = var816;
}
var820 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var820 = array_instance Array[Object] */
var821 = 3;
var822 = NEW_standard__NativeArray(var821, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var822)->values[0] = (val*) var811;
((struct instance_standard__NativeArray*)var822)->values[1] = (val*) var_tag809;
((struct instance_standard__NativeArray*)var822)->values[2] = (val*) var816;
{
((void (*)(val* self, val* p0, long p1))(var820->class->vft[COLOR_standard__array__Array__with_native]))(var820, var822, var821) /* with_native on <var820:Array[Object]>*/;
}
}
{
var823 = ((val* (*)(val* self))(var820->class->vft[COLOR_standard__string__Object__to_s]))(var820) /* to_s on <var820:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var823); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce824) {
var825 = varonce824;
} else {
var826 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var827 = 50;
var828 = standard___standard__NativeString___to_s_with_length(var826, var827);
var825 = var828;
varonce824 = var825;
}
if (varonce829) {
var830 = varonce829;
} else {
var831 = ", 100.0*count_type_test_resolved_";
var832 = 33;
var833 = standard___standard__NativeString___to_s_with_length(var831, var832);
var830 = var833;
varonce829 = var830;
}
if (varonce834) {
var835 = varonce834;
} else {
var836 = "/count_type_test_total_total);";
var837 = 30;
var838 = standard___standard__NativeString___to_s_with_length(var836, var837);
var835 = var838;
varonce834 = var835;
}
var839 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var839 = array_instance Array[Object] */
var840 = 5;
var841 = NEW_standard__NativeArray(var840, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var841)->values[0] = (val*) var825;
((struct instance_standard__NativeArray*)var841)->values[1] = (val*) var_tag809;
((struct instance_standard__NativeArray*)var841)->values[2] = (val*) var830;
((struct instance_standard__NativeArray*)var841)->values[3] = (val*) var_tag809;
((struct instance_standard__NativeArray*)var841)->values[4] = (val*) var835;
{
((void (*)(val* self, val* p0, long p1))(var839->class->vft[COLOR_standard__array__Array__with_native]))(var839, var841, var840) /* with_native on <var839:Array[Object]>*/;
}
}
{
var842 = ((val* (*)(val* self))(var839->class->vft[COLOR_standard__string__Object__to_s]))(var839) /* to_s on <var839:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var842); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce843) {
var844 = varonce843;
} else {
var845 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var846 = 52;
var847 = standard___standard__NativeString___to_s_with_length(var845, var846);
var844 = var847;
varonce843 = var844;
}
if (varonce848) {
var849 = varonce848;
} else {
var850 = ", 100.0*count_type_test_unresolved_";
var851 = 35;
var852 = standard___standard__NativeString___to_s_with_length(var850, var851);
var849 = var852;
varonce848 = var849;
}
if (varonce853) {
var854 = varonce853;
} else {
var855 = "/count_type_test_total_total);";
var856 = 30;
var857 = standard___standard__NativeString___to_s_with_length(var855, var856);
var854 = var857;
varonce853 = var854;
}
var858 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var858 = array_instance Array[Object] */
var859 = 5;
var860 = NEW_standard__NativeArray(var859, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var860)->values[0] = (val*) var844;
((struct instance_standard__NativeArray*)var860)->values[1] = (val*) var_tag809;
((struct instance_standard__NativeArray*)var860)->values[2] = (val*) var849;
((struct instance_standard__NativeArray*)var860)->values[3] = (val*) var_tag809;
((struct instance_standard__NativeArray*)var860)->values[4] = (val*) var854;
{
((void (*)(val* self, val* p0, long p1))(var858->class->vft[COLOR_standard__array__Array__with_native]))(var858, var860, var859) /* with_native on <var858:Array[Object]>*/;
}
}
{
var861 = ((val* (*)(val* self))(var858->class->vft[COLOR_standard__string__Object__to_s]))(var858) /* to_s on <var858:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var861); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce862) {
var863 = varonce862;
} else {
var864 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var865 = 49;
var866 = standard___standard__NativeString___to_s_with_length(var864, var865);
var863 = var866;
varonce862 = var863;
}
if (varonce867) {
var868 = varonce867;
} else {
var869 = ", 100.0*count_type_test_skipped_";
var870 = 32;
var871 = standard___standard__NativeString___to_s_with_length(var869, var870);
var868 = var871;
varonce867 = var868;
}
if (varonce872) {
var873 = varonce872;
} else {
var874 = "/count_type_test_total_total);";
var875 = 30;
var876 = standard___standard__NativeString___to_s_with_length(var874, var875);
var873 = var876;
varonce872 = var873;
}
var877 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var877 = array_instance Array[Object] */
var878 = 5;
var879 = NEW_standard__NativeArray(var878, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var879)->values[0] = (val*) var863;
((struct instance_standard__NativeArray*)var879)->values[1] = (val*) var_tag809;
((struct instance_standard__NativeArray*)var879)->values[2] = (val*) var868;
((struct instance_standard__NativeArray*)var879)->values[3] = (val*) var_tag809;
((struct instance_standard__NativeArray*)var879)->values[4] = (val*) var873;
{
((void (*)(val* self, val* p0, long p1))(var877->class->vft[COLOR_standard__array__Array__with_native]))(var877, var879, var878) /* with_native on <var877:Array[Object]>*/;
}
}
{
var880 = ((val* (*)(val* self))(var877->class->vft[COLOR_standard__string__Object__to_s]))(var877) /* to_s on <var877:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var880); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce881) {
var882 = varonce881;
} else {
var883 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var884 = 49;
var885 = standard___standard__NativeString___to_s_with_length(var883, var884);
var882 = var885;
varonce881 = var882;
}
if (varonce886) {
var887 = varonce886;
} else {
var888 = ", 100.0*count_type_test_total_";
var889 = 30;
var890 = standard___standard__NativeString___to_s_with_length(var888, var889);
var887 = var890;
varonce886 = var887;
}
if (varonce891) {
var892 = varonce891;
} else {
var893 = "/count_type_test_total_total);";
var894 = 30;
var895 = standard___standard__NativeString___to_s_with_length(var893, var894);
var892 = var895;
varonce891 = var892;
}
var896 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var896 = array_instance Array[Object] */
var897 = 5;
var898 = NEW_standard__NativeArray(var897, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var898)->values[0] = (val*) var882;
((struct instance_standard__NativeArray*)var898)->values[1] = (val*) var_tag809;
((struct instance_standard__NativeArray*)var898)->values[2] = (val*) var887;
((struct instance_standard__NativeArray*)var898)->values[3] = (val*) var_tag809;
((struct instance_standard__NativeArray*)var898)->values[4] = (val*) var892;
{
((void (*)(val* self, val* p0, long p1))(var896->class->vft[COLOR_standard__array__Array__with_native]))(var896, var898, var897) /* with_native on <var896:Array[Object]>*/;
}
}
{
var899 = ((val* (*)(val* self))(var896->class->vft[COLOR_standard__string__Object__to_s]))(var896) /* to_s on <var896:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var899); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_806); /* Direct call array#ArrayIterator#next on <var_806:ArrayIterator[String]>*/
}
} else {
goto BREAK_label900;
}
}
BREAK_label900: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_806) on <var_806:ArrayIterator[String]> */
RET_LABEL901:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var904 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var904 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var902 = var904;
RET_LABEL903:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var902) on <var902:ModelBuilder> */
var907 = var902->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var902:ModelBuilder> */
if (unlikely(var907 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var905 = var907;
RET_LABEL906:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var905) on <var905:ToolContext> */
var910 = var905->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var905:ToolContext> */
if (unlikely(var910 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 61);
show_backtrace(1);
}
var908 = var910;
RET_LABEL909:(void)0;
}
}
{
{ /* Inline opts#Option#value (var908) on <var908:OptionBool> */
var913 = var908->attrs[COLOR_opts__Option___value].val; /* _value on <var908:OptionBool> */
var911 = var913;
RET_LABEL912:(void)0;
}
}
var914 = ((struct instance_standard__Bool*)var911)->value; /* autounbox from nullable Object to Bool */;
if (var914){
if (varonce915) {
var916 = varonce915;
} else {
var917 = "long count_invoke_total;";
var918 = 24;
var919 = standard___standard__NativeString___to_s_with_length(var917, var918);
var916 = var919;
varonce915 = var916;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var916); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce920) {
var921 = varonce920;
} else {
var922 = "count_invoke_total = count_invoke_by_tables + count_invoke_by_direct + count_invoke_by_inline;";
var923 = 94;
var924 = standard___standard__NativeString___to_s_with_length(var922, var923);
var921 = var924;
varonce920 = var921;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var921); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce925) {
var926 = varonce925;
} else {
var927 = "printf(\"# dynamic count_invocation: total %ld\\n\", count_invoke_total);";
var928 = 70;
var929 = standard___standard__NativeString___to_s_with_length(var927, var928);
var926 = var929;
varonce925 = var926;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var926); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce930) {
var931 = varonce930;
} else {
var932 = "printf(\"by table: %ld (%.2f%%)\\n\", count_invoke_by_tables, 100.0*count_invoke_by_tables/count_invoke_total);";
var933 = 108;
var934 = standard___standard__NativeString___to_s_with_length(var932, var933);
var931 = var934;
varonce930 = var931;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var931); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce935) {
var936 = varonce935;
} else {
var937 = "printf(\"direct:   %ld (%.2f%%)\\n\", count_invoke_by_direct, 100.0*count_invoke_by_direct/count_invoke_total);";
var938 = 108;
var939 = standard___standard__NativeString___to_s_with_length(var937, var938);
var936 = var939;
varonce935 = var936;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var936); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce940) {
var941 = varonce940;
} else {
var942 = "printf(\"inlined:  %ld (%.2f%%)\\n\", count_invoke_by_inline, 100.0*count_invoke_by_inline/count_invoke_total);";
var943 = 108;
var944 = standard___standard__NativeString___to_s_with_length(var942, var943);
var941 = var944;
varonce940 = var941;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var941); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var947 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var947 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var945 = var947;
RET_LABEL946:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var945) on <var945:ModelBuilder> */
var950 = var945->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var945:ModelBuilder> */
if (unlikely(var950 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var948 = var950;
RET_LABEL949:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var948) on <var948:ToolContext> */
var953 = var948->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var948:ToolContext> */
if (unlikely(var953 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 63);
show_backtrace(1);
}
var951 = var953;
RET_LABEL952:(void)0;
}
}
{
{ /* Inline opts#Option#value (var951) on <var951:OptionBool> */
var956 = var951->attrs[COLOR_opts__Option___value].val; /* _value on <var951:OptionBool> */
var954 = var956;
RET_LABEL955:(void)0;
}
}
var957 = ((struct instance_standard__Bool*)var954)->value; /* autounbox from nullable Object to Bool */;
if (var957){
if (varonce958) {
var959 = varonce958;
} else {
var960 = "printf(\"# dynamic attribute reads: %ld\\n\", count_attr_reads);";
var961 = 61;
var962 = standard___standard__NativeString___to_s_with_length(var960, var961);
var959 = var962;
varonce958 = var959;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var959); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce963) {
var964 = varonce963;
} else {
var965 = "printf(\"# dynamic isset checks: %ld\\n\", count_isset_checks);";
var966 = 60;
var967 = standard___standard__NativeString___to_s_with_length(var965, var966);
var964 = var967;
varonce963 = var964;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var964); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce968) {
var969 = varonce968;
} else {
var970 = "return 0;";
var971 = 9;
var972 = standard___standard__NativeString___to_s_with_length(var970, var971);
var969 = var972;
varonce968 = var969;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var969); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce973) {
var974 = varonce973;
} else {
var975 = "}";
var976 = 1;
var977 = standard___standard__NativeString___to_s_with_length(var975, var976);
var974 = var977;
varonce973 = var974;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var974); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var980 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var980 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var978 = var980;
RET_LABEL979:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var978) on <var978:MModule> */
var983 = var978->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var978:MModule> */
if (unlikely(var983 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var981 = var983;
RET_LABEL982:(void)0;
}
}
{
var984 = poset___poset__POSetElement___greaters(var981);
}
var_985 = var984;
{
var986 = ((val* (*)(val* self))(var_985->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_985) /* iterator on <var_985:Collection[MModule]>*/;
}
var_987 = var986;
for(;;) {
{
var988 = ((short int (*)(val* self))(var_987->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_987) /* is_ok on <var_987:Iterator[MModule]>*/;
}
if (var988){
{
var989 = ((val* (*)(val* self))(var_987->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_987) /* item on <var_987:Iterator[MModule]>*/;
}
var_m = var989;
if (varonce990) {
var991 = varonce990;
} else {
var992 = "FILE_";
var993 = 5;
var994 = standard___standard__NativeString___to_s_with_length(var992, var993);
var991 = var994;
varonce990 = var991;
}
{
var995 = nit___nit__MModule___nit__model_base__MEntity__c_name(var_m);
}
{
var996 = ((val* (*)(val* self, val* p0))(var991->class->vft[COLOR_standard__string__String___43d]))(var991, var995) /* + on <var991:String>*/;
}
var_f = var996;
if (varonce997) {
var998 = varonce997;
} else {
var999 = "const char ";
var1000 = 11;
var1001 = standard___standard__NativeString___to_s_with_length(var999, var1000);
var998 = var1001;
varonce997 = var998;
}
if (varonce1002) {
var1003 = varonce1002;
} else {
var1004 = "[] = \"";
var1005 = 6;
var1006 = standard___standard__NativeString___to_s_with_length(var1004, var1005);
var1003 = var1006;
varonce1002 = var1003;
}
{
{ /* Inline mmodule#MModule#location (var_m) on <var_m:MModule> */
var1009 = var_m->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <var_m:MModule> */
if (unlikely(var1009 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
show_backtrace(1);
}
var1007 = var1009;
RET_LABEL1008:(void)0;
}
}
{
{ /* Inline location#Location#file (var1007) on <var1007:Location> */
var1012 = var1007->attrs[COLOR_nit__location__Location___file].val; /* _file on <var1007:Location> */
var1010 = var1012;
RET_LABEL1011:(void)0;
}
}
if (var1010 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 862);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var1010) on <var1010:nullable SourceFile> */
if (unlikely(var1010 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var1015 = var1010->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var1010:nullable SourceFile> */
if (unlikely(var1015 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var1013 = var1015;
RET_LABEL1014:(void)0;
}
}
{
var1016 = standard___standard__Text___escape_to_c(var1013);
}
if (varonce1017) {
var1018 = varonce1017;
} else {
var1019 = "\";";
var1020 = 2;
var1021 = standard___standard__NativeString___to_s_with_length(var1019, var1020);
var1018 = var1021;
varonce1017 = var1018;
}
var1022 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1022 = array_instance Array[Object] */
var1023 = 5;
var1024 = NEW_standard__NativeArray(var1023, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1024)->values[0] = (val*) var998;
((struct instance_standard__NativeArray*)var1024)->values[1] = (val*) var_f;
((struct instance_standard__NativeArray*)var1024)->values[2] = (val*) var1003;
((struct instance_standard__NativeArray*)var1024)->values[3] = (val*) var1016;
((struct instance_standard__NativeArray*)var1024)->values[4] = (val*) var1018;
{
((void (*)(val* self, val* p0, long p1))(var1022->class->vft[COLOR_standard__array__Array__with_native]))(var1022, var1024, var1023) /* with_native on <var1022:Array[Object]>*/;
}
}
{
var1025 = ((val* (*)(val* self))(var1022->class->vft[COLOR_standard__string__Object__to_s]))(var1022) /* to_s on <var1022:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1025); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce1026) {
var1027 = varonce1026;
} else {
var1028 = "extern const char ";
var1029 = 18;
var1030 = standard___standard__NativeString___to_s_with_length(var1028, var1029);
var1027 = var1030;
varonce1026 = var1027;
}
if (varonce1031) {
var1032 = varonce1031;
} else {
var1033 = "[];";
var1034 = 3;
var1035 = standard___standard__NativeString___to_s_with_length(var1033, var1034);
var1032 = var1035;
varonce1031 = var1032;
}
var1036 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var1036 = array_instance Array[Object] */
var1037 = 3;
var1038 = NEW_standard__NativeArray(var1037, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var1038)->values[0] = (val*) var1027;
((struct instance_standard__NativeArray*)var1038)->values[1] = (val*) var_f;
((struct instance_standard__NativeArray*)var1038)->values[2] = (val*) var1032;
{
((void (*)(val* self, val* p0, long p1))(var1036->class->vft[COLOR_standard__array__Array__with_native]))(var1036, var1038, var1037) /* with_native on <var1036:Array[Object]>*/;
}
}
{
var1039 = ((val* (*)(val* self))(var1036->class->vft[COLOR_standard__string__Object__to_s]))(var1036) /* to_s on <var1036:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(self, var_f, var1039); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:AbstractCompiler>*/
}
{
((void (*)(val* self))(var_987->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_987) /* next on <var_987:Iterator[MModule]>*/;
}
} else {
goto BREAK_label1040;
}
}
BREAK_label1040: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_987) on <var_987:Iterator[MModule]> */
RET_LABEL1041:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions for (self: AbstractCompiler) */
void nit___nit__AbstractCompiler___compile_nitni_global_ref_functions(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
{
var = ((val* (*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:AbstractCompiler>*/;
}
var_v = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "struct nitni_global_ref_list_t *nitni_global_ref_list;\nvoid initialize_nitni_global_refs() {\n\11nitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));\n\11nitni_global_ref_list->head = NULL;\n\11nitni_global_ref_list->tail = NULL;\n}\n\nvoid nitni_global_ref_add( struct nitni_ref *ref ) {\n\11if ( nitni_global_ref_list->head == NULL ) {\n\11\11nitni_global_ref_list->head = ref;\n\11\11ref->prev = NULL;\n\11} else {\n\11\11nitni_global_ref_list->tail->next = ref;\n\11\11ref->prev = nitni_global_ref_list->tail;\n\11}\n\11nitni_global_ref_list->tail = ref;\n\n\11ref->next = NULL;\n}\n\nvoid nitni_global_ref_remove( struct nitni_ref *ref ) {\n\11if ( ref->prev == NULL ) {\n\11\11nitni_global_ref_list->head = ref->next;\n\11} else {\n\11\11ref->prev->next = ref->next;\n\11}\n\n\11if ( ref->next == NULL ) {\n\11\11nitni_global_ref_list->tail = ref->prev;\n\11} else {\n\11\11ref->next->prev = ref->prev;\n\11}\n}\n\nextern void nitni_global_ref_incr( struct nitni_ref *ref ) {\n\11if ( ref->count == 0 ) /* not registered */\n\11{\n\11\11/* add to list */\n\11\11nitni_global_ref_add( ref );\n\11}\n\n\11ref->count ++;\n}\n\nextern void nitni_global_ref_decr( struct nitni_ref *ref ) {\n\11if ( ref->count == 1 ) /* was last reference */\n\11{\n\11\11/* remove from list */\n\11\11nitni_global_ref_remove( ref );\n\11}\n\n\11ref->count --;\n}\n";
var3 = 1260;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies for (self: AbstractCompiler): Array[ExternFile] */
val* nit___nit__AbstractCompiler___extern_bodies(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 928);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files_to_copy for (self: AbstractCompiler): Array[String] */
val* nit___nit__AbstractCompiler___files_to_copy(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 931);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#seen_extern for (self: AbstractCompiler): ArraySet[String] */
val* nit___nit__AbstractCompiler___seen_extern(val* self) {
val* var /* : ArraySet[String] */;
val* var1 /* : ArraySet[String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 934);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#generate_init_attr for (self: AbstractCompiler, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void nit___nit__AbstractCompiler___generate_init_attr(val* self, val* p0, val* p1, val* p2) {
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
val* var16 /* : Array[AAttrPropdef] */;
val* var_17 /* var : Array[AAttrPropdef] */;
val* var18 /* : ArrayIterator[nullable Object] */;
val* var_19 /* var : ArrayIterator[AAttrPropdef] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_npropdef /* var npropdef: AAttrPropdef */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 937);
show_backtrace(1);
}
var_v = p0;
var_recv = p1;
var_mtype = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__MClassType___MType__collect_mclassdefs(var_mtype, var1);
}
{
var5 = standard__array___Collection___to_a(var4);
}
var_cds = var5;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var8 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nit__model___MModule___linearize_mclassdefs(var6, var_cds); /* Direct call model#MModule#linearize_mclassdefs on <var6:MModule>*/
}
var_ = var_cds;
{
var9 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_10);
}
if (var11){
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_10);
}
var_cd = var12;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var15 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit__modelize_property___ModelBuilder___collect_attr_propdef(var13, var_cd);
}
var_17 = var16;
{
var18 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_17);
}
var_19 = var18;
for(;;) {
{
var20 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_19);
}
if (var20){
{
var21 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_19);
}
var_npropdef = var21;
{
nit__abstract_compiler___AAttrPropdef___init_expr(var_npropdef, var_v, var_recv); /* Direct call abstract_compiler#AAttrPropdef#init_expr on <var_npropdef:AAttrPropdef>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_19); /* Direct call array#ArrayIterator#next on <var_19:ArrayIterator[AAttrPropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_19) on <var_19:ArrayIterator[AAttrPropdef]> */
RET_LABEL22:(void)0;
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_10); /* Direct call array#ArrayIterator#next on <var_10:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label23;
}
}
BREAK_label23: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_10) on <var_10:ArrayIterator[MClassDef]> */
RET_LABEL24:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_tags for (self: AbstractCompiler): Array[String] */
val* nit___nit__AbstractCompiler___count_type_test_tags(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 963);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_resolved for (self: AbstractCompiler): HashMap[String, Int] */
val* nit___nit__AbstractCompiler___count_type_test_resolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 964);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_unresolved for (self: AbstractCompiler): HashMap[String, Int] */
val* nit___nit__AbstractCompiler___count_type_test_unresolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 965);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_skipped for (self: AbstractCompiler): HashMap[String, Int] */
val* nit___nit__AbstractCompiler___count_type_test_skipped(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 966);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#init_count_type_test_tags for (self: AbstractCompiler): HashMap[String, Int] */
val* nit___nit__AbstractCompiler___init_count_type_test_tags(val* self) {
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
var1 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__standard__Int);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[String, Int]>*/
}
var_res = var1;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var4 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 963);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_6);
}
if (var7){
{
var8 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_6);
}
var_tag = var8;
var9 = 0;
{
var10 = BOX_standard__Int(var9); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_res, var_tag, var10); /* Direct call hash_collection#HashMap#[]= on <var_res:HashMap[String, Int]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[String]>*/
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
/* method abstract_compiler#AbstractCompiler#display_stats for (self: AbstractCompiler) */
void nit___nit__AbstractCompiler___display_stats(val* self) {
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
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
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
var12 = ((struct instance_standard__Bool*)var9)->value; /* autounbox from nullable Object to Bool */;
if (var12){
if (varonce) {
var13 = varonce;
} else {
var14 = "# static count_type_test";
var15 = 24;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
{
standard__file___Object___print(self, var13); /* Direct call file#Object#print on <self:AbstractCompiler>*/
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "\11resolved:\11unresolved\11skipped\11total";
var20 = 35;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
standard__file___Object___print(self, var18); /* Direct call file#Object#print on <self:AbstractCompiler>*/
}
{
var22 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
var_count_type_test_total = var22;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 964);
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
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = 0;
{
var32 = BOX_standard__Int(var31); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var23, var27, var32); /* Direct call hash_collection#HashMap#[]= on <var23:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var35 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 965);
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
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = 0;
{
var42 = BOX_standard__Int(var41); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var33, var37, var42); /* Direct call hash_collection#HashMap#[]= on <var33:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var45 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 966);
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
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = 0;
{
var52 = BOX_standard__Int(var51); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var43, var47, var52); /* Direct call hash_collection#HashMap#[]= on <var43:HashMap[String, Int]>*/
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "total";
var56 = 5;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = 0;
{
var59 = BOX_standard__Int(var58); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var54, var59); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var62 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 963);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var_ = var60;
{
var63 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_64 = var63;
for(;;) {
{
var65 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_64);
}
if (var65){
{
var66 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_64);
}
var_tag = var66;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var69 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 964);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var67, var_tag);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var73 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 965);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var71, var_tag);
}
{
{ /* Inline kernel#Int#+ (var70,var74) on <var70:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var74:nullable Object(Int)> isa OTHER */
/* <var74:nullable Object(Int)> isa OTHER */
var77 = 1; /* easy <var74:nullable Object(Int)> isa OTHER*/
if (unlikely(!var77)) {
var_class_name = var74 == NULL ? "null" : var74->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var78 = ((struct instance_standard__Int*)var70)->value; /* autounbox from nullable Object to Int */;
var79 = ((struct instance_standard__Int*)var74)->value; /* autounbox from nullable Object to Int */;
var80 = var78 + var79;
var75 = var80;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var83 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 966);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var81, var_tag);
}
{
{ /* Inline kernel#Int#+ (var75,var84) on <var75:Int> */
/* Covariant cast for argument 0 (i) <var84:nullable Object(Int)> isa OTHER */
/* <var84:nullable Object(Int)> isa OTHER */
var87 = 1; /* easy <var84:nullable Object(Int)> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = var84 == NULL ? "null" : var84->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var91 = ((struct instance_standard__Int*)var84)->value; /* autounbox from nullable Object to Int */;
var92 = var75 + var91;
var85 = var92;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
{
var93 = BOX_standard__Int(var85); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var_tag, var93); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var96 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 964);
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
var102 = standard___standard__NativeString___to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
var_103 = var99;
{
var104 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_97, var_103);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var107 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 964);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var105, var_tag);
}
{
{ /* Inline kernel#Int#+ (var104,var108) on <var104:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var108:nullable Object(Int)> isa OTHER */
/* <var108:nullable Object(Int)> isa OTHER */
var111 = 1; /* easy <var108:nullable Object(Int)> isa OTHER*/
if (unlikely(!var111)) {
var_class_name114 = var108 == NULL ? "null" : var108->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name114);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var115 = ((struct instance_standard__Int*)var104)->value; /* autounbox from nullable Object to Int */;
var116 = ((struct instance_standard__Int*)var108)->value; /* autounbox from nullable Object to Int */;
var117 = var115 + var116;
var109 = var117;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
{
var118 = BOX_standard__Int(var109); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_97, var_103, var118); /* Direct call hash_collection#HashMap#[]= on <var_97:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var121 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 965);
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
var127 = standard___standard__NativeString___to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var_128 = var124;
{
var129 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_122, var_128);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var132 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 965);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
var133 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var130, var_tag);
}
{
{ /* Inline kernel#Int#+ (var129,var133) on <var129:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var133:nullable Object(Int)> isa OTHER */
/* <var133:nullable Object(Int)> isa OTHER */
var136 = 1; /* easy <var133:nullable Object(Int)> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = var133 == NULL ? "null" : var133->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var140 = ((struct instance_standard__Int*)var129)->value; /* autounbox from nullable Object to Int */;
var141 = ((struct instance_standard__Int*)var133)->value; /* autounbox from nullable Object to Int */;
var142 = var140 + var141;
var134 = var142;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
{
var143 = BOX_standard__Int(var134); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_122, var_128, var143); /* Direct call hash_collection#HashMap#[]= on <var_122:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var146 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 966);
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
var152 = standard___standard__NativeString___to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
var_153 = var149;
{
var154 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_147, var_153);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var157 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 966);
show_backtrace(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
var158 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var155, var_tag);
}
{
{ /* Inline kernel#Int#+ (var154,var158) on <var154:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var158:nullable Object(Int)> isa OTHER */
/* <var158:nullable Object(Int)> isa OTHER */
var161 = 1; /* easy <var158:nullable Object(Int)> isa OTHER*/
if (unlikely(!var161)) {
var_class_name164 = var158 == NULL ? "null" : var158->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name164);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var165 = ((struct instance_standard__Int*)var154)->value; /* autounbox from nullable Object to Int */;
var166 = ((struct instance_standard__Int*)var158)->value; /* autounbox from nullable Object to Int */;
var167 = var165 + var166;
var159 = var167;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
{
var168 = BOX_standard__Int(var159); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_147, var_153, var168); /* Direct call hash_collection#HashMap#[]= on <var_147:HashMap[String, Int]>*/
}
var_169 = var_count_type_test_total;
if (varonce170) {
var171 = varonce170;
} else {
var172 = "total";
var173 = 5;
var174 = standard___standard__NativeString___to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
var_175 = var171;
{
var176 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_169, var_175);
}
{
var177 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag);
}
{
{ /* Inline kernel#Int#+ (var176,var177) on <var176:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var177:nullable Object(Int)> isa OTHER */
/* <var177:nullable Object(Int)> isa OTHER */
var180 = 1; /* easy <var177:nullable Object(Int)> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = var177 == NULL ? "null" : var177->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var184 = ((struct instance_standard__Int*)var176)->value; /* autounbox from nullable Object to Int */;
var185 = ((struct instance_standard__Int*)var177)->value; /* autounbox from nullable Object to Int */;
var186 = var184 + var185;
var178 = var186;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
{
var187 = BOX_standard__Int(var178); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_169, var_175, var187); /* Direct call hash_collection#HashMap#[]= on <var_169:HashMap[String, Int]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_64); /* Direct call array#ArrayIterator#next on <var_64:ArrayIterator[String]>*/
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
var193 = standard___standard__NativeString___to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
{
var194 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var190);
}
var195 = ((struct instance_standard__Int*)var194)->value; /* autounbox from nullable Object to Int */;
var_count_type_test = var195;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var198 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 963);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
{
var199 = standard__array___Collection___to_a(var196);
}
var_tags = var199;
if (varonce200) {
var201 = varonce200;
} else {
var202 = "total";
var203 = 5;
var204 = standard___standard__NativeString___to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_tags, var201); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
var_205 = var_tags;
{
var206 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_205);
}
var_207 = var206;
for(;;) {
{
var208 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_207);
}
if (var208){
{
var209 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_207);
}
var_tag210 = var209;
var211 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var211 = array_instance Array[Object] */
var212 = 1;
var213 = NEW_standard__NativeArray(var212, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var213)->values[0] = (val*) var_tag210;
{
((void (*)(val* self, val* p0, long p1))(var211->class->vft[COLOR_standard__array__Array__with_native]))(var211, var213, var212) /* with_native on <var211:Array[Object]>*/;
}
}
{
standard__file___Object___printn(self, var211); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce214) {
var215 = varonce214;
} else {
var216 = "\11";
var217 = 1;
var218 = standard___standard__NativeString___to_s_with_length(var216, var217);
var215 = var218;
varonce214 = var215;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var221 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 964);
show_backtrace(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var219, var_tag210);
}
if (varonce223) {
var224 = varonce223;
} else {
var225 = " (";
var226 = 2;
var227 = standard___standard__NativeString___to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var230 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var230 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 964);
show_backtrace(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
var231 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var228, var_tag210);
}
{
var233 = ((struct instance_standard__Int*)var231)->value; /* autounbox from nullable Object to Int */;
var232 = nit___nit__AbstractCompiler___div(self, var233, var_count_type_test);
}
if (varonce234) {
var235 = varonce234;
} else {
var236 = "%)";
var237 = 2;
var238 = standard___standard__NativeString___to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
var239 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var239 = array_instance Array[Object] */
var240 = 5;
var241 = NEW_standard__NativeArray(var240, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var241)->values[0] = (val*) var215;
((struct instance_standard__NativeArray*)var241)->values[1] = (val*) var222;
((struct instance_standard__NativeArray*)var241)->values[2] = (val*) var224;
((struct instance_standard__NativeArray*)var241)->values[3] = (val*) var232;
((struct instance_standard__NativeArray*)var241)->values[4] = (val*) var235;
{
((void (*)(val* self, val* p0, long p1))(var239->class->vft[COLOR_standard__array__Array__with_native]))(var239, var241, var240) /* with_native on <var239:Array[Object]>*/;
}
}
{
var242 = ((val* (*)(val* self))(var239->class->vft[COLOR_standard__string__Object__to_s]))(var239) /* to_s on <var239:Array[Object]>*/;
}
var243 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var243 = array_instance Array[Object] */
var244 = 1;
var245 = NEW_standard__NativeArray(var244, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var245)->values[0] = (val*) var242;
{
((void (*)(val* self, val* p0, long p1))(var243->class->vft[COLOR_standard__array__Array__with_native]))(var243, var245, var244) /* with_native on <var243:Array[Object]>*/;
}
}
{
standard__file___Object___printn(self, var243); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce246) {
var247 = varonce246;
} else {
var248 = "\11";
var249 = 1;
var250 = standard___standard__NativeString___to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var253 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 965);
show_backtrace(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
var254 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var251, var_tag210);
}
if (varonce255) {
var256 = varonce255;
} else {
var257 = " (";
var258 = 2;
var259 = standard___standard__NativeString___to_s_with_length(var257, var258);
var256 = var259;
varonce255 = var256;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var262 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 965);
show_backtrace(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
var263 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var260, var_tag210);
}
{
var265 = ((struct instance_standard__Int*)var263)->value; /* autounbox from nullable Object to Int */;
var264 = nit___nit__AbstractCompiler___div(self, var265, var_count_type_test);
}
if (varonce266) {
var267 = varonce266;
} else {
var268 = "%)";
var269 = 2;
var270 = standard___standard__NativeString___to_s_with_length(var268, var269);
var267 = var270;
varonce266 = var267;
}
var271 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var271 = array_instance Array[Object] */
var272 = 5;
var273 = NEW_standard__NativeArray(var272, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var273)->values[0] = (val*) var247;
((struct instance_standard__NativeArray*)var273)->values[1] = (val*) var254;
((struct instance_standard__NativeArray*)var273)->values[2] = (val*) var256;
((struct instance_standard__NativeArray*)var273)->values[3] = (val*) var264;
((struct instance_standard__NativeArray*)var273)->values[4] = (val*) var267;
{
((void (*)(val* self, val* p0, long p1))(var271->class->vft[COLOR_standard__array__Array__with_native]))(var271, var273, var272) /* with_native on <var271:Array[Object]>*/;
}
}
{
var274 = ((val* (*)(val* self))(var271->class->vft[COLOR_standard__string__Object__to_s]))(var271) /* to_s on <var271:Array[Object]>*/;
}
var275 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var275 = array_instance Array[Object] */
var276 = 1;
var277 = NEW_standard__NativeArray(var276, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var277)->values[0] = (val*) var274;
{
((void (*)(val* self, val* p0, long p1))(var275->class->vft[COLOR_standard__array__Array__with_native]))(var275, var277, var276) /* with_native on <var275:Array[Object]>*/;
}
}
{
standard__file___Object___printn(self, var275); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce278) {
var279 = varonce278;
} else {
var280 = "\11";
var281 = 1;
var282 = standard___standard__NativeString___to_s_with_length(var280, var281);
var279 = var282;
varonce278 = var279;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var285 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 966);
show_backtrace(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
var286 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var283, var_tag210);
}
if (varonce287) {
var288 = varonce287;
} else {
var289 = " (";
var290 = 2;
var291 = standard___standard__NativeString___to_s_with_length(var289, var290);
var288 = var291;
varonce287 = var288;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var294 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var294 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 966);
show_backtrace(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
{
var295 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var292, var_tag210);
}
{
var297 = ((struct instance_standard__Int*)var295)->value; /* autounbox from nullable Object to Int */;
var296 = nit___nit__AbstractCompiler___div(self, var297, var_count_type_test);
}
if (varonce298) {
var299 = varonce298;
} else {
var300 = "%)";
var301 = 2;
var302 = standard___standard__NativeString___to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
var303 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var303 = array_instance Array[Object] */
var304 = 5;
var305 = NEW_standard__NativeArray(var304, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var305)->values[0] = (val*) var279;
((struct instance_standard__NativeArray*)var305)->values[1] = (val*) var286;
((struct instance_standard__NativeArray*)var305)->values[2] = (val*) var288;
((struct instance_standard__NativeArray*)var305)->values[3] = (val*) var296;
((struct instance_standard__NativeArray*)var305)->values[4] = (val*) var299;
{
((void (*)(val* self, val* p0, long p1))(var303->class->vft[COLOR_standard__array__Array__with_native]))(var303, var305, var304) /* with_native on <var303:Array[Object]>*/;
}
}
{
var306 = ((val* (*)(val* self))(var303->class->vft[COLOR_standard__string__Object__to_s]))(var303) /* to_s on <var303:Array[Object]>*/;
}
var307 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var307 = array_instance Array[Object] */
var308 = 1;
var309 = NEW_standard__NativeArray(var308, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var309)->values[0] = (val*) var306;
{
((void (*)(val* self, val* p0, long p1))(var307->class->vft[COLOR_standard__array__Array__with_native]))(var307, var309, var308) /* with_native on <var307:Array[Object]>*/;
}
}
{
standard__file___Object___printn(self, var307); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce310) {
var311 = varonce310;
} else {
var312 = "\11";
var313 = 1;
var314 = standard___standard__NativeString___to_s_with_length(var312, var313);
var311 = var314;
varonce310 = var311;
}
{
var315 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag210);
}
if (varonce316) {
var317 = varonce316;
} else {
var318 = " (";
var319 = 2;
var320 = standard___standard__NativeString___to_s_with_length(var318, var319);
var317 = var320;
varonce316 = var317;
}
{
var321 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag210);
}
{
var323 = ((struct instance_standard__Int*)var321)->value; /* autounbox from nullable Object to Int */;
var322 = nit___nit__AbstractCompiler___div(self, var323, var_count_type_test);
}
if (varonce324) {
var325 = varonce324;
} else {
var326 = "%)";
var327 = 2;
var328 = standard___standard__NativeString___to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
var329 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var329 = array_instance Array[Object] */
var330 = 5;
var331 = NEW_standard__NativeArray(var330, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var331)->values[0] = (val*) var311;
((struct instance_standard__NativeArray*)var331)->values[1] = (val*) var315;
((struct instance_standard__NativeArray*)var331)->values[2] = (val*) var317;
((struct instance_standard__NativeArray*)var331)->values[3] = (val*) var322;
((struct instance_standard__NativeArray*)var331)->values[4] = (val*) var325;
{
((void (*)(val* self, val* p0, long p1))(var329->class->vft[COLOR_standard__array__Array__with_native]))(var329, var331, var330) /* with_native on <var329:Array[Object]>*/;
}
}
{
var332 = ((val* (*)(val* self))(var329->class->vft[COLOR_standard__string__Object__to_s]))(var329) /* to_s on <var329:Array[Object]>*/;
}
var333 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var333 = array_instance Array[Object] */
var334 = 1;
var335 = NEW_standard__NativeArray(var334, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var335)->values[0] = (val*) var332;
{
((void (*)(val* self, val* p0, long p1))(var333->class->vft[COLOR_standard__array__Array__with_native]))(var333, var335, var334) /* with_native on <var333:Array[Object]>*/;
}
}
{
standard__file___Object___printn(self, var333); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce336) {
var337 = varonce336;
} else {
var338 = "";
var339 = 0;
var340 = standard___standard__NativeString___to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
{
standard__file___Object___print(self, var337); /* Direct call file#Object#print on <self:AbstractCompiler>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_207); /* Direct call array#ArrayIterator#next on <var_207:ArrayIterator[String]>*/
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
/* method abstract_compiler#AbstractCompiler#finalize_ffi_for_module for (self: AbstractCompiler, MModule) */
void nit___nit__AbstractCompiler___finalize_ffi_for_module(val* self, val* p0) {
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
/* method abstract_compiler#AbstractCompiler#div for (self: AbstractCompiler, Int, Int): String */
val* nit___nit__AbstractCompiler___div(val* self, long p0, long p1) {
val* var /* : String */;
long var_a /* var a: Int */;
long var_b /* var b: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
double var21 /* : Float */;
double var23 /* : Float */;
double var24 /* : Float */;
double var25 /* : Float */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
double var31 /* : Float */;
long var32 /* : Int */;
val* var33 /* : String */;
var_a = p0;
var_b = p1;
var1 = 0;
{
{ /* Inline kernel#Int#== (var_b,var1) on <var_b:Int> */
var4 = var_b == var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
if (varonce) {
var5 = varonce;
} else {
var6 = "n/a";
var7 = 3;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var = var5;
goto RET_LABEL;
} else {
}
var9 = 10000;
{
{ /* Inline kernel#Int#* (var_a,var9) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 417);
show_backtrace(1);
}
var13 = var_a * var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var10,var_b) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_b:Int> isa OTHER */
/* <var_b:Int> isa OTHER */
var16 = 1; /* easy <var_b:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 418);
show_backtrace(1);
}
var20 = var10 / var_b;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#to_f (var14) on <var14:Int> */
var23 = (double)var14;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var24 = 100.0;
{
{ /* Inline kernel#Float#/ (var21,var24) on <var21:Float> */
/* Covariant cast for argument 0 (i) <var24:Float> isa OTHER */
/* <var24:Float> isa OTHER */
var27 = 1; /* easy <var24:Float> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 330);
show_backtrace(1);
}
var31 = var21 / var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var32 = 2;
{
var33 = standard__string___Float___to_precision(var25, var32);
}
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#name for (self: CodeFile): String */
val* nit___nit__CodeFile___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val; /* _name on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1030);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#name= for (self: CodeFile, String) */
void nit___nit__CodeFile___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val = p0; /* _name on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#writers for (self: CodeFile): Array[CodeWriter] */
val* nit___nit__CodeFile___writers(val* self) {
val* var /* : Array[CodeWriter] */;
val* var1 /* : Array[CodeWriter] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__CodeFile___writers].val; /* _writers on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1031);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#required_declarations for (self: CodeFile): HashSet[String] */
val* nit___nit__CodeFile___required_declarations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1032);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#init for (self: CodeFile) */
void nit___nit__CodeFile___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__CodeFile___standard__kernel__Object__init]))(self) /* init on <self:CodeFile>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#file for (self: CodeWriter): CodeFile */
val* nit___nit__CodeWriter___file(val* self) {
val* var /* : CodeFile */;
val* var1 /* : CodeFile */;
var1 = self->attrs[COLOR_nit__abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1037);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#file= for (self: CodeWriter, CodeFile) */
void nit___nit__CodeWriter___file_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__CodeWriter___file].val = p0; /* _file on <self:CodeWriter> */
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#lines for (self: CodeWriter): List[String] */
val* nit___nit__CodeWriter___lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__CodeWriter___lines].val; /* _lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1038);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#decl_lines for (self: CodeWriter): List[String] */
val* nit___nit__CodeWriter___decl_lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1039);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#add_decl for (self: CodeWriter, String) */
void nit___nit__CodeWriter___add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : List[String] */;
val* var2 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1039);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__Sequence___SimpleCollection__add(var, var_s); /* Direct call abstract_collection#Sequence#add on <var:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#init for (self: CodeWriter) */
void nit___nit__CodeWriter___standard__kernel__Object__init(val* self) {
val* var /* : CodeFile */;
val* var2 /* : CodeFile */;
val* var3 /* : Array[CodeWriter] */;
val* var5 /* : Array[CodeWriter] */;
{
{ /* Inline abstract_compiler#CodeWriter#file (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nit__abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1037);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#writers (var) on <var:CodeFile> */
var5 = var->attrs[COLOR_nit__abstract_compiler__CodeFile___writers].val; /* _writers on <var:CodeFile> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1031);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[CodeWriter]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler for (self: AbstractCompilerVisitor): AbstractCompiler */
val* nit___nit__AbstractCompilerVisitor___compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler= for (self: AbstractCompilerVisitor, AbstractCompiler) */
void nit___nit__AbstractCompilerVisitor___compiler_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__COMPILER];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val = p0; /* _compiler on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node for (self: AbstractCompilerVisitor): nullable ANode */
val* nit___nit__AbstractCompilerVisitor___current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node= for (self: AbstractCompilerVisitor, nullable ANode) */
void nit___nit__AbstractCompilerVisitor___current_node_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = p0; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame for (self: AbstractCompilerVisitor): nullable StaticFrame */
val* nit___nit__AbstractCompilerVisitor___frame(val* self) {
val* var /* : nullable StaticFrame */;
val* var1 /* : nullable StaticFrame */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame= for (self: AbstractCompilerVisitor, nullable StaticFrame) */
void nit___nit__AbstractCompilerVisitor___frame_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = p0; /* _frame on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#object_type for (self: AbstractCompilerVisitor): MClassType */
val* nit___nit__AbstractCompilerVisitor___object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__model___MModule___object_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_type for (self: AbstractCompilerVisitor): MClassType */
val* nit___nit__AbstractCompilerVisitor___bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__model___MModule___bool_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer for (self: AbstractCompilerVisitor): CodeWriter */
val* nit___nit__AbstractCompilerVisitor___writer(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1074);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer= for (self: AbstractCompilerVisitor, CodeWriter) */
void nit___nit__AbstractCompilerVisitor___writer_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer].val = p0; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init for (self: AbstractCompilerVisitor) */
void nit___nit__AbstractCompilerVisitor___standard__kernel__Object__init(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : List[CodeFile] */;
val* var6 /* : List[CodeFile] */;
val* var7 /* : nullable Object */;
var = NEW_nit__CodeWriter(&type_nit__CodeWriter);
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 516);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = standard___standard__List___standard__abstract_collection__SequenceRead__last(var4);
}
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_nit__abstract_compiler__CodeWriter__file_61d]))(var, var7) /* file= on <var:CodeWriter>*/;
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var) /* init on <var:CodeWriter>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer= (self,var) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer].val = var; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_class for (self: AbstractCompilerVisitor, String): MClass */
val* nit___nit__AbstractCompilerVisitor___get_class(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__model___MModule___get_primitive_class(var4, var_name);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_property for (self: AbstractCompilerVisitor, String, MType): MMethod */
val* nit___nit__AbstractCompilerVisitor___get_property(val* self, val* p0, val* p1) {
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
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_recv->type->table_size) {
var1 = 0;
} else {
var1 = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1087);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var10 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MType(MClassType)> */
var13 = var_recv->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_recv:MType(MClassType)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var16 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var14) on <var14:AbstractCompiler> */
var19 = var14->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var14:AbstractCompiler> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nit___nit__ModelBuilder___force_get_primitive_method(var5, var8, var_name, var11, var17);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compile_callsite for (self: AbstractCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___compile_callsite(val* self, val* p0, val* p1) {
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
short int var62 /* : Bool */;
val* var63 /* : MMethod */;
val* var65 /* : MMethod */;
val* var66 /* : Array[RuntimeVariable] */;
long var67 /* : Int */;
val* var_68 /* var : Array[RuntimeVariable] */;
val* var69 /* : nullable RuntimeVariable */;
val* var70 /* : MMethod */;
val* var72 /* : MMethod */;
val* var73 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_arguments = p1;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 490);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_initializers = var4;
{
var7 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_initializers);
}
var8 = !var7;
if (var8){
{
var9 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var_recv = var9;
var10 = 1;
var_i = var10;
var_ = var_initializers;
{
var11 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_12);
}
if (var13){
{
var14 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_12);
}
var_p = var14;
/* <var_p:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_p->type->table_size) {
var15 = 0;
} else {
var15 = var_p->type->type_table[cltype] == idtype;
}
if (var15){
var16 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var17 = 1;
{
standard___standard__Array___with_capacity(var16, var17); /* Direct call array#Array#with_capacity on <var16:Array[RuntimeVariable]>*/
}
var_18 = var16;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_18, var_recv); /* Direct call array#AbstractArray#push on <var_18:Array[RuntimeVariable]>*/
}
var_args = var_18;
{
{ /* Inline model#MProperty#intro (var_p) on <var_p:MProperty(MMethod)> */
var21 = var_p->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_p:MProperty(MMethod)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var19) on <var19:MPropDef(MMethodDef)> */
var24 = var19->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var19:MPropDef(MMethodDef)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1101);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var22) on <var22:nullable MSignature> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var27 = var22->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var22:nullable MSignature> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_28 = var25;
{
var29 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_28);
}
var_30 = var29;
for(;;) {
{
var31 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_30);
}
if (var31){
{
var32 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_30);
}
var_x = var32;
{
var33 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_args, var33); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
var34 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var34) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_30); /* Direct call array#ArrayIterator#next on <var_30:ArrayIterator[MParameter]>*/
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
var42 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(self, var_p, var_args);
}
} else {
/* <var_p:MProperty> isa MAttribute */
cltype44 = type_nit__MAttribute.color;
idtype45 = type_nit__MAttribute.id;
if(cltype44 >= var_p->type->table_size) {
var43 = 0;
} else {
var43 = var_p->type->type_table[cltype44] == idtype45;
}
if (var43){
{
var46 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(self, var_p, var_recv, var46); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <self:AbstractCompilerVisitor>*/
}
var47 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1109);
show_backtrace(1);
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[MProperty]>*/
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
var59 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var57) on <var_i:Int> */
var62 = var_i == var57;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (unlikely(!var60)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1111);
show_backtrace(1);
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var65 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
var66 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var67 = 1;
{
standard___standard__Array___with_capacity(var66, var67); /* Direct call array#Array#with_capacity on <var66:Array[RuntimeVariable]>*/
}
var_68 = var66;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_68, var_recv); /* Direct call array#AbstractArray#push on <var_68:Array[RuntimeVariable]>*/
}
{
var69 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(self, var63, var_68);
}
var = var69;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var72 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(self, var70, var_arguments);
}
var = var73;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#varargize for (self: AbstractCompilerVisitor, MMethodDef, RuntimeVariable, SequenceRead[AExpr]): Array[RuntimeVariable] */
val* nit___nit__AbstractCompilerVisitor___varargize(val* self, val* p0, val* p1, val* p2) {
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
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : AExpr */;
val* var46 /* : AExpr */;
val* var47 /* : null */;
val* var48 /* : RuntimeVariable */;
val* var_e /* var e: RuntimeVariable */;
val* var49 /* : Array[RuntimeVariable] */;
val* var_vararg /* var vararg: Array[RuntimeVariable] */;
long var_j /* var j: Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
long var_57 /* var : Int */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
short int var64 /* : Bool */;
val* var65 /* : nullable Object */;
val* var66 /* : null */;
val* var67 /* : RuntimeVariable */;
val* var_e68 /* var e: RuntimeVariable */;
long var69 /* : Int */;
long var70 /* : Int */;
val* var72 /* : Array[MParameter] */;
val* var74 /* : Array[MParameter] */;
val* var75 /* : nullable Object */;
val* var76 /* : MType */;
val* var78 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var79 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
long var_j80 /* var j: Int */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
short int var87 /* : Bool */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
val* var95 /* : nullable Object */;
val* var96 /* : null */;
val* var97 /* : RuntimeVariable */;
val* var_e98 /* var e: RuntimeVariable */;
long var99 /* : Int */;
long var100 /* : Int */;
var_mpropdef = p0;
var_recv = p1;
var_args = p2;
{
{ /* Inline model#MMethodDef#new_msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var4 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2!=NULL) {
var1 = var2;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1130);
show_backtrace(1);
}
var1 = var5;
}
var_msignature = var1;
var8 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___standard__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[RuntimeVariable]>*/
}
var_res = var8;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_recv); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
{
var9 = ((short int (*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_args) /* is_empty on <var_args:SequenceRead[AExpr]>*/;
}
if (var9){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var12 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_vararg_rank = var10;
{
var13 = ((long (*)(val* self))(var_args->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args) /* length on <var_args:SequenceRead[AExpr]>*/;
}
{
var14 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#- (var13,var14) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
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
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var29 = nit___nit__MSignature___arity(var_msignature);
}
var_ = var29;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var32 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var39 = var_i == var_vararg_rank;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var40 = ((val* (*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i) /* [] on <var_args:SequenceRead[AExpr]>*/;
}
var_ne = var40;
/* <var_ne:AExpr> isa AVarargExpr */
cltype42 = type_nit__AVarargExpr.color;
idtype43 = type_nit__AVarargExpr.id;
if(cltype42 >= var_ne->type->table_size) {
var41 = 0;
} else {
var41 = var_ne->type->type_table[cltype42] == idtype43;
}
if (var41){
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (var_ne) on <var_ne:AExpr(AVarargExpr)> */
var46 = var_ne->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_ne:AExpr(AVarargExpr)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2343);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = NULL;
{
var48 = nit___nit__AbstractCompilerVisitor___expr(self, var44, var47);
}
var_e = var48;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_e); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label;
} else {
}
var49 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___standard__kernel__Object__init(var49); /* Direct call array#Array#init on <var49:Array[RuntimeVariable]>*/
}
var_vararg = var49;
var_j = var_vararg_rank;
{
{ /* Inline kernel#Int#+ (var_vararg_rank,var_vararg_len) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_len:Int> isa OTHER */
/* <var_vararg_len:Int> isa OTHER */
var52 = 1; /* easy <var_vararg_len:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var56 = var_vararg_rank + var_vararg_len;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_57 = var50;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j,var_57) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_57:Int> isa OTHER */
/* <var_57:Int> isa OTHER */
var60 = 1; /* easy <var_57:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var64 = var_j <= var_57;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
{
var65 = ((val* (*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, var_j) /* [] on <var_args:SequenceRead[AExpr]>*/;
}
var66 = NULL;
{
var67 = nit___nit__AbstractCompilerVisitor___expr(self, var65, var66);
}
var_e68 = var67;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_vararg, var_e68); /* Direct call array#Array#add on <var_vararg:Array[RuntimeVariable]>*/
}
var69 = 1;
{
var70 = standard___standard__Int___Discrete__successor(var_j, var69);
}
var_j = var70;
} else {
goto BREAK_label71;
}
}
BREAK_label71: (void)0;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var74 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var72, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var75) on <var75:nullable Object(MParameter)> */
var78 = var75->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var75:nullable Object(MParameter)> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
var_elttype = var76;
{
var79 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__vararg_instance(self, var_mpropdef, var_recv, var_vararg, var_elttype);
}
var_arg = var79;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_arg); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
} else {
var_j80 = var_i;
{
{ /* Inline kernel#Int#> (var_i,var_vararg_rank) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_rank:Int> isa OTHER */
/* <var_vararg_rank:Int> isa OTHER */
var83 = 1; /* easy <var_vararg_rank:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var87 = var_i > var_vararg_rank;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
if (var81){
{
{ /* Inline kernel#Int#+ (var_j80,var_vararg_len) on <var_j80:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_len:Int> isa OTHER */
/* <var_vararg_len:Int> isa OTHER */
var90 = 1; /* easy <var_vararg_len:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var94 = var_j80 + var_vararg_len;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var_j80 = var88;
} else {
}
{
var95 = ((val* (*)(val* self, long p0))(var_args->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_args, var_j80) /* [] on <var_args:SequenceRead[AExpr]>*/;
}
var96 = NULL;
{
var97 = nit___nit__AbstractCompilerVisitor___expr(self, var95, var96);
}
var_e98 = var97;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_e98); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
}
BREAK_label: (void)0;
var99 = 1;
{
var100 = standard___standard__Int___Discrete__successor(var_i, var99);
}
var_i = var100;
} else {
goto BREAK_label101;
}
}
BREAK_label101: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#anchor for (self: AbstractCompilerVisitor, MType): MType */
val* nit___nit__AbstractCompilerVisitor___anchor(val* self, val* p0) {
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
var1 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1172);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#receiver (var9) on <var9:nullable StaticFrame> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1728);
show_backtrace(1);
}
var14 = var9->attrs[COLOR_nit__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var9:nullable StaticFrame> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1728);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val* (*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var6, var12) /* anchor_to on <var_mtype:MType>*/;
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#resolve_for for (self: AbstractCompilerVisitor, MType, RuntimeVariable): MType */
val* nit___nit__AbstractCompilerVisitor___resolve_for(val* self, val* p0, val* p1) {
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
short int var18 /* : Bool */;
val* var19 /* : MType */;
var_mtype = p0;
var_recv = p1;
{
var1 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var5 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1178);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#receiver (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1728);
show_backtrace(1);
}
var11 = var6->attrs[COLOR_nit__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1728);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var14 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var18 = 1;
{
var19 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var3, var9, var15, var18) /* resolve_for on <var_mtype:MType>*/;
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#autoadapt for (self: AbstractCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___autoadapt(val* self, val* p0, val* p1) {
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
var1 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var4 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_valmtype = var2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = NULL;
{
var12 = nit___nit__MType___is_subtype(var_valmtype, var8, var11, var_mtype);
}
if (var12){
var = var_value;
goto RET_LABEL;
} else {
}
/* <var_valmtype:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_valmtype->type->table_size) {
var14 = 0;
} else {
var14 = var_valmtype->type->type_table[cltype] == idtype;
}
var_ = var14;
if (var14){
{
{ /* Inline model#MNullableType#mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var17 = var_valmtype->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var20 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var18) on <var18:AbstractCompiler> */
var23 = var18->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var18:AbstractCompiler> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = NULL;
{
var25 = nit___nit__MType___is_subtype(var15, var21, var24, var_mtype);
}
var13 = var25;
} else {
var13 = var_;
}
if (var13){
var26 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_value) on <var_value:RuntimeVariable> */
var29 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1677);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var32 = var_valmtype->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var26->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var26, var27) /* name= on <var26:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var26->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var26, var_valmtype) /* mtype= on <var26:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var26->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var26, var30) /* mcasttype= on <var26:RuntimeVariable>*/;
}
{
((void (*)(val* self))(var26->class->vft[COLOR_standard__kernel__Object__init]))(var26) /* init on <var26:RuntimeVariable>*/;
}
var_res = var26;
var = var_res;
goto RET_LABEL;
} else {
var33 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_value) on <var_value:RuntimeVariable> */
var36 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1677);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var33->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var33, var34) /* name= on <var33:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var33->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var33, var_valmtype) /* mtype= on <var33:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var33->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var33, var_mtype) /* mcasttype= on <var33:RuntimeVariable>*/;
}
{
((void (*)(val* self))(var33->class->vft[COLOR_standard__kernel__Object__init]))(var33) /* init on <var33:RuntimeVariable>*/;
}
var_res37 = var33;
var = var_res37;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_send for (self: AbstractCompilerVisitor, MMethod, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___monomorphic_send(val* self, val* p0, val* p1, val* p2) {
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
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1241);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__MProperty___lookup_first_definition(var_m, var5, var_t);
}
var_propdef = var8;
{
var9 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call(self, var_propdef, var_t, var_args);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send for (self: AbstractCompilerVisitor, MMethodDef, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___monomorphic_super_send(val* self, val* p0, val* p1, val* p2) {
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
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1249);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__MPropDef___lookup_next_definition(var_m, var5, var_t);
}
var_m = var8;
{
var9 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call(self, var_m, var_t, var_args);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#check_recv_notnull for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nit___nit__AbstractCompilerVisitor___check_recv_notnull(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 55);
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
var15 = ((struct instance_standard__Bool*)var12)->value; /* autounbox from nullable Object to Bool */;
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var19 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
/* <var17:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
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
var23 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
/* <var21:MType> isa MNullType */
cltype25 = type_nit__MNullType.color;
idtype26 = type_nit__MNullType.id;
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
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = " == NULL)) {";
var34 = 12;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 3;
var38 = NEW_standard__NativeArray(var37, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var38)->values[0] = (val*) var27;
((struct instance_standard__NativeArray*)var38)->values[1] = (val*) var_recv;
((struct instance_standard__NativeArray*)var38)->values[2] = (val*) var32;
{
((void (*)(val* self, val* p0, long p1))(var36->class->vft[COLOR_standard__array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
}
{
var39 = ((val* (*)(val* self))(var36->class->vft[COLOR_standard__string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Receiver is null";
var43 = 16;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:AbstractCompilerVisitor>*/
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "}";
var48 = 1;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#names for (self: AbstractCompilerVisitor): HashSet[String] */
val* nit___nit__AbstractCompilerVisitor___names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1282);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last for (self: AbstractCompilerVisitor): Int */
long nit___nit__AbstractCompilerVisitor___last(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last= for (self: AbstractCompilerVisitor, Int) */
void nit___nit__AbstractCompilerVisitor___last_61d(val* self, long p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___last].l = p0; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_name for (self: AbstractCompilerVisitor, String): String */
val* nit___nit__AbstractCompilerVisitor___get_name(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1282);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var1, var_s);
}
var5 = !var4;
if (var5){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1282);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var6, var_s); /* Direct call hash_collection#HashSet#add on <var6:HashSet[String]>*/
}
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var17 = standard__string___Int___Object__to_s(var_i);
}
{
var18 = ((val* (*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__String___43d]))(var_s, var17) /* + on <var_s:String>*/;
}
var_s2 = var18;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var21 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1282);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var19, var_s2);
}
var23 = !var22;
if (var23){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last= (self,var_i) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___last].l = var_i; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var27 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1282);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var25, var_s2); /* Direct call hash_collection#HashSet#add on <var25:HashSet[String]>*/
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
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_name for (self: AbstractCompilerVisitor, nullable EscapeMark): String */
val* nit___nit__AbstractCompilerVisitor___escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var_e /* var e: nullable EscapeMark */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable StaticFrame */;
val* var9 /* : nullable StaticFrame */;
val* var10 /* : HashMap[EscapeMark, String] */;
val* var12 /* : HashMap[EscapeMark, String] */;
short int var13 /* : Bool */;
val* var14 /* : nullable StaticFrame */;
val* var16 /* : nullable StaticFrame */;
val* var17 /* : HashMap[EscapeMark, String] */;
val* var19 /* : HashMap[EscapeMark, String] */;
val* var20 /* : nullable Object */;
val* var21 /* : nullable String */;
val* var23 /* : nullable String */;
val* var_name /* var name: nullable String */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
val* var32 /* : nullable StaticFrame */;
val* var34 /* : nullable StaticFrame */;
val* var35 /* : HashMap[EscapeMark, String] */;
val* var37 /* : HashMap[EscapeMark, String] */;
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
var5 = ((short int (*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e, var_other) /* == on <var_e:nullable EscapeMark(EscapeMark)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1307);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var9 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1308);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var7) on <var7:nullable StaticFrame> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1740);
show_backtrace(1);
}
var12 = var7->attrs[COLOR_nit__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var7:nullable StaticFrame> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1740);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = standard___standard__MapRead___has_key(var10, var_e);
}
if (var13){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var16 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1308);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var14) on <var14:nullable StaticFrame> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1740);
show_backtrace(1);
}
var19 = var14->attrs[COLOR_nit__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var14:nullable StaticFrame> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1740);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var17, var_e);
}
var = var20;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#name (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var23 = var_e->attrs[COLOR_nit__scope__EscapeMark___name].val; /* _name on <var_e:nullable EscapeMark(EscapeMark)> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_name = var21;
var24 = NULL;
if (var_name == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
var26 = ((short int (*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var24) /* == on <var_name:nullable String>*/;
var25 = var26;
}
if (var25){
if (varonce) {
var27 = varonce;
} else {
var28 = "label";
var29 = 5;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
var_name = var27;
} else {
}
{
var31 = nit___nit__AbstractCompilerVisitor___get_name(self, var_name);
}
var_name = var31;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1312);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var32) on <var32:nullable StaticFrame> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1740);
show_backtrace(1);
}
var37 = var32->attrs[COLOR_nit__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var32:nullable StaticFrame> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1740);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var35, var_e, var_name); /* Direct call hash_collection#HashMap#[]= on <var35:HashMap[EscapeMark, String]>*/
}
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_escape_label for (self: AbstractCompilerVisitor, nullable EscapeMark) */
void nit___nit__AbstractCompilerVisitor___add_escape_label(val* self, val* p0) {
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
var9 = var_e->attrs[COLOR_nit__scope__EscapeMark___escapes].val; /* _escapes on <var_e:nullable EscapeMark(EscapeMark)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 58);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var7);
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
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
var15 = nit___nit__AbstractCompilerVisitor___escapemark_name(self, var_e);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = ": (void)0;";
var19 = 10;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_standard__NativeArray(var22, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var23)->values[0] = (val*) var11;
((struct instance_standard__NativeArray*)var23)->values[1] = (val*) var15;
((struct instance_standard__NativeArray*)var23)->values[2] = (val*) var17;
{
((void (*)(val* self, val* p0, long p1))(var21->class->vft[COLOR_standard__array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
}
{
var24 = ((val* (*)(val* self))(var21->class->vft[COLOR_standard__string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables for (self: AbstractCompilerVisitor): HashMap[Variable, RuntimeVariable] */
val* nit___nit__AbstractCompilerVisitor___variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1330);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variable for (self: AbstractCompilerVisitor, Variable): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___variable(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1330);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__MapRead___has_key(var1, var_variable);
}
if (var4){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1330);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var5, var_variable);
}
var = var8;
goto RET_LABEL;
} else {
if (varonce) {
var9 = varonce;
} else {
var10 = "var_";
var11 = 4;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:Variable> */
var15 = var_variable->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 2;
var18 = NEW_standard__NativeArray(var17, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var18)->values[0] = (val*) var9;
((struct instance_standard__NativeArray*)var18)->values[1] = (val*) var13;
{
((void (*)(val* self, val* p0, long p1))(var16->class->vft[COLOR_standard__array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val* self))(var16->class->vft[COLOR_standard__string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
var20 = nit___nit__AbstractCompilerVisitor___get_name(self, var19);
}
var_name = var20;
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var23 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1339);
show_backtrace(1);
}
var_mtype = var21;
{
var24 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var24;
var25 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
((void (*)(val* self, val* p0))(var25->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var25, var_name) /* name= on <var25:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var25->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var25, var_mtype) /* mtype= on <var25:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var25->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var25, var_mtype) /* mcasttype= on <var25:RuntimeVariable>*/;
}
{
((void (*)(val* self))(var25->class->vft[COLOR_standard__kernel__Object__init]))(var25) /* init on <var25:RuntimeVariable>*/;
}
var_res = var25;
{
var26 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " ";
var30 = 1;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = " /* var ";
var35 = 8;
var36 = standard___standard__NativeString___to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ": ";
var40 = 2;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " */;";
var45 = 4;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 8;
var49 = NEW_standard__NativeArray(var48, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var49)->values[0] = (val*) var26;
((struct instance_standard__NativeArray*)var49)->values[1] = (val*) var28;
((struct instance_standard__NativeArray*)var49)->values[2] = (val*) var_name;
((struct instance_standard__NativeArray*)var49)->values[3] = (val*) var33;
((struct instance_standard__NativeArray*)var49)->values[4] = (val*) var_variable;
((struct instance_standard__NativeArray*)var49)->values[5] = (val*) var38;
((struct instance_standard__NativeArray*)var49)->values[6] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var49)->values[7] = (val*) var43;
{
((void (*)(val* self, val* p0, long p1))(var47->class->vft[COLOR_standard__array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var50 = ((val* (*)(val* self))(var47->class->vft[COLOR_standard__string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var53 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1330);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var51, var_variable, var_res); /* Direct call hash_collection#HashMap#[]= on <var51:HashMap[Variable, RuntimeVariable]>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___new_var(val* self, val* p0) {
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
var1 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "var";
var4 = 3;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
var6 = nit___nit__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var6;
var7 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
((void (*)(val* self, val* p0))(var7->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var7, var_name) /* name= on <var7:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var7->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var7, var_mtype) /* mtype= on <var7:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var7->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var7, var_mtype) /* mcasttype= on <var7:RuntimeVariable>*/;
}
{
((void (*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7) /* init on <var7:RuntimeVariable>*/;
}
var_res = var7;
{
var8 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = " ";
var12 = 1;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = " /* : ";
var17 = 6;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = " */;";
var22 = 4;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 6;
var26 = NEW_standard__NativeArray(var25, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var26)->values[0] = (val*) var8;
((struct instance_standard__NativeArray*)var26)->values[1] = (val*) var10;
((struct instance_standard__NativeArray*)var26)->values[2] = (val*) var_name;
((struct instance_standard__NativeArray*)var26)->values[3] = (val*) var15;
((struct instance_standard__NativeArray*)var26)->values[4] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var26)->values[5] = (val*) var20;
{
((void (*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_standard__array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var_extern for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___new_var_extern(val* self, val* p0) {
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
var1 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "var";
var4 = 3;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
var6 = nit___nit__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var6;
var7 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
((void (*)(val* self, val* p0))(var7->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var7, var_name) /* name= on <var7:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var7->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var7, var_mtype) /* mtype= on <var7:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var7->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var7, var_mtype) /* mcasttype= on <var7:RuntimeVariable>*/;
}
{
((void (*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7) /* init on <var7:RuntimeVariable>*/;
}
var_res = var7;
{
var8 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype_extern]))(var_mtype) /* ctype_extern on <var_mtype:MType>*/;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = " ";
var12 = 1;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = " /* : ";
var17 = 6;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = " for extern */;";
var22 = 15;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 6;
var26 = NEW_standard__NativeArray(var25, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var26)->values[0] = (val*) var8;
((struct instance_standard__NativeArray*)var26)->values[1] = (val*) var10;
((struct instance_standard__NativeArray*)var26)->values[2] = (val*) var_name;
((struct instance_standard__NativeArray*)var26)->values[3] = (val*) var15;
((struct instance_standard__NativeArray*)var26)->values[4] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var26)->values[5] = (val*) var20;
{
((void (*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_standard__array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_named_var for (self: AbstractCompilerVisitor, MType, String): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___new_named_var(val* self, val* p0, val* p1) {
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
var1 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
var2 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var2, var_name) /* name= on <var2:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var2, var_mtype) /* mtype= on <var2:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var2, var_mtype) /* mcasttype= on <var2:RuntimeVariable>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:RuntimeVariable>*/;
}
var_res = var2;
{
var3 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce) {
var4 = varonce;
} else {
var5 = " ";
var6 = 1;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = " /* : ";
var11 = 6;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = " */;";
var16 = 4;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 6;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var3;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var4;
((struct instance_standard__NativeArray*)var20)->values[2] = (val*) var_name;
((struct instance_standard__NativeArray*)var20)->values[3] = (val*) var9;
((struct instance_standard__NativeArray*)var20)->values[4] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var20)->values[5] = (val*) var14;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#assign for (self: AbstractCompilerVisitor, RuntimeVariable, RuntimeVariable) */
void nit___nit__AbstractCompilerVisitor___assign(val* self, val* p0, val* p1) {
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
var2 = var_left->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_left:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_right, var);
}
var_right = var3;
if (varonce) {
var4 = varonce;
} else {
var5 = " = ";
var6 = 3;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
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
var14 = 4;
var15 = NEW_standard__NativeArray(var14, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var15)->values[0] = (val*) var_left;
((struct instance_standard__NativeArray*)var15)->values[1] = (val*) var4;
((struct instance_standard__NativeArray*)var15)->values[2] = (val*) var_right;
((struct instance_standard__NativeArray*)var15)->values[3] = (val*) var9;
{
((void (*)(val* self, val* p0, long p1))(var13->class->vft[COLOR_standard__array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val* self))(var13->class->vft[COLOR_standard__string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var16); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init_instance_or_extern for (self: AbstractCompilerVisitor, MClassType): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___init_instance_or_extern(val* self, val* p0) {
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
long var10 /* : Int */;
val* var11 /* : FlatString */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
short int var21 /* : Bool */;
val* var22 /* : RuntimeVariable */;
val* var_recv /* var recv: nullable Object */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : RuntimeVariable */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : Array[Object] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Object] */;
val* var48 /* : String */;
val* var49 /* : RuntimeVariable */;
var_mtype = p0;
{
var1 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
var_ctype = var1;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var4 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MClass#name (var2) on <var2:MClass> */
var7 = var2->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var2:MClass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (varonce) {
var8 = varonce;
} else {
var9 = "NativeArray";
var10 = 11;
var11 = standard___standard__NativeString___to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
{ /* Inline kernel#Object#!= (var5,var8) on <var5:String> */
var_other = var8;
{
var14 = ((short int (*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_other) /* == on <var5:String>*/;
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1397);
show_backtrace(1);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "val*";
var19 = 4;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
{
var21 = ((short int (*)(val* self, val* p0))(var_ctype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ctype, var17) /* == on <var_ctype:String>*/;
}
if (var21){
{
var22 = ((val* (*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_mtype) /* init_instance on <self:AbstractCompilerVisitor>*/;
}
var_recv = var22;
} else {
if (varonce23) {
var24 = varonce23;
} else {
var25 = "char*";
var26 = 5;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
var28 = ((short int (*)(val* self, val* p0))(var_ctype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ctype, var24) /* == on <var_ctype:String>*/;
}
if (var28){
if (varonce29) {
var30 = varonce29;
} else {
var31 = "NULL/*special!*/";
var32 = 16;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
var34 = nit___nit__AbstractCompilerVisitor___new_expr(self, var30, var_mtype);
}
var_recv = var34;
} else {
if (varonce35) {
var36 = varonce35;
} else {
var37 = "(";
var38 = 1;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = ")0/*special!*/";
var43 = 14;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 3;
var47 = NEW_standard__NativeArray(var46, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var47)->values[0] = (val*) var36;
((struct instance_standard__NativeArray*)var47)->values[1] = (val*) var_ctype;
((struct instance_standard__NativeArray*)var47)->values[2] = (val*) var41;
{
((void (*)(val* self, val* p0, long p1))(var45->class->vft[COLOR_standard__array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
}
{
var48 = ((val* (*)(val* self))(var45->class->vft[COLOR_standard__string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
}
{
var49 = nit___nit__AbstractCompilerVisitor___new_expr(self, var48, var_mtype);
}
var_recv = var49;
}
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#set_finalizer for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nit___nit__AbstractCompilerVisitor___set_finalizer(val* self, val* p0) {
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
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
val* var21 /* : AbstractCompiler */;
val* var23 /* : AbstractCompiler */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var27 /* : null */;
short int var28 /* : Bool */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
var_recv = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var2 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit__model___MModule___finalizable_type(var6);
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
var16 = ((short int (*)(val* self, val* p0))(var_finalizable_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_finalizable_type, var_other) /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/;
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var_ = var13;
if (var13){
{
var18 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var19 = !var18;
var11 = var19;
} else {
var11 = var_;
}
var_20 = var11;
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var23 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var21) on <var21:AbstractCompiler> */
var26 = var21->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var21:AbstractCompiler> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = NULL;
{
var28 = nit___nit__MType___is_subtype(var_mtype, var24, var27, var_finalizable_type);
}
var10 = var28;
} else {
var10 = var_20;
}
if (var10){
if (varonce) {
var29 = varonce;
} else {
var30 = "gc_register_finalizer(";
var31 = 22;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = ");";
var36 = 2;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_standard__NativeArray(var39, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var40)->values[0] = (val*) var29;
((struct instance_standard__NativeArray*)var40)->values[1] = (val*) var_recv;
((struct instance_standard__NativeArray*)var40)->values[2] = (val*) var34;
{
((void (*)(val* self, val* p0, long p1))(var38->class->vft[COLOR_standard__array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val* self))(var38->class->vft[COLOR_standard__string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#int_instance for (self: AbstractCompilerVisitor, Int): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___int_instance(val* self, long p0) {
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
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit___nit__AbstractCompilerVisitor___get_class(self, var1);
}
{
{ /* Inline model#MClass#mclass_type (var5) on <var5:MClass> */
var8 = var5->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var5:MClass> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit___nit__AbstractCompilerVisitor___new_var(self, var6);
}
var_res = var9;
if (varonce10) {
var11 = varonce10;
} else {
var12 = " = ";
var13 = 3;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = ";";
var18 = 1;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 4;
var22 = NEW_standard__NativeArray(var21, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var22)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var22)->values[1] = (val*) var11;
var23 = BOX_standard__Int(var_value); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var22)->values[2] = (val*) var23;
((struct instance_standard__NativeArray*)var22)->values[3] = (val*) var16;
{
((void (*)(val* self, val* p0, long p1))(var20->class->vft[COLOR_standard__array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var24 = ((val* (*)(val* self))(var20->class->vft[COLOR_standard__string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_instance for (self: AbstractCompilerVisitor, Bool): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___bool_instance(val* self, short int p0) {
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
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit___nit__AbstractCompilerVisitor___get_class(self, var1);
}
{
{ /* Inline model#MClass#mclass_type (var5) on <var5:MClass> */
var8 = var5->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var5:MClass> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit___nit__AbstractCompilerVisitor___new_var(self, var6);
}
var_res = var9;
if (var_value){
if (varonce10) {
var11 = varonce10;
} else {
var12 = " = 1;";
var13 = 5;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 2;
var17 = NEW_standard__NativeArray(var16, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var17)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var17)->values[1] = (val*) var11;
{
((void (*)(val* self, val* p0, long p1))(var15->class->vft[COLOR_standard__array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
}
{
var18 = ((val* (*)(val* self))(var15->class->vft[COLOR_standard__string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var18); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
if (varonce19) {
var20 = varonce19;
} else {
var21 = " = 0;";
var22 = 5;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 2;
var26 = NEW_standard__NativeArray(var25, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var26)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var26)->values[1] = (val*) var20;
{
((void (*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_standard__array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
