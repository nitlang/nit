#include "separate_erasure_compiler.sep.0.h"
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#type_test for (self: SeparateErasureCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
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
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : MClassType */;
val* var21 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
val* var_cltype /* var cltype: String */;
static val* varonce28;
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
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : String */;
val* var_idtype /* var idtype: String */;
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
short int var62 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
val* var_accept_null /* var accept_null: String */;
short int var68 /* : Bool */;
int cltype;
int idtype;
val* var69 /* : MType */;
val* var71 /* : MType */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
val* var80 /* : nullable Frame */;
val* var82 /* : nullable Frame */;
val* var83 /* : MPropDef */;
val* var85 /* : MPropDef */;
val* var86 /* : MClassDef */;
val* var88 /* : MClassDef */;
val* var89 /* : MClassType */;
val* var91 /* : MClassType */;
val* var92 /* : nullable Frame */;
val* var94 /* : nullable Frame */;
val* var95 /* : MPropDef */;
val* var97 /* : MPropDef */;
val* var98 /* : MClassDef */;
val* var100 /* : MClassDef */;
val* var101 /* : MClassType */;
val* var103 /* : MClassType */;
val* var104 /* : nullable Frame */;
val* var106 /* : nullable Frame */;
val* var107 /* : MPropDef */;
val* var109 /* : MPropDef */;
val* var110 /* : MClassDef */;
val* var112 /* : MClassDef */;
val* var113 /* : MModule */;
val* var115 /* : MModule */;
short int var116 /* : Bool */;
val* var117 /* : MType */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
val* var121 /* : MType */;
val* var123 /* : MType */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
val* var129 /* : MType */;
val* var131 /* : MType */;
val* var132 /* : nullable Frame */;
val* var134 /* : nullable Frame */;
val* var135 /* : MPropDef */;
val* var137 /* : MPropDef */;
val* var138 /* : MClassDef */;
val* var140 /* : MClassDef */;
val* var141 /* : MModule */;
val* var143 /* : MModule */;
val* var144 /* : nullable Frame */;
val* var146 /* : nullable Frame */;
val* var147 /* : MPropDef */;
val* var149 /* : MPropDef */;
val* var150 /* : MClassDef */;
val* var152 /* : MClassDef */;
val* var153 /* : MClassType */;
val* var155 /* : MClassType */;
short int var156 /* : Bool */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : FlatString */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
val* var173 /* : Array[Object] */;
long var174 /* : Int */;
val* var175 /* : NativeArray[Object] */;
val* var176 /* : String */;
val* var177 /* : AbstractCompiler */;
val* var179 /* : AbstractCompiler */;
val* var180 /* : ModelBuilder */;
val* var182 /* : ModelBuilder */;
val* var183 /* : ToolContext */;
val* var185 /* : ToolContext */;
val* var186 /* : OptionBool */;
val* var188 /* : OptionBool */;
val* var189 /* : nullable Object */;
val* var191 /* : nullable Object */;
short int var192 /* : Bool */;
val* var193 /* : AbstractCompiler */;
val* var195 /* : AbstractCompiler */;
val* var196 /* : HashMap[String, Int] */;
val* var198 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
val* var_199 /* var : String */;
val* var200 /* : nullable Object */;
long var201 /* : Int */;
long var202 /* : Int */;
short int var204 /* : Bool */;
int cltype205;
int idtype206;
const char* var_class_name;
long var207 /* : Int */;
long var208 /* : Int */;
val* var209 /* : nullable Object */;
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
val* var224 /* : MType */;
val* var226 /* : MType */;
val* var227 /* : String */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : FlatString */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : NativeString */;
long var238 /* : Int */;
val* var239 /* : FlatString */;
val* var240 /* : Array[Object] */;
long var241 /* : Int */;
val* var242 /* : NativeArray[Object] */;
val* var243 /* : String */;
val* var_class_ptr /* var class_ptr: nullable Object */;
val* var244 /* : MType */;
val* var246 /* : MType */;
short int var247 /* : Bool */;
int cltype248;
int idtype249;
const char* var_class_name250;
val* var251 /* : MClass */;
val* var253 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : FlatString */;
val* var259 /* : String */;
val* var260 /* : Array[Object] */;
long var261 /* : Int */;
val* var262 /* : NativeArray[Object] */;
val* var263 /* : String */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
long var267 /* : Int */;
val* var268 /* : FlatString */;
val* var269 /* : String */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : FlatString */;
val* var275 /* : Array[Object] */;
long var276 /* : Int */;
val* var277 /* : NativeArray[Object] */;
val* var278 /* : String */;
short int var279 /* : Bool */;
int cltype280;
int idtype281;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
val* var287 /* : MClass */;
val* var289 /* : MClass */;
val* var290 /* : String */;
val* var291 /* : Array[Object] */;
long var292 /* : Int */;
val* var293 /* : NativeArray[Object] */;
val* var294 /* : String */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
long var298 /* : Int */;
val* var299 /* : FlatString */;
val* var300 /* : MClass */;
val* var302 /* : MClass */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
long var307 /* : Int */;
val* var308 /* : FlatString */;
val* var309 /* : Array[Object] */;
long var310 /* : Int */;
val* var311 /* : NativeArray[Object] */;
val* var312 /* : String */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : FlatString */;
val* var318 /* : MClass */;
val* var320 /* : MClass */;
val* var321 /* : String */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
long var325 /* : Int */;
val* var326 /* : FlatString */;
val* var327 /* : Array[Object] */;
long var328 /* : Int */;
val* var329 /* : NativeArray[Object] */;
val* var330 /* : String */;
val* var331 /* : AbstractCompiler */;
val* var333 /* : AbstractCompiler */;
val* var334 /* : ModelBuilder */;
val* var336 /* : ModelBuilder */;
val* var337 /* : ToolContext */;
val* var339 /* : ToolContext */;
val* var340 /* : OptionBool */;
val* var342 /* : OptionBool */;
val* var343 /* : nullable Object */;
val* var345 /* : nullable Object */;
short int var346 /* : Bool */;
val* var347 /* : AbstractCompiler */;
val* var349 /* : AbstractCompiler */;
val* var350 /* : HashMap[String, Int] */;
val* var352 /* : HashMap[String, Int] */;
val* var_353 /* var : HashMap[String, Int] */;
val* var_354 /* var : String */;
val* var355 /* : nullable Object */;
long var356 /* : Int */;
long var357 /* : Int */;
short int var359 /* : Bool */;
int cltype360;
int idtype361;
const char* var_class_name362;
long var363 /* : Int */;
long var364 /* : Int */;
val* var365 /* : nullable Object */;
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
val* var376 /* : Array[Object] */;
long var377 /* : Int */;
val* var378 /* : NativeArray[Object] */;
val* var379 /* : String */;
short int var380 /* : Bool */;
int cltype381;
int idtype382;
val* var383 /* : nullable Frame */;
val* var385 /* : nullable Frame */;
val* var386 /* : Array[RuntimeVariable] */;
val* var388 /* : Array[RuntimeVariable] */;
val* var389 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var390 /* : MType */;
val* var392 /* : MType */;
val* var393 /* : String */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : FlatString */;
short int var399 /* : Bool */;
short int var400 /* : Bool */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
long var404 /* : Int */;
val* var405 /* : FlatString */;
val* var406 /* : Array[Object] */;
long var407 /* : Int */;
val* var408 /* : NativeArray[Object] */;
val* var409 /* : String */;
val* var_recv_ptr /* var recv_ptr: nullable Object */;
val* var410 /* : MType */;
val* var412 /* : MType */;
short int var413 /* : Bool */;
int cltype414;
int idtype415;
const char* var_class_name416;
val* var417 /* : MClass */;
val* var419 /* : MClass */;
val* var_mclass420 /* var mclass: MClass */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
long var424 /* : Int */;
val* var425 /* : FlatString */;
val* var426 /* : String */;
val* var427 /* : Array[Object] */;
long var428 /* : Int */;
val* var429 /* : NativeArray[Object] */;
val* var430 /* : String */;
static val* varonce431;
val* var432 /* : String */;
char* var433 /* : NativeString */;
long var434 /* : Int */;
val* var435 /* : FlatString */;
val* var436 /* : String */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : NativeString */;
long var440 /* : Int */;
val* var441 /* : FlatString */;
val* var442 /* : Array[Object] */;
long var443 /* : Int */;
val* var444 /* : NativeArray[Object] */;
val* var445 /* : String */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
long var449 /* : Int */;
val* var450 /* : FlatString */;
val* var451 /* : String */;
val* var_entry /* var entry: String */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
long var455 /* : Int */;
val* var456 /* : FlatString */;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : NativeString */;
long var460 /* : Int */;
val* var461 /* : FlatString */;
val* var462 /* : Array[Object] */;
long var463 /* : Int */;
val* var464 /* : NativeArray[Object] */;
val* var465 /* : String */;
val* var466 /* : MProperty */;
val* var468 /* : MProperty */;
val* var469 /* : String */;
static val* varonce470;
val* var471 /* : String */;
char* var472 /* : NativeString */;
long var473 /* : Int */;
val* var474 /* : FlatString */;
static val* varonce475;
val* var476 /* : String */;
char* var477 /* : NativeString */;
long var478 /* : Int */;
val* var479 /* : FlatString */;
val* var480 /* : MProperty */;
val* var482 /* : MProperty */;
val* var483 /* : String */;
static val* varonce484;
val* var485 /* : String */;
char* var486 /* : NativeString */;
long var487 /* : Int */;
val* var488 /* : FlatString */;
val* var489 /* : Array[Object] */;
long var490 /* : Int */;
val* var491 /* : NativeArray[Object] */;
val* var492 /* : String */;
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
val* var503 /* : Array[Object] */;
long var504 /* : Int */;
val* var505 /* : NativeArray[Object] */;
val* var506 /* : String */;
static val* varonce507;
val* var508 /* : String */;
char* var509 /* : NativeString */;
long var510 /* : Int */;
val* var511 /* : FlatString */;
static val* varonce512;
val* var513 /* : String */;
char* var514 /* : NativeString */;
long var515 /* : Int */;
val* var516 /* : FlatString */;
val* var517 /* : Array[Object] */;
long var518 /* : Int */;
val* var519 /* : NativeArray[Object] */;
val* var520 /* : String */;
short int var521 /* : Bool */;
short int var_522 /* var : Bool */;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : NativeString */;
long var526 /* : Int */;
val* var527 /* : FlatString */;
short int var528 /* : Bool */;
short int var529 /* : Bool */;
static val* varonce530;
val* var531 /* : String */;
char* var532 /* : NativeString */;
long var533 /* : Int */;
val* var534 /* : FlatString */;
val* var535 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
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
val* var546 /* : Array[Object] */;
long var547 /* : Int */;
val* var548 /* : NativeArray[Object] */;
val* var549 /* : String */;
static val* varonce550;
val* var551 /* : String */;
char* var552 /* : NativeString */;
long var553 /* : Int */;
val* var554 /* : FlatString */;
static val* varonce555;
val* var556 /* : String */;
char* var557 /* : NativeString */;
long var558 /* : Int */;
val* var559 /* : FlatString */;
val* var560 /* : Array[Object] */;
long var561 /* : Int */;
val* var562 /* : NativeArray[Object] */;
val* var563 /* : String */;
val* var564 /* : String */;
val* var565 /* : AbstractCompiler */;
val* var567 /* : AbstractCompiler */;
val* var568 /* : ModelBuilder */;
val* var570 /* : ModelBuilder */;
val* var571 /* : ToolContext */;
val* var573 /* : ToolContext */;
val* var574 /* : OptionBool */;
val* var576 /* : OptionBool */;
val* var577 /* : nullable Object */;
val* var579 /* : nullable Object */;
short int var580 /* : Bool */;
val* var581 /* : AbstractCompiler */;
val* var583 /* : AbstractCompiler */;
val* var584 /* : HashMap[String, Int] */;
val* var586 /* : HashMap[String, Int] */;
val* var_587 /* var : HashMap[String, Int] */;
val* var_588 /* var : String */;
val* var589 /* : nullable Object */;
long var590 /* : Int */;
long var591 /* : Int */;
short int var593 /* : Bool */;
int cltype594;
int idtype595;
const char* var_class_name596;
long var597 /* : Int */;
long var598 /* : Int */;
val* var599 /* : nullable Object */;
static val* varonce600;
val* var601 /* : String */;
char* var602 /* : NativeString */;
long var603 /* : Int */;
val* var604 /* : FlatString */;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : NativeString */;
long var608 /* : Int */;
val* var609 /* : FlatString */;
val* var610 /* : Array[Object] */;
long var611 /* : Int */;
val* var612 /* : NativeArray[Object] */;
val* var613 /* : String */;
static val* varonce614;
val* var615 /* : String */;
char* var616 /* : NativeString */;
long var617 /* : Int */;
val* var618 /* : FlatString */;
val* var619 /* : String */;
static val* varonce620;
val* var621 /* : String */;
char* var622 /* : NativeString */;
long var623 /* : Int */;
val* var624 /* : FlatString */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : NativeString */;
long var628 /* : Int */;
val* var629 /* : FlatString */;
val* var630 /* : Array[Object] */;
long var631 /* : Int */;
val* var632 /* : NativeArray[Object] */;
val* var633 /* : String */;
static val* varonce634;
val* var635 /* : String */;
char* var636 /* : NativeString */;
long var637 /* : Int */;
val* var638 /* : FlatString */;
static val* varonce639;
val* var640 /* : String */;
char* var641 /* : NativeString */;
long var642 /* : Int */;
val* var643 /* : FlatString */;
val* var644 /* : Array[Object] */;
long var645 /* : Int */;
val* var646 /* : NativeArray[Object] */;
val* var647 /* : String */;
static val* varonce648;
val* var649 /* : String */;
char* var650 /* : NativeString */;
long var651 /* : Int */;
val* var652 /* : FlatString */;
static val* varonce653;
val* var654 /* : String */;
char* var655 /* : NativeString */;
long var656 /* : Int */;
val* var657 /* : FlatString */;
val* var658 /* : Array[Object] */;
long var659 /* : Int */;
val* var660 /* : NativeArray[Object] */;
val* var661 /* : String */;
static val* varonce662;
val* var663 /* : String */;
char* var664 /* : NativeString */;
long var665 /* : Int */;
val* var666 /* : FlatString */;
static val* varonce667;
val* var668 /* : String */;
char* var669 /* : NativeString */;
long var670 /* : Int */;
val* var671 /* : FlatString */;
static val* varonce672;
val* var673 /* : String */;
char* var674 /* : NativeString */;
long var675 /* : Int */;
val* var676 /* : FlatString */;
static val* varonce677;
val* var678 /* : String */;
char* var679 /* : NativeString */;
long var680 /* : Int */;
val* var681 /* : FlatString */;
val* var682 /* : Array[Object] */;
long var683 /* : Int */;
val* var684 /* : NativeArray[Object] */;
val* var685 /* : String */;
static val* varonce686;
val* var687 /* : String */;
char* var688 /* : NativeString */;
long var689 /* : Int */;
val* var690 /* : FlatString */;
val* var691 /* : Array[Object] */;
long var692 /* : Int */;
val* var693 /* : NativeArray[Object] */;
val* var694 /* : String */;
static val* varonce695;
val* var696 /* : String */;
char* var697 /* : NativeString */;
long var698 /* : Int */;
val* var699 /* : FlatString */;
static val* varonce700;
val* var701 /* : String */;
char* var702 /* : NativeString */;
long var703 /* : Int */;
val* var704 /* : FlatString */;
static val* varonce705;
val* var706 /* : String */;
char* var707 /* : NativeString */;
long var708 /* : Int */;
val* var709 /* : FlatString */;
static val* varonce710;
val* var711 /* : String */;
char* var712 /* : NativeString */;
long var713 /* : Int */;
val* var714 /* : FlatString */;
static val* varonce715;
val* var716 /* : String */;
char* var717 /* : NativeString */;
long var718 /* : Int */;
val* var719 /* : FlatString */;
val* var720 /* : Array[Object] */;
long var721 /* : Int */;
val* var722 /* : NativeArray[Object] */;
val* var723 /* : String */;
static val* varonce724;
val* var725 /* : String */;
char* var726 /* : NativeString */;
long var727 /* : Int */;
val* var728 /* : FlatString */;
static val* varonce729;
val* var730 /* : String */;
char* var731 /* : NativeString */;
long var732 /* : Int */;
val* var733 /* : FlatString */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "/* type test for ";
var3 = 17;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__RuntimeVariable__inspect(var_value);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = " isa ";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = " */";
var14 = 3;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 5;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var18)->values[4] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
var20 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var21 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var20);
}
var_res = var21;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "cltype";
var25 = 6;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
var27 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var23);
}
var_cltype = var27;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "int ";
var31 = 4;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = ";";
var36 = 1;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var_cltype;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var34;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "idtype";
var45 = 6;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var47 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var43);
}
var_idtype = var47;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "int ";
var51 = 4;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = ";";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 3;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var49;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var_idtype;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var54;
{
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
{
var62 = separate_compiler__SeparateCompilerVisitor__maybe_null(self, var_value);
}
var_maybe_null = var62;
if (varonce63) {
var64 = varonce63;
} else {
var65 = "0";
var66 = 1;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var_accept_null = var64;
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var68 = 0;
} else {
var68 = var_mtype->type->type_table[cltype] == idtype;
}
if (var68){
{
{ /* Inline model#MNullableType#mtype (var_mtype) on <var_mtype:MType(MNullableType)> */
var71 = var_mtype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_mtype:MType(MNullableType)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_mtype = var69;
if (varonce72) {
var73 = varonce72;
} else {
var74 = "1";
var75 = 1;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var_accept_null = var73;
} else {
}
/* <var_mtype:MType> isa MParameterType */
cltype78 = type_model__MParameterType.color;
idtype79 = type_model__MParameterType.id;
if(cltype78 >= var_mtype->type->table_size) {
var77 = 0;
} else {
var77 = var_mtype->type->type_table[cltype78] == idtype79;
}
if (var77){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var82 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
if (var80 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 489);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var80) on <var80:nullable Frame> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var85 = var80->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var80:nullable Frame> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var83) on <var83:MPropDef> */
var88 = var83->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var83:MPropDef> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var86) on <var86:MClassDef> */
var91 = var86->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var86:MClassDef> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var94 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (var92 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 489);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var92) on <var92:nullable Frame> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var97 = var92->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var92:nullable Frame> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var95) on <var95:MPropDef> */
var100 = var95->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var95:MPropDef> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var98) on <var98:MClassDef> */
var103 = var98->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var98:MClassDef> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var106 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (var104 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 489);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var104) on <var104:nullable Frame> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var109 = var104->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var104:nullable Frame> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var107) on <var107:MPropDef> */
var112 = var107->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var107:MPropDef> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var110) on <var110:MClassDef> */
var115 = var110->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var110:MClassDef> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
var116 = 0;
{
var117 = model__MParameterType__resolve_for(var_mtype, var89, var101, var113, var116);
}
var_mtype = var117;
/* <var_mtype:MType> isa MNullableType */
cltype119 = type_model__MNullableType.color;
idtype120 = type_model__MNullableType.id;
if(cltype119 >= var_mtype->type->table_size) {
var118 = 0;
} else {
var118 = var_mtype->type->type_table[cltype119] == idtype120;
}
if (var118){
{
{ /* Inline model#MNullableType#mtype (var_mtype) on <var_mtype:MType(MNullableType)> */
var123 = var_mtype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_mtype:MType(MNullableType)> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
var_mtype = var121;
if (varonce124) {
var125 = varonce124;
} else {
var126 = "1";
var127 = 1;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var_accept_null = var125;
} else {
}
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var131 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var134 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (var132 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 496);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var132) on <var132:nullable Frame> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var137 = var132->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var132:nullable Frame> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var135) on <var135:MPropDef> */
var140 = var135->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var135:MPropDef> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var138) on <var138:MClassDef> */
var143 = var138->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var138:MClassDef> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var146 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
if (var144 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 496);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var144) on <var144:nullable Frame> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var149 = var144->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var144:nullable Frame> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var147) on <var147:MPropDef> */
var152 = var147->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var147:MPropDef> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var150) on <var150:MClassDef> */
var155 = var150->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var150:MClassDef> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = model__MType__is_subtype(var129, var141, var153, var_mtype);
}
if (var156){
if (varonce157) {
var158 = varonce157;
} else {
var159 = " = 1; /* easy ";
var160 = 14;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
{
var162 = abstract_compiler__RuntimeVariable__inspect(var_value);
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = " isa ";
var166 = 5;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = "*/";
var171 = 2;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 6;
var175 = NEW_array__NativeArray(var174, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var175)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var175)->values[1] = (val*) var158;
((struct instance_array__NativeArray*)var175)->values[2] = (val*) var162;
((struct instance_array__NativeArray*)var175)->values[3] = (val*) var164;
((struct instance_array__NativeArray*)var175)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var175)->values[5] = (val*) var169;
{
((void (*)(val*, val*, long))(var173->class->vft[COLOR_array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
}
{
var176 = ((val* (*)(val*))(var173->class->vft[COLOR_string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var176); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var179 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var179 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var177) on <var177:AbstractCompiler(SeparateCompiler)> */
var182 = var177->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var177:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var180) on <var180:ModelBuilder> */
var185 = var180->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var180:ModelBuilder> */
if (unlikely(var185 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var183) on <var183:ToolContext> */
var188 = var183->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var183:ToolContext> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
show_backtrace(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
{ /* Inline opts#Option#value (var186) on <var186:OptionBool> */
var191 = var186->attrs[COLOR_opts__Option___value].val; /* _value on <var186:OptionBool> */
var189 = var191;
RET_LABEL190:(void)0;
}
}
var192 = ((struct instance_kernel__Bool*)var189)->value; /* autounbox from nullable Object to Bool */;
if (var192){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var195 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (var193) on <var193:AbstractCompiler(SeparateCompiler)> */
var198 = var193->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <var193:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 891);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
var_ = var196;
var_199 = var_tag;
{
var200 = hash_collection__HashMap___91d_93d(var_, var_199);
}
var201 = 1;
{
{ /* Inline kernel#Int#+ (var200,var201) on <var200:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var201:Int> isa OTHER */
/* <var201:Int> isa OTHER */
var204 = 1; /* easy <var201:Int> isa OTHER*/
if (unlikely(!var204)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var207 = ((struct instance_kernel__Int*)var200)->value; /* autounbox from nullable Object to Int */;
var208 = var207 + var201;
var202 = var208;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
}
{
var209 = BOX_kernel__Int(var202); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_, var_199, var209); /* Direct call hash_collection#HashMap#[]= on <var_:HashMap[String, Int]>*/
}
if (varonce210) {
var211 = varonce210;
} else {
var212 = "count_type_test_skipped_";
var213 = 24;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
if (varonce215) {
var216 = varonce215;
} else {
var217 = "++;";
var218 = 3;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
var220 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var220 = array_instance Array[Object] */
var221 = 3;
var222 = NEW_array__NativeArray(var221, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var222)->values[0] = (val*) var211;
((struct instance_array__NativeArray*)var222)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var222)->values[2] = (val*) var216;
{
((void (*)(val*, val*, long))(var220->class->vft[COLOR_array__Array__with_native]))(var220, var222, var221) /* with_native on <var220:Array[Object]>*/;
}
}
{
var223 = ((val* (*)(val*))(var220->class->vft[COLOR_string__Object__to_s]))(var220) /* to_s on <var220:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var223); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var226 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var226 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var224 = var226;
RET_LABEL225:(void)0;
}
}
{
var227 = ((val* (*)(val*))(var224->class->vft[COLOR_abstract_compiler__MType__ctype]))(var224) /* ctype on <var224:MType>*/;
}
if (varonce228) {
var229 = varonce228;
} else {
var230 = "val*";
var231 = 4;
var232 = string__NativeString__to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
{
var234 = string__FlatString___61d_61d(var227, var229);
var233 = var234;
}
if (var233){
if (varonce235) {
var236 = varonce235;
} else {
var237 = "->class->";
var238 = 9;
var239 = string__NativeString__to_s_with_length(var237, var238);
var236 = var239;
varonce235 = var236;
}
var240 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var240 = array_instance Array[Object] */
var241 = 2;
var242 = NEW_array__NativeArray(var241, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var242)->values[0] = (val*) var_value;
((struct instance_array__NativeArray*)var242)->values[1] = (val*) var236;
{
((void (*)(val*, val*, long))(var240->class->vft[COLOR_array__Array__with_native]))(var240, var242, var241) /* with_native on <var240:Array[Object]>*/;
}
}
{
var243 = ((val* (*)(val*))(var240->class->vft[COLOR_string__Object__to_s]))(var240) /* to_s on <var240:Array[Object]>*/;
}
var_class_ptr = var243;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var246 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
/* <var244:MType> isa MClassType */
cltype248 = type_model__MClassType.color;
idtype249 = type_model__MClassType.id;
if(cltype248 >= var244->type->table_size) {
var247 = 0;
} else {
var247 = var244->type->type_table[cltype248] == idtype249;
}
if (unlikely(!var247)) {
var_class_name250 = var244 == NULL ? "null" : var244->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name250);
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 510);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var244) on <var244:MType(MClassType)> */
var253 = var244->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var244:MType(MClassType)> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
var_mclass = var251;
if (varonce254) {
var255 = varonce254;
} else {
var256 = "class_";
var257 = 6;
var258 = string__NativeString__to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
{
var259 = abstract_compiler__MClass__c_name(var_mclass);
}
var260 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var260 = array_instance Array[Object] */
var261 = 2;
var262 = NEW_array__NativeArray(var261, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var262)->values[0] = (val*) var255;
((struct instance_array__NativeArray*)var262)->values[1] = (val*) var259;
{
((void (*)(val*, val*, long))(var260->class->vft[COLOR_array__Array__with_native]))(var260, var262, var261) /* with_native on <var260:Array[Object]>*/;
}
}
{
var263 = ((val* (*)(val*))(var260->class->vft[COLOR_string__Object__to_s]))(var260) /* to_s on <var260:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var263); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce264) {
var265 = varonce264;
} else {
var266 = "class_";
var267 = 6;
var268 = string__NativeString__to_s_with_length(var266, var267);
var265 = var268;
varonce264 = var265;
}
{
var269 = abstract_compiler__MClass__c_name(var_mclass);
}
if (varonce270) {
var271 = varonce270;
} else {
var272 = ".";
var273 = 1;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
var275 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var275 = array_instance Array[Object] */
var276 = 3;
var277 = NEW_array__NativeArray(var276, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var277)->values[0] = (val*) var265;
((struct instance_array__NativeArray*)var277)->values[1] = (val*) var269;
((struct instance_array__NativeArray*)var277)->values[2] = (val*) var271;
{
((void (*)(val*, val*, long))(var275->class->vft[COLOR_array__Array__with_native]))(var275, var277, var276) /* with_native on <var275:Array[Object]>*/;
}
}
{
var278 = ((val* (*)(val*))(var275->class->vft[COLOR_string__Object__to_s]))(var275) /* to_s on <var275:Array[Object]>*/;
}
var_class_ptr = var278;
}
/* <var_mtype:MType> isa MClassType */
cltype280 = type_model__MClassType.color;
idtype281 = type_model__MClassType.id;
if(cltype280 >= var_mtype->type->table_size) {
var279 = 0;
} else {
var279 = var_mtype->type->type_table[cltype280] == idtype281;
}
if (var279){
if (varonce282) {
var283 = varonce282;
} else {
var284 = "class_";
var285 = 6;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var289 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
{
var290 = abstract_compiler__MClass__c_name(var287);
}
var291 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var291 = array_instance Array[Object] */
var292 = 2;
var293 = NEW_array__NativeArray(var292, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var293)->values[0] = (val*) var283;
((struct instance_array__NativeArray*)var293)->values[1] = (val*) var290;
{
((void (*)(val*, val*, long))(var291->class->vft[COLOR_array__Array__with_native]))(var291, var293, var292) /* with_native on <var291:Array[Object]>*/;
}
}
{
var294 = ((val* (*)(val*))(var291->class->vft[COLOR_string__Object__to_s]))(var291) /* to_s on <var291:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var294); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce295) {
var296 = varonce295;
} else {
var297 = " = class_";
var298 = 9;
var299 = string__NativeString__to_s_with_length(var297, var298);
var296 = var299;
varonce295 = var296;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var302 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
{
var303 = abstract_compiler__MClass__c_name(var300);
}
if (varonce304) {
var305 = varonce304;
} else {
var306 = ".color;";
var307 = 7;
var308 = string__NativeString__to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
var309 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var309 = array_instance Array[Object] */
var310 = 4;
var311 = NEW_array__NativeArray(var310, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var311)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var311)->values[1] = (val*) var296;
((struct instance_array__NativeArray*)var311)->values[2] = (val*) var303;
((struct instance_array__NativeArray*)var311)->values[3] = (val*) var305;
{
((void (*)(val*, val*, long))(var309->class->vft[COLOR_array__Array__with_native]))(var309, var311, var310) /* with_native on <var309:Array[Object]>*/;
}
}
{
var312 = ((val* (*)(val*))(var309->class->vft[COLOR_string__Object__to_s]))(var309) /* to_s on <var309:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var312); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce313) {
var314 = varonce313;
} else {
var315 = " = class_";
var316 = 9;
var317 = string__NativeString__to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var320 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
{
var321 = abstract_compiler__MClass__c_name(var318);
}
if (varonce322) {
var323 = varonce322;
} else {
var324 = ".id;";
var325 = 4;
var326 = string__NativeString__to_s_with_length(var324, var325);
var323 = var326;
varonce322 = var323;
}
var327 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var327 = array_instance Array[Object] */
var328 = 4;
var329 = NEW_array__NativeArray(var328, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var329)->values[0] = (val*) var_idtype;
((struct instance_array__NativeArray*)var329)->values[1] = (val*) var314;
((struct instance_array__NativeArray*)var329)->values[2] = (val*) var321;
((struct instance_array__NativeArray*)var329)->values[3] = (val*) var323;
{
((void (*)(val*, val*, long))(var327->class->vft[COLOR_array__Array__with_native]))(var327, var329, var328) /* with_native on <var327:Array[Object]>*/;
}
}
{
var330 = ((val* (*)(val*))(var327->class->vft[COLOR_string__Object__to_s]))(var327) /* to_s on <var327:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var330); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var333 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var333 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var331) on <var331:AbstractCompiler(SeparateCompiler)> */
var336 = var331->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var331:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var336 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var334) on <var334:ModelBuilder> */
var339 = var334->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var334:ModelBuilder> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var337) on <var337:ToolContext> */
var342 = var337->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var337:ToolContext> */
if (unlikely(var342 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
show_backtrace(1);
}
var340 = var342;
RET_LABEL341:(void)0;
}
}
{
{ /* Inline opts#Option#value (var340) on <var340:OptionBool> */
var345 = var340->attrs[COLOR_opts__Option___value].val; /* _value on <var340:OptionBool> */
var343 = var345;
RET_LABEL344:(void)0;
}
}
var346 = ((struct instance_kernel__Bool*)var343)->value; /* autounbox from nullable Object to Bool */;
if (var346){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var349 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var349 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (var347) on <var347:AbstractCompiler(SeparateCompiler)> */
var352 = var347->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <var347:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var352 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 889);
show_backtrace(1);
}
var350 = var352;
RET_LABEL351:(void)0;
}
}
var_353 = var350;
var_354 = var_tag;
{
var355 = hash_collection__HashMap___91d_93d(var_353, var_354);
}
var356 = 1;
{
{ /* Inline kernel#Int#+ (var355,var356) on <var355:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var356:Int> isa OTHER */
/* <var356:Int> isa OTHER */
var359 = 1; /* easy <var356:Int> isa OTHER*/
if (unlikely(!var359)) {
var_class_name362 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name362);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var363 = ((struct instance_kernel__Int*)var355)->value; /* autounbox from nullable Object to Int */;
var364 = var363 + var356;
var357 = var364;
goto RET_LABEL358;
RET_LABEL358:(void)0;
}
}
{
var365 = BOX_kernel__Int(var357); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_353, var_354, var365); /* Direct call hash_collection#HashMap#[]= on <var_353:HashMap[String, Int]>*/
}
if (varonce366) {
var367 = varonce366;
} else {
var368 = "count_type_test_resolved_";
var369 = 25;
var370 = string__NativeString__to_s_with_length(var368, var369);
var367 = var370;
varonce366 = var367;
}
if (varonce371) {
var372 = varonce371;
} else {
var373 = "++;";
var374 = 3;
var375 = string__NativeString__to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
var376 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var376 = array_instance Array[Object] */
var377 = 3;
var378 = NEW_array__NativeArray(var377, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var378)->values[0] = (val*) var367;
((struct instance_array__NativeArray*)var378)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var378)->values[2] = (val*) var372;
{
((void (*)(val*, val*, long))(var376->class->vft[COLOR_array__Array__with_native]))(var376, var378, var377) /* with_native on <var376:Array[Object]>*/;
}
}
{
var379 = ((val* (*)(val*))(var376->class->vft[COLOR_string__Object__to_s]))(var376) /* to_s on <var376:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var379); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype381 = type_model__MVirtualType.color;
idtype382 = type_model__MVirtualType.id;
if(cltype381 >= var_mtype->type->table_size) {
var380 = 0;
} else {
var380 = var_mtype->type->type_table[cltype381] == idtype382;
}
if (var380){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var385 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var383 = var385;
RET_LABEL384:(void)0;
}
}
if (var383 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 524);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var383) on <var383:nullable Frame> */
if (unlikely(var383 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var388 = var383->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var383:nullable Frame> */
if (unlikely(var388 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var386 = var388;
RET_LABEL387:(void)0;
}
}
{
var389 = abstract_collection__SequenceRead__first(var386);
}
var_recv = var389;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var392 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var392 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var390 = var392;
RET_LABEL391:(void)0;
}
}
{
var393 = ((val* (*)(val*))(var390->class->vft[COLOR_abstract_compiler__MType__ctype]))(var390) /* ctype on <var390:MType>*/;
}
if (varonce394) {
var395 = varonce394;
} else {
var396 = "val*";
var397 = 4;
var398 = string__NativeString__to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
{
var400 = string__FlatString___61d_61d(var393, var395);
var399 = var400;
}
if (var399){
if (varonce401) {
var402 = varonce401;
} else {
var403 = "->class->";
var404 = 9;
var405 = string__NativeString__to_s_with_length(var403, var404);
var402 = var405;
varonce401 = var402;
}
var406 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var406 = array_instance Array[Object] */
var407 = 2;
var408 = NEW_array__NativeArray(var407, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var408)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var408)->values[1] = (val*) var402;
{
((void (*)(val*, val*, long))(var406->class->vft[COLOR_array__Array__with_native]))(var406, var408, var407) /* with_native on <var406:Array[Object]>*/;
}
}
{
var409 = ((val* (*)(val*))(var406->class->vft[COLOR_string__Object__to_s]))(var406) /* to_s on <var406:Array[Object]>*/;
}
var_recv_ptr = var409;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var412 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var412 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var410 = var412;
RET_LABEL411:(void)0;
}
}
/* <var410:MType> isa MClassType */
cltype414 = type_model__MClassType.color;
idtype415 = type_model__MClassType.id;
if(cltype414 >= var410->type->table_size) {
var413 = 0;
} else {
var413 = var410->type->type_table[cltype414] == idtype415;
}
if (unlikely(!var413)) {
var_class_name416 = var410 == NULL ? "null" : var410->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name416);
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 529);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var410) on <var410:MType(MClassType)> */
var419 = var410->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var410:MType(MClassType)> */
if (unlikely(var419 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var417 = var419;
RET_LABEL418:(void)0;
}
}
var_mclass420 = var417;
if (varonce421) {
var422 = varonce421;
} else {
var423 = "class_";
var424 = 6;
var425 = string__NativeString__to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
{
var426 = abstract_compiler__MClass__c_name(var_mclass420);
}
var427 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var427 = array_instance Array[Object] */
var428 = 2;
var429 = NEW_array__NativeArray(var428, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var429)->values[0] = (val*) var422;
((struct instance_array__NativeArray*)var429)->values[1] = (val*) var426;
{
((void (*)(val*, val*, long))(var427->class->vft[COLOR_array__Array__with_native]))(var427, var429, var428) /* with_native on <var427:Array[Object]>*/;
}
}
{
var430 = ((val* (*)(val*))(var427->class->vft[COLOR_string__Object__to_s]))(var427) /* to_s on <var427:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var430); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce431) {
var432 = varonce431;
} else {
var433 = "class_";
var434 = 6;
var435 = string__NativeString__to_s_with_length(var433, var434);
var432 = var435;
varonce431 = var432;
}
{
var436 = abstract_compiler__MClass__c_name(var_mclass420);
}
if (varonce437) {
var438 = varonce437;
} else {
var439 = ".";
var440 = 1;
var441 = string__NativeString__to_s_with_length(var439, var440);
var438 = var441;
varonce437 = var438;
}
var442 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var442 = array_instance Array[Object] */
var443 = 3;
var444 = NEW_array__NativeArray(var443, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var444)->values[0] = (val*) var432;
((struct instance_array__NativeArray*)var444)->values[1] = (val*) var436;
((struct instance_array__NativeArray*)var444)->values[2] = (val*) var438;
{
((void (*)(val*, val*, long))(var442->class->vft[COLOR_array__Array__with_native]))(var442, var444, var443) /* with_native on <var442:Array[Object]>*/;
}
}
{
var445 = ((val* (*)(val*))(var442->class->vft[COLOR_string__Object__to_s]))(var442) /* to_s on <var442:Array[Object]>*/;
}
var_recv_ptr = var445;
}
if (varonce446) {
var447 = varonce446;
} else {
var448 = "entry";
var449 = 5;
var450 = string__NativeString__to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
{
var451 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var447);
}
var_entry = var451;
if (varonce452) {
var453 = varonce452;
} else {
var454 = "struct vts_entry ";
var455 = 17;
var456 = string__NativeString__to_s_with_length(var454, var455);
var453 = var456;
varonce452 = var453;
}
if (varonce457) {
var458 = varonce457;
} else {
var459 = ";";
var460 = 1;
var461 = string__NativeString__to_s_with_length(var459, var460);
var458 = var461;
varonce457 = var458;
}
var462 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var462 = array_instance Array[Object] */
var463 = 3;
var464 = NEW_array__NativeArray(var463, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var464)->values[0] = (val*) var453;
((struct instance_array__NativeArray*)var464)->values[1] = (val*) var_entry;
((struct instance_array__NativeArray*)var464)->values[2] = (val*) var458;
{
((void (*)(val*, val*, long))(var462->class->vft[COLOR_array__Array__with_native]))(var462, var464, var463) /* with_native on <var462:Array[Object]>*/;
}
}
{
var465 = ((val* (*)(val*))(var462->class->vft[COLOR_string__Object__to_s]))(var462) /* to_s on <var462:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var465); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var468 = var_mtype->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var468 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1135);
show_backtrace(1);
}
var466 = var468;
RET_LABEL467:(void)0;
}
}
{
var469 = separate_compiler__MProperty__const_color(var466);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var469); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce470) {
var471 = varonce470;
} else {
var472 = " = ";
var473 = 3;
var474 = string__NativeString__to_s_with_length(var472, var473);
var471 = var474;
varonce470 = var471;
}
if (varonce475) {
var476 = varonce475;
} else {
var477 = "vts_table->vts[";
var478 = 15;
var479 = string__NativeString__to_s_with_length(var477, var478);
var476 = var479;
varonce475 = var476;
}
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var482 = var_mtype->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var482 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1135);
show_backtrace(1);
}
var480 = var482;
RET_LABEL481:(void)0;
}
}
{
var483 = separate_compiler__MProperty__const_color(var480);
}
if (varonce484) {
var485 = varonce484;
} else {
var486 = "];";
var487 = 2;
var488 = string__NativeString__to_s_with_length(var486, var487);
var485 = var488;
varonce484 = var485;
}
var489 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var489 = array_instance Array[Object] */
var490 = 6;
var491 = NEW_array__NativeArray(var490, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var491)->values[0] = (val*) var_entry;
((struct instance_array__NativeArray*)var491)->values[1] = (val*) var471;
((struct instance_array__NativeArray*)var491)->values[2] = (val*) var_recv_ptr;
((struct instance_array__NativeArray*)var491)->values[3] = (val*) var476;
((struct instance_array__NativeArray*)var491)->values[4] = (val*) var483;
((struct instance_array__NativeArray*)var491)->values[5] = (val*) var485;
{
((void (*)(val*, val*, long))(var489->class->vft[COLOR_array__Array__with_native]))(var489, var491, var490) /* with_native on <var489:Array[Object]>*/;
}
}
{
var492 = ((val* (*)(val*))(var489->class->vft[COLOR_string__Object__to_s]))(var489) /* to_s on <var489:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var492); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce493) {
var494 = varonce493;
} else {
var495 = " = ";
var496 = 3;
var497 = string__NativeString__to_s_with_length(var495, var496);
var494 = var497;
varonce493 = var494;
}
if (varonce498) {
var499 = varonce498;
} else {
var500 = ".class->color;";
var501 = 14;
var502 = string__NativeString__to_s_with_length(var500, var501);
var499 = var502;
varonce498 = var499;
}
var503 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var503 = array_instance Array[Object] */
var504 = 4;
var505 = NEW_array__NativeArray(var504, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var505)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var505)->values[1] = (val*) var494;
((struct instance_array__NativeArray*)var505)->values[2] = (val*) var_entry;
((struct instance_array__NativeArray*)var505)->values[3] = (val*) var499;
{
((void (*)(val*, val*, long))(var503->class->vft[COLOR_array__Array__with_native]))(var503, var505, var504) /* with_native on <var503:Array[Object]>*/;
}
}
{
var506 = ((val* (*)(val*))(var503->class->vft[COLOR_string__Object__to_s]))(var503) /* to_s on <var503:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var506); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce507) {
var508 = varonce507;
} else {
var509 = " = ";
var510 = 3;
var511 = string__NativeString__to_s_with_length(var509, var510);
var508 = var511;
varonce507 = var508;
}
if (varonce512) {
var513 = varonce512;
} else {
var514 = ".class->id;";
var515 = 11;
var516 = string__NativeString__to_s_with_length(var514, var515);
var513 = var516;
varonce512 = var513;
}
var517 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var517 = array_instance Array[Object] */
var518 = 4;
var519 = NEW_array__NativeArray(var518, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var519)->values[0] = (val*) var_idtype;
((struct instance_array__NativeArray*)var519)->values[1] = (val*) var508;
((struct instance_array__NativeArray*)var519)->values[2] = (val*) var_entry;
((struct instance_array__NativeArray*)var519)->values[3] = (val*) var513;
{
((void (*)(val*, val*, long))(var517->class->vft[COLOR_array__Array__with_native]))(var517, var519, var518) /* with_native on <var517:Array[Object]>*/;
}
}
{
var520 = ((val* (*)(val*))(var517->class->vft[COLOR_string__Object__to_s]))(var517) /* to_s on <var517:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var520); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
var_522 = var_maybe_null;
if (var_maybe_null){
if (varonce523) {
var524 = varonce523;
} else {
var525 = "0";
var526 = 1;
var527 = string__NativeString__to_s_with_length(var525, var526);
var524 = var527;
varonce523 = var524;
}
{
var529 = string__FlatString___61d_61d(var_accept_null, var524);
var528 = var529;
}
var521 = var528;
} else {
var521 = var_522;
}
if (var521){
if (varonce530) {
var531 = varonce530;
} else {
var532 = "is_nullable";
var533 = 11;
var534 = string__NativeString__to_s_with_length(var532, var533);
var531 = var534;
varonce530 = var531;
}
{
var535 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var531);
}
var_is_nullable = var535;
if (varonce536) {
var537 = varonce536;
} else {
var538 = "short int ";
var539 = 10;
var540 = string__NativeString__to_s_with_length(var538, var539);
var537 = var540;
varonce536 = var537;
}
if (varonce541) {
var542 = varonce541;
} else {
var543 = ";";
var544 = 1;
var545 = string__NativeString__to_s_with_length(var543, var544);
var542 = var545;
varonce541 = var542;
}
var546 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var546 = array_instance Array[Object] */
var547 = 3;
var548 = NEW_array__NativeArray(var547, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var548)->values[0] = (val*) var537;
((struct instance_array__NativeArray*)var548)->values[1] = (val*) var_is_nullable;
((struct instance_array__NativeArray*)var548)->values[2] = (val*) var542;
{
((void (*)(val*, val*, long))(var546->class->vft[COLOR_array__Array__with_native]))(var546, var548, var547) /* with_native on <var546:Array[Object]>*/;
}
}
{
var549 = ((val* (*)(val*))(var546->class->vft[COLOR_string__Object__to_s]))(var546) /* to_s on <var546:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var549); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce550) {
var551 = varonce550;
} else {
var552 = " = ";
var553 = 3;
var554 = string__NativeString__to_s_with_length(var552, var553);
var551 = var554;
varonce550 = var551;
}
if (varonce555) {
var556 = varonce555;
} else {
var557 = ".is_nullable;";
var558 = 13;
var559 = string__NativeString__to_s_with_length(var557, var558);
var556 = var559;
varonce555 = var556;
}
var560 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var560 = array_instance Array[Object] */
var561 = 4;
var562 = NEW_array__NativeArray(var561, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var562)->values[0] = (val*) var_is_nullable;
((struct instance_array__NativeArray*)var562)->values[1] = (val*) var551;
((struct instance_array__NativeArray*)var562)->values[2] = (val*) var_entry;
((struct instance_array__NativeArray*)var562)->values[3] = (val*) var556;
{
((void (*)(val*, val*, long))(var560->class->vft[COLOR_array__Array__with_native]))(var560, var562, var561) /* with_native on <var560:Array[Object]>*/;
}
}
{
var563 = ((val* (*)(val*))(var560->class->vft[COLOR_string__Object__to_s]))(var560) /* to_s on <var560:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var563); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
var564 = string__String__to_s(var_is_nullable);
}
var_accept_null = var564;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var567 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var567 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var565 = var567;
RET_LABEL566:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var565) on <var565:AbstractCompiler(SeparateCompiler)> */
var570 = var565->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var565:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var570 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var568 = var570;
RET_LABEL569:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var568) on <var568:ModelBuilder> */
var573 = var568->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var568:ModelBuilder> */
if (unlikely(var573 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var571 = var573;
RET_LABEL572:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var571) on <var571:ToolContext> */
var576 = var571->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var571:ToolContext> */
if (unlikely(var576 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
show_backtrace(1);
}
var574 = var576;
RET_LABEL575:(void)0;
}
}
{
{ /* Inline opts#Option#value (var574) on <var574:OptionBool> */
var579 = var574->attrs[COLOR_opts__Option___value].val; /* _value on <var574:OptionBool> */
var577 = var579;
RET_LABEL578:(void)0;
}
}
var580 = ((struct instance_kernel__Bool*)var577)->value; /* autounbox from nullable Object to Bool */;
if (var580){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var583 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var583 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var581 = var583;
RET_LABEL582:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (var581) on <var581:AbstractCompiler(SeparateCompiler)> */
var586 = var581->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <var581:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var586 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 890);
show_backtrace(1);
}
var584 = var586;
RET_LABEL585:(void)0;
}
}
var_587 = var584;
var_588 = var_tag;
{
var589 = hash_collection__HashMap___91d_93d(var_587, var_588);
}
var590 = 1;
{
{ /* Inline kernel#Int#+ (var589,var590) on <var589:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var590:Int> isa OTHER */
/* <var590:Int> isa OTHER */
var593 = 1; /* easy <var590:Int> isa OTHER*/
if (unlikely(!var593)) {
var_class_name596 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name596);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var597 = ((struct instance_kernel__Int*)var589)->value; /* autounbox from nullable Object to Int */;
var598 = var597 + var590;
var591 = var598;
goto RET_LABEL592;
RET_LABEL592:(void)0;
}
}
{
var599 = BOX_kernel__Int(var591); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_587, var_588, var599); /* Direct call hash_collection#HashMap#[]= on <var_587:HashMap[String, Int]>*/
}
if (varonce600) {
var601 = varonce600;
} else {
var602 = "count_type_test_unresolved_";
var603 = 27;
var604 = string__NativeString__to_s_with_length(var602, var603);
var601 = var604;
varonce600 = var601;
}
if (varonce605) {
var606 = varonce605;
} else {
var607 = "++;";
var608 = 3;
var609 = string__NativeString__to_s_with_length(var607, var608);
var606 = var609;
varonce605 = var606;
}
var610 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var610 = array_instance Array[Object] */
var611 = 3;
var612 = NEW_array__NativeArray(var611, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var612)->values[0] = (val*) var601;
((struct instance_array__NativeArray*)var612)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var612)->values[2] = (val*) var606;
{
((void (*)(val*, val*, long))(var610->class->vft[COLOR_array__Array__with_native]))(var610, var612, var611) /* with_native on <var610:Array[Object]>*/;
}
}
{
var613 = ((val* (*)(val*))(var610->class->vft[COLOR_string__Object__to_s]))(var610) /* to_s on <var610:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var613); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
} else {
if (varonce614) {
var615 = varonce614;
} else {
var616 = "type_test(";
var617 = 10;
var618 = string__NativeString__to_s_with_length(var616, var617);
var615 = var618;
varonce614 = var615;
}
{
var619 = abstract_compiler__RuntimeVariable__inspect(var_value);
}
if (varonce620) {
var621 = varonce620;
} else {
var622 = ", ";
var623 = 2;
var624 = string__NativeString__to_s_with_length(var622, var623);
var621 = var624;
varonce620 = var621;
}
if (varonce625) {
var626 = varonce625;
} else {
var627 = ")";
var628 = 1;
var629 = string__NativeString__to_s_with_length(var627, var628);
var626 = var629;
varonce625 = var626;
}
var630 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var630 = array_instance Array[Object] */
var631 = 5;
var632 = NEW_array__NativeArray(var631, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var632)->values[0] = (val*) var615;
((struct instance_array__NativeArray*)var632)->values[1] = (val*) var619;
((struct instance_array__NativeArray*)var632)->values[2] = (val*) var621;
((struct instance_array__NativeArray*)var632)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var632)->values[4] = (val*) var626;
{
((void (*)(val*, val*, long))(var630->class->vft[COLOR_array__Array__with_native]))(var630, var632, var631) /* with_native on <var630:Array[Object]>*/;
}
}
{
var633 = ((val* (*)(val*))(var630->class->vft[COLOR_string__Object__to_s]))(var630) /* to_s on <var630:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__debug(self, var633); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateErasureCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 551);
show_backtrace(1);
}
}
if (var_maybe_null){
if (varonce634) {
var635 = varonce634;
} else {
var636 = "if(";
var637 = 3;
var638 = string__NativeString__to_s_with_length(var636, var637);
var635 = var638;
varonce634 = var635;
}
if (varonce639) {
var640 = varonce639;
} else {
var641 = " == NULL) {";
var642 = 11;
var643 = string__NativeString__to_s_with_length(var641, var642);
var640 = var643;
varonce639 = var640;
}
var644 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var644 = array_instance Array[Object] */
var645 = 3;
var646 = NEW_array__NativeArray(var645, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var646)->values[0] = (val*) var635;
((struct instance_array__NativeArray*)var646)->values[1] = (val*) var_value;
((struct instance_array__NativeArray*)var646)->values[2] = (val*) var640;
{
((void (*)(val*, val*, long))(var644->class->vft[COLOR_array__Array__with_native]))(var644, var646, var645) /* with_native on <var644:Array[Object]>*/;
}
}
{
var647 = ((val* (*)(val*))(var644->class->vft[COLOR_string__Object__to_s]))(var644) /* to_s on <var644:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var647); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce648) {
var649 = varonce648;
} else {
var650 = " = ";
var651 = 3;
var652 = string__NativeString__to_s_with_length(var650, var651);
var649 = var652;
varonce648 = var649;
}
if (varonce653) {
var654 = varonce653;
} else {
var655 = ";";
var656 = 1;
var657 = string__NativeString__to_s_with_length(var655, var656);
var654 = var657;
varonce653 = var654;
}
var658 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var658 = array_instance Array[Object] */
var659 = 4;
var660 = NEW_array__NativeArray(var659, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var660)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var660)->values[1] = (val*) var649;
((struct instance_array__NativeArray*)var660)->values[2] = (val*) var_accept_null;
((struct instance_array__NativeArray*)var660)->values[3] = (val*) var654;
{
((void (*)(val*, val*, long))(var658->class->vft[COLOR_array__Array__with_native]))(var658, var660, var659) /* with_native on <var658:Array[Object]>*/;
}
}
{
var661 = ((val* (*)(val*))(var658->class->vft[COLOR_string__Object__to_s]))(var658) /* to_s on <var658:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var661); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce662) {
var663 = varonce662;
} else {
var664 = "} else {";
var665 = 8;
var666 = string__NativeString__to_s_with_length(var664, var665);
var663 = var666;
varonce662 = var663;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var663); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
if (varonce667) {
var668 = varonce667;
} else {
var669 = "if(";
var670 = 3;
var671 = string__NativeString__to_s_with_length(var669, var670);
var668 = var671;
varonce667 = var668;
}
if (varonce672) {
var673 = varonce672;
} else {
var674 = " >= ";
var675 = 4;
var676 = string__NativeString__to_s_with_length(var674, var675);
var673 = var676;
varonce672 = var673;
}
if (varonce677) {
var678 = varonce677;
} else {
var679 = "type_table->size) {";
var680 = 19;
var681 = string__NativeString__to_s_with_length(var679, var680);
var678 = var681;
varonce677 = var678;
}
var682 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var682 = array_instance Array[Object] */
var683 = 5;
var684 = NEW_array__NativeArray(var683, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var684)->values[0] = (val*) var668;
((struct instance_array__NativeArray*)var684)->values[1] = (val*) var_cltype;
((struct instance_array__NativeArray*)var684)->values[2] = (val*) var673;
((struct instance_array__NativeArray*)var684)->values[3] = (val*) var_class_ptr;
((struct instance_array__NativeArray*)var684)->values[4] = (val*) var678;
{
((void (*)(val*, val*, long))(var682->class->vft[COLOR_array__Array__with_native]))(var682, var684, var683) /* with_native on <var682:Array[Object]>*/;
}
}
{
var685 = ((val* (*)(val*))(var682->class->vft[COLOR_string__Object__to_s]))(var682) /* to_s on <var682:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var685); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce686) {
var687 = varonce686;
} else {
var688 = " = 0;";
var689 = 5;
var690 = string__NativeString__to_s_with_length(var688, var689);
var687 = var690;
varonce686 = var687;
}
var691 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var691 = array_instance Array[Object] */
var692 = 2;
var693 = NEW_array__NativeArray(var692, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var693)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var693)->values[1] = (val*) var687;
{
((void (*)(val*, val*, long))(var691->class->vft[COLOR_array__Array__with_native]))(var691, var693, var692) /* with_native on <var691:Array[Object]>*/;
}
}
{
var694 = ((val* (*)(val*))(var691->class->vft[COLOR_string__Object__to_s]))(var691) /* to_s on <var691:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var694); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce695) {
var696 = varonce695;
} else {
var697 = "} else {";
var698 = 8;
var699 = string__NativeString__to_s_with_length(var697, var698);
var696 = var699;
varonce695 = var696;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var696); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce700) {
var701 = varonce700;
} else {
var702 = " = ";
var703 = 3;
var704 = string__NativeString__to_s_with_length(var702, var703);
var701 = var704;
varonce700 = var701;
}
if (varonce705) {
var706 = varonce705;
} else {
var707 = "type_table->table[";
var708 = 18;
var709 = string__NativeString__to_s_with_length(var707, var708);
var706 = var709;
varonce705 = var706;
}
if (varonce710) {
var711 = varonce710;
} else {
var712 = "] == ";
var713 = 5;
var714 = string__NativeString__to_s_with_length(var712, var713);
var711 = var714;
varonce710 = var711;
}
if (varonce715) {
var716 = varonce715;
} else {
var717 = ";";
var718 = 1;
var719 = string__NativeString__to_s_with_length(var717, var718);
var716 = var719;
varonce715 = var716;
}
var720 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var720 = array_instance Array[Object] */
var721 = 8;
var722 = NEW_array__NativeArray(var721, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var722)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var722)->values[1] = (val*) var701;
((struct instance_array__NativeArray*)var722)->values[2] = (val*) var_class_ptr;
((struct instance_array__NativeArray*)var722)->values[3] = (val*) var706;
((struct instance_array__NativeArray*)var722)->values[4] = (val*) var_cltype;
((struct instance_array__NativeArray*)var722)->values[5] = (val*) var711;
((struct instance_array__NativeArray*)var722)->values[6] = (val*) var_idtype;
((struct instance_array__NativeArray*)var722)->values[7] = (val*) var716;
{
((void (*)(val*, val*, long))(var720->class->vft[COLOR_array__Array__with_native]))(var720, var722, var721) /* with_native on <var720:Array[Object]>*/;
}
}
{
var723 = ((val* (*)(val*))(var720->class->vft[COLOR_string__Object__to_s]))(var720) /* to_s on <var720:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var723); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce724) {
var725 = varonce724;
} else {
var726 = "}";
var727 = 1;
var728 = string__NativeString__to_s_with_length(var726, var727);
var725 = var728;
varonce724 = var725;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var725); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (var_maybe_null){
if (varonce729) {
var730 = varonce729;
} else {
var731 = "}";
var732 = 1;
var733 = string__NativeString__to_s_with_length(var731, var732);
var730 = var733;
varonce729 = var730;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var730); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#type_test for (self: Object, RuntimeVariable, MType, String): RuntimeVariable */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_erasure_compiler__SeparateErasureCompilerVisitor__type_test(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#class_name_string for (self: SeparateErasureCompilerVisitor, RuntimeVariable): String */
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var_res /* var res: String */;
static val* varonce6;
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
val* var20 /* : MType */;
val* var22 /* : MType */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
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
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : MType */;
val* var57 /* : MType */;
val* var58 /* : String */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
val* var68 /* : MType */;
val* var70 /* : MType */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
val* var80 /* : String */;
var_value = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "var_class_name";
var3 = 14;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var1);
}
var_res = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "const char* ";
var9 = 12;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ";";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var22 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_compiler__MType__ctype]))(var20) /* ctype on <var20:MType>*/;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "val*";
var27 = 4;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
var30 = string__FlatString___61d_61d(var23, var25);
var29 = var30;
}
if (var29){
if (varonce31) {
var32 = varonce31;
} else {
var33 = " = ";
var34 = 3;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = " == NULL ? \"null\" : ";
var39 = 20;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "->class->name;";
var44 = 14;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 6;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var48)->values[3] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var48)->values[5] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
if (varonce50) {
var51 = varonce50;
} else {
var52 = "class_";
var53 = 6;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var57 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_abstract_compiler__MType__c_name]))(var55) /* c_name on <var55:MType>*/;
}
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 2;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var58;
{
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
}
{
var62 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var62); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = " = class_";
var66 = 9;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var70 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = ((val* (*)(val*))(var68->class->vft[COLOR_abstract_compiler__MType__c_name]))(var68) /* c_name on <var68:MType>*/;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = ".name;";
var75 = 6;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 4;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var64;
((struct instance_array__NativeArray*)var79)->values[2] = (val*) var71;
((struct instance_array__NativeArray*)var79)->values[3] = (val*) var73;
{
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val*))(var77->class->vft[COLOR_string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var80); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#class_name_string for (self: Object, RuntimeVariable): String */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_erasure_compiler__SeparateErasureCompilerVisitor__class_name_string(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#native_array_instance for (self: SeparateErasureCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_elttype /* var elttype: MType */;
val* var_length /* var length: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var6 /* : Array[MType] */;
long var7 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var8 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var9 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var10 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
static val* varonce28;
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
var_elttype = p0;
var_length = p1;
if (varonce) {
var1 = varonce;
} else {
var2 = "NativeArray";
var3 = 11;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var1);
}
var_nclass = var5;
var6 = NEW_array__Array(&type_array__Arraymodel__MType);
var7 = 1;
{
array__Array__with_capacity(var6, var7); /* Direct call array#Array#with_capacity on <var6:Array[MType]>*/
}
var_ = var6;
{
array__AbstractArray__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var8 = model__MClass__get_mtype(var_nclass, var_);
}
var_mtype = var8;
{
var9 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_mtype);
}
var_res = var9;
var10 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,var10) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = var10; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL11:(void)0;
}
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = "NEW_";
var15 = 4;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
{
var17 = abstract_compiler__MClass__c_name(var_nclass);
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 2;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var17;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " = NEW_";
var25 = 7;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
var27 = abstract_compiler__MClass__c_name(var_nclass);
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "(";
var31 = 1;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = ");";
var36 = 2;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 6;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var23;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var27;
((struct instance_array__NativeArray*)var40)->values[3] = (val*) var29;
((struct instance_array__NativeArray*)var40)->values[4] = (val*) var_length;
((struct instance_array__NativeArray*)var40)->values[5] = (val*) var34;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#native_array_instance for (self: Object, MType, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_erasure_compiler__SeparateErasureCompilerVisitor__native_array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array for (self: SeparateErasureCompilerVisitor, MType, Array[RuntimeVariable]) */
void separate_erasure_compiler__SeparateErasureCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
val* var_ret_type /* var ret_type: MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_ret /* var ret: MClassType */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[Object] */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
long var27 /* : Int */;
val* var28 /* : nullable Object */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
val* var38 /* : RuntimeVariable */;
var_ret_type = p0;
var_arguments = p1;
/* <var_ret_type:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_ret_type->type->table_size) {
var = 0;
} else {
var = var_ret_type->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = var_ret_type == NULL ? "null" : var_ret_type->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/separate_erasure_compiler.nit", 598);
show_backtrace(1);
}
var_ret = var_ret_type;
if (varonce) {
var1 = varonce;
} else {
var2 = "NEW_";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:MClassType> */
var7 = var_ret->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_ret:MClassType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__MClass__c_name(var5);
}
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_array__NativeArray(var10, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var11)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var11)->values[1] = (val*) var8;
{
((void (*)(val*, val*, long))(var9->class->vft[COLOR_array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var12 = ((val* (*)(val*))(var9->class->vft[COLOR_string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var12); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "NEW_";
var16 = 4;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:MClassType> */
var20 = var_ret->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_ret:MClassType> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = abstract_compiler__MClass__c_name(var18);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "(";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = 1;
{
var28 = array__Array___91d_93d(var_arguments, var27);
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = ")";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 5;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var36)->values[3] = (val*) var28;
((struct instance_array__NativeArray*)var36)->values[4] = (val*) var30;
{
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
var38 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var37, var_ret_type);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(self, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateErasureCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array for (self: Object, MType, Array[RuntimeVariable]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
separate_erasure_compiler__SeparateErasureCompilerVisitor__calloc_array(self, p0, p1); /* Direct call separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array on <self:Object(SeparateErasureCompilerVisitor)>*/
RET_LABEL:;
}
