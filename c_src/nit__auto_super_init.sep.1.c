#include "nit__auto_super_init.sep.0.h"
/* method auto_super_init#ToolContext#auto_super_init_phase for (self: ToolContext): Phase */
val* nit__auto_super_init___ToolContext___auto_super_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 25);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
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
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__auto_super_init__ANode__accept_auto_super_init]))(var_n, self); /* accept_auto_super_init on <var_n:ANode>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
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
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable MPropDef */;
val* var15 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : MClassDef */;
val* var24 /* : MClassDef */;
val* var25 /* : MModule */;
val* var27 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var28 /* : MClassType */;
val* var30 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var31 /* : MClass */;
val* var33 /* : MClass */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
val* var_recvtype /* var recvtype: MClassType */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
val* var40 /* : nullable AAnnotation */;
val* var_nosuper /* var nosuper: nullable AAnnotation */;
short int var41 /* : Bool */;
val* var42 /* : MProperty */;
val* var44 /* : MProperty */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var_ /* var : Bool */;
val* var49 /* : MProperty */;
val* var51 /* : MProperty */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var_other58 /* var other: nullable Object */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
short int var_skip /* var skip: Bool */;
val* var65 /* : nullable POSetElement[MClassDef] */;
val* var67 /* : nullable POSetElement[MClassDef] */;
val* var68 /* : Collection[nullable Object] */;
val* var_69 /* var : Collection[MClassDef] */;
val* var70 /* : Iterator[nullable Object] */;
val* var_71 /* var : Iterator[MClassDef] */;
short int var72 /* : Bool */;
val* var73 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var74 /* : MClass */;
val* var76 /* : MClass */;
val* var77 /* : MClassKind */;
val* var79 /* : MClassKind */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
val* var83 /* : nullable AExpr */;
val* var85 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : AutoSuperInitVisitor */;
val* var_v /* var v: AutoSuperInitVisitor */;
val* var93 /* : nullable ANode */;
val* var95 /* : nullable ANode */;
val* var_anode /* var anode: nullable ANode */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : FlatString */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
val* var122 /* : ToolContext */;
val* var124 /* : ToolContext */;
val* var126 /* : NativeArray[String] */;
static val* varonce125;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : FlatString */;
val* var131 /* : String */;
val* var132 /* : String */;
val* var133 /* : Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: Array[CallSite] */;
val* var134 /* : Array[MClassType] */;
val* var136 /* : Array[MClassType] */;
val* var_137 /* var : Array[MClassType] */;
val* var138 /* : ArrayIterator[nullable Object] */;
val* var_139 /* var : ArrayIterator[MClassType] */;
short int var140 /* : Bool */;
val* var141 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var142 /* : MClass */;
val* var144 /* : MClass */;
val* var145 /* : MClassKind */;
val* var147 /* : MClassKind */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
val* var153 /* : MClassType */;
val* var155 /* : MClassType */;
val* var156 /* : MClassType */;
val* var157 /* : MProperty */;
val* var159 /* : MProperty */;
val* var160 /* : String */;
val* var162 /* : String */;
val* var163 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : FlatString */;
val* var174 /* : nullable MProperty */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var180 /* : Bool */;
val* var182 /* : NativeArray[String] */;
static val* varonce181;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : FlatString */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : FlatString */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : FlatString */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
val* var198 /* : FlatString */;
val* var199 /* : String */;
val* var200 /* : MProperty */;
val* var202 /* : MProperty */;
val* var203 /* : String */;
val* var205 /* : String */;
val* var206 /* : String */;
val* var207 /* : String */;
short int var208 /* : Bool */;
int cltype209;
int idtype210;
short int var211 /* : Bool */;
short int var213 /* : Bool */;
val* var214 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
val* var215 /* : nullable Object */;
val* var_candidatedef /* var candidatedef: MMethodDef */;
val* var216 /* : nullable MSignature */;
val* var217 /* : nullable MSignature */;
val* var219 /* : nullable MSignature */;
val* var220 /* : nullable MSignature */;
val* var222 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var223 /* : MSignature */;
val* var224 /* : CallSite */;
val* var_callsite /* var callsite: CallSite */;
val* var225 /* : ToolContext */;
val* var227 /* : ToolContext */;
val* var229 /* : NativeArray[String] */;
static val* varonce228;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : NativeString */;
val* var233 /* : FlatString */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
val* var237 /* : FlatString */;
val* var238 /* : String */;
val* var239 /* : String */;
val* var240 /* : String */;
val* var242 /* : nullable MMethod */;
val* var244 /* : nullable MMethod */;
val* var_the_root_init_mmethod /* var the_root_init_mmethod: nullable MMethod */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
short int var250 /* : Bool */;
short int var_251 /* var : Bool */;
short int var252 /* : Bool */;
val* var253 /* : Array[MPropDef] */;
val* var_candidatedefs254 /* var candidatedefs: Array[MMethodDef] */;
val* var255 /* : nullable Object */;
val* var_candidatedef256 /* var candidatedef: MMethodDef */;
long var257 /* : Int */;
long var259 /* : Int */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
int cltype263;
int idtype264;
const char* var_class_name265;
short int var266 /* : Bool */;
val* var_267 /* var : Array[MMethodDef] */;
val* var268 /* : ArrayIterator[nullable Object] */;
val* var_269 /* var : ArrayIterator[MMethodDef] */;
short int var270 /* : Bool */;
val* var271 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var272 /* : Array[MProperty] */;
val* var274 /* : Array[MProperty] */;
long var275 /* : Int */;
long var277 /* : Int */;
val* var278 /* : Array[MProperty] */;
val* var280 /* : Array[MProperty] */;
long var281 /* : Int */;
long var283 /* : Int */;
short int var284 /* : Bool */;
short int var286 /* : Bool */;
int cltype287;
int idtype288;
const char* var_class_name289;
short int var290 /* : Bool */;
val* var_292 /* var : Array[MMethodDef] */;
val* var293 /* : ArrayIterator[nullable Object] */;
val* var_294 /* var : ArrayIterator[MMethodDef] */;
short int var295 /* : Bool */;
val* var296 /* : nullable Object */;
val* var_spd297 /* var spd: MMethodDef */;
long var_i /* var i: Int */;
val* var298 /* : Array[MProperty] */;
val* var300 /* : Array[MProperty] */;
val* var_301 /* var : Array[MProperty] */;
val* var302 /* : ArrayIterator[nullable Object] */;
val* var_303 /* var : ArrayIterator[MProperty] */;
short int var304 /* : Bool */;
val* var305 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var306 /* : Array[MProperty] */;
val* var308 /* : Array[MProperty] */;
val* var309 /* : nullable Object */;
short int var310 /* : Bool */;
short int var312 /* : Bool */;
short int var313 /* : Bool */;
val* var315 /* : NativeArray[String] */;
static val* varonce314;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
val* var319 /* : FlatString */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
val* var323 /* : FlatString */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
val* var327 /* : FlatString */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : NativeString */;
val* var331 /* : FlatString */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : NativeString */;
val* var335 /* : FlatString */;
val* var336 /* : String */;
val* var337 /* : Array[MProperty] */;
val* var339 /* : Array[MProperty] */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
val* var343 /* : FlatString */;
val* var344 /* : String */;
val* var345 /* : String */;
val* var346 /* : Array[MProperty] */;
val* var348 /* : Array[MProperty] */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : NativeString */;
val* var352 /* : FlatString */;
val* var353 /* : String */;
val* var354 /* : String */;
long var355 /* : Int */;
short int var357 /* : Bool */;
int cltype358;
int idtype359;
const char* var_class_name360;
long var361 /* : Int */;
val* var364 /* : nullable MSignature */;
val* var365 /* : nullable MSignature */;
val* var367 /* : nullable MSignature */;
val* var368 /* : nullable MSignature */;
val* var370 /* : nullable MSignature */;
val* var_msignature371 /* var msignature: nullable MSignature */;
val* var372 /* : MSignature */;
val* var373 /* : CallSite */;
val* var_callsite374 /* var callsite: CallSite */;
val* var375 /* : ToolContext */;
val* var377 /* : ToolContext */;
val* var379 /* : NativeArray[String] */;
static val* varonce378;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
val* var383 /* : FlatString */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
val* var387 /* : FlatString */;
val* var388 /* : String */;
val* var389 /* : String */;
val* var390 /* : String */;
short int var391 /* : Bool */;
val* var393 /* : NativeArray[String] */;
static val* varonce392;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
val* var397 /* : FlatString */;
static val* varonce398;
val* var399 /* : String */;
char* var400 /* : NativeString */;
val* var401 /* : FlatString */;
val* var402 /* : String */;
val* var403 /* : String */;
val* var_404 /* var : Array[CallSite] */;
val* var405 /* : ArrayIterator[nullable Object] */;
val* var_406 /* var : ArrayIterator[CallSite] */;
short int var407 /* : Bool */;
val* var408 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var409 /* : MMethodDef */;
val* var411 /* : MMethodDef */;
val* var_auto_super_init_def /* var auto_super_init_def: MMethodDef */;
val* var412 /* : nullable MSignature */;
val* var414 /* : nullable MSignature */;
val* var_msig /* var msig: MSignature */;
val* var415 /* : MSignature */;
val* var417 /* : MSignature */;
val* var_supermsig /* var supermsig: MSignature */;
long var418 /* : Int */;
long var419 /* : Int */;
short int var420 /* : Bool */;
short int var422 /* : Bool */;
int cltype423;
int idtype424;
const char* var_class_name425;
short int var426 /* : Bool */;
val* var428 /* : NativeArray[String] */;
static val* varonce427;
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
val* var445 /* : String */;
val* var446 /* : String */;
long var447 /* : Int */;
val* var448 /* : String */;
long var449 /* : Int */;
val* var450 /* : String */;
val* var451 /* : String */;
long var_i453 /* var i: Int */;
val* var454 /* : Array[MParameter] */;
val* var456 /* : Array[MParameter] */;
val* var_457 /* var : Array[MParameter] */;
val* var458 /* : ArrayIterator[nullable Object] */;
val* var_459 /* var : ArrayIterator[MParameter] */;
short int var460 /* : Bool */;
val* var461 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var462 /* : Array[MParameter] */;
val* var464 /* : Array[MParameter] */;
val* var465 /* : nullable Object */;
val* var_p466 /* var p: MParameter */;
val* var467 /* : MType */;
val* var469 /* : MType */;
val* var_sub /* var sub: MType */;
val* var470 /* : MType */;
val* var472 /* : MType */;
val* var_sup /* var sup: MType */;
short int var473 /* : Bool */;
short int var474 /* : Bool */;
val* var476 /* : NativeArray[String] */;
static val* varonce475;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : NativeString */;
val* var480 /* : FlatString */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : NativeString */;
val* var484 /* : FlatString */;
static val* varonce485;
val* var486 /* : String */;
char* var487 /* : NativeString */;
val* var488 /* : FlatString */;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : NativeString */;
val* var492 /* : FlatString */;
static val* varonce493;
val* var494 /* : String */;
char* var495 /* : NativeString */;
val* var496 /* : FlatString */;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : NativeString */;
val* var500 /* : FlatString */;
val* var501 /* : String */;
val* var502 /* : String */;
val* var503 /* : String */;
val* var504 /* : MType */;
val* var506 /* : MType */;
val* var507 /* : String */;
val* var508 /* : String */;
val* var510 /* : String */;
val* var511 /* : MType */;
val* var513 /* : MType */;
val* var514 /* : String */;
val* var515 /* : String */;
long var517 /* : Int */;
short int var519 /* : Bool */;
int cltype520;
int idtype521;
const char* var_class_name522;
long var523 /* : Int */;
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
fatal_exit(1);
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var) on <var:nullable ANode(AClassdef)> */
var6 = var->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var:nullable ANode(AClassdef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mclassdef = var4;
if (var_mclassdef == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var12 = var_mclassdef == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var15 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mpropdef = var13;
if (var_mpropdef == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var21 = var_mpropdef == var_other;
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
if (var16){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var24 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var22) on <var22:MClassDef> */
var27 = var22->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var22:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_mmodule = var25;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var30 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_anchor = var28;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var33 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var31) on <var31:MClass> */
var36 = var31->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var31:MClass> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_recvtype = var34;
if (likely(varonce!=NULL)) {
var37 = varonce;
} else {
var38 = "nosuper";
var39 = standard___standard__NativeString___to_s_with_length(var38, 7l);
var37 = var39;
varonce = var37;
}
{
var40 = nit__annotation___Prod___get_single_annotation(self, var37, var_modelbuilder);
}
var_nosuper = var40;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var44 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var42) on <var42:MProperty(MMethod)> */
var47 = var42->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var42:MProperty(MMethod)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = !var45;
var_ = var48;
if (var48){
var41 = var_;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var51 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var49) on <var49:MProperty(MMethod)> */
var54 = var49->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var49:MProperty(MMethod)> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
var41 = var52;
}
if (var41){
if (var_nosuper == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,((val*)NULL)) on <var_nosuper:nullable AAnnotation> */
var_other58 = ((val*)NULL);
{
var59 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nosuper, var_other58); /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/
}
var60 = !var59;
var56 = var60;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (var55){
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "Error: `nosuper` only allowed in `init`.";
var64 = standard___standard__NativeString___to_s_with_length(var63, 40l);
var62 = var64;
varonce61 = var62;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nosuper, var62); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
var_skip = 1;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var67 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (var65 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 78);
fatal_exit(1);
} else {
var68 = poset___poset__POSetElement___direct_greaters(var65);
}
var_69 = var68;
{
var70 = ((val*(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_69); /* iterator on <var_69:Collection[MClassDef]>*/
}
var_71 = var70;
for(;;) {
{
var72 = ((short int(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_71); /* is_ok on <var_71:Iterator[MClassDef]>*/
}
if (var72){
{
var73 = ((val*(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_71); /* item on <var_71:Iterator[MClassDef]>*/
}
var_cd = var73;
{
{ /* Inline model#MClassDef#mclass (var_cd) on <var_cd:MClassDef> */
var76 = var_cd->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_cd:MClassDef> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var74) on <var74:MClass> */
var79 = var74->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var74:MClass> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var77) on <var77:MClassKind> */
var82 = var77->attrs[COLOR_nit__model__MClassKind___need_init].s; /* _need_init on <var77:MClassKind> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
if (var80){
var_skip = 0;
} else {
}
{
((void(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_71); /* next on <var_71:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_71); /* finish on <var_71:Iterator[MClassDef]>*/
}
if (var_skip){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var85 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
var_nblock = var83;
if (var_nblock == NULL) {
var86 = 0; /* is null */
} else {
var86 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other58 = ((val*)NULL);
{
var89 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nblock, var_other58); /* == on <var_nblock:nullable AExpr(AExpr)>*/
}
var90 = !var89;
var87 = var90;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
if (var86){
var91 = NEW_nit__auto_super_init__AutoSuperInitVisitor(&type_nit__auto_super_init__AutoSuperInitVisitor);
{
{ /* Inline kernel#Object#init (var91) on <var91:AutoSuperInitVisitor> */
RET_LABEL92:(void)0;
}
}
var_v = var91;
{
nit___nit__Visitor___enter_visit(var_v, var_nblock); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:AutoSuperInitVisitor>*/
}
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init (var_v) on <var_v:AutoSuperInitVisitor> */
var95 = var_v->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_anode = var93;
if (var_anode == NULL) {
var96 = 0; /* is null */
} else {
var96 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anode,((val*)NULL)) on <var_anode:nullable ANode> */
var_other58 = ((val*)NULL);
{
var99 = ((short int(*)(val* self, val* p0))(var_anode->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anode, var_other58); /* == on <var_anode:nullable ANode(ANode)>*/
}
var100 = !var99;
var97 = var100;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var96 = var97;
}
if (var96){
if (var_nosuper == NULL) {
var101 = 0; /* is null */
} else {
var101 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,((val*)NULL)) on <var_nosuper:nullable AAnnotation> */
var_other58 = ((val*)NULL);
{
var104 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nosuper, var_other58); /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/
}
var105 = !var104;
var102 = var105;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
var101 = var102;
}
if (var101){
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "Error: method is annotated `nosuper` but a super-constructor call is present.";
var109 = standard___standard__NativeString___to_s_with_length(var108, 77l);
var107 = var109;
varonce106 = var107;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_anode, var107); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#is_broken (var_v) on <var_v:AutoSuperInitVisitor> */
var112 = var_v->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <var_v:AutoSuperInitVisitor> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (var110){
goto RET_LABEL;
} else {
}
} else {
}
if (var_nosuper == NULL) {
var113 = 0; /* is null */
} else {
var113 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,((val*)NULL)) on <var_nosuper:nullable AAnnotation> */
var_other58 = ((val*)NULL);
{
var116 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nosuper, var_other58); /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/
}
var117 = !var116;
var114 = var117;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var113 = var114;
}
if (var113){
goto RET_LABEL;
} else {
}
{
var118 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var119 = !var118;
if (var119){
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s = 1; /* _auto_super_call on <self:AMethPropdef> */
RET_LABEL120:(void)0;
}
}
{
{ /* Inline modelize_property#MPropDef#has_supercall= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = 1; /* _has_supercall on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL121:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var124 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
if (unlikely(varonce125==NULL)) {
var126 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "Auto-super call for ";
var130 = standard___standard__NativeString___to_s_with_length(var129, 20l);
var128 = var130;
varonce127 = var128;
}
((struct instance_standard__NativeArray*)var126)->values[0]=var128;
} else {
var126 = varonce125;
varonce125 = NULL;
}
{
var131 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var126)->values[1]=var131;
{
var132 = ((val*(*)(val* self))(var126->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var126); /* native_to_s on <var126:NativeArray[String]>*/
}
varonce125 = var126;
{
nit___nit__ToolContext___info(var122, var132, 4l); /* Direct call toolcontext#ToolContext#info on <var122:ToolContext>*/
}
goto RET_LABEL;
} else {
}
var133 = NEW_standard__Array(&type_standard__Array__nit__CallSite);
{
standard___standard__Array___standard__kernel__Object__init(var133); /* Direct call array#Array#init on <var133:Array[CallSite]>*/
}
var_auto_super_inits = var133;
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var136 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 627);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_137 = var134;
{
var138 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_137);
}
var_139 = var138;
for(;;) {
{
var140 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_139);
}
if (var140){
{
var141 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_139);
}
var_msupertype = var141;
{
{ /* Inline model#MClassType#mclass (var_msupertype) on <var_msupertype:MClassType> */
var144 = var_msupertype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_msupertype:MClassType> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var142) on <var142:MClass> */
var147 = var142->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var142:MClass> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var145) on <var145:MClassKind> */
var150 = var145->attrs[COLOR_nit__model__MClassKind___need_init].s; /* _need_init on <var145:MClassKind> */
var148 = var150;
RET_LABEL149:(void)0;
}
}
var151 = !var148;
if (var151){
goto BREAK_label152;
} else {
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var155 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = nit___nit__MClassType___MType__anchor_to(var_msupertype, var_mmodule, var153);
}
var_msupertype = var156;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var159 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var157) on <var157:MProperty(MMethod)> */
var162 = var157->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var157:MProperty(MMethod)> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
var163 = nit___nit__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var160);
}
var_candidate = var163;
if (var_candidate == NULL) {
var164 = 1; /* is null */
} else {
var164 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,((val*)NULL)) on <var_candidate:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other) on <var_candidate:nullable MProperty(MProperty)> */
var169 = var_candidate == var_other;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
if (var164){
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "init";
var173 = standard___standard__NativeString___to_s_with_length(var172, 4l);
var171 = var173;
varonce170 = var171;
}
{
var174 = nit___nit__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var171);
}
var_candidate = var174;
} else {
}
if (var_candidate == NULL) {
var175 = 1; /* is null */
} else {
var175 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,((val*)NULL)) on <var_candidate:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other) on <var_candidate:nullable MProperty(MProperty)> */
var180 = var_candidate == var_other;
var178 = var180;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
var175 = var176;
}
if (var175){
if (unlikely(varonce181==NULL)) {
var182 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "Error: cannot do an implicit constructor call in `";
var186 = standard___standard__NativeString___to_s_with_length(var185, 50l);
var184 = var186;
varonce183 = var184;
}
((struct instance_standard__NativeArray*)var182)->values[0]=var184;
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "`; there is no constructor named `";
var190 = standard___standard__NativeString___to_s_with_length(var189, 34l);
var188 = var190;
varonce187 = var188;
}
((struct instance_standard__NativeArray*)var182)->values[2]=var188;
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "` in `";
var194 = standard___standard__NativeString___to_s_with_length(var193, 6l);
var192 = var194;
varonce191 = var192;
}
((struct instance_standard__NativeArray*)var182)->values[4]=var192;
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "`.";
var198 = standard___standard__NativeString___to_s_with_length(var197, 2l);
var196 = var198;
varonce195 = var196;
}
((struct instance_standard__NativeArray*)var182)->values[6]=var196;
} else {
var182 = varonce181;
varonce181 = NULL;
}
{
var199 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var182)->values[1]=var199;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var202 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var202 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var200 = var202;
RET_LABEL201:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var200) on <var200:MProperty(MMethod)> */
var205 = var200->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var200:MProperty(MMethod)> */
if (unlikely(var205 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var203 = var205;
RET_LABEL204:(void)0;
}
}
((struct instance_standard__NativeArray*)var182)->values[3]=var203;
{
var206 = ((val*(*)(val* self))(var_msupertype->class->vft[COLOR_standard__string__Object__to_s]))(var_msupertype); /* to_s on <var_msupertype:MClassType>*/
}
((struct instance_standard__NativeArray*)var182)->values[5]=var206;
{
var207 = ((val*(*)(val* self))(var182->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var182); /* native_to_s on <var182:NativeArray[String]>*/
}
varonce181 = var182;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var207); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_candidate:nullable MProperty(MProperty)> isa MMethod */
cltype209 = type_nit__MMethod.color;
idtype210 = type_nit__MMethod.id;
if(cltype209 >= var_candidate->type->table_size) {
var208 = 0;
} else {
var208 = var_candidate->type->type_table[cltype209] == idtype210;
}
if (unlikely(!var208)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 125);
fatal_exit(1);
}
{
{ /* Inline model#MMethod#is_root_init (var_candidate) on <var_candidate:nullable MProperty(MMethod)> */
var213 = var_candidate->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var_candidate:nullable MProperty(MMethod)> */
var211 = var213;
RET_LABEL212:(void)0;
}
}
if (var211){
goto BREAK_label152;
} else {
}
{
var214 = nit___nit__MProperty___lookup_definitions(var_candidate, var_mmodule, var_anchor);
}
var_candidatedefs = var214;
{
var215 = standard___standard__SequenceRead___Collection__first(var_candidatedefs);
}
var_candidatedef = var215;
{
{ /* Inline model#MMethodDef#new_msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var219 = var_candidatedef->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_candidatedef:MMethodDef> */
var217 = var219;
RET_LABEL218:(void)0;
}
}
if (var217!=NULL) {
var216 = var217;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var222 = var_candidatedef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_candidatedef:MMethodDef> */
var220 = var222;
RET_LABEL221:(void)0;
}
}
var216 = var220;
}
var_msignature = var216;
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 135);
fatal_exit(1);
} else {
var223 = nit___nit__MSignature___MType__resolve_for(var_msignature, var_recvtype, var_anchor, var_mmodule, 1);
}
var_msignature = var223;
var224 = NEW_nit__CallSite(&type_nit__CallSite);
{
((void(*)(val* self, val* p0))(var224->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var224, self); /* node= on <var224:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var224->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var224, var_recvtype); /* recv= on <var224:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var224->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var224, var_mmodule); /* mmodule= on <var224:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var224->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var224, var_anchor); /* anchor= on <var224:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var224->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var224, 1); /* recv_is_self= on <var224:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var224->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var224, var_candidate); /* mproperty= on <var224:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var224->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var224, var_candidatedef); /* mpropdef= on <var224:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var224->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var224, var_msignature); /* msignature= on <var224:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var224->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var224, 0); /* erasure_cast= on <var224:CallSite>*/
}
{
((void(*)(val* self))(var224->class->vft[COLOR_standard__kernel__Object__init]))(var224); /* init on <var224:CallSite>*/
}
var_callsite = var224;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_auto_super_inits, var_callsite); /* Direct call array#Array#add on <var_auto_super_inits:Array[CallSite]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var227 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
if (unlikely(varonce228==NULL)) {
var229 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce230!=NULL)) {
var231 = varonce230;
} else {
var232 = "Old-style auto-super init for ";
var233 = standard___standard__NativeString___to_s_with_length(var232, 30l);
var231 = var233;
varonce230 = var231;
}
((struct instance_standard__NativeArray*)var229)->values[0]=var231;
if (likely(varonce234!=NULL)) {
var235 = varonce234;
} else {
var236 = " to ";
var237 = standard___standard__NativeString___to_s_with_length(var236, 4l);
var235 = var237;
varonce234 = var235;
}
((struct instance_standard__NativeArray*)var229)->values[2]=var235;
} else {
var229 = varonce228;
varonce228 = NULL;
}
{
var238 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var229)->values[1]=var238;
{
var239 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_candidate);
}
((struct instance_standard__NativeArray*)var229)->values[3]=var239;
{
var240 = ((val*(*)(val* self))(var229->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var229); /* native_to_s on <var229:NativeArray[String]>*/
}
varonce228 = var229;
{
nit___nit__ToolContext___info(var225, var240, 4l); /* Direct call toolcontext#ToolContext#info on <var225:ToolContext>*/
}
BREAK_label152: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_139); /* Direct call array#ArrayIterator#next on <var_139:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label241;
}
}
BREAK_label241: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_139); /* Direct call array#ArrayIterator#finish on <var_139:ArrayIterator[MClassType]>*/
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var244 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var242 = var244;
RET_LABEL243:(void)0;
}
}
var_the_root_init_mmethod = var242;
if (var_the_root_init_mmethod == NULL) {
var246 = 0; /* is null */
} else {
var246 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_the_root_init_mmethod,((val*)NULL)) on <var_the_root_init_mmethod:nullable MMethod> */
var_other58 = ((val*)NULL);
{
var249 = ((short int(*)(val* self, val* p0))(var_the_root_init_mmethod->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_the_root_init_mmethod, var_other58); /* == on <var_the_root_init_mmethod:nullable MMethod(MMethod)>*/
}
var250 = !var249;
var247 = var250;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
var246 = var247;
}
var_251 = var246;
if (var246){
{
var252 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_auto_super_inits);
}
var245 = var252;
} else {
var245 = var_251;
}
if (var245){
{
var253 = nit___nit__MProperty___lookup_definitions(var_the_root_init_mmethod, var_mmodule, var_anchor);
}
var_candidatedefs254 = var253;
{
var255 = standard___standard__SequenceRead___Collection__first(var_candidatedefs254);
}
var_candidatedef256 = var255;
{
{ /* Inline array#AbstractArrayRead#length (var_candidatedefs254) on <var_candidatedefs254:Array[MMethodDef]> */
var259 = var_candidatedefs254->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_candidatedefs254:Array[MMethodDef]> */
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var257,1l) on <var257:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var262 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var262)) {
var_class_name265 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name265);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var266 = var257 > 1l;
var260 = var266;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
}
if (var260){
var_267 = var_candidatedefs254;
{
var268 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_267);
}
var_269 = var268;
for(;;) {
{
var270 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_269);
}
if (var270){
{
var271 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_269);
}
var_spd = var271;
{
{ /* Inline model#MMethodDef#initializers (var_spd) on <var_spd:MMethodDef> */
var274 = var_spd->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd:MMethodDef> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var272) on <var272:Array[MProperty]> */
var277 = var272->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var272:Array[MProperty]> */
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_candidatedef256) on <var_candidatedef256:MMethodDef> */
var280 = var_candidatedef256->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef256:MMethodDef> */
if (unlikely(var280 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var278 = var280;
RET_LABEL279:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var278) on <var278:Array[MProperty]> */
var283 = var278->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var278:Array[MProperty]> */
var281 = var283;
RET_LABEL282:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var275,var281) on <var275:Int> */
/* Covariant cast for argument 0 (i) <var281:Int> isa OTHER */
/* <var281:Int> isa OTHER */
var286 = 1; /* easy <var281:Int> isa OTHER*/
if (unlikely(!var286)) {
var_class_name289 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name289);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var290 = var275 > var281;
var284 = var290;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
}
if (var284){
var_candidatedef256 = var_spd;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_269); /* Direct call array#ArrayIterator#next on <var_269:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label291;
}
}
BREAK_label291: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_269); /* Direct call array#ArrayIterator#finish on <var_269:ArrayIterator[MMethodDef]>*/
}
var_292 = var_candidatedefs254;
{
var293 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_292);
}
var_294 = var293;
for(;;) {
{
var295 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_294);
}
if (var295){
{
var296 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_294);
}
var_spd297 = var296;
var_i = 0l;
{
{ /* Inline model#MMethodDef#initializers (var_spd297) on <var_spd297:MMethodDef> */
var300 = var_spd297->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd297:MMethodDef> */
if (unlikely(var300 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
var_301 = var298;
{
var302 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_301);
}
var_303 = var302;
for(;;) {
{
var304 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_303);
}
if (var304){
{
var305 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_303);
}
var_p = var305;
{
{ /* Inline model#MMethodDef#initializers (var_candidatedef256) on <var_candidatedef256:MMethodDef> */
var308 = var_candidatedef256->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef256:MMethodDef> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
var309 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var306, var_i);
}
{
{ /* Inline kernel#Object#!= (var_p,var309) on <var_p:MProperty> */
var_other58 = var309;
{
var312 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, var_other58); /* == on <var_p:MProperty>*/
}
var313 = !var312;
var310 = var313;
goto RET_LABEL311;
RET_LABEL311:(void)0;
}
}
if (var310){
if (unlikely(varonce314==NULL)) {
var315 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "Error: cannot do an implicit constructor call to conflicting inherited inits `";
var319 = standard___standard__NativeString___to_s_with_length(var318, 78l);
var317 = var319;
varonce316 = var317;
}
((struct instance_standard__NativeArray*)var315)->values[0]=var317;
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "(";
var323 = standard___standard__NativeString___to_s_with_length(var322, 1l);
var321 = var323;
varonce320 = var321;
}
((struct instance_standard__NativeArray*)var315)->values[2]=var321;
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = "`) and `";
var327 = standard___standard__NativeString___to_s_with_length(var326, 8l);
var325 = var327;
varonce324 = var325;
}
((struct instance_standard__NativeArray*)var315)->values[4]=var325;
if (likely(varonce328!=NULL)) {
var329 = varonce328;
} else {
var330 = "(";
var331 = standard___standard__NativeString___to_s_with_length(var330, 1l);
var329 = var331;
varonce328 = var329;
}
((struct instance_standard__NativeArray*)var315)->values[6]=var329;
if (likely(varonce332!=NULL)) {
var333 = varonce332;
} else {
var334 = "`). NOTE: Do not mix old-style and new-style init!";
var335 = standard___standard__NativeString___to_s_with_length(var334, 50l);
var333 = var335;
varonce332 = var333;
}
((struct instance_standard__NativeArray*)var315)->values[8]=var333;
} else {
var315 = varonce314;
varonce314 = NULL;
}
{
var336 = ((val*(*)(val* self))(var_spd297->class->vft[COLOR_standard__string__Object__to_s]))(var_spd297); /* to_s on <var_spd297:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var315)->values[1]=var336;
{
{ /* Inline model#MMethodDef#initializers (var_spd297) on <var_spd297:MMethodDef> */
var339 = var_spd297->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd297:MMethodDef> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
if (likely(varonce340!=NULL)) {
var341 = varonce340;
} else {
var342 = ", ";
var343 = standard___standard__NativeString___to_s_with_length(var342, 2l);
var341 = var343;
varonce340 = var341;
}
{
var344 = standard__string___Collection___join(var337, var341);
}
((struct instance_standard__NativeArray*)var315)->values[3]=var344;
{
var345 = ((val*(*)(val* self))(var_candidatedef256->class->vft[COLOR_standard__string__Object__to_s]))(var_candidatedef256); /* to_s on <var_candidatedef256:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var315)->values[5]=var345;
{
{ /* Inline model#MMethodDef#initializers (var_candidatedef256) on <var_candidatedef256:MMethodDef> */
var348 = var_candidatedef256->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef256:MMethodDef> */
if (unlikely(var348 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var346 = var348;
RET_LABEL347:(void)0;
}
}
if (likely(varonce349!=NULL)) {
var350 = varonce349;
} else {
var351 = ", ";
var352 = standard___standard__NativeString___to_s_with_length(var351, 2l);
var350 = var352;
varonce349 = var350;
}
{
var353 = standard__string___Collection___join(var346, var350);
}
((struct instance_standard__NativeArray*)var315)->values[7]=var353;
{
var354 = ((val*(*)(val* self))(var315->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var315); /* native_to_s on <var315:NativeArray[String]>*/
}
varonce314 = var315;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var354); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var357 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var357)) {
var_class_name360 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name360);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var361 = var_i + 1l;
var355 = var361;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
}
var_i = var355;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_303); /* Direct call array#ArrayIterator#next on <var_303:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label362;
}
}
BREAK_label362: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_303); /* Direct call array#ArrayIterator#finish on <var_303:ArrayIterator[MProperty]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_294); /* Direct call array#ArrayIterator#next on <var_294:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label363;
}
}
BREAK_label363: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_294); /* Direct call array#ArrayIterator#finish on <var_294:ArrayIterator[MMethodDef]>*/
}
} else {
}
{
{ /* Inline model#MMethodDef#new_msignature (var_candidatedef256) on <var_candidatedef256:MMethodDef> */
var367 = var_candidatedef256->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_candidatedef256:MMethodDef> */
var365 = var367;
RET_LABEL366:(void)0;
}
}
if (var365!=NULL) {
var364 = var365;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_candidatedef256) on <var_candidatedef256:MMethodDef> */
var370 = var_candidatedef256->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_candidatedef256:MMethodDef> */
var368 = var370;
RET_LABEL369:(void)0;
}
}
var364 = var368;
}
var_msignature371 = var364;
if (var_msignature371 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 170);
fatal_exit(1);
} else {
var372 = nit___nit__MSignature___MType__resolve_for(var_msignature371, var_recvtype, var_anchor, var_mmodule, 1);
}
var_msignature371 = var372;
var373 = NEW_nit__CallSite(&type_nit__CallSite);
{
((void(*)(val* self, val* p0))(var373->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var373, self); /* node= on <var373:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var373->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var373, var_recvtype); /* recv= on <var373:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var373->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var373, var_mmodule); /* mmodule= on <var373:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var373->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var373, var_anchor); /* anchor= on <var373:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var373->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var373, 1); /* recv_is_self= on <var373:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var373->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var373, var_the_root_init_mmethod); /* mproperty= on <var373:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var373->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var373, var_candidatedef256); /* mpropdef= on <var373:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var373->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var373, var_msignature371); /* msignature= on <var373:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var373->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var373, 0); /* erasure_cast= on <var373:CallSite>*/
}
{
((void(*)(val* self))(var373->class->vft[COLOR_standard__kernel__Object__init]))(var373); /* init on <var373:CallSite>*/
}
var_callsite374 = var373;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_auto_super_inits, var_callsite374); /* Direct call array#Array#add on <var_auto_super_inits:Array[CallSite]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var377 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var377 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var375 = var377;
RET_LABEL376:(void)0;
}
}
if (unlikely(varonce378==NULL)) {
var379 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce380!=NULL)) {
var381 = varonce380;
} else {
var382 = "Auto-super init for ";
var383 = standard___standard__NativeString___to_s_with_length(var382, 20l);
var381 = var383;
varonce380 = var381;
}
((struct instance_standard__NativeArray*)var379)->values[0]=var381;
if (likely(varonce384!=NULL)) {
var385 = varonce384;
} else {
var386 = " to ";
var387 = standard___standard__NativeString___to_s_with_length(var386, 4l);
var385 = var387;
varonce384 = var385;
}
((struct instance_standard__NativeArray*)var379)->values[2]=var385;
} else {
var379 = varonce378;
varonce378 = NULL;
}
{
var388 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var379)->values[1]=var388;
{
var389 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_the_root_init_mmethod);
}
((struct instance_standard__NativeArray*)var379)->values[3]=var389;
{
var390 = ((val*(*)(val* self))(var379->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var379); /* native_to_s on <var379:NativeArray[String]>*/
}
varonce378 = var379;
{
nit___nit__ToolContext___info(var375, var390, 4l); /* Direct call toolcontext#ToolContext#info on <var375:ToolContext>*/
}
} else {
}
{
var391 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_auto_super_inits);
}
if (var391){
if (unlikely(varonce392==NULL)) {
var393 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce394!=NULL)) {
var395 = varonce394;
} else {
var396 = "Error: no constructors to call implicitly in `";
var397 = standard___standard__NativeString___to_s_with_length(var396, 46l);
var395 = var397;
varonce394 = var395;
}
((struct instance_standard__NativeArray*)var393)->values[0]=var395;
if (likely(varonce398!=NULL)) {
var399 = varonce398;
} else {
var400 = "`. Call one explicitly.";
var401 = standard___standard__NativeString___to_s_with_length(var400, 23l);
var399 = var401;
varonce398 = var399;
}
((struct instance_standard__NativeArray*)var393)->values[2]=var399;
} else {
var393 = varonce392;
varonce392 = NULL;
}
{
var402 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var393)->values[1]=var402;
{
var403 = ((val*(*)(val* self))(var393->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var393); /* native_to_s on <var393:NativeArray[String]>*/
}
varonce392 = var393;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var403); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var_404 = var_auto_super_inits;
{
var405 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_404);
}
var_406 = var405;
for(;;) {
{
var407 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_406);
}
if (var407){
{
var408 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_406);
}
var_auto_super_init = var408;
{
{ /* Inline typing#CallSite#mpropdef (var_auto_super_init) on <var_auto_super_init:CallSite> */
var411 = var_auto_super_init->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_auto_super_init:CallSite> */
if (unlikely(var411 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
}
var409 = var411;
RET_LABEL410:(void)0;
}
}
var_auto_super_init_def = var409;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var414 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var412 = var414;
RET_LABEL413:(void)0;
}
}
if (unlikely(var412 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 184);
fatal_exit(1);
}
var_msig = var412;
{
{ /* Inline typing#CallSite#msignature (var_auto_super_init) on <var_auto_super_init:CallSite> */
var417 = var_auto_super_init->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_auto_super_init:CallSite> */
if (unlikely(var417 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 631);
fatal_exit(1);
}
var415 = var417;
RET_LABEL416:(void)0;
}
}
var_supermsig = var415;
{
var418 = nit___nit__MSignature___arity(var_supermsig);
}
{
var419 = nit___nit__MSignature___arity(var_msig);
}
{
{ /* Inline kernel#Int#> (var418,var419) on <var418:Int> */
/* Covariant cast for argument 0 (i) <var419:Int> isa OTHER */
/* <var419:Int> isa OTHER */
var422 = 1; /* easy <var419:Int> isa OTHER*/
if (unlikely(!var422)) {
var_class_name425 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name425);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var426 = var418 > var419;
var420 = var426;
goto RET_LABEL421;
RET_LABEL421:(void)0;
}
}
if (var420){
if (unlikely(varonce427==NULL)) {
var428 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "Error: cannot do an implicit constructor call to `";
var432 = standard___standard__NativeString___to_s_with_length(var431, 50l);
var430 = var432;
varonce429 = var430;
}
((struct instance_standard__NativeArray*)var428)->values[0]=var430;
if (likely(varonce433!=NULL)) {
var434 = varonce433;
} else {
var435 = "`. Expected at least `";
var436 = standard___standard__NativeString___to_s_with_length(var435, 22l);
var434 = var436;
varonce433 = var434;
}
((struct instance_standard__NativeArray*)var428)->values[3]=var434;
if (likely(varonce437!=NULL)) {
var438 = varonce437;
} else {
var439 = "` arguments, got `";
var440 = standard___standard__NativeString___to_s_with_length(var439, 18l);
var438 = var440;
varonce437 = var438;
}
((struct instance_standard__NativeArray*)var428)->values[5]=var438;
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = "`.";
var444 = standard___standard__NativeString___to_s_with_length(var443, 2l);
var442 = var444;
varonce441 = var442;
}
((struct instance_standard__NativeArray*)var428)->values[7]=var442;
} else {
var428 = varonce427;
varonce427 = NULL;
}
{
var445 = ((val*(*)(val* self))(var_auto_super_init_def->class->vft[COLOR_standard__string__Object__to_s]))(var_auto_super_init_def); /* to_s on <var_auto_super_init_def:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var428)->values[1]=var445;
{
var446 = ((val*(*)(val* self))(var_supermsig->class->vft[COLOR_standard__string__Object__to_s]))(var_supermsig); /* to_s on <var_supermsig:MSignature>*/
}
((struct instance_standard__NativeArray*)var428)->values[2]=var446;
{
var447 = nit___nit__MSignature___arity(var_supermsig);
}
var448 = standard__string___Int___Object__to_s(var447);
((struct instance_standard__NativeArray*)var428)->values[4]=var448;
{
var449 = nit___nit__MSignature___arity(var_msig);
}
var450 = standard__string___Int___Object__to_s(var449);
((struct instance_standard__NativeArray*)var428)->values[6]=var450;
{
var451 = ((val*(*)(val* self))(var428->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var428); /* native_to_s on <var428:NativeArray[String]>*/
}
varonce427 = var428;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var451); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label452;
} else {
}
var_i453 = 0l;
{
{ /* Inline model#MSignature#mparameters (var_supermsig) on <var_supermsig:MSignature> */
var456 = var_supermsig->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_supermsig:MSignature> */
if (unlikely(var456 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var454 = var456;
RET_LABEL455:(void)0;
}
}
var_457 = var454;
{
var458 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_457);
}
var_459 = var458;
for(;;) {
{
var460 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_459);
}
if (var460){
{
var461 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_459);
}
var_sp = var461;
{
{ /* Inline model#MSignature#mparameters (var_msig) on <var_msig:MSignature> */
var464 = var_msig->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msig:MSignature> */
if (unlikely(var464 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var462 = var464;
RET_LABEL463:(void)0;
}
}
{
var465 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var462, var_i453);
}
var_p466 = var465;
{
{ /* Inline model#MParameter#mtype (var_p466) on <var_p466:MParameter> */
var469 = var_p466->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_p466:MParameter> */
if (unlikely(var469 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var467 = var469;
RET_LABEL468:(void)0;
}
}
var_sub = var467;
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var472 = var_sp->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var472 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var470 = var472;
RET_LABEL471:(void)0;
}
}
var_sup = var470;
{
var473 = nit___nit__MType___is_subtype(var_sub, var_mmodule, var_anchor, var_sup);
}
var474 = !var473;
if (var474){
if (unlikely(varonce475==NULL)) {
var476 = NEW_standard__NativeArray(12l, &type_standard__NativeArray__standard__String);
if (likely(varonce477!=NULL)) {
var478 = varonce477;
} else {
var479 = "Error: cannot do an implicit constructor call to `";
var480 = standard___standard__NativeString___to_s_with_length(var479, 50l);
var478 = var480;
varonce477 = var478;
}
((struct instance_standard__NativeArray*)var476)->values[0]=var478;
if (likely(varonce481!=NULL)) {
var482 = varonce481;
} else {
var483 = "`. Expected argument #";
var484 = standard___standard__NativeString___to_s_with_length(var483, 22l);
var482 = var484;
varonce481 = var482;
}
((struct instance_standard__NativeArray*)var476)->values[3]=var482;
if (likely(varonce485!=NULL)) {
var486 = varonce485;
} else {
var487 = " of type `";
var488 = standard___standard__NativeString___to_s_with_length(var487, 10l);
var486 = var488;
varonce485 = var486;
}
((struct instance_standard__NativeArray*)var476)->values[5]=var486;
if (likely(varonce489!=NULL)) {
var490 = varonce489;
} else {
var491 = "`, got implicit argument `";
var492 = standard___standard__NativeString___to_s_with_length(var491, 26l);
var490 = var492;
varonce489 = var490;
}
((struct instance_standard__NativeArray*)var476)->values[7]=var490;
if (likely(varonce493!=NULL)) {
var494 = varonce493;
} else {
var495 = "` of type `";
var496 = standard___standard__NativeString___to_s_with_length(var495, 11l);
var494 = var496;
varonce493 = var494;
}
((struct instance_standard__NativeArray*)var476)->values[9]=var494;
if (likely(varonce497!=NULL)) {
var498 = varonce497;
} else {
var499 = "`.";
var500 = standard___standard__NativeString___to_s_with_length(var499, 2l);
var498 = var500;
varonce497 = var498;
}
((struct instance_standard__NativeArray*)var476)->values[11]=var498;
} else {
var476 = varonce475;
varonce475 = NULL;
}
{
var501 = ((val*(*)(val* self))(var_auto_super_init_def->class->vft[COLOR_standard__string__Object__to_s]))(var_auto_super_init_def); /* to_s on <var_auto_super_init_def:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var476)->values[1]=var501;
{
var502 = ((val*(*)(val* self))(var_supermsig->class->vft[COLOR_standard__string__Object__to_s]))(var_supermsig); /* to_s on <var_supermsig:MSignature>*/
}
((struct instance_standard__NativeArray*)var476)->values[2]=var502;
var503 = standard__string___Int___Object__to_s(var_i453);
((struct instance_standard__NativeArray*)var476)->values[4]=var503;
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var506 = var_sp->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var506 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var504 = var506;
RET_LABEL505:(void)0;
}
}
{
var507 = ((val*(*)(val* self))(var504->class->vft[COLOR_standard__string__Object__to_s]))(var504); /* to_s on <var504:MType>*/
}
((struct instance_standard__NativeArray*)var476)->values[6]=var507;
{
{ /* Inline model#MParameter#name (var_p466) on <var_p466:MParameter> */
var510 = var_p466->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var_p466:MParameter> */
if (unlikely(var510 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1876);
fatal_exit(1);
}
var508 = var510;
RET_LABEL509:(void)0;
}
}
((struct instance_standard__NativeArray*)var476)->values[8]=var508;
{
{ /* Inline model#MParameter#mtype (var_p466) on <var_p466:MParameter> */
var513 = var_p466->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_p466:MParameter> */
if (unlikely(var513 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var511 = var513;
RET_LABEL512:(void)0;
}
}
{
var514 = ((val*(*)(val* self))(var511->class->vft[COLOR_standard__string__Object__to_s]))(var511); /* to_s on <var511:MType>*/
}
((struct instance_standard__NativeArray*)var476)->values[10]=var514;
{
var515 = ((val*(*)(val* self))(var476->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var476); /* native_to_s on <var476:NativeArray[String]>*/
}
varonce475 = var476;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var515); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label516;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i453,1l) on <var_i453:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var519 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var519)) {
var_class_name522 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name522);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var523 = var_i453 + 1l;
var517 = var523;
goto RET_LABEL518;
RET_LABEL518:(void)0;
}
}
var_i453 = var517;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_459); /* Direct call array#ArrayIterator#next on <var_459:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label516;
}
}
BREAK_label516: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_459); /* Direct call array#ArrayIterator#finish on <var_459:ArrayIterator[MParameter]>*/
}
BREAK_label452: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_406); /* Direct call array#ArrayIterator#next on <var_406:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label524;
}
}
BREAK_label524: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_406); /* Direct call array#ArrayIterator#finish on <var_406:ArrayIterator[CallSite]>*/
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits= (self,var_auto_super_inits) on <self:AMethPropdef> */
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val = var_auto_super_inits; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL525:(void)0;
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
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var10 /* : MMethod */;
val* var12 /* : MMethod */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_callsite = var;
if (var_callsite == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var8 = var_callsite == var_other;
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
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#is_broken= (var_v,1) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___is_broken].s = 1; /* _is_broken on <var_v:AutoSuperInitVisitor> */
RET_LABEL9:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var12 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var10) on <var10:MMethod> */
var15 = var10->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var10:MMethod> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (var_v,self) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = self; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
RET_LABEL16:(void)0;
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
