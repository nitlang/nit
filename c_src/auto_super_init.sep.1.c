#include "auto_super_init.sep.0.h"
/* method auto_super_init#ToolContext#auto_super_init_phase for (self: ToolContext): Phase */
val* auto_super_init__ToolContext__auto_super_init_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_auto_super_init__ToolContext___64dauto_super_init_phase].val; /* @auto_super_init_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @auto_super_init_phase");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 26);
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
var1 = auto_super_init__ToolContext__auto_super_init_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#ToolContext#auto_super_init_phase= for (self: ToolContext, Phase) */
void auto_super_init__ToolContext__auto_super_init_phase_61d(val* self, val* p0) {
self->attrs[COLOR_auto_super_init__ToolContext___64dauto_super_init_phase].val = p0; /* @auto_super_init_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method auto_super_init#ToolContext#auto_super_init_phase= for (self: Object, Phase) */
void VIRTUAL_auto_super_init__ToolContext__auto_super_init_phase_61d(val* self, val* p0) {
auto_super_init__ToolContext__auto_super_init_phase_61d(self, p0);
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitPhase#process_npropdef for (self: AutoSuperInitPhase, APropdef) */
void auto_super_init__AutoSuperInitPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : ToolContext */;
val* var2 /* : ModelBuilder */;
var_npropdef = p0;
/* <var_npropdef:APropdef> isa AConcreteMethPropdef */
cltype = type_parser_nodes__AConcreteMethPropdef.color;
idtype = type_parser_nodes__AConcreteMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
if (var){
var1 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:AutoSuperInitPhase>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var1) /* modelbuilder on <var1:ToolContext>*/;
((void (*)(val*, val*))(var_npropdef->class->vft[COLOR_auto_super_init__AConcreteMethPropdef__do_auto_super_init]))(var_npropdef, var2) /* do_auto_super_init on <var_npropdef:APropdef(AConcreteMethPropdef)>*/;
} else {
}
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_auto_super_init__AutoSuperInitPhase__process_npropdef(val* self, val* p0) {
auto_super_init__AutoSuperInitPhase__process_npropdef(self, p0);
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#init for (self: AutoSuperInitVisitor) */
void auto_super_init__AutoSuperInitVisitor__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:AutoSuperInitVisitor>*/;
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#init for (self: Object) */
void VIRTUAL_auto_super_init__AutoSuperInitVisitor__init(val* self) {
auto_super_init__AutoSuperInitVisitor__init(self);
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#visit for (self: AutoSuperInitVisitor, ANode) */
void auto_super_init__AutoSuperInitVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
((void (*)(val*, val*))(var_n->class->vft[COLOR_auto_super_init__ANode__accept_auto_super_init]))(var_n, self) /* accept_auto_super_init on <var_n:ANode>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#visit for (self: Object, ANode) */
void VIRTUAL_auto_super_init__AutoSuperInitVisitor__visit(val* self, val* p0) {
auto_super_init__AutoSuperInitVisitor__visit(self, p0);
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init for (self: AutoSuperInitVisitor): Bool */
short int auto_super_init__AutoSuperInitVisitor__has_explicit_super_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___64dhas_explicit_super_init].s; /* @has_explicit_super_init on <self:AutoSuperInitVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init for (self: Object): Bool */
short int VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = auto_super_init__AutoSuperInitVisitor__has_explicit_super_init(self);
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= for (self: AutoSuperInitVisitor, Bool) */
void auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d(val* self, short int p0) {
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___64dhas_explicit_super_init].s = p0; /* @has_explicit_super_init on <self:AutoSuperInitVisitor> */
RET_LABEL:;
}
/* method auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= for (self: Object, Bool) */
void VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d(val* self, short int p0) {
auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d(self, p0);
RET_LABEL:;
}
/* method auto_super_init#AConcreteMethPropdef#auto_super_inits for (self: AConcreteMethPropdef): nullable Array[CallSite] */
val* auto_super_init__AConcreteMethPropdef__auto_super_inits(val* self) {
val* var /* : nullable Array[CallSite] */;
val* var1 /* : nullable Array[CallSite] */;
var1 = self->attrs[COLOR_auto_super_init__AConcreteMethPropdef___64dauto_super_inits].val; /* @auto_super_inits on <self:AConcreteMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AConcreteMethPropdef#auto_super_inits for (self: Object): nullable Array[CallSite] */
val* VIRTUAL_auto_super_init__AConcreteMethPropdef__auto_super_inits(val* self) {
val* var /* : nullable Array[CallSite] */;
val* var1 /* : nullable Array[CallSite] */;
var1 = auto_super_init__AConcreteMethPropdef__auto_super_inits(self);
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AConcreteMethPropdef#auto_super_inits= for (self: AConcreteMethPropdef, nullable Array[CallSite]) */
void auto_super_init__AConcreteMethPropdef__auto_super_inits_61d(val* self, val* p0) {
self->attrs[COLOR_auto_super_init__AConcreteMethPropdef___64dauto_super_inits].val = p0; /* @auto_super_inits on <self:AConcreteMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init#AConcreteMethPropdef#auto_super_inits= for (self: Object, nullable Array[CallSite]) */
void VIRTUAL_auto_super_init__AConcreteMethPropdef__auto_super_inits_61d(val* self, val* p0) {
auto_super_init__AConcreteMethPropdef__auto_super_inits_61d(self, p0);
RET_LABEL:;
}
/* method auto_super_init#AConcreteMethPropdef#do_auto_super_init for (self: AConcreteMethPropdef, ModelBuilder) */
void auto_super_init__AConcreteMethPropdef__do_auto_super_init(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable ANode */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var2 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var3 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var4 /* : MClassDef */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var7 /* : MClass */;
val* var8 /* : MClassType */;
val* var_recvtype /* var recvtype: MClassType */;
val* var9 /* : MProperty */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassDef */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_skip /* var skip: Bool */;
val* var16 /* : nullable POSetElement[MClassDef] */;
val* var17 /* : Collection[Object] */;
val* var18 /* : Iterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var21 /* : MClass */;
val* var22 /* : MClassKind */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var26 /* : null */;
short int var27 /* : Bool */;
val* var28 /* : AutoSuperInitVisitor */;
val* var_v /* var v: AutoSuperInitVisitor */;
short int var29 /* : Bool */;
val* var30 /* : Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: Array[CallSite] */;
val* var31 /* : Array[MClassType] */;
val* var32 /* : Iterator[nullable Object] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var35 /* : MClass */;
val* var36 /* : MClassKind */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var40 /* : MClassType */;
val* var41 /* : MType */;
val* var42 /* : MProperty */;
val* var43 /* : String */;
val* var44 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
val* var45 /* : null */;
short int var46 /* : Bool */;
static val* varonce;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : nullable MProperty */;
val* var52 /* : null */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : MProperty */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
val* var83 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
val* var84 /* : nullable Object */;
val* var_candidatedef /* var candidatedef: MMethodDef */;
val* var85 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var86 /* : Bool */;
val* var87 /* : MType */;
val* var88 /* : CallSite */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
val* var_callsite /* var callsite: CallSite */;
short int var91 /* : Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : Array[Object] */;
long var103 /* : Int */;
val* var104 /* : NativeArray[Object] */;
val* var105 /* : String */;
val* var106 /* : Iterator[nullable Object] */;
short int var107 /* : Bool */;
val* var108 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var109 /* : MMethodDef */;
val* var_auto_super_init_def /* var auto_super_init_def: MMethodDef */;
val* var110 /* : nullable MSignature */;
val* var_msig /* var msig: MSignature */;
val* var111 /* : MSignature */;
val* var_supermsig /* var supermsig: MSignature */;
long var112 /* : Int */;
long var113 /* : Int */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
short int var120 /* : Bool */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
long var131 /* : Int */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
long var137 /* : Int */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
val* var143 /* : Array[Object] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[Object] */;
val* var146 /* : Object */;
val* var147 /* : Object */;
val* var148 /* : String */;
long var150 /* : Int */;
long var_i /* var i: Int */;
val* var151 /* : Array[MParameter] */;
val* var152 /* : Iterator[nullable Object] */;
short int var153 /* : Bool */;
val* var154 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var155 /* : Array[MParameter] */;
val* var156 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var157 /* : MType */;
val* var_sub /* var sub: MType */;
val* var158 /* : MType */;
val* var_sup /* var sup: MType */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : String */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : String */;
val* var176 /* : MType */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : String */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : String */;
val* var188 /* : MType */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : String */;
val* var194 /* : Array[Object] */;
long var195 /* : Int */;
val* var196 /* : NativeArray[Object] */;
val* var197 /* : Object */;
val* var198 /* : String */;
long var200 /* : Int */;
long var201 /* : Int */;
long var203 /* : Int */;
var_modelbuilder = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__parent]))(self) /* parent on <self:AConcreteMethPropdef>*/;
/* <var:nullable ANode> isa AClassdef */
cltype = type_parser_nodes__AClassdef.color;
idtype = type_parser_nodes__AClassdef.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 56);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(var->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var) /* mclassdef on <var:nullable ANode(AClassdef)>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 56);
show_backtrace(1);
}
var_mclassdef = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AConcreteMethPropdef>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 57);
show_backtrace(1);
}
var_mpropdef = var3;
var4 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MClassDef__mmodule]))(var4) /* mmodule on <var4:MClassDef>*/;
var_mmodule = var5;
var6 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef) /* bound_mtype on <var_mclassdef:MClassDef>*/;
var_anchor = var6;
var7 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef) /* mclass on <var_mclassdef:MClassDef>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MClass__mclass_type]))(var7) /* mclass_type on <var7:MClass>*/;
var_recvtype = var8;
var9 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_model__MMethod__is_init]))(var9) /* is_init on <var9:MProperty(MMethod)>*/;
var11 = !var10;
if (var11){
goto RET_LABEL;
} else {
}
var12 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_model__MClassDef__is_intro]))(var12) /* is_intro on <var12:MClassDef>*/;
var14 = !var13;
if (var14){
goto RET_LABEL;
} else {
}
var15 = 1;
var_skip = var15;
var16 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__in_hierarchy]))(var_mclassdef) /* in_hierarchy on <var_mclassdef:MClassDef>*/;
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 70);
show_backtrace(1);
} else {
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var16) /* direct_greaters on <var16:nullable POSetElement[MClassDef]>*/;
}
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Collection__iterator]))(var17) /* iterator on <var17:Collection[Object](Collection[MClassDef])>*/;
for(;;) {
var19 = ((short int (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var18) /* is_ok on <var18:Iterator[nullable Object]>*/;
if(!var19) break;
var20 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__item]))(var18) /* item on <var18:Iterator[nullable Object]>*/;
var_cd = var20;
var21 = ((val* (*)(val*))(var_cd->class->vft[COLOR_model__MClassDef__mclass]))(var_cd) /* mclass on <var_cd:MClassDef>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_model__MClass__kind]))(var21) /* kind on <var21:MClass>*/;
var23 = ((short int (*)(val*))(var22->class->vft[COLOR_model__MClassKind__need_init]))(var22) /* need_init on <var22:MClassKind>*/;
if (var23){
var24 = 0;
var_skip = var24;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__next]))(var18) /* next on <var18:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_skip){
goto RET_LABEL;
} else {
}
var25 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(self) /* n_block on <self:AConcreteMethPropdef>*/;
var_nblock = var25;
var26 = NULL;
if (var_nblock == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (var27){
var28 = NEW_auto_super_init__AutoSuperInitVisitor(&type_auto_super_init__AutoSuperInitVisitor);
((void (*)(val*))(var28->class->vft[COLOR_auto_super_init__AutoSuperInitVisitor__init]))(var28) /* init on <var28:AutoSuperInitVisitor>*/;
var_v = var28;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_nblock) /* enter_visit on <var_v:AutoSuperInitVisitor>*/;
var29 = ((short int (*)(val*))(var_v->class->vft[COLOR_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init]))(var_v) /* has_explicit_super_init on <var_v:AutoSuperInitVisitor>*/;
if (var29){
goto RET_LABEL;
} else {
}
} else {
}
var30 = NEW_array__Array(&type_array__Arraytyping__CallSite);
((void (*)(val*))(var30->class->vft[COLOR_array__Array__init]))(var30) /* init on <var30:Array[CallSite]>*/;
var_auto_super_inits = var30;
var31 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__supertypes]))(var_mclassdef) /* supertypes on <var_mclassdef:MClassDef>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Collection__iterator]))(var31) /* iterator on <var31:Array[MClassType]>*/;
for(;;) {
var33 = ((short int (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var32) /* is_ok on <var32:Iterator[nullable Object]>*/;
if(!var33) break;
var34 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__item]))(var32) /* item on <var32:Iterator[nullable Object]>*/;
var_msupertype = var34;
var35 = ((val* (*)(val*))(var_msupertype->class->vft[COLOR_model__MClassType__mclass]))(var_msupertype) /* mclass on <var_msupertype:MClassType>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_model__MClass__kind]))(var35) /* kind on <var35:MClass>*/;
var37 = ((short int (*)(val*))(var36->class->vft[COLOR_model__MClassKind__need_init]))(var36) /* need_init on <var36:MClassKind>*/;
var38 = !var37;
if (var38){
goto CONTINUE_label39;
} else {
}
var40 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef) /* bound_mtype on <var_mclassdef:MClassDef>*/;
var41 = ((val* (*)(val*, val*, val*))(var_msupertype->class->vft[COLOR_model__MType__anchor_to]))(var_msupertype, var_mmodule, var40) /* anchor_to on <var_msupertype:MClassType>*/;
var_msupertype = var41;
var42 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_model__MProperty__name]))(var42) /* name on <var42:MProperty(MMethod)>*/;
var44 = ((val* (*)(val*, val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(var_modelbuilder, self, var_mmodule, var_msupertype, var43) /* try_get_mproperty_by_name2 on <var_modelbuilder:ModelBuilder>*/;
var_candidate = var44;
var45 = NULL;
if (var_candidate == NULL) {
var46 = 1; /* is null */
} else {
var46 = 0; /* arg is null but recv is not */
}
if (var46){
if (varonce) {
var47 = varonce;
} else {
var48 = "init";
var49 = 4;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce = var47;
}
var51 = ((val* (*)(val*, val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(var_modelbuilder, self, var_mmodule, var_msupertype, var47) /* try_get_mproperty_by_name2 on <var_modelbuilder:ModelBuilder>*/;
var_candidate = var51;
} else {
}
var52 = NULL;
if (var_candidate == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (var53){
if (varonce54) {
var55 = varonce54;
} else {
var56 = "Error: Cannot do an implicit constructor call in ";
var57 = 49;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "; there is no constructor named ";
var62 = 32;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var65 = ((val* (*)(val*))(var64->class->vft[COLOR_model__MProperty__name]))(var64) /* name on <var64:MProperty(MMethod)>*/;
if (varonce66) {
var67 = varonce66;
} else {
var68 = " in ";
var69 = 4;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = ".";
var74 = 1;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 7;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var55;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var60;
((struct instance_array__NativeArray*)var78)->values[3] = (val*) var65;
((struct instance_array__NativeArray*)var78)->values[4] = (val*) var67;
((struct instance_array__NativeArray*)var78)->values[5] = (val*) var_msupertype;
((struct instance_array__NativeArray*)var78)->values[6] = (val*) var72;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var79) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
/* <var_candidate:nullable MProperty(MProperty)> isa MMethod */
cltype81 = type_model__MMethod.color;
idtype82 = type_model__MMethod.id;
if(cltype81 >= var_candidate->type->table_size) {
var80 = 0;
} else {
var80 = var_candidate->type->type_table[cltype81] == idtype82;
}
if (!var80) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 100);
show_backtrace(1);
}
var83 = ((val* (*)(val*, val*, val*))(var_candidate->class->vft[COLOR_model__MProperty__lookup_definitions]))(var_candidate, var_mmodule, var_anchor) /* lookup_definitions on <var_candidate:nullable MProperty(MMethod)>*/;
var_candidatedefs = var83;
var84 = ((val* (*)(val*))(var_candidatedefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_candidatedefs) /* first on <var_candidatedefs:Array[MMethodDef]>*/;
var_candidatedef = var84;
var85 = ((val* (*)(val*))(var_candidatedef->class->vft[COLOR_model__MMethodDef__msignature]))(var_candidatedef) /* msignature on <var_candidatedef:MMethodDef>*/;
var_msignature = var85;
var86 = 1;
if (var_msignature == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 107);
show_backtrace(1);
} else {
var87 = ((val* (*)(val*, val*, val*, val*, short int))(var_msignature->class->vft[COLOR_model__MType__resolve_for]))(var_msignature, var_recvtype, var_anchor, var_mmodule, var86) /* resolve_for on <var_msignature:nullable MSignature>*/;
}
var_msignature = var87;
var88 = NEW_typing__CallSite(&type_typing__CallSite);
var89 = 1;
var90 = 0;
((void (*)(val*, val*, val*, short int, val*, val*, val*, short int))(var88->class->vft[COLOR_typing__CallSite__init]))(var88, self, var_recvtype, var89, var_candidate, var_candidatedef, var_msignature, var90) /* init on <var88:CallSite>*/;
var_callsite = var88;
((void (*)(val*, val*))(var_auto_super_inits->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_auto_super_inits, var_callsite) /* add on <var_auto_super_inits:Array[CallSite]>*/;
CONTINUE_label39: (void)0;
((void (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__next]))(var32) /* next on <var32:Iterator[nullable Object]>*/;
}
BREAK_label39: (void)0;
var91 = ((short int (*)(val*))(var_auto_super_inits->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_auto_super_inits) /* is_empty on <var_auto_super_inits:Array[CallSite]>*/;
if (var91){
if (varonce92) {
var93 = varonce92;
} else {
var94 = "Error: No constructors to call implicitely in ";
var95 = 46;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = ". Call one explicitely.";
var100 = 23;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var102 = array_instance Array[Object] */
var103 = 3;
var104 = NEW_array__NativeArray(var103, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var104)->values[0] = (val*) var93;
((struct instance_array__NativeArray*)var104)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var104)->values[2] = (val*) var98;
((void (*)(val*, val*, long))(var102->class->vft[COLOR_array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[Object]>*/;
}
var105 = ((val* (*)(val*))(var102->class->vft[COLOR_string__Object__to_s]))(var102) /* to_s on <var102:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var105) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var106 = ((val* (*)(val*))(var_auto_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_auto_super_inits) /* iterator on <var_auto_super_inits:Array[CallSite]>*/;
for(;;) {
var107 = ((short int (*)(val*))(var106->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var106) /* is_ok on <var106:Iterator[nullable Object]>*/;
if(!var107) break;
var108 = ((val* (*)(val*))(var106->class->vft[COLOR_abstract_collection__Iterator__item]))(var106) /* item on <var106:Iterator[nullable Object]>*/;
var_auto_super_init = var108;
var109 = ((val* (*)(val*))(var_auto_super_init->class->vft[COLOR_typing__CallSite__mpropdef]))(var_auto_super_init) /* mpropdef on <var_auto_super_init:CallSite>*/;
var_auto_super_init_def = var109;
var110 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var110 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 118);
show_backtrace(1);
}
var_msig = var110;
var111 = ((val* (*)(val*))(var_auto_super_init->class->vft[COLOR_typing__CallSite__msignature]))(var_auto_super_init) /* msignature on <var_auto_super_init:CallSite>*/;
var_supermsig = var111;
var112 = ((long (*)(val*))(var_supermsig->class->vft[COLOR_model__MSignature__arity]))(var_supermsig) /* arity on <var_supermsig:MSignature>*/;
var113 = ((long (*)(val*))(var_msig->class->vft[COLOR_model__MSignature__arity]))(var_msig) /* arity on <var_msig:MSignature>*/;
{ /* Inline kernel#Int#> (var112,var113) */
/* Covariant cast for argument 0 (i) <var113:Int> isa OTHER */
/* <var113:Int> isa OTHER */
var116 = 1; /* easy <var113:Int> isa OTHER*/
if (!var116) {
var_class_name119 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var120 = var112 > var113;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
if (var114){
if (varonce121) {
var122 = varonce121;
} else {
var123 = "Error: Cannot do an implicit constructor call to ";
var124 = 49;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
if (varonce126) {
var127 = varonce126;
} else {
var128 = ". Expected at least ";
var129 = 20;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var131 = ((long (*)(val*))(var_supermsig->class->vft[COLOR_model__MSignature__arity]))(var_supermsig) /* arity on <var_supermsig:MSignature>*/;
if (varonce132) {
var133 = varonce132;
} else {
var134 = " arguments, got ";
var135 = 16;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = ((long (*)(val*))(var_msig->class->vft[COLOR_model__MSignature__arity]))(var_msig) /* arity on <var_msig:MSignature>*/;
if (varonce138) {
var139 = varonce138;
} else {
var140 = ".";
var141 = 1;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var143 = array_instance Array[Object] */
var144 = 8;
var145 = NEW_array__NativeArray(var144, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var145)->values[0] = (val*) var122;
((struct instance_array__NativeArray*)var145)->values[1] = (val*) var_auto_super_init_def;
((struct instance_array__NativeArray*)var145)->values[2] = (val*) var_supermsig;
((struct instance_array__NativeArray*)var145)->values[3] = (val*) var127;
var146 = BOX_kernel__Int(var131); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var145)->values[4] = (val*) var146;
((struct instance_array__NativeArray*)var145)->values[5] = (val*) var133;
var147 = BOX_kernel__Int(var137); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var145)->values[6] = (val*) var147;
((struct instance_array__NativeArray*)var145)->values[7] = (val*) var139;
((void (*)(val*, val*, long))(var143->class->vft[COLOR_array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[Object]>*/;
}
var148 = ((val* (*)(val*))(var143->class->vft[COLOR_string__Object__to_s]))(var143) /* to_s on <var143:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var148) /* error on <var_modelbuilder:ModelBuilder>*/;
goto CONTINUE_label149;
} else {
}
var150 = 0;
var_i = var150;
var151 = ((val* (*)(val*))(var_supermsig->class->vft[COLOR_model__MSignature__mparameters]))(var_supermsig) /* mparameters on <var_supermsig:MSignature>*/;
var152 = ((val* (*)(val*))(var151->class->vft[COLOR_abstract_collection__Collection__iterator]))(var151) /* iterator on <var151:Array[MParameter]>*/;
for(;;) {
var153 = ((short int (*)(val*))(var152->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var152) /* is_ok on <var152:Iterator[nullable Object]>*/;
if(!var153) break;
var154 = ((val* (*)(val*))(var152->class->vft[COLOR_abstract_collection__Iterator__item]))(var152) /* item on <var152:Iterator[nullable Object]>*/;
var_sp = var154;
var155 = ((val* (*)(val*))(var_msig->class->vft[COLOR_model__MSignature__mparameters]))(var_msig) /* mparameters on <var_msig:MSignature>*/;
var156 = ((val* (*)(val*, long))(var155->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var155, var_i) /* [] on <var155:Array[MParameter]>*/;
var_p = var156;
var157 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var_sub = var157;
var158 = ((val* (*)(val*))(var_sp->class->vft[COLOR_model__MParameter__mtype]))(var_sp) /* mtype on <var_sp:MParameter>*/;
var_sup = var158;
var159 = ((short int (*)(val*, val*, val*, val*))(var_sub->class->vft[COLOR_model__MType__is_subtype]))(var_sub, var_mmodule, var_anchor, var_sup) /* is_subtype on <var_sub:MType>*/;
var160 = !var159;
if (var160){
if (varonce161) {
var162 = varonce161;
} else {
var163 = "Error: Cannot do an implicit constructor call to ";
var164 = 49;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = ". Expected argument #";
var169 = 21;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = " of type ";
var174 = 9;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
var176 = ((val* (*)(val*))(var_sp->class->vft[COLOR_model__MParameter__mtype]))(var_sp) /* mtype on <var_sp:MParameter>*/;
if (varonce177) {
var178 = varonce177;
} else {
var179 = ", got implicit argument ";
var180 = 24;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
var182 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
if (varonce183) {
var184 = varonce183;
} else {
var185 = " of type ";
var186 = 9;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
if (varonce189) {
var190 = varonce189;
} else {
var191 = ".";
var192 = 1;
var193 = string__NativeString__to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
var194 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var194 = array_instance Array[Object] */
var195 = 12;
var196 = NEW_array__NativeArray(var195, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var196)->values[0] = (val*) var162;
((struct instance_array__NativeArray*)var196)->values[1] = (val*) var_auto_super_init_def;
((struct instance_array__NativeArray*)var196)->values[2] = (val*) var_supermsig;
((struct instance_array__NativeArray*)var196)->values[3] = (val*) var167;
var197 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var196)->values[4] = (val*) var197;
((struct instance_array__NativeArray*)var196)->values[5] = (val*) var172;
((struct instance_array__NativeArray*)var196)->values[6] = (val*) var176;
((struct instance_array__NativeArray*)var196)->values[7] = (val*) var178;
((struct instance_array__NativeArray*)var196)->values[8] = (val*) var182;
((struct instance_array__NativeArray*)var196)->values[9] = (val*) var184;
((struct instance_array__NativeArray*)var196)->values[10] = (val*) var188;
((struct instance_array__NativeArray*)var196)->values[11] = (val*) var190;
((void (*)(val*, val*, long))(var194->class->vft[COLOR_array__Array__with_native]))(var194, var196, var195) /* with_native on <var194:Array[Object]>*/;
}
var198 = ((val* (*)(val*))(var194->class->vft[COLOR_string__Object__to_s]))(var194) /* to_s on <var194:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var198) /* error on <var_modelbuilder:ModelBuilder>*/;
goto BREAK_label199;
} else {
}
var200 = 1;
{ /* Inline kernel#Int#+ (var_i,var200) */
var203 = var_i + var200;
var201 = var203;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
var_i = var201;
CONTINUE_label199: (void)0;
((void (*)(val*))(var152->class->vft[COLOR_abstract_collection__Iterator__next]))(var152) /* next on <var152:Iterator[nullable Object]>*/;
}
BREAK_label199: (void)0;
CONTINUE_label149: (void)0;
((void (*)(val*))(var106->class->vft[COLOR_abstract_collection__Iterator__next]))(var106) /* next on <var106:Iterator[nullable Object]>*/;
}
BREAK_label149: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_auto_super_init__AConcreteMethPropdef__auto_super_inits_61d]))(self, var_auto_super_inits) /* auto_super_inits= on <self:AConcreteMethPropdef>*/;
RET_LABEL:;
}
/* method auto_super_init#AConcreteMethPropdef#do_auto_super_init for (self: Object, ModelBuilder) */
void VIRTUAL_auto_super_init__AConcreteMethPropdef__do_auto_super_init(val* self, val* p0) {
auto_super_init__AConcreteMethPropdef__do_auto_super_init(self, p0);
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
auto_super_init__ANode__accept_auto_super_init(self, p0);
RET_LABEL:;
}
/* method auto_super_init#ASendExpr#accept_auto_super_init for (self: ASendExpr, AutoSuperInitVisitor) */
void auto_super_init__ASendExpr__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
val* var /* : nullable CallSite */;
val* var1 /* : MMethod */;
val* var_mproperty /* var mproperty: MMethod */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__callsite]))(self) /* callsite on <self:ASendExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 149);
show_backtrace(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_typing__CallSite__mproperty]))(var) /* mproperty on <var:nullable CallSite>*/;
}
var_mproperty = var1;
var2 = NULL;
var3 = 0; /* arg is null but recv is not */
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MMethod>*/;
if (var4){
var5 = 1;
((void (*)(val*, short int))(var_v->class->vft[COLOR_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d]))(var_v, var5) /* has_explicit_super_init= on <var_v:AutoSuperInitVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method auto_super_init#ASendExpr#accept_auto_super_init for (self: Object, AutoSuperInitVisitor) */
void VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init(val* self, val* p0) {
auto_super_init__ASendExpr__accept_auto_super_init(self, p0);
RET_LABEL:;
}
/* method auto_super_init#ASuperExpr#accept_auto_super_init for (self: ASuperExpr, AutoSuperInitVisitor) */
void auto_super_init__ASuperExpr__accept_auto_super_init(val* self, val* p0) {
val* var_v /* var v: AutoSuperInitVisitor */;
short int var /* : Bool */;
var_v = p0;
var = 1;
((void (*)(val*, short int))(var_v->class->vft[COLOR_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d]))(var_v, var) /* has_explicit_super_init= on <var_v:AutoSuperInitVisitor>*/;
RET_LABEL:;
}
/* method auto_super_init#ASuperExpr#accept_auto_super_init for (self: Object, AutoSuperInitVisitor) */
void VIRTUAL_auto_super_init__ASuperExpr__accept_auto_super_init(val* self, val* p0) {
auto_super_init__ASuperExpr__accept_auto_super_init(self, p0);
RET_LABEL:;
}
