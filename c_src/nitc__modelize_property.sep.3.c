#include "nitc__modelize_property.sep.0.h"
/* method modelize_property$AAttrPropdef$build_property for (self: AAttrPropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___AAttrPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var3 /* : TId */;
val* var5 /* : TId */;
val* var_nid2 /* var nid2: TId */;
val* var6 /* : String */;
val* var_name /* var name: String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable AAnnotation */;
val* var_atabstract /* var atabstract: nullable AAnnotation */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : MClassKind */;
val* var23 /* : MClassKind */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
val* var62 /* : MClassKind */;
val* var64 /* : MClassKind */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var67 /* : String */;
val* var68 /* : MAttribute */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
val* var77 /* : Text */;
val* var78 /* : Location */;
val* var80 /* : Location */;
val* var81 /* : Sys */;
val* var82 /* : MVisibility */;
val* var_mprop /* var mprop: MAttribute */;
val* var83 /* : MAttributeDef */;
val* var84 /* : Location */;
val* var86 /* : Location */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
short int var87 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const struct type* type_struct92;
const char* var_class_name93;
val* var94 /* : HashMap[MPropDef, APropdef] */;
val* var96 /* : HashMap[MPropDef, APropdef] */;
val* var_readname /* var readname: String */;
val* var97 /* : nullable MProperty */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
val* var_mreadprop /* var mreadprop: nullable MMethod */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : nullable AVisibility */;
val* var110 /* : nullable AVisibility */;
val* var111 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var112 /* : MMethod */;
val* var113 /* : Location */;
val* var115 /* : Location */;
val* var116 /* : nullable TKwredef */;
val* var118 /* : nullable TKwredef */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
val* var125 /* : nullable TKwredef */;
val* var127 /* : nullable TKwredef */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : nullable AVisibility */;
val* var132 /* : nullable AVisibility */;
val* var133 /* : Map[MProperty, APropdef] */;
val* var135 /* : Map[MProperty, APropdef] */;
val* var136 /* : MMethodDef */;
val* var137 /* : Location */;
val* var139 /* : Location */;
val* var_mreadpropdef /* var mreadpropdef: MMethodDef */;
val* var141 /* : HashMap[MPropDef, APropdef] */;
val* var143 /* : HashMap[MPropDef, APropdef] */;
val* var144 /* : nullable MPropDef */;
val* var146 /* : nullable MPropDef */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
val* var_other150 /* var other: nullable Object */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
val* var153 /* : nullable MPropDef */;
val* var155 /* : nullable MPropDef */;
val* var156 /* : nullable MDoc */;
val* var158 /* : nullable MDoc */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
val* var167 /* : nullable AExpr */;
val* var169 /* : nullable AExpr */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var_ /* var : Bool */;
val* var175 /* : nullable AExpr */;
val* var177 /* : nullable AExpr */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var_190 /* var : Bool */;
short int var191 /* : Bool */;
short int var193 /* : Bool */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : CString */;
val* var197 /* : String */;
val* var198 /* : nullable Int */;
val* var199 /* : nullable Int */;
val* var200 /* : nullable Bool */;
val* var201 /* : nullable Bool */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : CString */;
val* var205 /* : String */;
val* var206 /* : nullable Int */;
val* var207 /* : nullable Int */;
val* var208 /* : nullable Bool */;
val* var209 /* : nullable Bool */;
val* var210 /* : nullable AAnnotation */;
val* var_atnoinit /* var atnoinit: nullable AAnnotation */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
short int var216 /* : Bool */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : CString */;
val* var220 /* : String */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Int */;
val* var223 /* : nullable Bool */;
val* var224 /* : nullable Bool */;
val* var225 /* : nullable AAnnotation */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : CString */;
val* var238 /* : String */;
val* var239 /* : nullable Int */;
val* var240 /* : nullable Int */;
val* var241 /* : nullable Bool */;
val* var242 /* : nullable Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : CString */;
val* var251 /* : String */;
val* var252 /* : nullable Int */;
val* var253 /* : nullable Int */;
val* var254 /* : nullable Bool */;
val* var255 /* : nullable Bool */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : CString */;
val* var259 /* : String */;
val* var260 /* : nullable Int */;
val* var261 /* : nullable Int */;
val* var262 /* : nullable Bool */;
val* var263 /* : nullable Bool */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : CString */;
val* var267 /* : String */;
val* var268 /* : nullable Int */;
val* var269 /* : nullable Int */;
val* var270 /* : nullable Bool */;
val* var271 /* : nullable Bool */;
val* var272 /* : nullable AAnnotation */;
val* var_atlazy /* var atlazy: nullable AAnnotation */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : CString */;
val* var276 /* : String */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Int */;
val* var279 /* : nullable Bool */;
val* var280 /* : nullable Bool */;
val* var281 /* : nullable AAnnotation */;
val* var_atlateinit /* var atlateinit: nullable AAnnotation */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
short int var_288 /* var : Bool */;
short int var289 /* : Bool */;
short int var290 /* : Bool */;
short int var292 /* : Bool */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var296 /* : Bool */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
short int var_300 /* var : Bool */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
short int var304 /* : Bool */;
short int var305 /* : Bool */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : CString */;
val* var309 /* : String */;
val* var310 /* : nullable Int */;
val* var311 /* : nullable Int */;
val* var312 /* : nullable Bool */;
val* var313 /* : nullable Bool */;
short int var314 /* : Bool */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
short int var318 /* : Bool */;
short int var319 /* : Bool */;
short int var321 /* : Bool */;
short int var322 /* : Bool */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : CString */;
val* var326 /* : String */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Int */;
val* var329 /* : nullable Bool */;
val* var330 /* : nullable Bool */;
short int var331 /* : Bool */;
short int var332 /* : Bool */;
short int var334 /* : Bool */;
short int var335 /* : Bool */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : CString */;
val* var339 /* : String */;
val* var340 /* : nullable Int */;
val* var341 /* : nullable Int */;
val* var342 /* : nullable Bool */;
val* var343 /* : nullable Bool */;
val* var346 /* : MAttribute */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : CString */;
val* var350 /* : String */;
val* var351 /* : nullable Int */;
val* var352 /* : nullable Int */;
val* var353 /* : nullable Bool */;
val* var354 /* : nullable Bool */;
val* var355 /* : Text */;
val* var356 /* : Location */;
val* var358 /* : Location */;
val* var359 /* : Sys */;
val* var360 /* : MVisibility */;
val* var_mlazyprop /* var mlazyprop: MAttribute */;
val* var362 /* : MAttributeDef */;
val* var363 /* : Location */;
val* var365 /* : Location */;
val* var_mlazypropdef /* var mlazypropdef: MAttributeDef */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : CString */;
val* var371 /* : String */;
val* var372 /* : nullable Int */;
val* var373 /* : nullable Int */;
val* var374 /* : nullable Bool */;
val* var375 /* : nullable Bool */;
val* var376 /* : nullable AAnnotation */;
val* var_atoptional /* var atoptional: nullable AAnnotation */;
short int var377 /* : Bool */;
short int var378 /* : Bool */;
short int var380 /* : Bool */;
short int var381 /* : Bool */;
short int var382 /* : Bool */;
short int var384 /* : Bool */;
short int var385 /* : Bool */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : CString */;
val* var389 /* : String */;
val* var390 /* : nullable Int */;
val* var391 /* : nullable Int */;
val* var392 /* : nullable Bool */;
val* var393 /* : nullable Bool */;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : CString */;
val* var398 /* : String */;
val* var399 /* : nullable Int */;
val* var400 /* : nullable Int */;
val* var401 /* : nullable Bool */;
val* var402 /* : nullable Bool */;
val* var403 /* : nullable AAnnotation */;
val* var_atreadonly /* var atreadonly: nullable AAnnotation */;
short int var404 /* : Bool */;
short int var405 /* : Bool */;
short int var407 /* : Bool */;
short int var408 /* : Bool */;
short int var409 /* : Bool */;
short int var411 /* : Bool */;
short int var412 /* : Bool */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : CString */;
val* var416 /* : String */;
val* var417 /* : nullable Int */;
val* var418 /* : nullable Int */;
val* var419 /* : nullable Bool */;
val* var420 /* : nullable Bool */;
short int var421 /* : Bool */;
short int var422 /* : Bool */;
short int var423 /* : Bool */;
short int var424 /* : Bool */;
short int var_425 /* var : Bool */;
short int var426 /* : Bool */;
short int var428 /* : Bool */;
short int var429 /* : Bool */;
short int var_430 /* var : Bool */;
short int var431 /* : Bool */;
short int var433 /* : Bool */;
short int var434 /* : Bool */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : CString */;
val* var438 /* : String */;
val* var439 /* : nullable Int */;
val* var440 /* : nullable Int */;
val* var441 /* : nullable Bool */;
val* var442 /* : nullable Bool */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : CString */;
val* var446 /* : String */;
val* var447 /* : nullable Int */;
val* var448 /* : nullable Int */;
val* var449 /* : nullable Bool */;
val* var450 /* : nullable Bool */;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : CString */;
val* var454 /* : String */;
val* var455 /* : nullable Int */;
val* var456 /* : nullable Int */;
val* var457 /* : nullable Bool */;
val* var458 /* : nullable Bool */;
val* var459 /* : Text */;
val* var_writename /* var writename: String */;
static val* varonce460;
val* var461 /* : String */;
char* var462 /* : CString */;
val* var463 /* : String */;
val* var464 /* : nullable Int */;
val* var465 /* : nullable Int */;
val* var466 /* : nullable Bool */;
val* var467 /* : nullable Bool */;
val* var468 /* : nullable AAnnotation */;
val* var_atwritable /* var atwritable: nullable AAnnotation */;
short int var469 /* : Bool */;
short int var470 /* : Bool */;
short int var472 /* : Bool */;
short int var473 /* : Bool */;
val* var474 /* : ANodes[AExpr] */;
val* var476 /* : ANodes[AExpr] */;
short int var477 /* : Bool */;
short int var478 /* : Bool */;
val* var479 /* : String */;
val* var480 /* : nullable String */;
val* var481 /* : nullable MProperty */;
short int var482 /* : Bool */;
int cltype483;
int idtype484;
const char* var_class_name485;
val* var_mwriteprop /* var mwriteprop: nullable MMethod */;
val* var_nwkwredef /* var nwkwredef: nullable Token */;
short int var486 /* : Bool */;
short int var487 /* : Bool */;
short int var489 /* : Bool */;
short int var490 /* : Bool */;
val* var491 /* : nullable TKwredef */;
val* var493 /* : nullable TKwredef */;
short int var494 /* : Bool */;
short int var495 /* : Bool */;
short int var497 /* : Bool */;
short int var499 /* : Bool */;
short int var500 /* : Bool */;
short int var501 /* : Bool */;
short int var503 /* : Bool */;
short int var504 /* : Bool */;
val* var505 /* : nullable AVisibility */;
val* var507 /* : nullable AVisibility */;
val* var508 /* : MVisibility */;
val* var_mvisibility509 /* var mvisibility: nullable Object */;
val* var510 /* : MVisibility */;
val* var512 /* : MVisibility */;
val* var513 /* : Sys */;
val* var514 /* : MVisibility */;
short int var515 /* : Bool */;
val* var516 /* : Sys */;
val* var517 /* : MVisibility */;
val* var518 /* : MMethod */;
val* var519 /* : Location */;
val* var521 /* : Location */;
short int var522 /* : Bool */;
short int var523 /* : Bool */;
val* var525 /* : nullable MDeprecationInfo */;
val* var527 /* : nullable MDeprecationInfo */;
short int var529 /* : Bool */;
short int var531 /* : Bool */;
val* var532 /* : nullable Token */;
val* var533 /* : nullable TKwredef */;
val* var535 /* : nullable TKwredef */;
short int var536 /* : Bool */;
short int var537 /* : Bool */;
short int var538 /* : Bool */;
short int var539 /* : Bool */;
short int var541 /* : Bool */;
short int var542 /* : Bool */;
val* var543 /* : nullable AVisibility */;
val* var545 /* : nullable AVisibility */;
val* var546 /* : Map[MProperty, APropdef] */;
val* var548 /* : Map[MProperty, APropdef] */;
val* var549 /* : MMethodDef */;
val* var550 /* : Location */;
val* var552 /* : Location */;
val* var_mwritepropdef /* var mwritepropdef: MMethodDef */;
val* var554 /* : HashMap[MPropDef, APropdef] */;
val* var556 /* : HashMap[MPropDef, APropdef] */;
val* var557 /* : nullable MDoc */;
val* var559 /* : nullable MDoc */;
short int var561 /* : Bool */;
short int var562 /* : Bool */;
short int var564 /* : Bool */;
short int var565 /* : Bool */;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : CString */;
val* var570 /* : String */;
val* var571 /* : nullable Int */;
val* var572 /* : nullable Int */;
val* var573 /* : nullable Bool */;
val* var574 /* : nullable Bool */;
val* var575 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var576 /* : Bool */;
short int var577 /* : Bool */;
short int var579 /* : Bool */;
short int var580 /* : Bool */;
short int var581 /* : Bool */;
short int var583 /* : Bool */;
static val* varonce584;
val* var585 /* : String */;
char* var586 /* : CString */;
val* var587 /* : String */;
val* var588 /* : nullable Int */;
val* var589 /* : nullable Int */;
val* var590 /* : nullable Bool */;
val* var591 /* : nullable Bool */;
short int var592 /* : Bool */;
short int var593 /* : Bool */;
static val* varonce594;
val* var595 /* : String */;
char* var596 /* : CString */;
val* var597 /* : String */;
val* var598 /* : nullable Int */;
val* var599 /* : nullable Int */;
val* var600 /* : nullable Bool */;
val* var601 /* : nullable Bool */;
short int var602 /* : Bool */;
short int var603 /* : Bool */;
static val* varonce604;
val* var605 /* : String */;
char* var606 /* : CString */;
val* var607 /* : String */;
val* var608 /* : nullable Int */;
val* var609 /* : nullable Int */;
val* var610 /* : nullable Bool */;
val* var611 /* : nullable Bool */;
short int var612 /* : Bool */;
short int var613 /* : Bool */;
short int var615 /* : Bool */;
short int var617 /* : Bool */;
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
short int var634 /* : Bool */;
short int var635 /* : Bool */;
short int var637 /* : Bool */;
short int var638 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var2 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclass = var;
{
{ /* Inline parser_nodes$AAttrPropdef$n_id2 (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1340);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_nid2 = var3;
{
var6 = nitc__lexer_work___Token___text(var_nid2);
}
var_name = var6;
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "abstract";
var10 = (val*)(8l<<2|1);
var11 = (val*)(8l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce = var7;
}
{
var14 = nitc__annotation___Prod___get_single_annotation(self, var7, var_modelbuilder);
}
var_atabstract = var14;
if (var_atabstract == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_atabstract,var_other) on <var_atabstract:nullable AAnnotation(AAnnotation)> */
var20 = var_atabstract == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:MClass> */
var23 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model$MClassKind$need_init (var21) on <var21:MClassKind> */
var26 = var21->attrs[COLOR_nitc__model__MClassKind___need_init].s; /* _need_init on <var21:MClassKind> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = !var24;
if (var27){
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "Error: attempt to define attribute `";
var34 = (val*)(36l<<2|1);
var35 = (val*)(36l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[0]=var31;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "` in the ";
var42 = (val*)(9l<<2|1);
var43 = (val*)(9l<<2|1);
var44 = (val*)((long)(0)<<2|3);
var45 = (val*)((long)(0)<<2|3);
var41 = core__flat___CString___to_s_unsafe(var40, var42, var43, var44, var45);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var29)->values[2]=var39;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " `";
var50 = (val*)(2l<<2|1);
var51 = (val*)(2l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var29)->values[4]=var47;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "`.";
var58 = (val*)(2l<<2|1);
var59 = (val*)(2l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var29)->values[6]=var55;
} else {
var29 = varonce28;
varonce28 = NULL;
}
((struct instance_core__NativeArray*)var29)->values[1]=var_name;
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:MClass> */
var64 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__Object__to_s]))(var62); /* to_s on <var62:MClassKind>*/
}
((struct instance_core__NativeArray*)var29)->values[3]=var65;
{
var66 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var29)->values[5]=var66;
{
var67 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var67); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var68 = NEW_nitc__MAttribute(&type_nitc__MAttribute);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "_";
var73 = (val*)(1l<<2|1);
var74 = (val*)(1l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
{
var77 = ((val*(*)(val* self, val* p0))(var70->class->vft[COLOR_core__abstract_text__Text___43d]))(var70, var_name); /* + on <var70:String>*/
}
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AAttrPropdef> */
var80 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
var81 = glob_sys;
{
var82 = nitc__model_base___core__Sys___private_visibility(var81);
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var68, var_mclassdef); /* intro_mclassdef= on <var68:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var68, var77); /* name= on <var68:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var68, var78); /* location= on <var68:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var68, var82); /* visibility= on <var68:MAttribute>*/
}
{
((void(*)(val* self))(var68->class->vft[COLOR_core__kernel__Object__init]))(var68); /* init on <var68:MAttribute>*/
}
var_mprop = var68;
var83 = NEW_nitc__MAttributeDef(&type_nitc__MAttributeDef);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AAttrPropdef> */
var86 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var86 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var83->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var83, var_mclassdef); /* mclassdef= on <var83:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var83->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var83, var_mprop); /* mproperty= on <var83:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var83->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var83, var84); /* location= on <var83:MAttributeDef>*/
}
{
((void(*)(val* self))(var83->class->vft[COLOR_core__kernel__Object__init]))(var83); /* init on <var83:MAttributeDef>*/
}
var_mpropdef = var83;
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_mpropdef->type->table_size) {
var87 = 0;
} else {
var87 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (unlikely(!var87)) {
var_class_name = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1190);
fatal_exit(1);
}
{
{ /* Inline modelize_property$APropdef$mpropdef= (self,var_mpropdef) on <self:AAttrPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct92 = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype90 = type_struct92->color;
idtype91 = type_struct92->id;
if(cltype90 >= var_mpropdef->type->table_size) {
var89 = 0;
} else {
var89 = var_mpropdef->type->type_table[cltype90] == idtype91;
}
if (unlikely(!var89)) {
var_class_name93 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 557);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AAttrPropdef> */
RET_LABEL88:(void)0;
}
}
{
{ /* Inline modelize_property$ModelBuilder$mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var96 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var94, var_mpropdef, self); /* Direct call hash_collection$HashMap$[]= on <var94:HashMap[MPropDef, APropdef]>*/
}
} else {
}
var_readname = var_name;
{
var97 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_readname);
}
/* <var97:nullable MProperty> isa nullable MMethod */
cltype99 = type_nullable__nitc__MMethod.color;
idtype100 = type_nullable__nitc__MMethod.id;
if(var97 == NULL) {
var98 = 1;
} else {
if(cltype99 >= var97->type->table_size) {
var98 = 0;
} else {
var98 = var97->type->type_table[cltype99] == idtype100;
}
}
if (unlikely(!var98)) {
var_class_name101 = var97 == NULL ? "null" : var97->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1195);
fatal_exit(1);
}
var_mreadprop = var97;
if (var_mreadprop == NULL) {
var102 = 1; /* is null */
} else {
var102 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mreadprop,((val*)NULL)) on <var_mreadprop:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mreadprop,var_other) on <var_mreadprop:nullable MMethod(MMethod)> */
var107 = var_mreadprop == var_other;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
{
{ /* Inline parser_nodes$ADefinition$n_visibility (self) on <self:AAttrPropdef> */
var110 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
var111 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var108);
}
var_mvisibility = var111;
var112 = NEW_nitc__MMethod(&type_nitc__MMethod);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AAttrPropdef> */
var115 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var112->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var112, var_mclassdef); /* intro_mclassdef= on <var112:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var112->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var112, var_readname); /* name= on <var112:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var112->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var112, var113); /* location= on <var112:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var112->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var112, var_mvisibility); /* visibility= on <var112:MMethod>*/
}
{
((void(*)(val* self))(var112->class->vft[COLOR_core__kernel__Object__init]))(var112); /* init on <var112:MMethod>*/
}
var_mreadprop = var112;
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (self) on <self:AAttrPropdef> */
var118 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
var119 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var116, 0, var_mreadprop);
}
var120 = !var119;
if (var120){
{
{ /* Inline model_base$MEntity$is_broken= (var_mreadprop,1) on <var_mreadprop:nullable MMethod(MMethod)> */
var_mreadprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mreadprop:nullable MMethod(MMethod)> */
RET_LABEL121:(void)0;
}
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model_base$MEntity$is_broken (var_mreadprop) on <var_mreadprop:nullable MMethod(MMethod)> */
var124 = var_mreadprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mreadprop:nullable MMethod(MMethod)> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
if (var122){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (self) on <self:AAttrPropdef> */
var127 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
var128 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var125, 1, var_mreadprop);
}
var129 = !var128;
if (var129){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ADefinition$n_visibility (self) on <self:AAttrPropdef> */
var132 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var130, var_mreadprop); /* Direct call modelize_property$APropdef$check_redef_property_visibility on <self:AAttrPropdef>*/
}
}
{
{ /* Inline modelize_property$MClassDef$mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var135 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var135 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var133&3)?class_info[((long)var133&3)]:var133->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var133, var_mreadprop, self); /* []= on <var133:Map[MProperty, APropdef]>*/
}
var136 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AAttrPropdef> */
var139 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var139 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var136->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var136, var_mclassdef); /* mclassdef= on <var136:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var136->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var136, var_mreadprop); /* mproperty= on <var136:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var136->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var136, var137); /* location= on <var136:MMethodDef>*/
}
{
((void(*)(val* self))(var136->class->vft[COLOR_core__kernel__Object__init]))(var136); /* init on <var136:MMethodDef>*/
}
var_mreadpropdef = var136;
{
{ /* Inline modelize_property$AAttrPropdef$mreadpropdef= (self,var_mreadpropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val = var_mreadpropdef; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL140:(void)0;
}
}
{
{ /* Inline modelize_property$ModelBuilder$mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var143 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var143 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var141, var_mreadpropdef, self); /* Direct call hash_collection$HashMap$[]= on <var141:HashMap[MPropDef, APropdef]>*/
}
{
nitc__modelize_property___APropdef___set_doc(self, var_mreadpropdef, var_modelbuilder); /* Direct call modelize_property$APropdef$set_doc on <self:AAttrPropdef>*/
}
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var146 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
if (var144 == NULL) {
var147 = 0; /* is null */
} else {
var147 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var144,((val*)NULL)) on <var144:nullable MPropDef(nullable MAttributeDef)> */
var_other150 = ((val*)NULL);
{
var151 = ((short int(*)(val* self, val* p0))(var144->class->vft[COLOR_core__kernel__Object___61d_61d]))(var144, var_other150); /* == on <var144:nullable MPropDef(MAttributeDef)>*/
}
var152 = !var151;
var148 = var152;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var147 = var148;
}
if (var147){
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var155 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline mdoc$MEntity$mdoc (var_mreadpropdef) on <var_mreadpropdef:MMethodDef> */
var158 = var_mreadpropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val; /* _mdoc on <var_mreadpropdef:MMethodDef> */
var156 = var158;
RET_LABEL157:(void)0;
}
}
if (var153 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1214);
fatal_exit(1);
} else {
{ /* Inline mdoc$MEntity$mdoc= (var153,var156) on <var153:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var153 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 37);
fatal_exit(1);
}
var153->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var156; /* _mdoc on <var153:nullable MPropDef(nullable MAttributeDef)> */
RET_LABEL159:(void)0;
}
}
} else {
}
if (var_atabstract == NULL) {
var160 = 0; /* is null */
} else {
var160 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var163 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other150); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var164 = !var163;
var161 = var164;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var160 = var161;
}
if (var160){
{
{ /* Inline model$MMethodDef$is_abstract= (var_mreadpropdef,1) on <var_mreadpropdef:MMethodDef> */
var_mreadpropdef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = 1; /* _is_abstract on <var_mreadpropdef:MMethodDef> */
RET_LABEL165:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$AAttrPropdef$n_expr (self) on <self:AAttrPropdef> */
var169 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var167 = var169;
RET_LABEL168:(void)0;
}
}
if (var167 == NULL) {
var170 = 0; /* is null */
} else {
var170 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var167,((val*)NULL)) on <var167:nullable AExpr> */
var_other150 = ((val*)NULL);
{
var173 = ((short int(*)(val* self, val* p0))(var167->class->vft[COLOR_core__kernel__Object___61d_61d]))(var167, var_other150); /* == on <var167:nullable AExpr(AExpr)>*/
}
var174 = !var173;
var171 = var174;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
var170 = var171;
}
var_ = var170;
if (var170){
var166 = var_;
} else {
{
{ /* Inline parser_nodes$AAttrPropdef$n_block (self) on <self:AAttrPropdef> */
var177 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var175 = var177;
RET_LABEL176:(void)0;
}
}
if (var175 == NULL) {
var178 = 0; /* is null */
} else {
var178 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var175,((val*)NULL)) on <var175:nullable AExpr> */
var_other150 = ((val*)NULL);
{
var181 = ((short int(*)(val* self, val* p0))(var175->class->vft[COLOR_core__kernel__Object___61d_61d]))(var175, var_other150); /* == on <var175:nullable AExpr(AExpr)>*/
}
var182 = !var181;
var179 = var182;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
var178 = var179;
}
var166 = var178;
}
{
{ /* Inline modelize_property$AAttrPropdef$has_value= (self,var166) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s = var166; /* _has_value on <self:AAttrPropdef> */
RET_LABEL183:(void)0;
}
}
if (var_atabstract == NULL) {
var185 = 0; /* is null */
} else {
var185 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var188 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other150); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var189 = !var188;
var186 = var189;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
var185 = var186;
}
var_190 = var185;
if (var185){
{
{ /* Inline modelize_property$AAttrPropdef$has_value (self) on <self:AAttrPropdef> */
var193 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var191 = var193;
RET_LABEL192:(void)0;
}
}
var184 = var191;
} else {
var184 = var_190;
}
if (var184){
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "Error: `abstract` attributes cannot have an initial value.";
var198 = (val*)(58l<<2|1);
var199 = (val*)(58l<<2|1);
var200 = (val*)((long)(0)<<2|3);
var201 = (val*)((long)(0)<<2|3);
var197 = core__flat___CString___to_s_unsafe(var196, var198, var199, var200, var201);
var195 = var197;
varonce194 = var195;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atabstract, var195); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "noinit";
var206 = (val*)(6l<<2|1);
var207 = (val*)(6l<<2|1);
var208 = (val*)((long)(0)<<2|3);
var209 = (val*)((long)(0)<<2|3);
var205 = core__flat___CString___to_s_unsafe(var204, var206, var207, var208, var209);
var203 = var205;
varonce202 = var203;
}
{
var210 = nitc__annotation___Prod___get_single_annotation(self, var203, var_modelbuilder);
}
var_atnoinit = var210;
if (var_atnoinit == NULL) {
var211 = 1; /* is null */
} else {
var211 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_atnoinit,((val*)NULL)) on <var_atnoinit:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_atnoinit,var_other) on <var_atnoinit:nullable AAnnotation(AAnnotation)> */
var216 = var_atnoinit == var_other;
var214 = var216;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
}
var212 = var214;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
var211 = var212;
}
if (var211){
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = "noautoinit";
var221 = (val*)(10l<<2|1);
var222 = (val*)(10l<<2|1);
var223 = (val*)((long)(0)<<2|3);
var224 = (val*)((long)(0)<<2|3);
var220 = core__flat___CString___to_s_unsafe(var219, var221, var222, var223, var224);
var218 = var220;
varonce217 = var218;
}
{
var225 = nitc__annotation___Prod___get_single_annotation(self, var218, var_modelbuilder);
}
var_atnoinit = var225;
} else {
}
if (var_atnoinit == NULL) {
var226 = 0; /* is null */
} else {
var226 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atnoinit,((val*)NULL)) on <var_atnoinit:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var229 = ((short int(*)(val* self, val* p0))(var_atnoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atnoinit, var_other150); /* == on <var_atnoinit:nullable AAnnotation(AAnnotation)>*/
}
var230 = !var229;
var227 = var230;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
var226 = var227;
}
if (var226){
{
{ /* Inline modelize_property$AAttrPropdef$noinit= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s = 1; /* _noinit on <self:AAttrPropdef> */
RET_LABEL231:(void)0;
}
}
{
{ /* Inline modelize_property$AAttrPropdef$has_value (self) on <self:AAttrPropdef> */
var234 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var232 = var234;
RET_LABEL233:(void)0;
}
}
if (var232){
if (likely(varonce235!=NULL)) {
var236 = varonce235;
} else {
var237 = "Error: `noautoinit` attributes cannot have an initial value.";
var239 = (val*)(60l<<2|1);
var240 = (val*)(60l<<2|1);
var241 = (val*)((long)(0)<<2|3);
var242 = (val*)((long)(0)<<2|3);
var238 = core__flat___CString___to_s_unsafe(var237, var239, var240, var241, var242);
var236 = var238;
varonce235 = var236;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atnoinit, var236); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (var_atabstract == NULL) {
var243 = 0; /* is null */
} else {
var243 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var246 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other150); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var247 = !var246;
var244 = var247;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
var243 = var244;
}
if (var243){
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "useless-noautoinit";
var252 = (val*)(18l<<2|1);
var253 = (val*)(18l<<2|1);
var254 = (val*)((long)(0)<<2|3);
var255 = (val*)((long)(0)<<2|3);
var251 = core__flat___CString___to_s_unsafe(var250, var252, var253, var254, var255);
var249 = var251;
varonce248 = var249;
}
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = "Warning: superfluous `noautoinit` on abstract attribute.";
var260 = (val*)(56l<<2|1);
var261 = (val*)(56l<<2|1);
var262 = (val*)((long)(0)<<2|3);
var263 = (val*)((long)(0)<<2|3);
var259 = core__flat___CString___to_s_unsafe(var258, var260, var261, var262, var263);
var257 = var259;
varonce256 = var257;
}
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, var_atnoinit, var249, var257); /* Direct call modelbuilder_base$ModelBuilder$warning on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
if (likely(varonce264!=NULL)) {
var265 = varonce264;
} else {
var266 = "lazy";
var268 = (val*)(4l<<2|1);
var269 = (val*)(4l<<2|1);
var270 = (val*)((long)(0)<<2|3);
var271 = (val*)((long)(0)<<2|3);
var267 = core__flat___CString___to_s_unsafe(var266, var268, var269, var270, var271);
var265 = var267;
varonce264 = var265;
}
{
var272 = nitc__annotation___Prod___get_single_annotation(self, var265, var_modelbuilder);
}
var_atlazy = var272;
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "lateinit";
var277 = (val*)(8l<<2|1);
var278 = (val*)(8l<<2|1);
var279 = (val*)((long)(0)<<2|3);
var280 = (val*)((long)(0)<<2|3);
var276 = core__flat___CString___to_s_unsafe(var275, var277, var278, var279, var280);
var274 = var276;
varonce273 = var274;
}
{
var281 = nitc__annotation___Prod___get_single_annotation(self, var274, var_modelbuilder);
}
var_atlateinit = var281;
if (var_atlazy == NULL) {
var283 = 0; /* is null */
} else {
var283 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atlazy,((val*)NULL)) on <var_atlazy:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var286 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlazy, var_other150); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
}
var287 = !var286;
var284 = var287;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
var283 = var284;
}
var_288 = var283;
if (var283){
var282 = var_288;
} else {
if (var_atlateinit == NULL) {
var289 = 0; /* is null */
} else {
var289 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var292 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other150); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var293 = !var292;
var290 = var293;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
var289 = var290;
}
var282 = var289;
}
if (var282){
if (var_atlazy == NULL) {
var295 = 0; /* is null */
} else {
var295 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atlazy,((val*)NULL)) on <var_atlazy:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var298 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlazy, var_other150); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
}
var299 = !var298;
var296 = var299;
goto RET_LABEL297;
RET_LABEL297:(void)0;
}
var295 = var296;
}
var_300 = var295;
if (var295){
if (var_atlateinit == NULL) {
var301 = 0; /* is null */
} else {
var301 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var304 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other150); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var305 = !var304;
var302 = var305;
goto RET_LABEL303;
RET_LABEL303:(void)0;
}
var301 = var302;
}
var294 = var301;
} else {
var294 = var_300;
}
if (var294){
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "Error: `lazy` incompatible with `lateinit`.";
var310 = (val*)(43l<<2|1);
var311 = (val*)(43l<<2|1);
var312 = (val*)((long)(0)<<2|3);
var313 = (val*)((long)(0)<<2|3);
var309 = core__flat___CString___to_s_unsafe(var308, var310, var311, var312, var313);
var307 = var309;
varonce306 = var307;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atlazy, var307); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$has_value (self) on <self:AAttrPropdef> */
var316 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var314 = var316;
RET_LABEL315:(void)0;
}
}
var317 = !var314;
if (var317){
if (var_atlazy == NULL) {
var318 = 0; /* is null */
} else {
var318 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atlazy,((val*)NULL)) on <var_atlazy:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var321 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlazy, var_other150); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
}
var322 = !var321;
var319 = var322;
goto RET_LABEL320;
RET_LABEL320:(void)0;
}
var318 = var319;
}
if (var318){
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = "Error: `lazy` attributes need a value.";
var327 = (val*)(38l<<2|1);
var328 = (val*)(38l<<2|1);
var329 = (val*)((long)(0)<<2|3);
var330 = (val*)((long)(0)<<2|3);
var326 = core__flat___CString___to_s_unsafe(var325, var327, var328, var329, var330);
var324 = var326;
varonce323 = var324;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atlazy, var324); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (var_atlateinit == NULL) {
var331 = 0; /* is null */
} else {
var331 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var334 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other150); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var335 = !var334;
var332 = var335;
goto RET_LABEL333;
RET_LABEL333:(void)0;
}
var331 = var332;
}
if (var331){
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "Error: `lateinit` attributes need a value.";
var340 = (val*)(42l<<2|1);
var341 = (val*)(42l<<2|1);
var342 = (val*)((long)(0)<<2|3);
var343 = (val*)((long)(0)<<2|3);
var339 = core__flat___CString___to_s_unsafe(var338, var340, var341, var342, var343);
var337 = var339;
varonce336 = var337;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atlateinit, var337); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
{
{ /* Inline modelize_property$AAttrPropdef$has_value= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s = 1; /* _has_value on <self:AAttrPropdef> */
RET_LABEL344:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$is_lazy= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s = 1; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL345:(void)0;
}
}
var346 = NEW_nitc__MAttribute(&type_nitc__MAttribute);
if (likely(varonce347!=NULL)) {
var348 = varonce347;
} else {
var349 = "lazy _";
var351 = (val*)(6l<<2|1);
var352 = (val*)(6l<<2|1);
var353 = (val*)((long)(0)<<2|3);
var354 = (val*)((long)(0)<<2|3);
var350 = core__flat___CString___to_s_unsafe(var349, var351, var352, var353, var354);
var348 = var350;
varonce347 = var348;
}
{
var355 = ((val*(*)(val* self, val* p0))(var348->class->vft[COLOR_core__abstract_text__Text___43d]))(var348, var_name); /* + on <var348:String>*/
}
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AAttrPropdef> */
var358 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var358 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var356 = var358;
RET_LABEL357:(void)0;
}
}
var359 = glob_sys;
{
var360 = nitc__model_base___core__Sys___none_visibility(var359);
}
{
((void(*)(val* self, val* p0))(var346->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var346, var_mclassdef); /* intro_mclassdef= on <var346:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var346->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var346, var355); /* name= on <var346:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var346->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var346, var356); /* location= on <var346:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var346->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var346, var360); /* visibility= on <var346:MAttribute>*/
}
{
((void(*)(val* self))(var346->class->vft[COLOR_core__kernel__Object__init]))(var346); /* init on <var346:MAttribute>*/
}
var_mlazyprop = var346;
{
{ /* Inline model_base$MEntity$is_fictive= (var_mlazyprop,1) on <var_mlazyprop:MAttribute> */
var_mlazyprop->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mlazyprop:MAttribute> */
RET_LABEL361:(void)0;
}
}
var362 = NEW_nitc__MAttributeDef(&type_nitc__MAttributeDef);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AAttrPropdef> */
var365 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var365 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var363 = var365;
RET_LABEL364:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var362->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var362, var_mclassdef); /* mclassdef= on <var362:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var362->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var362, var_mlazyprop); /* mproperty= on <var362:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var362->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var362, var363); /* location= on <var362:MAttributeDef>*/
}
{
((void(*)(val* self))(var362->class->vft[COLOR_core__kernel__Object__init]))(var362); /* init on <var362:MAttributeDef>*/
}
var_mlazypropdef = var362;
{
{ /* Inline model_base$MEntity$is_fictive= (var_mlazypropdef,1) on <var_mlazypropdef:MAttributeDef> */
var_mlazypropdef->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mlazypropdef:MAttributeDef> */
RET_LABEL366:(void)0;
}
}
{
{ /* Inline modelize_property$AAttrPropdef$mlazypropdef= (self,var_mlazypropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val = var_mlazypropdef; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL367:(void)0;
}
}
} else {
}
if (likely(varonce368!=NULL)) {
var369 = varonce368;
} else {
var370 = "optional";
var372 = (val*)(8l<<2|1);
var373 = (val*)(8l<<2|1);
var374 = (val*)((long)(0)<<2|3);
var375 = (val*)((long)(0)<<2|3);
var371 = core__flat___CString___to_s_unsafe(var370, var372, var373, var374, var375);
var369 = var371;
varonce368 = var369;
}
{
var376 = nitc__annotation___Prod___get_single_annotation(self, var369, var_modelbuilder);
}
var_atoptional = var376;
if (var_atoptional == NULL) {
var377 = 0; /* is null */
} else {
var377 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atoptional,((val*)NULL)) on <var_atoptional:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var380 = ((short int(*)(val* self, val* p0))(var_atoptional->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atoptional, var_other150); /* == on <var_atoptional:nullable AAnnotation(AAnnotation)>*/
}
var381 = !var380;
var378 = var381;
goto RET_LABEL379;
RET_LABEL379:(void)0;
}
var377 = var378;
}
if (var377){
{
{ /* Inline modelize_property$AAttrPropdef$has_value (self) on <self:AAttrPropdef> */
var384 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var382 = var384;
RET_LABEL383:(void)0;
}
}
var385 = !var382;
if (var385){
if (likely(varonce386!=NULL)) {
var387 = varonce386;
} else {
var388 = "Error: `optional` attributes need a default value.";
var390 = (val*)(50l<<2|1);
var391 = (val*)(50l<<2|1);
var392 = (val*)((long)(0)<<2|3);
var393 = (val*)((long)(0)<<2|3);
var389 = core__flat___CString___to_s_unsafe(var388, var390, var391, var392, var393);
var387 = var389;
varonce386 = var387;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atoptional, var387); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$is_optional= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s = 1; /* _is_optional on <self:AAttrPropdef> */
RET_LABEL394:(void)0;
}
}
} else {
}
if (likely(varonce395!=NULL)) {
var396 = varonce395;
} else {
var397 = "readonly";
var399 = (val*)(8l<<2|1);
var400 = (val*)(8l<<2|1);
var401 = (val*)((long)(0)<<2|3);
var402 = (val*)((long)(0)<<2|3);
var398 = core__flat___CString___to_s_unsafe(var397, var399, var400, var401, var402);
var396 = var398;
varonce395 = var396;
}
{
var403 = nitc__annotation___Prod___get_single_annotation(self, var396, var_modelbuilder);
}
var_atreadonly = var403;
if (var_atreadonly == NULL) {
var404 = 0; /* is null */
} else {
var404 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atreadonly,((val*)NULL)) on <var_atreadonly:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var407 = ((short int(*)(val* self, val* p0))(var_atreadonly->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atreadonly, var_other150); /* == on <var_atreadonly:nullable AAnnotation(AAnnotation)>*/
}
var408 = !var407;
var405 = var408;
goto RET_LABEL406;
RET_LABEL406:(void)0;
}
var404 = var405;
}
if (var404){
{
{ /* Inline modelize_property$AAttrPropdef$has_value (self) on <self:AAttrPropdef> */
var411 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var409 = var411;
RET_LABEL410:(void)0;
}
}
var412 = !var409;
if (var412){
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "Error: `readonly` attributes need a value.";
var417 = (val*)(42l<<2|1);
var418 = (val*)(42l<<2|1);
var419 = (val*)((long)(0)<<2|3);
var420 = (val*)((long)(0)<<2|3);
var416 = core__flat___CString___to_s_unsafe(var415, var417, var418, var419, var420);
var414 = var416;
varonce413 = var414;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atreadonly, var414); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
var423 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var424 = !var423;
var_425 = var424;
if (var424){
{
{ /* Inline modelize_property$AAttrPropdef$has_value (self) on <self:AAttrPropdef> */
var428 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var426 = var428;
RET_LABEL427:(void)0;
}
}
var429 = !var426;
var422 = var429;
} else {
var422 = var_425;
}
var_430 = var422;
if (var422){
{
{ /* Inline modelize_property$AAttrPropdef$noinit (self) on <self:AAttrPropdef> */
var433 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var431 = var433;
RET_LABEL432:(void)0;
}
}
var434 = !var431;
var421 = var434;
} else {
var421 = var_430;
}
if (var421){
if (likely(varonce435!=NULL)) {
var436 = varonce435;
} else {
var437 = "attr-in-refinement";
var439 = (val*)(18l<<2|1);
var440 = (val*)(18l<<2|1);
var441 = (val*)((long)(0)<<2|3);
var442 = (val*)((long)(0)<<2|3);
var438 = core__flat___CString___to_s_unsafe(var437, var439, var440, var441, var442);
var436 = var438;
varonce435 = var436;
}
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "Warning: attributes in refinement need a value or `noautoinit`.";
var447 = (val*)(63l<<2|1);
var448 = (val*)(63l<<2|1);
var449 = (val*)((long)(0)<<2|3);
var450 = (val*)((long)(0)<<2|3);
var446 = core__flat___CString___to_s_unsafe(var445, var447, var448, var449, var450);
var444 = var446;
varonce443 = var444;
}
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var436, var444); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (likely(varonce451!=NULL)) {
var452 = varonce451;
} else {
var453 = "=";
var455 = (val*)(1l<<2|1);
var456 = (val*)(1l<<2|1);
var457 = (val*)((long)(0)<<2|3);
var458 = (val*)((long)(0)<<2|3);
var454 = core__flat___CString___to_s_unsafe(var453, var455, var456, var457, var458);
var452 = var454;
varonce451 = var452;
}
{
var459 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__abstract_text__Text___43d]))(var_name, var452); /* + on <var_name:String>*/
}
var_writename = var459;
if (likely(varonce460!=NULL)) {
var461 = varonce460;
} else {
var462 = "writable";
var464 = (val*)(8l<<2|1);
var465 = (val*)(8l<<2|1);
var466 = (val*)((long)(0)<<2|3);
var467 = (val*)((long)(0)<<2|3);
var463 = core__flat___CString___to_s_unsafe(var462, var464, var465, var466, var467);
var461 = var463;
varonce460 = var461;
}
{
var468 = nitc__annotation___Prod___get_single_annotation(self, var461, var_modelbuilder);
}
var_atwritable = var468;
if (var_atwritable == NULL) {
var469 = 0; /* is null */
} else {
var469 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var472 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other150); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var473 = !var472;
var470 = var473;
goto RET_LABEL471;
RET_LABEL471:(void)0;
}
var469 = var470;
}
if (var469){
{
{ /* Inline parser_nodes$AAnnotation$n_args (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var476 = var_atwritable->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_atwritable:nullable AAnnotation(AAnnotation)> */
if (unlikely(var476 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var474 = var476;
RET_LABEL475:(void)0;
}
}
{
var477 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var474);
}
var478 = !var477;
if (var478){
{
var480 = nitc__annotation___AAnnotation___arg_as_id(var_atwritable, var_modelbuilder);
}
if (var480!=NULL) {
var479 = var480;
} else {
var479 = var_writename;
}
var_writename = var479;
} else {
}
} else {
}
{
var481 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_writename);
}
/* <var481:nullable MProperty> isa nullable MMethod */
cltype483 = type_nullable__nitc__MMethod.color;
idtype484 = type_nullable__nitc__MMethod.id;
if(var481 == NULL) {
var482 = 1;
} else {
if(cltype483 >= var481->type->table_size) {
var482 = 0;
} else {
var482 = var481->type->type_table[cltype483] == idtype484;
}
}
if (unlikely(!var482)) {
var_class_name485 = var481 == NULL ? "null" : var481->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name485);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1289);
fatal_exit(1);
}
var_mwriteprop = var481;
var_nwkwredef = ((val*)NULL);
if (var_atwritable == NULL) {
var486 = 0; /* is null */
} else {
var486 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var489 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other150); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var490 = !var489;
var487 = var490;
goto RET_LABEL488;
RET_LABEL488:(void)0;
}
var486 = var487;
}
if (var486){
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var493 = var_atwritable->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var491 = var493;
RET_LABEL492:(void)0;
}
}
var_nwkwredef = var491;
} else {
}
if (var_mwriteprop == NULL) {
var494 = 1; /* is null */
} else {
var494 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mwriteprop,((val*)NULL)) on <var_mwriteprop:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mwriteprop,var_other) on <var_mwriteprop:nullable MMethod(MMethod)> */
var499 = var_mwriteprop == var_other;
var497 = var499;
goto RET_LABEL498;
RET_LABEL498:(void)0;
}
}
var495 = var497;
goto RET_LABEL496;
RET_LABEL496:(void)0;
}
var494 = var495;
}
if (var494){
if (var_atwritable == NULL) {
var500 = 0; /* is null */
} else {
var500 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var503 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other150); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var504 = !var503;
var501 = var504;
goto RET_LABEL502;
RET_LABEL502:(void)0;
}
var500 = var501;
}
if (var500){
{
{ /* Inline parser_nodes$ADefinition$n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var507 = var_atwritable->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var505 = var507;
RET_LABEL506:(void)0;
}
}
{
var508 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var505);
}
var_mvisibility509 = var508;
} else {
{
{ /* Inline model$MProperty$visibility (var_mreadprop) on <var_mreadprop:nullable MMethod(MMethod)> */
var512 = var_mreadprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mreadprop:nullable MMethod(MMethod)> */
if (unlikely(var512 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var510 = var512;
RET_LABEL511:(void)0;
}
}
var_mvisibility509 = var510;
var513 = glob_sys;
{
var514 = nitc__model_base___core__Sys___protected_visibility(var513);
}
{
var515 = core___core__Comparable____62d(var_mvisibility509, var514);
}
if (var515){
var516 = glob_sys;
{
var517 = nitc__model_base___core__Sys___protected_visibility(var516);
}
var_mvisibility509 = var517;
} else {
}
}
var518 = NEW_nitc__MMethod(&type_nitc__MMethod);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AAttrPropdef> */
var521 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var521 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var519 = var521;
RET_LABEL520:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var518->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var518, var_mclassdef); /* intro_mclassdef= on <var518:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var518->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var518, var_writename); /* name= on <var518:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var518->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var518, var519); /* location= on <var518:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var518->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var518, var_mvisibility509); /* visibility= on <var518:MMethod>*/
}
{
((void(*)(val* self))(var518->class->vft[COLOR_core__kernel__Object__init]))(var518); /* init on <var518:MMethod>*/
}
var_mwriteprop = var518;
{
var522 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var_nwkwredef, 0, var_mwriteprop);
}
var523 = !var522;
if (var523){
{
{ /* Inline model_base$MEntity$is_broken= (var_mwriteprop,1) on <var_mwriteprop:nullable MMethod(MMethod)> */
var_mwriteprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mwriteprop:nullable MMethod(MMethod)> */
RET_LABEL524:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc$MEntity$deprecation (var_mreadprop) on <var_mreadprop:nullable MMethod(MMethod)> */
var527 = var_mreadprop->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val; /* _deprecation on <var_mreadprop:nullable MMethod(MMethod)> */
var525 = var527;
RET_LABEL526:(void)0;
}
}
{
{ /* Inline mdoc$MEntity$deprecation= (var_mwriteprop,var525) on <var_mwriteprop:nullable MMethod(MMethod)> */
var_mwriteprop->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val = var525; /* _deprecation on <var_mwriteprop:nullable MMethod(MMethod)> */
RET_LABEL528:(void)0;
}
}
} else {
{
{ /* Inline model_base$MEntity$is_broken (var_mwriteprop) on <var_mwriteprop:nullable MMethod(MMethod)> */
var531 = var_mwriteprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mwriteprop:nullable MMethod(MMethod)> */
var529 = var531;
RET_LABEL530:(void)0;
}
}
if (var529){
goto RET_LABEL;
} else {
}
if (var_nwkwredef!=NULL) {
var532 = var_nwkwredef;
} else {
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (self) on <self:AAttrPropdef> */
var535 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var533 = var535;
RET_LABEL534:(void)0;
}
}
var532 = var533;
}
{
var536 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var532, 1, var_mwriteprop);
}
var537 = !var536;
if (var537){
goto RET_LABEL;
} else {
}
if (var_atwritable == NULL) {
var538 = 0; /* is null */
} else {
var538 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var541 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other150); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var542 = !var541;
var539 = var542;
goto RET_LABEL540;
RET_LABEL540:(void)0;
}
var538 = var539;
}
if (var538){
{
{ /* Inline parser_nodes$ADefinition$n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var545 = var_atwritable->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var543 = var545;
RET_LABEL544:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var543, var_mwriteprop); /* Direct call modelize_property$APropdef$check_redef_property_visibility on <self:AAttrPropdef>*/
}
} else {
}
}
{
{ /* Inline modelize_property$MClassDef$mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var548 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var548 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var546 = var548;
RET_LABEL547:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var546&3)?class_info[((long)var546&3)]:var546->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var546, var_mwriteprop, self); /* []= on <var546:Map[MProperty, APropdef]>*/
}
var549 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AAttrPropdef> */
var552 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var552 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var550 = var552;
RET_LABEL551:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var549->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var549, var_mclassdef); /* mclassdef= on <var549:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var549->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var549, var_mwriteprop); /* mproperty= on <var549:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var549->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var549, var550); /* location= on <var549:MMethodDef>*/
}
{
((void(*)(val* self))(var549->class->vft[COLOR_core__kernel__Object__init]))(var549); /* init on <var549:MMethodDef>*/
}
var_mwritepropdef = var549;
{
{ /* Inline modelize_property$AAttrPropdef$mwritepropdef= (self,var_mwritepropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val = var_mwritepropdef; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL553:(void)0;
}
}
{
{ /* Inline modelize_property$ModelBuilder$mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var556 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var556 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var554 = var556;
RET_LABEL555:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var554, var_mwritepropdef, self); /* Direct call hash_collection$HashMap$[]= on <var554:HashMap[MPropDef, APropdef]>*/
}
{
{ /* Inline mdoc$MEntity$mdoc (var_mreadpropdef) on <var_mreadpropdef:MMethodDef> */
var559 = var_mreadpropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val; /* _mdoc on <var_mreadpropdef:MMethodDef> */
var557 = var559;
RET_LABEL558:(void)0;
}
}
{
{ /* Inline mdoc$MEntity$mdoc= (var_mwritepropdef,var557) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var557; /* _mdoc on <var_mwritepropdef:MMethodDef> */
RET_LABEL560:(void)0;
}
}
if (var_atabstract == NULL) {
var561 = 0; /* is null */
} else {
var561 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var564 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other150); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var565 = !var564;
var562 = var565;
goto RET_LABEL563;
RET_LABEL563:(void)0;
}
var561 = var562;
}
if (var561){
{
{ /* Inline model$MMethodDef$is_abstract= (var_mwritepropdef,1) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = 1; /* _is_abstract on <var_mwritepropdef:MMethodDef> */
RET_LABEL566:(void)0;
}
}
} else {
}
if (likely(varonce567!=NULL)) {
var568 = varonce567;
} else {
var569 = "autoinit";
var571 = (val*)(8l<<2|1);
var572 = (val*)(8l<<2|1);
var573 = (val*)((long)(0)<<2|3);
var574 = (val*)((long)(0)<<2|3);
var570 = core__flat___CString___to_s_unsafe(var569, var571, var572, var573, var574);
var568 = var570;
varonce567 = var568;
}
{
var575 = nitc__annotation___Prod___get_single_annotation(self, var568, var_modelbuilder);
}
var_atautoinit = var575;
if (var_atautoinit == NULL) {
var576 = 0; /* is null */
} else {
var576 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atautoinit,((val*)NULL)) on <var_atautoinit:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var579 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atautoinit, var_other150); /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/
}
var580 = !var579;
var577 = var580;
goto RET_LABEL578;
RET_LABEL578:(void)0;
}
var576 = var577;
}
if (var576){
{
{ /* Inline modelize_property$AAttrPropdef$has_value (self) on <self:AAttrPropdef> */
var583 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var581 = var583;
RET_LABEL582:(void)0;
}
}
if (var581){
if (likely(varonce584!=NULL)) {
var585 = varonce584;
} else {
var586 = "Error: `autoinit` attributes cannot have an initial value.";
var588 = (val*)(58l<<2|1);
var589 = (val*)(58l<<2|1);
var590 = (val*)((long)(0)<<2|3);
var591 = (val*)((long)(0)<<2|3);
var587 = core__flat___CString___to_s_unsafe(var586, var588, var589, var590, var591);
var585 = var587;
varonce584 = var585;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var585); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var592 = nitc___nitc__MPropDef___is_intro(var_mwritepropdef);
}
var593 = !var592;
if (var593){
if (likely(varonce594!=NULL)) {
var595 = varonce594;
} else {
var596 = "Error: `autoinit` attributes cannot be set on redefinitions.";
var598 = (val*)(60l<<2|1);
var599 = (val*)(60l<<2|1);
var600 = (val*)((long)(0)<<2|3);
var601 = (val*)((long)(0)<<2|3);
var597 = core__flat___CString___to_s_unsafe(var596, var598, var599, var600, var601);
var595 = var597;
varonce594 = var595;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var595); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var602 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var603 = !var602;
if (var603){
if (likely(varonce604!=NULL)) {
var605 = varonce604;
} else {
var606 = "Error: `autoinit` attributes cannot be used in class refinements.";
var608 = (val*)(65l<<2|1);
var609 = (val*)(65l<<2|1);
var610 = (val*)((long)(0)<<2|3);
var611 = (val*)((long)(0)<<2|3);
var607 = core__flat___CString___to_s_unsafe(var606, var608, var609, var610, var611);
var605 = var607;
varonce604 = var605;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var605); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (var_atabstract == NULL) {
var612 = 1; /* is null */
} else {
var612 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_atabstract,var_other) on <var_atabstract:nullable AAnnotation(AAnnotation)> */
var617 = var_atabstract == var_other;
var615 = var617;
goto RET_LABEL616;
RET_LABEL616:(void)0;
}
}
var613 = var615;
goto RET_LABEL614;
RET_LABEL614:(void)0;
}
var612 = var613;
}
if (var612){
if (likely(varonce618!=NULL)) {
var619 = varonce618;
} else {
var620 = "useless-autoinit";
var622 = (val*)(16l<<2|1);
var623 = (val*)(16l<<2|1);
var624 = (val*)((long)(0)<<2|3);
var625 = (val*)((long)(0)<<2|3);
var621 = core__flat___CString___to_s_unsafe(var620, var622, var623, var624, var625);
var619 = var621;
varonce618 = var619;
}
if (likely(varonce626!=NULL)) {
var627 = varonce626;
} else {
var628 = "Warning: superfluous `autoinit` on attribute.";
var630 = (val*)(45l<<2|1);
var631 = (val*)(45l<<2|1);
var632 = (val*)((long)(0)<<2|3);
var633 = (val*)((long)(0)<<2|3);
var629 = core__flat___CString___to_s_unsafe(var628, var630, var631, var632, var633);
var627 = var629;
varonce626 = var627;
}
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, var_atautoinit, var619, var627); /* Direct call modelbuilder_base$ModelBuilder$warning on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
}
} else {
if (var_atabstract == NULL) {
var634 = 0; /* is null */
} else {
var634 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other150 = ((val*)NULL);
{
var637 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other150); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var638 = !var637;
var635 = var638;
goto RET_LABEL636;
RET_LABEL636:(void)0;
}
var634 = var635;
}
if (var634){
{
{ /* Inline modelize_property$AAttrPropdef$noinit= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s = 1; /* _noinit on <self:AAttrPropdef> */
RET_LABEL639:(void)0;
}
}
} else {
}
}
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$build_signature for (self: AAttrPropdef, ModelBuilder) */
void nitc__modelize_property___AAttrPropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
val* var3 /* : nullable MPropDef */;
val* var5 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: nullable MType */;
val* var18 /* : nullable AType */;
val* var20 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other24 /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var_inherited_type /* var inherited_type: nullable MType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : MProperty */;
val* var38 /* : MProperty */;
val* var39 /* : MPropDef */;
val* var41 /* : MPropDef */;
val* var42 /* : nullable MSignature */;
val* var44 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : nullable MType */;
val* var53 /* : nullable MType */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : MClass */;
val* var61 /* : MClass */;
val* var62 /* : MClassType */;
val* var64 /* : MClassType */;
val* var65 /* : MClassType */;
val* var67 /* : MClassType */;
val* var68 /* : MType */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : nullable AExpr */;
val* var77 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
int cltype;
int idtype;
val* var90 /* : AType */;
val* var92 /* : AType */;
val* var93 /* : nullable MType */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
val* var97 /* : AType */;
val* var99 /* : AType */;
val* var100 /* : nullable MType */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
val* var_cla /* var cla: nullable MClass */;
val* var104 /* : nullable Numeric */;
val* var106 /* : nullable Numeric */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
static val* varonce;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Bool */;
val* var116 /* : nullable Bool */;
val* var117 /* : nullable MClass */;
val* var118 /* : nullable Numeric */;
val* var120 /* : nullable Numeric */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Bool */;
val* var131 /* : nullable Bool */;
val* var132 /* : nullable MClass */;
val* var133 /* : nullable Numeric */;
val* var135 /* : nullable Numeric */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Bool */;
val* var146 /* : nullable Bool */;
val* var147 /* : nullable MClass */;
val* var148 /* : nullable Numeric */;
val* var150 /* : nullable Numeric */;
short int var151 /* : Bool */;
int cltype152;
int idtype153;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Bool */;
val* var161 /* : nullable Bool */;
val* var162 /* : nullable MClass */;
val* var163 /* : nullable Numeric */;
val* var165 /* : nullable Numeric */;
short int var166 /* : Bool */;
int cltype167;
int idtype168;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : CString */;
val* var172 /* : String */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Int */;
val* var175 /* : nullable Bool */;
val* var176 /* : nullable Bool */;
val* var177 /* : nullable MClass */;
val* var178 /* : nullable Numeric */;
val* var180 /* : nullable Numeric */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : CString */;
val* var187 /* : String */;
val* var188 /* : nullable Int */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Bool */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable MClass */;
val* var193 /* : nullable Numeric */;
val* var195 /* : nullable Numeric */;
short int var196 /* : Bool */;
int cltype197;
int idtype198;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : CString */;
val* var202 /* : String */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Bool */;
val* var206 /* : nullable Bool */;
val* var207 /* : nullable MClass */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
val* var213 /* : MClassType */;
val* var215 /* : MClassType */;
short int var216 /* : Bool */;
int cltype217;
int idtype218;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : CString */;
val* var222 /* : String */;
val* var223 /* : nullable Int */;
val* var224 /* : nullable Int */;
val* var225 /* : nullable Bool */;
val* var226 /* : nullable Bool */;
val* var227 /* : nullable MClass */;
val* var_cla228 /* var cla: nullable MClass */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
val* var234 /* : MClassType */;
val* var236 /* : MClassType */;
short int var237 /* : Bool */;
int cltype238;
int idtype239;
short int var240 /* : Bool */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
val* var249 /* : nullable MClass */;
val* var_cla250 /* var cla: nullable MClass */;
short int var251 /* : Bool */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : CString */;
val* var255 /* : String */;
val* var256 /* : nullable Int */;
val* var257 /* : nullable Int */;
val* var258 /* : nullable Bool */;
val* var259 /* : nullable Bool */;
val* var260 /* : nullable MClass */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : CString */;
val* var264 /* : String */;
val* var265 /* : nullable Int */;
val* var266 /* : nullable Int */;
val* var267 /* : nullable Bool */;
val* var268 /* : nullable Bool */;
val* var269 /* : nullable MClass */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
val* var275 /* : MClassType */;
val* var277 /* : MClassType */;
short int var278 /* : Bool */;
int cltype279;
int idtype280;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : CString */;
val* var284 /* : String */;
val* var285 /* : nullable Int */;
val* var286 /* : nullable Int */;
val* var287 /* : nullable Bool */;
val* var288 /* : nullable Bool */;
val* var289 /* : nullable MClass */;
val* var_cla290 /* var cla: nullable MClass */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
val* var296 /* : MClassType */;
val* var298 /* : MClassType */;
short int var299 /* : Bool */;
int cltype300;
int idtype301;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : CString */;
val* var305 /* : String */;
val* var306 /* : nullable Int */;
val* var307 /* : nullable Int */;
val* var308 /* : nullable Bool */;
val* var309 /* : nullable Bool */;
val* var310 /* : nullable MClass */;
val* var_cla311 /* var cla: nullable MClass */;
short int var312 /* : Bool */;
short int var313 /* : Bool */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
val* var317 /* : MClassType */;
val* var319 /* : MClassType */;
short int var320 /* : Bool */;
int cltype321;
int idtype322;
short int var323 /* : Bool */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : CString */;
val* var327 /* : String */;
val* var328 /* : nullable Int */;
val* var329 /* : nullable Int */;
val* var330 /* : nullable Bool */;
val* var331 /* : nullable Bool */;
val* var332 /* : nullable MClass */;
val* var_cla333 /* var cla: nullable MClass */;
short int var334 /* : Bool */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : CString */;
val* var338 /* : String */;
val* var339 /* : nullable Int */;
val* var340 /* : nullable Int */;
val* var341 /* : nullable Bool */;
val* var342 /* : nullable Bool */;
val* var343 /* : nullable MClass */;
short int var344 /* : Bool */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : CString */;
val* var348 /* : String */;
val* var349 /* : nullable Int */;
val* var350 /* : nullable Int */;
val* var351 /* : nullable Bool */;
val* var352 /* : nullable Bool */;
val* var353 /* : nullable MClass */;
short int var354 /* : Bool */;
short int var355 /* : Bool */;
short int var357 /* : Bool */;
short int var358 /* : Bool */;
val* var359 /* : MClassType */;
val* var361 /* : MClassType */;
val* var363 /* : NativeArray[String] */;
static val* varonce362;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : CString */;
val* var367 /* : String */;
val* var368 /* : nullable Int */;
val* var369 /* : nullable Int */;
val* var370 /* : nullable Bool */;
val* var371 /* : nullable Bool */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : CString */;
val* var375 /* : String */;
val* var376 /* : nullable Int */;
val* var377 /* : nullable Int */;
val* var378 /* : nullable Bool */;
val* var379 /* : nullable Bool */;
val* var380 /* : String */;
val* var381 /* : String */;
short int var382 /* : Bool */;
short int var383 /* : Bool */;
short int var385 /* : Bool */;
short int var387 /* : Bool */;
short int var388 /* : Bool */;
short int var389 /* : Bool */;
short int var390 /* : Bool */;
short int var392 /* : Bool */;
short int var393 /* : Bool */;
short int var_ /* var : Bool */;
short int var394 /* : Bool */;
short int var395 /* : Bool */;
short int var397 /* : Bool */;
short int var399 /* : Bool */;
short int var400 /* : Bool */;
int cltype401;
int idtype402;
val* var403 /* : AType */;
val* var405 /* : AType */;
val* var406 /* : nullable MType */;
val* var_xmtype /* var xmtype: nullable MType */;
short int var407 /* : Bool */;
short int var408 /* : Bool */;
short int var410 /* : Bool */;
short int var412 /* : Bool */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : CString */;
val* var416 /* : String */;
val* var417 /* : nullable Int */;
val* var418 /* : nullable Int */;
val* var419 /* : nullable Bool */;
val* var420 /* : nullable Bool */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : CString */;
val* var424 /* : String */;
val* var425 /* : nullable Int */;
val* var426 /* : nullable Int */;
val* var427 /* : nullable Bool */;
val* var428 /* : nullable Bool */;
short int var429 /* : Bool */;
short int var430 /* : Bool */;
short int var432 /* : Bool */;
short int var434 /* : Bool */;
val* var436 /* : NativeArray[String] */;
static val* varonce435;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : CString */;
val* var440 /* : String */;
val* var441 /* : nullable Int */;
val* var442 /* : nullable Int */;
val* var443 /* : nullable Bool */;
val* var444 /* : nullable Bool */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : CString */;
val* var448 /* : String */;
val* var449 /* : nullable Int */;
val* var450 /* : nullable Int */;
val* var451 /* : nullable Bool */;
val* var452 /* : nullable Bool */;
val* var453 /* : String */;
val* var454 /* : String */;
short int var456 /* : Bool */;
short int var457 /* : Bool */;
short int var459 /* : Bool */;
short int var460 /* : Bool */;
val* var462 /* : MSignature */;
val* var463 /* : Array[MParameter] */;
val* var_msignature464 /* var msignature: MSignature */;
val* var466 /* : nullable MMethodDef */;
val* var468 /* : nullable MMethodDef */;
val* var_mwritepropdef /* var mwritepropdef: nullable MMethodDef */;
short int var469 /* : Bool */;
short int var470 /* : Bool */;
short int var472 /* : Bool */;
short int var473 /* : Bool */;
val* var_mwritetype /* var mwritetype: MType */;
short int var474 /* : Bool */;
short int var476 /* : Bool */;
val* var477 /* : MType */;
val* var478 /* : TId */;
val* var480 /* : TId */;
val* var481 /* : String */;
val* var_name /* var name: String */;
val* var482 /* : MParameter */;
val* var_mparameter /* var mparameter: MParameter */;
val* var483 /* : MSignature */;
val* var484 /* : Array[MParameter] */;
val* var_485 /* var : Array[MParameter] */;
val* var_msignature486 /* var msignature: MSignature */;
val* var488 /* : nullable MAttributeDef */;
val* var490 /* : nullable MAttributeDef */;
val* var_mlazypropdef /* var mlazypropdef: nullable MAttributeDef */;
short int var491 /* : Bool */;
short int var492 /* : Bool */;
short int var494 /* : Bool */;
short int var495 /* : Bool */;
val* var496 /* : MClassType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property$AAttrPropdef$mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mreadpropdef = var;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mpropdef = var3;
if (var_mreadpropdef == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mreadpropdef,((val*)NULL)) on <var_mreadpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mreadpropdef,var_other) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var11 = var_mreadpropdef == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var14 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mclassdef = var12;
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var17 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_mmodule = var15;
var_mtype = ((val*)NULL);
{
{ /* Inline parser_nodes$AAttrPropdef$n_type (self) on <self:AAttrPropdef> */
var20 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ntype = var18;
if (var_ntype == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other24 = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other24); /* == on <var_ntype:nullable AType(AType)>*/
}
var26 = !var25;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
var27 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1);
}
var_mtype = var27;
if (var_mtype == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var33 = var_mtype == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
goto RET_LABEL;
} else {
}
} else {
}
var_inherited_type = ((val*)NULL);
{
var34 = nitc___nitc__MPropDef___is_intro(var_mreadpropdef);
}
var35 = !var34;
if (var35){
{
{ /* Inline model$MPropDef$mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var38 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var36) on <var36:MProperty(MMethod)> */
var41 = var36->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var36:MProperty(MMethod)> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var39) on <var39:MPropDef(MMethodDef)> */
var44 = var39->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var39:MPropDef(MMethodDef)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_msignature = var42;
if (var_msignature == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var50 = var_msignature == var_other;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var53 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
var_inherited_type = var51;
if (var_inherited_type == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_inherited_type,((val*)NULL)) on <var_inherited_type:nullable MType> */
var_other24 = ((val*)NULL);
{
var57 = ((short int(*)(val* self, val* p0))(var_inherited_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_inherited_type, var_other24); /* == on <var_inherited_type:nullable MType(MType)>*/
}
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var61 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var59) on <var59:MClass> */
var64 = var59->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var59:MClass> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var67 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_inherited_type->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_inherited_type, var62, var65, var_mmodule, 0); /* resolve_for on <var_inherited_type:nullable MType(MType)>*/
}
var_inherited_type = var68;
if (var_mtype == NULL) {
var69 = 1; /* is null */
} else {
var69 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var74 = var_mtype == var_other;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
var_mtype = var_inherited_type;
} else {
}
} else {
}
} else {
}
{
{ /* Inline parser_nodes$AAttrPropdef$n_expr (self) on <self:AAttrPropdef> */
var77 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_nexpr = var75;
if (var_mtype == NULL) {
var78 = 1; /* is null */
} else {
var78 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var83 = var_mtype == var_other;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
if (var_nexpr == NULL) {
var84 = 0; /* is null */
} else {
var84 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other24 = ((val*)NULL);
{
var87 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other24); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var88 = !var87;
var85 = var88;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (var84){
/* <var_nexpr:nullable AExpr(AExpr)> isa ANewExpr */
cltype = type_nitc__ANewExpr.color;
idtype = type_nitc__ANewExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var89 = 0;
} else {
var89 = var_nexpr->type->type_table[cltype] == idtype;
}
if (var89){
{
{ /* Inline parser_nodes$ANewExpr$n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var92 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2340);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
var93 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var90, 1);
}
var_mtype = var93;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AAsCastExpr */
cltype95 = type_nitc__AAsCastExpr.color;
idtype96 = type_nitc__AAsCastExpr.id;
if(cltype95 >= var_nexpr->type->table_size) {
var94 = 0;
} else {
var94 = var_nexpr->type->type_table[cltype95] == idtype96;
}
if (var94){
{
{ /* Inline parser_nodes$AAsCastExpr$n_type (var_nexpr) on <var_nexpr:nullable AExpr(AAsCastExpr)> */
var99 = var_nexpr->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(AAsCastExpr)> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2684);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var97, 1);
}
var_mtype = var100;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AIntegerExpr */
cltype102 = type_nitc__AIntegerExpr.color;
idtype103 = type_nitc__AIntegerExpr.id;
if(cltype102 >= var_nexpr->type->table_size) {
var101 = 0;
} else {
var101 = var_nexpr->type->type_table[cltype102] == idtype103;
}
if (var101){
var_cla = ((val*)NULL);
{
{ /* Inline literal$AIntegerExpr$value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var106 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
/* <var104:nullable Numeric> isa Int */
cltype108 = type_core__Int.color;
idtype109 = type_core__Int.id;
if(var104 == NULL) {
var107 = 0;
} else {
if(cltype108 >= (((long)var104&3)?type_info[((long)var104&3)]:var104->type)->table_size) {
var107 = 0;
} else {
var107 = (((long)var104&3)?type_info[((long)var104&3)]:var104->type)->type_table[cltype108] == idtype109;
}
}
if (var107){
if (likely(varonce!=NULL)) {
var110 = varonce;
} else {
var111 = "Int";
var113 = (val*)(3l<<2|1);
var114 = (val*)(3l<<2|1);
var115 = (val*)((long)(0)<<2|3);
var116 = (val*)((long)(0)<<2|3);
var112 = core__flat___CString___to_s_unsafe(var111, var113, var114, var115, var116);
var110 = var112;
varonce = var110;
}
{
var117 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var110);
}
var_cla = var117;
} else {
{
{ /* Inline literal$AIntegerExpr$value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var120 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
/* <var118:nullable Numeric> isa Byte */
cltype122 = type_core__Byte.color;
idtype123 = type_core__Byte.id;
if(var118 == NULL) {
var121 = 0;
} else {
if(cltype122 >= (((long)var118&3)?type_info[((long)var118&3)]:var118->type)->table_size) {
var121 = 0;
} else {
var121 = (((long)var118&3)?type_info[((long)var118&3)]:var118->type)->type_table[cltype122] == idtype123;
}
}
if (var121){
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "Byte";
var128 = (val*)(4l<<2|1);
var129 = (val*)(4l<<2|1);
var130 = (val*)((long)(0)<<2|3);
var131 = (val*)((long)(0)<<2|3);
var127 = core__flat___CString___to_s_unsafe(var126, var128, var129, var130, var131);
var125 = var127;
varonce124 = var125;
}
{
var132 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var125);
}
var_cla = var132;
} else {
{
{ /* Inline literal$AIntegerExpr$value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var135 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
/* <var133:nullable Numeric> isa Int8 */
cltype137 = type_core__Int8.color;
idtype138 = type_core__Int8.id;
if(var133 == NULL) {
var136 = 0;
} else {
if(cltype137 >= (((long)var133&3)?type_info[((long)var133&3)]:var133->type)->table_size) {
var136 = 0;
} else {
var136 = (((long)var133&3)?type_info[((long)var133&3)]:var133->type)->type_table[cltype137] == idtype138;
}
}
if (var136){
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "Int8";
var143 = (val*)(4l<<2|1);
var144 = (val*)(4l<<2|1);
var145 = (val*)((long)(0)<<2|3);
var146 = (val*)((long)(0)<<2|3);
var142 = core__flat___CString___to_s_unsafe(var141, var143, var144, var145, var146);
var140 = var142;
varonce139 = var140;
}
{
var147 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var140);
}
var_cla = var147;
} else {
{
{ /* Inline literal$AIntegerExpr$value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var150 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var148 = var150;
RET_LABEL149:(void)0;
}
}
/* <var148:nullable Numeric> isa Int16 */
cltype152 = type_core__Int16.color;
idtype153 = type_core__Int16.id;
if(var148 == NULL) {
var151 = 0;
} else {
if(cltype152 >= (((long)var148&3)?type_info[((long)var148&3)]:var148->type)->table_size) {
var151 = 0;
} else {
var151 = (((long)var148&3)?type_info[((long)var148&3)]:var148->type)->type_table[cltype152] == idtype153;
}
}
if (var151){
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "Int16";
var158 = (val*)(5l<<2|1);
var159 = (val*)(5l<<2|1);
var160 = (val*)((long)(0)<<2|3);
var161 = (val*)((long)(0)<<2|3);
var157 = core__flat___CString___to_s_unsafe(var156, var158, var159, var160, var161);
var155 = var157;
varonce154 = var155;
}
{
var162 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var155);
}
var_cla = var162;
} else {
{
{ /* Inline literal$AIntegerExpr$value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var165 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var163 = var165;
RET_LABEL164:(void)0;
}
}
/* <var163:nullable Numeric> isa UInt16 */
cltype167 = type_core__UInt16.color;
idtype168 = type_core__UInt16.id;
if(var163 == NULL) {
var166 = 0;
} else {
if(cltype167 >= (((long)var163&3)?type_info[((long)var163&3)]:var163->type)->table_size) {
var166 = 0;
} else {
var166 = (((long)var163&3)?type_info[((long)var163&3)]:var163->type)->type_table[cltype167] == idtype168;
}
}
if (var166){
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "UInt16";
var173 = (val*)(6l<<2|1);
var174 = (val*)(6l<<2|1);
var175 = (val*)((long)(0)<<2|3);
var176 = (val*)((long)(0)<<2|3);
var172 = core__flat___CString___to_s_unsafe(var171, var173, var174, var175, var176);
var170 = var172;
varonce169 = var170;
}
{
var177 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var170);
}
var_cla = var177;
} else {
{
{ /* Inline literal$AIntegerExpr$value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var180 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var178 = var180;
RET_LABEL179:(void)0;
}
}
/* <var178:nullable Numeric> isa Int32 */
cltype182 = type_core__Int32.color;
idtype183 = type_core__Int32.id;
if(var178 == NULL) {
var181 = 0;
} else {
if(cltype182 >= (((long)var178&3)?type_info[((long)var178&3)]:var178->type)->table_size) {
var181 = 0;
} else {
var181 = (((long)var178&3)?type_info[((long)var178&3)]:var178->type)->type_table[cltype182] == idtype183;
}
}
if (var181){
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "Int32";
var188 = (val*)(5l<<2|1);
var189 = (val*)(5l<<2|1);
var190 = (val*)((long)(0)<<2|3);
var191 = (val*)((long)(0)<<2|3);
var187 = core__flat___CString___to_s_unsafe(var186, var188, var189, var190, var191);
var185 = var187;
varonce184 = var185;
}
{
var192 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var185);
}
var_cla = var192;
} else {
{
{ /* Inline literal$AIntegerExpr$value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var195 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var193 = var195;
RET_LABEL194:(void)0;
}
}
/* <var193:nullable Numeric> isa UInt32 */
cltype197 = type_core__UInt32.color;
idtype198 = type_core__UInt32.id;
if(var193 == NULL) {
var196 = 0;
} else {
if(cltype197 >= (((long)var193&3)?type_info[((long)var193&3)]:var193->type)->table_size) {
var196 = 0;
} else {
var196 = (((long)var193&3)?type_info[((long)var193&3)]:var193->type)->type_table[cltype197] == idtype198;
}
}
if (var196){
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "UInt32";
var203 = (val*)(6l<<2|1);
var204 = (val*)(6l<<2|1);
var205 = (val*)((long)(0)<<2|3);
var206 = (val*)((long)(0)<<2|3);
var202 = core__flat___CString___to_s_unsafe(var201, var203, var204, var205, var206);
var200 = var202;
varonce199 = var200;
}
{
var207 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var200);
}
var_cla = var207;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1393);
fatal_exit(1);
}
}
}
}
}
}
}
if (var_cla == NULL) {
var208 = 0; /* is null */
} else {
var208 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cla,((val*)NULL)) on <var_cla:nullable MClass> */
var_other24 = ((val*)NULL);
{
var211 = ((short int(*)(val* self, val* p0))(var_cla->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla, var_other24); /* == on <var_cla:nullable MClass(MClass)>*/
}
var212 = !var211;
var209 = var212;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
var208 = var209;
}
if (var208){
{
{ /* Inline model$MClass$mclass_type (var_cla) on <var_cla:nullable MClass(MClass)> */
var215 = var_cla->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla:nullable MClass(MClass)> */
if (unlikely(var215 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
var_mtype = var213;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AFloatExpr */
cltype217 = type_nitc__AFloatExpr.color;
idtype218 = type_nitc__AFloatExpr.id;
if(cltype217 >= var_nexpr->type->table_size) {
var216 = 0;
} else {
var216 = var_nexpr->type->type_table[cltype217] == idtype218;
}
if (var216){
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "Float";
var223 = (val*)(5l<<2|1);
var224 = (val*)(5l<<2|1);
var225 = (val*)((long)(0)<<2|3);
var226 = (val*)((long)(0)<<2|3);
var222 = core__flat___CString___to_s_unsafe(var221, var223, var224, var225, var226);
var220 = var222;
varonce219 = var220;
}
{
var227 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var220);
}
var_cla228 = var227;
if (var_cla228 == NULL) {
var229 = 0; /* is null */
} else {
var229 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cla228,((val*)NULL)) on <var_cla228:nullable MClass> */
var_other24 = ((val*)NULL);
{
var232 = ((short int(*)(val* self, val* p0))(var_cla228->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla228, var_other24); /* == on <var_cla228:nullable MClass(MClass)>*/
}
var233 = !var232;
var230 = var233;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
var229 = var230;
}
if (var229){
{
{ /* Inline model$MClass$mclass_type (var_cla228) on <var_cla228:nullable MClass(MClass)> */
var236 = var_cla228->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla228:nullable MClass(MClass)> */
if (unlikely(var236 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
var_mtype = var234;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ACharExpr */
cltype238 = type_nitc__ACharExpr.color;
idtype239 = type_nitc__ACharExpr.id;
if(cltype238 >= var_nexpr->type->table_size) {
var237 = 0;
} else {
var237 = var_nexpr->type->type_table[cltype238] == idtype239;
}
if (var237){
{
var240 = nitc__literal___ACharExpr___is_ascii(var_nexpr);
}
if (var240){
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "Byte";
var245 = (val*)(4l<<2|1);
var246 = (val*)(4l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
{
var249 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var242);
}
var_cla250 = var249;
} else {
{
var251 = nitc__literal___ACharExpr___is_code_point(var_nexpr);
}
if (var251){
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "Int";
var256 = (val*)(3l<<2|1);
var257 = (val*)(3l<<2|1);
var258 = (val*)((long)(0)<<2|3);
var259 = (val*)((long)(0)<<2|3);
var255 = core__flat___CString___to_s_unsafe(var254, var256, var257, var258, var259);
var253 = var255;
varonce252 = var253;
}
{
var260 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var253);
}
var_cla250 = var260;
} else {
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = "Char";
var265 = (val*)(4l<<2|1);
var266 = (val*)(4l<<2|1);
var267 = (val*)((long)(0)<<2|3);
var268 = (val*)((long)(0)<<2|3);
var264 = core__flat___CString___to_s_unsafe(var263, var265, var266, var267, var268);
var262 = var264;
varonce261 = var262;
}
{
var269 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var262);
}
var_cla250 = var269;
}
}
if (var_cla250 == NULL) {
var270 = 0; /* is null */
} else {
var270 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cla250,((val*)NULL)) on <var_cla250:nullable MClass> */
var_other24 = ((val*)NULL);
{
var273 = ((short int(*)(val* self, val* p0))(var_cla250->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla250, var_other24); /* == on <var_cla250:nullable MClass(MClass)>*/
}
var274 = !var273;
var271 = var274;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
var270 = var271;
}
if (var270){
{
{ /* Inline model$MClass$mclass_type (var_cla250) on <var_cla250:nullable MClass(MClass)> */
var277 = var_cla250->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla250:nullable MClass(MClass)> */
if (unlikely(var277 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
var_mtype = var275;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ABoolExpr */
cltype279 = type_nitc__ABoolExpr.color;
idtype280 = type_nitc__ABoolExpr.id;
if(cltype279 >= var_nexpr->type->table_size) {
var278 = 0;
} else {
var278 = var_nexpr->type->type_table[cltype279] == idtype280;
}
if (var278){
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "Bool";
var285 = (val*)(4l<<2|1);
var286 = (val*)(4l<<2|1);
var287 = (val*)((long)(0)<<2|3);
var288 = (val*)((long)(0)<<2|3);
var284 = core__flat___CString___to_s_unsafe(var283, var285, var286, var287, var288);
var282 = var284;
varonce281 = var282;
}
{
var289 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var282);
}
var_cla290 = var289;
if (var_cla290 == NULL) {
var291 = 0; /* is null */
} else {
var291 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cla290,((val*)NULL)) on <var_cla290:nullable MClass> */
var_other24 = ((val*)NULL);
{
var294 = ((short int(*)(val* self, val* p0))(var_cla290->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla290, var_other24); /* == on <var_cla290:nullable MClass(MClass)>*/
}
var295 = !var294;
var292 = var295;
goto RET_LABEL293;
RET_LABEL293:(void)0;
}
var291 = var292;
}
if (var291){
{
{ /* Inline model$MClass$mclass_type (var_cla290) on <var_cla290:nullable MClass(MClass)> */
var298 = var_cla290->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla290:nullable MClass(MClass)> */
if (unlikely(var298 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
var_mtype = var296;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ASuperstringExpr */
cltype300 = type_nitc__ASuperstringExpr.color;
idtype301 = type_nitc__ASuperstringExpr.id;
if(cltype300 >= var_nexpr->type->table_size) {
var299 = 0;
} else {
var299 = var_nexpr->type->type_table[cltype300] == idtype301;
}
if (var299){
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = "String";
var306 = (val*)(6l<<2|1);
var307 = (val*)(6l<<2|1);
var308 = (val*)((long)(0)<<2|3);
var309 = (val*)((long)(0)<<2|3);
var305 = core__flat___CString___to_s_unsafe(var304, var306, var307, var308, var309);
var303 = var305;
varonce302 = var303;
}
{
var310 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var303);
}
var_cla311 = var310;
if (var_cla311 == NULL) {
var312 = 0; /* is null */
} else {
var312 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cla311,((val*)NULL)) on <var_cla311:nullable MClass> */
var_other24 = ((val*)NULL);
{
var315 = ((short int(*)(val* self, val* p0))(var_cla311->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla311, var_other24); /* == on <var_cla311:nullable MClass(MClass)>*/
}
var316 = !var315;
var313 = var316;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
var312 = var313;
}
if (var312){
{
{ /* Inline model$MClass$mclass_type (var_cla311) on <var_cla311:nullable MClass(MClass)> */
var319 = var_cla311->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla311:nullable MClass(MClass)> */
if (unlikely(var319 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var317 = var319;
RET_LABEL318:(void)0;
}
}
var_mtype = var317;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AStringFormExpr */
cltype321 = type_nitc__AStringFormExpr.color;
idtype322 = type_nitc__AStringFormExpr.id;
if(cltype321 >= var_nexpr->type->table_size) {
var320 = 0;
} else {
var320 = var_nexpr->type->type_table[cltype321] == idtype322;
}
if (var320){
{
var323 = nitc___nitc__AugmentedStringFormExpr___is_bytestring(var_nexpr);
}
if (var323){
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = "Bytes";
var328 = (val*)(5l<<2|1);
var329 = (val*)(5l<<2|1);
var330 = (val*)((long)(0)<<2|3);
var331 = (val*)((long)(0)<<2|3);
var327 = core__flat___CString___to_s_unsafe(var326, var328, var329, var330, var331);
var325 = var327;
varonce324 = var325;
}
{
var332 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var325);
}
var_cla333 = var332;
} else {
{
var334 = nitc___nitc__AugmentedStringFormExpr___is_re(var_nexpr);
}
if (var334){
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = "Regex";
var339 = (val*)(5l<<2|1);
var340 = (val*)(5l<<2|1);
var341 = (val*)((long)(0)<<2|3);
var342 = (val*)((long)(0)<<2|3);
var338 = core__flat___CString___to_s_unsafe(var337, var339, var340, var341, var342);
var336 = var338;
varonce335 = var336;
}
{
var343 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var336);
}
var_cla333 = var343;
} else {
{
var344 = nitc___nitc__AugmentedStringFormExpr___is_string(var_nexpr);
}
if (var344){
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "String";
var349 = (val*)(6l<<2|1);
var350 = (val*)(6l<<2|1);
var351 = (val*)((long)(0)<<2|3);
var352 = (val*)((long)(0)<<2|3);
var348 = core__flat___CString___to_s_unsafe(var347, var349, var350, var351, var352);
var346 = var348;
varonce345 = var346;
}
{
var353 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var346);
}
var_cla333 = var353;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1424);
fatal_exit(1);
}
}
}
if (var_cla333 == NULL) {
var354 = 0; /* is null */
} else {
var354 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cla333,((val*)NULL)) on <var_cla333:nullable MClass> */
var_other24 = ((val*)NULL);
{
var357 = ((short int(*)(val* self, val* p0))(var_cla333->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla333, var_other24); /* == on <var_cla333:nullable MClass(MClass)>*/
}
var358 = !var357;
var355 = var358;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
var354 = var355;
}
if (var354){
{
{ /* Inline model$MClass$mclass_type (var_cla333) on <var_cla333:nullable MClass(MClass)> */
var361 = var_cla333->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla333:nullable MClass(MClass)> */
if (unlikely(var361 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var359 = var361;
RET_LABEL360:(void)0;
}
}
var_mtype = var359;
} else {
}
} else {
if (unlikely(varonce362==NULL)) {
var363 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce364!=NULL)) {
var365 = varonce364;
} else {
var366 = "Error: untyped attribute `";
var368 = (val*)(26l<<2|1);
var369 = (val*)(26l<<2|1);
var370 = (val*)((long)(0)<<2|3);
var371 = (val*)((long)(0)<<2|3);
var367 = core__flat___CString___to_s_unsafe(var366, var368, var369, var370, var371);
var365 = var367;
varonce364 = var365;
}
((struct instance_core__NativeArray*)var363)->values[0]=var365;
if (likely(varonce372!=NULL)) {
var373 = varonce372;
} else {
var374 = "`. Implicit typing allowed only for literals and new.";
var376 = (val*)(53l<<2|1);
var377 = (val*)(53l<<2|1);
var378 = (val*)((long)(0)<<2|3);
var379 = (val*)((long)(0)<<2|3);
var375 = core__flat___CString___to_s_unsafe(var374, var376, var377, var378, var379);
var373 = var375;
varonce372 = var373;
}
((struct instance_core__NativeArray*)var363)->values[2]=var373;
} else {
var363 = varonce362;
varonce362 = NULL;
}
{
var380 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mreadpropdef); /* to_s on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var363)->values[1]=var380;
{
var381 = ((val*(*)(val* self))(var363->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var363); /* native_to_s on <var363:NativeArray[String]>*/
}
varonce362 = var363;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var381); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
}
}
}
}
}
}
}
}
if (var_mtype == NULL) {
var382 = 1; /* is null */
} else {
var382 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var387 = var_mtype == var_other;
var385 = var387;
goto RET_LABEL386;
RET_LABEL386:(void)0;
}
}
var383 = var385;
goto RET_LABEL384;
RET_LABEL384:(void)0;
}
var382 = var383;
}
if (var382){
goto RET_LABEL;
} else {
}
} else {
}
} else {
if (var_ntype == NULL) {
var389 = 0; /* is null */
} else {
var389 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other24 = ((val*)NULL);
{
var392 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other24); /* == on <var_ntype:nullable AType(AType)>*/
}
var393 = !var392;
var390 = var393;
goto RET_LABEL391;
RET_LABEL391:(void)0;
}
var389 = var390;
}
var_ = var389;
if (var389){
if (var_inherited_type == NULL) {
var394 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel$Object$== (var_inherited_type,var_mtype) on <var_inherited_type:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel$Object$is_same_instance (var_inherited_type,var_other) on <var_inherited_type:nullable MType(MType)> */
var399 = var_inherited_type == var_other;
var397 = var399;
goto RET_LABEL398;
RET_LABEL398:(void)0;
}
}
var395 = var397;
goto RET_LABEL396;
RET_LABEL396:(void)0;
}
var394 = var395;
}
var388 = var394;
} else {
var388 = var_;
}
if (var388){
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype401 = type_nitc__ANewExpr.color;
idtype402 = type_nitc__ANewExpr.id;
if(var_nexpr == NULL) {
var400 = 0;
} else {
if(cltype401 >= var_nexpr->type->table_size) {
var400 = 0;
} else {
var400 = var_nexpr->type->type_table[cltype401] == idtype402;
}
}
if (var400){
{
{ /* Inline parser_nodes$ANewExpr$n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var405 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var405 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2340);
fatal_exit(1);
}
var403 = var405;
RET_LABEL404:(void)0;
}
}
{
var406 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var403, 1);
}
var_xmtype = var406;
if (var_xmtype == NULL) {
var407 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel$Object$== (var_xmtype,var_mtype) on <var_xmtype:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel$Object$is_same_instance (var_xmtype,var_other) on <var_xmtype:nullable MType(MType)> */
var412 = var_xmtype == var_other;
var410 = var412;
goto RET_LABEL411;
RET_LABEL411:(void)0;
}
}
var408 = var410;
goto RET_LABEL409;
RET_LABEL409:(void)0;
}
var407 = var408;
}
if (var407){
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "useless-type";
var417 = (val*)(12l<<2|1);
var418 = (val*)(12l<<2|1);
var419 = (val*)((long)(0)<<2|3);
var420 = (val*)((long)(0)<<2|3);
var416 = core__flat___CString___to_s_unsafe(var415, var417, var418, var419, var420);
var414 = var416;
varonce413 = var414;
}
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = "Warning: useless type definition";
var425 = (val*)(32l<<2|1);
var426 = (val*)(32l<<2|1);
var427 = (val*)((long)(0)<<2|3);
var428 = (val*)((long)(0)<<2|3);
var424 = core__flat___CString___to_s_unsafe(var423, var425, var426, var427, var428);
var422 = var424;
varonce421 = var422;
}
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var_ntype, var414, var422); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
} else {
}
}
if (var_mtype == NULL) {
var429 = 1; /* is null */
} else {
var429 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var434 = var_mtype == var_other;
var432 = var434;
goto RET_LABEL433;
RET_LABEL433:(void)0;
}
}
var430 = var432;
goto RET_LABEL431;
RET_LABEL431:(void)0;
}
var429 = var430;
}
if (var429){
if (unlikely(varonce435==NULL)) {
var436 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce437!=NULL)) {
var438 = varonce437;
} else {
var439 = "Error: untyped attribute `";
var441 = (val*)(26l<<2|1);
var442 = (val*)(26l<<2|1);
var443 = (val*)((long)(0)<<2|3);
var444 = (val*)((long)(0)<<2|3);
var440 = core__flat___CString___to_s_unsafe(var439, var441, var442, var443, var444);
var438 = var440;
varonce437 = var438;
}
((struct instance_core__NativeArray*)var436)->values[0]=var438;
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = "`.";
var449 = (val*)(2l<<2|1);
var450 = (val*)(2l<<2|1);
var451 = (val*)((long)(0)<<2|3);
var452 = (val*)((long)(0)<<2|3);
var448 = core__flat___CString___to_s_unsafe(var447, var449, var450, var451, var452);
var446 = var448;
varonce445 = var446;
}
((struct instance_core__NativeArray*)var436)->values[2]=var446;
} else {
var436 = varonce435;
varonce435 = NULL;
}
{
var453 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mreadpropdef); /* to_s on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var436)->values[1]=var453;
{
var454 = ((val*(*)(val* self))(var436->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var436); /* native_to_s on <var436:NativeArray[String]>*/
}
varonce435 = var436;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var454); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$mtype= (self,var_mtype) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val = var_mtype; /* _mtype on <self:AAttrPropdef> */
RET_LABEL455:(void)0;
}
}
if (var_mpropdef == NULL) {
var456 = 0; /* is null */
} else {
var456 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MAttributeDef> */
var_other24 = ((val*)NULL);
{
var459 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mpropdef, var_other24); /* == on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/
}
var460 = !var459;
var457 = var460;
goto RET_LABEL458;
RET_LABEL458:(void)0;
}
var456 = var457;
}
if (var456){
{
{ /* Inline model$MAttributeDef$static_mtype= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val = var_mtype; /* _static_mtype on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL461:(void)0;
}
}
} else {
}
var462 = NEW_nitc__MSignature(&type_nitc__MSignature);
var463 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var463); /* Direct call array$Array$init on <var463:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var462->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var462, var463); /* mparameters= on <var462:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var462->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var462, var_mtype); /* return_mtype= on <var462:MSignature>*/
}
{
((void(*)(val* self))(var462->class->vft[COLOR_core__kernel__Object__init]))(var462); /* init on <var462:MSignature>*/
}
var_msignature464 = var462;
{
{ /* Inline model$MMethodDef$msignature= (var_mreadpropdef,var_msignature464) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var_mreadpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature464; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL465:(void)0;
}
}
{
{ /* Inline modelize_property$AAttrPropdef$mwritepropdef (self) on <self:AAttrPropdef> */
var468 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var466 = var468;
RET_LABEL467:(void)0;
}
}
var_mwritepropdef = var466;
if (var_mwritepropdef == NULL) {
var469 = 0; /* is null */
} else {
var469 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mwritepropdef,((val*)NULL)) on <var_mwritepropdef:nullable MMethodDef> */
var_other24 = ((val*)NULL);
{
var472 = ((short int(*)(val* self, val* p0))(var_mwritepropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mwritepropdef, var_other24); /* == on <var_mwritepropdef:nullable MMethodDef(MMethodDef)>*/
}
var473 = !var472;
var470 = var473;
goto RET_LABEL471;
RET_LABEL471:(void)0;
}
var469 = var470;
}
if (var469){
var_mwritetype = var_mtype;
{
{ /* Inline modelize_property$AAttrPropdef$is_optional (self) on <self:AAttrPropdef> */
var476 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s; /* _is_optional on <self:AAttrPropdef> */
var474 = var476;
RET_LABEL475:(void)0;
}
}
if (var474){
{
var477 = ((val*(*)(val* self))(var_mwritetype->class->vft[COLOR_nitc__model__MType__as_nullable]))(var_mwritetype); /* as_nullable on <var_mwritetype:MType>*/
}
var_mwritetype = var477;
} else {
}
{
{ /* Inline parser_nodes$AAttrPropdef$n_id2 (self) on <self:AAttrPropdef> */
var480 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var480 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1340);
fatal_exit(1);
}
var478 = var480;
RET_LABEL479:(void)0;
}
}
{
var481 = nitc__lexer_work___Token___text(var478);
}
var_name = var481;
var482 = NEW_nitc__MParameter(&type_nitc__MParameter);
{
((void(*)(val* self, val* p0))(var482->class->vft[COLOR_nitc__model__MParameter__name_61d]))(var482, var_name); /* name= on <var482:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var482->class->vft[COLOR_nitc__model__MParameter__mtype_61d]))(var482, var_mwritetype); /* mtype= on <var482:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var482->class->vft[COLOR_nitc__model__MParameter__is_vararg_61d]))(var482, 0); /* is_vararg= on <var482:MParameter>*/
}
{
((void(*)(val* self))(var482->class->vft[COLOR_core__kernel__Object__init]))(var482); /* init on <var482:MParameter>*/
}
var_mparameter = var482;
var483 = NEW_nitc__MSignature(&type_nitc__MSignature);
var484 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___with_capacity(var484, 1l); /* Direct call array$Array$with_capacity on <var484:Array[MParameter]>*/
}
var_485 = var484;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_485, var_mparameter); /* Direct call array$AbstractArray$push on <var_485:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var483->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var483, var_485); /* mparameters= on <var483:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var483->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var483, ((val*)NULL)); /* return_mtype= on <var483:MSignature>*/
}
{
((void(*)(val* self))(var483->class->vft[COLOR_core__kernel__Object__init]))(var483); /* init on <var483:MSignature>*/
}
var_msignature486 = var483;
{
{ /* Inline model$MMethodDef$msignature= (var_mwritepropdef,var_msignature486) on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
var_mwritepropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature486; /* _msignature on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL487:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$mlazypropdef (self) on <self:AAttrPropdef> */
var490 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var488 = var490;
RET_LABEL489:(void)0;
}
}
var_mlazypropdef = var488;
if (var_mlazypropdef == NULL) {
var491 = 0; /* is null */
} else {
var491 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mlazypropdef,((val*)NULL)) on <var_mlazypropdef:nullable MAttributeDef> */
var_other24 = ((val*)NULL);
{
var494 = ((short int(*)(val* self, val* p0))(var_mlazypropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mlazypropdef, var_other24); /* == on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)>*/
}
var495 = !var494;
var492 = var495;
goto RET_LABEL493;
RET_LABEL493:(void)0;
}
var491 = var492;
}
if (var491){
{
var496 = nitc__model___MModule___bool_type(var_mmodule);
}
{
{ /* Inline model$MAttributeDef$static_mtype= (var_mlazypropdef,var496) on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
var_mlazypropdef->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val = var496; /* _static_mtype on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL497:(void)0;
}
}
} else {
}
{
nitc__modelize_property___AAttrPropdef___APropdef__check_repeated_types(self, var_modelbuilder); /* Direct call modelize_property$AAttrPropdef$check_repeated_types on <self:AAttrPropdef>*/
}
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$check_signature for (self: AAttrPropdef, ModelBuilder) */
void nitc__modelize_property___AAttrPropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AType */;
val* var11 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var12 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : MClassDef */;
val* var23 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other30 /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable MType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable AExpr */;
val* var42 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var43 /* : Bool */;
int cltype;
int idtype;
val* var44 /* : AType */;
val* var46 /* : AType */;
val* var47 /* : nullable MType */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : MProperty */;
val* var58 /* : MProperty */;
val* var59 /* : MPropDef */;
val* var61 /* : MPropDef */;
val* var62 /* : nullable MType */;
val* var64 /* : nullable MType */;
val* var_precursor_type /* var precursor_type: nullable MType */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : NativeArray[String] */;
static val* varonce;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Bool */;
val* var83 /* : nullable Bool */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : CString */;
val* var95 /* : String */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Bool */;
val* var99 /* : nullable Bool */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : nullable MMethodDef */;
val* var105 /* : nullable MMethodDef */;
val* var_meth /* var meth: nullable MMethodDef */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
val* var_node /* var node: nullable ANode */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
val* var117 /* : nullable MMethodDef */;
val* var119 /* : nullable MMethodDef */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var_node125 /* var node: nullable ANode */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MAttributeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
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
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AAttrPropdef$n_type (self) on <self:AAttrPropdef> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ntype = var9;
{
{ /* Inline modelize_property$AAttrPropdef$mtype (self) on <self:AAttrPropdef> */
var14 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mtype = var12;
if (var_mtype == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var20 = var_mtype == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var23 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mclassdef = var21;
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var26 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mmodule = var24;
if (var_ntype == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other30 = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other30); /* == on <var_ntype:nullable AType(AType)>*/
}
var32 = !var31;
var28 = var32;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
var33 = nitc___nitc__ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
if (var33 == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var33,((val*)NULL)) on <var33:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var33,var_other) on <var33:nullable MType(MType)> */
var39 = var33 == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes$AAttrPropdef$n_expr (self) on <self:AAttrPropdef> */
var42 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_nexpr = var40;
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype = type_nitc__ANewExpr.color;
idtype = type_nitc__ANewExpr.id;
if(var_nexpr == NULL) {
var43 = 0;
} else {
if(cltype >= var_nexpr->type->table_size) {
var43 = 0;
} else {
var43 = var_nexpr->type->type_table[cltype] == idtype;
}
}
if (var43){
{
{ /* Inline parser_nodes$ANewExpr$n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var46 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2340);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = nitc___nitc__ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var44);
}
if (var47 == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var47,((val*)NULL)) on <var47:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var47,var_other) on <var47:nullable MType(MType)> */
var53 = var47 == var_other;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
goto RET_LABEL;
} else {
}
} else {
}
{
var54 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var55 = !var54;
if (var55){
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var58 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var56) on <var56:MProperty(MAttribute)> */
var61 = var56->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var56:MProperty(MAttribute)> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model$MAttributeDef$static_mtype (var59) on <var59:MPropDef(MAttributeDef)> */
var64 = var59->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var59:MPropDef(MAttributeDef)> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_precursor_type = var62;
if (var_precursor_type == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_precursor_type,((val*)NULL)) on <var_precursor_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_precursor_type,var_other) on <var_precursor_type:nullable MType(MType)> */
var70 = var_precursor_type == var_other;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Object$!= (var_mtype,var_precursor_type) on <var_mtype:nullable MType(MType)> */
var_other30 = var_precursor_type;
{
var73 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other30); /* == on <var_mtype:nullable MType(MType)>*/
}
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
if (unlikely(var_ntype == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1505);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var75 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Redef Error: expected `";
var80 = (val*)(23l<<2|1);
var81 = (val*)(23l<<2|1);
var82 = (val*)((long)(0)<<2|3);
var83 = (val*)((long)(0)<<2|3);
var79 = core__flat___CString___to_s_unsafe(var78, var80, var81, var82, var83);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "` type as a bound; got `";
var88 = (val*)(24l<<2|1);
var89 = (val*)(24l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var75)->values[2]=var85;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "`.";
var96 = (val*)(2l<<2|1);
var97 = (val*)(2l<<2|1);
var98 = (val*)((long)(0)<<2|3);
var99 = (val*)((long)(0)<<2|3);
var95 = core__flat___CString___to_s_unsafe(var94, var96, var97, var98, var99);
var93 = var95;
varonce92 = var93;
}
((struct instance_core__NativeArray*)var75)->values[4]=var93;
} else {
var75 = varonce;
varonce = NULL;
}
{
var100 = ((val*(*)(val* self))(var_precursor_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_precursor_type); /* to_s on <var_precursor_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var75)->values[1]=var100;
{
var101 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var75)->values[3]=var101;
{
var102 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_ntype, var102); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$mreadpropdef (self) on <self:AAttrPropdef> */
var105 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var_meth = var103;
if (var_meth == NULL) {
var106 = 0; /* is null */
} else {
var106 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_meth,((val*)NULL)) on <var_meth:nullable MMethodDef> */
var_other30 = ((val*)NULL);
{
var109 = ((short int(*)(val* self, val* p0))(var_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_meth, var_other30); /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/
}
var110 = !var109;
var107 = var110;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
var106 = var107;
}
if (var106){
{
nitc__modelize_property___AAttrPropdef___check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property$AAttrPropdef$check_method_signature on <self:AAttrPropdef>*/
}
var_node = var_ntype;
if (var_node == NULL) {
var111 = 1; /* is null */
} else {
var111 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var116 = var_node == var_other;
var114 = var116;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
var111 = var112;
}
if (var111){
var_node = self;
} else {
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_node, var_mtype, var_meth); /* Direct call modelize_property$ModelBuilder$check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$mwritepropdef (self) on <self:AAttrPropdef> */
var119 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
var_meth = var117;
if (var_meth == NULL) {
var120 = 0; /* is null */
} else {
var120 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_meth,((val*)NULL)) on <var_meth:nullable MMethodDef> */
var_other30 = ((val*)NULL);
{
var123 = ((short int(*)(val* self, val* p0))(var_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_meth, var_other30); /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/
}
var124 = !var123;
var121 = var124;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
var120 = var121;
}
if (var120){
{
nitc__modelize_property___AAttrPropdef___check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property$AAttrPropdef$check_method_signature on <self:AAttrPropdef>*/
}
var_node125 = var_ntype;
if (var_node125 == NULL) {
var126 = 1; /* is null */
} else {
var126 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node125,((val*)NULL)) on <var_node125:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node125,var_other) on <var_node125:nullable ANode(ANode)> */
var131 = var_node125 == var_other;
var129 = var131;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
var126 = var127;
}
if (var126){
var_node125 = self;
} else {
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_node125, var_mtype, var_meth); /* Direct call modelize_property$ModelBuilder$check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$check_method_signature for (self: AAttrPropdef, ModelBuilder, MMethodDef) */
void nitc__modelize_property___AAttrPropdef___check_method_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : nullable AType */;
val* var8 /* : nullable AType */;
val* var_nsig /* var nsig: nullable AType */;
val* var9 /* : nullable MSignature */;
val* var11 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
val* var23 /* : MPropDef */;
val* var25 /* : MPropDef */;
val* var26 /* : nullable MSignature */;
val* var28 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var_other44 /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var_node /* var node: ANode */;
val* var47 /* : NativeArray[String] */;
static val* varonce;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Bool */;
val* var55 /* : nullable Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Bool */;
val* var71 /* : nullable Bool */;
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
long var88 /* : Int */;
val* var89 /* : String */;
val* var90 /* : MProperty */;
val* var92 /* : MProperty */;
val* var93 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var99 /* : MProperty */;
val* var101 /* : MProperty */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : nullable MType */;
val* var106 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var107 /* : nullable MType */;
val* var109 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var_ /* var : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
val* var_node127 /* var node: ANode */;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
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
val* var146 /* : MProperty */;
val* var148 /* : MProperty */;
val* var149 /* : String */;
val* var150 /* : String */;
long var151 /* : Int */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var155 /* : Bool */;
long var_i /* var i: Int */;
long var156 /* : Int */;
long var_157 /* var : Int */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
const char* var_class_name163;
short int var164 /* : Bool */;
val* var165 /* : Array[MParameter] */;
val* var167 /* : Array[MParameter] */;
val* var168 /* : nullable Object */;
val* var169 /* : MType */;
val* var171 /* : MType */;
val* var_myt /* var myt: MType */;
val* var172 /* : Array[MParameter] */;
val* var174 /* : Array[MParameter] */;
val* var175 /* : nullable Object */;
val* var176 /* : MType */;
val* var178 /* : MType */;
val* var_prt /* var prt: MType */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
val* var_node184 /* var node: ANode */;
val* var185 /* : MClassType */;
val* var187 /* : MClassType */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
val* var191 /* : NativeArray[String] */;
static val* varonce190;
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
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : nullable Int */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Bool */;
val* var223 /* : nullable Bool */;
val* var224 /* : String */;
val* var225 /* : Array[MParameter] */;
val* var227 /* : Array[MParameter] */;
val* var228 /* : nullable Object */;
val* var229 /* : String */;
val* var231 /* : String */;
val* var232 /* : String */;
val* var233 /* : String */;
long var234 /* : Int */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
val* var_node245 /* var node: ANode */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
val* var252 /* : MClassType */;
val* var254 /* : MClassType */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
val* var258 /* : NativeArray[String] */;
static val* varonce257;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : CString */;
val* var262 /* : String */;
val* var263 /* : nullable Int */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Bool */;
val* var266 /* : nullable Bool */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : CString */;
val* var270 /* : String */;
val* var271 /* : nullable Int */;
val* var272 /* : nullable Int */;
val* var273 /* : nullable Bool */;
val* var274 /* : nullable Bool */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : CString */;
val* var278 /* : String */;
val* var279 /* : nullable Int */;
val* var280 /* : nullable Int */;
val* var281 /* : nullable Bool */;
val* var282 /* : nullable Bool */;
val* var283 /* : String */;
val* var284 /* : String */;
val* var285 /* : String */;
var_modelbuilder = p0;
var_mpropdef = p1;
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclassdef = var;
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var5 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
{ /* Inline parser_nodes$AAttrPropdef$n_type (self) on <self:AAttrPropdef> */
var8 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_nsig = var6;
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mysignature = var9;
if (var_mysignature == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mysignature,((val*)NULL)) on <var_mysignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var17 = var_mysignature == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
{
var18 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var19 = !var18;
if (var19){
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var22 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var20) on <var20:MProperty(MMethod)> */
var25 = var20->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var20:MProperty(MMethod)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var23) on <var23:MPropDef(MMethodDef)> */
var28 = var23->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var23:MPropDef(MMethodDef)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_msignature = var26;
if (var_msignature == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var34 = var_msignature == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
goto RET_LABEL;
} else {
}
{
var35 = nitc___nitc__MSignature___arity(var_mysignature);
}
{
var36 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$!= (var35,var36) on <var35:Int> */
var39 = var35 == var36;
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (var_nsig == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var45 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var46 = !var45;
var42 = var46;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
var_node = var_nsig;
} else {
var_node = self;
}
if (unlikely(varonce==NULL)) {
var47 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Redef Error: expected ";
var52 = (val*)(22l<<2|1);
var53 = (val*)(22l<<2|1);
var54 = (val*)((long)(0)<<2|3);
var55 = (val*)((long)(0)<<2|3);
var51 = core__flat___CString___to_s_unsafe(var50, var52, var53, var54, var55);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = " parameter(s) for `";
var60 = (val*)(19l<<2|1);
var61 = (val*)(19l<<2|1);
var62 = (val*)((long)(0)<<2|3);
var63 = (val*)((long)(0)<<2|3);
var59 = core__flat___CString___to_s_unsafe(var58, var60, var61, var62, var63);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var47)->values[2]=var57;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "`; got ";
var68 = (val*)(7l<<2|1);
var69 = (val*)(7l<<2|1);
var70 = (val*)((long)(0)<<2|3);
var71 = (val*)((long)(0)<<2|3);
var67 = core__flat___CString___to_s_unsafe(var66, var68, var69, var70, var71);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var47)->values[5]=var65;
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = ". See introduction at `";
var76 = (val*)(23l<<2|1);
var77 = (val*)(23l<<2|1);
var78 = (val*)((long)(0)<<2|3);
var79 = (val*)((long)(0)<<2|3);
var75 = core__flat___CString___to_s_unsafe(var74, var76, var77, var78, var79);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var47)->values[7]=var73;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "`.";
var84 = (val*)(2l<<2|1);
var85 = (val*)(2l<<2|1);
var86 = (val*)((long)(0)<<2|3);
var87 = (val*)((long)(0)<<2|3);
var83 = core__flat___CString___to_s_unsafe(var82, var84, var85, var86, var87);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var47)->values[9]=var81;
} else {
var47 = varonce;
varonce = NULL;
}
{
var88 = nitc___nitc__MSignature___arity(var_msignature);
}
var89 = core__flat___Int___core__abstract_text__Object__to_s(var88);
((struct instance_core__NativeArray*)var47)->values[1]=var89;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var92 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var90) on <var90:MProperty(MMethod)> */
var95 = var90->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var90:MProperty(MMethod)> */
if (unlikely(var95 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
((struct instance_core__NativeArray*)var47)->values[3]=var93;
{
var96 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_core__NativeArray*)var47)->values[4]=var96;
{
var97 = nitc___nitc__MSignature___arity(var_mysignature);
}
var98 = core__flat___Int___core__abstract_text__Object__to_s(var97);
((struct instance_core__NativeArray*)var47)->values[6]=var98;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var101 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
var102 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var99);
}
((struct instance_core__NativeArray*)var47)->values[8]=var102;
{
var103 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce = var47;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node, var103); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var106 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
var_precursor_ret_type = var104;
{
{ /* Inline model$MSignature$return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var109 = var_mysignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
var_ret_type = var107;
if (var_ret_type == NULL) {
var111 = 0; /* is null */
} else {
var111 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other44 = ((val*)NULL);
{
var114 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other44); /* == on <var_ret_type:nullable MType(MType)>*/
}
var115 = !var114;
var112 = var115;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
var111 = var112;
}
var_ = var111;
if (var111){
if (var_precursor_ret_type == NULL) {
var116 = 1; /* is null */
} else {
var116 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var121 = var_precursor_ret_type == var_other;
var119 = var121;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var116 = var117;
}
var110 = var116;
} else {
var110 = var_;
}
if (var110){
if (var_nsig == NULL) {
var122 = 0; /* is null */
} else {
var122 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var125 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var126 = !var125;
var123 = var126;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
var122 = var123;
}
if (var122){
var_node127 = var_nsig;
} else {
var_node127 = self;
}
if (unlikely(varonce128==NULL)) {
var129 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "Redef Error: `";
var134 = (val*)(14l<<2|1);
var135 = (val*)(14l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var129)->values[0]=var131;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "` is a procedure, not a function.";
var142 = (val*)(33l<<2|1);
var143 = (val*)(33l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var129)->values[2]=var139;
} else {
var129 = varonce128;
varonce128 = NULL;
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var148 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var148 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
var149 = ((val*(*)(val* self))(var146->class->vft[COLOR_core__abstract_text__Object__to_s]))(var146); /* to_s on <var146:MProperty(MMethod)>*/
}
((struct instance_core__NativeArray*)var129)->values[1]=var149;
{
var150 = ((val*(*)(val* self))(var129->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node127, var150); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var151 = nitc___nitc__MSignature___arity(var_mysignature);
}
{
{ /* Inline kernel$Int$> (var151,0l) on <var151:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var154 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var154)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var155 = var151 > 0l;
var152 = var155;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
if (var152){
var_i = 0l;
{
var156 = nitc___nitc__MSignature___arity(var_mysignature);
}
var_157 = var156;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_157) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_157:Int> isa OTHER */
/* <var_157:Int> isa OTHER */
var160 = 1; /* easy <var_157:Int> isa OTHER*/
if (unlikely(!var160)) {
var_class_name163 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name163);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var164 = var_i < var_157;
var158 = var164;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
if (var158){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var167 = var_mysignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var167 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
var168 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var165, var_i);
}
{
{ /* Inline model$MParameter$mtype (var168) on <var168:nullable Object(MParameter)> */
var171 = var168->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var168:nullable Object(MParameter)> */
if (unlikely(var171 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
var_myt = var169;
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var174 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var174 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
var175 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var172, var_i);
}
{
{ /* Inline model$MParameter$mtype (var175) on <var175:nullable Object(MParameter)> */
var178 = var175->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var175:nullable Object(MParameter)> */
if (unlikely(var178 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
var_prt = var176;
if (var_nsig == NULL) {
var179 = 0; /* is null */
} else {
var179 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var182 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var183 = !var182;
var180 = var183;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
var179 = var180;
}
if (var179){
var_node184 = var_nsig;
} else {
var_node184 = self;
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var187 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var187 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
var188 = nitc___nitc__ModelBuilder___check_sametype(var_modelbuilder, var_node184, var_mmodule, var185, var_myt, var_prt);
}
var189 = !var188;
if (var189){
if (unlikely(varonce190==NULL)) {
var191 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "Redef Error: expected `";
var196 = (val*)(23l<<2|1);
var197 = (val*)(23l<<2|1);
var198 = (val*)((long)(0)<<2|3);
var199 = (val*)((long)(0)<<2|3);
var195 = core__flat___CString___to_s_unsafe(var194, var196, var197, var198, var199);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var191)->values[0]=var193;
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = "` type for parameter `";
var204 = (val*)(22l<<2|1);
var205 = (val*)(22l<<2|1);
var206 = (val*)((long)(0)<<2|3);
var207 = (val*)((long)(0)<<2|3);
var203 = core__flat___CString___to_s_unsafe(var202, var204, var205, var206, var207);
var201 = var203;
varonce200 = var201;
}
((struct instance_core__NativeArray*)var191)->values[2]=var201;
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = "\'; got `";
var212 = (val*)(8l<<2|1);
var213 = (val*)(8l<<2|1);
var214 = (val*)((long)(0)<<2|3);
var215 = (val*)((long)(0)<<2|3);
var211 = core__flat___CString___to_s_unsafe(var210, var212, var213, var214, var215);
var209 = var211;
varonce208 = var209;
}
((struct instance_core__NativeArray*)var191)->values[4]=var209;
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "`.";
var220 = (val*)(2l<<2|1);
var221 = (val*)(2l<<2|1);
var222 = (val*)((long)(0)<<2|3);
var223 = (val*)((long)(0)<<2|3);
var219 = core__flat___CString___to_s_unsafe(var218, var220, var221, var222, var223);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var191)->values[6]=var217;
} else {
var191 = varonce190;
varonce190 = NULL;
}
{
var224 = ((val*(*)(val* self))(var_prt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prt); /* to_s on <var_prt:MType>*/
}
((struct instance_core__NativeArray*)var191)->values[1]=var224;
{
{ /* Inline model$MSignature$mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var227 = var_mysignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var227 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
var228 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var225, var_i);
}
{
{ /* Inline model$MParameter$name (var228) on <var228:nullable Object(MParameter)> */
var231 = var228->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var228:nullable Object(MParameter)> */
if (unlikely(var231 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
((struct instance_core__NativeArray*)var191)->values[3]=var229;
{
var232 = ((val*(*)(val* self))(var_myt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_myt); /* to_s on <var_myt:MType>*/
}
((struct instance_core__NativeArray*)var191)->values[5]=var232;
{
var233 = ((val*(*)(val* self))(var191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var191); /* native_to_s on <var191:NativeArray[String]>*/
}
varonce190 = var191;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node184, var233); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var234 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var234;
}
BREAK_label: (void)0;
} else {
}
if (var_precursor_ret_type == NULL) {
var235 = 0; /* is null */
} else {
var235 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other44 = ((val*)NULL);
{
var238 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_precursor_ret_type, var_other44); /* == on <var_precursor_ret_type:nullable MType(MType)>*/
}
var239 = !var238;
var236 = var239;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
var235 = var236;
}
if (var235){
if (var_nsig == NULL) {
var240 = 0; /* is null */
} else {
var240 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var243 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var244 = !var243;
var241 = var244;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
var240 = var241;
}
if (var240){
var_node245 = var_nsig;
} else {
var_node245 = self;
}
if (var_ret_type == NULL) {
var246 = 1; /* is null */
} else {
var246 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var251 = var_ret_type == var_other;
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
}
var247 = var249;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
var246 = var247;
}
if (var246){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var254 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var254 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
var255 = nitc___nitc__ModelBuilder___check_subtype(var_modelbuilder, var_node245, var_mmodule, var252, var_ret_type, var_precursor_ret_type);
}
var256 = !var255;
if (var256){
if (unlikely(varonce257==NULL)) {
var258 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "Redef Error: expected `";
var263 = (val*)(23l<<2|1);
var264 = (val*)(23l<<2|1);
var265 = (val*)((long)(0)<<2|3);
var266 = (val*)((long)(0)<<2|3);
var262 = core__flat___CString___to_s_unsafe(var261, var263, var264, var265, var266);
var260 = var262;
varonce259 = var260;
}
((struct instance_core__NativeArray*)var258)->values[0]=var260;
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = "` return type; got `";
var271 = (val*)(20l<<2|1);
var272 = (val*)(20l<<2|1);
var273 = (val*)((long)(0)<<2|3);
var274 = (val*)((long)(0)<<2|3);
var270 = core__flat___CString___to_s_unsafe(var269, var271, var272, var273, var274);
var268 = var270;
varonce267 = var268;
}
((struct instance_core__NativeArray*)var258)->values[2]=var268;
if (likely(varonce275!=NULL)) {
var276 = varonce275;
} else {
var277 = "`.";
var279 = (val*)(2l<<2|1);
var280 = (val*)(2l<<2|1);
var281 = (val*)((long)(0)<<2|3);
var282 = (val*)((long)(0)<<2|3);
var278 = core__flat___CString___to_s_unsafe(var277, var279, var280, var281, var282);
var276 = var278;
varonce275 = var276;
}
((struct instance_core__NativeArray*)var258)->values[4]=var276;
} else {
var258 = varonce257;
varonce257 = NULL;
}
{
var283 = ((val*(*)(val* self))(var_precursor_ret_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_precursor_ret_type); /* to_s on <var_precursor_ret_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var258)->values[1]=var283;
{
var284 = ((val*(*)(val* self))(var_ret_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret_type); /* to_s on <var_ret_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var258)->values[3]=var284;
{
var285 = ((val*(*)(val* self))(var258->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var258); /* native_to_s on <var258:NativeArray[String]>*/
}
varonce257 = var258;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node245, var285); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$check_repeated_types for (self: AAttrPropdef, ModelBuilder) */
void nitc__modelize_property___AAttrPropdef___APropdef__check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : nullable AType */;
val* var13 /* : nullable AType */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
val* var23 /* : MPropDef */;
val* var25 /* : MPropDef */;
val* var_intro /* var intro: MMethodDef */;
val* var26 /* : HashMap[MPropDef, APropdef] */;
val* var28 /* : HashMap[MPropDef, APropdef] */;
val* var29 /* : nullable Object */;
val* var_n_intro /* var n_intro: nullable APropdef */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var_ntype /* var ntype: nullable Object */;
short int var36 /* : Bool */;
int cltype;
int idtype;
val* var37 /* : nullable ASignature */;
val* var39 /* : nullable ASignature */;
val* var40 /* : nullable MType */;
val* var42 /* : nullable MType */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
short int var_47 /* var : Bool */;
val* var48 /* : nullable AType */;
val* var50 /* : nullable AType */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var_other54 /* var other: nullable Object */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : nullable AType */;
val* var59 /* : nullable AType */;
val* var60 /* : nullable MType */;
val* var62 /* : nullable MType */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var_71 /* var : Bool */;
val* var72 /* : nullable AType */;
val* var74 /* : nullable AType */;
val* var75 /* : nullable MType */;
val* var77 /* : nullable MType */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
val* var83 /* : nullable MPropDef */;
val* var85 /* : nullable MPropDef */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
val* var92 /* : nullable AType */;
val* var94 /* : nullable AType */;
static val* varonce;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Bool */;
val* var101 /* : nullable Bool */;
val* var103 /* : NativeArray[String] */;
static val* varonce102;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
val* var108 /* : nullable Int */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Bool */;
val* var111 /* : nullable Bool */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Bool */;
val* var119 /* : nullable Bool */;
val* var120 /* : nullable MPropDef */;
val* var122 /* : nullable MPropDef */;
val* var123 /* : String */;
val* var124 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property$AAttrPropdef$mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mreadpropdef = var;
if (var_mreadpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mreadpropdef,((val*)NULL)) on <var_mreadpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mreadpropdef,var_other) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var8 = var_mreadpropdef == var_other;
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
goto RET_LABEL;
} else {
}
{
var10 = nitc___nitc__MPropDef___is_intro(var_mreadpropdef);
}
var_ = var10;
if (var10){
var9 = var_;
} else {
{
{ /* Inline parser_nodes$AAttrPropdef$n_type (self) on <self:AAttrPropdef> */
var13 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var11,((val*)NULL)) on <var11:nullable AType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var11,var_other) on <var11:nullable AType(AType)> */
var19 = var11 == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
var9 = var14;
}
if (var9){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDef$mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var22 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var20) on <var20:MProperty(MMethod)> */
var25 = var20->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var20:MProperty(MMethod)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_intro = var23;
{
{ /* Inline modelize_property$ModelBuilder$mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var28 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var26, var_intro);
}
var_n_intro = var29;
if (var_n_intro == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_n_intro,((val*)NULL)) on <var_n_intro:nullable APropdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_n_intro,var_other) on <var_n_intro:nullable APropdef(APropdef)> */
var35 = var_n_intro == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
goto RET_LABEL;
} else {
}
var_ntype = ((val*)NULL);
/* <var_n_intro:nullable APropdef(APropdef)> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_n_intro->type->table_size) {
var36 = 0;
} else {
var36 = var_n_intro->type->type_table[cltype] == idtype;
}
if (var36){
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (var_n_intro) on <var_n_intro:nullable APropdef(AMethPropdef)> */
var39 = var_n_intro->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_n_intro:nullable APropdef(AMethPropdef)> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (var37 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1593);
fatal_exit(1);
} else {
{ /* Inline modelize_property$ASignature$ret_type (var37) on <var37:nullable ASignature> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 668);
fatal_exit(1);
}
var42 = var37->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var37:nullable ASignature> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_ntype = var40;
} else {
/* <var_n_intro:nullable APropdef(APropdef)> isa AAttrPropdef */
cltype45 = type_nitc__AAttrPropdef.color;
idtype46 = type_nitc__AAttrPropdef.id;
if(cltype45 >= var_n_intro->type->table_size) {
var44 = 0;
} else {
var44 = var_n_intro->type->type_table[cltype45] == idtype46;
}
var_47 = var44;
if (var44){
{
{ /* Inline parser_nodes$AAttrPropdef$n_type (var_n_intro) on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var50 = var_n_intro->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (var48 == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var48,((val*)NULL)) on <var48:nullable AType> */
var_other54 = ((val*)NULL);
{
var55 = ((short int(*)(val* self, val* p0))(var48->class->vft[COLOR_core__kernel__Object___61d_61d]))(var48, var_other54); /* == on <var48:nullable AType(AType)>*/
}
var56 = !var55;
var52 = var56;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
var43 = var51;
} else {
var43 = var_47;
}
if (var43){
{
{ /* Inline parser_nodes$AAttrPropdef$n_type (var_n_intro) on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var59 = var_n_intro->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1595);
fatal_exit(1);
} else {
{ /* Inline modelbuilder_base$AType$mtype (var57) on <var57:nullable AType> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 495);
fatal_exit(1);
}
var62 = var57->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var57:nullable AType> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
var_ntype = var60;
} else {
}
}
if (var_ntype == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ntype,((val*)NULL)) on <var_ntype:nullable Object(nullable MType)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ntype,var_other) on <var_ntype:nullable Object(MType)> */
var70 = var_ntype == var_other;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
var_71 = var65;
if (var65){
var64 = var_71;
} else {
{
{ /* Inline parser_nodes$AAttrPropdef$n_type (self) on <self:AAttrPropdef> */
var74 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (var72 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1598);
fatal_exit(1);
} else {
{ /* Inline modelbuilder_base$AType$mtype (var72) on <var72:nullable AType> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 495);
fatal_exit(1);
}
var77 = var72->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var72:nullable AType> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var_ntype,var75) on <var_ntype:nullable Object(MType)> */
var_other54 = var75;
{
var80 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other54); /* == on <var_ntype:nullable Object(MType)>*/
}
var81 = !var80;
var78 = var81;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var64 = var78;
}
var_82 = var64;
if (var64){
var63 = var_82;
} else {
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var85 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (var83 == NULL) {
var86 = 1; /* is null */
} else {
var86 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var83,((val*)NULL)) on <var83:nullable MPropDef(nullable MAttributeDef)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var83,var_other) on <var83:nullable MPropDef(MAttributeDef)> */
var91 = var83 == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
var63 = var86;
}
if (var63){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AAttrPropdef$n_type (self) on <self:AAttrPropdef> */
var94 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (likely(varonce!=NULL)) {
var95 = varonce;
} else {
var96 = "useless-signature";
var98 = (val*)(17l<<2|1);
var99 = (val*)(17l<<2|1);
var100 = (val*)((long)(0)<<2|3);
var101 = (val*)((long)(0)<<2|3);
var97 = core__flat___CString___to_s_unsafe(var96, var98, var99, var100, var101);
var95 = var97;
varonce = var95;
}
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "Warning: useless type repetition on redefined attribute `";
var108 = (val*)(57l<<2|1);
var109 = (val*)(57l<<2|1);
var110 = (val*)((long)(0)<<2|3);
var111 = (val*)((long)(0)<<2|3);
var107 = core__flat___CString___to_s_unsafe(var106, var108, var109, var110, var111);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var103)->values[0]=var105;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "`";
var116 = (val*)(1l<<2|1);
var117 = (val*)(1l<<2|1);
var118 = (val*)((long)(0)<<2|3);
var119 = (val*)((long)(0)<<2|3);
var115 = core__flat___CString___to_s_unsafe(var114, var116, var117, var118, var119);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var103)->values[2]=var113;
} else {
var103 = varonce102;
varonce102 = NULL;
}
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AAttrPropdef> */
var122 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var120 = var122;
RET_LABEL121:(void)0;
}
}
if (var120 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1599);
fatal_exit(1);
} else {
var123 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(var120);
}
((struct instance_core__NativeArray*)var103)->values[1]=var123;
{
var124 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var92, var95, var124); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_property$ATypePropdef$build_property for (self: ATypePropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___ATypePropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : AQclassid */;
val* var2 /* : AQclassid */;
val* var3 /* : TClassid */;
val* var5 /* : TClassid */;
val* var6 /* : String */;
val* var_name /* var name: String */;
val* var7 /* : AQclassid */;
val* var9 /* : AQclassid */;
val* var10 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable AVisibility */;
val* var19 /* : nullable AVisibility */;
val* var20 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var21 /* : MVirtualTypeProp */;
val* var22 /* : Location */;
val* var24 /* : Location */;
val* var25 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var26 /* : Iterator[nullable Object] */;
val* var_27 /* var : IndexedIterator[Char] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
uint32_t var30 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
val* var44 /* : AQclassid */;
val* var46 /* : AQclassid */;
static val* varonce;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
val* var55 /* : NativeArray[String] */;
static val* varonce54;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Bool */;
val* var71 /* : nullable Bool */;
val* var72 /* : String */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
val* var79 /* : nullable AVisibility */;
val* var81 /* : nullable AVisibility */;
val* var82 /* : MVirtualTypeDef */;
val* var83 /* : Location */;
val* var85 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const struct type* type_struct;
const char* var_class_name89;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const struct type* type_struct94;
const char* var_class_name95;
short int var96 /* : Bool */;
val* var97 /* : ToolContext */;
val* var99 /* : ToolContext */;
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
val* var112 /* : String */;
val* var113 /* : ToolContext */;
val* var115 /* : ToolContext */;
val* var117 /* : NativeArray[String] */;
static val* varonce116;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Bool */;
val* var125 /* : nullable Bool */;
val* var126 /* : String */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var129 /* : nullable TKwredef */;
val* var131 /* : nullable TKwredef */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
val* var137 /* : Map[MProperty, APropdef] */;
val* var139 /* : Map[MProperty, APropdef] */;
val* var140 /* : HashMap[MPropDef, APropdef] */;
val* var142 /* : HashMap[MPropDef, APropdef] */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : CString */;
val* var146 /* : String */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Bool */;
val* var150 /* : nullable Bool */;
val* var151 /* : nullable AAnnotation */;
val* var_atfixed /* var atfixed: nullable AAnnotation */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
val* var_other155 /* var other: nullable Object */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes$ATypePropdef$n_qid (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_qid].val; /* _n_qid on <self:ATypePropdef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1556);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes$AQclassid$n_id (var) on <var:AQclassid> */
var5 = var->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var:AQclassid> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__lexer_work___Token___text(var3);
}
var_name = var6;
{
{ /* Inline parser_nodes$ATypePropdef$n_qid (self) on <self:ATypePropdef> */
var9 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_qid].val; /* _n_qid on <self:ATypePropdef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1556);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var7, var_mclassdef, var_name);
}
var_mprop = var10;
if (var_mprop == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mprop,((val*)NULL)) on <var_mprop:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mprop,var_other) on <var_mprop:nullable MProperty(MProperty)> */
var16 = var_mprop == var_other;
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
{
{ /* Inline parser_nodes$ADefinition$n_visibility (self) on <self:ATypePropdef> */
var19 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var17);
}
var_mvisibility = var20;
var21 = NEW_nitc__MVirtualTypeProp(&type_nitc__MVirtualTypeProp);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:ATypePropdef> */
var24 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:ATypePropdef> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var21, var_mclassdef); /* intro_mclassdef= on <var21:MVirtualTypeProp>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var21, var_name); /* name= on <var21:MVirtualTypeProp>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var21, var22); /* location= on <var21:MVirtualTypeProp>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var21, var_mvisibility); /* visibility= on <var21:MVirtualTypeProp>*/
}
{
((void(*)(val* self))(var21->class->vft[COLOR_core__kernel__Object__init]))(var21); /* init on <var21:MVirtualTypeProp>*/
}
var_mprop = var21;
{
var25 = ((val*(*)(val* self))(var_name->class->vft[COLOR_core__abstract_text__Text__chars]))(var_name); /* chars on <var_name:String>*/
}
var_ = var25;
{
var26 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_27 = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_27); /* is_ok on <var_27:IndexedIterator[Char]>*/
}
if (var28){
} else {
goto BREAK_label;
}
{
var29 = ((val*(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_27); /* item on <var_27:IndexedIterator[Char]>*/
}
var30 = (uint32_t)((long)(var29)>>2);
var_c = var30;
{
{ /* Inline kernel$Char$>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var34 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var35 = var_c >= 'a';
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_36 = var32;
if (var32){
{
{ /* Inline kernel$Char$<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var39 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var43 = var_c <= 'z';
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var31 = var37;
} else {
var31 = var_36;
}
if (var31){
{
{ /* Inline parser_nodes$ATypePropdef$n_qid (self) on <self:ATypePropdef> */
var46 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_qid].val; /* _n_qid on <self:ATypePropdef> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1556);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (likely(varonce!=NULL)) {
var47 = varonce;
} else {
var48 = "bad-type-name";
var50 = (val*)(13l<<2|1);
var51 = (val*)(13l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce = var47;
}
if (unlikely(varonce54==NULL)) {
var55 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "Warning: lowercase in the virtual type `";
var60 = (val*)(40l<<2|1);
var61 = (val*)(40l<<2|1);
var62 = (val*)((long)(0)<<2|3);
var63 = (val*)((long)(0)<<2|3);
var59 = core__flat___CString___to_s_unsafe(var58, var60, var61, var62, var63);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var55)->values[0]=var57;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "`.";
var68 = (val*)(2l<<2|1);
var69 = (val*)(2l<<2|1);
var70 = (val*)((long)(0)<<2|3);
var71 = (val*)((long)(0)<<2|3);
var67 = core__flat___CString___to_s_unsafe(var66, var68, var69, var70, var71);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var55)->values[2]=var65;
} else {
var55 = varonce54;
varonce54 = NULL;
}
((struct instance_core__NativeArray*)var55)->values[1]=var_name;
{
var72 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, var44, var47, var72); /* Direct call modelbuilder_base$ModelBuilder$warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_27); /* next on <var_27:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_27); /* finish on <var_27:IndexedIterator[Char]>*/
}
} else {
{
{ /* Inline model_base$MEntity$is_broken (var_mprop) on <var_mprop:nullable MProperty(MProperty)> */
var75 = var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mprop:nullable MProperty(MProperty)> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (var73){
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype77 = type_nitc__MVirtualTypeProp.color;
idtype78 = type_nitc__MVirtualTypeProp.id;
if(cltype77 >= var_mprop->type->table_size) {
var76 = 0;
} else {
var76 = var_mprop->type->type_table[cltype77] == idtype78;
}
if (unlikely(!var76)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1619);
fatal_exit(1);
}
{
{ /* Inline parser_nodes$ADefinition$n_visibility (self) on <self:ATypePropdef> */
var81 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var79, var_mprop); /* Direct call modelize_property$APropdef$check_redef_property_visibility on <self:ATypePropdef>*/
}
}
var82 = NEW_nitc__MVirtualTypeDef(&type_nitc__MVirtualTypeDef);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:ATypePropdef> */
var85 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:ATypePropdef> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var82->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var82, var_mclassdef); /* mclassdef= on <var82:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var82->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var82, var_mprop); /* mproperty= on <var82:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var82->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var82, var83); /* location= on <var82:MVirtualTypeDef>*/
}
{
((void(*)(val* self))(var82->class->vft[COLOR_core__kernel__Object__init]))(var82); /* init on <var82:MVirtualTypeDef>*/
}
var_mpropdef = var82;
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype87 = type_struct->color;
idtype88 = type_struct->id;
if(cltype87 >= var_mpropdef->type->table_size) {
var86 = 0;
} else {
var86 = var_mpropdef->type->type_table[cltype87] == idtype88;
}
if (unlikely(!var86)) {
var_class_name89 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1624);
fatal_exit(1);
}
{
{ /* Inline modelize_property$APropdef$mpropdef= (self,var_mpropdef) on <self:ATypePropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct94 = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype92 = type_struct94->color;
idtype93 = type_struct94->id;
if(cltype92 >= var_mpropdef->type->table_size) {
var91 = 0;
} else {
var91 = var_mpropdef->type->type_table[cltype92] == idtype93;
}
if (unlikely(!var91)) {
var_class_name95 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 557);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:ATypePropdef> */
RET_LABEL90:(void)0;
}
}
{
var96 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
if (var96){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var99 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (unlikely(varonce100==NULL)) {
var101 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = " introduces new type ";
var106 = (val*)(21l<<2|1);
var107 = (val*)(21l<<2|1);
var108 = (val*)((long)(0)<<2|3);
var109 = (val*)((long)(0)<<2|3);
var105 = core__flat___CString___to_s_unsafe(var104, var106, var107, var108, var109);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var101)->values[1]=var103;
} else {
var101 = varonce100;
varonce100 = NULL;
}
{
var110 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MVirtualTypeDef>*/
}
((struct instance_core__NativeArray*)var101)->values[0]=var110;
{
var111 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var101)->values[2]=var111;
{
var112 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
nitc___nitc__ToolContext___info(var97, var112, 4l); /* Direct call toolcontext$ToolContext$info on <var97:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var115 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (unlikely(varonce116==NULL)) {
var117 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = " redefines type ";
var122 = (val*)(16l<<2|1);
var123 = (val*)(16l<<2|1);
var124 = (val*)((long)(0)<<2|3);
var125 = (val*)((long)(0)<<2|3);
var121 = core__flat___CString___to_s_unsafe(var120, var122, var123, var124, var125);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var117)->values[1]=var119;
} else {
var117 = varonce116;
varonce116 = NULL;
}
{
var126 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MVirtualTypeDef>*/
}
((struct instance_core__NativeArray*)var117)->values[0]=var126;
{
var127 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var117)->values[2]=var127;
{
var128 = ((val*(*)(val* self))(var117->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var117); /* native_to_s on <var117:NativeArray[String]>*/
}
varonce116 = var117;
{
nitc___nitc__ToolContext___info(var113, var128, 4l); /* Direct call toolcontext$ToolContext$info on <var113:ToolContext>*/
}
}
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (self) on <self:ATypePropdef> */
var131 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
var132 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var133 = !var132;
{
var134 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var129, var133, var_mprop);
}
var135 = !var134;
if (var135){
{
{ /* Inline model_base$MEntity$is_broken= (var_mpropdef,1) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL136:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property$MClassDef$mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var139 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var139 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var137&3)?class_info[((long)var137&3)]:var137->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var137, var_mprop, self); /* []= on <var137:Map[MProperty, APropdef]>*/
}
{
{ /* Inline modelize_property$ModelBuilder$mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var142 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var142 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var140, var_mpropdef, self); /* Direct call hash_collection$HashMap$[]= on <var140:HashMap[MPropDef, APropdef]>*/
}
{
nitc__modelize_property___APropdef___set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property$APropdef$set_doc on <self:ATypePropdef>*/
}
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "fixed";
var147 = (val*)(5l<<2|1);
var148 = (val*)(5l<<2|1);
var149 = (val*)((long)(0)<<2|3);
var150 = (val*)((long)(0)<<2|3);
var146 = core__flat___CString___to_s_unsafe(var145, var147, var148, var149, var150);
var144 = var146;
varonce143 = var144;
}
{
var151 = nitc__annotation___Prod___get_single_annotation(self, var144, var_modelbuilder);
}
var_atfixed = var151;
if (var_atfixed == NULL) {
var152 = 0; /* is null */
} else {
var152 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atfixed,((val*)NULL)) on <var_atfixed:nullable AAnnotation> */
var_other155 = ((val*)NULL);
{
var156 = ((short int(*)(val* self, val* p0))(var_atfixed->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atfixed, var_other155); /* == on <var_atfixed:nullable AAnnotation(AAnnotation)>*/
}
var157 = !var156;
var153 = var157;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
var152 = var153;
}
if (var152){
{
{ /* Inline model$MVirtualTypeDef$is_fixed= (var_mpropdef,1) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s = 1; /* _is_fixed on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL158:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property$ATypePropdef$build_signature for (self: ATypePropdef, ModelBuilder) */
void nitc__modelize_property___ATypePropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: nullable MType */;
val* var15 /* : AType */;
val* var17 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var18 /* : nullable MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var14 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mmodule = var12;
var_mtype = ((val*)NULL);
{
{ /* Inline parser_nodes$ATypePropdef$n_type (self) on <self:ATypePropdef> */
var17 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_ntype = var15;
{
var18 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1);
}
var_mtype = var18;
if (var_mtype == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var24 = var_mtype == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MVirtualTypeDef$bound= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = var_mtype; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property$ATypePropdef$check_signature for (self: ATypePropdef, ModelBuilder) */
void nitc__modelize_property___ATypePropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AType */;
val* var20 /* : AType */;
val* var21 /* : MClassDef */;
val* var23 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var27 /* : MClassType */;
val* var29 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var30 /* : AType */;
val* var32 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var33 /* : nullable MType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var41 /* : MProperty */;
val* var43 /* : MProperty */;
val* var44 /* : Array[MPropDef] */;
val* var_ /* var : Array[MVirtualTypeDef] */;
val* var45 /* : IndexedIterator[nullable Object] */;
val* var_46 /* var : IndexedIterator[MVirtualTypeDef] */;
short int var47 /* : Bool */;
val* var48 /* : nullable Object */;
val* var_p /* var p: MVirtualTypeDef */;
val* var49 /* : nullable MType */;
val* var51 /* : nullable MType */;
val* var_supbound /* var supbound: nullable MType */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var_60 /* var : Bool */;
short int var61 /* : Bool */;
int cltype;
int idtype;
short int var_62 /* var : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce;
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
val* var94 /* : MProperty */;
val* var96 /* : MProperty */;
val* var97 /* : String */;
val* var98 /* : MClassDef */;
val* var100 /* : MClassDef */;
val* var101 /* : MClass */;
val* var103 /* : MClass */;
val* var104 /* : String */;
val* var105 /* : String */;
val* var106 /* : MClassDef */;
val* var108 /* : MClassDef */;
val* var109 /* : MClass */;
val* var111 /* : MClass */;
val* var112 /* : MClass */;
val* var114 /* : MClass */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : AType */;
val* var122 /* : AType */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : CString */;
val* var126 /* : String */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Bool */;
val* var130 /* : nullable Bool */;
val* var131 /* : AType */;
val* var133 /* : AType */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
val* var136 /* : AType */;
val* var138 /* : AType */;
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
val* var165 /* : String */;
val* var166 /* : String */;
val* var167 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MVirtualTypeDef$bound (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_bound = var9;
if (var_bound == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_bound,((val*)NULL)) on <var_bound:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_bound,var_other) on <var_bound:nullable MType(MType)> */
var17 = var_bound == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ATypePropdef$n_type (self) on <self:ATypePropdef> */
var20 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var18, var_bound, var_mpropdef); /* Direct call modelize_property$ModelBuilder$check_visibility on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var23 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mclassdef = var21;
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var26 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mmodule = var24;
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_anchor = var27;
{
{ /* Inline parser_nodes$ATypePropdef$n_type (self) on <self:ATypePropdef> */
var32 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_ntype = var30;
{
var33 = nitc___nitc__ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
if (var33 == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var33,((val*)NULL)) on <var33:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var33,var_other) on <var33:nullable MType(MType)> */
var39 = var33 == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
{ /* Inline model$MVirtualTypeDef$bound= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = ((val*)NULL); /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL40:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var43 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = nitc___nitc__MProperty___lookup_super_definitions(var41, var_mmodule, var_anchor);
}
var_ = var44;
{
var45 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_46 = var45;
for(;;) {
{
var47 = ((short int(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_46); /* is_ok on <var_46:IndexedIterator[MVirtualTypeDef]>*/
}
if (var47){
} else {
goto BREAK_label;
}
{
var48 = ((val*(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_46); /* item on <var_46:IndexedIterator[MVirtualTypeDef]>*/
}
var_p = var48;
{
{ /* Inline model$MVirtualTypeDef$bound (var_p) on <var_p:MVirtualTypeDef> */
var51 = var_p->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var_p:MVirtualTypeDef> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_supbound = var49;
if (var_supbound == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_supbound,((val*)NULL)) on <var_supbound:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_supbound,var_other) on <var_supbound:nullable MType(MType)> */
var59 = var_supbound == var_other;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
var_60 = var54;
if (var54){
var53 = var_60;
} else {
/* <var_supbound:nullable MType(MType)> isa MBottomType */
cltype = type_nitc__MBottomType.color;
idtype = type_nitc__MBottomType.id;
if(cltype >= var_supbound->type->table_size) {
var61 = 0;
} else {
var61 = var_supbound->type->type_table[cltype] == idtype;
}
var53 = var61;
}
var_62 = var53;
if (var53){
var52 = var_62;
} else {
{
{ /* Inline model_base$MEntity$is_broken (var_p) on <var_p:MVirtualTypeDef> */
var65 = var_p->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_p:MVirtualTypeDef> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
var52 = var63;
}
if (var52){
goto BREAK_label;
} else {
}
{
{ /* Inline model$MVirtualTypeDef$is_fixed (var_p) on <var_p:MVirtualTypeDef> */
var68 = var_p->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_p:MVirtualTypeDef> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (var66){
if (unlikely(varonce==NULL)) {
var69 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "Redef Error: virtual type `";
var74 = (val*)(27l<<2|1);
var75 = (val*)(27l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[0]=var71;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "` is fixed in super-class `";
var82 = (val*)(27l<<2|1);
var83 = (val*)(27l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var69)->values[2]=var79;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "`.";
var90 = (val*)(2l<<2|1);
var91 = (val*)(2l<<2|1);
var92 = (val*)((long)(0)<<2|3);
var93 = (val*)((long)(0)<<2|3);
var89 = core__flat___CString___to_s_unsafe(var88, var90, var91, var92, var93);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var69)->values[4]=var87;
} else {
var69 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var96 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = ((val*(*)(val* self))(var94->class->vft[COLOR_core__abstract_text__Object__to_s]))(var94); /* to_s on <var94:MProperty(MVirtualTypeProp)>*/
}
((struct instance_core__NativeArray*)var69)->values[1]=var97;
{
{ /* Inline model$MPropDef$mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var100 = var_p->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var100 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var98) on <var98:MClassDef> */
var103 = var98->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var98:MClassDef> */
if (unlikely(var103 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
var104 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__Object__to_s]))(var101); /* to_s on <var101:MClass>*/
}
((struct instance_core__NativeArray*)var69)->values[3]=var104;
{
var105 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce = var69;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var105); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var108 = var_p->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var108 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var106) on <var106:MClassDef> */
var111 = var106->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var106:MClassDef> */
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var114 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var114 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var109,var112) on <var109:MClass> */
var_other = var112;
{
{ /* Inline kernel$Object$is_same_instance (var109,var_other) on <var109:MClass> */
var119 = var109 == var_other;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
if (var115){
{
{ /* Inline parser_nodes$ATypePropdef$n_type (self) on <self:ATypePropdef> */
var122 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "Redef Error: a virtual type cannot be refined.";
var127 = (val*)(46l<<2|1);
var128 = (val*)(46l<<2|1);
var129 = (val*)((long)(0)<<2|3);
var130 = (val*)((long)(0)<<2|3);
var126 = core__flat___CString___to_s_unsafe(var125, var127, var128, var129, var130);
var124 = var126;
varonce123 = var124;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var120, var124); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline parser_nodes$ATypePropdef$n_type (self) on <self:ATypePropdef> */
var133 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var133 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
var134 = nitc___nitc__ModelBuilder___check_subtype(var_modelbuilder, var131, var_mmodule, var_anchor, var_bound, var_supbound);
}
var135 = !var134;
if (var135){
{
{ /* Inline parser_nodes$ATypePropdef$n_type (self) on <self:ATypePropdef> */
var138 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var138 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
if (unlikely(varonce139==NULL)) {
var140 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "Redef Error: expected `";
var145 = (val*)(23l<<2|1);
var146 = (val*)(23l<<2|1);
var147 = (val*)((long)(0)<<2|3);
var148 = (val*)((long)(0)<<2|3);
var144 = core__flat___CString___to_s_unsafe(var143, var145, var146, var147, var148);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var140)->values[0]=var142;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "` bound type; got `";
var153 = (val*)(19l<<2|1);
var154 = (val*)(19l<<2|1);
var155 = (val*)((long)(0)<<2|3);
var156 = (val*)((long)(0)<<2|3);
var152 = core__flat___CString___to_s_unsafe(var151, var153, var154, var155, var156);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var140)->values[2]=var150;
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "`.";
var161 = (val*)(2l<<2|1);
var162 = (val*)(2l<<2|1);
var163 = (val*)((long)(0)<<2|3);
var164 = (val*)((long)(0)<<2|3);
var160 = core__flat___CString___to_s_unsafe(var159, var161, var162, var163, var164);
var158 = var160;
varonce157 = var158;
}
((struct instance_core__NativeArray*)var140)->values[4]=var158;
} else {
var140 = varonce139;
varonce139 = NULL;
}
{
var165 = ((val*(*)(val* self))(var_supbound->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_supbound); /* to_s on <var_supbound:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var140)->values[1]=var165;
{
var166 = ((val*(*)(val* self))(var_bound->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_bound); /* to_s on <var_bound:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var140)->values[3]=var166;
{
var167 = ((val*(*)(val* self))(var140->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var140); /* native_to_s on <var140:NativeArray[String]>*/
}
varonce139 = var140;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var136, var167); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_46); /* next on <var_46:IndexedIterator[MVirtualTypeDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_46); /* finish on <var_46:IndexedIterator[MVirtualTypeDef]>*/
}
RET_LABEL:;
}
