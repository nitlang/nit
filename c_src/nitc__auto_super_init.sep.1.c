#include "nitc__auto_super_init.sep.0.h"
/* method auto_super_init#ToolContext#auto_super_init_phase for (self: ToolContext): Phase */
val* nitc__auto_super_init___ToolContext___auto_super_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__auto_super_init, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitPhase#process_npropdef for (self: AutoSuperInitPhase, APropdef) */
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
{ /* Inline phase#Phase#toolcontext (self) on <self:AutoSuperInitPhase> */
var3 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:AutoSuperInitPhase> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
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
nitc__auto_super_init___AMethPropdef___do_auto_super_init(var_npropdef, var4); /* Direct call auto_super_init#AMethPropdef#do_auto_super_init on <var_npropdef:APropdef(AMethPropdef)>*/
}
} else {
}
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#visit for (self: AutoSuperInitVisitor, ANode) */
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
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init for (self: AutoSuperInitVisitor): nullable ANode */
val* nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= for (self: AutoSuperInitVisitor, nullable ANode) */
void nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = p0; /* _has_explicit_super_init on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#is_broken for (self: AutoSuperInitVisitor): Bool */
short int nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___is_broken(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#is_broken= for (self: AutoSuperInitVisitor, Bool) */
void nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___is_broken_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___is_broken].s = p0; /* _is_broken on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#auto_super_inits for (self: AMethPropdef): nullable Array[CallSite] */
val* nitc__auto_super_init___AMethPropdef___auto_super_inits(val* self) {
val* var /* : nullable Array[CallSite] */;
val* var1 /* : nullable Array[CallSite] */;
var1 = self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AMethPropdef#auto_super_inits= for (self: AMethPropdef, nullable Array[CallSite]) */
void nitc__auto_super_init___AMethPropdef___auto_super_inits_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val = p0; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#auto_super_call for (self: AMethPropdef): Bool */
short int nitc__auto_super_init___AMethPropdef___auto_super_call(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AMethPropdef#auto_super_call= for (self: AMethPropdef, Bool) */
void nitc__auto_super_init___AMethPropdef___auto_super_call_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call].s = p0; /* _auto_super_call on <self:AMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init#AMethPropdef#do_auto_super_init for (self: AMethPropdef, ModelBuilder) */
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
char* var47 /* : NativeString */;
val* var48 /* : String */;
val* var49 /* : nullable AAnnotation */;
val* var_nosuper /* var nosuper: nullable AAnnotation */;
short int var50 /* : Bool */;
val* var51 /* : MProperty */;
val* var53 /* : MProperty */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var_58 /* var : Bool */;
val* var59 /* : MProperty */;
val* var61 /* : MProperty */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var_other68 /* var other: nullable Object */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : String */;
val* var75 /* : nullable AExpr */;
val* var77 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
val* var83 /* : AutoSuperInitVisitor */;
val* var_v /* var v: AutoSuperInitVisitor */;
val* var85 /* : nullable ANode */;
val* var87 /* : nullable ANode */;
val* var_anode /* var anode: nullable ANode */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : String */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
val* var114 /* : ToolContext */;
val* var116 /* : ToolContext */;
val* var118 /* : NativeArray[String] */;
static val* varonce117;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: Array[CallSite] */;
val* var126 /* : nullable MMethod */;
val* var128 /* : nullable MMethod */;
val* var_the_root_init_mmethod /* var the_root_init_mmethod: nullable MMethod */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
short int var_135 /* var : Bool */;
short int var136 /* : Bool */;
val* var137 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
short int var138 /* : Bool */;
val* var140 /* : nullable Object */;
val* var_candidatedef /* var candidatedef: MMethodDef */;
long var141 /* : Int */;
long var143 /* : Int */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
const char* var_class_name149;
short int var150 /* : Bool */;
val* var151 /* : nullable Object */;
val* var_cd2 /* var cd2: MMethodDef */;
val* var153 /* : NativeArray[String] */;
static val* varonce152;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
val* var169 /* : String */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : String */;
val* var174 /* : String */;
val* var175 /* : Array[MProperty] */;
val* var177 /* : Array[MProperty] */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
val* var181 /* : String */;
val* var182 /* : String */;
val* var183 /* : String */;
val* var184 /* : Array[MProperty] */;
val* var186 /* : Array[MProperty] */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : String */;
val* var191 /* : String */;
val* var192 /* : String */;
val* var194 /* : nullable MSignature */;
val* var195 /* : nullable MSignature */;
val* var197 /* : nullable MSignature */;
val* var198 /* : nullable MSignature */;
val* var200 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var201 /* : MSignature */;
long var202 /* : Int */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
int cltype206;
int idtype207;
const char* var_class_name208;
short int var209 /* : Bool */;
val* var211 /* : NativeArray[String] */;
static val* varonce210;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
val* var219 /* : String */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
val* var223 /* : String */;
val* var224 /* : String */;
val* var225 /* : String */;
long var226 /* : Int */;
val* var227 /* : String */;
val* var228 /* : String */;
val* var230 /* : CallSite */;
val* var231 /* : Location */;
val* var_callsite /* var callsite: CallSite */;
val* var232 /* : ToolContext */;
val* var234 /* : ToolContext */;
val* var236 /* : NativeArray[String] */;
static val* varonce235;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
val* var240 /* : String */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
val* var244 /* : String */;
val* var245 /* : String */;
val* var246 /* : String */;
val* var247 /* : String */;
short int var248 /* : Bool */;
val* var250 /* : NativeArray[String] */;
static val* varonce249;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
val* var254 /* : String */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
val* var258 /* : String */;
val* var259 /* : String */;
val* var260 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AMethPropdef> */
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
{ /* Inline modelize_class#AClassdef#mclassdef (var) on <var:nullable ANode(AClassdef)> */
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
{ /* Inline kernel#Object#== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
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
{ /* Inline model_base#MEntity#is_broken (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
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
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
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
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
{ /* Inline model_base#MEntity#is_broken (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var33 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var31) on <var31:MClassDef> */
var36 = var31->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var31:MClassDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_mmodule = var34;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var39 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_anchor = var37;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var42 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var40) on <var40:MClass> */
var45 = var40->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var40:MClass> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
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
var48 = core__flat___NativeString___to_s_full(var47, 7l, 7l);
var46 = var48;
varonce = var46;
}
{
var49 = nitc__annotation___Prod___get_single_annotation(self, var46, var_modelbuilder);
}
var_nosuper = var49;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var53 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var51) on <var51:MProperty(MMethod)> */
var56 = var51->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var51:MProperty(MMethod)> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
var57 = !var54;
var_58 = var57;
if (var57){
var50 = var_58;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var61 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var59) on <var59:MProperty(MMethod)> */
var64 = var59->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var59:MProperty(MMethod)> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var50 = var62;
}
if (var50){
if (var_nosuper == NULL) {
var65 = 0; /* is null */
} else {
var65 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,((val*)NULL)) on <var_nosuper:nullable AAnnotation> */
var_other68 = ((val*)NULL);
{
var69 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nosuper, var_other68); /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/
}
var70 = !var69;
var66 = var70;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "Error: `nosuper` only allowed in `init`.";
var74 = core__flat___NativeString___to_s_full(var73, 40l, 40l);
var72 = var74;
varonce71 = var72;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nosuper, var72); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var77 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_nblock = var75;
if (var_nblock == NULL) {
var78 = 0; /* is null */
} else {
var78 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other68 = ((val*)NULL);
{
var81 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nblock, var_other68); /* == on <var_nblock:nullable AExpr(AExpr)>*/
}
var82 = !var81;
var79 = var82;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
var83 = NEW_nitc__auto_super_init__AutoSuperInitVisitor(&type_nitc__auto_super_init__AutoSuperInitVisitor);
{
{ /* Inline kernel#Object#init (var83) on <var83:AutoSuperInitVisitor> */
RET_LABEL84:(void)0;
}
}
var_v = var83;
{
nitc___nitc__Visitor___enter_visit(var_v, var_nblock); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:AutoSuperInitVisitor>*/
}
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init (var_v) on <var_v:AutoSuperInitVisitor> */
var87 = var_v->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_anode = var85;
if (var_anode == NULL) {
var88 = 0; /* is null */
} else {
var88 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anode,((val*)NULL)) on <var_anode:nullable ANode> */
var_other68 = ((val*)NULL);
{
var91 = ((short int(*)(val* self, val* p0))(var_anode->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anode, var_other68); /* == on <var_anode:nullable ANode(ANode)>*/
}
var92 = !var91;
var89 = var92;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var88 = var89;
}
if (var88){
if (var_nosuper == NULL) {
var93 = 0; /* is null */
} else {
var93 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,((val*)NULL)) on <var_nosuper:nullable AAnnotation> */
var_other68 = ((val*)NULL);
{
var96 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nosuper, var_other68); /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/
}
var97 = !var96;
var94 = var97;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
if (var93){
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "Error: method is annotated `nosuper` but a super-constructor call is present.";
var101 = core__flat___NativeString___to_s_full(var100, 77l, 77l);
var99 = var101;
varonce98 = var99;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_anode, var99); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#is_broken (var_v) on <var_v:AutoSuperInitVisitor> */
var104 = var_v->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___is_broken].s; /* _is_broken on <var_v:AutoSuperInitVisitor> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (var102){
goto RET_LABEL;
} else {
}
} else {
}
if (var_nosuper == NULL) {
var105 = 0; /* is null */
} else {
var105 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nosuper,((val*)NULL)) on <var_nosuper:nullable AAnnotation> */
var_other68 = ((val*)NULL);
{
var108 = ((short int(*)(val* self, val* p0))(var_nosuper->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nosuper, var_other68); /* == on <var_nosuper:nullable AAnnotation(AAnnotation)>*/
}
var109 = !var108;
var106 = var109;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
var105 = var106;
}
if (var105){
goto RET_LABEL;
} else {
}
{
var110 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var111 = !var110;
if (var111){
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call].s = 1; /* _auto_super_call on <self:AMethPropdef> */
RET_LABEL112:(void)0;
}
}
{
{ /* Inline modelize_property#MPropDef#has_supercall= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 1; /* _has_supercall on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL113:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var116 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
if (unlikely(varonce117==NULL)) {
var118 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "Auto-super call for ";
var122 = core__flat___NativeString___to_s_full(var121, 20l, 20l);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var118)->values[0]=var120;
} else {
var118 = varonce117;
varonce117 = NULL;
}
{
var123 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var118)->values[1]=var123;
{
var124 = ((val*(*)(val* self))(var118->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var118); /* native_to_s on <var118:NativeArray[String]>*/
}
varonce117 = var118;
{
nitc___nitc__ToolContext___info(var114, var124, 4l); /* Direct call toolcontext#ToolContext#info on <var114:ToolContext>*/
}
goto RET_LABEL;
} else {
}
var125 = NEW_core__Array(&type_core__Array__nitc__CallSite);
{
core___core__Array___core__kernel__Object__init(var125); /* Direct call array#Array#init on <var125:Array[CallSite]>*/
}
var_auto_super_inits = var125;
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var128 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var126 = var128;
RET_LABEL127:(void)0;
}
}
var_the_root_init_mmethod = var126;
if (var_the_root_init_mmethod == NULL) {
var130 = 0; /* is null */
} else {
var130 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_the_root_init_mmethod,((val*)NULL)) on <var_the_root_init_mmethod:nullable MMethod> */
var_other68 = ((val*)NULL);
{
var133 = ((short int(*)(val* self, val* p0))(var_the_root_init_mmethod->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_the_root_init_mmethod, var_other68); /* == on <var_the_root_init_mmethod:nullable MMethod(MMethod)>*/
}
var134 = !var133;
var131 = var134;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
var130 = var131;
}
var_135 = var130;
if (var130){
{
var136 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_auto_super_inits);
}
var129 = var136;
} else {
var129 = var_135;
}
if (var129){
{
var137 = nitc___nitc__MProperty___lookup_definitions(var_the_root_init_mmethod, var_mmodule, var_anchor);
}
var_candidatedefs = var137;
{
var138 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_candidatedefs);
}
if (var138){
{
{ /* Inline modelbuilder_base#ANode#is_broken= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <self:AMethPropdef> */
RET_LABEL139:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var140 = core___core__SequenceRead___Collection__first(var_candidatedefs);
}
var_candidatedef = var140;
{
{ /* Inline array#AbstractArrayRead#length (var_candidatedefs) on <var_candidatedefs:Array[MMethodDef]> */
var143 = var_candidatedefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_candidatedefs:Array[MMethodDef]> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var141,1l) on <var141:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var146 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var146)) {
var_class_name149 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name149);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var150 = var141 > 1l;
var144 = var150;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
if (var144){
{
var151 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_candidatedefs, 1l);
}
var_cd2 = var151;
if (unlikely(varonce152==NULL)) {
var153 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "Error: cannot do an implicit constructor call to conflicting inherited inits `";
var157 = core__flat___NativeString___to_s_full(var156, 78l, 78l);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var153)->values[0]=var155;
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "(";
var161 = core__flat___NativeString___to_s_full(var160, 1l, 1l);
var159 = var161;
varonce158 = var159;
}
((struct instance_core__NativeArray*)var153)->values[2]=var159;
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "`) and `";
var165 = core__flat___NativeString___to_s_full(var164, 8l, 8l);
var163 = var165;
varonce162 = var163;
}
((struct instance_core__NativeArray*)var153)->values[4]=var163;
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = "(";
var169 = core__flat___NativeString___to_s_full(var168, 1l, 1l);
var167 = var169;
varonce166 = var167;
}
((struct instance_core__NativeArray*)var153)->values[6]=var167;
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "`). NOTE: Do not mix old-style and new-style init!";
var173 = core__flat___NativeString___to_s_full(var172, 50l, 50l);
var171 = var173;
varonce170 = var171;
}
((struct instance_core__NativeArray*)var153)->values[8]=var171;
} else {
var153 = varonce152;
varonce152 = NULL;
}
{
var174 = ((val*(*)(val* self))(var_cd2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cd2); /* to_s on <var_cd2:MMethodDef>*/
}
((struct instance_core__NativeArray*)var153)->values[1]=var174;
{
{ /* Inline model#MMethodDef#initializers (var_cd2) on <var_cd2:MMethodDef> */
var177 = var_cd2->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_cd2:MMethodDef> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = ", ";
var181 = core__flat___NativeString___to_s_full(var180, 2l, 2l);
var179 = var181;
varonce178 = var179;
}
{
var182 = core__abstract_text___Collection___join(var175, var179);
}
((struct instance_core__NativeArray*)var153)->values[3]=var182;
{
var183 = ((val*(*)(val* self))(var_candidatedef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_candidatedef); /* to_s on <var_candidatedef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var153)->values[5]=var183;
{
{ /* Inline model#MMethodDef#initializers (var_candidatedef) on <var_candidatedef:MMethodDef> */
var186 = var_candidatedef->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_candidatedef:MMethodDef> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = ", ";
var190 = core__flat___NativeString___to_s_full(var189, 2l, 2l);
var188 = var190;
varonce187 = var188;
}
{
var191 = core__abstract_text___Collection___join(var184, var188);
}
((struct instance_core__NativeArray*)var153)->values[7]=var191;
{
var192 = ((val*(*)(val* self))(var153->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var153); /* native_to_s on <var153:NativeArray[String]>*/
}
varonce152 = var153;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var192); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base#ANode#is_broken= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <self:AMethPropdef> */
RET_LABEL193:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#new_msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var197 = var_candidatedef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_candidatedef:MMethodDef> */
var195 = var197;
RET_LABEL196:(void)0;
}
}
if (var195!=NULL) {
var194 = var195;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_candidatedef) on <var_candidatedef:MMethodDef> */
var200 = var_candidatedef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_candidatedef:MMethodDef> */
var198 = var200;
RET_LABEL199:(void)0;
}
}
var194 = var198;
}
var_msignature = var194;
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__auto_super_init, 125);
fatal_exit(1);
} else {
var201 = nitc___nitc__MSignature___MType__resolve_for(var_msignature, var_recvtype, var_anchor, var_mmodule, 1);
}
var_msignature = var201;
{
var202 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#> (var202,0l) on <var202:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var205 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var205)) {
var_class_name208 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name208);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var209 = var202 > 0l;
var203 = var209;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
}
if (var203){
if (unlikely(varonce210==NULL)) {
var211 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "Error: cannot do an implicit constructor call to `";
var215 = core__flat___NativeString___to_s_full(var214, 50l, 50l);
var213 = var215;
varonce212 = var213;
}
((struct instance_core__NativeArray*)var211)->values[0]=var213;
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "`. Expected at least `";
var219 = core__flat___NativeString___to_s_full(var218, 22l, 22l);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var211)->values[3]=var217;
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "` arguments.";
var223 = core__flat___NativeString___to_s_full(var222, 12l, 12l);
var221 = var223;
varonce220 = var221;
}
((struct instance_core__NativeArray*)var211)->values[5]=var221;
} else {
var211 = varonce210;
varonce210 = NULL;
}
{
var224 = ((val*(*)(val* self))(var_candidatedef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_candidatedef); /* to_s on <var_candidatedef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var211)->values[1]=var224;
{
var225 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_core__NativeArray*)var211)->values[2]=var225;
{
var226 = nitc___nitc__MSignature___arity(var_msignature);
}
var227 = core__flat___Int___core__abstract_text__Object__to_s(var226);
((struct instance_core__NativeArray*)var211)->values[4]=var227;
{
var228 = ((val*(*)(val* self))(var211->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var211); /* native_to_s on <var211:NativeArray[String]>*/
}
varonce210 = var211;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var228); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base#ANode#is_broken= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <self:AMethPropdef> */
RET_LABEL229:(void)0;
}
}
goto RET_LABEL;
} else {
}
var230 = NEW_nitc__CallSite(&type_nitc__CallSite);
{
var231 = nitc___nitc__AMethPropdef___ANode__hot_location(self);
}
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitc__typing__CallSite__location_61d]))(var230, var231); /* location= on <var230:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitc__typing__CallSite__recv_61d]))(var230, var_recvtype); /* recv= on <var230:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitc__typing__CallSite__mmodule_61d]))(var230, var_mmodule); /* mmodule= on <var230:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitc__typing__CallSite__anchor_61d]))(var230, var_anchor); /* anchor= on <var230:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var230->class->vft[COLOR_nitc__typing__CallSite__recv_is_self_61d]))(var230, 1); /* recv_is_self= on <var230:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitc__typing__CallSite__mproperty_61d]))(var230, var_the_root_init_mmethod); /* mproperty= on <var230:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitc__typing__CallSite__mpropdef_61d]))(var230, var_candidatedef); /* mpropdef= on <var230:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitc__typing__CallSite__msignature_61d]))(var230, var_msignature); /* msignature= on <var230:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var230->class->vft[COLOR_nitc__typing__CallSite__erasure_cast_61d]))(var230, 0); /* erasure_cast= on <var230:CallSite>*/
}
{
((void(*)(val* self))(var230->class->vft[COLOR_core__kernel__Object__init]))(var230); /* init on <var230:CallSite>*/
}
var_callsite = var230;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_auto_super_inits, var_callsite); /* Direct call array#Array#add on <var_auto_super_inits:Array[CallSite]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var234 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
if (unlikely(varonce235==NULL)) {
var236 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "Auto-super init for ";
var240 = core__flat___NativeString___to_s_full(var239, 20l, 20l);
var238 = var240;
varonce237 = var238;
}
((struct instance_core__NativeArray*)var236)->values[0]=var238;
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = " to ";
var244 = core__flat___NativeString___to_s_full(var243, 4l, 4l);
var242 = var244;
varonce241 = var242;
}
((struct instance_core__NativeArray*)var236)->values[2]=var242;
} else {
var236 = varonce235;
varonce235 = NULL;
}
{
var245 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var236)->values[1]=var245;
{
var246 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_the_root_init_mmethod);
}
((struct instance_core__NativeArray*)var236)->values[3]=var246;
{
var247 = ((val*(*)(val* self))(var236->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var236); /* native_to_s on <var236:NativeArray[String]>*/
}
varonce235 = var236;
{
nitc___nitc__ToolContext___info(var232, var247, 4l); /* Direct call toolcontext#ToolContext#info on <var232:ToolContext>*/
}
} else {
}
{
var248 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_auto_super_inits);
}
if (var248){
if (unlikely(varonce249==NULL)) {
var250 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "Error: no constructors to call implicitly in `";
var254 = core__flat___NativeString___to_s_full(var253, 46l, 46l);
var252 = var254;
varonce251 = var252;
}
((struct instance_core__NativeArray*)var250)->values[0]=var252;
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = "`. Call one explicitly.";
var258 = core__flat___NativeString___to_s_full(var257, 23l, 23l);
var256 = var258;
varonce255 = var256;
}
((struct instance_core__NativeArray*)var250)->values[2]=var256;
} else {
var250 = varonce249;
varonce249 = NULL;
}
{
var259 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var250)->values[1]=var259;
{
var260 = ((val*(*)(val* self))(var250->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var250); /* native_to_s on <var250:NativeArray[String]>*/
}
varonce249 = var250;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var260); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits= (self,var_auto_super_inits) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val = var_auto_super_inits; /* _auto_super_inits on <self:AMethPropdef> */
RET_LABEL261:(void)0;
}
}
RET_LABEL:;
}
/* method auto_super_init#ANode#accept_auto_super_init for (self: ANode, AutoSuperInitVisitor) */
void nitc__auto_super_init___ANode___accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method auto_super_init#ASendExpr#accept_auto_super_init for (self: ASendExpr, AutoSuperInitVisitor) */
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
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
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
var_v->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___is_broken].s = 1; /* _is_broken on <var_v:AutoSuperInitVisitor> */
RET_LABEL9:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var12 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 653);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var10) on <var10:MMethod> */
var15 = var10->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var10:MMethod> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (var_v,self) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = self; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method auto_super_init#ASuperExpr#accept_auto_super_init for (self: ASuperExpr, AutoSuperInitVisitor) */
void nitc__auto_super_init___ASuperExpr___ANode__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
var_v = p0;
{
{ /* Inline auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= (var_v,self) on <var_v:AutoSuperInitVisitor> */
var_v->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = self; /* _has_explicit_super_init on <var_v:AutoSuperInitVisitor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
