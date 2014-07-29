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
val* var122 /* : ArrayIterator[nullable Object] */;
short int var123 /* : Bool */;
val* var124 /* : nullable Object */;
val* var_tag /* var tag: String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
val* var135 /* : Array[Object] */;
long var136 /* : Int */;
val* var137 /* : NativeArray[Object] */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : FlatString */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : FlatString */;
val* var149 /* : Array[Object] */;
long var150 /* : Int */;
val* var151 /* : NativeArray[Object] */;
val* var152 /* : String */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : FlatString */;
val* var163 /* : Array[Object] */;
long var164 /* : Int */;
val* var165 /* : NativeArray[Object] */;
val* var166 /* : String */;
val* var167 /* : AbstractCompiler */;
val* var169 /* : AbstractCompiler */;
val* var170 /* : CodeWriter */;
val* var172 /* : CodeWriter */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : FlatString */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : FlatString */;
val* var183 /* : Array[Object] */;
long var184 /* : Int */;
val* var185 /* : NativeArray[Object] */;
val* var186 /* : String */;
val* var187 /* : AbstractCompiler */;
val* var189 /* : AbstractCompiler */;
val* var190 /* : CodeWriter */;
val* var192 /* : CodeWriter */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
long var196 /* : Int */;
val* var197 /* : FlatString */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : FlatString */;
val* var203 /* : Array[Object] */;
long var204 /* : Int */;
val* var205 /* : NativeArray[Object] */;
val* var206 /* : String */;
val* var207 /* : AbstractCompiler */;
val* var209 /* : AbstractCompiler */;
val* var210 /* : CodeWriter */;
val* var212 /* : CodeWriter */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : FlatString */;
val* var223 /* : Array[Object] */;
long var224 /* : Int */;
val* var225 /* : NativeArray[Object] */;
val* var226 /* : String */;
val* var227 /* : ModelBuilder */;
val* var229 /* : ModelBuilder */;
val* var230 /* : ToolContext */;
val* var232 /* : ToolContext */;
val* var233 /* : OptionBool */;
val* var235 /* : OptionBool */;
val* var236 /* : nullable Object */;
val* var238 /* : nullable Object */;
short int var239 /* : Bool */;
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
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
long var253 /* : Int */;
val* var254 /* : FlatString */;
val* var255 /* : AbstractCompiler */;
val* var257 /* : AbstractCompiler */;
val* var258 /* : CodeWriter */;
val* var260 /* : CodeWriter */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
long var264 /* : Int */;
val* var265 /* : FlatString */;
val* var266 /* : AbstractCompiler */;
val* var268 /* : AbstractCompiler */;
val* var269 /* : CodeWriter */;
val* var271 /* : CodeWriter */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
long var275 /* : Int */;
val* var276 /* : FlatString */;
val* var277 /* : AbstractCompiler */;
val* var279 /* : AbstractCompiler */;
val* var280 /* : CodeWriter */;
val* var282 /* : CodeWriter */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : NativeString */;
long var286 /* : Int */;
val* var287 /* : FlatString */;
val* var288 /* : ModelBuilder */;
val* var290 /* : ModelBuilder */;
val* var291 /* : ToolContext */;
val* var293 /* : ToolContext */;
val* var294 /* : OptionBool */;
val* var296 /* : OptionBool */;
val* var297 /* : nullable Object */;
val* var299 /* : nullable Object */;
short int var300 /* : Bool */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : FlatString */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : FlatString */;
val* var311 /* : AbstractCompiler */;
val* var313 /* : AbstractCompiler */;
val* var314 /* : CodeWriter */;
val* var316 /* : CodeWriter */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
long var320 /* : Int */;
val* var321 /* : FlatString */;
val* var322 /* : AbstractCompiler */;
val* var324 /* : AbstractCompiler */;
val* var325 /* : CodeWriter */;
val* var327 /* : CodeWriter */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : NativeString */;
long var331 /* : Int */;
val* var332 /* : FlatString */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : NativeString */;
long var336 /* : Int */;
val* var337 /* : FlatString */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
long var341 /* : Int */;
val* var342 /* : FlatString */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : FlatString */;
static val* varonce348;
val* var349 /* : String */;
char* var350 /* : NativeString */;
long var351 /* : Int */;
val* var352 /* : FlatString */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : NativeString */;
long var356 /* : Int */;
val* var357 /* : FlatString */;
short int var358 /* : Bool */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
long var362 /* : Int */;
val* var363 /* : FlatString */;
short int var364 /* : Bool */;
short int var365 /* : Bool */;
short int var_366 /* var : Bool */;
static val* varonce367;
val* var368 /* : String */;
char* var369 /* : NativeString */;
long var370 /* : Int */;
val* var371 /* : FlatString */;
short int var372 /* : Bool */;
short int var373 /* : Bool */;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : NativeString */;
long var377 /* : Int */;
val* var378 /* : FlatString */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
long var382 /* : Int */;
val* var383 /* : FlatString */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
long var387 /* : Int */;
val* var388 /* : FlatString */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
long var392 /* : Int */;
val* var393 /* : FlatString */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : FlatString */;
static val* varonce399;
val* var400 /* : String */;
char* var401 /* : NativeString */;
long var402 /* : Int */;
val* var403 /* : FlatString */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : NativeString */;
long var407 /* : Int */;
val* var408 /* : FlatString */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
long var412 /* : Int */;
val* var413 /* : FlatString */;
static val* varonce414;
val* var415 /* : String */;
char* var416 /* : NativeString */;
long var417 /* : Int */;
val* var418 /* : FlatString */;
static val* varonce419;
val* var420 /* : String */;
char* var421 /* : NativeString */;
long var422 /* : Int */;
val* var423 /* : FlatString */;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : NativeString */;
long var427 /* : Int */;
val* var428 /* : FlatString */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
long var432 /* : Int */;
val* var433 /* : FlatString */;
static val* varonce434;
val* var435 /* : String */;
char* var436 /* : NativeString */;
long var437 /* : Int */;
val* var438 /* : FlatString */;
static val* varonce439;
val* var440 /* : String */;
char* var441 /* : NativeString */;
long var442 /* : Int */;
val* var443 /* : FlatString */;
short int var444 /* : Bool */;
short int var445 /* : Bool */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
long var449 /* : Int */;
val* var450 /* : FlatString */;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : NativeString */;
long var454 /* : Int */;
val* var455 /* : FlatString */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : NativeString */;
long var459 /* : Int */;
val* var460 /* : FlatString */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
long var464 /* : Int */;
val* var465 /* : FlatString */;
static val* varonce466;
val* var467 /* : String */;
char* var468 /* : NativeString */;
long var469 /* : Int */;
val* var470 /* : FlatString */;
static val* varonce471;
val* var472 /* : String */;
char* var473 /* : NativeString */;
long var474 /* : Int */;
val* var475 /* : FlatString */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : NativeString */;
long var479 /* : Int */;
val* var480 /* : FlatString */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : NativeString */;
long var484 /* : Int */;
val* var485 /* : FlatString */;
static val* varonce486;
val* var487 /* : String */;
char* var488 /* : NativeString */;
long var489 /* : Int */;
val* var490 /* : FlatString */;
static val* varonce491;
val* var492 /* : String */;
char* var493 /* : NativeString */;
long var494 /* : Int */;
val* var495 /* : FlatString */;
static val* varonce496;
val* var497 /* : String */;
char* var498 /* : NativeString */;
long var499 /* : Int */;
val* var500 /* : FlatString */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
long var504 /* : Int */;
val* var505 /* : FlatString */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
long var509 /* : Int */;
val* var510 /* : FlatString */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : NativeString */;
long var514 /* : Int */;
val* var515 /* : FlatString */;
static val* varonce516;
val* var517 /* : String */;
char* var518 /* : NativeString */;
long var519 /* : Int */;
val* var520 /* : FlatString */;
static val* varonce521;
val* var522 /* : String */;
char* var523 /* : NativeString */;
long var524 /* : Int */;
val* var525 /* : FlatString */;
static val* varonce526;
val* var527 /* : String */;
char* var528 /* : NativeString */;
long var529 /* : Int */;
val* var530 /* : FlatString */;
static val* varonce531;
val* var532 /* : String */;
char* var533 /* : NativeString */;
long var534 /* : Int */;
val* var535 /* : FlatString */;
static val* varonce536;
val* var537 /* : String */;
char* var538 /* : NativeString */;
long var539 /* : Int */;
val* var540 /* : FlatString */;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : NativeString */;
long var544 /* : Int */;
val* var545 /* : FlatString */;
static val* varonce546;
val* var547 /* : String */;
char* var548 /* : NativeString */;
long var549 /* : Int */;
val* var550 /* : FlatString */;
static val* varonce551;
val* var552 /* : String */;
char* var553 /* : NativeString */;
long var554 /* : Int */;
val* var555 /* : FlatString */;
static val* varonce556;
val* var557 /* : String */;
char* var558 /* : NativeString */;
long var559 /* : Int */;
val* var560 /* : FlatString */;
static val* varonce561;
val* var562 /* : String */;
char* var563 /* : NativeString */;
long var564 /* : Int */;
val* var565 /* : FlatString */;
static val* varonce566;
val* var567 /* : String */;
char* var568 /* : NativeString */;
long var569 /* : Int */;
val* var570 /* : FlatString */;
val* var571 /* : MModule */;
val* var573 /* : MModule */;
val* var574 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
val* var575 /* : null */;
short int var576 /* : Bool */;
short int var577 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var579 /* : Bool */;
short int var580 /* : Bool */;
short int var581 /* : Bool */;
val* var582 /* : AbstractCompiler */;
val* var584 /* : AbstractCompiler */;
val* var585 /* : MModule */;
val* var587 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var588 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
static val* varonce589;
val* var590 /* : String */;
char* var591 /* : NativeString */;
long var592 /* : Int */;
val* var593 /* : FlatString */;
static val* varonce594;
val* var595 /* : String */;
char* var596 /* : NativeString */;
long var597 /* : Int */;
val* var598 /* : FlatString */;
val* var599 /* : Array[Object] */;
long var600 /* : Int */;
val* var601 /* : NativeArray[Object] */;
val* var602 /* : String */;
static val* varonce603;
val* var604 /* : String */;
char* var605 /* : NativeString */;
long var606 /* : Int */;
val* var607 /* : FlatString */;
val* var608 /* : MClass */;
val* var610 /* : MClass */;
val* var611 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
val* var612 /* : null */;
short int var613 /* : Bool */;
short int var614 /* : Bool */;
short int var616 /* : Bool */;
short int var617 /* : Bool */;
short int var618 /* : Bool */;
val* var619 /* : Array[RuntimeVariable] */;
long var620 /* : Int */;
val* var_621 /* var : Array[RuntimeVariable] */;
val* var622 /* : nullable RuntimeVariable */;
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
short int var638 /* : Bool */;
val* var639 /* : Array[RuntimeVariable] */;
long var640 /* : Int */;
val* var_641 /* var : Array[RuntimeVariable] */;
val* var642 /* : nullable RuntimeVariable */;
val* var643 /* : ModelBuilder */;
val* var645 /* : ModelBuilder */;
val* var646 /* : ToolContext */;
val* var648 /* : ToolContext */;
val* var649 /* : OptionBool */;
val* var651 /* : OptionBool */;
val* var652 /* : nullable Object */;
val* var654 /* : nullable Object */;
short int var655 /* : Bool */;
static val* varonce656;
val* var657 /* : String */;
char* var658 /* : NativeString */;
long var659 /* : Int */;
val* var660 /* : FlatString */;
static val* varonce661;
val* var662 /* : String */;
char* var663 /* : NativeString */;
long var664 /* : Int */;
val* var665 /* : FlatString */;
static val* varonce666;
val* var667 /* : String */;
char* var668 /* : NativeString */;
long var669 /* : Int */;
val* var670 /* : FlatString */;
static val* varonce671;
val* var672 /* : String */;
char* var673 /* : NativeString */;
long var674 /* : Int */;
val* var675 /* : FlatString */;
val* var676 /* : Array[String] */;
val* var678 /* : Array[String] */;
val* var679 /* : ArrayIterator[nullable Object] */;
short int var680 /* : Bool */;
val* var681 /* : nullable Object */;
val* var_tag682 /* var tag: String */;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : NativeString */;
long var686 /* : Int */;
val* var687 /* : FlatString */;
static val* varonce688;
val* var689 /* : String */;
char* var690 /* : NativeString */;
long var691 /* : Int */;
val* var692 /* : FlatString */;
val* var693 /* : Array[Object] */;
long var694 /* : Int */;
val* var695 /* : NativeArray[Object] */;
val* var696 /* : String */;
static val* varonce697;
val* var698 /* : String */;
char* var699 /* : NativeString */;
long var700 /* : Int */;
val* var701 /* : FlatString */;
static val* varonce702;
val* var703 /* : String */;
char* var704 /* : NativeString */;
long var705 /* : Int */;
val* var706 /* : FlatString */;
static val* varonce707;
val* var708 /* : String */;
char* var709 /* : NativeString */;
long var710 /* : Int */;
val* var711 /* : FlatString */;
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
val* var722 /* : Array[Object] */;
long var723 /* : Int */;
val* var724 /* : NativeArray[Object] */;
val* var725 /* : String */;
static val* varonce726;
val* var727 /* : String */;
char* var728 /* : NativeString */;
long var729 /* : Int */;
val* var730 /* : FlatString */;
static val* varonce731;
val* var732 /* : String */;
char* var733 /* : NativeString */;
long var734 /* : Int */;
val* var735 /* : FlatString */;
val* var736 /* : Array[Object] */;
long var737 /* : Int */;
val* var738 /* : NativeArray[Object] */;
val* var739 /* : String */;
static val* varonce740;
val* var741 /* : String */;
char* var742 /* : NativeString */;
long var743 /* : Int */;
val* var744 /* : FlatString */;
static val* varonce745;
val* var746 /* : String */;
char* var747 /* : NativeString */;
long var748 /* : Int */;
val* var749 /* : FlatString */;
val* var750 /* : Array[Object] */;
long var751 /* : Int */;
val* var752 /* : NativeArray[Object] */;
val* var753 /* : String */;
static val* varonce754;
val* var755 /* : String */;
char* var756 /* : NativeString */;
long var757 /* : Int */;
val* var758 /* : FlatString */;
static val* varonce759;
val* var760 /* : String */;
char* var761 /* : NativeString */;
long var762 /* : Int */;
val* var763 /* : FlatString */;
val* var764 /* : Array[Object] */;
long var765 /* : Int */;
val* var766 /* : NativeArray[Object] */;
val* var767 /* : String */;
static val* varonce768;
val* var769 /* : String */;
char* var770 /* : NativeString */;
long var771 /* : Int */;
val* var772 /* : FlatString */;
static val* varonce773;
val* var774 /* : String */;
char* var775 /* : NativeString */;
long var776 /* : Int */;
val* var777 /* : FlatString */;
val* var778 /* : Array[Object] */;
long var779 /* : Int */;
val* var780 /* : NativeArray[Object] */;
val* var781 /* : String */;
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
val* var793 /* : Array[String] */;
val* var795 /* : Array[String] */;
val* var796 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce797;
val* var798 /* : String */;
char* var799 /* : NativeString */;
long var800 /* : Int */;
val* var801 /* : FlatString */;
val* var802 /* : ArrayIterator[nullable Object] */;
short int var803 /* : Bool */;
val* var804 /* : nullable Object */;
val* var_tag805 /* var tag: String */;
static val* varonce806;
val* var807 /* : String */;
char* var808 /* : NativeString */;
long var809 /* : Int */;
val* var810 /* : FlatString */;
static val* varonce811;
val* var812 /* : String */;
char* var813 /* : NativeString */;
long var814 /* : Int */;
val* var815 /* : FlatString */;
val* var816 /* : Array[Object] */;
long var817 /* : Int */;
val* var818 /* : NativeArray[Object] */;
val* var819 /* : String */;
static val* varonce820;
val* var821 /* : String */;
char* var822 /* : NativeString */;
long var823 /* : Int */;
val* var824 /* : FlatString */;
static val* varonce825;
val* var826 /* : String */;
char* var827 /* : NativeString */;
long var828 /* : Int */;
val* var829 /* : FlatString */;
static val* varonce830;
val* var831 /* : String */;
char* var832 /* : NativeString */;
long var833 /* : Int */;
val* var834 /* : FlatString */;
val* var835 /* : Array[Object] */;
long var836 /* : Int */;
val* var837 /* : NativeArray[Object] */;
val* var838 /* : String */;
static val* varonce839;
val* var840 /* : String */;
char* var841 /* : NativeString */;
long var842 /* : Int */;
val* var843 /* : FlatString */;
static val* varonce844;
val* var845 /* : String */;
char* var846 /* : NativeString */;
long var847 /* : Int */;
val* var848 /* : FlatString */;
static val* varonce849;
val* var850 /* : String */;
char* var851 /* : NativeString */;
long var852 /* : Int */;
val* var853 /* : FlatString */;
val* var854 /* : Array[Object] */;
long var855 /* : Int */;
val* var856 /* : NativeArray[Object] */;
val* var857 /* : String */;
static val* varonce858;
val* var859 /* : String */;
char* var860 /* : NativeString */;
long var861 /* : Int */;
val* var862 /* : FlatString */;
static val* varonce863;
val* var864 /* : String */;
char* var865 /* : NativeString */;
long var866 /* : Int */;
val* var867 /* : FlatString */;
static val* varonce868;
val* var869 /* : String */;
char* var870 /* : NativeString */;
long var871 /* : Int */;
val* var872 /* : FlatString */;
val* var873 /* : Array[Object] */;
long var874 /* : Int */;
val* var875 /* : NativeArray[Object] */;
val* var876 /* : String */;
static val* varonce877;
val* var878 /* : String */;
char* var879 /* : NativeString */;
long var880 /* : Int */;
val* var881 /* : FlatString */;
static val* varonce882;
val* var883 /* : String */;
char* var884 /* : NativeString */;
long var885 /* : Int */;
val* var886 /* : FlatString */;
static val* varonce887;
val* var888 /* : String */;
char* var889 /* : NativeString */;
long var890 /* : Int */;
val* var891 /* : FlatString */;
val* var892 /* : Array[Object] */;
long var893 /* : Int */;
val* var894 /* : NativeArray[Object] */;
val* var895 /* : String */;
val* var897 /* : ModelBuilder */;
val* var899 /* : ModelBuilder */;
val* var900 /* : ToolContext */;
val* var902 /* : ToolContext */;
val* var903 /* : OptionBool */;
val* var905 /* : OptionBool */;
val* var906 /* : nullable Object */;
val* var908 /* : nullable Object */;
short int var909 /* : Bool */;
static val* varonce910;
val* var911 /* : String */;
char* var912 /* : NativeString */;
long var913 /* : Int */;
val* var914 /* : FlatString */;
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
val* var940 /* : ModelBuilder */;
val* var942 /* : ModelBuilder */;
val* var943 /* : ToolContext */;
val* var945 /* : ToolContext */;
val* var946 /* : OptionBool */;
val* var948 /* : OptionBool */;
val* var949 /* : nullable Object */;
val* var951 /* : nullable Object */;
short int var952 /* : Bool */;
static val* varonce953;
val* var954 /* : String */;
char* var955 /* : NativeString */;
long var956 /* : Int */;
val* var957 /* : FlatString */;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 62);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 888);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
var122 = array__AbstractArrayRead__iterator(var119);
}
for(;;) {
{
var123 = array__ArrayIterator__is_ok(var122);
}
if(!var123) break;
{
var124 = array__ArrayIterator__item(var122);
}
var_tag = var124;
if (varonce125) {
var126 = varonce125;
} else {
var127 = "long count_type_test_resolved_";
var128 = 30;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = ";";
var133 = 1;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
var135 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var135 = array_instance Array[Object] */
var136 = 3;
var137 = NEW_array__NativeArray(var136, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var137)->values[0] = (val*) var126;
((struct instance_array__NativeArray*)var137)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var137)->values[2] = (val*) var131;
{
((void (*)(val*, val*, long))(var135->class->vft[COLOR_array__Array__with_native]))(var135, var137, var136) /* with_native on <var135:Array[Object]>*/;
}
}
{
var138 = ((val* (*)(val*))(var135->class->vft[COLOR_string__Object__to_s]))(var135) /* to_s on <var135:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var138); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "long count_type_test_unresolved_";
var142 = 32;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = ";";
var147 = 1;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
var149 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var149 = array_instance Array[Object] */
var150 = 3;
var151 = NEW_array__NativeArray(var150, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var151)->values[0] = (val*) var140;
((struct instance_array__NativeArray*)var151)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var151)->values[2] = (val*) var145;
{
((void (*)(val*, val*, long))(var149->class->vft[COLOR_array__Array__with_native]))(var149, var151, var150) /* with_native on <var149:Array[Object]>*/;
}
}
{
var152 = ((val* (*)(val*))(var149->class->vft[COLOR_string__Object__to_s]))(var149) /* to_s on <var149:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var152); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = "long count_type_test_skipped_";
var156 = 29;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
if (varonce158) {
var159 = varonce158;
} else {
var160 = ";";
var161 = 1;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
var163 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var163 = array_instance Array[Object] */
var164 = 3;
var165 = NEW_array__NativeArray(var164, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var165)->values[0] = (val*) var154;
((struct instance_array__NativeArray*)var165)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var165)->values[2] = (val*) var159;
{
((void (*)(val*, val*, long))(var163->class->vft[COLOR_array__Array__with_native]))(var163, var165, var164) /* with_native on <var163:Array[Object]>*/;
}
}
{
var166 = ((val* (*)(val*))(var163->class->vft[COLOR_string__Object__to_s]))(var163) /* to_s on <var163:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var166); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var169 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var167) on <var167:AbstractCompiler> */
var172 = var167->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var167:AbstractCompiler> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = "extern long count_type_test_resolved_";
var176 = 37;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = ";";
var181 = 1;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
var183 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var183 = array_instance Array[Object] */
var184 = 3;
var185 = NEW_array__NativeArray(var184, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var185)->values[0] = (val*) var174;
((struct instance_array__NativeArray*)var185)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var185)->values[2] = (val*) var179;
{
((void (*)(val*, val*, long))(var183->class->vft[COLOR_array__Array__with_native]))(var183, var185, var184) /* with_native on <var183:Array[Object]>*/;
}
}
{
var186 = ((val* (*)(val*))(var183->class->vft[COLOR_string__Object__to_s]))(var183) /* to_s on <var183:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var170, var186); /* Direct call abstract_compiler#CodeWriter#add_decl on <var170:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var189 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var187) on <var187:AbstractCompiler> */
var192 = var187->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var187:AbstractCompiler> */
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
if (varonce193) {
var194 = varonce193;
} else {
var195 = "extern long count_type_test_unresolved_";
var196 = 39;
var197 = string__NativeString__to_s_with_length(var195, var196);
var194 = var197;
varonce193 = var194;
}
if (varonce198) {
var199 = varonce198;
} else {
var200 = ";";
var201 = 1;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
var203 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var203 = array_instance Array[Object] */
var204 = 3;
var205 = NEW_array__NativeArray(var204, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var205)->values[0] = (val*) var194;
((struct instance_array__NativeArray*)var205)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var205)->values[2] = (val*) var199;
{
((void (*)(val*, val*, long))(var203->class->vft[COLOR_array__Array__with_native]))(var203, var205, var204) /* with_native on <var203:Array[Object]>*/;
}
}
{
var206 = ((val* (*)(val*))(var203->class->vft[COLOR_string__Object__to_s]))(var203) /* to_s on <var203:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var190, var206); /* Direct call abstract_compiler#CodeWriter#add_decl on <var190:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var209 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler#AbstractCompiler#header (var207) on <var207:AbstractCompiler> */
var212 = var207->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var207:AbstractCompiler> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "extern long count_type_test_skipped_";
var216 = 36;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = ";";
var221 = 1;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
var223 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var223 = array_instance Array[Object] */
var224 = 3;
var225 = NEW_array__NativeArray(var224, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var225)->values[0] = (val*) var214;
((struct instance_array__NativeArray*)var225)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var225)->values[2] = (val*) var219;
{
((void (*)(val*, val*, long))(var223->class->vft[COLOR_array__Array__with_native]))(var223, var225, var224) /* with_native on <var223:Array[Object]>*/;
}
}
{
var226 = ((val* (*)(val*))(var223->class->vft[COLOR_string__Object__to_s]))(var223) /* to_s on <var223:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var210, var226); /* Direct call abstract_compiler#CodeWriter#add_decl on <var210:CodeWriter>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var122); /* Direct call array#ArrayIterator#next on <var122:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var229 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var229 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var227 = var229;
RET_LABEL228:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var227) on <var227:ModelBuilder> */
var232 = var227->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var227:ModelBuilder> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var230) on <var230:ToolContext> */
var235 = var230->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var230:ToolContext> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 58);
show_backtrace(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
{
{ /* Inline opts#Option#value (var233) on <var233:OptionBool> */
var238 = var233->attrs[COLOR_opts__Option___value].val; /* _value on <var233:OptionBool> */
var236 = var238;
RET_LABEL237:(void)0;
}
}
var239 = ((struct instance_kernel__Bool*)var236)->value; /* autounbox from nullable Object to Bool */;
if (var239){
if (varonce240) {
var241 = varonce240;
} else {
var242 = "long count_invoke_by_tables;";
var243 = 28;
var244 = string__NativeString__to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var241); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce245) {
var246 = varonce245;
} else {
var247 = "long count_invoke_by_direct;";
var248 = 28;
var249 = string__NativeString__to_s_with_length(var247, var248);
var246 = var249;
varonce245 = var246;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var246); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce250) {
var251 = varonce250;
} else {
var252 = "long count_invoke_by_inline;";
var253 = 28;
var254 = string__NativeString__to_s_with_length(var252, var253);
var251 = var254;
varonce250 = var251;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var251); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var257 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var257 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var255) on <var255:AbstractCompiler> */
var260 = var255->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var255:AbstractCompiler> */
if (unlikely(var260 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
if (varonce261) {
var262 = varonce261;
} else {
var263 = "extern long count_invoke_by_tables;";
var264 = 35;
var265 = string__NativeString__to_s_with_length(var263, var264);
var262 = var265;
varonce261 = var262;
}
{
abstract_compiler__CodeWriter__add_decl(var258, var262); /* Direct call abstract_compiler#CodeWriter#add_decl on <var258:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var268 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var268 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var266) on <var266:AbstractCompiler> */
var271 = var266->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var266:AbstractCompiler> */
if (unlikely(var271 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var269 = var271;
RET_LABEL270:(void)0;
}
}
if (varonce272) {
var273 = varonce272;
} else {
var274 = "extern long count_invoke_by_direct;";
var275 = 35;
var276 = string__NativeString__to_s_with_length(var274, var275);
var273 = var276;
varonce272 = var273;
}
{
abstract_compiler__CodeWriter__add_decl(var269, var273); /* Direct call abstract_compiler#CodeWriter#add_decl on <var269:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var279 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var279 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var277) on <var277:AbstractCompiler> */
var282 = var277->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var277:AbstractCompiler> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
if (varonce283) {
var284 = varonce283;
} else {
var285 = "extern long count_invoke_by_inline;";
var286 = 35;
var287 = string__NativeString__to_s_with_length(var285, var286);
var284 = var287;
varonce283 = var284;
}
{
abstract_compiler__CodeWriter__add_decl(var280, var284); /* Direct call abstract_compiler#CodeWriter#add_decl on <var280:CodeWriter>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var290 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var290 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var288 = var290;
RET_LABEL289:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var288) on <var288:ModelBuilder> */
var293 = var288->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var288:ModelBuilder> */
if (unlikely(var293 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var291 = var293;
RET_LABEL292:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var291) on <var291:ToolContext> */
var296 = var291->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var291:ToolContext> */
if (unlikely(var296 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 60);
show_backtrace(1);
}
var294 = var296;
RET_LABEL295:(void)0;
}
}
{
{ /* Inline opts#Option#value (var294) on <var294:OptionBool> */
var299 = var294->attrs[COLOR_opts__Option___value].val; /* _value on <var294:OptionBool> */
var297 = var299;
RET_LABEL298:(void)0;
}
}
var300 = ((struct instance_kernel__Bool*)var297)->value; /* autounbox from nullable Object to Bool */;
if (var300){
if (varonce301) {
var302 = varonce301;
} else {
var303 = "long count_attr_reads = 0;";
var304 = 26;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var302); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce306) {
var307 = varonce306;
} else {
var308 = "long count_isset_checks = 0;";
var309 = 28;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var307); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var313 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var313 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var311 = var313;
RET_LABEL312:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var311) on <var311:AbstractCompiler> */
var316 = var311->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var311:AbstractCompiler> */
if (unlikely(var316 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
if (varonce317) {
var318 = varonce317;
} else {
var319 = "extern long count_attr_reads;";
var320 = 29;
var321 = string__NativeString__to_s_with_length(var319, var320);
var318 = var321;
varonce317 = var318;
}
{
abstract_compiler__CodeWriter__add_decl(var314, var318); /* Direct call abstract_compiler#CodeWriter#add_decl on <var314:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var324 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var324 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var322 = var324;
RET_LABEL323:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var322) on <var322:AbstractCompiler> */
var327 = var322->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var322:AbstractCompiler> */
if (unlikely(var327 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var325 = var327;
RET_LABEL326:(void)0;
}
}
if (varonce328) {
var329 = varonce328;
} else {
var330 = "extern long count_isset_checks;";
var331 = 31;
var332 = string__NativeString__to_s_with_length(var330, var331);
var329 = var332;
varonce328 = var329;
}
{
abstract_compiler__CodeWriter__add_decl(var325, var329); /* Direct call abstract_compiler#CodeWriter#add_decl on <var325:CodeWriter>*/
}
} else {
}
if (varonce333) {
var334 = varonce333;
} else {
var335 = "void sig_handler(int signo){";
var336 = 28;
var337 = string__NativeString__to_s_with_length(var335, var336);
var334 = var337;
varonce333 = var334;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var334); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce338) {
var339 = varonce338;
} else {
var340 = "PRINT_ERROR(\"Caught signal : %s\\n\", strsignal(signo));";
var341 = 54;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var339); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce343) {
var344 = varonce343;
} else {
var345 = "show_backtrace(signo);";
var346 = 22;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var344); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce348) {
var349 = varonce348;
} else {
var350 = "}";
var351 = 1;
var352 = string__NativeString__to_s_with_length(var350, var351);
var349 = var352;
varonce348 = var349;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var349); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce353) {
var354 = varonce353;
} else {
var355 = "void show_backtrace (int signo) {";
var356 = 33;
var357 = string__NativeString__to_s_with_length(var355, var356);
var354 = var357;
varonce353 = var354;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var354); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce359) {
var360 = varonce359;
} else {
var361 = "nitstack";
var362 = 8;
var363 = string__NativeString__to_s_with_length(var361, var362);
var360 = var363;
varonce359 = var360;
}
if (var_ost == NULL) {
var364 = 0; /* <var360:String> cannot be null */
} else {
var365 = string__FlatString___61d_61d(var_ost, var360);
var364 = var365;
}
var_366 = var364;
if (var364){
var358 = var_366;
} else {
if (varonce367) {
var368 = varonce367;
} else {
var369 = "libunwind";
var370 = 9;
var371 = string__NativeString__to_s_with_length(var369, var370);
var368 = var371;
varonce367 = var368;
}
if (var_ost == NULL) {
var372 = 0; /* <var368:String> cannot be null */
} else {
var373 = string__FlatString___61d_61d(var_ost, var368);
var372 = var373;
}
var358 = var372;
}
if (var358){
if (varonce374) {
var375 = varonce374;
} else {
var376 = "char* opt = getenv(\"NIT_NO_STACK\");";
var377 = 35;
var378 = string__NativeString__to_s_with_length(var376, var377);
var375 = var378;
varonce374 = var375;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var375); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce379) {
var380 = varonce379;
} else {
var381 = "unw_cursor_t cursor;";
var382 = 20;
var383 = string__NativeString__to_s_with_length(var381, var382);
var380 = var383;
varonce379 = var380;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var380); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce384) {
var385 = varonce384;
} else {
var386 = "if(opt==NULL){";
var387 = 14;
var388 = string__NativeString__to_s_with_length(var386, var387);
var385 = var388;
varonce384 = var385;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var385); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce389) {
var390 = varonce389;
} else {
var391 = "unw_context_t uc;";
var392 = 17;
var393 = string__NativeString__to_s_with_length(var391, var392);
var390 = var393;
varonce389 = var390;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var390); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce394) {
var395 = varonce394;
} else {
var396 = "unw_word_t ip;";
var397 = 14;
var398 = string__NativeString__to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var395); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce399) {
var400 = varonce399;
} else {
var401 = "char* procname = malloc(sizeof(char) * 100);";
var402 = 44;
var403 = string__NativeString__to_s_with_length(var401, var402);
var400 = var403;
varonce399 = var400;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var400); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce404) {
var405 = varonce404;
} else {
var406 = "unw_getcontext(&uc);";
var407 = 20;
var408 = string__NativeString__to_s_with_length(var406, var407);
var405 = var408;
varonce404 = var405;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var405); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce409) {
var410 = varonce409;
} else {
var411 = "unw_init_local(&cursor, &uc);";
var412 = 29;
var413 = string__NativeString__to_s_with_length(var411, var412);
var410 = var413;
varonce409 = var410;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var410); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce414) {
var415 = varonce414;
} else {
var416 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var417 = 67;
var418 = string__NativeString__to_s_with_length(var416, var417);
var415 = var418;
varonce414 = var415;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var415); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce419) {
var420 = varonce419;
} else {
var421 = "PRINT_ERROR(\"--   Stack Trace   ------------------------------\\n\");";
var422 = 67;
var423 = string__NativeString__to_s_with_length(var421, var422);
var420 = var423;
varonce419 = var420;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var420); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce424) {
var425 = varonce424;
} else {
var426 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var427 = 67;
var428 = string__NativeString__to_s_with_length(var426, var427);
var425 = var428;
varonce424 = var425;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var425); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce429) {
var430 = varonce429;
} else {
var431 = "while (unw_step(&cursor) > 0) {";
var432 = 31;
var433 = string__NativeString__to_s_with_length(var431, var432);
var430 = var433;
varonce429 = var430;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var430); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce434) {
var435 = varonce434;
} else {
var436 = "\11unw_get_proc_name(&cursor, procname, 100, &ip);";
var437 = 48;
var438 = string__NativeString__to_s_with_length(var436, var437);
var435 = var438;
varonce434 = var435;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var435); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce439) {
var440 = varonce439;
} else {
var441 = "nitstack";
var442 = 8;
var443 = string__NativeString__to_s_with_length(var441, var442);
var440 = var443;
varonce439 = var440;
}
if (var_ost == NULL) {
var444 = 0; /* <var440:String> cannot be null */
} else {
var445 = string__FlatString___61d_61d(var_ost, var440);
var444 = var445;
}
if (var444){
if (varonce446) {
var447 = varonce446;
} else {
var448 = "\11const char* recv = get_nit_name(procname, strlen(procname));";
var449 = 61;
var450 = string__NativeString__to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var447); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce451) {
var452 = varonce451;
} else {
var453 = "\11if (recv != NULL){";
var454 = 19;
var455 = string__NativeString__to_s_with_length(var453, var454);
var452 = var455;
varonce451 = var452;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var452); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce456) {
var457 = varonce456;
} else {
var458 = "\11\11PRINT_ERROR(\"` %s\\n\", recv);";
var459 = 30;
var460 = string__NativeString__to_s_with_length(var458, var459);
var457 = var460;
varonce456 = var457;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var457); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce461) {
var462 = varonce461;
} else {
var463 = "\11}else{";
var464 = 7;
var465 = string__NativeString__to_s_with_length(var463, var464);
var462 = var465;
varonce461 = var462;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var462); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce466) {
var467 = varonce466;
} else {
var468 = "\11\11PRINT_ERROR(\"` %s\\n\", procname);";
var469 = 34;
var470 = string__NativeString__to_s_with_length(var468, var469);
var467 = var470;
varonce466 = var467;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var467); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce471) {
var472 = varonce471;
} else {
var473 = "\11}";
var474 = 2;
var475 = string__NativeString__to_s_with_length(var473, var474);
var472 = var475;
varonce471 = var472;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var472); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce476) {
var477 = varonce476;
} else {
var478 = "\11PRINT_ERROR(\"` %s \\n\",procname);";
var479 = 33;
var480 = string__NativeString__to_s_with_length(var478, var479);
var477 = var480;
varonce476 = var477;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var477); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
if (varonce481) {
var482 = varonce481;
} else {
var483 = "}";
var484 = 1;
var485 = string__NativeString__to_s_with_length(var483, var484);
var482 = var485;
varonce481 = var482;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var482); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce486) {
var487 = varonce486;
} else {
var488 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var489 = 67;
var490 = string__NativeString__to_s_with_length(var488, var489);
var487 = var490;
varonce486 = var487;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var487); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce491) {
var492 = varonce491;
} else {
var493 = "free(procname);";
var494 = 15;
var495 = string__NativeString__to_s_with_length(var493, var494);
var492 = var495;
varonce491 = var492;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var492); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce496) {
var497 = varonce496;
} else {
var498 = "}";
var499 = 1;
var500 = string__NativeString__to_s_with_length(var498, var499);
var497 = var500;
varonce496 = var497;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var497); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce501) {
var502 = varonce501;
} else {
var503 = "exit(signo);";
var504 = 12;
var505 = string__NativeString__to_s_with_length(var503, var504);
var502 = var505;
varonce501 = var502;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var502); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce506) {
var507 = varonce506;
} else {
var508 = "}";
var509 = 1;
var510 = string__NativeString__to_s_with_length(var508, var509);
var507 = var510;
varonce506 = var507;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var507); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (var_no_main){
if (varonce511) {
var512 = varonce511;
} else {
var513 = "int nit_main(int argc, char** argv) {";
var514 = 37;
var515 = string__NativeString__to_s_with_length(var513, var514);
var512 = var515;
varonce511 = var512;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var512); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce516) {
var517 = varonce516;
} else {
var518 = "int main(int argc, char** argv) {";
var519 = 33;
var520 = string__NativeString__to_s_with_length(var518, var519);
var517 = var520;
varonce516 = var517;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var517); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
if (varonce521) {
var522 = varonce521;
} else {
var523 = "signal(SIGABRT, sig_handler);";
var524 = 29;
var525 = string__NativeString__to_s_with_length(var523, var524);
var522 = var525;
varonce521 = var522;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var522); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce526) {
var527 = varonce526;
} else {
var528 = "signal(SIGFPE, sig_handler);";
var529 = 28;
var530 = string__NativeString__to_s_with_length(var528, var529);
var527 = var530;
varonce526 = var527;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var527); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce531) {
var532 = varonce531;
} else {
var533 = "signal(SIGILL, sig_handler);";
var534 = 28;
var535 = string__NativeString__to_s_with_length(var533, var534);
var532 = var535;
varonce531 = var532;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var532); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce536) {
var537 = varonce536;
} else {
var538 = "signal(SIGINT, sig_handler);";
var539 = 28;
var540 = string__NativeString__to_s_with_length(var538, var539);
var537 = var540;
varonce536 = var537;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var537); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce541) {
var542 = varonce541;
} else {
var543 = "signal(SIGTERM, sig_handler);";
var544 = 29;
var545 = string__NativeString__to_s_with_length(var543, var544);
var542 = var545;
varonce541 = var542;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var542); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce546) {
var547 = varonce546;
} else {
var548 = "signal(SIGSEGV, sig_handler);";
var549 = 29;
var550 = string__NativeString__to_s_with_length(var548, var549);
var547 = var550;
varonce546 = var547;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var547); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce551) {
var552 = varonce551;
} else {
var553 = "signal(SIGPIPE, sig_handler);";
var554 = 29;
var555 = string__NativeString__to_s_with_length(var553, var554);
var552 = var555;
varonce551 = var552;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var552); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce556) {
var557 = varonce556;
} else {
var558 = "glob_argc = argc; glob_argv = argv;";
var559 = 35;
var560 = string__NativeString__to_s_with_length(var558, var559);
var557 = var560;
varonce556 = var557;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var557); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce561) {
var562 = varonce561;
} else {
var563 = "initialize_gc_option();";
var564 = 23;
var565 = string__NativeString__to_s_with_length(var563, var564);
var562 = var565;
varonce561 = var562;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var562); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce566) {
var567 = varonce566;
} else {
var568 = "initialize_nitni_global_refs();";
var569 = 31;
var570 = string__NativeString__to_s_with_length(var568, var569);
var567 = var570;
varonce566 = var567;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var567); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var573 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var573 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var571 = var573;
RET_LABEL572:(void)0;
}
}
{
var574 = model__MModule__sys_type(var571);
}
var_main_type = var574;
var575 = NULL;
if (var_main_type == NULL) {
var576 = 0; /* is null */
} else {
var576 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_type,var575) on <var_main_type:nullable MClassType> */
var_other = var575;
{
var580 = ((short int (*)(val*, val*))(var_main_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_main_type, var_other) /* == on <var_main_type:nullable MClassType(MClassType)>*/;
var579 = var580;
}
var581 = !var579;
var577 = var581;
goto RET_LABEL578;
RET_LABEL578:(void)0;
}
var576 = var577;
}
if (var576){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var584 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var584 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var582 = var584;
RET_LABEL583:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var582) on <var582:AbstractCompiler> */
var587 = var582->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var582:AbstractCompiler> */
if (unlikely(var587 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var585 = var587;
RET_LABEL586:(void)0;
}
}
var_mainmodule = var585;
{
var588 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_glob_sys = var588;
if (varonce589) {
var590 = varonce589;
} else {
var591 = "glob_sys = ";
var592 = 11;
var593 = string__NativeString__to_s_with_length(var591, var592);
var590 = var593;
varonce589 = var590;
}
if (varonce594) {
var595 = varonce594;
} else {
var596 = ";";
var597 = 1;
var598 = string__NativeString__to_s_with_length(var596, var597);
var595 = var598;
varonce594 = var595;
}
var599 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var599 = array_instance Array[Object] */
var600 = 3;
var601 = NEW_array__NativeArray(var600, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var601)->values[0] = (val*) var590;
((struct instance_array__NativeArray*)var601)->values[1] = (val*) var_glob_sys;
((struct instance_array__NativeArray*)var601)->values[2] = (val*) var595;
{
((void (*)(val*, val*, long))(var599->class->vft[COLOR_array__Array__with_native]))(var599, var601, var600) /* with_native on <var599:Array[Object]>*/;
}
}
{
var602 = ((val* (*)(val*))(var599->class->vft[COLOR_string__Object__to_s]))(var599) /* to_s on <var599:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var602); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce603) {
var604 = varonce603;
} else {
var605 = "init";
var606 = 4;
var607 = string__NativeString__to_s_with_length(var605, var606);
var604 = var607;
varonce603 = var604;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var610 = var_main_type->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var610 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var608 = var610;
RET_LABEL609:(void)0;
}
}
{
var611 = model__MModule__try_get_primitive_method(var_mainmodule, var604, var608);
}
var_main_init = var611;
var612 = NULL;
if (var_main_init == NULL) {
var613 = 0; /* is null */
} else {
var613 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_init,var612) on <var_main_init:nullable MMethod> */
var_other = var612;
{
var617 = ((short int (*)(val*, val*))(var_main_init->class->vft[COLOR_kernel__Object___61d_61d]))(var_main_init, var_other) /* == on <var_main_init:nullable MMethod(MMethod)>*/;
var616 = var617;
}
var618 = !var616;
var614 = var618;
goto RET_LABEL615;
RET_LABEL615:(void)0;
}
var613 = var614;
}
if (var613){
var619 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var620 = 1;
{
array__Array__with_capacity(var619, var620); /* Direct call array#Array#with_capacity on <var619:Array[RuntimeVariable]>*/
}
var_621 = var619;
{
array__AbstractArray__push(var_621, var_glob_sys); /* Direct call array#AbstractArray#push on <var_621:Array[RuntimeVariable]>*/
}
{
var622 = separate_compiler__SeparateCompilerVisitor__send(var_v, var_main_init, var_621);
}
var622;
} else {
}
if (varonce623) {
var624 = varonce623;
} else {
var625 = "main";
var626 = 4;
var627 = string__NativeString__to_s_with_length(var625, var626);
var624 = var627;
varonce623 = var624;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var630 = var_main_type->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var630 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var628 = var630;
RET_LABEL629:(void)0;
}
}
{
var631 = model__MModule__try_get_primitive_method(var_mainmodule, var624, var628);
}
var_main_method = var631;
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
var637 = ((short int (*)(val*, val*))(var_main_method->class->vft[COLOR_kernel__Object___61d_61d]))(var_main_method, var_other) /* == on <var_main_method:nullable MMethod(MMethod)>*/;
var636 = var637;
}
var638 = !var636;
var634 = var638;
goto RET_LABEL635;
RET_LABEL635:(void)0;
}
var633 = var634;
}
if (var633){
var639 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var640 = 1;
{
array__Array__with_capacity(var639, var640); /* Direct call array#Array#with_capacity on <var639:Array[RuntimeVariable]>*/
}
var_641 = var639;
{
array__AbstractArray__push(var_641, var_glob_sys); /* Direct call array#AbstractArray#push on <var_641:Array[RuntimeVariable]>*/
}
{
var642 = separate_compiler__SeparateCompilerVisitor__send(var_v, var_main_method, var_641);
}
var642;
} else {
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var645 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var645 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var643 = var645;
RET_LABEL644:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var643) on <var643:ModelBuilder> */
var648 = var643->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var643:ModelBuilder> */
if (unlikely(var648 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var646 = var648;
RET_LABEL647:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var646) on <var646:ToolContext> */
var651 = var646->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var646:ToolContext> */
if (unlikely(var651 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
show_backtrace(1);
}
var649 = var651;
RET_LABEL650:(void)0;
}
}
{
{ /* Inline opts#Option#value (var649) on <var649:OptionBool> */
var654 = var649->attrs[COLOR_opts__Option___value].val; /* _value on <var649:OptionBool> */
var652 = var654;
RET_LABEL653:(void)0;
}
}
var655 = ((struct instance_kernel__Bool*)var652)->value; /* autounbox from nullable Object to Bool */;
if (var655){
if (varonce656) {
var657 = varonce656;
} else {
var658 = "long count_type_test_resolved_total = 0;";
var659 = 40;
var660 = string__NativeString__to_s_with_length(var658, var659);
var657 = var660;
varonce656 = var657;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var657); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce661) {
var662 = varonce661;
} else {
var663 = "long count_type_test_unresolved_total = 0;";
var664 = 42;
var665 = string__NativeString__to_s_with_length(var663, var664);
var662 = var665;
varonce661 = var662;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var662); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce666) {
var667 = varonce666;
} else {
var668 = "long count_type_test_skipped_total = 0;";
var669 = 39;
var670 = string__NativeString__to_s_with_length(var668, var669);
var667 = var670;
varonce666 = var667;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var667); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce671) {
var672 = varonce671;
} else {
var673 = "long count_type_test_total_total = 0;";
var674 = 37;
var675 = string__NativeString__to_s_with_length(var673, var674);
var672 = var675;
varonce671 = var672;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var672); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var678 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var678 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 888);
show_backtrace(1);
}
var676 = var678;
RET_LABEL677:(void)0;
}
}
{
var679 = array__AbstractArrayRead__iterator(var676);
}
for(;;) {
{
var680 = array__ArrayIterator__is_ok(var679);
}
if(!var680) break;
{
var681 = array__ArrayIterator__item(var679);
}
var_tag682 = var681;
if (varonce683) {
var684 = varonce683;
} else {
var685 = "long count_type_test_total_";
var686 = 27;
var687 = string__NativeString__to_s_with_length(var685, var686);
var684 = var687;
varonce683 = var684;
}
if (varonce688) {
var689 = varonce688;
} else {
var690 = ";";
var691 = 1;
var692 = string__NativeString__to_s_with_length(var690, var691);
var689 = var692;
varonce688 = var689;
}
var693 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var693 = array_instance Array[Object] */
var694 = 3;
var695 = NEW_array__NativeArray(var694, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var695)->values[0] = (val*) var684;
((struct instance_array__NativeArray*)var695)->values[1] = (val*) var_tag682;
((struct instance_array__NativeArray*)var695)->values[2] = (val*) var689;
{
((void (*)(val*, val*, long))(var693->class->vft[COLOR_array__Array__with_native]))(var693, var695, var694) /* with_native on <var693:Array[Object]>*/;
}
}
{
var696 = ((val* (*)(val*))(var693->class->vft[COLOR_string__Object__to_s]))(var693) /* to_s on <var693:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var696); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce697) {
var698 = varonce697;
} else {
var699 = "count_type_test_total_";
var700 = 22;
var701 = string__NativeString__to_s_with_length(var699, var700);
var698 = var701;
varonce697 = var698;
}
if (varonce702) {
var703 = varonce702;
} else {
var704 = " = count_type_test_resolved_";
var705 = 28;
var706 = string__NativeString__to_s_with_length(var704, var705);
var703 = var706;
varonce702 = var703;
}
if (varonce707) {
var708 = varonce707;
} else {
var709 = " + count_type_test_unresolved_";
var710 = 30;
var711 = string__NativeString__to_s_with_length(var709, var710);
var708 = var711;
varonce707 = var708;
}
if (varonce712) {
var713 = varonce712;
} else {
var714 = " + count_type_test_skipped_";
var715 = 27;
var716 = string__NativeString__to_s_with_length(var714, var715);
var713 = var716;
varonce712 = var713;
}
if (varonce717) {
var718 = varonce717;
} else {
var719 = ";";
var720 = 1;
var721 = string__NativeString__to_s_with_length(var719, var720);
var718 = var721;
varonce717 = var718;
}
var722 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var722 = array_instance Array[Object] */
var723 = 9;
var724 = NEW_array__NativeArray(var723, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var724)->values[0] = (val*) var698;
((struct instance_array__NativeArray*)var724)->values[1] = (val*) var_tag682;
((struct instance_array__NativeArray*)var724)->values[2] = (val*) var703;
((struct instance_array__NativeArray*)var724)->values[3] = (val*) var_tag682;
((struct instance_array__NativeArray*)var724)->values[4] = (val*) var708;
((struct instance_array__NativeArray*)var724)->values[5] = (val*) var_tag682;
((struct instance_array__NativeArray*)var724)->values[6] = (val*) var713;
((struct instance_array__NativeArray*)var724)->values[7] = (val*) var_tag682;
((struct instance_array__NativeArray*)var724)->values[8] = (val*) var718;
{
((void (*)(val*, val*, long))(var722->class->vft[COLOR_array__Array__with_native]))(var722, var724, var723) /* with_native on <var722:Array[Object]>*/;
}
}
{
var725 = ((val* (*)(val*))(var722->class->vft[COLOR_string__Object__to_s]))(var722) /* to_s on <var722:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var725); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce726) {
var727 = varonce726;
} else {
var728 = "count_type_test_resolved_total += count_type_test_resolved_";
var729 = 59;
var730 = string__NativeString__to_s_with_length(var728, var729);
var727 = var730;
varonce726 = var727;
}
if (varonce731) {
var732 = varonce731;
} else {
var733 = ";";
var734 = 1;
var735 = string__NativeString__to_s_with_length(var733, var734);
var732 = var735;
varonce731 = var732;
}
var736 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var736 = array_instance Array[Object] */
var737 = 3;
var738 = NEW_array__NativeArray(var737, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var738)->values[0] = (val*) var727;
((struct instance_array__NativeArray*)var738)->values[1] = (val*) var_tag682;
((struct instance_array__NativeArray*)var738)->values[2] = (val*) var732;
{
((void (*)(val*, val*, long))(var736->class->vft[COLOR_array__Array__with_native]))(var736, var738, var737) /* with_native on <var736:Array[Object]>*/;
}
}
{
var739 = ((val* (*)(val*))(var736->class->vft[COLOR_string__Object__to_s]))(var736) /* to_s on <var736:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var739); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce740) {
var741 = varonce740;
} else {
var742 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var743 = 63;
var744 = string__NativeString__to_s_with_length(var742, var743);
var741 = var744;
varonce740 = var741;
}
if (varonce745) {
var746 = varonce745;
} else {
var747 = ";";
var748 = 1;
var749 = string__NativeString__to_s_with_length(var747, var748);
var746 = var749;
varonce745 = var746;
}
var750 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var750 = array_instance Array[Object] */
var751 = 3;
var752 = NEW_array__NativeArray(var751, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var752)->values[0] = (val*) var741;
((struct instance_array__NativeArray*)var752)->values[1] = (val*) var_tag682;
((struct instance_array__NativeArray*)var752)->values[2] = (val*) var746;
{
((void (*)(val*, val*, long))(var750->class->vft[COLOR_array__Array__with_native]))(var750, var752, var751) /* with_native on <var750:Array[Object]>*/;
}
}
{
var753 = ((val* (*)(val*))(var750->class->vft[COLOR_string__Object__to_s]))(var750) /* to_s on <var750:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var753); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce754) {
var755 = varonce754;
} else {
var756 = "count_type_test_skipped_total += count_type_test_skipped_";
var757 = 57;
var758 = string__NativeString__to_s_with_length(var756, var757);
var755 = var758;
varonce754 = var755;
}
if (varonce759) {
var760 = varonce759;
} else {
var761 = ";";
var762 = 1;
var763 = string__NativeString__to_s_with_length(var761, var762);
var760 = var763;
varonce759 = var760;
}
var764 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var764 = array_instance Array[Object] */
var765 = 3;
var766 = NEW_array__NativeArray(var765, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var766)->values[0] = (val*) var755;
((struct instance_array__NativeArray*)var766)->values[1] = (val*) var_tag682;
((struct instance_array__NativeArray*)var766)->values[2] = (val*) var760;
{
((void (*)(val*, val*, long))(var764->class->vft[COLOR_array__Array__with_native]))(var764, var766, var765) /* with_native on <var764:Array[Object]>*/;
}
}
{
var767 = ((val* (*)(val*))(var764->class->vft[COLOR_string__Object__to_s]))(var764) /* to_s on <var764:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var767); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce768) {
var769 = varonce768;
} else {
var770 = "count_type_test_total_total += count_type_test_total_";
var771 = 53;
var772 = string__NativeString__to_s_with_length(var770, var771);
var769 = var772;
varonce768 = var769;
}
if (varonce773) {
var774 = varonce773;
} else {
var775 = ";";
var776 = 1;
var777 = string__NativeString__to_s_with_length(var775, var776);
var774 = var777;
varonce773 = var774;
}
var778 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var778 = array_instance Array[Object] */
var779 = 3;
var780 = NEW_array__NativeArray(var779, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var780)->values[0] = (val*) var769;
((struct instance_array__NativeArray*)var780)->values[1] = (val*) var_tag682;
((struct instance_array__NativeArray*)var780)->values[2] = (val*) var774;
{
((void (*)(val*, val*, long))(var778->class->vft[COLOR_array__Array__with_native]))(var778, var780, var779) /* with_native on <var778:Array[Object]>*/;
}
}
{
var781 = ((val* (*)(val*))(var778->class->vft[COLOR_string__Object__to_s]))(var778) /* to_s on <var778:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var781); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
CONTINUE_label782: (void)0;
{
array__ArrayIterator__next(var679); /* Direct call array#ArrayIterator#next on <var679:ArrayIterator[nullable Object]>*/
}
}
BREAK_label782: (void)0;
if (varonce783) {
var784 = varonce783;
} else {
var785 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var786 = 48;
var787 = string__NativeString__to_s_with_length(var785, var786);
var784 = var787;
varonce783 = var784;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var784); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce788) {
var789 = varonce788;
} else {
var790 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var791 = 51;
var792 = string__NativeString__to_s_with_length(var790, var791);
var789 = var792;
varonce788 = var789;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var789); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var795 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var795 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 888);
show_backtrace(1);
}
var793 = var795;
RET_LABEL794:(void)0;
}
}
{
var796 = array__Collection__to_a(var793);
}
var_tags = var796;
if (varonce797) {
var798 = varonce797;
} else {
var799 = "total";
var800 = 5;
var801 = string__NativeString__to_s_with_length(var799, var800);
var798 = var801;
varonce797 = var798;
}
{
array__Array__add(var_tags, var798); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
{
var802 = array__AbstractArrayRead__iterator(var_tags);
}
for(;;) {
{
var803 = array__ArrayIterator__is_ok(var802);
}
if(!var803) break;
{
var804 = array__ArrayIterator__item(var802);
}
var_tag805 = var804;
if (varonce806) {
var807 = varonce806;
} else {
var808 = "printf(\"";
var809 = 8;
var810 = string__NativeString__to_s_with_length(var808, var809);
var807 = var810;
varonce806 = var807;
}
if (varonce811) {
var812 = varonce811;
} else {
var813 = "\");";
var814 = 3;
var815 = string__NativeString__to_s_with_length(var813, var814);
var812 = var815;
varonce811 = var812;
}
var816 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var816 = array_instance Array[Object] */
var817 = 3;
var818 = NEW_array__NativeArray(var817, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var818)->values[0] = (val*) var807;
((struct instance_array__NativeArray*)var818)->values[1] = (val*) var_tag805;
((struct instance_array__NativeArray*)var818)->values[2] = (val*) var812;
{
((void (*)(val*, val*, long))(var816->class->vft[COLOR_array__Array__with_native]))(var816, var818, var817) /* with_native on <var816:Array[Object]>*/;
}
}
{
var819 = ((val* (*)(val*))(var816->class->vft[COLOR_string__Object__to_s]))(var816) /* to_s on <var816:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var819); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce820) {
var821 = varonce820;
} else {
var822 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var823 = 50;
var824 = string__NativeString__to_s_with_length(var822, var823);
var821 = var824;
varonce820 = var821;
}
if (varonce825) {
var826 = varonce825;
} else {
var827 = ", 100.0*count_type_test_resolved_";
var828 = 33;
var829 = string__NativeString__to_s_with_length(var827, var828);
var826 = var829;
varonce825 = var826;
}
if (varonce830) {
var831 = varonce830;
} else {
var832 = "/count_type_test_total_total);";
var833 = 30;
var834 = string__NativeString__to_s_with_length(var832, var833);
var831 = var834;
varonce830 = var831;
}
var835 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var835 = array_instance Array[Object] */
var836 = 5;
var837 = NEW_array__NativeArray(var836, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var837)->values[0] = (val*) var821;
((struct instance_array__NativeArray*)var837)->values[1] = (val*) var_tag805;
((struct instance_array__NativeArray*)var837)->values[2] = (val*) var826;
((struct instance_array__NativeArray*)var837)->values[3] = (val*) var_tag805;
((struct instance_array__NativeArray*)var837)->values[4] = (val*) var831;
{
((void (*)(val*, val*, long))(var835->class->vft[COLOR_array__Array__with_native]))(var835, var837, var836) /* with_native on <var835:Array[Object]>*/;
}
}
{
var838 = ((val* (*)(val*))(var835->class->vft[COLOR_string__Object__to_s]))(var835) /* to_s on <var835:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var838); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce839) {
var840 = varonce839;
} else {
var841 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var842 = 52;
var843 = string__NativeString__to_s_with_length(var841, var842);
var840 = var843;
varonce839 = var840;
}
if (varonce844) {
var845 = varonce844;
} else {
var846 = ", 100.0*count_type_test_unresolved_";
var847 = 35;
var848 = string__NativeString__to_s_with_length(var846, var847);
var845 = var848;
varonce844 = var845;
}
if (varonce849) {
var850 = varonce849;
} else {
var851 = "/count_type_test_total_total);";
var852 = 30;
var853 = string__NativeString__to_s_with_length(var851, var852);
var850 = var853;
varonce849 = var850;
}
var854 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var854 = array_instance Array[Object] */
var855 = 5;
var856 = NEW_array__NativeArray(var855, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var856)->values[0] = (val*) var840;
((struct instance_array__NativeArray*)var856)->values[1] = (val*) var_tag805;
((struct instance_array__NativeArray*)var856)->values[2] = (val*) var845;
((struct instance_array__NativeArray*)var856)->values[3] = (val*) var_tag805;
((struct instance_array__NativeArray*)var856)->values[4] = (val*) var850;
{
((void (*)(val*, val*, long))(var854->class->vft[COLOR_array__Array__with_native]))(var854, var856, var855) /* with_native on <var854:Array[Object]>*/;
}
}
{
var857 = ((val* (*)(val*))(var854->class->vft[COLOR_string__Object__to_s]))(var854) /* to_s on <var854:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var857); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce858) {
var859 = varonce858;
} else {
var860 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var861 = 49;
var862 = string__NativeString__to_s_with_length(var860, var861);
var859 = var862;
varonce858 = var859;
}
if (varonce863) {
var864 = varonce863;
} else {
var865 = ", 100.0*count_type_test_skipped_";
var866 = 32;
var867 = string__NativeString__to_s_with_length(var865, var866);
var864 = var867;
varonce863 = var864;
}
if (varonce868) {
var869 = varonce868;
} else {
var870 = "/count_type_test_total_total);";
var871 = 30;
var872 = string__NativeString__to_s_with_length(var870, var871);
var869 = var872;
varonce868 = var869;
}
var873 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var873 = array_instance Array[Object] */
var874 = 5;
var875 = NEW_array__NativeArray(var874, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var875)->values[0] = (val*) var859;
((struct instance_array__NativeArray*)var875)->values[1] = (val*) var_tag805;
((struct instance_array__NativeArray*)var875)->values[2] = (val*) var864;
((struct instance_array__NativeArray*)var875)->values[3] = (val*) var_tag805;
((struct instance_array__NativeArray*)var875)->values[4] = (val*) var869;
{
((void (*)(val*, val*, long))(var873->class->vft[COLOR_array__Array__with_native]))(var873, var875, var874) /* with_native on <var873:Array[Object]>*/;
}
}
{
var876 = ((val* (*)(val*))(var873->class->vft[COLOR_string__Object__to_s]))(var873) /* to_s on <var873:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var876); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce877) {
var878 = varonce877;
} else {
var879 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var880 = 49;
var881 = string__NativeString__to_s_with_length(var879, var880);
var878 = var881;
varonce877 = var878;
}
if (varonce882) {
var883 = varonce882;
} else {
var884 = ", 100.0*count_type_test_total_";
var885 = 30;
var886 = string__NativeString__to_s_with_length(var884, var885);
var883 = var886;
varonce882 = var883;
}
if (varonce887) {
var888 = varonce887;
} else {
var889 = "/count_type_test_total_total);";
var890 = 30;
var891 = string__NativeString__to_s_with_length(var889, var890);
var888 = var891;
varonce887 = var888;
}
var892 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var892 = array_instance Array[Object] */
var893 = 5;
var894 = NEW_array__NativeArray(var893, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var894)->values[0] = (val*) var878;
((struct instance_array__NativeArray*)var894)->values[1] = (val*) var_tag805;
((struct instance_array__NativeArray*)var894)->values[2] = (val*) var883;
((struct instance_array__NativeArray*)var894)->values[3] = (val*) var_tag805;
((struct instance_array__NativeArray*)var894)->values[4] = (val*) var888;
{
((void (*)(val*, val*, long))(var892->class->vft[COLOR_array__Array__with_native]))(var892, var894, var893) /* with_native on <var892:Array[Object]>*/;
}
}
{
var895 = ((val* (*)(val*))(var892->class->vft[COLOR_string__Object__to_s]))(var892) /* to_s on <var892:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var895); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
CONTINUE_label896: (void)0;
{
array__ArrayIterator__next(var802); /* Direct call array#ArrayIterator#next on <var802:ArrayIterator[nullable Object]>*/
}
}
BREAK_label896: (void)0;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var899 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var899 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var897 = var899;
RET_LABEL898:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var897) on <var897:ModelBuilder> */
var902 = var897->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var897:ModelBuilder> */
if (unlikely(var902 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var900 = var902;
RET_LABEL901:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var900) on <var900:ToolContext> */
var905 = var900->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var900:ToolContext> */
if (unlikely(var905 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 58);
show_backtrace(1);
}
var903 = var905;
RET_LABEL904:(void)0;
}
}
{
{ /* Inline opts#Option#value (var903) on <var903:OptionBool> */
var908 = var903->attrs[COLOR_opts__Option___value].val; /* _value on <var903:OptionBool> */
var906 = var908;
RET_LABEL907:(void)0;
}
}
var909 = ((struct instance_kernel__Bool*)var906)->value; /* autounbox from nullable Object to Bool */;
if (var909){
if (varonce910) {
var911 = varonce910;
} else {
var912 = "long count_invoke_total;";
var913 = 24;
var914 = string__NativeString__to_s_with_length(var912, var913);
var911 = var914;
varonce910 = var911;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var911); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce915) {
var916 = varonce915;
} else {
var917 = "count_invoke_total = count_invoke_by_tables + count_invoke_by_direct + count_invoke_by_inline;";
var918 = 94;
var919 = string__NativeString__to_s_with_length(var917, var918);
var916 = var919;
varonce915 = var916;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var916); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce920) {
var921 = varonce920;
} else {
var922 = "printf(\"# dynamic count_invocation: total %ld\\n\", count_invoke_total);";
var923 = 70;
var924 = string__NativeString__to_s_with_length(var922, var923);
var921 = var924;
varonce920 = var921;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var921); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce925) {
var926 = varonce925;
} else {
var927 = "printf(\"by table: %ld (%.2f%%)\\n\", count_invoke_by_tables, 100.0*count_invoke_by_tables/count_invoke_total);";
var928 = 108;
var929 = string__NativeString__to_s_with_length(var927, var928);
var926 = var929;
varonce925 = var926;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var926); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce930) {
var931 = varonce930;
} else {
var932 = "printf(\"direct:   %ld (%.2f%%)\\n\", count_invoke_by_direct, 100.0*count_invoke_by_direct/count_invoke_total);";
var933 = 108;
var934 = string__NativeString__to_s_with_length(var932, var933);
var931 = var934;
varonce930 = var931;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var931); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce935) {
var936 = varonce935;
} else {
var937 = "printf(\"inlined:  %ld (%.2f%%)\\n\", count_invoke_by_inline, 100.0*count_invoke_by_inline/count_invoke_total);";
var938 = 108;
var939 = string__NativeString__to_s_with_length(var937, var938);
var936 = var939;
varonce935 = var936;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var936); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var942 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var942 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var940 = var942;
RET_LABEL941:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var940) on <var940:ModelBuilder> */
var945 = var940->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var940:ModelBuilder> */
if (unlikely(var945 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var943 = var945;
RET_LABEL944:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var943) on <var943:ToolContext> */
var948 = var943->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var943:ToolContext> */
if (unlikely(var948 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 60);
show_backtrace(1);
}
var946 = var948;
RET_LABEL947:(void)0;
}
}
{
{ /* Inline opts#Option#value (var946) on <var946:OptionBool> */
var951 = var946->attrs[COLOR_opts__Option___value].val; /* _value on <var946:OptionBool> */
var949 = var951;
RET_LABEL950:(void)0;
}
}
var952 = ((struct instance_kernel__Bool*)var949)->value; /* autounbox from nullable Object to Bool */;
if (var952){
if (varonce953) {
var954 = varonce953;
} else {
var955 = "printf(\"# dynamic attribute reads: %ld\\n\", count_attr_reads);";
var956 = 61;
var957 = string__NativeString__to_s_with_length(var955, var956);
var954 = var957;
varonce953 = var954;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var954); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce958) {
var959 = varonce958;
} else {
var960 = "printf(\"# dynamic isset checks: %ld\\n\", count_isset_checks);";
var961 = 60;
var962 = string__NativeString__to_s_with_length(var960, var961);
var959 = var962;
varonce958 = var959;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var959); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce963) {
var964 = varonce963;
} else {
var965 = "return 0;";
var966 = 9;
var967 = string__NativeString__to_s_with_length(var965, var966);
var964 = var967;
varonce963 = var964;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var964); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce968) {
var969 = varonce968;
} else {
var970 = "}";
var971 = 1;
var972 = string__NativeString__to_s_with_length(var970, var971);
var969 = var972;
varonce968 = var969;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var969); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 847);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 847);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 850);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 850);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 853);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 853);
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
val* var9 /* : ArrayIterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var12 /* : ModelBuilder */;
val* var14 /* : ModelBuilder */;
val* var15 /* : HashMap[MClassDef, AClassdef] */;
val* var17 /* : HashMap[MClassDef, AClassdef] */;
val* var18 /* : nullable Object */;
val* var_n /* var n: AClassdef */;
val* var19 /* : ANodes[APropdef] */;
val* var21 /* : ANodes[APropdef] */;
val* var22 /* : Iterator[ANode] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 856);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
model__MModule__linearize_mclassdefs(var6, var_cds); /* Direct call model#MModule#linearize_mclassdefs on <var6:MModule>*/
}
{
var9 = array__AbstractArrayRead__iterator(var_cds);
}
for(;;) {
{
var10 = array__ArrayIterator__is_ok(var9);
}
if(!var10) break;
{
var11 = array__ArrayIterator__item(var9);
}
var_cd = var11;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var14 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var12) on <var12:ModelBuilder> */
var17 = var12->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var12:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 399);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = hash_collection__HashMap___91d_93d(var15, var_cd);
}
var_n = var18;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_n) on <var_n:AClassdef> */
var21 = var_n->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_n:AClassdef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 802);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = parser_nodes__ANodes__iterator(var19);
}
for(;;) {
{
var23 = ((short int (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var22) /* is_ok on <var22:Iterator[ANode]>*/;
}
if(!var23) break;
{
var24 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__item]))(var22) /* item on <var22:Iterator[ANode]>*/;
}
var_npropdef = var24;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype26 = type_parser_nodes__AAttrPropdef.color;
idtype27 = type_parser_nodes__AAttrPropdef.id;
if(cltype26 >= var_npropdef->type->table_size) {
var25 = 0;
} else {
var25 = var_npropdef->type->type_table[cltype26] == idtype27;
}
if (var25){
{
abstract_compiler__AAttrPropdef__init_expr(var_npropdef, var_v, var_recv); /* Direct call abstract_compiler#AAttrPropdef#init_expr on <var_npropdef:APropdef(AAttrPropdef)>*/
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__next]))(var22) /* next on <var22:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label28: (void)0;
{
array__ArrayIterator__next(var9); /* Direct call array#ArrayIterator#next on <var9:ArrayIterator[nullable Object]>*/
}
}
BREAK_label28: (void)0;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 888);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 888);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 889);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 889);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 890);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 890);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 891);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 891);
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
val* var5 /* : ArrayIterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_tag /* var tag: String */;
long var8 /* : Int */;
val* var9 /* : nullable Object */;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringkernel__Int);
{
hash_collection__HashMap__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[String, Int]>*/
}
var_res = var1;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var4 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 888);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = array__AbstractArrayRead__iterator(var2);
}
for(;;) {
{
var6 = array__ArrayIterator__is_ok(var5);
}
if(!var6) break;
{
var7 = array__ArrayIterator__item(var5);
}
var_tag = var7;
var8 = 0;
{
var9 = BOX_kernel__Int(var8); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_res, var_tag, var9); /* Direct call hash_collection#HashMap#[]= on <var_res:HashMap[String, Int]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var5); /* Direct call array#ArrayIterator#next on <var5:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
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
val* var63 /* : ArrayIterator[nullable Object] */;
short int var64 /* : Bool */;
val* var65 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var66 /* : HashMap[String, Int] */;
val* var68 /* : HashMap[String, Int] */;
val* var69 /* : nullable Object */;
val* var70 /* : HashMap[String, Int] */;
val* var72 /* : HashMap[String, Int] */;
val* var73 /* : nullable Object */;
long var74 /* : Int */;
short int var76 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var77 /* : Int */;
long var78 /* : Int */;
long var79 /* : Int */;
val* var80 /* : HashMap[String, Int] */;
val* var82 /* : HashMap[String, Int] */;
val* var83 /* : nullable Object */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
long var91 /* : Int */;
val* var92 /* : nullable Object */;
val* var93 /* : HashMap[String, Int] */;
val* var95 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
val* var_101 /* var : String */;
val* var102 /* : nullable Object */;
val* var103 /* : HashMap[String, Int] */;
val* var105 /* : HashMap[String, Int] */;
val* var106 /* : nullable Object */;
long var107 /* : Int */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
long var113 /* : Int */;
long var114 /* : Int */;
long var115 /* : Int */;
val* var116 /* : nullable Object */;
val* var117 /* : HashMap[String, Int] */;
val* var119 /* : HashMap[String, Int] */;
val* var_120 /* var : HashMap[String, Int] */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
val* var_126 /* var : String */;
val* var127 /* : nullable Object */;
val* var128 /* : HashMap[String, Int] */;
val* var130 /* : HashMap[String, Int] */;
val* var131 /* : nullable Object */;
long var132 /* : Int */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
const char* var_class_name137;
long var138 /* : Int */;
long var139 /* : Int */;
long var140 /* : Int */;
val* var141 /* : nullable Object */;
val* var142 /* : HashMap[String, Int] */;
val* var144 /* : HashMap[String, Int] */;
val* var_145 /* var : HashMap[String, Int] */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : FlatString */;
val* var_151 /* var : String */;
val* var152 /* : nullable Object */;
val* var153 /* : HashMap[String, Int] */;
val* var155 /* : HashMap[String, Int] */;
val* var156 /* : nullable Object */;
long var157 /* : Int */;
short int var159 /* : Bool */;
int cltype160;
int idtype161;
const char* var_class_name162;
long var163 /* : Int */;
long var164 /* : Int */;
long var165 /* : Int */;
val* var166 /* : nullable Object */;
val* var_167 /* var : HashMap[String, Int] */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
val* var_173 /* var : String */;
val* var174 /* : nullable Object */;
val* var175 /* : nullable Object */;
long var176 /* : Int */;
short int var178 /* : Bool */;
int cltype179;
int idtype180;
const char* var_class_name181;
long var182 /* : Int */;
long var183 /* : Int */;
long var184 /* : Int */;
val* var185 /* : nullable Object */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
long var189 /* : Int */;
val* var190 /* : FlatString */;
val* var191 /* : nullable Object */;
long var192 /* : Int */;
long var_count_type_test /* var count_type_test: Int */;
val* var193 /* : Array[String] */;
val* var195 /* : Array[String] */;
val* var196 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : FlatString */;
val* var202 /* : ArrayIterator[nullable Object] */;
short int var203 /* : Bool */;
val* var204 /* : nullable Object */;
val* var_tag205 /* var tag: String */;
val* var206 /* : Array[Object] */;
long var207 /* : Int */;
val* var208 /* : NativeArray[Object] */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : FlatString */;
val* var214 /* : HashMap[String, Int] */;
val* var216 /* : HashMap[String, Int] */;
val* var217 /* : nullable Object */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : FlatString */;
val* var223 /* : HashMap[String, Int] */;
val* var225 /* : HashMap[String, Int] */;
val* var226 /* : nullable Object */;
val* var227 /* : String */;
long var228 /* : Int */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : FlatString */;
val* var234 /* : Array[Object] */;
long var235 /* : Int */;
val* var236 /* : NativeArray[Object] */;
val* var237 /* : String */;
val* var238 /* : Array[Object] */;
long var239 /* : Int */;
val* var240 /* : NativeArray[Object] */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
long var244 /* : Int */;
val* var245 /* : FlatString */;
val* var246 /* : HashMap[String, Int] */;
val* var248 /* : HashMap[String, Int] */;
val* var249 /* : nullable Object */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
long var253 /* : Int */;
val* var254 /* : FlatString */;
val* var255 /* : HashMap[String, Int] */;
val* var257 /* : HashMap[String, Int] */;
val* var258 /* : nullable Object */;
val* var259 /* : String */;
long var260 /* : Int */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
long var264 /* : Int */;
val* var265 /* : FlatString */;
val* var266 /* : Array[Object] */;
long var267 /* : Int */;
val* var268 /* : NativeArray[Object] */;
val* var269 /* : String */;
val* var270 /* : Array[Object] */;
long var271 /* : Int */;
val* var272 /* : NativeArray[Object] */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : FlatString */;
val* var278 /* : HashMap[String, Int] */;
val* var280 /* : HashMap[String, Int] */;
val* var281 /* : nullable Object */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
val* var287 /* : HashMap[String, Int] */;
val* var289 /* : HashMap[String, Int] */;
val* var290 /* : nullable Object */;
val* var291 /* : String */;
long var292 /* : Int */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
long var296 /* : Int */;
val* var297 /* : FlatString */;
val* var298 /* : Array[Object] */;
long var299 /* : Int */;
val* var300 /* : NativeArray[Object] */;
val* var301 /* : String */;
val* var302 /* : Array[Object] */;
long var303 /* : Int */;
val* var304 /* : NativeArray[Object] */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
long var308 /* : Int */;
val* var309 /* : FlatString */;
val* var310 /* : nullable Object */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : FlatString */;
val* var316 /* : nullable Object */;
val* var317 /* : String */;
long var318 /* : Int */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
long var322 /* : Int */;
val* var323 /* : FlatString */;
val* var324 /* : Array[Object] */;
long var325 /* : Int */;
val* var326 /* : NativeArray[Object] */;
val* var327 /* : String */;
val* var328 /* : Array[Object] */;
long var329 /* : Int */;
val* var330 /* : NativeArray[Object] */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
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
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 889);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 890);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 891);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 888);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = array__AbstractArrayRead__iterator(var60);
}
for(;;) {
{
var64 = array__ArrayIterator__is_ok(var63);
}
if(!var64) break;
{
var65 = array__ArrayIterator__item(var63);
}
var_tag = var65;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var68 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 889);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = hash_collection__HashMap___91d_93d(var66, var_tag);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var72 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 890);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = hash_collection__HashMap___91d_93d(var70, var_tag);
}
{
{ /* Inline kernel#Int#+ (var69,var73) on <var69:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var73:nullable Object(Int)> isa OTHER */
/* <var73:nullable Object(Int)> isa OTHER */
var76 = 1; /* easy <var73:nullable Object(Int)> isa OTHER*/
if (unlikely(!var76)) {
var_class_name = var73 == NULL ? "null" : var73->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var77 = ((struct instance_kernel__Int*)var69)->value; /* autounbox from nullable Object to Int */;
var78 = ((struct instance_kernel__Int*)var73)->value; /* autounbox from nullable Object to Int */;
var79 = var77 + var78;
var74 = var79;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var82 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 891);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = hash_collection__HashMap___91d_93d(var80, var_tag);
}
{
{ /* Inline kernel#Int#+ (var74,var83) on <var74:Int> */
/* Covariant cast for argument 0 (i) <var83:nullable Object(Int)> isa OTHER */
/* <var83:nullable Object(Int)> isa OTHER */
var86 = 1; /* easy <var83:nullable Object(Int)> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = var83 == NULL ? "null" : var83->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var90 = ((struct instance_kernel__Int*)var83)->value; /* autounbox from nullable Object to Int */;
var91 = var74 + var90;
var84 = var91;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
{
var92 = BOX_kernel__Int(var84); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_count_type_test_total, var_tag, var92); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var95 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 889);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_ = var93;
if (varonce96) {
var97 = varonce96;
} else {
var98 = "total";
var99 = 5;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
var_101 = var97;
{
var102 = hash_collection__HashMap___91d_93d(var_, var_101);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var105 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 889);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = hash_collection__HashMap___91d_93d(var103, var_tag);
}
{
{ /* Inline kernel#Int#+ (var102,var106) on <var102:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var106:nullable Object(Int)> isa OTHER */
/* <var106:nullable Object(Int)> isa OTHER */
var109 = 1; /* easy <var106:nullable Object(Int)> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = var106 == NULL ? "null" : var106->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var113 = ((struct instance_kernel__Int*)var102)->value; /* autounbox from nullable Object to Int */;
var114 = ((struct instance_kernel__Int*)var106)->value; /* autounbox from nullable Object to Int */;
var115 = var113 + var114;
var107 = var115;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
{
var116 = BOX_kernel__Int(var107); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_, var_101, var116); /* Direct call hash_collection#HashMap#[]= on <var_:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var119 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 890);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
var_120 = var117;
if (varonce121) {
var122 = varonce121;
} else {
var123 = "total";
var124 = 5;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var_126 = var122;
{
var127 = hash_collection__HashMap___91d_93d(var_120, var_126);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var130 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 890);
show_backtrace(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
var131 = hash_collection__HashMap___91d_93d(var128, var_tag);
}
{
{ /* Inline kernel#Int#+ (var127,var131) on <var127:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var131:nullable Object(Int)> isa OTHER */
/* <var131:nullable Object(Int)> isa OTHER */
var134 = 1; /* easy <var131:nullable Object(Int)> isa OTHER*/
if (unlikely(!var134)) {
var_class_name137 = var131 == NULL ? "null" : var131->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name137);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var138 = ((struct instance_kernel__Int*)var127)->value; /* autounbox from nullable Object to Int */;
var139 = ((struct instance_kernel__Int*)var131)->value; /* autounbox from nullable Object to Int */;
var140 = var138 + var139;
var132 = var140;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
{
var141 = BOX_kernel__Int(var132); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_120, var_126, var141); /* Direct call hash_collection#HashMap#[]= on <var_120:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var144 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 891);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
var_145 = var142;
if (varonce146) {
var147 = varonce146;
} else {
var148 = "total";
var149 = 5;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
var_151 = var147;
{
var152 = hash_collection__HashMap___91d_93d(var_145, var_151);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var155 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 891);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = hash_collection__HashMap___91d_93d(var153, var_tag);
}
{
{ /* Inline kernel#Int#+ (var152,var156) on <var152:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var156:nullable Object(Int)> isa OTHER */
/* <var156:nullable Object(Int)> isa OTHER */
var159 = 1; /* easy <var156:nullable Object(Int)> isa OTHER*/
if (unlikely(!var159)) {
var_class_name162 = var156 == NULL ? "null" : var156->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name162);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var163 = ((struct instance_kernel__Int*)var152)->value; /* autounbox from nullable Object to Int */;
var164 = ((struct instance_kernel__Int*)var156)->value; /* autounbox from nullable Object to Int */;
var165 = var163 + var164;
var157 = var165;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
}
{
var166 = BOX_kernel__Int(var157); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_145, var_151, var166); /* Direct call hash_collection#HashMap#[]= on <var_145:HashMap[String, Int]>*/
}
var_167 = var_count_type_test_total;
if (varonce168) {
var169 = varonce168;
} else {
var170 = "total";
var171 = 5;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var_173 = var169;
{
var174 = hash_collection__HashMap___91d_93d(var_167, var_173);
}
{
var175 = hash_collection__HashMap___91d_93d(var_count_type_test_total, var_tag);
}
{
{ /* Inline kernel#Int#+ (var174,var175) on <var174:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var175:nullable Object(Int)> isa OTHER */
/* <var175:nullable Object(Int)> isa OTHER */
var178 = 1; /* easy <var175:nullable Object(Int)> isa OTHER*/
if (unlikely(!var178)) {
var_class_name181 = var175 == NULL ? "null" : var175->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name181);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var182 = ((struct instance_kernel__Int*)var174)->value; /* autounbox from nullable Object to Int */;
var183 = ((struct instance_kernel__Int*)var175)->value; /* autounbox from nullable Object to Int */;
var184 = var182 + var183;
var176 = var184;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
{
var185 = BOX_kernel__Int(var176); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_167, var_173, var185); /* Direct call hash_collection#HashMap#[]= on <var_167:HashMap[String, Int]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var63); /* Direct call array#ArrayIterator#next on <var63:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
if (varonce186) {
var187 = varonce186;
} else {
var188 = "total";
var189 = 5;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
{
var191 = hash_collection__HashMap___91d_93d(var_count_type_test_total, var187);
}
var192 = ((struct instance_kernel__Int*)var191)->value; /* autounbox from nullable Object to Int */;
var_count_type_test = var192;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var195 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 888);
show_backtrace(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
var196 = array__Collection__to_a(var193);
}
var_tags = var196;
if (varonce197) {
var198 = varonce197;
} else {
var199 = "total";
var200 = 5;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
{
array__Array__add(var_tags, var198); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
{
var202 = array__AbstractArrayRead__iterator(var_tags);
}
for(;;) {
{
var203 = array__ArrayIterator__is_ok(var202);
}
if(!var203) break;
{
var204 = array__ArrayIterator__item(var202);
}
var_tag205 = var204;
var206 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var206 = array_instance Array[Object] */
var207 = 1;
var208 = NEW_array__NativeArray(var207, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var208)->values[0] = (val*) var_tag205;
{
((void (*)(val*, val*, long))(var206->class->vft[COLOR_array__Array__with_native]))(var206, var208, var207) /* with_native on <var206:Array[Object]>*/;
}
}
{
file__Object__printn(self, var206); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce209) {
var210 = varonce209;
} else {
var211 = "\11";
var212 = 1;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var216 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 889);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
var217 = hash_collection__HashMap___91d_93d(var214, var_tag205);
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = " (";
var221 = 2;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var225 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 889);
show_backtrace(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
var226 = hash_collection__HashMap___91d_93d(var223, var_tag205);
}
{
var228 = ((struct instance_kernel__Int*)var226)->value; /* autounbox from nullable Object to Int */;
var227 = abstract_compiler__AbstractCompiler__div(self, var228, var_count_type_test);
}
if (varonce229) {
var230 = varonce229;
} else {
var231 = "%)";
var232 = 2;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
var234 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var234 = array_instance Array[Object] */
var235 = 5;
var236 = NEW_array__NativeArray(var235, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var236)->values[0] = (val*) var210;
((struct instance_array__NativeArray*)var236)->values[1] = (val*) var217;
((struct instance_array__NativeArray*)var236)->values[2] = (val*) var219;
((struct instance_array__NativeArray*)var236)->values[3] = (val*) var227;
((struct instance_array__NativeArray*)var236)->values[4] = (val*) var230;
{
((void (*)(val*, val*, long))(var234->class->vft[COLOR_array__Array__with_native]))(var234, var236, var235) /* with_native on <var234:Array[Object]>*/;
}
}
{
var237 = ((val* (*)(val*))(var234->class->vft[COLOR_string__Object__to_s]))(var234) /* to_s on <var234:Array[Object]>*/;
}
var238 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var238 = array_instance Array[Object] */
var239 = 1;
var240 = NEW_array__NativeArray(var239, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var240)->values[0] = (val*) var237;
{
((void (*)(val*, val*, long))(var238->class->vft[COLOR_array__Array__with_native]))(var238, var240, var239) /* with_native on <var238:Array[Object]>*/;
}
}
{
file__Object__printn(self, var238); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce241) {
var242 = varonce241;
} else {
var243 = "\11";
var244 = 1;
var245 = string__NativeString__to_s_with_length(var243, var244);
var242 = var245;
varonce241 = var242;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var248 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 890);
show_backtrace(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
var249 = hash_collection__HashMap___91d_93d(var246, var_tag205);
}
if (varonce250) {
var251 = varonce250;
} else {
var252 = " (";
var253 = 2;
var254 = string__NativeString__to_s_with_length(var252, var253);
var251 = var254;
varonce250 = var251;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var257 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var257 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 890);
show_backtrace(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
var258 = hash_collection__HashMap___91d_93d(var255, var_tag205);
}
{
var260 = ((struct instance_kernel__Int*)var258)->value; /* autounbox from nullable Object to Int */;
var259 = abstract_compiler__AbstractCompiler__div(self, var260, var_count_type_test);
}
if (varonce261) {
var262 = varonce261;
} else {
var263 = "%)";
var264 = 2;
var265 = string__NativeString__to_s_with_length(var263, var264);
var262 = var265;
varonce261 = var262;
}
var266 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var266 = array_instance Array[Object] */
var267 = 5;
var268 = NEW_array__NativeArray(var267, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var268)->values[0] = (val*) var242;
((struct instance_array__NativeArray*)var268)->values[1] = (val*) var249;
((struct instance_array__NativeArray*)var268)->values[2] = (val*) var251;
((struct instance_array__NativeArray*)var268)->values[3] = (val*) var259;
((struct instance_array__NativeArray*)var268)->values[4] = (val*) var262;
{
((void (*)(val*, val*, long))(var266->class->vft[COLOR_array__Array__with_native]))(var266, var268, var267) /* with_native on <var266:Array[Object]>*/;
}
}
{
var269 = ((val* (*)(val*))(var266->class->vft[COLOR_string__Object__to_s]))(var266) /* to_s on <var266:Array[Object]>*/;
}
var270 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var270 = array_instance Array[Object] */
var271 = 1;
var272 = NEW_array__NativeArray(var271, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var272)->values[0] = (val*) var269;
{
((void (*)(val*, val*, long))(var270->class->vft[COLOR_array__Array__with_native]))(var270, var272, var271) /* with_native on <var270:Array[Object]>*/;
}
}
{
file__Object__printn(self, var270); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce273) {
var274 = varonce273;
} else {
var275 = "\11";
var276 = 1;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var280 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var280 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 891);
show_backtrace(1);
}
var278 = var280;
RET_LABEL279:(void)0;
}
}
{
var281 = hash_collection__HashMap___91d_93d(var278, var_tag205);
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = " (";
var285 = 2;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var289 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 891);
show_backtrace(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
{
var290 = hash_collection__HashMap___91d_93d(var287, var_tag205);
}
{
var292 = ((struct instance_kernel__Int*)var290)->value; /* autounbox from nullable Object to Int */;
var291 = abstract_compiler__AbstractCompiler__div(self, var292, var_count_type_test);
}
if (varonce293) {
var294 = varonce293;
} else {
var295 = "%)";
var296 = 2;
var297 = string__NativeString__to_s_with_length(var295, var296);
var294 = var297;
varonce293 = var294;
}
var298 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var298 = array_instance Array[Object] */
var299 = 5;
var300 = NEW_array__NativeArray(var299, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var300)->values[0] = (val*) var274;
((struct instance_array__NativeArray*)var300)->values[1] = (val*) var281;
((struct instance_array__NativeArray*)var300)->values[2] = (val*) var283;
((struct instance_array__NativeArray*)var300)->values[3] = (val*) var291;
((struct instance_array__NativeArray*)var300)->values[4] = (val*) var294;
{
((void (*)(val*, val*, long))(var298->class->vft[COLOR_array__Array__with_native]))(var298, var300, var299) /* with_native on <var298:Array[Object]>*/;
}
}
{
var301 = ((val* (*)(val*))(var298->class->vft[COLOR_string__Object__to_s]))(var298) /* to_s on <var298:Array[Object]>*/;
}
var302 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var302 = array_instance Array[Object] */
var303 = 1;
var304 = NEW_array__NativeArray(var303, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var304)->values[0] = (val*) var301;
{
((void (*)(val*, val*, long))(var302->class->vft[COLOR_array__Array__with_native]))(var302, var304, var303) /* with_native on <var302:Array[Object]>*/;
}
}
{
file__Object__printn(self, var302); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce305) {
var306 = varonce305;
} else {
var307 = "\11";
var308 = 1;
var309 = string__NativeString__to_s_with_length(var307, var308);
var306 = var309;
varonce305 = var306;
}
{
var310 = hash_collection__HashMap___91d_93d(var_count_type_test_total, var_tag205);
}
if (varonce311) {
var312 = varonce311;
} else {
var313 = " (";
var314 = 2;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
{
var316 = hash_collection__HashMap___91d_93d(var_count_type_test_total, var_tag205);
}
{
var318 = ((struct instance_kernel__Int*)var316)->value; /* autounbox from nullable Object to Int */;
var317 = abstract_compiler__AbstractCompiler__div(self, var318, var_count_type_test);
}
if (varonce319) {
var320 = varonce319;
} else {
var321 = "%)";
var322 = 2;
var323 = string__NativeString__to_s_with_length(var321, var322);
var320 = var323;
varonce319 = var320;
}
var324 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var324 = array_instance Array[Object] */
var325 = 5;
var326 = NEW_array__NativeArray(var325, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var326)->values[0] = (val*) var306;
((struct instance_array__NativeArray*)var326)->values[1] = (val*) var310;
((struct instance_array__NativeArray*)var326)->values[2] = (val*) var312;
((struct instance_array__NativeArray*)var326)->values[3] = (val*) var317;
((struct instance_array__NativeArray*)var326)->values[4] = (val*) var320;
{
((void (*)(val*, val*, long))(var324->class->vft[COLOR_array__Array__with_native]))(var324, var326, var325) /* with_native on <var324:Array[Object]>*/;
}
}
{
var327 = ((val* (*)(val*))(var324->class->vft[COLOR_string__Object__to_s]))(var324) /* to_s on <var324:Array[Object]>*/;
}
var328 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var328 = array_instance Array[Object] */
var329 = 1;
var330 = NEW_array__NativeArray(var329, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var330)->values[0] = (val*) var327;
{
((void (*)(val*, val*, long))(var328->class->vft[COLOR_array__Array__with_native]))(var328, var330, var329) /* with_native on <var328:Array[Object]>*/;
}
}
{
file__Object__printn(self, var328); /* Direct call file#Object#printn on <self:AbstractCompiler>*/
}
if (varonce331) {
var332 = varonce331;
} else {
var333 = "";
var334 = 0;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
{
file__Object__print(self, var332); /* Direct call file#Object#print on <self:AbstractCompiler>*/
}
CONTINUE_label336: (void)0;
{
array__ArrayIterator__next(var202); /* Direct call array#ArrayIterator#next on <var202:ArrayIterator[nullable Object]>*/
}
}
BREAK_label336: (void)0;
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 332);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 333);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 298);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 954);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 954);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#writers for (self: CodeFile): Array[CodeWriter] */
val* abstract_compiler__CodeFile__writers(val* self) {
val* var /* : Array[CodeWriter] */;
val* var1 /* : Array[CodeWriter] */;
var1 = self->attrs[COLOR_abstract_compiler__CodeFile___writers].val; /* _writers on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 955);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 955);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 956);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 956);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#init for (self: CodeFile, String) */
void abstract_compiler__CodeFile__init(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__CodeFile___name].val = p0; /* _name on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#init for (self: Object, String) */
void VIRTUAL_abstract_compiler__CodeFile__init(val* self, val* p0) {
{ /* Inline abstract_compiler#CodeFile#init (self,p0) on <self:Object(CodeFile)> */
self->attrs[COLOR_abstract_compiler__CodeFile___name].val = p0; /* _name on <self:Object(CodeFile)> */
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 961);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 961);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 962);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 962);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 963);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 963);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 963);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 955);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 999);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 999);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1001);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 465);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1013);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1014);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MType(MClassType)> */
var13 = var_recv->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recv:MType(MClassType)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : MMethod */;
val* var3 /* : MMethod */;
val* var4 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_args = p1;
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = separate_compiler__SeparateCompilerVisitor__send(self, var1, var_args);
}
var = var4;
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
/* method abstract_compiler#AbstractCompilerVisitor#varargize for (self: AbstractCompilerVisitor, MPropDef, MSignature, Array[RuntimeVariable]) */
void abstract_compiler__AbstractCompilerVisitor__varargize(val* self, val* p0, val* p1, val* p2) {
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_msignature /* var msignature: MSignature */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var_rawargs /* var rawargs: Array[RuntimeVariable] */;
val* var26 /* : Array[RuntimeVariable] */;
val* var27 /* : nullable Object */;
val* var28 /* : Range[Int] */;
long var29 /* : Int */;
val* var30 /* : Discrete */;
val* var31 /* : Discrete */;
val* var32 /* : Iterator[Discrete] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
long var_i /* var i: Int */;
long var35 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
val* var44 /* : nullable Object */;
long var45 /* : Int */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
long var_vararg_lastrank /* var vararg_lastrank: Int */;
val* var69 /* : Array[RuntimeVariable] */;
val* var_vararg /* var vararg: Array[RuntimeVariable] */;
val* var70 /* : Range[Int] */;
val* var71 /* : Discrete */;
val* var72 /* : Discrete */;
val* var73 /* : Iterator[Discrete] */;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
long var_i76 /* var i: Int */;
long var77 /* : Int */;
long var78 /* : Int */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
val* var86 /* : nullable Object */;
val* var88 /* : Array[MParameter] */;
val* var90 /* : Array[MParameter] */;
val* var91 /* : nullable Object */;
val* var92 /* : MType */;
val* var94 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var95 /* : RuntimeVariable */;
val* var96 /* : Range[Int] */;
long var97 /* : Int */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
long var105 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
long var113 /* : Int */;
val* var114 /* : Discrete */;
val* var115 /* : Discrete */;
val* var116 /* : Iterator[Discrete] */;
short int var117 /* : Bool */;
val* var118 /* : nullable Object */;
long var_i119 /* var i: Int */;
long var120 /* : Int */;
long var121 /* : Int */;
long var122 /* : Int */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const char* var_class_name127;
long var128 /* : Int */;
val* var129 /* : nullable Object */;
var_mpropdef = p0;
var_msignature = p1;
var_args = p2;
{
var = abstract_collection__SequenceRead__first(var_args);
}
var_recv = var;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var3 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_vararg_rank = var1;
var4 = 0;
{
{ /* Inline kernel#Int#>= (var_vararg_rank,var4) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var8 = var_vararg_rank >= var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = array__AbstractArrayRead__length(var_args);
}
{
var10 = model__MSignature__arity(var_msignature);
}
var11 = 1;
{
{ /* Inline kernel#Int#+ (var10,var11) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var18 = var10 + var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var9,var12) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var21 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var25 = var9 >= var12;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1036);
show_backtrace(1);
}
var_rawargs = var_args;
var26 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
array__Array__init(var26); /* Direct call array#Array#init on <var26:Array[RuntimeVariable]>*/
}
var_args = var26;
{
var27 = abstract_collection__SequenceRead__first(var_rawargs);
}
{
array__Array__add(var_args, var27); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
var28 = NEW_range__Range(&type_range__Rangekernel__Int);
var29 = 0;
{
var30 = BOX_kernel__Int(var29); /* autobox from Int to Discrete */
var31 = BOX_kernel__Int(var_vararg_rank); /* autobox from Int to Discrete */
range__Range__without_last(var28, var30, var31); /* Direct call range#Range#without_last on <var28:Range[Int]>*/
}
{
var32 = range__Range__iterator(var28);
}
for(;;) {
{
var33 = ((short int (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var32) /* is_ok on <var32:Iterator[Discrete]>*/;
}
if(!var33) break;
{
var34 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__item]))(var32) /* item on <var32:Iterator[Discrete]>*/;
}
var35 = ((struct instance_kernel__Int*)var34)->value; /* autounbox from nullable Object to Int */;
var_i = var35;
var36 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var36) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var36:Int> isa OTHER */
/* <var36:Int> isa OTHER */
var39 = 1; /* easy <var36:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var43 = var_i + var36;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
var44 = array__Array___91d_93d(var_rawargs, var37);
}
{
array__Array__add(var_args, var44); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__next]))(var32) /* next on <var32:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
{
var45 = array__AbstractArrayRead__length(var_rawargs);
}
{
{ /* Inline kernel#Int#+ (var_vararg_rank,var45) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var45:Int> isa OTHER */
/* <var45:Int> isa OTHER */
var48 = 1; /* easy <var45:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var52 = var_vararg_rank + var45;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var53 = 1;
{
{ /* Inline kernel#Int#- (var46,var53) on <var46:Int> */
/* Covariant cast for argument 0 (i) <var53:Int> isa OTHER */
/* <var53:Int> isa OTHER */
var56 = 1; /* easy <var53:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var60 = var46 - var53;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var61 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#- (var54,var61) on <var54:Int> */
/* Covariant cast for argument 0 (i) <var61:Int> isa OTHER */
/* <var61:Int> isa OTHER */
var64 = 1; /* easy <var61:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var68 = var54 - var61;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_vararg_lastrank = var62;
var69 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
array__Array__init(var69); /* Direct call array#Array#init on <var69:Array[RuntimeVariable]>*/
}
var_vararg = var69;
var70 = NEW_range__Range(&type_range__Rangekernel__Int);
{
var71 = BOX_kernel__Int(var_vararg_rank); /* autobox from Int to Discrete */
var72 = BOX_kernel__Int(var_vararg_lastrank); /* autobox from Int to Discrete */
range__Range__init(var70, var71, var72); /* Direct call range#Range#init on <var70:Range[Int]>*/
}
{
var73 = range__Range__iterator(var70);
}
for(;;) {
{
var74 = ((short int (*)(val*))(var73->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var73) /* is_ok on <var73:Iterator[Discrete]>*/;
}
if(!var74) break;
{
var75 = ((val* (*)(val*))(var73->class->vft[COLOR_abstract_collection__Iterator__item]))(var73) /* item on <var73:Iterator[Discrete]>*/;
}
var77 = ((struct instance_kernel__Int*)var75)->value; /* autounbox from nullable Object to Int */;
var_i76 = var77;
var78 = 1;
{
{ /* Inline kernel#Int#+ (var_i76,var78) on <var_i76:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var85 = var_i76 + var78;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
var86 = array__Array___91d_93d(var_rawargs, var79);
}
{
array__Array__add(var_vararg, var86); /* Direct call array#Array#add on <var_vararg:Array[RuntimeVariable]>*/
}
CONTINUE_label87: (void)0;
{
((void (*)(val*))(var73->class->vft[COLOR_abstract_collection__Iterator__next]))(var73) /* next on <var73:Iterator[Discrete]>*/;
}
}
BREAK_label87: (void)0;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var90 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = array__Array___91d_93d(var88, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var91) on <var91:nullable Object(MParameter)> */
var94 = var91->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var91:nullable Object(MParameter)> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
var_elttype = var92;
{
var95 = separate_compiler__SeparateCompilerVisitor__vararg_instance(self, var_mpropdef, var_recv, var_vararg, var_elttype);
}
{
array__Array__add(var_args, var95); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
var96 = NEW_range__Range(&type_range__Rangekernel__Int);
var97 = 1;
{
{ /* Inline kernel#Int#+ (var_vararg_lastrank,var97) on <var_vararg_lastrank:Int> */
/* Covariant cast for argument 0 (i) <var97:Int> isa OTHER */
/* <var97:Int> isa OTHER */
var100 = 1; /* easy <var97:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var104 = var_vararg_lastrank + var97;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
var105 = array__AbstractArrayRead__length(var_rawargs);
}
var106 = 1;
{
{ /* Inline kernel#Int#- (var105,var106) on <var105:Int> */
/* Covariant cast for argument 0 (i) <var106:Int> isa OTHER */
/* <var106:Int> isa OTHER */
var109 = 1; /* easy <var106:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var113 = var105 - var106;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
{
var114 = BOX_kernel__Int(var98); /* autobox from Int to Discrete */
var115 = BOX_kernel__Int(var107); /* autobox from Int to Discrete */
range__Range__without_last(var96, var114, var115); /* Direct call range#Range#without_last on <var96:Range[Int]>*/
}
{
var116 = range__Range__iterator(var96);
}
for(;;) {
{
var117 = ((short int (*)(val*))(var116->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var116) /* is_ok on <var116:Iterator[Discrete]>*/;
}
if(!var117) break;
{
var118 = ((val* (*)(val*))(var116->class->vft[COLOR_abstract_collection__Iterator__item]))(var116) /* item on <var116:Iterator[Discrete]>*/;
}
var120 = ((struct instance_kernel__Int*)var118)->value; /* autounbox from nullable Object to Int */;
var_i119 = var120;
var121 = 1;
{
{ /* Inline kernel#Int#+ (var_i119,var121) on <var_i119:Int> */
/* Covariant cast for argument 0 (i) <var121:Int> isa OTHER */
/* <var121:Int> isa OTHER */
var124 = 1; /* easy <var121:Int> isa OTHER*/
if (unlikely(!var124)) {
var_class_name127 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var128 = var_i119 + var121;
var122 = var128;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
{
var129 = array__Array___91d_93d(var_rawargs, var122);
}
{
array__Array__add(var_args, var129); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
CONTINUE_label130: (void)0;
{
((void (*)(val*))(var116->class->vft[COLOR_abstract_collection__Iterator__next]))(var116) /* next on <var116:Iterator[Discrete]>*/;
}
}
BREAK_label130: (void)0;
{
array__AbstractArray__clear(var_rawargs); /* Direct call array#AbstractArray#clear on <var_rawargs:Array[RuntimeVariable]>*/
}
{
abstract_collection__SimpleCollection__add_all(var_rawargs, var_args); /* Direct call abstract_collection#SimpleCollection#add_all on <var_rawargs:Array[RuntimeVariable]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#varargize for (self: Object, MPropDef, MSignature, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompilerVisitor__varargize(self, p0, p1, p2); /* Direct call abstract_compiler#AbstractCompilerVisitor#varargize on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1069);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#receiver (var9) on <var9:nullable Frame> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1535);
show_backtrace(1);
}
var14 = var9->attrs[COLOR_abstract_compiler__Frame___receiver].val; /* _receiver on <var9:nullable Frame> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1535);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1075);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#receiver (var6) on <var6:nullable Frame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1535);
show_backtrace(1);
}
var11 = var6->attrs[COLOR_abstract_compiler__Frame___receiver].val; /* _receiver on <var6:nullable Frame> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1535);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1481);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1481);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1128);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1136);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_other (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_other].val; /* _opt_no_check_other on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_other");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 54);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1169);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1169);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1169);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1169);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1169);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1169);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var35 = var_i + var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_i = var29;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1194);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#escapemark_names (self) on <self:AbstractCompilerVisitor> */
var10 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___escapemark_names].val; /* _escapemark_names on <self:AbstractCompilerVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1203);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1203);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1203);
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
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names for (self: AbstractCompilerVisitor): HashMap[EscapeMark, String] */
val* abstract_compiler__AbstractCompilerVisitor__escapemark_names(val* self) {
val* var /* : HashMap[EscapeMark, String] */;
val* var1 /* : HashMap[EscapeMark, String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___escapemark_names].val; /* _escapemark_names on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1203);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1203);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1211);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1211);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1211);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1211);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1220);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1211);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
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
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_string /* var string: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var_name /* var name: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : String */;
val* var35 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
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
val* var74 /* : MClass */;
val* var75 /* : MClassType */;
val* var77 /* : MClassType */;
val* var_native_mtype /* var native_mtype: MClassType */;
val* var78 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
long var94 /* : Int */;
long var96 /* : Int */;
val* var97 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
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
val* var108 /* : MMethod */;
val* var109 /* : Array[RuntimeVariable] */;
long var110 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var111 /* : nullable RuntimeVariable */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : Array[Object] */;
long var118 /* : Int */;
val* var119 /* : NativeArray[Object] */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
val* var131 /* : Array[Object] */;
long var132 /* : Int */;
val* var133 /* : NativeArray[Object] */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
var_string = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "String";
var3 = 6;
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mtype = var6;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "varonce";
var12 = 7;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var10);
}
var_name = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "static ";
var18 = 7;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
var20 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " ";
var24 = 1;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = ";";
var29 = 1;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var20;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var22;
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var33)->values[4] = (val*) var27;
{
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
}
{
var34 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
{
var35 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_mtype);
}
var_res = var35;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "if (";
var39 = 4;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ") {";
var44 = 3;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = " = ";
var53 = 3;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = ";";
var58 = 1;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 4;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var51;
((struct instance_array__NativeArray*)var62)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var62)->values[3] = (val*) var56;
{
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
}
{
var63 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "} else {";
var67 = 8;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var65); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "NativeString";
var72 = 12;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
var74 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var70);
}
{
{ /* Inline model#MClass#mclass_type (var74) on <var74:MClass> */
var77 = var74->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var74:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_native_mtype = var75;
{
var78 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_native_mtype);
}
var_nat = var78;
if (varonce79) {
var80 = varonce79;
} else {
var81 = " = \"";
var82 = 4;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
var84 = string__Text__escape_to_c(var_string);
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "\";";
var88 = 2;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 4;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var_nat;
((struct instance_array__NativeArray*)var92)->values[1] = (val*) var80;
((struct instance_array__NativeArray*)var92)->values[2] = (val*) var84;
((struct instance_array__NativeArray*)var92)->values[3] = (val*) var86;
{
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
}
{
var93 = ((val* (*)(val*))(var90->class->vft[COLOR_string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var93); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline string#FlatText#length (var_string) on <var_string:String> */
var96 = var_string->attrs[COLOR_string__FlatText___length].l; /* _length on <var_string:String> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = abstract_compiler__AbstractCompilerVisitor__int_instance(self, var94);
}
var_length = var97;
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
var105 = "to_s_with_length";
var106 = 16;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
var108 = abstract_compiler__AbstractCompilerVisitor__get_property(self, var104, var_native_mtype);
}
var109 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var110 = 2;
{
array__Array__with_capacity(var109, var110); /* Direct call array#Array#with_capacity on <var109:Array[RuntimeVariable]>*/
}
var_ = var109;
{
array__AbstractArray__push(var_, var_nat); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_length); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var111 = separate_compiler__SeparateCompilerVisitor__send(self, var108, var_);
}
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1283);
show_backtrace(1);
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = ";";
var115 = 1;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
var117 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var117 = array_instance Array[Object] */
var118 = 4;
var119 = NEW_array__NativeArray(var118, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var119)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var119)->values[1] = (val*) var99;
((struct instance_array__NativeArray*)var119)->values[2] = (val*) var111;
((struct instance_array__NativeArray*)var119)->values[3] = (val*) var113;
{
((void (*)(val*, val*, long))(var117->class->vft[COLOR_array__Array__with_native]))(var117, var119, var118) /* with_native on <var117:Array[Object]>*/;
}
}
{
var120 = ((val* (*)(val*))(var117->class->vft[COLOR_string__Object__to_s]))(var117) /* to_s on <var117:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = " = ";
var124 = 3;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
if (varonce126) {
var127 = varonce126;
} else {
var128 = ";";
var129 = 1;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var131 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var131 = array_instance Array[Object] */
var132 = 4;
var133 = NEW_array__NativeArray(var132, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var133)->values[0] = (val*) var_name;
((struct instance_array__NativeArray*)var133)->values[1] = (val*) var122;
((struct instance_array__NativeArray*)var133)->values[2] = (val*) var_res;
((struct instance_array__NativeArray*)var133)->values[3] = (val*) var127;
{
((void (*)(val*, val*, long))(var131->class->vft[COLOR_array__Array__with_native]))(var131, var133, var132) /* with_native on <var131:Array[Object]>*/;
}
}
{
var134 = ((val* (*)(val*))(var131->class->vft[COLOR_string__Object__to_s]))(var131) /* to_s on <var131:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var134); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = "}";
var138 = 1;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var136); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: Object, String): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__string_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : List[String] */;
val* var5 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 999);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_abstract_compiler__CodeWriter___lines].val; /* _lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 962);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
abstract_collection__Sequence__add(var3, var_s); /* Direct call abstract_collection#Sequence#add on <var3:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : List[String] */;
val* var5 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 999);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 963);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
abstract_collection__Sequence__add(var3, var_s); /* Direct call abstract_collection#Sequence#add on <var3:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_decl(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0) {
val* var_key /* var key: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : CodeFile */;
val* var5 /* : CodeFile */;
val* var6 /* : HashSet[String] */;
val* var8 /* : HashSet[String] */;
val* var_reqs /* var reqs: HashSet[String] */;
short int var9 /* : Bool */;
val* var10 /* : nullable ANode */;
val* var12 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : HashMap[String, ANode] */;
val* var25 /* : HashMap[String, ANode] */;
var_key = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 999);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#file (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_abstract_compiler__CodeWriter___file].val; /* _file on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 961);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#required_declarations (var3) on <var3:CodeFile> */
var8 = var3->attrs[COLOR_abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var3:CodeFile> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 956);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_reqs = var6;
{
var9 = hash_collection__HashSet__has(var_reqs, var_key);
}
if (var9){
goto RET_LABEL;
} else {
}
{
hash_collection__HashSet__add(var_reqs, var_key); /* Direct call hash_collection#HashSet#add on <var_reqs:HashSet[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_node = var10;
var13 = NULL;
if (var_node == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var13) on <var_node:nullable ANode> */
var_other = var13;
{
var18 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ANode(ANode)>*/;
var17 = var18;
}
var19 = !var17;
var15 = var19;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var22 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler#AbstractCompiler#requirers_of_declarations (var20) on <var20:AbstractCompiler> */
var25 = var20->attrs[COLOR_abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var20:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 486);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var23, var_key, var_node); /* Direct call hash_collection#HashMap#[]= on <var23:HashMap[String, ANode]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
abstract_compiler__AbstractCompiler__provide_declaration(var, var_s, var_s); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var:AbstractCompiler>*/
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__declare_once(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
