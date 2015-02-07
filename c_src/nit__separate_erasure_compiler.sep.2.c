#include "nit__separate_erasure_compiler.sep.0.h"
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#type_test for (self: SeparateErasureCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
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
val* var80 /* : nullable StaticFrame */;
val* var82 /* : nullable StaticFrame */;
val* var83 /* : MPropDef */;
val* var85 /* : MPropDef */;
val* var86 /* : MClassDef */;
val* var88 /* : MClassDef */;
val* var89 /* : MClassType */;
val* var91 /* : MClassType */;
val* var92 /* : nullable StaticFrame */;
val* var94 /* : nullable StaticFrame */;
val* var95 /* : MPropDef */;
val* var97 /* : MPropDef */;
val* var98 /* : MClassDef */;
val* var100 /* : MClassDef */;
val* var101 /* : MClassType */;
val* var103 /* : MClassType */;
val* var104 /* : nullable StaticFrame */;
val* var106 /* : nullable StaticFrame */;
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
val* var132 /* : nullable StaticFrame */;
val* var134 /* : nullable StaticFrame */;
val* var135 /* : MPropDef */;
val* var137 /* : MPropDef */;
val* var138 /* : MClassDef */;
val* var140 /* : MClassDef */;
val* var141 /* : MModule */;
val* var143 /* : MModule */;
val* var144 /* : nullable StaticFrame */;
val* var146 /* : nullable StaticFrame */;
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
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : FlatString */;
val* var239 /* : Array[Object] */;
long var240 /* : Int */;
val* var241 /* : NativeArray[Object] */;
val* var242 /* : String */;
val* var_class_ptr /* var class_ptr: nullable Object */;
val* var243 /* : MType */;
val* var245 /* : MType */;
short int var246 /* : Bool */;
int cltype247;
int idtype248;
const char* var_class_name249;
val* var250 /* : MClass */;
val* var252 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
long var256 /* : Int */;
val* var257 /* : FlatString */;
val* var258 /* : String */;
val* var259 /* : Array[Object] */;
long var260 /* : Int */;
val* var261 /* : NativeArray[Object] */;
val* var262 /* : String */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
long var266 /* : Int */;
val* var267 /* : FlatString */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
long var272 /* : Int */;
val* var273 /* : FlatString */;
val* var274 /* : Array[Object] */;
long var275 /* : Int */;
val* var276 /* : NativeArray[Object] */;
val* var277 /* : String */;
short int var278 /* : Bool */;
int cltype279;
int idtype280;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : FlatString */;
val* var286 /* : MClass */;
val* var288 /* : MClass */;
val* var289 /* : String */;
val* var290 /* : Array[Object] */;
long var291 /* : Int */;
val* var292 /* : NativeArray[Object] */;
val* var293 /* : String */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : NativeString */;
long var297 /* : Int */;
val* var298 /* : FlatString */;
val* var299 /* : MClass */;
val* var301 /* : MClass */;
val* var302 /* : String */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
long var306 /* : Int */;
val* var307 /* : FlatString */;
val* var308 /* : Array[Object] */;
long var309 /* : Int */;
val* var310 /* : NativeArray[Object] */;
val* var311 /* : String */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
long var315 /* : Int */;
val* var316 /* : FlatString */;
val* var317 /* : MClass */;
val* var319 /* : MClass */;
val* var320 /* : String */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
long var324 /* : Int */;
val* var325 /* : FlatString */;
val* var326 /* : Array[Object] */;
long var327 /* : Int */;
val* var328 /* : NativeArray[Object] */;
val* var329 /* : String */;
val* var330 /* : AbstractCompiler */;
val* var332 /* : AbstractCompiler */;
val* var333 /* : ModelBuilder */;
val* var335 /* : ModelBuilder */;
val* var336 /* : ToolContext */;
val* var338 /* : ToolContext */;
val* var339 /* : OptionBool */;
val* var341 /* : OptionBool */;
val* var342 /* : nullable Object */;
val* var344 /* : nullable Object */;
short int var345 /* : Bool */;
val* var346 /* : AbstractCompiler */;
val* var348 /* : AbstractCompiler */;
val* var349 /* : HashMap[String, Int] */;
val* var351 /* : HashMap[String, Int] */;
val* var_352 /* var : HashMap[String, Int] */;
val* var_353 /* var : String */;
val* var354 /* : nullable Object */;
long var355 /* : Int */;
long var356 /* : Int */;
short int var358 /* : Bool */;
int cltype359;
int idtype360;
const char* var_class_name361;
long var362 /* : Int */;
long var363 /* : Int */;
val* var364 /* : nullable Object */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
long var368 /* : Int */;
val* var369 /* : FlatString */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : FlatString */;
val* var375 /* : Array[Object] */;
long var376 /* : Int */;
val* var377 /* : NativeArray[Object] */;
val* var378 /* : String */;
short int var379 /* : Bool */;
int cltype380;
int idtype381;
val* var382 /* : nullable StaticFrame */;
val* var384 /* : nullable StaticFrame */;
val* var385 /* : Array[RuntimeVariable] */;
val* var387 /* : Array[RuntimeVariable] */;
val* var388 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var389 /* : MType */;
val* var391 /* : MType */;
val* var392 /* : String */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
long var396 /* : Int */;
val* var397 /* : FlatString */;
short int var398 /* : Bool */;
static val* varonce399;
val* var400 /* : String */;
char* var401 /* : NativeString */;
long var402 /* : Int */;
val* var403 /* : FlatString */;
val* var404 /* : Array[Object] */;
long var405 /* : Int */;
val* var406 /* : NativeArray[Object] */;
val* var407 /* : String */;
val* var_recv_ptr /* var recv_ptr: nullable Object */;
val* var408 /* : MType */;
val* var410 /* : MType */;
short int var411 /* : Bool */;
int cltype412;
int idtype413;
const char* var_class_name414;
val* var415 /* : MClass */;
val* var417 /* : MClass */;
val* var_mclass418 /* var mclass: MClass */;
static val* varonce419;
val* var420 /* : String */;
char* var421 /* : NativeString */;
long var422 /* : Int */;
val* var423 /* : FlatString */;
val* var424 /* : String */;
val* var425 /* : Array[Object] */;
long var426 /* : Int */;
val* var427 /* : NativeArray[Object] */;
val* var428 /* : String */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
long var432 /* : Int */;
val* var433 /* : FlatString */;
val* var434 /* : String */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
long var438 /* : Int */;
val* var439 /* : FlatString */;
val* var440 /* : Array[Object] */;
long var441 /* : Int */;
val* var442 /* : NativeArray[Object] */;
val* var443 /* : String */;
static val* varonce444;
val* var445 /* : String */;
char* var446 /* : NativeString */;
long var447 /* : Int */;
val* var448 /* : FlatString */;
val* var449 /* : String */;
val* var_entry /* var entry: String */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
long var453 /* : Int */;
val* var454 /* : FlatString */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
long var458 /* : Int */;
val* var459 /* : FlatString */;
val* var460 /* : Array[Object] */;
long var461 /* : Int */;
val* var462 /* : NativeArray[Object] */;
val* var463 /* : String */;
val* var464 /* : MVirtualTypeProp */;
val* var466 /* : MVirtualTypeProp */;
val* var467 /* : String */;
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
val* var478 /* : MVirtualTypeProp */;
val* var480 /* : MVirtualTypeProp */;
val* var481 /* : String */;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : NativeString */;
long var485 /* : Int */;
val* var486 /* : FlatString */;
val* var487 /* : Array[Object] */;
long var488 /* : Int */;
val* var489 /* : NativeArray[Object] */;
val* var490 /* : String */;
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
val* var501 /* : Array[Object] */;
long var502 /* : Int */;
val* var503 /* : NativeArray[Object] */;
val* var504 /* : String */;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : NativeString */;
long var508 /* : Int */;
val* var509 /* : FlatString */;
static val* varonce510;
val* var511 /* : String */;
char* var512 /* : NativeString */;
long var513 /* : Int */;
val* var514 /* : FlatString */;
val* var515 /* : Array[Object] */;
long var516 /* : Int */;
val* var517 /* : NativeArray[Object] */;
val* var518 /* : String */;
short int var519 /* : Bool */;
short int var_520 /* var : Bool */;
static val* varonce521;
val* var522 /* : String */;
char* var523 /* : NativeString */;
long var524 /* : Int */;
val* var525 /* : FlatString */;
short int var526 /* : Bool */;
static val* varonce527;
val* var528 /* : String */;
char* var529 /* : NativeString */;
long var530 /* : Int */;
val* var531 /* : FlatString */;
val* var532 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
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
val* var543 /* : Array[Object] */;
long var544 /* : Int */;
val* var545 /* : NativeArray[Object] */;
val* var546 /* : String */;
static val* varonce547;
val* var548 /* : String */;
char* var549 /* : NativeString */;
long var550 /* : Int */;
val* var551 /* : FlatString */;
static val* varonce552;
val* var553 /* : String */;
char* var554 /* : NativeString */;
long var555 /* : Int */;
val* var556 /* : FlatString */;
val* var557 /* : Array[Object] */;
long var558 /* : Int */;
val* var559 /* : NativeArray[Object] */;
val* var560 /* : String */;
val* var561 /* : String */;
val* var562 /* : AbstractCompiler */;
val* var564 /* : AbstractCompiler */;
val* var565 /* : ModelBuilder */;
val* var567 /* : ModelBuilder */;
val* var568 /* : ToolContext */;
val* var570 /* : ToolContext */;
val* var571 /* : OptionBool */;
val* var573 /* : OptionBool */;
val* var574 /* : nullable Object */;
val* var576 /* : nullable Object */;
short int var577 /* : Bool */;
val* var578 /* : AbstractCompiler */;
val* var580 /* : AbstractCompiler */;
val* var581 /* : HashMap[String, Int] */;
val* var583 /* : HashMap[String, Int] */;
val* var_584 /* var : HashMap[String, Int] */;
val* var_585 /* var : String */;
val* var586 /* : nullable Object */;
long var587 /* : Int */;
long var588 /* : Int */;
short int var590 /* : Bool */;
int cltype591;
int idtype592;
const char* var_class_name593;
long var594 /* : Int */;
long var595 /* : Int */;
val* var596 /* : nullable Object */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
long var600 /* : Int */;
val* var601 /* : FlatString */;
static val* varonce602;
val* var603 /* : String */;
char* var604 /* : NativeString */;
long var605 /* : Int */;
val* var606 /* : FlatString */;
val* var607 /* : Array[Object] */;
long var608 /* : Int */;
val* var609 /* : NativeArray[Object] */;
val* var610 /* : String */;
static val* varonce611;
val* var612 /* : String */;
char* var613 /* : NativeString */;
long var614 /* : Int */;
val* var615 /* : FlatString */;
val* var616 /* : String */;
static val* varonce617;
val* var618 /* : String */;
char* var619 /* : NativeString */;
long var620 /* : Int */;
val* var621 /* : FlatString */;
static val* varonce622;
val* var623 /* : String */;
char* var624 /* : NativeString */;
long var625 /* : Int */;
val* var626 /* : FlatString */;
val* var627 /* : Array[Object] */;
long var628 /* : Int */;
val* var629 /* : NativeArray[Object] */;
val* var630 /* : String */;
static val* varonce631;
val* var632 /* : String */;
char* var633 /* : NativeString */;
long var634 /* : Int */;
val* var635 /* : FlatString */;
static val* varonce636;
val* var637 /* : String */;
char* var638 /* : NativeString */;
long var639 /* : Int */;
val* var640 /* : FlatString */;
val* var641 /* : Array[Object] */;
long var642 /* : Int */;
val* var643 /* : NativeArray[Object] */;
val* var644 /* : String */;
static val* varonce645;
val* var646 /* : String */;
char* var647 /* : NativeString */;
long var648 /* : Int */;
val* var649 /* : FlatString */;
static val* varonce650;
val* var651 /* : String */;
char* var652 /* : NativeString */;
long var653 /* : Int */;
val* var654 /* : FlatString */;
val* var655 /* : Array[Object] */;
long var656 /* : Int */;
val* var657 /* : NativeArray[Object] */;
val* var658 /* : String */;
static val* varonce659;
val* var660 /* : String */;
char* var661 /* : NativeString */;
long var662 /* : Int */;
val* var663 /* : FlatString */;
static val* varonce664;
val* var665 /* : String */;
char* var666 /* : NativeString */;
long var667 /* : Int */;
val* var668 /* : FlatString */;
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
val* var717 /* : Array[Object] */;
long var718 /* : Int */;
val* var719 /* : NativeArray[Object] */;
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
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "/* type test for ";
var3 = 17;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = " isa ";
var9 = 5;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = " */";
var14 = 3;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 5;
var18 = NEW_standard__NativeArray(var17, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var18)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var18)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var18)->values[2] = (val*) var7;
((struct instance_standard__NativeArray*)var18)->values[3] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var18)->values[4] = (val*) var12;
{
((void (*)(val* self, val* p0, long p1))(var16->class->vft[COLOR_standard__array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val* self))(var16->class->vft[COLOR_standard__string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
var20 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var21 = nit___nit__AbstractCompilerVisitor___new_var(self, var20);
}
var_res = var21;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "cltype";
var25 = 6;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
var27 = nit___nit__AbstractCompilerVisitor___get_name(self, var23);
}
var_cltype = var27;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "int ";
var31 = 4;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = ";";
var36 = 1;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_standard__NativeArray(var39, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var40)->values[0] = (val*) var29;
((struct instance_standard__NativeArray*)var40)->values[1] = (val*) var_cltype;
((struct instance_standard__NativeArray*)var40)->values[2] = (val*) var34;
{
((void (*)(val* self, val* p0, long p1))(var38->class->vft[COLOR_standard__array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val* self))(var38->class->vft[COLOR_standard__string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "idtype";
var45 = 6;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var47 = nit___nit__AbstractCompilerVisitor___get_name(self, var43);
}
var_idtype = var47;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "int ";
var51 = 4;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = ";";
var56 = 1;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 3;
var60 = NEW_standard__NativeArray(var59, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var60)->values[0] = (val*) var49;
((struct instance_standard__NativeArray*)var60)->values[1] = (val*) var_idtype;
((struct instance_standard__NativeArray*)var60)->values[2] = (val*) var54;
{
((void (*)(val* self, val* p0, long p1))(var58->class->vft[COLOR_standard__array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val* self))(var58->class->vft[COLOR_standard__string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
{
var62 = nit___nit__SeparateCompilerVisitor___maybe_null(self, var_value);
}
var_maybe_null = var62;
if (varonce63) {
var64 = varonce63;
} else {
var65 = "0";
var66 = 1;
var67 = standard___standard__NativeString___to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var_accept_null = var64;
/* <var_mtype:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var68 = 0;
} else {
var68 = var_mtype->type->type_table[cltype] == idtype;
}
if (var68){
{
{ /* Inline model#MNullableType#mtype (var_mtype) on <var_mtype:MType(MNullableType)> */
var71 = var_mtype->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_mtype:MType(MNullableType)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
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
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var_accept_null = var73;
} else {
}
/* <var_mtype:MType> isa MParameterType */
cltype78 = type_nit__MParameterType.color;
idtype79 = type_nit__MParameterType.id;
if(cltype78 >= var_mtype->type->table_size) {
var77 = 0;
} else {
var77 = var_mtype->type->type_table[cltype78] == idtype79;
}
if (var77){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var82 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
if (var80 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 510);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var80) on <var80:nullable StaticFrame> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var85 = var80->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var80:nullable StaticFrame> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var83) on <var83:MPropDef> */
var88 = var83->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var83:MPropDef> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var86) on <var86:MClassDef> */
var91 = var86->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var86:MClassDef> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var94 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (var92 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 510);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var92) on <var92:nullable StaticFrame> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var97 = var92->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var92:nullable StaticFrame> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var95) on <var95:MPropDef> */
var100 = var95->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var95:MPropDef> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var98) on <var98:MClassDef> */
var103 = var98->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var98:MClassDef> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var106 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (var104 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 510);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var104) on <var104:nullable StaticFrame> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var109 = var104->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var104:nullable StaticFrame> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var107) on <var107:MPropDef> */
var112 = var107->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var107:MPropDef> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var110) on <var110:MClassDef> */
var115 = var110->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var110:MClassDef> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
var116 = 0;
{
var117 = nit___nit__MParameterType___MType__resolve_for(var_mtype, var89, var101, var113, var116);
}
var_mtype = var117;
/* <var_mtype:MType> isa MNullableType */
cltype119 = type_nit__MNullableType.color;
idtype120 = type_nit__MNullableType.id;
if(cltype119 >= var_mtype->type->table_size) {
var118 = 0;
} else {
var118 = var_mtype->type->type_table[cltype119] == idtype120;
}
if (var118){
{
{ /* Inline model#MNullableType#mtype (var_mtype) on <var_mtype:MType(MNullableType)> */
var123 = var_mtype->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_mtype:MType(MNullableType)> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
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
var128 = standard___standard__NativeString___to_s_with_length(var126, var127);
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
var131 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var134 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (var132 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 517);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var132) on <var132:nullable StaticFrame> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var137 = var132->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var132:nullable StaticFrame> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var135) on <var135:MPropDef> */
var140 = var135->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var135:MPropDef> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var138) on <var138:MClassDef> */
var143 = var138->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var138:MClassDef> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var146 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
if (var144 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 517);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var144) on <var144:nullable StaticFrame> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var149 = var144->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var144:nullable StaticFrame> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var147) on <var147:MPropDef> */
var152 = var147->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var147:MPropDef> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var150) on <var150:MClassDef> */
var155 = var150->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var150:MClassDef> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = nit___nit__MType___is_subtype(var129, var141, var153, var_mtype);
}
if (var156){
if (varonce157) {
var158 = varonce157;
} else {
var159 = " = 1; /* easy ";
var160 = 14;
var161 = standard___standard__NativeString___to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
{
var162 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = " isa ";
var166 = 5;
var167 = standard___standard__NativeString___to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = "*/";
var171 = 2;
var172 = standard___standard__NativeString___to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 6;
var175 = NEW_standard__NativeArray(var174, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var175)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var175)->values[1] = (val*) var158;
((struct instance_standard__NativeArray*)var175)->values[2] = (val*) var162;
((struct instance_standard__NativeArray*)var175)->values[3] = (val*) var164;
((struct instance_standard__NativeArray*)var175)->values[4] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var175)->values[5] = (val*) var169;
{
((void (*)(val* self, val* p0, long p1))(var173->class->vft[COLOR_standard__array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
}
{
var176 = ((val* (*)(val* self))(var173->class->vft[COLOR_standard__string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var176); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var179 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var179 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var177) on <var177:AbstractCompiler(SeparateCompiler)> */
var182 = var177->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var177:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var180) on <var180:ModelBuilder> */
var185 = var180->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var180:ModelBuilder> */
if (unlikely(var185 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var183) on <var183:ToolContext> */
var188 = var183->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var183:ToolContext> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
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
var192 = ((struct instance_standard__Bool*)var189)->value; /* autounbox from nullable Object to Bool */;
if (var192){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var195 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (var193) on <var193:AbstractCompiler(SeparateCompiler)> */
var198 = var193->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <var193:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 966);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
var_ = var196;
var_199 = var_tag;
{
var200 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_, var_199);
}
var201 = 1;
{
{ /* Inline kernel#Int#+ (var200,var201) on <var200:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var201:Int> isa OTHER */
/* <var201:Int> isa OTHER */
var204 = 1; /* easy <var201:Int> isa OTHER*/
if (unlikely(!var204)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var207 = ((struct instance_standard__Int*)var200)->value; /* autounbox from nullable Object to Int */;
var208 = var207 + var201;
var202 = var208;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
}
{
var209 = BOX_standard__Int(var202); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_, var_199, var209); /* Direct call hash_collection#HashMap#[]= on <var_:HashMap[String, Int]>*/
}
if (varonce210) {
var211 = varonce210;
} else {
var212 = "count_type_test_skipped_";
var213 = 24;
var214 = standard___standard__NativeString___to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
if (varonce215) {
var216 = varonce215;
} else {
var217 = "++;";
var218 = 3;
var219 = standard___standard__NativeString___to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
var220 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var220 = array_instance Array[Object] */
var221 = 3;
var222 = NEW_standard__NativeArray(var221, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var222)->values[0] = (val*) var211;
((struct instance_standard__NativeArray*)var222)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var222)->values[2] = (val*) var216;
{
((void (*)(val* self, val* p0, long p1))(var220->class->vft[COLOR_standard__array__Array__with_native]))(var220, var222, var221) /* with_native on <var220:Array[Object]>*/;
}
}
{
var223 = ((val* (*)(val* self))(var220->class->vft[COLOR_standard__string__Object__to_s]))(var220) /* to_s on <var220:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var223); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var226 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var226 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var224 = var226;
RET_LABEL225:(void)0;
}
}
{
var227 = ((val* (*)(val* self))(var224->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var224) /* ctype on <var224:MType>*/;
}
if (varonce228) {
var229 = varonce228;
} else {
var230 = "val*";
var231 = 4;
var232 = standard___standard__NativeString___to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
{
var233 = ((short int (*)(val* self, val* p0))(var227->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var227, var229) /* == on <var227:String>*/;
}
if (var233){
if (varonce234) {
var235 = varonce234;
} else {
var236 = "->class->";
var237 = 9;
var238 = standard___standard__NativeString___to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
var239 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var239 = array_instance Array[Object] */
var240 = 2;
var241 = NEW_standard__NativeArray(var240, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var241)->values[0] = (val*) var_value;
((struct instance_standard__NativeArray*)var241)->values[1] = (val*) var235;
{
((void (*)(val* self, val* p0, long p1))(var239->class->vft[COLOR_standard__array__Array__with_native]))(var239, var241, var240) /* with_native on <var239:Array[Object]>*/;
}
}
{
var242 = ((val* (*)(val* self))(var239->class->vft[COLOR_standard__string__Object__to_s]))(var239) /* to_s on <var239:Array[Object]>*/;
}
var_class_ptr = var242;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var245 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var245 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var243 = var245;
RET_LABEL244:(void)0;
}
}
/* <var243:MType> isa MClassType */
cltype247 = type_nit__MClassType.color;
idtype248 = type_nit__MClassType.id;
if(cltype247 >= var243->type->table_size) {
var246 = 0;
} else {
var246 = var243->type->type_table[cltype247] == idtype248;
}
if (unlikely(!var246)) {
var_class_name249 = var243 == NULL ? "null" : var243->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name249);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 530);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var243) on <var243:MType(MClassType)> */
var252 = var243->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var243:MType(MClassType)> */
if (unlikely(var252 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
var_mclass = var250;
if (varonce253) {
var254 = varonce253;
} else {
var255 = "class_";
var256 = 6;
var257 = standard___standard__NativeString___to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
{
var258 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass);
}
var259 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var259 = array_instance Array[Object] */
var260 = 2;
var261 = NEW_standard__NativeArray(var260, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var261)->values[0] = (val*) var254;
((struct instance_standard__NativeArray*)var261)->values[1] = (val*) var258;
{
((void (*)(val* self, val* p0, long p1))(var259->class->vft[COLOR_standard__array__Array__with_native]))(var259, var261, var260) /* with_native on <var259:Array[Object]>*/;
}
}
{
var262 = ((val* (*)(val* self))(var259->class->vft[COLOR_standard__string__Object__to_s]))(var259) /* to_s on <var259:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var262); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce263) {
var264 = varonce263;
} else {
var265 = "class_";
var266 = 6;
var267 = standard___standard__NativeString___to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
}
{
var268 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass);
}
if (varonce269) {
var270 = varonce269;
} else {
var271 = ".";
var272 = 1;
var273 = standard___standard__NativeString___to_s_with_length(var271, var272);
var270 = var273;
varonce269 = var270;
}
var274 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var274 = array_instance Array[Object] */
var275 = 3;
var276 = NEW_standard__NativeArray(var275, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var276)->values[0] = (val*) var264;
((struct instance_standard__NativeArray*)var276)->values[1] = (val*) var268;
((struct instance_standard__NativeArray*)var276)->values[2] = (val*) var270;
{
((void (*)(val* self, val* p0, long p1))(var274->class->vft[COLOR_standard__array__Array__with_native]))(var274, var276, var275) /* with_native on <var274:Array[Object]>*/;
}
}
{
var277 = ((val* (*)(val* self))(var274->class->vft[COLOR_standard__string__Object__to_s]))(var274) /* to_s on <var274:Array[Object]>*/;
}
var_class_ptr = var277;
}
/* <var_mtype:MType> isa MClassType */
cltype279 = type_nit__MClassType.color;
idtype280 = type_nit__MClassType.id;
if(cltype279 >= var_mtype->type->table_size) {
var278 = 0;
} else {
var278 = var_mtype->type->type_table[cltype279] == idtype280;
}
if (var278){
if (varonce281) {
var282 = varonce281;
} else {
var283 = "class_";
var284 = 6;
var285 = standard___standard__NativeString___to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var288 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var288 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var286 = var288;
RET_LABEL287:(void)0;
}
}
{
var289 = nit___nit__MClass___nit__model_base__MEntity__c_name(var286);
}
var290 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var290 = array_instance Array[Object] */
var291 = 2;
var292 = NEW_standard__NativeArray(var291, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var292)->values[0] = (val*) var282;
((struct instance_standard__NativeArray*)var292)->values[1] = (val*) var289;
{
((void (*)(val* self, val* p0, long p1))(var290->class->vft[COLOR_standard__array__Array__with_native]))(var290, var292, var291) /* with_native on <var290:Array[Object]>*/;
}
}
{
var293 = ((val* (*)(val* self))(var290->class->vft[COLOR_standard__string__Object__to_s]))(var290) /* to_s on <var290:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var293); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce294) {
var295 = varonce294;
} else {
var296 = " = class_";
var297 = 9;
var298 = standard___standard__NativeString___to_s_with_length(var296, var297);
var295 = var298;
varonce294 = var295;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var301 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
{
var302 = nit___nit__MClass___nit__model_base__MEntity__c_name(var299);
}
if (varonce303) {
var304 = varonce303;
} else {
var305 = ".color;";
var306 = 7;
var307 = standard___standard__NativeString___to_s_with_length(var305, var306);
var304 = var307;
varonce303 = var304;
}
var308 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var308 = array_instance Array[Object] */
var309 = 4;
var310 = NEW_standard__NativeArray(var309, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var310)->values[0] = (val*) var_cltype;
((struct instance_standard__NativeArray*)var310)->values[1] = (val*) var295;
((struct instance_standard__NativeArray*)var310)->values[2] = (val*) var302;
((struct instance_standard__NativeArray*)var310)->values[3] = (val*) var304;
{
((void (*)(val* self, val* p0, long p1))(var308->class->vft[COLOR_standard__array__Array__with_native]))(var308, var310, var309) /* with_native on <var308:Array[Object]>*/;
}
}
{
var311 = ((val* (*)(val* self))(var308->class->vft[COLOR_standard__string__Object__to_s]))(var308) /* to_s on <var308:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var311); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce312) {
var313 = varonce312;
} else {
var314 = " = class_";
var315 = 9;
var316 = standard___standard__NativeString___to_s_with_length(var314, var315);
var313 = var316;
varonce312 = var313;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var319 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var319 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var317 = var319;
RET_LABEL318:(void)0;
}
}
{
var320 = nit___nit__MClass___nit__model_base__MEntity__c_name(var317);
}
if (varonce321) {
var322 = varonce321;
} else {
var323 = ".id;";
var324 = 4;
var325 = standard___standard__NativeString___to_s_with_length(var323, var324);
var322 = var325;
varonce321 = var322;
}
var326 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var326 = array_instance Array[Object] */
var327 = 4;
var328 = NEW_standard__NativeArray(var327, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var328)->values[0] = (val*) var_idtype;
((struct instance_standard__NativeArray*)var328)->values[1] = (val*) var313;
((struct instance_standard__NativeArray*)var328)->values[2] = (val*) var320;
((struct instance_standard__NativeArray*)var328)->values[3] = (val*) var322;
{
((void (*)(val* self, val* p0, long p1))(var326->class->vft[COLOR_standard__array__Array__with_native]))(var326, var328, var327) /* with_native on <var326:Array[Object]>*/;
}
}
{
var329 = ((val* (*)(val* self))(var326->class->vft[COLOR_standard__string__Object__to_s]))(var326) /* to_s on <var326:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var329); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var332 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var332 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var330 = var332;
RET_LABEL331:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var330) on <var330:AbstractCompiler(SeparateCompiler)> */
var335 = var330->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var330:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var335 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var333 = var335;
RET_LABEL334:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var333) on <var333:ModelBuilder> */
var338 = var333->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var333:ModelBuilder> */
if (unlikely(var338 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var336 = var338;
RET_LABEL337:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var336) on <var336:ToolContext> */
var341 = var336->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var336:ToolContext> */
if (unlikely(var341 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
show_backtrace(1);
}
var339 = var341;
RET_LABEL340:(void)0;
}
}
{
{ /* Inline opts#Option#value (var339) on <var339:OptionBool> */
var344 = var339->attrs[COLOR_opts__Option___value].val; /* _value on <var339:OptionBool> */
var342 = var344;
RET_LABEL343:(void)0;
}
}
var345 = ((struct instance_standard__Bool*)var342)->value; /* autounbox from nullable Object to Bool */;
if (var345){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var348 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var348 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var346 = var348;
RET_LABEL347:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (var346) on <var346:AbstractCompiler(SeparateCompiler)> */
var351 = var346->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <var346:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var351 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 964);
show_backtrace(1);
}
var349 = var351;
RET_LABEL350:(void)0;
}
}
var_352 = var349;
var_353 = var_tag;
{
var354 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_352, var_353);
}
var355 = 1;
{
{ /* Inline kernel#Int#+ (var354,var355) on <var354:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var355:Int> isa OTHER */
/* <var355:Int> isa OTHER */
var358 = 1; /* easy <var355:Int> isa OTHER*/
if (unlikely(!var358)) {
var_class_name361 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name361);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var362 = ((struct instance_standard__Int*)var354)->value; /* autounbox from nullable Object to Int */;
var363 = var362 + var355;
var356 = var363;
goto RET_LABEL357;
RET_LABEL357:(void)0;
}
}
{
var364 = BOX_standard__Int(var356); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_352, var_353, var364); /* Direct call hash_collection#HashMap#[]= on <var_352:HashMap[String, Int]>*/
}
if (varonce365) {
var366 = varonce365;
} else {
var367 = "count_type_test_resolved_";
var368 = 25;
var369 = standard___standard__NativeString___to_s_with_length(var367, var368);
var366 = var369;
varonce365 = var366;
}
if (varonce370) {
var371 = varonce370;
} else {
var372 = "++;";
var373 = 3;
var374 = standard___standard__NativeString___to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
var375 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var375 = array_instance Array[Object] */
var376 = 3;
var377 = NEW_standard__NativeArray(var376, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var377)->values[0] = (val*) var366;
((struct instance_standard__NativeArray*)var377)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var377)->values[2] = (val*) var371;
{
((void (*)(val* self, val* p0, long p1))(var375->class->vft[COLOR_standard__array__Array__with_native]))(var375, var377, var376) /* with_native on <var375:Array[Object]>*/;
}
}
{
var378 = ((val* (*)(val* self))(var375->class->vft[COLOR_standard__string__Object__to_s]))(var375) /* to_s on <var375:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var378); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype380 = type_nit__MVirtualType.color;
idtype381 = type_nit__MVirtualType.id;
if(cltype380 >= var_mtype->type->table_size) {
var379 = 0;
} else {
var379 = var_mtype->type->type_table[cltype380] == idtype381;
}
if (var379){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var384 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var382 = var384;
RET_LABEL383:(void)0;
}
}
if (var382 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 544);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var382) on <var382:nullable StaticFrame> */
if (unlikely(var382 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var387 = var382->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var382:nullable StaticFrame> */
if (unlikely(var387 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var385 = var387;
RET_LABEL386:(void)0;
}
}
{
var388 = standard___standard__SequenceRead___Collection__first(var385);
}
var_recv = var388;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var391 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var391 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var389 = var391;
RET_LABEL390:(void)0;
}
}
{
var392 = ((val* (*)(val* self))(var389->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var389) /* ctype on <var389:MType>*/;
}
if (varonce393) {
var394 = varonce393;
} else {
var395 = "val*";
var396 = 4;
var397 = standard___standard__NativeString___to_s_with_length(var395, var396);
var394 = var397;
varonce393 = var394;
}
{
var398 = ((short int (*)(val* self, val* p0))(var392->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var392, var394) /* == on <var392:String>*/;
}
if (var398){
if (varonce399) {
var400 = varonce399;
} else {
var401 = "->class->";
var402 = 9;
var403 = standard___standard__NativeString___to_s_with_length(var401, var402);
var400 = var403;
varonce399 = var400;
}
var404 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var404 = array_instance Array[Object] */
var405 = 2;
var406 = NEW_standard__NativeArray(var405, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var406)->values[0] = (val*) var_recv;
((struct instance_standard__NativeArray*)var406)->values[1] = (val*) var400;
{
((void (*)(val* self, val* p0, long p1))(var404->class->vft[COLOR_standard__array__Array__with_native]))(var404, var406, var405) /* with_native on <var404:Array[Object]>*/;
}
}
{
var407 = ((val* (*)(val* self))(var404->class->vft[COLOR_standard__string__Object__to_s]))(var404) /* to_s on <var404:Array[Object]>*/;
}
var_recv_ptr = var407;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var410 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var410 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var408 = var410;
RET_LABEL409:(void)0;
}
}
/* <var408:MType> isa MClassType */
cltype412 = type_nit__MClassType.color;
idtype413 = type_nit__MClassType.id;
if(cltype412 >= var408->type->table_size) {
var411 = 0;
} else {
var411 = var408->type->type_table[cltype412] == idtype413;
}
if (unlikely(!var411)) {
var_class_name414 = var408 == NULL ? "null" : var408->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name414);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 549);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var408) on <var408:MType(MClassType)> */
var417 = var408->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var408:MType(MClassType)> */
if (unlikely(var417 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var415 = var417;
RET_LABEL416:(void)0;
}
}
var_mclass418 = var415;
if (varonce419) {
var420 = varonce419;
} else {
var421 = "class_";
var422 = 6;
var423 = standard___standard__NativeString___to_s_with_length(var421, var422);
var420 = var423;
varonce419 = var420;
}
{
var424 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass418);
}
var425 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var425 = array_instance Array[Object] */
var426 = 2;
var427 = NEW_standard__NativeArray(var426, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var427)->values[0] = (val*) var420;
((struct instance_standard__NativeArray*)var427)->values[1] = (val*) var424;
{
((void (*)(val* self, val* p0, long p1))(var425->class->vft[COLOR_standard__array__Array__with_native]))(var425, var427, var426) /* with_native on <var425:Array[Object]>*/;
}
}
{
var428 = ((val* (*)(val* self))(var425->class->vft[COLOR_standard__string__Object__to_s]))(var425) /* to_s on <var425:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var428); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce429) {
var430 = varonce429;
} else {
var431 = "class_";
var432 = 6;
var433 = standard___standard__NativeString___to_s_with_length(var431, var432);
var430 = var433;
varonce429 = var430;
}
{
var434 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass418);
}
if (varonce435) {
var436 = varonce435;
} else {
var437 = ".";
var438 = 1;
var439 = standard___standard__NativeString___to_s_with_length(var437, var438);
var436 = var439;
varonce435 = var436;
}
var440 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var440 = array_instance Array[Object] */
var441 = 3;
var442 = NEW_standard__NativeArray(var441, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var442)->values[0] = (val*) var430;
((struct instance_standard__NativeArray*)var442)->values[1] = (val*) var434;
((struct instance_standard__NativeArray*)var442)->values[2] = (val*) var436;
{
((void (*)(val* self, val* p0, long p1))(var440->class->vft[COLOR_standard__array__Array__with_native]))(var440, var442, var441) /* with_native on <var440:Array[Object]>*/;
}
}
{
var443 = ((val* (*)(val* self))(var440->class->vft[COLOR_standard__string__Object__to_s]))(var440) /* to_s on <var440:Array[Object]>*/;
}
var_recv_ptr = var443;
}
if (varonce444) {
var445 = varonce444;
} else {
var446 = "entry";
var447 = 5;
var448 = standard___standard__NativeString___to_s_with_length(var446, var447);
var445 = var448;
varonce444 = var445;
}
{
var449 = nit___nit__AbstractCompilerVisitor___get_name(self, var445);
}
var_entry = var449;
if (varonce450) {
var451 = varonce450;
} else {
var452 = "struct vts_entry ";
var453 = 17;
var454 = standard___standard__NativeString___to_s_with_length(var452, var453);
var451 = var454;
varonce450 = var451;
}
if (varonce455) {
var456 = varonce455;
} else {
var457 = ";";
var458 = 1;
var459 = standard___standard__NativeString___to_s_with_length(var457, var458);
var456 = var459;
varonce455 = var456;
}
var460 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var460 = array_instance Array[Object] */
var461 = 3;
var462 = NEW_standard__NativeArray(var461, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var462)->values[0] = (val*) var451;
((struct instance_standard__NativeArray*)var462)->values[1] = (val*) var_entry;
((struct instance_standard__NativeArray*)var462)->values[2] = (val*) var456;
{
((void (*)(val* self, val* p0, long p1))(var460->class->vft[COLOR_standard__array__Array__with_native]))(var460, var462, var461) /* with_native on <var460:Array[Object]>*/;
}
}
{
var463 = ((val* (*)(val* self))(var460->class->vft[COLOR_standard__string__Object__to_s]))(var460) /* to_s on <var460:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var463); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var466 = var_mtype->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var466 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var464 = var466;
RET_LABEL465:(void)0;
}
}
{
var467 = nit__separate_compiler___MEntity___const_color(var464);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var467); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce468) {
var469 = varonce468;
} else {
var470 = " = ";
var471 = 3;
var472 = standard___standard__NativeString___to_s_with_length(var470, var471);
var469 = var472;
varonce468 = var469;
}
if (varonce473) {
var474 = varonce473;
} else {
var475 = "vts_table->vts[";
var476 = 15;
var477 = standard___standard__NativeString___to_s_with_length(var475, var476);
var474 = var477;
varonce473 = var474;
}
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var480 = var_mtype->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var480 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var478 = var480;
RET_LABEL479:(void)0;
}
}
{
var481 = nit__separate_compiler___MEntity___const_color(var478);
}
if (varonce482) {
var483 = varonce482;
} else {
var484 = "];";
var485 = 2;
var486 = standard___standard__NativeString___to_s_with_length(var484, var485);
var483 = var486;
varonce482 = var483;
}
var487 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var487 = array_instance Array[Object] */
var488 = 6;
var489 = NEW_standard__NativeArray(var488, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var489)->values[0] = (val*) var_entry;
((struct instance_standard__NativeArray*)var489)->values[1] = (val*) var469;
((struct instance_standard__NativeArray*)var489)->values[2] = (val*) var_recv_ptr;
((struct instance_standard__NativeArray*)var489)->values[3] = (val*) var474;
((struct instance_standard__NativeArray*)var489)->values[4] = (val*) var481;
((struct instance_standard__NativeArray*)var489)->values[5] = (val*) var483;
{
((void (*)(val* self, val* p0, long p1))(var487->class->vft[COLOR_standard__array__Array__with_native]))(var487, var489, var488) /* with_native on <var487:Array[Object]>*/;
}
}
{
var490 = ((val* (*)(val* self))(var487->class->vft[COLOR_standard__string__Object__to_s]))(var487) /* to_s on <var487:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var490); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce491) {
var492 = varonce491;
} else {
var493 = " = ";
var494 = 3;
var495 = standard___standard__NativeString___to_s_with_length(var493, var494);
var492 = var495;
varonce491 = var492;
}
if (varonce496) {
var497 = varonce496;
} else {
var498 = ".class->color;";
var499 = 14;
var500 = standard___standard__NativeString___to_s_with_length(var498, var499);
var497 = var500;
varonce496 = var497;
}
var501 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var501 = array_instance Array[Object] */
var502 = 4;
var503 = NEW_standard__NativeArray(var502, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var503)->values[0] = (val*) var_cltype;
((struct instance_standard__NativeArray*)var503)->values[1] = (val*) var492;
((struct instance_standard__NativeArray*)var503)->values[2] = (val*) var_entry;
((struct instance_standard__NativeArray*)var503)->values[3] = (val*) var497;
{
((void (*)(val* self, val* p0, long p1))(var501->class->vft[COLOR_standard__array__Array__with_native]))(var501, var503, var502) /* with_native on <var501:Array[Object]>*/;
}
}
{
var504 = ((val* (*)(val* self))(var501->class->vft[COLOR_standard__string__Object__to_s]))(var501) /* to_s on <var501:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var504); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce505) {
var506 = varonce505;
} else {
var507 = " = ";
var508 = 3;
var509 = standard___standard__NativeString___to_s_with_length(var507, var508);
var506 = var509;
varonce505 = var506;
}
if (varonce510) {
var511 = varonce510;
} else {
var512 = ".class->id;";
var513 = 11;
var514 = standard___standard__NativeString___to_s_with_length(var512, var513);
var511 = var514;
varonce510 = var511;
}
var515 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var515 = array_instance Array[Object] */
var516 = 4;
var517 = NEW_standard__NativeArray(var516, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var517)->values[0] = (val*) var_idtype;
((struct instance_standard__NativeArray*)var517)->values[1] = (val*) var506;
((struct instance_standard__NativeArray*)var517)->values[2] = (val*) var_entry;
((struct instance_standard__NativeArray*)var517)->values[3] = (val*) var511;
{
((void (*)(val* self, val* p0, long p1))(var515->class->vft[COLOR_standard__array__Array__with_native]))(var515, var517, var516) /* with_native on <var515:Array[Object]>*/;
}
}
{
var518 = ((val* (*)(val* self))(var515->class->vft[COLOR_standard__string__Object__to_s]))(var515) /* to_s on <var515:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var518); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
var_520 = var_maybe_null;
if (var_maybe_null){
if (varonce521) {
var522 = varonce521;
} else {
var523 = "0";
var524 = 1;
var525 = standard___standard__NativeString___to_s_with_length(var523, var524);
var522 = var525;
varonce521 = var522;
}
{
var526 = ((short int (*)(val* self, val* p0))(var_accept_null->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_accept_null, var522) /* == on <var_accept_null:String>*/;
}
var519 = var526;
} else {
var519 = var_520;
}
if (var519){
if (varonce527) {
var528 = varonce527;
} else {
var529 = "is_nullable";
var530 = 11;
var531 = standard___standard__NativeString___to_s_with_length(var529, var530);
var528 = var531;
varonce527 = var528;
}
{
var532 = nit___nit__AbstractCompilerVisitor___get_name(self, var528);
}
var_is_nullable = var532;
if (varonce533) {
var534 = varonce533;
} else {
var535 = "short int ";
var536 = 10;
var537 = standard___standard__NativeString___to_s_with_length(var535, var536);
var534 = var537;
varonce533 = var534;
}
if (varonce538) {
var539 = varonce538;
} else {
var540 = ";";
var541 = 1;
var542 = standard___standard__NativeString___to_s_with_length(var540, var541);
var539 = var542;
varonce538 = var539;
}
var543 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var543 = array_instance Array[Object] */
var544 = 3;
var545 = NEW_standard__NativeArray(var544, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var545)->values[0] = (val*) var534;
((struct instance_standard__NativeArray*)var545)->values[1] = (val*) var_is_nullable;
((struct instance_standard__NativeArray*)var545)->values[2] = (val*) var539;
{
((void (*)(val* self, val* p0, long p1))(var543->class->vft[COLOR_standard__array__Array__with_native]))(var543, var545, var544) /* with_native on <var543:Array[Object]>*/;
}
}
{
var546 = ((val* (*)(val* self))(var543->class->vft[COLOR_standard__string__Object__to_s]))(var543) /* to_s on <var543:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var546); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce547) {
var548 = varonce547;
} else {
var549 = " = ";
var550 = 3;
var551 = standard___standard__NativeString___to_s_with_length(var549, var550);
var548 = var551;
varonce547 = var548;
}
if (varonce552) {
var553 = varonce552;
} else {
var554 = ".is_nullable;";
var555 = 13;
var556 = standard___standard__NativeString___to_s_with_length(var554, var555);
var553 = var556;
varonce552 = var553;
}
var557 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var557 = array_instance Array[Object] */
var558 = 4;
var559 = NEW_standard__NativeArray(var558, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var559)->values[0] = (val*) var_is_nullable;
((struct instance_standard__NativeArray*)var559)->values[1] = (val*) var548;
((struct instance_standard__NativeArray*)var559)->values[2] = (val*) var_entry;
((struct instance_standard__NativeArray*)var559)->values[3] = (val*) var553;
{
((void (*)(val* self, val* p0, long p1))(var557->class->vft[COLOR_standard__array__Array__with_native]))(var557, var559, var558) /* with_native on <var557:Array[Object]>*/;
}
}
{
var560 = ((val* (*)(val* self))(var557->class->vft[COLOR_standard__string__Object__to_s]))(var557) /* to_s on <var557:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var560); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
var561 = standard___standard__String___Object__to_s(var_is_nullable);
}
var_accept_null = var561;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var564 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var564 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var562 = var564;
RET_LABEL563:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var562) on <var562:AbstractCompiler(SeparateCompiler)> */
var567 = var562->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var562:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var567 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var565 = var567;
RET_LABEL566:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var565) on <var565:ModelBuilder> */
var570 = var565->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var565:ModelBuilder> */
if (unlikely(var570 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var568 = var570;
RET_LABEL569:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var568) on <var568:ToolContext> */
var573 = var568->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var568:ToolContext> */
if (unlikely(var573 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
show_backtrace(1);
}
var571 = var573;
RET_LABEL572:(void)0;
}
}
{
{ /* Inline opts#Option#value (var571) on <var571:OptionBool> */
var576 = var571->attrs[COLOR_opts__Option___value].val; /* _value on <var571:OptionBool> */
var574 = var576;
RET_LABEL575:(void)0;
}
}
var577 = ((struct instance_standard__Bool*)var574)->value; /* autounbox from nullable Object to Bool */;
if (var577){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var580 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var580 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var578 = var580;
RET_LABEL579:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (var578) on <var578:AbstractCompiler(SeparateCompiler)> */
var583 = var578->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <var578:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var583 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 965);
show_backtrace(1);
}
var581 = var583;
RET_LABEL582:(void)0;
}
}
var_584 = var581;
var_585 = var_tag;
{
var586 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_584, var_585);
}
var587 = 1;
{
{ /* Inline kernel#Int#+ (var586,var587) on <var586:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var587:Int> isa OTHER */
/* <var587:Int> isa OTHER */
var590 = 1; /* easy <var587:Int> isa OTHER*/
if (unlikely(!var590)) {
var_class_name593 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name593);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var594 = ((struct instance_standard__Int*)var586)->value; /* autounbox from nullable Object to Int */;
var595 = var594 + var587;
var588 = var595;
goto RET_LABEL589;
RET_LABEL589:(void)0;
}
}
{
var596 = BOX_standard__Int(var588); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_584, var_585, var596); /* Direct call hash_collection#HashMap#[]= on <var_584:HashMap[String, Int]>*/
}
if (varonce597) {
var598 = varonce597;
} else {
var599 = "count_type_test_unresolved_";
var600 = 27;
var601 = standard___standard__NativeString___to_s_with_length(var599, var600);
var598 = var601;
varonce597 = var598;
}
if (varonce602) {
var603 = varonce602;
} else {
var604 = "++;";
var605 = 3;
var606 = standard___standard__NativeString___to_s_with_length(var604, var605);
var603 = var606;
varonce602 = var603;
}
var607 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var607 = array_instance Array[Object] */
var608 = 3;
var609 = NEW_standard__NativeArray(var608, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var609)->values[0] = (val*) var598;
((struct instance_standard__NativeArray*)var609)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var609)->values[2] = (val*) var603;
{
((void (*)(val* self, val* p0, long p1))(var607->class->vft[COLOR_standard__array__Array__with_native]))(var607, var609, var608) /* with_native on <var607:Array[Object]>*/;
}
}
{
var610 = ((val* (*)(val* self))(var607->class->vft[COLOR_standard__string__Object__to_s]))(var607) /* to_s on <var607:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var610); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
} else {
if (varonce611) {
var612 = varonce611;
} else {
var613 = "type_test(";
var614 = 10;
var615 = standard___standard__NativeString___to_s_with_length(var613, var614);
var612 = var615;
varonce611 = var612;
}
{
var616 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
if (varonce617) {
var618 = varonce617;
} else {
var619 = ", ";
var620 = 2;
var621 = standard___standard__NativeString___to_s_with_length(var619, var620);
var618 = var621;
varonce617 = var618;
}
if (varonce622) {
var623 = varonce622;
} else {
var624 = ")";
var625 = 1;
var626 = standard___standard__NativeString___to_s_with_length(var624, var625);
var623 = var626;
varonce622 = var623;
}
var627 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var627 = array_instance Array[Object] */
var628 = 5;
var629 = NEW_standard__NativeArray(var628, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var629)->values[0] = (val*) var612;
((struct instance_standard__NativeArray*)var629)->values[1] = (val*) var616;
((struct instance_standard__NativeArray*)var629)->values[2] = (val*) var618;
((struct instance_standard__NativeArray*)var629)->values[3] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var629)->values[4] = (val*) var623;
{
((void (*)(val* self, val* p0, long p1))(var627->class->vft[COLOR_standard__array__Array__with_native]))(var627, var629, var628) /* with_native on <var627:Array[Object]>*/;
}
}
{
var630 = ((val* (*)(val* self))(var627->class->vft[COLOR_standard__string__Object__to_s]))(var627) /* to_s on <var627:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___debug(self, var630); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateErasureCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 571);
show_backtrace(1);
}
}
if (var_maybe_null){
if (varonce631) {
var632 = varonce631;
} else {
var633 = "if(";
var634 = 3;
var635 = standard___standard__NativeString___to_s_with_length(var633, var634);
var632 = var635;
varonce631 = var632;
}
if (varonce636) {
var637 = varonce636;
} else {
var638 = " == NULL) {";
var639 = 11;
var640 = standard___standard__NativeString___to_s_with_length(var638, var639);
var637 = var640;
varonce636 = var637;
}
var641 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var641 = array_instance Array[Object] */
var642 = 3;
var643 = NEW_standard__NativeArray(var642, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var643)->values[0] = (val*) var632;
((struct instance_standard__NativeArray*)var643)->values[1] = (val*) var_value;
((struct instance_standard__NativeArray*)var643)->values[2] = (val*) var637;
{
((void (*)(val* self, val* p0, long p1))(var641->class->vft[COLOR_standard__array__Array__with_native]))(var641, var643, var642) /* with_native on <var641:Array[Object]>*/;
}
}
{
var644 = ((val* (*)(val* self))(var641->class->vft[COLOR_standard__string__Object__to_s]))(var641) /* to_s on <var641:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var644); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce645) {
var646 = varonce645;
} else {
var647 = " = ";
var648 = 3;
var649 = standard___standard__NativeString___to_s_with_length(var647, var648);
var646 = var649;
varonce645 = var646;
}
if (varonce650) {
var651 = varonce650;
} else {
var652 = ";";
var653 = 1;
var654 = standard___standard__NativeString___to_s_with_length(var652, var653);
var651 = var654;
varonce650 = var651;
}
var655 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var655 = array_instance Array[Object] */
var656 = 4;
var657 = NEW_standard__NativeArray(var656, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var657)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var657)->values[1] = (val*) var646;
((struct instance_standard__NativeArray*)var657)->values[2] = (val*) var_accept_null;
((struct instance_standard__NativeArray*)var657)->values[3] = (val*) var651;
{
((void (*)(val* self, val* p0, long p1))(var655->class->vft[COLOR_standard__array__Array__with_native]))(var655, var657, var656) /* with_native on <var655:Array[Object]>*/;
}
}
{
var658 = ((val* (*)(val* self))(var655->class->vft[COLOR_standard__string__Object__to_s]))(var655) /* to_s on <var655:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var658); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce659) {
var660 = varonce659;
} else {
var661 = "} else {";
var662 = 8;
var663 = standard___standard__NativeString___to_s_with_length(var661, var662);
var660 = var663;
varonce659 = var660;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var660); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
if (varonce664) {
var665 = varonce664;
} else {
var666 = "if(";
var667 = 3;
var668 = standard___standard__NativeString___to_s_with_length(var666, var667);
var665 = var668;
varonce664 = var665;
}
if (varonce669) {
var670 = varonce669;
} else {
var671 = " >= ";
var672 = 4;
var673 = standard___standard__NativeString___to_s_with_length(var671, var672);
var670 = var673;
varonce669 = var670;
}
if (varonce674) {
var675 = varonce674;
} else {
var676 = "type_table->size) {";
var677 = 19;
var678 = standard___standard__NativeString___to_s_with_length(var676, var677);
var675 = var678;
varonce674 = var675;
}
var679 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var679 = array_instance Array[Object] */
var680 = 5;
var681 = NEW_standard__NativeArray(var680, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var681)->values[0] = (val*) var665;
((struct instance_standard__NativeArray*)var681)->values[1] = (val*) var_cltype;
((struct instance_standard__NativeArray*)var681)->values[2] = (val*) var670;
((struct instance_standard__NativeArray*)var681)->values[3] = (val*) var_class_ptr;
((struct instance_standard__NativeArray*)var681)->values[4] = (val*) var675;
{
((void (*)(val* self, val* p0, long p1))(var679->class->vft[COLOR_standard__array__Array__with_native]))(var679, var681, var680) /* with_native on <var679:Array[Object]>*/;
}
}
{
var682 = ((val* (*)(val* self))(var679->class->vft[COLOR_standard__string__Object__to_s]))(var679) /* to_s on <var679:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var682); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce683) {
var684 = varonce683;
} else {
var685 = " = 0;";
var686 = 5;
var687 = standard___standard__NativeString___to_s_with_length(var685, var686);
var684 = var687;
varonce683 = var684;
}
var688 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var688 = array_instance Array[Object] */
var689 = 2;
var690 = NEW_standard__NativeArray(var689, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var690)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var690)->values[1] = (val*) var684;
{
((void (*)(val* self, val* p0, long p1))(var688->class->vft[COLOR_standard__array__Array__with_native]))(var688, var690, var689) /* with_native on <var688:Array[Object]>*/;
}
}
{
var691 = ((val* (*)(val* self))(var688->class->vft[COLOR_standard__string__Object__to_s]))(var688) /* to_s on <var688:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var691); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce692) {
var693 = varonce692;
} else {
var694 = "} else {";
var695 = 8;
var696 = standard___standard__NativeString___to_s_with_length(var694, var695);
var693 = var696;
varonce692 = var693;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var693); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce697) {
var698 = varonce697;
} else {
var699 = " = ";
var700 = 3;
var701 = standard___standard__NativeString___to_s_with_length(var699, var700);
var698 = var701;
varonce697 = var698;
}
if (varonce702) {
var703 = varonce702;
} else {
var704 = "type_table->table[";
var705 = 18;
var706 = standard___standard__NativeString___to_s_with_length(var704, var705);
var703 = var706;
varonce702 = var703;
}
if (varonce707) {
var708 = varonce707;
} else {
var709 = "] == ";
var710 = 5;
var711 = standard___standard__NativeString___to_s_with_length(var709, var710);
var708 = var711;
varonce707 = var708;
}
if (varonce712) {
var713 = varonce712;
} else {
var714 = ";";
var715 = 1;
var716 = standard___standard__NativeString___to_s_with_length(var714, var715);
var713 = var716;
varonce712 = var713;
}
var717 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var717 = array_instance Array[Object] */
var718 = 8;
var719 = NEW_standard__NativeArray(var718, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var719)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var719)->values[1] = (val*) var698;
((struct instance_standard__NativeArray*)var719)->values[2] = (val*) var_class_ptr;
((struct instance_standard__NativeArray*)var719)->values[3] = (val*) var703;
((struct instance_standard__NativeArray*)var719)->values[4] = (val*) var_cltype;
((struct instance_standard__NativeArray*)var719)->values[5] = (val*) var708;
((struct instance_standard__NativeArray*)var719)->values[6] = (val*) var_idtype;
((struct instance_standard__NativeArray*)var719)->values[7] = (val*) var713;
{
((void (*)(val* self, val* p0, long p1))(var717->class->vft[COLOR_standard__array__Array__with_native]))(var717, var719, var718) /* with_native on <var717:Array[Object]>*/;
}
}
{
var720 = ((val* (*)(val* self))(var717->class->vft[COLOR_standard__string__Object__to_s]))(var717) /* to_s on <var717:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var720); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce721) {
var722 = varonce721;
} else {
var723 = "}";
var724 = 1;
var725 = standard___standard__NativeString___to_s_with_length(var723, var724);
var722 = var725;
varonce721 = var722;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var722); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (var_maybe_null){
if (varonce726) {
var727 = varonce726;
} else {
var728 = "}";
var729 = 1;
var730 = standard___standard__NativeString___to_s_with_length(var728, var729);
var727 = var730;
varonce726 = var727;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var727); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#unbox_extern for (self: SeparateErasureCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : MClassKind */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : String */;
val* var22 /* : String */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var7,var10) on <var7:MClassKind> */
var_other = var10;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
var15 = var7 == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var2 = var11;
} else {
var2 = var_;
}
var_16 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var19 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#name (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (varonce) {
var23 = varonce;
} else {
var24 = "NativeString";
var25 = 12;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
{ /* Inline kernel#Object#!= (var20,var23) on <var20:String> */
var_other29 = var23;
{
var30 = ((short int (*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var20, var_other29) /* == on <var20:String>*/;
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_16;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var32) on <var32:AbstractCompiler(SeparateCompiler)> */
var37 = var32->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var32:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit__model___MModule___pointer_type(var35);
}
var_pointer_type = var38;
{
var39 = nit___nit__AbstractCompilerVisitor___new_var_extern(self, var_mtype);
}
var_res = var39;
if (varonce40) {
var41 = varonce40;
} else {
var42 = " = ((struct instance_";
var43 = 21;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
var45 = ((val* (*)(val* self))(var_pointer_type->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_pointer_type) /* c_name on <var_pointer_type:MClassType>*/;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "*)";
var49 = 2;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ")->value; /* unboxing ";
var54 = 22;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var58 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = " */";
var62 = 3;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 8;
var66 = NEW_standard__NativeArray(var65, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var66)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var66)->values[1] = (val*) var41;
((struct instance_standard__NativeArray*)var66)->values[2] = (val*) var45;
((struct instance_standard__NativeArray*)var66)->values[3] = (val*) var47;
((struct instance_standard__NativeArray*)var66)->values[4] = (val*) var_value;
((struct instance_standard__NativeArray*)var66)->values[5] = (val*) var52;
((struct instance_standard__NativeArray*)var66)->values[6] = (val*) var56;
((struct instance_standard__NativeArray*)var66)->values[7] = (val*) var60;
{
((void (*)(val* self, val* p0, long p1))(var64->class->vft[COLOR_standard__array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val* self))(var64->class->vft[COLOR_standard__string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
var = var_value;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#box_extern for (self: SeparateErasureCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__box_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : MClassKind */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : String */;
val* var22 /* : String */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : MClassType */;
val* var_valtype /* var valtype: MClassType */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var40 /* : Bool */;
val* var41 /* : AbstractCompiler */;
val* var43 /* : AbstractCompiler */;
val* var44 /* : nullable RapidTypeAnalysis */;
val* var46 /* : nullable RapidTypeAnalysis */;
val* var47 /* : null */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var_53 /* var : Bool */;
val* var54 /* : AbstractCompiler */;
val* var56 /* : AbstractCompiler */;
val* var57 /* : nullable RapidTypeAnalysis */;
val* var59 /* : nullable RapidTypeAnalysis */;
val* var60 /* : HashSet[MClassType] */;
val* var62 /* : HashSet[MClassType] */;
val* var63 /* : MType */;
val* var65 /* : MType */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : MType */;
val* var78 /* : MType */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : MType */;
val* var86 /* : MType */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
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
val* var106 /* : String */;
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
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
val* var127 /* : MType */;
val* var129 /* : MType */;
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
val* var144 /* : String */;
val* var145 /* : Array[Object] */;
long var146 /* : Int */;
val* var147 /* : NativeArray[Object] */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : FlatString */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : FlatString */;
val* var160 /* : Array[Object] */;
long var161 /* : Int */;
val* var162 /* : NativeArray[Object] */;
val* var163 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var7,var10) on <var7:MClassKind> */
var_other = var10;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
var15 = var7 == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var2 = var11;
} else {
var2 = var_;
}
var_16 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var19 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#name (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (varonce) {
var23 = varonce;
} else {
var24 = "NativeString";
var25 = 12;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
{ /* Inline kernel#Object#!= (var20,var23) on <var20:String> */
var_other29 = var23;
{
var30 = ((short int (*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var20, var_other29) /* == on <var20:String>*/;
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_16;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var32) on <var32:AbstractCompiler(SeparateCompiler)> */
var37 = var32->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var32:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit__model___MModule___pointer_type(var35);
}
var_valtype = var38;
{
var39 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var39;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var43 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var41) on <var41:AbstractCompiler(SeparateCompiler)> */
var46 = var41->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var41:AbstractCompiler(SeparateCompiler)> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = NULL;
if (var44 == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var44,var47) on <var44:nullable RapidTypeAnalysis> */
var_other29 = var47;
{
var51 = ((short int (*)(val* self, val* p0))(var44->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var44, var_other29) /* == on <var44:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
var_53 = var48;
if (var48){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var56 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var54) on <var54:AbstractCompiler(SeparateCompiler)> */
var59 = var54->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var54:AbstractCompiler(SeparateCompiler)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 611);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var57) on <var57:nullable RapidTypeAnalysis> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var62 = var57->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var57:nullable RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var65 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
/* <var63:MType> isa MClassType */
cltype67 = type_nit__MClassType.color;
idtype68 = type_nit__MClassType.id;
if(cltype67 >= var63->type->table_size) {
var66 = 0;
} else {
var66 = var63->type->type_table[cltype67] == idtype68;
}
if (unlikely(!var66)) {
var_class_name = var63 == NULL ? "null" : var63->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 611);
show_backtrace(1);
}
{
var69 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var60, var63);
}
var70 = !var69;
var40 = var70;
} else {
var40 = var_53;
}
if (var40){
if (varonce71) {
var72 = varonce71;
} else {
var73 = "/*no boxing of ";
var74 = 15;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var78 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = ": ";
var82 = 2;
var83 = standard___standard__NativeString___to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var86 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = " is not live! */";
var90 = 16;
var91 = standard___standard__NativeString___to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 5;
var94 = NEW_standard__NativeArray(var93, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var94)->values[0] = (val*) var72;
((struct instance_standard__NativeArray*)var94)->values[1] = (val*) var76;
((struct instance_standard__NativeArray*)var94)->values[2] = (val*) var80;
((struct instance_standard__NativeArray*)var94)->values[3] = (val*) var84;
((struct instance_standard__NativeArray*)var94)->values[4] = (val*) var88;
{
((void (*)(val* self, val* p0, long p1))(var92->class->vft[COLOR_standard__array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
}
{
var95 = ((val* (*)(val* self))(var92->class->vft[COLOR_standard__string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var95); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = "PRINT_ERROR(\"Dead code executed!\\n\"); show_backtrace(1);";
var99 = 56;
var100 = standard___standard__NativeString___to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "BOX_";
var104 = 4;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
var106 = ((val* (*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
var107 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 2;
var109 = NEW_standard__NativeArray(var108, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var109)->values[0] = (val*) var102;
((struct instance_standard__NativeArray*)var109)->values[1] = (val*) var106;
{
((void (*)(val* self, val* p0, long p1))(var107->class->vft[COLOR_standard__array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
}
{
var110 = ((val* (*)(val* self))(var107->class->vft[COLOR_standard__string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var110); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = " = BOX_";
var114 = 7;
var115 = standard___standard__NativeString___to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
{
var116 = ((val* (*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = "(";
var120 = 1;
var121 = standard___standard__NativeString___to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = "); /* boxing ";
var125 = 13;
var126 = standard___standard__NativeString___to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var129 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = " */";
var133 = 3;
var134 = standard___standard__NativeString___to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
var135 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var135 = array_instance Array[Object] */
var136 = 8;
var137 = NEW_standard__NativeArray(var136, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var137)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var137)->values[1] = (val*) var112;
((struct instance_standard__NativeArray*)var137)->values[2] = (val*) var116;
((struct instance_standard__NativeArray*)var137)->values[3] = (val*) var118;
((struct instance_standard__NativeArray*)var137)->values[4] = (val*) var_value;
((struct instance_standard__NativeArray*)var137)->values[5] = (val*) var123;
((struct instance_standard__NativeArray*)var137)->values[6] = (val*) var127;
((struct instance_standard__NativeArray*)var137)->values[7] = (val*) var131;
{
((void (*)(val* self, val* p0, long p1))(var135->class->vft[COLOR_standard__array__Array__with_native]))(var135, var137, var136) /* with_native on <var135:Array[Object]>*/;
}
}
{
var138 = ((val* (*)(val* self))(var135->class->vft[COLOR_standard__string__Object__to_s]))(var135) /* to_s on <var135:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var138); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "class_";
var142 = 6;
var143 = standard___standard__NativeString___to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
{
var144 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
var145 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var145 = array_instance Array[Object] */
var146 = 2;
var147 = NEW_standard__NativeArray(var146, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var147)->values[0] = (val*) var140;
((struct instance_standard__NativeArray*)var147)->values[1] = (val*) var144;
{
((void (*)(val* self, val* p0, long p1))(var145->class->vft[COLOR_standard__array__Array__with_native]))(var145, var147, var146) /* with_native on <var145:Array[Object]>*/;
}
}
{
var148 = ((val* (*)(val* self))(var145->class->vft[COLOR_standard__string__Object__to_s]))(var145) /* to_s on <var145:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var148); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce149) {
var150 = varonce149;
} else {
var151 = "->class = &class_";
var152 = 17;
var153 = standard___standard__NativeString___to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
{
var154 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = ";";
var158 = 1;
var159 = standard___standard__NativeString___to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
var160 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var160 = array_instance Array[Object] */
var161 = 4;
var162 = NEW_standard__NativeArray(var161, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var162)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var162)->values[1] = (val*) var150;
((struct instance_standard__NativeArray*)var162)->values[2] = (val*) var154;
((struct instance_standard__NativeArray*)var162)->values[3] = (val*) var156;
{
((void (*)(val* self, val* p0, long p1))(var160->class->vft[COLOR_standard__array__Array__with_native]))(var160, var162, var161) /* with_native on <var160:Array[Object]>*/;
}
}
{
var163 = ((val* (*)(val* self))(var160->class->vft[COLOR_standard__string__Object__to_s]))(var160) /* to_s on <var160:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var163); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
var = var_value;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#class_name_string for (self: SeparateErasureCompilerVisitor, RuntimeVariable): String */
val* nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__class_name_string(val* self, val* p0) {
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
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
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
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var57 /* : String */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
val* var67 /* : MType */;
val* var69 /* : MType */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
var_value = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "var_class_name";
var3 = 14;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit___nit__AbstractCompilerVisitor___get_name(self, var1);
}
var_res = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "const char* ";
var9 = 12;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ";";
var14 = 1;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_standard__NativeArray(var17, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_standard__NativeArray*)var18)->values[1] = (val*) var_res;
((struct instance_standard__NativeArray*)var18)->values[2] = (val*) var12;
{
((void (*)(val* self, val* p0, long p1))(var16->class->vft[COLOR_standard__array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val* self))(var16->class->vft[COLOR_standard__string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var22 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = ((val* (*)(val* self))(var20->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var20) /* ctype on <var20:MType>*/;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "val*";
var27 = 4;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
var29 = ((short int (*)(val* self, val* p0))(var23->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var23, var25) /* == on <var23:String>*/;
}
if (var29){
if (varonce30) {
var31 = varonce30;
} else {
var32 = " = ";
var33 = 3;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = " == NULL ? \"null\" : ";
var38 = 20;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "->class->name;";
var43 = 14;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 6;
var47 = NEW_standard__NativeArray(var46, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var47)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var47)->values[1] = (val*) var31;
((struct instance_standard__NativeArray*)var47)->values[2] = (val*) var_value;
((struct instance_standard__NativeArray*)var47)->values[3] = (val*) var36;
((struct instance_standard__NativeArray*)var47)->values[4] = (val*) var_value;
((struct instance_standard__NativeArray*)var47)->values[5] = (val*) var41;
{
((void (*)(val* self, val* p0, long p1))(var45->class->vft[COLOR_standard__array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
}
{
var48 = ((val* (*)(val* self))(var45->class->vft[COLOR_standard__string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
if (varonce49) {
var50 = varonce49;
} else {
var51 = "class_";
var52 = 6;
var53 = standard___standard__NativeString___to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var56 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = ((val* (*)(val* self))(var54->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var54) /* c_name on <var54:MType>*/;
}
var58 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 2;
var60 = NEW_standard__NativeArray(var59, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var60)->values[0] = (val*) var50;
((struct instance_standard__NativeArray*)var60)->values[1] = (val*) var57;
{
((void (*)(val* self, val* p0, long p1))(var58->class->vft[COLOR_standard__array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val* self))(var58->class->vft[COLOR_standard__string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = " = class_";
var65 = 9;
var66 = standard___standard__NativeString___to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var69 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = ((val* (*)(val* self))(var67->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var67) /* c_name on <var67:MType>*/;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = ".name;";
var74 = 6;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 4;
var78 = NEW_standard__NativeArray(var77, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var78)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var78)->values[1] = (val*) var63;
((struct instance_standard__NativeArray*)var78)->values[2] = (val*) var70;
((struct instance_standard__NativeArray*)var78)->values[3] = (val*) var72;
{
((void (*)(val* self, val* p0, long p1))(var76->class->vft[COLOR_standard__array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var79 = ((val* (*)(val* self))(var76->class->vft[COLOR_standard__string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var79); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#native_array_instance for (self: SeparateErasureCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
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
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit___nit__AbstractCompilerVisitor___get_class(self, var1);
}
var_nclass = var5;
var6 = NEW_standard__Array(&type_standard__Array__nit__MType);
var7 = 1;
{
standard___standard__Array___with_capacity(var6, var7); /* Direct call array#Array#with_capacity on <var6:Array[MType]>*/
}
var_ = var6;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var8 = nit___nit__MClass___get_mtype(var_nclass, var_);
}
var_mtype = var8;
{
var9 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var9;
var10 = 1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,var10) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = var10; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL11:(void)0;
}
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = "NEW_";
var15 = 4;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
{
var17 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 2;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var13;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var17;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " = NEW_";
var25 = 7;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
var27 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "(";
var31 = 1;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
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
var39 = 6;
var40 = NEW_standard__NativeArray(var39, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var40)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var40)->values[1] = (val*) var23;
((struct instance_standard__NativeArray*)var40)->values[2] = (val*) var27;
((struct instance_standard__NativeArray*)var40)->values[3] = (val*) var29;
((struct instance_standard__NativeArray*)var40)->values[4] = (val*) var_length;
((struct instance_standard__NativeArray*)var40)->values[5] = (val*) var34;
{
((void (*)(val* self, val* p0, long p1))(var38->class->vft[COLOR_standard__array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val* self))(var38->class->vft[COLOR_standard__string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array for (self: SeparateErasureCompilerVisitor, MType, Array[RuntimeVariable]) */
void nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
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
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_ret_type->type->table_size) {
var = 0;
} else {
var = var_ret_type->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = var_ret_type == NULL ? "null" : var_ret_type->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 652);
show_backtrace(1);
}
var_ret = var_ret_type;
if (varonce) {
var1 = varonce;
} else {
var2 = "NEW_";
var3 = 4;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:MClassType> */
var7 = var_ret->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_ret:MClassType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__MClass___nit__model_base__MEntity__c_name(var5);
}
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_standard__NativeArray(var10, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var11)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var11)->values[1] = (val*) var8;
{
((void (*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_standard__array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var12 = ((val* (*)(val* self))(var9->class->vft[COLOR_standard__string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var12); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "NEW_";
var16 = 4;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:MClassType> */
var20 = var_ret->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_ret:MClassType> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nit___nit__MClass___nit__model_base__MEntity__c_name(var18);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "(";
var25 = 1;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = 1;
{
var28 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var27);
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = ")";
var32 = 1;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 5;
var36 = NEW_standard__NativeArray(var35, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var36)->values[0] = (val*) var14;
((struct instance_standard__NativeArray*)var36)->values[1] = (val*) var21;
((struct instance_standard__NativeArray*)var36)->values[2] = (val*) var23;
((struct instance_standard__NativeArray*)var36)->values[3] = (val*) var28;
((struct instance_standard__NativeArray*)var36)->values[4] = (val*) var30;
{
((void (*)(val* self, val* p0, long p1))(var34->class->vft[COLOR_standard__array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val* self))(var34->class->vft[COLOR_standard__string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
var38 = nit___nit__AbstractCompilerVisitor___new_expr(self, var37, var_ret_type);
}
{
nit___nit__AbstractCompilerVisitor___ret(self, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateErasureCompilerVisitor>*/
}
RET_LABEL:;
}
