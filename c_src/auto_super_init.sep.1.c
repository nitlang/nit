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
/* method auto_super_init#AConcreteMethPropdef#auto_super_inits for (self: AConcreteMethPropdef): nullable Array[MMethod] */
val* auto_super_init__AConcreteMethPropdef__auto_super_inits(val* self) {
val* var /* : nullable Array[MMethod] */;
val* var1 /* : nullable Array[MMethod] */;
var1 = self->attrs[COLOR_auto_super_init__AConcreteMethPropdef___64dauto_super_inits].val; /* @auto_super_inits on <self:AConcreteMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AConcreteMethPropdef#auto_super_inits for (self: Object): nullable Array[MMethod] */
val* VIRTUAL_auto_super_init__AConcreteMethPropdef__auto_super_inits(val* self) {
val* var /* : nullable Array[MMethod] */;
val* var1 /* : nullable Array[MMethod] */;
var1 = auto_super_init__AConcreteMethPropdef__auto_super_inits(self);
var = var1;
RET_LABEL:;
return var;
}
/* method auto_super_init#AConcreteMethPropdef#auto_super_inits= for (self: AConcreteMethPropdef, nullable Array[MMethod]) */
void auto_super_init__AConcreteMethPropdef__auto_super_inits_61d(val* self, val* p0) {
self->attrs[COLOR_auto_super_init__AConcreteMethPropdef___64dauto_super_inits].val = p0; /* @auto_super_inits on <self:AConcreteMethPropdef> */
RET_LABEL:;
}
/* method auto_super_init#AConcreteMethPropdef#auto_super_inits= for (self: Object, nullable Array[MMethod]) */
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
val* var6 /* : MProperty */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClassDef */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_skip /* var skip: Bool */;
val* var13 /* : nullable POSetElement[MClassDef] */;
val* var14 /* : Collection[Object] */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var18 /* : MClass */;
val* var19 /* : MClassKind */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : AutoSuperInitVisitor */;
val* var_v /* var v: AutoSuperInitVisitor */;
short int var26 /* : Bool */;
val* var27 /* : Array[MMethod] */;
val* var_auto_super_inits /* var auto_super_inits: Array[MMethod] */;
val* var28 /* : Array[MClassType] */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var32 /* : MClass */;
val* var33 /* : MClassKind */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var37 /* : MClassType */;
val* var38 /* : MType */;
val* var39 /* : MProperty */;
val* var40 /* : String */;
val* var41 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
val* var42 /* : null */;
short int var43 /* : Bool */;
static val* varonce;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : nullable MProperty */;
val* var49 /* : null */;
short int var50 /* : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : String */;
val* var61 /* : MProperty */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
val* var73 /* : Array[Object] */;
long var74 /* : Int */;
val* var75 /* : NativeArray[Object] */;
val* var76 /* : String */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
short int var80 /* : Bool */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var86 /* : Iterator[nullable Object] */;
short int var87 /* : Bool */;
val* var88 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: MMethod */;
val* var89 /* : MPropDef */;
val* var_auto_super_init_def /* var auto_super_init_def: MMethodDef */;
val* var90 /* : nullable MSignature */;
val* var_msig /* var msig: MSignature */;
val* var91 /* : nullable MSignature */;
val* var_supermsig /* var supermsig: MSignature */;
short int var92 /* : Bool */;
val* var93 /* : nullable MSignature */;
long var94 /* : Int */;
long var95 /* : Int */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var_ /* var : Bool */;
val* var100 /* : nullable MSignature */;
long var101 /* : Int */;
val* var102 /* : nullable MSignature */;
long var103 /* : Int */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : String */;
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var120 /* : NativeArray[Object] */;
val* var121 /* : String */;
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
var6 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_model__MMethod__is_init]))(var6) /* is_init on <var6:MProperty(MMethod)>*/;
var8 = !var7;
if (var8){
goto RET_LABEL;
} else {
}
var9 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_model__MClassDef__is_intro]))(var9) /* is_intro on <var9:MClassDef>*/;
var11 = !var10;
if (var11){
goto RET_LABEL;
} else {
}
var12 = 1;
var_skip = var12;
var13 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__in_hierarchy]))(var_mclassdef) /* in_hierarchy on <var_mclassdef:MClassDef>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 68);
show_backtrace(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var13) /* direct_greaters on <var13:nullable POSetElement[MClassDef]>*/;
}
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__iterator]))(var14) /* iterator on <var14:Collection[Object](Collection[MClassDef])>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var_cd = var17;
var18 = ((val* (*)(val*))(var_cd->class->vft[COLOR_model__MClassDef__mclass]))(var_cd) /* mclass on <var_cd:MClassDef>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_model__MClass__kind]))(var18) /* kind on <var18:MClass>*/;
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_model__MClassKind__need_init]))(var19) /* need_init on <var19:MClassKind>*/;
if (var20){
var21 = 0;
var_skip = var21;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_skip){
goto RET_LABEL;
} else {
}
var22 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(self) /* n_block on <self:AConcreteMethPropdef>*/;
var_nblock = var22;
var23 = NULL;
if (var_nblock == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
var25 = NEW_auto_super_init__AutoSuperInitVisitor(&type_auto_super_init__AutoSuperInitVisitor);
((void (*)(val*))(var25->class->vft[COLOR_auto_super_init__AutoSuperInitVisitor__init]))(var25) /* init on <var25:AutoSuperInitVisitor>*/;
var_v = var25;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_nblock) /* enter_visit on <var_v:AutoSuperInitVisitor>*/;
var26 = ((short int (*)(val*))(var_v->class->vft[COLOR_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init]))(var_v) /* has_explicit_super_init on <var_v:AutoSuperInitVisitor>*/;
if (var26){
goto RET_LABEL;
} else {
}
} else {
}
var27 = NEW_array__Array(&type_array__Arraymodel__MMethod);
((void (*)(val*))(var27->class->vft[COLOR_array__Array__init]))(var27) /* init on <var27:Array[MMethod]>*/;
var_auto_super_inits = var27;
var28 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__supertypes]))(var_mclassdef) /* supertypes on <var_mclassdef:MClassDef>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__iterator]))(var28) /* iterator on <var28:Array[MClassType]>*/;
for(;;) {
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
if(!var30) break;
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
var_msupertype = var31;
var32 = ((val* (*)(val*))(var_msupertype->class->vft[COLOR_model__MClassType__mclass]))(var_msupertype) /* mclass on <var_msupertype:MClassType>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_model__MClass__kind]))(var32) /* kind on <var32:MClass>*/;
var34 = ((short int (*)(val*))(var33->class->vft[COLOR_model__MClassKind__need_init]))(var33) /* need_init on <var33:MClassKind>*/;
var35 = !var34;
if (var35){
goto CONTINUE_label36;
} else {
}
var37 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef) /* bound_mtype on <var_mclassdef:MClassDef>*/;
var38 = ((val* (*)(val*, val*, val*))(var_msupertype->class->vft[COLOR_model__MType__anchor_to]))(var_msupertype, var_mmodule, var37) /* anchor_to on <var_msupertype:MClassType>*/;
var_msupertype = var38;
var39 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_model__MProperty__name]))(var39) /* name on <var39:MProperty(MMethod)>*/;
var41 = ((val* (*)(val*, val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(var_modelbuilder, self, var_mmodule, var_msupertype, var40) /* try_get_mproperty_by_name2 on <var_modelbuilder:ModelBuilder>*/;
var_candidate = var41;
var42 = NULL;
if (var_candidate == NULL) {
var43 = 1; /* is null */
} else {
var43 = 0; /* arg is null but recv is not */
}
if (var43){
if (varonce) {
var44 = varonce;
} else {
var45 = "init";
var46 = 4;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce = var44;
}
var48 = ((val* (*)(val*, val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(var_modelbuilder, self, var_mmodule, var_msupertype, var44) /* try_get_mproperty_by_name2 on <var_modelbuilder:ModelBuilder>*/;
var_candidate = var48;
} else {
}
var49 = NULL;
if (var_candidate == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (var50){
if (varonce51) {
var52 = varonce51;
} else {
var53 = "Cannot do an implicit constructor call for ";
var54 = 43;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ": there is no costructor named ";
var59 = 31;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_model__MProperty__name]))(var61) /* name on <var61:MProperty(MMethod)>*/;
if (varonce63) {
var64 = varonce63;
} else {
var65 = " in ";
var66 = 4;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = ".";
var71 = 1;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var73 = array_instance Array[Object] */
var74 = 7;
var75 = NEW_array__NativeArray(var74, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var75)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var75)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var75)->values[2] = (val*) var57;
((struct instance_array__NativeArray*)var75)->values[3] = (val*) var62;
((struct instance_array__NativeArray*)var75)->values[4] = (val*) var64;
((struct instance_array__NativeArray*)var75)->values[5] = (val*) var_msupertype;
((struct instance_array__NativeArray*)var75)->values[6] = (val*) var69;
((void (*)(val*, val*, long))(var73->class->vft[COLOR_array__Array__with_native]))(var73, var75, var74) /* with_native on <var73:Array[Object]>*/;
}
var76 = ((val* (*)(val*))(var73->class->vft[COLOR_string__Object__to_s]))(var73) /* to_s on <var73:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var76) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
/* <var_candidate:nullable MProperty(MProperty)> isa MMethod */
cltype78 = type_model__MMethod.color;
idtype79 = type_model__MMethod.id;
if(cltype78 >= var_candidate->type->table_size) {
var77 = 0;
} else {
var77 = var_candidate->type->type_table[cltype78] == idtype79;
}
if (!var77) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 98);
show_backtrace(1);
}
((void (*)(val*, val*))(var_auto_super_inits->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_auto_super_inits, var_candidate) /* add on <var_auto_super_inits:Array[MMethod]>*/;
CONTINUE_label36: (void)0;
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
BREAK_label36: (void)0;
var80 = ((short int (*)(val*))(var_auto_super_inits->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_auto_super_inits) /* is_empty on <var_auto_super_inits:Array[MMethod]>*/;
if (var80){
if (varonce81) {
var82 = varonce81;
} else {
var83 = "No constructors to call implicitely. Call one explicitely.";
var84 = 58;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var82) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var86 = ((val* (*)(val*))(var_auto_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_auto_super_inits) /* iterator on <var_auto_super_inits:Array[MMethod]>*/;
for(;;) {
var87 = ((short int (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var86) /* is_ok on <var86:Iterator[nullable Object]>*/;
if(!var87) break;
var88 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__item]))(var86) /* item on <var86:Iterator[nullable Object]>*/;
var_auto_super_init = var88;
var89 = ((val* (*)(val*))(var_auto_super_init->class->vft[COLOR_model__MProperty__intro]))(var_auto_super_init) /* intro on <var_auto_super_init:MMethod>*/;
var_auto_super_init_def = var89;
var90 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var90 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 107);
show_backtrace(1);
}
var_msig = var90;
var91 = ((val* (*)(val*))(var_auto_super_init_def->class->vft[COLOR_model__MMethodDef__msignature]))(var_auto_super_init_def) /* msignature on <var_auto_super_init_def:MMethodDef>*/;
if (var91 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 108);
show_backtrace(1);
}
var_supermsig = var91;
var93 = ((val* (*)(val*))(var_auto_super_init_def->class->vft[COLOR_model__MMethodDef__msignature]))(var_auto_super_init_def) /* msignature on <var_auto_super_init_def:MMethodDef>*/;
if (var93 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 109);
show_backtrace(1);
} else {
var94 = ((long (*)(val*))(var93->class->vft[COLOR_model__MSignature__arity]))(var93) /* arity on <var93:nullable MSignature>*/;
}
var95 = 0;
{ /* Inline kernel#Int#!= (var94,var95) */
var98 = var94 == var95;
var99 = !var98;
var96 = var99;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var_ = var96;
if (var96){
var100 = ((val* (*)(val*))(var_auto_super_init_def->class->vft[COLOR_model__MMethodDef__msignature]))(var_auto_super_init_def) /* msignature on <var_auto_super_init_def:MMethodDef>*/;
if (var100 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 109);
show_backtrace(1);
} else {
var101 = ((long (*)(val*))(var100->class->vft[COLOR_model__MSignature__arity]))(var100) /* arity on <var100:nullable MSignature>*/;
}
var102 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var102 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/auto_super_init.nit", 109);
show_backtrace(1);
} else {
var103 = ((long (*)(val*))(var102->class->vft[COLOR_model__MSignature__arity]))(var102) /* arity on <var102:nullable MSignature>*/;
}
{ /* Inline kernel#Int#!= (var101,var103) */
var106 = var101 == var103;
var107 = !var106;
var104 = var107;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
var92 = var104;
} else {
var92 = var_;
}
if (var92){
if (varonce108) {
var109 = varonce108;
} else {
var110 = "Problem with signature of constructor ";
var111 = 38;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = ". Expected ";
var116 = 11;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 5;
var120 = NEW_array__NativeArray(var119, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var120)->values[0] = (val*) var109;
((struct instance_array__NativeArray*)var120)->values[1] = (val*) var_auto_super_init_def;
((struct instance_array__NativeArray*)var120)->values[2] = (val*) var_supermsig;
((struct instance_array__NativeArray*)var120)->values[3] = (val*) var114;
((struct instance_array__NativeArray*)var120)->values[4] = (val*) var_msig;
((void (*)(val*, val*, long))(var118->class->vft[COLOR_array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
var121 = ((val* (*)(val*))(var118->class->vft[COLOR_string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var121) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
}
CONTINUE_label122: (void)0;
((void (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__next]))(var86) /* next on <var86:Iterator[nullable Object]>*/;
}
BREAK_label122: (void)0;
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
val* var /* : nullable MMethod */;
val* var_mproperty /* var mproperty: nullable MMethod */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__mproperty]))(self) /* mproperty on <self:ASendExpr>*/;
var_mproperty = var;
var1 = NULL;
if (var_mproperty == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:nullable MMethod(MMethod)>*/;
if (var3){
var4 = 1;
((void (*)(val*, short int))(var_v->class->vft[COLOR_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d]))(var_v, var4) /* has_explicit_super_init= on <var_v:AutoSuperInitVisitor>*/;
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
