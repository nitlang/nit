#include "nit__abstract_compiler.sep.0.h"
/* method abstract_compiler#AbstractCompiler#compile_main_function for (self: AbstractCompiler) */
void nit___nit__AbstractCompiler___compile_main_function(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
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
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
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
val* var72 /* : ArrayIterator[nullable Object] */;
val* var_73 /* var : ArrayIterator[String] */;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
val* var86 /* : String */;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : FlatString */;
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
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
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
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
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
val* var154 /* : FlatString */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : FlatString */;
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
val* var176 /* : FlatString */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : FlatString */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : FlatString */;
val* var185 /* : AbstractCompiler */;
val* var187 /* : AbstractCompiler */;
val* var188 /* : CodeWriter */;
val* var190 /* : CodeWriter */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : FlatString */;
val* var195 /* : AbstractCompiler */;
val* var197 /* : AbstractCompiler */;
val* var198 /* : CodeWriter */;
val* var200 /* : CodeWriter */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
val* var204 /* : FlatString */;
val* var205 /* : AbstractCompiler */;
val* var207 /* : AbstractCompiler */;
val* var208 /* : CodeWriter */;
val* var210 /* : CodeWriter */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : FlatString */;
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
val* var231 /* : FlatString */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
val* var235 /* : FlatString */;
val* var236 /* : AbstractCompiler */;
val* var238 /* : AbstractCompiler */;
val* var239 /* : CodeWriter */;
val* var241 /* : CodeWriter */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : FlatString */;
val* var246 /* : AbstractCompiler */;
val* var248 /* : AbstractCompiler */;
val* var249 /* : CodeWriter */;
val* var251 /* : CodeWriter */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
val* var255 /* : FlatString */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
val* var259 /* : FlatString */;
short int var260 /* : Bool */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
val* var264 /* : FlatString */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : FlatString */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : FlatString */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
val* var276 /* : FlatString */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
val* var280 /* : FlatString */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : FlatString */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
val* var288 /* : FlatString */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
val* var292 /* : FlatString */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
val* var296 /* : FlatString */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
val* var300 /* : FlatString */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
val* var304 /* : FlatString */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
val* var308 /* : FlatString */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
val* var312 /* : FlatString */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
val* var316 /* : FlatString */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
val* var320 /* : FlatString */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
val* var324 /* : FlatString */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
val* var328 /* : FlatString */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
val* var332 /* : FlatString */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : NativeString */;
val* var336 /* : FlatString */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
val* var340 /* : FlatString */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : NativeString */;
val* var344 /* : FlatString */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
val* var348 /* : FlatString */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : NativeString */;
val* var352 /* : FlatString */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : NativeString */;
val* var356 /* : FlatString */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
val* var360 /* : FlatString */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : NativeString */;
val* var364 /* : FlatString */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
val* var368 /* : FlatString */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
val* var372 /* : FlatString */;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : NativeString */;
val* var376 /* : FlatString */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
val* var380 /* : FlatString */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
val* var384 /* : FlatString */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : NativeString */;
val* var388 /* : FlatString */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
val* var392 /* : FlatString */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
val* var396 /* : FlatString */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
val* var400 /* : FlatString */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
val* var404 /* : FlatString */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
val* var408 /* : FlatString */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
val* var412 /* : FlatString */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
val* var416 /* : FlatString */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
val* var420 /* : FlatString */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
val* var424 /* : FlatString */;
static val* varonce425;
val* var426 /* : String */;
char* var427 /* : NativeString */;
val* var428 /* : FlatString */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
val* var432 /* : FlatString */;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : NativeString */;
val* var436 /* : FlatString */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : NativeString */;
val* var440 /* : FlatString */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
val* var444 /* : FlatString */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
val* var448 /* : FlatString */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : NativeString */;
val* var452 /* : FlatString */;
val* var453 /* : MModule */;
val* var455 /* : MModule */;
val* var456 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
short int var457 /* : Bool */;
short int var458 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var460 /* : Bool */;
short int var461 /* : Bool */;
val* var462 /* : AbstractCompiler */;
val* var464 /* : AbstractCompiler */;
val* var465 /* : MModule */;
val* var467 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var468 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
val* var470 /* : NativeArray[String] */;
static val* varonce469;
static val* varonce471;
val* var472 /* : String */;
char* var473 /* : NativeString */;
val* var474 /* : FlatString */;
static val* varonce475;
val* var476 /* : String */;
char* var477 /* : NativeString */;
val* var478 /* : FlatString */;
val* var479 /* : String */;
val* var480 /* : String */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : NativeString */;
val* var484 /* : FlatString */;
val* var485 /* : MClass */;
val* var487 /* : MClass */;
val* var488 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
short int var489 /* : Bool */;
short int var490 /* : Bool */;
short int var492 /* : Bool */;
short int var493 /* : Bool */;
val* var494 /* : Array[RuntimeVariable] */;
val* var_495 /* var : Array[RuntimeVariable] */;
val* var496 /* : nullable RuntimeVariable */;
val* var497 /* : nullable MMethod */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : NativeString */;
val* var501 /* : FlatString */;
val* var502 /* : MClass */;
val* var504 /* : MClass */;
val* var505 /* : nullable MMethod */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
val* var509 /* : FlatString */;
val* var510 /* : MClass */;
val* var512 /* : MClass */;
val* var513 /* : nullable MMethod */;
val* var_main_method /* var main_method: nullable MMethod */;
short int var514 /* : Bool */;
short int var515 /* : Bool */;
short int var517 /* : Bool */;
short int var518 /* : Bool */;
val* var519 /* : Array[RuntimeVariable] */;
val* var_520 /* var : Array[RuntimeVariable] */;
val* var521 /* : nullable RuntimeVariable */;
val* var522 /* : ModelBuilder */;
val* var524 /* : ModelBuilder */;
val* var525 /* : ToolContext */;
val* var527 /* : ToolContext */;
val* var528 /* : OptionBool */;
val* var530 /* : OptionBool */;
val* var531 /* : nullable Object */;
val* var533 /* : nullable Object */;
short int var534 /* : Bool */;
static val* varonce535;
val* var536 /* : String */;
char* var537 /* : NativeString */;
val* var538 /* : FlatString */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
val* var542 /* : FlatString */;
static val* varonce543;
val* var544 /* : String */;
char* var545 /* : NativeString */;
val* var546 /* : FlatString */;
static val* varonce547;
val* var548 /* : String */;
char* var549 /* : NativeString */;
val* var550 /* : FlatString */;
val* var551 /* : Array[String] */;
val* var553 /* : Array[String] */;
val* var_554 /* var : Array[String] */;
val* var555 /* : ArrayIterator[nullable Object] */;
val* var_556 /* var : ArrayIterator[String] */;
short int var557 /* : Bool */;
val* var558 /* : nullable Object */;
val* var_tag559 /* var tag: String */;
val* var561 /* : NativeArray[String] */;
static val* varonce560;
static val* varonce562;
val* var563 /* : String */;
char* var564 /* : NativeString */;
val* var565 /* : FlatString */;
static val* varonce566;
val* var567 /* : String */;
char* var568 /* : NativeString */;
val* var569 /* : FlatString */;
val* var570 /* : String */;
val* var572 /* : NativeArray[String] */;
static val* varonce571;
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : NativeString */;
val* var576 /* : FlatString */;
static val* varonce577;
val* var578 /* : String */;
char* var579 /* : NativeString */;
val* var580 /* : FlatString */;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : NativeString */;
val* var584 /* : FlatString */;
static val* varonce585;
val* var586 /* : String */;
char* var587 /* : NativeString */;
val* var588 /* : FlatString */;
static val* varonce589;
val* var590 /* : String */;
char* var591 /* : NativeString */;
val* var592 /* : FlatString */;
val* var593 /* : String */;
val* var595 /* : NativeArray[String] */;
static val* varonce594;
static val* varonce596;
val* var597 /* : String */;
char* var598 /* : NativeString */;
val* var599 /* : FlatString */;
static val* varonce600;
val* var601 /* : String */;
char* var602 /* : NativeString */;
val* var603 /* : FlatString */;
val* var604 /* : String */;
val* var606 /* : NativeArray[String] */;
static val* varonce605;
static val* varonce607;
val* var608 /* : String */;
char* var609 /* : NativeString */;
val* var610 /* : FlatString */;
static val* varonce611;
val* var612 /* : String */;
char* var613 /* : NativeString */;
val* var614 /* : FlatString */;
val* var615 /* : String */;
val* var617 /* : NativeArray[String] */;
static val* varonce616;
static val* varonce618;
val* var619 /* : String */;
char* var620 /* : NativeString */;
val* var621 /* : FlatString */;
static val* varonce622;
val* var623 /* : String */;
char* var624 /* : NativeString */;
val* var625 /* : FlatString */;
val* var626 /* : String */;
val* var628 /* : NativeArray[String] */;
static val* varonce627;
static val* varonce629;
val* var630 /* : String */;
char* var631 /* : NativeString */;
val* var632 /* : FlatString */;
static val* varonce633;
val* var634 /* : String */;
char* var635 /* : NativeString */;
val* var636 /* : FlatString */;
val* var637 /* : String */;
static val* varonce639;
val* var640 /* : String */;
char* var641 /* : NativeString */;
val* var642 /* : FlatString */;
static val* varonce643;
val* var644 /* : String */;
char* var645 /* : NativeString */;
val* var646 /* : FlatString */;
val* var647 /* : Array[String] */;
val* var649 /* : Array[String] */;
val* var650 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce651;
val* var652 /* : String */;
char* var653 /* : NativeString */;
val* var654 /* : FlatString */;
val* var_655 /* var : Array[String] */;
val* var656 /* : ArrayIterator[nullable Object] */;
val* var_657 /* var : ArrayIterator[String] */;
short int var658 /* : Bool */;
val* var659 /* : nullable Object */;
val* var_tag660 /* var tag: String */;
val* var662 /* : NativeArray[String] */;
static val* varonce661;
static val* varonce663;
val* var664 /* : String */;
char* var665 /* : NativeString */;
val* var666 /* : FlatString */;
static val* varonce667;
val* var668 /* : String */;
char* var669 /* : NativeString */;
val* var670 /* : FlatString */;
val* var671 /* : String */;
val* var673 /* : NativeArray[String] */;
static val* varonce672;
static val* varonce674;
val* var675 /* : String */;
char* var676 /* : NativeString */;
val* var677 /* : FlatString */;
static val* varonce678;
val* var679 /* : String */;
char* var680 /* : NativeString */;
val* var681 /* : FlatString */;
static val* varonce682;
val* var683 /* : String */;
char* var684 /* : NativeString */;
val* var685 /* : FlatString */;
val* var686 /* : String */;
val* var688 /* : NativeArray[String] */;
static val* varonce687;
static val* varonce689;
val* var690 /* : String */;
char* var691 /* : NativeString */;
val* var692 /* : FlatString */;
static val* varonce693;
val* var694 /* : String */;
char* var695 /* : NativeString */;
val* var696 /* : FlatString */;
static val* varonce697;
val* var698 /* : String */;
char* var699 /* : NativeString */;
val* var700 /* : FlatString */;
val* var701 /* : String */;
val* var703 /* : NativeArray[String] */;
static val* varonce702;
static val* varonce704;
val* var705 /* : String */;
char* var706 /* : NativeString */;
val* var707 /* : FlatString */;
static val* varonce708;
val* var709 /* : String */;
char* var710 /* : NativeString */;
val* var711 /* : FlatString */;
static val* varonce712;
val* var713 /* : String */;
char* var714 /* : NativeString */;
val* var715 /* : FlatString */;
val* var716 /* : String */;
val* var718 /* : NativeArray[String] */;
static val* varonce717;
static val* varonce719;
val* var720 /* : String */;
char* var721 /* : NativeString */;
val* var722 /* : FlatString */;
static val* varonce723;
val* var724 /* : String */;
char* var725 /* : NativeString */;
val* var726 /* : FlatString */;
static val* varonce727;
val* var728 /* : String */;
char* var729 /* : NativeString */;
val* var730 /* : FlatString */;
val* var731 /* : String */;
val* var733 /* : ModelBuilder */;
val* var735 /* : ModelBuilder */;
val* var736 /* : ToolContext */;
val* var738 /* : ToolContext */;
val* var739 /* : OptionBool */;
val* var741 /* : OptionBool */;
val* var742 /* : nullable Object */;
val* var744 /* : nullable Object */;
short int var745 /* : Bool */;
static val* varonce746;
val* var747 /* : String */;
char* var748 /* : NativeString */;
val* var749 /* : FlatString */;
static val* varonce750;
val* var751 /* : String */;
char* var752 /* : NativeString */;
val* var753 /* : FlatString */;
static val* varonce754;
val* var755 /* : String */;
char* var756 /* : NativeString */;
val* var757 /* : FlatString */;
static val* varonce758;
val* var759 /* : String */;
char* var760 /* : NativeString */;
val* var761 /* : FlatString */;
static val* varonce762;
val* var763 /* : String */;
char* var764 /* : NativeString */;
val* var765 /* : FlatString */;
static val* varonce766;
val* var767 /* : String */;
char* var768 /* : NativeString */;
val* var769 /* : FlatString */;
val* var770 /* : ModelBuilder */;
val* var772 /* : ModelBuilder */;
val* var773 /* : ToolContext */;
val* var775 /* : ToolContext */;
val* var776 /* : OptionBool */;
val* var778 /* : OptionBool */;
val* var779 /* : nullable Object */;
val* var781 /* : nullable Object */;
short int var782 /* : Bool */;
static val* varonce783;
val* var784 /* : String */;
char* var785 /* : NativeString */;
val* var786 /* : FlatString */;
static val* varonce787;
val* var788 /* : String */;
char* var789 /* : NativeString */;
val* var790 /* : FlatString */;
static val* varonce791;
val* var792 /* : String */;
char* var793 /* : NativeString */;
val* var794 /* : FlatString */;
static val* varonce795;
val* var796 /* : String */;
char* var797 /* : NativeString */;
val* var798 /* : FlatString */;
val* var799 /* : MModule */;
val* var801 /* : MModule */;
val* var802 /* : POSetElement[MModule] */;
val* var804 /* : POSetElement[MModule] */;
val* var805 /* : Collection[nullable Object] */;
val* var_806 /* var : Collection[MModule] */;
val* var807 /* : Iterator[nullable Object] */;
val* var_808 /* var : Iterator[MModule] */;
short int var809 /* : Bool */;
val* var810 /* : nullable Object */;
val* var_m /* var m: MModule */;
static val* varonce811;
val* var812 /* : String */;
char* var813 /* : NativeString */;
val* var814 /* : FlatString */;
val* var815 /* : String */;
val* var816 /* : String */;
val* var_f /* var f: String */;
val* var818 /* : NativeArray[String] */;
static val* varonce817;
static val* varonce819;
val* var820 /* : String */;
char* var821 /* : NativeString */;
val* var822 /* : FlatString */;
static val* varonce823;
val* var824 /* : String */;
char* var825 /* : NativeString */;
val* var826 /* : FlatString */;
static val* varonce827;
val* var828 /* : String */;
char* var829 /* : NativeString */;
val* var830 /* : FlatString */;
val* var831 /* : Location */;
val* var833 /* : Location */;
val* var834 /* : nullable SourceFile */;
val* var836 /* : nullable SourceFile */;
val* var837 /* : String */;
val* var839 /* : String */;
val* var840 /* : String */;
val* var841 /* : String */;
val* var843 /* : NativeArray[String] */;
static val* varonce842;
static val* varonce844;
val* var845 /* : String */;
char* var846 /* : NativeString */;
val* var847 /* : FlatString */;
static val* varonce848;
val* var849 /* : String */;
char* var850 /* : NativeString */;
val* var851 /* : FlatString */;
val* var852 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "#include <signal.h>";
var3 = standard___standard__NativeString___to_s_with_length(var2, 19l);
var1 = var3;
varonce = var1;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var1); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (self) on <self:AbstractCompiler> */
var6 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <self:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 533);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_platform = var4;
{
var8 = nit___nit__Platform___no_main(var_platform);
}
var_ = var8;
if (var8){
var7 = var_;
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var11 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var9) on <var9:ModelBuilder> */
var14 = var9->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var9:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 36);
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
var22 = nit___nit__Platform___supports_libunwind(var_platform);
}
if (var22){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "#ifndef NO_STACKTRACE";
var26 = standard___standard__NativeString___to_s_with_length(var25, 21l);
var24 = var26;
varonce23 = var24;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "#define UNW_LOCAL_ONLY";
var30 = standard___standard__NativeString___to_s_with_length(var29, 22l);
var28 = var30;
varonce27 = var28;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "#include <libunwind.h>";
var34 = standard___standard__NativeString___to_s_with_length(var33, 22l);
var32 = var34;
varonce31 = var32;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "#include \"c_functions_hash.h\"";
var38 = standard___standard__NativeString___to_s_with_length(var37, 29l);
var36 = var38;
varonce35 = var36;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "#endif";
var42 = standard___standard__NativeString___to_s_with_length(var41, 6l);
var40 = var42;
varonce39 = var40;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "int glob_argc;";
var46 = standard___standard__NativeString___to_s_with_length(var45, 14l);
var44 = var46;
varonce43 = var44;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var44); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "char **glob_argv;";
var50 = standard___standard__NativeString___to_s_with_length(var49, 17l);
var48 = var50;
varonce47 = var48;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "val *glob_sys;";
var54 = standard___standard__NativeString___to_s_with_length(var53, 14l);
var52 = var54;
varonce51 = var52;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var57 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var55) on <var55:ModelBuilder> */
var60 = var55->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var55:ModelBuilder> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var58) on <var58:ToolContext> */
var63 = var58->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var58:ToolContext> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
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
var70 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1014);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_71 = var68;
{
var72 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_71);
}
var_73 = var72;
for(;;) {
{
var74 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_73);
}
if (var74){
{
var75 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_73);
}
var_tag = var75;
if (unlikely(varonce76==NULL)) {
var77 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "long count_type_test_resolved_";
var81 = standard___standard__NativeString___to_s_with_length(var80, 30l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var77)->values[0]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = ";";
var85 = standard___standard__NativeString___to_s_with_length(var84, 1l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var77)->values[2]=var83;
} else {
var77 = varonce76;
varonce76 = NULL;
}
((struct instance_standard__NativeArray*)var77)->values[1]=var_tag;
{
var86 = ((val*(*)(val* self))(var77->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var86); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce87==NULL)) {
var88 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "long count_type_test_unresolved_";
var92 = standard___standard__NativeString___to_s_with_length(var91, 32l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var88)->values[0]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = ";";
var96 = standard___standard__NativeString___to_s_with_length(var95, 1l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var88)->values[2]=var94;
} else {
var88 = varonce87;
varonce87 = NULL;
}
((struct instance_standard__NativeArray*)var88)->values[1]=var_tag;
{
var97 = ((val*(*)(val* self))(var88->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "long count_type_test_skipped_";
var103 = standard___standard__NativeString___to_s_with_length(var102, 29l);
var101 = var103;
varonce100 = var101;
}
((struct instance_standard__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = ";";
var107 = standard___standard__NativeString___to_s_with_length(var106, 1l);
var105 = var107;
varonce104 = var105;
}
((struct instance_standard__NativeArray*)var99)->values[2]=var105;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_standard__NativeArray*)var99)->values[1]=var_tag;
{
var108 = ((val*(*)(val* self))(var99->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var108); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var111 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var109) on <var109:AbstractCompiler> */
var114 = var109->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var109:AbstractCompiler> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (unlikely(varonce115==NULL)) {
var116 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "extern long count_type_test_resolved_";
var120 = standard___standard__NativeString___to_s_with_length(var119, 37l);
var118 = var120;
varonce117 = var118;
}
((struct instance_standard__NativeArray*)var116)->values[0]=var118;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = ";";
var124 = standard___standard__NativeString___to_s_with_length(var123, 1l);
var122 = var124;
varonce121 = var122;
}
((struct instance_standard__NativeArray*)var116)->values[2]=var122;
} else {
var116 = varonce115;
varonce115 = NULL;
}
((struct instance_standard__NativeArray*)var116)->values[1]=var_tag;
{
var125 = ((val*(*)(val* self))(var116->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var116); /* native_to_s on <var116:NativeArray[String]>*/
}
varonce115 = var116;
{
nit___nit__CodeWriter___add_decl(var112, var125); /* Direct call abstract_compiler#CodeWriter#add_decl on <var112:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var128 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var126) on <var126:AbstractCompiler> */
var131 = var126->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var126:AbstractCompiler> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
if (unlikely(varonce132==NULL)) {
var133 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "extern long count_type_test_unresolved_";
var137 = standard___standard__NativeString___to_s_with_length(var136, 39l);
var135 = var137;
varonce134 = var135;
}
((struct instance_standard__NativeArray*)var133)->values[0]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = ";";
var141 = standard___standard__NativeString___to_s_with_length(var140, 1l);
var139 = var141;
varonce138 = var139;
}
((struct instance_standard__NativeArray*)var133)->values[2]=var139;
} else {
var133 = varonce132;
varonce132 = NULL;
}
((struct instance_standard__NativeArray*)var133)->values[1]=var_tag;
{
var142 = ((val*(*)(val* self))(var133->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var133); /* native_to_s on <var133:NativeArray[String]>*/
}
varonce132 = var133;
{
nit___nit__CodeWriter___add_decl(var129, var142); /* Direct call abstract_compiler#CodeWriter#add_decl on <var129:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var145 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var143) on <var143:AbstractCompiler> */
var148 = var143->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var143:AbstractCompiler> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
if (unlikely(varonce149==NULL)) {
var150 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "extern long count_type_test_skipped_";
var154 = standard___standard__NativeString___to_s_with_length(var153, 36l);
var152 = var154;
varonce151 = var152;
}
((struct instance_standard__NativeArray*)var150)->values[0]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = ";";
var158 = standard___standard__NativeString___to_s_with_length(var157, 1l);
var156 = var158;
varonce155 = var156;
}
((struct instance_standard__NativeArray*)var150)->values[2]=var156;
} else {
var150 = varonce149;
varonce149 = NULL;
}
((struct instance_standard__NativeArray*)var150)->values[1]=var_tag;
{
var159 = ((val*(*)(val* self))(var150->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var150); /* native_to_s on <var150:NativeArray[String]>*/
}
varonce149 = var150;
{
nit___nit__CodeWriter___add_decl(var146, var159); /* Direct call abstract_compiler#CodeWriter#add_decl on <var146:CodeWriter>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_73); /* Direct call array#ArrayIterator#next on <var_73:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_73); /* Direct call array#ArrayIterator#finish on <var_73:ArrayIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var162 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var160) on <var160:ModelBuilder> */
var165 = var160->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var160:ModelBuilder> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var163) on <var163:ToolContext> */
var168 = var163->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var163:ToolContext> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 62);
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
var176 = standard___standard__NativeString___to_s_with_length(var175, 28l);
var174 = var176;
varonce173 = var174;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var174); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "long count_invoke_by_direct;";
var180 = standard___standard__NativeString___to_s_with_length(var179, 28l);
var178 = var180;
varonce177 = var178;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var178); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "long count_invoke_by_inline;";
var184 = standard___standard__NativeString___to_s_with_length(var183, 28l);
var182 = var184;
varonce181 = var182;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var182); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var187 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var185) on <var185:AbstractCompiler> */
var190 = var185->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var185:AbstractCompiler> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
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
var194 = standard___standard__NativeString___to_s_with_length(var193, 35l);
var192 = var194;
varonce191 = var192;
}
{
nit___nit__CodeWriter___add_decl(var188, var192); /* Direct call abstract_compiler#CodeWriter#add_decl on <var188:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var197 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var195) on <var195:AbstractCompiler> */
var200 = var195->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var195:AbstractCompiler> */
if (unlikely(var200 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
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
var204 = standard___standard__NativeString___to_s_with_length(var203, 35l);
var202 = var204;
varonce201 = var202;
}
{
nit___nit__CodeWriter___add_decl(var198, var202); /* Direct call abstract_compiler#CodeWriter#add_decl on <var198:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var207 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var205) on <var205:AbstractCompiler> */
var210 = var205->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var205:AbstractCompiler> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
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
var214 = standard___standard__NativeString___to_s_with_length(var213, 35l);
var212 = var214;
varonce211 = var212;
}
{
nit___nit__CodeWriter___add_decl(var208, var212); /* Direct call abstract_compiler#CodeWriter#add_decl on <var208:CodeWriter>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var217 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var215) on <var215:ModelBuilder> */
var220 = var215->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var215:ModelBuilder> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var218) on <var218:ToolContext> */
var223 = var218->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var218:ToolContext> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 64);
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
var231 = standard___standard__NativeString___to_s_with_length(var230, 26l);
var229 = var231;
varonce228 = var229;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var229); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce232!=NULL)) {
var233 = varonce232;
} else {
var234 = "long count_isset_checks = 0;";
var235 = standard___standard__NativeString___to_s_with_length(var234, 28l);
var233 = var235;
varonce232 = var233;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var233); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var238 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var238 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var236) on <var236:AbstractCompiler> */
var241 = var236->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var236:AbstractCompiler> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
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
var245 = standard___standard__NativeString___to_s_with_length(var244, 29l);
var243 = var245;
varonce242 = var243;
}
{
nit___nit__CodeWriter___add_decl(var239, var243); /* Direct call abstract_compiler#CodeWriter#add_decl on <var239:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var248 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var246) on <var246:AbstractCompiler> */
var251 = var246->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var246:AbstractCompiler> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
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
var255 = standard___standard__NativeString___to_s_with_length(var254, 31l);
var253 = var255;
varonce252 = var253;
}
{
nit___nit__CodeWriter___add_decl(var249, var253); /* Direct call abstract_compiler#CodeWriter#add_decl on <var249:CodeWriter>*/
}
} else {
}
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = "static void show_backtrace(void) {";
var259 = standard___standard__NativeString___to_s_with_length(var258, 34l);
var257 = var259;
varonce256 = var257;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var257); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var260 = nit___nit__Platform___supports_libunwind(var_platform);
}
if (var260){
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = "#ifndef NO_STACKTRACE";
var264 = standard___standard__NativeString___to_s_with_length(var263, 21l);
var262 = var264;
varonce261 = var262;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var262); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "char* opt = getenv(\"NIT_NO_STACK\");";
var268 = standard___standard__NativeString___to_s_with_length(var267, 35l);
var266 = var268;
varonce265 = var266;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var266); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "unw_cursor_t cursor;";
var272 = standard___standard__NativeString___to_s_with_length(var271, 20l);
var270 = var272;
varonce269 = var270;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var270); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "if(opt==NULL){";
var276 = standard___standard__NativeString___to_s_with_length(var275, 14l);
var274 = var276;
varonce273 = var274;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var274); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "unw_context_t uc;";
var280 = standard___standard__NativeString___to_s_with_length(var279, 17l);
var278 = var280;
varonce277 = var278;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var278); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "unw_word_t ip;";
var284 = standard___standard__NativeString___to_s_with_length(var283, 14l);
var282 = var284;
varonce281 = var282;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var282); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = "char* procname = malloc(sizeof(char) * 100);";
var288 = standard___standard__NativeString___to_s_with_length(var287, 44l);
var286 = var288;
varonce285 = var286;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var286); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "unw_getcontext(&uc);";
var292 = standard___standard__NativeString___to_s_with_length(var291, 20l);
var290 = var292;
varonce289 = var290;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var290); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = "unw_init_local(&cursor, &uc);";
var296 = standard___standard__NativeString___to_s_with_length(var295, 29l);
var294 = var296;
varonce293 = var294;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var294); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var300 = standard___standard__NativeString___to_s_with_length(var299, 67l);
var298 = var300;
varonce297 = var298;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var298); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = "PRINT_ERROR(\"--   Stack Trace   ------------------------------\\n\");";
var304 = standard___standard__NativeString___to_s_with_length(var303, 67l);
var302 = var304;
varonce301 = var302;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var302); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce305!=NULL)) {
var306 = varonce305;
} else {
var307 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var308 = standard___standard__NativeString___to_s_with_length(var307, 67l);
var306 = var308;
varonce305 = var306;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var306); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = "while (unw_step(&cursor) > 0) {";
var312 = standard___standard__NativeString___to_s_with_length(var311, 31l);
var310 = var312;
varonce309 = var310;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var310); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce313!=NULL)) {
var314 = varonce313;
} else {
var315 = "\tunw_get_proc_name(&cursor, procname, 100, &ip);";
var316 = standard___standard__NativeString___to_s_with_length(var315, 48l);
var314 = var316;
varonce313 = var314;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var314); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = "\tconst char* recv = get_nit_name(procname, strlen(procname));";
var320 = standard___standard__NativeString___to_s_with_length(var319, 61l);
var318 = var320;
varonce317 = var318;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var318); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = "\tif (recv != NULL){";
var324 = standard___standard__NativeString___to_s_with_length(var323, 19l);
var322 = var324;
varonce321 = var322;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var322); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = "\t\tPRINT_ERROR(\"` %s\\n\", recv);";
var328 = standard___standard__NativeString___to_s_with_length(var327, 30l);
var326 = var328;
varonce325 = var326;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var326); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = "\t}else{";
var332 = standard___standard__NativeString___to_s_with_length(var331, 7l);
var330 = var332;
varonce329 = var330;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var330); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = "\t\tPRINT_ERROR(\"` %s\\n\", procname);";
var336 = standard___standard__NativeString___to_s_with_length(var335, 34l);
var334 = var336;
varonce333 = var334;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var334); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "\t}";
var340 = standard___standard__NativeString___to_s_with_length(var339, 2l);
var338 = var340;
varonce337 = var338;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var338); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce341!=NULL)) {
var342 = varonce341;
} else {
var343 = "}";
var344 = standard___standard__NativeString___to_s_with_length(var343, 1l);
var342 = var344;
varonce341 = var342;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var342); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var348 = standard___standard__NativeString___to_s_with_length(var347, 67l);
var346 = var348;
varonce345 = var346;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var346); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce349!=NULL)) {
var350 = varonce349;
} else {
var351 = "free(procname);";
var352 = standard___standard__NativeString___to_s_with_length(var351, 15l);
var350 = var352;
varonce349 = var350;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var350); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce353!=NULL)) {
var354 = varonce353;
} else {
var355 = "}";
var356 = standard___standard__NativeString___to_s_with_length(var355, 1l);
var354 = var356;
varonce353 = var354;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var354); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce357!=NULL)) {
var358 = varonce357;
} else {
var359 = "#endif /* NO_STACKTRACE */";
var360 = standard___standard__NativeString___to_s_with_length(var359, 26l);
var358 = var360;
varonce357 = var358;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var358); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce361!=NULL)) {
var362 = varonce361;
} else {
var363 = "}";
var364 = standard___standard__NativeString___to_s_with_length(var363, 1l);
var362 = var364;
varonce361 = var362;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var362); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = "void sig_handler(int signo){";
var368 = standard___standard__NativeString___to_s_with_length(var367, 28l);
var366 = var368;
varonce365 = var366;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var366); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce369!=NULL)) {
var370 = varonce369;
} else {
var371 = "PRINT_ERROR(\"Caught signal : %s\\n\", strsignal(signo));";
var372 = standard___standard__NativeString___to_s_with_length(var371, 54l);
var370 = var372;
varonce369 = var370;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var370); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce373!=NULL)) {
var374 = varonce373;
} else {
var375 = "show_backtrace();";
var376 = standard___standard__NativeString___to_s_with_length(var375, 17l);
var374 = var376;
varonce373 = var374;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var374); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce377!=NULL)) {
var378 = varonce377;
} else {
var379 = "signal(signo, SIG_DFL);";
var380 = standard___standard__NativeString___to_s_with_length(var379, 23l);
var378 = var380;
varonce377 = var378;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var378); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce381!=NULL)) {
var382 = varonce381;
} else {
var383 = "kill(getpid(), signo);";
var384 = standard___standard__NativeString___to_s_with_length(var383, 22l);
var382 = var384;
varonce381 = var382;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var382); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce385!=NULL)) {
var386 = varonce385;
} else {
var387 = "}";
var388 = standard___standard__NativeString___to_s_with_length(var387, 1l);
var386 = var388;
varonce385 = var386;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var386); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce389!=NULL)) {
var390 = varonce389;
} else {
var391 = "void fatal_exit(int status) {";
var392 = standard___standard__NativeString___to_s_with_length(var391, 29l);
var390 = var392;
varonce389 = var390;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var390); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = "show_backtrace();";
var396 = standard___standard__NativeString___to_s_with_length(var395, 17l);
var394 = var396;
varonce393 = var394;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var394); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "exit(status);";
var400 = standard___standard__NativeString___to_s_with_length(var399, 13l);
var398 = var400;
varonce397 = var398;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var398); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce401!=NULL)) {
var402 = varonce401;
} else {
var403 = "}";
var404 = standard___standard__NativeString___to_s_with_length(var403, 1l);
var402 = var404;
varonce401 = var402;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var402); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (var_no_main){
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "int nit_main(int argc, char** argv) {";
var408 = standard___standard__NativeString___to_s_with_length(var407, 37l);
var406 = var408;
varonce405 = var406;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var406); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce409!=NULL)) {
var410 = varonce409;
} else {
var411 = "int main(int argc, char** argv) {";
var412 = standard___standard__NativeString___to_s_with_length(var411, 33l);
var410 = var412;
varonce409 = var410;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var410); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "signal(SIGABRT, sig_handler);";
var416 = standard___standard__NativeString___to_s_with_length(var415, 29l);
var414 = var416;
varonce413 = var414;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var414); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "signal(SIGFPE, sig_handler);";
var420 = standard___standard__NativeString___to_s_with_length(var419, 28l);
var418 = var420;
varonce417 = var418;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var418); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = "signal(SIGILL, sig_handler);";
var424 = standard___standard__NativeString___to_s_with_length(var423, 28l);
var422 = var424;
varonce421 = var422;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var422); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce425!=NULL)) {
var426 = varonce425;
} else {
var427 = "signal(SIGINT, sig_handler);";
var428 = standard___standard__NativeString___to_s_with_length(var427, 28l);
var426 = var428;
varonce425 = var426;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var426); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "signal(SIGTERM, sig_handler);";
var432 = standard___standard__NativeString___to_s_with_length(var431, 29l);
var430 = var432;
varonce429 = var430;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var430); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce433!=NULL)) {
var434 = varonce433;
} else {
var435 = "signal(SIGSEGV, sig_handler);";
var436 = standard___standard__NativeString___to_s_with_length(var435, 29l);
var434 = var436;
varonce433 = var434;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var434); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce437!=NULL)) {
var438 = varonce437;
} else {
var439 = "signal(SIGPIPE, sig_handler);";
var440 = standard___standard__NativeString___to_s_with_length(var439, 29l);
var438 = var440;
varonce437 = var438;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var438); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = "glob_argc = argc; glob_argv = argv;";
var444 = standard___standard__NativeString___to_s_with_length(var443, 35l);
var442 = var444;
varonce441 = var442;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var442); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = "initialize_gc_option();";
var448 = standard___standard__NativeString___to_s_with_length(var447, 23l);
var446 = var448;
varonce445 = var446;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var446); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = "initialize_nitni_global_refs();";
var452 = standard___standard__NativeString___to_s_with_length(var451, 31l);
var450 = var452;
varonce449 = var450;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var450); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var455 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var455 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var453 = var455;
RET_LABEL454:(void)0;
}
}
{
var456 = nit__model___MModule___sys_type(var453);
}
var_main_type = var456;
if (var_main_type == NULL) {
var457 = 0; /* is null */
} else {
var457 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_type,((val*)NULL)) on <var_main_type:nullable MClassType> */
var_other = ((val*)NULL);
{
var460 = ((short int(*)(val* self, val* p0))(var_main_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_main_type, var_other); /* == on <var_main_type:nullable MClassType(MClassType)>*/
}
var461 = !var460;
var458 = var461;
goto RET_LABEL459;
RET_LABEL459:(void)0;
}
var457 = var458;
}
if (var457){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var464 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var464 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var462 = var464;
RET_LABEL463:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var462) on <var462:AbstractCompiler> */
var467 = var462->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var462:AbstractCompiler> */
if (unlikely(var467 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var465 = var467;
RET_LABEL466:(void)0;
}
}
var_mainmodule = var465;
{
var468 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_glob_sys = var468;
if (unlikely(varonce469==NULL)) {
var470 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce471!=NULL)) {
var472 = varonce471;
} else {
var473 = "glob_sys = ";
var474 = standard___standard__NativeString___to_s_with_length(var473, 11l);
var472 = var474;
varonce471 = var472;
}
((struct instance_standard__NativeArray*)var470)->values[0]=var472;
if (likely(varonce475!=NULL)) {
var476 = varonce475;
} else {
var477 = ";";
var478 = standard___standard__NativeString___to_s_with_length(var477, 1l);
var476 = var478;
varonce475 = var476;
}
((struct instance_standard__NativeArray*)var470)->values[2]=var476;
} else {
var470 = varonce469;
varonce469 = NULL;
}
{
var479 = ((val*(*)(val* self))(var_glob_sys->class->vft[COLOR_standard__string__Object__to_s]))(var_glob_sys); /* to_s on <var_glob_sys:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var470)->values[1]=var479;
{
var480 = ((val*(*)(val* self))(var470->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var470); /* native_to_s on <var470:NativeArray[String]>*/
}
varonce469 = var470;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var480); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce481!=NULL)) {
var482 = varonce481;
} else {
var483 = "init";
var484 = standard___standard__NativeString___to_s_with_length(var483, 4l);
var482 = var484;
varonce481 = var482;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var487 = var_main_type->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var487 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var485 = var487;
RET_LABEL486:(void)0;
}
}
{
var488 = nit__model___MModule___try_get_primitive_method(var_mainmodule, var482, var485);
}
var_main_init = var488;
if (var_main_init == NULL) {
var489 = 0; /* is null */
} else {
var489 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_init,((val*)NULL)) on <var_main_init:nullable MMethod> */
var_other = ((val*)NULL);
{
var492 = ((short int(*)(val* self, val* p0))(var_main_init->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_main_init, var_other); /* == on <var_main_init:nullable MMethod(MMethod)>*/
}
var493 = !var492;
var490 = var493;
goto RET_LABEL491;
RET_LABEL491:(void)0;
}
var489 = var490;
}
if (var489){
var494 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var494, 1l); /* Direct call array#Array#with_capacity on <var494:Array[RuntimeVariable]>*/
}
var_495 = var494;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_495, var_glob_sys); /* Direct call array#AbstractArray#push on <var_495:Array[RuntimeVariable]>*/
}
{
var496 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_main_init, var_495);
}
} else {
}
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = "run";
var501 = standard___standard__NativeString___to_s_with_length(var500, 3l);
var499 = var501;
varonce498 = var499;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var504 = var_main_type->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var504 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var502 = var504;
RET_LABEL503:(void)0;
}
}
{
var505 = nit__model___MModule___try_get_primitive_method(var_mainmodule, var499, var502);
}
if (var505!=NULL) {
var497 = var505;
} else {
if (likely(varonce506!=NULL)) {
var507 = varonce506;
} else {
var508 = "main";
var509 = standard___standard__NativeString___to_s_with_length(var508, 4l);
var507 = var509;
varonce506 = var507;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var512 = var_main_type->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var512 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var510 = var512;
RET_LABEL511:(void)0;
}
}
{
var513 = nit__model___MModule___try_get_primitive_method(var_mainmodule, var507, var510);
}
var497 = var513;
}
var_main_method = var497;
if (var_main_method == NULL) {
var514 = 0; /* is null */
} else {
var514 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_method,((val*)NULL)) on <var_main_method:nullable MMethod> */
var_other = ((val*)NULL);
{
var517 = ((short int(*)(val* self, val* p0))(var_main_method->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_main_method, var_other); /* == on <var_main_method:nullable MMethod(MMethod)>*/
}
var518 = !var517;
var515 = var518;
goto RET_LABEL516;
RET_LABEL516:(void)0;
}
var514 = var515;
}
if (var514){
var519 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var519, 1l); /* Direct call array#Array#with_capacity on <var519:Array[RuntimeVariable]>*/
}
var_520 = var519;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_520, var_glob_sys); /* Direct call array#AbstractArray#push on <var_520:Array[RuntimeVariable]>*/
}
{
var521 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_main_method, var_520);
}
} else {
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var524 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var524 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var522 = var524;
RET_LABEL523:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var522) on <var522:ModelBuilder> */
var527 = var522->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var522:ModelBuilder> */
if (unlikely(var527 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var525 = var527;
RET_LABEL526:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var525) on <var525:ToolContext> */
var530 = var525->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var525:ToolContext> */
if (unlikely(var530 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
fatal_exit(1);
}
var528 = var530;
RET_LABEL529:(void)0;
}
}
{
{ /* Inline opts#Option#value (var528) on <var528:OptionBool> */
var533 = var528->attrs[COLOR_opts__Option___value].val; /* _value on <var528:OptionBool> */
var531 = var533;
RET_LABEL532:(void)0;
}
}
var534 = (short int)((long)(var531)>>2);
if (var534){
if (likely(varonce535!=NULL)) {
var536 = varonce535;
} else {
var537 = "long count_type_test_resolved_total = 0;";
var538 = standard___standard__NativeString___to_s_with_length(var537, 40l);
var536 = var538;
varonce535 = var536;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var536); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce539!=NULL)) {
var540 = varonce539;
} else {
var541 = "long count_type_test_unresolved_total = 0;";
var542 = standard___standard__NativeString___to_s_with_length(var541, 42l);
var540 = var542;
varonce539 = var540;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var540); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce543!=NULL)) {
var544 = varonce543;
} else {
var545 = "long count_type_test_skipped_total = 0;";
var546 = standard___standard__NativeString___to_s_with_length(var545, 39l);
var544 = var546;
varonce543 = var544;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var544); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce547!=NULL)) {
var548 = varonce547;
} else {
var549 = "long count_type_test_total_total = 0;";
var550 = standard___standard__NativeString___to_s_with_length(var549, 37l);
var548 = var550;
varonce547 = var548;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var548); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var553 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var553 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1014);
fatal_exit(1);
}
var551 = var553;
RET_LABEL552:(void)0;
}
}
var_554 = var551;
{
var555 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_554);
}
var_556 = var555;
for(;;) {
{
var557 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_556);
}
if (var557){
{
var558 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_556);
}
var_tag559 = var558;
if (unlikely(varonce560==NULL)) {
var561 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce562!=NULL)) {
var563 = varonce562;
} else {
var564 = "long count_type_test_total_";
var565 = standard___standard__NativeString___to_s_with_length(var564, 27l);
var563 = var565;
varonce562 = var563;
}
((struct instance_standard__NativeArray*)var561)->values[0]=var563;
if (likely(varonce566!=NULL)) {
var567 = varonce566;
} else {
var568 = ";";
var569 = standard___standard__NativeString___to_s_with_length(var568, 1l);
var567 = var569;
varonce566 = var567;
}
((struct instance_standard__NativeArray*)var561)->values[2]=var567;
} else {
var561 = varonce560;
varonce560 = NULL;
}
((struct instance_standard__NativeArray*)var561)->values[1]=var_tag559;
{
var570 = ((val*(*)(val* self))(var561->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var561); /* native_to_s on <var561:NativeArray[String]>*/
}
varonce560 = var561;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var570); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce571==NULL)) {
var572 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce573!=NULL)) {
var574 = varonce573;
} else {
var575 = "count_type_test_total_";
var576 = standard___standard__NativeString___to_s_with_length(var575, 22l);
var574 = var576;
varonce573 = var574;
}
((struct instance_standard__NativeArray*)var572)->values[0]=var574;
if (likely(varonce577!=NULL)) {
var578 = varonce577;
} else {
var579 = " = count_type_test_resolved_";
var580 = standard___standard__NativeString___to_s_with_length(var579, 28l);
var578 = var580;
varonce577 = var578;
}
((struct instance_standard__NativeArray*)var572)->values[2]=var578;
if (likely(varonce581!=NULL)) {
var582 = varonce581;
} else {
var583 = " + count_type_test_unresolved_";
var584 = standard___standard__NativeString___to_s_with_length(var583, 30l);
var582 = var584;
varonce581 = var582;
}
((struct instance_standard__NativeArray*)var572)->values[4]=var582;
if (likely(varonce585!=NULL)) {
var586 = varonce585;
} else {
var587 = " + count_type_test_skipped_";
var588 = standard___standard__NativeString___to_s_with_length(var587, 27l);
var586 = var588;
varonce585 = var586;
}
((struct instance_standard__NativeArray*)var572)->values[6]=var586;
if (likely(varonce589!=NULL)) {
var590 = varonce589;
} else {
var591 = ";";
var592 = standard___standard__NativeString___to_s_with_length(var591, 1l);
var590 = var592;
varonce589 = var590;
}
((struct instance_standard__NativeArray*)var572)->values[8]=var590;
} else {
var572 = varonce571;
varonce571 = NULL;
}
((struct instance_standard__NativeArray*)var572)->values[1]=var_tag559;
((struct instance_standard__NativeArray*)var572)->values[3]=var_tag559;
((struct instance_standard__NativeArray*)var572)->values[5]=var_tag559;
((struct instance_standard__NativeArray*)var572)->values[7]=var_tag559;
{
var593 = ((val*(*)(val* self))(var572->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var572); /* native_to_s on <var572:NativeArray[String]>*/
}
varonce571 = var572;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var593); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce594==NULL)) {
var595 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce596!=NULL)) {
var597 = varonce596;
} else {
var598 = "count_type_test_resolved_total += count_type_test_resolved_";
var599 = standard___standard__NativeString___to_s_with_length(var598, 59l);
var597 = var599;
varonce596 = var597;
}
((struct instance_standard__NativeArray*)var595)->values[0]=var597;
if (likely(varonce600!=NULL)) {
var601 = varonce600;
} else {
var602 = ";";
var603 = standard___standard__NativeString___to_s_with_length(var602, 1l);
var601 = var603;
varonce600 = var601;
}
((struct instance_standard__NativeArray*)var595)->values[2]=var601;
} else {
var595 = varonce594;
varonce594 = NULL;
}
((struct instance_standard__NativeArray*)var595)->values[1]=var_tag559;
{
var604 = ((val*(*)(val* self))(var595->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var595); /* native_to_s on <var595:NativeArray[String]>*/
}
varonce594 = var595;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var604); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce605==NULL)) {
var606 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce607!=NULL)) {
var608 = varonce607;
} else {
var609 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var610 = standard___standard__NativeString___to_s_with_length(var609, 63l);
var608 = var610;
varonce607 = var608;
}
((struct instance_standard__NativeArray*)var606)->values[0]=var608;
if (likely(varonce611!=NULL)) {
var612 = varonce611;
} else {
var613 = ";";
var614 = standard___standard__NativeString___to_s_with_length(var613, 1l);
var612 = var614;
varonce611 = var612;
}
((struct instance_standard__NativeArray*)var606)->values[2]=var612;
} else {
var606 = varonce605;
varonce605 = NULL;
}
((struct instance_standard__NativeArray*)var606)->values[1]=var_tag559;
{
var615 = ((val*(*)(val* self))(var606->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var606); /* native_to_s on <var606:NativeArray[String]>*/
}
varonce605 = var606;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var615); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce616==NULL)) {
var617 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce618!=NULL)) {
var619 = varonce618;
} else {
var620 = "count_type_test_skipped_total += count_type_test_skipped_";
var621 = standard___standard__NativeString___to_s_with_length(var620, 57l);
var619 = var621;
varonce618 = var619;
}
((struct instance_standard__NativeArray*)var617)->values[0]=var619;
if (likely(varonce622!=NULL)) {
var623 = varonce622;
} else {
var624 = ";";
var625 = standard___standard__NativeString___to_s_with_length(var624, 1l);
var623 = var625;
varonce622 = var623;
}
((struct instance_standard__NativeArray*)var617)->values[2]=var623;
} else {
var617 = varonce616;
varonce616 = NULL;
}
((struct instance_standard__NativeArray*)var617)->values[1]=var_tag559;
{
var626 = ((val*(*)(val* self))(var617->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var617); /* native_to_s on <var617:NativeArray[String]>*/
}
varonce616 = var617;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var626); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce627==NULL)) {
var628 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce629!=NULL)) {
var630 = varonce629;
} else {
var631 = "count_type_test_total_total += count_type_test_total_";
var632 = standard___standard__NativeString___to_s_with_length(var631, 53l);
var630 = var632;
varonce629 = var630;
}
((struct instance_standard__NativeArray*)var628)->values[0]=var630;
if (likely(varonce633!=NULL)) {
var634 = varonce633;
} else {
var635 = ";";
var636 = standard___standard__NativeString___to_s_with_length(var635, 1l);
var634 = var636;
varonce633 = var634;
}
((struct instance_standard__NativeArray*)var628)->values[2]=var634;
} else {
var628 = varonce627;
varonce627 = NULL;
}
((struct instance_standard__NativeArray*)var628)->values[1]=var_tag559;
{
var637 = ((val*(*)(val* self))(var628->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var628); /* native_to_s on <var628:NativeArray[String]>*/
}
varonce627 = var628;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var637); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_556); /* Direct call array#ArrayIterator#next on <var_556:ArrayIterator[String]>*/
}
} else {
goto BREAK_label638;
}
}
BREAK_label638: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_556); /* Direct call array#ArrayIterator#finish on <var_556:ArrayIterator[String]>*/
}
if (likely(varonce639!=NULL)) {
var640 = varonce639;
} else {
var641 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var642 = standard___standard__NativeString___to_s_with_length(var641, 48l);
var640 = var642;
varonce639 = var640;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var640); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce643!=NULL)) {
var644 = varonce643;
} else {
var645 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var646 = standard___standard__NativeString___to_s_with_length(var645, 51l);
var644 = var646;
varonce643 = var644;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var644); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var649 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var649 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1014);
fatal_exit(1);
}
var647 = var649;
RET_LABEL648:(void)0;
}
}
{
var650 = standard__array___Collection___to_a(var647);
}
var_tags = var650;
if (likely(varonce651!=NULL)) {
var652 = varonce651;
} else {
var653 = "total";
var654 = standard___standard__NativeString___to_s_with_length(var653, 5l);
var652 = var654;
varonce651 = var652;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_tags, var652); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
var_655 = var_tags;
{
var656 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_655);
}
var_657 = var656;
for(;;) {
{
var658 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_657);
}
if (var658){
{
var659 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_657);
}
var_tag660 = var659;
if (unlikely(varonce661==NULL)) {
var662 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce663!=NULL)) {
var664 = varonce663;
} else {
var665 = "printf(\"";
var666 = standard___standard__NativeString___to_s_with_length(var665, 8l);
var664 = var666;
varonce663 = var664;
}
((struct instance_standard__NativeArray*)var662)->values[0]=var664;
if (likely(varonce667!=NULL)) {
var668 = varonce667;
} else {
var669 = "\");";
var670 = standard___standard__NativeString___to_s_with_length(var669, 3l);
var668 = var670;
varonce667 = var668;
}
((struct instance_standard__NativeArray*)var662)->values[2]=var668;
} else {
var662 = varonce661;
varonce661 = NULL;
}
((struct instance_standard__NativeArray*)var662)->values[1]=var_tag660;
{
var671 = ((val*(*)(val* self))(var662->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var662); /* native_to_s on <var662:NativeArray[String]>*/
}
varonce661 = var662;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var671); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce672==NULL)) {
var673 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce674!=NULL)) {
var675 = varonce674;
} else {
var676 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var677 = standard___standard__NativeString___to_s_with_length(var676, 50l);
var675 = var677;
varonce674 = var675;
}
((struct instance_standard__NativeArray*)var673)->values[0]=var675;
if (likely(varonce678!=NULL)) {
var679 = varonce678;
} else {
var680 = ", 100.0*count_type_test_resolved_";
var681 = standard___standard__NativeString___to_s_with_length(var680, 33l);
var679 = var681;
varonce678 = var679;
}
((struct instance_standard__NativeArray*)var673)->values[2]=var679;
if (likely(varonce682!=NULL)) {
var683 = varonce682;
} else {
var684 = "/count_type_test_total_total);";
var685 = standard___standard__NativeString___to_s_with_length(var684, 30l);
var683 = var685;
varonce682 = var683;
}
((struct instance_standard__NativeArray*)var673)->values[4]=var683;
} else {
var673 = varonce672;
varonce672 = NULL;
}
((struct instance_standard__NativeArray*)var673)->values[1]=var_tag660;
((struct instance_standard__NativeArray*)var673)->values[3]=var_tag660;
{
var686 = ((val*(*)(val* self))(var673->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var673); /* native_to_s on <var673:NativeArray[String]>*/
}
varonce672 = var673;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var686); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce687==NULL)) {
var688 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce689!=NULL)) {
var690 = varonce689;
} else {
var691 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var692 = standard___standard__NativeString___to_s_with_length(var691, 52l);
var690 = var692;
varonce689 = var690;
}
((struct instance_standard__NativeArray*)var688)->values[0]=var690;
if (likely(varonce693!=NULL)) {
var694 = varonce693;
} else {
var695 = ", 100.0*count_type_test_unresolved_";
var696 = standard___standard__NativeString___to_s_with_length(var695, 35l);
var694 = var696;
varonce693 = var694;
}
((struct instance_standard__NativeArray*)var688)->values[2]=var694;
if (likely(varonce697!=NULL)) {
var698 = varonce697;
} else {
var699 = "/count_type_test_total_total);";
var700 = standard___standard__NativeString___to_s_with_length(var699, 30l);
var698 = var700;
varonce697 = var698;
}
((struct instance_standard__NativeArray*)var688)->values[4]=var698;
} else {
var688 = varonce687;
varonce687 = NULL;
}
((struct instance_standard__NativeArray*)var688)->values[1]=var_tag660;
((struct instance_standard__NativeArray*)var688)->values[3]=var_tag660;
{
var701 = ((val*(*)(val* self))(var688->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var688); /* native_to_s on <var688:NativeArray[String]>*/
}
varonce687 = var688;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var701); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce702==NULL)) {
var703 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce704!=NULL)) {
var705 = varonce704;
} else {
var706 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var707 = standard___standard__NativeString___to_s_with_length(var706, 49l);
var705 = var707;
varonce704 = var705;
}
((struct instance_standard__NativeArray*)var703)->values[0]=var705;
if (likely(varonce708!=NULL)) {
var709 = varonce708;
} else {
var710 = ", 100.0*count_type_test_skipped_";
var711 = standard___standard__NativeString___to_s_with_length(var710, 32l);
var709 = var711;
varonce708 = var709;
}
((struct instance_standard__NativeArray*)var703)->values[2]=var709;
if (likely(varonce712!=NULL)) {
var713 = varonce712;
} else {
var714 = "/count_type_test_total_total);";
var715 = standard___standard__NativeString___to_s_with_length(var714, 30l);
var713 = var715;
varonce712 = var713;
}
((struct instance_standard__NativeArray*)var703)->values[4]=var713;
} else {
var703 = varonce702;
varonce702 = NULL;
}
((struct instance_standard__NativeArray*)var703)->values[1]=var_tag660;
((struct instance_standard__NativeArray*)var703)->values[3]=var_tag660;
{
var716 = ((val*(*)(val* self))(var703->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var703); /* native_to_s on <var703:NativeArray[String]>*/
}
varonce702 = var703;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var716); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce717==NULL)) {
var718 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce719!=NULL)) {
var720 = varonce719;
} else {
var721 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var722 = standard___standard__NativeString___to_s_with_length(var721, 49l);
var720 = var722;
varonce719 = var720;
}
((struct instance_standard__NativeArray*)var718)->values[0]=var720;
if (likely(varonce723!=NULL)) {
var724 = varonce723;
} else {
var725 = ", 100.0*count_type_test_total_";
var726 = standard___standard__NativeString___to_s_with_length(var725, 30l);
var724 = var726;
varonce723 = var724;
}
((struct instance_standard__NativeArray*)var718)->values[2]=var724;
if (likely(varonce727!=NULL)) {
var728 = varonce727;
} else {
var729 = "/count_type_test_total_total);";
var730 = standard___standard__NativeString___to_s_with_length(var729, 30l);
var728 = var730;
varonce727 = var728;
}
((struct instance_standard__NativeArray*)var718)->values[4]=var728;
} else {
var718 = varonce717;
varonce717 = NULL;
}
((struct instance_standard__NativeArray*)var718)->values[1]=var_tag660;
((struct instance_standard__NativeArray*)var718)->values[3]=var_tag660;
{
var731 = ((val*(*)(val* self))(var718->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var718); /* native_to_s on <var718:NativeArray[String]>*/
}
varonce717 = var718;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var731); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_657); /* Direct call array#ArrayIterator#next on <var_657:ArrayIterator[String]>*/
}
} else {
goto BREAK_label732;
}
}
BREAK_label732: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_657); /* Direct call array#ArrayIterator#finish on <var_657:ArrayIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var735 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var735 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var733 = var735;
RET_LABEL734:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var733) on <var733:ModelBuilder> */
var738 = var733->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var733:ModelBuilder> */
if (unlikely(var738 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var736 = var738;
RET_LABEL737:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var736) on <var736:ToolContext> */
var741 = var736->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var736:ToolContext> */
if (unlikely(var741 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 62);
fatal_exit(1);
}
var739 = var741;
RET_LABEL740:(void)0;
}
}
{
{ /* Inline opts#Option#value (var739) on <var739:OptionBool> */
var744 = var739->attrs[COLOR_opts__Option___value].val; /* _value on <var739:OptionBool> */
var742 = var744;
RET_LABEL743:(void)0;
}
}
var745 = (short int)((long)(var742)>>2);
if (var745){
if (likely(varonce746!=NULL)) {
var747 = varonce746;
} else {
var748 = "long count_invoke_total;";
var749 = standard___standard__NativeString___to_s_with_length(var748, 24l);
var747 = var749;
varonce746 = var747;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var747); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce750!=NULL)) {
var751 = varonce750;
} else {
var752 = "count_invoke_total = count_invoke_by_tables + count_invoke_by_direct + count_invoke_by_inline;";
var753 = standard___standard__NativeString___to_s_with_length(var752, 94l);
var751 = var753;
varonce750 = var751;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var751); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce754!=NULL)) {
var755 = varonce754;
} else {
var756 = "printf(\"# dynamic count_invocation: total %ld\\n\", count_invoke_total);";
var757 = standard___standard__NativeString___to_s_with_length(var756, 70l);
var755 = var757;
varonce754 = var755;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var755); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce758!=NULL)) {
var759 = varonce758;
} else {
var760 = "printf(\"by table: %ld (%.2f%%)\\n\", count_invoke_by_tables, 100.0*count_invoke_by_tables/count_invoke_total);";
var761 = standard___standard__NativeString___to_s_with_length(var760, 108l);
var759 = var761;
varonce758 = var759;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var759); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce762!=NULL)) {
var763 = varonce762;
} else {
var764 = "printf(\"direct:   %ld (%.2f%%)\\n\", count_invoke_by_direct, 100.0*count_invoke_by_direct/count_invoke_total);";
var765 = standard___standard__NativeString___to_s_with_length(var764, 108l);
var763 = var765;
varonce762 = var763;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var763); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce766!=NULL)) {
var767 = varonce766;
} else {
var768 = "printf(\"inlined:  %ld (%.2f%%)\\n\", count_invoke_by_inline, 100.0*count_invoke_by_inline/count_invoke_total);";
var769 = standard___standard__NativeString___to_s_with_length(var768, 108l);
var767 = var769;
varonce766 = var767;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var767); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var772 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var772 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var770 = var772;
RET_LABEL771:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var770) on <var770:ModelBuilder> */
var775 = var770->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var770:ModelBuilder> */
if (unlikely(var775 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var773 = var775;
RET_LABEL774:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var773) on <var773:ToolContext> */
var778 = var773->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var773:ToolContext> */
if (unlikely(var778 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 64);
fatal_exit(1);
}
var776 = var778;
RET_LABEL777:(void)0;
}
}
{
{ /* Inline opts#Option#value (var776) on <var776:OptionBool> */
var781 = var776->attrs[COLOR_opts__Option___value].val; /* _value on <var776:OptionBool> */
var779 = var781;
RET_LABEL780:(void)0;
}
}
var782 = (short int)((long)(var779)>>2);
if (var782){
if (likely(varonce783!=NULL)) {
var784 = varonce783;
} else {
var785 = "printf(\"# dynamic attribute reads: %ld\\n\", count_attr_reads);";
var786 = standard___standard__NativeString___to_s_with_length(var785, 61l);
var784 = var786;
varonce783 = var784;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var784); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce787!=NULL)) {
var788 = varonce787;
} else {
var789 = "printf(\"# dynamic isset checks: %ld\\n\", count_isset_checks);";
var790 = standard___standard__NativeString___to_s_with_length(var789, 60l);
var788 = var790;
varonce787 = var788;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var788); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce791!=NULL)) {
var792 = varonce791;
} else {
var793 = "return 0;";
var794 = standard___standard__NativeString___to_s_with_length(var793, 9l);
var792 = var794;
varonce791 = var792;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var792); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce795!=NULL)) {
var796 = varonce795;
} else {
var797 = "}";
var798 = standard___standard__NativeString___to_s_with_length(var797, 1l);
var796 = var798;
varonce795 = var796;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var796); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var801 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var801 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var799 = var801;
RET_LABEL800:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var799) on <var799:MModule> */
var804 = var799->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var799:MModule> */
if (unlikely(var804 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var802 = var804;
RET_LABEL803:(void)0;
}
}
{
var805 = poset___poset__POSetElement___greaters(var802);
}
var_806 = var805;
{
var807 = ((val*(*)(val* self))((((long)var_806&3)?class_info[((long)var_806&3)]:var_806->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_806); /* iterator on <var_806:Collection[MModule]>*/
}
var_808 = var807;
for(;;) {
{
var809 = ((short int(*)(val* self))((((long)var_808&3)?class_info[((long)var_808&3)]:var_808->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_808); /* is_ok on <var_808:Iterator[MModule]>*/
}
if (var809){
{
var810 = ((val*(*)(val* self))((((long)var_808&3)?class_info[((long)var_808&3)]:var_808->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_808); /* item on <var_808:Iterator[MModule]>*/
}
var_m = var810;
if (likely(varonce811!=NULL)) {
var812 = varonce811;
} else {
var813 = "FILE_";
var814 = standard___standard__NativeString___to_s_with_length(var813, 5l);
var812 = var814;
varonce811 = var812;
}
{
var815 = nit___nit__MModule___nit__model_base__MEntity__c_name(var_m);
}
{
var816 = ((val*(*)(val* self, val* p0))(var812->class->vft[COLOR_standard__string__String___43d]))(var812, var815); /* + on <var812:String>*/
}
var_f = var816;
if (unlikely(varonce817==NULL)) {
var818 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce819!=NULL)) {
var820 = varonce819;
} else {
var821 = "const char ";
var822 = standard___standard__NativeString___to_s_with_length(var821, 11l);
var820 = var822;
varonce819 = var820;
}
((struct instance_standard__NativeArray*)var818)->values[0]=var820;
if (likely(varonce823!=NULL)) {
var824 = varonce823;
} else {
var825 = "[] = \"";
var826 = standard___standard__NativeString___to_s_with_length(var825, 6l);
var824 = var826;
varonce823 = var824;
}
((struct instance_standard__NativeArray*)var818)->values[2]=var824;
if (likely(varonce827!=NULL)) {
var828 = varonce827;
} else {
var829 = "\";";
var830 = standard___standard__NativeString___to_s_with_length(var829, 2l);
var828 = var830;
varonce827 = var828;
}
((struct instance_standard__NativeArray*)var818)->values[4]=var828;
} else {
var818 = varonce817;
varonce817 = NULL;
}
((struct instance_standard__NativeArray*)var818)->values[1]=var_f;
{
{ /* Inline mmodule#MModule#location (var_m) on <var_m:MModule> */
var833 = var_m->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <var_m:MModule> */
if (unlikely(var833 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
fatal_exit(1);
}
var831 = var833;
RET_LABEL832:(void)0;
}
}
{
{ /* Inline location#Location#file (var831) on <var831:Location> */
var836 = var831->attrs[COLOR_nit__location__Location___file].val; /* _file on <var831:Location> */
var834 = var836;
RET_LABEL835:(void)0;
}
}
if (var834 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 913);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var834) on <var834:nullable SourceFile> */
if (unlikely(var834 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var839 = var834->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var834:nullable SourceFile> */
if (unlikely(var839 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var837 = var839;
RET_LABEL838:(void)0;
}
}
{
var840 = standard___standard__Text___escape_to_c(var837);
}
((struct instance_standard__NativeArray*)var818)->values[3]=var840;
{
var841 = ((val*(*)(val* self))(var818->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var818); /* native_to_s on <var818:NativeArray[String]>*/
}
varonce817 = var818;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var841); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce842==NULL)) {
var843 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce844!=NULL)) {
var845 = varonce844;
} else {
var846 = "extern const char ";
var847 = standard___standard__NativeString___to_s_with_length(var846, 18l);
var845 = var847;
varonce844 = var845;
}
((struct instance_standard__NativeArray*)var843)->values[0]=var845;
if (likely(varonce848!=NULL)) {
var849 = varonce848;
} else {
var850 = "[];";
var851 = standard___standard__NativeString___to_s_with_length(var850, 3l);
var849 = var851;
varonce848 = var849;
}
((struct instance_standard__NativeArray*)var843)->values[2]=var849;
} else {
var843 = varonce842;
varonce842 = NULL;
}
((struct instance_standard__NativeArray*)var843)->values[1]=var_f;
{
var852 = ((val*(*)(val* self))(var843->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var843); /* native_to_s on <var843:NativeArray[String]>*/
}
varonce842 = var843;
{
nit___nit__AbstractCompiler___provide_declaration(self, var_f, var852); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:AbstractCompiler>*/
}
{
((void(*)(val* self))((((long)var_808&3)?class_info[((long)var_808&3)]:var_808->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_808); /* next on <var_808:Iterator[MModule]>*/
}
} else {
goto BREAK_label853;
}
}
BREAK_label853: (void)0;
{
((void(*)(val* self))((((long)var_808&3)?class_info[((long)var_808&3)]:var_808->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_808); /* finish on <var_808:Iterator[MModule]>*/
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
val* var3 /* : FlatString */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "struct nitni_global_ref_list_t *nitni_global_ref_list;\nvoid initialize_nitni_global_refs() {\n\tnitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));\n\tnitni_global_ref_list->head = NULL;\n\tnitni_global_ref_list->tail = NULL;\n}\n\nvoid nitni_global_ref_add( struct nitni_ref *ref ) {\n\tif ( nitni_global_ref_list->head == NULL ) {\n\t\tnitni_global_ref_list->head = ref;\n\t\tref->prev = NULL;\n\t} else {\n\t\tnitni_global_ref_list->tail->next = ref;\n\t\tref->prev = nitni_global_ref_list->tail;\n\t}\n\tnitni_global_ref_list->tail = ref;\n\n\tref->next = NULL;\n}\n\nvoid nitni_global_ref_remove( struct nitni_ref *ref ) {\n\tif ( ref->prev == NULL ) {\n\t\tnitni_global_ref_list->head = ref->next;\n\t} else {\n\t\tref->prev->next = ref->next;\n\t}\n\n\tif ( ref->next == NULL ) {\n\t\tnitni_global_ref_list->tail = ref->prev;\n\t} else {\n\t\tref->next->prev = ref->prev;\n\t}\n}\n\nextern void nitni_global_ref_incr( struct nitni_ref *ref ) {\n\tif ( ref->count == 0 ) /* not registered */\n\t{\n\t\t/* add to list */\n\t\tnitni_global_ref_add( ref );\n\t}\n\n\tref->count ++;\n}\n\nextern void nitni_global_ref_decr( struct nitni_ref *ref ) {\n\tif ( ref->count == 1 ) /* was last reference */\n\t{\n\t\t/* remove from list */\n\t\tnitni_global_ref_remove( ref );\n\t}\n\n\tref->count --;\n}\n";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1260l);
var1 = var3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 979);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 982);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 985);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 988);
fatal_exit(1);
}
var_v = p0;
var_recv = p1;
var_mtype = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
nit__separate_compiler___AAttrPropdef___init_expr(var_npropdef, var_v, var_recv); /* Direct call separate_compiler#AAttrPropdef#init_expr on <var_npropdef:AAttrPropdef>*/
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_19); /* Direct call array#ArrayIterator#finish on <var_19:ArrayIterator[AAttrPropdef]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_10); /* Direct call array#ArrayIterator#next on <var_10:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label22;
}
}
BREAK_label22: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_10); /* Direct call array#ArrayIterator#finish on <var_10:ArrayIterator[MClassDef]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1014);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1015);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1016);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1017);
fatal_exit(1);
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
val* var9 /* : nullable Object */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1014);
fatal_exit(1);
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
{
var9 = (val*)(0l<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_res, var_tag, var9); /* Direct call hash_collection#HashMap#[]= on <var_res:HashMap[String, Int]>*/
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_6); /* Direct call array#ArrayIterator#finish on <var_6:ArrayIterator[String]>*/
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
val* var13 /* : Sys */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : Sys */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : HashMap[String, Int] */;
val* var_count_type_test_total /* var count_type_test_total: HashMap[String, Int] */;
val* var23 /* : HashMap[String, Int] */;
val* var25 /* : HashMap[String, Int] */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
val* var30 /* : nullable Object */;
val* var31 /* : HashMap[String, Int] */;
val* var33 /* : HashMap[String, Int] */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : nullable Object */;
val* var39 /* : HashMap[String, Int] */;
val* var41 /* : HashMap[String, Int] */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : nullable Object */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : nullable Object */;
val* var52 /* : Array[String] */;
val* var54 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var55 /* : ArrayIterator[nullable Object] */;
val* var_56 /* var : ArrayIterator[String] */;
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
val* var93 /* : FlatString */;
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
val* var117 /* : FlatString */;
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
val* var141 /* : FlatString */;
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
val* var162 /* : FlatString */;
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
val* var179 /* : FlatString */;
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
val* var189 /* : FlatString */;
val* var_190 /* var : Array[String] */;
val* var191 /* : ArrayIterator[nullable Object] */;
val* var_192 /* var : ArrayIterator[String] */;
short int var193 /* : Bool */;
val* var194 /* : nullable Object */;
val* var_tag195 /* var tag: String */;
val* var196 /* : Sys */;
val* var197 /* : Array[Object] */;
val* var198 /* : NativeArray[Object] */;
val* var199 /* : Sys */;
val* var201 /* : NativeArray[String] */;
static val* varonce200;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
val* var205 /* : FlatString */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
val* var209 /* : FlatString */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
val* var213 /* : FlatString */;
val* var214 /* : HashMap[String, Int] */;
val* var216 /* : HashMap[String, Int] */;
val* var217 /* : nullable Object */;
val* var218 /* : String */;
long var219 /* : Int */;
val* var220 /* : Sys */;
val* var221 /* : HashMap[String, Int] */;
val* var223 /* : HashMap[String, Int] */;
val* var224 /* : nullable Object */;
val* var225 /* : String */;
long var226 /* : Int */;
val* var227 /* : String */;
val* var228 /* : Array[Object] */;
val* var229 /* : NativeArray[Object] */;
val* var230 /* : Sys */;
val* var232 /* : NativeArray[String] */;
static val* varonce231;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
val* var236 /* : FlatString */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
val* var240 /* : FlatString */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
val* var244 /* : FlatString */;
val* var245 /* : HashMap[String, Int] */;
val* var247 /* : HashMap[String, Int] */;
val* var248 /* : nullable Object */;
val* var249 /* : String */;
long var250 /* : Int */;
val* var251 /* : Sys */;
val* var252 /* : HashMap[String, Int] */;
val* var254 /* : HashMap[String, Int] */;
val* var255 /* : nullable Object */;
val* var256 /* : String */;
long var257 /* : Int */;
val* var258 /* : String */;
val* var259 /* : Array[Object] */;
val* var260 /* : NativeArray[Object] */;
val* var261 /* : Sys */;
val* var263 /* : NativeArray[String] */;
static val* varonce262;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
val* var267 /* : FlatString */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
val* var271 /* : FlatString */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
val* var275 /* : FlatString */;
val* var276 /* : HashMap[String, Int] */;
val* var278 /* : HashMap[String, Int] */;
val* var279 /* : nullable Object */;
val* var280 /* : String */;
long var281 /* : Int */;
val* var282 /* : Sys */;
val* var283 /* : HashMap[String, Int] */;
val* var285 /* : HashMap[String, Int] */;
val* var286 /* : nullable Object */;
val* var287 /* : String */;
long var288 /* : Int */;
val* var289 /* : String */;
val* var290 /* : Array[Object] */;
val* var291 /* : NativeArray[Object] */;
val* var292 /* : Sys */;
val* var294 /* : NativeArray[String] */;
static val* varonce293;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
val* var298 /* : FlatString */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
val* var302 /* : FlatString */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
val* var306 /* : FlatString */;
val* var307 /* : nullable Object */;
val* var308 /* : String */;
long var309 /* : Int */;
val* var310 /* : Sys */;
val* var311 /* : nullable Object */;
val* var312 /* : String */;
long var313 /* : Int */;
val* var314 /* : String */;
val* var315 /* : Array[Object] */;
val* var316 /* : NativeArray[Object] */;
val* var317 /* : Sys */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
val* var321 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
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
var16 = standard___standard__NativeString___to_s_with_length(var15, 24l);
var14 = var16;
varonce = var14;
}
{
standard__file___Sys___print(var13, var14); /* Direct call file#Sys#print on <var13:Sys>*/
}
var17 = glob_sys;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "\tresolved:\tunresolved\tskipped\ttotal";
var21 = standard___standard__NativeString___to_s_with_length(var20, 35l);
var19 = var21;
varonce18 = var19;
}
{
standard__file___Sys___print(var17, var19); /* Direct call file#Sys#print on <var17:Sys>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1015);
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
var29 = standard___standard__NativeString___to_s_with_length(var28, 5l);
var27 = var29;
varonce26 = var27;
}
{
var30 = (val*)(0l<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var23, var27, var30); /* Direct call hash_collection#HashMap#[]= on <var23:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var33 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1016);
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
var37 = standard___standard__NativeString___to_s_with_length(var36, 5l);
var35 = var37;
varonce34 = var35;
}
{
var38 = (val*)(0l<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var31, var35, var38); /* Direct call hash_collection#HashMap#[]= on <var31:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var41 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1017);
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
var45 = standard___standard__NativeString___to_s_with_length(var44, 5l);
var43 = var45;
varonce42 = var43;
}
{
var46 = (val*)(0l<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var39, var43, var46); /* Direct call hash_collection#HashMap#[]= on <var39:HashMap[String, Int]>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "total";
var50 = standard___standard__NativeString___to_s_with_length(var49, 5l);
var48 = var50;
varonce47 = var48;
}
{
var51 = (val*)(0l<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var48, var51); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var54 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1014);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_ = var52;
{
var55 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_56 = var55;
for(;;) {
{
var57 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_56);
}
if (var57){
{
var58 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_56);
}
var_tag = var58;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var61 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1015);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var59, var_tag);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var65 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1016);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var63, var_tag);
}
{
{ /* Inline kernel#Int#+ (var62,var66) on <var62:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var66:nullable Object(Int)> isa OTHER */
/* <var66:nullable Object(Int)> isa OTHER */
var69 = 1; /* easy <var66:nullable Object(Int)> isa OTHER*/
if (unlikely(!var69)) {
var_class_name = var66 == NULL ? "null" : (((long)var66&3)?type_info[((long)var66&3)]:var66->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
var75 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1017);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var73, var_tag);
}
{
{ /* Inline kernel#Int#+ (var67,var76) on <var67:Int> */
/* Covariant cast for argument 0 (i) <var76:nullable Object(Int)> isa OTHER */
/* <var76:nullable Object(Int)> isa OTHER */
var79 = 1; /* easy <var76:nullable Object(Int)> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = var76 == NULL ? "null" : (((long)var76&3)?type_info[((long)var76&3)]:var76->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var_tag, var85); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var88 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1015);
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
var93 = standard___standard__NativeString___to_s_with_length(var92, 5l);
var91 = var93;
varonce90 = var91;
}
var_94 = var91;
{
var95 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_89, var_94);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var98 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1015);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var96, var_tag);
}
{
{ /* Inline kernel#Int#+ (var95,var99) on <var95:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var99:nullable Object(Int)> isa OTHER */
/* <var99:nullable Object(Int)> isa OTHER */
var102 = 1; /* easy <var99:nullable Object(Int)> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = var99 == NULL ? "null" : (((long)var99&3)?type_info[((long)var99&3)]:var99->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_89, var_94, var109); /* Direct call hash_collection#HashMap#[]= on <var_89:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var112 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1016);
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
var117 = standard___standard__NativeString___to_s_with_length(var116, 5l);
var115 = var117;
varonce114 = var115;
}
var_118 = var115;
{
var119 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_113, var_118);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var122 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1016);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var120, var_tag);
}
{
{ /* Inline kernel#Int#+ (var119,var123) on <var119:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var123:nullable Object(Int)> isa OTHER */
/* <var123:nullable Object(Int)> isa OTHER */
var126 = 1; /* easy <var123:nullable Object(Int)> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = var123 == NULL ? "null" : (((long)var123&3)?type_info[((long)var123&3)]:var123->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_113, var_118, var133); /* Direct call hash_collection#HashMap#[]= on <var_113:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var136 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1017);
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
var141 = standard___standard__NativeString___to_s_with_length(var140, 5l);
var139 = var141;
varonce138 = var139;
}
var_142 = var139;
{
var143 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_137, var_142);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var146 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1017);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var144, var_tag);
}
{
{ /* Inline kernel#Int#+ (var143,var147) on <var143:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var147:nullable Object(Int)> isa OTHER */
/* <var147:nullable Object(Int)> isa OTHER */
var150 = 1; /* easy <var147:nullable Object(Int)> isa OTHER*/
if (unlikely(!var150)) {
var_class_name153 = var147 == NULL ? "null" : (((long)var147&3)?type_info[((long)var147&3)]:var147->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name153);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_137, var_142, var157); /* Direct call hash_collection#HashMap#[]= on <var_137:HashMap[String, Int]>*/
}
var_158 = var_count_type_test_total;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "total";
var162 = standard___standard__NativeString___to_s_with_length(var161, 5l);
var160 = var162;
varonce159 = var160;
}
var_163 = var160;
{
var164 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_158, var_163);
}
{
var165 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag);
}
{
{ /* Inline kernel#Int#+ (var164,var165) on <var164:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var165:nullable Object(Int)> isa OTHER */
/* <var165:nullable Object(Int)> isa OTHER */
var168 = 1; /* easy <var165:nullable Object(Int)> isa OTHER*/
if (unlikely(!var168)) {
var_class_name171 = var165 == NULL ? "null" : (((long)var165&3)?type_info[((long)var165&3)]:var165->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name171);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_158, var_163, var175); /* Direct call hash_collection#HashMap#[]= on <var_158:HashMap[String, Int]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_56); /* Direct call array#ArrayIterator#next on <var_56:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_56); /* Direct call array#ArrayIterator#finish on <var_56:ArrayIterator[String]>*/
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "total";
var179 = standard___standard__NativeString___to_s_with_length(var178, 5l);
var177 = var179;
varonce176 = var177;
}
{
var180 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var177);
}
var181 = (long)(var180)>>2;
var_count_type_test = var181;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var184 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1014);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
var185 = standard__array___Collection___to_a(var182);
}
var_tags = var185;
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "total";
var189 = standard___standard__NativeString___to_s_with_length(var188, 5l);
var187 = var189;
varonce186 = var187;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_tags, var187); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
var_190 = var_tags;
{
var191 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_190);
}
var_192 = var191;
for(;;) {
{
var193 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_192);
}
if (var193){
{
var194 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_192);
}
var_tag195 = var194;
var196 = glob_sys;
var197 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var197 = array_instance Array[Object] */
var198 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var198)->values[0] = (val*) var_tag195;
{
((void(*)(val* self, val* p0, long p1))(var197->class->vft[COLOR_standard__array__Array__with_native]))(var197, var198, 1l); /* with_native on <var197:Array[Object]>*/
}
}
{
standard__file___Sys___printn(var196, var197); /* Direct call file#Sys#printn on <var196:Sys>*/
}
var199 = glob_sys;
if (unlikely(varonce200==NULL)) {
var201 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "\t";
var205 = standard___standard__NativeString___to_s_with_length(var204, 1l);
var203 = var205;
varonce202 = var203;
}
((struct instance_standard__NativeArray*)var201)->values[0]=var203;
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = " (";
var209 = standard___standard__NativeString___to_s_with_length(var208, 2l);
var207 = var209;
varonce206 = var207;
}
((struct instance_standard__NativeArray*)var201)->values[2]=var207;
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "%)";
var213 = standard___standard__NativeString___to_s_with_length(var212, 2l);
var211 = var213;
varonce210 = var211;
}
((struct instance_standard__NativeArray*)var201)->values[4]=var211;
} else {
var201 = varonce200;
varonce200 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var216 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1015);
fatal_exit(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
var217 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var214, var_tag195);
}
var219 = (long)(var217)>>2;
var218 = standard__string___Int___Object__to_s(var219);
((struct instance_standard__NativeArray*)var201)->values[1]=var218;
var220 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var223 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1015);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
var224 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var221, var_tag195);
}
{
var226 = (long)(var224)>>2;
var225 = counter___standard__Sys___div(var220, var226, var_count_type_test);
}
((struct instance_standard__NativeArray*)var201)->values[3]=var225;
{
var227 = ((val*(*)(val* self))(var201->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var201); /* native_to_s on <var201:NativeArray[String]>*/
}
varonce200 = var201;
var228 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var228 = array_instance Array[Object] */
var229 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var229)->values[0] = (val*) var227;
{
((void(*)(val* self, val* p0, long p1))(var228->class->vft[COLOR_standard__array__Array__with_native]))(var228, var229, 1l); /* with_native on <var228:Array[Object]>*/
}
}
{
standard__file___Sys___printn(var199, var228); /* Direct call file#Sys#printn on <var199:Sys>*/
}
var230 = glob_sys;
if (unlikely(varonce231==NULL)) {
var232 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "\t";
var236 = standard___standard__NativeString___to_s_with_length(var235, 1l);
var234 = var236;
varonce233 = var234;
}
((struct instance_standard__NativeArray*)var232)->values[0]=var234;
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = " (";
var240 = standard___standard__NativeString___to_s_with_length(var239, 2l);
var238 = var240;
varonce237 = var238;
}
((struct instance_standard__NativeArray*)var232)->values[2]=var238;
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "%)";
var244 = standard___standard__NativeString___to_s_with_length(var243, 2l);
var242 = var244;
varonce241 = var242;
}
((struct instance_standard__NativeArray*)var232)->values[4]=var242;
} else {
var232 = varonce231;
varonce231 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var247 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1016);
fatal_exit(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
var248 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var245, var_tag195);
}
var250 = (long)(var248)>>2;
var249 = standard__string___Int___Object__to_s(var250);
((struct instance_standard__NativeArray*)var232)->values[1]=var249;
var251 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var254 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1016);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
var255 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var252, var_tag195);
}
{
var257 = (long)(var255)>>2;
var256 = counter___standard__Sys___div(var251, var257, var_count_type_test);
}
((struct instance_standard__NativeArray*)var232)->values[3]=var256;
{
var258 = ((val*(*)(val* self))(var232->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var232); /* native_to_s on <var232:NativeArray[String]>*/
}
varonce231 = var232;
var259 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var259 = array_instance Array[Object] */
var260 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var260)->values[0] = (val*) var258;
{
((void(*)(val* self, val* p0, long p1))(var259->class->vft[COLOR_standard__array__Array__with_native]))(var259, var260, 1l); /* with_native on <var259:Array[Object]>*/
}
}
{
standard__file___Sys___printn(var230, var259); /* Direct call file#Sys#printn on <var230:Sys>*/
}
var261 = glob_sys;
if (unlikely(varonce262==NULL)) {
var263 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce264!=NULL)) {
var265 = varonce264;
} else {
var266 = "\t";
var267 = standard___standard__NativeString___to_s_with_length(var266, 1l);
var265 = var267;
varonce264 = var265;
}
((struct instance_standard__NativeArray*)var263)->values[0]=var265;
if (likely(varonce268!=NULL)) {
var269 = varonce268;
} else {
var270 = " (";
var271 = standard___standard__NativeString___to_s_with_length(var270, 2l);
var269 = var271;
varonce268 = var269;
}
((struct instance_standard__NativeArray*)var263)->values[2]=var269;
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "%)";
var275 = standard___standard__NativeString___to_s_with_length(var274, 2l);
var273 = var275;
varonce272 = var273;
}
((struct instance_standard__NativeArray*)var263)->values[4]=var273;
} else {
var263 = varonce262;
varonce262 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var278 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var278 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1017);
fatal_exit(1);
}
var276 = var278;
RET_LABEL277:(void)0;
}
}
{
var279 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var276, var_tag195);
}
var281 = (long)(var279)>>2;
var280 = standard__string___Int___Object__to_s(var281);
((struct instance_standard__NativeArray*)var263)->values[1]=var280;
var282 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var285 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1017);
fatal_exit(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
var286 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var283, var_tag195);
}
{
var288 = (long)(var286)>>2;
var287 = counter___standard__Sys___div(var282, var288, var_count_type_test);
}
((struct instance_standard__NativeArray*)var263)->values[3]=var287;
{
var289 = ((val*(*)(val* self))(var263->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var263); /* native_to_s on <var263:NativeArray[String]>*/
}
varonce262 = var263;
var290 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var290 = array_instance Array[Object] */
var291 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var291)->values[0] = (val*) var289;
{
((void(*)(val* self, val* p0, long p1))(var290->class->vft[COLOR_standard__array__Array__with_native]))(var290, var291, 1l); /* with_native on <var290:Array[Object]>*/
}
}
{
standard__file___Sys___printn(var261, var290); /* Direct call file#Sys#printn on <var261:Sys>*/
}
var292 = glob_sys;
if (unlikely(varonce293==NULL)) {
var294 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "\t";
var298 = standard___standard__NativeString___to_s_with_length(var297, 1l);
var296 = var298;
varonce295 = var296;
}
((struct instance_standard__NativeArray*)var294)->values[0]=var296;
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = " (";
var302 = standard___standard__NativeString___to_s_with_length(var301, 2l);
var300 = var302;
varonce299 = var300;
}
((struct instance_standard__NativeArray*)var294)->values[2]=var300;
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "%)";
var306 = standard___standard__NativeString___to_s_with_length(var305, 2l);
var304 = var306;
varonce303 = var304;
}
((struct instance_standard__NativeArray*)var294)->values[4]=var304;
} else {
var294 = varonce293;
varonce293 = NULL;
}
{
var307 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag195);
}
var309 = (long)(var307)>>2;
var308 = standard__string___Int___Object__to_s(var309);
((struct instance_standard__NativeArray*)var294)->values[1]=var308;
var310 = glob_sys;
{
var311 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag195);
}
{
var313 = (long)(var311)>>2;
var312 = counter___standard__Sys___div(var310, var313, var_count_type_test);
}
((struct instance_standard__NativeArray*)var294)->values[3]=var312;
{
var314 = ((val*(*)(val* self))(var294->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var294); /* native_to_s on <var294:NativeArray[String]>*/
}
varonce293 = var294;
var315 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var315 = array_instance Array[Object] */
var316 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var316)->values[0] = (val*) var314;
{
((void(*)(val* self, val* p0, long p1))(var315->class->vft[COLOR_standard__array__Array__with_native]))(var315, var316, 1l); /* with_native on <var315:Array[Object]>*/
}
}
{
standard__file___Sys___printn(var292, var315); /* Direct call file#Sys#printn on <var292:Sys>*/
}
var317 = glob_sys;
if (likely(varonce318!=NULL)) {
var319 = varonce318;
} else {
var320 = "";
var321 = standard___standard__NativeString___to_s_with_length(var320, 0l);
var319 = var321;
varonce318 = var319;
}
{
standard__file___Sys___print(var317, var319); /* Direct call file#Sys#print on <var317:Sys>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_192); /* Direct call array#ArrayIterator#next on <var_192:ArrayIterator[String]>*/
}
} else {
goto BREAK_label322;
}
}
BREAK_label322: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_192); /* Direct call array#ArrayIterator#finish on <var_192:ArrayIterator[String]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#finalize_ffi_for_module for (self: AbstractCompiler, MModule) */
void nit___nit__AbstractCompiler___finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
var_mmodule = p0;
{
nit__light___MModule___finalize_ffi(var_mmodule, self); /* Direct call light#MModule#finalize_ffi on <var_mmodule:MModule>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#name for (self: CodeFile): String */
val* nit___nit__CodeFile___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val; /* _name on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1073);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1074);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1075);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#init for (self: CodeFile) */
void nit___nit__CodeFile___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__CodeFile___standard__kernel__Object__init]))(self); /* init on <self:CodeFile>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1080);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1081);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1082);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1082);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1080);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1074);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1117);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 562);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = standard___standard__List___standard__abstract_collection__SequenceRead__last(var4);
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__abstract_compiler__CodeWriter__file_61d]))(var, var7); /* file= on <var:CodeWriter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer= (self,var) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer].val = var; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1127);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
long var_i /* var i: Int */;
val* var_ /* var : Array[MProperty] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[MProperty] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var15 /* : Array[RuntimeVariable] */;
val* var_16 /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var17 /* : MPropDef */;
val* var19 /* : MPropDef */;
val* var20 /* : nullable MSignature */;
val* var22 /* : nullable MSignature */;
val* var23 /* : Array[MParameter] */;
val* var25 /* : Array[MParameter] */;
val* var_26 /* var : Array[MParameter] */;
val* var27 /* : ArrayIterator[nullable Object] */;
val* var_28 /* var : ArrayIterator[MParameter] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_x /* var x: MParameter */;
val* var31 /* : nullable Object */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name;
long var37 /* : Int */;
val* var38 /* : nullable RuntimeVariable */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : nullable Object */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : MMethod */;
val* var59 /* : MMethod */;
val* var60 /* : Array[RuntimeVariable] */;
val* var_61 /* var : Array[RuntimeVariable] */;
val* var62 /* : nullable RuntimeVariable */;
val* var63 /* : MMethod */;
val* var65 /* : MMethod */;
val* var66 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_arguments = p1;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
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
var_i = 1l;
var_ = var_initializers;
{
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_11);
}
if (var12){
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_11);
}
var_p = var13;
/* <var_p:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_p->type->table_size) {
var14 = 0;
} else {
var14 = var_p->type->type_table[cltype] == idtype;
}
if (var14){
var15 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var15, 1l); /* Direct call array#Array#with_capacity on <var15:Array[RuntimeVariable]>*/
}
var_16 = var15;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_16, var_recv); /* Direct call array#AbstractArray#push on <var_16:Array[RuntimeVariable]>*/
}
var_args = var_16;
{
{ /* Inline model#MProperty#intro (var_p) on <var_p:MProperty(MMethod)> */
var19 = var_p->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_p:MProperty(MMethod)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var17) on <var17:MPropDef(MMethodDef)> */
var22 = var17->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var17:MPropDef(MMethodDef)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1141);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var20) on <var20:nullable MSignature> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var25 = var20->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var20:nullable MSignature> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_26 = var23;
{
var27 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_26);
}
var_28 = var27;
for(;;) {
{
var29 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_28);
}
if (var29){
{
var30 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_28);
}
var_x = var30;
{
var31 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_args, var31); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var37 = var_i + 1l;
var32 = var37;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_i = var32;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_28); /* Direct call array#ArrayIterator#next on <var_28:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_28); /* Direct call array#ArrayIterator#finish on <var_28:ArrayIterator[MParameter]>*/
}
{
var38 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(self, var_p, var_args);
}
} else {
/* <var_p:MProperty> isa MAttribute */
cltype40 = type_nit__MAttribute.color;
idtype41 = type_nit__MAttribute.id;
if(cltype40 >= var_p->type->table_size) {
var39 = 0;
} else {
var39 = var_p->type->type_table[cltype40] == idtype41;
}
if (var39){
{
var42 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(self, var_p, var_recv, var42); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var45 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var49 = var_i + 1l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_i = var43;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1149);
fatal_exit(1);
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label50;
}
}
BREAK_label50: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_11); /* Direct call array#ArrayIterator#finish on <var_11:ArrayIterator[MProperty]>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var53 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var51) on <var_i:Int> */
var56 = var_i == var51;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (unlikely(!var54)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1151);
fatal_exit(1);
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var59 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
var60 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var60, 1l); /* Direct call array#Array#with_capacity on <var60:Array[RuntimeVariable]>*/
}
var_61 = var60;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_61, var_recv); /* Direct call array#AbstractArray#push on <var_61:Array[RuntimeVariable]>*/
}
{
var62 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(self, var57, var_61);
}
var = var62;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var65 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(self, var63, var_arguments);
}
var = var66;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#calloc_array for (self: AbstractCompilerVisitor, MType, Array[RuntimeVariable]) */
void nit___nit__AbstractCompilerVisitor___calloc_array(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "calloc_array", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1161);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#varargize for (self: AbstractCompilerVisitor, MMethodDef, nullable SignatureMap, RuntimeVariable, SequenceRead[AExpr]): Array[RuntimeVariable] */
val* nit___nit__AbstractCompilerVisitor___varargize(val* self, val* p0, val* p1, val* p2, val* p3) {
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
val* var35 /* : nullable Object */;
val* var_ne36 /* var ne: AExpr */;
val* var37 /* : RuntimeVariable */;
long var_i /* var i: Int */;
long var39 /* : Int */;
long var_40 /* var : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var44 /* : Bool */;
val* var45 /* : Array[MParameter] */;
val* var47 /* : Array[MParameter] */;
val* var48 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var49 /* : ArrayMap[Int, Int] */;
val* var51 /* : ArrayMap[Int, Int] */;
val* var52 /* : nullable Object */;
val* var53 /* : nullable Object */;
val* var_j /* var j: nullable Int */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : RuntimeVariable */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var_64 /* var : Bool */;
long var65 /* : Int */;
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
short int var74 /* : Bool */;
long var75 /* : Int */;
long var77 /* : Int */;
val* var78 /* : Array[nullable Object] */;
long var79 /* : Int */;
val* var_vararg /* var vararg: Array[RuntimeVariable] */;
val* var80 /* : MType */;
val* var82 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var83 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var84 /* : nullable Object */;
long var85 /* : Int */;
long var86 /* : Int */;
var_mpropdef = p0;
var_map = p1;
var_recv = p2;
var_args = p3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1178);
fatal_exit(1);
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
var9 = nit___nit__MSignature___arity(var_msignature);
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
var19 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
var20 = nit___nit__MSignature___arity(var_msignature);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1185);
fatal_exit(1);
}
var_ = var_args;
{
var24 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[AExpr]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:IndexedIterator[AExpr]>*/
}
if (var26){
{
var27 = ((val*(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:IndexedIterator[AExpr]>*/
}
var_ne = var27;
{
var28 = nit___nit__AbstractCompilerVisitor___expr(self, var_ne, ((val*)NULL));
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var28); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:IndexedIterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:IndexedIterator[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
var29 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
var30 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
standard___standard__Array___with_capacity(var29, var30); /* Direct call array#Array#with_capacity on <var29:Array[RuntimeVariable]>*/
}
var_exprs = var29;
var_31 = var_args;
{
var32 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_31); /* iterator on <var_31:SequenceRead[AExpr]>*/
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:IndexedIterator[AExpr]>*/
}
if (var34){
{
var35 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:IndexedIterator[AExpr]>*/
}
var_ne36 = var35;
{
var37 = nit___nit__AbstractCompilerVisitor___expr(self, var_ne36, ((val*)NULL));
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_exprs, var37); /* Direct call array#Array#add on <var_exprs:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:IndexedIterator[AExpr]>*/
}
} else {
goto BREAK_label38;
}
}
BREAK_label38: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:IndexedIterator[AExpr]>*/
}
var_i = 0l;
{
var39 = nit___nit__MSignature___arity(var_msignature);
}
var_40 = var39;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_40) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_40:Int> isa OTHER */
/* <var_40:Int> isa OTHER */
var43 = 1; /* easy <var_40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var44 = var_i < var_40;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var47 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var45, var_i);
}
var_param = var48;
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:nullable SignatureMap(SignatureMap)> */
var51 = var_map->attrs[COLOR_nit__typing__SignatureMap___map].val; /* _map on <var_map:nullable SignatureMap(SignatureMap)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 597);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var53 = (val*)(var_i<<2|1);
var52 = standard___standard__MapRead___get_or_null(var49, var53);
}
var_j = var52;
if (var_j == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_j,((val*)NULL)) on <var_j:nullable Int> */
var57 = 0; /* incompatible types Int vs. null; cannot be NULL */
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
var58 = nit___nit__AbstractCompilerVisitor___null_instance(self);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var58); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label59;
} else {
}
{
{ /* Inline model#MParameter#is_vararg (var_param) on <var_param:MParameter> */
var63 = var_param->attrs[COLOR_nit__model__MParameter___is_vararg].s; /* _is_vararg on <var_param:MParameter> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_64 = var61;
if (var61){
{
{ /* Inline typing#SignatureMap#vararg_decl (var_map) on <var_map:nullable SignatureMap(SignatureMap)> */
var67 = var_map->attrs[COLOR_nit__typing__SignatureMap___vararg_decl].l; /* _vararg_decl on <var_map:nullable SignatureMap(SignatureMap)> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var65,0l) on <var65:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var70 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var74 = var65 > 0l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var60 = var68;
} else {
var60 = var_64;
}
if (var60){
{
{ /* Inline typing#SignatureMap#vararg_decl (var_map) on <var_map:nullable SignatureMap(SignatureMap)> */
var77 = var_map->attrs[COLOR_nit__typing__SignatureMap___vararg_decl].l; /* _vararg_decl on <var_map:nullable SignatureMap(SignatureMap)> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var79 = (long)(var_j)>>2;
var78 = standard___standard__AbstractArrayRead___sub(var_exprs, var79, var75);
}
var_vararg = var78;
{
{ /* Inline model#MParameter#mtype (var_param) on <var_param:MParameter> */
var82 = var_param->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_elttype = var80;
{
var83 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__vararg_instance(self, var_mpropdef, var_recv, var_vararg, var_elttype);
}
var_arg = var83;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_arg); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label59;
} else {
}
{
var85 = (long)(var_j)>>2;
var84 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_exprs, var85);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var84); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
BREAK_label59: (void)0;
{
var86 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var86;
} else {
goto BREAK_label87;
}
}
BREAK_label87: (void)0;
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
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1225);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#receiver (var9) on <var9:nullable StaticFrame> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1832);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nit__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var9:nullable StaticFrame> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1832);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var6, var12); /* anchor_to on <var_mtype:MType>*/
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
val* var18 /* : MType */;
var_mtype = p0;
var_recv = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1231);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#receiver (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1832);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nit__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1832);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var3, var9, var15, 1); /* resolve_for on <var_mtype:MType>*/
}
var = var18;
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
var1 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var4 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__MType___is_subtype(var_valmtype, var8, ((val*)NULL), var_mtype);
}
if (var11){
var = var_value;
goto RET_LABEL;
} else {
}
/* <var_valmtype:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_valmtype->type->table_size) {
var13 = 0;
} else {
var13 = var_valmtype->type->type_table[cltype] == idtype;
}
var_ = var13;
if (var13){
{
{ /* Inline model#MProxyType#mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var16 = var_valmtype->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var19 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var17) on <var17:AbstractCompiler> */
var22 = var17->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var17:AbstractCompiler> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit___nit__MType___is_subtype(var14, var20, ((val*)NULL), var_mtype);
}
var12 = var23;
} else {
var12 = var_;
}
if (var12){
var24 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_value) on <var_value:RuntimeVariable> */
var27 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1781);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MProxyType#mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var30 = var_valmtype->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var24, var25); /* name= on <var24:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var24, var_valmtype); /* mtype= on <var24:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var24, var28); /* mcasttype= on <var24:RuntimeVariable>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_standard__kernel__Object__init]))(var24); /* init on <var24:RuntimeVariable>*/
}
var_res = var24;
var = var_res;
goto RET_LABEL;
} else {
var31 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_value) on <var_value:RuntimeVariable> */
var34 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1781);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var31, var32); /* name= on <var31:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var31, var_valmtype); /* mtype= on <var31:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var31, var_mtype); /* mcasttype= on <var31:RuntimeVariable>*/
}
{
((void(*)(val* self))(var31->class->vft[COLOR_standard__kernel__Object__init]))(var31); /* init on <var31:RuntimeVariable>*/
}
var_res35 = var31;
var = var_res35;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1294);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1302);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
val* var27 /* : NativeArray[String] */;
static val* varonce;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
var_recv = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 56);
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
var19 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
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
if (unlikely(varonce==NULL)) {
var27 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "if (unlikely(";
var31 = standard___standard__NativeString___to_s_with_length(var30, 13l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = " == NULL)) {";
var35 = standard___standard__NativeString___to_s_with_length(var34, 12l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce;
varonce = NULL;
}
{
var36 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var27)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce = var27;
{
nit___nit__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Receiver is null";
var41 = standard___standard__NativeString___to_s_with_length(var40, 16l);
var39 = var41;
varonce38 = var39;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "}";
var45 = standard___standard__NativeString___to_s_with_length(var44, 1l);
var43 = var45;
varonce42 = var43;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1335);
fatal_exit(1);
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
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1335);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1335);
fatal_exit(1);
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
{
{ /* Inline kernel#Int#+ (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
var16 = standard__string___Int___Object__to_s(var_i);
}
{
var17 = ((val*(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__String___43d]))(var_s, var16); /* + on <var_s:String>*/
}
var_s2 = var17;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var20 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1335);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var18, var_s2);
}
var22 = !var21;
if (var22){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last= (self,var_i) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___last].l = var_i; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var26 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1335);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var24, var_s2); /* Direct call hash_collection#HashSet#add on <var24:HashSet[String]>*/
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
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
val* nit___nit__AbstractCompilerVisitor___escapemark_name(val* self, val* p0) {
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
val* var27 /* : FlatString */;
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
var4 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_e, var_other); /* == on <var_e:nullable EscapeMark(EscapeMark)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1360);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1361);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1844);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nit__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1844);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var9, var_e);
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var15 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1361);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var13) on <var13:nullable StaticFrame> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1844);
fatal_exit(1);
}
var18 = var13->attrs[COLOR_nit__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var13:nullable StaticFrame> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1844);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var16, var_e);
}
var = var19;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#name (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var22 = var_e->attrs[COLOR_nit__scope__EscapeMark___name].val; /* _name on <var_e:nullable EscapeMark(EscapeMark)> */
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
var24 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, ((val*)NULL)); /* == on <var_name:nullable String>*/
var23 = var24;
}
if (var23){
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "label";
var27 = standard___standard__NativeString___to_s_with_length(var26, 5l);
var25 = var27;
varonce = var25;
}
var_name = var25;
} else {
}
{
var28 = nit___nit__AbstractCompilerVisitor___get_name(self, var_name);
}
var_name = var28;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var31 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1365);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var29) on <var29:nullable StaticFrame> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1844);
fatal_exit(1);
}
var34 = var29->attrs[COLOR_nit__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var29:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1844);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var32, var_e, var_name); /* Direct call hash_collection#HashMap#[]= on <var32:HashMap[EscapeMark, String]>*/
}
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_escape_label for (self: AbstractCompilerVisitor, nullable EscapeMark) */
void nit___nit__AbstractCompilerVisitor___add_escape_label(val* self, val* p0) {
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
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
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
var8 = var_e->attrs[COLOR_nit__scope__EscapeMark___escapes].val; /* _escapes on <var_e:nullable EscapeMark(EscapeMark)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 58);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var6);
}
if (var9){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var10 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "BREAK_";
var14 = standard___standard__NativeString___to_s_with_length(var13, 6l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ": (void)0;";
var18 = standard___standard__NativeString___to_s_with_length(var17, 10l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
{
var19 = nit___nit__AbstractCompilerVisitor___escapemark_name(self, var_e);
}
((struct instance_standard__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nit___nit__AbstractCompilerVisitor___add(self, var20); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1383);
fatal_exit(1);
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
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
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
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : HashMap[Variable, RuntimeVariable] */;
val* var48 /* : HashMap[Variable, RuntimeVariable] */;
var_variable = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1383);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var1, var_variable);
}
if (var4){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1383);
fatal_exit(1);
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
if (unlikely(varonce==NULL)) {
var9 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "var_";
var13 = standard___standard__NativeString___to_s_with_length(var12, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var11;
} else {
var9 = varonce;
varonce = NULL;
}
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:Variable> */
var16 = var_variable->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
((struct instance_standard__NativeArray*)var9)->values[1]=var14;
{
var17 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
var18 = nit___nit__AbstractCompilerVisitor___get_name(self, var17);
}
var_name = var18;
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var21 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1392);
fatal_exit(1);
}
var_mtype = var19;
{
var22 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var22;
var23 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var23, var_name); /* name= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var23, var_mtype); /* mtype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var23, var_mtype); /* mcasttype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:RuntimeVariable>*/
}
var_res = var23;
if (unlikely(varonce24==NULL)) {
var25 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = " ";
var29 = standard___standard__NativeString___to_s_with_length(var28, 1l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[1]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " /* var ";
var33 = standard___standard__NativeString___to_s_with_length(var32, 8l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[3]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ": ";
var37 = standard___standard__NativeString___to_s_with_length(var36, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var25)->values[5]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " */;";
var41 = standard___standard__NativeString___to_s_with_length(var40, 4l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var25)->values[7]=var39;
} else {
var25 = varonce24;
varonce24 = NULL;
}
{
var42 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var25)->values[0]=var42;
((struct instance_standard__NativeArray*)var25)->values[2]=var_name;
{
var43 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_standard__string__Object__to_s]))(var_variable); /* to_s on <var_variable:Variable>*/
}
((struct instance_standard__NativeArray*)var25)->values[4]=var43;
{
var44 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var25)->values[6]=var44;
{
var45 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var45); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var48 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1383);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var46, var_variable, var_res); /* Direct call hash_collection#HashMap#[]= on <var46:HashMap[Variable, RuntimeVariable]>*/
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
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var_name /* var name: String */;
val* var6 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var_mtype = p0;
{
var1 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "var";
var4 = standard___standard__NativeString___to_s_with_length(var3, 3l);
var2 = var4;
varonce = var2;
}
{
var5 = nit___nit__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var5;
var6 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var6, var_name); /* name= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var6, var_mtype); /* mtype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var6, var_mtype); /* mcasttype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:RuntimeVariable>*/
}
var_res = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " ";
var12 = standard___standard__NativeString___to_s_with_length(var11, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var8)->values[1]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " /* : ";
var16 = standard___standard__NativeString___to_s_with_length(var15, 6l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var8)->values[3]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " */;";
var20 = standard___standard__NativeString___to_s_with_length(var19, 4l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var8)->values[5]=var18;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var21 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var8)->values[0]=var21;
((struct instance_standard__NativeArray*)var8)->values[2]=var_name;
{
var22 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var8)->values[4]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
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
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var_name /* var name: String */;
val* var6 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var_mtype = p0;
{
var1 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "var";
var4 = standard___standard__NativeString___to_s_with_length(var3, 3l);
var2 = var4;
varonce = var2;
}
{
var5 = nit___nit__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var5;
var6 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var6, var_name); /* name= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var6, var_mtype); /* mtype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var6, var_mtype); /* mcasttype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:RuntimeVariable>*/
}
var_res = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " ";
var12 = standard___standard__NativeString___to_s_with_length(var11, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var8)->values[1]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " /* : ";
var16 = standard___standard__NativeString___to_s_with_length(var15, 6l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var8)->values[3]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " for extern */;";
var20 = standard___standard__NativeString___to_s_with_length(var19, 15l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var8)->values[5]=var18;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var21 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype_extern]))(var_mtype); /* ctype_extern on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var8)->values[0]=var21;
((struct instance_standard__NativeArray*)var8)->values[2]=var_name;
{
var22 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var8)->values[4]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
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
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
var_mtype = p0;
var_name = p1;
{
var1 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
var2 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var2, var_name); /* name= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var2, var_mtype); /* mtype= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var2, var_mtype); /* mcasttype= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:RuntimeVariable>*/
}
var_res = var2;
if (unlikely(varonce==NULL)) {
var3 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = " ";
var7 = standard___standard__NativeString___to_s_with_length(var6, 1l);
var5 = var7;
varonce4 = var5;
}
((struct instance_standard__NativeArray*)var3)->values[1]=var5;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = " /* : ";
var11 = standard___standard__NativeString___to_s_with_length(var10, 6l);
var9 = var11;
varonce8 = var9;
}
((struct instance_standard__NativeArray*)var3)->values[3]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = " */;";
var15 = standard___standard__NativeString___to_s_with_length(var14, 4l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var3)->values[5]=var13;
} else {
var3 = varonce;
varonce = NULL;
}
{
var16 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var3)->values[0]=var16;
((struct instance_standard__NativeArray*)var3)->values[2]=var_name;
{
var17 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var3)->values[4]=var17;
{
var18 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var18); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
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
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
var_left = p0;
var_right = p1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_left) on <var_left:RuntimeVariable> */
var2 = var_left->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_left:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_right, var);
}
var_right = var3;
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " = ";
var8 = standard___standard__NativeString___to_s_with_length(var7, 3l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[1]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ";";
var12 = standard___standard__NativeString___to_s_with_length(var11, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[3]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = ((val*(*)(val* self))(var_left->class->vft[COLOR_standard__string__Object__to_s]))(var_left); /* to_s on <var_left:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var4)->values[0]=var13;
{
var14 = ((val*(*)(val* self))(var_right->class->vft[COLOR_standard__string__Object__to_s]))(var_right); /* to_s on <var_right:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var4)->values[2]=var14;
{
var15 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
nit___nit__AbstractCompilerVisitor___add(self, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
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
val* var10 /* : FlatString */;
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
val* var21 /* : FlatString */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : RuntimeVariable */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var39 /* : RuntimeVariable */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
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
var10 = standard___standard__NativeString___to_s_with_length(var9, 11l);
var8 = var10;
varonce = var8;
}
{
{ /* Inline kernel#Object#!= (var5,var8) on <var5:String> */
var_other = var8;
{
var13 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:String>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1450);
fatal_exit(1);
}
{
var15 = nit__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var16 = !var15;
if (var16){
{
var17 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_mtype); /* init_instance on <self:AbstractCompilerVisitor>*/
}
var_recv = var17;
} else {
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "char*";
var21 = standard___standard__NativeString___to_s_with_length(var20, 5l);
var19 = var21;
varonce18 = var19;
}
{
var22 = ((short int(*)(val* self, val* p0))(var_ctype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ctype, var19); /* == on <var_ctype:String>*/
}
if (var22){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "NULL/*special!*/";
var26 = standard___standard__NativeString___to_s_with_length(var25, 16l);
var24 = var26;
varonce23 = var24;
}
{
var27 = nit___nit__AbstractCompilerVisitor___new_expr(self, var24, var_mtype);
}
var_recv = var27;
} else {
if (unlikely(varonce28==NULL)) {
var29 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "(";
var33 = standard___standard__NativeString___to_s_with_length(var32, 1l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ")0/*special!*/";
var37 = standard___standard__NativeString___to_s_with_length(var36, 14l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[2]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
((struct instance_standard__NativeArray*)var29)->values[1]=var_ctype;
{
var38 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
var39 = nit___nit__AbstractCompilerVisitor___new_expr(self, var38, var_mtype);
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
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var37 /* : String */;
var_recv = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var2 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit__model___MModule___finalizable_type(var6);
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
var15 = ((short int(*)(val* self, val* p0))(var_finalizable_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_finalizable_type, var_other); /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/
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
var17 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
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
var22 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var20) on <var20:AbstractCompiler> */
var25 = var20->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var20:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit___nit__MType___is_subtype(var_mtype, var23, ((val*)NULL), var_finalizable_type);
}
var10 = var26;
} else {
var10 = var_19;
}
if (var10){
if (unlikely(varonce==NULL)) {
var27 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "gc_register_finalizer(";
var31 = standard___standard__NativeString___to_s_with_length(var30, 22l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ");";
var35 = standard___standard__NativeString___to_s_with_length(var34, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce;
varonce = NULL;
}
{
var36 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var27)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce = var27;
{
nit___nit__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#mmodule for (self: AbstractCompilerVisitor): MModule */
val* nit___nit__AbstractCompilerVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
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
val* nit___nit__AbstractCompilerVisitor___int_instance(val* self, long p0) {
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
val* var8 /* : FlatString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nit__model___MModule___int_type(var1);
}
var_t = var2;
var3 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "l";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
{
var9 = standard__string___Int___Object__to_s(var_value);
}
((struct instance_standard__NativeArray*)var4)->values[0]=var9;
{
var10 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var3, var10); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#byte_instance for (self: AbstractCompilerVisitor, Byte): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___byte_instance(val* self, unsigned char p0) {
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
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nit__model___MModule___byte_type(var1);
}
var_t = var2;
var3 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((unsigned char)";
var8 = standard___standard__NativeString___to_s_with_length(var7, 16l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = standard___standard__NativeString___to_s_with_length(var11, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = standard__string___Byte___Object__to_s(var_value);
}
((struct instance_standard__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#char_instance for (self: AbstractCompilerVisitor, Char): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___char_instance(val* self, uint32_t p0) {
val* var /* : RuntimeVariable */;
uint32_t var_value /* var value: Char */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nit__model___MModule___char_type(var1);
}
var_t = var2;
var3 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "\'";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "\'";
var12 = standard___standard__NativeString___to_s_with_length(var11, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = standard__string___Char___Object__to_s(var_value);
}
{
var14 = standard___standard__Text___escape_to_c(var13);
}
((struct instance_standard__NativeArray*)var4)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var3, var15); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#float_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___float_instance(val* self, val* p0) {
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
var1 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nit__model___MModule___float_type(var1);
}
var_t = var2;
var3 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var4)->values[0]=var_value;
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var3, var5); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_instance for (self: AbstractCompilerVisitor, Bool): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___bool_instance(val* self, short int p0) {
val* var /* : RuntimeVariable */;
short int var_value /* var value: Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
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
var4 = standard___standard__NativeString___to_s_with_length(var3, 1l);
var2 = var4;
varonce = var2;
}
var1 = var2;
} else {
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "0";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce5 = var6;
}
var1 = var6;
}
var_s = var1;
var9 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
{
var10 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var11 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var9, var_s); /* name= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var9, var10); /* mtype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var9, var11); /* mcasttype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:RuntimeVariable>*/
}
var_res = var9;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#null_instance for (self: AbstractCompilerVisitor): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___null_instance(val* self) {
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
val* var16 /* : FlatString */;
val* var_res /* var res: RuntimeVariable */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var4:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#Model#null_type (var7) on <var7:Model> */
var12 = var7->attrs[COLOR_nit__model__Model___null_type].val; /* _null_type on <var7:Model> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 94);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_t = var10;
var13 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "((val*)NULL)";
var16 = standard___standard__NativeString___to_s_with_length(var15, 12l);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var13, var14); /* name= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var13, var_t); /* mtype= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var13, var_t); /* mcasttype= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_standard__kernel__Object__init]))(var13); /* init on <var13:RuntimeVariable>*/
}
var_res = var13;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_string /* var string: String */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var_name /* var name: String */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : String */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : MModule */;
val* var52 /* : MClassType */;
val* var_native_mtype /* var native_mtype: MClassType */;
val* var53 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
val* var55 /* : NativeArray[String] */;
static val* varonce54;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : String */;
long var67 /* : Int */;
val* var68 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
val* var70 /* : NativeArray[String] */;
static val* varonce69;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var84 /* : MMethod */;
val* var85 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var86 /* : nullable RuntimeVariable */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var90 /* : NativeArray[String] */;
static val* varonce89;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
val* var99 /* : String */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : FlatString */;
var_string = p0;
{
var1 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nit__model___MModule___string_type(var1);
}
var_mtype = var2;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "varonce";
var5 = standard___standard__NativeString___to_s_with_length(var4, 7l);
var3 = var5;
varonce = var3;
}
{
var6 = nit___nit__AbstractCompilerVisitor___get_name(self, var3);
}
var_name = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "static ";
var12 = standard___standard__NativeString___to_s_with_length(var11, 7l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " ";
var16 = standard___standard__NativeString___to_s_with_length(var15, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var8)->values[2]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = ";";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var8)->values[4]=var18;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var21 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_standard__NativeArray*)var8)->values[1]=var21;
((struct instance_standard__NativeArray*)var8)->values[3]=var_name;
{
var22 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
{
var23 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var23;
if (unlikely(varonce24==NULL)) {
var25 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "if (likely(";
var29 = standard___standard__NativeString___to_s_with_length(var28, 11l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "!=NULL)) {";
var33 = standard___standard__NativeString___to_s_with_length(var32, 10l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_standard__NativeArray*)var25)->values[1]=var_name;
{
var34 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nit___nit__AbstractCompilerVisitor___add(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce35==NULL)) {
var36 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " = ";
var40 = standard___standard__NativeString___to_s_with_length(var39, 3l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var36)->values[1]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = ";";
var44 = standard___standard__NativeString___to_s_with_length(var43, 1l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var36)->values[3]=var42;
} else {
var36 = varonce35;
varonce35 = NULL;
}
{
var45 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var36)->values[0]=var45;
((struct instance_standard__NativeArray*)var36)->values[2]=var_name;
{
var46 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
nit___nit__AbstractCompilerVisitor___add(self, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "} else {";
var50 = standard___standard__NativeString___to_s_with_length(var49, 8l);
var48 = var50;
varonce47 = var48;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
var51 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var52 = nit__model___MModule___native_string_type(var51);
}
var_native_mtype = var52;
{
var53 = nit___nit__AbstractCompilerVisitor___new_var(self, var_native_mtype);
}
var_nat = var53;
if (unlikely(varonce54==NULL)) {
var55 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = " = \"";
var59 = standard___standard__NativeString___to_s_with_length(var58, 4l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var55)->values[1]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "\";";
var63 = standard___standard__NativeString___to_s_with_length(var62, 2l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var55)->values[3]=var61;
} else {
var55 = varonce54;
varonce54 = NULL;
}
{
var64 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_standard__string__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var55)->values[0]=var64;
{
var65 = standard___standard__Text___escape_to_c(var_string);
}
((struct instance_standard__NativeArray*)var55)->values[2]=var65;
{
var66 = ((val*(*)(val* self))(var55->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
nit___nit__AbstractCompilerVisitor___add(self, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
var67 = ((long(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string); /* length on <var_string:String>*/
}
{
var68 = nit___nit__AbstractCompilerVisitor___int_instance(self, var67);
}
var_length = var68;
if (unlikely(varonce69==NULL)) {
var70 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = " = ";
var74 = standard___standard__NativeString___to_s_with_length(var73, 3l);
var72 = var74;
varonce71 = var72;
}
((struct instance_standard__NativeArray*)var70)->values[1]=var72;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = ";";
var78 = standard___standard__NativeString___to_s_with_length(var77, 1l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var70)->values[3]=var76;
} else {
var70 = varonce69;
varonce69 = NULL;
}
{
var79 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var70)->values[0]=var79;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "to_s_with_length";
var83 = standard___standard__NativeString___to_s_with_length(var82, 16l);
var81 = var83;
varonce80 = var81;
}
{
var84 = nit___nit__AbstractCompilerVisitor___get_property(self, var81, var_native_mtype);
}
var85 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var85, 2l); /* Direct call array#Array#with_capacity on <var85:Array[RuntimeVariable]>*/
}
var_ = var85;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_nat); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_length); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var86 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(self, var84, var_);
}
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1541);
fatal_exit(1);
}
{
var87 = ((val*(*)(val* self))(var86->class->vft[COLOR_standard__string__Object__to_s]))(var86); /* to_s on <var86:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var70)->values[2]=var87;
{
var88 = ((val*(*)(val* self))(var70->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var70); /* native_to_s on <var70:NativeArray[String]>*/
}
varonce69 = var70;
{
nit___nit__AbstractCompilerVisitor___add(self, var88); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce89==NULL)) {
var90 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = " = ";
var94 = standard___standard__NativeString___to_s_with_length(var93, 3l);
var92 = var94;
varonce91 = var92;
}
((struct instance_standard__NativeArray*)var90)->values[1]=var92;
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = ";";
var98 = standard___standard__NativeString___to_s_with_length(var97, 1l);
var96 = var98;
varonce95 = var96;
}
((struct instance_standard__NativeArray*)var90)->values[3]=var96;
} else {
var90 = varonce89;
varonce89 = NULL;
}
((struct instance_standard__NativeArray*)var90)->values[0]=var_name;
{
var99 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var90)->values[2]=var99;
{
var100 = ((val*(*)(val* self))(var90->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var90); /* native_to_s on <var90:NativeArray[String]>*/
}
varonce89 = var90;
{
nit___nit__AbstractCompilerVisitor___add(self, var100); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "}";
var104 = standard___standard__NativeString___to_s_with_length(var103, 1l);
var102 = var104;
varonce101 = var102;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#value_instance for (self: AbstractCompilerVisitor, Object): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___value_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_object /* var object: Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : RuntimeVariable */;
long var3 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : RuntimeVariable */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : RuntimeVariable */;
var_object = p0;
/* <var_object:Object> isa Int */
cltype = type_standard__Int.color;
idtype = type_standard__Int.id;
if(cltype >= (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->type_table[cltype] == idtype;
}
if (var1){
{
var3 = (long)(var_object)>>2;
var2 = nit___nit__AbstractCompilerVisitor___int_instance(self, var3);
}
var = var2;
goto RET_LABEL;
} else {
/* <var_object:Object> isa Bool */
cltype5 = type_standard__Bool.color;
idtype6 = type_standard__Bool.id;
if(cltype5 >= (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->type_table[cltype5] == idtype6;
}
if (var4){
{
var8 = (short int)((long)(var_object)>>2);
var7 = nit___nit__AbstractCompilerVisitor___bool_instance(self, var8);
}
var = var7;
goto RET_LABEL;
} else {
/* <var_object:Object> isa String */
cltype10 = type_standard__String.color;
idtype11 = type_standard__String.id;
if(cltype10 >= (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->type_table[cltype10] == idtype11;
}
if (var9){
{
var12 = nit___nit__AbstractCompilerVisitor___string_instance(self, var_object);
}
var = var12;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1556);
fatal_exit(1);
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : List[String] */;
val* var5 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1117);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nit__abstract_compiler__CodeWriter___lines].val; /* _lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1081);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Sequence___SimpleCollection__add(var3, var_s); /* Direct call abstract_collection#Sequence#add on <var3:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : List[String] */;
val* var5 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1117);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1082);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Sequence___SimpleCollection__add(var3, var_s); /* Direct call abstract_collection#Sequence#add on <var3:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___require_declaration(val* self, val* p0) {
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
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AbstractCompiler */;
val* var20 /* : AbstractCompiler */;
val* var21 /* : HashMap[String, ANode] */;
val* var23 /* : HashMap[String, ANode] */;
var_key = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1117);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#file (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nit__abstract_compiler__CodeWriter___file].val; /* _file on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1080);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#required_declarations (var3) on <var3:CodeFile> */
var8 = var3->attrs[COLOR_nit__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var3:CodeFile> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1075);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_reqs = var6;
{
var9 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var_reqs, var_key);
}
if (var9){
goto RET_LABEL;
} else {
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_reqs, var_key); /* Direct call hash_collection#HashSet#add on <var_reqs:HashSet[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_node = var10;
if (var_node == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ANode(ANode)>*/
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var20 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#requirers_of_declarations (var18) on <var18:AbstractCompiler> */
var23 = var18->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var18:AbstractCompiler> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 587);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var21, var_key, var_node); /* Direct call hash_collection#HashMap#[]= on <var21:HashMap[String, ANode]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___declare_once(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__AbstractCompiler___provide_declaration(var, var_s, var_s); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var:AbstractCompiler>*/
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
