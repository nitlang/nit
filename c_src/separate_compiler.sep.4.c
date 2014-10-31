#include "separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompilerVisitor#type_test for (self: SeparateCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
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
val* var23 /* : nullable Frame */;
val* var25 /* : nullable Frame */;
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
val* var91 /* : nullable Frame */;
val* var93 /* : nullable Frame */;
val* var94 /* : MPropDef */;
val* var96 /* : MPropDef */;
val* var97 /* : MClassDef */;
val* var99 /* : MClassDef */;
val* var100 /* : MModule */;
val* var102 /* : MModule */;
val* var103 /* : nullable Frame */;
val* var105 /* : nullable Frame */;
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
val* var201 /* : nullable Frame */;
val* var203 /* : nullable Frame */;
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
short int var313 /* : Bool */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : FlatString */;
val* var319 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
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
val* var330 /* : Array[Object] */;
long var331 /* : Int */;
val* var332 /* : NativeArray[Object] */;
val* var333 /* : String */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : FlatString */;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
long var342 /* : Int */;
val* var343 /* : FlatString */;
val* var344 /* : Array[Object] */;
long var345 /* : Int */;
val* var346 /* : NativeArray[Object] */;
val* var347 /* : String */;
val* var348 /* : String */;
short int var349 /* : Bool */;
int cltype350;
int idtype351;
val* var352 /* : Set[MType] */;
val* var354 /* : Set[MType] */;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : NativeString */;
long var358 /* : Int */;
val* var359 /* : FlatString */;
val* var360 /* : String */;
val* var361 /* : Array[Object] */;
long var362 /* : Int */;
val* var363 /* : NativeArray[Object] */;
val* var364 /* : String */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
long var368 /* : Int */;
val* var369 /* : FlatString */;
val* var370 /* : String */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
long var374 /* : Int */;
val* var375 /* : FlatString */;
val* var376 /* : Array[Object] */;
long var377 /* : Int */;
val* var378 /* : NativeArray[Object] */;
val* var379 /* : String */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
long var383 /* : Int */;
val* var384 /* : FlatString */;
val* var385 /* : String */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
long var389 /* : Int */;
val* var390 /* : FlatString */;
val* var391 /* : Array[Object] */;
long var392 /* : Int */;
val* var393 /* : NativeArray[Object] */;
val* var394 /* : String */;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : NativeString */;
long var398 /* : Int */;
val* var399 /* : FlatString */;
val* var400 /* : String */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
long var404 /* : Int */;
val* var405 /* : FlatString */;
val* var406 /* : Array[Object] */;
long var407 /* : Int */;
val* var408 /* : NativeArray[Object] */;
val* var409 /* : String */;
val* var410 /* : ModelBuilder */;
val* var412 /* : ModelBuilder */;
val* var413 /* : ToolContext */;
val* var415 /* : ToolContext */;
val* var416 /* : OptionBool */;
val* var418 /* : OptionBool */;
val* var419 /* : nullable Object */;
val* var421 /* : nullable Object */;
short int var422 /* : Bool */;
val* var423 /* : AbstractCompiler */;
val* var425 /* : AbstractCompiler */;
val* var426 /* : HashMap[String, Int] */;
val* var428 /* : HashMap[String, Int] */;
val* var_429 /* var : HashMap[String, Int] */;
val* var_430 /* var : String */;
val* var431 /* : nullable Object */;
long var432 /* : Int */;
long var433 /* : Int */;
short int var435 /* : Bool */;
int cltype436;
int idtype437;
const char* var_class_name438;
long var439 /* : Int */;
long var440 /* : Int */;
val* var441 /* : nullable Object */;
static val* varonce442;
val* var443 /* : String */;
char* var444 /* : NativeString */;
long var445 /* : Int */;
val* var446 /* : FlatString */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
long var450 /* : Int */;
val* var451 /* : FlatString */;
val* var452 /* : Array[Object] */;
long var453 /* : Int */;
val* var454 /* : NativeArray[Object] */;
val* var455 /* : String */;
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
val* var466 /* : String */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
long var470 /* : Int */;
val* var471 /* : FlatString */;
val* var472 /* : Array[Object] */;
long var473 /* : Int */;
val* var474 /* : NativeArray[Object] */;
val* var475 /* : String */;
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
val* var486 /* : Array[Object] */;
long var487 /* : Int */;
val* var488 /* : NativeArray[Object] */;
val* var489 /* : String */;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : NativeString */;
long var493 /* : Int */;
val* var494 /* : FlatString */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
long var498 /* : Int */;
val* var499 /* : FlatString */;
val* var500 /* : Array[Object] */;
long var501 /* : Int */;
val* var502 /* : NativeArray[Object] */;
val* var503 /* : String */;
static val* varonce504;
val* var505 /* : String */;
char* var506 /* : NativeString */;
long var507 /* : Int */;
val* var508 /* : FlatString */;
val* var509 /* : String */;
val* var_value_type_info /* var value_type_info: String */;
static val* varonce510;
val* var511 /* : String */;
char* var512 /* : NativeString */;
long var513 /* : Int */;
val* var514 /* : FlatString */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
long var518 /* : Int */;
val* var519 /* : FlatString */;
static val* varonce520;
val* var521 /* : String */;
char* var522 /* : NativeString */;
long var523 /* : Int */;
val* var524 /* : FlatString */;
val* var525 /* : Array[Object] */;
long var526 /* : Int */;
val* var527 /* : NativeArray[Object] */;
val* var528 /* : String */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : NativeString */;
long var532 /* : Int */;
val* var533 /* : FlatString */;
val* var534 /* : Array[Object] */;
long var535 /* : Int */;
val* var536 /* : NativeArray[Object] */;
val* var537 /* : String */;
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
val* var563 /* : Array[Object] */;
long var564 /* : Int */;
val* var565 /* : NativeArray[Object] */;
val* var566 /* : String */;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : NativeString */;
long var570 /* : Int */;
val* var571 /* : FlatString */;
static val* varonce572;
val* var573 /* : String */;
char* var574 /* : NativeString */;
long var575 /* : Int */;
val* var576 /* : FlatString */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "/* ";
var3 = 3;
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
abstract_compiler__AbstractCompilerVisitor__add(self, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var22 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_compiler = var20;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1466);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var23) on <var23:nullable Frame> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var28 = var23->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var23:nullable Frame> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = abstract_collection__SequenceRead__first(var26);
}
var_recv = var29;
{
var30 = separate_compiler__SeparateCompilerVisitor__type_info(self, var_recv);
}
var_recv_type_info = var30;
{
var31 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var32 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var31);
}
var_res = var32;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "cltype";
var36 = 6;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
var38 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var34);
}
var_cltype = var38;
if (varonce39) {
var40 = varonce39;
} else {
var41 = "int ";
var42 = 4;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = ";";
var47 = 1;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 3;
var51 = NEW_array__NativeArray(var50, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var51)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var51)->values[1] = (val*) var_cltype;
((struct instance_array__NativeArray*)var51)->values[2] = (val*) var45;
{
((void (*)(val*, val*, long))(var49->class->vft[COLOR_array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
}
{
var52 = ((val* (*)(val*))(var49->class->vft[COLOR_string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "idtype";
var56 = 6;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
var58 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var54);
}
var_idtype = var58;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "int ";
var62 = 4;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = ";";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var_idtype;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var65;
{
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
var73 = separate_compiler__SeparateCompilerVisitor__maybe_null(self, var_value);
}
var_maybe_null = var73;
if (varonce74) {
var75 = varonce74;
} else {
var76 = "0";
var77 = 1;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var_accept_null = var75;
var_ntype = var_mtype;
/* <var_ntype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_ntype->type->table_size) {
var79 = 0;
} else {
var79 = var_ntype->type->type_table[cltype] == idtype;
}
if (var79){
{
{ /* Inline model#MNullableType#mtype (var_ntype) on <var_ntype:MType(MNullableType)> */
var82 = var_ntype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_ntype:MType(MNullableType)> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
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
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
var_accept_null = var84;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var90 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var93 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1484);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var91) on <var91:nullable Frame> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var96 = var91->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var91:nullable Frame> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var94) on <var94:MPropDef> */
var99 = var94->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var94:MPropDef> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var97) on <var97:MClassDef> */
var102 = var97->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var97:MClassDef> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var105 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (var103 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1484);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var103) on <var103:nullable Frame> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var108 = var103->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var103:nullable Frame> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var106) on <var106:MPropDef> */
var111 = var106->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var106:MPropDef> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var109) on <var109:MClassDef> */
var114 = var109->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var109:MClassDef> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
var115 = model__MType__is_subtype(var88, var100, var112, var_mtype);
}
if (var115){
if (varonce116) {
var117 = varonce116;
} else {
var118 = " = 1; /* easy ";
var119 = 14;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
{
var121 = abstract_compiler__RuntimeVariable__inspect(var_value);
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " isa ";
var125 = 5;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = "*/";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var132 = array_instance Array[Object] */
var133 = 6;
var134 = NEW_array__NativeArray(var133, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var134)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var134)->values[1] = (val*) var117;
((struct instance_array__NativeArray*)var134)->values[2] = (val*) var121;
((struct instance_array__NativeArray*)var134)->values[3] = (val*) var123;
((struct instance_array__NativeArray*)var134)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var134)->values[5] = (val*) var128;
{
((void (*)(val*, val*, long))(var132->class->vft[COLOR_array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[Object]>*/;
}
}
{
var135 = ((val* (*)(val*))(var132->class->vft[COLOR_string__Object__to_s]))(var132) /* to_s on <var132:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var135); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var138 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var136) on <var136:ModelBuilder> */
var141 = var136->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var136:ModelBuilder> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var139) on <var139:ToolContext> */
var144 = var139->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var139:ToolContext> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 61);
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
var148 = ((struct instance_kernel__Bool*)var145)->value; /* autounbox from nullable Object to Bool */;
if (var148){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var151 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (var149) on <var149:AbstractCompiler(SeparateCompiler)> */
var154 = var149->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <var149:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 947);
show_backtrace(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
var_ = var152;
var_155 = var_tag;
{
var156 = hash_collection__HashMap___91d_93d(var_, var_155);
}
var157 = 1;
{
{ /* Inline kernel#Int#+ (var156,var157) on <var156:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var157:Int> isa OTHER */
/* <var157:Int> isa OTHER */
var160 = 1; /* easy <var157:Int> isa OTHER*/
if (unlikely(!var160)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var163 = ((struct instance_kernel__Int*)var156)->value; /* autounbox from nullable Object to Int */;
var164 = var163 + var157;
var158 = var164;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
{
var165 = BOX_kernel__Int(var158); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_, var_155, var165); /* Direct call hash_collection#HashMap#[]= on <var_:HashMap[String, Int]>*/
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = "count_type_test_skipped_";
var169 = 24;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = "++;";
var174 = 3;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
var176 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var176 = array_instance Array[Object] */
var177 = 3;
var178 = NEW_array__NativeArray(var177, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var178)->values[0] = (val*) var167;
((struct instance_array__NativeArray*)var178)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var178)->values[2] = (val*) var172;
{
((void (*)(val*, val*, long))(var176->class->vft[COLOR_array__Array__with_native]))(var176, var178, var177) /* with_native on <var176:Array[Object]>*/;
}
}
{
var179 = ((val* (*)(val*))(var176->class->vft[COLOR_string__Object__to_s]))(var176) /* to_s on <var176:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var179); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var180 = ((short int (*)(val*))(var_ntype->class->vft[COLOR_model__MType__need_anchor]))(var_ntype) /* need_anchor on <var_ntype:MType>*/;
}
if (var180){
if (varonce181) {
var182 = varonce181;
} else {
var183 = "type_struct";
var184 = 11;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
{
var186 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var182);
}
var_type_struct = var186;
if (varonce187) {
var188 = varonce187;
} else {
var189 = "const struct type* ";
var190 = 19;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = ";";
var195 = 1;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
var197 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 3;
var199 = NEW_array__NativeArray(var198, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var199)->values[0] = (val*) var188;
((struct instance_array__NativeArray*)var199)->values[1] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var199)->values[2] = (val*) var193;
{
((void (*)(val*, val*, long))(var197->class->vft[COLOR_array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
}
}
{
var200 = ((val* (*)(val*))(var197->class->vft[COLOR_string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var200); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var203 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var201 = var203;
RET_LABEL202:(void)0;
}
}
if (var201 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1499);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var201) on <var201:nullable Frame> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var206 = var201->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var201:nullable Frame> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var204) on <var204:MPropDef> */
var209 = var204->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var204:MPropDef> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
separate_compiler__SeparateCompilerVisitor__link_unresolved_type(self, var207, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
var210 = separate_compiler__MType__const_color(var_mtype);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var210); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = " = ";
var214 = 3;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = "->resolution_table->types[";
var219 = 26;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
{
var221 = separate_compiler__MType__const_color(var_mtype);
}
if (varonce222) {
var223 = varonce222;
} else {
var224 = "];";
var225 = 2;
var226 = string__NativeString__to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
var227 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var227 = array_instance Array[Object] */
var228 = 6;
var229 = NEW_array__NativeArray(var228, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var229)->values[0] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var229)->values[1] = (val*) var212;
((struct instance_array__NativeArray*)var229)->values[2] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var229)->values[3] = (val*) var217;
((struct instance_array__NativeArray*)var229)->values[4] = (val*) var221;
((struct instance_array__NativeArray*)var229)->values[5] = (val*) var223;
{
((void (*)(val*, val*, long))(var227->class->vft[COLOR_array__Array__with_native]))(var227, var229, var228) /* with_native on <var227:Array[Object]>*/;
}
}
{
var230 = ((val* (*)(val*))(var227->class->vft[COLOR_string__Object__to_s]))(var227) /* to_s on <var227:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var230); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var233 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var231) on <var231:ModelBuilder> */
var236 = var231->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var231:ModelBuilder> */
if (unlikely(var236 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var234) on <var234:ToolContext> */
var239 = var234->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var234:ToolContext> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 61);
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
var243 = ((struct instance_kernel__Bool*)var240)->value; /* autounbox from nullable Object to Bool */;
if (var243){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var246 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (var244) on <var244:AbstractCompiler(SeparateCompiler)> */
var249 = var244->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <var244:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 946);
show_backtrace(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
var_250 = var247;
var_251 = var_tag;
{
var252 = hash_collection__HashMap___91d_93d(var_250, var_251);
}
var253 = 1;
{
{ /* Inline kernel#Int#+ (var252,var253) on <var252:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var253:Int> isa OTHER */
/* <var253:Int> isa OTHER */
var256 = 1; /* easy <var253:Int> isa OTHER*/
if (unlikely(!var256)) {
var_class_name259 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name259);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var260 = ((struct instance_kernel__Int*)var252)->value; /* autounbox from nullable Object to Int */;
var261 = var260 + var253;
var254 = var261;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
}
{
var262 = BOX_kernel__Int(var254); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_250, var_251, var262); /* Direct call hash_collection#HashMap#[]= on <var_250:HashMap[String, Int]>*/
}
if (varonce263) {
var264 = varonce263;
} else {
var265 = "count_type_test_unresolved_";
var266 = 27;
var267 = string__NativeString__to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = "++;";
var271 = 3;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
var273 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var273 = array_instance Array[Object] */
var274 = 3;
var275 = NEW_array__NativeArray(var274, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var275)->values[0] = (val*) var264;
((struct instance_array__NativeArray*)var275)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var275)->values[2] = (val*) var269;
{
((void (*)(val*, val*, long))(var273->class->vft[COLOR_array__Array__with_native]))(var273, var275, var274) /* with_native on <var273:Array[Object]>*/;
}
}
{
var276 = ((val* (*)(val*))(var273->class->vft[COLOR_string__Object__to_s]))(var273) /* to_s on <var273:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var276); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
separate_compiler__SeparateCompilerVisitor__hardening_cast_type(self, var_type_struct); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_cast_type on <self:SeparateCompilerVisitor>*/
}
if (varonce277) {
var278 = varonce277;
} else {
var279 = " = ";
var280 = 3;
var281 = string__NativeString__to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = "->color;";
var285 = 8;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
var287 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var287 = array_instance Array[Object] */
var288 = 4;
var289 = NEW_array__NativeArray(var288, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var289)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var289)->values[1] = (val*) var278;
((struct instance_array__NativeArray*)var289)->values[2] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var289)->values[3] = (val*) var283;
{
((void (*)(val*, val*, long))(var287->class->vft[COLOR_array__Array__with_native]))(var287, var289, var288) /* with_native on <var287:Array[Object]>*/;
}
}
{
var290 = ((val* (*)(val*))(var287->class->vft[COLOR_string__Object__to_s]))(var287) /* to_s on <var287:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var290); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce291) {
var292 = varonce291;
} else {
var293 = " = ";
var294 = 3;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
if (varonce296) {
var297 = varonce296;
} else {
var298 = "->id;";
var299 = 5;
var300 = string__NativeString__to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
var301 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var301 = array_instance Array[Object] */
var302 = 4;
var303 = NEW_array__NativeArray(var302, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var303)->values[0] = (val*) var_idtype;
((struct instance_array__NativeArray*)var303)->values[1] = (val*) var292;
((struct instance_array__NativeArray*)var303)->values[2] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var303)->values[3] = (val*) var297;
{
((void (*)(val*, val*, long))(var301->class->vft[COLOR_array__Array__with_native]))(var301, var303, var302) /* with_native on <var301:Array[Object]>*/;
}
}
{
var304 = ((val* (*)(val*))(var301->class->vft[COLOR_string__Object__to_s]))(var301) /* to_s on <var301:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var304); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var_306 = var_maybe_null;
if (var_maybe_null){
if (varonce307) {
var308 = varonce307;
} else {
var309 = "0";
var310 = 1;
var311 = string__NativeString__to_s_with_length(var309, var310);
var308 = var311;
varonce307 = var308;
}
{
var313 = string__FlatString___61d_61d(var_accept_null, var308);
var312 = var313;
}
var305 = var312;
} else {
var305 = var_306;
}
if (var305){
if (varonce314) {
var315 = varonce314;
} else {
var316 = "is_nullable";
var317 = 11;
var318 = string__NativeString__to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
{
var319 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var315);
}
var_is_nullable = var319;
if (varonce320) {
var321 = varonce320;
} else {
var322 = "short int ";
var323 = 10;
var324 = string__NativeString__to_s_with_length(var322, var323);
var321 = var324;
varonce320 = var321;
}
if (varonce325) {
var326 = varonce325;
} else {
var327 = ";";
var328 = 1;
var329 = string__NativeString__to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
var330 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var330 = array_instance Array[Object] */
var331 = 3;
var332 = NEW_array__NativeArray(var331, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var332)->values[0] = (val*) var321;
((struct instance_array__NativeArray*)var332)->values[1] = (val*) var_is_nullable;
((struct instance_array__NativeArray*)var332)->values[2] = (val*) var326;
{
((void (*)(val*, val*, long))(var330->class->vft[COLOR_array__Array__with_native]))(var330, var332, var331) /* with_native on <var330:Array[Object]>*/;
}
}
{
var333 = ((val* (*)(val*))(var330->class->vft[COLOR_string__Object__to_s]))(var330) /* to_s on <var330:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var333); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = " = ";
var337 = 3;
var338 = string__NativeString__to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
if (varonce339) {
var340 = varonce339;
} else {
var341 = "->is_nullable;";
var342 = 14;
var343 = string__NativeString__to_s_with_length(var341, var342);
var340 = var343;
varonce339 = var340;
}
var344 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var344 = array_instance Array[Object] */
var345 = 4;
var346 = NEW_array__NativeArray(var345, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var346)->values[0] = (val*) var_is_nullable;
((struct instance_array__NativeArray*)var346)->values[1] = (val*) var335;
((struct instance_array__NativeArray*)var346)->values[2] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var346)->values[3] = (val*) var340;
{
((void (*)(val*, val*, long))(var344->class->vft[COLOR_array__Array__with_native]))(var344, var346, var345) /* with_native on <var344:Array[Object]>*/;
}
}
{
var347 = ((val* (*)(val*))(var344->class->vft[COLOR_string__Object__to_s]))(var344) /* to_s on <var344:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var347); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var348 = string__String__to_s(var_is_nullable);
}
var_accept_null = var348;
} else {
}
} else {
/* <var_ntype:MType> isa MClassType */
cltype350 = type_model__MClassType.color;
idtype351 = type_model__MClassType.id;
if(cltype350 >= var_ntype->type->table_size) {
var349 = 0;
} else {
var349 = var_ntype->type->type_table[cltype350] == idtype351;
}
if (var349){
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var354 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var354 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 156);
show_backtrace(1);
}
var352 = var354;
RET_LABEL353:(void)0;
}
}
{
((void (*)(val*, val*))(var352->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var352, var_mtype) /* add on <var352:Set[MType]>*/;
}
if (varonce355) {
var356 = varonce355;
} else {
var357 = "type_";
var358 = 5;
var359 = string__NativeString__to_s_with_length(var357, var358);
var356 = var359;
varonce355 = var356;
}
{
var360 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
var361 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var361 = array_instance Array[Object] */
var362 = 2;
var363 = NEW_array__NativeArray(var362, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var363)->values[0] = (val*) var356;
((struct instance_array__NativeArray*)var363)->values[1] = (val*) var360;
{
((void (*)(val*, val*, long))(var361->class->vft[COLOR_array__Array__with_native]))(var361, var363, var362) /* with_native on <var361:Array[Object]>*/;
}
}
{
var364 = ((val* (*)(val*))(var361->class->vft[COLOR_string__Object__to_s]))(var361) /* to_s on <var361:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var364); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce365) {
var366 = varonce365;
} else {
var367 = "(&type_";
var368 = 7;
var369 = string__NativeString__to_s_with_length(var367, var368);
var366 = var369;
varonce365 = var366;
}
{
var370 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce371) {
var372 = varonce371;
} else {
var373 = ")";
var374 = 1;
var375 = string__NativeString__to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
var376 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var376 = array_instance Array[Object] */
var377 = 3;
var378 = NEW_array__NativeArray(var377, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var378)->values[0] = (val*) var366;
((struct instance_array__NativeArray*)var378)->values[1] = (val*) var370;
((struct instance_array__NativeArray*)var378)->values[2] = (val*) var372;
{
((void (*)(val*, val*, long))(var376->class->vft[COLOR_array__Array__with_native]))(var376, var378, var377) /* with_native on <var376:Array[Object]>*/;
}
}
{
var379 = ((val* (*)(val*))(var376->class->vft[COLOR_string__Object__to_s]))(var376) /* to_s on <var376:Array[Object]>*/;
}
{
separate_compiler__SeparateCompilerVisitor__hardening_cast_type(self, var379); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_cast_type on <self:SeparateCompilerVisitor>*/
}
if (varonce380) {
var381 = varonce380;
} else {
var382 = " = type_";
var383 = 8;
var384 = string__NativeString__to_s_with_length(var382, var383);
var381 = var384;
varonce380 = var381;
}
{
var385 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce386) {
var387 = varonce386;
} else {
var388 = ".color;";
var389 = 7;
var390 = string__NativeString__to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
var391 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var391 = array_instance Array[Object] */
var392 = 4;
var393 = NEW_array__NativeArray(var392, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var393)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var393)->values[1] = (val*) var381;
((struct instance_array__NativeArray*)var393)->values[2] = (val*) var385;
((struct instance_array__NativeArray*)var393)->values[3] = (val*) var387;
{
((void (*)(val*, val*, long))(var391->class->vft[COLOR_array__Array__with_native]))(var391, var393, var392) /* with_native on <var391:Array[Object]>*/;
}
}
{
var394 = ((val* (*)(val*))(var391->class->vft[COLOR_string__Object__to_s]))(var391) /* to_s on <var391:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var394); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce395) {
var396 = varonce395;
} else {
var397 = " = type_";
var398 = 8;
var399 = string__NativeString__to_s_with_length(var397, var398);
var396 = var399;
varonce395 = var396;
}
{
var400 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce401) {
var402 = varonce401;
} else {
var403 = ".id;";
var404 = 4;
var405 = string__NativeString__to_s_with_length(var403, var404);
var402 = var405;
varonce401 = var402;
}
var406 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var406 = array_instance Array[Object] */
var407 = 4;
var408 = NEW_array__NativeArray(var407, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var408)->values[0] = (val*) var_idtype;
((struct instance_array__NativeArray*)var408)->values[1] = (val*) var396;
((struct instance_array__NativeArray*)var408)->values[2] = (val*) var400;
((struct instance_array__NativeArray*)var408)->values[3] = (val*) var402;
{
((void (*)(val*, val*, long))(var406->class->vft[COLOR_array__Array__with_native]))(var406, var408, var407) /* with_native on <var406:Array[Object]>*/;
}
}
{
var409 = ((val* (*)(val*))(var406->class->vft[COLOR_string__Object__to_s]))(var406) /* to_s on <var406:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var409); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var412 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var412 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var410 = var412;
RET_LABEL411:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var410) on <var410:ModelBuilder> */
var415 = var410->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var410:ModelBuilder> */
if (unlikely(var415 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var413 = var415;
RET_LABEL414:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var413) on <var413:ToolContext> */
var418 = var413->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var413:ToolContext> */
if (unlikely(var418 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 61);
show_backtrace(1);
}
var416 = var418;
RET_LABEL417:(void)0;
}
}
{
{ /* Inline opts#Option#value (var416) on <var416:OptionBool> */
var421 = var416->attrs[COLOR_opts__Option___value].val; /* _value on <var416:OptionBool> */
var419 = var421;
RET_LABEL420:(void)0;
}
}
var422 = ((struct instance_kernel__Bool*)var419)->value; /* autounbox from nullable Object to Bool */;
if (var422){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var425 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var425 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var423 = var425;
RET_LABEL424:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (var423) on <var423:AbstractCompiler(SeparateCompiler)> */
var428 = var423->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <var423:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var428 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 945);
show_backtrace(1);
}
var426 = var428;
RET_LABEL427:(void)0;
}
}
var_429 = var426;
var_430 = var_tag;
{
var431 = hash_collection__HashMap___91d_93d(var_429, var_430);
}
var432 = 1;
{
{ /* Inline kernel#Int#+ (var431,var432) on <var431:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var432:Int> isa OTHER */
/* <var432:Int> isa OTHER */
var435 = 1; /* easy <var432:Int> isa OTHER*/
if (unlikely(!var435)) {
var_class_name438 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name438);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var439 = ((struct instance_kernel__Int*)var431)->value; /* autounbox from nullable Object to Int */;
var440 = var439 + var432;
var433 = var440;
goto RET_LABEL434;
RET_LABEL434:(void)0;
}
}
{
var441 = BOX_kernel__Int(var433); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_429, var_430, var441); /* Direct call hash_collection#HashMap#[]= on <var_429:HashMap[String, Int]>*/
}
if (varonce442) {
var443 = varonce442;
} else {
var444 = "count_type_test_resolved_";
var445 = 25;
var446 = string__NativeString__to_s_with_length(var444, var445);
var443 = var446;
varonce442 = var443;
}
if (varonce447) {
var448 = varonce447;
} else {
var449 = "++;";
var450 = 3;
var451 = string__NativeString__to_s_with_length(var449, var450);
var448 = var451;
varonce447 = var448;
}
var452 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var452 = array_instance Array[Object] */
var453 = 3;
var454 = NEW_array__NativeArray(var453, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var454)->values[0] = (val*) var443;
((struct instance_array__NativeArray*)var454)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var454)->values[2] = (val*) var448;
{
((void (*)(val*, val*, long))(var452->class->vft[COLOR_array__Array__with_native]))(var452, var454, var453) /* with_native on <var452:Array[Object]>*/;
}
}
{
var455 = ((val* (*)(val*))(var452->class->vft[COLOR_string__Object__to_s]))(var452) /* to_s on <var452:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var455); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
if (varonce456) {
var457 = varonce456;
} else {
var458 = "PRINT_ERROR(\"NOT YET IMPLEMENTED: type_test(%s, ";
var459 = 48;
var460 = string__NativeString__to_s_with_length(var458, var459);
var457 = var460;
varonce456 = var457;
}
if (varonce461) {
var462 = varonce461;
} else {
var463 = ").\\n\", \"";
var464 = 8;
var465 = string__NativeString__to_s_with_length(var463, var464);
var462 = var465;
varonce461 = var462;
}
{
var466 = abstract_compiler__RuntimeVariable__inspect(var_value);
}
if (varonce467) {
var468 = varonce467;
} else {
var469 = "\"); show_backtrace(1);";
var470 = 22;
var471 = string__NativeString__to_s_with_length(var469, var470);
var468 = var471;
varonce467 = var468;
}
var472 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var472 = array_instance Array[Object] */
var473 = 5;
var474 = NEW_array__NativeArray(var473, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var474)->values[0] = (val*) var457;
((struct instance_array__NativeArray*)var474)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var474)->values[2] = (val*) var462;
((struct instance_array__NativeArray*)var474)->values[3] = (val*) var466;
((struct instance_array__NativeArray*)var474)->values[4] = (val*) var468;
{
((void (*)(val*, val*, long))(var472->class->vft[COLOR_array__Array__with_native]))(var472, var474, var473) /* with_native on <var472:Array[Object]>*/;
}
}
{
var475 = ((val* (*)(val*))(var472->class->vft[COLOR_string__Object__to_s]))(var472) /* to_s on <var472:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var475); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
if (var_maybe_null){
if (varonce476) {
var477 = varonce476;
} else {
var478 = "if(";
var479 = 3;
var480 = string__NativeString__to_s_with_length(var478, var479);
var477 = var480;
varonce476 = var477;
}
if (varonce481) {
var482 = varonce481;
} else {
var483 = " == NULL) {";
var484 = 11;
var485 = string__NativeString__to_s_with_length(var483, var484);
var482 = var485;
varonce481 = var482;
}
var486 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var486 = array_instance Array[Object] */
var487 = 3;
var488 = NEW_array__NativeArray(var487, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var488)->values[0] = (val*) var477;
((struct instance_array__NativeArray*)var488)->values[1] = (val*) var_value;
((struct instance_array__NativeArray*)var488)->values[2] = (val*) var482;
{
((void (*)(val*, val*, long))(var486->class->vft[COLOR_array__Array__with_native]))(var486, var488, var487) /* with_native on <var486:Array[Object]>*/;
}
}
{
var489 = ((val* (*)(val*))(var486->class->vft[COLOR_string__Object__to_s]))(var486) /* to_s on <var486:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var489); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce490) {
var491 = varonce490;
} else {
var492 = " = ";
var493 = 3;
var494 = string__NativeString__to_s_with_length(var492, var493);
var491 = var494;
varonce490 = var491;
}
if (varonce495) {
var496 = varonce495;
} else {
var497 = ";";
var498 = 1;
var499 = string__NativeString__to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
var500 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var500 = array_instance Array[Object] */
var501 = 4;
var502 = NEW_array__NativeArray(var501, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var502)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var502)->values[1] = (val*) var491;
((struct instance_array__NativeArray*)var502)->values[2] = (val*) var_accept_null;
((struct instance_array__NativeArray*)var502)->values[3] = (val*) var496;
{
((void (*)(val*, val*, long))(var500->class->vft[COLOR_array__Array__with_native]))(var500, var502, var501) /* with_native on <var500:Array[Object]>*/;
}
}
{
var503 = ((val* (*)(val*))(var500->class->vft[COLOR_string__Object__to_s]))(var500) /* to_s on <var500:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var503); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce504) {
var505 = varonce504;
} else {
var506 = "} else {";
var507 = 8;
var508 = string__NativeString__to_s_with_length(var506, var507);
var505 = var508;
varonce504 = var505;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var505); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
var509 = separate_compiler__SeparateCompilerVisitor__type_info(self, var_value);
}
var_value_type_info = var509;
if (varonce510) {
var511 = varonce510;
} else {
var512 = "if(";
var513 = 3;
var514 = string__NativeString__to_s_with_length(var512, var513);
var511 = var514;
varonce510 = var511;
}
if (varonce515) {
var516 = varonce515;
} else {
var517 = " >= ";
var518 = 4;
var519 = string__NativeString__to_s_with_length(var517, var518);
var516 = var519;
varonce515 = var516;
}
if (varonce520) {
var521 = varonce520;
} else {
var522 = "->table_size) {";
var523 = 15;
var524 = string__NativeString__to_s_with_length(var522, var523);
var521 = var524;
varonce520 = var521;
}
var525 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var525 = array_instance Array[Object] */
var526 = 5;
var527 = NEW_array__NativeArray(var526, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var527)->values[0] = (val*) var511;
((struct instance_array__NativeArray*)var527)->values[1] = (val*) var_cltype;
((struct instance_array__NativeArray*)var527)->values[2] = (val*) var516;
((struct instance_array__NativeArray*)var527)->values[3] = (val*) var_value_type_info;
((struct instance_array__NativeArray*)var527)->values[4] = (val*) var521;
{
((void (*)(val*, val*, long))(var525->class->vft[COLOR_array__Array__with_native]))(var525, var527, var526) /* with_native on <var525:Array[Object]>*/;
}
}
{
var528 = ((val* (*)(val*))(var525->class->vft[COLOR_string__Object__to_s]))(var525) /* to_s on <var525:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var528); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce529) {
var530 = varonce529;
} else {
var531 = " = 0;";
var532 = 5;
var533 = string__NativeString__to_s_with_length(var531, var532);
var530 = var533;
varonce529 = var530;
}
var534 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var534 = array_instance Array[Object] */
var535 = 2;
var536 = NEW_array__NativeArray(var535, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var536)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var536)->values[1] = (val*) var530;
{
((void (*)(val*, val*, long))(var534->class->vft[COLOR_array__Array__with_native]))(var534, var536, var535) /* with_native on <var534:Array[Object]>*/;
}
}
{
var537 = ((val* (*)(val*))(var534->class->vft[COLOR_string__Object__to_s]))(var534) /* to_s on <var534:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var537); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce538) {
var539 = varonce538;
} else {
var540 = "} else {";
var541 = 8;
var542 = string__NativeString__to_s_with_length(var540, var541);
var539 = var542;
varonce538 = var539;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var539); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce543) {
var544 = varonce543;
} else {
var545 = " = ";
var546 = 3;
var547 = string__NativeString__to_s_with_length(var545, var546);
var544 = var547;
varonce543 = var544;
}
if (varonce548) {
var549 = varonce548;
} else {
var550 = "->type_table[";
var551 = 13;
var552 = string__NativeString__to_s_with_length(var550, var551);
var549 = var552;
varonce548 = var549;
}
if (varonce553) {
var554 = varonce553;
} else {
var555 = "] == ";
var556 = 5;
var557 = string__NativeString__to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
if (varonce558) {
var559 = varonce558;
} else {
var560 = ";";
var561 = 1;
var562 = string__NativeString__to_s_with_length(var560, var561);
var559 = var562;
varonce558 = var559;
}
var563 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var563 = array_instance Array[Object] */
var564 = 8;
var565 = NEW_array__NativeArray(var564, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var565)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var565)->values[1] = (val*) var544;
((struct instance_array__NativeArray*)var565)->values[2] = (val*) var_value_type_info;
((struct instance_array__NativeArray*)var565)->values[3] = (val*) var549;
((struct instance_array__NativeArray*)var565)->values[4] = (val*) var_cltype;
((struct instance_array__NativeArray*)var565)->values[5] = (val*) var554;
((struct instance_array__NativeArray*)var565)->values[6] = (val*) var_idtype;
((struct instance_array__NativeArray*)var565)->values[7] = (val*) var559;
{
((void (*)(val*, val*, long))(var563->class->vft[COLOR_array__Array__with_native]))(var563, var565, var564) /* with_native on <var563:Array[Object]>*/;
}
}
{
var566 = ((val* (*)(val*))(var563->class->vft[COLOR_string__Object__to_s]))(var563) /* to_s on <var563:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var566); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce567) {
var568 = varonce567;
} else {
var569 = "}";
var570 = 1;
var571 = string__NativeString__to_s_with_length(var569, var570);
var568 = var571;
varonce567 = var568;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var568); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (var_maybe_null){
if (varonce572) {
var573 = varonce572;
} else {
var574 = "}";
var575 = 1;
var576 = string__NativeString__to_s_with_length(var574, var575);
var573 = var576;
varonce572 = var573;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var573); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_test for (self: Object, RuntimeVariable, MType, String): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__type_test(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#is_same_type_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
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
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : MType */;
val* var20 /* : MType */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var29 /* : MType */;
val* var31 /* : MType */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : MType */;
val* var46 /* : MType */;
val* var47 /* : MType */;
val* var49 /* : MType */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other53 /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
val* var62 /* : MType */;
val* var64 /* : MType */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : MType */;
val* var72 /* : MType */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
val* var82 /* : MType */;
val* var84 /* : MType */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
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
val* var110 /* : MType */;
val* var112 /* : MType */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var120 /* : NativeArray[Object] */;
val* var121 /* : String */;
val* var122 /* : MType */;
val* var124 /* : MType */;
short int var125 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
val* var131 /* : String */;
val* var132 /* : Array[Object] */;
long var133 /* : Int */;
val* var134 /* : NativeArray[Object] */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
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
val* var151 /* : String */;
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
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : FlatString */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
long var189 /* : Int */;
val* var190 /* : FlatString */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
val* var196 /* : Array[Object] */;
long var197 /* : Int */;
val* var198 /* : NativeArray[Object] */;
val* var199 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var2 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__MType__ctype]))(var4) /* ctype on <var4:MType>*/;
}
if (varonce) {
var8 = varonce;
} else {
var9 = "val*";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
{ /* Inline kernel#Object#!= (var7,var8) on <var7:String> */
var_other = var8;
{
var16 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_kernel__Object___61d_61d]))(var7, var_other) /* == on <var7:String>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var20 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__MType__ctype]))(var18) /* ctype on <var18:MType>*/;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "val*";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
var28 = string__FlatString___61d_61d(var21, var23);
var27 = var28;
}
var3 = var27;
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
var31 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_compiler__MType__ctype]))(var29) /* ctype on <var29:MType>*/;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "val*";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
{ /* Inline kernel#Object#!= (var32,var34) on <var32:String> */
var_other = var34;
{
var42 = ((short int (*)(val*, val*))(var32->class->vft[COLOR_kernel__Object___61d_61d]))(var32, var_other) /* == on <var32:String>*/;
var41 = var42;
}
var43 = !var41;
var39 = var43;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var46 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var49 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var44,var47) on <var44:MType> */
var_other53 = var47;
{
{ /* Inline kernel#Object#is_same_instance (var44,var_other53) on <var44:MType> */
var56 = var44 == var_other53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
if (varonce57) {
var58 = varonce57;
} else {
var59 = " = 1; /* is_same_type_test: compatible types ";
var60 = 45;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var64 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " vs. ";
var68 = 5;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var72 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = " */";
var76 = 3;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 6;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var58;
((struct instance_array__NativeArray*)var80)->values[2] = (val*) var62;
((struct instance_array__NativeArray*)var80)->values[3] = (val*) var66;
((struct instance_array__NativeArray*)var80)->values[4] = (val*) var70;
((struct instance_array__NativeArray*)var80)->values[5] = (val*) var74;
{
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var84 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = ((val* (*)(val*))(var82->class->vft[COLOR_abstract_compiler__MType__ctype]))(var82) /* ctype on <var82:MType>*/;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = "val*";
var89 = 4;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
{
{ /* Inline kernel#Object#!= (var85,var87) on <var85:String> */
var_other = var87;
{
var95 = ((short int (*)(val*, val*))(var85->class->vft[COLOR_kernel__Object___61d_61d]))(var85, var_other) /* == on <var85:String>*/;
var94 = var95;
}
var96 = !var94;
var92 = var96;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
if (var91){
if (varonce97) {
var98 = varonce97;
} else {
var99 = " = 0; /* is_same_type_test: incompatible types ";
var100 = 47;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var104 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = " vs. ";
var108 = 5;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var112 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "*/";
var116 = 2;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 6;
var120 = NEW_array__NativeArray(var119, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var120)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var120)->values[1] = (val*) var98;
((struct instance_array__NativeArray*)var120)->values[2] = (val*) var102;
((struct instance_array__NativeArray*)var120)->values[3] = (val*) var106;
((struct instance_array__NativeArray*)var120)->values[4] = (val*) var110;
((struct instance_array__NativeArray*)var120)->values[5] = (val*) var114;
{
((void (*)(val*, val*, long))(var118->class->vft[COLOR_array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
}
{
var121 = ((val* (*)(val*))(var118->class->vft[COLOR_string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var121); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var124 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
/* <var122:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var122->type->table_size) {
var125 = 0;
} else {
var125 = var122->type->type_table[cltype] == idtype;
}
if (unlikely(!var125)) {
var_class_name = var122 == NULL ? "null" : var122->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1563);
show_backtrace(1);
}
var_mtype1 = var122;
if (varonce126) {
var127 = varonce126;
} else {
var128 = "class_";
var129 = 6;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
{
var131 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
var132 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var132 = array_instance Array[Object] */
var133 = 2;
var134 = NEW_array__NativeArray(var133, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var134)->values[0] = (val*) var127;
((struct instance_array__NativeArray*)var134)->values[1] = (val*) var131;
{
((void (*)(val*, val*, long))(var132->class->vft[COLOR_array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[Object]>*/;
}
}
{
var135 = ((val* (*)(val*))(var132->class->vft[COLOR_string__Object__to_s]))(var132) /* to_s on <var132:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var135); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = " = (";
var139 = 4;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = " != NULL) && (";
var144 = 14;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = "->class == &class_";
var149 = 18;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
{
var151 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "); /* is_same_type_test */";
var155 = 26;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var157 = array_instance Array[Object] */
var158 = 8;
var159 = NEW_array__NativeArray(var158, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var159)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var159)->values[1] = (val*) var137;
((struct instance_array__NativeArray*)var159)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var159)->values[3] = (val*) var142;
((struct instance_array__NativeArray*)var159)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var159)->values[5] = (val*) var147;
((struct instance_array__NativeArray*)var159)->values[6] = (val*) var151;
((struct instance_array__NativeArray*)var159)->values[7] = (val*) var153;
{
((void (*)(val*, val*, long))(var157->class->vft[COLOR_array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[Object]>*/;
}
}
{
var160 = ((val* (*)(val*))(var157->class->vft[COLOR_string__Object__to_s]))(var157) /* to_s on <var157:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var160); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (varonce161) {
var162 = varonce161;
} else {
var163 = " = (";
var164 = 4;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = " == ";
var169 = 4;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = ") || (";
var174 = 6;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
if (varonce176) {
var177 = varonce176;
} else {
var178 = " != NULL && ";
var179 = 12;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
if (varonce181) {
var182 = varonce181;
} else {
var183 = " != NULL && ";
var184 = 12;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
if (varonce186) {
var187 = varonce186;
} else {
var188 = "->class == ";
var189 = 11;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = "->class); /* is_same_type_test */";
var194 = 33;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
var196 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var196 = array_instance Array[Object] */
var197 = 14;
var198 = NEW_array__NativeArray(var197, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var198)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var198)->values[1] = (val*) var162;
((struct instance_array__NativeArray*)var198)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var198)->values[3] = (val*) var167;
((struct instance_array__NativeArray*)var198)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var198)->values[5] = (val*) var172;
((struct instance_array__NativeArray*)var198)->values[6] = (val*) var_value1;
((struct instance_array__NativeArray*)var198)->values[7] = (val*) var177;
((struct instance_array__NativeArray*)var198)->values[8] = (val*) var_value2;
((struct instance_array__NativeArray*)var198)->values[9] = (val*) var182;
((struct instance_array__NativeArray*)var198)->values[10] = (val*) var_value1;
((struct instance_array__NativeArray*)var198)->values[11] = (val*) var187;
((struct instance_array__NativeArray*)var198)->values[12] = (val*) var_value2;
((struct instance_array__NativeArray*)var198)->values[13] = (val*) var192;
{
((void (*)(val*, val*, long))(var196->class->vft[COLOR_array__Array__with_native]))(var196, var198, var197) /* with_native on <var196:Array[Object]>*/;
}
}
{
var199 = ((val* (*)(val*))(var196->class->vft[COLOR_string__Object__to_s]))(var196) /* to_s on <var196:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var199); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#is_same_type_test for (self: Object, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__is_same_type_test(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#class_name_string for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* separate_compiler__SeparateCompilerVisitor__class_name_string(val* self, val* p0) {
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
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : MType */;
val* var54 /* : MType */;
short int var55 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var56 /* : MType */;
val* var58 /* : MType */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name;
val* var62 /* : MClass */;
val* var64 /* : MClass */;
val* var65 /* : MClassKind */;
val* var67 /* : MClassKind */;
val* var68 /* : MClassKind */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var_75 /* var : Bool */;
val* var76 /* : MType */;
val* var78 /* : MType */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
val* var_other92 /* var other: nullable Object */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
val* var101 /* : MType */;
val* var103 /* : MType */;
short int var104 /* : Bool */;
int cltype105;
int idtype106;
const char* var_class_name107;
val* var108 /* : MClass */;
val* var110 /* : MClass */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
val* var116 /* : Array[Object] */;
long var117 /* : Int */;
val* var118 /* : NativeArray[Object] */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : MType */;
val* var127 /* : MType */;
val* var128 /* : String */;
val* var129 /* : Array[Object] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[Object] */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
val* var138 /* : MType */;
val* var140 /* : MType */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : FlatString */;
val* var147 /* : Array[Object] */;
long var148 /* : Int */;
val* var149 /* : NativeArray[Object] */;
val* var150 /* : String */;
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
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var22 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
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
var43 = "->type->name;";
var44 = 13;
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
abstract_compiler__AbstractCompilerVisitor__add(self, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var54 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
/* <var52:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var52->type->table_size) {
var55 = 0;
} else {
var55 = var52->type->type_table[cltype] == idtype;
}
var_ = var55;
if (var55){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var58 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
/* <var56:MType> isa MClassType */
cltype60 = type_model__MClassType.color;
idtype61 = type_model__MClassType.id;
if(cltype60 >= var56->type->table_size) {
var59 = 0;
} else {
var59 = var56->type->type_table[cltype60] == idtype61;
}
if (unlikely(!var59)) {
var_class_name = var56 == NULL ? "null" : var56->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1579);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var56) on <var56:MType(MClassType)> */
var64 = var56->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var56:MType(MClassType)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var62) on <var62:MClass> */
var67 = var62->attrs[COLOR_model__MClass___kind].val; /* _kind on <var62:MClass> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var65,var68) on <var65:MClassKind> */
var_other = var68;
{
{ /* Inline kernel#Object#is_same_instance (var65,var_other) on <var65:MClassKind> */
var74 = var65 == var_other;
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
var51 = var69;
} else {
var51 = var_;
}
var_75 = var51;
if (var51){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var78 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
/* <var76:MType> isa MClassType */
cltype80 = type_model__MClassType.color;
idtype81 = type_model__MClassType.id;
if(cltype80 >= var76->type->table_size) {
var79 = 0;
} else {
var79 = var76->type->type_table[cltype80] == idtype81;
}
if (unlikely(!var79)) {
var_class_name82 = var76 == NULL ? "null" : var76->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1580);
show_backtrace(1);
}
{
var83 = model__MType__name(var76);
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = "NativeString";
var87 = 12;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
{
{ /* Inline kernel#Object#!= (var83,var85) on <var83:String> */
var_other92 = var85;
{
var94 = ((short int (*)(val*, val*))(var83->class->vft[COLOR_kernel__Object___61d_61d]))(var83, var_other92) /* == on <var83:String>*/;
var93 = var94;
}
var95 = !var93;
var90 = var95;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
var89 = var90;
}
var50 = var89;
} else {
var50 = var_75;
}
if (var50){
if (varonce96) {
var97 = varonce96;
} else {
var98 = " = \"";
var99 = 4;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var103 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
/* <var101:MType> isa MClassType */
cltype105 = type_model__MClassType.color;
idtype106 = type_model__MClassType.id;
if(cltype105 >= var101->type->table_size) {
var104 = 0;
} else {
var104 = var101->type->type_table[cltype105] == idtype106;
}
if (unlikely(!var104)) {
var_class_name107 = var101 == NULL ? "null" : var101->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name107);
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1581);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var101) on <var101:MType(MClassType)> */
var110 = var101->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var101:MType(MClassType)> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = "\";";
var114 = 2;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var116 = array_instance Array[Object] */
var117 = 4;
var118 = NEW_array__NativeArray(var117, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var118)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var118)->values[1] = (val*) var97;
((struct instance_array__NativeArray*)var118)->values[2] = (val*) var108;
((struct instance_array__NativeArray*)var118)->values[3] = (val*) var112;
{
((void (*)(val*, val*, long))(var116->class->vft[COLOR_array__Array__with_native]))(var116, var118, var117) /* with_native on <var116:Array[Object]>*/;
}
}
{
var119 = ((val* (*)(val*))(var116->class->vft[COLOR_string__Object__to_s]))(var116) /* to_s on <var116:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var119); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce120) {
var121 = varonce120;
} else {
var122 = "type_";
var123 = 5;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var127 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
var128 = ((val* (*)(val*))(var125->class->vft[COLOR_abstract_compiler__MType__c_name]))(var125) /* c_name on <var125:MType>*/;
}
var129 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var129 = array_instance Array[Object] */
var130 = 2;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var121;
((struct instance_array__NativeArray*)var131)->values[1] = (val*) var128;
{
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[Object]>*/;
}
}
{
var132 = ((val* (*)(val*))(var129->class->vft[COLOR_string__Object__to_s]))(var129) /* to_s on <var129:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var132); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = " = type_";
var136 = 8;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var140 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
var141 = ((val* (*)(val*))(var138->class->vft[COLOR_abstract_compiler__MType__c_name]))(var138) /* c_name on <var138:MType>*/;
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = ".name;";
var145 = 6;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
var147 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var147 = array_instance Array[Object] */
var148 = 4;
var149 = NEW_array__NativeArray(var148, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var149)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var149)->values[1] = (val*) var134;
((struct instance_array__NativeArray*)var149)->values[2] = (val*) var141;
((struct instance_array__NativeArray*)var149)->values[3] = (val*) var143;
{
((void (*)(val*, val*, long))(var147->class->vft[COLOR_array__Array__with_native]))(var147, var149, var148) /* with_native on <var147:Array[Object]>*/;
}
}
{
var150 = ((val* (*)(val*))(var147->class->vft[COLOR_string__Object__to_s]))(var147) /* to_s on <var147:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var150); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#class_name_string for (self: Object, RuntimeVariable): String */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateCompilerVisitor__class_name_string(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#equal_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
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
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : MType */;
val* var20 /* : MType */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var29 /* : MType */;
val* var31 /* : MType */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : MType */;
val* var46 /* : MType */;
val* var47 /* : MType */;
val* var49 /* : MType */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other53 /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
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
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
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
val* var104 /* : MType */;
val* var106 /* : MType */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
val* var116 /* : MType */;
val* var118 /* : MType */;
short int var119 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : String */;
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
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
val* var145 /* : String */;
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
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : FlatString */;
val* var174 /* : MType */;
val* var176 /* : MType */;
val* var177 /* : RuntimeVariable */;
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
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
short int var197 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
val* var198 /* : Array[String] */;
val* var_test /* var test: Array[String] */;
val* var199 /* : MType */;
val* var201 /* : MType */;
val* var_t1 /* var t1: MType */;
short int var202 /* : Bool */;
int cltype203;
int idtype204;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : FlatString */;
val* var210 /* : Array[Object] */;
long var211 /* : Int */;
val* var212 /* : NativeArray[Object] */;
val* var213 /* : String */;
val* var214 /* : MType */;
val* var216 /* : MType */;
short int var217 /* : Bool */;
val* var218 /* : MType */;
val* var220 /* : MType */;
val* var_t2 /* var t2: MType */;
short int var221 /* : Bool */;
int cltype222;
int idtype223;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : FlatString */;
val* var229 /* : Array[Object] */;
long var230 /* : Int */;
val* var231 /* : NativeArray[Object] */;
val* var232 /* : String */;
val* var233 /* : MType */;
val* var235 /* : MType */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var_incompatible /* var incompatible: Bool */;
val* var238 /* : String */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : FlatString */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var_primitive /* var primitive: nullable Object */;
short int var250 /* : Bool */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
short int var255 /* : Bool */;
val* var256 /* : String */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
long var260 /* : Int */;
val* var261 /* : FlatString */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : FlatString */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : FlatString */;
val* var280 /* : Array[Object] */;
long var281 /* : Int */;
val* var282 /* : NativeArray[Object] */;
val* var283 /* : String */;
short int var284 /* : Bool */;
val* var285 /* : String */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
long var289 /* : Int */;
val* var290 /* : FlatString */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var296 /* : Bool */;
short int var297 /* : Bool */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : FlatString */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
long var306 /* : Int */;
val* var307 /* : FlatString */;
val* var308 /* : Array[Object] */;
long var309 /* : Int */;
val* var310 /* : NativeArray[Object] */;
val* var311 /* : String */;
short int var312 /* : Bool */;
val* var313 /* : null */;
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
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : FlatString */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : FlatString */;
val* var339 /* : Array[Object] */;
long var340 /* : Int */;
val* var341 /* : NativeArray[Object] */;
val* var342 /* : String */;
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
val* var358 /* : Array[Object] */;
long var359 /* : Int */;
val* var360 /* : NativeArray[Object] */;
val* var361 /* : String */;
val* var362 /* : null */;
short int var363 /* : Bool */;
short int var364 /* : Bool */;
short int var366 /* : Bool */;
short int var367 /* : Bool */;
short int var368 /* : Bool */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
long var372 /* : Int */;
val* var373 /* : FlatString */;
val* var374 /* : String */;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
long var378 /* : Int */;
val* var379 /* : FlatString */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
long var383 /* : Int */;
val* var384 /* : FlatString */;
val* var385 /* : String */;
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
val* var396 /* : Array[Object] */;
long var397 /* : Int */;
val* var398 /* : NativeArray[Object] */;
val* var399 /* : String */;
short int var400 /* : Bool */;
short int var401 /* : Bool */;
short int var_402 /* var : Bool */;
short int var403 /* : Bool */;
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
val* var414 /* : Array[Object] */;
long var415 /* : Int */;
val* var416 /* : NativeArray[Object] */;
val* var417 /* : String */;
val* var418 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var419 /* : AbstractCompiler */;
val* var421 /* : AbstractCompiler */;
val* var422 /* : HashMap[MClass, Int] */;
val* var424 /* : HashMap[MClass, Int] */;
val* var_425 /* var : HashMap[MClass, Int] */;
val* var426 /* : HashMapIterator[Object, nullable Object] */;
val* var_427 /* var : HashMapIterator[MClass, Int] */;
short int var428 /* : Bool */;
val* var429 /* : Object */;
val* var_t /* var t: MClass */;
val* var430 /* : nullable Object */;
long var431 /* : Int */;
long var_v /* var v: Int */;
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
val* var447 /* : String */;
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
val* var458 /* : String */;
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
val* var469 /* : Array[Object] */;
long var470 /* : Int */;
val* var471 /* : NativeArray[Object] */;
val* var472 /* : Object */;
val* var473 /* : String */;
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
val* var485 /* : String */;
static val* varonce486;
val* var487 /* : String */;
char* var488 /* : NativeString */;
long var489 /* : Int */;
val* var490 /* : FlatString */;
val* var491 /* : Array[Object] */;
long var492 /* : Int */;
val* var493 /* : NativeArray[Object] */;
val* var494 /* : String */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
long var498 /* : Int */;
val* var499 /* : FlatString */;
static val* varonce500;
val* var501 /* : String */;
char* var502 /* : NativeString */;
long var503 /* : Int */;
val* var504 /* : FlatString */;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : NativeString */;
long var508 /* : Int */;
val* var509 /* : FlatString */;
val* var510 /* : Array[Object] */;
long var511 /* : Int */;
val* var512 /* : NativeArray[Object] */;
val* var513 /* : String */;
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
val* var534 /* : String */;
static val* varonce535;
val* var536 /* : String */;
char* var537 /* : NativeString */;
long var538 /* : Int */;
val* var539 /* : FlatString */;
val* var540 /* : Array[Object] */;
long var541 /* : Int */;
val* var542 /* : NativeArray[Object] */;
val* var543 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var2 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__MType__ctype]))(var4) /* ctype on <var4:MType>*/;
}
if (varonce) {
var8 = varonce;
} else {
var9 = "val*";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
{ /* Inline kernel#Object#!= (var7,var8) on <var7:String> */
var_other = var8;
{
var16 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_kernel__Object___61d_61d]))(var7, var_other) /* == on <var7:String>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var20 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__MType__ctype]))(var18) /* ctype on <var18:MType>*/;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "val*";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
var28 = string__FlatString___61d_61d(var21, var23);
var27 = var28;
}
var3 = var27;
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
var31 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_compiler__MType__ctype]))(var29) /* ctype on <var29:MType>*/;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "val*";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
{ /* Inline kernel#Object#!= (var32,var34) on <var32:String> */
var_other = var34;
{
var42 = ((short int (*)(val*, val*))(var32->class->vft[COLOR_kernel__Object___61d_61d]))(var32, var_other) /* == on <var32:String>*/;
var41 = var42;
}
var43 = !var41;
var39 = var43;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var46 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var49 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var44,var47) on <var44:MType> */
var_other53 = var47;
{
{ /* Inline kernel#Object#is_same_instance (var44,var_other53) on <var44:MType> */
var56 = var44 == var_other53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
if (varonce57) {
var58 = varonce57;
} else {
var59 = " = ";
var60 = 3;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = " == ";
var65 = 4;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = ";";
var70 = 1;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 6;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var74)->values[1] = (val*) var58;
((struct instance_array__NativeArray*)var74)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var74)->values[3] = (val*) var63;
((struct instance_array__NativeArray*)var74)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var74)->values[5] = (val*) var68;
{
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
}
{
var75 = ((val* (*)(val*))(var72->class->vft[COLOR_string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var78 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_abstract_compiler__MType__ctype]))(var76) /* ctype on <var76:MType>*/;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "val*";
var83 = 4;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{
{ /* Inline kernel#Object#!= (var79,var81) on <var79:String> */
var_other = var81;
{
var89 = ((short int (*)(val*, val*))(var79->class->vft[COLOR_kernel__Object___61d_61d]))(var79, var_other) /* == on <var79:String>*/;
var88 = var89;
}
var90 = !var88;
var86 = var90;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
if (varonce91) {
var92 = varonce91;
} else {
var93 = " = 0; /* incompatible types ";
var94 = 28;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var98 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = " vs. ";
var102 = 5;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var106 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "*/";
var110 = 2;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 6;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var92;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var96;
((struct instance_array__NativeArray*)var114)->values[3] = (val*) var100;
((struct instance_array__NativeArray*)var114)->values[4] = (val*) var104;
((struct instance_array__NativeArray*)var114)->values[5] = (val*) var108;
{
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var118 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
/* <var116:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var116->type->table_size) {
var119 = 0;
} else {
var119 = var116->type->type_table[cltype] == idtype;
}
if (unlikely(!var119)) {
var_class_name = var116 == NULL ? "null" : var116->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1603);
show_backtrace(1);
}
var_mtype1 = var116;
if (varonce120) {
var121 = varonce120;
} else {
var122 = "class_";
var123 = 6;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
{
var125 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
var126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 2;
var128 = NEW_array__NativeArray(var127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var128)->values[0] = (val*) var121;
((struct instance_array__NativeArray*)var128)->values[1] = (val*) var125;
{
((void (*)(val*, val*, long))(var126->class->vft[COLOR_array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
}
{
var129 = ((val* (*)(val*))(var126->class->vft[COLOR_string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var129); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = " = (";
var133 = 4;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = " != NULL) && (";
var138 = 14;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = "->class == &class_";
var143 = 18;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
{
var145 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = ");";
var149 = 2;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
var151 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var151 = array_instance Array[Object] */
var152 = 8;
var153 = NEW_array__NativeArray(var152, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var153)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var153)->values[1] = (val*) var131;
((struct instance_array__NativeArray*)var153)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var153)->values[3] = (val*) var136;
((struct instance_array__NativeArray*)var153)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var153)->values[5] = (val*) var141;
((struct instance_array__NativeArray*)var153)->values[6] = (val*) var145;
((struct instance_array__NativeArray*)var153)->values[7] = (val*) var147;
{
((void (*)(val*, val*, long))(var151->class->vft[COLOR_array__Array__with_native]))(var151, var153, var152) /* with_native on <var151:Array[Object]>*/;
}
}
{
var154 = ((val* (*)(val*))(var151->class->vft[COLOR_string__Object__to_s]))(var151) /* to_s on <var151:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var154); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = "if (";
var158 = 4;
var159 = string__NativeString__to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
if (varonce160) {
var161 = varonce160;
} else {
var162 = ") {";
var163 = 3;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
var165 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var165 = array_instance Array[Object] */
var166 = 3;
var167 = NEW_array__NativeArray(var166, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var167)->values[0] = (val*) var156;
((struct instance_array__NativeArray*)var167)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var167)->values[2] = (val*) var161;
{
((void (*)(val*, val*, long))(var165->class->vft[COLOR_array__Array__with_native]))(var165, var167, var166) /* with_native on <var165:Array[Object]>*/;
}
}
{
var168 = ((val* (*)(val*))(var165->class->vft[COLOR_string__Object__to_s]))(var165) /* to_s on <var165:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var168); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce169) {
var170 = varonce169;
} else {
var171 = " = (";
var172 = 4;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var176 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
var177 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_value2, var174);
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = " == ";
var181 = 4;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = ");";
var186 = 2;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 6;
var190 = NEW_array__NativeArray(var189, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var190)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var190)->values[1] = (val*) var170;
((struct instance_array__NativeArray*)var190)->values[2] = (val*) var177;
((struct instance_array__NativeArray*)var190)->values[3] = (val*) var179;
((struct instance_array__NativeArray*)var190)->values[4] = (val*) var_value1;
((struct instance_array__NativeArray*)var190)->values[5] = (val*) var184;
{
((void (*)(val*, val*, long))(var188->class->vft[COLOR_array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
}
{
var191 = ((val* (*)(val*))(var188->class->vft[COLOR_string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var191); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = "}";
var195 = 1;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var193); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
} else {
}
var197 = 1;
var_maybe_null = var197;
var198 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var198->class->vft[COLOR_kernel__Object__init]))(var198) /* init on <var198:Array[String]>*/;
}
var_test = var198;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var201 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
var_t1 = var199;
/* <var_t1:MType> isa MNullableType */
cltype203 = type_model__MNullableType.color;
idtype204 = type_model__MNullableType.id;
if(cltype203 >= var_t1->type->table_size) {
var202 = 0;
} else {
var202 = var_t1->type->type_table[cltype203] == idtype204;
}
if (var202){
if (varonce205) {
var206 = varonce205;
} else {
var207 = " != NULL";
var208 = 8;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
var210 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var210 = array_instance Array[Object] */
var211 = 2;
var212 = NEW_array__NativeArray(var211, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var212)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var212)->values[1] = (val*) var206;
{
((void (*)(val*, val*, long))(var210->class->vft[COLOR_array__Array__with_native]))(var210, var212, var211) /* with_native on <var210:Array[Object]>*/;
}
}
{
var213 = ((val* (*)(val*))(var210->class->vft[COLOR_string__Object__to_s]))(var210) /* to_s on <var210:Array[Object]>*/;
}
{
array__Array__add(var_test, var213); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
{
{ /* Inline model#MNullableType#mtype (var_t1) on <var_t1:MType(MNullableType)> */
var216 = var_t1->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_t1:MType(MNullableType)> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
var_t1 = var214;
} else {
var217 = 0;
var_maybe_null = var217;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var220 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
var_t2 = var218;
/* <var_t2:MType> isa MNullableType */
cltype222 = type_model__MNullableType.color;
idtype223 = type_model__MNullableType.id;
if(cltype222 >= var_t2->type->table_size) {
var221 = 0;
} else {
var221 = var_t2->type->type_table[cltype222] == idtype223;
}
if (var221){
if (varonce224) {
var225 = varonce224;
} else {
var226 = " != NULL";
var227 = 8;
var228 = string__NativeString__to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
var229 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var229 = array_instance Array[Object] */
var230 = 2;
var231 = NEW_array__NativeArray(var230, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var231)->values[0] = (val*) var_value2;
((struct instance_array__NativeArray*)var231)->values[1] = (val*) var225;
{
((void (*)(val*, val*, long))(var229->class->vft[COLOR_array__Array__with_native]))(var229, var231, var230) /* with_native on <var229:Array[Object]>*/;
}
}
{
var232 = ((val* (*)(val*))(var229->class->vft[COLOR_string__Object__to_s]))(var229) /* to_s on <var229:Array[Object]>*/;
}
{
array__Array__add(var_test, var232); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
{
{ /* Inline model#MNullableType#mtype (var_t2) on <var_t2:MType(MNullableType)> */
var235 = var_t2->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_t2:MType(MNullableType)> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
var_t2 = var233;
} else {
var236 = 0;
var_maybe_null = var236;
}
var237 = 0;
var_incompatible = var237;
{
var238 = ((val* (*)(val*))(var_t1->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t1) /* ctype on <var_t1:MType>*/;
}
if (varonce239) {
var240 = varonce239;
} else {
var241 = "val*";
var242 = 4;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
{
{ /* Inline kernel#Object#!= (var238,var240) on <var238:String> */
var_other = var240;
{
var248 = ((short int (*)(val*, val*))(var238->class->vft[COLOR_kernel__Object___61d_61d]))(var238, var_other) /* == on <var238:String>*/;
var247 = var248;
}
var249 = !var247;
var245 = var249;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
var244 = var245;
}
if (var244){
var_primitive = var_t1;
{
{ /* Inline kernel#Object#== (var_t1,var_t2) on <var_t1:MType> */
var_other53 = var_t2;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other53) on <var_t1:MType> */
var255 = var_t1 == var_other53;
var253 = var255;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
}
var251 = var253;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
var250 = var251;
}
if (var250){
} else {
{
var256 = ((val* (*)(val*))(var_t2->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t2) /* ctype on <var_t2:MType>*/;
}
if (varonce257) {
var258 = varonce257;
} else {
var259 = "val*";
var260 = 4;
var261 = string__NativeString__to_s_with_length(var259, var260);
var258 = var261;
varonce257 = var258;
}
{
{ /* Inline kernel#Object#!= (var256,var258) on <var256:String> */
var_other = var258;
{
var266 = ((short int (*)(val*, val*))(var256->class->vft[COLOR_kernel__Object___61d_61d]))(var256, var_other) /* == on <var256:String>*/;
var265 = var266;
}
var267 = !var265;
var263 = var267;
goto RET_LABEL264;
RET_LABEL264:(void)0;
}
var262 = var263;
}
if (var262){
var268 = 1;
var_incompatible = var268;
} else {
{
var269 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, var_value2);
}
if (var269){
if (varonce270) {
var271 = varonce270;
} else {
var272 = "->class == ";
var273 = 11;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
if (varonce275) {
var276 = varonce275;
} else {
var277 = "->class";
var278 = 7;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
var280 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var280 = array_instance Array[Object] */
var281 = 4;
var282 = NEW_array__NativeArray(var281, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var282)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var282)->values[1] = (val*) var271;
((struct instance_array__NativeArray*)var282)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var282)->values[3] = (val*) var276;
{
((void (*)(val*, val*, long))(var280->class->vft[COLOR_array__Array__with_native]))(var280, var282, var281) /* with_native on <var280:Array[Object]>*/;
}
}
{
var283 = ((val* (*)(val*))(var280->class->vft[COLOR_string__Object__to_s]))(var280) /* to_s on <var280:Array[Object]>*/;
}
{
array__Array__add(var_test, var283); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
var284 = 1;
var_incompatible = var284;
}
}
}
} else {
{
var285 = ((val* (*)(val*))(var_t2->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t2) /* ctype on <var_t2:MType>*/;
}
if (varonce286) {
var287 = varonce286;
} else {
var288 = "val*";
var289 = 4;
var290 = string__NativeString__to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
{
{ /* Inline kernel#Object#!= (var285,var287) on <var285:String> */
var_other = var287;
{
var295 = ((short int (*)(val*, val*))(var285->class->vft[COLOR_kernel__Object___61d_61d]))(var285, var_other) /* == on <var285:String>*/;
var294 = var295;
}
var296 = !var294;
var292 = var296;
goto RET_LABEL293;
RET_LABEL293:(void)0;
}
var291 = var292;
}
if (var291){
var_primitive = var_t2;
{
var297 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, var_value1);
}
if (var297){
if (varonce298) {
var299 = varonce298;
} else {
var300 = "->class == ";
var301 = 11;
var302 = string__NativeString__to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
if (varonce303) {
var304 = varonce303;
} else {
var305 = "->class";
var306 = 7;
var307 = string__NativeString__to_s_with_length(var305, var306);
var304 = var307;
varonce303 = var304;
}
var308 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var308 = array_instance Array[Object] */
var309 = 4;
var310 = NEW_array__NativeArray(var309, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var310)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var310)->values[1] = (val*) var299;
((struct instance_array__NativeArray*)var310)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var310)->values[3] = (val*) var304;
{
((void (*)(val*, val*, long))(var308->class->vft[COLOR_array__Array__with_native]))(var308, var310, var309) /* with_native on <var308:Array[Object]>*/;
}
}
{
var311 = ((val* (*)(val*))(var308->class->vft[COLOR_string__Object__to_s]))(var308) /* to_s on <var308:Array[Object]>*/;
}
{
array__Array__add(var_test, var311); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
var312 = 1;
var_incompatible = var312;
}
} else {
var313 = NULL;
var_primitive = var313;
}
}
if (var_incompatible){
if (var_maybe_null){
if (varonce314) {
var315 = varonce314;
} else {
var316 = " = ";
var317 = 3;
var318 = string__NativeString__to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
if (varonce319) {
var320 = varonce319;
} else {
var321 = " == ";
var322 = 4;
var323 = string__NativeString__to_s_with_length(var321, var322);
var320 = var323;
varonce319 = var320;
}
if (varonce324) {
var325 = varonce324;
} else {
var326 = "; /* incompatible types ";
var327 = 24;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = " vs. ";
var332 = 5;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = "; but may be NULL*/";
var337 = 19;
var338 = string__NativeString__to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
var339 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var339 = array_instance Array[Object] */
var340 = 10;
var341 = NEW_array__NativeArray(var340, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var341)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var341)->values[1] = (val*) var315;
((struct instance_array__NativeArray*)var341)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var341)->values[3] = (val*) var320;
((struct instance_array__NativeArray*)var341)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var341)->values[5] = (val*) var325;
((struct instance_array__NativeArray*)var341)->values[6] = (val*) var_t1;
((struct instance_array__NativeArray*)var341)->values[7] = (val*) var330;
((struct instance_array__NativeArray*)var341)->values[8] = (val*) var_t2;
((struct instance_array__NativeArray*)var341)->values[9] = (val*) var335;
{
((void (*)(val*, val*, long))(var339->class->vft[COLOR_array__Array__with_native]))(var339, var341, var340) /* with_native on <var339:Array[Object]>*/;
}
}
{
var342 = ((val* (*)(val*))(var339->class->vft[COLOR_string__Object__to_s]))(var339) /* to_s on <var339:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var342); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
if (varonce343) {
var344 = varonce343;
} else {
var345 = " = 0; /* incompatible types ";
var346 = 28;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
if (varonce348) {
var349 = varonce348;
} else {
var350 = " vs. ";
var351 = 5;
var352 = string__NativeString__to_s_with_length(var350, var351);
var349 = var352;
varonce348 = var349;
}
if (varonce353) {
var354 = varonce353;
} else {
var355 = "; cannot be NULL */";
var356 = 19;
var357 = string__NativeString__to_s_with_length(var355, var356);
var354 = var357;
varonce353 = var354;
}
var358 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var358 = array_instance Array[Object] */
var359 = 6;
var360 = NEW_array__NativeArray(var359, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var360)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var360)->values[1] = (val*) var344;
((struct instance_array__NativeArray*)var360)->values[2] = (val*) var_t1;
((struct instance_array__NativeArray*)var360)->values[3] = (val*) var349;
((struct instance_array__NativeArray*)var360)->values[4] = (val*) var_t2;
((struct instance_array__NativeArray*)var360)->values[5] = (val*) var354;
{
((void (*)(val*, val*, long))(var358->class->vft[COLOR_array__Array__with_native]))(var358, var360, var359) /* with_native on <var358:Array[Object]>*/;
}
}
{
var361 = ((val* (*)(val*))(var358->class->vft[COLOR_string__Object__to_s]))(var358) /* to_s on <var358:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var361); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
} else {
}
var362 = NULL;
if (var_primitive == NULL) {
var363 = 0; /* is null */
} else {
var363 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_primitive,var362) on <var_primitive:nullable Object(nullable MType)> */
var_other = var362;
{
var367 = ((short int (*)(val*, val*))(var_primitive->class->vft[COLOR_kernel__Object___61d_61d]))(var_primitive, var_other) /* == on <var_primitive:nullable MType(MType)>*/;
var366 = var367;
}
var368 = !var366;
var364 = var368;
goto RET_LABEL365;
RET_LABEL365:(void)0;
}
var363 = var364;
}
if (var363){
if (varonce369) {
var370 = varonce369;
} else {
var371 = "((struct instance_";
var372 = 18;
var373 = string__NativeString__to_s_with_length(var371, var372);
var370 = var373;
varonce369 = var370;
}
{
var374 = ((val* (*)(val*))(var_primitive->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_primitive) /* c_name on <var_primitive:nullable Object(MType)>*/;
}
if (varonce375) {
var376 = varonce375;
} else {
var377 = "*)";
var378 = 2;
var379 = string__NativeString__to_s_with_length(var377, var378);
var376 = var379;
varonce375 = var376;
}
if (varonce380) {
var381 = varonce380;
} else {
var382 = ")->value == ((struct instance_";
var383 = 30;
var384 = string__NativeString__to_s_with_length(var382, var383);
var381 = var384;
varonce380 = var381;
}
{
var385 = ((val* (*)(val*))(var_primitive->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_primitive) /* c_name on <var_primitive:nullable Object(MType)>*/;
}
if (varonce386) {
var387 = varonce386;
} else {
var388 = "*)";
var389 = 2;
var390 = string__NativeString__to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
if (varonce391) {
var392 = varonce391;
} else {
var393 = ")->value";
var394 = 8;
var395 = string__NativeString__to_s_with_length(var393, var394);
var392 = var395;
varonce391 = var392;
}
var396 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var396 = array_instance Array[Object] */
var397 = 9;
var398 = NEW_array__NativeArray(var397, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var398)->values[0] = (val*) var370;
((struct instance_array__NativeArray*)var398)->values[1] = (val*) var374;
((struct instance_array__NativeArray*)var398)->values[2] = (val*) var376;
((struct instance_array__NativeArray*)var398)->values[3] = (val*) var_value1;
((struct instance_array__NativeArray*)var398)->values[4] = (val*) var381;
((struct instance_array__NativeArray*)var398)->values[5] = (val*) var385;
((struct instance_array__NativeArray*)var398)->values[6] = (val*) var387;
((struct instance_array__NativeArray*)var398)->values[7] = (val*) var_value2;
((struct instance_array__NativeArray*)var398)->values[8] = (val*) var392;
{
((void (*)(val*, val*, long))(var396->class->vft[COLOR_array__Array__with_native]))(var396, var398, var397) /* with_native on <var396:Array[Object]>*/;
}
}
{
var399 = ((val* (*)(val*))(var396->class->vft[COLOR_string__Object__to_s]))(var396) /* to_s on <var396:Array[Object]>*/;
}
{
array__Array__add(var_test, var399); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
{
var401 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, var_value1);
}
var_402 = var401;
if (var401){
{
var403 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, var_value2);
}
var400 = var403;
} else {
var400 = var_402;
}
if (var400){
if (varonce404) {
var405 = varonce404;
} else {
var406 = "->class == ";
var407 = 11;
var408 = string__NativeString__to_s_with_length(var406, var407);
var405 = var408;
varonce404 = var405;
}
if (varonce409) {
var410 = varonce409;
} else {
var411 = "->class";
var412 = 7;
var413 = string__NativeString__to_s_with_length(var411, var412);
var410 = var413;
varonce409 = var410;
}
var414 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var414 = array_instance Array[Object] */
var415 = 4;
var416 = NEW_array__NativeArray(var415, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var416)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var416)->values[1] = (val*) var405;
((struct instance_array__NativeArray*)var416)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var416)->values[3] = (val*) var410;
{
((void (*)(val*, val*, long))(var414->class->vft[COLOR_array__Array__with_native]))(var414, var416, var415) /* with_native on <var414:Array[Object]>*/;
}
}
{
var417 = ((val* (*)(val*))(var414->class->vft[COLOR_string__Object__to_s]))(var414) /* to_s on <var414:Array[Object]>*/;
}
{
array__Array__add(var_test, var417); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
var418 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var418->class->vft[COLOR_kernel__Object__init]))(var418) /* init on <var418:Array[String]>*/;
}
var_s = var418;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var421 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var421 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var419 = var421;
RET_LABEL420:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (var419) on <var419:AbstractCompiler(SeparateCompiler)> */
var424 = var419->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <var419:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var424 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 216);
show_backtrace(1);
}
var422 = var424;
RET_LABEL423:(void)0;
}
}
var_425 = var422;
{
var426 = hash_collection__HashMap__iterator(var_425);
}
var_427 = var426;
for(;;) {
{
var428 = hash_collection__HashMapIterator__is_ok(var_427);
}
if (var428){
{
var429 = hash_collection__HashMapIterator__key(var_427);
}
var_t = var429;
{
var430 = hash_collection__HashMapIterator__item(var_427);
}
var431 = ((struct instance_kernel__Int*)var430)->value; /* autounbox from nullable Object to Int */;
var_v = var431;
if (varonce432) {
var433 = varonce432;
} else {
var434 = "(";
var435 = 1;
var436 = string__NativeString__to_s_with_length(var434, var435);
var433 = var436;
varonce432 = var433;
}
if (varonce437) {
var438 = varonce437;
} else {
var439 = "->class->box_kind == ";
var440 = 21;
var441 = string__NativeString__to_s_with_length(var439, var440);
var438 = var441;
varonce437 = var438;
}
if (varonce442) {
var443 = varonce442;
} else {
var444 = " && ((struct instance_";
var445 = 22;
var446 = string__NativeString__to_s_with_length(var444, var445);
var443 = var446;
varonce442 = var443;
}
{
var447 = abstract_compiler__MClass__c_name(var_t);
}
if (varonce448) {
var449 = varonce448;
} else {
var450 = "*)";
var451 = 2;
var452 = string__NativeString__to_s_with_length(var450, var451);
var449 = var452;
varonce448 = var449;
}
if (varonce453) {
var454 = varonce453;
} else {
var455 = ")->value == ((struct instance_";
var456 = 30;
var457 = string__NativeString__to_s_with_length(var455, var456);
var454 = var457;
varonce453 = var454;
}
{
var458 = abstract_compiler__MClass__c_name(var_t);
}
if (varonce459) {
var460 = varonce459;
} else {
var461 = "*)";
var462 = 2;
var463 = string__NativeString__to_s_with_length(var461, var462);
var460 = var463;
varonce459 = var460;
}
if (varonce464) {
var465 = varonce464;
} else {
var466 = ")->value)";
var467 = 9;
var468 = string__NativeString__to_s_with_length(var466, var467);
var465 = var468;
varonce464 = var465;
}
var469 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var469 = array_instance Array[Object] */
var470 = 13;
var471 = NEW_array__NativeArray(var470, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var471)->values[0] = (val*) var433;
((struct instance_array__NativeArray*)var471)->values[1] = (val*) var_value1;
((struct instance_array__NativeArray*)var471)->values[2] = (val*) var438;
var472 = BOX_kernel__Int(var_v); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var471)->values[3] = (val*) var472;
((struct instance_array__NativeArray*)var471)->values[4] = (val*) var443;
((struct instance_array__NativeArray*)var471)->values[5] = (val*) var447;
((struct instance_array__NativeArray*)var471)->values[6] = (val*) var449;
((struct instance_array__NativeArray*)var471)->values[7] = (val*) var_value1;
((struct instance_array__NativeArray*)var471)->values[8] = (val*) var454;
((struct instance_array__NativeArray*)var471)->values[9] = (val*) var458;
((struct instance_array__NativeArray*)var471)->values[10] = (val*) var460;
((struct instance_array__NativeArray*)var471)->values[11] = (val*) var_value2;
((struct instance_array__NativeArray*)var471)->values[12] = (val*) var465;
{
((void (*)(val*, val*, long))(var469->class->vft[COLOR_array__Array__with_native]))(var469, var471, var470) /* with_native on <var469:Array[Object]>*/;
}
}
{
var473 = ((val* (*)(val*))(var469->class->vft[COLOR_string__Object__to_s]))(var469) /* to_s on <var469:Array[Object]>*/;
}
{
array__Array__add(var_s, var473); /* Direct call array#Array#add on <var_s:Array[String]>*/
}
{
hash_collection__HashMapIterator__next(var_427); /* Direct call hash_collection#HashMapIterator#next on <var_427:HashMapIterator[MClass, Int]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_427) on <var_427:HashMapIterator[MClass, Int]> */
RET_LABEL474:(void)0;
}
}
if (varonce475) {
var476 = varonce475;
} else {
var477 = "(";
var478 = 1;
var479 = string__NativeString__to_s_with_length(var477, var478);
var476 = var479;
varonce475 = var476;
}
if (varonce480) {
var481 = varonce480;
} else {
var482 = " || ";
var483 = 4;
var484 = string__NativeString__to_s_with_length(var482, var483);
var481 = var484;
varonce480 = var481;
}
{
var485 = string__Collection__join(var_s, var481);
}
if (varonce486) {
var487 = varonce486;
} else {
var488 = ")";
var489 = 1;
var490 = string__NativeString__to_s_with_length(var488, var489);
var487 = var490;
varonce486 = var487;
}
var491 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var491 = array_instance Array[Object] */
var492 = 3;
var493 = NEW_array__NativeArray(var492, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var493)->values[0] = (val*) var476;
((struct instance_array__NativeArray*)var493)->values[1] = (val*) var485;
((struct instance_array__NativeArray*)var493)->values[2] = (val*) var487;
{
((void (*)(val*, val*, long))(var491->class->vft[COLOR_array__Array__with_native]))(var491, var493, var492) /* with_native on <var491:Array[Object]>*/;
}
}
{
var494 = ((val* (*)(val*))(var491->class->vft[COLOR_string__Object__to_s]))(var491) /* to_s on <var491:Array[Object]>*/;
}
{
array__Array__add(var_test, var494); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
if (varonce495) {
var496 = varonce495;
} else {
var497 = " = ";
var498 = 3;
var499 = string__NativeString__to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
if (varonce500) {
var501 = varonce500;
} else {
var502 = " == ";
var503 = 4;
var504 = string__NativeString__to_s_with_length(var502, var503);
var501 = var504;
varonce500 = var501;
}
if (varonce505) {
var506 = varonce505;
} else {
var507 = ";";
var508 = 1;
var509 = string__NativeString__to_s_with_length(var507, var508);
var506 = var509;
varonce505 = var506;
}
var510 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var510 = array_instance Array[Object] */
var511 = 6;
var512 = NEW_array__NativeArray(var511, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var512)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var512)->values[1] = (val*) var496;
((struct instance_array__NativeArray*)var512)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var512)->values[3] = (val*) var501;
((struct instance_array__NativeArray*)var512)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var512)->values[5] = (val*) var506;
{
((void (*)(val*, val*, long))(var510->class->vft[COLOR_array__Array__with_native]))(var510, var512, var511) /* with_native on <var510:Array[Object]>*/;
}
}
{
var513 = ((val* (*)(val*))(var510->class->vft[COLOR_string__Object__to_s]))(var510) /* to_s on <var510:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var513); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
}
if (varonce514) {
var515 = varonce514;
} else {
var516 = " = ";
var517 = 3;
var518 = string__NativeString__to_s_with_length(var516, var517);
var515 = var518;
varonce514 = var515;
}
if (varonce519) {
var520 = varonce519;
} else {
var521 = " == ";
var522 = 4;
var523 = string__NativeString__to_s_with_length(var521, var522);
var520 = var523;
varonce519 = var520;
}
if (varonce524) {
var525 = varonce524;
} else {
var526 = " || (";
var527 = 5;
var528 = string__NativeString__to_s_with_length(var526, var527);
var525 = var528;
varonce524 = var525;
}
if (varonce529) {
var530 = varonce529;
} else {
var531 = " && ";
var532 = 4;
var533 = string__NativeString__to_s_with_length(var531, var532);
var530 = var533;
varonce529 = var530;
}
{
var534 = string__Collection__join(var_test, var530);
}
if (varonce535) {
var536 = varonce535;
} else {
var537 = ");";
var538 = 2;
var539 = string__NativeString__to_s_with_length(var537, var538);
var536 = var539;
varonce535 = var536;
}
var540 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var540 = array_instance Array[Object] */
var541 = 8;
var542 = NEW_array__NativeArray(var541, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var542)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var542)->values[1] = (val*) var515;
((struct instance_array__NativeArray*)var542)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var542)->values[3] = (val*) var520;
((struct instance_array__NativeArray*)var542)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var542)->values[5] = (val*) var525;
((struct instance_array__NativeArray*)var542)->values[6] = (val*) var534;
((struct instance_array__NativeArray*)var542)->values[7] = (val*) var536;
{
((void (*)(val*, val*, long))(var540->class->vft[COLOR_array__Array__with_native]))(var540, var542, var541) /* with_native on <var540:Array[Object]>*/;
}
}
{
var543 = ((val* (*)(val*))(var540->class->vft[COLOR_string__Object__to_s]))(var540) /* to_s on <var540:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var543); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#equal_test for (self: Object, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__equal_test(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#can_be_primitive for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int separate_compiler__SeparateCompilerVisitor__can_be_primitive(val* self, val* p0) {
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
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
val* var22 /* : String */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other30 /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MType__as_notnullable]))(var1) /* as_notnullable on <var1:MType>*/;
}
var_t = var4;
/* <var_t:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
var10 = var_t->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_t:MType(MClassType)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var8) on <var8:MClass> */
var13 = var8->attrs[COLOR_model__MClass___kind].val; /* _kind on <var8:MClass> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_k = var11;
{
var15 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var_k,var15) on <var_k:MClassKind> */
var_other = var15;
{
{ /* Inline kernel#Object#is_same_instance (var_k,var_other) on <var_k:MClassKind> */
var21 = var_k == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
var_ = var16;
if (var16){
var14 = var_;
} else {
{
var22 = abstract_compiler__MClassType__ctype(var_t);
}
if (varonce) {
var23 = varonce;
} else {
var24 = "val*";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
{ /* Inline kernel#Object#!= (var22,var23) on <var22:String> */
var_other30 = var23;
{
var32 = ((short int (*)(val*, val*))(var22->class->vft[COLOR_kernel__Object___61d_61d]))(var22, var_other30) /* == on <var22:String>*/;
var31 = var32;
}
var33 = !var31;
var28 = var33;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
var14 = var27;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#can_be_primitive for (self: Object, RuntimeVariable): Bool */
short int VIRTUAL_separate_compiler__SeparateCompilerVisitor__can_be_primitive(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#maybe_null for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int separate_compiler__SeparateCompilerVisitor__maybe_null(val* self, val* p0) {
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
var3 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_t = var1;
/* <var_t:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
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
cltype7 = type_model__MNullType.color;
idtype8 = type_model__MNullType.id;
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
/* method separate_compiler#SeparateCompilerVisitor#maybe_null for (self: Object, RuntimeVariable): Bool */
short int VIRTUAL_separate_compiler__SeparateCompilerVisitor__maybe_null(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = separate_compiler__SeparateCompilerVisitor__maybe_null(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#array_instance for (self: SeparateCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var1);
}
var_nclass = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "Array";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
{
var11 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var7);
}
var_arrayclass = var11;
var12 = NEW_array__Array(&type_array__Arraymodel__MType);
var13 = 1;
{
array__Array__with_capacity(var12, var13); /* Direct call array#Array#with_capacity on <var12:Array[MType]>*/
}
var_ = var12;
{
array__AbstractArray__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var14 = model__MClass__get_mtype(var_arrayclass, var_);
}
var_arraytype = var14;
{
var15 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_arraytype) /* init_instance on <self:SeparateCompilerVisitor>*/;
}
var_res = var15;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "{ /* ";
var19 = 5;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " = array_instance Array[";
var24 = 24;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "] */";
var29 = 4;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var22;
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var_elttype;
((struct instance_array__NativeArray*)var33)->values[4] = (val*) var27;
{
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
}
{
var34 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[RuntimeVariable]> */
var37 = var_array->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = abstract_compiler__AbstractCompilerVisitor__int_instance(self, var35);
}
var_length = var38;
{
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(self, var_elttype, var_length) /* native_array_instance on <self:SeparateCompilerVisitor>*/;
}
var_nat = var39;
var40 = 0;
var_i = var40;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[RuntimeVariable]> */
var43 = var_array->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
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
var49 = array__Array___91d_93d(var_array, var_i);
}
{
var50 = abstract_compiler__AbstractCompilerVisitor__object_type(self);
}
{
var51 = separate_compiler__SeparateCompilerVisitor__autobox(self, var49, var50);
}
var_r = var51;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "((struct instance_";
var55 = 18;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
var57 = abstract_compiler__MClass__c_name(var_nclass);
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "*)";
var61 = 2;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = ")->values[";
var66 = 10;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "] = (val*) ";
var71 = 11;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = ";";
var76 = 1;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 9;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var57;
((struct instance_array__NativeArray*)var80)->values[2] = (val*) var59;
((struct instance_array__NativeArray*)var80)->values[3] = (val*) var_nat;
((struct instance_array__NativeArray*)var80)->values[4] = (val*) var64;
var81 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var80)->values[5] = (val*) var81;
((struct instance_array__NativeArray*)var80)->values[6] = (val*) var69;
((struct instance_array__NativeArray*)var80)->values[7] = (val*) var_r;
((struct instance_array__NativeArray*)var80)->values[8] = (val*) var74;
{
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var82 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var82); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var83 = 1;
{
var84 = kernel__Int__successor(var_i, var83);
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
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
{ /* Inline model#MClass#intro (var_arrayclass) on <var_arrayclass:MClass> */
var92 = var_arrayclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_arrayclass:MClass> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var90) on <var90:MClassDef> */
var95 = var90->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var90:MClassDef> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
var96 = abstract_compiler__AbstractCompilerVisitor__get_property(self, var86, var93);
}
var97 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var98 = 3;
{
array__Array__with_capacity(var97, var98); /* Direct call array#Array#with_capacity on <var97:Array[RuntimeVariable]>*/
}
var_99 = var97;
{
array__AbstractArray__push(var_99, var_res); /* Direct call array#AbstractArray#push on <var_99:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_99, var_nat); /* Direct call array#AbstractArray#push on <var_99:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_99, var_length); /* Direct call array#AbstractArray#push on <var_99:Array[RuntimeVariable]>*/
}
{
var100 = separate_compiler__SeparateCompilerVisitor__send(self, var96, var_99);
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "}";
var104 = 1;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#array_instance for (self: Object, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_instance for (self: SeparateCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
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
val* var29 /* : nullable Frame */;
val* var31 /* : nullable Frame */;
val* var32 /* : MPropDef */;
val* var34 /* : MPropDef */;
val* var35 /* : MClassDef */;
val* var37 /* : MClassDef */;
val* var38 /* : nullable Frame */;
val* var40 /* : nullable Frame */;
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var1);
}
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
var8 = model__MClass__get_mtype(var5, var_);
}
var_mtype = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "NEW_";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var16 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = abstract_compiler__MClass__c_name(var14);
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 2;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var17;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var22 = 0;
} else {
var22 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1715);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_compiler = var23;
{
{ /* Inline model#MGenericType#need_anchor (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var28 = var_mtype->attrs[COLOR_model__MGenericType___need_anchor].s; /* _need_anchor on <var_mtype:MClassType(MGenericType)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26){
{
separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var31 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1719);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var29) on <var29:nullable Frame> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var34 = var29->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var29:nullable Frame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var32) on <var32:MPropDef> */
var37 = var32->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var32:MPropDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
separate_compiler__SeparateCompilerVisitor__link_unresolved_type(self, var35, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var40 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1720);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var38) on <var38:nullable Frame> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var43 = var38->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var38:nullable Frame> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = abstract_collection__SequenceRead__first(var41);
}
var_recv = var44;
{
var45 = separate_compiler__SeparateCompilerVisitor__type_info(self, var_recv);
}
var_recv_type_info = var45;
{
var46 = separate_compiler__MType__const_color(var_mtype);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "NEW_";
var50 = 4;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var54 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = abstract_compiler__MClass__c_name(var52);
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "(";
var59 = 1;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = ", ";
var64 = 2;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "->resolution_table->types[";
var69 = 26;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
var71 = separate_compiler__MType__const_color(var_mtype);
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "])";
var75 = 2;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 9;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var48;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var79)->values[2] = (val*) var57;
((struct instance_array__NativeArray*)var79)->values[3] = (val*) var_length;
((struct instance_array__NativeArray*)var79)->values[4] = (val*) var62;
((struct instance_array__NativeArray*)var79)->values[5] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var79)->values[6] = (val*) var67;
((struct instance_array__NativeArray*)var79)->values[7] = (val*) var71;
((struct instance_array__NativeArray*)var79)->values[8] = (val*) var73;
{
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val*))(var77->class->vft[COLOR_string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
}
{
var81 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var80, var_mtype);
}
var = var81;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var84 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 156);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
((void (*)(val*, val*))(var82->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var82, var_mtype) /* add on <var82:Set[MType]>*/;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "type_";
var88 = 5;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
var90 = abstract_compiler__MGenericType__c_name(var_mtype);
}
var91 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 2;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var86;
((struct instance_array__NativeArray*)var93)->values[1] = (val*) var90;
{
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
}
{
var94 = ((val* (*)(val*))(var91->class->vft[COLOR_string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var94); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = "NEW_";
var98 = 4;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var102 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = abstract_compiler__MClass__c_name(var100);
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = "(";
var107 = 1;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = ", &type_";
var112 = 8;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
{
var114 = abstract_compiler__MGenericType__c_name(var_mtype);
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = ")";
var118 = 1;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var120 = array_instance Array[Object] */
var121 = 7;
var122 = NEW_array__NativeArray(var121, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var122)->values[0] = (val*) var96;
((struct instance_array__NativeArray*)var122)->values[1] = (val*) var103;
((struct instance_array__NativeArray*)var122)->values[2] = (val*) var105;
((struct instance_array__NativeArray*)var122)->values[3] = (val*) var_length;
((struct instance_array__NativeArray*)var122)->values[4] = (val*) var110;
((struct instance_array__NativeArray*)var122)->values[5] = (val*) var114;
((struct instance_array__NativeArray*)var122)->values[6] = (val*) var116;
{
((void (*)(val*, val*, long))(var120->class->vft[COLOR_array__Array__with_native]))(var120, var122, var121) /* with_native on <var120:Array[Object]>*/;
}
}
{
var123 = ((val* (*)(val*))(var120->class->vft[COLOR_string__Object__to_s]))(var120) /* to_s on <var120:Array[Object]>*/;
}
{
var124 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var123, var_mtype);
}
var = var124;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_instance for (self: Object, MType, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__native_array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_def for (self: SeparateCompilerVisitor, String, nullable MType, Array[RuntimeVariable]) */
void separate_compiler__SeparateCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
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
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
long var43 /* : Int */;
val* var44 /* : nullable Object */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
val* var54 /* : RuntimeVariable */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
long var67 /* : Int */;
val* var68 /* : nullable Object */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
long var74 /* : Int */;
val* var75 /* : nullable Object */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
long var103 /* : Int */;
val* var104 /* : nullable Object */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
val* var114 /* : RuntimeVariable */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : FlatString */;
long var133 /* : Int */;
val* var134 /* : nullable Object */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
val* var140 /* : Array[Object] */;
long var141 /* : Int */;
val* var142 /* : NativeArray[Object] */;
val* var143 /* : String */;
val* var_recv1 /* var recv1: String */;
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
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : FlatString */;
long var159 /* : Int */;
val* var160 /* : nullable Object */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : FlatString */;
val* var166 /* : String */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : Array[Object] */;
long var173 /* : Int */;
val* var174 /* : NativeArray[Object] */;
val* var175 /* : String */;
var_pname = p0;
var_ret_type = p1;
var_arguments = p2;
{
var = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var) on <var:nullable Object(RuntimeVariable)> */
var3 = var->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var:nullable Object(RuntimeVariable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
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
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var4);
}
var_nclass = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "((struct instance_";
var12 = 18;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = abstract_compiler__MClass__c_name(var_nclass);
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "*)";
var18 = 2;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = 0;
{
var21 = array__Array___91d_93d(var_arguments, var20);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = ")->values";
var25 = 9;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 5;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var14;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var16;
((struct instance_array__NativeArray*)var29)->values[3] = (val*) var21;
((struct instance_array__NativeArray*)var29)->values[4] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
var_recv = var30;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "[]";
var34 = 2;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
var37 = string__FlatString___61d_61d(var_pname, var32);
var36 = var37;
}
if (var36){
if (varonce38) {
var39 = varonce38;
} else {
var40 = "[";
var41 = 1;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = 1;
{
var44 = array__Array___91d_93d(var_arguments, var43);
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "]";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 4;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var39;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var44;
((struct instance_array__NativeArray*)var52)->values[3] = (val*) var46;
{
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
if (unlikely(var_ret_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1736);
show_backtrace(1);
}
{
var54 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var53, var_ret_type);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(self, var54); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce55) {
var56 = varonce55;
} else {
var57 = "[]=";
var58 = 3;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
{
var61 = string__FlatString___61d_61d(var_pname, var56);
var60 = var61;
}
if (var60){
if (varonce62) {
var63 = varonce62;
} else {
var64 = "[";
var65 = 1;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
var67 = 1;
{
var68 = array__Array___91d_93d(var_arguments, var67);
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "]=";
var72 = 2;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = 2;
{
var75 = array__Array___91d_93d(var_arguments, var74);
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = ";";
var79 = 1;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 6;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var63;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var68;
((struct instance_array__NativeArray*)var83)->values[3] = (val*) var70;
((struct instance_array__NativeArray*)var83)->values[4] = (val*) var75;
((struct instance_array__NativeArray*)var83)->values[5] = (val*) var77;
{
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
}
{
var84 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var84); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce85) {
var86 = varonce85;
} else {
var87 = "length";
var88 = 6;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
var91 = string__FlatString___61d_61d(var_pname, var86);
var90 = var91;
}
if (var90){
if (varonce92) {
var93 = varonce92;
} else {
var94 = "((struct instance_";
var95 = 18;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
var97 = abstract_compiler__MClass__c_name(var_nclass);
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "*)";
var101 = 2;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
var103 = 0;
{
var104 = array__Array___91d_93d(var_arguments, var103);
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = ")->length";
var108 = 9;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 5;
var112 = NEW_array__NativeArray(var111, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var112)->values[0] = (val*) var93;
((struct instance_array__NativeArray*)var112)->values[1] = (val*) var97;
((struct instance_array__NativeArray*)var112)->values[2] = (val*) var99;
((struct instance_array__NativeArray*)var112)->values[3] = (val*) var104;
((struct instance_array__NativeArray*)var112)->values[4] = (val*) var106;
{
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
}
{
var113 = ((val* (*)(val*))(var110->class->vft[COLOR_string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
}
if (unlikely(var_ret_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1742);
show_backtrace(1);
}
{
var114 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var113, var_ret_type);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(self, var114); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce115) {
var116 = varonce115;
} else {
var117 = "copy_to";
var118 = 7;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{
var121 = string__FlatString___61d_61d(var_pname, var116);
var120 = var121;
}
if (var120){
if (varonce122) {
var123 = varonce122;
} else {
var124 = "((struct instance_";
var125 = 18;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
{
var127 = abstract_compiler__MClass__c_name(var_nclass);
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = "*)";
var131 = 2;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = 1;
{
var134 = array__Array___91d_93d(var_arguments, var133);
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = ")->values";
var138 = 9;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
var140 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var140 = array_instance Array[Object] */
var141 = 5;
var142 = NEW_array__NativeArray(var141, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var142)->values[0] = (val*) var123;
((struct instance_array__NativeArray*)var142)->values[1] = (val*) var127;
((struct instance_array__NativeArray*)var142)->values[2] = (val*) var129;
((struct instance_array__NativeArray*)var142)->values[3] = (val*) var134;
((struct instance_array__NativeArray*)var142)->values[4] = (val*) var136;
{
((void (*)(val*, val*, long))(var140->class->vft[COLOR_array__Array__with_native]))(var140, var142, var141) /* with_native on <var140:Array[Object]>*/;
}
}
{
var143 = ((val* (*)(val*))(var140->class->vft[COLOR_string__Object__to_s]))(var140) /* to_s on <var140:Array[Object]>*/;
}
var_recv1 = var143;
if (varonce144) {
var145 = varonce144;
} else {
var146 = "memmove(";
var147 = 8;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
if (varonce149) {
var150 = varonce149;
} else {
var151 = ", ";
var152 = 2;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
if (varonce154) {
var155 = varonce154;
} else {
var156 = ", ";
var157 = 2;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
var159 = 2;
{
var160 = array__Array___91d_93d(var_arguments, var159);
}
if (varonce161) {
var162 = varonce161;
} else {
var163 = "*sizeof(";
var164 = 8;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
{
var166 = ((val* (*)(val*))(var_elttype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_elttype) /* ctype on <var_elttype:MType>*/;
}
if (varonce167) {
var168 = varonce167;
} else {
var169 = "));";
var170 = 3;
var171 = string__NativeString__to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
var172 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var172 = array_instance Array[Object] */
var173 = 9;
var174 = NEW_array__NativeArray(var173, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var174)->values[0] = (val*) var145;
((struct instance_array__NativeArray*)var174)->values[1] = (val*) var_recv1;
((struct instance_array__NativeArray*)var174)->values[2] = (val*) var150;
((struct instance_array__NativeArray*)var174)->values[3] = (val*) var_recv;
((struct instance_array__NativeArray*)var174)->values[4] = (val*) var155;
((struct instance_array__NativeArray*)var174)->values[5] = (val*) var160;
((struct instance_array__NativeArray*)var174)->values[6] = (val*) var162;
((struct instance_array__NativeArray*)var174)->values[7] = (val*) var166;
((struct instance_array__NativeArray*)var174)->values[8] = (val*) var168;
{
((void (*)(val*, val*, long))(var172->class->vft[COLOR_array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[Object]>*/;
}
}
{
var175 = ((val* (*)(val*))(var172->class->vft[COLOR_string__Object__to_s]))(var172) /* to_s on <var172:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var175); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_def for (self: Object, String, nullable MType, Array[RuntimeVariable]) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
separate_compiler__SeparateCompilerVisitor__native_array_def(self, p0, p1, p2); /* Direct call separate_compiler#SeparateCompilerVisitor#native_array_def on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#calloc_array for (self: SeparateCompilerVisitor, MType, Array[RuntimeVariable]) */
void separate_compiler__SeparateCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
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
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var);
}
var_mclass = var4;
{
{ /* Inline model#MClass#mparameters (var_mclass) on <var_mclass:MClass> */
var7 = var_mclass->attrs[COLOR_model__MClass___mparameters].val; /* _mparameters on <var_mclass:MClass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 367);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_collection__SequenceRead__first(var5);
}
var_ft = var8;
var9 = 1;
{
var10 = array__Array___91d_93d(var_arguments, var9);
}
{
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(self, var_ft, var10) /* native_array_instance on <self:SeparateCompilerVisitor>*/;
}
var_res = var11;
{
abstract_compiler__AbstractCompilerVisitor__ret(self, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#calloc_array for (self: Object, MType, Array[RuntimeVariable]) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
separate_compiler__SeparateCompilerVisitor__calloc_array(self, p0, p1); /* Direct call separate_compiler#SeparateCompilerVisitor#calloc_array on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#link_unresolved_type for (self: SeparateCompilerVisitor, MClassDef, MType) */
void separate_compiler__SeparateCompilerVisitor__link_unresolved_type(val* self, val* p0, val* p1) {
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var4 /* : Map[MClassDef, Set[MType]] */;
val* var6 /* : Map[MClassDef, Set[MType]] */;
val* var7 /* : nullable Frame */;
val* var9 /* : nullable Frame */;
val* var10 /* : MPropDef */;
val* var12 /* : MPropDef */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Map[MClassDef, Set[MType]] */;
val* var20 /* : Map[MClassDef, Set[MType]] */;
val* var21 /* : nullable Frame */;
val* var23 /* : nullable Frame */;
val* var24 /* : MPropDef */;
val* var26 /* : MPropDef */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : HashSet[MType] */;
val* var31 /* : Map[MClassDef, Set[MType]] */;
val* var33 /* : Map[MClassDef, Set[MType]] */;
val* var34 /* : nullable Frame */;
val* var36 /* : nullable Frame */;
val* var37 /* : MPropDef */;
val* var39 /* : MPropDef */;
val* var40 /* : MClassDef */;
val* var42 /* : MClassDef */;
val* var43 /* : nullable Object */;
var_mclassdef = p0;
var_mtype = p1;
{
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1760);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_compiler = var1;
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var6 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 157);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1762);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var7) on <var7:nullable Frame> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var12 = var7->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var7:nullable Frame> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var10) on <var10:MPropDef> */
var15 = var10->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var10:MPropDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = abstract_collection__MapRead__has_key(var4, var13);
}
var17 = !var16;
if (var17){
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var20 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 157);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var23 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1763);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var21) on <var21:nullable Frame> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var26 = var21->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var21:nullable Frame> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var24) on <var24:MPropDef> */
var29 = var24->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var24:MPropDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
((void (*)(val*))(var30->class->vft[COLOR_kernel__Object__init]))(var30) /* init on <var30:HashSet[MType]>*/;
}
{
((void (*)(val*, val*, val*))(var18->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var18, var27, var30) /* []= on <var18:Map[MClassDef, Set[MType]]>*/;
}
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var33 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 157);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var36 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1765);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var34) on <var34:nullable Frame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var39 = var34->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var34:nullable Frame> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var37) on <var37:MPropDef> */
var42 = var37->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var37:MPropDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val* (*)(val*, val*))(var31->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var31, var40) /* [] on <var31:Map[MClassDef, Set[MType]]>*/;
}
{
((void (*)(val*, val*))(var43->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var43, var_mtype) /* add on <var43:nullable Object(Set[MType])>*/;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#link_unresolved_type for (self: Object, MClassDef, MType) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__link_unresolved_type(val* self, val* p0, val* p1) {
separate_compiler__SeparateCompilerVisitor__link_unresolved_type(self, p0, p1); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#separate_runtime_function for (self: MMethodDef): AbstractRuntimeFunction */
val* separate_compiler__MMethodDef__separate_runtime_function(val* self) {
val* var /* : AbstractRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
val* var3 /* : nullable SeparateRuntimeFunction */;
val* var_res /* var res: nullable SeparateRuntimeFunction */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : SeparateRuntimeFunction */;
{
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
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
var11 = NEW_separate_compiler__SeparateRuntimeFunction(&type_separate_compiler__SeparateRuntimeFunction);
{
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var11, self) /* mmethoddef= on <var11:SeparateRuntimeFunction>*/;
}
{
((void (*)(val*))(var11->class->vft[COLOR_kernel__Object__init]))(var11) /* init on <var11:SeparateRuntimeFunction>*/;
}
var_res = var11;
{
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val = var_res; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL12:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function for (self: Object): AbstractRuntimeFunction */
val* VIRTUAL_separate_compiler__MMethodDef__separate_runtime_function(val* self) {
val* var /* : AbstractRuntimeFunction */;
val* var1 /* : AbstractRuntimeFunction */;
var1 = separate_compiler__MMethodDef__separate_runtime_function(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache for (self: MMethodDef): nullable SeparateRuntimeFunction */
val* separate_compiler__MMethodDef__separate_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
var1 = self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache for (self: Object): nullable SeparateRuntimeFunction */
val* VIRTUAL_separate_compiler__MMethodDef__separate_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
val* var3 /* : nullable SeparateRuntimeFunction */;
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache= for (self: MMethodDef, nullable SeparateRuntimeFunction) */
void separate_compiler__MMethodDef__separate_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val = p0; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache= for (self: Object, nullable SeparateRuntimeFunction) */
void VIRTUAL_separate_compiler__MMethodDef__separate_runtime_function_cache_61d(val* self, val* p0) {
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val = p0; /* _separate_runtime_function_cache on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function for (self: MMethodDef): AbstractRuntimeFunction */
val* separate_compiler__MMethodDef__virtual_runtime_function(val* self) {
val* var /* : AbstractRuntimeFunction */;
val* var1 /* : nullable VirtualRuntimeFunction */;
val* var3 /* : nullable VirtualRuntimeFunction */;
val* var_res /* var res: nullable VirtualRuntimeFunction */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : VirtualRuntimeFunction */;
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
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
{ /* Inline kernel#Object#== (var_res,var4) on <var_res:nullable VirtualRuntimeFunction> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable VirtualRuntimeFunction(VirtualRuntimeFunction)> */
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
var11 = NEW_separate_compiler__VirtualRuntimeFunction(&type_separate_compiler__VirtualRuntimeFunction);
{
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var11, self) /* mmethoddef= on <var11:VirtualRuntimeFunction>*/;
}
{
((void (*)(val*))(var11->class->vft[COLOR_kernel__Object__init]))(var11) /* init on <var11:VirtualRuntimeFunction>*/;
}
var_res = var11;
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL12:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function for (self: Object): AbstractRuntimeFunction */
val* VIRTUAL_separate_compiler__MMethodDef__virtual_runtime_function(val* self) {
val* var /* : AbstractRuntimeFunction */;
val* var1 /* : AbstractRuntimeFunction */;
var1 = separate_compiler__MMethodDef__virtual_runtime_function(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache for (self: MMethodDef): nullable VirtualRuntimeFunction */
val* separate_compiler__MMethodDef__virtual_runtime_function_cache(val* self) {
val* var /* : nullable VirtualRuntimeFunction */;
val* var1 /* : nullable VirtualRuntimeFunction */;
var1 = self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache for (self: Object): nullable VirtualRuntimeFunction */
val* VIRTUAL_separate_compiler__MMethodDef__virtual_runtime_function_cache(val* self) {
val* var /* : nullable VirtualRuntimeFunction */;
val* var1 /* : nullable VirtualRuntimeFunction */;
val* var3 /* : nullable VirtualRuntimeFunction */;
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache= for (self: MMethodDef, nullable VirtualRuntimeFunction) */
void separate_compiler__MMethodDef__virtual_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val = p0; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache= for (self: Object, nullable VirtualRuntimeFunction) */
void VIRTUAL_separate_compiler__MMethodDef__virtual_runtime_function_cache_61d(val* self, val* p0) {
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val = p0; /* _virtual_runtime_function_cache on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#build_c_name for (self: SeparateRuntimeFunction): String */
val* separate_compiler__SeparateRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_compiler__MPropDef__c_name(var1);
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 1;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var4;
{
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
}
{
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#build_c_name for (self: Object): String */
val* VIRTUAL_separate_compiler__SeparateRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateRuntimeFunction__build_c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#to_s for (self: SeparateRuntimeFunction): String */
val* separate_compiler__SeparateRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MPropDef#to_s (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_model__MPropDef___to_s].val; /* _to_s on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1920);
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
/* method separate_compiler#SeparateRuntimeFunction#to_s for (self: Object): String */
val* VIRTUAL_separate_compiler__SeparateRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateRuntimeFunction__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#compile_to_c for (self: SeparateRuntimeFunction, AbstractCompiler) */
void separate_compiler__SeparateRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var4 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var13 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var14 /* : RuntimeVariable */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var19 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var20 /* : Frame */;
val* var_frame /* var frame: Frame */;
val* var22 /* : nullable MSignature */;
val* var24 /* : nullable MSignature */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var28 /* : MClassType */;
val* var30 /* : MClassType */;
val* var31 /* : MClassDef */;
val* var33 /* : MClassDef */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
val* var37 /* : MClassDef */;
val* var39 /* : MClassDef */;
val* var40 /* : MModule */;
val* var42 /* : MModule */;
short int var43 /* : Bool */;
val* var44 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var45 /* : FlatBuffer */;
val* var_sig /* var sig: FlatBuffer */;
val* var46 /* : FlatBuffer */;
val* var_comment /* var comment: FlatBuffer */;
val* var47 /* : nullable MType */;
val* var49 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var50 /* : null */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : MType */;
val* var80 /* : MType */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
val* var87 /* : Array[Object] */;
long var88 /* : Int */;
val* var89 /* : NativeArray[Object] */;
val* var90 /* : String */;
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
val* var101 /* : MType */;
val* var103 /* : MType */;
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : String */;
long var108 /* : Int */;
long var_i /* var i: Int */;
long var109 /* : Int */;
long var_ /* var : Int */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
short int var116 /* : Bool */;
val* var117 /* : Array[MParameter] */;
val* var119 /* : Array[MParameter] */;
val* var120 /* : nullable Object */;
val* var121 /* : MType */;
val* var123 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var124 /* : Int */;
long var126 /* : Int */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
val* var136 /* : MClass */;
val* var137 /* : Array[MType] */;
long var138 /* : Int */;
val* var_139 /* var : Array[MType] */;
val* var140 /* : MClassType */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
val* var146 /* : Array[Object] */;
long var147 /* : Int */;
val* var148 /* : NativeArray[Object] */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : FlatString */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
val* var161 /* : Array[Object] */;
long var162 /* : Int */;
val* var163 /* : NativeArray[Object] */;
val* var164 /* : Object */;
val* var165 /* : String */;
val* var166 /* : RuntimeVariable */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : Array[Object] */;
long var173 /* : Int */;
val* var174 /* : NativeArray[Object] */;
val* var175 /* : Object */;
val* var176 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
long var177 /* : Int */;
long var178 /* : Int */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : FlatString */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
long var187 /* : Int */;
val* var188 /* : FlatString */;
val* var189 /* : null */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : FlatString */;
val* var201 /* : Array[Object] */;
long var202 /* : Int */;
val* var203 /* : NativeArray[Object] */;
val* var204 /* : String */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : FlatString */;
val* var211 /* : Array[Object] */;
long var212 /* : Int */;
val* var213 /* : NativeArray[Object] */;
val* var214 /* : String */;
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
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
long var228 /* : Int */;
val* var229 /* : FlatString */;
val* var230 /* : Array[Object] */;
long var231 /* : Int */;
val* var232 /* : NativeArray[Object] */;
val* var233 /* : String */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : FlatString */;
val* var239 /* : Array[Object] */;
long var240 /* : Int */;
val* var241 /* : NativeArray[Object] */;
val* var242 /* : String */;
val* var243 /* : null */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var250 /* : RuntimeVariable */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : FlatString */;
val* var257 /* : String */;
val* var259 /* : nullable Object */;
val* var260 /* : MType */;
val* var262 /* : MType */;
short int var263 /* : Bool */;
short int var264 /* : Bool */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
val* var269 /* : nullable RuntimeVariable */;
val* var270 /* : nullable String */;
val* var272 /* : nullable String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : FlatString */;
val* var278 /* : Array[Object] */;
long var279 /* : Int */;
val* var280 /* : NativeArray[Object] */;
val* var281 /* : String */;
val* var282 /* : null */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
long var292 /* : Int */;
val* var293 /* : FlatString */;
val* var294 /* : nullable RuntimeVariable */;
val* var296 /* : nullable RuntimeVariable */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
long var300 /* : Int */;
val* var301 /* : FlatString */;
val* var302 /* : Array[Object] */;
long var303 /* : Int */;
val* var304 /* : NativeArray[Object] */;
val* var305 /* : String */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : FlatString */;
val* var311 /* : String */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
long var315 /* : Int */;
val* var316 /* : FlatString */;
long var317 /* : Int */;
short int var318 /* : Bool */;
short int var319 /* : Bool */;
val* var320 /* : HashMap[String, String] */;
val* var322 /* : HashMap[String, String] */;
val* var323 /* : String */;
val* var324 /* : MClassDef */;
val* var326 /* : MClassDef */;
val* var327 /* : MModule */;
val* var329 /* : MModule */;
val* var330 /* : String */;
val* var332 /* : String */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : NativeString */;
long var336 /* : Int */;
val* var337 /* : FlatString */;
val* var338 /* : MClassDef */;
val* var340 /* : MClassDef */;
val* var341 /* : MClass */;
val* var343 /* : MClass */;
val* var344 /* : String */;
val* var346 /* : String */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
long var350 /* : Int */;
val* var351 /* : FlatString */;
val* var352 /* : MProperty */;
val* var354 /* : MProperty */;
val* var355 /* : String */;
val* var357 /* : String */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : NativeString */;
long var361 /* : Int */;
val* var362 /* : FlatString */;
val* var363 /* : Location */;
val* var365 /* : Location */;
val* var366 /* : nullable SourceFile */;
val* var368 /* : nullable SourceFile */;
val* var369 /* : String */;
val* var371 /* : String */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : NativeString */;
long var375 /* : Int */;
val* var376 /* : FlatString */;
val* var377 /* : Location */;
val* var379 /* : Location */;
long var380 /* : Int */;
long var382 /* : Int */;
static val* varonce383;
val* var384 /* : String */;
char* var385 /* : NativeString */;
long var386 /* : Int */;
val* var387 /* : FlatString */;
val* var388 /* : Array[Object] */;
long var389 /* : Int */;
val* var390 /* : NativeArray[Object] */;
val* var391 /* : Object */;
val* var392 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractRuntimeFunction_VTCOMPILER];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1801);
show_backtrace(1);
}
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmethoddef = var1;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var6 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var4) on <var4:MMethodDef> */
var9 = var4->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var4:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_recv = var10;
{
var13 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler) /* new_visitor on <var_compiler:AbstractCompiler>*/;
}
var_v = var13;
var14 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce) {
var15 = varonce;
} else {
var16 = "self";
var17 = 4;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
abstract_compiler__RuntimeVariable__init(var14, var15, var_recv, var_recv); /* Direct call abstract_compiler#RuntimeVariable#init on <var14:RuntimeVariable>*/
}
var_selfvar = var14;
var19 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
((void (*)(val*))(var19->class->vft[COLOR_kernel__Object__init]))(var19) /* init on <var19:Array[RuntimeVariable]>*/;
}
var_arguments = var19;
var20 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
{
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_compiler__Frame__visitor_61d]))(var20, var_v) /* visitor= on <var20:Frame>*/;
}
{
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_compiler__Frame__mpropdef_61d]))(var20, var_mmethoddef) /* mpropdef= on <var20:Frame>*/;
}
{
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_compiler__Frame__receiver_61d]))(var20, var_recv) /* receiver= on <var20:Frame>*/;
}
{
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_compiler__Frame__arguments_61d]))(var20, var_arguments) /* arguments= on <var20:Frame>*/;
}
{
((void (*)(val*))(var20->class->vft[COLOR_kernel__Object__init]))(var20) /* init on <var20:Frame>*/;
}
var_frame = var20;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var24 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var27 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var25) on <var25:MClassDef> */
var30 = var25->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var25:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var33 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var31) on <var31:MClassDef> */
var36 = var31->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var31:MClassDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var39 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var37) on <var37:MClassDef> */
var42 = var37->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var37:MClassDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var43 = 1;
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1812);
show_backtrace(1);
} else {
var44 = model__MSignature__resolve_for(var22, var28, var34, var40, var43);
}
var_msignature = var44;
var45 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var45->class->vft[COLOR_kernel__Object__init]))(var45) /* init on <var45:FlatBuffer>*/;
}
var_sig = var45;
var46 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var46->class->vft[COLOR_kernel__Object__init]))(var46) /* init on <var46:FlatBuffer>*/;
}
var_comment = var46;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var49 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_ret = var47;
var50 = NULL;
if (var_ret == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var50) on <var_ret:nullable MType> */
var_other = var50;
{
var55 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var54 = var55;
}
var56 = !var54;
var52 = var56;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
{
var57 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = " ";
var61 = 1;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 2;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var57;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var59;
{
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
}
{
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var66); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
} else {
if (varonce67) {
var68 = varonce67;
} else {
var69 = "void ";
var70 = 5;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
string__FlatBuffer__append(var_sig, var68); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
}
{
var72 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
{
string__FlatBuffer__append(var_sig, var72); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "(";
var76 = 1;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var80 = var_selfvar->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = ((val* (*)(val*))(var78->class->vft[COLOR_abstract_compiler__MType__ctype]))(var78) /* ctype on <var78:MType>*/;
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = " ";
var85 = 1;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var87 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var87 = array_instance Array[Object] */
var88 = 4;
var89 = NEW_array__NativeArray(var88, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var89)->values[0] = (val*) var74;
((struct instance_array__NativeArray*)var89)->values[1] = (val*) var81;
((struct instance_array__NativeArray*)var89)->values[2] = (val*) var83;
((struct instance_array__NativeArray*)var89)->values[3] = (val*) var_selfvar;
{
((void (*)(val*, val*, long))(var87->class->vft[COLOR_array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[Object]>*/;
}
}
{
var90 = ((val* (*)(val*))(var87->class->vft[COLOR_string__Object__to_s]))(var87) /* to_s on <var87:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var90); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "(";
var94 = 1;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = ": ";
var99 = 2;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var103 = var_selfvar->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
var104 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 4;
var106 = NEW_array__NativeArray(var105, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var106)->values[0] = (val*) var92;
((struct instance_array__NativeArray*)var106)->values[1] = (val*) var_selfvar;
((struct instance_array__NativeArray*)var106)->values[2] = (val*) var97;
((struct instance_array__NativeArray*)var106)->values[3] = (val*) var101;
{
((void (*)(val*, val*, long))(var104->class->vft[COLOR_array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
}
{
var107 = ((val* (*)(val*))(var104->class->vft[COLOR_string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var107); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
{
array__Array__add(var_arguments, var_selfvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
var108 = 0;
var_i = var108;
{
var109 = model__MSignature__arity(var_msignature);
}
var_ = var109;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var112 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var116 = var_i < var_;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
if (var110){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var119 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = array__Array___91d_93d(var117, var_i);
}
{
{ /* Inline model#MParameter#mtype (var120) on <var120:nullable Object(MParameter)> */
var123 = var120->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var120:nullable Object(MParameter)> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
var_mtype = var121;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var126 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var124) on <var_i:Int> */
var130 = var_i == var124;
var128 = var130;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
var127 = var128;
}
if (var127){
if (varonce131) {
var132 = varonce131;
} else {
var133 = "Array";
var134 = 5;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
{
var136 = abstract_compiler__AbstractCompilerVisitor__get_class(var_v, var132);
}
var137 = NEW_array__Array(&type_array__Arraymodel__MType);
var138 = 1;
{
array__Array__with_capacity(var137, var138); /* Direct call array#Array#with_capacity on <var137:Array[MType]>*/
}
var_139 = var137;
{
array__AbstractArray__push(var_139, var_mtype); /* Direct call array#AbstractArray#push on <var_139:Array[MType]>*/
}
{
var140 = model__MClass__get_mtype(var136, var_139);
}
var_mtype = var140;
} else {
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = ", ";
var144 = 2;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var146 = array_instance Array[Object] */
var147 = 2;
var148 = NEW_array__NativeArray(var147, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var148)->values[0] = (val*) var142;
((struct instance_array__NativeArray*)var148)->values[1] = (val*) var_mtype;
{
((void (*)(val*, val*, long))(var146->class->vft[COLOR_array__Array__with_native]))(var146, var148, var147) /* with_native on <var146:Array[Object]>*/;
}
}
{
var149 = ((val* (*)(val*))(var146->class->vft[COLOR_string__Object__to_s]))(var146) /* to_s on <var146:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var149); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
if (varonce150) {
var151 = varonce150;
} else {
var152 = ", ";
var153 = 2;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
{
var155 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = " p";
var159 = 2;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
var161 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var161 = array_instance Array[Object] */
var162 = 4;
var163 = NEW_array__NativeArray(var162, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var163)->values[0] = (val*) var151;
((struct instance_array__NativeArray*)var163)->values[1] = (val*) var155;
((struct instance_array__NativeArray*)var163)->values[2] = (val*) var157;
var164 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var163)->values[3] = (val*) var164;
{
((void (*)(val*, val*, long))(var161->class->vft[COLOR_array__Array__with_native]))(var161, var163, var162) /* with_native on <var161:Array[Object]>*/;
}
}
{
var165 = ((val* (*)(val*))(var161->class->vft[COLOR_string__Object__to_s]))(var161) /* to_s on <var161:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var165); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
var166 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce167) {
var168 = varonce167;
} else {
var169 = "p";
var170 = 1;
var171 = string__NativeString__to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
var172 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var172 = array_instance Array[Object] */
var173 = 2;
var174 = NEW_array__NativeArray(var173, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var174)->values[0] = (val*) var168;
var175 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var174)->values[1] = (val*) var175;
{
((void (*)(val*, val*, long))(var172->class->vft[COLOR_array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[Object]>*/;
}
}
{
var176 = ((val* (*)(val*))(var172->class->vft[COLOR_string__Object__to_s]))(var172) /* to_s on <var172:Array[Object]>*/;
}
{
abstract_compiler__RuntimeVariable__init(var166, var176, var_mtype, var_mtype); /* Direct call abstract_compiler#RuntimeVariable#init on <var166:RuntimeVariable>*/
}
var_argvar = var166;
{
array__Array__add(var_arguments, var_argvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
var177 = 1;
{
var178 = kernel__Int__successor(var_i, var177);
}
var_i = var178;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (varonce179) {
var180 = varonce179;
} else {
var181 = ")";
var182 = 1;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
{
string__FlatBuffer__append(var_sig, var180); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce184) {
var185 = varonce184;
} else {
var186 = ")";
var187 = 1;
var188 = string__NativeString__to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
{
string__FlatBuffer__append(var_comment, var185); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
var189 = NULL;
if (var_ret == NULL) {
var190 = 0; /* is null */
} else {
var190 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var189) on <var_ret:nullable MType> */
var_other = var189;
{
var194 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var193 = var194;
}
var195 = !var193;
var191 = var195;
goto RET_LABEL192;
RET_LABEL192:(void)0;
}
var190 = var191;
}
if (var190){
if (varonce196) {
var197 = varonce196;
} else {
var198 = ": ";
var199 = 2;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
var201 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var201 = array_instance Array[Object] */
var202 = 2;
var203 = NEW_array__NativeArray(var202, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var203)->values[0] = (val*) var197;
((struct instance_array__NativeArray*)var203)->values[1] = (val*) var_ret;
{
((void (*)(val*, val*, long))(var201->class->vft[COLOR_array__Array__with_native]))(var201, var203, var202) /* with_native on <var201:Array[Object]>*/;
}
}
{
var204 = ((val* (*)(val*))(var201->class->vft[COLOR_string__Object__to_s]))(var201) /* to_s on <var201:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var204); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
} else {
}
{
var205 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
if (varonce206) {
var207 = varonce206;
} else {
var208 = ";";
var209 = 1;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
var211 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var211 = array_instance Array[Object] */
var212 = 2;
var213 = NEW_array__NativeArray(var212, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var213)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var213)->values[1] = (val*) var207;
{
((void (*)(val*, val*, long))(var211->class->vft[COLOR_array__Array__with_native]))(var211, var213, var212) /* with_native on <var211:Array[Object]>*/;
}
}
{
var214 = ((val* (*)(val*))(var211->class->vft[COLOR_string__Object__to_s]))(var211) /* to_s on <var211:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(var_compiler, var205, var214); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var_compiler:AbstractCompiler>*/
}
if (varonce215) {
var216 = varonce215;
} else {
var217 = "/* method ";
var218 = 10;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
if (varonce220) {
var221 = varonce220;
} else {
var222 = " for ";
var223 = 5;
var224 = string__NativeString__to_s_with_length(var222, var223);
var221 = var224;
varonce220 = var221;
}
if (varonce225) {
var226 = varonce225;
} else {
var227 = " */";
var228 = 3;
var229 = string__NativeString__to_s_with_length(var227, var228);
var226 = var229;
varonce225 = var226;
}
var230 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var230 = array_instance Array[Object] */
var231 = 5;
var232 = NEW_array__NativeArray(var231, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var232)->values[0] = (val*) var216;
((struct instance_array__NativeArray*)var232)->values[1] = (val*) self;
((struct instance_array__NativeArray*)var232)->values[2] = (val*) var221;
((struct instance_array__NativeArray*)var232)->values[3] = (val*) var_comment;
((struct instance_array__NativeArray*)var232)->values[4] = (val*) var226;
{
((void (*)(val*, val*, long))(var230->class->vft[COLOR_array__Array__with_native]))(var230, var232, var231) /* with_native on <var230:Array[Object]>*/;
}
}
{
var233 = ((val* (*)(val*))(var230->class->vft[COLOR_string__Object__to_s]))(var230) /* to_s on <var230:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var233); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce234) {
var235 = varonce234;
} else {
var236 = " {";
var237 = 2;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
var239 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var239 = array_instance Array[Object] */
var240 = 2;
var241 = NEW_array__NativeArray(var240, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var241)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var241)->values[1] = (val*) var235;
{
((void (*)(val*, val*, long))(var239->class->vft[COLOR_array__Array__with_native]))(var239, var241, var240) /* with_native on <var239:Array[Object]>*/;
}
}
{
var242 = ((val* (*)(val*))(var239->class->vft[COLOR_string__Object__to_s]))(var239) /* to_s on <var239:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var242); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
var243 = NULL;
if (var_ret == NULL) {
var244 = 0; /* is null */
} else {
var244 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var243) on <var_ret:nullable MType> */
var_other = var243;
{
var248 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var247 = var248;
}
var249 = !var247;
var245 = var249;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
var244 = var245;
}
if (var244){
{
var250 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_ret);
}
{
{ /* Inline abstract_compiler#Frame#returnvar= (var_frame,var250) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val = var250; /* _returnvar on <var_frame:Frame> */
RET_LABEL251:(void)0;
}
}
} else {
}
if (varonce252) {
var253 = varonce252;
} else {
var254 = "RET_LABEL";
var255 = 9;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
{
var257 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var253);
}
{
{ /* Inline abstract_compiler#Frame#returnlabel= (var_frame,var257) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = var257; /* _returnlabel on <var_frame:Frame> */
RET_LABEL258:(void)0;
}
}
{
var259 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var259) on <var259:nullable Object(RuntimeVariable)> */
var262 = var259->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var259:nullable Object(RuntimeVariable)> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var_recv,var260) on <var_recv:MClassType> */
var_other = var260;
{
var267 = ((short int (*)(val*, val*))(var_recv->class->vft[COLOR_kernel__Object___61d_61d]))(var_recv, var_other) /* == on <var_recv:MClassType>*/;
var266 = var267;
}
var268 = !var266;
var264 = var268;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
var263 = var264;
}
if (var263){
} else {
}
{
var269 = abstract_compiler__MMethodDef__compile_inside_to_c(var_mmethoddef, var_v, var_arguments);
}
{
{ /* Inline abstract_compiler#Frame#returnlabel (var_frame) on <var_frame:Frame> */
var272 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var_frame:Frame> */
var270 = var272;
RET_LABEL271:(void)0;
}
}
if (unlikely(var270 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1855);
show_backtrace(1);
}
if (varonce273) {
var274 = varonce273;
} else {
var275 = ":;";
var276 = 2;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
var278 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var278 = array_instance Array[Object] */
var279 = 2;
var280 = NEW_array__NativeArray(var279, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var280)->values[0] = (val*) var270;
((struct instance_array__NativeArray*)var280)->values[1] = (val*) var274;
{
((void (*)(val*, val*, long))(var278->class->vft[COLOR_array__Array__with_native]))(var278, var280, var279) /* with_native on <var278:Array[Object]>*/;
}
}
{
var281 = ((val* (*)(val*))(var278->class->vft[COLOR_string__Object__to_s]))(var278) /* to_s on <var278:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var281); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var282 = NULL;
if (var_ret == NULL) {
var283 = 0; /* is null */
} else {
var283 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var282) on <var_ret:nullable MType> */
var_other = var282;
{
var287 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var286 = var287;
}
var288 = !var286;
var284 = var288;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
var283 = var284;
}
if (var283){
if (varonce289) {
var290 = varonce289;
} else {
var291 = "return ";
var292 = 7;
var293 = string__NativeString__to_s_with_length(var291, var292);
var290 = var293;
varonce289 = var290;
}
{
{ /* Inline abstract_compiler#Frame#returnvar (var_frame) on <var_frame:Frame> */
var296 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var_frame:Frame> */
var294 = var296;
RET_LABEL295:(void)0;
}
}
if (unlikely(var294 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1857);
show_backtrace(1);
}
if (varonce297) {
var298 = varonce297;
} else {
var299 = ";";
var300 = 1;
var301 = string__NativeString__to_s_with_length(var299, var300);
var298 = var301;
varonce297 = var298;
}
var302 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var302 = array_instance Array[Object] */
var303 = 3;
var304 = NEW_array__NativeArray(var303, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var304)->values[0] = (val*) var290;
((struct instance_array__NativeArray*)var304)->values[1] = (val*) var294;
((struct instance_array__NativeArray*)var304)->values[2] = (val*) var298;
{
((void (*)(val*, val*, long))(var302->class->vft[COLOR_array__Array__with_native]))(var302, var304, var303) /* with_native on <var302:Array[Object]>*/;
}
}
{
var305 = ((val* (*)(val*))(var302->class->vft[COLOR_string__Object__to_s]))(var302) /* to_s on <var302:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var305); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce306) {
var307 = varonce306;
} else {
var308 = "}";
var309 = 1;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var307); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var311 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
if (varonce312) {
var313 = varonce312;
} else {
var314 = "VIRTUAL";
var315 = 7;
var316 = string__NativeString__to_s_with_length(var314, var315);
var313 = var316;
varonce312 = var313;
}
var317 = 0;
{
var318 = string__Text__has_substring(var311, var313, var317);
}
var319 = !var318;
if (var319){
{
{ /* Inline abstract_compiler#AbstractCompiler#names (var_compiler) on <var_compiler:AbstractCompiler> */
var322 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <var_compiler:AbstractCompiler> */
if (unlikely(var322 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 460);
show_backtrace(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
{
var323 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var326 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var326 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var324 = var326;
RET_LABEL325:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var324) on <var324:MClassDef> */
var329 = var324->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var324:MClassDef> */
if (unlikely(var329 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var327 = var329;
RET_LABEL328:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var327) on <var327:MModule> */
var332 = var327->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var327:MModule> */
if (unlikely(var332 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var330 = var332;
RET_LABEL331:(void)0;
}
}
if (varonce333) {
var334 = varonce333;
} else {
var335 = "::";
var336 = 2;
var337 = string__NativeString__to_s_with_length(var335, var336);
var334 = var337;
varonce333 = var334;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var340 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var340 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var338 = var340;
RET_LABEL339:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var338) on <var338:MClassDef> */
var343 = var338->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var338:MClassDef> */
if (unlikely(var343 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var341 = var343;
RET_LABEL342:(void)0;
}
}
{
{ /* Inline model#MClass#name (var341) on <var341:MClass> */
var346 = var341->attrs[COLOR_model__MClass___name].val; /* _name on <var341:MClass> */
if (unlikely(var346 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var344 = var346;
RET_LABEL345:(void)0;
}
}
if (varonce347) {
var348 = varonce347;
} else {
var349 = "::";
var350 = 2;
var351 = string__NativeString__to_s_with_length(var349, var350);
var348 = var351;
varonce347 = var348;
}
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var354 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var354 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var352 = var354;
RET_LABEL353:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var352) on <var352:MProperty(MMethod)> */
var357 = var352->attrs[COLOR_model__MProperty___name].val; /* _name on <var352:MProperty(MMethod)> */
if (unlikely(var357 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var355 = var357;
RET_LABEL356:(void)0;
}
}
if (varonce358) {
var359 = varonce358;
} else {
var360 = " (";
var361 = 2;
var362 = string__NativeString__to_s_with_length(var360, var361);
var359 = var362;
varonce358 = var359;
}
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var365 = var_mmethoddef->attrs[COLOR_model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var365 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1892);
show_backtrace(1);
}
var363 = var365;
RET_LABEL364:(void)0;
}
}
{
{ /* Inline location#Location#file (var363) on <var363:Location> */
var368 = var363->attrs[COLOR_location__Location___file].val; /* _file on <var363:Location> */
var366 = var368;
RET_LABEL367:(void)0;
}
}
if (var366 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1860);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var366) on <var366:nullable SourceFile> */
if (unlikely(var366 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var371 = var366->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var366:nullable SourceFile> */
if (unlikely(var371 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var369 = var371;
RET_LABEL370:(void)0;
}
}
if (varonce372) {
var373 = varonce372;
} else {
var374 = ":";
var375 = 1;
var376 = string__NativeString__to_s_with_length(var374, var375);
var373 = var376;
varonce372 = var373;
}
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var379 = var_mmethoddef->attrs[COLOR_model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var379 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1892);
show_backtrace(1);
}
var377 = var379;
RET_LABEL378:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var377) on <var377:Location> */
var382 = var377->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var377:Location> */
var380 = var382;
RET_LABEL381:(void)0;
}
}
if (varonce383) {
var384 = varonce383;
} else {
var385 = ")";
var386 = 1;
var387 = string__NativeString__to_s_with_length(var385, var386);
var384 = var387;
varonce383 = var384;
}
var388 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var388 = array_instance Array[Object] */
var389 = 10;
var390 = NEW_array__NativeArray(var389, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var390)->values[0] = (val*) var330;
((struct instance_array__NativeArray*)var390)->values[1] = (val*) var334;
((struct instance_array__NativeArray*)var390)->values[2] = (val*) var344;
((struct instance_array__NativeArray*)var390)->values[3] = (val*) var348;
((struct instance_array__NativeArray*)var390)->values[4] = (val*) var355;
((struct instance_array__NativeArray*)var390)->values[5] = (val*) var359;
((struct instance_array__NativeArray*)var390)->values[6] = (val*) var369;
((struct instance_array__NativeArray*)var390)->values[7] = (val*) var373;
var391 = BOX_kernel__Int(var380); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var390)->values[8] = (val*) var391;
((struct instance_array__NativeArray*)var390)->values[9] = (val*) var384;
{
((void (*)(val*, val*, long))(var388->class->vft[COLOR_array__Array__with_native]))(var388, var390, var389) /* with_native on <var388:Array[Object]>*/;
}
}
{
var392 = ((val* (*)(val*))(var388->class->vft[COLOR_string__Object__to_s]))(var388) /* to_s on <var388:Array[Object]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var320, var323, var392); /* Direct call hash_collection#HashMap#[]= on <var320:HashMap[String, String]>*/
}
} else {
}
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#compile_to_c for (self: Object, AbstractCompiler) */
void VIRTUAL_separate_compiler__SeparateRuntimeFunction__compile_to_c(val* self, val* p0) {
separate_compiler__SeparateRuntimeFunction__compile_to_c(self, p0); /* Direct call separate_compiler#SeparateRuntimeFunction#compile_to_c on <self:Object(SeparateRuntimeFunction)>*/
RET_LABEL:;
}
/* method separate_compiler#VirtualRuntimeFunction#build_c_name for (self: VirtualRuntimeFunction): String */
val* separate_compiler__VirtualRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MMethodDef */;
val* var7 /* : MMethodDef */;
val* var8 /* : String */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[Object] */;
val* var12 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "VIRTUAL_";
var3 = 8;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:VirtualRuntimeFunction> */
var7 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:VirtualRuntimeFunction> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__MPropDef__c_name(var5);
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
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#build_c_name for (self: Object): String */
val* VIRTUAL_separate_compiler__VirtualRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__VirtualRuntimeFunction__build_c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#to_s for (self: VirtualRuntimeFunction): String */
val* separate_compiler__VirtualRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:VirtualRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:VirtualRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MPropDef#to_s (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_model__MPropDef___to_s].val; /* _to_s on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1920);
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
/* method separate_compiler#VirtualRuntimeFunction#to_s for (self: Object): String */
val* VIRTUAL_separate_compiler__VirtualRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__VirtualRuntimeFunction__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
