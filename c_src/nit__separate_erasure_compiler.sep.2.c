#include "nit__separate_erasure_compiler.sep.0.h"
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#type_test for (self: SeparateErasureCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : MClassType */;
val* var18 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
val* var_cltype /* var cltype: String */;
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
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : String */;
val* var_idtype /* var idtype: String */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
short int var51 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
val* var_accept_null /* var accept_null: String */;
short int var56 /* : Bool */;
int cltype;
int idtype;
val* var57 /* : MType */;
val* var59 /* : MType */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
val* var67 /* : nullable StaticFrame */;
val* var69 /* : nullable StaticFrame */;
val* var70 /* : MPropDef */;
val* var72 /* : MPropDef */;
val* var73 /* : MClassDef */;
val* var75 /* : MClassDef */;
val* var76 /* : MClassType */;
val* var78 /* : MClassType */;
val* var79 /* : nullable StaticFrame */;
val* var81 /* : nullable StaticFrame */;
val* var82 /* : MPropDef */;
val* var84 /* : MPropDef */;
val* var85 /* : MClassDef */;
val* var87 /* : MClassDef */;
val* var88 /* : MClassType */;
val* var90 /* : MClassType */;
val* var91 /* : nullable StaticFrame */;
val* var93 /* : nullable StaticFrame */;
val* var94 /* : MPropDef */;
val* var96 /* : MPropDef */;
val* var97 /* : MClassDef */;
val* var99 /* : MClassDef */;
val* var100 /* : MModule */;
val* var102 /* : MModule */;
val* var103 /* : MType */;
short int var104 /* : Bool */;
int cltype105;
int idtype106;
val* var107 /* : MType */;
val* var109 /* : MType */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : FlatString */;
val* var114 /* : MType */;
val* var116 /* : MType */;
val* var117 /* : nullable StaticFrame */;
val* var119 /* : nullable StaticFrame */;
val* var120 /* : MPropDef */;
val* var122 /* : MPropDef */;
val* var123 /* : MClassDef */;
val* var125 /* : MClassDef */;
val* var126 /* : MModule */;
val* var128 /* : MModule */;
val* var129 /* : nullable StaticFrame */;
val* var131 /* : nullable StaticFrame */;
val* var132 /* : MPropDef */;
val* var134 /* : MPropDef */;
val* var135 /* : MClassDef */;
val* var137 /* : MClassDef */;
val* var138 /* : MClassType */;
val* var140 /* : MClassType */;
short int var141 /* : Bool */;
val* var143 /* : NativeArray[String] */;
static val* varonce142;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
val* var147 /* : FlatString */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
val* var151 /* : FlatString */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
val* var155 /* : FlatString */;
val* var156 /* : String */;
val* var157 /* : String */;
val* var158 /* : String */;
val* var159 /* : String */;
val* var160 /* : AbstractCompiler */;
val* var162 /* : AbstractCompiler */;
val* var163 /* : ModelBuilder */;
val* var165 /* : ModelBuilder */;
val* var166 /* : ToolContext */;
val* var168 /* : ToolContext */;
val* var169 /* : OptionBool */;
val* var171 /* : OptionBool */;
val* var172 /* : nullable Object */;
val* var174 /* : nullable Object */;
short int var175 /* : Bool */;
val* var176 /* : AbstractCompiler */;
val* var178 /* : AbstractCompiler */;
val* var179 /* : HashMap[String, Int] */;
val* var181 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
val* var_182 /* var : String */;
val* var183 /* : nullable Object */;
long var184 /* : Int */;
short int var186 /* : Bool */;
int cltype187;
int idtype188;
const char* var_class_name;
long var189 /* : Int */;
long var190 /* : Int */;
val* var191 /* : nullable Object */;
val* var193 /* : NativeArray[String] */;
static val* varonce192;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
val* var197 /* : FlatString */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : FlatString */;
val* var202 /* : String */;
val* var203 /* : MType */;
val* var205 /* : MType */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
val* var209 /* : NativeArray[String] */;
static val* varonce208;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
val* var213 /* : FlatString */;
val* var214 /* : String */;
val* var215 /* : String */;
val* var_class_ptr /* var class_ptr: nullable Object */;
val* var216 /* : MType */;
val* var218 /* : MType */;
short int var219 /* : Bool */;
int cltype220;
int idtype221;
const char* var_class_name222;
val* var223 /* : MClass */;
val* var225 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var227 /* : NativeArray[String] */;
static val* varonce226;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
val* var231 /* : FlatString */;
val* var232 /* : String */;
val* var233 /* : String */;
val* var235 /* : NativeArray[String] */;
static val* varonce234;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
val* var239 /* : FlatString */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
val* var243 /* : FlatString */;
val* var244 /* : String */;
val* var245 /* : String */;
short int var246 /* : Bool */;
int cltype247;
int idtype248;
val* var250 /* : NativeArray[String] */;
static val* varonce249;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
val* var254 /* : FlatString */;
val* var255 /* : MClass */;
val* var257 /* : MClass */;
val* var258 /* : String */;
val* var259 /* : String */;
val* var261 /* : NativeArray[String] */;
static val* varonce260;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
val* var265 /* : FlatString */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
val* var269 /* : FlatString */;
val* var270 /* : MClass */;
val* var272 /* : MClass */;
val* var273 /* : String */;
val* var274 /* : String */;
val* var276 /* : NativeArray[String] */;
static val* varonce275;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
val* var280 /* : FlatString */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : FlatString */;
val* var285 /* : MClass */;
val* var287 /* : MClass */;
val* var288 /* : String */;
val* var289 /* : String */;
val* var290 /* : AbstractCompiler */;
val* var292 /* : AbstractCompiler */;
val* var293 /* : ModelBuilder */;
val* var295 /* : ModelBuilder */;
val* var296 /* : ToolContext */;
val* var298 /* : ToolContext */;
val* var299 /* : OptionBool */;
val* var301 /* : OptionBool */;
val* var302 /* : nullable Object */;
val* var304 /* : nullable Object */;
short int var305 /* : Bool */;
val* var306 /* : AbstractCompiler */;
val* var308 /* : AbstractCompiler */;
val* var309 /* : HashMap[String, Int] */;
val* var311 /* : HashMap[String, Int] */;
val* var_312 /* var : HashMap[String, Int] */;
val* var_313 /* var : String */;
val* var314 /* : nullable Object */;
long var315 /* : Int */;
short int var317 /* : Bool */;
int cltype318;
int idtype319;
const char* var_class_name320;
long var321 /* : Int */;
long var322 /* : Int */;
val* var323 /* : nullable Object */;
val* var325 /* : NativeArray[String] */;
static val* varonce324;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
val* var329 /* : FlatString */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
val* var333 /* : FlatString */;
val* var334 /* : String */;
short int var335 /* : Bool */;
int cltype336;
int idtype337;
val* var338 /* : nullable StaticFrame */;
val* var340 /* : nullable StaticFrame */;
val* var341 /* : Array[RuntimeVariable] */;
val* var343 /* : Array[RuntimeVariable] */;
val* var344 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var345 /* : MType */;
val* var347 /* : MType */;
short int var348 /* : Bool */;
short int var349 /* : Bool */;
val* var351 /* : NativeArray[String] */;
static val* varonce350;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
val* var355 /* : FlatString */;
val* var356 /* : String */;
val* var357 /* : String */;
val* var_recv_ptr /* var recv_ptr: nullable Object */;
val* var358 /* : MType */;
val* var360 /* : MType */;
short int var361 /* : Bool */;
int cltype362;
int idtype363;
const char* var_class_name364;
val* var365 /* : MClass */;
val* var367 /* : MClass */;
val* var_mclass368 /* var mclass: MClass */;
val* var370 /* : NativeArray[String] */;
static val* varonce369;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
val* var374 /* : FlatString */;
val* var375 /* : String */;
val* var376 /* : String */;
val* var378 /* : NativeArray[String] */;
static val* varonce377;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
val* var382 /* : FlatString */;
static val* varonce383;
val* var384 /* : String */;
char* var385 /* : NativeString */;
val* var386 /* : FlatString */;
val* var387 /* : String */;
val* var388 /* : String */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
val* var392 /* : FlatString */;
val* var393 /* : String */;
val* var_entry /* var entry: String */;
val* var395 /* : NativeArray[String] */;
static val* varonce394;
static val* varonce396;
val* var397 /* : String */;
char* var398 /* : NativeString */;
val* var399 /* : FlatString */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
val* var403 /* : FlatString */;
val* var404 /* : String */;
val* var405 /* : MVirtualTypeProp */;
val* var407 /* : MVirtualTypeProp */;
val* var408 /* : String */;
val* var410 /* : NativeArray[String] */;
static val* varonce409;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
val* var414 /* : FlatString */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : NativeString */;
val* var418 /* : FlatString */;
static val* varonce419;
val* var420 /* : String */;
char* var421 /* : NativeString */;
val* var422 /* : FlatString */;
val* var423 /* : MVirtualTypeProp */;
val* var425 /* : MVirtualTypeProp */;
val* var426 /* : String */;
val* var427 /* : String */;
val* var429 /* : NativeArray[String] */;
static val* varonce428;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : NativeString */;
val* var433 /* : FlatString */;
static val* varonce434;
val* var435 /* : String */;
char* var436 /* : NativeString */;
val* var437 /* : FlatString */;
val* var438 /* : String */;
val* var440 /* : NativeArray[String] */;
static val* varonce439;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
val* var444 /* : FlatString */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
val* var448 /* : FlatString */;
val* var449 /* : String */;
short int var450 /* : Bool */;
short int var_451 /* var : Bool */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
val* var455 /* : FlatString */;
short int var456 /* : Bool */;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : NativeString */;
val* var460 /* : FlatString */;
val* var461 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
val* var463 /* : NativeArray[String] */;
static val* varonce462;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : NativeString */;
val* var467 /* : FlatString */;
static val* varonce468;
val* var469 /* : String */;
char* var470 /* : NativeString */;
val* var471 /* : FlatString */;
val* var472 /* : String */;
val* var474 /* : NativeArray[String] */;
static val* varonce473;
static val* varonce475;
val* var476 /* : String */;
char* var477 /* : NativeString */;
val* var478 /* : FlatString */;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : NativeString */;
val* var482 /* : FlatString */;
val* var483 /* : String */;
val* var484 /* : String */;
val* var485 /* : AbstractCompiler */;
val* var487 /* : AbstractCompiler */;
val* var488 /* : ModelBuilder */;
val* var490 /* : ModelBuilder */;
val* var491 /* : ToolContext */;
val* var493 /* : ToolContext */;
val* var494 /* : OptionBool */;
val* var496 /* : OptionBool */;
val* var497 /* : nullable Object */;
val* var499 /* : nullable Object */;
short int var500 /* : Bool */;
val* var501 /* : AbstractCompiler */;
val* var503 /* : AbstractCompiler */;
val* var504 /* : HashMap[String, Int] */;
val* var506 /* : HashMap[String, Int] */;
val* var_507 /* var : HashMap[String, Int] */;
val* var_508 /* var : String */;
val* var509 /* : nullable Object */;
long var510 /* : Int */;
short int var512 /* : Bool */;
int cltype513;
int idtype514;
const char* var_class_name515;
long var516 /* : Int */;
long var517 /* : Int */;
val* var518 /* : nullable Object */;
val* var520 /* : NativeArray[String] */;
static val* varonce519;
static val* varonce521;
val* var522 /* : String */;
char* var523 /* : NativeString */;
val* var524 /* : FlatString */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
val* var528 /* : FlatString */;
val* var529 /* : String */;
val* var531 /* : NativeArray[String] */;
static val* varonce530;
static val* varonce532;
val* var533 /* : String */;
char* var534 /* : NativeString */;
val* var535 /* : FlatString */;
static val* varonce536;
val* var537 /* : String */;
char* var538 /* : NativeString */;
val* var539 /* : FlatString */;
static val* varonce540;
val* var541 /* : String */;
char* var542 /* : NativeString */;
val* var543 /* : FlatString */;
val* var544 /* : String */;
val* var545 /* : String */;
val* var546 /* : String */;
val* var548 /* : NativeArray[String] */;
static val* varonce547;
static val* varonce549;
val* var550 /* : String */;
char* var551 /* : NativeString */;
val* var552 /* : FlatString */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
val* var556 /* : FlatString */;
val* var557 /* : String */;
val* var558 /* : String */;
val* var560 /* : NativeArray[String] */;
static val* varonce559;
static val* varonce561;
val* var562 /* : String */;
char* var563 /* : NativeString */;
val* var564 /* : FlatString */;
static val* varonce565;
val* var566 /* : String */;
char* var567 /* : NativeString */;
val* var568 /* : FlatString */;
val* var569 /* : String */;
val* var570 /* : String */;
static val* varonce571;
val* var572 /* : String */;
char* var573 /* : NativeString */;
val* var574 /* : FlatString */;
val* var576 /* : NativeArray[String] */;
static val* varonce575;
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
val* var589 /* : String */;
val* var591 /* : NativeArray[String] */;
static val* varonce590;
static val* varonce592;
val* var593 /* : String */;
char* var594 /* : NativeString */;
val* var595 /* : FlatString */;
val* var596 /* : String */;
val* var597 /* : String */;
static val* varonce598;
val* var599 /* : String */;
char* var600 /* : NativeString */;
val* var601 /* : FlatString */;
val* var603 /* : NativeArray[String] */;
static val* varonce602;
static val* varonce604;
val* var605 /* : String */;
char* var606 /* : NativeString */;
val* var607 /* : FlatString */;
static val* varonce608;
val* var609 /* : String */;
char* var610 /* : NativeString */;
val* var611 /* : FlatString */;
static val* varonce612;
val* var613 /* : String */;
char* var614 /* : NativeString */;
val* var615 /* : FlatString */;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : NativeString */;
val* var619 /* : FlatString */;
val* var620 /* : String */;
val* var621 /* : String */;
static val* varonce622;
val* var623 /* : String */;
char* var624 /* : NativeString */;
val* var625 /* : FlatString */;
static val* varonce626;
val* var627 /* : String */;
char* var628 /* : NativeString */;
val* var629 /* : FlatString */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "/* type test for ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 17l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = " isa ";
var9 = standard___standard__NativeString___to_s_with_length(var8, 5l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = " */";
var13 = standard___standard__NativeString___to_s_with_length(var12, 3l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var1)->values[3]=var15;
{
var16 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nit___nit__AbstractCompilerVisitor___add(self, var16); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
var17 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var18 = nit___nit__AbstractCompilerVisitor___new_var(self, var17);
}
var_res = var18;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "cltype";
var22 = standard___standard__NativeString___to_s_with_length(var21, 6l);
var20 = var22;
varonce19 = var20;
}
{
var23 = nit___nit__AbstractCompilerVisitor___get_name(self, var20);
}
var_cltype = var23;
if (unlikely(varonce24==NULL)) {
var25 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "int ";
var29 = standard___standard__NativeString___to_s_with_length(var28, 4l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = ";";
var33 = standard___standard__NativeString___to_s_with_length(var32, 1l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_standard__NativeArray*)var25)->values[1]=var_cltype;
{
var34 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "idtype";
var38 = standard___standard__NativeString___to_s_with_length(var37, 6l);
var36 = var38;
varonce35 = var36;
}
{
var39 = nit___nit__AbstractCompilerVisitor___get_name(self, var36);
}
var_idtype = var39;
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "int ";
var45 = standard___standard__NativeString___to_s_with_length(var44, 4l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = ";";
var49 = standard___standard__NativeString___to_s_with_length(var48, 1l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var41)->values[2]=var47;
} else {
var41 = varonce40;
varonce40 = NULL;
}
((struct instance_standard__NativeArray*)var41)->values[1]=var_idtype;
{
var50 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
{
var51 = nit___nit__SeparateCompilerVisitor___maybe_null(self, var_value);
}
var_maybe_null = var51;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "0";
var55 = standard___standard__NativeString___to_s_with_length(var54, 1l);
var53 = var55;
varonce52 = var53;
}
var_accept_null = var53;
/* <var_mtype:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var56 = 0;
} else {
var56 = var_mtype->type->type_table[cltype] == idtype;
}
if (var56){
{
{ /* Inline model#MProxyType#mtype (var_mtype) on <var_mtype:MType(MNullableType)> */
var59 = var_mtype->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_mtype:MType(MNullableType)> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_mtype = var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "1";
var63 = standard___standard__NativeString___to_s_with_length(var62, 1l);
var61 = var63;
varonce60 = var61;
}
var_accept_null = var61;
} else {
}
/* <var_mtype:MType> isa MParameterType */
cltype65 = type_nit__MParameterType.color;
idtype66 = type_nit__MParameterType.id;
if(cltype65 >= var_mtype->type->table_size) {
var64 = 0;
} else {
var64 = var_mtype->type->type_table[cltype65] == idtype66;
}
if (var64){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var69 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (var67 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 521);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var67) on <var67:nullable StaticFrame> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var72 = var67->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var67:nullable StaticFrame> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var70) on <var70:MPropDef> */
var75 = var70->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var70:MPropDef> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var73) on <var73:MClassDef> */
var78 = var73->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var73:MClassDef> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var81 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (var79 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 521);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var79) on <var79:nullable StaticFrame> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var84 = var79->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var79:nullable StaticFrame> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var82) on <var82:MPropDef> */
var87 = var82->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var82:MPropDef> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var85) on <var85:MClassDef> */
var90 = var85->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var85:MClassDef> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var93 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 521);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var91) on <var91:nullable StaticFrame> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var96 = var91->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var91:nullable StaticFrame> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var94) on <var94:MPropDef> */
var99 = var94->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var94:MPropDef> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var97) on <var97:MClassDef> */
var102 = var97->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var97:MClassDef> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = nit___nit__MParameterType___MType__resolve_for(var_mtype, var76, var88, var100, 0);
}
var_mtype = var103;
/* <var_mtype:MType> isa MNullableType */
cltype105 = type_nit__MNullableType.color;
idtype106 = type_nit__MNullableType.id;
if(cltype105 >= var_mtype->type->table_size) {
var104 = 0;
} else {
var104 = var_mtype->type->type_table[cltype105] == idtype106;
}
if (var104){
{
{ /* Inline model#MProxyType#mtype (var_mtype) on <var_mtype:MType(MNullableType)> */
var109 = var_mtype->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_mtype:MType(MNullableType)> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
var_mtype = var107;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "1";
var113 = standard___standard__NativeString___to_s_with_length(var112, 1l);
var111 = var113;
varonce110 = var111;
}
var_accept_null = var111;
} else {
}
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var116 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var119 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (var117 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 528);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var117) on <var117:nullable StaticFrame> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var122 = var117->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var117:nullable StaticFrame> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var120) on <var120:MPropDef> */
var125 = var120->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var120:MPropDef> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var123) on <var123:MClassDef> */
var128 = var123->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var123:MClassDef> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var131 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
if (var129 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 528);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var129) on <var129:nullable StaticFrame> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var134 = var129->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var129:nullable StaticFrame> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var132) on <var132:MPropDef> */
var137 = var132->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var132:MPropDef> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var135) on <var135:MClassDef> */
var140 = var135->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var135:MClassDef> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
var141 = nit___nit__MType___is_subtype(var114, var126, var138, var_mtype);
}
if (var141){
if (unlikely(varonce142==NULL)) {
var143 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = " = 1; /* easy ";
var147 = standard___standard__NativeString___to_s_with_length(var146, 14l);
var145 = var147;
varonce144 = var145;
}
((struct instance_standard__NativeArray*)var143)->values[1]=var145;
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = " isa ";
var151 = standard___standard__NativeString___to_s_with_length(var150, 5l);
var149 = var151;
varonce148 = var149;
}
((struct instance_standard__NativeArray*)var143)->values[3]=var149;
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "*/";
var155 = standard___standard__NativeString___to_s_with_length(var154, 2l);
var153 = var155;
varonce152 = var153;
}
((struct instance_standard__NativeArray*)var143)->values[5]=var153;
} else {
var143 = varonce142;
varonce142 = NULL;
}
{
var156 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var143)->values[0]=var156;
{
var157 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
((struct instance_standard__NativeArray*)var143)->values[2]=var157;
{
var158 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var143)->values[4]=var158;
{
var159 = ((val*(*)(val* self))(var143->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var143); /* native_to_s on <var143:NativeArray[String]>*/
}
varonce142 = var143;
{
nit___nit__AbstractCompilerVisitor___add(self, var159); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var162 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var160) on <var160:AbstractCompiler(SeparateCompiler)> */
var165 = var160->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var160:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var163) on <var163:ModelBuilder> */
var168 = var163->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var163:ModelBuilder> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var166) on <var166:ToolContext> */
var171 = var166->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var166:ToolContext> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
{ /* Inline opts#Option#value (var169) on <var169:OptionBool> */
var174 = var169->attrs[COLOR_opts__Option___value].val; /* _value on <var169:OptionBool> */
var172 = var174;
RET_LABEL173:(void)0;
}
}
var175 = (short int)((long)(var172)>>2);
if (var175){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var178 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (var176) on <var176:AbstractCompiler(SeparateCompiler)> */
var181 = var176->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <var176:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1017);
fatal_exit(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
var_ = var179;
var_182 = var_tag;
{
var183 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_, var_182);
}
{
{ /* Inline kernel#Int#+ (var183,1l) on <var183:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var186 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var186)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var189 = (long)(var183)>>2;
var190 = var189 + 1l;
var184 = var190;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
{
var191 = (val*)(var184<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_, var_182, var191); /* Direct call hash_collection#HashMap#[]= on <var_:HashMap[String, Int]>*/
}
if (unlikely(varonce192==NULL)) {
var193 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "count_type_test_skipped_";
var197 = standard___standard__NativeString___to_s_with_length(var196, 24l);
var195 = var197;
varonce194 = var195;
}
((struct instance_standard__NativeArray*)var193)->values[0]=var195;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "++;";
var201 = standard___standard__NativeString___to_s_with_length(var200, 3l);
var199 = var201;
varonce198 = var199;
}
((struct instance_standard__NativeArray*)var193)->values[2]=var199;
} else {
var193 = varonce192;
varonce192 = NULL;
}
((struct instance_standard__NativeArray*)var193)->values[1]=var_tag;
{
var202 = ((val*(*)(val* self))(var193->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var193); /* native_to_s on <var193:NativeArray[String]>*/
}
varonce192 = var193;
{
nit___nit__AbstractCompilerVisitor___add(self, var202); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var205 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var205 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var203 = var205;
RET_LABEL204:(void)0;
}
}
{
var206 = ((short int(*)(val* self))(var203->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var203); /* is_c_primitive on <var203:MType>*/
}
var207 = !var206;
if (var207){
if (unlikely(varonce208==NULL)) {
var209 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "->class->";
var213 = standard___standard__NativeString___to_s_with_length(var212, 9l);
var211 = var213;
varonce210 = var211;
}
((struct instance_standard__NativeArray*)var209)->values[1]=var211;
} else {
var209 = varonce208;
varonce208 = NULL;
}
{
var214 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var209)->values[0]=var214;
{
var215 = ((val*(*)(val* self))(var209->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var209); /* native_to_s on <var209:NativeArray[String]>*/
}
varonce208 = var209;
var_class_ptr = var215;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var218 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
/* <var216:MType> isa MClassType */
cltype220 = type_nit__MClassType.color;
idtype221 = type_nit__MClassType.id;
if(cltype220 >= var216->type->table_size) {
var219 = 0;
} else {
var219 = var216->type->type_table[cltype220] == idtype221;
}
if (unlikely(!var219)) {
var_class_name222 = var216 == NULL ? "null" : var216->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name222);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 541);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var216) on <var216:MType(MClassType)> */
var225 = var216->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var216:MType(MClassType)> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
var_mclass = var223;
if (unlikely(varonce226==NULL)) {
var227 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = "class_";
var231 = standard___standard__NativeString___to_s_with_length(var230, 6l);
var229 = var231;
varonce228 = var229;
}
((struct instance_standard__NativeArray*)var227)->values[0]=var229;
} else {
var227 = varonce226;
varonce226 = NULL;
}
{
var232 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass);
}
((struct instance_standard__NativeArray*)var227)->values[1]=var232;
{
var233 = ((val*(*)(val* self))(var227->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var227); /* native_to_s on <var227:NativeArray[String]>*/
}
varonce226 = var227;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var233); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce234==NULL)) {
var235 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = "class_";
var239 = standard___standard__NativeString___to_s_with_length(var238, 6l);
var237 = var239;
varonce236 = var237;
}
((struct instance_standard__NativeArray*)var235)->values[0]=var237;
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = ".";
var243 = standard___standard__NativeString___to_s_with_length(var242, 1l);
var241 = var243;
varonce240 = var241;
}
((struct instance_standard__NativeArray*)var235)->values[2]=var241;
} else {
var235 = varonce234;
varonce234 = NULL;
}
{
var244 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass);
}
((struct instance_standard__NativeArray*)var235)->values[1]=var244;
{
var245 = ((val*(*)(val* self))(var235->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var235); /* native_to_s on <var235:NativeArray[String]>*/
}
varonce234 = var235;
var_class_ptr = var245;
}
/* <var_mtype:MType> isa MClassType */
cltype247 = type_nit__MClassType.color;
idtype248 = type_nit__MClassType.id;
if(cltype247 >= var_mtype->type->table_size) {
var246 = 0;
} else {
var246 = var_mtype->type->type_table[cltype247] == idtype248;
}
if (var246){
if (unlikely(varonce249==NULL)) {
var250 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "class_";
var254 = standard___standard__NativeString___to_s_with_length(var253, 6l);
var252 = var254;
varonce251 = var252;
}
((struct instance_standard__NativeArray*)var250)->values[0]=var252;
} else {
var250 = varonce249;
varonce249 = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var257 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var257 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
var258 = nit___nit__MClass___nit__model_base__MEntity__c_name(var255);
}
((struct instance_standard__NativeArray*)var250)->values[1]=var258;
{
var259 = ((val*(*)(val* self))(var250->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var250); /* native_to_s on <var250:NativeArray[String]>*/
}
varonce249 = var250;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var259); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce260==NULL)) {
var261 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = " = class_";
var265 = standard___standard__NativeString___to_s_with_length(var264, 9l);
var263 = var265;
varonce262 = var263;
}
((struct instance_standard__NativeArray*)var261)->values[1]=var263;
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = ".color;";
var269 = standard___standard__NativeString___to_s_with_length(var268, 7l);
var267 = var269;
varonce266 = var267;
}
((struct instance_standard__NativeArray*)var261)->values[3]=var267;
} else {
var261 = varonce260;
varonce260 = NULL;
}
((struct instance_standard__NativeArray*)var261)->values[0]=var_cltype;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var272 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var272 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
{
var273 = nit___nit__MClass___nit__model_base__MEntity__c_name(var270);
}
((struct instance_standard__NativeArray*)var261)->values[2]=var273;
{
var274 = ((val*(*)(val* self))(var261->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var261); /* native_to_s on <var261:NativeArray[String]>*/
}
varonce260 = var261;
{
nit___nit__AbstractCompilerVisitor___add(self, var274); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce275==NULL)) {
var276 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = " = class_";
var280 = standard___standard__NativeString___to_s_with_length(var279, 9l);
var278 = var280;
varonce277 = var278;
}
((struct instance_standard__NativeArray*)var276)->values[1]=var278;
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = ".id;";
var284 = standard___standard__NativeString___to_s_with_length(var283, 4l);
var282 = var284;
varonce281 = var282;
}
((struct instance_standard__NativeArray*)var276)->values[3]=var282;
} else {
var276 = varonce275;
varonce275 = NULL;
}
((struct instance_standard__NativeArray*)var276)->values[0]=var_idtype;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var287 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var287 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var285 = var287;
RET_LABEL286:(void)0;
}
}
{
var288 = nit___nit__MClass___nit__model_base__MEntity__c_name(var285);
}
((struct instance_standard__NativeArray*)var276)->values[2]=var288;
{
var289 = ((val*(*)(val* self))(var276->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var276); /* native_to_s on <var276:NativeArray[String]>*/
}
varonce275 = var276;
{
nit___nit__AbstractCompilerVisitor___add(self, var289); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var292 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var292 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var290) on <var290:AbstractCompiler(SeparateCompiler)> */
var295 = var290->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var290:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var295 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var293 = var295;
RET_LABEL294:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var293) on <var293:ModelBuilder> */
var298 = var293->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var293:ModelBuilder> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var296) on <var296:ToolContext> */
var301 = var296->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var296:ToolContext> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
fatal_exit(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
{
{ /* Inline opts#Option#value (var299) on <var299:OptionBool> */
var304 = var299->attrs[COLOR_opts__Option___value].val; /* _value on <var299:OptionBool> */
var302 = var304;
RET_LABEL303:(void)0;
}
}
var305 = (short int)((long)(var302)>>2);
if (var305){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var308 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (var306) on <var306:AbstractCompiler(SeparateCompiler)> */
var311 = var306->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <var306:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var311 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1015);
fatal_exit(1);
}
var309 = var311;
RET_LABEL310:(void)0;
}
}
var_312 = var309;
var_313 = var_tag;
{
var314 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_312, var_313);
}
{
{ /* Inline kernel#Int#+ (var314,1l) on <var314:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var317 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var317)) {
var_class_name320 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name320);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var321 = (long)(var314)>>2;
var322 = var321 + 1l;
var315 = var322;
goto RET_LABEL316;
RET_LABEL316:(void)0;
}
}
{
var323 = (val*)(var315<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_312, var_313, var323); /* Direct call hash_collection#HashMap#[]= on <var_312:HashMap[String, Int]>*/
}
if (unlikely(varonce324==NULL)) {
var325 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce326!=NULL)) {
var327 = varonce326;
} else {
var328 = "count_type_test_resolved_";
var329 = standard___standard__NativeString___to_s_with_length(var328, 25l);
var327 = var329;
varonce326 = var327;
}
((struct instance_standard__NativeArray*)var325)->values[0]=var327;
if (likely(varonce330!=NULL)) {
var331 = varonce330;
} else {
var332 = "++;";
var333 = standard___standard__NativeString___to_s_with_length(var332, 3l);
var331 = var333;
varonce330 = var331;
}
((struct instance_standard__NativeArray*)var325)->values[2]=var331;
} else {
var325 = varonce324;
varonce324 = NULL;
}
((struct instance_standard__NativeArray*)var325)->values[1]=var_tag;
{
var334 = ((val*(*)(val* self))(var325->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var325); /* native_to_s on <var325:NativeArray[String]>*/
}
varonce324 = var325;
{
nit___nit__AbstractCompilerVisitor___add(self, var334); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype336 = type_nit__MVirtualType.color;
idtype337 = type_nit__MVirtualType.id;
if(cltype336 >= var_mtype->type->table_size) {
var335 = 0;
} else {
var335 = var_mtype->type->type_table[cltype336] == idtype337;
}
if (var335){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateErasureCompilerVisitor> */
var340 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateErasureCompilerVisitor> */
var338 = var340;
RET_LABEL339:(void)0;
}
}
if (var338 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 555);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var338) on <var338:nullable StaticFrame> */
if (unlikely(var338 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var343 = var338->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var338:nullable StaticFrame> */
if (unlikely(var343 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var341 = var343;
RET_LABEL342:(void)0;
}
}
{
var344 = standard___standard__SequenceRead___Collection__first(var341);
}
var_recv = var344;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var347 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var347 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var345 = var347;
RET_LABEL346:(void)0;
}
}
{
var348 = ((short int(*)(val* self))(var345->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var345); /* is_c_primitive on <var345:MType>*/
}
var349 = !var348;
if (var349){
if (unlikely(varonce350==NULL)) {
var351 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = "->class->";
var355 = standard___standard__NativeString___to_s_with_length(var354, 9l);
var353 = var355;
varonce352 = var353;
}
((struct instance_standard__NativeArray*)var351)->values[1]=var353;
} else {
var351 = varonce350;
varonce350 = NULL;
}
{
var356 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var351)->values[0]=var356;
{
var357 = ((val*(*)(val* self))(var351->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var351); /* native_to_s on <var351:NativeArray[String]>*/
}
varonce350 = var351;
var_recv_ptr = var357;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var360 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var360 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var358 = var360;
RET_LABEL359:(void)0;
}
}
/* <var358:MType> isa MClassType */
cltype362 = type_nit__MClassType.color;
idtype363 = type_nit__MClassType.id;
if(cltype362 >= var358->type->table_size) {
var361 = 0;
} else {
var361 = var358->type->type_table[cltype362] == idtype363;
}
if (unlikely(!var361)) {
var_class_name364 = var358 == NULL ? "null" : var358->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name364);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 560);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var358) on <var358:MType(MClassType)> */
var367 = var358->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var358:MType(MClassType)> */
if (unlikely(var367 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var365 = var367;
RET_LABEL366:(void)0;
}
}
var_mclass368 = var365;
if (unlikely(varonce369==NULL)) {
var370 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce371!=NULL)) {
var372 = varonce371;
} else {
var373 = "class_";
var374 = standard___standard__NativeString___to_s_with_length(var373, 6l);
var372 = var374;
varonce371 = var372;
}
((struct instance_standard__NativeArray*)var370)->values[0]=var372;
} else {
var370 = varonce369;
varonce369 = NULL;
}
{
var375 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass368);
}
((struct instance_standard__NativeArray*)var370)->values[1]=var375;
{
var376 = ((val*(*)(val* self))(var370->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var370); /* native_to_s on <var370:NativeArray[String]>*/
}
varonce369 = var370;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var376); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce377==NULL)) {
var378 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce379!=NULL)) {
var380 = varonce379;
} else {
var381 = "class_";
var382 = standard___standard__NativeString___to_s_with_length(var381, 6l);
var380 = var382;
varonce379 = var380;
}
((struct instance_standard__NativeArray*)var378)->values[0]=var380;
if (likely(varonce383!=NULL)) {
var384 = varonce383;
} else {
var385 = ".";
var386 = standard___standard__NativeString___to_s_with_length(var385, 1l);
var384 = var386;
varonce383 = var384;
}
((struct instance_standard__NativeArray*)var378)->values[2]=var384;
} else {
var378 = varonce377;
varonce377 = NULL;
}
{
var387 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass368);
}
((struct instance_standard__NativeArray*)var378)->values[1]=var387;
{
var388 = ((val*(*)(val* self))(var378->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var378); /* native_to_s on <var378:NativeArray[String]>*/
}
varonce377 = var378;
var_recv_ptr = var388;
}
if (likely(varonce389!=NULL)) {
var390 = varonce389;
} else {
var391 = "entry";
var392 = standard___standard__NativeString___to_s_with_length(var391, 5l);
var390 = var392;
varonce389 = var390;
}
{
var393 = nit___nit__AbstractCompilerVisitor___get_name(self, var390);
}
var_entry = var393;
if (unlikely(varonce394==NULL)) {
var395 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce396!=NULL)) {
var397 = varonce396;
} else {
var398 = "struct vts_entry ";
var399 = standard___standard__NativeString___to_s_with_length(var398, 17l);
var397 = var399;
varonce396 = var397;
}
((struct instance_standard__NativeArray*)var395)->values[0]=var397;
if (likely(varonce400!=NULL)) {
var401 = varonce400;
} else {
var402 = ";";
var403 = standard___standard__NativeString___to_s_with_length(var402, 1l);
var401 = var403;
varonce400 = var401;
}
((struct instance_standard__NativeArray*)var395)->values[2]=var401;
} else {
var395 = varonce394;
varonce394 = NULL;
}
((struct instance_standard__NativeArray*)var395)->values[1]=var_entry;
{
var404 = ((val*(*)(val* self))(var395->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var395); /* native_to_s on <var395:NativeArray[String]>*/
}
varonce394 = var395;
{
nit___nit__AbstractCompilerVisitor___add(self, var404); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var407 = var_mtype->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var407 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
}
var405 = var407;
RET_LABEL406:(void)0;
}
}
{
var408 = nit__separate_compiler___MEntity___const_color(var405);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var408); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce409==NULL)) {
var410 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce411!=NULL)) {
var412 = varonce411;
} else {
var413 = " = ";
var414 = standard___standard__NativeString___to_s_with_length(var413, 3l);
var412 = var414;
varonce411 = var412;
}
((struct instance_standard__NativeArray*)var410)->values[1]=var412;
if (likely(varonce415!=NULL)) {
var416 = varonce415;
} else {
var417 = "vts_table->vts[";
var418 = standard___standard__NativeString___to_s_with_length(var417, 15l);
var416 = var418;
varonce415 = var416;
}
((struct instance_standard__NativeArray*)var410)->values[3]=var416;
if (likely(varonce419!=NULL)) {
var420 = varonce419;
} else {
var421 = "];";
var422 = standard___standard__NativeString___to_s_with_length(var421, 2l);
var420 = var422;
varonce419 = var420;
}
((struct instance_standard__NativeArray*)var410)->values[5]=var420;
} else {
var410 = varonce409;
varonce409 = NULL;
}
((struct instance_standard__NativeArray*)var410)->values[0]=var_entry;
((struct instance_standard__NativeArray*)var410)->values[2]=var_recv_ptr;
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var425 = var_mtype->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var425 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
}
var423 = var425;
RET_LABEL424:(void)0;
}
}
{
var426 = nit__separate_compiler___MEntity___const_color(var423);
}
((struct instance_standard__NativeArray*)var410)->values[4]=var426;
{
var427 = ((val*(*)(val* self))(var410->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var410); /* native_to_s on <var410:NativeArray[String]>*/
}
varonce409 = var410;
{
nit___nit__AbstractCompilerVisitor___add(self, var427); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce428==NULL)) {
var429 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce430!=NULL)) {
var431 = varonce430;
} else {
var432 = " = ";
var433 = standard___standard__NativeString___to_s_with_length(var432, 3l);
var431 = var433;
varonce430 = var431;
}
((struct instance_standard__NativeArray*)var429)->values[1]=var431;
if (likely(varonce434!=NULL)) {
var435 = varonce434;
} else {
var436 = ".class->color;";
var437 = standard___standard__NativeString___to_s_with_length(var436, 14l);
var435 = var437;
varonce434 = var435;
}
((struct instance_standard__NativeArray*)var429)->values[3]=var435;
} else {
var429 = varonce428;
varonce428 = NULL;
}
((struct instance_standard__NativeArray*)var429)->values[0]=var_cltype;
((struct instance_standard__NativeArray*)var429)->values[2]=var_entry;
{
var438 = ((val*(*)(val* self))(var429->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var429); /* native_to_s on <var429:NativeArray[String]>*/
}
varonce428 = var429;
{
nit___nit__AbstractCompilerVisitor___add(self, var438); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce439==NULL)) {
var440 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = " = ";
var444 = standard___standard__NativeString___to_s_with_length(var443, 3l);
var442 = var444;
varonce441 = var442;
}
((struct instance_standard__NativeArray*)var440)->values[1]=var442;
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = ".class->id;";
var448 = standard___standard__NativeString___to_s_with_length(var447, 11l);
var446 = var448;
varonce445 = var446;
}
((struct instance_standard__NativeArray*)var440)->values[3]=var446;
} else {
var440 = varonce439;
varonce439 = NULL;
}
((struct instance_standard__NativeArray*)var440)->values[0]=var_idtype;
((struct instance_standard__NativeArray*)var440)->values[2]=var_entry;
{
var449 = ((val*(*)(val* self))(var440->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var440); /* native_to_s on <var440:NativeArray[String]>*/
}
varonce439 = var440;
{
nit___nit__AbstractCompilerVisitor___add(self, var449); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
var_451 = var_maybe_null;
if (var_maybe_null){
if (likely(varonce452!=NULL)) {
var453 = varonce452;
} else {
var454 = "0";
var455 = standard___standard__NativeString___to_s_with_length(var454, 1l);
var453 = var455;
varonce452 = var453;
}
{
var456 = ((short int(*)(val* self, val* p0))(var_accept_null->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_accept_null, var453); /* == on <var_accept_null:String>*/
}
var450 = var456;
} else {
var450 = var_451;
}
if (var450){
if (likely(varonce457!=NULL)) {
var458 = varonce457;
} else {
var459 = "is_nullable";
var460 = standard___standard__NativeString___to_s_with_length(var459, 11l);
var458 = var460;
varonce457 = var458;
}
{
var461 = nit___nit__AbstractCompilerVisitor___get_name(self, var458);
}
var_is_nullable = var461;
if (unlikely(varonce462==NULL)) {
var463 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce464!=NULL)) {
var465 = varonce464;
} else {
var466 = "short int ";
var467 = standard___standard__NativeString___to_s_with_length(var466, 10l);
var465 = var467;
varonce464 = var465;
}
((struct instance_standard__NativeArray*)var463)->values[0]=var465;
if (likely(varonce468!=NULL)) {
var469 = varonce468;
} else {
var470 = ";";
var471 = standard___standard__NativeString___to_s_with_length(var470, 1l);
var469 = var471;
varonce468 = var469;
}
((struct instance_standard__NativeArray*)var463)->values[2]=var469;
} else {
var463 = varonce462;
varonce462 = NULL;
}
((struct instance_standard__NativeArray*)var463)->values[1]=var_is_nullable;
{
var472 = ((val*(*)(val* self))(var463->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var463); /* native_to_s on <var463:NativeArray[String]>*/
}
varonce462 = var463;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var472); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce473==NULL)) {
var474 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce475!=NULL)) {
var476 = varonce475;
} else {
var477 = " = ";
var478 = standard___standard__NativeString___to_s_with_length(var477, 3l);
var476 = var478;
varonce475 = var476;
}
((struct instance_standard__NativeArray*)var474)->values[1]=var476;
if (likely(varonce479!=NULL)) {
var480 = varonce479;
} else {
var481 = ".is_nullable;";
var482 = standard___standard__NativeString___to_s_with_length(var481, 13l);
var480 = var482;
varonce479 = var480;
}
((struct instance_standard__NativeArray*)var474)->values[3]=var480;
} else {
var474 = varonce473;
varonce473 = NULL;
}
((struct instance_standard__NativeArray*)var474)->values[0]=var_is_nullable;
((struct instance_standard__NativeArray*)var474)->values[2]=var_entry;
{
var483 = ((val*(*)(val* self))(var474->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var474); /* native_to_s on <var474:NativeArray[String]>*/
}
varonce473 = var474;
{
nit___nit__AbstractCompilerVisitor___add(self, var483); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
{
var484 = standard___standard__String___Object__to_s(var_is_nullable);
}
var_accept_null = var484;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var487 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var487 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var485 = var487;
RET_LABEL486:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var485) on <var485:AbstractCompiler(SeparateCompiler)> */
var490 = var485->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var485:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var490 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var488 = var490;
RET_LABEL489:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var488) on <var488:ModelBuilder> */
var493 = var488->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var488:ModelBuilder> */
if (unlikely(var493 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var491 = var493;
RET_LABEL492:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var491) on <var491:ToolContext> */
var496 = var491->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var491:ToolContext> */
if (unlikely(var496 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
fatal_exit(1);
}
var494 = var496;
RET_LABEL495:(void)0;
}
}
{
{ /* Inline opts#Option#value (var494) on <var494:OptionBool> */
var499 = var494->attrs[COLOR_opts__Option___value].val; /* _value on <var494:OptionBool> */
var497 = var499;
RET_LABEL498:(void)0;
}
}
var500 = (short int)((long)(var497)>>2);
if (var500){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var503 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var503 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var501 = var503;
RET_LABEL502:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (var501) on <var501:AbstractCompiler(SeparateCompiler)> */
var506 = var501->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <var501:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var506 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1016);
fatal_exit(1);
}
var504 = var506;
RET_LABEL505:(void)0;
}
}
var_507 = var504;
var_508 = var_tag;
{
var509 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_507, var_508);
}
{
{ /* Inline kernel#Int#+ (var509,1l) on <var509:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var512 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var512)) {
var_class_name515 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name515);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var516 = (long)(var509)>>2;
var517 = var516 + 1l;
var510 = var517;
goto RET_LABEL511;
RET_LABEL511:(void)0;
}
}
{
var518 = (val*)(var510<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_507, var_508, var518); /* Direct call hash_collection#HashMap#[]= on <var_507:HashMap[String, Int]>*/
}
if (unlikely(varonce519==NULL)) {
var520 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce521!=NULL)) {
var522 = varonce521;
} else {
var523 = "count_type_test_unresolved_";
var524 = standard___standard__NativeString___to_s_with_length(var523, 27l);
var522 = var524;
varonce521 = var522;
}
((struct instance_standard__NativeArray*)var520)->values[0]=var522;
if (likely(varonce525!=NULL)) {
var526 = varonce525;
} else {
var527 = "++;";
var528 = standard___standard__NativeString___to_s_with_length(var527, 3l);
var526 = var528;
varonce525 = var526;
}
((struct instance_standard__NativeArray*)var520)->values[2]=var526;
} else {
var520 = varonce519;
varonce519 = NULL;
}
((struct instance_standard__NativeArray*)var520)->values[1]=var_tag;
{
var529 = ((val*(*)(val* self))(var520->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var520); /* native_to_s on <var520:NativeArray[String]>*/
}
varonce519 = var520;
{
nit___nit__AbstractCompilerVisitor___add(self, var529); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
} else {
if (unlikely(varonce530==NULL)) {
var531 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce532!=NULL)) {
var533 = varonce532;
} else {
var534 = "type_test(";
var535 = standard___standard__NativeString___to_s_with_length(var534, 10l);
var533 = var535;
varonce532 = var533;
}
((struct instance_standard__NativeArray*)var531)->values[0]=var533;
if (likely(varonce536!=NULL)) {
var537 = varonce536;
} else {
var538 = ", ";
var539 = standard___standard__NativeString___to_s_with_length(var538, 2l);
var537 = var539;
varonce536 = var537;
}
((struct instance_standard__NativeArray*)var531)->values[2]=var537;
if (likely(varonce540!=NULL)) {
var541 = varonce540;
} else {
var542 = ")";
var543 = standard___standard__NativeString___to_s_with_length(var542, 1l);
var541 = var543;
varonce540 = var541;
}
((struct instance_standard__NativeArray*)var531)->values[4]=var541;
} else {
var531 = varonce530;
varonce530 = NULL;
}
{
var544 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
((struct instance_standard__NativeArray*)var531)->values[1]=var544;
{
var545 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var531)->values[3]=var545;
{
var546 = ((val*(*)(val* self))(var531->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var531); /* native_to_s on <var531:NativeArray[String]>*/
}
varonce530 = var531;
{
nit___nit__AbstractCompilerVisitor___debug(self, var546); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateErasureCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 582);
fatal_exit(1);
}
}
if (var_maybe_null){
if (unlikely(varonce547==NULL)) {
var548 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce549!=NULL)) {
var550 = varonce549;
} else {
var551 = "if(";
var552 = standard___standard__NativeString___to_s_with_length(var551, 3l);
var550 = var552;
varonce549 = var550;
}
((struct instance_standard__NativeArray*)var548)->values[0]=var550;
if (likely(varonce553!=NULL)) {
var554 = varonce553;
} else {
var555 = " == NULL) {";
var556 = standard___standard__NativeString___to_s_with_length(var555, 11l);
var554 = var556;
varonce553 = var554;
}
((struct instance_standard__NativeArray*)var548)->values[2]=var554;
} else {
var548 = varonce547;
varonce547 = NULL;
}
{
var557 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var548)->values[1]=var557;
{
var558 = ((val*(*)(val* self))(var548->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var548); /* native_to_s on <var548:NativeArray[String]>*/
}
varonce547 = var548;
{
nit___nit__AbstractCompilerVisitor___add(self, var558); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce559==NULL)) {
var560 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce561!=NULL)) {
var562 = varonce561;
} else {
var563 = " = ";
var564 = standard___standard__NativeString___to_s_with_length(var563, 3l);
var562 = var564;
varonce561 = var562;
}
((struct instance_standard__NativeArray*)var560)->values[1]=var562;
if (likely(varonce565!=NULL)) {
var566 = varonce565;
} else {
var567 = ";";
var568 = standard___standard__NativeString___to_s_with_length(var567, 1l);
var566 = var568;
varonce565 = var566;
}
((struct instance_standard__NativeArray*)var560)->values[3]=var566;
} else {
var560 = varonce559;
varonce559 = NULL;
}
{
var569 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var560)->values[0]=var569;
((struct instance_standard__NativeArray*)var560)->values[2]=var_accept_null;
{
var570 = ((val*(*)(val* self))(var560->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var560); /* native_to_s on <var560:NativeArray[String]>*/
}
varonce559 = var560;
{
nit___nit__AbstractCompilerVisitor___add(self, var570); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce571!=NULL)) {
var572 = varonce571;
} else {
var573 = "} else {";
var574 = standard___standard__NativeString___to_s_with_length(var573, 8l);
var572 = var574;
varonce571 = var572;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var572); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce575==NULL)) {
var576 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce577!=NULL)) {
var578 = varonce577;
} else {
var579 = "if(";
var580 = standard___standard__NativeString___to_s_with_length(var579, 3l);
var578 = var580;
varonce577 = var578;
}
((struct instance_standard__NativeArray*)var576)->values[0]=var578;
if (likely(varonce581!=NULL)) {
var582 = varonce581;
} else {
var583 = " >= ";
var584 = standard___standard__NativeString___to_s_with_length(var583, 4l);
var582 = var584;
varonce581 = var582;
}
((struct instance_standard__NativeArray*)var576)->values[2]=var582;
if (likely(varonce585!=NULL)) {
var586 = varonce585;
} else {
var587 = "type_table->size) {";
var588 = standard___standard__NativeString___to_s_with_length(var587, 19l);
var586 = var588;
varonce585 = var586;
}
((struct instance_standard__NativeArray*)var576)->values[4]=var586;
} else {
var576 = varonce575;
varonce575 = NULL;
}
((struct instance_standard__NativeArray*)var576)->values[1]=var_cltype;
((struct instance_standard__NativeArray*)var576)->values[3]=var_class_ptr;
{
var589 = ((val*(*)(val* self))(var576->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var576); /* native_to_s on <var576:NativeArray[String]>*/
}
varonce575 = var576;
{
nit___nit__AbstractCompilerVisitor___add(self, var589); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce590==NULL)) {
var591 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce592!=NULL)) {
var593 = varonce592;
} else {
var594 = " = 0;";
var595 = standard___standard__NativeString___to_s_with_length(var594, 5l);
var593 = var595;
varonce592 = var593;
}
((struct instance_standard__NativeArray*)var591)->values[1]=var593;
} else {
var591 = varonce590;
varonce590 = NULL;
}
{
var596 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var591)->values[0]=var596;
{
var597 = ((val*(*)(val* self))(var591->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var591); /* native_to_s on <var591:NativeArray[String]>*/
}
varonce590 = var591;
{
nit___nit__AbstractCompilerVisitor___add(self, var597); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce598!=NULL)) {
var599 = varonce598;
} else {
var600 = "} else {";
var601 = standard___standard__NativeString___to_s_with_length(var600, 8l);
var599 = var601;
varonce598 = var599;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var599); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce602==NULL)) {
var603 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce604!=NULL)) {
var605 = varonce604;
} else {
var606 = " = ";
var607 = standard___standard__NativeString___to_s_with_length(var606, 3l);
var605 = var607;
varonce604 = var605;
}
((struct instance_standard__NativeArray*)var603)->values[1]=var605;
if (likely(varonce608!=NULL)) {
var609 = varonce608;
} else {
var610 = "type_table->table[";
var611 = standard___standard__NativeString___to_s_with_length(var610, 18l);
var609 = var611;
varonce608 = var609;
}
((struct instance_standard__NativeArray*)var603)->values[3]=var609;
if (likely(varonce612!=NULL)) {
var613 = varonce612;
} else {
var614 = "] == ";
var615 = standard___standard__NativeString___to_s_with_length(var614, 5l);
var613 = var615;
varonce612 = var613;
}
((struct instance_standard__NativeArray*)var603)->values[5]=var613;
if (likely(varonce616!=NULL)) {
var617 = varonce616;
} else {
var618 = ";";
var619 = standard___standard__NativeString___to_s_with_length(var618, 1l);
var617 = var619;
varonce616 = var617;
}
((struct instance_standard__NativeArray*)var603)->values[7]=var617;
} else {
var603 = varonce602;
varonce602 = NULL;
}
{
var620 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var603)->values[0]=var620;
((struct instance_standard__NativeArray*)var603)->values[2]=var_class_ptr;
((struct instance_standard__NativeArray*)var603)->values[4]=var_cltype;
((struct instance_standard__NativeArray*)var603)->values[6]=var_idtype;
{
var621 = ((val*(*)(val* self))(var603->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var603); /* native_to_s on <var603:NativeArray[String]>*/
}
varonce602 = var603;
{
nit___nit__AbstractCompilerVisitor___add(self, var621); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce622!=NULL)) {
var623 = varonce622;
} else {
var624 = "}";
var625 = standard___standard__NativeString___to_s_with_length(var624, 1l);
var623 = var625;
varonce622 = var623;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var623); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (var_maybe_null){
if (likely(varonce626!=NULL)) {
var627 = varonce626;
} else {
var628 = "}";
var629 = standard___standard__NativeString___to_s_with_length(var628, 1l);
var627 = var629;
varonce626 = var627;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var627); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
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
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
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
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : MType */;
val* var63 /* : MType */;
val* var64 /* : String */;
val* var65 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nit__model___standard__Sys___extern_kind(var10);
}
{
{ /* Inline kernel#Object#== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
var16 = var7 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "NativeString";
var26 = standard___standard__NativeString___to_s_with_length(var25, 12l);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel#Object#!= (var21,var24) on <var21:String> */
var_other29 = var24;
{
var30 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var_other29); /* == on <var21:String>*/
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = " = ((struct instance_";
var45 = standard___standard__NativeString___to_s_with_length(var44, 21l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[1]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "*)";
var49 = standard___standard__NativeString___to_s_with_length(var48, 2l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var41)->values[3]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ")->value; /* unboxing ";
var53 = standard___standard__NativeString___to_s_with_length(var52, 22l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var41)->values[5]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " */";
var57 = standard___standard__NativeString___to_s_with_length(var56, 3l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var41)->values[7]=var55;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var58 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var41)->values[0]=var58;
{
var59 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_standard__NativeArray*)var41)->values[2]=var59;
{
var60 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var41)->values[4]=var60;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var63 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = ((val*(*)(val* self))(var61->class->vft[COLOR_standard__string__Object__to_s]))(var61); /* to_s on <var61:MType>*/
}
((struct instance_standard__NativeArray*)var41)->values[6]=var64;
{
var65 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nit___nit__AbstractCompilerVisitor___add(self, var65); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
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
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
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
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
val* var53 /* : AbstractCompiler */;
val* var55 /* : AbstractCompiler */;
val* var56 /* : nullable RapidTypeAnalysis */;
val* var58 /* : nullable RapidTypeAnalysis */;
val* var59 /* : HashSet[MClassType] */;
val* var61 /* : HashSet[MClassType] */;
val* var62 /* : MType */;
val* var64 /* : MType */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var84 /* : MType */;
val* var86 /* : MType */;
val* var87 /* : String */;
val* var88 /* : MType */;
val* var90 /* : MType */;
val* var91 /* : String */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var98 /* : NativeArray[String] */;
static val* varonce97;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var106 /* : NativeArray[String] */;
static val* varonce105;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : FlatString */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : MType */;
val* var128 /* : MType */;
val* var129 /* : String */;
val* var130 /* : String */;
val* var132 /* : NativeArray[String] */;
static val* varonce131;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
val* var137 /* : String */;
val* var138 /* : String */;
val* var140 /* : NativeArray[String] */;
static val* varonce139;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
val* var144 /* : FlatString */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
val* var148 /* : FlatString */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nit__model___standard__Sys___extern_kind(var10);
}
{
{ /* Inline kernel#Object#== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
var16 = var7 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "NativeString";
var26 = standard___standard__NativeString___to_s_with_length(var25, 12l);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel#Object#!= (var21,var24) on <var21:String> */
var_other29 = var24;
{
var30 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var_other29); /* == on <var21:String>*/
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
if (var44 == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var44,((val*)NULL)) on <var44:nullable RapidTypeAnalysis> */
var_other29 = ((val*)NULL);
{
var50 = ((short int(*)(val* self, val* p0))(var44->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var44, var_other29); /* == on <var44:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var51 = !var50;
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
var_52 = var47;
if (var47){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateErasureCompilerVisitor> */
var55 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateErasureCompilerVisitor> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var53) on <var53:AbstractCompiler(SeparateCompiler)> */
var58 = var53->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var53:AbstractCompiler(SeparateCompiler)> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 622);
fatal_exit(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var56) on <var56:nullable RapidTypeAnalysis> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var61 = var56->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var56:nullable RapidTypeAnalysis> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var64 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
/* <var62:MType> isa MClassType */
cltype66 = type_nit__MClassType.color;
idtype67 = type_nit__MClassType.id;
if(cltype66 >= var62->type->table_size) {
var65 = 0;
} else {
var65 = var62->type->type_table[cltype66] == idtype67;
}
if (unlikely(!var65)) {
var_class_name = var62 == NULL ? "null" : var62->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 622);
fatal_exit(1);
}
{
var68 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var59, var62);
}
var69 = !var68;
var40 = var69;
} else {
var40 = var_52;
}
if (var40){
if (unlikely(varonce70==NULL)) {
var71 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "/*no boxing of ";
var75 = standard___standard__NativeString___to_s_with_length(var74, 15l);
var73 = var75;
varonce72 = var73;
}
((struct instance_standard__NativeArray*)var71)->values[0]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = ": ";
var79 = standard___standard__NativeString___to_s_with_length(var78, 2l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var71)->values[2]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = " is not live! */";
var83 = standard___standard__NativeString___to_s_with_length(var82, 16l);
var81 = var83;
varonce80 = var81;
}
((struct instance_standard__NativeArray*)var71)->values[4]=var81;
} else {
var71 = varonce70;
varonce70 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var86 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = ((val*(*)(val* self))(var84->class->vft[COLOR_standard__string__Object__to_s]))(var84); /* to_s on <var84:MType>*/
}
((struct instance_standard__NativeArray*)var71)->values[1]=var87;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var90 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = ((val*(*)(val* self))(var88->class->vft[COLOR_standard__string__Object__to_s]))(var88); /* to_s on <var88:MType>*/
}
((struct instance_standard__NativeArray*)var71)->values[3]=var91;
{
var92 = ((val*(*)(val* self))(var71->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
nit___nit__AbstractCompilerVisitor___add(self, var92); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "PRINT_ERROR(\"Dead code executed!\\n\"); fatal_exit(1);";
var96 = standard___standard__NativeString___to_s_with_length(var95, 52l);
var94 = var96;
varonce93 = var94;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var94); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce97==NULL)) {
var98 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "BOX_";
var102 = standard___standard__NativeString___to_s_with_length(var101, 4l);
var100 = var102;
varonce99 = var100;
}
((struct instance_standard__NativeArray*)var98)->values[0]=var100;
} else {
var98 = varonce97;
varonce97 = NULL;
}
{
var103 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var98)->values[1]=var103;
{
var104 = ((val*(*)(val* self))(var98->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var98); /* native_to_s on <var98:NativeArray[String]>*/
}
varonce97 = var98;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var104); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce105==NULL)) {
var106 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = " = BOX_";
var110 = standard___standard__NativeString___to_s_with_length(var109, 7l);
var108 = var110;
varonce107 = var108;
}
((struct instance_standard__NativeArray*)var106)->values[1]=var108;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "(";
var114 = standard___standard__NativeString___to_s_with_length(var113, 1l);
var112 = var114;
varonce111 = var112;
}
((struct instance_standard__NativeArray*)var106)->values[3]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "); /* boxing ";
var118 = standard___standard__NativeString___to_s_with_length(var117, 13l);
var116 = var118;
varonce115 = var116;
}
((struct instance_standard__NativeArray*)var106)->values[5]=var116;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = " */";
var122 = standard___standard__NativeString___to_s_with_length(var121, 3l);
var120 = var122;
varonce119 = var120;
}
((struct instance_standard__NativeArray*)var106)->values[7]=var120;
} else {
var106 = varonce105;
varonce105 = NULL;
}
{
var123 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var106)->values[0]=var123;
{
var124 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var106)->values[2]=var124;
{
var125 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var106)->values[4]=var125;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var128 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = ((val*(*)(val* self))(var126->class->vft[COLOR_standard__string__Object__to_s]))(var126); /* to_s on <var126:MType>*/
}
((struct instance_standard__NativeArray*)var106)->values[6]=var129;
{
var130 = ((val*(*)(val* self))(var106->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var106); /* native_to_s on <var106:NativeArray[String]>*/
}
varonce105 = var106;
{
nit___nit__AbstractCompilerVisitor___add(self, var130); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce131==NULL)) {
var132 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "class_";
var136 = standard___standard__NativeString___to_s_with_length(var135, 6l);
var134 = var136;
varonce133 = var134;
}
((struct instance_standard__NativeArray*)var132)->values[0]=var134;
} else {
var132 = varonce131;
varonce131 = NULL;
}
{
var137 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var132)->values[1]=var137;
{
var138 = ((val*(*)(val* self))(var132->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var132); /* native_to_s on <var132:NativeArray[String]>*/
}
varonce131 = var132;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var138); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce139==NULL)) {
var140 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "->class = &class_";
var144 = standard___standard__NativeString___to_s_with_length(var143, 17l);
var142 = var144;
varonce141 = var142;
}
((struct instance_standard__NativeArray*)var140)->values[1]=var142;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = ";";
var148 = standard___standard__NativeString___to_s_with_length(var147, 1l);
var146 = var148;
varonce145 = var146;
}
((struct instance_standard__NativeArray*)var140)->values[3]=var146;
} else {
var140 = varonce139;
varonce139 = NULL;
}
{
var149 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var140)->values[0]=var149;
{
var150 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var140)->values[2]=var150;
{
var151 = ((val*(*)(val* self))(var140->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var140); /* native_to_s on <var140:NativeArray[String]>*/
}
varonce139 = var140;
{
nit___nit__AbstractCompilerVisitor___add(self, var151); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
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
val* var3 /* : FlatString */;
val* var4 /* : String */;
val* var_res /* var res: String */;
val* var6 /* : NativeArray[String] */;
static val* varonce5;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var16 /* : MType */;
val* var18 /* : MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var22 /* : NativeArray[String] */;
static val* varonce21;
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
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var39 /* : NativeArray[String] */;
static val* varonce38;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : MType */;
val* var46 /* : MType */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var50 /* : NativeArray[String] */;
static val* varonce49;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
val* var59 /* : MType */;
val* var61 /* : MType */;
val* var62 /* : String */;
val* var63 /* : String */;
var_value = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "var_class_name";
var3 = standard___standard__NativeString___to_s_with_length(var2, 14l);
var1 = var3;
varonce = var1;
}
{
var4 = nit___nit__AbstractCompilerVisitor___get_name(self, var1);
}
var_res = var4;
if (unlikely(varonce5==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "const char* ";
var10 = standard___standard__NativeString___to_s_with_length(var9, 12l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ";";
var14 = standard___standard__NativeString___to_s_with_length(var13, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce5;
varonce5 = NULL;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var_res;
{
var15 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce5 = var6;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateErasureCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var18 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((short int(*)(val* self))(var16->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var16); /* is_c_primitive on <var16:MType>*/
}
var20 = !var19;
if (var20){
if (unlikely(varonce21==NULL)) {
var22 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " = ";
var26 = standard___standard__NativeString___to_s_with_length(var25, 3l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var22)->values[1]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " == NULL ? \"null\" : ";
var30 = standard___standard__NativeString___to_s_with_length(var29, 20l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var22)->values[3]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "->class->name;";
var34 = standard___standard__NativeString___to_s_with_length(var33, 14l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var22)->values[5]=var32;
} else {
var22 = varonce21;
varonce21 = NULL;
}
((struct instance_standard__NativeArray*)var22)->values[0]=var_res;
{
var35 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var22)->values[2]=var35;
{
var36 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var22)->values[4]=var36;
{
var37 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
{
nit___nit__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
}
} else {
if (unlikely(varonce38==NULL)) {
var39 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "class_";
var43 = standard___standard__NativeString___to_s_with_length(var42, 6l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var39)->values[0]=var41;
} else {
var39 = varonce38;
varonce38 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var46 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = ((val*(*)(val* self))(var44->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var44); /* c_name on <var44:MType>*/
}
((struct instance_standard__NativeArray*)var39)->values[1]=var47;
{
var48 = ((val*(*)(val* self))(var39->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce49==NULL)) {
var50 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = " = class_";
var54 = standard___standard__NativeString___to_s_with_length(var53, 9l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var50)->values[1]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = ".name;";
var58 = standard___standard__NativeString___to_s_with_length(var57, 6l);
var56 = var58;
varonce55 = var56;
}
((struct instance_standard__NativeArray*)var50)->values[3]=var56;
} else {
var50 = varonce49;
varonce49 = NULL;
}
((struct instance_standard__NativeArray*)var50)->values[0]=var_res;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var61 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = ((val*(*)(val* self))(var59->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var59); /* c_name on <var59:MType>*/
}
((struct instance_standard__NativeArray*)var50)->values[2]=var62;
{
var63 = ((val*(*)(val* self))(var50->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce49 = var50;
{
nit___nit__AbstractCompilerVisitor___add(self, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
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
val* var1 /* : MModule */;
val* var2 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var3 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var4 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var5 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
var_elttype = p0;
var_length = p1;
{
var1 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nit__model___MModule___native_array_class(var1);
}
var_nclass = var2;
var3 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___with_capacity(var3, 1l); /* Direct call array#Array#with_capacity on <var3:Array[MType]>*/
}
var_ = var3;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var4 = nit___nit__MClass___get_mtype(var_nclass, var_);
}
var_mtype = var4;
{
var5 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var5;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,1) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL6:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var7 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "NEW_";
var11 = standard___standard__NativeString___to_s_with_length(var10, 4l);
var9 = var11;
varonce8 = var9;
}
((struct instance_standard__NativeArray*)var7)->values[0]=var9;
} else {
var7 = varonce;
varonce = NULL;
}
{
var12 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
((struct instance_standard__NativeArray*)var7)->values[1]=var12;
{
var13 = ((val*(*)(val* self))(var7->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce14==NULL)) {
var15 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = " = NEW_";
var19 = standard___standard__NativeString___to_s_with_length(var18, 7l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[1]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "(";
var23 = standard___standard__NativeString___to_s_with_length(var22, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var15)->values[3]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = ");";
var27 = standard___standard__NativeString___to_s_with_length(var26, 2l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var15)->values[5]=var25;
} else {
var15 = varonce14;
varonce14 = NULL;
}
{
var28 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var15)->values[0]=var28;
{
var29 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
((struct instance_standard__NativeArray*)var15)->values[2]=var29;
{
var30 = ((val*(*)(val* self))(var_length->class->vft[COLOR_standard__string__Object__to_s]))(var_length); /* to_s on <var_length:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var15)->values[4]=var30;
{
var31 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
{
nit___nit__AbstractCompilerVisitor___add(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateErasureCompilerVisitor>*/
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
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var8 /* : MClass */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : MClass */;
val* var27 /* : MClass */;
val* var28 /* : String */;
val* var29 /* : nullable Object */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : RuntimeVariable */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_erasure_compiler, 663);
fatal_exit(1);
}
var_ret = var_ret_type;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "NEW_";
var5 = standard___standard__NativeString___to_s_with_length(var4, 4l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:MClassType> */
var8 = var_ret->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_ret:MClassType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit___nit__MClass___nit__model_base__MEntity__c_name(var6);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var9;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var10); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateErasureCompilerVisitor>*/
}
if (unlikely(varonce11==NULL)) {
var12 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "NEW_";
var16 = standard___standard__NativeString___to_s_with_length(var15, 4l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "(";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var12)->values[2]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = ")";
var24 = standard___standard__NativeString___to_s_with_length(var23, 1l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var12)->values[4]=var22;
} else {
var12 = varonce11;
varonce11 = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:MClassType> */
var27 = var_ret->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_ret:MClassType> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nit___nit__MClass___nit__model_base__MEntity__c_name(var25);
}
((struct instance_standard__NativeArray*)var12)->values[1]=var28;
{
var29 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__Object__to_s]))(var29); /* to_s on <var29:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var12)->values[3]=var30;
{
var31 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
var32 = nit___nit__AbstractCompilerVisitor___new_expr(self, var31, var_ret_type);
}
{
nit___nit__AbstractCompilerVisitor___ret(self, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateErasureCompilerVisitor>*/
}
RET_LABEL:;
}
