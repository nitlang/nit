#include "auto_super_init.sep.0.h"
/* method auto_super_init#ToolContext#auto_super_init_phase for (self: ToolContext): Phase */
val* auto_super_init__ToolContext__auto_super_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#ToolContext#auto_super_init_phase for (self: Object): Phase */
val* VIRTUAL_auto_super_init__ToolContext__auto_super_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
val* var3 /* : Phase */;
{ /* Inline auto_super_init#ToolContext#auto_super_init_phase (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 25);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitPhase#process_npropdef for (self: AutoSuperInitPhase, APropdef) */
void auto_super_init__AutoSuperInitPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : ModelBuilder */;
var_npropdef = p0;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_parser_nodes__AMethPropdef.color;
idtype = type_parser_nodes__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:AutoSuperInitPhase> */
var3 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:AutoSuperInitPhase> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = modelbuilder__ToolContext__modelbuilder(var1);
}
{
auto_super_init__AMethPropdef__do_auto_super_init(var_npropdef, var4); /* Direct call auto_super_init#AMethPropdef#do_auto_super_init on <var_npropdef:APropdef(AMethPropdef)>*/
}
} else {
}
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_auto_super_init__AutoSuperInitPhase__process_npropdef(val* self, val* p0) {
auto_super_init__AutoSuperInitPhase__process_npropdef(self, p0); /* Direct call auto_super_init#AutoSuperInitPhase#process_npropdef on <self:Object(AutoSuperInitPhase)>*/
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#visit for (self: AutoSuperInitVisitor, ANode) */
void auto_super_init__AutoSuperInitVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_auto_super_init__ANode__accept_auto_super_init]))(var_n, self) /* accept_auto_super_init on <var_n:ANode>*/;
}
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
}
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#visit for (self: Object, ANode) */
void VIRTUAL_auto_super_init__AutoSuperInitVisitor__visit(val* self, val* p0) {
auto_super_init__AutoSuperInitVisitor__visit(self, p0); /* Direct call auto_super_init#AutoSuperInitVisitor#visit on <self:Object(AutoSuperInitVisitor)>*/
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init for (self: AutoSuperInitVisitor): nullable ANode */
val* auto_super_init__AutoSuperInitVisitor__has_explicit_super_init(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init for (self: Object): nullable ANode */
val* VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init (self) on <self:Object(AutoSuperInitVisitor)> */
var3 = self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <self:Object(AutoSuperInitVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= for (self: AutoSuperInitVisitor, nullable ANode) */
void auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d(val* self, val* p0) {
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = p0; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= for (self: Object, nullable ANode) */
void VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d(val* self, val* p0) {
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (self,p0) on <self:Object(AutoSuperInitVisitor)> */
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = p0; /* _has_explicit_super_init on <self:Object(AutoSuperInitVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#is_broken for (self: AutoSuperInitVisitor): Bool */
short int auto_super_init__AutoSuperInitVisitor__is_broken(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#is_broken for (self: Object): Bool */
short int VIRTUAL_auto_super_init__AutoSuperInitVisitor__is_broken(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline auto_super_init#AutoSuperInitVisitor#is_broken (self) on <self:Object(AutoSuperInitVisitor)> */
var3 = self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <self:Object(AutoSuperInitVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#is_broken= for (self: AutoSuperInitVisitor, Bool) */
void auto_super_init__AutoSuperInitVisitor__is_broken_61d(val* self, short int p0) {
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___is_broken].s = p0; /* _is_broken on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#is_broken= for (self: Object, Bool) */
void VIRTUAL_auto_super_init__AutoSuperInitVisitor__is_broken_61d(val* self, short int p0) {
{ /* Inline auto_super_init#AutoSuperInitVisitor#is_broken= (self,p0) on <self:Object(AutoSuperInitVisitor)> */
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___is_broken].s = p0; /* _is_broken on <self:Object(AutoSuperInitVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#auto_super_inits for (self: AMethPropdef): nullable Array[CallSite] */
val* auto_super_init__AMethPropdef__auto_super_inits(val* self) {
val* var /* : nullable Array[CallSite] */;
val* var1 /* : nullable Array[CallSite] */;
var1 = self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AMethPropdef#auto_super_inits for (self: Object): nullable Array[CallSite] */
val* VIRTUAL_auto_super_init__AMethPropdef__auto_super_inits(val* self) {
val* var /* : nullable Array[CallSite] */;
val* var1 /* : nullable Array[CallSite] */;
val* var3 /* : nullable Array[CallSite] */;
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (self) on <self:Object(AMethPropdef)> */
var3 = self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:Object(AMethPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AMethPropdef#auto_super_inits= for (self: AMethPropdef, nullable Array[CallSite]) */
void auto_super_init__AMethPropdef__auto_super_inits_61d(val* self, val* p0) {
self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val = p0; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#auto_super_inits= for (self: Object, nullable Array[CallSite]) */
void VIRTUAL_auto_super_init__AMethPropdef__auto_super_inits_61d(val* self, val* p0) {
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits= (self,p0) on <self:Object(AMethPropdef)> */
self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val = p0; /* _auto_super_inits on <self:Object(AMethPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#auto_super_call for (self: AMethPropdef): Bool */
short int auto_super_init__AMethPropdef__auto_super_call(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AMethPropdef#auto_super_call for (self: Object): Bool */
short int VIRTUAL_auto_super_init__AMethPropdef__auto_super_call(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline auto_super_init#AMethPropdef#auto_super_call (self) on <self:Object(AMethPropdef)> */
var3 = self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:Object(AMethPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AMethPropdef#auto_super_call= for (self: AMethPropdef, Bool) */
void auto_super_init__AMethPropdef__auto_super_call_61d(val* self, short int p0) {
self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_call].s = p0; /* _auto_super_call on <self:AMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#auto_super_call= for (self: Object, Bool) */
void VIRTUAL_auto_super_init__AMethPropdef__auto_super_call_61d(val* self, short int p0) {
{ /* Inline auto_super_init#AMethPropdef#auto_super_call= (self,p0) on <self:Object(AMethPropdef)> */
self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_call].s = p0; /* _auto_super_call on <self:Object(AMethPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#do_auto_super_init for (self: AMethPropdef, ModelBuilder) */
void auto_super_init__AMethPropdef__do_auto_super_init(val* self, val* p0) {
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
val* var30 /* : MProperty */;
val* var32 /* : MProperty */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : MClassDef */;
val* var51 /* : MClassDef */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var_skip /* var skip: Bool */;
val* var55 /* : nullable POSetElement[MClassDef] */;
val* var57 /* : nullable POSetElement[MClassDef] */;
val* var58 /* : Collection[Object] */;
val* var_ /* var : Collection[MClassDef] */;
val* var59 /* : Iterator[nullable Object] */;
val* var_60 /* var : Iterator[MClassDef] */;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var63 /* : MClass */;
val* var65 /* : MClass */;
val* var66 /* : MClassKind */;
val* var68 /* : MClassKind */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var74 /* : nullable AExpr */;
val* var76 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var77 /* : null */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : AutoSuperInitVisitor */;
val* var_v /* var v: AutoSuperInitVisitor */;
val* var85 /* : nullable ANode */;
val* var87 /* : nullable ANode */;
val* var_anode /* var anode: nullable ANode */;
val* var88 /* : null */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
val* var95 /* : null */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
val* var110 /* : null */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
val* var123 /* : Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: Array[CallSite] */;
val* var124 /* : Array[MClassType] */;
val* var126 /* : Array[MClassType] */;
val* var_127 /* var : Array[MClassType] */;
val* var128 /* : ArrayIterator[nullable Object] */;
val* var_129 /* var : ArrayIterator[MClassType] */;
short int var130 /* : Bool */;
val* var131 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var132 /* : MClass */;
val* var134 /* : MClass */;
val* var135 /* : MClassKind */;
val* var137 /* : MClassKind */;
short int var138 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
val* var143 /* : MClassType */;
val* var145 /* : MClassType */;
val* var146 /* : MClassType */;
val* var147 /* : MProperty */;
val* var149 /* : MProperty */;
val* var150 /* : String */;
val* var152 /* : String */;
val* var153 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
val* var154 /* : null */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
val* var_other158 /* var other: nullable Object */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
val* var167 /* : nullable MProperty */;
val* var168 /* : null */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : FlatString */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : FlatString */;
val* var185 /* : MProperty */;
val* var187 /* : MProperty */;
val* var188 /* : String */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : FlatString */;
val* var201 /* : Array[Object] */;
long var202 /* : Int */;
val* var203 /* : NativeArray[Object] */;
val* var204 /* : String */;
short int var205 /* : Bool */;
int cltype206;
int idtype207;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
val* var211 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
val* var212 /* : nullable Object */;
val* var_candidatedef /* var candidatedef: MMethodDef */;
val* var213 /* : nullable MSignature */;
val* var214 /* : nullable MSignature */;
val* var216 /* : nullable MSignature */;
val* var217 /* : nullable MSignature */;
val* var219 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var220 /* : Bool */;
val* var221 /* : MSignature */;
val* var222 /* : CallSite */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
val* var_callsite /* var callsite: CallSite */;
val* var227 /* : nullable MMethod */;
val* var229 /* : nullable MMethod */;
val* var_the_root_init_mmethod /* var the_root_init_mmethod: nullable MMethod */;
short int var230 /* : Bool */;
val* var231 /* : null */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var_238 /* var : Bool */;
short int var239 /* : Bool */;
val* var240 /* : Array[MPropDef] */;
val* var_candidatedefs241 /* var candidatedefs: Array[MMethodDef] */;
val* var242 /* : nullable Object */;
val* var_candidatedef243 /* var candidatedef: MMethodDef */;
long var244 /* : Int */;
long var246 /* : Int */;
long var247 /* : Int */;
short int var248 /* : Bool */;
short int var250 /* : Bool */;
int cltype251;
int idtype252;
const char* var_class_name253;
short int var254 /* : Bool */;
val* var_255 /* var : Array[MMethodDef] */;
val* var256 /* : ArrayIterator[nullable Object] */;
val* var_257 /* var : ArrayIterator[MMethodDef] */;
short int var258 /* : Bool */;
val* var259 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var260 /* : Array[MProperty] */;
val* var262 /* : Array[MProperty] */;
long var263 /* : Int */;
long var265 /* : Int */;
val* var266 /* : Array[MProperty] */;
val* var268 /* : Array[MProperty] */;
long var269 /* : Int */;
long var271 /* : Int */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
int cltype275;
int idtype276;
const char* var_class_name277;
short int var278 /* : Bool */;
val* var_281 /* var : Array[MMethodDef] */;
val* var282 /* : ArrayIterator[nullable Object] */;
val* var_283 /* var : ArrayIterator[MMethodDef] */;
short int var284 /* : Bool */;
val* var285 /* : nullable Object */;
val* var_spd286 /* var spd: MMethodDef */;
long var287 /* : Int */;
long var_i /* var i: Int */;
val* var288 /* : Array[MProperty] */;
val* var290 /* : Array[MProperty] */;
val* var_291 /* var : Array[MProperty] */;
val* var292 /* : ArrayIterator[nullable Object] */;
val* var_293 /* var : ArrayIterator[MProperty] */;
short int var294 /* : Bool */;
val* var295 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var296 /* : Array[MProperty] */;
val* var298 /* : Array[MProperty] */;
val* var299 /* : nullable Object */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
short int var303 /* : Bool */;
short int var304 /* : Bool */;
short int var305 /* : Bool */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : FlatString */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : FlatString */;
val* var316 /* : Array[MProperty] */;
val* var318 /* : Array[MProperty] */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
long var322 /* : Int */;
val* var323 /* : FlatString */;
val* var324 /* : String */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
long var328 /* : Int */;
val* var329 /* : FlatString */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
long var333 /* : Int */;
val* var334 /* : FlatString */;
val* var335 /* : Array[MProperty] */;
val* var337 /* : Array[MProperty] */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
long var341 /* : Int */;
val* var342 /* : FlatString */;
val* var343 /* : String */;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
long var347 /* : Int */;
val* var348 /* : FlatString */;
val* var349 /* : Array[Object] */;
long var350 /* : Int */;
val* var351 /* : NativeArray[Object] */;
val* var352 /* : String */;
long var353 /* : Int */;
long var354 /* : Int */;
short int var356 /* : Bool */;
int cltype357;
int idtype358;
const char* var_class_name359;
long var360 /* : Int */;
val* var365 /* : nullable MSignature */;
val* var366 /* : nullable MSignature */;
val* var368 /* : nullable MSignature */;
val* var369 /* : nullable MSignature */;
val* var371 /* : nullable MSignature */;
val* var_msignature372 /* var msignature: nullable MSignature */;
short int var373 /* : Bool */;
val* var374 /* : MSignature */;
val* var375 /* : CallSite */;
short int var376 /* : Bool */;
short int var377 /* : Bool */;
val* var_callsite378 /* var callsite: CallSite */;
short int var379 /* : Bool */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
long var383 /* : Int */;
val* var384 /* : FlatString */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : NativeString */;
long var388 /* : Int */;
val* var389 /* : FlatString */;
val* var390 /* : Array[Object] */;
long var391 /* : Int */;
val* var392 /* : NativeArray[Object] */;
val* var393 /* : String */;
val* var_394 /* var : Array[CallSite] */;
val* var395 /* : ArrayIterator[nullable Object] */;
val* var_396 /* var : ArrayIterator[CallSite] */;
short int var397 /* : Bool */;
val* var398 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var399 /* : MMethodDef */;
val* var401 /* : MMethodDef */;
val* var_auto_super_init_def /* var auto_super_init_def: MMethodDef */;
val* var402 /* : nullable MSignature */;
val* var404 /* : nullable MSignature */;
val* var_msig /* var msig: MSignature */;
val* var405 /* : MSignature */;
val* var407 /* : MSignature */;
val* var_supermsig /* var supermsig: MSignature */;
long var408 /* : Int */;
long var409 /* : Int */;
short int var410 /* : Bool */;
short int var412 /* : Bool */;
int cltype413;
int idtype414;
const char* var_class_name415;
short int var416 /* : Bool */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
long var420 /* : Int */;
val* var421 /* : FlatString */;
static val* varonce422;
val* var423 /* : String */;
char* var424 /* : NativeString */;
long var425 /* : Int */;
val* var426 /* : FlatString */;
long var427 /* : Int */;
static val* varonce428;
val* var429 /* : String */;
char* var430 /* : NativeString */;
long var431 /* : Int */;
val* var432 /* : FlatString */;
long var433 /* : Int */;
static val* varonce434;
val* var435 /* : String */;
char* var436 /* : NativeString */;
long var437 /* : Int */;
val* var438 /* : FlatString */;
val* var439 /* : Array[Object] */;
long var440 /* : Int */;
val* var441 /* : NativeArray[Object] */;
val* var442 /* : Object */;
val* var443 /* : Object */;
val* var444 /* : String */;
long var446 /* : Int */;
long var_i447 /* var i: Int */;
val* var448 /* : Array[MParameter] */;
val* var450 /* : Array[MParameter] */;
val* var_451 /* var : Array[MParameter] */;
val* var452 /* : ArrayIterator[nullable Object] */;
val* var_453 /* var : ArrayIterator[MParameter] */;
short int var454 /* : Bool */;
val* var455 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var456 /* : Array[MParameter] */;
val* var458 /* : Array[MParameter] */;
val* var459 /* : nullable Object */;
val* var_p460 /* var p: MParameter */;
val* var461 /* : MType */;
val* var463 /* : MType */;
val* var_sub /* var sub: MType */;
val* var464 /* : MType */;
val* var466 /* : MType */;
val* var_sup /* var sup: MType */;
short int var467 /* : Bool */;
short int var468 /* : Bool */;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : NativeString */;
long var472 /* : Int */;
val* var473 /* : FlatString */;
static val* varonce474;
val* var475 /* : String */;
char* var476 /* : NativeString */;
long var477 /* : Int */;
val* var478 /* : FlatString */;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : NativeString */;
long var482 /* : Int */;
val* var483 /* : FlatString */;
val* var484 /* : MType */;
val* var486 /* : MType */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
long var490 /* : Int */;
val* var491 /* : FlatString */;
val* var492 /* : String */;
val* var494 /* : String */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
long var498 /* : Int */;
val* var499 /* : FlatString */;
val* var500 /* : MType */;
val* var502 /* : MType */;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : NativeString */;
long var506 /* : Int */;
val* var507 /* : FlatString */;
val* var508 /* : Array[Object] */;
long var509 /* : Int */;
val* var510 /* : NativeArray[Object] */;
val* var511 /* : Object */;
val* var512 /* : String */;
long var514 /* : Int */;
long var515 /* : Int */;
short int var517 /* : Bool */;
int cltype518;
int idtype519;
const char* var_class_name520;
long var521 /* : Int */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable ANode> isa AClassdef */
cltype = type_parser_nodes__AClassdef.color;
idtype = type_parser_nodes__AClassdef.id;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 58);
show_backtrace(1);
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var) on <var:nullable ANode(AClassdef)> */
var6 = var->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var:nullable ANode(AClassdef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 58);
show_backtrace(1);
}
var_mclassdef = var4;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var9 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 59);
show_backtrace(1);
}
var_mpropdef = var7;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var12 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var18 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_anchor = var16;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var21 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var19) on <var19:MClass> */
var24 = var19->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var19:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
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
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
var29 = annotation__Prod__get_single_annotation(self, var25, var_modelbuilder);
}
var_nosuper = var29;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var32 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var30) on <var30:MProperty(MMethod)> */
var35 = var30->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var30:MProperty(MMethod)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = !var33;
if (var36){
var37 = NULL;
if (var_nosuper == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,var37) on <var_nosuper:nullable AAnnotation> */
var_other = var37;
{
var42 = ((short int (*)(val*, val*))(var_nosuper->class->vft[COLOR_kernel__Object___61d_61d]))(var_nosuper, var_other) /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/;
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
if (varonce44) {
var45 = varonce44;
} else {
var46 = "Error: nosuper only in `init`";
var47 = 29;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nosuper, var45); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var51 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = model__MClassDef__is_intro(var49);
}
var53 = !var52;
if (var53){
goto RET_LABEL;
} else {
}
var54 = 1;
var_skip = var54;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:MClassDef> */
var57 = var_mclassdef->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:MClassDef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 78);
show_backtrace(1);
} else {
var58 = poset__POSetElement__direct_greaters(var55);
}
var_ = var58;
{
var59 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MClassDef]>*/;
}
var_60 = var59;
for(;;) {
{
var61 = ((short int (*)(val*))(var_60->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_60) /* is_ok on <var_60:Iterator[MClassDef]>*/;
}
if (var61){
{
var62 = ((val* (*)(val*))(var_60->class->vft[COLOR_abstract_collection__Iterator__item]))(var_60) /* item on <var_60:Iterator[MClassDef]>*/;
}
var_cd = var62;
{
{ /* Inline model#MClassDef#mclass (var_cd) on <var_cd:MClassDef> */
var65 = var_cd->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_cd:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var63) on <var63:MClass> */
var68 = var63->attrs[COLOR_model__MClass___kind].val; /* _kind on <var63:MClass> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var66) on <var66:MClassKind> */
var71 = var66->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <var66:MClassKind> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69){
var72 = 0;
var_skip = var72;
} else {
}
{
((void (*)(val*))(var_60->class->vft[COLOR_abstract_collection__Iterator__next]))(var_60) /* next on <var_60:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_60) on <var_60:Iterator[MClassDef]> */
RET_LABEL73:(void)0;
}
}
if (var_skip){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var76 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
var_nblock = var74;
var77 = NULL;
if (var_nblock == NULL) {
var78 = 0; /* is null */
} else {
var78 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,var77) on <var_nblock:nullable AExpr> */
var_other = var77;
{
var82 = ((short int (*)(val*, val*))(var_nblock->class->vft[COLOR_kernel__Object___61d_61d]))(var_nblock, var_other) /* == on <var_nblock:nullable AExpr(AExpr)>*/;
var81 = var82;
}
var83 = !var81;
var79 = var83;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
var84 = NEW_auto_super_init__AutoSuperInitVisitor(&type_auto_super_init__AutoSuperInitVisitor);
{
((void (*)(val*))(var84->class->vft[COLOR_kernel__Object__init]))(var84) /* init on <var84:AutoSuperInitVisitor>*/;
}
var_v = var84;
{
parser_nodes__Visitor__enter_visit(var_v, var_nblock); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:AutoSuperInitVisitor>*/
}
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init (var_v) on <var_v:AutoSuperInitVisitor> */
var87 = var_v->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_anode = var85;
var88 = NULL;
if (var_anode == NULL) {
var89 = 0; /* is null */
} else {
var89 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anode,var88) on <var_anode:nullable ANode> */
var_other = var88;
{
var93 = ((short int (*)(val*, val*))(var_anode->class->vft[COLOR_kernel__Object___61d_61d]))(var_anode, var_other) /* == on <var_anode:nullable ANode(ANode)>*/;
var92 = var93;
}
var94 = !var92;
var90 = var94;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
var89 = var90;
}
if (var89){
var95 = NULL;
if (var_nosuper == NULL) {
var96 = 0; /* is null */
} else {
var96 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,var95) on <var_nosuper:nullable AAnnotation> */
var_other = var95;
{
var100 = ((short int (*)(val*, val*))(var_nosuper->class->vft[COLOR_kernel__Object___61d_61d]))(var_nosuper, var_other) /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/;
var99 = var100;
}
var101 = !var99;
var97 = var101;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var96 = var97;
}
if (var96){
if (varonce102) {
var103 = varonce102;
} else {
var104 = "Error: method is annotated nosuper but a constructor call is present";
var105 = 68;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_anode, var103); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#is_broken (var_v) on <var_v:AutoSuperInitVisitor> */
var109 = var_v->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <var_v:AutoSuperInitVisitor> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (var107){
goto RET_LABEL;
} else {
}
} else {
}
var110 = NULL;
if (var_nosuper == NULL) {
var111 = 0; /* is null */
} else {
var111 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,var110) on <var_nosuper:nullable AAnnotation> */
var_other = var110;
{
var115 = ((short int (*)(val*, val*))(var_nosuper->class->vft[COLOR_kernel__Object___61d_61d]))(var_nosuper, var_other) /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/;
var114 = var115;
}
var116 = !var114;
var112 = var116;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
var111 = var112;
}
if (var111){
goto RET_LABEL;
} else {
}
{
var117 = model__MPropDef__is_intro(var_mpropdef);
}
var118 = !var117;
if (var118){
var119 = 1;
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call= (self,var119) on <self:AMethPropdef> */
self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_call].s = var119; /* _auto_super_call on <self:AMethPropdef> */
RET_LABEL120:(void)0;
}
}
var121 = 1;
{
{ /* Inline modelize_property#MPropDef#has_supercall= (var_mpropdef,var121) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_modelize_property__MPropDef___has_supercall].s = var121; /* _has_supercall on <var_mpropdef:MMethodDef> */
RET_LABEL122:(void)0;
}
}
goto RET_LABEL;
} else {
}
var123 = NEW_array__Array(&type_array__Arraytyping__CallSite);
{
((void (*)(val*))(var123->class->vft[COLOR_kernel__Object__init]))(var123) /* init on <var123:Array[CallSite]>*/;
}
var_auto_super_inits = var123;
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var126 = var_mclassdef->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 534);
show_backtrace(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
var_127 = var124;
{
var128 = array__AbstractArrayRead__iterator(var_127);
}
var_129 = var128;
for(;;) {
{
var130 = array__ArrayIterator__is_ok(var_129);
}
if (var130){
{
var131 = array__ArrayIterator__item(var_129);
}
var_msupertype = var131;
{
{ /* Inline model#MClassType#mclass (var_msupertype) on <var_msupertype:MClassType> */
var134 = var_msupertype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_msupertype:MClassType> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var132) on <var132:MClass> */
var137 = var132->attrs[COLOR_model__MClass___kind].val; /* _kind on <var132:MClass> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var135) on <var135:MClassKind> */
var140 = var135->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <var135:MClassKind> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
var141 = !var138;
if (var141){
goto BREAK_label142;
} else {
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var145 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
var146 = model__MClassType__anchor_to(var_msupertype, var_mmodule, var143);
}
var_msupertype = var146;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var149 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var147) on <var147:MProperty(MMethod)> */
var152 = var147->attrs[COLOR_model__MProperty___name].val; /* _name on <var147:MProperty(MMethod)> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
var153 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var150);
}
var_candidate = var153;
var154 = NULL;
if (var_candidate == NULL) {
var155 = 1; /* is null */
} else {
var155 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,var154) on <var_candidate:nullable MProperty> */
var_other158 = var154;
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other158) on <var_candidate:nullable MProperty(MProperty)> */
var161 = var_candidate == var_other158;
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
var156 = var159;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
var155 = var156;
}
if (var155){
if (varonce162) {
var163 = varonce162;
} else {
var164 = "init";
var165 = 4;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
{
var167 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var163);
}
var_candidate = var167;
} else {
}
var168 = NULL;
if (var_candidate == NULL) {
var169 = 1; /* is null */
} else {
var169 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,var168) on <var_candidate:nullable MProperty> */
var_other158 = var168;
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other158) on <var_candidate:nullable MProperty(MProperty)> */
var174 = var_candidate == var_other158;
var172 = var174;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
}
var170 = var172;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
var169 = var170;
}
if (var169){
if (varonce175) {
var176 = varonce175;
} else {
var177 = "Error: Cannot do an implicit constructor call in ";
var178 = 49;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = "; there is no constructor named ";
var183 = 32;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var187 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var185) on <var185:MProperty(MMethod)> */
var190 = var185->attrs[COLOR_model__MProperty___name].val; /* _name on <var185:MProperty(MMethod)> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = " in ";
var194 = 4;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = ".";
var199 = 1;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
var201 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var201 = array_instance Array[Object] */
var202 = 7;
var203 = NEW_array__NativeArray(var202, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var203)->values[0] = (val*) var176;
((struct instance_array__NativeArray*)var203)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var203)->values[2] = (val*) var181;
((struct instance_array__NativeArray*)var203)->values[3] = (val*) var188;
((struct instance_array__NativeArray*)var203)->values[4] = (val*) var192;
((struct instance_array__NativeArray*)var203)->values[5] = (val*) var_msupertype;
((struct instance_array__NativeArray*)var203)->values[6] = (val*) var197;
{
((void (*)(val*, val*, long))(var201->class->vft[COLOR_array__Array__with_native]))(var201, var203, var202) /* with_native on <var201:Array[Object]>*/;
}
}
{
var204 = ((val* (*)(val*))(var201->class->vft[COLOR_string__Object__to_s]))(var201) /* to_s on <var201:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var204); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_candidate:nullable MProperty(MProperty)> isa MMethod */
cltype206 = type_model__MMethod.color;
idtype207 = type_model__MMethod.id;
if(cltype206 >= var_candidate->type->table_size) {
var205 = 0;
} else {
var205 = var_candidate->type->type_table[cltype206] == idtype207;
}
if (unlikely(!var205)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 124);
show_backtrace(1);
}
{
{ /* Inline model#MMethod#is_root_init (var_candidate) on <var_candidate:nullable MProperty(MMethod)> */
var210 = var_candidate->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <var_candidate:nullable MProperty(MMethod)> */
var208 = var210;
RET_LABEL209:(void)0;
}
}
if (var208){
goto BREAK_label142;
} else {
}
{
var211 = model__MProperty__lookup_definitions(var_candidate, var_mmodule, var_anchor);
}
var_candidatedefs = var211;
{
var212 = abstract_collection__SequenceRead__first(var_candidatedefs);
}
var_candidatedef = var212;
{
{ /* Inline model#MMethodDef#new_msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var216 = var_candidatedef->attrs[COLOR_model__MMethodDef___new_msignature].val; /* _new_msignature on <var_candidatedef:MMethodDef> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
if (var214!=NULL) {
var213 = var214;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var219 = var_candidatedef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_candidatedef:MMethodDef> */
var217 = var219;
RET_LABEL218:(void)0;
}
}
var213 = var217;
}
var_msignature = var213;
var220 = 1;
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 134);
show_backtrace(1);
} else {
var221 = model__MSignature__resolve_for(var_msignature, var_recvtype, var_anchor, var_mmodule, var220);
}
var_msignature = var221;
var222 = NEW_typing__CallSite(&type_typing__CallSite);
var223 = 1;
var224 = 0;
{
((void (*)(val*, val*))(var222->class->vft[COLOR_typing__CallSite__node_61d]))(var222, self) /* node= on <var222:CallSite>*/;
}
{
((void (*)(val*, val*))(var222->class->vft[COLOR_typing__CallSite__recv_61d]))(var222, var_recvtype) /* recv= on <var222:CallSite>*/;
}
{
((void (*)(val*, val*))(var222->class->vft[COLOR_typing__CallSite__mmodule_61d]))(var222, var_mmodule) /* mmodule= on <var222:CallSite>*/;
}
{
((void (*)(val*, val*))(var222->class->vft[COLOR_typing__CallSite__anchor_61d]))(var222, var_anchor) /* anchor= on <var222:CallSite>*/;
}
{
((void (*)(val*, short int))(var222->class->vft[COLOR_typing__CallSite__recv_is_self_61d]))(var222, var223) /* recv_is_self= on <var222:CallSite>*/;
}
{
((void (*)(val*, val*))(var222->class->vft[COLOR_typing__CallSite__mproperty_61d]))(var222, var_candidate) /* mproperty= on <var222:CallSite>*/;
}
{
((void (*)(val*, val*))(var222->class->vft[COLOR_typing__CallSite__mpropdef_61d]))(var222, var_candidatedef) /* mpropdef= on <var222:CallSite>*/;
}
{
((void (*)(val*, val*))(var222->class->vft[COLOR_typing__CallSite__msignature_61d]))(var222, var_msignature) /* msignature= on <var222:CallSite>*/;
}
{
((void (*)(val*, short int))(var222->class->vft[COLOR_typing__CallSite__erasure_cast_61d]))(var222, var224) /* erasure_cast= on <var222:CallSite>*/;
}
{
((void (*)(val*))(var222->class->vft[COLOR_kernel__Object__init]))(var222) /* init on <var222:CallSite>*/;
}
var_callsite = var222;
{
array__Array__add(var_auto_super_inits, var_callsite); /* Direct call array#Array#add on <var_auto_super_inits:Array[CallSite]>*/
}
BREAK_label142: (void)0;
{
array__ArrayIterator__next(var_129); /* Direct call array#ArrayIterator#next on <var_129:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label225;
}
}
BREAK_label225: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_129) on <var_129:ArrayIterator[MClassType]> */
RET_LABEL226:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var229 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var227 = var229;
RET_LABEL228:(void)0;
}
}
var_the_root_init_mmethod = var227;
var231 = NULL;
if (var_the_root_init_mmethod == NULL) {
var232 = 0; /* is null */
} else {
var232 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_the_root_init_mmethod,var231) on <var_the_root_init_mmethod:nullable MMethod> */
var_other = var231;
{
var236 = ((short int (*)(val*, val*))(var_the_root_init_mmethod->class->vft[COLOR_kernel__Object___61d_61d]))(var_the_root_init_mmethod, var_other) /* == on <var_the_root_init_mmethod:nullable MMethod(MMethod)>*/;
var235 = var236;
}
var237 = !var235;
var233 = var237;
goto RET_LABEL234;
RET_LABEL234:(void)0;
}
var232 = var233;
}
var_238 = var232;
if (var232){
{
var239 = array__AbstractArrayRead__is_empty(var_auto_super_inits);
}
var230 = var239;
} else {
var230 = var_238;
}
if (var230){
{
var240 = model__MProperty__lookup_definitions(var_the_root_init_mmethod, var_mmodule, var_anchor);
}
var_candidatedefs241 = var240;
{
var242 = abstract_collection__SequenceRead__first(var_candidatedefs241);
}
var_candidatedef243 = var242;
{
{ /* Inline array#AbstractArrayRead#length (var_candidatedefs241) on <var_candidatedefs241:Array[MMethodDef]> */
var246 = var_candidatedefs241->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_candidatedefs241:Array[MMethodDef]> */
var244 = var246;
RET_LABEL245:(void)0;
}
}
var247 = 1;
{
{ /* Inline kernel#Int#> (var244,var247) on <var244:Int> */
/* Covariant cast for argument 0 (i) <var247:Int> isa OTHER */
/* <var247:Int> isa OTHER */
var250 = 1; /* easy <var247:Int> isa OTHER*/
if (unlikely(!var250)) {
var_class_name253 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name253);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var254 = var244 > var247;
var248 = var254;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
}
if (var248){
var_255 = var_candidatedefs241;
{
var256 = array__AbstractArrayRead__iterator(var_255);
}
var_257 = var256;
for(;;) {
{
var258 = array__ArrayIterator__is_ok(var_257);
}
if (var258){
{
var259 = array__ArrayIterator__item(var_257);
}
var_spd = var259;
{
{ /* Inline model#MMethodDef#initializers (var_spd) on <var_spd:MMethodDef> */
var262 = var_spd->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_spd:MMethodDef> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var260) on <var260:Array[MProperty]> */
var265 = var260->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var260:Array[MProperty]> */
var263 = var265;
RET_LABEL264:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_candidatedef243) on <var_candidatedef243:MMethodDef> */
var268 = var_candidatedef243->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef243:MMethodDef> */
if (unlikely(var268 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var266) on <var266:Array[MProperty]> */
var271 = var266->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var266:Array[MProperty]> */
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var263,var269) on <var263:Int> */
/* Covariant cast for argument 0 (i) <var269:Int> isa OTHER */
/* <var269:Int> isa OTHER */
var274 = 1; /* easy <var269:Int> isa OTHER*/
if (unlikely(!var274)) {
var_class_name277 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name277);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var278 = var263 > var269;
var272 = var278;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
if (var272){
var_candidatedef243 = var_spd;
} else {
}
{
array__ArrayIterator__next(var_257); /* Direct call array#ArrayIterator#next on <var_257:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label279;
}
}
BREAK_label279: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_257) on <var_257:ArrayIterator[MMethodDef]> */
RET_LABEL280:(void)0;
}
}
var_281 = var_candidatedefs241;
{
var282 = array__AbstractArrayRead__iterator(var_281);
}
var_283 = var282;
for(;;) {
{
var284 = array__ArrayIterator__is_ok(var_283);
}
if (var284){
{
var285 = array__ArrayIterator__item(var_283);
}
var_spd286 = var285;
var287 = 0;
var_i = var287;
{
{ /* Inline model#MMethodDef#initializers (var_spd286) on <var_spd286:MMethodDef> */
var290 = var_spd286->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_spd286:MMethodDef> */
if (unlikely(var290 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var288 = var290;
RET_LABEL289:(void)0;
}
}
var_291 = var288;
{
var292 = array__AbstractArrayRead__iterator(var_291);
}
var_293 = var292;
for(;;) {
{
var294 = array__ArrayIterator__is_ok(var_293);
}
if (var294){
{
var295 = array__ArrayIterator__item(var_293);
}
var_p = var295;
{
{ /* Inline model#MMethodDef#initializers (var_candidatedef243) on <var_candidatedef243:MMethodDef> */
var298 = var_candidatedef243->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef243:MMethodDef> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
{
var299 = array__Array___91d_93d(var296, var_i);
}
{
{ /* Inline kernel#Object#!= (var_p,var299) on <var_p:MProperty> */
var_other = var299;
{
var304 = ((short int (*)(val*, val*))(var_p->class->vft[COLOR_kernel__Object___61d_61d]))(var_p, var_other) /* == on <var_p:MProperty>*/;
var303 = var304;
}
var305 = !var303;
var301 = var305;
goto RET_LABEL302;
RET_LABEL302:(void)0;
}
var300 = var301;
}
if (var300){
if (varonce306) {
var307 = varonce306;
} else {
var308 = "Error: Cannot do an implicit constructor call to comflicting for inherited inits ";
var309 = 81;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
if (varonce311) {
var312 = varonce311;
} else {
var313 = "(";
var314 = 1;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
{
{ /* Inline model#MMethodDef#initializers (var_spd286) on <var_spd286:MMethodDef> */
var318 = var_spd286->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_spd286:MMethodDef> */
if (unlikely(var318 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var316 = var318;
RET_LABEL317:(void)0;
}
}
if (varonce319) {
var320 = varonce319;
} else {
var321 = ", ";
var322 = 2;
var323 = string__NativeString__to_s_with_length(var321, var322);
var320 = var323;
varonce319 = var320;
}
{
var324 = string__Collection__join(var316, var320);
}
if (varonce325) {
var326 = varonce325;
} else {
var327 = ") and ";
var328 = 6;
var329 = string__NativeString__to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
if (varonce330) {
var331 = varonce330;
} else {
var332 = "(";
var333 = 1;
var334 = string__NativeString__to_s_with_length(var332, var333);
var331 = var334;
varonce330 = var331;
}
{
{ /* Inline model#MMethodDef#initializers (var_candidatedef243) on <var_candidatedef243:MMethodDef> */
var337 = var_candidatedef243->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef243:MMethodDef> */
if (unlikely(var337 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var335 = var337;
RET_LABEL336:(void)0;
}
}
if (varonce338) {
var339 = varonce338;
} else {
var340 = ", ";
var341 = 2;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
{
var343 = string__Collection__join(var335, var339);
}
if (varonce344) {
var345 = varonce344;
} else {
var346 = "). NOTE: Do not mix old-style and new-style init!";
var347 = 49;
var348 = string__NativeString__to_s_with_length(var346, var347);
var345 = var348;
varonce344 = var345;
}
var349 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var349 = array_instance Array[Object] */
var350 = 9;
var351 = NEW_array__NativeArray(var350, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var351)->values[0] = (val*) var307;
((struct instance_array__NativeArray*)var351)->values[1] = (val*) var_spd286;
((struct instance_array__NativeArray*)var351)->values[2] = (val*) var312;
((struct instance_array__NativeArray*)var351)->values[3] = (val*) var324;
((struct instance_array__NativeArray*)var351)->values[4] = (val*) var326;
((struct instance_array__NativeArray*)var351)->values[5] = (val*) var_candidatedef243;
((struct instance_array__NativeArray*)var351)->values[6] = (val*) var331;
((struct instance_array__NativeArray*)var351)->values[7] = (val*) var343;
((struct instance_array__NativeArray*)var351)->values[8] = (val*) var345;
{
((void (*)(val*, val*, long))(var349->class->vft[COLOR_array__Array__with_native]))(var349, var351, var350) /* with_native on <var349:Array[Object]>*/;
}
}
{
var352 = ((val* (*)(val*))(var349->class->vft[COLOR_string__Object__to_s]))(var349) /* to_s on <var349:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var352); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var353 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var353) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var353:Int> isa OTHER */
/* <var353:Int> isa OTHER */
var356 = 1; /* easy <var353:Int> isa OTHER*/
if (unlikely(!var356)) {
var_class_name359 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name359);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var360 = var_i + var353;
var354 = var360;
goto RET_LABEL355;
RET_LABEL355:(void)0;
}
}
var_i = var354;
{
array__ArrayIterator__next(var_293); /* Direct call array#ArrayIterator#next on <var_293:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label361;
}
}
BREAK_label361: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_293) on <var_293:ArrayIterator[MProperty]> */
RET_LABEL362:(void)0;
}
}
{
array__ArrayIterator__next(var_283); /* Direct call array#ArrayIterator#next on <var_283:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label363;
}
}
BREAK_label363: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_283) on <var_283:ArrayIterator[MMethodDef]> */
RET_LABEL364:(void)0;
}
}
} else {
}
{
{ /* Inline model#MMethodDef#new_msignature (var_candidatedef243) on <var_candidatedef243:MMethodDef> */
var368 = var_candidatedef243->attrs[COLOR_model__MMethodDef___new_msignature].val; /* _new_msignature on <var_candidatedef243:MMethodDef> */
var366 = var368;
RET_LABEL367:(void)0;
}
}
if (var366!=NULL) {
var365 = var366;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_candidatedef243) on <var_candidatedef243:MMethodDef> */
var371 = var_candidatedef243->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_candidatedef243:MMethodDef> */
var369 = var371;
RET_LABEL370:(void)0;
}
}
var365 = var369;
}
var_msignature372 = var365;
var373 = 1;
if (var_msignature372 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 168);
show_backtrace(1);
} else {
var374 = model__MSignature__resolve_for(var_msignature372, var_recvtype, var_anchor, var_mmodule, var373);
}
var_msignature372 = var374;
var375 = NEW_typing__CallSite(&type_typing__CallSite);
var376 = 1;
var377 = 0;
{
((void (*)(val*, val*))(var375->class->vft[COLOR_typing__CallSite__node_61d]))(var375, self) /* node= on <var375:CallSite>*/;
}
{
((void (*)(val*, val*))(var375->class->vft[COLOR_typing__CallSite__recv_61d]))(var375, var_recvtype) /* recv= on <var375:CallSite>*/;
}
{
((void (*)(val*, val*))(var375->class->vft[COLOR_typing__CallSite__mmodule_61d]))(var375, var_mmodule) /* mmodule= on <var375:CallSite>*/;
}
{
((void (*)(val*, val*))(var375->class->vft[COLOR_typing__CallSite__anchor_61d]))(var375, var_anchor) /* anchor= on <var375:CallSite>*/;
}
{
((void (*)(val*, short int))(var375->class->vft[COLOR_typing__CallSite__recv_is_self_61d]))(var375, var376) /* recv_is_self= on <var375:CallSite>*/;
}
{
((void (*)(val*, val*))(var375->class->vft[COLOR_typing__CallSite__mproperty_61d]))(var375, var_the_root_init_mmethod) /* mproperty= on <var375:CallSite>*/;
}
{
((void (*)(val*, val*))(var375->class->vft[COLOR_typing__CallSite__mpropdef_61d]))(var375, var_candidatedef243) /* mpropdef= on <var375:CallSite>*/;
}
{
((void (*)(val*, val*))(var375->class->vft[COLOR_typing__CallSite__msignature_61d]))(var375, var_msignature372) /* msignature= on <var375:CallSite>*/;
}
{
((void (*)(val*, short int))(var375->class->vft[COLOR_typing__CallSite__erasure_cast_61d]))(var375, var377) /* erasure_cast= on <var375:CallSite>*/;
}
{
((void (*)(val*))(var375->class->vft[COLOR_kernel__Object__init]))(var375) /* init on <var375:CallSite>*/;
}
var_callsite378 = var375;
{
array__Array__add(var_auto_super_inits, var_callsite378); /* Direct call array#Array#add on <var_auto_super_inits:Array[CallSite]>*/
}
} else {
}
{
var379 = array__AbstractArrayRead__is_empty(var_auto_super_inits);
}
if (var379){
if (varonce380) {
var381 = varonce380;
} else {
var382 = "Error: No constructors to call implicitely in ";
var383 = 46;
var384 = string__NativeString__to_s_with_length(var382, var383);
var381 = var384;
varonce380 = var381;
}
if (varonce385) {
var386 = varonce385;
} else {
var387 = ". Call one explicitely.";
var388 = 23;
var389 = string__NativeString__to_s_with_length(var387, var388);
var386 = var389;
varonce385 = var386;
}
var390 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var390 = array_instance Array[Object] */
var391 = 3;
var392 = NEW_array__NativeArray(var391, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var392)->values[0] = (val*) var381;
((struct instance_array__NativeArray*)var392)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var392)->values[2] = (val*) var386;
{
((void (*)(val*, val*, long))(var390->class->vft[COLOR_array__Array__with_native]))(var390, var392, var391) /* with_native on <var390:Array[Object]>*/;
}
}
{
var393 = ((val* (*)(val*))(var390->class->vft[COLOR_string__Object__to_s]))(var390) /* to_s on <var390:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var393); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var_394 = var_auto_super_inits;
{
var395 = array__AbstractArrayRead__iterator(var_394);
}
var_396 = var395;
for(;;) {
{
var397 = array__ArrayIterator__is_ok(var_396);
}
if (var397){
{
var398 = array__ArrayIterator__item(var_396);
}
var_auto_super_init = var398;
{
{ /* Inline typing#CallSite#mpropdef (var_auto_super_init) on <var_auto_super_init:CallSite> */
var401 = var_auto_super_init->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <var_auto_super_init:CallSite> */
if (unlikely(var401 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 486);
show_backtrace(1);
}
var399 = var401;
RET_LABEL400:(void)0;
}
}
var_auto_super_init_def = var399;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var404 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var402 = var404;
RET_LABEL403:(void)0;
}
}
if (unlikely(var402 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 181);
show_backtrace(1);
}
var_msig = var402;
{
{ /* Inline typing#CallSite#msignature (var_auto_super_init) on <var_auto_super_init:CallSite> */
var407 = var_auto_super_init->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_auto_super_init:CallSite> */
if (unlikely(var407 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 490);
show_backtrace(1);
}
var405 = var407;
RET_LABEL406:(void)0;
}
}
var_supermsig = var405;
{
var408 = model__MSignature__arity(var_supermsig);
}
{
var409 = model__MSignature__arity(var_msig);
}
{
{ /* Inline kernel#Int#> (var408,var409) on <var408:Int> */
/* Covariant cast for argument 0 (i) <var409:Int> isa OTHER */
/* <var409:Int> isa OTHER */
var412 = 1; /* easy <var409:Int> isa OTHER*/
if (unlikely(!var412)) {
var_class_name415 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name415);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var416 = var408 > var409;
var410 = var416;
goto RET_LABEL411;
RET_LABEL411:(void)0;
}
}
if (var410){
if (varonce417) {
var418 = varonce417;
} else {
var419 = "Error: Cannot do an implicit constructor call to ";
var420 = 49;
var421 = string__NativeString__to_s_with_length(var419, var420);
var418 = var421;
varonce417 = var418;
}
if (varonce422) {
var423 = varonce422;
} else {
var424 = ". Expected at least ";
var425 = 20;
var426 = string__NativeString__to_s_with_length(var424, var425);
var423 = var426;
varonce422 = var423;
}
{
var427 = model__MSignature__arity(var_supermsig);
}
if (varonce428) {
var429 = varonce428;
} else {
var430 = " arguments, got ";
var431 = 16;
var432 = string__NativeString__to_s_with_length(var430, var431);
var429 = var432;
varonce428 = var429;
}
{
var433 = model__MSignature__arity(var_msig);
}
if (varonce434) {
var435 = varonce434;
} else {
var436 = ".";
var437 = 1;
var438 = string__NativeString__to_s_with_length(var436, var437);
var435 = var438;
varonce434 = var435;
}
var439 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var439 = array_instance Array[Object] */
var440 = 8;
var441 = NEW_array__NativeArray(var440, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var441)->values[0] = (val*) var418;
((struct instance_array__NativeArray*)var441)->values[1] = (val*) var_auto_super_init_def;
((struct instance_array__NativeArray*)var441)->values[2] = (val*) var_supermsig;
((struct instance_array__NativeArray*)var441)->values[3] = (val*) var423;
var442 = BOX_kernel__Int(var427); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var441)->values[4] = (val*) var442;
((struct instance_array__NativeArray*)var441)->values[5] = (val*) var429;
var443 = BOX_kernel__Int(var433); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var441)->values[6] = (val*) var443;
((struct instance_array__NativeArray*)var441)->values[7] = (val*) var435;
{
((void (*)(val*, val*, long))(var439->class->vft[COLOR_array__Array__with_native]))(var439, var441, var440) /* with_native on <var439:Array[Object]>*/;
}
}
{
var444 = ((val* (*)(val*))(var439->class->vft[COLOR_string__Object__to_s]))(var439) /* to_s on <var439:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var444); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label445;
} else {
}
var446 = 0;
var_i447 = var446;
{
{ /* Inline model#MSignature#mparameters (var_supermsig) on <var_supermsig:MSignature> */
var450 = var_supermsig->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_supermsig:MSignature> */
if (unlikely(var450 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var448 = var450;
RET_LABEL449:(void)0;
}
}
var_451 = var448;
{
var452 = array__AbstractArrayRead__iterator(var_451);
}
var_453 = var452;
for(;;) {
{
var454 = array__ArrayIterator__is_ok(var_453);
}
if (var454){
{
var455 = array__ArrayIterator__item(var_453);
}
var_sp = var455;
{
{ /* Inline model#MSignature#mparameters (var_msig) on <var_msig:MSignature> */
var458 = var_msig->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msig:MSignature> */
if (unlikely(var458 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var456 = var458;
RET_LABEL457:(void)0;
}
}
{
var459 = array__Array___91d_93d(var456, var_i447);
}
var_p460 = var459;
{
{ /* Inline model#MParameter#mtype (var_p460) on <var_p460:MParameter> */
var463 = var_p460->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_p460:MParameter> */
if (unlikely(var463 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var461 = var463;
RET_LABEL462:(void)0;
}
}
var_sub = var461;
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var466 = var_sp->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var466 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var464 = var466;
RET_LABEL465:(void)0;
}
}
var_sup = var464;
{
var467 = model__MType__is_subtype(var_sub, var_mmodule, var_anchor, var_sup);
}
var468 = !var467;
if (var468){
if (varonce469) {
var470 = varonce469;
} else {
var471 = "Error: Cannot do an implicit constructor call to ";
var472 = 49;
var473 = string__NativeString__to_s_with_length(var471, var472);
var470 = var473;
varonce469 = var470;
}
if (varonce474) {
var475 = varonce474;
} else {
var476 = ". Expected argument #";
var477 = 21;
var478 = string__NativeString__to_s_with_length(var476, var477);
var475 = var478;
varonce474 = var475;
}
if (varonce479) {
var480 = varonce479;
} else {
var481 = " of type ";
var482 = 9;
var483 = string__NativeString__to_s_with_length(var481, var482);
var480 = var483;
varonce479 = var480;
}
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var486 = var_sp->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var486 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var484 = var486;
RET_LABEL485:(void)0;
}
}
if (varonce487) {
var488 = varonce487;
} else {
var489 = ", got implicit argument ";
var490 = 24;
var491 = string__NativeString__to_s_with_length(var489, var490);
var488 = var491;
varonce487 = var488;
}
{
{ /* Inline model#MParameter#name (var_p460) on <var_p460:MParameter> */
var494 = var_p460->attrs[COLOR_model__MParameter___name].val; /* _name on <var_p460:MParameter> */
if (unlikely(var494 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var492 = var494;
RET_LABEL493:(void)0;
}
}
if (varonce495) {
var496 = varonce495;
} else {
var497 = " of type ";
var498 = 9;
var499 = string__NativeString__to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
{
{ /* Inline model#MParameter#mtype (var_p460) on <var_p460:MParameter> */
var502 = var_p460->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_p460:MParameter> */
if (unlikely(var502 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var500 = var502;
RET_LABEL501:(void)0;
}
}
if (varonce503) {
var504 = varonce503;
} else {
var505 = ".";
var506 = 1;
var507 = string__NativeString__to_s_with_length(var505, var506);
var504 = var507;
varonce503 = var504;
}
var508 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var508 = array_instance Array[Object] */
var509 = 12;
var510 = NEW_array__NativeArray(var509, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var510)->values[0] = (val*) var470;
((struct instance_array__NativeArray*)var510)->values[1] = (val*) var_auto_super_init_def;
((struct instance_array__NativeArray*)var510)->values[2] = (val*) var_supermsig;
((struct instance_array__NativeArray*)var510)->values[3] = (val*) var475;
var511 = BOX_kernel__Int(var_i447); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var510)->values[4] = (val*) var511;
((struct instance_array__NativeArray*)var510)->values[5] = (val*) var480;
((struct instance_array__NativeArray*)var510)->values[6] = (val*) var484;
((struct instance_array__NativeArray*)var510)->values[7] = (val*) var488;
((struct instance_array__NativeArray*)var510)->values[8] = (val*) var492;
((struct instance_array__NativeArray*)var510)->values[9] = (val*) var496;
((struct instance_array__NativeArray*)var510)->values[10] = (val*) var500;
((struct instance_array__NativeArray*)var510)->values[11] = (val*) var504;
{
((void (*)(val*, val*, long))(var508->class->vft[COLOR_array__Array__with_native]))(var508, var510, var509) /* with_native on <var508:Array[Object]>*/;
}
}
{
var512 = ((val* (*)(val*))(var508->class->vft[COLOR_string__Object__to_s]))(var508) /* to_s on <var508:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var512); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label513;
} else {
}
var514 = 1;
{
{ /* Inline kernel#Int#+ (var_i447,var514) on <var_i447:Int> */
/* Covariant cast for argument 0 (i) <var514:Int> isa OTHER */
/* <var514:Int> isa OTHER */
var517 = 1; /* easy <var514:Int> isa OTHER*/
if (unlikely(!var517)) {
var_class_name520 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name520);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var521 = var_i447 + var514;
var515 = var521;
goto RET_LABEL516;
RET_LABEL516:(void)0;
}
}
var_i447 = var515;
{
array__ArrayIterator__next(var_453); /* Direct call array#ArrayIterator#next on <var_453:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label513;
}
}
BREAK_label513: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_453) on <var_453:ArrayIterator[MParameter]> */
RET_LABEL522:(void)0;
}
}
BREAK_label445: (void)0;
{
array__ArrayIterator__next(var_396); /* Direct call array#ArrayIterator#next on <var_396:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label523;
}
}
BREAK_label523: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_396) on <var_396:ArrayIterator[CallSite]> */
RET_LABEL524:(void)0;
}
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits= (self,var_auto_super_inits) on <self:AMethPropdef> */
self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val = var_auto_super_inits; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL525:(void)0;
}
}
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#do_auto_super_init for (self: Object, ModelBuilder) */
void VIRTUAL_auto_super_init__AMethPropdef__do_auto_super_init(val* self, val* p0) {
auto_super_init__AMethPropdef__do_auto_super_init(self, p0); /* Direct call auto_super_init#AMethPropdef#do_auto_super_init on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method auto_super_init#ANode#accept_auto_super_init for (self: ANode, AutoSuperInitVisitor) */
void auto_super_init__ANode__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method auto_super_init#ANode#accept_auto_super_init for (self: Object, AutoSuperInitVisitor) */
void VIRTUAL_auto_super_init__ANode__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
{ /* Inline auto_super_init#ANode#accept_auto_super_init (self,p0) on <self:Object(ANode)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method auto_super_init#ASendExpr#accept_auto_super_init for (self: ASendExpr, AutoSuperInitVisitor) */
void auto_super_init__ASendExpr__accept_auto_super_init(val* self, val* p0) {
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
var2 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
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
var_v->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___is_broken].s = var10; /* _is_broken on <var_v:AutoSuperInitVisitor> */
RET_LABEL11:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var14 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var12) on <var12:MMethod> */
var17 = var12->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var12:MMethod> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (var_v,self) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = self; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
RET_LABEL18:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method auto_super_init#ASendExpr#accept_auto_super_init for (self: Object, AutoSuperInitVisitor) */
void VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init(val* self, val* p0) {
auto_super_init__ASendExpr__accept_auto_super_init(self, p0); /* Direct call auto_super_init#ASendExpr#accept_auto_super_init on <self:Object(ASendExpr)>*/
RET_LABEL:;
}
/* method auto_super_init#ASuperExpr#accept_auto_super_init for (self: ASuperExpr, AutoSuperInitVisitor) */
void auto_super_init__ASuperExpr__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
var_v = p0;
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (var_v,self) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = self; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method auto_super_init#ASuperExpr#accept_auto_super_init for (self: Object, AutoSuperInitVisitor) */
void VIRTUAL_auto_super_init__ASuperExpr__accept_auto_super_init(val* self, val* p0) {
auto_super_init__ASuperExpr__accept_auto_super_init(self, p0); /* Direct call auto_super_init#ASuperExpr#accept_auto_super_init on <self:Object(ASuperExpr)>*/
RET_LABEL:;
}
