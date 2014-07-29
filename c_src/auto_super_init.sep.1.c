#include "auto_super_init.sep.0.h"
/* method auto_super_init#ToolContext#auto_super_init_phase for (self: ToolContext): Phase */
val* auto_super_init__ToolContext__auto_super_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 26);
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
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 26);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
/* method auto_super_init#AutoSuperInitVisitor#init for (self: AutoSuperInitVisitor) */
void auto_super_init__AutoSuperInitVisitor__init(val* self) {
{
{ /* Inline parser_nodes#Visitor#init (self) on <self:AutoSuperInitVisitor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#init for (self: Object) */
void VIRTUAL_auto_super_init__AutoSuperInitVisitor__init(val* self) {
auto_super_init__AutoSuperInitVisitor__init(self); /* Direct call auto_super_init#AutoSuperInitVisitor#init on <self:Object(AutoSuperInitVisitor)>*/
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
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init for (self: AutoSuperInitVisitor): Bool */
short int auto_super_init__AutoSuperInitVisitor__has_explicit_super_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].s; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init for (self: Object): Bool */
short int VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init (self) on <self:Object(AutoSuperInitVisitor)> */
var3 = self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].s; /* _has_explicit_super_init on <self:Object(AutoSuperInitVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= for (self: AutoSuperInitVisitor, Bool) */
void auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d(val* self, short int p0) {
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].s = p0; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= for (self: Object, Bool) */
void VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d(val* self, short int p0) {
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (self,p0) on <self:Object(AutoSuperInitVisitor)> */
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].s = p0; /* _has_explicit_super_init on <self:Object(AutoSuperInitVisitor)> */
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
val* var25 /* : MProperty */;
val* var27 /* : MProperty */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : MClassDef */;
val* var34 /* : MClassDef */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var_skip /* var skip: Bool */;
val* var38 /* : nullable POSetElement[MClassDef] */;
val* var40 /* : nullable POSetElement[MClassDef] */;
val* var41 /* : Collection[Object] */;
val* var42 /* : Iterator[nullable Object] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var45 /* : MClass */;
val* var47 /* : MClass */;
val* var48 /* : MClassKind */;
val* var50 /* : MClassKind */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var56 /* : null */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var63 /* : AutoSuperInitVisitor */;
val* var_v /* var v: AutoSuperInitVisitor */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: Array[CallSite] */;
val* var68 /* : Array[MClassType] */;
val* var70 /* : Array[MClassType] */;
val* var71 /* : ArrayIterator[nullable Object] */;
short int var72 /* : Bool */;
val* var73 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var74 /* : MClass */;
val* var76 /* : MClass */;
val* var77 /* : MClassKind */;
val* var79 /* : MClassKind */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var85 /* : MClassType */;
val* var87 /* : MClassType */;
val* var88 /* : MClassType */;
val* var89 /* : MProperty */;
val* var91 /* : MProperty */;
val* var92 /* : String */;
val* var94 /* : String */;
val* var95 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
val* var96 /* : null */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var_other100 /* var other: nullable Object */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
static val* varonce;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : nullable MProperty */;
val* var109 /* : null */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
val* var126 /* : MProperty */;
val* var128 /* : MProperty */;
val* var129 /* : String */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : FlatString */;
val* var142 /* : Array[Object] */;
long var143 /* : Int */;
val* var144 /* : NativeArray[Object] */;
val* var145 /* : String */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
val* var149 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
val* var150 /* : nullable Object */;
val* var_candidatedef /* var candidatedef: MMethodDef */;
val* var151 /* : nullable MSignature */;
val* var153 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var154 /* : Bool */;
val* var155 /* : MSignature */;
val* var156 /* : CallSite */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
val* var_callsite /* var callsite: CallSite */;
short int var160 /* : Bool */;
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
val* var171 /* : Array[Object] */;
long var172 /* : Int */;
val* var173 /* : NativeArray[Object] */;
val* var174 /* : String */;
val* var175 /* : ArrayIterator[nullable Object] */;
short int var176 /* : Bool */;
val* var177 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var178 /* : MMethodDef */;
val* var180 /* : MMethodDef */;
val* var_auto_super_init_def /* var auto_super_init_def: MMethodDef */;
val* var181 /* : nullable MSignature */;
val* var183 /* : nullable MSignature */;
val* var_msig /* var msig: MSignature */;
val* var184 /* : MSignature */;
val* var186 /* : MSignature */;
val* var_supermsig /* var supermsig: MSignature */;
long var187 /* : Int */;
long var188 /* : Int */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
int cltype192;
int idtype193;
const char* var_class_name194;
short int var195 /* : Bool */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : FlatString */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : FlatString */;
long var206 /* : Int */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
long var210 /* : Int */;
val* var211 /* : FlatString */;
long var212 /* : Int */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
val* var218 /* : Array[Object] */;
long var219 /* : Int */;
val* var220 /* : NativeArray[Object] */;
val* var221 /* : Object */;
val* var222 /* : Object */;
val* var223 /* : String */;
long var225 /* : Int */;
long var_i /* var i: Int */;
val* var226 /* : Array[MParameter] */;
val* var228 /* : Array[MParameter] */;
val* var229 /* : ArrayIterator[nullable Object] */;
short int var230 /* : Bool */;
val* var231 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var232 /* : Array[MParameter] */;
val* var234 /* : Array[MParameter] */;
val* var235 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var236 /* : MType */;
val* var238 /* : MType */;
val* var_sub /* var sub: MType */;
val* var239 /* : MType */;
val* var241 /* : MType */;
val* var_sup /* var sup: MType */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
long var247 /* : Int */;
val* var248 /* : FlatString */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : NativeString */;
long var252 /* : Int */;
val* var253 /* : FlatString */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : FlatString */;
val* var259 /* : MType */;
val* var261 /* : MType */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : FlatString */;
val* var267 /* : String */;
val* var269 /* : String */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : FlatString */;
val* var275 /* : MType */;
val* var277 /* : MType */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
long var281 /* : Int */;
val* var282 /* : FlatString */;
val* var283 /* : Array[Object] */;
long var284 /* : Int */;
val* var285 /* : NativeArray[Object] */;
val* var286 /* : Object */;
val* var287 /* : String */;
long var289 /* : Int */;
long var290 /* : Int */;
short int var292 /* : Bool */;
int cltype293;
int idtype294;
const char* var_class_name295;
long var296 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 56);
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
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 56);
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
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 57);
show_backtrace(1);
}
var_mpropdef = var7;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var12 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_recvtype = var22;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var27 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var25) on <var25:MProperty(MMethod)> */
var30 = var25->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var25:MProperty(MMethod)> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = !var28;
if (var31){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var34 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = model__MClassDef__is_intro(var32);
}
var36 = !var35;
if (var36){
goto RET_LABEL;
} else {
}
var37 = 1;
var_skip = var37;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:MClassDef> */
var40 = var_mclassdef->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:MClassDef> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 70);
show_backtrace(1);
} else {
var41 = poset__POSetElement__direct_greaters(var38);
}
{
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_collection__Collection__iterator]))(var41) /* iterator on <var41:Collection[Object](Collection[MClassDef])>*/;
}
for(;;) {
{
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var42) /* is_ok on <var42:Iterator[nullable Object]>*/;
}
if(!var43) break;
{
var44 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__item]))(var42) /* item on <var42:Iterator[nullable Object]>*/;
}
var_cd = var44;
{
{ /* Inline model#MClassDef#mclass (var_cd) on <var_cd:MClassDef> */
var47 = var_cd->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_cd:MClassDef> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var45) on <var45:MClass> */
var50 = var45->attrs[COLOR_model__MClass___kind].val; /* _kind on <var45:MClass> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var48) on <var48:MClassKind> */
var53 = var48->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <var48:MClassKind> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (var51){
var54 = 0;
var_skip = var54;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__next]))(var42) /* next on <var42:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
if (var_skip){
goto RET_LABEL;
} else {
}
{
var55 = parser_nodes__AMethPropdef__n_block(self);
}
var_nblock = var55;
var56 = NULL;
if (var_nblock == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,var56) on <var_nblock:nullable AExpr> */
var_other = var56;
{
var61 = ((short int (*)(val*, val*))(var_nblock->class->vft[COLOR_kernel__Object___61d_61d]))(var_nblock, var_other) /* == on <var_nblock:nullable AExpr(AExpr)>*/;
var60 = var61;
}
var62 = !var60;
var58 = var62;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
var63 = NEW_auto_super_init__AutoSuperInitVisitor(&type_auto_super_init__AutoSuperInitVisitor);
{
auto_super_init__AutoSuperInitVisitor__init(var63); /* Direct call auto_super_init#AutoSuperInitVisitor#init on <var63:AutoSuperInitVisitor>*/
}
var_v = var63;
{
parser_nodes__Visitor__enter_visit(var_v, var_nblock); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:AutoSuperInitVisitor>*/
}
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init (var_v) on <var_v:AutoSuperInitVisitor> */
var66 = var_v->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].s; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64){
goto RET_LABEL;
} else {
}
} else {
}
var67 = NEW_array__Array(&type_array__Arraytyping__CallSite);
{
array__Array__init(var67); /* Direct call array#Array#init on <var67:Array[CallSite]>*/
}
var_auto_super_inits = var67;
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var70 = var_mclassdef->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 517);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = array__AbstractArrayRead__iterator(var68);
}
for(;;) {
{
var72 = array__ArrayIterator__is_ok(var71);
}
if(!var72) break;
{
var73 = array__ArrayIterator__item(var71);
}
var_msupertype = var73;
{
{ /* Inline model#MClassType#mclass (var_msupertype) on <var_msupertype:MClassType> */
var76 = var_msupertype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_msupertype:MClassType> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var74) on <var74:MClass> */
var79 = var74->attrs[COLOR_model__MClass___kind].val; /* _kind on <var74:MClass> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var77) on <var77:MClassKind> */
var82 = var77->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <var77:MClassKind> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
var83 = !var80;
if (var83){
goto CONTINUE_label84;
} else {
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var87 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
var88 = model__MClassType__anchor_to(var_msupertype, var_mmodule, var85);
}
var_msupertype = var88;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var91 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var89) on <var89:MProperty(MMethod)> */
var94 = var89->attrs[COLOR_model__MProperty___name].val; /* _name on <var89:MProperty(MMethod)> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var92);
}
var_candidate = var95;
var96 = NULL;
if (var_candidate == NULL) {
var97 = 1; /* is null */
} else {
var97 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,var96) on <var_candidate:nullable MProperty> */
var_other100 = var96;
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other100) on <var_candidate:nullable MProperty(MProperty)> */
var103 = var_candidate == var_other100;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var98 = var101;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (var97){
if (varonce) {
var104 = varonce;
} else {
var105 = "init";
var106 = 4;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce = var104;
}
{
var108 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var104);
}
var_candidate = var108;
} else {
}
var109 = NULL;
if (var_candidate == NULL) {
var110 = 1; /* is null */
} else {
var110 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,var109) on <var_candidate:nullable MProperty> */
var_other100 = var109;
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other100) on <var_candidate:nullable MProperty(MProperty)> */
var115 = var_candidate == var_other100;
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
var110 = var111;
}
if (var110){
if (varonce116) {
var117 = varonce116;
} else {
var118 = "Error: Cannot do an implicit constructor call in ";
var119 = 49;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = "; there is no constructor named ";
var124 = 32;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var128 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var126) on <var126:MProperty(MMethod)> */
var131 = var126->attrs[COLOR_model__MProperty___name].val; /* _name on <var126:MProperty(MMethod)> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = " in ";
var135 = 4;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = ".";
var140 = 1;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 7;
var144 = NEW_array__NativeArray(var143, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var144)->values[0] = (val*) var117;
((struct instance_array__NativeArray*)var144)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var144)->values[2] = (val*) var122;
((struct instance_array__NativeArray*)var144)->values[3] = (val*) var129;
((struct instance_array__NativeArray*)var144)->values[4] = (val*) var133;
((struct instance_array__NativeArray*)var144)->values[5] = (val*) var_msupertype;
((struct instance_array__NativeArray*)var144)->values[6] = (val*) var138;
{
((void (*)(val*, val*, long))(var142->class->vft[COLOR_array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
}
}
{
var145 = ((val* (*)(val*))(var142->class->vft[COLOR_string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var145); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_candidate:nullable MProperty(MProperty)> isa MMethod */
cltype147 = type_model__MMethod.color;
idtype148 = type_model__MMethod.id;
if(cltype147 >= var_candidate->type->table_size) {
var146 = 0;
} else {
var146 = var_candidate->type->type_table[cltype147] == idtype148;
}
if (unlikely(!var146)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 100);
show_backtrace(1);
}
{
var149 = model__MProperty__lookup_definitions(var_candidate, var_mmodule, var_anchor);
}
var_candidatedefs = var149;
{
var150 = abstract_collection__SequenceRead__first(var_candidatedefs);
}
var_candidatedef = var150;
{
{ /* Inline model#MMethodDef#msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var153 = var_candidatedef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_candidatedef:MMethodDef> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_msignature = var151;
var154 = 1;
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 107);
show_backtrace(1);
} else {
var155 = model__MSignature__resolve_for(var_msignature, var_recvtype, var_anchor, var_mmodule, var154);
}
var_msignature = var155;
var156 = NEW_typing__CallSite(&type_typing__CallSite);
var157 = 1;
var158 = 0;
{
{ /* Inline typing#CallSite#init (var156,self,var_recvtype,var_mmodule,var_anchor,var157,var_candidate,var_candidatedef,var_msignature,var158) on <var156:CallSite> */
var156->attrs[COLOR_typing__CallSite___node].val = self; /* _node on <var156:CallSite> */
var156->attrs[COLOR_typing__CallSite___recv].val = var_recvtype; /* _recv on <var156:CallSite> */
var156->attrs[COLOR_typing__CallSite___mmodule].val = var_mmodule; /* _mmodule on <var156:CallSite> */
var156->attrs[COLOR_typing__CallSite___anchor].val = var_anchor; /* _anchor on <var156:CallSite> */
var156->attrs[COLOR_typing__CallSite___recv_is_self].s = var157; /* _recv_is_self on <var156:CallSite> */
var156->attrs[COLOR_typing__CallSite___mproperty].val = var_candidate; /* _mproperty on <var156:CallSite> */
var156->attrs[COLOR_typing__CallSite___mpropdef].val = var_candidatedef; /* _mpropdef on <var156:CallSite> */
var156->attrs[COLOR_typing__CallSite___msignature].val = var_msignature; /* _msignature on <var156:CallSite> */
var156->attrs[COLOR_typing__CallSite___erasure_cast].s = var158; /* _erasure_cast on <var156:CallSite> */
RET_LABEL159:(void)0;
}
}
var_callsite = var156;
{
array__Array__add(var_auto_super_inits, var_callsite); /* Direct call array#Array#add on <var_auto_super_inits:Array[CallSite]>*/
}
CONTINUE_label84: (void)0;
{
array__ArrayIterator__next(var71); /* Direct call array#ArrayIterator#next on <var71:ArrayIterator[nullable Object]>*/
}
}
BREAK_label84: (void)0;
{
var160 = array__AbstractArrayRead__is_empty(var_auto_super_inits);
}
if (var160){
if (varonce161) {
var162 = varonce161;
} else {
var163 = "Error: No constructors to call implicitely in ";
var164 = 46;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = ". Call one explicitely.";
var169 = 23;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
var171 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var171 = array_instance Array[Object] */
var172 = 3;
var173 = NEW_array__NativeArray(var172, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var173)->values[0] = (val*) var162;
((struct instance_array__NativeArray*)var173)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var173)->values[2] = (val*) var167;
{
((void (*)(val*, val*, long))(var171->class->vft[COLOR_array__Array__with_native]))(var171, var173, var172) /* with_native on <var171:Array[Object]>*/;
}
}
{
var174 = ((val* (*)(val*))(var171->class->vft[COLOR_string__Object__to_s]))(var171) /* to_s on <var171:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var174); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var175 = array__AbstractArrayRead__iterator(var_auto_super_inits);
}
for(;;) {
{
var176 = array__ArrayIterator__is_ok(var175);
}
if(!var176) break;
{
var177 = array__ArrayIterator__item(var175);
}
var_auto_super_init = var177;
{
{ /* Inline typing#CallSite#mpropdef (var_auto_super_init) on <var_auto_super_init:CallSite> */
var180 = var_auto_super_init->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <var_auto_super_init:CallSite> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 425);
show_backtrace(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
var_auto_super_init_def = var178;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var183 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var181 = var183;
RET_LABEL182:(void)0;
}
}
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 118);
show_backtrace(1);
}
var_msig = var181;
{
{ /* Inline typing#CallSite#msignature (var_auto_super_init) on <var_auto_super_init:CallSite> */
var186 = var_auto_super_init->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_auto_super_init:CallSite> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
var_supermsig = var184;
{
var187 = model__MSignature__arity(var_supermsig);
}
{
var188 = model__MSignature__arity(var_msig);
}
{
{ /* Inline kernel#Int#> (var187,var188) on <var187:Int> */
/* Covariant cast for argument 0 (i) <var188:Int> isa OTHER */
/* <var188:Int> isa OTHER */
var191 = 1; /* easy <var188:Int> isa OTHER*/
if (unlikely(!var191)) {
var_class_name194 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name194);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var195 = var187 > var188;
var189 = var195;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
if (var189){
if (varonce196) {
var197 = varonce196;
} else {
var198 = "Error: Cannot do an implicit constructor call to ";
var199 = 49;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
if (varonce201) {
var202 = varonce201;
} else {
var203 = ". Expected at least ";
var204 = 20;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
{
var206 = model__MSignature__arity(var_supermsig);
}
if (varonce207) {
var208 = varonce207;
} else {
var209 = " arguments, got ";
var210 = 16;
var211 = string__NativeString__to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
{
var212 = model__MSignature__arity(var_msig);
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = ".";
var216 = 1;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
var218 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var218 = array_instance Array[Object] */
var219 = 8;
var220 = NEW_array__NativeArray(var219, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var220)->values[0] = (val*) var197;
((struct instance_array__NativeArray*)var220)->values[1] = (val*) var_auto_super_init_def;
((struct instance_array__NativeArray*)var220)->values[2] = (val*) var_supermsig;
((struct instance_array__NativeArray*)var220)->values[3] = (val*) var202;
var221 = BOX_kernel__Int(var206); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var220)->values[4] = (val*) var221;
((struct instance_array__NativeArray*)var220)->values[5] = (val*) var208;
var222 = BOX_kernel__Int(var212); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var220)->values[6] = (val*) var222;
((struct instance_array__NativeArray*)var220)->values[7] = (val*) var214;
{
((void (*)(val*, val*, long))(var218->class->vft[COLOR_array__Array__with_native]))(var218, var220, var219) /* with_native on <var218:Array[Object]>*/;
}
}
{
var223 = ((val* (*)(val*))(var218->class->vft[COLOR_string__Object__to_s]))(var218) /* to_s on <var218:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var223); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto CONTINUE_label224;
} else {
}
var225 = 0;
var_i = var225;
{
{ /* Inline model#MSignature#mparameters (var_supermsig) on <var_supermsig:MSignature> */
var228 = var_supermsig->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_supermsig:MSignature> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
var229 = array__AbstractArrayRead__iterator(var226);
}
for(;;) {
{
var230 = array__ArrayIterator__is_ok(var229);
}
if(!var230) break;
{
var231 = array__ArrayIterator__item(var229);
}
var_sp = var231;
{
{ /* Inline model#MSignature#mparameters (var_msig) on <var_msig:MSignature> */
var234 = var_msig->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msig:MSignature> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
var235 = array__Array___91d_93d(var232, var_i);
}
var_p = var235;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var238 = var_p->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var238 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
var_sub = var236;
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var241 = var_sp->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
var_sup = var239;
{
var242 = model__MType__is_subtype(var_sub, var_mmodule, var_anchor, var_sup);
}
var243 = !var242;
if (var243){
if (varonce244) {
var245 = varonce244;
} else {
var246 = "Error: Cannot do an implicit constructor call to ";
var247 = 49;
var248 = string__NativeString__to_s_with_length(var246, var247);
var245 = var248;
varonce244 = var245;
}
if (varonce249) {
var250 = varonce249;
} else {
var251 = ". Expected argument #";
var252 = 21;
var253 = string__NativeString__to_s_with_length(var251, var252);
var250 = var253;
varonce249 = var250;
}
if (varonce254) {
var255 = varonce254;
} else {
var256 = " of type ";
var257 = 9;
var258 = string__NativeString__to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var261 = var_sp->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
if (varonce262) {
var263 = varonce262;
} else {
var264 = ", got implicit argument ";
var265 = 24;
var266 = string__NativeString__to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
{
{ /* Inline model#MParameter#name (var_p) on <var_p:MParameter> */
var269 = var_p->attrs[COLOR_model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
show_backtrace(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
if (varonce270) {
var271 = varonce270;
} else {
var272 = " of type ";
var273 = 9;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var277 = var_p->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
if (varonce278) {
var279 = varonce278;
} else {
var280 = ".";
var281 = 1;
var282 = string__NativeString__to_s_with_length(var280, var281);
var279 = var282;
varonce278 = var279;
}
var283 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var283 = array_instance Array[Object] */
var284 = 12;
var285 = NEW_array__NativeArray(var284, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var285)->values[0] = (val*) var245;
((struct instance_array__NativeArray*)var285)->values[1] = (val*) var_auto_super_init_def;
((struct instance_array__NativeArray*)var285)->values[2] = (val*) var_supermsig;
((struct instance_array__NativeArray*)var285)->values[3] = (val*) var250;
var286 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var285)->values[4] = (val*) var286;
((struct instance_array__NativeArray*)var285)->values[5] = (val*) var255;
((struct instance_array__NativeArray*)var285)->values[6] = (val*) var259;
((struct instance_array__NativeArray*)var285)->values[7] = (val*) var263;
((struct instance_array__NativeArray*)var285)->values[8] = (val*) var267;
((struct instance_array__NativeArray*)var285)->values[9] = (val*) var271;
((struct instance_array__NativeArray*)var285)->values[10] = (val*) var275;
((struct instance_array__NativeArray*)var285)->values[11] = (val*) var279;
{
((void (*)(val*, val*, long))(var283->class->vft[COLOR_array__Array__with_native]))(var283, var285, var284) /* with_native on <var283:Array[Object]>*/;
}
}
{
var287 = ((val* (*)(val*))(var283->class->vft[COLOR_string__Object__to_s]))(var283) /* to_s on <var283:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var287); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label288;
} else {
}
var289 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var289) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var289:Int> isa OTHER */
/* <var289:Int> isa OTHER */
var292 = 1; /* easy <var289:Int> isa OTHER*/
if (unlikely(!var292)) {
var_class_name295 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name295);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var296 = var_i + var289;
var290 = var296;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
}
var_i = var290;
CONTINUE_label288: (void)0;
{
array__ArrayIterator__next(var229); /* Direct call array#ArrayIterator#next on <var229:ArrayIterator[nullable Object]>*/
}
}
BREAK_label288: (void)0;
CONTINUE_label224: (void)0;
{
array__ArrayIterator__next(var175); /* Direct call array#ArrayIterator#next on <var175:ArrayIterator[nullable Object]>*/
}
}
BREAK_label224: (void)0;
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits= (self,var_auto_super_inits) on <self:AMethPropdef> */
self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val = var_auto_super_inits; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL297:(void)0;
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
val* var3 /* : MMethod */;
val* var5 /* : MMethod */;
val* var_mproperty /* var mproperty: MMethod */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 149);
show_backtrace(1);
} else {
{ /* Inline typing#CallSite#mproperty (var) on <var:nullable CallSite> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var5 = var->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var:nullable CallSite> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mproperty = var3;
var6 = NULL;
{
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,var6) on <var_mproperty:MMethod> */
var_other = var6;
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:MMethod> */
var12 = var_mproperty == var_other;
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
{ /* Inline model#MMethod#is_init (var_mproperty) on <var_mproperty:MMethod> */
var15 = var_mproperty->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var_mproperty:MMethod> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
var16 = 1;
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (var_v,var16) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].s = var16; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
RET_LABEL17:(void)0;
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
short int var /* : Bool */;
var_v = p0;
var = 1;
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (var_v,var) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].s = var; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
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
