#include "nitc__auto_super_init.sep.0.h"
/* method auto_super_init$ToolContext$auto_super_init_phase for (self: ToolContext): Phase */
val* nitc__auto_super_init___ToolContext___auto_super_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__auto_super_init, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init$AutoSuperInitPhase$process_npropdef for (self: AutoSuperInitPhase, APropdef) */
void nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitPhase___nitc__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : ModelBuilder */;
var_npropdef = p0;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline phase$Phase$toolcontext (self) on <self:AutoSuperInitPhase> */
var3 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:AutoSuperInitPhase> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__modelbuilder_base___ToolContext___modelbuilder(var1);
}
{
nitc__auto_super_init___AMethPropdef___do_auto_super_init(var_npropdef, var4); /* Direct call auto_super_init$AMethPropdef$do_auto_super_init on <var_npropdef:APropdef(AMethPropdef)>*/
}
} else {
}
RET_LABEL:;
}
/* method auto_super_init$AutoSuperInitVisitor$visit for (self: AutoSuperInitVisitor, ANode) */
void nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__auto_super_init__ANode__accept_auto_super_init]))(var_n, self); /* accept_auto_super_init on <var_n:ANode>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method auto_super_init$AutoSuperInitVisitor$has_explicit_super_init for (self: AutoSuperInitVisitor): nullable ANode */
val* nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init$AutoSuperInitVisitor$has_explicit_super_init= for (self: AutoSuperInitVisitor, nullable ANode) */
void nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = p0; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init$AutoSuperInitVisitor$is_broken for (self: AutoSuperInitVisitor): Bool */
short int nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___is_broken(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init$AutoSuperInitVisitor$is_broken= for (self: AutoSuperInitVisitor, Bool) */
void nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___is_broken_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___is_broken].s = p0; /* _is_broken on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init$AMethPropdef$auto_super_inits for (self: AMethPropdef): nullable Array[CallSite] */
val* nitc__auto_super_init___AMethPropdef___auto_super_inits(val* self) {
val* var /* : nullable Array[CallSite] */;
val* var1 /* : nullable Array[CallSite] */;
var1 = self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init$AMethPropdef$auto_super_inits= for (self: AMethPropdef, nullable Array[CallSite]) */
void nitc__auto_super_init___AMethPropdef___auto_super_inits_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val = p0; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init$AMethPropdef$auto_super_call for (self: AMethPropdef): Bool */
short int nitc__auto_super_init___AMethPropdef___auto_super_call(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init$AMethPropdef$auto_super_call= for (self: AMethPropdef, Bool) */
void nitc__auto_super_init___AMethPropdef___auto_super_call_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call].s = p0; /* _auto_super_call on <self:AMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init$AMethPropdef$do_auto_super_init for (self: AMethPropdef, ModelBuilder) */
void nitc__auto_super_init___AMethPropdef___do_auto_super_init(val* self, val* p0) {
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
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable MPropDef */;
val* var19 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_27 /* var : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : MClassDef */;
val* var33 /* : MClassDef */;
val* var34 /* : MModule */;
val* var36 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var37 /* : MClassType */;
val* var39 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var40 /* : MClass */;
val* var42 /* : MClass */;
val* var43 /* : MClassType */;
val* var45 /* : MClassType */;
val* var_recvtype /* var recvtype: MClassType */;
static val* varonce;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Bool */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable AAnnotation */;
val* var_nosuper /* var nosuper: nullable AAnnotation */;
short int var54 /* : Bool */;
val* var55 /* : MProperty */;
val* var57 /* : MProperty */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var_62 /* var : Bool */;
val* var63 /* : MProperty */;
val* var65 /* : MProperty */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var_other72 /* var other: nullable Object */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
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
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Bool */;
val* var113 /* : nullable Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
val* var126 /* : ToolContext */;
val* var128 /* : ToolContext */;
val* var130 /* : NativeArray[String] */;
static val* varonce129;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Bool */;
val* var138 /* : nullable Bool */;
val* var139 /* : String */;
val* var140 /* : String */;
val* var141 /* : Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: Array[CallSite] */;
val* var142 /* : nullable MMethod */;
val* var144 /* : nullable MMethod */;
val* var_the_root_init_mmethod /* var the_root_init_mmethod: nullable MMethod */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var_151 /* var : Bool */;
short int var152 /* : Bool */;
val* var153 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
short int var154 /* : Bool */;
val* var156 /* : nullable Object */;
val* var_candidatedef /* var candidatedef: MMethodDef */;
long var157 /* : Int */;
long var159 /* : Int */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name165;
short int var166 /* : Bool */;
val* var167 /* : nullable Object */;
val* var_cd2 /* var cd2: MMethodDef */;
val* var169 /* : NativeArray[String] */;
static val* varonce168;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : CString */;
val* var173 /* : String */;
val* var174 /* : nullable Int */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Bool */;
val* var177 /* : nullable Bool */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Bool */;
val* var185 /* : nullable Bool */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : CString */;
val* var189 /* : String */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Int */;
val* var192 /* : nullable Bool */;
val* var193 /* : nullable Bool */;
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
val* var210 /* : String */;
val* var211 /* : Array[MProperty] */;
val* var213 /* : Array[MProperty] */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : CString */;
val* var217 /* : String */;
val* var218 /* : nullable Int */;
val* var219 /* : nullable Int */;
val* var220 /* : nullable Bool */;
val* var221 /* : nullable Bool */;
val* var222 /* : String */;
val* var223 /* : String */;
val* var224 /* : Array[MProperty] */;
val* var226 /* : Array[MProperty] */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : CString */;
val* var230 /* : String */;
val* var231 /* : nullable Int */;
val* var232 /* : nullable Int */;
val* var233 /* : nullable Bool */;
val* var234 /* : nullable Bool */;
val* var235 /* : String */;
val* var236 /* : String */;
val* var238 /* : nullable MSignature */;
val* var239 /* : nullable MSignature */;
val* var241 /* : nullable MSignature */;
val* var242 /* : nullable MSignature */;
val* var244 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var245 /* : MSignature */;
long var246 /* : Int */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
int cltype250;
int idtype251;
const char* var_class_name252;
short int var253 /* : Bool */;
val* var255 /* : NativeArray[String] */;
static val* varonce254;
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
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : CString */;
val* var275 /* : String */;
val* var276 /* : nullable Int */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Bool */;
val* var279 /* : nullable Bool */;
val* var280 /* : String */;
val* var281 /* : String */;
long var282 /* : Int */;
val* var283 /* : String */;
val* var284 /* : String */;
val* var286 /* : CallSite */;
val* var287 /* : Location */;
val* var_callsite /* var callsite: CallSite */;
val* var288 /* : ToolContext */;
val* var290 /* : ToolContext */;
val* var292 /* : NativeArray[String] */;
static val* varonce291;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : CString */;
val* var296 /* : String */;
val* var297 /* : nullable Int */;
val* var298 /* : nullable Int */;
val* var299 /* : nullable Bool */;
val* var300 /* : nullable Bool */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : CString */;
val* var304 /* : String */;
val* var305 /* : nullable Int */;
val* var306 /* : nullable Int */;
val* var307 /* : nullable Bool */;
val* var308 /* : nullable Bool */;
val* var309 /* : String */;
val* var310 /* : String */;
val* var311 /* : String */;
short int var312 /* : Bool */;
val* var314 /* : NativeArray[String] */;
static val* varonce313;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : CString */;
val* var318 /* : String */;
val* var319 /* : nullable Int */;
val* var320 /* : nullable Int */;
val* var321 /* : nullable Bool */;
val* var322 /* : nullable Bool */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : CString */;
val* var326 /* : String */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Int */;
val* var329 /* : nullable Bool */;
val* var330 /* : nullable Bool */;
val* var331 /* : String */;
val* var332 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes$ANode$parent (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable ANode> isa AClassdef */
cltype = type_nitc__AClassdef.color;
idtype = type_nitc__AClassdef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__auto_super_init, 59);
fatal_exit(1);
}
{
{ /* Inline modelize_class$AClassdef$mclassdef (var) on <var:nullable ANode(AClassdef)> */
var6 = var->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var:nullable ANode(AClassdef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mclassdef = var4;
if (var_mclassdef == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var13 = var_mclassdef == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
var_ = var8;
if (var8){
var7 = var_;
} else {
{
{ /* Inline model_base$MEntity$is_broken (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var16 = var_mclassdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mclassdef:nullable MClassDef(MClassDef)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var7 = var14;
}
if (var7){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var19 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mpropdef = var17;
if (var_mpropdef == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var26 = var_mpropdef == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
var_27 = var21;
if (var21){
var20 = var_27;
} else {
{
{ /* Inline model_base$MEntity$is_broken (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var30 = var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var20 = var28;
}
if (var20){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var33 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var31) on <var31:MClassDef> */
var36 = var31->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var31:MClassDef> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_mmodule = var34;
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var39 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_anchor = var37;
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var42 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var40) on <var40:MClass> */
var45 = var40->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var40:MClass> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_recvtype = var43;
if (likely(varonce!=NULL)) {
var46 = varonce;
} else {
var47 = "nosuper";
var49 = (val*)(7l<<2|1);
var50 = (val*)(7l<<2|1);
var51 = (val*)((long)(0)<<2|3);
var52 = (val*)((long)(0)<<2|3);
var48 = core__flat___CString___to_s_unsafe(var47, var49, var50, var51, var52);
var46 = var48;
varonce = var46;
}
{
var53 = nitc__annotation___Prod___get_single_annotation(self, var46, var_modelbuilder);
}
var_nosuper = var53;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var57 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var55) on <var55:MProperty(MMethod)> */
var60 = var55->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var55:MProperty(MMethod)> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = !var58;
var_62 = var61;
if (var61){
var54 = var_62;
} else {
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var65 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline model$MMethod$is_new (var63) on <var63:MProperty(MMethod)> */
var68 = var63->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var63:MProperty(MMethod)> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var54 = var66;
}
if (var54){
if (var_nosuper == NULL) {
var69 = 0; /* is null */
} else {
var69 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nosuper,((val*)NULL)) on <var_nosuper:nullable AAnnotation> */
var_other72 = ((val*)NULL);
{
var73 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nosuper, var_other72); /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/
}
var74 = !var73;
var70 = var74;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Error: `nosuper` only allowed in `init`.";
var79 = (val*)(40l<<2|1);
var80 = (val*)(40l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nosuper, var76); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_block (self) on <self:AMethPropdef> */
var85 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
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
{ /* Inline kernel$Object$!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other72 = ((val*)NULL);
{
var89 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nblock, var_other72); /* == on <var_nblock:nullable AExpr(AExpr)>*/
}
var90 = !var89;
var87 = var90;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
if (var86){
var91 = NEW_nitc__auto_super_init__AutoSuperInitVisitor(&type_nitc__auto_super_init__AutoSuperInitVisitor);
{
{ /* Inline kernel$Object$init (var91) on <var91:AutoSuperInitVisitor> */
RET_LABEL92:(void)0;
}
}
var_v = var91;
{
nitc___nitc__Visitor___enter_visit(var_v, var_nblock); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:AutoSuperInitVisitor>*/
}
{
{ /* Inline auto_super_init$AutoSuperInitVisitor$has_explicit_super_init (var_v) on <var_v:AutoSuperInitVisitor> */
var95 = var_v->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
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
{ /* Inline kernel$Object$!= (var_anode,((val*)NULL)) on <var_anode:nullable ANode> */
var_other72 = ((val*)NULL);
{
var99 = ((short int(*)(val* self, val* p0))(var_anode->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anode, var_other72); /* == on <var_anode:nullable ANode(ANode)>*/
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
{ /* Inline kernel$Object$!= (var_nosuper,((val*)NULL)) on <var_nosuper:nullable AAnnotation> */
var_other72 = ((val*)NULL);
{
var104 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nosuper, var_other72); /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/
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
var110 = (val*)(77l<<2|1);
var111 = (val*)(77l<<2|1);
var112 = (val*)((long)(0)<<2|3);
var113 = (val*)((long)(0)<<2|3);
var109 = core__flat___CString___to_s_unsafe(var108, var110, var111, var112, var113);
var107 = var109;
varonce106 = var107;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_anode, var107); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline auto_super_init$AutoSuperInitVisitor$is_broken (var_v) on <var_v:AutoSuperInitVisitor> */
var116 = var_v->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <var_v:AutoSuperInitVisitor> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
if (var114){
goto RET_LABEL;
} else {
}
} else {
}
if (var_nosuper == NULL) {
var117 = 0; /* is null */
} else {
var117 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nosuper,((val*)NULL)) on <var_nosuper:nullable AAnnotation> */
var_other72 = ((val*)NULL);
{
var120 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nosuper, var_other72); /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/
}
var121 = !var120;
var118 = var121;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
var117 = var118;
}
if (var117){
goto RET_LABEL;
} else {
}
{
var122 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var123 = !var122;
if (var123){
{
{ /* Inline auto_super_init$AMethPropdef$auto_super_call= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call].s = 1; /* _auto_super_call on <self:AMethPropdef> */
RET_LABEL124:(void)0;
}
}
{
{ /* Inline modelize_property$MPropDef$has_supercall= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 1; /* _has_supercall on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL125:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var128 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var128 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
if (unlikely(varonce129==NULL)) {
var130 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "Auto-super call for ";
var135 = (val*)(20l<<2|1);
var136 = (val*)(20l<<2|1);
var137 = (val*)((long)(0)<<2|3);
var138 = (val*)((long)(0)<<2|3);
var134 = core__flat___CString___to_s_unsafe(var133, var135, var136, var137, var138);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var130)->values[0]=var132;
} else {
var130 = varonce129;
varonce129 = NULL;
}
{
var139 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var130)->values[1]=var139;
{
var140 = ((val*(*)(val* self))(var130->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var130); /* native_to_s on <var130:NativeArray[String]>*/
}
varonce129 = var130;
{
nitc___nitc__ToolContext___info(var126, var140, 4l); /* Direct call toolcontext$ToolContext$info on <var126:ToolContext>*/
}
goto RET_LABEL;
} else {
}
var141 = NEW_core__Array(&type_core__Array__nitc__CallSite);
{
core___core__Array___core__kernel__Object__init(var141); /* Direct call array$Array$init on <var141:Array[CallSite]>*/
}
var_auto_super_inits = var141;
{
{ /* Inline modelize_property$ModelBuilder$the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var144 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var142 = var144;
RET_LABEL143:(void)0;
}
}
var_the_root_init_mmethod = var142;
if (var_the_root_init_mmethod == NULL) {
var146 = 0; /* is null */
} else {
var146 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_the_root_init_mmethod,((val*)NULL)) on <var_the_root_init_mmethod:nullable MMethod> */
var_other72 = ((val*)NULL);
{
var149 = ((short int(*)(val* self, val* p0))(var_the_root_init_mmethod->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_the_root_init_mmethod, var_other72); /* == on <var_the_root_init_mmethod:nullable MMethod(MMethod)>*/
}
var150 = !var149;
var147 = var150;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
var_151 = var146;
if (var146){
{
var152 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_auto_super_inits);
}
var145 = var152;
} else {
var145 = var_151;
}
if (var145){
{
var153 = nitc___nitc__MProperty___lookup_definitions(var_the_root_init_mmethod, var_mmodule, var_anchor);
}
var_candidatedefs = var153;
{
var154 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_candidatedefs);
}
if (var154){
{
{ /* Inline modelbuilder_base$ANode$is_broken= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <self:AMethPropdef> */
RET_LABEL155:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var156 = core___core__SequenceRead___Collection__first(var_candidatedefs);
}
var_candidatedef = var156;
{
{ /* Inline array$AbstractArrayRead$length (var_candidatedefs) on <var_candidatedefs:Array[MMethodDef]> */
var159 = var_candidatedefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_candidatedefs:Array[MMethodDef]> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var157,1l) on <var157:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var162 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name165 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name165);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var166 = var157 > 1l;
var160 = var166;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
if (var160){
{
var167 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_candidatedefs, 1l);
}
var_cd2 = var167;
if (unlikely(varonce168==NULL)) {
var169 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "Error: cannot do an implicit constructor call to conflicting inherited inits `";
var174 = (val*)(78l<<2|1);
var175 = (val*)(78l<<2|1);
var176 = (val*)((long)(0)<<2|3);
var177 = (val*)((long)(0)<<2|3);
var173 = core__flat___CString___to_s_unsafe(var172, var174, var175, var176, var177);
var171 = var173;
varonce170 = var171;
}
((struct instance_core__NativeArray*)var169)->values[0]=var171;
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "(";
var182 = (val*)(1l<<2|1);
var183 = (val*)(1l<<2|1);
var184 = (val*)((long)(0)<<2|3);
var185 = (val*)((long)(0)<<2|3);
var181 = core__flat___CString___to_s_unsafe(var180, var182, var183, var184, var185);
var179 = var181;
varonce178 = var179;
}
((struct instance_core__NativeArray*)var169)->values[2]=var179;
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "`) and `";
var190 = (val*)(8l<<2|1);
var191 = (val*)(8l<<2|1);
var192 = (val*)((long)(0)<<2|3);
var193 = (val*)((long)(0)<<2|3);
var189 = core__flat___CString___to_s_unsafe(var188, var190, var191, var192, var193);
var187 = var189;
varonce186 = var187;
}
((struct instance_core__NativeArray*)var169)->values[4]=var187;
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "(";
var198 = (val*)(1l<<2|1);
var199 = (val*)(1l<<2|1);
var200 = (val*)((long)(0)<<2|3);
var201 = (val*)((long)(0)<<2|3);
var197 = core__flat___CString___to_s_unsafe(var196, var198, var199, var200, var201);
var195 = var197;
varonce194 = var195;
}
((struct instance_core__NativeArray*)var169)->values[6]=var195;
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "`). NOTE: Do not mix old-style and new-style init!";
var206 = (val*)(50l<<2|1);
var207 = (val*)(50l<<2|1);
var208 = (val*)((long)(0)<<2|3);
var209 = (val*)((long)(0)<<2|3);
var205 = core__flat___CString___to_s_unsafe(var204, var206, var207, var208, var209);
var203 = var205;
varonce202 = var203;
}
((struct instance_core__NativeArray*)var169)->values[8]=var203;
} else {
var169 = varonce168;
varonce168 = NULL;
}
{
var210 = ((val*(*)(val* self))(var_cd2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cd2); /* to_s on <var_cd2:MMethodDef>*/
}
((struct instance_core__NativeArray*)var169)->values[1]=var210;
{
{ /* Inline model$MMethodDef$initializers (var_cd2) on <var_cd2:MMethodDef> */
var213 = var_cd2->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_cd2:MMethodDef> */
if (unlikely(var213 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = ", ";
var218 = (val*)(2l<<2|1);
var219 = (val*)(2l<<2|1);
var220 = (val*)((long)(0)<<2|3);
var221 = (val*)((long)(0)<<2|3);
var217 = core__flat___CString___to_s_unsafe(var216, var218, var219, var220, var221);
var215 = var217;
varonce214 = var215;
}
{
var222 = core__abstract_text___Collection___join(var211, var215, ((val*)NULL));
}
((struct instance_core__NativeArray*)var169)->values[3]=var222;
{
var223 = ((val*(*)(val* self))(var_candidatedef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_candidatedef); /* to_s on <var_candidatedef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var169)->values[5]=var223;
{
{ /* Inline model$MMethodDef$initializers (var_candidatedef) on <var_candidatedef:MMethodDef> */
var226 = var_candidatedef->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef:MMethodDef> */
if (unlikely(var226 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var224 = var226;
RET_LABEL225:(void)0;
}
}
if (likely(varonce227!=NULL)) {
var228 = varonce227;
} else {
var229 = ", ";
var231 = (val*)(2l<<2|1);
var232 = (val*)(2l<<2|1);
var233 = (val*)((long)(0)<<2|3);
var234 = (val*)((long)(0)<<2|3);
var230 = core__flat___CString___to_s_unsafe(var229, var231, var232, var233, var234);
var228 = var230;
varonce227 = var228;
}
{
var235 = core__abstract_text___Collection___join(var224, var228, ((val*)NULL));
}
((struct instance_core__NativeArray*)var169)->values[7]=var235;
{
var236 = ((val*(*)(val* self))(var169->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var169); /* native_to_s on <var169:NativeArray[String]>*/
}
varonce168 = var169;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var236); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base$ANode$is_broken= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <self:AMethPropdef> */
RET_LABEL237:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MMethodDef$new_msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var241 = var_candidatedef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_candidatedef:MMethodDef> */
var239 = var241;
RET_LABEL240:(void)0;
}
}
if (var239!=NULL) {
var238 = var239;
} else {
{
{ /* Inline model$MMethodDef$msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var244 = var_candidatedef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_candidatedef:MMethodDef> */
var242 = var244;
RET_LABEL243:(void)0;
}
}
var238 = var242;
}
var_msignature = var238;
if (var_msignature == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__auto_super_init, 125);
fatal_exit(1);
} else {
var245 = nitc___nitc__MSignature___MType__resolve_for(var_msignature, var_recvtype, var_anchor, var_mmodule, 1);
}
var_msignature = var245;
{
var246 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$> (var246,0l) on <var246:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var249 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var249)) {
var_class_name252 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name252);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var253 = var246 > 0l;
var247 = var253;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
}
if (var247){
if (unlikely(varonce254==NULL)) {
var255 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = "Error: cannot do an implicit constructor call to `";
var260 = (val*)(50l<<2|1);
var261 = (val*)(50l<<2|1);
var262 = (val*)((long)(0)<<2|3);
var263 = (val*)((long)(0)<<2|3);
var259 = core__flat___CString___to_s_unsafe(var258, var260, var261, var262, var263);
var257 = var259;
varonce256 = var257;
}
((struct instance_core__NativeArray*)var255)->values[0]=var257;
if (likely(varonce264!=NULL)) {
var265 = varonce264;
} else {
var266 = "`. Expected at least `";
var268 = (val*)(22l<<2|1);
var269 = (val*)(22l<<2|1);
var270 = (val*)((long)(0)<<2|3);
var271 = (val*)((long)(0)<<2|3);
var267 = core__flat___CString___to_s_unsafe(var266, var268, var269, var270, var271);
var265 = var267;
varonce264 = var265;
}
((struct instance_core__NativeArray*)var255)->values[3]=var265;
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "` arguments.";
var276 = (val*)(12l<<2|1);
var277 = (val*)(12l<<2|1);
var278 = (val*)((long)(0)<<2|3);
var279 = (val*)((long)(0)<<2|3);
var275 = core__flat___CString___to_s_unsafe(var274, var276, var277, var278, var279);
var273 = var275;
varonce272 = var273;
}
((struct instance_core__NativeArray*)var255)->values[5]=var273;
} else {
var255 = varonce254;
varonce254 = NULL;
}
{
var280 = ((val*(*)(val* self))(var_candidatedef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_candidatedef); /* to_s on <var_candidatedef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var255)->values[1]=var280;
{
var281 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_core__NativeArray*)var255)->values[2]=var281;
{
var282 = nitc___nitc__MSignature___arity(var_msignature);
}
var283 = core__flat___Int___core__abstract_text__Object__to_s(var282);
((struct instance_core__NativeArray*)var255)->values[4]=var283;
{
var284 = ((val*(*)(val* self))(var255->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var255); /* native_to_s on <var255:NativeArray[String]>*/
}
varonce254 = var255;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var284); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base$ANode$is_broken= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <self:AMethPropdef> */
RET_LABEL285:(void)0;
}
}
goto RET_LABEL;
} else {
}
var286 = NEW_nitc__CallSite(&type_nitc__CallSite);
{
var287 = nitc___nitc__AMethPropdef___ANode__hot_location(self);
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__typing__CallSite__location_61d]))(var286, var287); /* location= on <var286:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__typing__CallSite__recv_61d]))(var286, var_recvtype); /* recv= on <var286:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__typing__CallSite__mmodule_61d]))(var286, var_mmodule); /* mmodule= on <var286:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__typing__CallSite__anchor_61d]))(var286, var_anchor); /* anchor= on <var286:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var286->class->vft[COLOR_nitc__typing__CallSite__recv_is_self_61d]))(var286, 1); /* recv_is_self= on <var286:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__typing__CallSite__mproperty_61d]))(var286, var_the_root_init_mmethod); /* mproperty= on <var286:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__typing__CallSite__mpropdef_61d]))(var286, var_candidatedef); /* mpropdef= on <var286:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var286->class->vft[COLOR_nitc__typing__CallSite__msignature_61d]))(var286, var_msignature); /* msignature= on <var286:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var286->class->vft[COLOR_nitc__typing__CallSite__erasure_cast_61d]))(var286, 0); /* erasure_cast= on <var286:CallSite>*/
}
{
((void(*)(val* self))(var286->class->vft[COLOR_core__kernel__Object__init]))(var286); /* init on <var286:CallSite>*/
}
var_callsite = var286;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_auto_super_inits, var_callsite); /* Direct call array$Array$add on <var_auto_super_inits:Array[CallSite]>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var290 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var290 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var288 = var290;
RET_LABEL289:(void)0;
}
}
if (unlikely(varonce291==NULL)) {
var292 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = "Auto-super init for ";
var297 = (val*)(20l<<2|1);
var298 = (val*)(20l<<2|1);
var299 = (val*)((long)(0)<<2|3);
var300 = (val*)((long)(0)<<2|3);
var296 = core__flat___CString___to_s_unsafe(var295, var297, var298, var299, var300);
var294 = var296;
varonce293 = var294;
}
((struct instance_core__NativeArray*)var292)->values[0]=var294;
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = " to ";
var305 = (val*)(4l<<2|1);
var306 = (val*)(4l<<2|1);
var307 = (val*)((long)(0)<<2|3);
var308 = (val*)((long)(0)<<2|3);
var304 = core__flat___CString___to_s_unsafe(var303, var305, var306, var307, var308);
var302 = var304;
varonce301 = var302;
}
((struct instance_core__NativeArray*)var292)->values[2]=var302;
} else {
var292 = varonce291;
varonce291 = NULL;
}
{
var309 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var292)->values[1]=var309;
{
var310 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_the_root_init_mmethod);
}
((struct instance_core__NativeArray*)var292)->values[3]=var310;
{
var311 = ((val*(*)(val* self))(var292->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var292); /* native_to_s on <var292:NativeArray[String]>*/
}
varonce291 = var292;
{
nitc___nitc__ToolContext___info(var288, var311, 4l); /* Direct call toolcontext$ToolContext$info on <var288:ToolContext>*/
}
} else {
}
{
var312 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_auto_super_inits);
}
if (var312){
if (unlikely(varonce313==NULL)) {
var314 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce315!=NULL)) {
var316 = varonce315;
} else {
var317 = "Error: no constructors to call implicitly in `";
var319 = (val*)(46l<<2|1);
var320 = (val*)(46l<<2|1);
var321 = (val*)((long)(0)<<2|3);
var322 = (val*)((long)(0)<<2|3);
var318 = core__flat___CString___to_s_unsafe(var317, var319, var320, var321, var322);
var316 = var318;
varonce315 = var316;
}
((struct instance_core__NativeArray*)var314)->values[0]=var316;
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = "`. Call one explicitly.";
var327 = (val*)(23l<<2|1);
var328 = (val*)(23l<<2|1);
var329 = (val*)((long)(0)<<2|3);
var330 = (val*)((long)(0)<<2|3);
var326 = core__flat___CString___to_s_unsafe(var325, var327, var328, var329, var330);
var324 = var326;
varonce323 = var324;
}
((struct instance_core__NativeArray*)var314)->values[2]=var324;
} else {
var314 = varonce313;
varonce313 = NULL;
}
{
var331 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var314)->values[1]=var331;
{
var332 = ((val*(*)(val* self))(var314->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var314); /* native_to_s on <var314:NativeArray[String]>*/
}
varonce313 = var314;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var332); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline auto_super_init$AMethPropdef$auto_super_inits= (self,var_auto_super_inits) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val = var_auto_super_inits; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL333:(void)0;
}
}
RET_LABEL:;
}
/* method auto_super_init$ANode$accept_auto_super_init for (self: ANode, AutoSuperInitVisitor) */
void nitc__auto_super_init___ANode___accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method auto_super_init$ASendExpr$accept_auto_super_init for (self: ASendExpr, AutoSuperInitVisitor) */
void nitc__auto_super_init___ASendExpr___ANode__accept_auto_super_init(val* self, val* p0) {
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
{ /* Inline typing$ASendExpr$callsite (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
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
{ /* Inline kernel$Object$== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
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
{ /* Inline auto_super_init$AutoSuperInitVisitor$is_broken= (var_v,1) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___is_broken].s = 1; /* _is_broken on <var_v:AutoSuperInitVisitor> */
RET_LABEL9:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var12 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var10) on <var10:MMethod> */
var15 = var10->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var10:MMethod> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline auto_super_init$AutoSuperInitVisitor$has_explicit_super_init= (var_v,self) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = self; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method auto_super_init$ASuperExpr$accept_auto_super_init for (self: ASuperExpr, AutoSuperInitVisitor) */
void nitc__auto_super_init___ASuperExpr___ANode__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
var_v = p0;
{
{ /* Inline auto_super_init$AutoSuperInitVisitor$has_explicit_super_init= (var_v,self) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = self; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
