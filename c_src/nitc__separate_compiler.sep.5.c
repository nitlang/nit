#include "nitc__separate_compiler.sep.0.h"
/* method separate_compiler$SeparateCompilerVisitor$type_test for (self: SeparateCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : AbstractCompiler */;
val* var31 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var32 /* : nullable StaticFrame */;
val* var34 /* : nullable StaticFrame */;
val* var35 /* : Array[RuntimeVariable] */;
val* var37 /* : Array[RuntimeVariable] */;
val* var38 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var39 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var40 /* : MClassType */;
val* var41 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : String */;
val* var_cltype /* var cltype: String */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Bool */;
val* var60 /* : nullable Bool */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Bool */;
val* var68 /* : nullable Bool */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
val* var78 /* : String */;
val* var_idtype /* var idtype: String */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Bool */;
val* var88 /* : nullable Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Bool */;
val* var96 /* : nullable Bool */;
val* var97 /* : String */;
short int var98 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Bool */;
val* var_accept_null /* var accept_null: String */;
val* var_ntype /* var ntype: MType */;
short int var107 /* : Bool */;
int cltype;
int idtype;
val* var108 /* : MType */;
val* var110 /* : MType */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
val* var119 /* : MType */;
val* var121 /* : MType */;
val* var122 /* : nullable StaticFrame */;
val* var124 /* : nullable StaticFrame */;
val* var125 /* : MPropDef */;
val* var127 /* : MPropDef */;
val* var128 /* : MClassDef */;
val* var130 /* : MClassDef */;
val* var131 /* : MModule */;
val* var133 /* : MModule */;
val* var134 /* : nullable StaticFrame */;
val* var136 /* : nullable StaticFrame */;
val* var137 /* : MPropDef */;
val* var139 /* : MPropDef */;
val* var140 /* : MClassDef */;
val* var142 /* : MClassDef */;
val* var143 /* : MClassType */;
val* var145 /* : MClassType */;
short int var146 /* : Bool */;
val* var148 /* : NativeArray[String] */;
static val* varonce147;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : CString */;
val* var152 /* : String */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Bool */;
val* var156 /* : nullable Bool */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : CString */;
val* var160 /* : String */;
val* var161 /* : nullable Int */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Bool */;
val* var164 /* : nullable Bool */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : CString */;
val* var168 /* : String */;
val* var169 /* : nullable Int */;
val* var170 /* : nullable Int */;
val* var171 /* : nullable Bool */;
val* var172 /* : nullable Bool */;
val* var173 /* : String */;
val* var174 /* : String */;
val* var175 /* : String */;
val* var176 /* : String */;
val* var177 /* : ModelBuilder */;
val* var179 /* : ModelBuilder */;
val* var180 /* : ToolContext */;
val* var182 /* : ToolContext */;
val* var183 /* : OptionBool */;
val* var185 /* : OptionBool */;
val* var186 /* : nullable Object */;
val* var188 /* : nullable Object */;
short int var189 /* : Bool */;
val* var190 /* : AbstractCompiler */;
val* var192 /* : AbstractCompiler */;
val* var193 /* : HashMap[String, Int] */;
val* var195 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
val* var_196 /* var : String */;
val* var197 /* : nullable Object */;
long var198 /* : Int */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name;
long var203 /* : Int */;
long var204 /* : Int */;
val* var205 /* : nullable Object */;
val* var207 /* : NativeArray[String] */;
static val* varonce206;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : CString */;
val* var211 /* : String */;
val* var212 /* : nullable Int */;
val* var213 /* : nullable Int */;
val* var214 /* : nullable Bool */;
val* var215 /* : nullable Bool */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : nullable Int */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Bool */;
val* var223 /* : nullable Bool */;
val* var224 /* : String */;
short int var225 /* : Bool */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : CString */;
val* var229 /* : String */;
val* var230 /* : nullable Int */;
val* var231 /* : nullable Int */;
val* var232 /* : nullable Bool */;
val* var233 /* : nullable Bool */;
val* var234 /* : String */;
val* var_type_struct /* var type_struct: String */;
val* var236 /* : NativeArray[String] */;
static val* varonce235;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : CString */;
val* var240 /* : String */;
val* var241 /* : nullable Int */;
val* var242 /* : nullable Int */;
val* var243 /* : nullable Bool */;
val* var244 /* : nullable Bool */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : CString */;
val* var248 /* : String */;
val* var249 /* : nullable Int */;
val* var250 /* : nullable Int */;
val* var251 /* : nullable Bool */;
val* var252 /* : nullable Bool */;
val* var253 /* : String */;
val* var254 /* : nullable StaticFrame */;
val* var256 /* : nullable StaticFrame */;
val* var257 /* : MPropDef */;
val* var259 /* : MPropDef */;
val* var260 /* : MClassDef */;
val* var262 /* : MClassDef */;
val* var263 /* : String */;
val* var265 /* : NativeArray[String] */;
static val* varonce264;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : CString */;
val* var269 /* : String */;
val* var270 /* : nullable Int */;
val* var271 /* : nullable Int */;
val* var272 /* : nullable Bool */;
val* var273 /* : nullable Bool */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : CString */;
val* var277 /* : String */;
val* var278 /* : nullable Int */;
val* var279 /* : nullable Int */;
val* var280 /* : nullable Bool */;
val* var281 /* : nullable Bool */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : CString */;
val* var285 /* : String */;
val* var286 /* : nullable Int */;
val* var287 /* : nullable Int */;
val* var288 /* : nullable Bool */;
val* var289 /* : nullable Bool */;
val* var290 /* : String */;
val* var291 /* : String */;
val* var292 /* : ModelBuilder */;
val* var294 /* : ModelBuilder */;
val* var295 /* : ToolContext */;
val* var297 /* : ToolContext */;
val* var298 /* : OptionBool */;
val* var300 /* : OptionBool */;
val* var301 /* : nullable Object */;
val* var303 /* : nullable Object */;
short int var304 /* : Bool */;
val* var305 /* : AbstractCompiler */;
val* var307 /* : AbstractCompiler */;
val* var308 /* : HashMap[String, Int] */;
val* var310 /* : HashMap[String, Int] */;
val* var_311 /* var : HashMap[String, Int] */;
val* var_312 /* var : String */;
val* var313 /* : nullable Object */;
long var314 /* : Int */;
short int var316 /* : Bool */;
int cltype317;
int idtype318;
const char* var_class_name319;
long var320 /* : Int */;
long var321 /* : Int */;
val* var322 /* : nullable Object */;
val* var324 /* : NativeArray[String] */;
static val* varonce323;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : CString */;
val* var328 /* : String */;
val* var329 /* : nullable Int */;
val* var330 /* : nullable Int */;
val* var331 /* : nullable Bool */;
val* var332 /* : nullable Bool */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : CString */;
val* var336 /* : String */;
val* var337 /* : nullable Int */;
val* var338 /* : nullable Int */;
val* var339 /* : nullable Bool */;
val* var340 /* : nullable Bool */;
val* var341 /* : String */;
val* var343 /* : NativeArray[String] */;
static val* varonce342;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : CString */;
val* var347 /* : String */;
val* var348 /* : nullable Int */;
val* var349 /* : nullable Int */;
val* var350 /* : nullable Bool */;
val* var351 /* : nullable Bool */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : CString */;
val* var355 /* : String */;
val* var356 /* : nullable Int */;
val* var357 /* : nullable Int */;
val* var358 /* : nullable Bool */;
val* var359 /* : nullable Bool */;
val* var360 /* : String */;
val* var362 /* : NativeArray[String] */;
static val* varonce361;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : CString */;
val* var366 /* : String */;
val* var367 /* : nullable Int */;
val* var368 /* : nullable Int */;
val* var369 /* : nullable Bool */;
val* var370 /* : nullable Bool */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : CString */;
val* var374 /* : String */;
val* var375 /* : nullable Int */;
val* var376 /* : nullable Int */;
val* var377 /* : nullable Bool */;
val* var378 /* : nullable Bool */;
val* var379 /* : String */;
short int var380 /* : Bool */;
short int var_381 /* var : Bool */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : CString */;
val* var385 /* : String */;
val* var386 /* : nullable Int */;
val* var387 /* : nullable Int */;
val* var388 /* : nullable Bool */;
val* var389 /* : nullable Bool */;
short int var390 /* : Bool */;
static val* varonce391;
val* var392 /* : String */;
char* var393 /* : CString */;
val* var394 /* : String */;
val* var395 /* : nullable Int */;
val* var396 /* : nullable Int */;
val* var397 /* : nullable Bool */;
val* var398 /* : nullable Bool */;
val* var399 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
val* var401 /* : NativeArray[String] */;
static val* varonce400;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : CString */;
val* var405 /* : String */;
val* var406 /* : nullable Int */;
val* var407 /* : nullable Int */;
val* var408 /* : nullable Bool */;
val* var409 /* : nullable Bool */;
static val* varonce410;
val* var411 /* : String */;
char* var412 /* : CString */;
val* var413 /* : String */;
val* var414 /* : nullable Int */;
val* var415 /* : nullable Int */;
val* var416 /* : nullable Bool */;
val* var417 /* : nullable Bool */;
val* var418 /* : String */;
val* var420 /* : NativeArray[String] */;
static val* varonce419;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : CString */;
val* var424 /* : String */;
val* var425 /* : nullable Int */;
val* var426 /* : nullable Int */;
val* var427 /* : nullable Bool */;
val* var428 /* : nullable Bool */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : CString */;
val* var432 /* : String */;
val* var433 /* : nullable Int */;
val* var434 /* : nullable Int */;
val* var435 /* : nullable Bool */;
val* var436 /* : nullable Bool */;
val* var437 /* : String */;
val* var438 /* : String */;
short int var439 /* : Bool */;
int cltype440;
int idtype441;
val* var442 /* : Set[MType] */;
val* var444 /* : Set[MType] */;
val* var446 /* : NativeArray[String] */;
static val* varonce445;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : CString */;
val* var450 /* : String */;
val* var451 /* : nullable Int */;
val* var452 /* : nullable Int */;
val* var453 /* : nullable Bool */;
val* var454 /* : nullable Bool */;
val* var455 /* : String */;
val* var456 /* : String */;
val* var458 /* : NativeArray[String] */;
static val* varonce457;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : CString */;
val* var462 /* : String */;
val* var463 /* : nullable Int */;
val* var464 /* : nullable Int */;
val* var465 /* : nullable Bool */;
val* var466 /* : nullable Bool */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : CString */;
val* var470 /* : String */;
val* var471 /* : nullable Int */;
val* var472 /* : nullable Int */;
val* var473 /* : nullable Bool */;
val* var474 /* : nullable Bool */;
val* var475 /* : String */;
val* var476 /* : String */;
val* var478 /* : NativeArray[String] */;
static val* varonce477;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : CString */;
val* var482 /* : String */;
val* var483 /* : nullable Int */;
val* var484 /* : nullable Int */;
val* var485 /* : nullable Bool */;
val* var486 /* : nullable Bool */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : CString */;
val* var490 /* : String */;
val* var491 /* : nullable Int */;
val* var492 /* : nullable Int */;
val* var493 /* : nullable Bool */;
val* var494 /* : nullable Bool */;
val* var495 /* : String */;
val* var496 /* : String */;
val* var498 /* : NativeArray[String] */;
static val* varonce497;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : CString */;
val* var502 /* : String */;
val* var503 /* : nullable Int */;
val* var504 /* : nullable Int */;
val* var505 /* : nullable Bool */;
val* var506 /* : nullable Bool */;
static val* varonce507;
val* var508 /* : String */;
char* var509 /* : CString */;
val* var510 /* : String */;
val* var511 /* : nullable Int */;
val* var512 /* : nullable Int */;
val* var513 /* : nullable Bool */;
val* var514 /* : nullable Bool */;
val* var515 /* : String */;
val* var516 /* : String */;
val* var517 /* : ModelBuilder */;
val* var519 /* : ModelBuilder */;
val* var520 /* : ToolContext */;
val* var522 /* : ToolContext */;
val* var523 /* : OptionBool */;
val* var525 /* : OptionBool */;
val* var526 /* : nullable Object */;
val* var528 /* : nullable Object */;
short int var529 /* : Bool */;
val* var530 /* : AbstractCompiler */;
val* var532 /* : AbstractCompiler */;
val* var533 /* : HashMap[String, Int] */;
val* var535 /* : HashMap[String, Int] */;
val* var_536 /* var : HashMap[String, Int] */;
val* var_537 /* var : String */;
val* var538 /* : nullable Object */;
long var539 /* : Int */;
short int var541 /* : Bool */;
int cltype542;
int idtype543;
const char* var_class_name544;
long var545 /* : Int */;
long var546 /* : Int */;
val* var547 /* : nullable Object */;
val* var549 /* : NativeArray[String] */;
static val* varonce548;
static val* varonce550;
val* var551 /* : String */;
char* var552 /* : CString */;
val* var553 /* : String */;
val* var554 /* : nullable Int */;
val* var555 /* : nullable Int */;
val* var556 /* : nullable Bool */;
val* var557 /* : nullable Bool */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : CString */;
val* var561 /* : String */;
val* var562 /* : nullable Int */;
val* var563 /* : nullable Int */;
val* var564 /* : nullable Bool */;
val* var565 /* : nullable Bool */;
val* var566 /* : String */;
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
static val* varonce577;
val* var578 /* : String */;
char* var579 /* : CString */;
val* var580 /* : String */;
val* var581 /* : nullable Int */;
val* var582 /* : nullable Int */;
val* var583 /* : nullable Bool */;
val* var584 /* : nullable Bool */;
static val* varonce585;
val* var586 /* : String */;
char* var587 /* : CString */;
val* var588 /* : String */;
val* var589 /* : nullable Int */;
val* var590 /* : nullable Int */;
val* var591 /* : nullable Bool */;
val* var592 /* : nullable Bool */;
val* var593 /* : String */;
val* var594 /* : String */;
val* var595 /* : String */;
val* var597 /* : NativeArray[String] */;
static val* varonce596;
static val* varonce598;
val* var599 /* : String */;
char* var600 /* : CString */;
val* var601 /* : String */;
val* var602 /* : nullable Int */;
val* var603 /* : nullable Int */;
val* var604 /* : nullable Bool */;
val* var605 /* : nullable Bool */;
static val* varonce606;
val* var607 /* : String */;
char* var608 /* : CString */;
val* var609 /* : String */;
val* var610 /* : nullable Int */;
val* var611 /* : nullable Int */;
val* var612 /* : nullable Bool */;
val* var613 /* : nullable Bool */;
val* var614 /* : String */;
val* var615 /* : String */;
val* var617 /* : NativeArray[String] */;
static val* varonce616;
static val* varonce618;
val* var619 /* : String */;
char* var620 /* : CString */;
val* var621 /* : String */;
val* var622 /* : nullable Int */;
val* var623 /* : nullable Int */;
val* var624 /* : nullable Bool */;
val* var625 /* : nullable Bool */;
static val* varonce626;
val* var627 /* : String */;
char* var628 /* : CString */;
val* var629 /* : String */;
val* var630 /* : nullable Int */;
val* var631 /* : nullable Int */;
val* var632 /* : nullable Bool */;
val* var633 /* : nullable Bool */;
val* var634 /* : String */;
val* var635 /* : String */;
static val* varonce636;
val* var637 /* : String */;
char* var638 /* : CString */;
val* var639 /* : String */;
val* var640 /* : nullable Int */;
val* var641 /* : nullable Int */;
val* var642 /* : nullable Bool */;
val* var643 /* : nullable Bool */;
val* var644 /* : String */;
val* var_value_type_info /* var value_type_info: String */;
val* var646 /* : NativeArray[String] */;
static val* varonce645;
static val* varonce647;
val* var648 /* : String */;
char* var649 /* : CString */;
val* var650 /* : String */;
val* var651 /* : nullable Int */;
val* var652 /* : nullable Int */;
val* var653 /* : nullable Bool */;
val* var654 /* : nullable Bool */;
static val* varonce655;
val* var656 /* : String */;
char* var657 /* : CString */;
val* var658 /* : String */;
val* var659 /* : nullable Int */;
val* var660 /* : nullable Int */;
val* var661 /* : nullable Bool */;
val* var662 /* : nullable Bool */;
static val* varonce663;
val* var664 /* : String */;
char* var665 /* : CString */;
val* var666 /* : String */;
val* var667 /* : nullable Int */;
val* var668 /* : nullable Int */;
val* var669 /* : nullable Bool */;
val* var670 /* : nullable Bool */;
val* var671 /* : String */;
val* var673 /* : NativeArray[String] */;
static val* varonce672;
static val* varonce674;
val* var675 /* : String */;
char* var676 /* : CString */;
val* var677 /* : String */;
val* var678 /* : nullable Int */;
val* var679 /* : nullable Int */;
val* var680 /* : nullable Bool */;
val* var681 /* : nullable Bool */;
val* var682 /* : String */;
val* var683 /* : String */;
static val* varonce684;
val* var685 /* : String */;
char* var686 /* : CString */;
val* var687 /* : String */;
val* var688 /* : nullable Int */;
val* var689 /* : nullable Int */;
val* var690 /* : nullable Bool */;
val* var691 /* : nullable Bool */;
val* var693 /* : NativeArray[String] */;
static val* varonce692;
static val* varonce694;
val* var695 /* : String */;
char* var696 /* : CString */;
val* var697 /* : String */;
val* var698 /* : nullable Int */;
val* var699 /* : nullable Int */;
val* var700 /* : nullable Bool */;
val* var701 /* : nullable Bool */;
static val* varonce702;
val* var703 /* : String */;
char* var704 /* : CString */;
val* var705 /* : String */;
val* var706 /* : nullable Int */;
val* var707 /* : nullable Int */;
val* var708 /* : nullable Bool */;
val* var709 /* : nullable Bool */;
static val* varonce710;
val* var711 /* : String */;
char* var712 /* : CString */;
val* var713 /* : String */;
val* var714 /* : nullable Int */;
val* var715 /* : nullable Int */;
val* var716 /* : nullable Bool */;
val* var717 /* : nullable Bool */;
static val* varonce718;
val* var719 /* : String */;
char* var720 /* : CString */;
val* var721 /* : String */;
val* var722 /* : nullable Int */;
val* var723 /* : nullable Int */;
val* var724 /* : nullable Bool */;
val* var725 /* : nullable Bool */;
val* var726 /* : String */;
val* var727 /* : String */;
static val* varonce728;
val* var729 /* : String */;
char* var730 /* : CString */;
val* var731 /* : String */;
val* var732 /* : nullable Int */;
val* var733 /* : nullable Int */;
val* var734 /* : nullable Bool */;
val* var735 /* : nullable Bool */;
static val* varonce736;
val* var737 /* : String */;
char* var738 /* : CString */;
val* var739 /* : String */;
val* var740 /* : nullable Int */;
val* var741 /* : nullable Int */;
val* var742 /* : nullable Bool */;
val* var743 /* : nullable Bool */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "/* ";
var6 = (val*)(3l<<2|1);
var7 = (val*)(3l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = " isa ";
var14 = (val*)(5l<<2|1);
var15 = (val*)(5l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[2]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = " */";
var22 = (val*)(3l<<2|1);
var23 = (val*)(3l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var1)->values[4]=var19;
} else {
var1 = varonce;
varonce = NULL;
}
{
var26 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_value);
}
((struct instance_core__NativeArray*)var1)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[3]=var27;
{
var28 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var28); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var31 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_compiler = var29;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1777);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$arguments (var32) on <var32:nullable StaticFrame> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var37 = var32->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var32:nullable StaticFrame> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = core___core__SequenceRead___Collection__first(var35);
}
var_recv = var38;
{
var39 = nitc___nitc__SeparateCompilerVisitor___type_info(self, var_recv);
}
var_recv_type_info = var39;
{
var40 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var41 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var40);
}
var_res = var41;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "cltype";
var46 = (val*)(6l<<2|1);
var47 = (val*)(6l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
{
var50 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var43);
}
var_cltype = var50;
if (unlikely(varonce51==NULL)) {
var52 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "int ";
var57 = (val*)(4l<<2|1);
var58 = (val*)(4l<<2|1);
var59 = (val*)((long)(0)<<2|3);
var60 = (val*)((long)(0)<<2|3);
var56 = core__flat___CString___to_s_unsafe(var55, var57, var58, var59, var60);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var52)->values[0]=var54;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = ";";
var65 = (val*)(1l<<2|1);
var66 = (val*)(1l<<2|1);
var67 = (val*)((long)(0)<<2|3);
var68 = (val*)((long)(0)<<2|3);
var64 = core__flat___CString___to_s_unsafe(var63, var65, var66, var67, var68);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var52)->values[2]=var62;
} else {
var52 = varonce51;
varonce51 = NULL;
}
((struct instance_core__NativeArray*)var52)->values[1]=var_cltype;
{
var69 = ((val*(*)(val* self))(var52->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var69); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "idtype";
var74 = (val*)(6l<<2|1);
var75 = (val*)(6l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
{
var78 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var71);
}
var_idtype = var78;
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "int ";
var85 = (val*)(4l<<2|1);
var86 = (val*)(4l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[0]=var82;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = ";";
var93 = (val*)(1l<<2|1);
var94 = (val*)(1l<<2|1);
var95 = (val*)((long)(0)<<2|3);
var96 = (val*)((long)(0)<<2|3);
var92 = core__flat___CString___to_s_unsafe(var91, var93, var94, var95, var96);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var80)->values[2]=var90;
} else {
var80 = varonce79;
varonce79 = NULL;
}
((struct instance_core__NativeArray*)var80)->values[1]=var_idtype;
{
var97 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var97); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:SeparateCompilerVisitor>*/
}
{
var98 = nitc___nitc__SeparateCompilerVisitor___maybe_null(self, var_value);
}
var_maybe_null = var98;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "0";
var103 = (val*)(1l<<2|1);
var104 = (val*)(1l<<2|1);
var105 = (val*)((long)(0)<<2|3);
var106 = (val*)((long)(0)<<2|3);
var102 = core__flat___CString___to_s_unsafe(var101, var103, var104, var105, var106);
var100 = var102;
varonce99 = var100;
}
var_accept_null = var100;
var_ntype = var_mtype;
/* <var_ntype:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_ntype->type->table_size) {
var107 = 0;
} else {
var107 = var_ntype->type->type_table[cltype] == idtype;
}
if (var107){
{
{ /* Inline model$MProxyType$mtype (var_ntype) on <var_ntype:MType(MNullableType)> */
var110 = var_ntype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_ntype:MType(MNullableType)> */
if (unlikely(var110 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
var_ntype = var108;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "1";
var115 = (val*)(1l<<2|1);
var116 = (val*)(1l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
var_accept_null = var112;
} else {
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var121 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var121 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var124 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
if (var122 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1795);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var122) on <var122:nullable StaticFrame> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var127 = var122->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var122:nullable StaticFrame> */
if (unlikely(var127 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var125) on <var125:MPropDef> */
var130 = var125->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var125:MPropDef> */
if (unlikely(var130 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var128) on <var128:MClassDef> */
var133 = var128->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var128:MClassDef> */
if (unlikely(var133 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var136 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var134 = var136;
RET_LABEL135:(void)0;
}
}
if (var134 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1795);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var134) on <var134:nullable StaticFrame> */
if (unlikely(var134 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var139 = var134->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var134:nullable StaticFrame> */
if (unlikely(var139 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var137) on <var137:MPropDef> */
var142 = var137->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var137:MPropDef> */
if (unlikely(var142 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var140) on <var140:MClassDef> */
var145 = var140->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var140:MClassDef> */
if (unlikely(var145 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
var146 = nitc___nitc__MType___is_subtype(var119, var131, var143, var_mtype);
}
if (var146){
if (unlikely(varonce147==NULL)) {
var148 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = " = 1; /* easy ";
var153 = (val*)(14l<<2|1);
var154 = (val*)(14l<<2|1);
var155 = (val*)((long)(0)<<2|3);
var156 = (val*)((long)(0)<<2|3);
var152 = core__flat___CString___to_s_unsafe(var151, var153, var154, var155, var156);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var148)->values[1]=var150;
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = " isa ";
var161 = (val*)(5l<<2|1);
var162 = (val*)(5l<<2|1);
var163 = (val*)((long)(0)<<2|3);
var164 = (val*)((long)(0)<<2|3);
var160 = core__flat___CString___to_s_unsafe(var159, var161, var162, var163, var164);
var158 = var160;
varonce157 = var158;
}
((struct instance_core__NativeArray*)var148)->values[3]=var158;
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "*/";
var169 = (val*)(2l<<2|1);
var170 = (val*)(2l<<2|1);
var171 = (val*)((long)(0)<<2|3);
var172 = (val*)((long)(0)<<2|3);
var168 = core__flat___CString___to_s_unsafe(var167, var169, var170, var171, var172);
var166 = var168;
varonce165 = var166;
}
((struct instance_core__NativeArray*)var148)->values[5]=var166;
} else {
var148 = varonce147;
varonce147 = NULL;
}
{
var173 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var148)->values[0]=var173;
{
var174 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_value);
}
((struct instance_core__NativeArray*)var148)->values[2]=var174;
{
var175 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var148)->values[4]=var175;
{
var176 = ((val*(*)(val* self))(var148->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var148); /* native_to_s on <var148:NativeArray[String]>*/
}
varonce147 = var148;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var176); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var179 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var179 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var177) on <var177:ModelBuilder> */
var182 = var177->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var177:ModelBuilder> */
if (unlikely(var182 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var180) on <var180:ToolContext> */
var185 = var180->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var180:ToolContext> */
if (unlikely(var185 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
{ /* Inline opts$Option$value (var183) on <var183:OptionBool> */
var188 = var183->attrs[COLOR_opts__Option___value].val; /* _value on <var183:OptionBool> */
var186 = var188;
RET_LABEL187:(void)0;
}
}
var189 = (short int)((long)(var186)>>2);
if (var189){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var192 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var192 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (var190) on <var190:AbstractCompiler(SeparateCompiler)> */
var195 = var190->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <var190:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var195 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1113);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
var_ = var193;
var_196 = var_tag;
{
var197 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_, var_196);
}
{
{ /* Inline kernel$Int$+ (var197,1l) on <var197:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var200 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var200)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var203 = (long)(var197)>>2;
var204 = var203 + 1l;
var198 = var204;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
{
var205 = (val*)(var198<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_, var_196, var205); /* Direct call hash_collection$HashMap$[]= on <var_:HashMap[String, Int]>*/
}
if (unlikely(varonce206==NULL)) {
var207 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = "count_type_test_skipped_";
var212 = (val*)(24l<<2|1);
var213 = (val*)(24l<<2|1);
var214 = (val*)((long)(0)<<2|3);
var215 = (val*)((long)(0)<<2|3);
var211 = core__flat___CString___to_s_unsafe(var210, var212, var213, var214, var215);
var209 = var211;
varonce208 = var209;
}
((struct instance_core__NativeArray*)var207)->values[0]=var209;
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "++;";
var220 = (val*)(3l<<2|1);
var221 = (val*)(3l<<2|1);
var222 = (val*)((long)(0)<<2|3);
var223 = (val*)((long)(0)<<2|3);
var219 = core__flat___CString___to_s_unsafe(var218, var220, var221, var222, var223);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var207)->values[2]=var217;
} else {
var207 = varonce206;
varonce206 = NULL;
}
((struct instance_core__NativeArray*)var207)->values[1]=var_tag;
{
var224 = ((val*(*)(val* self))(var207->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var207); /* native_to_s on <var207:NativeArray[String]>*/
}
varonce206 = var207;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var224); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var225 = ((short int(*)(val* self))(var_ntype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_ntype); /* need_anchor on <var_ntype:MType>*/
}
if (var225){
if (likely(varonce226!=NULL)) {
var227 = varonce226;
} else {
var228 = "type_struct";
var230 = (val*)(11l<<2|1);
var231 = (val*)(11l<<2|1);
var232 = (val*)((long)(0)<<2|3);
var233 = (val*)((long)(0)<<2|3);
var229 = core__flat___CString___to_s_unsafe(var228, var230, var231, var232, var233);
var227 = var229;
varonce226 = var227;
}
{
var234 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var227);
}
var_type_struct = var234;
if (unlikely(varonce235==NULL)) {
var236 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "const struct type* ";
var241 = (val*)(19l<<2|1);
var242 = (val*)(19l<<2|1);
var243 = (val*)((long)(0)<<2|3);
var244 = (val*)((long)(0)<<2|3);
var240 = core__flat___CString___to_s_unsafe(var239, var241, var242, var243, var244);
var238 = var240;
varonce237 = var238;
}
((struct instance_core__NativeArray*)var236)->values[0]=var238;
if (likely(varonce245!=NULL)) {
var246 = varonce245;
} else {
var247 = ";";
var249 = (val*)(1l<<2|1);
var250 = (val*)(1l<<2|1);
var251 = (val*)((long)(0)<<2|3);
var252 = (val*)((long)(0)<<2|3);
var248 = core__flat___CString___to_s_unsafe(var247, var249, var250, var251, var252);
var246 = var248;
varonce245 = var246;
}
((struct instance_core__NativeArray*)var236)->values[2]=var246;
} else {
var236 = varonce235;
varonce235 = NULL;
}
((struct instance_core__NativeArray*)var236)->values[1]=var_type_struct;
{
var253 = ((val*(*)(val* self))(var236->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var236); /* native_to_s on <var236:NativeArray[String]>*/
}
varonce235 = var236;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var253); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:SeparateCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler$SeparateCompilerVisitor$hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var256 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var254 = var256;
RET_LABEL255:(void)0;
}
}
if (var254 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1810);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var254) on <var254:nullable StaticFrame> */
if (unlikely(var254 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var259 = var254->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var254:nullable StaticFrame> */
if (unlikely(var259 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var257) on <var257:MPropDef> */
var262 = var257->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var257:MPropDef> */
if (unlikely(var262 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
nitc___nitc__SeparateCompilerVisitor___link_unresolved_type(self, var260, var_mtype); /* Direct call separate_compiler$SeparateCompilerVisitor$link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
var263 = nitc__separate_compiler___MEntity___const_color(var_mtype);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var263); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce264==NULL)) {
var265 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = " = ";
var270 = (val*)(3l<<2|1);
var271 = (val*)(3l<<2|1);
var272 = (val*)((long)(0)<<2|3);
var273 = (val*)((long)(0)<<2|3);
var269 = core__flat___CString___to_s_unsafe(var268, var270, var271, var272, var273);
var267 = var269;
varonce266 = var267;
}
((struct instance_core__NativeArray*)var265)->values[1]=var267;
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "->resolution_table->types[";
var278 = (val*)(26l<<2|1);
var279 = (val*)(26l<<2|1);
var280 = (val*)((long)(0)<<2|3);
var281 = (val*)((long)(0)<<2|3);
var277 = core__flat___CString___to_s_unsafe(var276, var278, var279, var280, var281);
var275 = var277;
varonce274 = var275;
}
((struct instance_core__NativeArray*)var265)->values[3]=var275;
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = "];";
var286 = (val*)(2l<<2|1);
var287 = (val*)(2l<<2|1);
var288 = (val*)((long)(0)<<2|3);
var289 = (val*)((long)(0)<<2|3);
var285 = core__flat___CString___to_s_unsafe(var284, var286, var287, var288, var289);
var283 = var285;
varonce282 = var283;
}
((struct instance_core__NativeArray*)var265)->values[5]=var283;
} else {
var265 = varonce264;
varonce264 = NULL;
}
((struct instance_core__NativeArray*)var265)->values[0]=var_type_struct;
((struct instance_core__NativeArray*)var265)->values[2]=var_recv_type_info;
{
var290 = nitc__separate_compiler___MEntity___const_color(var_mtype);
}
((struct instance_core__NativeArray*)var265)->values[4]=var290;
{
var291 = ((val*(*)(val* self))(var265->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var265); /* native_to_s on <var265:NativeArray[String]>*/
}
varonce264 = var265;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var291); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var294 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var294 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var292) on <var292:ModelBuilder> */
var297 = var292->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var292:ModelBuilder> */
if (unlikely(var297 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var295 = var297;
RET_LABEL296:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var295) on <var295:ToolContext> */
var300 = var295->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var295:ToolContext> */
if (unlikely(var300 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
{
{ /* Inline opts$Option$value (var298) on <var298:OptionBool> */
var303 = var298->attrs[COLOR_opts__Option___value].val; /* _value on <var298:OptionBool> */
var301 = var303;
RET_LABEL302:(void)0;
}
}
var304 = (short int)((long)(var301)>>2);
if (var304){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var307 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var307 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (var305) on <var305:AbstractCompiler(SeparateCompiler)> */
var310 = var305->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <var305:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var310 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1112);
fatal_exit(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
var_311 = var308;
var_312 = var_tag;
{
var313 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_311, var_312);
}
{
{ /* Inline kernel$Int$+ (var313,1l) on <var313:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var316 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var316)) {
var_class_name319 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name319);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var320 = (long)(var313)>>2;
var321 = var320 + 1l;
var314 = var321;
goto RET_LABEL315;
RET_LABEL315:(void)0;
}
}
{
var322 = (val*)(var314<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_311, var_312, var322); /* Direct call hash_collection$HashMap$[]= on <var_311:HashMap[String, Int]>*/
}
if (unlikely(varonce323==NULL)) {
var324 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = "count_type_test_unresolved_";
var329 = (val*)(27l<<2|1);
var330 = (val*)(27l<<2|1);
var331 = (val*)((long)(0)<<2|3);
var332 = (val*)((long)(0)<<2|3);
var328 = core__flat___CString___to_s_unsafe(var327, var329, var330, var331, var332);
var326 = var328;
varonce325 = var326;
}
((struct instance_core__NativeArray*)var324)->values[0]=var326;
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = "++;";
var337 = (val*)(3l<<2|1);
var338 = (val*)(3l<<2|1);
var339 = (val*)((long)(0)<<2|3);
var340 = (val*)((long)(0)<<2|3);
var336 = core__flat___CString___to_s_unsafe(var335, var337, var338, var339, var340);
var334 = var336;
varonce333 = var334;
}
((struct instance_core__NativeArray*)var324)->values[2]=var334;
} else {
var324 = varonce323;
varonce323 = NULL;
}
((struct instance_core__NativeArray*)var324)->values[1]=var_tag;
{
var341 = ((val*(*)(val* self))(var324->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var324); /* native_to_s on <var324:NativeArray[String]>*/
}
varonce323 = var324;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var341); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
nitc___nitc__SeparateCompilerVisitor___hardening_cast_type(self, var_type_struct); /* Direct call separate_compiler$SeparateCompilerVisitor$hardening_cast_type on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce342==NULL)) {
var343 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce344!=NULL)) {
var345 = varonce344;
} else {
var346 = " = ";
var348 = (val*)(3l<<2|1);
var349 = (val*)(3l<<2|1);
var350 = (val*)((long)(0)<<2|3);
var351 = (val*)((long)(0)<<2|3);
var347 = core__flat___CString___to_s_unsafe(var346, var348, var349, var350, var351);
var345 = var347;
varonce344 = var345;
}
((struct instance_core__NativeArray*)var343)->values[1]=var345;
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = "->color;";
var356 = (val*)(8l<<2|1);
var357 = (val*)(8l<<2|1);
var358 = (val*)((long)(0)<<2|3);
var359 = (val*)((long)(0)<<2|3);
var355 = core__flat___CString___to_s_unsafe(var354, var356, var357, var358, var359);
var353 = var355;
varonce352 = var353;
}
((struct instance_core__NativeArray*)var343)->values[3]=var353;
} else {
var343 = varonce342;
varonce342 = NULL;
}
((struct instance_core__NativeArray*)var343)->values[0]=var_cltype;
((struct instance_core__NativeArray*)var343)->values[2]=var_type_struct;
{
var360 = ((val*(*)(val* self))(var343->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var343); /* native_to_s on <var343:NativeArray[String]>*/
}
varonce342 = var343;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var360); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce361==NULL)) {
var362 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce363!=NULL)) {
var364 = varonce363;
} else {
var365 = " = ";
var367 = (val*)(3l<<2|1);
var368 = (val*)(3l<<2|1);
var369 = (val*)((long)(0)<<2|3);
var370 = (val*)((long)(0)<<2|3);
var366 = core__flat___CString___to_s_unsafe(var365, var367, var368, var369, var370);
var364 = var366;
varonce363 = var364;
}
((struct instance_core__NativeArray*)var362)->values[1]=var364;
if (likely(varonce371!=NULL)) {
var372 = varonce371;
} else {
var373 = "->id;";
var375 = (val*)(5l<<2|1);
var376 = (val*)(5l<<2|1);
var377 = (val*)((long)(0)<<2|3);
var378 = (val*)((long)(0)<<2|3);
var374 = core__flat___CString___to_s_unsafe(var373, var375, var376, var377, var378);
var372 = var374;
varonce371 = var372;
}
((struct instance_core__NativeArray*)var362)->values[3]=var372;
} else {
var362 = varonce361;
varonce361 = NULL;
}
((struct instance_core__NativeArray*)var362)->values[0]=var_idtype;
((struct instance_core__NativeArray*)var362)->values[2]=var_type_struct;
{
var379 = ((val*(*)(val* self))(var362->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var362); /* native_to_s on <var362:NativeArray[String]>*/
}
varonce361 = var362;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var379); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var_381 = var_maybe_null;
if (var_maybe_null){
if (likely(varonce382!=NULL)) {
var383 = varonce382;
} else {
var384 = "0";
var386 = (val*)(1l<<2|1);
var387 = (val*)(1l<<2|1);
var388 = (val*)((long)(0)<<2|3);
var389 = (val*)((long)(0)<<2|3);
var385 = core__flat___CString___to_s_unsafe(var384, var386, var387, var388, var389);
var383 = var385;
varonce382 = var383;
}
{
var390 = ((short int(*)(val* self, val* p0))(var_accept_null->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_accept_null, var383); /* == on <var_accept_null:String>*/
}
var380 = var390;
} else {
var380 = var_381;
}
if (var380){
if (likely(varonce391!=NULL)) {
var392 = varonce391;
} else {
var393 = "is_nullable";
var395 = (val*)(11l<<2|1);
var396 = (val*)(11l<<2|1);
var397 = (val*)((long)(0)<<2|3);
var398 = (val*)((long)(0)<<2|3);
var394 = core__flat___CString___to_s_unsafe(var393, var395, var396, var397, var398);
var392 = var394;
varonce391 = var392;
}
{
var399 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var392);
}
var_is_nullable = var399;
if (unlikely(varonce400==NULL)) {
var401 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce402!=NULL)) {
var403 = varonce402;
} else {
var404 = "short int ";
var406 = (val*)(10l<<2|1);
var407 = (val*)(10l<<2|1);
var408 = (val*)((long)(0)<<2|3);
var409 = (val*)((long)(0)<<2|3);
var405 = core__flat___CString___to_s_unsafe(var404, var406, var407, var408, var409);
var403 = var405;
varonce402 = var403;
}
((struct instance_core__NativeArray*)var401)->values[0]=var403;
if (likely(varonce410!=NULL)) {
var411 = varonce410;
} else {
var412 = ";";
var414 = (val*)(1l<<2|1);
var415 = (val*)(1l<<2|1);
var416 = (val*)((long)(0)<<2|3);
var417 = (val*)((long)(0)<<2|3);
var413 = core__flat___CString___to_s_unsafe(var412, var414, var415, var416, var417);
var411 = var413;
varonce410 = var411;
}
((struct instance_core__NativeArray*)var401)->values[2]=var411;
} else {
var401 = varonce400;
varonce400 = NULL;
}
((struct instance_core__NativeArray*)var401)->values[1]=var_is_nullable;
{
var418 = ((val*(*)(val* self))(var401->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var401); /* native_to_s on <var401:NativeArray[String]>*/
}
varonce400 = var401;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var418); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce419==NULL)) {
var420 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = " = ";
var425 = (val*)(3l<<2|1);
var426 = (val*)(3l<<2|1);
var427 = (val*)((long)(0)<<2|3);
var428 = (val*)((long)(0)<<2|3);
var424 = core__flat___CString___to_s_unsafe(var423, var425, var426, var427, var428);
var422 = var424;
varonce421 = var422;
}
((struct instance_core__NativeArray*)var420)->values[1]=var422;
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "->is_nullable;";
var433 = (val*)(14l<<2|1);
var434 = (val*)(14l<<2|1);
var435 = (val*)((long)(0)<<2|3);
var436 = (val*)((long)(0)<<2|3);
var432 = core__flat___CString___to_s_unsafe(var431, var433, var434, var435, var436);
var430 = var432;
varonce429 = var430;
}
((struct instance_core__NativeArray*)var420)->values[3]=var430;
} else {
var420 = varonce419;
varonce419 = NULL;
}
((struct instance_core__NativeArray*)var420)->values[0]=var_is_nullable;
((struct instance_core__NativeArray*)var420)->values[2]=var_type_struct;
{
var437 = ((val*(*)(val* self))(var420->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var420); /* native_to_s on <var420:NativeArray[String]>*/
}
varonce419 = var420;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var437); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
var438 = core___core__String___Object__to_s(var_is_nullable);
}
var_accept_null = var438;
} else {
}
} else {
/* <var_ntype:MType> isa MClassType */
cltype440 = type_nitc__MClassType.color;
idtype441 = type_nitc__MClassType.id;
if(cltype440 >= var_ntype->type->table_size) {
var439 = 0;
} else {
var439 = var_ntype->type->type_table[cltype440] == idtype441;
}
if (var439){
{
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var444 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var444 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var442 = var444;
RET_LABEL443:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var442&3)?class_info[((long)var442&3)]:var442->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var442, var_mtype); /* add on <var442:Set[MType]>*/
}
if (unlikely(varonce445==NULL)) {
var446 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce447!=NULL)) {
var448 = varonce447;
} else {
var449 = "type_";
var451 = (val*)(5l<<2|1);
var452 = (val*)(5l<<2|1);
var453 = (val*)((long)(0)<<2|3);
var454 = (val*)((long)(0)<<2|3);
var450 = core__flat___CString___to_s_unsafe(var449, var451, var452, var453, var454);
var448 = var450;
varonce447 = var448;
}
((struct instance_core__NativeArray*)var446)->values[0]=var448;
} else {
var446 = varonce445;
varonce445 = NULL;
}
{
var455 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var446)->values[1]=var455;
{
var456 = ((val*(*)(val* self))(var446->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var446); /* native_to_s on <var446:NativeArray[String]>*/
}
varonce445 = var446;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var456); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce457==NULL)) {
var458 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce459!=NULL)) {
var460 = varonce459;
} else {
var461 = "(&type_";
var463 = (val*)(7l<<2|1);
var464 = (val*)(7l<<2|1);
var465 = (val*)((long)(0)<<2|3);
var466 = (val*)((long)(0)<<2|3);
var462 = core__flat___CString___to_s_unsafe(var461, var463, var464, var465, var466);
var460 = var462;
varonce459 = var460;
}
((struct instance_core__NativeArray*)var458)->values[0]=var460;
if (likely(varonce467!=NULL)) {
var468 = varonce467;
} else {
var469 = ")";
var471 = (val*)(1l<<2|1);
var472 = (val*)(1l<<2|1);
var473 = (val*)((long)(0)<<2|3);
var474 = (val*)((long)(0)<<2|3);
var470 = core__flat___CString___to_s_unsafe(var469, var471, var472, var473, var474);
var468 = var470;
varonce467 = var468;
}
((struct instance_core__NativeArray*)var458)->values[2]=var468;
} else {
var458 = varonce457;
varonce457 = NULL;
}
{
var475 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var458)->values[1]=var475;
{
var476 = ((val*(*)(val* self))(var458->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var458); /* native_to_s on <var458:NativeArray[String]>*/
}
varonce457 = var458;
{
nitc___nitc__SeparateCompilerVisitor___hardening_cast_type(self, var476); /* Direct call separate_compiler$SeparateCompilerVisitor$hardening_cast_type on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce477==NULL)) {
var478 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce479!=NULL)) {
var480 = varonce479;
} else {
var481 = " = type_";
var483 = (val*)(8l<<2|1);
var484 = (val*)(8l<<2|1);
var485 = (val*)((long)(0)<<2|3);
var486 = (val*)((long)(0)<<2|3);
var482 = core__flat___CString___to_s_unsafe(var481, var483, var484, var485, var486);
var480 = var482;
varonce479 = var480;
}
((struct instance_core__NativeArray*)var478)->values[1]=var480;
if (likely(varonce487!=NULL)) {
var488 = varonce487;
} else {
var489 = ".color;";
var491 = (val*)(7l<<2|1);
var492 = (val*)(7l<<2|1);
var493 = (val*)((long)(0)<<2|3);
var494 = (val*)((long)(0)<<2|3);
var490 = core__flat___CString___to_s_unsafe(var489, var491, var492, var493, var494);
var488 = var490;
varonce487 = var488;
}
((struct instance_core__NativeArray*)var478)->values[3]=var488;
} else {
var478 = varonce477;
varonce477 = NULL;
}
((struct instance_core__NativeArray*)var478)->values[0]=var_cltype;
{
var495 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var478)->values[2]=var495;
{
var496 = ((val*(*)(val* self))(var478->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var478); /* native_to_s on <var478:NativeArray[String]>*/
}
varonce477 = var478;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var496); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce497==NULL)) {
var498 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce499!=NULL)) {
var500 = varonce499;
} else {
var501 = " = type_";
var503 = (val*)(8l<<2|1);
var504 = (val*)(8l<<2|1);
var505 = (val*)((long)(0)<<2|3);
var506 = (val*)((long)(0)<<2|3);
var502 = core__flat___CString___to_s_unsafe(var501, var503, var504, var505, var506);
var500 = var502;
varonce499 = var500;
}
((struct instance_core__NativeArray*)var498)->values[1]=var500;
if (likely(varonce507!=NULL)) {
var508 = varonce507;
} else {
var509 = ".id;";
var511 = (val*)(4l<<2|1);
var512 = (val*)(4l<<2|1);
var513 = (val*)((long)(0)<<2|3);
var514 = (val*)((long)(0)<<2|3);
var510 = core__flat___CString___to_s_unsafe(var509, var511, var512, var513, var514);
var508 = var510;
varonce507 = var508;
}
((struct instance_core__NativeArray*)var498)->values[3]=var508;
} else {
var498 = varonce497;
varonce497 = NULL;
}
((struct instance_core__NativeArray*)var498)->values[0]=var_idtype;
{
var515 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var498)->values[2]=var515;
{
var516 = ((val*(*)(val* self))(var498->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var498); /* native_to_s on <var498:NativeArray[String]>*/
}
varonce497 = var498;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var516); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var519 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var519 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var517 = var519;
RET_LABEL518:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var517) on <var517:ModelBuilder> */
var522 = var517->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var517:ModelBuilder> */
if (unlikely(var522 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var520 = var522;
RET_LABEL521:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var520) on <var520:ToolContext> */
var525 = var520->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var520:ToolContext> */
if (unlikely(var525 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var523 = var525;
RET_LABEL524:(void)0;
}
}
{
{ /* Inline opts$Option$value (var523) on <var523:OptionBool> */
var528 = var523->attrs[COLOR_opts__Option___value].val; /* _value on <var523:OptionBool> */
var526 = var528;
RET_LABEL527:(void)0;
}
}
var529 = (short int)((long)(var526)>>2);
if (var529){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var532 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var532 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var530 = var532;
RET_LABEL531:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (var530) on <var530:AbstractCompiler(SeparateCompiler)> */
var535 = var530->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <var530:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var535 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1111);
fatal_exit(1);
}
var533 = var535;
RET_LABEL534:(void)0;
}
}
var_536 = var533;
var_537 = var_tag;
{
var538 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_536, var_537);
}
{
{ /* Inline kernel$Int$+ (var538,1l) on <var538:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var541 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var541)) {
var_class_name544 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name544);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var545 = (long)(var538)>>2;
var546 = var545 + 1l;
var539 = var546;
goto RET_LABEL540;
RET_LABEL540:(void)0;
}
}
{
var547 = (val*)(var539<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_536, var_537, var547); /* Direct call hash_collection$HashMap$[]= on <var_536:HashMap[String, Int]>*/
}
if (unlikely(varonce548==NULL)) {
var549 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce550!=NULL)) {
var551 = varonce550;
} else {
var552 = "count_type_test_resolved_";
var554 = (val*)(25l<<2|1);
var555 = (val*)(25l<<2|1);
var556 = (val*)((long)(0)<<2|3);
var557 = (val*)((long)(0)<<2|3);
var553 = core__flat___CString___to_s_unsafe(var552, var554, var555, var556, var557);
var551 = var553;
varonce550 = var551;
}
((struct instance_core__NativeArray*)var549)->values[0]=var551;
if (likely(varonce558!=NULL)) {
var559 = varonce558;
} else {
var560 = "++;";
var562 = (val*)(3l<<2|1);
var563 = (val*)(3l<<2|1);
var564 = (val*)((long)(0)<<2|3);
var565 = (val*)((long)(0)<<2|3);
var561 = core__flat___CString___to_s_unsafe(var560, var562, var563, var564, var565);
var559 = var561;
varonce558 = var559;
}
((struct instance_core__NativeArray*)var549)->values[2]=var559;
} else {
var549 = varonce548;
varonce548 = NULL;
}
((struct instance_core__NativeArray*)var549)->values[1]=var_tag;
{
var566 = ((val*(*)(val* self))(var549->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var549); /* native_to_s on <var549:NativeArray[String]>*/
}
varonce548 = var549;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var566); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
if (unlikely(varonce567==NULL)) {
var568 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce569!=NULL)) {
var570 = varonce569;
} else {
var571 = "PRINT_ERROR(\"NOT YET IMPLEMENTED: type_test(%s, ";
var573 = (val*)(48l<<2|1);
var574 = (val*)(48l<<2|1);
var575 = (val*)((long)(0)<<2|3);
var576 = (val*)((long)(0)<<2|3);
var572 = core__flat___CString___to_s_unsafe(var571, var573, var574, var575, var576);
var570 = var572;
varonce569 = var570;
}
((struct instance_core__NativeArray*)var568)->values[0]=var570;
if (likely(varonce577!=NULL)) {
var578 = varonce577;
} else {
var579 = ").\\n\", \"";
var581 = (val*)(8l<<2|1);
var582 = (val*)(8l<<2|1);
var583 = (val*)((long)(0)<<2|3);
var584 = (val*)((long)(0)<<2|3);
var580 = core__flat___CString___to_s_unsafe(var579, var581, var582, var583, var584);
var578 = var580;
varonce577 = var578;
}
((struct instance_core__NativeArray*)var568)->values[2]=var578;
if (likely(varonce585!=NULL)) {
var586 = varonce585;
} else {
var587 = "\"); fatal_exit(1);";
var589 = (val*)(18l<<2|1);
var590 = (val*)(18l<<2|1);
var591 = (val*)((long)(0)<<2|3);
var592 = (val*)((long)(0)<<2|3);
var588 = core__flat___CString___to_s_unsafe(var587, var589, var590, var591, var592);
var586 = var588;
varonce585 = var586;
}
((struct instance_core__NativeArray*)var568)->values[4]=var586;
} else {
var568 = varonce567;
varonce567 = NULL;
}
{
var593 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var568)->values[1]=var593;
{
var594 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_value);
}
((struct instance_core__NativeArray*)var568)->values[3]=var594;
{
var595 = ((val*(*)(val* self))(var568->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var568); /* native_to_s on <var568:NativeArray[String]>*/
}
varonce567 = var568;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var595); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
if (var_maybe_null){
if (unlikely(varonce596==NULL)) {
var597 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce598!=NULL)) {
var599 = varonce598;
} else {
var600 = "if(";
var602 = (val*)(3l<<2|1);
var603 = (val*)(3l<<2|1);
var604 = (val*)((long)(0)<<2|3);
var605 = (val*)((long)(0)<<2|3);
var601 = core__flat___CString___to_s_unsafe(var600, var602, var603, var604, var605);
var599 = var601;
varonce598 = var599;
}
((struct instance_core__NativeArray*)var597)->values[0]=var599;
if (likely(varonce606!=NULL)) {
var607 = varonce606;
} else {
var608 = " == NULL) {";
var610 = (val*)(11l<<2|1);
var611 = (val*)(11l<<2|1);
var612 = (val*)((long)(0)<<2|3);
var613 = (val*)((long)(0)<<2|3);
var609 = core__flat___CString___to_s_unsafe(var608, var610, var611, var612, var613);
var607 = var609;
varonce606 = var607;
}
((struct instance_core__NativeArray*)var597)->values[2]=var607;
} else {
var597 = varonce596;
varonce596 = NULL;
}
{
var614 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var597)->values[1]=var614;
{
var615 = ((val*(*)(val* self))(var597->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var597); /* native_to_s on <var597:NativeArray[String]>*/
}
varonce596 = var597;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var615); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce616==NULL)) {
var617 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce618!=NULL)) {
var619 = varonce618;
} else {
var620 = " = ";
var622 = (val*)(3l<<2|1);
var623 = (val*)(3l<<2|1);
var624 = (val*)((long)(0)<<2|3);
var625 = (val*)((long)(0)<<2|3);
var621 = core__flat___CString___to_s_unsafe(var620, var622, var623, var624, var625);
var619 = var621;
varonce618 = var619;
}
((struct instance_core__NativeArray*)var617)->values[1]=var619;
if (likely(varonce626!=NULL)) {
var627 = varonce626;
} else {
var628 = ";";
var630 = (val*)(1l<<2|1);
var631 = (val*)(1l<<2|1);
var632 = (val*)((long)(0)<<2|3);
var633 = (val*)((long)(0)<<2|3);
var629 = core__flat___CString___to_s_unsafe(var628, var630, var631, var632, var633);
var627 = var629;
varonce626 = var627;
}
((struct instance_core__NativeArray*)var617)->values[3]=var627;
} else {
var617 = varonce616;
varonce616 = NULL;
}
{
var634 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var617)->values[0]=var634;
((struct instance_core__NativeArray*)var617)->values[2]=var_accept_null;
{
var635 = ((val*(*)(val* self))(var617->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var617); /* native_to_s on <var617:NativeArray[String]>*/
}
varonce616 = var617;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var635); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce636!=NULL)) {
var637 = varonce636;
} else {
var638 = "} else {";
var640 = (val*)(8l<<2|1);
var641 = (val*)(8l<<2|1);
var642 = (val*)((long)(0)<<2|3);
var643 = (val*)((long)(0)<<2|3);
var639 = core__flat___CString___to_s_unsafe(var638, var640, var641, var642, var643);
var637 = var639;
varonce636 = var637;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var637); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
var644 = nitc___nitc__SeparateCompilerVisitor___type_info(self, var_value);
}
var_value_type_info = var644;
if (unlikely(varonce645==NULL)) {
var646 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce647!=NULL)) {
var648 = varonce647;
} else {
var649 = "if(";
var651 = (val*)(3l<<2|1);
var652 = (val*)(3l<<2|1);
var653 = (val*)((long)(0)<<2|3);
var654 = (val*)((long)(0)<<2|3);
var650 = core__flat___CString___to_s_unsafe(var649, var651, var652, var653, var654);
var648 = var650;
varonce647 = var648;
}
((struct instance_core__NativeArray*)var646)->values[0]=var648;
if (likely(varonce655!=NULL)) {
var656 = varonce655;
} else {
var657 = " >= ";
var659 = (val*)(4l<<2|1);
var660 = (val*)(4l<<2|1);
var661 = (val*)((long)(0)<<2|3);
var662 = (val*)((long)(0)<<2|3);
var658 = core__flat___CString___to_s_unsafe(var657, var659, var660, var661, var662);
var656 = var658;
varonce655 = var656;
}
((struct instance_core__NativeArray*)var646)->values[2]=var656;
if (likely(varonce663!=NULL)) {
var664 = varonce663;
} else {
var665 = "->table_size) {";
var667 = (val*)(15l<<2|1);
var668 = (val*)(15l<<2|1);
var669 = (val*)((long)(0)<<2|3);
var670 = (val*)((long)(0)<<2|3);
var666 = core__flat___CString___to_s_unsafe(var665, var667, var668, var669, var670);
var664 = var666;
varonce663 = var664;
}
((struct instance_core__NativeArray*)var646)->values[4]=var664;
} else {
var646 = varonce645;
varonce645 = NULL;
}
((struct instance_core__NativeArray*)var646)->values[1]=var_cltype;
((struct instance_core__NativeArray*)var646)->values[3]=var_value_type_info;
{
var671 = ((val*(*)(val* self))(var646->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var646); /* native_to_s on <var646:NativeArray[String]>*/
}
varonce645 = var646;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var671); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce672==NULL)) {
var673 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce674!=NULL)) {
var675 = varonce674;
} else {
var676 = " = 0;";
var678 = (val*)(5l<<2|1);
var679 = (val*)(5l<<2|1);
var680 = (val*)((long)(0)<<2|3);
var681 = (val*)((long)(0)<<2|3);
var677 = core__flat___CString___to_s_unsafe(var676, var678, var679, var680, var681);
var675 = var677;
varonce674 = var675;
}
((struct instance_core__NativeArray*)var673)->values[1]=var675;
} else {
var673 = varonce672;
varonce672 = NULL;
}
{
var682 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var673)->values[0]=var682;
{
var683 = ((val*(*)(val* self))(var673->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var673); /* native_to_s on <var673:NativeArray[String]>*/
}
varonce672 = var673;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var683); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce684!=NULL)) {
var685 = varonce684;
} else {
var686 = "} else {";
var688 = (val*)(8l<<2|1);
var689 = (val*)(8l<<2|1);
var690 = (val*)((long)(0)<<2|3);
var691 = (val*)((long)(0)<<2|3);
var687 = core__flat___CString___to_s_unsafe(var686, var688, var689, var690, var691);
var685 = var687;
varonce684 = var685;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var685); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce692==NULL)) {
var693 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce694!=NULL)) {
var695 = varonce694;
} else {
var696 = " = ";
var698 = (val*)(3l<<2|1);
var699 = (val*)(3l<<2|1);
var700 = (val*)((long)(0)<<2|3);
var701 = (val*)((long)(0)<<2|3);
var697 = core__flat___CString___to_s_unsafe(var696, var698, var699, var700, var701);
var695 = var697;
varonce694 = var695;
}
((struct instance_core__NativeArray*)var693)->values[1]=var695;
if (likely(varonce702!=NULL)) {
var703 = varonce702;
} else {
var704 = "->type_table[";
var706 = (val*)(13l<<2|1);
var707 = (val*)(13l<<2|1);
var708 = (val*)((long)(0)<<2|3);
var709 = (val*)((long)(0)<<2|3);
var705 = core__flat___CString___to_s_unsafe(var704, var706, var707, var708, var709);
var703 = var705;
varonce702 = var703;
}
((struct instance_core__NativeArray*)var693)->values[3]=var703;
if (likely(varonce710!=NULL)) {
var711 = varonce710;
} else {
var712 = "] == ";
var714 = (val*)(5l<<2|1);
var715 = (val*)(5l<<2|1);
var716 = (val*)((long)(0)<<2|3);
var717 = (val*)((long)(0)<<2|3);
var713 = core__flat___CString___to_s_unsafe(var712, var714, var715, var716, var717);
var711 = var713;
varonce710 = var711;
}
((struct instance_core__NativeArray*)var693)->values[5]=var711;
if (likely(varonce718!=NULL)) {
var719 = varonce718;
} else {
var720 = ";";
var722 = (val*)(1l<<2|1);
var723 = (val*)(1l<<2|1);
var724 = (val*)((long)(0)<<2|3);
var725 = (val*)((long)(0)<<2|3);
var721 = core__flat___CString___to_s_unsafe(var720, var722, var723, var724, var725);
var719 = var721;
varonce718 = var719;
}
((struct instance_core__NativeArray*)var693)->values[7]=var719;
} else {
var693 = varonce692;
varonce692 = NULL;
}
{
var726 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var693)->values[0]=var726;
((struct instance_core__NativeArray*)var693)->values[2]=var_value_type_info;
((struct instance_core__NativeArray*)var693)->values[4]=var_cltype;
((struct instance_core__NativeArray*)var693)->values[6]=var_idtype;
{
var727 = ((val*(*)(val* self))(var693->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var693); /* native_to_s on <var693:NativeArray[String]>*/
}
varonce692 = var693;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var727); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce728!=NULL)) {
var729 = varonce728;
} else {
var730 = "}";
var732 = (val*)(1l<<2|1);
var733 = (val*)(1l<<2|1);
var734 = (val*)((long)(0)<<2|3);
var735 = (val*)((long)(0)<<2|3);
var731 = core__flat___CString___to_s_unsafe(var730, var732, var733, var734, var735);
var729 = var731;
varonce728 = var729;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var729); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (var_maybe_null){
if (likely(varonce736!=NULL)) {
var737 = varonce736;
} else {
var738 = "}";
var740 = (val*)(1l<<2|1);
var741 = (val*)(1l<<2|1);
var742 = (val*)((long)(0)<<2|3);
var743 = (val*)((long)(0)<<2|3);
var739 = core__flat___CString___to_s_unsafe(var738, var740, var741, var742, var743);
var737 = var739;
varonce736 = var737;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var737); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$is_same_type_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : MType */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var13 /* : MType */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
val* var20 /* : MType */;
val* var22 /* : MType */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : NativeArray[String] */;
static val* varonce;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Bool */;
val* var52 /* : nullable Bool */;
val* var53 /* : String */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var57 /* : String */;
val* var58 /* : MType */;
val* var60 /* : MType */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : MType */;
val* var65 /* : MType */;
short int var66 /* : Bool */;
val* var68 /* : NativeArray[String] */;
static val* varonce67;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Bool */;
val* var84 /* : nullable Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
val* var93 /* : String */;
val* var94 /* : MType */;
val* var96 /* : MType */;
val* var97 /* : String */;
val* var98 /* : MType */;
val* var100 /* : MType */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : MType */;
val* var105 /* : MType */;
short int var106 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
val* var108 /* : NativeArray[String] */;
static val* varonce107;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Bool */;
val* var116 /* : nullable Bool */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var120 /* : NativeArray[String] */;
static val* varonce119;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Bool */;
val* var128 /* : nullable Bool */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Bool */;
val* var136 /* : nullable Bool */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Bool */;
val* var144 /* : nullable Bool */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
val* var153 /* : String */;
val* var154 /* : String */;
val* var155 /* : String */;
val* var156 /* : String */;
val* var157 /* : String */;
val* var159 /* : NativeArray[String] */;
static val* varonce158;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Int */;
val* var166 /* : nullable Bool */;
val* var167 /* : nullable Bool */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Bool */;
val* var175 /* : nullable Bool */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Bool */;
val* var183 /* : nullable Bool */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : CString */;
val* var187 /* : String */;
val* var188 /* : nullable Int */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Bool */;
val* var191 /* : nullable Bool */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : CString */;
val* var195 /* : String */;
val* var196 /* : nullable Int */;
val* var197 /* : nullable Int */;
val* var198 /* : nullable Bool */;
val* var199 /* : nullable Bool */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : CString */;
val* var203 /* : String */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Int */;
val* var206 /* : nullable Bool */;
val* var207 /* : nullable Bool */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : CString */;
val* var211 /* : String */;
val* var212 /* : nullable Int */;
val* var213 /* : nullable Int */;
val* var214 /* : nullable Bool */;
val* var215 /* : nullable Bool */;
val* var216 /* : String */;
val* var217 /* : String */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var220 /* : String */;
val* var221 /* : String */;
val* var222 /* : String */;
val* var223 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int(*)(val* self))(var4->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var4); /* is_c_primitive on <var4:MType>*/
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var10 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self))(var8->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var8); /* is_c_primitive on <var8:MType>*/
}
var12 = !var11;
var3 = var12;
} else {
var3 = var_;
}
if (var3){
var_tmp = var_value1;
var_value1 = var_value2;
var_value2 = var_tmp;
} else {
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var15 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self))(var13->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var13); /* is_c_primitive on <var13:MType>*/
}
if (var16){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value2) on <var_value2:RuntimeVariable> */
var19 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var22 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var17,var20) on <var17:MType> */
var_other = var20;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:MType> */
var27 = var17 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
if (unlikely(varonce==NULL)) {
var28 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " = 1; /* is_same_type_test: compatible types ";
var33 = (val*)(45l<<2|1);
var34 = (val*)(45l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var28)->values[1]=var30;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " vs. ";
var41 = (val*)(5l<<2|1);
var42 = (val*)(5l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var28)->values[3]=var38;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = " */";
var49 = (val*)(3l<<2|1);
var50 = (val*)(3l<<2|1);
var51 = (val*)((long)(0)<<2|3);
var52 = (val*)((long)(0)<<2|3);
var48 = core__flat___CString___to_s_unsafe(var47, var49, var50, var51, var52);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var28)->values[5]=var46;
} else {
var28 = varonce;
varonce = NULL;
}
{
var53 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var28)->values[0]=var53;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var56 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__Object__to_s]))(var54); /* to_s on <var54:MType>*/
}
((struct instance_core__NativeArray*)var28)->values[2]=var57;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value2) on <var_value2:RuntimeVariable> */
var60 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = ((val*(*)(val* self))(var58->class->vft[COLOR_core__abstract_text__Object__to_s]))(var58); /* to_s on <var58:MType>*/
}
((struct instance_core__NativeArray*)var28)->values[4]=var61;
{
var62 = ((val*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce = var28;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var62); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value2) on <var_value2:RuntimeVariable> */
var65 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = ((short int(*)(val* self))(var63->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var63); /* is_c_primitive on <var63:MType>*/
}
if (var66){
if (unlikely(varonce67==NULL)) {
var68 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = " = 0; /* is_same_type_test: incompatible types ";
var73 = (val*)(47l<<2|1);
var74 = (val*)(47l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var68)->values[1]=var70;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = " vs. ";
var81 = (val*)(5l<<2|1);
var82 = (val*)(5l<<2|1);
var83 = (val*)((long)(0)<<2|3);
var84 = (val*)((long)(0)<<2|3);
var80 = core__flat___CString___to_s_unsafe(var79, var81, var82, var83, var84);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var68)->values[3]=var78;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "*/";
var89 = (val*)(2l<<2|1);
var90 = (val*)(2l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var68)->values[5]=var86;
} else {
var68 = varonce67;
varonce67 = NULL;
}
{
var93 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var68)->values[0]=var93;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var96 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = ((val*(*)(val* self))(var94->class->vft[COLOR_core__abstract_text__Object__to_s]))(var94); /* to_s on <var94:MType>*/
}
((struct instance_core__NativeArray*)var68)->values[2]=var97;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value2) on <var_value2:RuntimeVariable> */
var100 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var100 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = ((val*(*)(val* self))(var98->class->vft[COLOR_core__abstract_text__Object__to_s]))(var98); /* to_s on <var98:MType>*/
}
((struct instance_core__NativeArray*)var68)->values[4]=var101;
{
var102 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce67 = var68;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var102); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var105 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var105 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
/* <var103:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var103->type->table_size) {
var106 = 0;
} else {
var106 = var103->type->type_table[cltype] == idtype;
}
if (unlikely(!var106)) {
var_class_name = var103 == NULL ? "null" : var103->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1874);
fatal_exit(1);
}
var_mtype1 = var103;
if (unlikely(varonce107==NULL)) {
var108 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "class_";
var113 = (val*)(6l<<2|1);
var114 = (val*)(6l<<2|1);
var115 = (val*)((long)(0)<<2|3);
var116 = (val*)((long)(0)<<2|3);
var112 = core__flat___CString___to_s_unsafe(var111, var113, var114, var115, var116);
var110 = var112;
varonce109 = var110;
}
((struct instance_core__NativeArray*)var108)->values[0]=var110;
} else {
var108 = varonce107;
varonce107 = NULL;
}
{
var117 = ((val*(*)(val* self))(var_mtype1->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype1); /* c_name on <var_mtype1:MClassType>*/
}
((struct instance_core__NativeArray*)var108)->values[1]=var117;
{
var118 = ((val*(*)(val* self))(var108->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var108); /* native_to_s on <var108:NativeArray[String]>*/
}
varonce107 = var108;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var118); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce119==NULL)) {
var120 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = " = (";
var125 = (val*)(4l<<2|1);
var126 = (val*)(4l<<2|1);
var127 = (val*)((long)(0)<<2|3);
var128 = (val*)((long)(0)<<2|3);
var124 = core__flat___CString___to_s_unsafe(var123, var125, var126, var127, var128);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var120)->values[1]=var122;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = " != NULL) && (";
var133 = (val*)(14l<<2|1);
var134 = (val*)(14l<<2|1);
var135 = (val*)((long)(0)<<2|3);
var136 = (val*)((long)(0)<<2|3);
var132 = core__flat___CString___to_s_unsafe(var131, var133, var134, var135, var136);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var120)->values[3]=var130;
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = " == &class_";
var141 = (val*)(11l<<2|1);
var142 = (val*)(11l<<2|1);
var143 = (val*)((long)(0)<<2|3);
var144 = (val*)((long)(0)<<2|3);
var140 = core__flat___CString___to_s_unsafe(var139, var141, var142, var143, var144);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var120)->values[5]=var138;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "); /* is_same_type_test */";
var149 = (val*)(26l<<2|1);
var150 = (val*)(26l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var120)->values[7]=var146;
} else {
var120 = varonce119;
varonce119 = NULL;
}
{
var153 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var120)->values[0]=var153;
{
var154 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var120)->values[2]=var154;
{
var155 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var_value2);
}
((struct instance_core__NativeArray*)var120)->values[4]=var155;
{
var156 = ((val*(*)(val* self))(var_mtype1->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype1); /* c_name on <var_mtype1:MClassType>*/
}
((struct instance_core__NativeArray*)var120)->values[6]=var156;
{
var157 = ((val*(*)(val* self))(var120->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var120); /* native_to_s on <var120:NativeArray[String]>*/
}
varonce119 = var120;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var157); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (unlikely(varonce158==NULL)) {
var159 = NEW_core__NativeArray((int)14l, &type_core__NativeArray__core__String);
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = " = (";
var164 = (val*)(4l<<2|1);
var165 = (val*)(4l<<2|1);
var166 = (val*)((long)(0)<<2|3);
var167 = (val*)((long)(0)<<2|3);
var163 = core__flat___CString___to_s_unsafe(var162, var164, var165, var166, var167);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var159)->values[1]=var161;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = " == ";
var172 = (val*)(4l<<2|1);
var173 = (val*)(4l<<2|1);
var174 = (val*)((long)(0)<<2|3);
var175 = (val*)((long)(0)<<2|3);
var171 = core__flat___CString___to_s_unsafe(var170, var172, var173, var174, var175);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var159)->values[3]=var169;
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = ") || (";
var180 = (val*)(6l<<2|1);
var181 = (val*)(6l<<2|1);
var182 = (val*)((long)(0)<<2|3);
var183 = (val*)((long)(0)<<2|3);
var179 = core__flat___CString___to_s_unsafe(var178, var180, var181, var182, var183);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var159)->values[5]=var177;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = " != NULL && ";
var188 = (val*)(12l<<2|1);
var189 = (val*)(12l<<2|1);
var190 = (val*)((long)(0)<<2|3);
var191 = (val*)((long)(0)<<2|3);
var187 = core__flat___CString___to_s_unsafe(var186, var188, var189, var190, var191);
var185 = var187;
varonce184 = var185;
}
((struct instance_core__NativeArray*)var159)->values[7]=var185;
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = " != NULL && ";
var196 = (val*)(12l<<2|1);
var197 = (val*)(12l<<2|1);
var198 = (val*)((long)(0)<<2|3);
var199 = (val*)((long)(0)<<2|3);
var195 = core__flat___CString___to_s_unsafe(var194, var196, var197, var198, var199);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var159)->values[9]=var193;
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = " == ";
var204 = (val*)(4l<<2|1);
var205 = (val*)(4l<<2|1);
var206 = (val*)((long)(0)<<2|3);
var207 = (val*)((long)(0)<<2|3);
var203 = core__flat___CString___to_s_unsafe(var202, var204, var205, var206, var207);
var201 = var203;
varonce200 = var201;
}
((struct instance_core__NativeArray*)var159)->values[11]=var201;
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = "); /* is_same_type_test */";
var212 = (val*)(26l<<2|1);
var213 = (val*)(26l<<2|1);
var214 = (val*)((long)(0)<<2|3);
var215 = (val*)((long)(0)<<2|3);
var211 = core__flat___CString___to_s_unsafe(var210, var212, var213, var214, var215);
var209 = var211;
varonce208 = var209;
}
((struct instance_core__NativeArray*)var159)->values[13]=var209;
} else {
var159 = varonce158;
varonce158 = NULL;
}
{
var216 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var159)->values[0]=var216;
{
var217 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var159)->values[2]=var217;
{
var218 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var159)->values[4]=var218;
{
var219 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var159)->values[6]=var219;
{
var220 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var159)->values[8]=var220;
{
var221 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var_value1);
}
((struct instance_core__NativeArray*)var159)->values[10]=var221;
{
var222 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var_value2);
}
((struct instance_core__NativeArray*)var159)->values[12]=var222;
{
var223 = ((val*(*)(val* self))(var159->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var159); /* native_to_s on <var159:NativeArray[String]>*/
}
varonce158 = var159;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var223); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$class_name_string for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : String */;
val* var_res /* var res: String */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : String */;
val* var28 /* : MType */;
val* var30 /* : MType */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : String */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : MType */;
val* var66 /* : MType */;
short int var67 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var68 /* : MType */;
val* var70 /* : MType */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name;
val* var74 /* : MClass */;
val* var76 /* : MClass */;
val* var77 /* : MClassKind */;
val* var79 /* : MClassKind */;
val* var80 /* : Sys */;
val* var81 /* : MClassKind */;
short int var82 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var_87 /* var : Bool */;
val* var88 /* : MType */;
val* var90 /* : MType */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Bool */;
val* var103 /* : nullable Bool */;
short int var104 /* : Bool */;
val* var_other106 /* var other: nullable Object */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
val* var110 /* : NativeArray[String] */;
static val* varonce109;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
val* var127 /* : MType */;
val* var129 /* : MType */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
val* var134 /* : MClass */;
val* var136 /* : MClass */;
val* var137 /* : String */;
val* var138 /* : String */;
val* var140 /* : NativeArray[String] */;
static val* varonce139;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Bool */;
val* var148 /* : nullable Bool */;
val* var149 /* : MType */;
val* var151 /* : MType */;
val* var152 /* : String */;
val* var153 /* : String */;
val* var155 /* : NativeArray[String] */;
static val* varonce154;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : CString */;
val* var159 /* : String */;
val* var160 /* : nullable Int */;
val* var161 /* : nullable Int */;
val* var162 /* : nullable Bool */;
val* var163 /* : nullable Bool */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Int */;
val* var170 /* : nullable Bool */;
val* var171 /* : nullable Bool */;
val* var172 /* : MType */;
val* var174 /* : MType */;
val* var175 /* : String */;
val* var176 /* : String */;
var_value = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "var_class_name";
var4 = (val*)(14l<<2|1);
var5 = (val*)(14l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var1);
}
var_res = var8;
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "const char* ";
var15 = (val*)(12l<<2|1);
var16 = (val*)(12l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ";";
var23 = (val*)(1l<<2|1);
var24 = (val*)(1l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var10)->values[2]=var20;
} else {
var10 = varonce9;
varonce9 = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_res;
{
var27 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var27); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var30 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = ((short int(*)(val* self))(var28->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var28); /* is_c_primitive on <var28:MType>*/
}
var32 = !var31;
if (var32){
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = " = ";
var39 = (val*)(3l<<2|1);
var40 = (val*)(3l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[1]=var36;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = " == NULL ? \"null\" : ";
var47 = (val*)(20l<<2|1);
var48 = (val*)(20l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var34)->values[3]=var44;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "->name;";
var55 = (val*)(7l<<2|1);
var56 = (val*)(7l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var34)->values[5]=var52;
} else {
var34 = varonce33;
varonce33 = NULL;
}
((struct instance_core__NativeArray*)var34)->values[0]=var_res;
{
var59 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var34)->values[2]=var59;
{
var60 = nitc___nitc__SeparateCompilerVisitor___type_info(self, var_value);
}
((struct instance_core__NativeArray*)var34)->values[4]=var60;
{
var61 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var61); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var66 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
/* <var64:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var64->type->table_size) {
var67 = 0;
} else {
var67 = var64->type->type_table[cltype] == idtype;
}
var_ = var67;
if (var67){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var70 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
/* <var68:MType> isa MClassType */
cltype72 = type_nitc__MClassType.color;
idtype73 = type_nitc__MClassType.id;
if(cltype72 >= var68->type->table_size) {
var71 = 0;
} else {
var71 = var68->type->type_table[cltype72] == idtype73;
}
if (unlikely(!var71)) {
var_class_name = var68 == NULL ? "null" : var68->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1890);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var68) on <var68:MType(MClassType)> */
var76 = var68->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var68:MType(MClassType)> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var74) on <var74:MClass> */
var79 = var74->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var74:MClass> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var80 = glob_sys;
{
var81 = nitc__model___core__Sys___extern_kind(var80);
}
{
{ /* Inline kernel$Object$== (var77,var81) on <var77:MClassKind> */
var_other = var81;
{
{ /* Inline kernel$Object$is_same_instance (var77,var_other) on <var77:MClassKind> */
var86 = var77 == var_other;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var63 = var82;
} else {
var63 = var_;
}
var_87 = var63;
if (var63){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var90 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
/* <var88:MType> isa MClassType */
cltype92 = type_nitc__MClassType.color;
idtype93 = type_nitc__MClassType.id;
if(cltype92 >= var88->type->table_size) {
var91 = 0;
} else {
var91 = var88->type->type_table[cltype92] == idtype93;
}
if (unlikely(!var91)) {
var_class_name94 = var88 == NULL ? "null" : var88->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1891);
fatal_exit(1);
}
{
var95 = nitc___nitc__MType___nitc__model_base__MEntity__name(var88);
}
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "CString";
var100 = (val*)(7l<<2|1);
var101 = (val*)(7l<<2|1);
var102 = (val*)((long)(0)<<2|3);
var103 = (val*)((long)(0)<<2|3);
var99 = core__flat___CString___to_s_unsafe(var98, var100, var101, var102, var103);
var97 = var99;
varonce96 = var97;
}
{
{ /* Inline kernel$Object$!= (var95,var97) on <var95:String> */
var_other106 = var97;
{
var107 = ((short int(*)(val* self, val* p0))(var95->class->vft[COLOR_core__kernel__Object___61d_61d]))(var95, var_other106); /* == on <var95:String>*/
}
var108 = !var107;
var104 = var108;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
var62 = var104;
} else {
var62 = var_87;
}
if (var62){
if (unlikely(varonce109==NULL)) {
var110 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = " = \"";
var115 = (val*)(4l<<2|1);
var116 = (val*)(4l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var110)->values[1]=var112;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "\";";
var123 = (val*)(2l<<2|1);
var124 = (val*)(2l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var110)->values[3]=var120;
} else {
var110 = varonce109;
varonce109 = NULL;
}
((struct instance_core__NativeArray*)var110)->values[0]=var_res;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var129 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var129 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
/* <var127:MType> isa MClassType */
cltype131 = type_nitc__MClassType.color;
idtype132 = type_nitc__MClassType.id;
if(cltype131 >= var127->type->table_size) {
var130 = 0;
} else {
var130 = var127->type->type_table[cltype131] == idtype132;
}
if (unlikely(!var130)) {
var_class_name133 = var127 == NULL ? "null" : var127->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1892);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var127) on <var127:MType(MClassType)> */
var136 = var127->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var127:MType(MClassType)> */
if (unlikely(var136 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
var137 = ((val*(*)(val* self))(var134->class->vft[COLOR_core__abstract_text__Object__to_s]))(var134); /* to_s on <var134:MClass>*/
}
((struct instance_core__NativeArray*)var110)->values[2]=var137;
{
var138 = ((val*(*)(val* self))(var110->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var138); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce139==NULL)) {
var140 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "type_";
var145 = (val*)(5l<<2|1);
var146 = (val*)(5l<<2|1);
var147 = (val*)((long)(0)<<2|3);
var148 = (val*)((long)(0)<<2|3);
var144 = core__flat___CString___to_s_unsafe(var143, var145, var146, var147, var148);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var140)->values[0]=var142;
} else {
var140 = varonce139;
varonce139 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var151 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var151 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
var152 = ((val*(*)(val* self))(var149->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var149); /* c_name on <var149:MType>*/
}
((struct instance_core__NativeArray*)var140)->values[1]=var152;
{
var153 = ((val*(*)(val* self))(var140->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var140); /* native_to_s on <var140:NativeArray[String]>*/
}
varonce139 = var140;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var153); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce154==NULL)) {
var155 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = " = type_";
var160 = (val*)(8l<<2|1);
var161 = (val*)(8l<<2|1);
var162 = (val*)((long)(0)<<2|3);
var163 = (val*)((long)(0)<<2|3);
var159 = core__flat___CString___to_s_unsafe(var158, var160, var161, var162, var163);
var157 = var159;
varonce156 = var157;
}
((struct instance_core__NativeArray*)var155)->values[1]=var157;
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = ".name;";
var168 = (val*)(6l<<2|1);
var169 = (val*)(6l<<2|1);
var170 = (val*)((long)(0)<<2|3);
var171 = (val*)((long)(0)<<2|3);
var167 = core__flat___CString___to_s_unsafe(var166, var168, var169, var170, var171);
var165 = var167;
varonce164 = var165;
}
((struct instance_core__NativeArray*)var155)->values[3]=var165;
} else {
var155 = varonce154;
varonce154 = NULL;
}
((struct instance_core__NativeArray*)var155)->values[0]=var_res;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var174 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var174 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
var175 = ((val*(*)(val* self))(var172->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var172); /* c_name on <var172:MType>*/
}
((struct instance_core__NativeArray*)var155)->values[2]=var175;
{
var176 = ((val*(*)(val* self))(var155->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var155); /* native_to_s on <var155:NativeArray[String]>*/
}
varonce154 = var155;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var176); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$equal_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : MType */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var13 /* : MType */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
val* var_t1 /* var t1: MType */;
val* var20 /* : MType */;
val* var22 /* : MType */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MType */;
val* var30 /* : MType */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : NativeArray[String] */;
static val* varonce;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Bool */;
val* var52 /* : nullable Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Bool */;
val* var60 /* : nullable Bool */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : Array[String] */;
val* var_tests /* var tests: Array[String] */;
val* var66 /* : MType */;
val* var68 /* : MType */;
val* var_t2 /* var t2: MType */;
short int var69 /* : Bool */;
int cltype;
int idtype;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Bool */;
val* var79 /* : nullable Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Bool */;
val* var87 /* : nullable Bool */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : MType */;
val* var92 /* : MType */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Bool */;
val* var113 /* : nullable Bool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Bool */;
val* var121 /* : nullable Bool */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : String */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
val* var133 /* : NativeArray[String] */;
static val* varonce132;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Bool */;
val* var149 /* : nullable Bool */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Bool */;
val* var157 /* : nullable Bool */;
val* var158 /* : String */;
val* var159 /* : String */;
val* var160 /* : String */;
val* var161 /* : String */;
short int var162 /* : Bool */;
short int var164 /* : Bool */;
val* var166 /* : NativeArray[String] */;
static val* varonce165;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : CString */;
val* var178 /* : String */;
val* var179 /* : nullable Int */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Bool */;
val* var182 /* : nullable Bool */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : CString */;
val* var186 /* : String */;
val* var187 /* : nullable Int */;
val* var188 /* : nullable Int */;
val* var189 /* : nullable Bool */;
val* var190 /* : nullable Bool */;
val* var191 /* : String */;
long var192 /* : Int */;
long var194 /* : Int */;
val* var195 /* : String */;
val* var196 /* : String */;
val* var198 /* : NativeArray[String] */;
static val* varonce197;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : CString */;
val* var202 /* : String */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Bool */;
val* var206 /* : nullable Bool */;
val* var207 /* : String */;
val* var208 /* : String */;
val* var210 /* : NativeArray[String] */;
static val* varonce209;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : CString */;
val* var214 /* : String */;
val* var215 /* : nullable Int */;
val* var216 /* : nullable Int */;
val* var217 /* : nullable Bool */;
val* var218 /* : nullable Bool */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : CString */;
val* var222 /* : String */;
val* var223 /* : nullable Int */;
val* var224 /* : nullable Int */;
val* var225 /* : nullable Bool */;
val* var226 /* : nullable Bool */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : CString */;
val* var230 /* : String */;
val* var231 /* : nullable Int */;
val* var232 /* : nullable Int */;
val* var233 /* : nullable Bool */;
val* var234 /* : nullable Bool */;
val* var235 /* : String */;
val* var236 /* : String */;
val* var237 /* : String */;
short int var238 /* : Bool */;
val* var240 /* : NativeArray[String] */;
static val* varonce239;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : CString */;
val* var252 /* : String */;
val* var253 /* : nullable Int */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Bool */;
val* var256 /* : nullable Bool */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : CString */;
val* var260 /* : String */;
val* var261 /* : nullable Int */;
val* var262 /* : nullable Int */;
val* var263 /* : nullable Bool */;
val* var264 /* : nullable Bool */;
val* var265 /* : String */;
val* var266 /* : String */;
val* var268 /* : NativeArray[String] */;
static val* varonce267;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : CString */;
val* var272 /* : String */;
val* var273 /* : nullable Int */;
val* var274 /* : nullable Int */;
val* var275 /* : nullable Bool */;
val* var276 /* : nullable Bool */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : CString */;
val* var280 /* : String */;
val* var281 /* : nullable Int */;
val* var282 /* : nullable Int */;
val* var283 /* : nullable Bool */;
val* var284 /* : nullable Bool */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : CString */;
val* var288 /* : String */;
val* var289 /* : nullable Int */;
val* var290 /* : nullable Int */;
val* var291 /* : nullable Bool */;
val* var292 /* : nullable Bool */;
val* var293 /* : String */;
val* var294 /* : RuntimeVariable */;
val* var295 /* : String */;
val* var296 /* : String */;
val* var297 /* : String */;
short int var298 /* : Bool */;
val* var300 /* : NativeArray[String] */;
static val* varonce299;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : CString */;
val* var304 /* : String */;
val* var305 /* : nullable Int */;
val* var306 /* : nullable Int */;
val* var307 /* : nullable Bool */;
val* var308 /* : nullable Bool */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : CString */;
val* var312 /* : String */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Int */;
val* var315 /* : nullable Bool */;
val* var316 /* : nullable Bool */;
val* var317 /* : String */;
val* var318 /* : String */;
short int var_maybe_null /* var maybe_null: Bool */;
val* var319 /* : Array[String] */;
val* var_test /* var test: Array[String] */;
val* var320 /* : MType */;
val* var322 /* : MType */;
val* var_t1323 /* var t1: MType */;
short int var324 /* : Bool */;
int cltype325;
int idtype326;
val* var328 /* : NativeArray[String] */;
static val* varonce327;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : CString */;
val* var332 /* : String */;
val* var333 /* : nullable Int */;
val* var334 /* : nullable Int */;
val* var335 /* : nullable Bool */;
val* var336 /* : nullable Bool */;
val* var337 /* : String */;
val* var338 /* : String */;
val* var339 /* : MType */;
val* var341 /* : MType */;
val* var342 /* : MType */;
val* var344 /* : MType */;
val* var_t2345 /* var t2: MType */;
short int var346 /* : Bool */;
int cltype347;
int idtype348;
val* var350 /* : NativeArray[String] */;
static val* varonce349;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : CString */;
val* var354 /* : String */;
val* var355 /* : nullable Int */;
val* var356 /* : nullable Int */;
val* var357 /* : nullable Bool */;
val* var358 /* : nullable Bool */;
val* var359 /* : String */;
val* var360 /* : String */;
val* var361 /* : MType */;
val* var363 /* : MType */;
short int var_incompatible /* var incompatible: Bool */;
short int var364 /* : Bool */;
val* var_primitive /* var primitive: nullable Object */;
short int var365 /* : Bool */;
short int var367 /* : Bool */;
short int var369 /* : Bool */;
short int var370 /* : Bool */;
short int var371 /* : Bool */;
short int var372 /* : Bool */;
short int var374 /* : Bool */;
val* var376 /* : NativeArray[String] */;
static val* varonce375;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : CString */;
val* var380 /* : String */;
val* var381 /* : nullable Int */;
val* var382 /* : nullable Int */;
val* var383 /* : nullable Bool */;
val* var384 /* : nullable Bool */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : CString */;
val* var388 /* : String */;
val* var389 /* : nullable Int */;
val* var390 /* : nullable Int */;
val* var391 /* : nullable Bool */;
val* var392 /* : nullable Bool */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : CString */;
val* var396 /* : String */;
val* var397 /* : nullable Int */;
val* var398 /* : nullable Int */;
val* var399 /* : nullable Bool */;
val* var400 /* : nullable Bool */;
val* var401 /* : String */;
val* var402 /* : String */;
val* var403 /* : String */;
val* var404 /* : String */;
val* var405 /* : AbstractCompiler */;
val* var407 /* : AbstractCompiler */;
val* var408 /* : ModelBuilder */;
val* var410 /* : ModelBuilder */;
val* var411 /* : ToolContext */;
val* var413 /* : ToolContext */;
val* var414 /* : OptionBool */;
val* var416 /* : OptionBool */;
val* var417 /* : nullable Object */;
val* var419 /* : nullable Object */;
short int var420 /* : Bool */;
short int var421 /* : Bool */;
val* var423 /* : NativeArray[String] */;
static val* varonce422;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : CString */;
val* var427 /* : String */;
val* var428 /* : nullable Int */;
val* var429 /* : nullable Int */;
val* var430 /* : nullable Bool */;
val* var431 /* : nullable Bool */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : CString */;
val* var435 /* : String */;
val* var436 /* : nullable Int */;
val* var437 /* : nullable Int */;
val* var438 /* : nullable Bool */;
val* var439 /* : nullable Bool */;
val* var440 /* : String */;
val* var441 /* : String */;
val* var443 /* : NativeArray[String] */;
static val* varonce442;
static val* varonce444;
val* var445 /* : String */;
char* var446 /* : CString */;
val* var447 /* : String */;
val* var448 /* : nullable Int */;
val* var449 /* : nullable Int */;
val* var450 /* : nullable Bool */;
val* var451 /* : nullable Bool */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : CString */;
val* var455 /* : String */;
val* var456 /* : nullable Int */;
val* var457 /* : nullable Int */;
val* var458 /* : nullable Bool */;
val* var459 /* : nullable Bool */;
val* var460 /* : String */;
val* var461 /* : String */;
val* var462 /* : String */;
short int var463 /* : Bool */;
short int var464 /* : Bool */;
short int var465 /* : Bool */;
short int var467 /* : Bool */;
val* var469 /* : NativeArray[String] */;
static val* varonce468;
static val* varonce470;
val* var471 /* : String */;
char* var472 /* : CString */;
val* var473 /* : String */;
val* var474 /* : nullable Int */;
val* var475 /* : nullable Int */;
val* var476 /* : nullable Bool */;
val* var477 /* : nullable Bool */;
static val* varonce478;
val* var479 /* : String */;
char* var480 /* : CString */;
val* var481 /* : String */;
val* var482 /* : nullable Int */;
val* var483 /* : nullable Int */;
val* var484 /* : nullable Bool */;
val* var485 /* : nullable Bool */;
static val* varonce486;
val* var487 /* : String */;
char* var488 /* : CString */;
val* var489 /* : String */;
val* var490 /* : nullable Int */;
val* var491 /* : nullable Int */;
val* var492 /* : nullable Bool */;
val* var493 /* : nullable Bool */;
val* var494 /* : String */;
val* var495 /* : String */;
val* var496 /* : String */;
val* var497 /* : String */;
val* var498 /* : AbstractCompiler */;
val* var500 /* : AbstractCompiler */;
val* var501 /* : ModelBuilder */;
val* var503 /* : ModelBuilder */;
val* var504 /* : ToolContext */;
val* var506 /* : ToolContext */;
val* var507 /* : OptionBool */;
val* var509 /* : OptionBool */;
val* var510 /* : nullable Object */;
val* var512 /* : nullable Object */;
short int var513 /* : Bool */;
short int var514 /* : Bool */;
val* var516 /* : NativeArray[String] */;
static val* varonce515;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : CString */;
val* var520 /* : String */;
val* var521 /* : nullable Int */;
val* var522 /* : nullable Int */;
val* var523 /* : nullable Bool */;
val* var524 /* : nullable Bool */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : CString */;
val* var528 /* : String */;
val* var529 /* : nullable Int */;
val* var530 /* : nullable Int */;
val* var531 /* : nullable Bool */;
val* var532 /* : nullable Bool */;
val* var533 /* : String */;
val* var534 /* : String */;
val* var536 /* : NativeArray[String] */;
static val* varonce535;
static val* varonce537;
val* var538 /* : String */;
char* var539 /* : CString */;
val* var540 /* : String */;
val* var541 /* : nullable Int */;
val* var542 /* : nullable Int */;
val* var543 /* : nullable Bool */;
val* var544 /* : nullable Bool */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : CString */;
val* var548 /* : String */;
val* var549 /* : nullable Int */;
val* var550 /* : nullable Int */;
val* var551 /* : nullable Bool */;
val* var552 /* : nullable Bool */;
val* var553 /* : String */;
val* var554 /* : String */;
val* var555 /* : String */;
val* var557 /* : NativeArray[String] */;
static val* varonce556;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : CString */;
val* var561 /* : String */;
val* var562 /* : nullable Int */;
val* var563 /* : nullable Int */;
val* var564 /* : nullable Bool */;
val* var565 /* : nullable Bool */;
static val* varonce566;
val* var567 /* : String */;
char* var568 /* : CString */;
val* var569 /* : String */;
val* var570 /* : nullable Int */;
val* var571 /* : nullable Int */;
val* var572 /* : nullable Bool */;
val* var573 /* : nullable Bool */;
static val* varonce574;
val* var575 /* : String */;
char* var576 /* : CString */;
val* var577 /* : String */;
val* var578 /* : nullable Int */;
val* var579 /* : nullable Int */;
val* var580 /* : nullable Bool */;
val* var581 /* : nullable Bool */;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : CString */;
val* var585 /* : String */;
val* var586 /* : nullable Int */;
val* var587 /* : nullable Int */;
val* var588 /* : nullable Bool */;
val* var589 /* : nullable Bool */;
static val* varonce590;
val* var591 /* : String */;
char* var592 /* : CString */;
val* var593 /* : String */;
val* var594 /* : nullable Int */;
val* var595 /* : nullable Int */;
val* var596 /* : nullable Bool */;
val* var597 /* : nullable Bool */;
val* var598 /* : String */;
val* var599 /* : String */;
val* var600 /* : String */;
val* var601 /* : String */;
val* var602 /* : String */;
val* var603 /* : String */;
val* var605 /* : NativeArray[String] */;
static val* varonce604;
static val* varonce606;
val* var607 /* : String */;
char* var608 /* : CString */;
val* var609 /* : String */;
val* var610 /* : nullable Int */;
val* var611 /* : nullable Int */;
val* var612 /* : nullable Bool */;
val* var613 /* : nullable Bool */;
static val* varonce614;
val* var615 /* : String */;
char* var616 /* : CString */;
val* var617 /* : String */;
val* var618 /* : nullable Int */;
val* var619 /* : nullable Int */;
val* var620 /* : nullable Bool */;
val* var621 /* : nullable Bool */;
static val* varonce622;
val* var623 /* : String */;
char* var624 /* : CString */;
val* var625 /* : String */;
val* var626 /* : nullable Int */;
val* var627 /* : nullable Int */;
val* var628 /* : nullable Bool */;
val* var629 /* : nullable Bool */;
val* var630 /* : String */;
val* var631 /* : String */;
val* var632 /* : String */;
val* var633 /* : String */;
short int var634 /* : Bool */;
short int var635 /* : Bool */;
val* var_other637 /* var other: nullable Object */;
short int var638 /* : Bool */;
short int var639 /* : Bool */;
short int var640 /* : Bool */;
short int var642 /* : Bool */;
val* var644 /* : NativeArray[String] */;
static val* varonce643;
static val* varonce645;
val* var646 /* : String */;
char* var647 /* : CString */;
val* var648 /* : String */;
val* var649 /* : nullable Int */;
val* var650 /* : nullable Int */;
val* var651 /* : nullable Bool */;
val* var652 /* : nullable Bool */;
static val* varonce653;
val* var654 /* : String */;
char* var655 /* : CString */;
val* var656 /* : String */;
val* var657 /* : nullable Int */;
val* var658 /* : nullable Int */;
val* var659 /* : nullable Bool */;
val* var660 /* : nullable Bool */;
static val* varonce661;
val* var662 /* : String */;
char* var663 /* : CString */;
val* var664 /* : String */;
val* var665 /* : nullable Int */;
val* var666 /* : nullable Int */;
val* var667 /* : nullable Bool */;
val* var668 /* : nullable Bool */;
val* var669 /* : String */;
val* var670 /* : String */;
val* var671 /* : String */;
val* var672 /* : String */;
val* var674 /* : NativeArray[String] */;
static val* varonce673;
static val* varonce675;
val* var676 /* : String */;
char* var677 /* : CString */;
val* var678 /* : String */;
val* var679 /* : nullable Int */;
val* var680 /* : nullable Int */;
val* var681 /* : nullable Bool */;
val* var682 /* : nullable Bool */;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : CString */;
val* var686 /* : String */;
val* var687 /* : nullable Int */;
val* var688 /* : nullable Int */;
val* var689 /* : nullable Bool */;
val* var690 /* : nullable Bool */;
static val* varonce691;
val* var692 /* : String */;
char* var693 /* : CString */;
val* var694 /* : String */;
val* var695 /* : nullable Int */;
val* var696 /* : nullable Int */;
val* var697 /* : nullable Bool */;
val* var698 /* : nullable Bool */;
static val* varonce699;
val* var700 /* : String */;
char* var701 /* : CString */;
val* var702 /* : String */;
val* var703 /* : nullable Int */;
val* var704 /* : nullable Int */;
val* var705 /* : nullable Bool */;
val* var706 /* : nullable Bool */;
static val* varonce707;
val* var708 /* : String */;
char* var709 /* : CString */;
val* var710 /* : String */;
val* var711 /* : nullable Int */;
val* var712 /* : nullable Int */;
val* var713 /* : nullable Bool */;
val* var714 /* : nullable Bool */;
val* var715 /* : String */;
val* var716 /* : String */;
val* var717 /* : String */;
val* var718 /* : String */;
val* var719 /* : String */;
short int var720 /* : Bool */;
short int var721 /* : Bool */;
short int var_722 /* var : Bool */;
short int var723 /* : Bool */;
val* var724 /* : AbstractCompiler */;
val* var726 /* : AbstractCompiler */;
val* var727 /* : ModelBuilder */;
val* var729 /* : ModelBuilder */;
val* var730 /* : ToolContext */;
val* var732 /* : ToolContext */;
val* var733 /* : OptionBool */;
val* var735 /* : OptionBool */;
val* var736 /* : nullable Object */;
val* var738 /* : nullable Object */;
short int var739 /* : Bool */;
short int var740 /* : Bool */;
val* var742 /* : NativeArray[String] */;
static val* varonce741;
static val* varonce743;
val* var744 /* : String */;
char* var745 /* : CString */;
val* var746 /* : String */;
val* var747 /* : nullable Int */;
val* var748 /* : nullable Int */;
val* var749 /* : nullable Bool */;
val* var750 /* : nullable Bool */;
static val* varonce751;
val* var752 /* : String */;
char* var753 /* : CString */;
val* var754 /* : String */;
val* var755 /* : nullable Int */;
val* var756 /* : nullable Int */;
val* var757 /* : nullable Bool */;
val* var758 /* : nullable Bool */;
static val* varonce759;
val* var760 /* : String */;
char* var761 /* : CString */;
val* var762 /* : String */;
val* var763 /* : nullable Int */;
val* var764 /* : nullable Int */;
val* var765 /* : nullable Bool */;
val* var766 /* : nullable Bool */;
val* var767 /* : String */;
val* var768 /* : String */;
val* var769 /* : String */;
val* var771 /* : NativeArray[String] */;
static val* varonce770;
static val* varonce772;
val* var773 /* : String */;
char* var774 /* : CString */;
val* var775 /* : String */;
val* var776 /* : nullable Int */;
val* var777 /* : nullable Int */;
val* var778 /* : nullable Bool */;
val* var779 /* : nullable Bool */;
static val* varonce780;
val* var781 /* : String */;
char* var782 /* : CString */;
val* var783 /* : String */;
val* var784 /* : nullable Int */;
val* var785 /* : nullable Int */;
val* var786 /* : nullable Bool */;
val* var787 /* : nullable Bool */;
val* var788 /* : String */;
val* var789 /* : String */;
val* var790 /* : String */;
val* var791 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var792 /* : AbstractCompiler */;
val* var794 /* : AbstractCompiler */;
val* var795 /* : HashMap[MClass, Int] */;
val* var797 /* : HashMap[MClass, Int] */;
val* var_798 /* var : HashMap[MClass, Int] */;
val* var799 /* : MapIterator[nullable Object, nullable Object] */;
val* var_800 /* var : MapIterator[MClass, Int] */;
short int var801 /* : Bool */;
val* var802 /* : nullable Object */;
val* var_t /* var t: MClass */;
val* var803 /* : nullable Object */;
long var804 /* : Int */;
long var_v /* var v: Int */;
val* var805 /* : MClassType */;
val* var807 /* : MClassType */;
short int var808 /* : Bool */;
short int var810 /* : Bool */;
val* var813 /* : NativeArray[String] */;
static val* varonce812;
static val* varonce814;
val* var815 /* : String */;
char* var816 /* : CString */;
val* var817 /* : String */;
val* var818 /* : nullable Int */;
val* var819 /* : nullable Int */;
val* var820 /* : nullable Bool */;
val* var821 /* : nullable Bool */;
static val* varonce822;
val* var823 /* : String */;
char* var824 /* : CString */;
val* var825 /* : String */;
val* var826 /* : nullable Int */;
val* var827 /* : nullable Int */;
val* var828 /* : nullable Bool */;
val* var829 /* : nullable Bool */;
static val* varonce830;
val* var831 /* : String */;
char* var832 /* : CString */;
val* var833 /* : String */;
val* var834 /* : nullable Int */;
val* var835 /* : nullable Int */;
val* var836 /* : nullable Bool */;
val* var837 /* : nullable Bool */;
static val* varonce838;
val* var839 /* : String */;
char* var840 /* : CString */;
val* var841 /* : String */;
val* var842 /* : nullable Int */;
val* var843 /* : nullable Int */;
val* var844 /* : nullable Bool */;
val* var845 /* : nullable Bool */;
static val* varonce846;
val* var847 /* : String */;
char* var848 /* : CString */;
val* var849 /* : String */;
val* var850 /* : nullable Int */;
val* var851 /* : nullable Int */;
val* var852 /* : nullable Bool */;
val* var853 /* : nullable Bool */;
static val* varonce854;
val* var855 /* : String */;
char* var856 /* : CString */;
val* var857 /* : String */;
val* var858 /* : nullable Int */;
val* var859 /* : nullable Int */;
val* var860 /* : nullable Bool */;
val* var861 /* : nullable Bool */;
static val* varonce862;
val* var863 /* : String */;
char* var864 /* : CString */;
val* var865 /* : String */;
val* var866 /* : nullable Int */;
val* var867 /* : nullable Int */;
val* var868 /* : nullable Bool */;
val* var869 /* : nullable Bool */;
val* var870 /* : String */;
val* var871 /* : String */;
val* var872 /* : String */;
val* var873 /* : String */;
val* var874 /* : String */;
val* var875 /* : String */;
val* var876 /* : String */;
short int var878 /* : Bool */;
val* var880 /* : NativeArray[String] */;
static val* varonce879;
static val* varonce881;
val* var882 /* : String */;
char* var883 /* : CString */;
val* var884 /* : String */;
val* var885 /* : nullable Int */;
val* var886 /* : nullable Int */;
val* var887 /* : nullable Bool */;
val* var888 /* : nullable Bool */;
static val* varonce889;
val* var890 /* : String */;
char* var891 /* : CString */;
val* var892 /* : String */;
val* var893 /* : nullable Int */;
val* var894 /* : nullable Int */;
val* var895 /* : nullable Bool */;
val* var896 /* : nullable Bool */;
static val* varonce897;
val* var898 /* : String */;
char* var899 /* : CString */;
val* var900 /* : String */;
val* var901 /* : nullable Int */;
val* var902 /* : nullable Int */;
val* var903 /* : nullable Bool */;
val* var904 /* : nullable Bool */;
val* var905 /* : String */;
val* var906 /* : String */;
val* var907 /* : String */;
val* var908 /* : String */;
val* var910 /* : NativeArray[String] */;
static val* varonce909;
static val* varonce911;
val* var912 /* : String */;
char* var913 /* : CString */;
val* var914 /* : String */;
val* var915 /* : nullable Int */;
val* var916 /* : nullable Int */;
val* var917 /* : nullable Bool */;
val* var918 /* : nullable Bool */;
static val* varonce919;
val* var920 /* : String */;
char* var921 /* : CString */;
val* var922 /* : String */;
val* var923 /* : nullable Int */;
val* var924 /* : nullable Int */;
val* var925 /* : nullable Bool */;
val* var926 /* : nullable Bool */;
static val* varonce927;
val* var928 /* : String */;
char* var929 /* : CString */;
val* var930 /* : String */;
val* var931 /* : nullable Int */;
val* var932 /* : nullable Int */;
val* var933 /* : nullable Bool */;
val* var934 /* : nullable Bool */;
val* var935 /* : String */;
val* var936 /* : String */;
val* var938 /* : NativeArray[String] */;
static val* varonce937;
static val* varonce939;
val* var940 /* : String */;
char* var941 /* : CString */;
val* var942 /* : String */;
val* var943 /* : nullable Int */;
val* var944 /* : nullable Int */;
val* var945 /* : nullable Bool */;
val* var946 /* : nullable Bool */;
static val* varonce947;
val* var948 /* : String */;
char* var949 /* : CString */;
val* var950 /* : String */;
val* var951 /* : nullable Int */;
val* var952 /* : nullable Int */;
val* var953 /* : nullable Bool */;
val* var954 /* : nullable Bool */;
static val* varonce955;
val* var956 /* : String */;
char* var957 /* : CString */;
val* var958 /* : String */;
val* var959 /* : nullable Int */;
val* var960 /* : nullable Int */;
val* var961 /* : nullable Bool */;
val* var962 /* : nullable Bool */;
val* var963 /* : String */;
val* var964 /* : String */;
val* var965 /* : String */;
val* var966 /* : String */;
val* var968 /* : NativeArray[String] */;
static val* varonce967;
static val* varonce969;
val* var970 /* : String */;
char* var971 /* : CString */;
val* var972 /* : String */;
val* var973 /* : nullable Int */;
val* var974 /* : nullable Int */;
val* var975 /* : nullable Bool */;
val* var976 /* : nullable Bool */;
static val* varonce977;
val* var978 /* : String */;
char* var979 /* : CString */;
val* var980 /* : String */;
val* var981 /* : nullable Int */;
val* var982 /* : nullable Int */;
val* var983 /* : nullable Bool */;
val* var984 /* : nullable Bool */;
static val* varonce985;
val* var986 /* : String */;
char* var987 /* : CString */;
val* var988 /* : String */;
val* var989 /* : nullable Int */;
val* var990 /* : nullable Int */;
val* var991 /* : nullable Bool */;
val* var992 /* : nullable Bool */;
static val* varonce993;
val* var994 /* : String */;
char* var995 /* : CString */;
val* var996 /* : String */;
val* var997 /* : nullable Int */;
val* var998 /* : nullable Int */;
val* var999 /* : nullable Bool */;
val* var1000 /* : nullable Bool */;
val* var1001 /* : String */;
val* var1002 /* : String */;
val* var1003 /* : String */;
static val* varonce1004;
val* var1005 /* : String */;
char* var1006 /* : CString */;
val* var1007 /* : String */;
val* var1008 /* : nullable Int */;
val* var1009 /* : nullable Int */;
val* var1010 /* : nullable Bool */;
val* var1011 /* : nullable Bool */;
val* var1012 /* : String */;
val* var1013 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int(*)(val* self))(var4->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var4); /* is_c_primitive on <var4:MType>*/
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var10 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self))(var8->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var8); /* is_c_primitive on <var8:MType>*/
}
var12 = !var11;
var3 = var12;
} else {
var3 = var_;
}
if (var3){
var_tmp = var_value1;
var_value1 = var_value2;
var_value2 = var_tmp;
} else {
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var15 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self))(var13->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var13); /* is_c_primitive on <var13:MType>*/
}
if (var16){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var19 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_t1 = var17;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var22 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_t1,var20) on <var_t1:MType> */
var_other = var20;
{
{ /* Inline kernel$Object$is_same_instance (var_t1,var_other) on <var_t1:MType> */
var27 = var_t1 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (unlikely(!var23)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1910);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value2) on <var_value2:RuntimeVariable> */
var30 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var28,var_t1) on <var28:MType> */
var_other = var_t1;
{
{ /* Inline kernel$Object$is_same_instance (var28,var_other) on <var28:MType> */
var35 = var28 == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
if (unlikely(varonce==NULL)) {
var36 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " = ";
var41 = (val*)(3l<<2|1);
var42 = (val*)(3l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var36)->values[1]=var38;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = " == ";
var49 = (val*)(4l<<2|1);
var50 = (val*)(4l<<2|1);
var51 = (val*)((long)(0)<<2|3);
var52 = (val*)((long)(0)<<2|3);
var48 = core__flat___CString___to_s_unsafe(var47, var49, var50, var51, var52);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var36)->values[3]=var46;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = ";";
var57 = (val*)(1l<<2|1);
var58 = (val*)(1l<<2|1);
var59 = (val*)((long)(0)<<2|3);
var60 = (val*)((long)(0)<<2|3);
var56 = core__flat___CString___to_s_unsafe(var55, var57, var58, var59, var60);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var36)->values[5]=var54;
} else {
var36 = varonce;
varonce = NULL;
}
{
var61 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var36)->values[0]=var61;
{
var62 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var36)->values[2]=var62;
{
var63 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var36)->values[4]=var63;
{
var64 = ((val*(*)(val* self))(var36->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce = var36;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var64); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
var65 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var65); /* Direct call array$Array$init on <var65:Array[String]>*/
}
var_tests = var65;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var68 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
var_t2 = var66;
/* <var_t2:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_t2->type->table_size) {
var69 = 0;
} else {
var69 = var_t2->type->type_table[cltype] == idtype;
}
if (var69){
if (unlikely(varonce70==NULL)) {
var71 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "(";
var76 = (val*)(1l<<2|1);
var77 = (val*)(1l<<2|1);
var78 = (val*)((long)(0)<<2|3);
var79 = (val*)((long)(0)<<2|3);
var75 = core__flat___CString___to_s_unsafe(var74, var76, var77, var78, var79);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var71)->values[0]=var73;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = " != NULL)";
var84 = (val*)(9l<<2|1);
var85 = (val*)(9l<<2|1);
var86 = (val*)((long)(0)<<2|3);
var87 = (val*)((long)(0)<<2|3);
var83 = core__flat___CString___to_s_unsafe(var82, var84, var85, var86, var87);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var71)->values[2]=var81;
} else {
var71 = varonce70;
varonce70 = NULL;
}
{
var88 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var71)->values[1]=var88;
{
var89 = ((val*(*)(val* self))(var71->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tests, var89); /* Direct call array$Array$add on <var_tests:Array[String]>*/
}
{
{ /* Inline model$MProxyType$mtype (var_t2) on <var_t2:MType(MNullableType)> */
var92 = var_t2->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_t2:MType(MNullableType)> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
var_t2 = var90;
} else {
/* <var_t2:MType> isa MNullType */
cltype94 = type_nitc__MNullType.color;
idtype95 = type_nitc__MNullType.id;
if(cltype94 >= var_t2->type->table_size) {
var93 = 0;
} else {
var93 = var_t2->type->type_table[cltype94] == idtype95;
}
if (var93){
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = " = 0; /* incompatible types ";
var102 = (val*)(28l<<2|1);
var103 = (val*)(28l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[1]=var99;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = " vs. ";
var110 = (val*)(5l<<2|1);
var111 = (val*)(5l<<2|1);
var112 = (val*)((long)(0)<<2|3);
var113 = (val*)((long)(0)<<2|3);
var109 = core__flat___CString___to_s_unsafe(var108, var110, var111, var112, var113);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var97)->values[3]=var107;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "*/";
var118 = (val*)(2l<<2|1);
var119 = (val*)(2l<<2|1);
var120 = (val*)((long)(0)<<2|3);
var121 = (val*)((long)(0)<<2|3);
var117 = core__flat___CString___to_s_unsafe(var116, var118, var119, var120, var121);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var97)->values[5]=var115;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var122 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var97)->values[0]=var122;
{
var123 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1); /* to_s on <var_t1:MType>*/
}
((struct instance_core__NativeArray*)var97)->values[2]=var123;
{
var124 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2); /* to_s on <var_t2:MType(MNullType)>*/
}
((struct instance_core__NativeArray*)var97)->values[4]=var124;
{
var125 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var125); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
}
{
{ /* Inline kernel$Object$== (var_t2,var_t1) on <var_t2:MType> */
var_other = var_t1;
{
{ /* Inline kernel$Object$is_same_instance (var_t2,var_other) on <var_t2:MType> */
var130 = var_t2 == var_other;
var128 = var130;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
var126 = var128;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
if (var126){
} else {
{
var131 = ((short int(*)(val* self))(var_t2->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_t2); /* is_c_primitive on <var_t2:MType>*/
}
if (var131){
if (unlikely(varonce132==NULL)) {
var133 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = " = 0; /* incompatible types ";
var138 = (val*)(28l<<2|1);
var139 = (val*)(28l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var133)->values[1]=var135;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = " vs. ";
var146 = (val*)(5l<<2|1);
var147 = (val*)(5l<<2|1);
var148 = (val*)((long)(0)<<2|3);
var149 = (val*)((long)(0)<<2|3);
var145 = core__flat___CString___to_s_unsafe(var144, var146, var147, var148, var149);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var133)->values[3]=var143;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "*/";
var154 = (val*)(2l<<2|1);
var155 = (val*)(2l<<2|1);
var156 = (val*)((long)(0)<<2|3);
var157 = (val*)((long)(0)<<2|3);
var153 = core__flat___CString___to_s_unsafe(var152, var154, var155, var156, var157);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var133)->values[5]=var151;
} else {
var133 = varonce132;
varonce132 = NULL;
}
{
var158 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var133)->values[0]=var158;
{
var159 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1); /* to_s on <var_t1:MType>*/
}
((struct instance_core__NativeArray*)var133)->values[2]=var159;
{
var160 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2); /* to_s on <var_t2:MType>*/
}
((struct instance_core__NativeArray*)var133)->values[4]=var160;
{
var161 = ((val*(*)(val* self))(var133->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var133); /* native_to_s on <var133:NativeArray[String]>*/
}
varonce132 = var133;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var161); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
{
{ /* Inline separate_compiler$MType$is_tagged (var_t1) on <var_t1:MType> */
var164 = var_t1->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_t1:MType> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
if (var162){
if (unlikely(varonce165==NULL)) {
var166 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "(";
var171 = (val*)(1l<<2|1);
var172 = (val*)(1l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
((struct instance_core__NativeArray*)var166)->values[0]=var168;
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = " == ";
var179 = (val*)(4l<<2|1);
var180 = (val*)(4l<<2|1);
var181 = (val*)((long)(0)<<2|3);
var182 = (val*)((long)(0)<<2|3);
var178 = core__flat___CString___to_s_unsafe(var177, var179, var180, var181, var182);
var176 = var178;
varonce175 = var176;
}
((struct instance_core__NativeArray*)var166)->values[2]=var176;
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = ")";
var187 = (val*)(1l<<2|1);
var188 = (val*)(1l<<2|1);
var189 = (val*)((long)(0)<<2|3);
var190 = (val*)((long)(0)<<2|3);
var186 = core__flat___CString___to_s_unsafe(var185, var187, var188, var189, var190);
var184 = var186;
varonce183 = var184;
}
((struct instance_core__NativeArray*)var166)->values[4]=var184;
} else {
var166 = varonce165;
varonce165 = NULL;
}
{
var191 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value2);
}
((struct instance_core__NativeArray*)var166)->values[1]=var191;
{
{ /* Inline separate_compiler$MType$tag_value (var_t1) on <var_t1:MType> */
var194 = var_t1->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l; /* _tag_value on <var_t1:MType> */
var192 = var194;
RET_LABEL193:(void)0;
}
}
var195 = core__flat___Int___core__abstract_text__Object__to_s(var192);
((struct instance_core__NativeArray*)var166)->values[3]=var195;
{
var196 = ((val*(*)(val* self))(var166->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var166); /* native_to_s on <var166:NativeArray[String]>*/
}
varonce165 = var166;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tests, var196); /* Direct call array$Array$add on <var_tests:Array[String]>*/
}
} else {
if (unlikely(varonce197==NULL)) {
var198 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "class_";
var203 = (val*)(6l<<2|1);
var204 = (val*)(6l<<2|1);
var205 = (val*)((long)(0)<<2|3);
var206 = (val*)((long)(0)<<2|3);
var202 = core__flat___CString___to_s_unsafe(var201, var203, var204, var205, var206);
var200 = var202;
varonce199 = var200;
}
((struct instance_core__NativeArray*)var198)->values[0]=var200;
} else {
var198 = varonce197;
varonce197 = NULL;
}
{
var207 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_t1); /* c_name on <var_t1:MType>*/
}
((struct instance_core__NativeArray*)var198)->values[1]=var207;
{
var208 = ((val*(*)(val* self))(var198->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var198); /* native_to_s on <var198:NativeArray[String]>*/
}
varonce197 = var198;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var208); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce209==NULL)) {
var210 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "(";
var215 = (val*)(1l<<2|1);
var216 = (val*)(1l<<2|1);
var217 = (val*)((long)(0)<<2|3);
var218 = (val*)((long)(0)<<2|3);
var214 = core__flat___CString___to_s_unsafe(var213, var215, var216, var217, var218);
var212 = var214;
varonce211 = var212;
}
((struct instance_core__NativeArray*)var210)->values[0]=var212;
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = " == &class_";
var223 = (val*)(11l<<2|1);
var224 = (val*)(11l<<2|1);
var225 = (val*)((long)(0)<<2|3);
var226 = (val*)((long)(0)<<2|3);
var222 = core__flat___CString___to_s_unsafe(var221, var223, var224, var225, var226);
var220 = var222;
varonce219 = var220;
}
((struct instance_core__NativeArray*)var210)->values[2]=var220;
if (likely(varonce227!=NULL)) {
var228 = varonce227;
} else {
var229 = ")";
var231 = (val*)(1l<<2|1);
var232 = (val*)(1l<<2|1);
var233 = (val*)((long)(0)<<2|3);
var234 = (val*)((long)(0)<<2|3);
var230 = core__flat___CString___to_s_unsafe(var229, var231, var232, var233, var234);
var228 = var230;
varonce227 = var228;
}
((struct instance_core__NativeArray*)var210)->values[4]=var228;
} else {
var210 = varonce209;
varonce209 = NULL;
}
{
var235 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var_value2);
}
((struct instance_core__NativeArray*)var210)->values[1]=var235;
{
var236 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_t1); /* c_name on <var_t1:MType>*/
}
((struct instance_core__NativeArray*)var210)->values[3]=var236;
{
var237 = ((val*(*)(val* self))(var210->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var210); /* native_to_s on <var210:NativeArray[String]>*/
}
varonce209 = var210;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tests, var237); /* Direct call array$Array$add on <var_tests:Array[String]>*/
}
}
}
}
{
var238 = core___core__Collection___not_empty(var_tests);
}
if (var238){
if (unlikely(varonce239==NULL)) {
var240 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "if (";
var245 = (val*)(4l<<2|1);
var246 = (val*)(4l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
((struct instance_core__NativeArray*)var240)->values[0]=var242;
if (likely(varonce249!=NULL)) {
var250 = varonce249;
} else {
var251 = ") {";
var253 = (val*)(3l<<2|1);
var254 = (val*)(3l<<2|1);
var255 = (val*)((long)(0)<<2|3);
var256 = (val*)((long)(0)<<2|3);
var252 = core__flat___CString___to_s_unsafe(var251, var253, var254, var255, var256);
var250 = var252;
varonce249 = var250;
}
((struct instance_core__NativeArray*)var240)->values[2]=var250;
} else {
var240 = varonce239;
varonce239 = NULL;
}
if (likely(varonce257!=NULL)) {
var258 = varonce257;
} else {
var259 = " && ";
var261 = (val*)(4l<<2|1);
var262 = (val*)(4l<<2|1);
var263 = (val*)((long)(0)<<2|3);
var264 = (val*)((long)(0)<<2|3);
var260 = core__flat___CString___to_s_unsafe(var259, var261, var262, var263, var264);
var258 = var260;
varonce257 = var258;
}
{
var265 = core__abstract_text___Collection___join(var_tests, var258, ((val*)NULL));
}
((struct instance_core__NativeArray*)var240)->values[1]=var265;
{
var266 = ((val*(*)(val* self))(var240->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var240); /* native_to_s on <var240:NativeArray[String]>*/
}
varonce239 = var240;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var266); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce267==NULL)) {
var268 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = " = ";
var273 = (val*)(3l<<2|1);
var274 = (val*)(3l<<2|1);
var275 = (val*)((long)(0)<<2|3);
var276 = (val*)((long)(0)<<2|3);
var272 = core__flat___CString___to_s_unsafe(var271, var273, var274, var275, var276);
var270 = var272;
varonce269 = var270;
}
((struct instance_core__NativeArray*)var268)->values[1]=var270;
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = " == ";
var281 = (val*)(4l<<2|1);
var282 = (val*)(4l<<2|1);
var283 = (val*)((long)(0)<<2|3);
var284 = (val*)((long)(0)<<2|3);
var280 = core__flat___CString___to_s_unsafe(var279, var281, var282, var283, var284);
var278 = var280;
varonce277 = var278;
}
((struct instance_core__NativeArray*)var268)->values[3]=var278;
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = ";";
var289 = (val*)(1l<<2|1);
var290 = (val*)(1l<<2|1);
var291 = (val*)((long)(0)<<2|3);
var292 = (val*)((long)(0)<<2|3);
var288 = core__flat___CString___to_s_unsafe(var287, var289, var290, var291, var292);
var286 = var288;
varonce285 = var286;
}
((struct instance_core__NativeArray*)var268)->values[5]=var286;
} else {
var268 = varonce267;
varonce267 = NULL;
}
{
var293 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var268)->values[0]=var293;
{
var294 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value2, var_t1);
}
{
var295 = ((val*(*)(val* self))(var294->class->vft[COLOR_core__abstract_text__Object__to_s]))(var294); /* to_s on <var294:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var268)->values[2]=var295;
{
var296 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var268)->values[4]=var296;
{
var297 = ((val*(*)(val* self))(var268->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var268); /* native_to_s on <var268:NativeArray[String]>*/
}
varonce267 = var268;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var297); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
var298 = core___core__Collection___not_empty(var_tests);
}
if (var298){
if (unlikely(varonce299==NULL)) {
var300 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = "} else ";
var305 = (val*)(7l<<2|1);
var306 = (val*)(7l<<2|1);
var307 = (val*)((long)(0)<<2|3);
var308 = (val*)((long)(0)<<2|3);
var304 = core__flat___CString___to_s_unsafe(var303, var305, var306, var307, var308);
var302 = var304;
varonce301 = var302;
}
((struct instance_core__NativeArray*)var300)->values[0]=var302;
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = " = 0;";
var313 = (val*)(5l<<2|1);
var314 = (val*)(5l<<2|1);
var315 = (val*)((long)(0)<<2|3);
var316 = (val*)((long)(0)<<2|3);
var312 = core__flat___CString___to_s_unsafe(var311, var313, var314, var315, var316);
var310 = var312;
varonce309 = var310;
}
((struct instance_core__NativeArray*)var300)->values[2]=var310;
} else {
var300 = varonce299;
varonce299 = NULL;
}
{
var317 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var300)->values[1]=var317;
{
var318 = ((val*(*)(val* self))(var300->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var300); /* native_to_s on <var300:NativeArray[String]>*/
}
varonce299 = var300;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var318); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
var_maybe_null = 1;
var319 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var319); /* Direct call array$Array$init on <var319:Array[String]>*/
}
var_test = var319;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var322 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var322 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
var_t1323 = var320;
/* <var_t1323:MType> isa MNullableType */
cltype325 = type_nitc__MNullableType.color;
idtype326 = type_nitc__MNullableType.id;
if(cltype325 >= var_t1323->type->table_size) {
var324 = 0;
} else {
var324 = var_t1323->type->type_table[cltype325] == idtype326;
}
if (var324){
if (unlikely(varonce327==NULL)) {
var328 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = " != NULL";
var333 = (val*)(8l<<2|1);
var334 = (val*)(8l<<2|1);
var335 = (val*)((long)(0)<<2|3);
var336 = (val*)((long)(0)<<2|3);
var332 = core__flat___CString___to_s_unsafe(var331, var333, var334, var335, var336);
var330 = var332;
varonce329 = var330;
}
((struct instance_core__NativeArray*)var328)->values[1]=var330;
} else {
var328 = varonce327;
varonce327 = NULL;
}
{
var337 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var328)->values[0]=var337;
{
var338 = ((val*(*)(val* self))(var328->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var328); /* native_to_s on <var328:NativeArray[String]>*/
}
varonce327 = var328;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var338); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
{
{ /* Inline model$MProxyType$mtype (var_t1323) on <var_t1323:MType(MNullableType)> */
var341 = var_t1323->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_t1323:MType(MNullableType)> */
if (unlikely(var341 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var339 = var341;
RET_LABEL340:(void)0;
}
}
var_t1323 = var339;
} else {
var_maybe_null = 0;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var344 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var344 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var342 = var344;
RET_LABEL343:(void)0;
}
}
var_t2345 = var342;
/* <var_t2345:MType> isa MNullableType */
cltype347 = type_nitc__MNullableType.color;
idtype348 = type_nitc__MNullableType.id;
if(cltype347 >= var_t2345->type->table_size) {
var346 = 0;
} else {
var346 = var_t2345->type->type_table[cltype347] == idtype348;
}
if (var346){
if (unlikely(varonce349==NULL)) {
var350 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = " != NULL";
var355 = (val*)(8l<<2|1);
var356 = (val*)(8l<<2|1);
var357 = (val*)((long)(0)<<2|3);
var358 = (val*)((long)(0)<<2|3);
var354 = core__flat___CString___to_s_unsafe(var353, var355, var356, var357, var358);
var352 = var354;
varonce351 = var352;
}
((struct instance_core__NativeArray*)var350)->values[1]=var352;
} else {
var350 = varonce349;
varonce349 = NULL;
}
{
var359 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var350)->values[0]=var359;
{
var360 = ((val*(*)(val* self))(var350->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var350); /* native_to_s on <var350:NativeArray[String]>*/
}
varonce349 = var350;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var360); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
{
{ /* Inline model$MProxyType$mtype (var_t2345) on <var_t2345:MType(MNullableType)> */
var363 = var_t2345->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_t2345:MType(MNullableType)> */
if (unlikely(var363 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var361 = var363;
RET_LABEL362:(void)0;
}
}
var_t2345 = var361;
} else {
var_maybe_null = 0;
}
var_incompatible = 0;
{
var364 = ((short int(*)(val* self))(var_t1323->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_t1323); /* is_c_primitive on <var_t1323:MType>*/
}
if (var364){
var_primitive = var_t1323;
{
{ /* Inline kernel$Object$== (var_t1323,var_t2345) on <var_t1323:MType> */
var_other = var_t2345;
{
{ /* Inline kernel$Object$is_same_instance (var_t1323,var_other) on <var_t1323:MType> */
var369 = var_t1323 == var_other;
var367 = var369;
goto RET_LABEL368;
RET_LABEL368:(void)0;
}
}
var365 = var367;
goto RET_LABEL366;
RET_LABEL366:(void)0;
}
}
if (var365){
} else {
{
var370 = ((short int(*)(val* self))(var_t2345->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_t2345); /* is_c_primitive on <var_t2345:MType>*/
}
if (var370){
var_incompatible = 1;
} else {
{
var371 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value2);
}
if (var371){
{
{ /* Inline separate_compiler$MType$is_tagged (var_t1323) on <var_t1323:MType> */
var374 = var_t1323->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_t1323:MType> */
var372 = var374;
RET_LABEL373:(void)0;
}
}
if (var372){
if (unlikely(varonce375==NULL)) {
var376 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce377!=NULL)) {
var378 = varonce377;
} else {
var379 = " = ";
var381 = (val*)(3l<<2|1);
var382 = (val*)(3l<<2|1);
var383 = (val*)((long)(0)<<2|3);
var384 = (val*)((long)(0)<<2|3);
var380 = core__flat___CString___to_s_unsafe(var379, var381, var382, var383, var384);
var378 = var380;
varonce377 = var378;
}
((struct instance_core__NativeArray*)var376)->values[1]=var378;
if (likely(varonce385!=NULL)) {
var386 = varonce385;
} else {
var387 = " == ";
var389 = (val*)(4l<<2|1);
var390 = (val*)(4l<<2|1);
var391 = (val*)((long)(0)<<2|3);
var392 = (val*)((long)(0)<<2|3);
var388 = core__flat___CString___to_s_unsafe(var387, var389, var390, var391, var392);
var386 = var388;
varonce385 = var386;
}
((struct instance_core__NativeArray*)var376)->values[3]=var386;
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = ";";
var397 = (val*)(1l<<2|1);
var398 = (val*)(1l<<2|1);
var399 = (val*)((long)(0)<<2|3);
var400 = (val*)((long)(0)<<2|3);
var396 = core__flat___CString___to_s_unsafe(var395, var397, var398, var399, var400);
var394 = var396;
varonce393 = var394;
}
((struct instance_core__NativeArray*)var376)->values[5]=var394;
} else {
var376 = varonce375;
varonce375 = NULL;
}
{
var401 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var376)->values[0]=var401;
{
var402 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var376)->values[2]=var402;
{
var403 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var376)->values[4]=var403;
{
var404 = ((val*(*)(val* self))(var376->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var376); /* native_to_s on <var376:NativeArray[String]>*/
}
varonce375 = var376;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var404); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var407 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var407 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var405 = var407;
RET_LABEL406:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var405) on <var405:AbstractCompiler(SeparateCompiler)> */
var410 = var405->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var405:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var410 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var408 = var410;
RET_LABEL409:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var408) on <var408:ModelBuilder> */
var413 = var408->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var408:ModelBuilder> */
if (unlikely(var413 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var411 = var413;
RET_LABEL412:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var411) on <var411:ToolContext> */
var416 = var411->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var411:ToolContext> */
if (unlikely(var416 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var414 = var416;
RET_LABEL415:(void)0;
}
}
{
{ /* Inline opts$Option$value (var414) on <var414:OptionBool> */
var419 = var414->attrs[COLOR_opts__Option___value].val; /* _value on <var414:OptionBool> */
var417 = var419;
RET_LABEL418:(void)0;
}
}
var420 = (short int)((long)(var417)>>2);
var421 = !var420;
if (var421){
if (unlikely(varonce422==NULL)) {
var423 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce424!=NULL)) {
var425 = varonce424;
} else {
var426 = "(!";
var428 = (val*)(2l<<2|1);
var429 = (val*)(2l<<2|1);
var430 = (val*)((long)(0)<<2|3);
var431 = (val*)((long)(0)<<2|3);
var427 = core__flat___CString___to_s_unsafe(var426, var428, var429, var430, var431);
var425 = var427;
varonce424 = var425;
}
((struct instance_core__NativeArray*)var423)->values[0]=var425;
if (likely(varonce432!=NULL)) {
var433 = varonce432;
} else {
var434 = ")";
var436 = (val*)(1l<<2|1);
var437 = (val*)(1l<<2|1);
var438 = (val*)((long)(0)<<2|3);
var439 = (val*)((long)(0)<<2|3);
var435 = core__flat___CString___to_s_unsafe(var434, var436, var437, var438, var439);
var433 = var435;
varonce432 = var433;
}
((struct instance_core__NativeArray*)var423)->values[2]=var433;
} else {
var423 = varonce422;
varonce422 = NULL;
}
{
var440 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value2);
}
((struct instance_core__NativeArray*)var423)->values[1]=var440;
{
var441 = ((val*(*)(val* self))(var423->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var423); /* native_to_s on <var423:NativeArray[String]>*/
}
varonce422 = var423;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var441); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
}
if (unlikely(varonce442==NULL)) {
var443 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce444!=NULL)) {
var445 = varonce444;
} else {
var446 = "->class == ";
var448 = (val*)(11l<<2|1);
var449 = (val*)(11l<<2|1);
var450 = (val*)((long)(0)<<2|3);
var451 = (val*)((long)(0)<<2|3);
var447 = core__flat___CString___to_s_unsafe(var446, var448, var449, var450, var451);
var445 = var447;
varonce444 = var445;
}
((struct instance_core__NativeArray*)var443)->values[1]=var445;
if (likely(varonce452!=NULL)) {
var453 = varonce452;
} else {
var454 = "->class";
var456 = (val*)(7l<<2|1);
var457 = (val*)(7l<<2|1);
var458 = (val*)((long)(0)<<2|3);
var459 = (val*)((long)(0)<<2|3);
var455 = core__flat___CString___to_s_unsafe(var454, var456, var457, var458, var459);
var453 = var455;
varonce452 = var453;
}
((struct instance_core__NativeArray*)var443)->values[3]=var453;
} else {
var443 = varonce442;
varonce442 = NULL;
}
{
var460 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var443)->values[0]=var460;
{
var461 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var443)->values[2]=var461;
{
var462 = ((val*(*)(val* self))(var443->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var443); /* native_to_s on <var443:NativeArray[String]>*/
}
varonce442 = var443;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var462); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
var_incompatible = 1;
}
}
}
} else {
{
var463 = ((short int(*)(val* self))(var_t2345->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_t2345); /* is_c_primitive on <var_t2345:MType>*/
}
if (var463){
var_primitive = var_t2345;
{
var464 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value1);
}
if (var464){
{
{ /* Inline separate_compiler$MType$is_tagged (var_t2345) on <var_t2345:MType> */
var467 = var_t2345->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_t2345:MType> */
var465 = var467;
RET_LABEL466:(void)0;
}
}
if (var465){
if (unlikely(varonce468==NULL)) {
var469 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce470!=NULL)) {
var471 = varonce470;
} else {
var472 = " = ";
var474 = (val*)(3l<<2|1);
var475 = (val*)(3l<<2|1);
var476 = (val*)((long)(0)<<2|3);
var477 = (val*)((long)(0)<<2|3);
var473 = core__flat___CString___to_s_unsafe(var472, var474, var475, var476, var477);
var471 = var473;
varonce470 = var471;
}
((struct instance_core__NativeArray*)var469)->values[1]=var471;
if (likely(varonce478!=NULL)) {
var479 = varonce478;
} else {
var480 = " == ";
var482 = (val*)(4l<<2|1);
var483 = (val*)(4l<<2|1);
var484 = (val*)((long)(0)<<2|3);
var485 = (val*)((long)(0)<<2|3);
var481 = core__flat___CString___to_s_unsafe(var480, var482, var483, var484, var485);
var479 = var481;
varonce478 = var479;
}
((struct instance_core__NativeArray*)var469)->values[3]=var479;
if (likely(varonce486!=NULL)) {
var487 = varonce486;
} else {
var488 = ";";
var490 = (val*)(1l<<2|1);
var491 = (val*)(1l<<2|1);
var492 = (val*)((long)(0)<<2|3);
var493 = (val*)((long)(0)<<2|3);
var489 = core__flat___CString___to_s_unsafe(var488, var490, var491, var492, var493);
var487 = var489;
varonce486 = var487;
}
((struct instance_core__NativeArray*)var469)->values[5]=var487;
} else {
var469 = varonce468;
varonce468 = NULL;
}
{
var494 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var469)->values[0]=var494;
{
var495 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var469)->values[2]=var495;
{
var496 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var469)->values[4]=var496;
{
var497 = ((val*(*)(val* self))(var469->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var469); /* native_to_s on <var469:NativeArray[String]>*/
}
varonce468 = var469;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var497); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var500 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var500 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var498 = var500;
RET_LABEL499:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var498) on <var498:AbstractCompiler(SeparateCompiler)> */
var503 = var498->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var498:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var503 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var501 = var503;
RET_LABEL502:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var501) on <var501:ModelBuilder> */
var506 = var501->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var501:ModelBuilder> */
if (unlikely(var506 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var504 = var506;
RET_LABEL505:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var504) on <var504:ToolContext> */
var509 = var504->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var504:ToolContext> */
if (unlikely(var509 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var507 = var509;
RET_LABEL508:(void)0;
}
}
{
{ /* Inline opts$Option$value (var507) on <var507:OptionBool> */
var512 = var507->attrs[COLOR_opts__Option___value].val; /* _value on <var507:OptionBool> */
var510 = var512;
RET_LABEL511:(void)0;
}
}
var513 = (short int)((long)(var510)>>2);
var514 = !var513;
if (var514){
if (unlikely(varonce515==NULL)) {
var516 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce517!=NULL)) {
var518 = varonce517;
} else {
var519 = "(!";
var521 = (val*)(2l<<2|1);
var522 = (val*)(2l<<2|1);
var523 = (val*)((long)(0)<<2|3);
var524 = (val*)((long)(0)<<2|3);
var520 = core__flat___CString___to_s_unsafe(var519, var521, var522, var523, var524);
var518 = var520;
varonce517 = var518;
}
((struct instance_core__NativeArray*)var516)->values[0]=var518;
if (likely(varonce525!=NULL)) {
var526 = varonce525;
} else {
var527 = ")";
var529 = (val*)(1l<<2|1);
var530 = (val*)(1l<<2|1);
var531 = (val*)((long)(0)<<2|3);
var532 = (val*)((long)(0)<<2|3);
var528 = core__flat___CString___to_s_unsafe(var527, var529, var530, var531, var532);
var526 = var528;
varonce525 = var526;
}
((struct instance_core__NativeArray*)var516)->values[2]=var526;
} else {
var516 = varonce515;
varonce515 = NULL;
}
{
var533 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value1);
}
((struct instance_core__NativeArray*)var516)->values[1]=var533;
{
var534 = ((val*(*)(val* self))(var516->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var516); /* native_to_s on <var516:NativeArray[String]>*/
}
varonce515 = var516;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var534); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
}
if (unlikely(varonce535==NULL)) {
var536 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce537!=NULL)) {
var538 = varonce537;
} else {
var539 = "->class == ";
var541 = (val*)(11l<<2|1);
var542 = (val*)(11l<<2|1);
var543 = (val*)((long)(0)<<2|3);
var544 = (val*)((long)(0)<<2|3);
var540 = core__flat___CString___to_s_unsafe(var539, var541, var542, var543, var544);
var538 = var540;
varonce537 = var538;
}
((struct instance_core__NativeArray*)var536)->values[1]=var538;
if (likely(varonce545!=NULL)) {
var546 = varonce545;
} else {
var547 = "->class";
var549 = (val*)(7l<<2|1);
var550 = (val*)(7l<<2|1);
var551 = (val*)((long)(0)<<2|3);
var552 = (val*)((long)(0)<<2|3);
var548 = core__flat___CString___to_s_unsafe(var547, var549, var550, var551, var552);
var546 = var548;
varonce545 = var546;
}
((struct instance_core__NativeArray*)var536)->values[3]=var546;
} else {
var536 = varonce535;
varonce535 = NULL;
}
{
var553 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var536)->values[0]=var553;
{
var554 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var536)->values[2]=var554;
{
var555 = ((val*(*)(val* self))(var536->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var536); /* native_to_s on <var536:NativeArray[String]>*/
}
varonce535 = var536;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var555); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
var_incompatible = 1;
}
} else {
var_primitive = ((val*)NULL);
}
}
if (var_incompatible){
if (var_maybe_null){
if (unlikely(varonce556==NULL)) {
var557 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce558!=NULL)) {
var559 = varonce558;
} else {
var560 = " = ";
var562 = (val*)(3l<<2|1);
var563 = (val*)(3l<<2|1);
var564 = (val*)((long)(0)<<2|3);
var565 = (val*)((long)(0)<<2|3);
var561 = core__flat___CString___to_s_unsafe(var560, var562, var563, var564, var565);
var559 = var561;
varonce558 = var559;
}
((struct instance_core__NativeArray*)var557)->values[1]=var559;
if (likely(varonce566!=NULL)) {
var567 = varonce566;
} else {
var568 = " == ";
var570 = (val*)(4l<<2|1);
var571 = (val*)(4l<<2|1);
var572 = (val*)((long)(0)<<2|3);
var573 = (val*)((long)(0)<<2|3);
var569 = core__flat___CString___to_s_unsafe(var568, var570, var571, var572, var573);
var567 = var569;
varonce566 = var567;
}
((struct instance_core__NativeArray*)var557)->values[3]=var567;
if (likely(varonce574!=NULL)) {
var575 = varonce574;
} else {
var576 = "; /* incompatible types ";
var578 = (val*)(24l<<2|1);
var579 = (val*)(24l<<2|1);
var580 = (val*)((long)(0)<<2|3);
var581 = (val*)((long)(0)<<2|3);
var577 = core__flat___CString___to_s_unsafe(var576, var578, var579, var580, var581);
var575 = var577;
varonce574 = var575;
}
((struct instance_core__NativeArray*)var557)->values[5]=var575;
if (likely(varonce582!=NULL)) {
var583 = varonce582;
} else {
var584 = " vs. ";
var586 = (val*)(5l<<2|1);
var587 = (val*)(5l<<2|1);
var588 = (val*)((long)(0)<<2|3);
var589 = (val*)((long)(0)<<2|3);
var585 = core__flat___CString___to_s_unsafe(var584, var586, var587, var588, var589);
var583 = var585;
varonce582 = var583;
}
((struct instance_core__NativeArray*)var557)->values[7]=var583;
if (likely(varonce590!=NULL)) {
var591 = varonce590;
} else {
var592 = "; but may be NULL*/";
var594 = (val*)(19l<<2|1);
var595 = (val*)(19l<<2|1);
var596 = (val*)((long)(0)<<2|3);
var597 = (val*)((long)(0)<<2|3);
var593 = core__flat___CString___to_s_unsafe(var592, var594, var595, var596, var597);
var591 = var593;
varonce590 = var591;
}
((struct instance_core__NativeArray*)var557)->values[9]=var591;
} else {
var557 = varonce556;
varonce556 = NULL;
}
{
var598 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var557)->values[0]=var598;
{
var599 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var557)->values[2]=var599;
{
var600 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var557)->values[4]=var600;
{
var601 = ((val*(*)(val* self))(var_t1323->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1323); /* to_s on <var_t1323:MType>*/
}
((struct instance_core__NativeArray*)var557)->values[6]=var601;
{
var602 = ((val*(*)(val* self))(var_t2345->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2345); /* to_s on <var_t2345:MType>*/
}
((struct instance_core__NativeArray*)var557)->values[8]=var602;
{
var603 = ((val*(*)(val* self))(var557->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var557); /* native_to_s on <var557:NativeArray[String]>*/
}
varonce556 = var557;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var603); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
if (unlikely(varonce604==NULL)) {
var605 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce606!=NULL)) {
var607 = varonce606;
} else {
var608 = " = 0; /* incompatible types ";
var610 = (val*)(28l<<2|1);
var611 = (val*)(28l<<2|1);
var612 = (val*)((long)(0)<<2|3);
var613 = (val*)((long)(0)<<2|3);
var609 = core__flat___CString___to_s_unsafe(var608, var610, var611, var612, var613);
var607 = var609;
varonce606 = var607;
}
((struct instance_core__NativeArray*)var605)->values[1]=var607;
if (likely(varonce614!=NULL)) {
var615 = varonce614;
} else {
var616 = " vs. ";
var618 = (val*)(5l<<2|1);
var619 = (val*)(5l<<2|1);
var620 = (val*)((long)(0)<<2|3);
var621 = (val*)((long)(0)<<2|3);
var617 = core__flat___CString___to_s_unsafe(var616, var618, var619, var620, var621);
var615 = var617;
varonce614 = var615;
}
((struct instance_core__NativeArray*)var605)->values[3]=var615;
if (likely(varonce622!=NULL)) {
var623 = varonce622;
} else {
var624 = "; cannot be NULL */";
var626 = (val*)(19l<<2|1);
var627 = (val*)(19l<<2|1);
var628 = (val*)((long)(0)<<2|3);
var629 = (val*)((long)(0)<<2|3);
var625 = core__flat___CString___to_s_unsafe(var624, var626, var627, var628, var629);
var623 = var625;
varonce622 = var623;
}
((struct instance_core__NativeArray*)var605)->values[5]=var623;
} else {
var605 = varonce604;
varonce604 = NULL;
}
{
var630 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var605)->values[0]=var630;
{
var631 = ((val*(*)(val* self))(var_t1323->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1323); /* to_s on <var_t1323:MType>*/
}
((struct instance_core__NativeArray*)var605)->values[2]=var631;
{
var632 = ((val*(*)(val* self))(var_t2345->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2345); /* to_s on <var_t2345:MType>*/
}
((struct instance_core__NativeArray*)var605)->values[4]=var632;
{
var633 = ((val*(*)(val* self))(var605->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var605); /* native_to_s on <var605:NativeArray[String]>*/
}
varonce604 = var605;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var633); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
} else {
}
if (var_primitive == NULL) {
var634 = 0; /* is null */
} else {
var634 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_primitive,((val*)NULL)) on <var_primitive:nullable Object(nullable MType)> */
var_other637 = ((val*)NULL);
{
var638 = ((short int(*)(val* self, val* p0))(var_primitive->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_primitive, var_other637); /* == on <var_primitive:nullable Object(MType)>*/
}
var639 = !var638;
var635 = var639;
goto RET_LABEL636;
RET_LABEL636:(void)0;
}
var634 = var635;
}
if (var634){
{
{ /* Inline separate_compiler$MType$is_tagged (var_primitive) on <var_primitive:nullable Object(MType)> */
var642 = var_primitive->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_primitive:nullable Object(MType)> */
var640 = var642;
RET_LABEL641:(void)0;
}
}
if (var640){
if (unlikely(varonce643==NULL)) {
var644 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce645!=NULL)) {
var646 = varonce645;
} else {
var647 = " = ";
var649 = (val*)(3l<<2|1);
var650 = (val*)(3l<<2|1);
var651 = (val*)((long)(0)<<2|3);
var652 = (val*)((long)(0)<<2|3);
var648 = core__flat___CString___to_s_unsafe(var647, var649, var650, var651, var652);
var646 = var648;
varonce645 = var646;
}
((struct instance_core__NativeArray*)var644)->values[1]=var646;
if (likely(varonce653!=NULL)) {
var654 = varonce653;
} else {
var655 = " == ";
var657 = (val*)(4l<<2|1);
var658 = (val*)(4l<<2|1);
var659 = (val*)((long)(0)<<2|3);
var660 = (val*)((long)(0)<<2|3);
var656 = core__flat___CString___to_s_unsafe(var655, var657, var658, var659, var660);
var654 = var656;
varonce653 = var654;
}
((struct instance_core__NativeArray*)var644)->values[3]=var654;
if (likely(varonce661!=NULL)) {
var662 = varonce661;
} else {
var663 = ";";
var665 = (val*)(1l<<2|1);
var666 = (val*)(1l<<2|1);
var667 = (val*)((long)(0)<<2|3);
var668 = (val*)((long)(0)<<2|3);
var664 = core__flat___CString___to_s_unsafe(var663, var665, var666, var667, var668);
var662 = var664;
varonce661 = var662;
}
((struct instance_core__NativeArray*)var644)->values[5]=var662;
} else {
var644 = varonce643;
varonce643 = NULL;
}
{
var669 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var644)->values[0]=var669;
{
var670 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var644)->values[2]=var670;
{
var671 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var644)->values[4]=var671;
{
var672 = ((val*(*)(val* self))(var644->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var644); /* native_to_s on <var644:NativeArray[String]>*/
}
varonce643 = var644;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var672); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce673==NULL)) {
var674 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce675!=NULL)) {
var676 = varonce675;
} else {
var677 = "((struct instance_";
var679 = (val*)(18l<<2|1);
var680 = (val*)(18l<<2|1);
var681 = (val*)((long)(0)<<2|3);
var682 = (val*)((long)(0)<<2|3);
var678 = core__flat___CString___to_s_unsafe(var677, var679, var680, var681, var682);
var676 = var678;
varonce675 = var676;
}
((struct instance_core__NativeArray*)var674)->values[0]=var676;
if (likely(varonce683!=NULL)) {
var684 = varonce683;
} else {
var685 = "*)";
var687 = (val*)(2l<<2|1);
var688 = (val*)(2l<<2|1);
var689 = (val*)((long)(0)<<2|3);
var690 = (val*)((long)(0)<<2|3);
var686 = core__flat___CString___to_s_unsafe(var685, var687, var688, var689, var690);
var684 = var686;
varonce683 = var684;
}
((struct instance_core__NativeArray*)var674)->values[2]=var684;
if (likely(varonce691!=NULL)) {
var692 = varonce691;
} else {
var693 = ")->value == ((struct instance_";
var695 = (val*)(30l<<2|1);
var696 = (val*)(30l<<2|1);
var697 = (val*)((long)(0)<<2|3);
var698 = (val*)((long)(0)<<2|3);
var694 = core__flat___CString___to_s_unsafe(var693, var695, var696, var697, var698);
var692 = var694;
varonce691 = var692;
}
((struct instance_core__NativeArray*)var674)->values[4]=var692;
if (likely(varonce699!=NULL)) {
var700 = varonce699;
} else {
var701 = "*)";
var703 = (val*)(2l<<2|1);
var704 = (val*)(2l<<2|1);
var705 = (val*)((long)(0)<<2|3);
var706 = (val*)((long)(0)<<2|3);
var702 = core__flat___CString___to_s_unsafe(var701, var703, var704, var705, var706);
var700 = var702;
varonce699 = var700;
}
((struct instance_core__NativeArray*)var674)->values[6]=var700;
if (likely(varonce707!=NULL)) {
var708 = varonce707;
} else {
var709 = ")->value";
var711 = (val*)(8l<<2|1);
var712 = (val*)(8l<<2|1);
var713 = (val*)((long)(0)<<2|3);
var714 = (val*)((long)(0)<<2|3);
var710 = core__flat___CString___to_s_unsafe(var709, var711, var712, var713, var714);
var708 = var710;
varonce707 = var708;
}
((struct instance_core__NativeArray*)var674)->values[8]=var708;
} else {
var674 = varonce673;
varonce673 = NULL;
}
{
var715 = ((val*(*)(val* self))(var_primitive->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_primitive); /* c_name on <var_primitive:nullable Object(MType)>*/
}
((struct instance_core__NativeArray*)var674)->values[1]=var715;
{
var716 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var674)->values[3]=var716;
{
var717 = ((val*(*)(val* self))(var_primitive->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_primitive); /* c_name on <var_primitive:nullable Object(MType)>*/
}
((struct instance_core__NativeArray*)var674)->values[5]=var717;
{
var718 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var674)->values[7]=var718;
{
var719 = ((val*(*)(val* self))(var674->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var674); /* native_to_s on <var674:NativeArray[String]>*/
}
varonce673 = var674;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var719); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
{
var721 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value1);
}
var_722 = var721;
if (var721){
{
var723 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value2);
}
var720 = var723;
} else {
var720 = var_722;
}
if (var720){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var726 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var726 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var724 = var726;
RET_LABEL725:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var724) on <var724:AbstractCompiler(SeparateCompiler)> */
var729 = var724->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var724:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var729 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var727 = var729;
RET_LABEL728:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var727) on <var727:ModelBuilder> */
var732 = var727->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var727:ModelBuilder> */
if (unlikely(var732 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var730 = var732;
RET_LABEL731:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var730) on <var730:ToolContext> */
var735 = var730->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var730:ToolContext> */
if (unlikely(var735 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var733 = var735;
RET_LABEL734:(void)0;
}
}
{
{ /* Inline opts$Option$value (var733) on <var733:OptionBool> */
var738 = var733->attrs[COLOR_opts__Option___value].val; /* _value on <var733:OptionBool> */
var736 = var738;
RET_LABEL737:(void)0;
}
}
var739 = (short int)((long)(var736)>>2);
var740 = !var739;
if (var740){
if (unlikely(varonce741==NULL)) {
var742 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce743!=NULL)) {
var744 = varonce743;
} else {
var745 = "(!";
var747 = (val*)(2l<<2|1);
var748 = (val*)(2l<<2|1);
var749 = (val*)((long)(0)<<2|3);
var750 = (val*)((long)(0)<<2|3);
var746 = core__flat___CString___to_s_unsafe(var745, var747, var748, var749, var750);
var744 = var746;
varonce743 = var744;
}
((struct instance_core__NativeArray*)var742)->values[0]=var744;
if (likely(varonce751!=NULL)) {
var752 = varonce751;
} else {
var753 = ") && (!";
var755 = (val*)(7l<<2|1);
var756 = (val*)(7l<<2|1);
var757 = (val*)((long)(0)<<2|3);
var758 = (val*)((long)(0)<<2|3);
var754 = core__flat___CString___to_s_unsafe(var753, var755, var756, var757, var758);
var752 = var754;
varonce751 = var752;
}
((struct instance_core__NativeArray*)var742)->values[2]=var752;
if (likely(varonce759!=NULL)) {
var760 = varonce759;
} else {
var761 = ")";
var763 = (val*)(1l<<2|1);
var764 = (val*)(1l<<2|1);
var765 = (val*)((long)(0)<<2|3);
var766 = (val*)((long)(0)<<2|3);
var762 = core__flat___CString___to_s_unsafe(var761, var763, var764, var765, var766);
var760 = var762;
varonce759 = var760;
}
((struct instance_core__NativeArray*)var742)->values[4]=var760;
} else {
var742 = varonce741;
varonce741 = NULL;
}
{
var767 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value1);
}
((struct instance_core__NativeArray*)var742)->values[1]=var767;
{
var768 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value2);
}
((struct instance_core__NativeArray*)var742)->values[3]=var768;
{
var769 = ((val*(*)(val* self))(var742->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var742); /* native_to_s on <var742:NativeArray[String]>*/
}
varonce741 = var742;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var769); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
}
if (unlikely(varonce770==NULL)) {
var771 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce772!=NULL)) {
var773 = varonce772;
} else {
var774 = "->class == ";
var776 = (val*)(11l<<2|1);
var777 = (val*)(11l<<2|1);
var778 = (val*)((long)(0)<<2|3);
var779 = (val*)((long)(0)<<2|3);
var775 = core__flat___CString___to_s_unsafe(var774, var776, var777, var778, var779);
var773 = var775;
varonce772 = var773;
}
((struct instance_core__NativeArray*)var771)->values[1]=var773;
if (likely(varonce780!=NULL)) {
var781 = varonce780;
} else {
var782 = "->class";
var784 = (val*)(7l<<2|1);
var785 = (val*)(7l<<2|1);
var786 = (val*)((long)(0)<<2|3);
var787 = (val*)((long)(0)<<2|3);
var783 = core__flat___CString___to_s_unsafe(var782, var784, var785, var786, var787);
var781 = var783;
varonce780 = var781;
}
((struct instance_core__NativeArray*)var771)->values[3]=var781;
} else {
var771 = varonce770;
varonce770 = NULL;
}
{
var788 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var771)->values[0]=var788;
{
var789 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var771)->values[2]=var789;
{
var790 = ((val*(*)(val* self))(var771->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var771); /* native_to_s on <var771:NativeArray[String]>*/
}
varonce770 = var771;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var790); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
var791 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var791); /* Direct call array$Array$init on <var791:Array[String]>*/
}
var_s = var791;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var794 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var794 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var792 = var794;
RET_LABEL793:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$box_kinds (var792) on <var792:AbstractCompiler(SeparateCompiler)> */
var797 = var792->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <var792:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var797 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 264);
fatal_exit(1);
}
var795 = var797;
RET_LABEL796:(void)0;
}
}
var_798 = var795;
{
var799 = core___core__HashMap___core__abstract_collection__MapRead__iterator(var_798);
}
var_800 = var799;
for(;;) {
{
var801 = ((short int(*)(val* self))((((long)var_800&3)?class_info[((long)var_800&3)]:var_800->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_800); /* is_ok on <var_800:MapIterator[MClass, Int]>*/
}
if (var801){
} else {
goto BREAK_label;
}
{
var802 = ((val*(*)(val* self))((((long)var_800&3)?class_info[((long)var_800&3)]:var_800->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_800); /* key on <var_800:MapIterator[MClass, Int]>*/
}
var_t = var802;
{
var803 = ((val*(*)(val* self))((((long)var_800&3)?class_info[((long)var_800&3)]:var_800->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_800); /* item on <var_800:MapIterator[MClass, Int]>*/
}
var804 = (long)(var803)>>2;
var_v = var804;
{
{ /* Inline model$MClass$mclass_type (var_t) on <var_t:MClass> */
var807 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var807 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var805 = var807;
RET_LABEL806:(void)0;
}
}
{
{ /* Inline separate_compiler$MType$is_tagged (var805) on <var805:MClassType> */
var810 = var805->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var805:MClassType> */
var808 = var810;
RET_LABEL809:(void)0;
}
}
if (var808){
goto BREAK_label811;
} else {
}
if (unlikely(varonce812==NULL)) {
var813 = NEW_core__NativeArray((int)13l, &type_core__NativeArray__core__String);
if (likely(varonce814!=NULL)) {
var815 = varonce814;
} else {
var816 = "(";
var818 = (val*)(1l<<2|1);
var819 = (val*)(1l<<2|1);
var820 = (val*)((long)(0)<<2|3);
var821 = (val*)((long)(0)<<2|3);
var817 = core__flat___CString___to_s_unsafe(var816, var818, var819, var820, var821);
var815 = var817;
varonce814 = var815;
}
((struct instance_core__NativeArray*)var813)->values[0]=var815;
if (likely(varonce822!=NULL)) {
var823 = varonce822;
} else {
var824 = "->class->box_kind == ";
var826 = (val*)(21l<<2|1);
var827 = (val*)(21l<<2|1);
var828 = (val*)((long)(0)<<2|3);
var829 = (val*)((long)(0)<<2|3);
var825 = core__flat___CString___to_s_unsafe(var824, var826, var827, var828, var829);
var823 = var825;
varonce822 = var823;
}
((struct instance_core__NativeArray*)var813)->values[2]=var823;
if (likely(varonce830!=NULL)) {
var831 = varonce830;
} else {
var832 = " && ((struct instance_";
var834 = (val*)(22l<<2|1);
var835 = (val*)(22l<<2|1);
var836 = (val*)((long)(0)<<2|3);
var837 = (val*)((long)(0)<<2|3);
var833 = core__flat___CString___to_s_unsafe(var832, var834, var835, var836, var837);
var831 = var833;
varonce830 = var831;
}
((struct instance_core__NativeArray*)var813)->values[4]=var831;
if (likely(varonce838!=NULL)) {
var839 = varonce838;
} else {
var840 = "*)";
var842 = (val*)(2l<<2|1);
var843 = (val*)(2l<<2|1);
var844 = (val*)((long)(0)<<2|3);
var845 = (val*)((long)(0)<<2|3);
var841 = core__flat___CString___to_s_unsafe(var840, var842, var843, var844, var845);
var839 = var841;
varonce838 = var839;
}
((struct instance_core__NativeArray*)var813)->values[6]=var839;
if (likely(varonce846!=NULL)) {
var847 = varonce846;
} else {
var848 = ")->value == ((struct instance_";
var850 = (val*)(30l<<2|1);
var851 = (val*)(30l<<2|1);
var852 = (val*)((long)(0)<<2|3);
var853 = (val*)((long)(0)<<2|3);
var849 = core__flat___CString___to_s_unsafe(var848, var850, var851, var852, var853);
var847 = var849;
varonce846 = var847;
}
((struct instance_core__NativeArray*)var813)->values[8]=var847;
if (likely(varonce854!=NULL)) {
var855 = varonce854;
} else {
var856 = "*)";
var858 = (val*)(2l<<2|1);
var859 = (val*)(2l<<2|1);
var860 = (val*)((long)(0)<<2|3);
var861 = (val*)((long)(0)<<2|3);
var857 = core__flat___CString___to_s_unsafe(var856, var858, var859, var860, var861);
var855 = var857;
varonce854 = var855;
}
((struct instance_core__NativeArray*)var813)->values[10]=var855;
if (likely(varonce862!=NULL)) {
var863 = varonce862;
} else {
var864 = ")->value)";
var866 = (val*)(9l<<2|1);
var867 = (val*)(9l<<2|1);
var868 = (val*)((long)(0)<<2|3);
var869 = (val*)((long)(0)<<2|3);
var865 = core__flat___CString___to_s_unsafe(var864, var866, var867, var868, var869);
var863 = var865;
varonce862 = var863;
}
((struct instance_core__NativeArray*)var813)->values[12]=var863;
} else {
var813 = varonce812;
varonce812 = NULL;
}
{
var870 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var813)->values[1]=var870;
var871 = core__flat___Int___core__abstract_text__Object__to_s(var_v);
((struct instance_core__NativeArray*)var813)->values[3]=var871;
{
var872 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_t);
}
((struct instance_core__NativeArray*)var813)->values[5]=var872;
{
var873 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var813)->values[7]=var873;
{
var874 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_t);
}
((struct instance_core__NativeArray*)var813)->values[9]=var874;
{
var875 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var813)->values[11]=var875;
{
var876 = ((val*(*)(val* self))(var813->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var813); /* native_to_s on <var813:NativeArray[String]>*/
}
varonce812 = var813;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_s, var876); /* Direct call array$Array$add on <var_s:Array[String]>*/
}
BREAK_label811: (void)0;
{
((void(*)(val* self))((((long)var_800&3)?class_info[((long)var_800&3)]:var_800->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_800); /* next on <var_800:MapIterator[MClass, Int]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_800) on <var_800:MapIterator[MClass, Int]> */
RET_LABEL877:(void)0;
}
}
{
var878 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_s);
}
if (var878){
if (unlikely(varonce879==NULL)) {
var880 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce881!=NULL)) {
var882 = varonce881;
} else {
var883 = " = ";
var885 = (val*)(3l<<2|1);
var886 = (val*)(3l<<2|1);
var887 = (val*)((long)(0)<<2|3);
var888 = (val*)((long)(0)<<2|3);
var884 = core__flat___CString___to_s_unsafe(var883, var885, var886, var887, var888);
var882 = var884;
varonce881 = var882;
}
((struct instance_core__NativeArray*)var880)->values[1]=var882;
if (likely(varonce889!=NULL)) {
var890 = varonce889;
} else {
var891 = " == ";
var893 = (val*)(4l<<2|1);
var894 = (val*)(4l<<2|1);
var895 = (val*)((long)(0)<<2|3);
var896 = (val*)((long)(0)<<2|3);
var892 = core__flat___CString___to_s_unsafe(var891, var893, var894, var895, var896);
var890 = var892;
varonce889 = var890;
}
((struct instance_core__NativeArray*)var880)->values[3]=var890;
if (likely(varonce897!=NULL)) {
var898 = varonce897;
} else {
var899 = ";";
var901 = (val*)(1l<<2|1);
var902 = (val*)(1l<<2|1);
var903 = (val*)((long)(0)<<2|3);
var904 = (val*)((long)(0)<<2|3);
var900 = core__flat___CString___to_s_unsafe(var899, var901, var902, var903, var904);
var898 = var900;
varonce897 = var898;
}
((struct instance_core__NativeArray*)var880)->values[5]=var898;
} else {
var880 = varonce879;
varonce879 = NULL;
}
{
var905 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var880)->values[0]=var905;
{
var906 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var880)->values[2]=var906;
{
var907 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var880)->values[4]=var907;
{
var908 = ((val*(*)(val* self))(var880->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var880); /* native_to_s on <var880:NativeArray[String]>*/
}
varonce879 = var880;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var908); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce909==NULL)) {
var910 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce911!=NULL)) {
var912 = varonce911;
} else {
var913 = "(";
var915 = (val*)(1l<<2|1);
var916 = (val*)(1l<<2|1);
var917 = (val*)((long)(0)<<2|3);
var918 = (val*)((long)(0)<<2|3);
var914 = core__flat___CString___to_s_unsafe(var913, var915, var916, var917, var918);
var912 = var914;
varonce911 = var912;
}
((struct instance_core__NativeArray*)var910)->values[0]=var912;
if (likely(varonce919!=NULL)) {
var920 = varonce919;
} else {
var921 = ")";
var923 = (val*)(1l<<2|1);
var924 = (val*)(1l<<2|1);
var925 = (val*)((long)(0)<<2|3);
var926 = (val*)((long)(0)<<2|3);
var922 = core__flat___CString___to_s_unsafe(var921, var923, var924, var925, var926);
var920 = var922;
varonce919 = var920;
}
((struct instance_core__NativeArray*)var910)->values[2]=var920;
} else {
var910 = varonce909;
varonce909 = NULL;
}
if (likely(varonce927!=NULL)) {
var928 = varonce927;
} else {
var929 = " || ";
var931 = (val*)(4l<<2|1);
var932 = (val*)(4l<<2|1);
var933 = (val*)((long)(0)<<2|3);
var934 = (val*)((long)(0)<<2|3);
var930 = core__flat___CString___to_s_unsafe(var929, var931, var932, var933, var934);
var928 = var930;
varonce927 = var928;
}
{
var935 = core__abstract_text___Collection___join(var_s, var928, ((val*)NULL));
}
((struct instance_core__NativeArray*)var910)->values[1]=var935;
{
var936 = ((val*(*)(val* self))(var910->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var910); /* native_to_s on <var910:NativeArray[String]>*/
}
varonce909 = var910;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var936); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
if (unlikely(varonce937==NULL)) {
var938 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce939!=NULL)) {
var940 = varonce939;
} else {
var941 = " = ";
var943 = (val*)(3l<<2|1);
var944 = (val*)(3l<<2|1);
var945 = (val*)((long)(0)<<2|3);
var946 = (val*)((long)(0)<<2|3);
var942 = core__flat___CString___to_s_unsafe(var941, var943, var944, var945, var946);
var940 = var942;
varonce939 = var940;
}
((struct instance_core__NativeArray*)var938)->values[1]=var940;
if (likely(varonce947!=NULL)) {
var948 = varonce947;
} else {
var949 = " == ";
var951 = (val*)(4l<<2|1);
var952 = (val*)(4l<<2|1);
var953 = (val*)((long)(0)<<2|3);
var954 = (val*)((long)(0)<<2|3);
var950 = core__flat___CString___to_s_unsafe(var949, var951, var952, var953, var954);
var948 = var950;
varonce947 = var948;
}
((struct instance_core__NativeArray*)var938)->values[3]=var948;
if (likely(varonce955!=NULL)) {
var956 = varonce955;
} else {
var957 = ";";
var959 = (val*)(1l<<2|1);
var960 = (val*)(1l<<2|1);
var961 = (val*)((long)(0)<<2|3);
var962 = (val*)((long)(0)<<2|3);
var958 = core__flat___CString___to_s_unsafe(var957, var959, var960, var961, var962);
var956 = var958;
varonce955 = var956;
}
((struct instance_core__NativeArray*)var938)->values[5]=var956;
} else {
var938 = varonce937;
varonce937 = NULL;
}
{
var963 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var938)->values[0]=var963;
{
var964 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var938)->values[2]=var964;
{
var965 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var938)->values[4]=var965;
{
var966 = ((val*(*)(val* self))(var938->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var938); /* native_to_s on <var938:NativeArray[String]>*/
}
varonce937 = var938;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var966); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
}
if (unlikely(varonce967==NULL)) {
var968 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce969!=NULL)) {
var970 = varonce969;
} else {
var971 = " = ";
var973 = (val*)(3l<<2|1);
var974 = (val*)(3l<<2|1);
var975 = (val*)((long)(0)<<2|3);
var976 = (val*)((long)(0)<<2|3);
var972 = core__flat___CString___to_s_unsafe(var971, var973, var974, var975, var976);
var970 = var972;
varonce969 = var970;
}
((struct instance_core__NativeArray*)var968)->values[1]=var970;
if (likely(varonce977!=NULL)) {
var978 = varonce977;
} else {
var979 = " == ";
var981 = (val*)(4l<<2|1);
var982 = (val*)(4l<<2|1);
var983 = (val*)((long)(0)<<2|3);
var984 = (val*)((long)(0)<<2|3);
var980 = core__flat___CString___to_s_unsafe(var979, var981, var982, var983, var984);
var978 = var980;
varonce977 = var978;
}
((struct instance_core__NativeArray*)var968)->values[3]=var978;
if (likely(varonce985!=NULL)) {
var986 = varonce985;
} else {
var987 = " || (";
var989 = (val*)(5l<<2|1);
var990 = (val*)(5l<<2|1);
var991 = (val*)((long)(0)<<2|3);
var992 = (val*)((long)(0)<<2|3);
var988 = core__flat___CString___to_s_unsafe(var987, var989, var990, var991, var992);
var986 = var988;
varonce985 = var986;
}
((struct instance_core__NativeArray*)var968)->values[5]=var986;
if (likely(varonce993!=NULL)) {
var994 = varonce993;
} else {
var995 = ");";
var997 = (val*)(2l<<2|1);
var998 = (val*)(2l<<2|1);
var999 = (val*)((long)(0)<<2|3);
var1000 = (val*)((long)(0)<<2|3);
var996 = core__flat___CString___to_s_unsafe(var995, var997, var998, var999, var1000);
var994 = var996;
varonce993 = var994;
}
((struct instance_core__NativeArray*)var968)->values[7]=var994;
} else {
var968 = varonce967;
varonce967 = NULL;
}
{
var1001 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var968)->values[0]=var1001;
{
var1002 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var968)->values[2]=var1002;
{
var1003 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var968)->values[4]=var1003;
if (likely(varonce1004!=NULL)) {
var1005 = varonce1004;
} else {
var1006 = " && ";
var1008 = (val*)(4l<<2|1);
var1009 = (val*)(4l<<2|1);
var1010 = (val*)((long)(0)<<2|3);
var1011 = (val*)((long)(0)<<2|3);
var1007 = core__flat___CString___to_s_unsafe(var1006, var1008, var1009, var1010, var1011);
var1005 = var1007;
varonce1004 = var1005;
}
{
var1012 = core__abstract_text___Collection___join(var_test, var1005, ((val*)NULL));
}
((struct instance_core__NativeArray*)var968)->values[6]=var1012;
{
var1013 = ((val*(*)(val* self))(var968->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var968); /* native_to_s on <var968:NativeArray[String]>*/
}
varonce967 = var968;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var1013); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$can_be_primitive for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int nitc___nitc__SeparateCompilerVisitor___can_be_primitive(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
val* var_t /* var t: MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
val* var7 /* : MClass */;
val* var9 /* : MClass */;
val* var10 /* : MClassKind */;
val* var12 /* : MClassKind */;
val* var_k /* var k: MClassKind */;
short int var13 /* : Bool */;
val* var14 /* : Sys */;
val* var15 /* : MClassKind */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
short int var21 /* : Bool */;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__model__MType__undecorate]))(var1); /* undecorate on <var1:MType>*/
}
var_t = var4;
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var5 = 0;
} else {
var5 = var_t->type->type_table[cltype] == idtype;
}
var6 = !var5;
if (var6){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassType$mclass (var_t) on <var_t:MType(MClassType)> */
var9 = var_t->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_t:MType(MClassType)> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var7) on <var7:MClass> */
var12 = var7->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var7:MClass> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_k = var10;
var14 = glob_sys;
{
var15 = nitc__model___core__Sys___interface_kind(var14);
}
{
{ /* Inline kernel$Object$== (var_k,var15) on <var_k:MClassKind> */
var_other = var15;
{
{ /* Inline kernel$Object$is_same_instance (var_k,var_other) on <var_k:MClassKind> */
var20 = var_k == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_ = var16;
if (var16){
var13 = var_;
} else {
{
var21 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_t);
}
var13 = var21;
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$maybe_null for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int nitc___nitc__SeparateCompilerVisitor___maybe_null(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_t /* var t: MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_t = var1;
/* <var_t:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_t->type->table_size) {
var5 = 0;
} else {
var5 = var_t->type->type_table[cltype] == idtype;
}
var_ = var5;
if (var5){
var4 = var_;
} else {
/* <var_t:MType> isa MNullType */
cltype7 = type_nitc__MNullType.color;
idtype8 = type_nitc__MNullType.id;
if(cltype7 >= var_t->type->table_size) {
var6 = 0;
} else {
var6 = var_t->type->type_table[cltype7] == idtype8;
}
var4 = var6;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$array_instance for (self: SeparateCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : MModule */;
val* var2 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var3 /* : MModule */;
val* var4 /* : MClass */;
val* var_arrayclass /* var arrayclass: MClass */;
val* var5 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var6 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var7 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : String */;
long var36 /* : Int */;
long var38 /* : Int */;
val* var39 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
val* var40 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
long var_i /* var i: Int */;
long var41 /* : Int */;
long var43 /* : Int */;
long var_44 /* var : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var50 /* : MClassType */;
val* var51 /* : RuntimeVariable */;
val* var_r /* var r: RuntimeVariable */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Bool */;
val* var93 /* : nullable Bool */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var98 /* : String */;
long var99 /* : Int */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Bool */;
val* var107 /* : nullable Bool */;
val* var108 /* : MClassDef */;
val* var110 /* : MClassDef */;
val* var111 /* : MClassType */;
val* var113 /* : MClassType */;
val* var114 /* : MMethod */;
val* var115 /* : Array[RuntimeVariable] */;
val* var_116 /* var : Array[RuntimeVariable] */;
val* var117 /* : nullable RuntimeVariable */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Bool */;
val* var125 /* : nullable Bool */;
var_array = p0;
var_elttype = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___native_array_class(var1);
}
var_nclass = var2;
{
var3 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var4 = nitc__model___MModule___array_class(var3);
}
var_arrayclass = var4;
var5 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var5, 1l); /* Direct call array$Array$with_capacity on <var5:Array[MType]>*/
}
var_ = var5;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_elttype); /* Direct call array$AbstractArray$push on <var_:Array[MType]>*/
}
{
var6 = nitc___nitc__MClass___get_mtype(var_arrayclass, var_);
}
var_arraytype = var6;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_arraytype); /* init_instance on <self:SeparateCompilerVisitor>*/
}
var_res = var7;
if (unlikely(varonce==NULL)) {
var8 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "{ /* ";
var13 = (val*)(5l<<2|1);
var14 = (val*)(5l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[0]=var10;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " = array_instance Array[";
var21 = (val*)(24l<<2|1);
var22 = (val*)(24l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var8)->values[2]=var18;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "] */";
var29 = (val*)(4l<<2|1);
var30 = (val*)(4l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var8)->values[4]=var26;
} else {
var8 = varonce;
varonce = NULL;
}
{
var33 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var8)->values[1]=var33;
{
var34 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_elttype); /* to_s on <var_elttype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[3]=var34;
{
var35 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var35); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline array$AbstractArrayRead$length (var_array) on <var_array:Array[RuntimeVariable]> */
var38 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nitc___nitc__AbstractCompilerVisitor___int_instance(self, var36);
}
var_length = var39;
{
var40 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(self, var_elttype, var_length); /* native_array_instance on <self:SeparateCompilerVisitor>*/
}
var_nat = var40;
var_i = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_array) on <var_array:Array[RuntimeVariable]> */
var43 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_44 = var41;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_44) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_44:Int> isa OTHER */
/* <var_44:Int> isa OTHER */
var47 = 1; /* easy <var_44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var48 = var_i < var_44;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
} else {
goto BREAK_label;
}
{
var49 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
{
var50 = nitc___nitc__AbstractCompilerVisitor___object_type(self);
}
{
var51 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var49, var50);
}
var_r = var51;
if (unlikely(varonce52==NULL)) {
var53 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "((struct instance_";
var58 = (val*)(18l<<2|1);
var59 = (val*)(18l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[0]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "*)";
var66 = (val*)(2l<<2|1);
var67 = (val*)(2l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var53)->values[2]=var63;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ")->values[";
var74 = (val*)(10l<<2|1);
var75 = (val*)(10l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var53)->values[4]=var71;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "] = (val*) ";
var82 = (val*)(11l<<2|1);
var83 = (val*)(11l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var53)->values[6]=var79;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ";";
var90 = (val*)(1l<<2|1);
var91 = (val*)(1l<<2|1);
var92 = (val*)((long)(0)<<2|3);
var93 = (val*)((long)(0)<<2|3);
var89 = core__flat___CString___to_s_unsafe(var88, var90, var91, var92, var93);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var53)->values[8]=var87;
} else {
var53 = varonce52;
varonce52 = NULL;
}
{
var94 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var53)->values[1]=var94;
{
var95 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var53)->values[3]=var95;
var96 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var53)->values[5]=var96;
{
var97 = ((val*(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_r); /* to_s on <var_r:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var53)->values[7]=var97;
{
var98 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var98); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
var99 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var99;
}
BREAK_label: (void)0;
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "with_native";
var104 = (val*)(11l<<2|1);
var105 = (val*)(11l<<2|1);
var106 = (val*)((long)(0)<<2|3);
var107 = (val*)((long)(0)<<2|3);
var103 = core__flat___CString___to_s_unsafe(var102, var104, var105, var106, var107);
var101 = var103;
varonce100 = var101;
}
{
{ /* Inline model$MClass$intro (var_arrayclass) on <var_arrayclass:MClass> */
var110 = var_arrayclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_arrayclass:MClass> */
if (unlikely(var110 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var108) on <var108:MClassDef> */
var113 = var108->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var108:MClassDef> */
if (unlikely(var113 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = nitc___nitc__AbstractCompilerVisitor___get_property(self, var101, var111);
}
var115 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var115, 3l); /* Direct call array$Array$with_capacity on <var115:Array[RuntimeVariable]>*/
}
var_116 = var115;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_116, var_res); /* Direct call array$AbstractArray$push on <var_116:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_116, var_nat); /* Direct call array$AbstractArray$push on <var_116:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_116, var_length); /* Direct call array$AbstractArray$push on <var_116:Array[RuntimeVariable]>*/
}
{
var117 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var114, var_116);
}
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "}";
var122 = (val*)(1l<<2|1);
var123 = (val*)(1l<<2|1);
var124 = (val*)((long)(0)<<2|3);
var125 = (val*)((long)(0)<<2|3);
var121 = core__flat___CString___to_s_unsafe(var120, var122, var123, var124, var125);
var119 = var121;
varonce118 = var119;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var119); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$native_array_instance for (self: SeparateCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_elttype /* var elttype: MType */;
val* var_length /* var length: RuntimeVariable */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
val* var12 /* : MClass */;
val* var14 /* : MClass */;
val* var15 /* : String */;
val* var16 /* : String */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var18 /* : AbstractCompiler */;
val* var20 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var21 /* : MModule */;
val* var23 /* : MModule */;
val* var24 /* : MClassType */;
val* var25 /* : RuntimeVariable */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable StaticFrame */;
val* var31 /* : nullable StaticFrame */;
val* var32 /* : MPropDef */;
val* var34 /* : MPropDef */;
val* var35 /* : MClassDef */;
val* var37 /* : MClassDef */;
val* var38 /* : nullable StaticFrame */;
val* var40 /* : nullable StaticFrame */;
val* var41 /* : Array[RuntimeVariable] */;
val* var43 /* : Array[RuntimeVariable] */;
val* var44 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var45 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var46 /* : String */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Bool */;
val* var72 /* : nullable Bool */;
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
val* var89 /* : MClass */;
val* var91 /* : MClass */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : RuntimeVariable */;
val* var97 /* : Set[MType] */;
val* var99 /* : Set[MType] */;
val* var101 /* : NativeArray[String] */;
static val* varonce100;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Bool */;
val* var109 /* : nullable Bool */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Bool */;
val* var121 /* : nullable Bool */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Bool */;
val* var129 /* : nullable Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Bool */;
val* var137 /* : nullable Bool */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Bool */;
val* var145 /* : nullable Bool */;
val* var146 /* : MClass */;
val* var148 /* : MClass */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : String */;
val* var152 /* : String */;
val* var153 /* : RuntimeVariable */;
var_elttype = p0;
var_length = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___native_array_type(var1, var_elttype);
}
var_mtype = var2;
if (unlikely(varonce==NULL)) {
var3 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "NEW_";
var8 = (val*)(4l<<2|1);
var9 = (val*)(4l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
var5 = var7;
varonce4 = var5;
}
((struct instance_core__NativeArray*)var3)->values[0]=var5;
} else {
var3 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var14 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var12);
}
((struct instance_core__NativeArray*)var3)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var16); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_nitc__MGenericType.color;
idtype = type_nitc__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var17 = 0;
} else {
var17 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var17)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2092);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var20 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_compiler = var18;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var_compiler) on <var_compiler:SeparateCompiler> */
var23 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:SeparateCompiler> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc__model___MModule___int_type(var21);
}
{
var25 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_length, var24);
}
var_length = var25;
{
{ /* Inline model$MGenericType$need_anchor (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var28 = var_mtype->attrs[COLOR_nitc__model__MGenericType___need_anchor].s; /* _need_anchor on <var_mtype:MClassType(MGenericType)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26){
{
nitc___nitc__SeparateCompilerVisitor___hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler$SeparateCompilerVisitor$hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var31 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2097);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var29) on <var29:nullable StaticFrame> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var34 = var29->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var29:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var32) on <var32:MPropDef> */
var37 = var32->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var32:MPropDef> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
nitc___nitc__SeparateCompilerVisitor___link_unresolved_type(self, var35, var_mtype); /* Direct call separate_compiler$SeparateCompilerVisitor$link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var40 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2098);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$arguments (var38) on <var38:nullable StaticFrame> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var43 = var38->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var38:nullable StaticFrame> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = core___core__SequenceRead___Collection__first(var41);
}
var_recv = var44;
{
var45 = nitc___nitc__SeparateCompilerVisitor___type_info(self, var_recv);
}
var_recv_type_info = var45;
{
var46 = nitc__separate_compiler___MEntity___const_color(var_mtype);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var46); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce47==NULL)) {
var48 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "NEW_";
var53 = (val*)(4l<<2|1);
var54 = (val*)(4l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var48)->values[0]=var50;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "((int)";
var61 = (val*)(6l<<2|1);
var62 = (val*)(6l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var48)->values[2]=var58;
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = ", ";
var69 = (val*)(2l<<2|1);
var70 = (val*)(2l<<2|1);
var71 = (val*)((long)(0)<<2|3);
var72 = (val*)((long)(0)<<2|3);
var68 = core__flat___CString___to_s_unsafe(var67, var69, var70, var71, var72);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var48)->values[4]=var66;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "->resolution_table->types[";
var77 = (val*)(26l<<2|1);
var78 = (val*)(26l<<2|1);
var79 = (val*)((long)(0)<<2|3);
var80 = (val*)((long)(0)<<2|3);
var76 = core__flat___CString___to_s_unsafe(var75, var77, var78, var79, var80);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var48)->values[6]=var74;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "])";
var85 = (val*)(2l<<2|1);
var86 = (val*)(2l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var48)->values[8]=var82;
} else {
var48 = varonce47;
varonce47 = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var91 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var89);
}
((struct instance_core__NativeArray*)var48)->values[1]=var92;
{
var93 = ((val*(*)(val* self))(var_length->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_length); /* to_s on <var_length:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var48)->values[3]=var93;
((struct instance_core__NativeArray*)var48)->values[5]=var_recv_type_info;
{
var94 = nitc__separate_compiler___MEntity___const_color(var_mtype);
}
((struct instance_core__NativeArray*)var48)->values[7]=var94;
{
var95 = ((val*(*)(val* self))(var48->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
{
var96 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var95, var_mtype);
}
var = var96;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var99 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var97&3)?class_info[((long)var97&3)]:var97->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var97, var_mtype); /* add on <var97:Set[MType]>*/
}
if (unlikely(varonce100==NULL)) {
var101 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "type_";
var106 = (val*)(5l<<2|1);
var107 = (val*)(5l<<2|1);
var108 = (val*)((long)(0)<<2|3);
var109 = (val*)((long)(0)<<2|3);
var105 = core__flat___CString___to_s_unsafe(var104, var106, var107, var108, var109);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var101)->values[0]=var103;
} else {
var101 = varonce100;
varonce100 = NULL;
}
{
var110 = nitc___nitc__MGenericType___nitc__model_base__MEntity__c_name(var_mtype);
}
((struct instance_core__NativeArray*)var101)->values[1]=var110;
{
var111 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var111); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce112==NULL)) {
var113 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "NEW_";
var118 = (val*)(4l<<2|1);
var119 = (val*)(4l<<2|1);
var120 = (val*)((long)(0)<<2|3);
var121 = (val*)((long)(0)<<2|3);
var117 = core__flat___CString___to_s_unsafe(var116, var118, var119, var120, var121);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var113)->values[0]=var115;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "((int)";
var126 = (val*)(6l<<2|1);
var127 = (val*)(6l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var113)->values[2]=var123;
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = ", &type_";
var134 = (val*)(8l<<2|1);
var135 = (val*)(8l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var113)->values[4]=var131;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = ")";
var142 = (val*)(1l<<2|1);
var143 = (val*)(1l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var113)->values[6]=var139;
} else {
var113 = varonce112;
varonce112 = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var148 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var148 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
var149 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var146);
}
((struct instance_core__NativeArray*)var113)->values[1]=var149;
{
var150 = ((val*(*)(val* self))(var_length->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_length); /* to_s on <var_length:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var113)->values[3]=var150;
{
var151 = nitc___nitc__MGenericType___nitc__model_base__MEntity__c_name(var_mtype);
}
((struct instance_core__NativeArray*)var113)->values[5]=var151;
{
var152 = ((val*(*)(val* self))(var113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
{
var153 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var152, var_mtype);
}
var = var153;
goto RET_LABEL;
RET_LABEL:;
return var;
}
