#include "nit__auto_super_init.sep.0.h"
/* method auto_super_init#ToolContext#auto_super_init_phase for (self: ToolContext): Phase */
val* nit__auto_super_init___ToolContext___auto_super_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitPhase#process_npropdef for (self: AutoSuperInitPhase, APropdef) */
void nit__auto_super_init___nit__auto_super_init__AutoSuperInitPhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : ModelBuilder */;
var_npropdef = p0;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_nit__AMethPropdef.color;
idtype = type_nit__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:AutoSuperInitPhase> */
var3 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:AutoSuperInitPhase> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__modelbuilder_base___ToolContext___modelbuilder(var1);
}
{
nit__auto_super_init___AMethPropdef___do_auto_super_init(var_npropdef, var4); /* Direct call auto_super_init#AMethPropdef#do_auto_super_init on <var_npropdef:APropdef(AMethPropdef)>*/
}
} else {
}
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#visit for (self: AutoSuperInitVisitor, ANode) */
void nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void (*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__auto_super_init__ANode__accept_auto_super_init]))(var_n, self) /* accept_auto_super_init on <var_n:ANode>*/;
}
{
((void (*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
}
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init for (self: AutoSuperInitVisitor): nullable ANode */
val* nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= for (self: AutoSuperInitVisitor, nullable ANode) */
void nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init_61d(val* self, val* p0) {
self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = p0; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#is_broken for (self: AutoSuperInitVisitor): Bool */
short int nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___is_broken(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#is_broken= for (self: AutoSuperInitVisitor, Bool) */
void nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___is_broken_61d(val* self, short int p0) {
self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___is_broken].s = p0; /* _is_broken on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#auto_super_inits for (self: AMethPropdef): nullable Array[CallSite] */
val* nit__auto_super_init___AMethPropdef___auto_super_inits(val* self) {
val* var /* : nullable Array[CallSite] */;
val* var1 /* : nullable Array[CallSite] */;
var1 = self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AMethPropdef#auto_super_inits= for (self: AMethPropdef, nullable Array[CallSite]) */
void nit__auto_super_init___AMethPropdef___auto_super_inits_61d(val* self, val* p0) {
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val = p0; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#auto_super_call for (self: AMethPropdef): Bool */
short int nit__auto_super_init___AMethPropdef___auto_super_call(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AMethPropdef#auto_super_call= for (self: AMethPropdef, Bool) */
void nit__auto_super_init___AMethPropdef___auto_super_call_61d(val* self, short int p0) {
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s = p0; /* _auto_super_call on <self:AMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#do_auto_super_init for (self: AMethPropdef, ModelBuilder) */
void nit__auto_super_init___AMethPropdef___do_auto_super_init(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var4 /* : nullable MClassDef */;
val* var6 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var7 /* : nullable MPropDef */;
val* var9 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var19 /* : MClass */;
val* var21 /* : MClass */;
val* var22 /* : MClassType */;
val* var24 /* : MClassType */;
val* var_recvtype /* var recvtype: MClassType */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : nullable AAnnotation */;
val* var_nosuper /* var nosuper: nullable AAnnotation */;
short int var30 /* : Bool */;
val* var31 /* : MProperty */;
val* var33 /* : MProperty */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var_ /* var : Bool */;
val* var38 /* : MProperty */;
val* var40 /* : MProperty */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : MClassDef */;
val* var57 /* : MClassDef */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var_skip /* var skip: Bool */;
val* var61 /* : nullable POSetElement[MClassDef] */;
val* var63 /* : nullable POSetElement[MClassDef] */;
val* var64 /* : Collection[nullable Object] */;
val* var_65 /* var : Collection[MClassDef] */;
val* var66 /* : Iterator[nullable Object] */;
val* var_67 /* var : Iterator[MClassDef] */;
short int var68 /* : Bool */;
val* var69 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var70 /* : MClass */;
val* var72 /* : MClass */;
val* var73 /* : MClassKind */;
val* var75 /* : MClassKind */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var81 /* : nullable AExpr */;
val* var83 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var84 /* : null */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
val* var90 /* : AutoSuperInitVisitor */;
val* var_v /* var v: AutoSuperInitVisitor */;
val* var92 /* : nullable ANode */;
val* var94 /* : nullable ANode */;
val* var_anode /* var anode: nullable ANode */;
val* var95 /* : null */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : null */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : null */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
val* var127 /* : Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: Array[CallSite] */;
val* var128 /* : Array[MClassType] */;
val* var130 /* : Array[MClassType] */;
val* var_131 /* var : Array[MClassType] */;
val* var132 /* : ArrayIterator[nullable Object] */;
val* var_133 /* var : ArrayIterator[MClassType] */;
short int var134 /* : Bool */;
val* var135 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var136 /* : MClass */;
val* var138 /* : MClass */;
val* var139 /* : MClassKind */;
val* var141 /* : MClassKind */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
val* var147 /* : MClassType */;
val* var149 /* : MClassType */;
val* var150 /* : MClassType */;
val* var151 /* : MProperty */;
val* var153 /* : MProperty */;
val* var154 /* : String */;
val* var156 /* : String */;
val* var157 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
val* var158 /* : null */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
val* var_other162 /* var other: nullable Object */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
val* var171 /* : nullable MProperty */;
val* var172 /* : null */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
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
val* var189 /* : MProperty */;
val* var191 /* : MProperty */;
val* var192 /* : String */;
val* var194 /* : String */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
val* var205 /* : Array[Object] */;
long var206 /* : Int */;
val* var207 /* : NativeArray[Object] */;
val* var208 /* : String */;
short int var209 /* : Bool */;
int cltype210;
int idtype211;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
val* var215 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
val* var216 /* : nullable Object */;
val* var_candidatedef /* var candidatedef: MMethodDef */;
val* var217 /* : nullable MSignature */;
val* var218 /* : nullable MSignature */;
val* var220 /* : nullable MSignature */;
val* var221 /* : nullable MSignature */;
val* var223 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var224 /* : Bool */;
val* var225 /* : MSignature */;
val* var226 /* : CallSite */;
short int var227 /* : Bool */;
short int var228 /* : Bool */;
val* var_callsite /* var callsite: CallSite */;
val* var231 /* : nullable MMethod */;
val* var233 /* : nullable MMethod */;
val* var_the_root_init_mmethod /* var the_root_init_mmethod: nullable MMethod */;
short int var234 /* : Bool */;
val* var235 /* : null */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var_241 /* var : Bool */;
short int var242 /* : Bool */;
val* var243 /* : Array[MPropDef] */;
val* var_candidatedefs244 /* var candidatedefs: Array[MMethodDef] */;
val* var245 /* : nullable Object */;
val* var_candidatedef246 /* var candidatedef: MMethodDef */;
long var247 /* : Int */;
long var249 /* : Int */;
long var250 /* : Int */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
int cltype254;
int idtype255;
const char* var_class_name256;
short int var257 /* : Bool */;
val* var_258 /* var : Array[MMethodDef] */;
val* var259 /* : ArrayIterator[nullable Object] */;
val* var_260 /* var : ArrayIterator[MMethodDef] */;
short int var261 /* : Bool */;
val* var262 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var263 /* : Array[MProperty] */;
val* var265 /* : Array[MProperty] */;
long var266 /* : Int */;
long var268 /* : Int */;
val* var269 /* : Array[MProperty] */;
val* var271 /* : Array[MProperty] */;
long var272 /* : Int */;
long var274 /* : Int */;
short int var275 /* : Bool */;
short int var277 /* : Bool */;
int cltype278;
int idtype279;
const char* var_class_name280;
short int var281 /* : Bool */;
val* var_284 /* var : Array[MMethodDef] */;
val* var285 /* : ArrayIterator[nullable Object] */;
val* var_286 /* var : ArrayIterator[MMethodDef] */;
short int var287 /* : Bool */;
val* var288 /* : nullable Object */;
val* var_spd289 /* var spd: MMethodDef */;
long var290 /* : Int */;
long var_i /* var i: Int */;
val* var291 /* : Array[MProperty] */;
val* var293 /* : Array[MProperty] */;
val* var_294 /* var : Array[MProperty] */;
val* var295 /* : ArrayIterator[nullable Object] */;
val* var_296 /* var : ArrayIterator[MProperty] */;
short int var297 /* : Bool */;
val* var298 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var299 /* : Array[MProperty] */;
val* var301 /* : Array[MProperty] */;
val* var302 /* : nullable Object */;
short int var303 /* : Bool */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
long var310 /* : Int */;
val* var311 /* : FlatString */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
long var315 /* : Int */;
val* var316 /* : FlatString */;
val* var317 /* : Array[MProperty] */;
val* var319 /* : Array[MProperty] */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
long var323 /* : Int */;
val* var324 /* : FlatString */;
val* var325 /* : String */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
long var329 /* : Int */;
val* var330 /* : FlatString */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : FlatString */;
val* var336 /* : Array[MProperty] */;
val* var338 /* : Array[MProperty] */;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
long var342 /* : Int */;
val* var343 /* : FlatString */;
val* var344 /* : String */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
long var348 /* : Int */;
val* var349 /* : FlatString */;
val* var350 /* : Array[Object] */;
long var351 /* : Int */;
val* var352 /* : NativeArray[Object] */;
val* var353 /* : String */;
long var354 /* : Int */;
long var355 /* : Int */;
short int var357 /* : Bool */;
int cltype358;
int idtype359;
const char* var_class_name360;
long var361 /* : Int */;
val* var366 /* : nullable MSignature */;
val* var367 /* : nullable MSignature */;
val* var369 /* : nullable MSignature */;
val* var370 /* : nullable MSignature */;
val* var372 /* : nullable MSignature */;
val* var_msignature373 /* var msignature: nullable MSignature */;
short int var374 /* : Bool */;
val* var375 /* : MSignature */;
val* var376 /* : CallSite */;
short int var377 /* : Bool */;
short int var378 /* : Bool */;
val* var_callsite379 /* var callsite: CallSite */;
short int var380 /* : Bool */;
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
val* var391 /* : Array[Object] */;
long var392 /* : Int */;
val* var393 /* : NativeArray[Object] */;
val* var394 /* : String */;
val* var_395 /* var : Array[CallSite] */;
val* var396 /* : ArrayIterator[nullable Object] */;
val* var_397 /* var : ArrayIterator[CallSite] */;
short int var398 /* : Bool */;
val* var399 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var400 /* : MMethodDef */;
val* var402 /* : MMethodDef */;
val* var_auto_super_init_def /* var auto_super_init_def: MMethodDef */;
val* var403 /* : nullable MSignature */;
val* var405 /* : nullable MSignature */;
val* var_msig /* var msig: MSignature */;
val* var406 /* : MSignature */;
val* var408 /* : MSignature */;
val* var_supermsig /* var supermsig: MSignature */;
long var409 /* : Int */;
long var410 /* : Int */;
short int var411 /* : Bool */;
short int var413 /* : Bool */;
int cltype414;
int idtype415;
const char* var_class_name416;
short int var417 /* : Bool */;
static val* varonce418;
val* var419 /* : String */;
char* var420 /* : NativeString */;
long var421 /* : Int */;
val* var422 /* : FlatString */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
long var426 /* : Int */;
val* var427 /* : FlatString */;
long var428 /* : Int */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
long var432 /* : Int */;
val* var433 /* : FlatString */;
long var434 /* : Int */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
long var438 /* : Int */;
val* var439 /* : FlatString */;
val* var440 /* : Array[Object] */;
long var441 /* : Int */;
val* var442 /* : NativeArray[Object] */;
val* var443 /* : Object */;
val* var444 /* : Object */;
val* var445 /* : String */;
long var447 /* : Int */;
long var_i448 /* var i: Int */;
val* var449 /* : Array[MParameter] */;
val* var451 /* : Array[MParameter] */;
val* var_452 /* var : Array[MParameter] */;
val* var453 /* : ArrayIterator[nullable Object] */;
val* var_454 /* var : ArrayIterator[MParameter] */;
short int var455 /* : Bool */;
val* var456 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var457 /* : Array[MParameter] */;
val* var459 /* : Array[MParameter] */;
val* var460 /* : nullable Object */;
val* var_p461 /* var p: MParameter */;
val* var462 /* : MType */;
val* var464 /* : MType */;
val* var_sub /* var sub: MType */;
val* var465 /* : MType */;
val* var467 /* : MType */;
val* var_sup /* var sup: MType */;
short int var468 /* : Bool */;
short int var469 /* : Bool */;
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
static val* varonce480;
val* var481 /* : String */;
char* var482 /* : NativeString */;
long var483 /* : Int */;
val* var484 /* : FlatString */;
val* var485 /* : MType */;
val* var487 /* : MType */;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : NativeString */;
long var491 /* : Int */;
val* var492 /* : FlatString */;
val* var493 /* : String */;
val* var495 /* : String */;
static val* varonce496;
val* var497 /* : String */;
char* var498 /* : NativeString */;
long var499 /* : Int */;
val* var500 /* : FlatString */;
val* var501 /* : MType */;
val* var503 /* : MType */;
static val* varonce504;
val* var505 /* : String */;
char* var506 /* : NativeString */;
long var507 /* : Int */;
val* var508 /* : FlatString */;
val* var509 /* : Array[Object] */;
long var510 /* : Int */;
val* var511 /* : NativeArray[Object] */;
val* var512 /* : Object */;
val* var513 /* : String */;
long var515 /* : Int */;
long var516 /* : Int */;
short int var518 /* : Bool */;
int cltype519;
int idtype520;
const char* var_class_name521;
long var522 /* : Int */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable ANode> isa AClassdef */
cltype = type_nit__AClassdef.color;
idtype = type_nit__AClassdef.id;
if(var == NULL) {
var3 = 0;
} else {
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 59);
show_backtrace(1);
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var) on <var:nullable ANode(AClassdef)> */
var6 = var->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var:nullable ANode(AClassdef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 59);
show_backtrace(1);
}
var_mclassdef = var4;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var9 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 60);
show_backtrace(1);
}
var_mpropdef = var7;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var12 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var18 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_anchor = var16;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var21 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var19) on <var19:MClass> */
var24 = var19->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var19:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_recvtype = var22;
if (varonce) {
var25 = varonce;
} else {
var26 = "nosuper";
var27 = 7;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
var29 = nit__annotation___Prod___get_single_annotation(self, var25, var_modelbuilder);
}
var_nosuper = var29;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var33 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var31) on <var31:MProperty(MMethod)> */
var36 = var31->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var31:MProperty(MMethod)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = !var34;
var_ = var37;
if (var37){
var30 = var_;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var40 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var38) on <var38:MProperty(MMethod)> */
var43 = var38->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var38:MProperty(MMethod)> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var30 = var41;
}
if (var30){
var44 = NULL;
if (var_nosuper == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,var44) on <var_nosuper:nullable AAnnotation> */
var_other = var44;
{
var48 = ((short int (*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nosuper, var_other) /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/;
}
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
if (varonce50) {
var51 = varonce50;
} else {
var52 = "Error: nosuper only in `init`";
var53 = 29;
var54 = standard___standard__NativeString___to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nosuper, var51); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var57 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
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
var58 = nit___nit__MClassDef___is_intro(var55);
}
var59 = !var58;
if (var59){
goto RET_LABEL;
} else {
}
var60 = 1;
var_skip = var60;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:MClassDef> */
var63 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:MClassDef> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (var61 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 79);
show_backtrace(1);
} else {
var64 = poset___poset__POSetElement___direct_greaters(var61);
}
var_65 = var64;
{
var66 = ((val* (*)(val* self))(var_65->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_65) /* iterator on <var_65:Collection[MClassDef]>*/;
}
var_67 = var66;
for(;;) {
{
var68 = ((short int (*)(val* self))(var_67->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_67) /* is_ok on <var_67:Iterator[MClassDef]>*/;
}
if (var68){
{
var69 = ((val* (*)(val* self))(var_67->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_67) /* item on <var_67:Iterator[MClassDef]>*/;
}
var_cd = var69;
{
{ /* Inline model#MClassDef#mclass (var_cd) on <var_cd:MClassDef> */
var72 = var_cd->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_cd:MClassDef> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var70) on <var70:MClass> */
var75 = var70->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var70:MClass> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var73) on <var73:MClassKind> */
var78 = var73->attrs[COLOR_nit__model__MClassKind___need_init].s; /* _need_init on <var73:MClassKind> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76){
var79 = 0;
var_skip = var79;
} else {
}
{
((void (*)(val* self))(var_67->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_67) /* next on <var_67:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_67) on <var_67:Iterator[MClassDef]> */
RET_LABEL80:(void)0;
}
}
if (var_skip){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var83 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_nblock = var81;
var84 = NULL;
if (var_nblock == NULL) {
var85 = 0; /* is null */
} else {
var85 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,var84) on <var_nblock:nullable AExpr> */
var_other = var84;
{
var88 = ((short int (*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nblock, var_other) /* == on <var_nblock:nullable AExpr(AExpr)>*/;
}
var89 = !var88;
var86 = var89;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
var90 = NEW_nit__auto_super_init__AutoSuperInitVisitor(&type_nit__auto_super_init__AutoSuperInitVisitor);
{
{ /* Inline kernel#Object#init (var90) on <var90:AutoSuperInitVisitor> */
RET_LABEL91:(void)0;
}
}
var_v = var90;
{
nit___nit__Visitor___enter_visit(var_v, var_nblock); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:AutoSuperInitVisitor>*/
}
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init (var_v) on <var_v:AutoSuperInitVisitor> */
var94 = var_v->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
var_anode = var92;
var95 = NULL;
if (var_anode == NULL) {
var96 = 0; /* is null */
} else {
var96 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anode,var95) on <var_anode:nullable ANode> */
var_other = var95;
{
var99 = ((short int (*)(val* self, val* p0))(var_anode->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anode, var_other) /* == on <var_anode:nullable ANode(ANode)>*/;
}
var100 = !var99;
var97 = var100;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var96 = var97;
}
if (var96){
var101 = NULL;
if (var_nosuper == NULL) {
var102 = 0; /* is null */
} else {
var102 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,var101) on <var_nosuper:nullable AAnnotation> */
var_other = var101;
{
var105 = ((short int (*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nosuper, var_other) /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/;
}
var106 = !var105;
var103 = var106;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
if (varonce107) {
var108 = varonce107;
} else {
var109 = "Error: method is annotated nosuper but a constructor call is present";
var110 = 68;
var111 = standard___standard__NativeString___to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_anode, var108); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#is_broken (var_v) on <var_v:AutoSuperInitVisitor> */
var114 = var_v->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <var_v:AutoSuperInitVisitor> */
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (var112){
goto RET_LABEL;
} else {
}
} else {
}
var115 = NULL;
if (var_nosuper == NULL) {
var116 = 0; /* is null */
} else {
var116 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,var115) on <var_nosuper:nullable AAnnotation> */
var_other = var115;
{
var119 = ((short int (*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nosuper, var_other) /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/;
}
var120 = !var119;
var117 = var120;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var116 = var117;
}
if (var116){
goto RET_LABEL;
} else {
}
{
var121 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var122 = !var121;
if (var122){
var123 = 1;
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call= (self,var123) on <self:AMethPropdef> */
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s = var123; /* _auto_super_call on <self:AMethPropdef> */
RET_LABEL124:(void)0;
}
}
var125 = 1;
{
{ /* Inline modelize_property#MPropDef#has_supercall= (var_mpropdef,var125) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = var125; /* _has_supercall on <var_mpropdef:MMethodDef> */
RET_LABEL126:(void)0;
}
}
goto RET_LABEL;
} else {
}
var127 = NEW_standard__Array(&type_standard__Array__nit__CallSite);
{
standard___standard__Array___standard__kernel__Object__init(var127); /* Direct call array#Array#init on <var127:Array[CallSite]>*/
}
var_auto_super_inits = var127;
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var130 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 566);
show_backtrace(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
var_131 = var128;
{
var132 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_131);
}
var_133 = var132;
for(;;) {
{
var134 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_133);
}
if (var134){
{
var135 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_133);
}
var_msupertype = var135;
{
{ /* Inline model#MClassType#mclass (var_msupertype) on <var_msupertype:MClassType> */
var138 = var_msupertype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_msupertype:MClassType> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var136) on <var136:MClass> */
var141 = var136->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var136:MClass> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var139) on <var139:MClassKind> */
var144 = var139->attrs[COLOR_nit__model__MClassKind___need_init].s; /* _need_init on <var139:MClassKind> */
var142 = var144;
RET_LABEL143:(void)0;
}
}
var145 = !var142;
if (var145){
goto BREAK_label146;
} else {
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var149 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
var150 = nit___nit__MClassType___MType__anchor_to(var_msupertype, var_mmodule, var147);
}
var_msupertype = var150;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var153 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var151) on <var151:MProperty(MMethod)> */
var156 = var151->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var151:MProperty(MMethod)> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
var157 = nit___nit__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var154);
}
var_candidate = var157;
var158 = NULL;
if (var_candidate == NULL) {
var159 = 1; /* is null */
} else {
var159 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,var158) on <var_candidate:nullable MProperty> */
var_other162 = var158;
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other162) on <var_candidate:nullable MProperty(MProperty)> */
var165 = var_candidate == var_other162;
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
var160 = var163;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
var159 = var160;
}
if (var159){
if (varonce166) {
var167 = varonce166;
} else {
var168 = "init";
var169 = 4;
var170 = standard___standard__NativeString___to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
{
var171 = nit___nit__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var167);
}
var_candidate = var171;
} else {
}
var172 = NULL;
if (var_candidate == NULL) {
var173 = 1; /* is null */
} else {
var173 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,var172) on <var_candidate:nullable MProperty> */
var_other162 = var172;
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other162) on <var_candidate:nullable MProperty(MProperty)> */
var178 = var_candidate == var_other162;
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
var174 = var176;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
var173 = var174;
}
if (var173){
if (varonce179) {
var180 = varonce179;
} else {
var181 = "Error: Cannot do an implicit constructor call in ";
var182 = 49;
var183 = standard___standard__NativeString___to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
if (varonce184) {
var185 = varonce184;
} else {
var186 = "; there is no constructor named ";
var187 = 32;
var188 = standard___standard__NativeString___to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var191 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var189) on <var189:MProperty(MMethod)> */
var194 = var189->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var189:MProperty(MMethod)> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = " in ";
var198 = 4;
var199 = standard___standard__NativeString___to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = ".";
var203 = 1;
var204 = standard___standard__NativeString___to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
var205 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var205 = array_instance Array[Object] */
var206 = 7;
var207 = NEW_standard__NativeArray(var206, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var207)->values[0] = (val*) var180;
((struct instance_standard__NativeArray*)var207)->values[1] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var207)->values[2] = (val*) var185;
((struct instance_standard__NativeArray*)var207)->values[3] = (val*) var192;
((struct instance_standard__NativeArray*)var207)->values[4] = (val*) var196;
((struct instance_standard__NativeArray*)var207)->values[5] = (val*) var_msupertype;
((struct instance_standard__NativeArray*)var207)->values[6] = (val*) var201;
{
((void (*)(val* self, val* p0, long p1))(var205->class->vft[COLOR_standard__array__Array__with_native]))(var205, var207, var206) /* with_native on <var205:Array[Object]>*/;
}
}
{
var208 = ((val* (*)(val* self))(var205->class->vft[COLOR_standard__string__Object__to_s]))(var205) /* to_s on <var205:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var208); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_candidate:nullable MProperty(MProperty)> isa MMethod */
cltype210 = type_nit__MMethod.color;
idtype211 = type_nit__MMethod.id;
if(cltype210 >= var_candidate->type->table_size) {
var209 = 0;
} else {
var209 = var_candidate->type->type_table[cltype210] == idtype211;
}
if (unlikely(!var209)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 125);
show_backtrace(1);
}
{
{ /* Inline model#MMethod#is_root_init (var_candidate) on <var_candidate:nullable MProperty(MMethod)> */
var214 = var_candidate->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var_candidate:nullable MProperty(MMethod)> */
var212 = var214;
RET_LABEL213:(void)0;
}
}
if (var212){
goto BREAK_label146;
} else {
}
{
var215 = nit___nit__MProperty___lookup_definitions(var_candidate, var_mmodule, var_anchor);
}
var_candidatedefs = var215;
{
var216 = standard___standard__SequenceRead___Collection__first(var_candidatedefs);
}
var_candidatedef = var216;
{
{ /* Inline model#MMethodDef#new_msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var220 = var_candidatedef->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_candidatedef:MMethodDef> */
var218 = var220;
RET_LABEL219:(void)0;
}
}
if (var218!=NULL) {
var217 = var218;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var223 = var_candidatedef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_candidatedef:MMethodDef> */
var221 = var223;
RET_LABEL222:(void)0;
}
}
var217 = var221;
}
var_msignature = var217;
var224 = 1;
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 135);
show_backtrace(1);
} else {
var225 = nit___nit__MSignature___MType__resolve_for(var_msignature, var_recvtype, var_anchor, var_mmodule, var224);
}
var_msignature = var225;
var226 = NEW_nit__CallSite(&type_nit__CallSite);
var227 = 1;
var228 = 0;
{
((void (*)(val* self, val* p0))(var226->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var226, self) /* node= on <var226:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var226->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var226, var_recvtype) /* recv= on <var226:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var226->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var226, var_mmodule) /* mmodule= on <var226:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var226->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var226, var_anchor) /* anchor= on <var226:CallSite>*/;
}
{
((void (*)(val* self, short int p0))(var226->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var226, var227) /* recv_is_self= on <var226:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var226->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var226, var_candidate) /* mproperty= on <var226:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var226->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var226, var_candidatedef) /* mpropdef= on <var226:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var226->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var226, var_msignature) /* msignature= on <var226:CallSite>*/;
}
{
((void (*)(val* self, short int p0))(var226->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var226, var228) /* erasure_cast= on <var226:CallSite>*/;
}
{
((void (*)(val* self))(var226->class->vft[COLOR_standard__kernel__Object__init]))(var226) /* init on <var226:CallSite>*/;
}
var_callsite = var226;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_auto_super_inits, var_callsite); /* Direct call array#Array#add on <var_auto_super_inits:Array[CallSite]>*/
}
BREAK_label146: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_133); /* Direct call array#ArrayIterator#next on <var_133:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label229;
}
}
BREAK_label229: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_133) on <var_133:ArrayIterator[MClassType]> */
RET_LABEL230:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var233 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
var_the_root_init_mmethod = var231;
var235 = NULL;
if (var_the_root_init_mmethod == NULL) {
var236 = 0; /* is null */
} else {
var236 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_the_root_init_mmethod,var235) on <var_the_root_init_mmethod:nullable MMethod> */
var_other = var235;
{
var239 = ((short int (*)(val* self, val* p0))(var_the_root_init_mmethod->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_the_root_init_mmethod, var_other) /* == on <var_the_root_init_mmethod:nullable MMethod(MMethod)>*/;
}
var240 = !var239;
var237 = var240;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
var236 = var237;
}
var_241 = var236;
if (var236){
{
var242 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_auto_super_inits);
}
var234 = var242;
} else {
var234 = var_241;
}
if (var234){
{
var243 = nit___nit__MProperty___lookup_definitions(var_the_root_init_mmethod, var_mmodule, var_anchor);
}
var_candidatedefs244 = var243;
{
var245 = standard___standard__SequenceRead___Collection__first(var_candidatedefs244);
}
var_candidatedef246 = var245;
{
{ /* Inline array#AbstractArrayRead#length (var_candidatedefs244) on <var_candidatedefs244:Array[MMethodDef]> */
var249 = var_candidatedefs244->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_candidatedefs244:Array[MMethodDef]> */
var247 = var249;
RET_LABEL248:(void)0;
}
}
var250 = 1;
{
{ /* Inline kernel#Int#> (var247,var250) on <var247:Int> */
/* Covariant cast for argument 0 (i) <var250:Int> isa OTHER */
/* <var250:Int> isa OTHER */
var253 = 1; /* easy <var250:Int> isa OTHER*/
if (unlikely(!var253)) {
var_class_name256 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name256);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var257 = var247 > var250;
var251 = var257;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
}
if (var251){
var_258 = var_candidatedefs244;
{
var259 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_258);
}
var_260 = var259;
for(;;) {
{
var261 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_260);
}
if (var261){
{
var262 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_260);
}
var_spd = var262;
{
{ /* Inline model#MMethodDef#initializers (var_spd) on <var_spd:MMethodDef> */
var265 = var_spd->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd:MMethodDef> */
if (unlikely(var265 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var263 = var265;
RET_LABEL264:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var263) on <var263:Array[MProperty]> */
var268 = var263->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var263:Array[MProperty]> */
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_candidatedef246) on <var_candidatedef246:MMethodDef> */
var271 = var_candidatedef246->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef246:MMethodDef> */
if (unlikely(var271 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var269) on <var269:Array[MProperty]> */
var274 = var269->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var269:Array[MProperty]> */
var272 = var274;
RET_LABEL273:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var266,var272) on <var266:Int> */
/* Covariant cast for argument 0 (i) <var272:Int> isa OTHER */
/* <var272:Int> isa OTHER */
var277 = 1; /* easy <var272:Int> isa OTHER*/
if (unlikely(!var277)) {
var_class_name280 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name280);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var281 = var266 > var272;
var275 = var281;
goto RET_LABEL276;
RET_LABEL276:(void)0;
}
}
if (var275){
var_candidatedef246 = var_spd;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_260); /* Direct call array#ArrayIterator#next on <var_260:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label282;
}
}
BREAK_label282: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_260) on <var_260:ArrayIterator[MMethodDef]> */
RET_LABEL283:(void)0;
}
}
var_284 = var_candidatedefs244;
{
var285 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_284);
}
var_286 = var285;
for(;;) {
{
var287 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_286);
}
if (var287){
{
var288 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_286);
}
var_spd289 = var288;
var290 = 0;
var_i = var290;
{
{ /* Inline model#MMethodDef#initializers (var_spd289) on <var_spd289:MMethodDef> */
var293 = var_spd289->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd289:MMethodDef> */
if (unlikely(var293 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var291 = var293;
RET_LABEL292:(void)0;
}
}
var_294 = var291;
{
var295 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_294);
}
var_296 = var295;
for(;;) {
{
var297 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_296);
}
if (var297){
{
var298 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_296);
}
var_p = var298;
{
{ /* Inline model#MMethodDef#initializers (var_candidatedef246) on <var_candidatedef246:MMethodDef> */
var301 = var_candidatedef246->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef246:MMethodDef> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
{
var302 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var299, var_i);
}
{
{ /* Inline kernel#Object#!= (var_p,var302) on <var_p:MProperty> */
var_other = var302;
{
var305 = ((short int (*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, var_other) /* == on <var_p:MProperty>*/;
}
var306 = !var305;
var303 = var306;
goto RET_LABEL304;
RET_LABEL304:(void)0;
}
}
if (var303){
if (varonce307) {
var308 = varonce307;
} else {
var309 = "Error: Cannot do an implicit constructor call to comflicting for inherited inits ";
var310 = 81;
var311 = standard___standard__NativeString___to_s_with_length(var309, var310);
var308 = var311;
varonce307 = var308;
}
if (varonce312) {
var313 = varonce312;
} else {
var314 = "(";
var315 = 1;
var316 = standard___standard__NativeString___to_s_with_length(var314, var315);
var313 = var316;
varonce312 = var313;
}
{
{ /* Inline model#MMethodDef#initializers (var_spd289) on <var_spd289:MMethodDef> */
var319 = var_spd289->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd289:MMethodDef> */
if (unlikely(var319 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var317 = var319;
RET_LABEL318:(void)0;
}
}
if (varonce320) {
var321 = varonce320;
} else {
var322 = ", ";
var323 = 2;
var324 = standard___standard__NativeString___to_s_with_length(var322, var323);
var321 = var324;
varonce320 = var321;
}
{
var325 = standard__string___Collection___join(var317, var321);
}
if (varonce326) {
var327 = varonce326;
} else {
var328 = ") and ";
var329 = 6;
var330 = standard___standard__NativeString___to_s_with_length(var328, var329);
var327 = var330;
varonce326 = var327;
}
if (varonce331) {
var332 = varonce331;
} else {
var333 = "(";
var334 = 1;
var335 = standard___standard__NativeString___to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
{
{ /* Inline model#MMethodDef#initializers (var_candidatedef246) on <var_candidatedef246:MMethodDef> */
var338 = var_candidatedef246->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef246:MMethodDef> */
if (unlikely(var338 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var336 = var338;
RET_LABEL337:(void)0;
}
}
if (varonce339) {
var340 = varonce339;
} else {
var341 = ", ";
var342 = 2;
var343 = standard___standard__NativeString___to_s_with_length(var341, var342);
var340 = var343;
varonce339 = var340;
}
{
var344 = standard__string___Collection___join(var336, var340);
}
if (varonce345) {
var346 = varonce345;
} else {
var347 = "). NOTE: Do not mix old-style and new-style init!";
var348 = 49;
var349 = standard___standard__NativeString___to_s_with_length(var347, var348);
var346 = var349;
varonce345 = var346;
}
var350 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var350 = array_instance Array[Object] */
var351 = 9;
var352 = NEW_standard__NativeArray(var351, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var352)->values[0] = (val*) var308;
((struct instance_standard__NativeArray*)var352)->values[1] = (val*) var_spd289;
((struct instance_standard__NativeArray*)var352)->values[2] = (val*) var313;
((struct instance_standard__NativeArray*)var352)->values[3] = (val*) var325;
((struct instance_standard__NativeArray*)var352)->values[4] = (val*) var327;
((struct instance_standard__NativeArray*)var352)->values[5] = (val*) var_candidatedef246;
((struct instance_standard__NativeArray*)var352)->values[6] = (val*) var332;
((struct instance_standard__NativeArray*)var352)->values[7] = (val*) var344;
((struct instance_standard__NativeArray*)var352)->values[8] = (val*) var346;
{
((void (*)(val* self, val* p0, long p1))(var350->class->vft[COLOR_standard__array__Array__with_native]))(var350, var352, var351) /* with_native on <var350:Array[Object]>*/;
}
}
{
var353 = ((val* (*)(val* self))(var350->class->vft[COLOR_standard__string__Object__to_s]))(var350) /* to_s on <var350:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var353); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var354 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var354) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var354:Int> isa OTHER */
/* <var354:Int> isa OTHER */
var357 = 1; /* easy <var354:Int> isa OTHER*/
if (unlikely(!var357)) {
var_class_name360 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name360);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var361 = var_i + var354;
var355 = var361;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
}
var_i = var355;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_296); /* Direct call array#ArrayIterator#next on <var_296:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label362;
}
}
BREAK_label362: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_296) on <var_296:ArrayIterator[MProperty]> */
RET_LABEL363:(void)0;
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_286); /* Direct call array#ArrayIterator#next on <var_286:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label364;
}
}
BREAK_label364: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_286) on <var_286:ArrayIterator[MMethodDef]> */
RET_LABEL365:(void)0;
}
}
} else {
}
{
{ /* Inline model#MMethodDef#new_msignature (var_candidatedef246) on <var_candidatedef246:MMethodDef> */
var369 = var_candidatedef246->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_candidatedef246:MMethodDef> */
var367 = var369;
RET_LABEL368:(void)0;
}
}
if (var367!=NULL) {
var366 = var367;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_candidatedef246) on <var_candidatedef246:MMethodDef> */
var372 = var_candidatedef246->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_candidatedef246:MMethodDef> */
var370 = var372;
RET_LABEL371:(void)0;
}
}
var366 = var370;
}
var_msignature373 = var366;
var374 = 1;
if (var_msignature373 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 169);
show_backtrace(1);
} else {
var375 = nit___nit__MSignature___MType__resolve_for(var_msignature373, var_recvtype, var_anchor, var_mmodule, var374);
}
var_msignature373 = var375;
var376 = NEW_nit__CallSite(&type_nit__CallSite);
var377 = 1;
var378 = 0;
{
((void (*)(val* self, val* p0))(var376->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var376, self) /* node= on <var376:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var376->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var376, var_recvtype) /* recv= on <var376:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var376->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var376, var_mmodule) /* mmodule= on <var376:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var376->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var376, var_anchor) /* anchor= on <var376:CallSite>*/;
}
{
((void (*)(val* self, short int p0))(var376->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var376, var377) /* recv_is_self= on <var376:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var376->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var376, var_the_root_init_mmethod) /* mproperty= on <var376:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var376->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var376, var_candidatedef246) /* mpropdef= on <var376:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var376->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var376, var_msignature373) /* msignature= on <var376:CallSite>*/;
}
{
((void (*)(val* self, short int p0))(var376->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var376, var378) /* erasure_cast= on <var376:CallSite>*/;
}
{
((void (*)(val* self))(var376->class->vft[COLOR_standard__kernel__Object__init]))(var376) /* init on <var376:CallSite>*/;
}
var_callsite379 = var376;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_auto_super_inits, var_callsite379); /* Direct call array#Array#add on <var_auto_super_inits:Array[CallSite]>*/
}
} else {
}
{
var380 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_auto_super_inits);
}
if (var380){
if (varonce381) {
var382 = varonce381;
} else {
var383 = "Error: No constructors to call implicitely in ";
var384 = 46;
var385 = standard___standard__NativeString___to_s_with_length(var383, var384);
var382 = var385;
varonce381 = var382;
}
if (varonce386) {
var387 = varonce386;
} else {
var388 = ". Call one explicitely.";
var389 = 23;
var390 = standard___standard__NativeString___to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
var391 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var391 = array_instance Array[Object] */
var392 = 3;
var393 = NEW_standard__NativeArray(var392, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var393)->values[0] = (val*) var382;
((struct instance_standard__NativeArray*)var393)->values[1] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var393)->values[2] = (val*) var387;
{
((void (*)(val* self, val* p0, long p1))(var391->class->vft[COLOR_standard__array__Array__with_native]))(var391, var393, var392) /* with_native on <var391:Array[Object]>*/;
}
}
{
var394 = ((val* (*)(val* self))(var391->class->vft[COLOR_standard__string__Object__to_s]))(var391) /* to_s on <var391:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var394); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var_395 = var_auto_super_inits;
{
var396 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_395);
}
var_397 = var396;
for(;;) {
{
var398 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_397);
}
if (var398){
{
var399 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_397);
}
var_auto_super_init = var399;
{
{ /* Inline typing#CallSite#mpropdef (var_auto_super_init) on <var_auto_super_init:CallSite> */
var402 = var_auto_super_init->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_auto_super_init:CallSite> */
if (unlikely(var402 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 490);
show_backtrace(1);
}
var400 = var402;
RET_LABEL401:(void)0;
}
}
var_auto_super_init_def = var400;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var405 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var403 = var405;
RET_LABEL404:(void)0;
}
}
if (unlikely(var403 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 182);
show_backtrace(1);
}
var_msig = var403;
{
{ /* Inline typing#CallSite#msignature (var_auto_super_init) on <var_auto_super_init:CallSite> */
var408 = var_auto_super_init->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_auto_super_init:CallSite> */
if (unlikely(var408 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var406 = var408;
RET_LABEL407:(void)0;
}
}
var_supermsig = var406;
{
var409 = nit___nit__MSignature___arity(var_supermsig);
}
{
var410 = nit___nit__MSignature___arity(var_msig);
}
{
{ /* Inline kernel#Int#> (var409,var410) on <var409:Int> */
/* Covariant cast for argument 0 (i) <var410:Int> isa OTHER */
/* <var410:Int> isa OTHER */
var413 = 1; /* easy <var410:Int> isa OTHER*/
if (unlikely(!var413)) {
var_class_name416 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name416);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var417 = var409 > var410;
var411 = var417;
goto RET_LABEL412;
RET_LABEL412:(void)0;
}
}
if (var411){
if (varonce418) {
var419 = varonce418;
} else {
var420 = "Error: Cannot do an implicit constructor call to ";
var421 = 49;
var422 = standard___standard__NativeString___to_s_with_length(var420, var421);
var419 = var422;
varonce418 = var419;
}
if (varonce423) {
var424 = varonce423;
} else {
var425 = ". Expected at least ";
var426 = 20;
var427 = standard___standard__NativeString___to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
{
var428 = nit___nit__MSignature___arity(var_supermsig);
}
if (varonce429) {
var430 = varonce429;
} else {
var431 = " arguments, got ";
var432 = 16;
var433 = standard___standard__NativeString___to_s_with_length(var431, var432);
var430 = var433;
varonce429 = var430;
}
{
var434 = nit___nit__MSignature___arity(var_msig);
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
var441 = 8;
var442 = NEW_standard__NativeArray(var441, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var442)->values[0] = (val*) var419;
((struct instance_standard__NativeArray*)var442)->values[1] = (val*) var_auto_super_init_def;
((struct instance_standard__NativeArray*)var442)->values[2] = (val*) var_supermsig;
((struct instance_standard__NativeArray*)var442)->values[3] = (val*) var424;
var443 = BOX_standard__Int(var428); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var442)->values[4] = (val*) var443;
((struct instance_standard__NativeArray*)var442)->values[5] = (val*) var430;
var444 = BOX_standard__Int(var434); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var442)->values[6] = (val*) var444;
((struct instance_standard__NativeArray*)var442)->values[7] = (val*) var436;
{
((void (*)(val* self, val* p0, long p1))(var440->class->vft[COLOR_standard__array__Array__with_native]))(var440, var442, var441) /* with_native on <var440:Array[Object]>*/;
}
}
{
var445 = ((val* (*)(val* self))(var440->class->vft[COLOR_standard__string__Object__to_s]))(var440) /* to_s on <var440:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var445); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label446;
} else {
}
var447 = 0;
var_i448 = var447;
{
{ /* Inline model#MSignature#mparameters (var_supermsig) on <var_supermsig:MSignature> */
var451 = var_supermsig->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_supermsig:MSignature> */
if (unlikely(var451 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var449 = var451;
RET_LABEL450:(void)0;
}
}
var_452 = var449;
{
var453 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_452);
}
var_454 = var453;
for(;;) {
{
var455 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_454);
}
if (var455){
{
var456 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_454);
}
var_sp = var456;
{
{ /* Inline model#MSignature#mparameters (var_msig) on <var_msig:MSignature> */
var459 = var_msig->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msig:MSignature> */
if (unlikely(var459 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var457 = var459;
RET_LABEL458:(void)0;
}
}
{
var460 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var457, var_i448);
}
var_p461 = var460;
{
{ /* Inline model#MParameter#mtype (var_p461) on <var_p461:MParameter> */
var464 = var_p461->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_p461:MParameter> */
if (unlikely(var464 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var462 = var464;
RET_LABEL463:(void)0;
}
}
var_sub = var462;
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var467 = var_sp->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var467 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var465 = var467;
RET_LABEL466:(void)0;
}
}
var_sup = var465;
{
var468 = nit___nit__MType___is_subtype(var_sub, var_mmodule, var_anchor, var_sup);
}
var469 = !var468;
if (var469){
if (varonce470) {
var471 = varonce470;
} else {
var472 = "Error: Cannot do an implicit constructor call to ";
var473 = 49;
var474 = standard___standard__NativeString___to_s_with_length(var472, var473);
var471 = var474;
varonce470 = var471;
}
if (varonce475) {
var476 = varonce475;
} else {
var477 = ". Expected argument #";
var478 = 21;
var479 = standard___standard__NativeString___to_s_with_length(var477, var478);
var476 = var479;
varonce475 = var476;
}
if (varonce480) {
var481 = varonce480;
} else {
var482 = " of type ";
var483 = 9;
var484 = standard___standard__NativeString___to_s_with_length(var482, var483);
var481 = var484;
varonce480 = var481;
}
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var487 = var_sp->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var487 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var485 = var487;
RET_LABEL486:(void)0;
}
}
if (varonce488) {
var489 = varonce488;
} else {
var490 = ", got implicit argument ";
var491 = 24;
var492 = standard___standard__NativeString___to_s_with_length(var490, var491);
var489 = var492;
varonce488 = var489;
}
{
{ /* Inline model#MParameter#name (var_p461) on <var_p461:MParameter> */
var495 = var_p461->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var_p461:MParameter> */
if (unlikely(var495 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
show_backtrace(1);
}
var493 = var495;
RET_LABEL494:(void)0;
}
}
if (varonce496) {
var497 = varonce496;
} else {
var498 = " of type ";
var499 = 9;
var500 = standard___standard__NativeString___to_s_with_length(var498, var499);
var497 = var500;
varonce496 = var497;
}
{
{ /* Inline model#MParameter#mtype (var_p461) on <var_p461:MParameter> */
var503 = var_p461->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_p461:MParameter> */
if (unlikely(var503 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var501 = var503;
RET_LABEL502:(void)0;
}
}
if (varonce504) {
var505 = varonce504;
} else {
var506 = ".";
var507 = 1;
var508 = standard___standard__NativeString___to_s_with_length(var506, var507);
var505 = var508;
varonce504 = var505;
}
var509 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var509 = array_instance Array[Object] */
var510 = 12;
var511 = NEW_standard__NativeArray(var510, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var511)->values[0] = (val*) var471;
((struct instance_standard__NativeArray*)var511)->values[1] = (val*) var_auto_super_init_def;
((struct instance_standard__NativeArray*)var511)->values[2] = (val*) var_supermsig;
((struct instance_standard__NativeArray*)var511)->values[3] = (val*) var476;
var512 = BOX_standard__Int(var_i448); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var511)->values[4] = (val*) var512;
((struct instance_standard__NativeArray*)var511)->values[5] = (val*) var481;
((struct instance_standard__NativeArray*)var511)->values[6] = (val*) var485;
((struct instance_standard__NativeArray*)var511)->values[7] = (val*) var489;
((struct instance_standard__NativeArray*)var511)->values[8] = (val*) var493;
((struct instance_standard__NativeArray*)var511)->values[9] = (val*) var497;
((struct instance_standard__NativeArray*)var511)->values[10] = (val*) var501;
((struct instance_standard__NativeArray*)var511)->values[11] = (val*) var505;
{
((void (*)(val* self, val* p0, long p1))(var509->class->vft[COLOR_standard__array__Array__with_native]))(var509, var511, var510) /* with_native on <var509:Array[Object]>*/;
}
}
{
var513 = ((val* (*)(val* self))(var509->class->vft[COLOR_standard__string__Object__to_s]))(var509) /* to_s on <var509:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var513); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label514;
} else {
}
var515 = 1;
{
{ /* Inline kernel#Int#+ (var_i448,var515) on <var_i448:Int> */
/* Covariant cast for argument 0 (i) <var515:Int> isa OTHER */
/* <var515:Int> isa OTHER */
var518 = 1; /* easy <var515:Int> isa OTHER*/
if (unlikely(!var518)) {
var_class_name521 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name521);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var522 = var_i448 + var515;
var516 = var522;
goto RET_LABEL517;
RET_LABEL517:(void)0;
}
}
var_i448 = var516;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_454); /* Direct call array#ArrayIterator#next on <var_454:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label514;
}
}
BREAK_label514: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_454) on <var_454:ArrayIterator[MParameter]> */
RET_LABEL523:(void)0;
}
}
BREAK_label446: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_397); /* Direct call array#ArrayIterator#next on <var_397:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label524;
}
}
BREAK_label524: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_397) on <var_397:ArrayIterator[CallSite]> */
RET_LABEL525:(void)0;
}
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits= (self,var_auto_super_inits) on <self:AMethPropdef> */
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val = var_auto_super_inits; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL526:(void)0;
}
}
RET_LABEL:;
}
/* method auto_super_init#ANode#accept_auto_super_init for (self: ANode, AutoSuperInitVisitor) */
void nit__auto_super_init___ANode___accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method auto_super_init#ASendExpr#accept_auto_super_init for (self: ASendExpr, AutoSuperInitVisitor) */
void nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var12 /* : MMethod */;
val* var14 /* : MMethod */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_callsite = var;
var3 = NULL;
if (var_callsite == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var3) on <var_callsite:nullable CallSite> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var9 = var_callsite == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var10 = 1;
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#is_broken= (var_v,var10) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___is_broken].s = var10; /* _is_broken on <var_v:AutoSuperInitVisitor> */
RET_LABEL11:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var14 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var12) on <var12:MMethod> */
var17 = var12->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var12:MMethod> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (var_v,self) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = self; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
RET_LABEL18:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method auto_super_init#ASuperExpr#accept_auto_super_init for (self: ASuperExpr, AutoSuperInitVisitor) */
void nit__auto_super_init___ASuperExpr___ANode__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
var_v = p0;
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (var_v,self) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = self; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
