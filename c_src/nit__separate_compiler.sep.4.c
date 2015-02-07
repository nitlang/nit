#include "nit__separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompilerVisitor#type_test for (self: SeparateCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
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
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var23 /* : nullable StaticFrame */;
val* var25 /* : nullable StaticFrame */;
val* var26 /* : Array[RuntimeVariable] */;
val* var28 /* : Array[RuntimeVariable] */;
val* var29 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var30 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var31 /* : MClassType */;
val* var32 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var_cltype /* var cltype: String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : String */;
val* var_idtype /* var idtype: String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
short int var73 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var_accept_null /* var accept_null: String */;
val* var_ntype /* var ntype: MType */;
short int var79 /* : Bool */;
int cltype;
int idtype;
val* var80 /* : MType */;
val* var82 /* : MType */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
val* var88 /* : MType */;
val* var90 /* : MType */;
val* var91 /* : nullable StaticFrame */;
val* var93 /* : nullable StaticFrame */;
val* var94 /* : MPropDef */;
val* var96 /* : MPropDef */;
val* var97 /* : MClassDef */;
val* var99 /* : MClassDef */;
val* var100 /* : MModule */;
val* var102 /* : MModule */;
val* var103 /* : nullable StaticFrame */;
val* var105 /* : nullable StaticFrame */;
val* var106 /* : MPropDef */;
val* var108 /* : MPropDef */;
val* var109 /* : MClassDef */;
val* var111 /* : MClassDef */;
val* var112 /* : MClassType */;
val* var114 /* : MClassType */;
short int var115 /* : Bool */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : FlatString */;
val* var132 /* : Array[Object] */;
long var133 /* : Int */;
val* var134 /* : NativeArray[Object] */;
val* var135 /* : String */;
val* var136 /* : ModelBuilder */;
val* var138 /* : ModelBuilder */;
val* var139 /* : ToolContext */;
val* var141 /* : ToolContext */;
val* var142 /* : OptionBool */;
val* var144 /* : OptionBool */;
val* var145 /* : nullable Object */;
val* var147 /* : nullable Object */;
short int var148 /* : Bool */;
val* var149 /* : AbstractCompiler */;
val* var151 /* : AbstractCompiler */;
val* var152 /* : HashMap[String, Int] */;
val* var154 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
val* var_155 /* var : String */;
val* var156 /* : nullable Object */;
long var157 /* : Int */;
long var158 /* : Int */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
const char* var_class_name;
long var163 /* : Int */;
long var164 /* : Int */;
val* var165 /* : nullable Object */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : FlatString */;
val* var176 /* : Array[Object] */;
long var177 /* : Int */;
val* var178 /* : NativeArray[Object] */;
val* var179 /* : String */;
short int var180 /* : Bool */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
val* var186 /* : String */;
val* var_type_struct /* var type_struct: String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
val* var197 /* : Array[Object] */;
long var198 /* : Int */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : String */;
val* var201 /* : nullable StaticFrame */;
val* var203 /* : nullable StaticFrame */;
val* var204 /* : MPropDef */;
val* var206 /* : MPropDef */;
val* var207 /* : MClassDef */;
val* var209 /* : MClassDef */;
val* var210 /* : String */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : FlatString */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : FlatString */;
val* var221 /* : String */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : FlatString */;
val* var227 /* : Array[Object] */;
long var228 /* : Int */;
val* var229 /* : NativeArray[Object] */;
val* var230 /* : String */;
val* var231 /* : ModelBuilder */;
val* var233 /* : ModelBuilder */;
val* var234 /* : ToolContext */;
val* var236 /* : ToolContext */;
val* var237 /* : OptionBool */;
val* var239 /* : OptionBool */;
val* var240 /* : nullable Object */;
val* var242 /* : nullable Object */;
short int var243 /* : Bool */;
val* var244 /* : AbstractCompiler */;
val* var246 /* : AbstractCompiler */;
val* var247 /* : HashMap[String, Int] */;
val* var249 /* : HashMap[String, Int] */;
val* var_250 /* var : HashMap[String, Int] */;
val* var_251 /* var : String */;
val* var252 /* : nullable Object */;
long var253 /* : Int */;
long var254 /* : Int */;
short int var256 /* : Bool */;
int cltype257;
int idtype258;
const char* var_class_name259;
long var260 /* : Int */;
long var261 /* : Int */;
val* var262 /* : nullable Object */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
long var266 /* : Int */;
val* var267 /* : FlatString */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : FlatString */;
val* var273 /* : Array[Object] */;
long var274 /* : Int */;
val* var275 /* : NativeArray[Object] */;
val* var276 /* : String */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
long var280 /* : Int */;
val* var281 /* : FlatString */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
val* var287 /* : Array[Object] */;
long var288 /* : Int */;
val* var289 /* : NativeArray[Object] */;
val* var290 /* : String */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : FlatString */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
long var299 /* : Int */;
val* var300 /* : FlatString */;
val* var301 /* : Array[Object] */;
long var302 /* : Int */;
val* var303 /* : NativeArray[Object] */;
val* var304 /* : String */;
short int var305 /* : Bool */;
short int var_306 /* var : Bool */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
long var310 /* : Int */;
val* var311 /* : FlatString */;
short int var312 /* : Bool */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : FlatString */;
val* var318 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
long var322 /* : Int */;
val* var323 /* : FlatString */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : FlatString */;
val* var329 /* : Array[Object] */;
long var330 /* : Int */;
val* var331 /* : NativeArray[Object] */;
val* var332 /* : String */;
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
val* var343 /* : Array[Object] */;
long var344 /* : Int */;
val* var345 /* : NativeArray[Object] */;
val* var346 /* : String */;
val* var347 /* : String */;
short int var348 /* : Bool */;
int cltype349;
int idtype350;
val* var351 /* : Set[MType] */;
val* var353 /* : Set[MType] */;
static val* varonce354;
val* var355 /* : String */;
char* var356 /* : NativeString */;
long var357 /* : Int */;
val* var358 /* : FlatString */;
val* var359 /* : String */;
val* var360 /* : Array[Object] */;
long var361 /* : Int */;
val* var362 /* : NativeArray[Object] */;
val* var363 /* : String */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
long var367 /* : Int */;
val* var368 /* : FlatString */;
val* var369 /* : String */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : FlatString */;
val* var375 /* : Array[Object] */;
long var376 /* : Int */;
val* var377 /* : NativeArray[Object] */;
val* var378 /* : String */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
long var382 /* : Int */;
val* var383 /* : FlatString */;
val* var384 /* : String */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : NativeString */;
long var388 /* : Int */;
val* var389 /* : FlatString */;
val* var390 /* : Array[Object] */;
long var391 /* : Int */;
val* var392 /* : NativeArray[Object] */;
val* var393 /* : String */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : FlatString */;
val* var399 /* : String */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
long var403 /* : Int */;
val* var404 /* : FlatString */;
val* var405 /* : Array[Object] */;
long var406 /* : Int */;
val* var407 /* : NativeArray[Object] */;
val* var408 /* : String */;
val* var409 /* : ModelBuilder */;
val* var411 /* : ModelBuilder */;
val* var412 /* : ToolContext */;
val* var414 /* : ToolContext */;
val* var415 /* : OptionBool */;
val* var417 /* : OptionBool */;
val* var418 /* : nullable Object */;
val* var420 /* : nullable Object */;
short int var421 /* : Bool */;
val* var422 /* : AbstractCompiler */;
val* var424 /* : AbstractCompiler */;
val* var425 /* : HashMap[String, Int] */;
val* var427 /* : HashMap[String, Int] */;
val* var_428 /* var : HashMap[String, Int] */;
val* var_429 /* var : String */;
val* var430 /* : nullable Object */;
long var431 /* : Int */;
long var432 /* : Int */;
short int var434 /* : Bool */;
int cltype435;
int idtype436;
const char* var_class_name437;
long var438 /* : Int */;
long var439 /* : Int */;
val* var440 /* : nullable Object */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
long var444 /* : Int */;
val* var445 /* : FlatString */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
long var449 /* : Int */;
val* var450 /* : FlatString */;
val* var451 /* : Array[Object] */;
long var452 /* : Int */;
val* var453 /* : NativeArray[Object] */;
val* var454 /* : String */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
long var458 /* : Int */;
val* var459 /* : FlatString */;
static val* varonce460;
val* var461 /* : String */;
char* var462 /* : NativeString */;
long var463 /* : Int */;
val* var464 /* : FlatString */;
val* var465 /* : String */;
static val* varonce466;
val* var467 /* : String */;
char* var468 /* : NativeString */;
long var469 /* : Int */;
val* var470 /* : FlatString */;
val* var471 /* : Array[Object] */;
long var472 /* : Int */;
val* var473 /* : NativeArray[Object] */;
val* var474 /* : String */;
static val* varonce475;
val* var476 /* : String */;
char* var477 /* : NativeString */;
long var478 /* : Int */;
val* var479 /* : FlatString */;
static val* varonce480;
val* var481 /* : String */;
char* var482 /* : NativeString */;
long var483 /* : Int */;
val* var484 /* : FlatString */;
val* var485 /* : Array[Object] */;
long var486 /* : Int */;
val* var487 /* : NativeArray[Object] */;
val* var488 /* : String */;
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
val* var499 /* : Array[Object] */;
long var500 /* : Int */;
val* var501 /* : NativeArray[Object] */;
val* var502 /* : String */;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : NativeString */;
long var506 /* : Int */;
val* var507 /* : FlatString */;
val* var508 /* : String */;
val* var_value_type_info /* var value_type_info: String */;
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
val* var524 /* : Array[Object] */;
long var525 /* : Int */;
val* var526 /* : NativeArray[Object] */;
val* var527 /* : String */;
static val* varonce528;
val* var529 /* : String */;
char* var530 /* : NativeString */;
long var531 /* : Int */;
val* var532 /* : FlatString */;
val* var533 /* : Array[Object] */;
long var534 /* : Int */;
val* var535 /* : NativeArray[Object] */;
val* var536 /* : String */;
static val* varonce537;
val* var538 /* : String */;
char* var539 /* : NativeString */;
long var540 /* : Int */;
val* var541 /* : FlatString */;
static val* varonce542;
val* var543 /* : String */;
char* var544 /* : NativeString */;
long var545 /* : Int */;
val* var546 /* : FlatString */;
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
static val* varonce557;
val* var558 /* : String */;
char* var559 /* : NativeString */;
long var560 /* : Int */;
val* var561 /* : FlatString */;
val* var562 /* : Array[Object] */;
long var563 /* : Int */;
val* var564 /* : NativeArray[Object] */;
val* var565 /* : String */;
static val* varonce566;
val* var567 /* : String */;
char* var568 /* : NativeString */;
long var569 /* : Int */;
val* var570 /* : FlatString */;
static val* varonce571;
val* var572 /* : String */;
char* var573 /* : NativeString */;
long var574 /* : Int */;
val* var575 /* : FlatString */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "/* ";
var3 = 3;
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
nit___nit__AbstractCompilerVisitor___add(self, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var22 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_compiler = var20;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1473);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var23) on <var23:nullable StaticFrame> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var28 = var23->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var23:nullable StaticFrame> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = standard___standard__SequenceRead___Collection__first(var26);
}
var_recv = var29;
{
var30 = nit___nit__SeparateCompilerVisitor___type_info(self, var_recv);
}
var_recv_type_info = var30;
{
var31 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var32 = nit___nit__AbstractCompilerVisitor___new_var(self, var31);
}
var_res = var32;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "cltype";
var36 = 6;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
var38 = nit___nit__AbstractCompilerVisitor___get_name(self, var34);
}
var_cltype = var38;
if (varonce39) {
var40 = varonce39;
} else {
var41 = "int ";
var42 = 4;
var43 = standard___standard__NativeString___to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = ";";
var47 = 1;
var48 = standard___standard__NativeString___to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 3;
var51 = NEW_standard__NativeArray(var50, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var51)->values[0] = (val*) var40;
((struct instance_standard__NativeArray*)var51)->values[1] = (val*) var_cltype;
((struct instance_standard__NativeArray*)var51)->values[2] = (val*) var45;
{
((void (*)(val* self, val* p0, long p1))(var49->class->vft[COLOR_standard__array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
}
{
var52 = ((val* (*)(val* self))(var49->class->vft[COLOR_standard__string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "idtype";
var56 = 6;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
var58 = nit___nit__AbstractCompilerVisitor___get_name(self, var54);
}
var_idtype = var58;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "int ";
var62 = 4;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = ";";
var67 = 1;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_standard__NativeArray(var70, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var71)->values[0] = (val*) var60;
((struct instance_standard__NativeArray*)var71)->values[1] = (val*) var_idtype;
((struct instance_standard__NativeArray*)var71)->values[2] = (val*) var65;
{
((void (*)(val* self, val* p0, long p1))(var69->class->vft[COLOR_standard__array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val* self))(var69->class->vft[COLOR_standard__string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
var73 = nit___nit__SeparateCompilerVisitor___maybe_null(self, var_value);
}
var_maybe_null = var73;
if (varonce74) {
var75 = varonce74;
} else {
var76 = "0";
var77 = 1;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var_accept_null = var75;
var_ntype = var_mtype;
/* <var_ntype:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_ntype->type->table_size) {
var79 = 0;
} else {
var79 = var_ntype->type->type_table[cltype] == idtype;
}
if (var79){
{
{ /* Inline model#MNullableType#mtype (var_ntype) on <var_ntype:MType(MNullableType)> */
var82 = var_ntype->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_ntype:MType(MNullableType)> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_ntype = var80;
if (varonce83) {
var84 = varonce83;
} else {
var85 = "1";
var86 = 1;
var87 = standard___standard__NativeString___to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
var_accept_null = var84;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var90 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var93 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1491);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var91) on <var91:nullable StaticFrame> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var96 = var91->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var91:nullable StaticFrame> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var105 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (var103 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1491);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var103) on <var103:nullable StaticFrame> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var108 = var103->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var103:nullable StaticFrame> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var106) on <var106:MPropDef> */
var111 = var106->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var106:MPropDef> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var109) on <var109:MClassDef> */
var114 = var109->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var109:MClassDef> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
var115 = nit___nit__MType___is_subtype(var88, var100, var112, var_mtype);
}
if (var115){
if (varonce116) {
var117 = varonce116;
} else {
var118 = " = 1; /* easy ";
var119 = 14;
var120 = standard___standard__NativeString___to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
{
var121 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " isa ";
var125 = 5;
var126 = standard___standard__NativeString___to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = "*/";
var130 = 2;
var131 = standard___standard__NativeString___to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var132 = array_instance Array[Object] */
var133 = 6;
var134 = NEW_standard__NativeArray(var133, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var134)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var134)->values[1] = (val*) var117;
((struct instance_standard__NativeArray*)var134)->values[2] = (val*) var121;
((struct instance_standard__NativeArray*)var134)->values[3] = (val*) var123;
((struct instance_standard__NativeArray*)var134)->values[4] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var134)->values[5] = (val*) var128;
{
((void (*)(val* self, val* p0, long p1))(var132->class->vft[COLOR_standard__array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[Object]>*/;
}
}
{
var135 = ((val* (*)(val* self))(var132->class->vft[COLOR_standard__string__Object__to_s]))(var132) /* to_s on <var132:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var135); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var138 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var136) on <var136:ModelBuilder> */
var141 = var136->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var136:ModelBuilder> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var139) on <var139:ToolContext> */
var144 = var139->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var139:ToolContext> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline opts#Option#value (var142) on <var142:OptionBool> */
var147 = var142->attrs[COLOR_opts__Option___value].val; /* _value on <var142:OptionBool> */
var145 = var147;
RET_LABEL146:(void)0;
}
}
var148 = ((struct instance_standard__Bool*)var145)->value; /* autounbox from nullable Object to Bool */;
if (var148){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var151 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (var149) on <var149:AbstractCompiler(SeparateCompiler)> */
var154 = var149->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <var149:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 966);
show_backtrace(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
var_ = var152;
var_155 = var_tag;
{
var156 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_, var_155);
}
var157 = 1;
{
{ /* Inline kernel#Int#+ (var156,var157) on <var156:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var157:Int> isa OTHER */
/* <var157:Int> isa OTHER */
var160 = 1; /* easy <var157:Int> isa OTHER*/
if (unlikely(!var160)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var163 = ((struct instance_standard__Int*)var156)->value; /* autounbox from nullable Object to Int */;
var164 = var163 + var157;
var158 = var164;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
{
var165 = BOX_standard__Int(var158); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_, var_155, var165); /* Direct call hash_collection#HashMap#[]= on <var_:HashMap[String, Int]>*/
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = "count_type_test_skipped_";
var169 = 24;
var170 = standard___standard__NativeString___to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = "++;";
var174 = 3;
var175 = standard___standard__NativeString___to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
var176 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var176 = array_instance Array[Object] */
var177 = 3;
var178 = NEW_standard__NativeArray(var177, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var178)->values[0] = (val*) var167;
((struct instance_standard__NativeArray*)var178)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var178)->values[2] = (val*) var172;
{
((void (*)(val* self, val* p0, long p1))(var176->class->vft[COLOR_standard__array__Array__with_native]))(var176, var178, var177) /* with_native on <var176:Array[Object]>*/;
}
}
{
var179 = ((val* (*)(val* self))(var176->class->vft[COLOR_standard__string__Object__to_s]))(var176) /* to_s on <var176:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var179); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var180 = ((short int (*)(val* self))(var_ntype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_ntype) /* need_anchor on <var_ntype:MType>*/;
}
if (var180){
if (varonce181) {
var182 = varonce181;
} else {
var183 = "type_struct";
var184 = 11;
var185 = standard___standard__NativeString___to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
{
var186 = nit___nit__AbstractCompilerVisitor___get_name(self, var182);
}
var_type_struct = var186;
if (varonce187) {
var188 = varonce187;
} else {
var189 = "const struct type* ";
var190 = 19;
var191 = standard___standard__NativeString___to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = ";";
var195 = 1;
var196 = standard___standard__NativeString___to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
var197 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 3;
var199 = NEW_standard__NativeArray(var198, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var199)->values[0] = (val*) var188;
((struct instance_standard__NativeArray*)var199)->values[1] = (val*) var_type_struct;
((struct instance_standard__NativeArray*)var199)->values[2] = (val*) var193;
{
((void (*)(val* self, val* p0, long p1))(var197->class->vft[COLOR_standard__array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
}
}
{
var200 = ((val* (*)(val* self))(var197->class->vft[COLOR_standard__string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var200); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var203 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var201 = var203;
RET_LABEL202:(void)0;
}
}
if (var201 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1506);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var201) on <var201:nullable StaticFrame> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var206 = var201->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var201:nullable StaticFrame> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var204) on <var204:MPropDef> */
var209 = var204->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var204:MPropDef> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
nit___nit__SeparateCompilerVisitor___link_unresolved_type(self, var207, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
var210 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var210); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = " = ";
var214 = 3;
var215 = standard___standard__NativeString___to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = "->resolution_table->types[";
var219 = 26;
var220 = standard___standard__NativeString___to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
{
var221 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
if (varonce222) {
var223 = varonce222;
} else {
var224 = "];";
var225 = 2;
var226 = standard___standard__NativeString___to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
var227 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var227 = array_instance Array[Object] */
var228 = 6;
var229 = NEW_standard__NativeArray(var228, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var229)->values[0] = (val*) var_type_struct;
((struct instance_standard__NativeArray*)var229)->values[1] = (val*) var212;
((struct instance_standard__NativeArray*)var229)->values[2] = (val*) var_recv_type_info;
((struct instance_standard__NativeArray*)var229)->values[3] = (val*) var217;
((struct instance_standard__NativeArray*)var229)->values[4] = (val*) var221;
((struct instance_standard__NativeArray*)var229)->values[5] = (val*) var223;
{
((void (*)(val* self, val* p0, long p1))(var227->class->vft[COLOR_standard__array__Array__with_native]))(var227, var229, var228) /* with_native on <var227:Array[Object]>*/;
}
}
{
var230 = ((val* (*)(val* self))(var227->class->vft[COLOR_standard__string__Object__to_s]))(var227) /* to_s on <var227:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var230); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var233 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var231) on <var231:ModelBuilder> */
var236 = var231->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var231:ModelBuilder> */
if (unlikely(var236 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var234) on <var234:ToolContext> */
var239 = var234->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var234:ToolContext> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
show_backtrace(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
{ /* Inline opts#Option#value (var237) on <var237:OptionBool> */
var242 = var237->attrs[COLOR_opts__Option___value].val; /* _value on <var237:OptionBool> */
var240 = var242;
RET_LABEL241:(void)0;
}
}
var243 = ((struct instance_standard__Bool*)var240)->value; /* autounbox from nullable Object to Bool */;
if (var243){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var246 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (var244) on <var244:AbstractCompiler(SeparateCompiler)> */
var249 = var244->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <var244:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 965);
show_backtrace(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
var_250 = var247;
var_251 = var_tag;
{
var252 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_250, var_251);
}
var253 = 1;
{
{ /* Inline kernel#Int#+ (var252,var253) on <var252:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var253:Int> isa OTHER */
/* <var253:Int> isa OTHER */
var256 = 1; /* easy <var253:Int> isa OTHER*/
if (unlikely(!var256)) {
var_class_name259 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name259);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var260 = ((struct instance_standard__Int*)var252)->value; /* autounbox from nullable Object to Int */;
var261 = var260 + var253;
var254 = var261;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
}
{
var262 = BOX_standard__Int(var254); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_250, var_251, var262); /* Direct call hash_collection#HashMap#[]= on <var_250:HashMap[String, Int]>*/
}
if (varonce263) {
var264 = varonce263;
} else {
var265 = "count_type_test_unresolved_";
var266 = 27;
var267 = standard___standard__NativeString___to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = "++;";
var271 = 3;
var272 = standard___standard__NativeString___to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
var273 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var273 = array_instance Array[Object] */
var274 = 3;
var275 = NEW_standard__NativeArray(var274, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var275)->values[0] = (val*) var264;
((struct instance_standard__NativeArray*)var275)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var275)->values[2] = (val*) var269;
{
((void (*)(val* self, val* p0, long p1))(var273->class->vft[COLOR_standard__array__Array__with_native]))(var273, var275, var274) /* with_native on <var273:Array[Object]>*/;
}
}
{
var276 = ((val* (*)(val* self))(var273->class->vft[COLOR_standard__string__Object__to_s]))(var273) /* to_s on <var273:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var276); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
nit___nit__SeparateCompilerVisitor___hardening_cast_type(self, var_type_struct); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_cast_type on <self:SeparateCompilerVisitor>*/
}
if (varonce277) {
var278 = varonce277;
} else {
var279 = " = ";
var280 = 3;
var281 = standard___standard__NativeString___to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = "->color;";
var285 = 8;
var286 = standard___standard__NativeString___to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
var287 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var287 = array_instance Array[Object] */
var288 = 4;
var289 = NEW_standard__NativeArray(var288, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var289)->values[0] = (val*) var_cltype;
((struct instance_standard__NativeArray*)var289)->values[1] = (val*) var278;
((struct instance_standard__NativeArray*)var289)->values[2] = (val*) var_type_struct;
((struct instance_standard__NativeArray*)var289)->values[3] = (val*) var283;
{
((void (*)(val* self, val* p0, long p1))(var287->class->vft[COLOR_standard__array__Array__with_native]))(var287, var289, var288) /* with_native on <var287:Array[Object]>*/;
}
}
{
var290 = ((val* (*)(val* self))(var287->class->vft[COLOR_standard__string__Object__to_s]))(var287) /* to_s on <var287:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var290); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce291) {
var292 = varonce291;
} else {
var293 = " = ";
var294 = 3;
var295 = standard___standard__NativeString___to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
if (varonce296) {
var297 = varonce296;
} else {
var298 = "->id;";
var299 = 5;
var300 = standard___standard__NativeString___to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
var301 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var301 = array_instance Array[Object] */
var302 = 4;
var303 = NEW_standard__NativeArray(var302, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var303)->values[0] = (val*) var_idtype;
((struct instance_standard__NativeArray*)var303)->values[1] = (val*) var292;
((struct instance_standard__NativeArray*)var303)->values[2] = (val*) var_type_struct;
((struct instance_standard__NativeArray*)var303)->values[3] = (val*) var297;
{
((void (*)(val* self, val* p0, long p1))(var301->class->vft[COLOR_standard__array__Array__with_native]))(var301, var303, var302) /* with_native on <var301:Array[Object]>*/;
}
}
{
var304 = ((val* (*)(val* self))(var301->class->vft[COLOR_standard__string__Object__to_s]))(var301) /* to_s on <var301:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var304); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var_306 = var_maybe_null;
if (var_maybe_null){
if (varonce307) {
var308 = varonce307;
} else {
var309 = "0";
var310 = 1;
var311 = standard___standard__NativeString___to_s_with_length(var309, var310);
var308 = var311;
varonce307 = var308;
}
{
var312 = ((short int (*)(val* self, val* p0))(var_accept_null->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_accept_null, var308) /* == on <var_accept_null:String>*/;
}
var305 = var312;
} else {
var305 = var_306;
}
if (var305){
if (varonce313) {
var314 = varonce313;
} else {
var315 = "is_nullable";
var316 = 11;
var317 = standard___standard__NativeString___to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
{
var318 = nit___nit__AbstractCompilerVisitor___get_name(self, var314);
}
var_is_nullable = var318;
if (varonce319) {
var320 = varonce319;
} else {
var321 = "short int ";
var322 = 10;
var323 = standard___standard__NativeString___to_s_with_length(var321, var322);
var320 = var323;
varonce319 = var320;
}
if (varonce324) {
var325 = varonce324;
} else {
var326 = ";";
var327 = 1;
var328 = standard___standard__NativeString___to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
var329 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var329 = array_instance Array[Object] */
var330 = 3;
var331 = NEW_standard__NativeArray(var330, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var331)->values[0] = (val*) var320;
((struct instance_standard__NativeArray*)var331)->values[1] = (val*) var_is_nullable;
((struct instance_standard__NativeArray*)var331)->values[2] = (val*) var325;
{
((void (*)(val* self, val* p0, long p1))(var329->class->vft[COLOR_standard__array__Array__with_native]))(var329, var331, var330) /* with_native on <var329:Array[Object]>*/;
}
}
{
var332 = ((val* (*)(val* self))(var329->class->vft[COLOR_standard__string__Object__to_s]))(var329) /* to_s on <var329:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var332); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
if (varonce333) {
var334 = varonce333;
} else {
var335 = " = ";
var336 = 3;
var337 = standard___standard__NativeString___to_s_with_length(var335, var336);
var334 = var337;
varonce333 = var334;
}
if (varonce338) {
var339 = varonce338;
} else {
var340 = "->is_nullable;";
var341 = 14;
var342 = standard___standard__NativeString___to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
var343 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var343 = array_instance Array[Object] */
var344 = 4;
var345 = NEW_standard__NativeArray(var344, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var345)->values[0] = (val*) var_is_nullable;
((struct instance_standard__NativeArray*)var345)->values[1] = (val*) var334;
((struct instance_standard__NativeArray*)var345)->values[2] = (val*) var_type_struct;
((struct instance_standard__NativeArray*)var345)->values[3] = (val*) var339;
{
((void (*)(val* self, val* p0, long p1))(var343->class->vft[COLOR_standard__array__Array__with_native]))(var343, var345, var344) /* with_native on <var343:Array[Object]>*/;
}
}
{
var346 = ((val* (*)(val* self))(var343->class->vft[COLOR_standard__string__Object__to_s]))(var343) /* to_s on <var343:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var346); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var347 = standard___standard__String___Object__to_s(var_is_nullable);
}
var_accept_null = var347;
} else {
}
} else {
/* <var_ntype:MType> isa MClassType */
cltype349 = type_nit__MClassType.color;
idtype350 = type_nit__MClassType.id;
if(cltype349 >= var_ntype->type->table_size) {
var348 = 0;
} else {
var348 = var_ntype->type->type_table[cltype349] == idtype350;
}
if (var348){
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var353 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var353 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 121);
show_backtrace(1);
}
var351 = var353;
RET_LABEL352:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var351->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var351, var_mtype) /* add on <var351:Set[MType]>*/;
}
if (varonce354) {
var355 = varonce354;
} else {
var356 = "type_";
var357 = 5;
var358 = standard___standard__NativeString___to_s_with_length(var356, var357);
var355 = var358;
varonce354 = var355;
}
{
var359 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
var360 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var360 = array_instance Array[Object] */
var361 = 2;
var362 = NEW_standard__NativeArray(var361, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var362)->values[0] = (val*) var355;
((struct instance_standard__NativeArray*)var362)->values[1] = (val*) var359;
{
((void (*)(val* self, val* p0, long p1))(var360->class->vft[COLOR_standard__array__Array__with_native]))(var360, var362, var361) /* with_native on <var360:Array[Object]>*/;
}
}
{
var363 = ((val* (*)(val* self))(var360->class->vft[COLOR_standard__string__Object__to_s]))(var360) /* to_s on <var360:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var363); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce364) {
var365 = varonce364;
} else {
var366 = "(&type_";
var367 = 7;
var368 = standard___standard__NativeString___to_s_with_length(var366, var367);
var365 = var368;
varonce364 = var365;
}
{
var369 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce370) {
var371 = varonce370;
} else {
var372 = ")";
var373 = 1;
var374 = standard___standard__NativeString___to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
var375 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var375 = array_instance Array[Object] */
var376 = 3;
var377 = NEW_standard__NativeArray(var376, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var377)->values[0] = (val*) var365;
((struct instance_standard__NativeArray*)var377)->values[1] = (val*) var369;
((struct instance_standard__NativeArray*)var377)->values[2] = (val*) var371;
{
((void (*)(val* self, val* p0, long p1))(var375->class->vft[COLOR_standard__array__Array__with_native]))(var375, var377, var376) /* with_native on <var375:Array[Object]>*/;
}
}
{
var378 = ((val* (*)(val* self))(var375->class->vft[COLOR_standard__string__Object__to_s]))(var375) /* to_s on <var375:Array[Object]>*/;
}
{
nit___nit__SeparateCompilerVisitor___hardening_cast_type(self, var378); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_cast_type on <self:SeparateCompilerVisitor>*/
}
if (varonce379) {
var380 = varonce379;
} else {
var381 = " = type_";
var382 = 8;
var383 = standard___standard__NativeString___to_s_with_length(var381, var382);
var380 = var383;
varonce379 = var380;
}
{
var384 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce385) {
var386 = varonce385;
} else {
var387 = ".color;";
var388 = 7;
var389 = standard___standard__NativeString___to_s_with_length(var387, var388);
var386 = var389;
varonce385 = var386;
}
var390 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var390 = array_instance Array[Object] */
var391 = 4;
var392 = NEW_standard__NativeArray(var391, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var392)->values[0] = (val*) var_cltype;
((struct instance_standard__NativeArray*)var392)->values[1] = (val*) var380;
((struct instance_standard__NativeArray*)var392)->values[2] = (val*) var384;
((struct instance_standard__NativeArray*)var392)->values[3] = (val*) var386;
{
((void (*)(val* self, val* p0, long p1))(var390->class->vft[COLOR_standard__array__Array__with_native]))(var390, var392, var391) /* with_native on <var390:Array[Object]>*/;
}
}
{
var393 = ((val* (*)(val* self))(var390->class->vft[COLOR_standard__string__Object__to_s]))(var390) /* to_s on <var390:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var393); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce394) {
var395 = varonce394;
} else {
var396 = " = type_";
var397 = 8;
var398 = standard___standard__NativeString___to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
{
var399 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce400) {
var401 = varonce400;
} else {
var402 = ".id;";
var403 = 4;
var404 = standard___standard__NativeString___to_s_with_length(var402, var403);
var401 = var404;
varonce400 = var401;
}
var405 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var405 = array_instance Array[Object] */
var406 = 4;
var407 = NEW_standard__NativeArray(var406, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var407)->values[0] = (val*) var_idtype;
((struct instance_standard__NativeArray*)var407)->values[1] = (val*) var395;
((struct instance_standard__NativeArray*)var407)->values[2] = (val*) var399;
((struct instance_standard__NativeArray*)var407)->values[3] = (val*) var401;
{
((void (*)(val* self, val* p0, long p1))(var405->class->vft[COLOR_standard__array__Array__with_native]))(var405, var407, var406) /* with_native on <var405:Array[Object]>*/;
}
}
{
var408 = ((val* (*)(val* self))(var405->class->vft[COLOR_standard__string__Object__to_s]))(var405) /* to_s on <var405:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var408); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var411 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var411 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var409 = var411;
RET_LABEL410:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var409) on <var409:ModelBuilder> */
var414 = var409->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var409:ModelBuilder> */
if (unlikely(var414 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var412 = var414;
RET_LABEL413:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var412) on <var412:ToolContext> */
var417 = var412->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var412:ToolContext> */
if (unlikely(var417 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
show_backtrace(1);
}
var415 = var417;
RET_LABEL416:(void)0;
}
}
{
{ /* Inline opts#Option#value (var415) on <var415:OptionBool> */
var420 = var415->attrs[COLOR_opts__Option___value].val; /* _value on <var415:OptionBool> */
var418 = var420;
RET_LABEL419:(void)0;
}
}
var421 = ((struct instance_standard__Bool*)var418)->value; /* autounbox from nullable Object to Bool */;
if (var421){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var424 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var424 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var422 = var424;
RET_LABEL423:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (var422) on <var422:AbstractCompiler(SeparateCompiler)> */
var427 = var422->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <var422:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var427 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 964);
show_backtrace(1);
}
var425 = var427;
RET_LABEL426:(void)0;
}
}
var_428 = var425;
var_429 = var_tag;
{
var430 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_428, var_429);
}
var431 = 1;
{
{ /* Inline kernel#Int#+ (var430,var431) on <var430:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var431:Int> isa OTHER */
/* <var431:Int> isa OTHER */
var434 = 1; /* easy <var431:Int> isa OTHER*/
if (unlikely(!var434)) {
var_class_name437 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name437);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var438 = ((struct instance_standard__Int*)var430)->value; /* autounbox from nullable Object to Int */;
var439 = var438 + var431;
var432 = var439;
goto RET_LABEL433;
RET_LABEL433:(void)0;
}
}
{
var440 = BOX_standard__Int(var432); /* autobox from Int to nullable Object */
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_428, var_429, var440); /* Direct call hash_collection#HashMap#[]= on <var_428:HashMap[String, Int]>*/
}
if (varonce441) {
var442 = varonce441;
} else {
var443 = "count_type_test_resolved_";
var444 = 25;
var445 = standard___standard__NativeString___to_s_with_length(var443, var444);
var442 = var445;
varonce441 = var442;
}
if (varonce446) {
var447 = varonce446;
} else {
var448 = "++;";
var449 = 3;
var450 = standard___standard__NativeString___to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
var451 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var451 = array_instance Array[Object] */
var452 = 3;
var453 = NEW_standard__NativeArray(var452, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var453)->values[0] = (val*) var442;
((struct instance_standard__NativeArray*)var453)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var453)->values[2] = (val*) var447;
{
((void (*)(val* self, val* p0, long p1))(var451->class->vft[COLOR_standard__array__Array__with_native]))(var451, var453, var452) /* with_native on <var451:Array[Object]>*/;
}
}
{
var454 = ((val* (*)(val* self))(var451->class->vft[COLOR_standard__string__Object__to_s]))(var451) /* to_s on <var451:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var454); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
if (varonce455) {
var456 = varonce455;
} else {
var457 = "PRINT_ERROR(\"NOT YET IMPLEMENTED: type_test(%s, ";
var458 = 48;
var459 = standard___standard__NativeString___to_s_with_length(var457, var458);
var456 = var459;
varonce455 = var456;
}
if (varonce460) {
var461 = varonce460;
} else {
var462 = ").\\n\", \"";
var463 = 8;
var464 = standard___standard__NativeString___to_s_with_length(var462, var463);
var461 = var464;
varonce460 = var461;
}
{
var465 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
if (varonce466) {
var467 = varonce466;
} else {
var468 = "\"); show_backtrace(1);";
var469 = 22;
var470 = standard___standard__NativeString___to_s_with_length(var468, var469);
var467 = var470;
varonce466 = var467;
}
var471 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var471 = array_instance Array[Object] */
var472 = 5;
var473 = NEW_standard__NativeArray(var472, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var473)->values[0] = (val*) var456;
((struct instance_standard__NativeArray*)var473)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var473)->values[2] = (val*) var461;
((struct instance_standard__NativeArray*)var473)->values[3] = (val*) var465;
((struct instance_standard__NativeArray*)var473)->values[4] = (val*) var467;
{
((void (*)(val* self, val* p0, long p1))(var471->class->vft[COLOR_standard__array__Array__with_native]))(var471, var473, var472) /* with_native on <var471:Array[Object]>*/;
}
}
{
var474 = ((val* (*)(val* self))(var471->class->vft[COLOR_standard__string__Object__to_s]))(var471) /* to_s on <var471:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var474); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
if (var_maybe_null){
if (varonce475) {
var476 = varonce475;
} else {
var477 = "if(";
var478 = 3;
var479 = standard___standard__NativeString___to_s_with_length(var477, var478);
var476 = var479;
varonce475 = var476;
}
if (varonce480) {
var481 = varonce480;
} else {
var482 = " == NULL) {";
var483 = 11;
var484 = standard___standard__NativeString___to_s_with_length(var482, var483);
var481 = var484;
varonce480 = var481;
}
var485 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var485 = array_instance Array[Object] */
var486 = 3;
var487 = NEW_standard__NativeArray(var486, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var487)->values[0] = (val*) var476;
((struct instance_standard__NativeArray*)var487)->values[1] = (val*) var_value;
((struct instance_standard__NativeArray*)var487)->values[2] = (val*) var481;
{
((void (*)(val* self, val* p0, long p1))(var485->class->vft[COLOR_standard__array__Array__with_native]))(var485, var487, var486) /* with_native on <var485:Array[Object]>*/;
}
}
{
var488 = ((val* (*)(val* self))(var485->class->vft[COLOR_standard__string__Object__to_s]))(var485) /* to_s on <var485:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var488); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce489) {
var490 = varonce489;
} else {
var491 = " = ";
var492 = 3;
var493 = standard___standard__NativeString___to_s_with_length(var491, var492);
var490 = var493;
varonce489 = var490;
}
if (varonce494) {
var495 = varonce494;
} else {
var496 = ";";
var497 = 1;
var498 = standard___standard__NativeString___to_s_with_length(var496, var497);
var495 = var498;
varonce494 = var495;
}
var499 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var499 = array_instance Array[Object] */
var500 = 4;
var501 = NEW_standard__NativeArray(var500, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var501)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var501)->values[1] = (val*) var490;
((struct instance_standard__NativeArray*)var501)->values[2] = (val*) var_accept_null;
((struct instance_standard__NativeArray*)var501)->values[3] = (val*) var495;
{
((void (*)(val* self, val* p0, long p1))(var499->class->vft[COLOR_standard__array__Array__with_native]))(var499, var501, var500) /* with_native on <var499:Array[Object]>*/;
}
}
{
var502 = ((val* (*)(val* self))(var499->class->vft[COLOR_standard__string__Object__to_s]))(var499) /* to_s on <var499:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var502); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce503) {
var504 = varonce503;
} else {
var505 = "} else {";
var506 = 8;
var507 = standard___standard__NativeString___to_s_with_length(var505, var506);
var504 = var507;
varonce503 = var504;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var504); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
var508 = nit___nit__SeparateCompilerVisitor___type_info(self, var_value);
}
var_value_type_info = var508;
if (varonce509) {
var510 = varonce509;
} else {
var511 = "if(";
var512 = 3;
var513 = standard___standard__NativeString___to_s_with_length(var511, var512);
var510 = var513;
varonce509 = var510;
}
if (varonce514) {
var515 = varonce514;
} else {
var516 = " >= ";
var517 = 4;
var518 = standard___standard__NativeString___to_s_with_length(var516, var517);
var515 = var518;
varonce514 = var515;
}
if (varonce519) {
var520 = varonce519;
} else {
var521 = "->table_size) {";
var522 = 15;
var523 = standard___standard__NativeString___to_s_with_length(var521, var522);
var520 = var523;
varonce519 = var520;
}
var524 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var524 = array_instance Array[Object] */
var525 = 5;
var526 = NEW_standard__NativeArray(var525, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var526)->values[0] = (val*) var510;
((struct instance_standard__NativeArray*)var526)->values[1] = (val*) var_cltype;
((struct instance_standard__NativeArray*)var526)->values[2] = (val*) var515;
((struct instance_standard__NativeArray*)var526)->values[3] = (val*) var_value_type_info;
((struct instance_standard__NativeArray*)var526)->values[4] = (val*) var520;
{
((void (*)(val* self, val* p0, long p1))(var524->class->vft[COLOR_standard__array__Array__with_native]))(var524, var526, var525) /* with_native on <var524:Array[Object]>*/;
}
}
{
var527 = ((val* (*)(val* self))(var524->class->vft[COLOR_standard__string__Object__to_s]))(var524) /* to_s on <var524:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var527); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce528) {
var529 = varonce528;
} else {
var530 = " = 0;";
var531 = 5;
var532 = standard___standard__NativeString___to_s_with_length(var530, var531);
var529 = var532;
varonce528 = var529;
}
var533 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var533 = array_instance Array[Object] */
var534 = 2;
var535 = NEW_standard__NativeArray(var534, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var535)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var535)->values[1] = (val*) var529;
{
((void (*)(val* self, val* p0, long p1))(var533->class->vft[COLOR_standard__array__Array__with_native]))(var533, var535, var534) /* with_native on <var533:Array[Object]>*/;
}
}
{
var536 = ((val* (*)(val* self))(var533->class->vft[COLOR_standard__string__Object__to_s]))(var533) /* to_s on <var533:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var536); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce537) {
var538 = varonce537;
} else {
var539 = "} else {";
var540 = 8;
var541 = standard___standard__NativeString___to_s_with_length(var539, var540);
var538 = var541;
varonce537 = var538;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var538); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce542) {
var543 = varonce542;
} else {
var544 = " = ";
var545 = 3;
var546 = standard___standard__NativeString___to_s_with_length(var544, var545);
var543 = var546;
varonce542 = var543;
}
if (varonce547) {
var548 = varonce547;
} else {
var549 = "->type_table[";
var550 = 13;
var551 = standard___standard__NativeString___to_s_with_length(var549, var550);
var548 = var551;
varonce547 = var548;
}
if (varonce552) {
var553 = varonce552;
} else {
var554 = "] == ";
var555 = 5;
var556 = standard___standard__NativeString___to_s_with_length(var554, var555);
var553 = var556;
varonce552 = var553;
}
if (varonce557) {
var558 = varonce557;
} else {
var559 = ";";
var560 = 1;
var561 = standard___standard__NativeString___to_s_with_length(var559, var560);
var558 = var561;
varonce557 = var558;
}
var562 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var562 = array_instance Array[Object] */
var563 = 8;
var564 = NEW_standard__NativeArray(var563, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var564)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var564)->values[1] = (val*) var543;
((struct instance_standard__NativeArray*)var564)->values[2] = (val*) var_value_type_info;
((struct instance_standard__NativeArray*)var564)->values[3] = (val*) var548;
((struct instance_standard__NativeArray*)var564)->values[4] = (val*) var_cltype;
((struct instance_standard__NativeArray*)var564)->values[5] = (val*) var553;
((struct instance_standard__NativeArray*)var564)->values[6] = (val*) var_idtype;
((struct instance_standard__NativeArray*)var564)->values[7] = (val*) var558;
{
((void (*)(val* self, val* p0, long p1))(var562->class->vft[COLOR_standard__array__Array__with_native]))(var562, var564, var563) /* with_native on <var562:Array[Object]>*/;
}
}
{
var565 = ((val* (*)(val* self))(var562->class->vft[COLOR_standard__string__Object__to_s]))(var562) /* to_s on <var562:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var565); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce566) {
var567 = varonce566;
} else {
var568 = "}";
var569 = 1;
var570 = standard___standard__NativeString___to_s_with_length(var568, var569);
var567 = var570;
varonce566 = var567;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var567); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (var_maybe_null){
if (varonce571) {
var572 = varonce571;
} else {
var573 = "}";
var574 = 1;
var575 = standard___standard__NativeString___to_s_with_length(var573, var574);
var572 = var575;
varonce571 = var572;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var572); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#is_same_type_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
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
short int var_ /* var : Bool */;
val* var16 /* : MType */;
val* var18 /* : MType */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
short int var25 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var26 /* : MType */;
val* var28 /* : MType */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MType */;
val* var41 /* : MType */;
val* var42 /* : MType */;
val* var44 /* : MType */;
short int var45 /* : Bool */;
val* var_other47 /* var other: nullable Object */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
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
val* var64 /* : MType */;
val* var66 /* : MType */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : String */;
val* var76 /* : MType */;
val* var78 /* : MType */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : MType */;
val* var96 /* : MType */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : FlatString */;
val* var102 /* : MType */;
val* var104 /* : MType */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
val* var114 /* : MType */;
val* var116 /* : MType */;
short int var117 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
val* var123 /* : String */;
val* var124 /* : Array[Object] */;
long var125 /* : Int */;
val* var126 /* : NativeArray[Object] */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : FlatString */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
val* var143 /* : String */;
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
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : Array[Object] */;
long var189 /* : Int */;
val* var190 /* : NativeArray[Object] */;
val* var191 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nit___nit__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val* self))(var4->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var4) /* ctype on <var4:MType>*/;
}
if (varonce) {
var8 = varonce;
} else {
var9 = "val*";
var10 = 4;
var11 = standard___standard__NativeString___to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
{ /* Inline kernel#Object#!= (var7,var8) on <var7:String> */
var_other = var8;
{
var14 = ((short int (*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var7, var_other) /* == on <var7:String>*/;
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_ = var12;
if (var12){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var18 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((val* (*)(val* self))(var16->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var16) /* ctype on <var16:MType>*/;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "val*";
var23 = 4;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
var25 = ((short int (*)(val* self, val* p0))(var19->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var19, var21) /* == on <var19:String>*/;
}
var3 = var25;
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
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var28 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = ((val* (*)(val* self))(var26->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var26) /* ctype on <var26:MType>*/;
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = "val*";
var33 = 4;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
{
{ /* Inline kernel#Object#!= (var29,var31) on <var29:String> */
var_other = var31;
{
var37 = ((short int (*)(val* self, val* p0))(var29->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var29, var_other) /* == on <var29:String>*/;
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var41 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var44 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var39,var42) on <var39:MType> */
var_other47 = var42;
{
{ /* Inline kernel#Object#is_same_instance (var39,var_other47) on <var39:MType> */
var50 = var39 == var_other47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
if (varonce51) {
var52 = varonce51;
} else {
var53 = " = 1; /* is_same_type_test: compatible types ";
var54 = 45;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var58 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
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
var61 = " vs. ";
var62 = 5;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var66 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = " */";
var70 = 3;
var71 = standard___standard__NativeString___to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 6;
var74 = NEW_standard__NativeArray(var73, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var74)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var74)->values[1] = (val*) var52;
((struct instance_standard__NativeArray*)var74)->values[2] = (val*) var56;
((struct instance_standard__NativeArray*)var74)->values[3] = (val*) var60;
((struct instance_standard__NativeArray*)var74)->values[4] = (val*) var64;
((struct instance_standard__NativeArray*)var74)->values[5] = (val*) var68;
{
((void (*)(val* self, val* p0, long p1))(var72->class->vft[COLOR_standard__array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
}
{
var75 = ((val* (*)(val* self))(var72->class->vft[COLOR_standard__string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var78 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = ((val* (*)(val* self))(var76->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var76) /* ctype on <var76:MType>*/;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "val*";
var83 = 4;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{
{ /* Inline kernel#Object#!= (var79,var81) on <var79:String> */
var_other = var81;
{
var87 = ((short int (*)(val* self, val* p0))(var79->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var79, var_other) /* == on <var79:String>*/;
}
var88 = !var87;
var85 = var88;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
if (varonce89) {
var90 = varonce89;
} else {
var91 = " = 0; /* is_same_type_test: incompatible types ";
var92 = 47;
var93 = standard___standard__NativeString___to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var96 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = " vs. ";
var100 = 5;
var101 = standard___standard__NativeString___to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var104 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = "*/";
var108 = 2;
var109 = standard___standard__NativeString___to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 6;
var112 = NEW_standard__NativeArray(var111, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var112)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var112)->values[1] = (val*) var90;
((struct instance_standard__NativeArray*)var112)->values[2] = (val*) var94;
((struct instance_standard__NativeArray*)var112)->values[3] = (val*) var98;
((struct instance_standard__NativeArray*)var112)->values[4] = (val*) var102;
((struct instance_standard__NativeArray*)var112)->values[5] = (val*) var106;
{
((void (*)(val* self, val* p0, long p1))(var110->class->vft[COLOR_standard__array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
}
{
var113 = ((val* (*)(val* self))(var110->class->vft[COLOR_standard__string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var113); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var116 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
/* <var114:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var114->type->table_size) {
var117 = 0;
} else {
var117 = var114->type->type_table[cltype] == idtype;
}
if (unlikely(!var117)) {
var_class_name = var114 == NULL ? "null" : var114->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1570);
show_backtrace(1);
}
var_mtype1 = var114;
if (varonce118) {
var119 = varonce118;
} else {
var120 = "class_";
var121 = 6;
var122 = standard___standard__NativeString___to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
{
var123 = ((val* (*)(val* self))(var_mtype1->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
var124 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var124 = array_instance Array[Object] */
var125 = 2;
var126 = NEW_standard__NativeArray(var125, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var126)->values[0] = (val*) var119;
((struct instance_standard__NativeArray*)var126)->values[1] = (val*) var123;
{
((void (*)(val* self, val* p0, long p1))(var124->class->vft[COLOR_standard__array__Array__with_native]))(var124, var126, var125) /* with_native on <var124:Array[Object]>*/;
}
}
{
var127 = ((val* (*)(val* self))(var124->class->vft[COLOR_standard__string__Object__to_s]))(var124) /* to_s on <var124:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var127); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = " = (";
var131 = 4;
var132 = standard___standard__NativeString___to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = " != NULL) && (";
var136 = 14;
var137 = standard___standard__NativeString___to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "->class == &class_";
var141 = 18;
var142 = standard___standard__NativeString___to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
{
var143 = ((val* (*)(val* self))(var_mtype1->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = "); /* is_same_type_test */";
var147 = 26;
var148 = standard___standard__NativeString___to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
var149 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var149 = array_instance Array[Object] */
var150 = 8;
var151 = NEW_standard__NativeArray(var150, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var151)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var151)->values[1] = (val*) var129;
((struct instance_standard__NativeArray*)var151)->values[2] = (val*) var_value2;
((struct instance_standard__NativeArray*)var151)->values[3] = (val*) var134;
((struct instance_standard__NativeArray*)var151)->values[4] = (val*) var_value2;
((struct instance_standard__NativeArray*)var151)->values[5] = (val*) var139;
((struct instance_standard__NativeArray*)var151)->values[6] = (val*) var143;
((struct instance_standard__NativeArray*)var151)->values[7] = (val*) var145;
{
((void (*)(val* self, val* p0, long p1))(var149->class->vft[COLOR_standard__array__Array__with_native]))(var149, var151, var150) /* with_native on <var149:Array[Object]>*/;
}
}
{
var152 = ((val* (*)(val* self))(var149->class->vft[COLOR_standard__string__Object__to_s]))(var149) /* to_s on <var149:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var152); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (varonce153) {
var154 = varonce153;
} else {
var155 = " = (";
var156 = 4;
var157 = standard___standard__NativeString___to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
if (varonce158) {
var159 = varonce158;
} else {
var160 = " == ";
var161 = 4;
var162 = standard___standard__NativeString___to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = ") || (";
var166 = 6;
var167 = standard___standard__NativeString___to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = " != NULL && ";
var171 = 12;
var172 = standard___standard__NativeString___to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = " != NULL && ";
var176 = 12;
var177 = standard___standard__NativeString___to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = "->class == ";
var181 = 11;
var182 = standard___standard__NativeString___to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = "->class); /* is_same_type_test */";
var186 = 33;
var187 = standard___standard__NativeString___to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 14;
var190 = NEW_standard__NativeArray(var189, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var190)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var190)->values[1] = (val*) var154;
((struct instance_standard__NativeArray*)var190)->values[2] = (val*) var_value1;
((struct instance_standard__NativeArray*)var190)->values[3] = (val*) var159;
((struct instance_standard__NativeArray*)var190)->values[4] = (val*) var_value2;
((struct instance_standard__NativeArray*)var190)->values[5] = (val*) var164;
((struct instance_standard__NativeArray*)var190)->values[6] = (val*) var_value1;
((struct instance_standard__NativeArray*)var190)->values[7] = (val*) var169;
((struct instance_standard__NativeArray*)var190)->values[8] = (val*) var_value2;
((struct instance_standard__NativeArray*)var190)->values[9] = (val*) var174;
((struct instance_standard__NativeArray*)var190)->values[10] = (val*) var_value1;
((struct instance_standard__NativeArray*)var190)->values[11] = (val*) var179;
((struct instance_standard__NativeArray*)var190)->values[12] = (val*) var_value2;
((struct instance_standard__NativeArray*)var190)->values[13] = (val*) var184;
{
((void (*)(val* self, val* p0, long p1))(var188->class->vft[COLOR_standard__array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
}
{
var191 = ((val* (*)(val* self))(var188->class->vft[COLOR_standard__string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var191); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#class_name_string for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__class_name_string(val* self, val* p0) {
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
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : MType */;
val* var53 /* : MType */;
short int var54 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var55 /* : MType */;
val* var57 /* : MType */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name;
val* var61 /* : MClass */;
val* var63 /* : MClass */;
val* var64 /* : MClassKind */;
val* var66 /* : MClassKind */;
val* var67 /* : MClassKind */;
short int var68 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var_73 /* var : Bool */;
val* var74 /* : MType */;
val* var76 /* : MType */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
short int var87 /* : Bool */;
val* var_other89 /* var other: nullable Object */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : MType */;
val* var99 /* : MType */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
val* var104 /* : MClass */;
val* var106 /* : MClass */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : MType */;
val* var123 /* : MType */;
val* var124 /* : String */;
val* var125 /* : Array[Object] */;
long var126 /* : Int */;
val* var127 /* : NativeArray[Object] */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
val* var134 /* : MType */;
val* var136 /* : MType */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
val* var143 /* : Array[Object] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[Object] */;
val* var146 /* : String */;
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
nit___nit__AbstractCompilerVisitor___add_decl(self, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
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
var42 = "->type->name;";
var43 = 13;
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
nit___nit__AbstractCompilerVisitor___add(self, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var53 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
/* <var51:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var51->type->table_size) {
var54 = 0;
} else {
var54 = var51->type->type_table[cltype] == idtype;
}
var_ = var54;
if (var54){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var57 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
/* <var55:MType> isa MClassType */
cltype59 = type_nit__MClassType.color;
idtype60 = type_nit__MClassType.id;
if(cltype59 >= var55->type->table_size) {
var58 = 0;
} else {
var58 = var55->type->type_table[cltype59] == idtype60;
}
if (unlikely(!var58)) {
var_class_name = var55 == NULL ? "null" : var55->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1586);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var55) on <var55:MType(MClassType)> */
var63 = var55->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var55:MType(MClassType)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var61) on <var61:MClass> */
var66 = var61->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var61:MClass> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var64,var67) on <var64:MClassKind> */
var_other = var67;
{
{ /* Inline kernel#Object#is_same_instance (var64,var_other) on <var64:MClassKind> */
var72 = var64 == var_other;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var50 = var68;
} else {
var50 = var_;
}
var_73 = var50;
if (var50){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var76 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
/* <var74:MType> isa MClassType */
cltype78 = type_nit__MClassType.color;
idtype79 = type_nit__MClassType.id;
if(cltype78 >= var74->type->table_size) {
var77 = 0;
} else {
var77 = var74->type->type_table[cltype78] == idtype79;
}
if (unlikely(!var77)) {
var_class_name80 = var74 == NULL ? "null" : var74->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1587);
show_backtrace(1);
}
{
var81 = nit___nit__MType___nit__model_base__MEntity__name(var74);
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "NativeString";
var85 = 12;
var86 = standard___standard__NativeString___to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
{
{ /* Inline kernel#Object#!= (var81,var83) on <var81:String> */
var_other89 = var83;
{
var90 = ((short int (*)(val* self, val* p0))(var81->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var81, var_other89) /* == on <var81:String>*/;
}
var91 = !var90;
var87 = var91;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var49 = var87;
} else {
var49 = var_73;
}
if (var49){
if (varonce92) {
var93 = varonce92;
} else {
var94 = " = \"";
var95 = 4;
var96 = standard___standard__NativeString___to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var99 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
/* <var97:MType> isa MClassType */
cltype101 = type_nit__MClassType.color;
idtype102 = type_nit__MClassType.id;
if(cltype101 >= var97->type->table_size) {
var100 = 0;
} else {
var100 = var97->type->type_table[cltype101] == idtype102;
}
if (unlikely(!var100)) {
var_class_name103 = var97 == NULL ? "null" : var97->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1588);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var97) on <var97:MType(MClassType)> */
var106 = var97->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var97:MType(MClassType)> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "\";";
var110 = 2;
var111 = standard___standard__NativeString___to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 4;
var114 = NEW_standard__NativeArray(var113, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var114)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var114)->values[1] = (val*) var93;
((struct instance_standard__NativeArray*)var114)->values[2] = (val*) var104;
((struct instance_standard__NativeArray*)var114)->values[3] = (val*) var108;
{
((void (*)(val* self, val* p0, long p1))(var112->class->vft[COLOR_standard__array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val* self))(var112->class->vft[COLOR_standard__string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce116) {
var117 = varonce116;
} else {
var118 = "type_";
var119 = 5;
var120 = standard___standard__NativeString___to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var123 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = ((val* (*)(val* self))(var121->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var121) /* c_name on <var121:MType>*/;
}
var125 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 2;
var127 = NEW_standard__NativeArray(var126, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var127)->values[0] = (val*) var117;
((struct instance_standard__NativeArray*)var127)->values[1] = (val*) var124;
{
((void (*)(val* self, val* p0, long p1))(var125->class->vft[COLOR_standard__array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
}
{
var128 = ((val* (*)(val* self))(var125->class->vft[COLOR_standard__string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var128); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = " = type_";
var132 = 8;
var133 = standard___standard__NativeString___to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var136 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
var137 = ((val* (*)(val* self))(var134->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var134) /* c_name on <var134:MType>*/;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = ".name;";
var141 = 6;
var142 = standard___standard__NativeString___to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var143 = array_instance Array[Object] */
var144 = 4;
var145 = NEW_standard__NativeArray(var144, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var145)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var145)->values[1] = (val*) var130;
((struct instance_standard__NativeArray*)var145)->values[2] = (val*) var137;
((struct instance_standard__NativeArray*)var145)->values[3] = (val*) var139;
{
((void (*)(val* self, val* p0, long p1))(var143->class->vft[COLOR_standard__array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[Object]>*/;
}
}
{
var146 = ((val* (*)(val* self))(var143->class->vft[COLOR_standard__string__Object__to_s]))(var143) /* to_s on <var143:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var146); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#equal_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
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
short int var_ /* var : Bool */;
val* var16 /* : MType */;
val* var18 /* : MType */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
short int var25 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var26 /* : MType */;
val* var28 /* : MType */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MType */;
val* var41 /* : MType */;
val* var42 /* : MType */;
val* var44 /* : MType */;
short int var45 /* : Bool */;
val* var_other47 /* var other: nullable Object */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : String */;
val* var70 /* : MType */;
val* var72 /* : MType */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
val* var88 /* : MType */;
val* var90 /* : MType */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
val* var96 /* : MType */;
val* var98 /* : MType */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : String */;
val* var108 /* : MType */;
val* var110 /* : MType */;
short int var111 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : String */;
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var120 /* : NativeArray[Object] */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
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
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
val* var143 /* : Array[Object] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[Object] */;
val* var146 /* : String */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : FlatString */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
val* var157 /* : Array[Object] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[Object] */;
val* var160 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : FlatString */;
val* var166 /* : MType */;
val* var168 /* : MType */;
val* var169 /* : RuntimeVariable */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : FlatString */;
val* var180 /* : Array[Object] */;
long var181 /* : Int */;
val* var182 /* : NativeArray[Object] */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
long var187 /* : Int */;
val* var188 /* : FlatString */;
short int var189 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
val* var190 /* : Array[String] */;
val* var_test /* var test: Array[String] */;
val* var191 /* : MType */;
val* var193 /* : MType */;
val* var_t1 /* var t1: MType */;
short int var194 /* : Bool */;
int cltype195;
int idtype196;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : FlatString */;
val* var202 /* : Array[Object] */;
long var203 /* : Int */;
val* var204 /* : NativeArray[Object] */;
val* var205 /* : String */;
val* var206 /* : MType */;
val* var208 /* : MType */;
short int var209 /* : Bool */;
val* var210 /* : MType */;
val* var212 /* : MType */;
val* var_t2 /* var t2: MType */;
short int var213 /* : Bool */;
int cltype214;
int idtype215;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : FlatString */;
val* var221 /* : Array[Object] */;
long var222 /* : Int */;
val* var223 /* : NativeArray[Object] */;
val* var224 /* : String */;
val* var225 /* : MType */;
val* var227 /* : MType */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
short int var_incompatible /* var incompatible: Bool */;
val* var230 /* : String */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : FlatString */;
short int var236 /* : Bool */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
val* var_primitive /* var primitive: nullable Object */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
short int var244 /* : Bool */;
val* var245 /* : String */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
long var249 /* : Int */;
val* var250 /* : FlatString */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
long var260 /* : Int */;
val* var261 /* : FlatString */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : FlatString */;
val* var267 /* : Array[Object] */;
long var268 /* : Int */;
val* var269 /* : NativeArray[Object] */;
val* var270 /* : String */;
short int var271 /* : Bool */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : FlatString */;
short int var278 /* : Bool */;
short int var280 /* : Bool */;
short int var281 /* : Bool */;
short int var282 /* : Bool */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : NativeString */;
long var286 /* : Int */;
val* var287 /* : FlatString */;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : NativeString */;
long var291 /* : Int */;
val* var292 /* : FlatString */;
val* var293 /* : Array[Object] */;
long var294 /* : Int */;
val* var295 /* : NativeArray[Object] */;
val* var296 /* : String */;
short int var297 /* : Bool */;
val* var298 /* : null */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
long var302 /* : Int */;
val* var303 /* : FlatString */;
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
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : FlatString */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
long var322 /* : Int */;
val* var323 /* : FlatString */;
val* var324 /* : Array[Object] */;
long var325 /* : Int */;
val* var326 /* : NativeArray[Object] */;
val* var327 /* : String */;
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
val* var343 /* : Array[Object] */;
long var344 /* : Int */;
val* var345 /* : NativeArray[Object] */;
val* var346 /* : String */;
val* var347 /* : null */;
short int var348 /* : Bool */;
short int var349 /* : Bool */;
short int var351 /* : Bool */;
short int var352 /* : Bool */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : NativeString */;
long var356 /* : Int */;
val* var357 /* : FlatString */;
val* var358 /* : String */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
long var362 /* : Int */;
val* var363 /* : FlatString */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
long var367 /* : Int */;
val* var368 /* : FlatString */;
val* var369 /* : String */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : FlatString */;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
long var378 /* : Int */;
val* var379 /* : FlatString */;
val* var380 /* : Array[Object] */;
long var381 /* : Int */;
val* var382 /* : NativeArray[Object] */;
val* var383 /* : String */;
short int var384 /* : Bool */;
short int var385 /* : Bool */;
short int var_386 /* var : Bool */;
short int var387 /* : Bool */;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : NativeString */;
long var391 /* : Int */;
val* var392 /* : FlatString */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
long var396 /* : Int */;
val* var397 /* : FlatString */;
val* var398 /* : Array[Object] */;
long var399 /* : Int */;
val* var400 /* : NativeArray[Object] */;
val* var401 /* : String */;
val* var402 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var403 /* : AbstractCompiler */;
val* var405 /* : AbstractCompiler */;
val* var406 /* : HashMap[MClass, Int] */;
val* var408 /* : HashMap[MClass, Int] */;
val* var_409 /* var : HashMap[MClass, Int] */;
val* var410 /* : HashMapIterator[nullable Object, nullable Object] */;
val* var_411 /* var : HashMapIterator[MClass, Int] */;
short int var412 /* : Bool */;
val* var413 /* : nullable Object */;
val* var_t /* var t: MClass */;
val* var414 /* : nullable Object */;
long var415 /* : Int */;
long var_v /* var v: Int */;
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
val* var431 /* : String */;
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
val* var442 /* : String */;
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
val* var453 /* : Array[Object] */;
long var454 /* : Int */;
val* var455 /* : NativeArray[Object] */;
val* var456 /* : Object */;
val* var457 /* : String */;
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
val* var469 /* : String */;
static val* varonce470;
val* var471 /* : String */;
char* var472 /* : NativeString */;
long var473 /* : Int */;
val* var474 /* : FlatString */;
val* var475 /* : Array[Object] */;
long var476 /* : Int */;
val* var477 /* : NativeArray[Object] */;
val* var478 /* : String */;
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
val* var494 /* : Array[Object] */;
long var495 /* : Int */;
val* var496 /* : NativeArray[Object] */;
val* var497 /* : String */;
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
val* var518 /* : String */;
static val* varonce519;
val* var520 /* : String */;
char* var521 /* : NativeString */;
long var522 /* : Int */;
val* var523 /* : FlatString */;
val* var524 /* : Array[Object] */;
long var525 /* : Int */;
val* var526 /* : NativeArray[Object] */;
val* var527 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nit___nit__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val* self))(var4->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var4) /* ctype on <var4:MType>*/;
}
if (varonce) {
var8 = varonce;
} else {
var9 = "val*";
var10 = 4;
var11 = standard___standard__NativeString___to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
{ /* Inline kernel#Object#!= (var7,var8) on <var7:String> */
var_other = var8;
{
var14 = ((short int (*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var7, var_other) /* == on <var7:String>*/;
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_ = var12;
if (var12){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var18 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((val* (*)(val* self))(var16->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var16) /* ctype on <var16:MType>*/;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "val*";
var23 = 4;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
var25 = ((short int (*)(val* self, val* p0))(var19->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var19, var21) /* == on <var19:String>*/;
}
var3 = var25;
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
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var28 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = ((val* (*)(val* self))(var26->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var26) /* ctype on <var26:MType>*/;
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = "val*";
var33 = 4;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
{
{ /* Inline kernel#Object#!= (var29,var31) on <var29:String> */
var_other = var31;
{
var37 = ((short int (*)(val* self, val* p0))(var29->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var29, var_other) /* == on <var29:String>*/;
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var41 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var44 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var39,var42) on <var39:MType> */
var_other47 = var42;
{
{ /* Inline kernel#Object#is_same_instance (var39,var_other47) on <var39:MType> */
var50 = var39 == var_other47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
if (varonce51) {
var52 = varonce51;
} else {
var53 = " = ";
var54 = 3;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = " == ";
var59 = 4;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = ";";
var64 = 1;
var65 = standard___standard__NativeString___to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 6;
var68 = NEW_standard__NativeArray(var67, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var68)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var68)->values[1] = (val*) var52;
((struct instance_standard__NativeArray*)var68)->values[2] = (val*) var_value1;
((struct instance_standard__NativeArray*)var68)->values[3] = (val*) var57;
((struct instance_standard__NativeArray*)var68)->values[4] = (val*) var_value2;
((struct instance_standard__NativeArray*)var68)->values[5] = (val*) var62;
{
((void (*)(val* self, val* p0, long p1))(var66->class->vft[COLOR_standard__array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
}
{
var69 = ((val* (*)(val* self))(var66->class->vft[COLOR_standard__string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var69); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var72 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = ((val* (*)(val* self))(var70->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var70) /* ctype on <var70:MType>*/;
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "val*";
var77 = 4;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
{ /* Inline kernel#Object#!= (var73,var75) on <var73:String> */
var_other = var75;
{
var81 = ((short int (*)(val* self, val* p0))(var73->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var73, var_other) /* == on <var73:String>*/;
}
var82 = !var81;
var79 = var82;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
if (varonce83) {
var84 = varonce83;
} else {
var85 = " = 0; /* incompatible types ";
var86 = 28;
var87 = standard___standard__NativeString___to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var90 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = " vs. ";
var94 = 5;
var95 = standard___standard__NativeString___to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var98 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "*/";
var102 = 2;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
var104 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 6;
var106 = NEW_standard__NativeArray(var105, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var106)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var106)->values[1] = (val*) var84;
((struct instance_standard__NativeArray*)var106)->values[2] = (val*) var88;
((struct instance_standard__NativeArray*)var106)->values[3] = (val*) var92;
((struct instance_standard__NativeArray*)var106)->values[4] = (val*) var96;
((struct instance_standard__NativeArray*)var106)->values[5] = (val*) var100;
{
((void (*)(val* self, val* p0, long p1))(var104->class->vft[COLOR_standard__array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
}
{
var107 = ((val* (*)(val* self))(var104->class->vft[COLOR_standard__string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var107); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var110 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
/* <var108:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var108->type->table_size) {
var111 = 0;
} else {
var111 = var108->type->type_table[cltype] == idtype;
}
if (unlikely(!var111)) {
var_class_name = var108 == NULL ? "null" : var108->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1610);
show_backtrace(1);
}
var_mtype1 = var108;
if (varonce112) {
var113 = varonce112;
} else {
var114 = "class_";
var115 = 6;
var116 = standard___standard__NativeString___to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
{
var117 = ((val* (*)(val* self))(var_mtype1->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
var118 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 2;
var120 = NEW_standard__NativeArray(var119, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var120)->values[0] = (val*) var113;
((struct instance_standard__NativeArray*)var120)->values[1] = (val*) var117;
{
((void (*)(val* self, val* p0, long p1))(var118->class->vft[COLOR_standard__array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
}
{
var121 = ((val* (*)(val* self))(var118->class->vft[COLOR_standard__string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var121); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " = (";
var125 = 4;
var126 = standard___standard__NativeString___to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = " != NULL) && (";
var130 = 14;
var131 = standard___standard__NativeString___to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = "->class == &class_";
var135 = 18;
var136 = standard___standard__NativeString___to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
{
var137 = ((val* (*)(val* self))(var_mtype1->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = ");";
var141 = 2;
var142 = standard___standard__NativeString___to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var143 = array_instance Array[Object] */
var144 = 8;
var145 = NEW_standard__NativeArray(var144, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var145)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var145)->values[1] = (val*) var123;
((struct instance_standard__NativeArray*)var145)->values[2] = (val*) var_value2;
((struct instance_standard__NativeArray*)var145)->values[3] = (val*) var128;
((struct instance_standard__NativeArray*)var145)->values[4] = (val*) var_value2;
((struct instance_standard__NativeArray*)var145)->values[5] = (val*) var133;
((struct instance_standard__NativeArray*)var145)->values[6] = (val*) var137;
((struct instance_standard__NativeArray*)var145)->values[7] = (val*) var139;
{
((void (*)(val* self, val* p0, long p1))(var143->class->vft[COLOR_standard__array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[Object]>*/;
}
}
{
var146 = ((val* (*)(val* self))(var143->class->vft[COLOR_standard__string__Object__to_s]))(var143) /* to_s on <var143:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var146); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = "if (";
var150 = 4;
var151 = standard___standard__NativeString___to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = ") {";
var155 = 3;
var156 = standard___standard__NativeString___to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var157 = array_instance Array[Object] */
var158 = 3;
var159 = NEW_standard__NativeArray(var158, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var159)->values[0] = (val*) var148;
((struct instance_standard__NativeArray*)var159)->values[1] = (val*) var_res;
((struct instance_standard__NativeArray*)var159)->values[2] = (val*) var153;
{
((void (*)(val* self, val* p0, long p1))(var157->class->vft[COLOR_standard__array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[Object]>*/;
}
}
{
var160 = ((val* (*)(val* self))(var157->class->vft[COLOR_standard__string__Object__to_s]))(var157) /* to_s on <var157:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var160); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce161) {
var162 = varonce161;
} else {
var163 = " = (";
var164 = 4;
var165 = standard___standard__NativeString___to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var168 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
var169 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value2, var166);
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = " == ";
var173 = 4;
var174 = standard___standard__NativeString___to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = ");";
var178 = 2;
var179 = standard___standard__NativeString___to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
var180 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var180 = array_instance Array[Object] */
var181 = 6;
var182 = NEW_standard__NativeArray(var181, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var182)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var182)->values[1] = (val*) var162;
((struct instance_standard__NativeArray*)var182)->values[2] = (val*) var169;
((struct instance_standard__NativeArray*)var182)->values[3] = (val*) var171;
((struct instance_standard__NativeArray*)var182)->values[4] = (val*) var_value1;
((struct instance_standard__NativeArray*)var182)->values[5] = (val*) var176;
{
((void (*)(val* self, val* p0, long p1))(var180->class->vft[COLOR_standard__array__Array__with_native]))(var180, var182, var181) /* with_native on <var180:Array[Object]>*/;
}
}
{
var183 = ((val* (*)(val* self))(var180->class->vft[COLOR_standard__string__Object__to_s]))(var180) /* to_s on <var180:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var183); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce184) {
var185 = varonce184;
} else {
var186 = "}";
var187 = 1;
var188 = standard___standard__NativeString___to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var185); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
} else {
}
var189 = 1;
var_maybe_null = var189;
var190 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var190); /* Direct call array#Array#init on <var190:Array[String]>*/
}
var_test = var190;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var193 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var193 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
var_t1 = var191;
/* <var_t1:MType> isa MNullableType */
cltype195 = type_nit__MNullableType.color;
idtype196 = type_nit__MNullableType.id;
if(cltype195 >= var_t1->type->table_size) {
var194 = 0;
} else {
var194 = var_t1->type->type_table[cltype195] == idtype196;
}
if (var194){
if (varonce197) {
var198 = varonce197;
} else {
var199 = " != NULL";
var200 = 8;
var201 = standard___standard__NativeString___to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
var202 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var202 = array_instance Array[Object] */
var203 = 2;
var204 = NEW_standard__NativeArray(var203, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var204)->values[0] = (val*) var_value1;
((struct instance_standard__NativeArray*)var204)->values[1] = (val*) var198;
{
((void (*)(val* self, val* p0, long p1))(var202->class->vft[COLOR_standard__array__Array__with_native]))(var202, var204, var203) /* with_native on <var202:Array[Object]>*/;
}
}
{
var205 = ((val* (*)(val* self))(var202->class->vft[COLOR_standard__string__Object__to_s]))(var202) /* to_s on <var202:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var205); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
{
{ /* Inline model#MNullableType#mtype (var_t1) on <var_t1:MType(MNullableType)> */
var208 = var_t1->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_t1:MType(MNullableType)> */
if (unlikely(var208 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var206 = var208;
RET_LABEL207:(void)0;
}
}
var_t1 = var206;
} else {
var209 = 0;
var_maybe_null = var209;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var212 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
var_t2 = var210;
/* <var_t2:MType> isa MNullableType */
cltype214 = type_nit__MNullableType.color;
idtype215 = type_nit__MNullableType.id;
if(cltype214 >= var_t2->type->table_size) {
var213 = 0;
} else {
var213 = var_t2->type->type_table[cltype214] == idtype215;
}
if (var213){
if (varonce216) {
var217 = varonce216;
} else {
var218 = " != NULL";
var219 = 8;
var220 = standard___standard__NativeString___to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
var221 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var221 = array_instance Array[Object] */
var222 = 2;
var223 = NEW_standard__NativeArray(var222, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var223)->values[0] = (val*) var_value2;
((struct instance_standard__NativeArray*)var223)->values[1] = (val*) var217;
{
((void (*)(val* self, val* p0, long p1))(var221->class->vft[COLOR_standard__array__Array__with_native]))(var221, var223, var222) /* with_native on <var221:Array[Object]>*/;
}
}
{
var224 = ((val* (*)(val* self))(var221->class->vft[COLOR_standard__string__Object__to_s]))(var221) /* to_s on <var221:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var224); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
{
{ /* Inline model#MNullableType#mtype (var_t2) on <var_t2:MType(MNullableType)> */
var227 = var_t2->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_t2:MType(MNullableType)> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
var_t2 = var225;
} else {
var228 = 0;
var_maybe_null = var228;
}
var229 = 0;
var_incompatible = var229;
{
var230 = ((val* (*)(val* self))(var_t1->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_t1) /* ctype on <var_t1:MType>*/;
}
if (varonce231) {
var232 = varonce231;
} else {
var233 = "val*";
var234 = 4;
var235 = standard___standard__NativeString___to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
{
{ /* Inline kernel#Object#!= (var230,var232) on <var230:String> */
var_other = var232;
{
var238 = ((short int (*)(val* self, val* p0))(var230->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var230, var_other) /* == on <var230:String>*/;
}
var239 = !var238;
var236 = var239;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
}
if (var236){
var_primitive = var_t1;
{
{ /* Inline kernel#Object#== (var_t1,var_t2) on <var_t1:MType> */
var_other47 = var_t2;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other47) on <var_t1:MType> */
var244 = var_t1 == var_other47;
var242 = var244;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
}
var240 = var242;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
}
if (var240){
} else {
{
var245 = ((val* (*)(val* self))(var_t2->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_t2) /* ctype on <var_t2:MType>*/;
}
if (varonce246) {
var247 = varonce246;
} else {
var248 = "val*";
var249 = 4;
var250 = standard___standard__NativeString___to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
{
{ /* Inline kernel#Object#!= (var245,var247) on <var245:String> */
var_other = var247;
{
var253 = ((short int (*)(val* self, val* p0))(var245->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var245, var_other) /* == on <var245:String>*/;
}
var254 = !var253;
var251 = var254;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
}
if (var251){
var255 = 1;
var_incompatible = var255;
} else {
{
var256 = nit___nit__SeparateCompilerVisitor___can_be_primitive(self, var_value2);
}
if (var256){
if (varonce257) {
var258 = varonce257;
} else {
var259 = "->class == ";
var260 = 11;
var261 = standard___standard__NativeString___to_s_with_length(var259, var260);
var258 = var261;
varonce257 = var258;
}
if (varonce262) {
var263 = varonce262;
} else {
var264 = "->class";
var265 = 7;
var266 = standard___standard__NativeString___to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
var267 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var267 = array_instance Array[Object] */
var268 = 4;
var269 = NEW_standard__NativeArray(var268, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var269)->values[0] = (val*) var_value1;
((struct instance_standard__NativeArray*)var269)->values[1] = (val*) var258;
((struct instance_standard__NativeArray*)var269)->values[2] = (val*) var_value2;
((struct instance_standard__NativeArray*)var269)->values[3] = (val*) var263;
{
((void (*)(val* self, val* p0, long p1))(var267->class->vft[COLOR_standard__array__Array__with_native]))(var267, var269, var268) /* with_native on <var267:Array[Object]>*/;
}
}
{
var270 = ((val* (*)(val* self))(var267->class->vft[COLOR_standard__string__Object__to_s]))(var267) /* to_s on <var267:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var270); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
var271 = 1;
var_incompatible = var271;
}
}
}
} else {
{
var272 = ((val* (*)(val* self))(var_t2->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_t2) /* ctype on <var_t2:MType>*/;
}
if (varonce273) {
var274 = varonce273;
} else {
var275 = "val*";
var276 = 4;
var277 = standard___standard__NativeString___to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
{
{ /* Inline kernel#Object#!= (var272,var274) on <var272:String> */
var_other = var274;
{
var280 = ((short int (*)(val* self, val* p0))(var272->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var272, var_other) /* == on <var272:String>*/;
}
var281 = !var280;
var278 = var281;
goto RET_LABEL279;
RET_LABEL279:(void)0;
}
}
if (var278){
var_primitive = var_t2;
{
var282 = nit___nit__SeparateCompilerVisitor___can_be_primitive(self, var_value1);
}
if (var282){
if (varonce283) {
var284 = varonce283;
} else {
var285 = "->class == ";
var286 = 11;
var287 = standard___standard__NativeString___to_s_with_length(var285, var286);
var284 = var287;
varonce283 = var284;
}
if (varonce288) {
var289 = varonce288;
} else {
var290 = "->class";
var291 = 7;
var292 = standard___standard__NativeString___to_s_with_length(var290, var291);
var289 = var292;
varonce288 = var289;
}
var293 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var293 = array_instance Array[Object] */
var294 = 4;
var295 = NEW_standard__NativeArray(var294, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var295)->values[0] = (val*) var_value1;
((struct instance_standard__NativeArray*)var295)->values[1] = (val*) var284;
((struct instance_standard__NativeArray*)var295)->values[2] = (val*) var_value2;
((struct instance_standard__NativeArray*)var295)->values[3] = (val*) var289;
{
((void (*)(val* self, val* p0, long p1))(var293->class->vft[COLOR_standard__array__Array__with_native]))(var293, var295, var294) /* with_native on <var293:Array[Object]>*/;
}
}
{
var296 = ((val* (*)(val* self))(var293->class->vft[COLOR_standard__string__Object__to_s]))(var293) /* to_s on <var293:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var296); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
var297 = 1;
var_incompatible = var297;
}
} else {
var298 = NULL;
var_primitive = var298;
}
}
if (var_incompatible){
if (var_maybe_null){
if (varonce299) {
var300 = varonce299;
} else {
var301 = " = ";
var302 = 3;
var303 = standard___standard__NativeString___to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
if (varonce304) {
var305 = varonce304;
} else {
var306 = " == ";
var307 = 4;
var308 = standard___standard__NativeString___to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
if (varonce309) {
var310 = varonce309;
} else {
var311 = "; /* incompatible types ";
var312 = 24;
var313 = standard___standard__NativeString___to_s_with_length(var311, var312);
var310 = var313;
varonce309 = var310;
}
if (varonce314) {
var315 = varonce314;
} else {
var316 = " vs. ";
var317 = 5;
var318 = standard___standard__NativeString___to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
if (varonce319) {
var320 = varonce319;
} else {
var321 = "; but may be NULL*/";
var322 = 19;
var323 = standard___standard__NativeString___to_s_with_length(var321, var322);
var320 = var323;
varonce319 = var320;
}
var324 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var324 = array_instance Array[Object] */
var325 = 10;
var326 = NEW_standard__NativeArray(var325, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var326)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var326)->values[1] = (val*) var300;
((struct instance_standard__NativeArray*)var326)->values[2] = (val*) var_value1;
((struct instance_standard__NativeArray*)var326)->values[3] = (val*) var305;
((struct instance_standard__NativeArray*)var326)->values[4] = (val*) var_value2;
((struct instance_standard__NativeArray*)var326)->values[5] = (val*) var310;
((struct instance_standard__NativeArray*)var326)->values[6] = (val*) var_t1;
((struct instance_standard__NativeArray*)var326)->values[7] = (val*) var315;
((struct instance_standard__NativeArray*)var326)->values[8] = (val*) var_t2;
((struct instance_standard__NativeArray*)var326)->values[9] = (val*) var320;
{
((void (*)(val* self, val* p0, long p1))(var324->class->vft[COLOR_standard__array__Array__with_native]))(var324, var326, var325) /* with_native on <var324:Array[Object]>*/;
}
}
{
var327 = ((val* (*)(val* self))(var324->class->vft[COLOR_standard__string__Object__to_s]))(var324) /* to_s on <var324:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var327); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
if (varonce328) {
var329 = varonce328;
} else {
var330 = " = 0; /* incompatible types ";
var331 = 28;
var332 = standard___standard__NativeString___to_s_with_length(var330, var331);
var329 = var332;
varonce328 = var329;
}
if (varonce333) {
var334 = varonce333;
} else {
var335 = " vs. ";
var336 = 5;
var337 = standard___standard__NativeString___to_s_with_length(var335, var336);
var334 = var337;
varonce333 = var334;
}
if (varonce338) {
var339 = varonce338;
} else {
var340 = "; cannot be NULL */";
var341 = 19;
var342 = standard___standard__NativeString___to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
var343 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var343 = array_instance Array[Object] */
var344 = 6;
var345 = NEW_standard__NativeArray(var344, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var345)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var345)->values[1] = (val*) var329;
((struct instance_standard__NativeArray*)var345)->values[2] = (val*) var_t1;
((struct instance_standard__NativeArray*)var345)->values[3] = (val*) var334;
((struct instance_standard__NativeArray*)var345)->values[4] = (val*) var_t2;
((struct instance_standard__NativeArray*)var345)->values[5] = (val*) var339;
{
((void (*)(val* self, val* p0, long p1))(var343->class->vft[COLOR_standard__array__Array__with_native]))(var343, var345, var344) /* with_native on <var343:Array[Object]>*/;
}
}
{
var346 = ((val* (*)(val* self))(var343->class->vft[COLOR_standard__string__Object__to_s]))(var343) /* to_s on <var343:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var346); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
} else {
}
var347 = NULL;
if (var_primitive == NULL) {
var348 = 0; /* is null */
} else {
var348 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_primitive,var347) on <var_primitive:nullable Object(nullable MType)> */
var_other = var347;
{
var351 = ((short int (*)(val* self, val* p0))(var_primitive->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_primitive, var_other) /* == on <var_primitive:nullable MType(MType)>*/;
}
var352 = !var351;
var349 = var352;
goto RET_LABEL350;
RET_LABEL350:(void)0;
}
var348 = var349;
}
if (var348){
if (varonce353) {
var354 = varonce353;
} else {
var355 = "((struct instance_";
var356 = 18;
var357 = standard___standard__NativeString___to_s_with_length(var355, var356);
var354 = var357;
varonce353 = var354;
}
{
var358 = ((val* (*)(val* self))(var_primitive->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_primitive) /* c_name on <var_primitive:nullable Object(MType)>*/;
}
if (varonce359) {
var360 = varonce359;
} else {
var361 = "*)";
var362 = 2;
var363 = standard___standard__NativeString___to_s_with_length(var361, var362);
var360 = var363;
varonce359 = var360;
}
if (varonce364) {
var365 = varonce364;
} else {
var366 = ")->value == ((struct instance_";
var367 = 30;
var368 = standard___standard__NativeString___to_s_with_length(var366, var367);
var365 = var368;
varonce364 = var365;
}
{
var369 = ((val* (*)(val* self))(var_primitive->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_primitive) /* c_name on <var_primitive:nullable Object(MType)>*/;
}
if (varonce370) {
var371 = varonce370;
} else {
var372 = "*)";
var373 = 2;
var374 = standard___standard__NativeString___to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
if (varonce375) {
var376 = varonce375;
} else {
var377 = ")->value";
var378 = 8;
var379 = standard___standard__NativeString___to_s_with_length(var377, var378);
var376 = var379;
varonce375 = var376;
}
var380 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var380 = array_instance Array[Object] */
var381 = 9;
var382 = NEW_standard__NativeArray(var381, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var382)->values[0] = (val*) var354;
((struct instance_standard__NativeArray*)var382)->values[1] = (val*) var358;
((struct instance_standard__NativeArray*)var382)->values[2] = (val*) var360;
((struct instance_standard__NativeArray*)var382)->values[3] = (val*) var_value1;
((struct instance_standard__NativeArray*)var382)->values[4] = (val*) var365;
((struct instance_standard__NativeArray*)var382)->values[5] = (val*) var369;
((struct instance_standard__NativeArray*)var382)->values[6] = (val*) var371;
((struct instance_standard__NativeArray*)var382)->values[7] = (val*) var_value2;
((struct instance_standard__NativeArray*)var382)->values[8] = (val*) var376;
{
((void (*)(val* self, val* p0, long p1))(var380->class->vft[COLOR_standard__array__Array__with_native]))(var380, var382, var381) /* with_native on <var380:Array[Object]>*/;
}
}
{
var383 = ((val* (*)(val* self))(var380->class->vft[COLOR_standard__string__Object__to_s]))(var380) /* to_s on <var380:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var383); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
{
var385 = nit___nit__SeparateCompilerVisitor___can_be_primitive(self, var_value1);
}
var_386 = var385;
if (var385){
{
var387 = nit___nit__SeparateCompilerVisitor___can_be_primitive(self, var_value2);
}
var384 = var387;
} else {
var384 = var_386;
}
if (var384){
if (varonce388) {
var389 = varonce388;
} else {
var390 = "->class == ";
var391 = 11;
var392 = standard___standard__NativeString___to_s_with_length(var390, var391);
var389 = var392;
varonce388 = var389;
}
if (varonce393) {
var394 = varonce393;
} else {
var395 = "->class";
var396 = 7;
var397 = standard___standard__NativeString___to_s_with_length(var395, var396);
var394 = var397;
varonce393 = var394;
}
var398 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var398 = array_instance Array[Object] */
var399 = 4;
var400 = NEW_standard__NativeArray(var399, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var400)->values[0] = (val*) var_value1;
((struct instance_standard__NativeArray*)var400)->values[1] = (val*) var389;
((struct instance_standard__NativeArray*)var400)->values[2] = (val*) var_value2;
((struct instance_standard__NativeArray*)var400)->values[3] = (val*) var394;
{
((void (*)(val* self, val* p0, long p1))(var398->class->vft[COLOR_standard__array__Array__with_native]))(var398, var400, var399) /* with_native on <var398:Array[Object]>*/;
}
}
{
var401 = ((val* (*)(val* self))(var398->class->vft[COLOR_standard__string__Object__to_s]))(var398) /* to_s on <var398:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var401); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
var402 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var402); /* Direct call array#Array#init on <var402:Array[String]>*/
}
var_s = var402;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var405 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var405 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var403 = var405;
RET_LABEL404:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (var403) on <var403:AbstractCompiler(SeparateCompiler)> */
var408 = var403->attrs[COLOR_nit__separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <var403:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var408 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 233);
show_backtrace(1);
}
var406 = var408;
RET_LABEL407:(void)0;
}
}
var_409 = var406;
{
var410 = standard___standard__HashMap___standard__abstract_collection__MapRead__iterator(var_409);
}
var_411 = var410;
for(;;) {
{
var412 = standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok(var_411);
}
if (var412){
{
var413 = standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__key(var_411);
}
var_t = var413;
{
var414 = standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__item(var_411);
}
var415 = ((struct instance_standard__Int*)var414)->value; /* autounbox from nullable Object to Int */;
var_v = var415;
if (varonce416) {
var417 = varonce416;
} else {
var418 = "(";
var419 = 1;
var420 = standard___standard__NativeString___to_s_with_length(var418, var419);
var417 = var420;
varonce416 = var417;
}
if (varonce421) {
var422 = varonce421;
} else {
var423 = "->class->box_kind == ";
var424 = 21;
var425 = standard___standard__NativeString___to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
if (varonce426) {
var427 = varonce426;
} else {
var428 = " && ((struct instance_";
var429 = 22;
var430 = standard___standard__NativeString___to_s_with_length(var428, var429);
var427 = var430;
varonce426 = var427;
}
{
var431 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_t);
}
if (varonce432) {
var433 = varonce432;
} else {
var434 = "*)";
var435 = 2;
var436 = standard___standard__NativeString___to_s_with_length(var434, var435);
var433 = var436;
varonce432 = var433;
}
if (varonce437) {
var438 = varonce437;
} else {
var439 = ")->value == ((struct instance_";
var440 = 30;
var441 = standard___standard__NativeString___to_s_with_length(var439, var440);
var438 = var441;
varonce437 = var438;
}
{
var442 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_t);
}
if (varonce443) {
var444 = varonce443;
} else {
var445 = "*)";
var446 = 2;
var447 = standard___standard__NativeString___to_s_with_length(var445, var446);
var444 = var447;
varonce443 = var444;
}
if (varonce448) {
var449 = varonce448;
} else {
var450 = ")->value)";
var451 = 9;
var452 = standard___standard__NativeString___to_s_with_length(var450, var451);
var449 = var452;
varonce448 = var449;
}
var453 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var453 = array_instance Array[Object] */
var454 = 13;
var455 = NEW_standard__NativeArray(var454, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var455)->values[0] = (val*) var417;
((struct instance_standard__NativeArray*)var455)->values[1] = (val*) var_value1;
((struct instance_standard__NativeArray*)var455)->values[2] = (val*) var422;
var456 = BOX_standard__Int(var_v); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var455)->values[3] = (val*) var456;
((struct instance_standard__NativeArray*)var455)->values[4] = (val*) var427;
((struct instance_standard__NativeArray*)var455)->values[5] = (val*) var431;
((struct instance_standard__NativeArray*)var455)->values[6] = (val*) var433;
((struct instance_standard__NativeArray*)var455)->values[7] = (val*) var_value1;
((struct instance_standard__NativeArray*)var455)->values[8] = (val*) var438;
((struct instance_standard__NativeArray*)var455)->values[9] = (val*) var442;
((struct instance_standard__NativeArray*)var455)->values[10] = (val*) var444;
((struct instance_standard__NativeArray*)var455)->values[11] = (val*) var_value2;
((struct instance_standard__NativeArray*)var455)->values[12] = (val*) var449;
{
((void (*)(val* self, val* p0, long p1))(var453->class->vft[COLOR_standard__array__Array__with_native]))(var453, var455, var454) /* with_native on <var453:Array[Object]>*/;
}
}
{
var457 = ((val* (*)(val* self))(var453->class->vft[COLOR_standard__string__Object__to_s]))(var453) /* to_s on <var453:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_s, var457); /* Direct call array#Array#add on <var_s:Array[String]>*/
}
{
standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__next(var_411); /* Direct call hash_collection#HashMapIterator#next on <var_411:HashMapIterator[MClass, Int]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_411) on <var_411:HashMapIterator[MClass, Int]> */
RET_LABEL458:(void)0;
}
}
if (varonce459) {
var460 = varonce459;
} else {
var461 = "(";
var462 = 1;
var463 = standard___standard__NativeString___to_s_with_length(var461, var462);
var460 = var463;
varonce459 = var460;
}
if (varonce464) {
var465 = varonce464;
} else {
var466 = " || ";
var467 = 4;
var468 = standard___standard__NativeString___to_s_with_length(var466, var467);
var465 = var468;
varonce464 = var465;
}
{
var469 = standard__string___Collection___join(var_s, var465);
}
if (varonce470) {
var471 = varonce470;
} else {
var472 = ")";
var473 = 1;
var474 = standard___standard__NativeString___to_s_with_length(var472, var473);
var471 = var474;
varonce470 = var471;
}
var475 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var475 = array_instance Array[Object] */
var476 = 3;
var477 = NEW_standard__NativeArray(var476, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var477)->values[0] = (val*) var460;
((struct instance_standard__NativeArray*)var477)->values[1] = (val*) var469;
((struct instance_standard__NativeArray*)var477)->values[2] = (val*) var471;
{
((void (*)(val* self, val* p0, long p1))(var475->class->vft[COLOR_standard__array__Array__with_native]))(var475, var477, var476) /* with_native on <var475:Array[Object]>*/;
}
}
{
var478 = ((val* (*)(val* self))(var475->class->vft[COLOR_standard__string__Object__to_s]))(var475) /* to_s on <var475:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var478); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
if (varonce479) {
var480 = varonce479;
} else {
var481 = " = ";
var482 = 3;
var483 = standard___standard__NativeString___to_s_with_length(var481, var482);
var480 = var483;
varonce479 = var480;
}
if (varonce484) {
var485 = varonce484;
} else {
var486 = " == ";
var487 = 4;
var488 = standard___standard__NativeString___to_s_with_length(var486, var487);
var485 = var488;
varonce484 = var485;
}
if (varonce489) {
var490 = varonce489;
} else {
var491 = ";";
var492 = 1;
var493 = standard___standard__NativeString___to_s_with_length(var491, var492);
var490 = var493;
varonce489 = var490;
}
var494 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var494 = array_instance Array[Object] */
var495 = 6;
var496 = NEW_standard__NativeArray(var495, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var496)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var496)->values[1] = (val*) var480;
((struct instance_standard__NativeArray*)var496)->values[2] = (val*) var_value1;
((struct instance_standard__NativeArray*)var496)->values[3] = (val*) var485;
((struct instance_standard__NativeArray*)var496)->values[4] = (val*) var_value2;
((struct instance_standard__NativeArray*)var496)->values[5] = (val*) var490;
{
((void (*)(val* self, val* p0, long p1))(var494->class->vft[COLOR_standard__array__Array__with_native]))(var494, var496, var495) /* with_native on <var494:Array[Object]>*/;
}
}
{
var497 = ((val* (*)(val* self))(var494->class->vft[COLOR_standard__string__Object__to_s]))(var494) /* to_s on <var494:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var497); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
}
if (varonce498) {
var499 = varonce498;
} else {
var500 = " = ";
var501 = 3;
var502 = standard___standard__NativeString___to_s_with_length(var500, var501);
var499 = var502;
varonce498 = var499;
}
if (varonce503) {
var504 = varonce503;
} else {
var505 = " == ";
var506 = 4;
var507 = standard___standard__NativeString___to_s_with_length(var505, var506);
var504 = var507;
varonce503 = var504;
}
if (varonce508) {
var509 = varonce508;
} else {
var510 = " || (";
var511 = 5;
var512 = standard___standard__NativeString___to_s_with_length(var510, var511);
var509 = var512;
varonce508 = var509;
}
if (varonce513) {
var514 = varonce513;
} else {
var515 = " && ";
var516 = 4;
var517 = standard___standard__NativeString___to_s_with_length(var515, var516);
var514 = var517;
varonce513 = var514;
}
{
var518 = standard__string___Collection___join(var_test, var514);
}
if (varonce519) {
var520 = varonce519;
} else {
var521 = ");";
var522 = 2;
var523 = standard___standard__NativeString___to_s_with_length(var521, var522);
var520 = var523;
varonce519 = var520;
}
var524 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var524 = array_instance Array[Object] */
var525 = 8;
var526 = NEW_standard__NativeArray(var525, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var526)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var526)->values[1] = (val*) var499;
((struct instance_standard__NativeArray*)var526)->values[2] = (val*) var_value1;
((struct instance_standard__NativeArray*)var526)->values[3] = (val*) var504;
((struct instance_standard__NativeArray*)var526)->values[4] = (val*) var_value2;
((struct instance_standard__NativeArray*)var526)->values[5] = (val*) var509;
((struct instance_standard__NativeArray*)var526)->values[6] = (val*) var518;
((struct instance_standard__NativeArray*)var526)->values[7] = (val*) var520;
{
((void (*)(val* self, val* p0, long p1))(var524->class->vft[COLOR_standard__array__Array__with_native]))(var524, var526, var525) /* with_native on <var524:Array[Object]>*/;
}
}
{
var527 = ((val* (*)(val* self))(var524->class->vft[COLOR_standard__string__Object__to_s]))(var524) /* to_s on <var524:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var527); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#can_be_primitive for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int nit___nit__SeparateCompilerVisitor___can_be_primitive(val* self, val* p0) {
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
short int var7 /* : Bool */;
val* var8 /* : MClass */;
val* var10 /* : MClass */;
val* var11 /* : MClassKind */;
val* var13 /* : MClassKind */;
val* var_k /* var k: MClassKind */;
short int var14 /* : Bool */;
val* var15 /* : MClassKind */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
val* var21 /* : String */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
short int var26 /* : Bool */;
val* var_other28 /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val* self))(var1->class->vft[COLOR_nit__model__MType__as_notnullable]))(var1) /* as_notnullable on <var1:MType>*/;
}
var_t = var4;
/* <var_t:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_t->type->table_size) {
var5 = 0;
} else {
var5 = var_t->type->type_table[cltype] == idtype;
}
var6 = !var5;
if (var6){
var7 = 0;
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_t) on <var_t:MType(MClassType)> */
var10 = var_t->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_t:MType(MClassType)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var8) on <var8:MClass> */
var13 = var8->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var8:MClass> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_k = var11;
{
var15 = nit__model___standard__Object___interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var_k,var15) on <var_k:MClassKind> */
var_other = var15;
{
{ /* Inline kernel#Object#is_same_instance (var_k,var_other) on <var_k:MClassKind> */
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
var14 = var_;
} else {
{
var21 = nit__abstract_compiler___MClassType___MType__ctype(var_t);
}
if (varonce) {
var22 = varonce;
} else {
var23 = "val*";
var24 = 4;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
{
{ /* Inline kernel#Object#!= (var21,var22) on <var21:String> */
var_other28 = var22;
{
var29 = ((short int (*)(val* self, val* p0))(var21->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var21, var_other28) /* == on <var21:String>*/;
}
var30 = !var29;
var26 = var30;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var14 = var26;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#maybe_null for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int nit___nit__SeparateCompilerVisitor___maybe_null(val* self, val* p0) {
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
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_t = var1;
/* <var_t:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
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
cltype7 = type_nit__MNullType.color;
idtype8 = type_nit__MNullType.id;
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
/* method separate_compiler#SeparateCompilerVisitor#array_instance for (self: SeparateCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : MClass */;
val* var_arrayclass /* var arrayclass: MClass */;
val* var12 /* : Array[MType] */;
long var13 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var14 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var15 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
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
long var35 /* : Int */;
long var37 /* : Int */;
val* var38 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
val* var39 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
long var40 /* : Int */;
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
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
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
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : Object */;
val* var82 /* : String */;
long var83 /* : Int */;
long var84 /* : Int */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : MClassDef */;
val* var92 /* : MClassDef */;
val* var93 /* : MClassType */;
val* var95 /* : MClassType */;
val* var96 /* : MMethod */;
val* var97 /* : Array[RuntimeVariable] */;
long var98 /* : Int */;
val* var_99 /* var : Array[RuntimeVariable] */;
val* var100 /* : nullable RuntimeVariable */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
var_array = p0;
var_elttype = p1;
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
if (varonce6) {
var7 = varonce6;
} else {
var8 = "Array";
var9 = 5;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
{
var11 = nit___nit__AbstractCompilerVisitor___get_class(self, var7);
}
var_arrayclass = var11;
var12 = NEW_standard__Array(&type_standard__Array__nit__MType);
var13 = 1;
{
standard___standard__Array___with_capacity(var12, var13); /* Direct call array#Array#with_capacity on <var12:Array[MType]>*/
}
var_ = var12;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var14 = nit___nit__MClass___get_mtype(var_arrayclass, var_);
}
var_arraytype = var14;
{
var15 = ((val* (*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_arraytype) /* init_instance on <self:SeparateCompilerVisitor>*/;
}
var_res = var15;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "{ /* ";
var19 = 5;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " = array_instance Array[";
var24 = 24;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "] */";
var29 = 4;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_standard__NativeArray(var32, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var33)->values[0] = (val*) var17;
((struct instance_standard__NativeArray*)var33)->values[1] = (val*) var_res;
((struct instance_standard__NativeArray*)var33)->values[2] = (val*) var22;
((struct instance_standard__NativeArray*)var33)->values[3] = (val*) var_elttype;
((struct instance_standard__NativeArray*)var33)->values[4] = (val*) var27;
{
((void (*)(val* self, val* p0, long p1))(var31->class->vft[COLOR_standard__array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
}
{
var34 = ((val* (*)(val* self))(var31->class->vft[COLOR_standard__string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[RuntimeVariable]> */
var37 = var_array->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit___nit__AbstractCompilerVisitor___int_instance(self, var35);
}
var_length = var38;
{
var39 = ((val* (*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(self, var_elttype, var_length) /* native_array_instance on <self:SeparateCompilerVisitor>*/;
}
var_nat = var39;
var40 = 0;
var_i = var40;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[RuntimeVariable]> */
var43 = var_array->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_44 = var41;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_44) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_44:Int> isa OTHER */
/* <var_44:Int> isa OTHER */
var47 = 1; /* easy <var_44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var48 = var_i < var_44;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
var49 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
{
var50 = nit___nit__AbstractCompilerVisitor___object_type(self);
}
{
var51 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var49, var50);
}
var_r = var51;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "((struct instance_";
var55 = 18;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
var57 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "*)";
var61 = 2;
var62 = standard___standard__NativeString___to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = ")->values[";
var66 = 10;
var67 = standard___standard__NativeString___to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "] = (val*) ";
var71 = 11;
var72 = standard___standard__NativeString___to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = ";";
var76 = 1;
var77 = standard___standard__NativeString___to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 9;
var80 = NEW_standard__NativeArray(var79, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var80)->values[0] = (val*) var53;
((struct instance_standard__NativeArray*)var80)->values[1] = (val*) var57;
((struct instance_standard__NativeArray*)var80)->values[2] = (val*) var59;
((struct instance_standard__NativeArray*)var80)->values[3] = (val*) var_nat;
((struct instance_standard__NativeArray*)var80)->values[4] = (val*) var64;
var81 = BOX_standard__Int(var_i); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var80)->values[5] = (val*) var81;
((struct instance_standard__NativeArray*)var80)->values[6] = (val*) var69;
((struct instance_standard__NativeArray*)var80)->values[7] = (val*) var_r;
((struct instance_standard__NativeArray*)var80)->values[8] = (val*) var74;
{
((void (*)(val* self, val* p0, long p1))(var78->class->vft[COLOR_standard__array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var82 = ((val* (*)(val* self))(var78->class->vft[COLOR_standard__string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var82); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var83 = 1;
{
var84 = standard___standard__Int___Discrete__successor(var_i, var83);
}
var_i = var84;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (varonce85) {
var86 = varonce85;
} else {
var87 = "with_native";
var88 = 11;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
{ /* Inline model#MClass#intro (var_arrayclass) on <var_arrayclass:MClass> */
var92 = var_arrayclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_arrayclass:MClass> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var90) on <var90:MClassDef> */
var95 = var90->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var90:MClassDef> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
var96 = nit___nit__AbstractCompilerVisitor___get_property(self, var86, var93);
}
var97 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var98 = 3;
{
standard___standard__Array___with_capacity(var97, var98); /* Direct call array#Array#with_capacity on <var97:Array[RuntimeVariable]>*/
}
var_99 = var97;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_99, var_res); /* Direct call array#AbstractArray#push on <var_99:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_99, var_nat); /* Direct call array#AbstractArray#push on <var_99:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_99, var_length); /* Direct call array#AbstractArray#push on <var_99:Array[RuntimeVariable]>*/
}
{
var100 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(self, var96, var_99);
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "}";
var104 = 1;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_instance for (self: SeparateCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_elttype /* var elttype: MType */;
val* var_length /* var length: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var6 /* : Array[MType] */;
long var7 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var8 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : MClass */;
val* var16 /* : MClass */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
short int var22 /* : Bool */;
int cltype;
int idtype;
val* var23 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
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
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : MClass */;
val* var54 /* : MClass */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
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
val* var81 /* : RuntimeVariable */;
val* var82 /* : Set[MType] */;
val* var84 /* : Set[MType] */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : String */;
val* var91 /* : Array[Object] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[Object] */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
val* var100 /* : MClass */;
val* var102 /* : MClass */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : FlatString */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
val* var120 /* : Array[Object] */;
long var121 /* : Int */;
val* var122 /* : NativeArray[Object] */;
val* var123 /* : String */;
val* var124 /* : RuntimeVariable */;
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
var8 = nit___nit__MClass___get_mtype(var5, var_);
}
var_mtype = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "NEW_";
var12 = 4;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var16 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nit___nit__MClass___nit__model_base__MEntity__c_name(var14);
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 2;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var10;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var17;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var22 = 0;
} else {
var22 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1722);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_compiler = var23;
{
{ /* Inline model#MGenericType#need_anchor (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var28 = var_mtype->attrs[COLOR_nit__model__MGenericType___need_anchor].s; /* _need_anchor on <var_mtype:MClassType(MGenericType)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26){
{
nit___nit__SeparateCompilerVisitor___hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var31 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1726);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var29) on <var29:nullable StaticFrame> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var34 = var29->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var29:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var32) on <var32:MPropDef> */
var37 = var32->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var32:MPropDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
nit___nit__SeparateCompilerVisitor___link_unresolved_type(self, var35, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var40 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1727);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var38) on <var38:nullable StaticFrame> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var43 = var38->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var38:nullable StaticFrame> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = standard___standard__SequenceRead___Collection__first(var41);
}
var_recv = var44;
{
var45 = nit___nit__SeparateCompilerVisitor___type_info(self, var_recv);
}
var_recv_type_info = var45;
{
var46 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "NEW_";
var50 = 4;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var54 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = nit___nit__MClass___nit__model_base__MEntity__c_name(var52);
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "(";
var59 = 1;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = ", ";
var64 = 2;
var65 = standard___standard__NativeString___to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "->resolution_table->types[";
var69 = 26;
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
var71 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "])";
var75 = 2;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 9;
var79 = NEW_standard__NativeArray(var78, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var79)->values[0] = (val*) var48;
((struct instance_standard__NativeArray*)var79)->values[1] = (val*) var55;
((struct instance_standard__NativeArray*)var79)->values[2] = (val*) var57;
((struct instance_standard__NativeArray*)var79)->values[3] = (val*) var_length;
((struct instance_standard__NativeArray*)var79)->values[4] = (val*) var62;
((struct instance_standard__NativeArray*)var79)->values[5] = (val*) var_recv_type_info;
((struct instance_standard__NativeArray*)var79)->values[6] = (val*) var67;
((struct instance_standard__NativeArray*)var79)->values[7] = (val*) var71;
((struct instance_standard__NativeArray*)var79)->values[8] = (val*) var73;
{
((void (*)(val* self, val* p0, long p1))(var77->class->vft[COLOR_standard__array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val* self))(var77->class->vft[COLOR_standard__string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
}
{
var81 = nit___nit__AbstractCompilerVisitor___new_expr(self, var80, var_mtype);
}
var = var81;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var84 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 121);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var82->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var82, var_mtype) /* add on <var82:Set[MType]>*/;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "type_";
var88 = 5;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
var90 = nit___nit__MGenericType___nit__model_base__MEntity__c_name(var_mtype);
}
var91 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 2;
var93 = NEW_standard__NativeArray(var92, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var93)->values[0] = (val*) var86;
((struct instance_standard__NativeArray*)var93)->values[1] = (val*) var90;
{
((void (*)(val* self, val* p0, long p1))(var91->class->vft[COLOR_standard__array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
}
{
var94 = ((val* (*)(val* self))(var91->class->vft[COLOR_standard__string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var94); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = "NEW_";
var98 = 4;
var99 = standard___standard__NativeString___to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var102 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = nit___nit__MClass___nit__model_base__MEntity__c_name(var100);
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = "(";
var107 = 1;
var108 = standard___standard__NativeString___to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = ", &type_";
var112 = 8;
var113 = standard___standard__NativeString___to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
{
var114 = nit___nit__MGenericType___nit__model_base__MEntity__c_name(var_mtype);
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = ")";
var118 = 1;
var119 = standard___standard__NativeString___to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var120 = array_instance Array[Object] */
var121 = 7;
var122 = NEW_standard__NativeArray(var121, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var122)->values[0] = (val*) var96;
((struct instance_standard__NativeArray*)var122)->values[1] = (val*) var103;
((struct instance_standard__NativeArray*)var122)->values[2] = (val*) var105;
((struct instance_standard__NativeArray*)var122)->values[3] = (val*) var_length;
((struct instance_standard__NativeArray*)var122)->values[4] = (val*) var110;
((struct instance_standard__NativeArray*)var122)->values[5] = (val*) var114;
((struct instance_standard__NativeArray*)var122)->values[6] = (val*) var116;
{
((void (*)(val* self, val* p0, long p1))(var120->class->vft[COLOR_standard__array__Array__with_native]))(var120, var122, var121) /* with_native on <var120:Array[Object]>*/;
}
}
{
var123 = ((val* (*)(val* self))(var120->class->vft[COLOR_standard__string__Object__to_s]))(var120) /* to_s on <var120:Array[Object]>*/;
}
{
var124 = nit___nit__AbstractCompilerVisitor___new_expr(self, var123, var_mtype);
}
var = var124;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_def for (self: SeparateCompilerVisitor, String, nullable MType, Array[RuntimeVariable]) */
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
val* var_pname /* var pname: String */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_elttype /* var elttype: MType */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var8 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
long var20 /* : Int */;
val* var21 /* : nullable Object */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var_recv /* var recv: String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
short int var36 /* : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
long var42 /* : Int */;
val* var43 /* : nullable Object */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
val* var53 /* : RuntimeVariable */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
long var65 /* : Int */;
val* var66 /* : nullable Object */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
long var72 /* : Int */;
val* var73 /* : nullable Object */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : Array[Object] */;
long var80 /* : Int */;
val* var81 /* : NativeArray[Object] */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
short int var88 /* : Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
long var100 /* : Int */;
val* var101 /* : nullable Object */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var109 /* : NativeArray[Object] */;
val* var110 /* : String */;
val* var111 /* : RuntimeVariable */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
short int var117 /* : Bool */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
long var129 /* : Int */;
val* var130 /* : nullable Object */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
val* var136 /* : Array[Object] */;
long var137 /* : Int */;
val* var138 /* : NativeArray[Object] */;
val* var139 /* : String */;
val* var_recv1 /* var recv1: String */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : FlatString */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : FlatString */;
long var155 /* : Int */;
val* var156 /* : nullable Object */;
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
val* var168 /* : Array[Object] */;
long var169 /* : Int */;
val* var170 /* : NativeArray[Object] */;
val* var171 /* : String */;
var_pname = p0;
var_ret_type = p1;
var_arguments = p2;
{
var = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var) on <var:nullable Object(RuntimeVariable)> */
var3 = var->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var:nullable Object(RuntimeVariable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_elttype = var1;
if (varonce) {
var4 = varonce;
} else {
var5 = "NativeArray";
var6 = 11;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = nit___nit__AbstractCompilerVisitor___get_class(self, var4);
}
var_nclass = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "((struct instance_";
var12 = 18;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "*)";
var18 = 2;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = 0;
{
var21 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var20);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = ")->values";
var25 = 9;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 5;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var10;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var14;
((struct instance_standard__NativeArray*)var29)->values[2] = (val*) var16;
((struct instance_standard__NativeArray*)var29)->values[3] = (val*) var21;
((struct instance_standard__NativeArray*)var29)->values[4] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
var_recv = var30;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "[]";
var34 = 2;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
var36 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var32) /* == on <var_pname:String>*/;
}
if (var36){
if (varonce37) {
var38 = varonce37;
} else {
var39 = "[";
var40 = 1;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = 1;
{
var43 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var42);
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "]";
var47 = 1;
var48 = standard___standard__NativeString___to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 4;
var51 = NEW_standard__NativeArray(var50, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var51)->values[0] = (val*) var_recv;
((struct instance_standard__NativeArray*)var51)->values[1] = (val*) var38;
((struct instance_standard__NativeArray*)var51)->values[2] = (val*) var43;
((struct instance_standard__NativeArray*)var51)->values[3] = (val*) var45;
{
((void (*)(val* self, val* p0, long p1))(var49->class->vft[COLOR_standard__array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
}
{
var52 = ((val* (*)(val* self))(var49->class->vft[COLOR_standard__string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
}
if (unlikely(var_ret_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1743);
show_backtrace(1);
}
{
var53 = nit___nit__AbstractCompilerVisitor___new_expr(self, var52, var_ret_type);
}
{
nit___nit__AbstractCompilerVisitor___ret(self, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce54) {
var55 = varonce54;
} else {
var56 = "[]=";
var57 = 3;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
var59 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var55) /* == on <var_pname:String>*/;
}
if (var59){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "[";
var63 = 1;
var64 = standard___standard__NativeString___to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = 1;
{
var66 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var65);
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "]=";
var70 = 2;
var71 = standard___standard__NativeString___to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = 2;
{
var73 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var72);
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = ";";
var77 = 1;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var79 = array_instance Array[Object] */
var80 = 6;
var81 = NEW_standard__NativeArray(var80, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var81)->values[0] = (val*) var_recv;
((struct instance_standard__NativeArray*)var81)->values[1] = (val*) var61;
((struct instance_standard__NativeArray*)var81)->values[2] = (val*) var66;
((struct instance_standard__NativeArray*)var81)->values[3] = (val*) var68;
((struct instance_standard__NativeArray*)var81)->values[4] = (val*) var73;
((struct instance_standard__NativeArray*)var81)->values[5] = (val*) var75;
{
((void (*)(val* self, val* p0, long p1))(var79->class->vft[COLOR_standard__array__Array__with_native]))(var79, var81, var80) /* with_native on <var79:Array[Object]>*/;
}
}
{
var82 = ((val* (*)(val* self))(var79->class->vft[COLOR_standard__string__Object__to_s]))(var79) /* to_s on <var79:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var82); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce83) {
var84 = varonce83;
} else {
var85 = "length";
var86 = 6;
var87 = standard___standard__NativeString___to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
var88 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var84) /* == on <var_pname:String>*/;
}
if (var88){
if (varonce89) {
var90 = varonce89;
} else {
var91 = "((struct instance_";
var92 = 18;
var93 = standard___standard__NativeString___to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
{
var94 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = "*)";
var98 = 2;
var99 = standard___standard__NativeString___to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
var100 = 0;
{
var101 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var100);
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = ")->length";
var105 = 9;
var106 = standard___standard__NativeString___to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 5;
var109 = NEW_standard__NativeArray(var108, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var109)->values[0] = (val*) var90;
((struct instance_standard__NativeArray*)var109)->values[1] = (val*) var94;
((struct instance_standard__NativeArray*)var109)->values[2] = (val*) var96;
((struct instance_standard__NativeArray*)var109)->values[3] = (val*) var101;
((struct instance_standard__NativeArray*)var109)->values[4] = (val*) var103;
{
((void (*)(val* self, val* p0, long p1))(var107->class->vft[COLOR_standard__array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
}
{
var110 = ((val* (*)(val* self))(var107->class->vft[COLOR_standard__string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
}
if (unlikely(var_ret_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1749);
show_backtrace(1);
}
{
var111 = nit___nit__AbstractCompilerVisitor___new_expr(self, var110, var_ret_type);
}
{
nit___nit__AbstractCompilerVisitor___ret(self, var111); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce112) {
var113 = varonce112;
} else {
var114 = "copy_to";
var115 = 7;
var116 = standard___standard__NativeString___to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
{
var117 = ((short int (*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var113) /* == on <var_pname:String>*/;
}
if (var117){
if (varonce118) {
var119 = varonce118;
} else {
var120 = "((struct instance_";
var121 = 18;
var122 = standard___standard__NativeString___to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
{
var123 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "*)";
var127 = 2;
var128 = standard___standard__NativeString___to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = 1;
{
var130 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var129);
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = ")->values";
var134 = 9;
var135 = standard___standard__NativeString___to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var136 = array_instance Array[Object] */
var137 = 5;
var138 = NEW_standard__NativeArray(var137, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var138)->values[0] = (val*) var119;
((struct instance_standard__NativeArray*)var138)->values[1] = (val*) var123;
((struct instance_standard__NativeArray*)var138)->values[2] = (val*) var125;
((struct instance_standard__NativeArray*)var138)->values[3] = (val*) var130;
((struct instance_standard__NativeArray*)var138)->values[4] = (val*) var132;
{
((void (*)(val* self, val* p0, long p1))(var136->class->vft[COLOR_standard__array__Array__with_native]))(var136, var138, var137) /* with_native on <var136:Array[Object]>*/;
}
}
{
var139 = ((val* (*)(val* self))(var136->class->vft[COLOR_standard__string__Object__to_s]))(var136) /* to_s on <var136:Array[Object]>*/;
}
var_recv1 = var139;
if (varonce140) {
var141 = varonce140;
} else {
var142 = "memmove(";
var143 = 8;
var144 = standard___standard__NativeString___to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = ", ";
var148 = 2;
var149 = standard___standard__NativeString___to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
if (varonce150) {
var151 = varonce150;
} else {
var152 = ", ";
var153 = 2;
var154 = standard___standard__NativeString___to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
var155 = 2;
{
var156 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var155);
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = "*sizeof(";
var160 = 8;
var161 = standard___standard__NativeString___to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
{
var162 = ((val* (*)(val* self))(var_elttype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_elttype) /* ctype on <var_elttype:MType>*/;
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = "));";
var166 = 3;
var167 = standard___standard__NativeString___to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var168 = array_instance Array[Object] */
var169 = 9;
var170 = NEW_standard__NativeArray(var169, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var170)->values[0] = (val*) var141;
((struct instance_standard__NativeArray*)var170)->values[1] = (val*) var_recv1;
((struct instance_standard__NativeArray*)var170)->values[2] = (val*) var146;
((struct instance_standard__NativeArray*)var170)->values[3] = (val*) var_recv;
((struct instance_standard__NativeArray*)var170)->values[4] = (val*) var151;
((struct instance_standard__NativeArray*)var170)->values[5] = (val*) var156;
((struct instance_standard__NativeArray*)var170)->values[6] = (val*) var158;
((struct instance_standard__NativeArray*)var170)->values[7] = (val*) var162;
((struct instance_standard__NativeArray*)var170)->values[8] = (val*) var164;
{
((void (*)(val* self, val* p0, long p1))(var168->class->vft[COLOR_standard__array__Array__with_native]))(var168, var170, var169) /* with_native on <var168:Array[Object]>*/;
}
}
{
var171 = ((val* (*)(val* self))(var168->class->vft[COLOR_standard__string__Object__to_s]))(var168) /* to_s on <var168:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var171); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#calloc_array for (self: SeparateCompilerVisitor, MType, Array[RuntimeVariable]) */
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
val* var_ret_type /* var ret_type: MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var5 /* : Array[MParameterType] */;
val* var7 /* : Array[MParameterType] */;
val* var8 /* : nullable Object */;
val* var_ft /* var ft: MParameterType */;
long var9 /* : Int */;
val* var10 /* : nullable Object */;
val* var11 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
var_ret_type = p0;
var_arguments = p1;
if (varonce) {
var = varonce;
} else {
var1 = "ArrayCapable";
var2 = 12;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = nit___nit__AbstractCompilerVisitor___get_class(self, var);
}
var_mclass = var4;
{
{ /* Inline model#MClass#mparameters (var_mclass) on <var_mclass:MClass> */
var7 = var_mclass->attrs[COLOR_nit__model__MClass___mparameters].val; /* _mparameters on <var_mclass:MClass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 368);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = standard___standard__SequenceRead___Collection__first(var5);
}
var_ft = var8;
var9 = 1;
{
var10 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var9);
}
{
var11 = ((val* (*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(self, var_ft, var10) /* native_array_instance on <self:SeparateCompilerVisitor>*/;
}
var_res = var11;
{
nit___nit__AbstractCompilerVisitor___ret(self, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#link_unresolved_type for (self: SeparateCompilerVisitor, MClassDef, MType) */
void nit___nit__SeparateCompilerVisitor___link_unresolved_type(val* self, val* p0, val* p1) {
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var4 /* : Map[MClassDef, Set[MType]] */;
val* var6 /* : Map[MClassDef, Set[MType]] */;
val* var7 /* : nullable StaticFrame */;
val* var9 /* : nullable StaticFrame */;
val* var10 /* : MPropDef */;
val* var12 /* : MPropDef */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Map[MClassDef, Set[MType]] */;
val* var20 /* : Map[MClassDef, Set[MType]] */;
val* var21 /* : nullable StaticFrame */;
val* var23 /* : nullable StaticFrame */;
val* var24 /* : MPropDef */;
val* var26 /* : MPropDef */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : HashSet[MType] */;
val* var31 /* : Map[MClassDef, Set[MType]] */;
val* var33 /* : Map[MClassDef, Set[MType]] */;
val* var34 /* : nullable StaticFrame */;
val* var36 /* : nullable StaticFrame */;
val* var37 /* : MPropDef */;
val* var39 /* : MPropDef */;
val* var40 /* : MClassDef */;
val* var42 /* : MClassDef */;
val* var43 /* : nullable Object */;
var_mclassdef = p0;
var_mtype = p1;
{
var = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1767);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_compiler = var1;
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var6 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 122);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var9 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1769);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var7) on <var7:nullable StaticFrame> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var12 = var7->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var7:nullable StaticFrame> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var10) on <var10:MPropDef> */
var15 = var10->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var10:MPropDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = standard___standard__MapRead___has_key(var4, var13);
}
var17 = !var16;
if (var17){
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var20 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 122);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var23 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1770);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var21) on <var21:nullable StaticFrame> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var26 = var21->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var21:nullable StaticFrame> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var24) on <var24:MPropDef> */
var29 = var24->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var24:MPropDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = NEW_standard__HashSet(&type_standard__HashSet__nit__MType);
{
standard___standard__HashSet___standard__kernel__Object__init(var30); /* Direct call hash_collection#HashSet#init on <var30:HashSet[MType]>*/
}
{
((void (*)(val* self, val* p0, val* p1))(var18->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var18, var27, var30) /* []= on <var18:Map[MClassDef, Set[MType]]>*/;
}
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var33 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 122);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var36 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1772);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var34) on <var34:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var39 = var34->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var34:nullable StaticFrame> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var37) on <var37:MPropDef> */
var42 = var37->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var37:MPropDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val* (*)(val* self, val* p0))(var31->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var31, var40) /* [] on <var31:Map[MClassDef, Set[MType]]>*/;
}
{
((void (*)(val* self, val* p0))(var43->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var43, var_mtype) /* add on <var43:nullable Object(Set[MType])>*/;
}
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#separate_runtime_function for (self: MMethodDef): SeparateRuntimeFunction */
val* nit__separate_compiler___MMethodDef___separate_runtime_function(val* self) {
val* var /* : SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
val* var3 /* : nullable SeparateRuntimeFunction */;
val* var_res /* var res: nullable SeparateRuntimeFunction */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MClassDef */;
val* var13 /* : MClassDef */;
val* var14 /* : MClassType */;
val* var16 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var17 /* : nullable MSignature */;
val* var19 /* : nullable MSignature */;
val* var20 /* : MClassDef */;
val* var22 /* : MClassDef */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
short int var26 /* : Bool */;
val* var27 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var28 /* : SeparateRuntimeFunction */;
val* var29 /* : String */;
{
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_nit__separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var4) on <var_res:nullable SeparateRuntimeFunction> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var10 = var_res == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MMethodDef> */
var13 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MMethodDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var11) on <var11:MClassDef> */
var16 = var11->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var11:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_recv = var14;
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var19 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MMethodDef> */
var22 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MMethodDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var20) on <var20:MClassDef> */
var25 = var20->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var20:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var26 = 1;
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1783);
show_backtrace(1);
} else {
var27 = nit___nit__MSignature___MType__resolve_for(var17, var_recv, var_recv, var23, var26);
}
var_msignature = var27;
var28 = NEW_nit__SeparateRuntimeFunction(&type_nit__SeparateRuntimeFunction);
{
var29 = nit___nit__MPropDef___nit__model_base__MEntity__c_name(self);
}
{
((void (*)(val* self, val* p0))(var28->class->vft[COLOR_nit__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var28, self) /* mmethoddef= on <var28:SeparateRuntimeFunction>*/;
}
{
((void (*)(val* self, val* p0))(var28->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__called_recv_61d]))(var28, var_recv) /* called_recv= on <var28:SeparateRuntimeFunction>*/;
}
{
((void (*)(val* self, val* p0))(var28->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__called_signature_61d]))(var28, var_msignature) /* called_signature= on <var28:SeparateRuntimeFunction>*/;
}
{
((void (*)(val* self, val* p0))(var28->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__build_c_name_61d]))(var28, var29) /* build_c_name= on <var28:SeparateRuntimeFunction>*/;
}
{
((void (*)(val* self))(var28->class->vft[COLOR_standard__kernel__Object__init]))(var28) /* init on <var28:SeparateRuntimeFunction>*/;
}
var_res = var28;
{
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nit__separate_compiler__MMethodDef___separate_runtime_function_cache].val = var_res; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL30:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache for (self: MMethodDef): nullable SeparateRuntimeFunction */
val* nit__separate_compiler___MMethodDef___separate_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
var1 = self->attrs[COLOR_nit__separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache= for (self: MMethodDef, nullable SeparateRuntimeFunction) */
void nit__separate_compiler___MMethodDef___separate_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__MMethodDef___separate_runtime_function_cache].val = p0; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function for (self: MMethodDef): SeparateRuntimeFunction */
val* nit__separate_compiler___MMethodDef___virtual_runtime_function(val* self) {
val* var /* : SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
val* var3 /* : nullable SeparateRuntimeFunction */;
val* var_res /* var res: nullable SeparateRuntimeFunction */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MProperty */;
val* var13 /* : MProperty */;
val* var14 /* : MPropDef */;
val* var16 /* : MPropDef */;
val* var17 /* : MClassDef */;
val* var19 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var20 /* : MClassType */;
val* var22 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var23 /* : SeparateRuntimeFunction */;
val* var24 /* : MType */;
val* var26 /* : MType */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
val* var33 /* : MProperty */;
val* var35 /* : MProperty */;
val* var36 /* : MPropDef */;
val* var38 /* : MPropDef */;
val* var39 /* : nullable MSignature */;
val* var41 /* : nullable MSignature */;
val* var42 /* : MModule */;
val* var44 /* : MModule */;
short int var45 /* : Bool */;
val* var46 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var47 /* : Bool */;
val* var48 /* : String */;
val* var49 /* : MType */;
val* var51 /* : MType */;
val* var52 /* : String */;
short int var53 /* : Bool */;
short int var_ /* var : Bool */;
val* var54 /* : MSignature */;
val* var56 /* : MSignature */;
short int var57 /* : Bool */;
val* var59 /* : SeparateRuntimeFunction */;
static val* varonce;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
val* var65 /* : Array[Object] */;
long var66 /* : Int */;
val* var67 /* : NativeArray[Object] */;
val* var68 /* : String */;
short int var70 /* : Bool */;
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var4) on <var_res:nullable SeparateRuntimeFunction> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var10 = var_res == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var13 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var11) on <var11:MProperty(MMethod)> */
var16 = var11->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var11:MProperty(MMethod)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var14) on <var14:MPropDef(MMethodDef)> */
var19 = var14->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var14:MPropDef(MMethodDef)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_intromclassdef = var17;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var22 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_recv = var20;
{
var23 = nit__separate_compiler___MMethodDef___separate_runtime_function(self);
}
var_res = var23;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_recv (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var26 = var_res->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1845);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var24,var_recv) on <var24:MType> */
var_other = var_recv;
{
{ /* Inline kernel#Object#is_same_instance (var24,var_other) on <var24:MType> */
var31 = var24 == var_other;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL32:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var35 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var33) on <var33:MProperty(MMethod)> */
var38 = var33->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var33:MProperty(MMethod)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var36) on <var36:MPropDef(MMethodDef)> */
var41 = var36->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var36:MPropDef(MMethodDef)> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var44 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
var45 = 1;
if (var39 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1808);
show_backtrace(1);
} else {
var46 = nit___nit__MSignature___MType__resolve_for(var39, var_recv, var_recv, var42, var45);
}
var_msignature = var46;
{
var48 = nit__abstract_compiler___MClassType___MType__ctype(var_recv);
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_recv (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var51 = var_res->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1845);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = ((val* (*)(val* self))(var49->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var49) /* ctype on <var49:MType>*/;
}
{
var53 = ((short int (*)(val* self, val* p0))(var48->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var48, var52) /* == on <var48:String>*/;
}
var_ = var53;
if (var53){
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var56 = var_res->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1848);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nit__separate_compiler___MSignature___c_equiv(var_msignature, var54);
}
var47 = var57;
} else {
var47 = var_;
}
if (var47){
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL58:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
var59 = NEW_nit__SeparateRuntimeFunction(&type_nit__SeparateRuntimeFunction);
if (varonce) {
var60 = varonce;
} else {
var61 = "VIRTUAL_";
var62 = 8;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce = var60;
}
{
var64 = nit___nit__MPropDef___nit__model_base__MEntity__c_name(self);
}
var65 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 2;
var67 = NEW_standard__NativeArray(var66, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var67)->values[0] = (val*) var60;
((struct instance_standard__NativeArray*)var67)->values[1] = (val*) var64;
{
((void (*)(val* self, val* p0, long p1))(var65->class->vft[COLOR_standard__array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
}
{
var68 = ((val* (*)(val* self))(var65->class->vft[COLOR_standard__string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
}
{
((void (*)(val* self, val* p0))(var59->class->vft[COLOR_nit__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var59, self) /* mmethoddef= on <var59:SeparateRuntimeFunction>*/;
}
{
((void (*)(val* self, val* p0))(var59->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__called_recv_61d]))(var59, var_recv) /* called_recv= on <var59:SeparateRuntimeFunction>*/;
}
{
((void (*)(val* self, val* p0))(var59->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__called_signature_61d]))(var59, var_msignature) /* called_signature= on <var59:SeparateRuntimeFunction>*/;
}
{
((void (*)(val* self, val* p0))(var59->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__build_c_name_61d]))(var59, var68) /* build_c_name= on <var59:SeparateRuntimeFunction>*/;
}
{
((void (*)(val* self))(var59->class->vft[COLOR_standard__kernel__Object__init]))(var59) /* init on <var59:SeparateRuntimeFunction>*/;
}
var_res = var59;
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL69:(void)0;
}
}
var70 = 1;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#is_thunk= (var_res,var70) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var_res->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk].s = var70; /* _is_thunk on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
RET_LABEL71:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache for (self: MMethodDef): nullable SeparateRuntimeFunction */
val* nit__separate_compiler___MMethodDef___virtual_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
var1 = self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache= for (self: MMethodDef, nullable SeparateRuntimeFunction) */
void nit__separate_compiler___MMethodDef___virtual_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = p0; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler#MSignature#c_equiv for (self: MSignature, MSignature): Bool */
short int nit__separate_compiler___MSignature___c_equiv(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: MSignature */;
short int var1 /* : Bool */;
val* var_other3 /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var_i /* var i: Int */;
long var16 /* : Int */;
long var_ /* var : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var20 /* : Bool */;
val* var21 /* : Array[MParameter] */;
val* var23 /* : Array[MParameter] */;
val* var24 /* : nullable Object */;
val* var25 /* : MType */;
val* var27 /* : MType */;
val* var28 /* : String */;
val* var29 /* : Array[MParameter] */;
val* var31 /* : Array[MParameter] */;
val* var32 /* : nullable Object */;
val* var33 /* : MType */;
val* var35 /* : MType */;
val* var36 /* : String */;
short int var37 /* : Bool */;
val* var_other39 /* var other: nullable Object */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
long var43 /* : Int */;
long var44 /* : Int */;
val* var45 /* : nullable MType */;
val* var47 /* : nullable MType */;
val* var48 /* : nullable MType */;
val* var50 /* : nullable MType */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : nullable MType */;
val* var59 /* : nullable MType */;
val* var60 /* : null */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var_67 /* var : Bool */;
val* var68 /* : nullable MType */;
val* var70 /* : nullable MType */;
val* var71 /* : null */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
val* var79 /* : nullable MType */;
val* var81 /* : nullable MType */;
val* var82 /* : String */;
val* var83 /* : nullable MType */;
val* var85 /* : nullable MType */;
val* var86 /* : String */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
var_other = p0;
{
{ /* Inline kernel#Object#== (self,var_other) on <self:MSignature> */
var_other3 = var_other;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other3) on <self:MSignature> */
var6 = self == var_other3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var7 = 1;
var = var7;
goto RET_LABEL;
} else {
}
{
var8 = nit___nit__MSignature___arity(self);
}
{
var9 = nit___nit__MSignature___arity(var_other);
}
{
{ /* Inline kernel#Int#!= (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var14 = 0;
var = var14;
goto RET_LABEL;
} else {
}
var15 = 0;
var_i = var15;
{
var16 = nit___nit__MSignature___arity(self);
}
var_ = var16;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var19 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var20 = var_i < var_;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var23 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var21, var_i);
}
{
{ /* Inline model#MParameter#mtype (var24) on <var24:nullable Object(MParameter)> */
var27 = var24->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var24:nullable Object(MParameter)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = ((val* (*)(val* self))(var25->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var25) /* ctype on <var25:MType>*/;
}
{
{ /* Inline model#MSignature#mparameters (var_other) on <var_other:MSignature> */
var31 = var_other->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_other:MSignature> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var29, var_i);
}
{
{ /* Inline model#MParameter#mtype (var32) on <var32:nullable Object(MParameter)> */
var35 = var32->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var32:nullable Object(MParameter)> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = ((val* (*)(val* self))(var33->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var33) /* ctype on <var33:MType>*/;
}
{
{ /* Inline kernel#Object#!= (var28,var36) on <var28:String> */
var_other39 = var36;
{
var40 = ((short int (*)(val* self, val* p0))(var28->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var28, var_other39) /* == on <var28:String>*/;
}
var41 = !var40;
var37 = var41;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
var42 = 0;
var = var42;
goto RET_LABEL;
} else {
}
var43 = 1;
{
var44 = standard___standard__Int___Discrete__successor(var_i, var43);
}
var_i = var44;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var47 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var_other) on <var_other:MSignature> */
var50 = var_other->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (var45 == NULL) {
var51 = (var48 != NULL);
} else {
{ /* Inline kernel#Object#!= (var45,var48) on <var45:nullable MType> */
var_other39 = var48;
{
var54 = ((short int (*)(val* self, val* p0))(var45->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var45, var_other39) /* == on <var45:nullable MType(MType)>*/;
}
var55 = !var54;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var59 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var60 = NULL;
if (var57 == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var57,var60) on <var57:nullable MType> */
var_other3 = var60;
{
{ /* Inline kernel#Object#is_same_instance (var57,var_other3) on <var57:nullable MType(MType)> */
var66 = var57 == var_other3;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
var_67 = var61;
if (var61){
var56 = var_67;
} else {
{
{ /* Inline model#MSignature#return_mtype (var_other) on <var_other:MSignature> */
var70 = var_other->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var71 = NULL;
if (var68 == NULL) {
var72 = 1; /* is null */
} else {
var72 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var68,var71) on <var68:nullable MType> */
var_other3 = var71;
{
{ /* Inline kernel#Object#is_same_instance (var68,var_other3) on <var68:nullable MType(MType)> */
var77 = var68 == var_other3;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
var56 = var72;
}
if (var56){
var78 = 0;
var = var78;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var81 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (var79 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1835);
show_backtrace(1);
} else {
var82 = ((val* (*)(val* self))(var79->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var79) /* ctype on <var79:nullable MType>*/;
}
{
{ /* Inline model#MSignature#return_mtype (var_other) on <var_other:MSignature> */
var85 = var_other->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (var83 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1835);
show_backtrace(1);
} else {
var86 = ((val* (*)(val* self))(var83->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var83) /* ctype on <var83:nullable MType>*/;
}
{
{ /* Inline kernel#Object#!= (var82,var86) on <var82:String> */
var_other39 = var86;
{
var89 = ((short int (*)(val* self, val* p0))(var82->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var82, var_other39) /* == on <var82:String>*/;
}
var90 = !var89;
var87 = var90;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
var91 = 0;
var = var91;
goto RET_LABEL;
} else {
}
} else {
}
var92 = 1;
var = var92;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#called_recv for (self: SeparateRuntimeFunction): MType */
val* nit___nit__SeparateRuntimeFunction___called_recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1845);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#called_recv= for (self: SeparateRuntimeFunction, MType) */
void nit___nit__SeparateRuntimeFunction___called_recv_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val = p0; /* _called_recv on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#called_signature for (self: SeparateRuntimeFunction): MSignature */
val* nit___nit__SeparateRuntimeFunction___called_signature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1848);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#called_signature= for (self: SeparateRuntimeFunction, MSignature) */
void nit___nit__SeparateRuntimeFunction___called_signature_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val = p0; /* _called_signature on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#build_c_name for (self: SeparateRuntimeFunction): String */
val* nit___nit__SeparateRuntimeFunction___nit__abstract_compiler__AbstractRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___build_c_name].val; /* _build_c_name on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _build_c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1851);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#build_c_name= for (self: SeparateRuntimeFunction, String) */
void nit___nit__SeparateRuntimeFunction___build_c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___build_c_name].val = p0; /* _build_c_name on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#is_thunk for (self: SeparateRuntimeFunction): Bool */
short int nit___nit__SeparateRuntimeFunction___is_thunk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk].s; /* _is_thunk on <self:SeparateRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#is_thunk= for (self: SeparateRuntimeFunction, Bool) */
void nit___nit__SeparateRuntimeFunction___is_thunk_61d(val* self, short int p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk].s = p0; /* _is_thunk on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#to_s for (self: SeparateRuntimeFunction): String */
val* nit___nit__SeparateRuntimeFunction___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1644);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MPropDef#to_s (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_nit__model__MPropDef___to_s].val; /* _to_s on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2104);
show_backtrace(1);
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
/* method separate_compiler#SeparateRuntimeFunction#c_ret for (self: SeparateRuntimeFunction): String */
val* nit___nit__SeparateRuntimeFunction___c_ret(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MSignature */;
val* var7 /* : MSignature */;
val* var8 /* : nullable MType */;
val* var10 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : String */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_ret].val != NULL; /* _c_ret on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_ret].val; /* _c_ret on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_ret");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1859);
show_backtrace(1);
}
} else {
{
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var7 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1848);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var5) on <var5:MSignature> */
var10 = var5->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var5:MSignature> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ret = var8;
var11 = NULL;
if (var_ret == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var11) on <var_ret:nullable MType> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
var17 = ((val* (*)(val* self))(var_ret->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
}
var3 = var17;
goto RET_LABEL4;
} else {
if (varonce) {
var18 = varonce;
} else {
var19 = "void";
var20 = 4;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
var3 = var18;
goto RET_LABEL4;
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_ret].val = var3; /* _c_ret on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#c_sig for (self: SeparateRuntimeFunction): String */
val* nit___nit__SeparateRuntimeFunction___c_sig(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_sig /* var sig: FlatBuffer */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : MType */;
val* var13 /* : MType */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
long var24 /* : Int */;
long var_i /* var i: Int */;
val* var25 /* : MSignature */;
val* var27 /* : MSignature */;
long var28 /* : Int */;
long var_ /* var : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var32 /* : Bool */;
val* var33 /* : MSignature */;
val* var35 /* : MSignature */;
val* var36 /* : Array[MParameter] */;
val* var38 /* : Array[MParameter] */;
val* var39 /* : nullable Object */;
val* var40 /* : MType */;
val* var42 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var43 /* : MSignature */;
val* var45 /* : MSignature */;
long var46 /* : Int */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : MMethodDef */;
val* var54 /* : MMethodDef */;
val* var55 /* : MClassDef */;
val* var57 /* : MClassDef */;
val* var58 /* : MModule */;
val* var60 /* : MModule */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : MClass */;
val* var67 /* : Array[MType] */;
long var68 /* : Int */;
val* var_69 /* var : Array[MType] */;
val* var70 /* : MClassType */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : FlatString */;
val* var82 /* : Array[Object] */;
long var83 /* : Int */;
val* var84 /* : NativeArray[Object] */;
val* var85 /* : Object */;
val* var86 /* : String */;
long var87 /* : Int */;
long var88 /* : Int */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : String */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_sig].val != NULL; /* _c_sig on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_sig].val; /* _c_sig on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_sig");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1869);
show_backtrace(1);
}
} else {
{
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var5) on <var5:FlatBuffer> */
{
((void (*)(val* self))(var5->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var5) /* init on <var5:FlatBuffer>*/;
}
RET_LABEL6:(void)0;
}
}
var_sig = var5;
if (varonce) {
var7 = varonce;
} else {
var8 = "(";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_recv (self) on <self:SeparateRuntimeFunction> */
var13 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1845);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var11) /* ctype on <var11:MType>*/;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = " self";
var18 = 5;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 3;
var22 = NEW_standard__NativeArray(var21, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var22)->values[0] = (val*) var7;
((struct instance_standard__NativeArray*)var22)->values[1] = (val*) var14;
((struct instance_standard__NativeArray*)var22)->values[2] = (val*) var16;
{
((void (*)(val* self, val* p0, long p1))(var20->class->vft[COLOR_standard__array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val* self))(var20->class->vft[COLOR_standard__string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var23); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
var24 = 0;
var_i = var24;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var27 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1848);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nit___nit__MSignature___arity(var25);
}
var_ = var28;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var31 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var32 = var_i < var_;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var35 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1848);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MSignature#mparameters (var33) on <var33:MSignature> */
var38 = var33->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var33:MSignature> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var36, var_i);
}
{
{ /* Inline model#MParameter#mtype (var39) on <var39:nullable Object(MParameter)> */
var42 = var39->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var39:nullable Object(MParameter)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_mtype = var40;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var45 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1848);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MSignature#vararg_rank (var43) on <var43:MSignature> */
var48 = var43->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var43:MSignature> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var46) on <var_i:Int> */
var51 = var_i == var46;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var54 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1644);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var52) on <var52:MMethodDef> */
var57 = var52->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var52:MMethodDef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var55) on <var55:MClassDef> */
var60 = var55->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var55:MClassDef> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = "Array";
var64 = 5;
var65 = standard___standard__NativeString___to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
{
var66 = nit__model___MModule___get_primitive_class(var58, var62);
}
var67 = NEW_standard__Array(&type_standard__Array__nit__MType);
var68 = 1;
{
standard___standard__Array___with_capacity(var67, var68); /* Direct call array#Array#with_capacity on <var67:Array[MType]>*/
}
var_69 = var67;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_69, var_mtype); /* Direct call array#AbstractArray#push on <var_69:Array[MType]>*/
}
{
var70 = nit___nit__MClass___get_mtype(var66, var_69);
}
var_mtype = var70;
} else {
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = ", ";
var74 = 2;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
{
var76 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = " p";
var80 = 2;
var81 = standard___standard__NativeString___to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var82 = array_instance Array[Object] */
var83 = 4;
var84 = NEW_standard__NativeArray(var83, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var84)->values[0] = (val*) var72;
((struct instance_standard__NativeArray*)var84)->values[1] = (val*) var76;
((struct instance_standard__NativeArray*)var84)->values[2] = (val*) var78;
var85 = BOX_standard__Int(var_i); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var84)->values[3] = (val*) var85;
{
((void (*)(val* self, val* p0, long p1))(var82->class->vft[COLOR_standard__array__Array__with_native]))(var82, var84, var83) /* with_native on <var82:Array[Object]>*/;
}
}
{
var86 = ((val* (*)(val* self))(var82->class->vft[COLOR_standard__string__Object__to_s]))(var82) /* to_s on <var82:Array[Object]>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var86); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
var87 = 1;
{
var88 = standard___standard__Int___Discrete__successor(var_i, var87);
}
var_i = var88;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (varonce89) {
var90 = varonce89;
} else {
var91 = ")";
var92 = 1;
var93 = standard___standard__NativeString___to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var90); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
{
var94 = standard___standard__FlatBuffer___Object__to_s(var_sig);
}
var3 = var94;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_sig].val = var3; /* _c_sig on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
