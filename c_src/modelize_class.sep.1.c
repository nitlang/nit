#include "modelize_class.sep.0.h"
/* method modelize_class#ToolContext#modelize_class_phase for (self: ToolContext): Phase */
val* modelize_class__ToolContext__modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ToolContext#modelize_class_phase for (self: Object): Phase */
val* VIRTUAL_modelize_class__ToolContext__modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
val* var3 /* : Phase */;
{ /* Inline modelize_class#ToolContext#modelize_class_phase (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 23);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelizeClassPhase#process_nmodule for (self: ModelizeClassPhase, AModule) */
void modelize_class__ModelizeClassPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : ModelBuilder */;
var_nmodule = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ModelizeClassPhase> */
var2 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizeClassPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = modelbuilder__ToolContext__modelbuilder(var);
}
{
modelize_class__ModelBuilder__build_classes(var3, var_nmodule); /* Direct call modelize_class#ModelBuilder#build_classes on <var3:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_class#ModelizeClassPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_modelize_class__ModelizeClassPhase__process_nmodule(val* self, val* p0) {
modelize_class__ModelizeClassPhase__process_nmodule(self, p0); /* Direct call modelize_class#ModelizeClassPhase#process_nmodule on <self:Object(ModelizeClassPhase)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclass for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__build_a_mclass(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
long var3 /* : Int */;
long var_arity /* var arity: Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable TClassid */;
val* var6 /* : String */;
val* var_name /* var name: String */;
val* var7 /* : AClasskind */;
val* var_nkind /* var nkind: nullable AClasskind */;
val* var8 /* : MClassKind */;
val* var_mkind /* var mkind: MClassKind */;
val* var9 /* : AVisibility */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var10 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: nullable MVisibility */;
val* var11 /* : ANodes[AFormaldef] */;
val* var13 /* : ANodes[AFormaldef] */;
long var14 /* : Int */;
val* var15 /* : MVisibility */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : MVisibility */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : null */;
val* var47 /* : MClassKind */;
val* var48 /* : null */;
val* var49 /* : MVisibility */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : null */;
val* var59 /* : MClassKind */;
val* var60 /* : null */;
val* var61 /* : MVisibility */;
val* var62 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var63 /* : null */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
short int var_ /* var : Bool */;
val* var74 /* : nullable TKwredef */;
val* var75 /* : null */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var_other79 /* var other: nullable Object */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
val* var93 /* : Array[Object] */;
long var94 /* : Int */;
val* var95 /* : NativeArray[Object] */;
val* var96 /* : String */;
val* var97 /* : MClass */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
short int var_102 /* var : Bool */;
val* var103 /* : Map[MClass, AClassdef] */;
val* var105 /* : Map[MClass, AClassdef] */;
short int var106 /* : Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : Map[MClass, AClassdef] */;
val* var119 /* : Map[MClass, AClassdef] */;
val* var120 /* : nullable Object */;
val* var121 /* : Location */;
long var122 /* : Int */;
long var124 /* : Int */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
val* var130 /* : Array[Object] */;
long var131 /* : Int */;
val* var132 /* : NativeArray[Object] */;
val* var133 /* : Object */;
val* var134 /* : String */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
short int var_139 /* var : Bool */;
val* var140 /* : nullable TKwredef */;
val* var141 /* : null */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
val* var158 /* : Array[Object] */;
long var159 /* : Int */;
val* var160 /* : NativeArray[Object] */;
val* var161 /* : String */;
long var162 /* : Int */;
long var164 /* : Int */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
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
long var180 /* : Int */;
long var182 /* : Int */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : Array[Object] */;
long var189 /* : Int */;
val* var190 /* : NativeArray[Object] */;
val* var191 /* : Object */;
val* var192 /* : Object */;
val* var193 /* : String */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
val* var196 /* : null */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var_203 /* var : Bool */;
val* var204 /* : MClassKind */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var_211 /* var : Bool */;
val* var212 /* : MClassKind */;
val* var214 /* : MClassKind */;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
long var224 /* : Int */;
val* var225 /* : FlatString */;
val* var226 /* : MClassKind */;
val* var228 /* : MClassKind */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : FlatString */;
val* var234 /* : Array[Object] */;
long var235 /* : Int */;
val* var236 /* : NativeArray[Object] */;
val* var237 /* : String */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
val* var240 /* : null */;
short int var241 /* : Bool */;
short int var242 /* : Bool */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var_247 /* var : Bool */;
val* var248 /* : MVisibility */;
short int var249 /* : Bool */;
short int var250 /* : Bool */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var_255 /* var : Bool */;
val* var256 /* : MVisibility */;
val* var258 /* : MVisibility */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
short int var264 /* : Bool */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
long var268 /* : Int */;
val* var269 /* : FlatString */;
val* var270 /* : MVisibility */;
val* var272 /* : MVisibility */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : FlatString */;
val* var278 /* : Array[Object] */;
long var279 /* : Int */;
val* var280 /* : NativeArray[Object] */;
val* var281 /* : String */;
val* var283 /* : Map[MClass, AClassdef] */;
val* var285 /* : Map[MClass, AClassdef] */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
val* var288 /* : Map[MClass, AClassdef] */;
val* var290 /* : Map[MClass, AClassdef] */;
val* var291 /* : Array[AClassdef] */;
long var292 /* : Int */;
val* var_293 /* var : Array[AClassdef] */;
val* var295 /* : Map[MClass, AClassdef] */;
val* var297 /* : Map[MClass, AClassdef] */;
val* var298 /* : nullable Object */;
val* var299 /* : nullable Array[AClassdef] */;
val* var301 /* : nullable Array[AClassdef] */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 39);
show_backtrace(1);
}
var_mmodule = var;
var3 = 0;
var_arity = var3;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var4 = 0;
} else {
var4 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var4){
{
var5 = parser_nodes__AStdClassdef__n_id(var_nclassdef);
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 48);
show_backtrace(1);
} else {
var6 = lexer_work__Token__text(var5);
}
var_name = var6;
{
var7 = parser_nodes__AStdClassdef__n_classkind(var_nclassdef);
}
var_nkind = var7;
{
var8 = ((val* (*)(val*))(var_nkind->class->vft[COLOR_modelize_class__AClasskind__mkind]))(var_nkind) /* mkind on <var_nkind:nullable AClasskind(AClasskind)>*/;
}
var_mkind = var8;
{
var9 = parser_nodes__AStdClassdef__n_visibility(var_nclassdef);
}
var_nvisibility = var9;
{
var10 = ((val* (*)(val*))(var_nvisibility->class->vft[COLOR_modelbuilder__AVisibility__mvisibility]))(var_nvisibility) /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
}
var_mvisibility = var10;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var13 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 824);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = parser_nodes__ANodes__length(var11);
}
var_arity = var14;
{
var15 = model_base__Object__protected_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var15) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other = var15;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var21 = var_mvisibility == var_other;
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
if (varonce) {
var22 = varonce;
} else {
var23 = "Error: only properties can be protected.";
var24 = 40;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
{
modelbuilder__ModelBuilder__error(self, var_nvisibility, var22); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
var26 = model_base__Object__intrude_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var26) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other = var26;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var32 = var_mvisibility == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
if (varonce33) {
var34 = varonce33;
} else {
var35 = "Error: intrude is not a legal visibility for classes.";
var36 = 53;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
modelbuilder__ModelBuilder__error(self, var_nvisibility, var34); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
} else {
/* <var_nclassdef:AClassdef> isa ATopClassdef */
cltype39 = type_parser_nodes__ATopClassdef.color;
idtype40 = type_parser_nodes__ATopClassdef.id;
if(cltype39 >= var_nclassdef->type->table_size) {
var38 = 0;
} else {
var38 = var_nclassdef->type->type_table[cltype39] == idtype40;
}
if (var38){
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Object";
var44 = 6;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var_name = var42;
var46 = NULL;
var_nkind = var46;
{
var47 = model__Object__interface_kind(self);
}
var_mkind = var47;
var48 = NULL;
var_nvisibility = var48;
{
var49 = model_base__Object__public_visibility(self);
}
var_mvisibility = var49;
} else {
/* <var_nclassdef:AClassdef> isa AMainClassdef */
cltype51 = type_parser_nodes__AMainClassdef.color;
idtype52 = type_parser_nodes__AMainClassdef.id;
if(cltype51 >= var_nclassdef->type->table_size) {
var50 = 0;
} else {
var50 = var_nclassdef->type->type_table[cltype51] == idtype52;
}
if (var50){
if (varonce53) {
var54 = varonce53;
} else {
var55 = "Sys";
var56 = 3;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var_name = var54;
var58 = NULL;
var_nkind = var58;
{
var59 = model__Object__concrete_kind(self);
}
var_mkind = var59;
var60 = NULL;
var_nvisibility = var60;
{
var61 = model_base__Object__public_visibility(self);
}
var_mvisibility = var61;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 74);
show_backtrace(1);
}
}
}
{
var62 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nclassdef, var_mmodule, var_name);
}
var_mclass = var62;
var63 = NULL;
if (var_mclass == NULL) {
var64 = 1; /* is null */
} else {
var64 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var63) on <var_mclass:nullable MClass> */
var_other = var63;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var69 = var_mclass == var_other;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype72 = type_parser_nodes__AStdClassdef.color;
idtype73 = type_parser_nodes__AStdClassdef.id;
if(cltype72 >= var_nclassdef->type->table_size) {
var71 = 0;
} else {
var71 = var_nclassdef->type->type_table[cltype72] == idtype73;
}
var_ = var71;
if (var71){
{
var74 = parser_nodes__AStdClassdef__n_kwredef(var_nclassdef);
}
var75 = NULL;
if (var74 == NULL) {
var76 = 0; /* is null */
} else {
var76 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var74,var75) on <var74:nullable TKwredef> */
var_other79 = var75;
{
var81 = ((short int (*)(val*, val*))(var74->class->vft[COLOR_kernel__Object___61d_61d]))(var74, var_other79) /* == on <var74:nullable TKwredef(TKwredef)>*/;
var80 = var81;
}
var82 = !var80;
var77 = var82;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
var76 = var77;
}
var70 = var76;
} else {
var70 = var_;
}
if (var70){
if (varonce83) {
var84 = varonce83;
} else {
var85 = "Redef error: No imported class ";
var86 = 31;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = " to refine.";
var91 = 11;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
var93 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var93 = array_instance Array[Object] */
var94 = 3;
var95 = NEW_array__NativeArray(var94, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var95)->values[0] = (val*) var84;
((struct instance_array__NativeArray*)var95)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var95)->values[2] = (val*) var89;
{
((void (*)(val*, val*, long))(var93->class->vft[COLOR_array__Array__with_native]))(var93, var95, var94) /* with_native on <var93:Array[Object]>*/;
}
}
{
var96 = ((val* (*)(val*))(var93->class->vft[COLOR_string__Object__to_s]))(var93) /* to_s on <var93:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var96); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var97 = NEW_model__MClass(&type_model__MClass);
{
model__MClass__init(var97, var_mmodule, var_name, var_arity, var_mkind, var_mvisibility); /* Direct call model#MClass#init on <var97:MClass>*/
}
var_mclass = var97;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype100 = type_parser_nodes__AStdClassdef.color;
idtype101 = type_parser_nodes__AStdClassdef.id;
if(cltype100 >= var_nclassdef->type->table_size) {
var99 = 0;
} else {
var99 = var_nclassdef->type->type_table[cltype100] == idtype101;
}
var_102 = var99;
if (var99){
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var105 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 515);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = abstract_collection__MapRead__has_key(var103, var_mclass);
}
var98 = var106;
} else {
var98 = var_102;
}
if (var98){
if (varonce107) {
var108 = varonce107;
} else {
var109 = "Error: A class ";
var110 = 15;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = " is already defined at line ";
var115 = 28;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var119 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 515);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = ((val* (*)(val*, val*))(var117->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var117, var_mclass) /* [] on <var117:Map[MClass, AClassdef]>*/;
}
{
var121 = parser_nodes__ANode__location(var120);
}
{
{ /* Inline location#Location#line_start (var121) on <var121:Location> */
var124 = var121->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var121:Location> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = ".";
var128 = 1;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
var130 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var130 = array_instance Array[Object] */
var131 = 5;
var132 = NEW_array__NativeArray(var131, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var132)->values[0] = (val*) var108;
((struct instance_array__NativeArray*)var132)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var132)->values[2] = (val*) var113;
var133 = BOX_kernel__Int(var122); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var132)->values[3] = (val*) var133;
((struct instance_array__NativeArray*)var132)->values[4] = (val*) var126;
{
((void (*)(val*, val*, long))(var130->class->vft[COLOR_array__Array__with_native]))(var130, var132, var131) /* with_native on <var130:Array[Object]>*/;
}
}
{
var134 = ((val* (*)(val*))(var130->class->vft[COLOR_string__Object__to_s]))(var130) /* to_s on <var130:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var134); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype137 = type_parser_nodes__AStdClassdef.color;
idtype138 = type_parser_nodes__AStdClassdef.id;
if(cltype137 >= var_nclassdef->type->table_size) {
var136 = 0;
} else {
var136 = var_nclassdef->type->type_table[cltype137] == idtype138;
}
var_139 = var136;
if (var136){
{
var140 = parser_nodes__AStdClassdef__n_kwredef(var_nclassdef);
}
var141 = NULL;
if (var140 == NULL) {
var142 = 1; /* is null */
} else {
var142 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var140,var141) on <var140:nullable TKwredef> */
var_other = var141;
{
{ /* Inline kernel#Object#is_same_instance (var140,var_other) on <var140:nullable TKwredef(TKwredef)> */
var147 = var140 == var_other;
var145 = var147;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
var143 = var145;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
var142 = var143;
}
var135 = var142;
} else {
var135 = var_139;
}
if (var135){
if (varonce148) {
var149 = varonce148;
} else {
var150 = "Redef error: ";
var151 = 13;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = " is an imported class. Add the redef keyword to refine it.";
var156 = 58;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
var158 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var158 = array_instance Array[Object] */
var159 = 3;
var160 = NEW_array__NativeArray(var159, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var160)->values[0] = (val*) var149;
((struct instance_array__NativeArray*)var160)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var160)->values[2] = (val*) var154;
{
((void (*)(val*, val*, long))(var158->class->vft[COLOR_array__Array__with_native]))(var158, var160, var159) /* with_native on <var158:Array[Object]>*/;
}
}
{
var161 = ((val* (*)(val*))(var158->class->vft[COLOR_string__Object__to_s]))(var158) /* to_s on <var158:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var161); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var164 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var162,var_arity) on <var162:Int> */
var168 = var162 == var_arity;
var169 = !var168;
var166 = var169;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
var165 = var166;
}
if (var165){
if (varonce170) {
var171 = varonce170;
} else {
var172 = "Redef error: Formal parameter arity missmatch; got ";
var173 = 51;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = ", expected ";
var178 = 11;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var182 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var180 = var182;
RET_LABEL181:(void)0;
}
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = ".";
var186 = 1;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 5;
var190 = NEW_array__NativeArray(var189, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var190)->values[0] = (val*) var171;
var191 = BOX_kernel__Int(var_arity); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var190)->values[1] = (val*) var191;
((struct instance_array__NativeArray*)var190)->values[2] = (val*) var176;
var192 = BOX_kernel__Int(var180); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var190)->values[3] = (val*) var192;
((struct instance_array__NativeArray*)var190)->values[4] = (val*) var184;
{
((void (*)(val*, val*, long))(var188->class->vft[COLOR_array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
}
{
var193 = ((val* (*)(val*))(var188->class->vft[COLOR_string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var193); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
var196 = NULL;
if (var_nkind == NULL) {
var197 = 0; /* is null */
} else {
var197 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nkind,var196) on <var_nkind:nullable AClasskind> */
var_other79 = var196;
{
var201 = ((short int (*)(val*, val*))(var_nkind->class->vft[COLOR_kernel__Object___61d_61d]))(var_nkind, var_other79) /* == on <var_nkind:nullable AClasskind(AClasskind)>*/;
var200 = var201;
}
var202 = !var200;
var198 = var202;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
var197 = var198;
}
var_203 = var197;
if (var197){
{
var204 = model__Object__concrete_kind(self);
}
{
{ /* Inline kernel#Object#!= (var_mkind,var204) on <var_mkind:MClassKind> */
var_other79 = var204;
{
var209 = ((short int (*)(val*, val*))(var_mkind->class->vft[COLOR_kernel__Object___61d_61d]))(var_mkind, var_other79) /* == on <var_mkind:MClassKind>*/;
var208 = var209;
}
var210 = !var208;
var206 = var210;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
var205 = var206;
}
var195 = var205;
} else {
var195 = var_203;
}
var_211 = var195;
if (var195){
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var214 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var214 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var212 = var214;
RET_LABEL213:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var212,var_mkind) on <var212:MClassKind> */
var_other79 = var_mkind;
{
var219 = ((short int (*)(val*, val*))(var212->class->vft[COLOR_kernel__Object___61d_61d]))(var212, var_other79) /* == on <var212:MClassKind>*/;
var218 = var219;
}
var220 = !var218;
var216 = var220;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
var215 = var216;
}
var194 = var215;
} else {
var194 = var_211;
}
if (var194){
if (varonce221) {
var222 = varonce221;
} else {
var223 = "Error: refinement changed the kind from a ";
var224 = 42;
var225 = string__NativeString__to_s_with_length(var223, var224);
var222 = var225;
varonce221 = var222;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var228 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
if (varonce229) {
var230 = varonce229;
} else {
var231 = " to a ";
var232 = 6;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
var234 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var234 = array_instance Array[Object] */
var235 = 4;
var236 = NEW_array__NativeArray(var235, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var236)->values[0] = (val*) var222;
((struct instance_array__NativeArray*)var236)->values[1] = (val*) var226;
((struct instance_array__NativeArray*)var236)->values[2] = (val*) var230;
((struct instance_array__NativeArray*)var236)->values[3] = (val*) var_mkind;
{
((void (*)(val*, val*, long))(var234->class->vft[COLOR_array__Array__with_native]))(var234, var236, var235) /* with_native on <var234:Array[Object]>*/;
}
}
{
var237 = ((val* (*)(val*))(var234->class->vft[COLOR_string__Object__to_s]))(var234) /* to_s on <var234:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nkind, var237); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
var240 = NULL;
if (var_nvisibility == NULL) {
var241 = 0; /* is null */
} else {
var241 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,var240) on <var_nvisibility:nullable AVisibility> */
var_other79 = var240;
{
var245 = ((short int (*)(val*, val*))(var_nvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_nvisibility, var_other79) /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
var244 = var245;
}
var246 = !var244;
var242 = var246;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
var241 = var242;
}
var_247 = var241;
if (var241){
{
var248 = model_base__Object__public_visibility(self);
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var248) on <var_mvisibility:nullable MVisibility(MVisibility)> */
var_other79 = var248;
{
var253 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_mvisibility, var_other79) /* == on <var_mvisibility:nullable MVisibility(MVisibility)>*/;
var252 = var253;
}
var254 = !var252;
var250 = var254;
goto RET_LABEL251;
RET_LABEL251:(void)0;
}
var249 = var250;
}
var239 = var249;
} else {
var239 = var_247;
}
var_255 = var239;
if (var239){
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var258 = var_mclass->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 359);
show_backtrace(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var256,var_mvisibility) on <var256:MVisibility> */
var_other79 = var_mvisibility;
{
var263 = ((short int (*)(val*, val*))(var256->class->vft[COLOR_kernel__Object___61d_61d]))(var256, var_other79) /* == on <var256:MVisibility>*/;
var262 = var263;
}
var264 = !var262;
var260 = var264;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
var259 = var260;
}
var238 = var259;
} else {
var238 = var_255;
}
if (var238){
if (varonce265) {
var266 = varonce265;
} else {
var267 = "Error: refinement changed the visibility from a ";
var268 = 48;
var269 = string__NativeString__to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var272 = var_mclass->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var272 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 359);
show_backtrace(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
if (varonce273) {
var274 = varonce273;
} else {
var275 = " to a ";
var276 = 6;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
var278 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var278 = array_instance Array[Object] */
var279 = 4;
var280 = NEW_array__NativeArray(var279, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var280)->values[0] = (val*) var266;
((struct instance_array__NativeArray*)var280)->values[1] = (val*) var270;
((struct instance_array__NativeArray*)var280)->values[2] = (val*) var274;
((struct instance_array__NativeArray*)var280)->values[3] = (val*) var_mvisibility;
{
((void (*)(val*, val*, long))(var278->class->vft[COLOR_array__Array__with_native]))(var278, var280, var279) /* with_native on <var278:Array[Object]>*/;
}
}
{
var281 = ((val* (*)(val*))(var278->class->vft[COLOR_string__Object__to_s]))(var278) /* to_s on <var278:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nvisibility, var281); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
}
}
}
}
}
{
{ /* Inline modelize_class#AClassdef#mclass= (var_nclassdef,var_mclass) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclass].val = var_mclass; /* _mclass on <var_nclassdef:AClassdef> */
RET_LABEL282:(void)0;
}
}
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var285 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 515);
show_backtrace(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
var286 = abstract_collection__MapRead__has_key(var283, var_mclass);
}
var287 = !var286;
if (var287){
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var290 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var290 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 515);
show_backtrace(1);
}
var288 = var290;
RET_LABEL289:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var288->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var288, var_mclass, var_nclassdef) /* []= on <var288:Map[MClass, AClassdef]>*/;
}
var291 = NEW_array__Array(&type_array__Arrayparser_nodes__AClassdef);
var292 = 1;
{
array__Array__with_capacity(var291, var292); /* Direct call array#Array#with_capacity on <var291:Array[AClassdef]>*/
}
var_293 = var291;
{
array__AbstractArray__push(var_293, var_nclassdef); /* Direct call array#AbstractArray#push on <var_293:Array[AClassdef]>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs= (var_nclassdef,var_293) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_modelize_class__AClassdef___all_defs].val = var_293; /* _all_defs on <var_nclassdef:AClassdef> */
RET_LABEL294:(void)0;
}
}
} else {
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var297 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var297 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 515);
show_backtrace(1);
}
var295 = var297;
RET_LABEL296:(void)0;
}
}
{
var298 = ((val* (*)(val*, val*))(var295->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var295, var_mclass) /* [] on <var295:Map[MClass, AClassdef]>*/;
}
{
{ /* Inline modelize_class#AClassdef#all_defs (var298) on <var298:nullable Object(AClassdef)> */
var301 = var298->attrs[COLOR_modelize_class__AClassdef___all_defs].val; /* _all_defs on <var298:nullable Object(AClassdef)> */
var299 = var301;
RET_LABEL300:(void)0;
}
}
if (var299 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 104);
show_backtrace(1);
} else {
array__Array__add(var299, var_nclassdef); /* Direct call array#Array#add on <var299:nullable Array[AClassdef]>*/
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclass for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__build_a_mclass(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__build_a_mclass(self, p0, p1); /* Direct call modelize_class#ModelBuilder#build_a_mclass on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclassdef for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__build_a_mclassdef(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var8 /* : nullable MClass */;
val* var10 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Map[MClass, AClassdef] */;
val* var20 /* : Map[MClass, AClassdef] */;
val* var21 /* : nullable Object */;
val* var_other_nclassdef /* var other_nclassdef: AClassdef */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other25 /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype;
int idtype;
short int var30 /* : Bool */;
val* var31 /* : nullable MClassDef */;
val* var33 /* : nullable MClassDef */;
val* var35 /* : Array[String] */;
val* var_names /* var names: Array[String] */;
val* var36 /* : Array[MType] */;
val* var_bounds /* var bounds: Array[MType] */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
short int var_ /* var : Bool */;
long var41 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name;
short int var50 /* : Bool */;
val* var51 /* : Range[Int] */;
long var52 /* : Int */;
long var53 /* : Int */;
long var55 /* : Int */;
val* var56 /* : Discrete */;
val* var57 /* : Discrete */;
val* var58 /* : Iterator[Discrete] */;
short int var59 /* : Bool */;
val* var60 /* : nullable Object */;
long var_i /* var i: Int */;
long var61 /* : Int */;
val* var62 /* : ANodes[AFormaldef] */;
val* var64 /* : ANodes[AFormaldef] */;
val* var65 /* : ANode */;
val* var_nfd /* var nfd: AFormaldef */;
val* var66 /* : TClassid */;
val* var67 /* : String */;
val* var_ptname /* var ptname: String */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : Array[Object] */;
long var80 /* : Int */;
val* var81 /* : NativeArray[Object] */;
val* var82 /* : String */;
val* var83 /* : SequenceRead[Char] */;
val* var85 /* : SequenceRead[Char] */;
val* var86 /* : Iterator[nullable Object] */;
short int var87 /* : Bool */;
val* var88 /* : nullable Object */;
char var_c /* var c: Char */;
char var89 /* : Char */;
short int var90 /* : Bool */;
char var91 /* : Char */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
short int var98 /* : Bool */;
short int var_99 /* var : Bool */;
char var100 /* : Char */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
short int var107 /* : Bool */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
val* var113 /* : Array[Object] */;
long var114 /* : Int */;
val* var115 /* : NativeArray[Object] */;
val* var116 /* : String */;
val* var117 /* : MClassType */;
val* var119 /* : MClassType */;
val* var120 /* : Array[MType] */;
val* var122 /* : Array[MType] */;
val* var123 /* : nullable Object */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const char* var_class_name127;
val* var130 /* : Range[Int] */;
long var131 /* : Int */;
long var132 /* : Int */;
long var134 /* : Int */;
val* var135 /* : Discrete */;
val* var136 /* : Discrete */;
val* var137 /* : Iterator[Discrete] */;
short int var138 /* : Bool */;
val* var139 /* : nullable Object */;
long var_i140 /* var i: Int */;
long var141 /* : Int */;
val* var142 /* : ANodes[AFormaldef] */;
val* var144 /* : ANodes[AFormaldef] */;
val* var145 /* : ANode */;
val* var_nfd146 /* var nfd: AFormaldef */;
val* var147 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
val* var148 /* : null */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : null */;
short int var156 /* : Bool */;
val* var157 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
val* var158 /* : null */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
val* var171 /* : nullable Object */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
long var175 /* : Int */;
val* var176 /* : FlatString */;
val* var177 /* : Array[Object] */;
long var178 /* : Int */;
val* var179 /* : NativeArray[Object] */;
val* var180 /* : String */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
int cltype184;
int idtype185;
short int var_186 /* var : Bool */;
val* var187 /* : MClass */;
val* var189 /* : MClass */;
val* var190 /* : MClassKind */;
val* var192 /* : MClassKind */;
val* var193 /* : MClassKind */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
short int var197 /* : Bool */;
short int var199 /* : Bool */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : FlatString */;
val* var210 /* : Array[Object] */;
long var211 /* : Int */;
val* var212 /* : NativeArray[Object] */;
val* var213 /* : String */;
val* var214 /* : Array[MClassDef] */;
val* var216 /* : Array[MClassDef] */;
short int var217 /* : Bool */;
val* var218 /* : MClassType */;
val* var220 /* : MClassType */;
val* var221 /* : MType */;
val* var_bound222 /* var bound: MType */;
val* var224 /* : MClassDef */;
val* var225 /* : MClassType */;
val* var227 /* : MClassType */;
val* var228 /* : Array[MType] */;
val* var230 /* : Array[MType] */;
val* var231 /* : nullable Object */;
val* var_bound232 /* var bound: MType */;
val* var235 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var236 /* : MClassDef */;
val* var237 /* : Location */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var239 /* : HashMap[MClassDef, AClassdef] */;
val* var241 /* : HashMap[MClassDef, AClassdef] */;
short int var242 /* : Bool */;
int cltype243;
int idtype244;
val* var245 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
val* var246 /* : null */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var250 /* : Bool */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
val* var253 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var256 /* : Bool */;
val* var257 /* : ToolContext */;
val* var259 /* : ToolContext */;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : NativeString */;
long var263 /* : Int */;
val* var264 /* : FlatString */;
val* var265 /* : MClassKind */;
val* var267 /* : MClassKind */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : FlatString */;
val* var273 /* : String */;
val* var274 /* : Array[Object] */;
long var275 /* : Int */;
val* var276 /* : NativeArray[Object] */;
val* var277 /* : String */;
long var278 /* : Int */;
val* var279 /* : ToolContext */;
val* var281 /* : ToolContext */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
val* var287 /* : MClassKind */;
val* var289 /* : MClassKind */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
long var293 /* : Int */;
val* var294 /* : FlatString */;
val* var295 /* : String */;
val* var296 /* : Array[Object] */;
long var297 /* : Int */;
val* var298 /* : NativeArray[Object] */;
val* var299 /* : String */;
long var300 /* : Int */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 111);
show_backtrace(1);
}
var_mmodule = var;
if (varonce) {
var3 = varonce;
} else {
var4 = "Object";
var5 = 6;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nmodule, var_mmodule, var3);
}
var_objectclass = var7;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var10 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_mclass = var8;
var11 = NULL;
if (var_mclass == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var11) on <var_mclass:nullable MClass> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var17 = var_mclass == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class#AModule#mclass2nclassdef (var_nmodule) on <var_nmodule:AModule> */
var20 = var_nmodule->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <var_nmodule:AModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 515);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val* (*)(val*, val*))(var18->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var18, var_mclass) /* [] on <var18:Map[MClass, AClassdef]>*/;
}
var_other_nclassdef = var21;
{
{ /* Inline kernel#Object#!= (var_other_nclassdef,var_nclassdef) on <var_other_nclassdef:AClassdef> */
var_other25 = var_nclassdef;
{
var27 = ((short int (*)(val*, val*))(var_other_nclassdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_other_nclassdef, var_other25) /* == on <var_other_nclassdef:AClassdef>*/;
var26 = var27;
}
var28 = !var26;
var23 = var28;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var29 = 0;
} else {
var29 = var_nclassdef->type->type_table[cltype] == idtype;
}
var30 = !var29;
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 119);
show_backtrace(1);
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_other_nclassdef) on <var_other_nclassdef:AClassdef> */
var33 = var_other_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_other_nclassdef:AClassdef> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef= (var_nclassdef,var31) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val = var31; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL34:(void)0;
}
}
goto RET_LABEL;
} else {
}
var35 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var35); /* Direct call array#Array#init on <var35:Array[String]>*/
}
var_names = var35;
var36 = NEW_array__Array(&type_array__Arraymodel__MType);
{
array__Array__init(var36); /* Direct call array#Array#init on <var36:Array[MType]>*/
}
var_bounds = var36;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype39 = type_parser_nodes__AStdClassdef.color;
idtype40 = type_parser_nodes__AStdClassdef.id;
if(cltype39 >= var_nclassdef->type->table_size) {
var38 = 0;
} else {
var38 = var_nclassdef->type->type_table[cltype39] == idtype40;
}
var_ = var38;
if (var38){
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var43 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var44 = 0;
{
{ /* Inline kernel#Int#> (var41,var44) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var47 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var50 = var41 > var44;
var45 = var50;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var37 = var45;
} else {
var37 = var_;
}
if (var37){
var51 = NEW_range__Range(&type_range__Rangekernel__Int);
var52 = 0;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var55 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = BOX_kernel__Int(var52); /* autobox from Int to Discrete */
var57 = BOX_kernel__Int(var53); /* autobox from Int to Discrete */
range__Range__without_last(var51, var56, var57); /* Direct call range#Range#without_last on <var51:Range[Int]>*/
}
{
var58 = range__Range__iterator(var51);
}
for(;;) {
{
var59 = ((short int (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var58) /* is_ok on <var58:Iterator[Discrete]>*/;
}
if(!var59) break;
{
var60 = ((val* (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__item]))(var58) /* item on <var58:Iterator[Discrete]>*/;
}
var61 = ((struct instance_kernel__Int*)var60)->value; /* autounbox from nullable Object to Int */;
var_i = var61;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var64 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 824);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = parser_nodes__ANodes___91d_93d(var62, var_i);
}
var_nfd = var65;
{
var66 = parser_nodes__AFormaldef__n_id(var_nfd);
}
{
var67 = lexer_work__Token__text(var66);
}
var_ptname = var67;
{
var68 = array__AbstractArrayRead__has(var_names, var_ptname);
}
if (var68){
if (varonce69) {
var70 = varonce69;
} else {
var71 = "Error: A formal parameter type `";
var72 = 32;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "\' already exists";
var77 = 16;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var79 = array_instance Array[Object] */
var80 = 3;
var81 = NEW_array__NativeArray(var80, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var81)->values[0] = (val*) var70;
((struct instance_array__NativeArray*)var81)->values[1] = (val*) var_ptname;
((struct instance_array__NativeArray*)var81)->values[2] = (val*) var75;
{
((void (*)(val*, val*, long))(var79->class->vft[COLOR_array__Array__with_native]))(var79, var81, var80) /* with_native on <var79:Array[Object]>*/;
}
}
{
var82 = ((val* (*)(val*))(var79->class->vft[COLOR_string__Object__to_s]))(var79) /* to_s on <var79:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nfd, var82); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#chars (var_ptname) on <var_ptname:String> */
var85 = var_ptname->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_ptname:String> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = ((val* (*)(val*))(var83->class->vft[COLOR_abstract_collection__Collection__iterator]))(var83) /* iterator on <var83:SequenceRead[Char]>*/;
}
for(;;) {
{
var87 = ((short int (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var86) /* is_ok on <var86:Iterator[nullable Object]>*/;
}
if(!var87) break;
{
var88 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__item]))(var86) /* item on <var86:Iterator[nullable Object]>*/;
}
var89 = ((struct instance_kernel__Char*)var88)->value; /* autounbox from nullable Object to Char */;
var_c = var89;
var91 = 'a';
{
{ /* Inline kernel#Char#>= (var_c,var91) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var91:Char> isa OTHER */
/* <var91:Char> isa OTHER */
var94 = 1; /* easy <var91:Char> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 501);
show_backtrace(1);
}
var98 = var_c >= var91;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_99 = var92;
if (var92){
var100 = 'z';
{
{ /* Inline kernel#Char#<= (var_c,var100) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var100:Char> isa OTHER */
/* <var100:Char> isa OTHER */
var103 = 1; /* easy <var100:Char> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 499);
show_backtrace(1);
}
var107 = var_c <= var100;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var90 = var101;
} else {
var90 = var_99;
}
if (var90){
if (varonce108) {
var109 = varonce108;
} else {
var110 = "Warning: lowercase in the formal parameter type ";
var111 = 48;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
var113 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var113 = array_instance Array[Object] */
var114 = 2;
var115 = NEW_array__NativeArray(var114, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var115)->values[0] = (val*) var109;
((struct instance_array__NativeArray*)var115)->values[1] = (val*) var_ptname;
{
((void (*)(val*, val*, long))(var113->class->vft[COLOR_array__Array__with_native]))(var113, var115, var114) /* with_native on <var113:Array[Object]>*/;
}
}
{
var116 = ((val* (*)(val*))(var113->class->vft[COLOR_string__Object__to_s]))(var113) /* to_s on <var113:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(self, var_nfd, var116); /* Direct call modelbuilder#ModelBuilder#warning on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__next]))(var86) /* next on <var86:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
array__Array__add(var_names, var_ptname); /* Direct call array#Array#add on <var_names:Array[String]>*/
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var119 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline model#MClassType#arguments (var117) on <var117:MClassType> */
var122 = var117->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var117:MClassType> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = array__Array___91d_93d(var120, var_i);
}
/* <var123:nullable Object(MType)> isa MParameterType */
cltype125 = type_model__MParameterType.color;
idtype126 = type_model__MParameterType.id;
if(cltype125 >= var123->type->table_size) {
var124 = 0;
} else {
var124 = var123->type->type_table[cltype125] == idtype126;
}
if (unlikely(!var124)) {
var_class_name127 = var123 == NULL ? "null" : var123->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MParameterType", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 140);
show_backtrace(1);
}
{
{ /* Inline modelize_class#AFormaldef#mtype= (var_nfd,var123) on <var_nfd:AFormaldef> */
var_nfd->attrs[COLOR_modelize_class__AFormaldef___mtype].val = var123; /* _mtype on <var_nfd:AFormaldef> */
RET_LABEL128:(void)0;
}
}
CONTINUE_label129: (void)0;
{
((void (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__next]))(var58) /* next on <var58:Iterator[Discrete]>*/;
}
}
BREAK_label129: (void)0;
var130 = NEW_range__Range(&type_range__Rangekernel__Int);
var131 = 0;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var134 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
var135 = BOX_kernel__Int(var131); /* autobox from Int to Discrete */
var136 = BOX_kernel__Int(var132); /* autobox from Int to Discrete */
range__Range__without_last(var130, var135, var136); /* Direct call range#Range#without_last on <var130:Range[Int]>*/
}
{
var137 = range__Range__iterator(var130);
}
for(;;) {
{
var138 = ((short int (*)(val*))(var137->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var137) /* is_ok on <var137:Iterator[Discrete]>*/;
}
if(!var138) break;
{
var139 = ((val* (*)(val*))(var137->class->vft[COLOR_abstract_collection__Iterator__item]))(var137) /* item on <var137:Iterator[Discrete]>*/;
}
var141 = ((struct instance_kernel__Int*)var139)->value; /* autounbox from nullable Object to Int */;
var_i140 = var141;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var144 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 824);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
var145 = parser_nodes__ANodes___91d_93d(var142, var_i140);
}
var_nfd146 = var145;
{
var147 = parser_nodes__AFormaldef__n_type(var_nfd146);
}
var_nfdt = var147;
var148 = NULL;
if (var_nfdt == NULL) {
var149 = 0; /* is null */
} else {
var149 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nfdt,var148) on <var_nfdt:nullable AType> */
var_other25 = var148;
{
var153 = ((short int (*)(val*, val*))(var_nfdt->class->vft[COLOR_kernel__Object___61d_61d]))(var_nfdt, var_other25) /* == on <var_nfdt:nullable AType(AType)>*/;
var152 = var153;
}
var154 = !var152;
var150 = var154;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
var149 = var150;
}
if (var149){
var155 = NULL;
var156 = 0;
{
var157 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, var_mmodule, var155, var_nfdt, var156);
}
var_bound = var157;
var158 = NULL;
if (var_bound == NULL) {
var159 = 1; /* is null */
} else {
var159 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound,var158) on <var_bound:nullable MType> */
var_other = var158;
{
{ /* Inline kernel#Object#is_same_instance (var_bound,var_other) on <var_bound:nullable MType(MType)> */
var164 = var_bound == var_other;
var162 = var164;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
}
var160 = var162;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
var159 = var160;
}
if (var159){
goto RET_LABEL;
} else {
}
{
var165 = ((short int (*)(val*))(var_bound->class->vft[COLOR_model__MType__need_anchor]))(var_bound) /* need_anchor on <var_bound:nullable MType(MType)>*/;
}
if (var165){
if (varonce166) {
var167 = varonce166;
} else {
var168 = "Error: Formal parameter type `";
var169 = 30;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
{
var171 = array__Array___91d_93d(var_names, var_i140);
}
if (varonce172) {
var173 = varonce172;
} else {
var174 = "\' bounded with a formal parameter type";
var175 = 38;
var176 = string__NativeString__to_s_with_length(var174, var175);
var173 = var176;
varonce172 = var173;
}
var177 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var177 = array_instance Array[Object] */
var178 = 3;
var179 = NEW_array__NativeArray(var178, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var179)->values[0] = (val*) var167;
((struct instance_array__NativeArray*)var179)->values[1] = (val*) var171;
((struct instance_array__NativeArray*)var179)->values[2] = (val*) var173;
{
((void (*)(val*, val*, long))(var177->class->vft[COLOR_array__Array__with_native]))(var177, var179, var178) /* with_native on <var177:Array[Object]>*/;
}
}
{
var180 = ((val* (*)(val*))(var177->class->vft[COLOR_string__Object__to_s]))(var177) /* to_s on <var177:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nfd146, var180); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
{
array__Array__add(var_bounds, var_bound); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd146,var_bound) on <var_nfd146:AFormaldef> */
var_nfd146->attrs[COLOR_modelize_class__AFormaldef___bound].val = var_bound; /* _bound on <var_nfd146:AFormaldef> */
RET_LABEL181:(void)0;
}
}
}
/* <var_bound:nullable MType(MType)> isa MClassType */
cltype184 = type_model__MClassType.color;
idtype185 = type_model__MClassType.id;
if(cltype184 >= var_bound->type->table_size) {
var183 = 0;
} else {
var183 = var_bound->type->type_table[cltype184] == idtype185;
}
var_186 = var183;
if (var183){
{
{ /* Inline model#MClassType#mclass (var_bound) on <var_bound:nullable MType(MClassType)> */
var189 = var_bound->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_bound:nullable MType(MClassType)> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var187) on <var187:MClass> */
var192 = var187->attrs[COLOR_model__MClass___kind].val; /* _kind on <var187:MClass> */
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
var193 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var190,var193) on <var190:MClassKind> */
var_other = var193;
{
{ /* Inline kernel#Object#is_same_instance (var190,var_other) on <var190:MClassKind> */
var199 = var190 == var_other;
var197 = var199;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
}
var195 = var197;
goto RET_LABEL196;
RET_LABEL196:(void)0;
}
var194 = var195;
}
var182 = var194;
} else {
var182 = var_186;
}
if (var182){
if (varonce200) {
var201 = varonce200;
} else {
var202 = "Warning: Useless formal parameter type since `";
var203 = 46;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
if (varonce205) {
var206 = varonce205;
} else {
var207 = "` cannnot have subclasses.";
var208 = 26;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
var210 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var210 = array_instance Array[Object] */
var211 = 3;
var212 = NEW_array__NativeArray(var211, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var212)->values[0] = (val*) var201;
((struct instance_array__NativeArray*)var212)->values[1] = (val*) var_bound;
((struct instance_array__NativeArray*)var212)->values[2] = (val*) var206;
{
((void (*)(val*, val*, long))(var210->class->vft[COLOR_array__Array__with_native]))(var210, var212, var211) /* with_native on <var210:Array[Object]>*/;
}
}
{
var213 = ((val* (*)(val*))(var210->class->vft[COLOR_string__Object__to_s]))(var210) /* to_s on <var210:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(self, var_nfdt, var213); /* Direct call modelbuilder#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var216 = var_mclass->attrs[COLOR_model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 392);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
var217 = array__AbstractArrayRead__is_empty(var214);
}
if (var217){
if (var_objectclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 162);
show_backtrace(1);
} else {
{ /* Inline model#MClass#mclass_type (var_objectclass) on <var_objectclass:nullable MClass> */
if (unlikely(var_objectclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var220 = var_objectclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
var221 = model__MType__as_nullable(var218);
}
var_bound222 = var221;
{
array__Array__add(var_bounds, var_bound222); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd146,var_bound222) on <var_nfd146:AFormaldef> */
var_nfd146->attrs[COLOR_modelize_class__AFormaldef___bound].val = var_bound222; /* _bound on <var_nfd146:AFormaldef> */
RET_LABEL223:(void)0;
}
}
} else {
{
var224 = model__MClass__intro(var_mclass);
}
{
{ /* Inline model#MClassDef#bound_mtype (var224) on <var224:MClassDef> */
var227 = var224->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var224:MClassDef> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline model#MClassType#arguments (var225) on <var225:MClassType> */
var230 = var225->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var225:MClassType> */
if (unlikely(var230 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
var231 = array__Array___91d_93d(var228, var_i140);
}
var_bound232 = var231;
{
array__Array__add(var_bounds, var_bound232); /* Direct call array#Array#add on <var_bounds:Array[MType]>*/
}
{
{ /* Inline modelize_class#AFormaldef#bound= (var_nfd146,var_bound232) on <var_nfd146:AFormaldef> */
var_nfd146->attrs[COLOR_modelize_class__AFormaldef___bound].val = var_bound232; /* _bound on <var_nfd146:AFormaldef> */
RET_LABEL233:(void)0;
}
}
}
}
CONTINUE_label234: (void)0;
{
((void (*)(val*))(var137->class->vft[COLOR_abstract_collection__Iterator__next]))(var137) /* next on <var137:Iterator[Discrete]>*/;
}
}
BREAK_label234: (void)0;
} else {
}
{
var235 = model__MClass__get_mtype(var_mclass, var_bounds);
}
var_bound_mtype = var235;
var236 = NEW_model__MClassDef(&type_model__MClassDef);
{
var237 = parser_nodes__ANode__location(var_nclassdef);
}
{
model__MClassDef__init(var236, var_mmodule, var_bound_mtype, var237, var_names); /* Direct call model#MClassDef#init on <var236:MClassDef>*/
}
var_mclassdef = var236;
{
{ /* Inline modelize_class#AClassdef#mclassdef= (var_nclassdef,var_mclassdef) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val = var_mclassdef; /* _mclassdef on <var_nclassdef:AClassdef> */
RET_LABEL238:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var241 = self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 399);
show_backtrace(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var239, var_mclassdef, var_nclassdef); /* Direct call hash_collection#HashMap#[]= on <var239:HashMap[MClassDef, AClassdef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype243 = type_parser_nodes__AStdClassdef.color;
idtype244 = type_parser_nodes__AStdClassdef.id;
if(cltype243 >= var_nclassdef->type->table_size) {
var242 = 0;
} else {
var242 = var_nclassdef->type->type_table[cltype243] == idtype244;
}
if (var242){
{
var245 = parser_nodes__AStdClassdef__n_doc(var_nclassdef);
}
var_ndoc = var245;
var246 = NULL;
if (var_ndoc == NULL) {
var247 = 0; /* is null */
} else {
var247 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,var246) on <var_ndoc:nullable ADoc> */
var_other25 = var246;
{
var251 = ((short int (*)(val*, val*))(var_ndoc->class->vft[COLOR_kernel__Object___61d_61d]))(var_ndoc, var_other25) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
var250 = var251;
}
var252 = !var250;
var248 = var252;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
var247 = var248;
}
if (var247){
{
var253 = modelbuilder__ADoc__to_mdoc(var_ndoc);
}
var_mdoc = var253;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mclassdef,var_mdoc) on <var_mclassdef:MClassDef> */
var_mclassdef->attrs[COLOR_mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mclassdef:MClassDef> */
RET_LABEL254:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mclassdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_mdoc__MDoc___original_mentity].val = var_mclassdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL255:(void)0;
}
}
} else {
}
} else {
}
{
var256 = model__MClassDef__is_intro(var_mclassdef);
}
if (var256){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var259 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var259 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
if (varonce260) {
var261 = varonce260;
} else {
var262 = " introduces new ";
var263 = 16;
var264 = string__NativeString__to_s_with_length(var262, var263);
var261 = var264;
varonce260 = var261;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var267 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var267 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = " ";
var271 = 1;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
{
var273 = model__MClass__full_name(var_mclass);
}
var274 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var274 = array_instance Array[Object] */
var275 = 5;
var276 = NEW_array__NativeArray(var275, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var276)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var276)->values[1] = (val*) var261;
((struct instance_array__NativeArray*)var276)->values[2] = (val*) var265;
((struct instance_array__NativeArray*)var276)->values[3] = (val*) var269;
((struct instance_array__NativeArray*)var276)->values[4] = (val*) var273;
{
((void (*)(val*, val*, long))(var274->class->vft[COLOR_array__Array__with_native]))(var274, var276, var275) /* with_native on <var274:Array[Object]>*/;
}
}
{
var277 = ((val* (*)(val*))(var274->class->vft[COLOR_string__Object__to_s]))(var274) /* to_s on <var274:Array[Object]>*/;
}
var278 = 3;
{
toolcontext__ToolContext__info(var257, var277, var278); /* Direct call toolcontext#ToolContext#info on <var257:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var281 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var281 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var279 = var281;
RET_LABEL280:(void)0;
}
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = " refine ";
var285 = 8;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var289 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
if (varonce290) {
var291 = varonce290;
} else {
var292 = " ";
var293 = 1;
var294 = string__NativeString__to_s_with_length(var292, var293);
var291 = var294;
varonce290 = var291;
}
{
var295 = model__MClass__full_name(var_mclass);
}
var296 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var296 = array_instance Array[Object] */
var297 = 5;
var298 = NEW_array__NativeArray(var297, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var298)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var298)->values[1] = (val*) var283;
((struct instance_array__NativeArray*)var298)->values[2] = (val*) var287;
((struct instance_array__NativeArray*)var298)->values[3] = (val*) var291;
((struct instance_array__NativeArray*)var298)->values[4] = (val*) var295;
{
((void (*)(val*, val*, long))(var296->class->vft[COLOR_array__Array__with_native]))(var296, var298, var297) /* with_native on <var296:Array[Object]>*/;
}
}
{
var299 = ((val* (*)(val*))(var296->class->vft[COLOR_string__Object__to_s]))(var296) /* to_s on <var296:Array[Object]>*/;
}
var300 = 3;
{
toolcontext__ToolContext__info(var279, var299, var300); /* Direct call toolcontext#ToolContext#info on <var279:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclassdef for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__build_a_mclassdef(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__build_a_mclassdef(self, p0, p1); /* Direct call modelize_class#ModelBuilder#build_a_mclassdef on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#collect_a_mclassdef_inheritance for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : nullable MClass */;
val* var_pointerclass /* var pointerclass: nullable MClass */;
val* var14 /* : nullable MClass */;
val* var16 /* : nullable MClass */;
val* var_mclass /* var mclass: MClass */;
val* var17 /* : nullable MClassDef */;
val* var19 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var20 /* : Bool */;
short int var_specobject /* var specobject: Bool */;
short int var21 /* : Bool */;
short int var_specpointer /* var specpointer: Bool */;
val* var22 /* : Array[MClassType] */;
val* var_supertypes /* var supertypes: Array[MClassType] */;
short int var23 /* : Bool */;
int cltype;
int idtype;
val* var24 /* : ANodes[ASuperclass] */;
val* var26 /* : ANodes[ASuperclass] */;
val* var27 /* : Iterator[ANode] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperclass */;
short int var30 /* : Bool */;
val* var31 /* : AType */;
val* var_ntype /* var ntype: AType */;
short int var32 /* : Bool */;
val* var33 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : MClassKind */;
val* var52 /* : MClassKind */;
val* var53 /* : MClass */;
val* var55 /* : MClass */;
val* var56 /* : MClassKind */;
val* var58 /* : MClassKind */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : MClassKind */;
val* var68 /* : MClassKind */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : MClass */;
val* var81 /* : MClass */;
val* var82 /* : MClassKind */;
val* var84 /* : MClassKind */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : MClass */;
val* var92 /* : MClass */;
val* var93 /* : Array[Object] */;
long var94 /* : Int */;
val* var95 /* : NativeArray[Object] */;
val* var96 /* : String */;
val* var97 /* : MClass */;
val* var99 /* : MClass */;
val* var100 /* : MClassKind */;
val* var102 /* : MClassKind */;
val* var103 /* : MClassKind */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var_ /* var : Bool */;
val* var113 /* : null */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
val* var_other117 /* var other: nullable Object */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
val* var122 /* : MClassKind */;
val* var124 /* : MClassKind */;
val* var125 /* : MClassKind */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
short int var_132 /* var : Bool */;
val* var133 /* : String */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
val* var147 /* : MClassType */;
val* var149 /* : MClassType */;
short int var150 /* : Bool */;
short int var_151 /* var : Bool */;
val* var152 /* : String */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : FlatString */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
val* var166 /* : MClassType */;
val* var168 /* : MClassType */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
val* var171 /* : ToolContext */;
val* var173 /* : ToolContext */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : FlatString */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : FlatString */;
val* var184 /* : String */;
val* var185 /* : Array[Object] */;
long var186 /* : Int */;
val* var187 /* : NativeArray[Object] */;
val* var188 /* : String */;
long var189 /* : Int */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 198);
show_backtrace(1);
}
var_mmodule = var;
if (varonce) {
var3 = varonce;
} else {
var4 = "Object";
var5 = 6;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nmodule, var_mmodule, var3);
}
var_objectclass = var7;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "Pointer";
var11 = 7;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
{
var13 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nmodule, var_mmodule, var9);
}
var_pointerclass = var13;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var16 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 201);
show_backtrace(1);
}
var_mclass = var14;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var19 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 202);
show_backtrace(1);
}
var_mclassdef = var17;
var20 = 1;
var_specobject = var20;
var21 = 1;
var_specpointer = var21;
var22 = NEW_array__Array(&type_array__Arraymodel__MClassType);
{
array__Array__init(var22); /* Direct call array#Array#init on <var22:Array[MClassType]>*/
}
var_supertypes = var22;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var23 = 0;
} else {
var23 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var23){
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var26 = var_nclassdef->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 828);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = parser_nodes__ANodes__iterator(var24);
}
for(;;) {
{
var28 = ((short int (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var27) /* is_ok on <var27:Iterator[ANode]>*/;
}
if(!var28) break;
{
var29 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__item]))(var27) /* item on <var27:Iterator[ANode]>*/;
}
var_nsc = var29;
var30 = 0;
var_specobject = var30;
{
var31 = parser_nodes__ASuperclass__n_type(var_nsc);
}
var_ntype = var31;
var32 = 0;
{
var33 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, var32);
}
var_mtype = var33;
var34 = NULL;
if (var_mtype == NULL) {
var35 = 1; /* is null */
} else {
var35 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var34) on <var_mtype:nullable MType> */
var_other = var34;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var40 = var_mtype == var_other;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
goto CONTINUE_label;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype42 = type_model__MClassType.color;
idtype43 = type_model__MClassType.id;
if(cltype42 >= var_mtype->type->table_size) {
var41 = 0;
} else {
var41 = var_mtype->type->type_table[cltype42] == idtype43;
}
var44 = !var41;
if (var44){
if (varonce45) {
var46 = varonce45;
} else {
var47 = "Error: supertypes cannot be a formal type";
var48 = 41;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var46); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var52 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var55 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var53) on <var53:MClass> */
var58 = var53->attrs[COLOR_model__MClass___kind].val; /* _kind on <var53:MClass> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = model__MClassKind__can_specialize(var50, var56);
}
var60 = !var59;
if (var60){
if (varonce61) {
var62 = varonce61;
} else {
var63 = "Error: ";
var64 = 7;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var68 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = " ";
var72 = 1;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = " cannot specialize ";
var77 = 19;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var81 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var79) on <var79:MClass> */
var84 = var79->attrs[COLOR_model__MClass___kind].val; /* _kind on <var79:MClass> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = " ";
var88 = 1;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var92 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
var93 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var93 = array_instance Array[Object] */
var94 = 8;
var95 = NEW_array__NativeArray(var94, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var95)->values[0] = (val*) var62;
((struct instance_array__NativeArray*)var95)->values[1] = (val*) var66;
((struct instance_array__NativeArray*)var95)->values[2] = (val*) var70;
((struct instance_array__NativeArray*)var95)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var95)->values[4] = (val*) var75;
((struct instance_array__NativeArray*)var95)->values[5] = (val*) var82;
((struct instance_array__NativeArray*)var95)->values[6] = (val*) var86;
((struct instance_array__NativeArray*)var95)->values[7] = (val*) var90;
{
((void (*)(val*, val*, long))(var93->class->vft[COLOR_array__Array__with_native]))(var93, var95, var94) /* with_native on <var93:Array[Object]>*/;
}
}
{
var96 = ((val* (*)(val*))(var93->class->vft[COLOR_string__Object__to_s]))(var93) /* to_s on <var93:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var96); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
array__Array__add(var_supertypes, var_mtype); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var99 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var97) on <var97:MClass> */
var102 = var97->attrs[COLOR_model__MClass___kind].val; /* _kind on <var97:MClass> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var100,var103) on <var100:MClassKind> */
var_other = var103;
{
{ /* Inline kernel#Object#is_same_instance (var100,var_other) on <var100:MClassKind> */
var109 = var100 == var_other;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
if (var104){
var110 = 0;
var_specpointer = var110;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__next]))(var27) /* next on <var27:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
} else {
}
{
var112 = model__MClassDef__is_intro(var_mclassdef);
}
var_ = var112;
if (var112){
var113 = NULL;
if (var_objectclass == NULL) {
var114 = 0; /* is null */
} else {
var114 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_objectclass,var113) on <var_objectclass:nullable MClass> */
var_other117 = var113;
{
var119 = ((short int (*)(val*, val*))(var_objectclass->class->vft[COLOR_kernel__Object___61d_61d]))(var_objectclass, var_other117) /* == on <var_objectclass:nullable MClass(MClass)>*/;
var118 = var119;
}
var120 = !var118;
var115 = var120;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
var114 = var115;
}
var111 = var114;
} else {
var111 = var_;
}
if (var111){
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var124 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
var125 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var122,var125) on <var122:MClassKind> */
var_other = var125;
{
{ /* Inline kernel#Object#is_same_instance (var122,var_other) on <var122:MClassKind> */
var131 = var122 == var_other;
var129 = var131;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
var126 = var127;
}
var_132 = var126;
if (var126){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var135 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = "Pointer";
var139 = 7;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
{
{ /* Inline kernel#Object#!= (var133,var137) on <var133:String> */
var_other117 = var137;
{
var145 = ((short int (*)(val*, val*))(var133->class->vft[COLOR_kernel__Object___61d_61d]))(var133, var_other117) /* == on <var133:String>*/;
var144 = var145;
}
var146 = !var144;
var142 = var146;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var141 = var142;
}
var121 = var141;
} else {
var121 = var_132;
}
if (var121){
if (var_specpointer){
if (var_pointerclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 234);
show_backtrace(1);
} else {
{ /* Inline model#MClass#mclass_type (var_pointerclass) on <var_pointerclass:nullable MClass> */
if (unlikely(var_pointerclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var149 = var_pointerclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_pointerclass:nullable MClass> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
array__Array__add(var_supertypes, var147); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
} else {
var_151 = var_specobject;
if (var_specobject){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var154 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = "Object";
var158 = 6;
var159 = string__NativeString__to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
{
{ /* Inline kernel#Object#!= (var152,var156) on <var152:String> */
var_other117 = var156;
{
var164 = ((short int (*)(val*, val*))(var152->class->vft[COLOR_kernel__Object___61d_61d]))(var152, var_other117) /* == on <var152:String>*/;
var163 = var164;
}
var165 = !var163;
var161 = var165;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var160 = var161;
}
var150 = var160;
} else {
var150 = var_151;
}
if (var150){
{
{ /* Inline model#MClass#mclass_type (var_objectclass) on <var_objectclass:nullable MClass(MClass)> */
var168 = var_objectclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_objectclass:nullable MClass(MClass)> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
array__Array__add(var_supertypes, var166); /* Direct call array#Array#add on <var_supertypes:Array[MClassType]>*/
}
} else {
}
}
} else {
}
{
model__MClassDef__set_supertypes(var_mclassdef, var_supertypes); /* Direct call model#MClassDef#set_supertypes on <var_mclassdef:MClassDef>*/
}
{
var169 = array__AbstractArrayRead__is_empty(var_supertypes);
}
var170 = !var169;
if (var170){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var173 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
if (varonce174) {
var175 = varonce174;
} else {
var176 = " new super-types: ";
var177 = 18;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
if (varonce179) {
var180 = varonce179;
} else {
var181 = ", ";
var182 = 2;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
{
var184 = string__Collection__join(var_supertypes, var180);
}
var185 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var185 = array_instance Array[Object] */
var186 = 3;
var187 = NEW_array__NativeArray(var186, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var187)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var187)->values[1] = (val*) var175;
((struct instance_array__NativeArray*)var187)->values[2] = (val*) var184;
{
((void (*)(val*, val*, long))(var185->class->vft[COLOR_array__Array__with_native]))(var185, var187, var186) /* with_native on <var185:Array[Object]>*/;
}
}
{
var188 = ((val* (*)(val*))(var185->class->vft[COLOR_string__Object__to_s]))(var185) /* to_s on <var185:Array[Object]>*/;
}
var189 = 3;
{
toolcontext__ToolContext__info(var171, var188, var189); /* Direct call toolcontext#ToolContext#info on <var171:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#collect_a_mclassdef_inheritance for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(self, p0, p1); /* Direct call modelize_class#ModelBuilder#collect_a_mclassdef_inheritance on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#check_supertypes for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__check_supertypes(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var8 /* : nullable MClass */;
val* var10 /* : nullable MClass */;
val* var_mclass /* var mclass: MClass */;
val* var11 /* : nullable MClassDef */;
val* var13 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var14 /* : Array[MClassType] */;
val* var16 /* : Array[MClassType] */;
val* var17 /* : ArrayIterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var20 /* : MClassType */;
val* var22 /* : MClassType */;
val* var23 /* : MClassType */;
val* var25 /* : MClassType */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 248);
show_backtrace(1);
}
var_mmodule = var;
if (varonce) {
var3 = varonce;
} else {
var4 = "Object";
var5 = 6;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nmodule, var_mmodule, var3);
}
var_objectclass = var7;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AClassdef> */
var10 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AClassdef> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 250);
show_backtrace(1);
}
var_mclass = var8;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var13 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 251);
show_backtrace(1);
}
var_mclassdef = var11;
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var16 = var_mclassdef->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 517);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = array__AbstractArrayRead__iterator(var14);
}
for(;;) {
{
var18 = array__ArrayIterator__is_ok(var17);
}
if(!var18) break;
{
var19 = array__ArrayIterator__item(var17);
}
var_s = var19;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var22 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var25 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = model__MType__is_subtype(var_s, var_mmodule, var20, var23);
}
if (var26){
if (varonce27) {
var28 = varonce27;
} else {
var29 = "Error: Inheritance loop for class ";
var30 = 34;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = " with type ";
var35 = 11;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 4;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var_mclass;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var39)->values[3] = (val*) var_s;
{
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
}
{
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var40); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var17); /* Direct call array#ArrayIterator#next on <var17:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#check_supertypes for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__check_supertypes(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__check_supertypes(self, p0, p1); /* Direct call modelize_class#ModelBuilder#check_supertypes on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_classes for (self: ModelBuilder, AModule) */
void modelize_class__ModelBuilder__build_classes(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_errcount /* var errcount: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var11 /* : nullable MModule */;
val* var13 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var14 /* : POSetElement[MModule] */;
val* var16 /* : POSetElement[MModule] */;
val* var17 /* : Collection[Object] */;
val* var18 /* : Iterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_imp /* var imp: MModule */;
val* var21 /* : HashMap[MModule, AModule] */;
val* var23 /* : HashMap[MModule, AModule] */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : HashMap[MModule, AModule] */;
val* var28 /* : HashMap[MModule, AModule] */;
val* var29 /* : nullable Object */;
val* var30 /* : ToolContext */;
val* var32 /* : ToolContext */;
long var33 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : ANodes[AClassdef] */;
val* var43 /* : ANodes[AClassdef] */;
val* var44 /* : Iterator[ANode] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var48 /* : ToolContext */;
val* var50 /* : ToolContext */;
long var51 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : ANodes[AClassdef] */;
val* var61 /* : ANodes[AClassdef] */;
val* var62 /* : Iterator[ANode] */;
short int var63 /* : Bool */;
val* var64 /* : nullable Object */;
val* var_nclassdef65 /* var nclassdef: AClassdef */;
val* var67 /* : ToolContext */;
val* var69 /* : ToolContext */;
long var70 /* : Int */;
long var72 /* : Int */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : ANodes[AClassdef] */;
val* var80 /* : ANodes[AClassdef] */;
val* var81 /* : Iterator[ANode] */;
short int var82 /* : Bool */;
val* var83 /* : nullable Object */;
val* var_nclassdef84 /* var nclassdef: AClassdef */;
val* var86 /* : ToolContext */;
val* var88 /* : ToolContext */;
long var89 /* : Int */;
long var91 /* : Int */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : Array[MClassDef] */;
val* var99 /* : Array[MClassDef] */;
val* var100 /* : ArrayIterator[nullable Object] */;
short int var101 /* : Bool */;
val* var102 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var104 /* : ToolContext */;
val* var106 /* : ToolContext */;
long var107 /* : Int */;
long var109 /* : Int */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : ANodes[AClassdef] */;
val* var117 /* : ANodes[AClassdef] */;
val* var118 /* : Iterator[ANode] */;
short int var119 /* : Bool */;
val* var120 /* : nullable Object */;
val* var_nclassdef121 /* var nclassdef: AClassdef */;
val* var123 /* : ToolContext */;
val* var125 /* : ToolContext */;
long var126 /* : Int */;
long var128 /* : Int */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
val* var134 /* : ANodes[AClassdef] */;
val* var136 /* : ANodes[AClassdef] */;
val* var137 /* : Iterator[ANode] */;
short int var138 /* : Bool */;
val* var139 /* : nullable Object */;
val* var_nclassdef140 /* var nclassdef: AClassdef */;
short int var141 /* : Bool */;
int cltype;
int idtype;
val* var142 /* : nullable MClassDef */;
val* var144 /* : nullable MClassDef */;
val* var_mclassdef145 /* var mclassdef: nullable MClassDef */;
val* var146 /* : ANodes[AFormaldef] */;
val* var148 /* : ANodes[AFormaldef] */;
val* var149 /* : Iterator[ANode] */;
short int var150 /* : Bool */;
val* var151 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var152 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var153 /* : Bool */;
val* var154 /* : null */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var_ /* var : Bool */;
val* var161 /* : nullable MType */;
val* var163 /* : nullable MType */;
val* var164 /* : null */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
val* var171 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
val* var172 /* : null */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
val* var_other176 /* var other: nullable Object */;
short int var177 /* : Bool */;
short int var179 /* : Bool */;
val* var181 /* : ANodes[ASuperclass] */;
val* var183 /* : ANodes[ASuperclass] */;
val* var184 /* : Iterator[ANode] */;
short int var185 /* : Bool */;
val* var186 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperclass */;
val* var187 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var188 /* : nullable MType */;
val* var190 /* : nullable MType */;
val* var191 /* : null */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
val* var198 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var199 /* : null */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
val* var208 /* : ToolContext */;
val* var210 /* : ToolContext */;
long var211 /* : Int */;
long var213 /* : Int */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
val* var219 /* : ANodes[AClassdef] */;
val* var221 /* : ANodes[AClassdef] */;
val* var222 /* : Iterator[ANode] */;
short int var223 /* : Bool */;
val* var224 /* : nullable Object */;
val* var_nclassdef225 /* var nclassdef: AClassdef */;
val* var226 /* : nullable MClassDef */;
val* var228 /* : nullable MClassDef */;
val* var_mclassdef229 /* var mclassdef: MClassDef */;
val* var230 /* : HashMap[MClass, MClassType] */;
val* var_superclasses /* var superclasses: HashMap[MClass, MClassType] */;
val* var231 /* : nullable POSetElement[MClassDef] */;
val* var233 /* : nullable POSetElement[MClassDef] */;
val* var234 /* : Collection[Object] */;
val* var235 /* : Iterator[nullable Object] */;
short int var236 /* : Bool */;
val* var237 /* : nullable Object */;
val* var_scd /* var scd: MClassDef */;
val* var238 /* : Array[MClassType] */;
val* var240 /* : Array[MClassType] */;
val* var241 /* : ArrayIterator[nullable Object] */;
short int var242 /* : Bool */;
val* var243 /* : nullable Object */;
val* var_st /* var st: MClassType */;
val* var244 /* : MClass */;
val* var246 /* : MClass */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
val* var249 /* : MClass */;
val* var251 /* : MClass */;
val* var252 /* : MClass */;
val* var254 /* : MClass */;
val* var255 /* : nullable Object */;
short int var256 /* : Bool */;
short int var257 /* : Bool */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
val* var262 /* : MClass */;
val* var264 /* : MClass */;
val* var265 /* : nullable Object */;
val* var266 /* : MClass */;
val* var268 /* : MClass */;
val* var269 /* : MClassType */;
val* var271 /* : MClassType */;
val* var272 /* : MClassType */;
val* var274 /* : MClassType */;
short int var275 /* : Bool */;
val* var276 /* : MType */;
val* var_st1 /* var st1: MClassType */;
val* var277 /* : MClass */;
val* var279 /* : MClass */;
val* var280 /* : MClassType */;
val* var282 /* : MClassType */;
val* var283 /* : MClassType */;
val* var285 /* : MClassType */;
short int var286 /* : Bool */;
val* var287 /* : MType */;
val* var_st2 /* var st2: MClassType */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var293 /* : Bool */;
static val* varonce;
val* var294 /* : String */;
char* var295 /* : NativeString */;
long var296 /* : Int */;
val* var297 /* : FlatString */;
val* var298 /* : MClass */;
val* var300 /* : MClass */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : FlatString */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : FlatString */;
val* var311 /* : Array[Object] */;
long var312 /* : Int */;
val* var313 /* : NativeArray[Object] */;
val* var314 /* : String */;
val* var318 /* : ToolContext */;
val* var320 /* : ToolContext */;
long var321 /* : Int */;
long var323 /* : Int */;
short int var324 /* : Bool */;
short int var325 /* : Bool */;
short int var327 /* : Bool */;
short int var328 /* : Bool */;
val* var329 /* : ANodes[AClassdef] */;
val* var331 /* : ANodes[AClassdef] */;
val* var332 /* : Iterator[ANode] */;
short int var333 /* : Bool */;
val* var334 /* : nullable Object */;
val* var_nclassdef335 /* var nclassdef: AClassdef */;
short int var336 /* : Bool */;
int cltype337;
int idtype338;
short int var339 /* : Bool */;
val* var341 /* : nullable MClassDef */;
val* var343 /* : nullable MClassDef */;
val* var_mclassdef344 /* var mclassdef: MClassDef */;
val* var345 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var346 /* : nullable POSetElement[MClassDef] */;
val* var348 /* : nullable POSetElement[MClassDef] */;
val* var349 /* : Collection[Object] */;
val* var350 /* : Iterator[nullable Object] */;
short int var351 /* : Bool */;
val* var352 /* : nullable Object */;
val* var_sup /* var sup: MClassDef */;
val* var353 /* : MClass */;
val* var355 /* : MClass */;
val* var357 /* : ArrayMap[MClass, AType] */;
val* var_seen_parents /* var seen_parents: ArrayMap[MClass, AType] */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : NativeString */;
long var361 /* : Int */;
val* var362 /* : FlatString */;
val* var363 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var364 /* : ANodes[ASuperclass] */;
val* var366 /* : ANodes[ASuperclass] */;
val* var367 /* : Iterator[ANode] */;
short int var368 /* : Bool */;
val* var369 /* : nullable Object */;
val* var_nsc370 /* var nsc: ASuperclass */;
val* var371 /* : AType */;
val* var_ntype372 /* var ntype: AType */;
val* var373 /* : nullable MType */;
val* var375 /* : nullable MType */;
val* var_mtype376 /* var mtype: nullable MType */;
val* var377 /* : null */;
short int var378 /* : Bool */;
short int var379 /* : Bool */;
short int var381 /* : Bool */;
short int var383 /* : Bool */;
short int var385 /* : Bool */;
int cltype386;
int idtype387;
val* var388 /* : MClass */;
val* var390 /* : MClass */;
val* var_sc /* var sc: MClass */;
short int var391 /* : Bool */;
short int var392 /* : Bool */;
short int var393 /* : Bool */;
short int var_394 /* var : Bool */;
short int var395 /* : Bool */;
short int var396 /* : Bool */;
short int var398 /* : Bool */;
short int var400 /* : Bool */;
short int var401 /* : Bool */;
val* var402 /* : Location */;
val* var403 /* : nullable SourceFile */;
val* var405 /* : nullable SourceFile */;
val* var406 /* : null */;
short int var407 /* : Bool */;
short int var408 /* : Bool */;
short int var410 /* : Bool */;
short int var411 /* : Bool */;
short int var412 /* : Bool */;
short int var_413 /* var : Bool */;
val* var414 /* : Location */;
val* var415 /* : nullable SourceFile */;
val* var417 /* : nullable SourceFile */;
val* var418 /* : String */;
val* var420 /* : String */;
short int var421 /* : Bool */;
short int var422 /* : Bool */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
long var426 /* : Int */;
val* var427 /* : FlatString */;
static val* varonce428;
val* var429 /* : String */;
char* var430 /* : NativeString */;
long var431 /* : Int */;
val* var432 /* : FlatString */;
val* var433 /* : MClass */;
val* var435 /* : MClass */;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
long var439 /* : Int */;
val* var440 /* : FlatString */;
val* var441 /* : Array[Object] */;
long var442 /* : Int */;
val* var443 /* : NativeArray[Object] */;
val* var444 /* : String */;
short int var445 /* : Bool */;
short int var446 /* : Bool */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
long var450 /* : Int */;
val* var451 /* : FlatString */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
long var455 /* : Int */;
val* var456 /* : FlatString */;
val* var457 /* : MClass */;
val* var459 /* : MClass */;
static val* varonce460;
val* var461 /* : String */;
char* var462 /* : NativeString */;
long var463 /* : Int */;
val* var464 /* : FlatString */;
val* var465 /* : Array[Object] */;
long var466 /* : Int */;
val* var467 /* : NativeArray[Object] */;
val* var468 /* : String */;
var_nmodule = p0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var:ToolContext> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_errcount = var3;
{
{ /* Inline modelize_class#AModule#build_classes_is_done (var_nmodule) on <var_nmodule:AModule> */
var8 = var_nmodule->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <var_nmodule:AModule> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6){
goto RET_LABEL;
} else {
}
var9 = 1;
{
{ /* Inline modelize_class#AModule#build_classes_is_done= (var_nmodule,var9) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s = var9; /* _build_classes_is_done on <var_nmodule:AModule> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var13 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 268);
show_backtrace(1);
}
var_mmodule = var11;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var16 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = poset__POSetElement__direct_greaters(var14);
}
{
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Collection__iterator]))(var17) /* iterator on <var17:Collection[Object](Collection[MModule])>*/;
}
for(;;) {
{
var19 = ((short int (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var18) /* is_ok on <var18:Iterator[nullable Object]>*/;
}
if(!var19) break;
{
var20 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__item]))(var18) /* item on <var18:Iterator[nullable Object]>*/;
}
var_imp = var20;
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var23 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 697);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = abstract_collection__MapRead__has_key(var21, var_imp);
}
var25 = !var24;
if (var25){
goto CONTINUE_label;
} else {
}
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var28 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 697);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = hash_collection__HashMap___91d_93d(var26, var_imp);
}
{
modelize_class__ModelBuilder__build_classes(self, var29); /* Direct call modelize_class#ModelBuilder#build_classes on <self:ModelBuilder>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__next]))(var18) /* next on <var18:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var32 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var30) on <var30:ToolContext> */
var35 = var30->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var30:ToolContext> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var33) on <var_errcount:Int> */
var39 = var_errcount == var33;
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var43 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = parser_nodes__ANodes__iterator(var41);
}
for(;;) {
{
var45 = ((short int (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var44) /* is_ok on <var44:Iterator[ANode]>*/;
}
if(!var45) break;
{
var46 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__item]))(var44) /* item on <var44:Iterator[ANode]>*/;
}
var_nclassdef = var46;
{
modelize_class__ModelBuilder__build_a_mclass(self, var_nmodule, var_nclassdef); /* Direct call modelize_class#ModelBuilder#build_a_mclass on <self:ModelBuilder>*/
}
CONTINUE_label47: (void)0;
{
((void (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__next]))(var44) /* next on <var44:Iterator[ANode]>*/;
}
}
BREAK_label47: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var50 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var48) on <var48:ToolContext> */
var53 = var48->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var48:ToolContext> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var51) on <var_errcount:Int> */
var57 = var_errcount == var51;
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var61 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = parser_nodes__ANodes__iterator(var59);
}
for(;;) {
{
var63 = ((short int (*)(val*))(var62->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var62) /* is_ok on <var62:Iterator[ANode]>*/;
}
if(!var63) break;
{
var64 = ((val* (*)(val*))(var62->class->vft[COLOR_abstract_collection__Iterator__item]))(var62) /* item on <var62:Iterator[ANode]>*/;
}
var_nclassdef65 = var64;
{
modelize_class__ModelBuilder__build_a_mclassdef(self, var_nmodule, var_nclassdef65); /* Direct call modelize_class#ModelBuilder#build_a_mclassdef on <self:ModelBuilder>*/
}
CONTINUE_label66: (void)0;
{
((void (*)(val*))(var62->class->vft[COLOR_abstract_collection__Iterator__next]))(var62) /* next on <var62:Iterator[ANode]>*/;
}
}
BREAK_label66: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var69 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var67) on <var67:ToolContext> */
var72 = var67->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var67:ToolContext> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var70) on <var_errcount:Int> */
var76 = var_errcount == var70;
var77 = !var76;
var74 = var77;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var73 = var74;
}
if (var73){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var80 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = parser_nodes__ANodes__iterator(var78);
}
for(;;) {
{
var82 = ((short int (*)(val*))(var81->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var81) /* is_ok on <var81:Iterator[ANode]>*/;
}
if(!var82) break;
{
var83 = ((val* (*)(val*))(var81->class->vft[COLOR_abstract_collection__Iterator__item]))(var81) /* item on <var81:Iterator[ANode]>*/;
}
var_nclassdef84 = var83;
{
modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(self, var_nmodule, var_nclassdef84); /* Direct call modelize_class#ModelBuilder#collect_a_mclassdef_inheritance on <self:ModelBuilder>*/
}
CONTINUE_label85: (void)0;
{
((void (*)(val*))(var81->class->vft[COLOR_abstract_collection__Iterator__next]))(var81) /* next on <var81:Iterator[ANode]>*/;
}
}
BREAK_label85: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var88 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var86) on <var86:ToolContext> */
var91 = var86->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var86:ToolContext> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var89) on <var_errcount:Int> */
var95 = var_errcount == var89;
var96 = !var95;
var93 = var96;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (var92){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MModule#mclassdefs (var_mmodule) on <var_mmodule:MModule> */
var99 = var_mmodule->attrs[COLOR_model__MModule___mclassdefs].val; /* _mclassdefs on <var_mmodule:MModule> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 141);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = array__AbstractArrayRead__iterator(var97);
}
for(;;) {
{
var101 = array__ArrayIterator__is_ok(var100);
}
if(!var101) break;
{
var102 = array__ArrayIterator__item(var100);
}
var_mclassdef = var102;
{
model__MClassDef__add_in_hierarchy(var_mclassdef); /* Direct call model#MClassDef#add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
CONTINUE_label103: (void)0;
{
array__ArrayIterator__next(var100); /* Direct call array#ArrayIterator#next on <var100:ArrayIterator[nullable Object]>*/
}
}
BREAK_label103: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var106 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var104) on <var104:ToolContext> */
var109 = var104->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var104:ToolContext> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var107) on <var_errcount:Int> */
var113 = var_errcount == var107;
var114 = !var113;
var111 = var114;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
var110 = var111;
}
if (var110){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var117 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
var118 = parser_nodes__ANodes__iterator(var115);
}
for(;;) {
{
var119 = ((short int (*)(val*))(var118->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var118) /* is_ok on <var118:Iterator[ANode]>*/;
}
if(!var119) break;
{
var120 = ((val* (*)(val*))(var118->class->vft[COLOR_abstract_collection__Iterator__item]))(var118) /* item on <var118:Iterator[ANode]>*/;
}
var_nclassdef121 = var120;
{
modelize_class__ModelBuilder__check_supertypes(self, var_nmodule, var_nclassdef121); /* Direct call modelize_class#ModelBuilder#check_supertypes on <self:ModelBuilder>*/
}
CONTINUE_label122: (void)0;
{
((void (*)(val*))(var118->class->vft[COLOR_abstract_collection__Iterator__next]))(var118) /* next on <var118:Iterator[ANode]>*/;
}
}
BREAK_label122: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var125 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var123) on <var123:ToolContext> */
var128 = var123->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var123:ToolContext> */
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var126) on <var_errcount:Int> */
var132 = var_errcount == var126;
var133 = !var132;
var130 = var133;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
var129 = var130;
}
if (var129){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var136 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
show_backtrace(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
var137 = parser_nodes__ANodes__iterator(var134);
}
for(;;) {
{
var138 = ((short int (*)(val*))(var137->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var137) /* is_ok on <var137:Iterator[ANode]>*/;
}
if(!var138) break;
{
var139 = ((val* (*)(val*))(var137->class->vft[COLOR_abstract_collection__Iterator__item]))(var137) /* item on <var137:Iterator[ANode]>*/;
}
var_nclassdef140 = var139;
/* <var_nclassdef140:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef140->type->table_size) {
var141 = 0;
} else {
var141 = var_nclassdef140->type->type_table[cltype] == idtype;
}
if (var141){
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef140) on <var_nclassdef140:AClassdef(AStdClassdef)> */
var144 = var_nclassdef140->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef140:AClassdef(AStdClassdef)> */
var142 = var144;
RET_LABEL143:(void)0;
}
}
var_mclassdef145 = var142;
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (var_nclassdef140) on <var_nclassdef140:AClassdef(AStdClassdef)> */
var148 = var_nclassdef140->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <var_nclassdef140:AClassdef(AStdClassdef)> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 824);
show_backtrace(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
var149 = parser_nodes__ANodes__iterator(var146);
}
for(;;) {
{
var150 = ((short int (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var149) /* is_ok on <var149:Iterator[ANode]>*/;
}
if(!var150) break;
{
var151 = ((val* (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__item]))(var149) /* item on <var149:Iterator[ANode]>*/;
}
var_nfd = var151;
{
var152 = parser_nodes__AFormaldef__n_type(var_nfd);
}
var_nfdt = var152;
var154 = NULL;
if (var_nfdt == NULL) {
var155 = 0; /* is null */
} else {
var155 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nfdt,var154) on <var_nfdt:nullable AType> */
var_other = var154;
{
var159 = ((short int (*)(val*, val*))(var_nfdt->class->vft[COLOR_kernel__Object___61d_61d]))(var_nfdt, var_other) /* == on <var_nfdt:nullable AType(AType)>*/;
var158 = var159;
}
var160 = !var158;
var156 = var160;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
var155 = var156;
}
var_ = var155;
if (var155){
{
{ /* Inline modelize_class#AType#mtype (var_nfdt) on <var_nfdt:nullable AType(AType)> */
var163 = var_nfdt->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_nfdt:nullable AType(AType)> */
var161 = var163;
RET_LABEL162:(void)0;
}
}
var164 = NULL;
if (var161 == NULL) {
var165 = 0; /* is null */
} else {
var165 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var161,var164) on <var161:nullable MType> */
var_other = var164;
{
var169 = ((short int (*)(val*, val*))(var161->class->vft[COLOR_kernel__Object___61d_61d]))(var161, var_other) /* == on <var161:nullable MType(MType)>*/;
var168 = var169;
}
var170 = !var168;
var166 = var170;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
var165 = var166;
}
var153 = var165;
} else {
var153 = var_;
}
if (var153){
{
var171 = modelize_class__ModelBuilder__resolve_mtype(self, var_mmodule, var_mclassdef145, var_nfdt);
}
var_bound = var171;
var172 = NULL;
if (var_bound == NULL) {
var173 = 1; /* is null */
} else {
var173 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound,var172) on <var_bound:nullable MType> */
var_other176 = var172;
{
{ /* Inline kernel#Object#is_same_instance (var_bound,var_other176) on <var_bound:nullable MType(MType)> */
var179 = var_bound == var_other176;
var177 = var179;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
}
var174 = var177;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
var173 = var174;
}
if (var173){
goto RET_LABEL;
} else {
}
} else {
}
CONTINUE_label180: (void)0;
{
((void (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__next]))(var149) /* next on <var149:Iterator[ANode]>*/;
}
}
BREAK_label180: (void)0;
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (var_nclassdef140) on <var_nclassdef140:AClassdef(AStdClassdef)> */
var183 = var_nclassdef140->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <var_nclassdef140:AClassdef(AStdClassdef)> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 828);
show_backtrace(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
var184 = parser_nodes__ANodes__iterator(var181);
}
for(;;) {
{
var185 = ((short int (*)(val*))(var184->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var184) /* is_ok on <var184:Iterator[ANode]>*/;
}
if(!var185) break;
{
var186 = ((val* (*)(val*))(var184->class->vft[COLOR_abstract_collection__Iterator__item]))(var184) /* item on <var184:Iterator[ANode]>*/;
}
var_nsc = var186;
{
var187 = parser_nodes__ASuperclass__n_type(var_nsc);
}
var_ntype = var187;
{
{ /* Inline modelize_class#AType#mtype (var_ntype) on <var_ntype:AType> */
var190 = var_ntype->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_ntype:AType> */
var188 = var190;
RET_LABEL189:(void)0;
}
}
var191 = NULL;
if (var188 == NULL) {
var192 = 0; /* is null */
} else {
var192 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var188,var191) on <var188:nullable MType> */
var_other = var191;
{
var196 = ((short int (*)(val*, val*))(var188->class->vft[COLOR_kernel__Object___61d_61d]))(var188, var_other) /* == on <var188:nullable MType(MType)>*/;
var195 = var196;
}
var197 = !var195;
var193 = var197;
goto RET_LABEL194;
RET_LABEL194:(void)0;
}
var192 = var193;
}
if (var192){
{
var198 = modelize_class__ModelBuilder__resolve_mtype(self, var_mmodule, var_mclassdef145, var_ntype);
}
var_mtype = var198;
var199 = NULL;
if (var_mtype == NULL) {
var200 = 1; /* is null */
} else {
var200 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var199) on <var_mtype:nullable MType> */
var_other176 = var199;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other176) on <var_mtype:nullable MType(MType)> */
var205 = var_mtype == var_other176;
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
}
var201 = var203;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
var200 = var201;
}
if (var200){
goto RET_LABEL;
} else {
}
} else {
}
CONTINUE_label206: (void)0;
{
((void (*)(val*))(var184->class->vft[COLOR_abstract_collection__Iterator__next]))(var184) /* next on <var184:Iterator[ANode]>*/;
}
}
BREAK_label206: (void)0;
} else {
}
CONTINUE_label207: (void)0;
{
((void (*)(val*))(var137->class->vft[COLOR_abstract_collection__Iterator__next]))(var137) /* next on <var137:Iterator[ANode]>*/;
}
}
BREAK_label207: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var210 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var208) on <var208:ToolContext> */
var213 = var208->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var208:ToolContext> */
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var211) on <var_errcount:Int> */
var217 = var_errcount == var211;
var218 = !var217;
var215 = var218;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
var214 = var215;
}
if (var214){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var221 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
show_backtrace(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = parser_nodes__ANodes__iterator(var219);
}
for(;;) {
{
var223 = ((short int (*)(val*))(var222->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var222) /* is_ok on <var222:Iterator[ANode]>*/;
}
if(!var223) break;
{
var224 = ((val* (*)(val*))(var222->class->vft[COLOR_abstract_collection__Iterator__item]))(var222) /* item on <var222:Iterator[ANode]>*/;
}
var_nclassdef225 = var224;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef225) on <var_nclassdef225:AClassdef> */
var228 = var_nclassdef225->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef225:AClassdef> */
var226 = var228;
RET_LABEL227:(void)0;
}
}
if (unlikely(var226 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 339);
show_backtrace(1);
}
var_mclassdef229 = var226;
var230 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassmodel__MClassType);
{
hash_collection__HashMap__init(var230); /* Direct call hash_collection#HashMap#init on <var230:HashMap[MClass, MClassType]>*/
}
var_superclasses = var230;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef229) on <var_mclassdef229:MClassDef> */
var233 = var_mclassdef229->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef229:MClassDef> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
if (var231 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 341);
show_backtrace(1);
} else {
var234 = poset__POSetElement__greaters(var231);
}
{
var235 = ((val* (*)(val*))(var234->class->vft[COLOR_abstract_collection__Collection__iterator]))(var234) /* iterator on <var234:Collection[Object](Collection[MClassDef])>*/;
}
for(;;) {
{
var236 = ((short int (*)(val*))(var235->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var235) /* is_ok on <var235:Iterator[nullable Object]>*/;
}
if(!var236) break;
{
var237 = ((val* (*)(val*))(var235->class->vft[COLOR_abstract_collection__Iterator__item]))(var235) /* item on <var235:Iterator[nullable Object]>*/;
}
var_scd = var237;
{
{ /* Inline model#MClassDef#supertypes (var_scd) on <var_scd:MClassDef> */
var240 = var_scd->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_scd:MClassDef> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 517);
show_backtrace(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
var241 = array__AbstractArrayRead__iterator(var238);
}
for(;;) {
{
var242 = array__ArrayIterator__is_ok(var241);
}
if(!var242) break;
{
var243 = array__ArrayIterator__item(var241);
}
var_st = var243;
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var246 = var_st->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
var247 = abstract_collection__MapRead__has_key(var_superclasses, var244);
}
var248 = !var247;
if (var248){
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var251 = var_st->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var_superclasses, var249, var_st); /* Direct call hash_collection#HashMap#[]= on <var_superclasses:HashMap[MClass, MClassType]>*/
}
} else {
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var254 = var_st->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
var255 = hash_collection__HashMap___91d_93d(var_superclasses, var252);
}
{
{ /* Inline kernel#Object#!= (var255,var_st) on <var255:nullable Object(MClassType)> */
var_other = var_st;
{
var260 = ((short int (*)(val*, val*))(var255->class->vft[COLOR_kernel__Object___61d_61d]))(var255, var_other) /* == on <var255:nullable Object(MClassType)>*/;
var259 = var260;
}
var261 = !var259;
var257 = var261;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
var256 = var257;
}
if (var256){
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var264 = var_st->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
var265 = hash_collection__HashMap___91d_93d(var_superclasses, var262);
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef229) on <var_mclassdef229:MClassDef> */
var268 = var_mclassdef229->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef229:MClassDef> */
if (unlikely(var268 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var266) on <var266:MClass> */
var271 = var266->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var266:MClass> */
if (unlikely(var271 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef229) on <var_mclassdef229:MClassDef> */
var274 = var_mclassdef229->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef229:MClassDef> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
var275 = 0;
{
var276 = ((val* (*)(val*, val*, val*, val*, short int))(var265->class->vft[COLOR_model__MType__resolve_for]))(var265, var269, var272, var_mmodule, var275) /* resolve_for on <var265:nullable Object(MClassType)>*/;
}
var_st1 = var276;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef229) on <var_mclassdef229:MClassDef> */
var279 = var_mclassdef229->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef229:MClassDef> */
if (unlikely(var279 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var277) on <var277:MClass> */
var282 = var277->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var277:MClass> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef229) on <var_mclassdef229:MClassDef> */
var285 = var_mclassdef229->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef229:MClassDef> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
var286 = 0;
{
var287 = ((val* (*)(val*, val*, val*, val*, short int))(var_st->class->vft[COLOR_model__MType__resolve_for]))(var_st, var280, var283, var_mmodule, var286) /* resolve_for on <var_st:MClassType>*/;
}
var_st2 = var287;
{
{ /* Inline kernel#Object#!= (var_st1,var_st2) on <var_st1:MClassType> */
var_other = var_st2;
{
var292 = ((short int (*)(val*, val*))(var_st1->class->vft[COLOR_kernel__Object___61d_61d]))(var_st1, var_other) /* == on <var_st1:MClassType>*/;
var291 = var292;
}
var293 = !var291;
var289 = var293;
goto RET_LABEL290;
RET_LABEL290:(void)0;
}
var288 = var289;
}
if (var288){
if (varonce) {
var294 = varonce;
} else {
var295 = "Error: Incompatibles ancestors for ";
var296 = 35;
var297 = string__NativeString__to_s_with_length(var295, var296);
var294 = var297;
varonce = var294;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef229) on <var_mclassdef229:MClassDef> */
var300 = var_mclassdef229->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef229:MClassDef> */
if (unlikely(var300 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
if (varonce301) {
var302 = varonce301;
} else {
var303 = ": ";
var304 = 2;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
if (varonce306) {
var307 = varonce306;
} else {
var308 = ", ";
var309 = 2;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
var311 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var311 = array_instance Array[Object] */
var312 = 6;
var313 = NEW_array__NativeArray(var312, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var313)->values[0] = (val*) var294;
((struct instance_array__NativeArray*)var313)->values[1] = (val*) var298;
((struct instance_array__NativeArray*)var313)->values[2] = (val*) var302;
((struct instance_array__NativeArray*)var313)->values[3] = (val*) var_st1;
((struct instance_array__NativeArray*)var313)->values[4] = (val*) var307;
((struct instance_array__NativeArray*)var313)->values[5] = (val*) var_st2;
{
((void (*)(val*, val*, long))(var311->class->vft[COLOR_array__Array__with_native]))(var311, var313, var312) /* with_native on <var311:Array[Object]>*/;
}
}
{
var314 = ((val* (*)(val*))(var311->class->vft[COLOR_string__Object__to_s]))(var311) /* to_s on <var311:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef225, var314); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
} else {
}
}
CONTINUE_label315: (void)0;
{
array__ArrayIterator__next(var241); /* Direct call array#ArrayIterator#next on <var241:ArrayIterator[nullable Object]>*/
}
}
BREAK_label315: (void)0;
CONTINUE_label316: (void)0;
{
((void (*)(val*))(var235->class->vft[COLOR_abstract_collection__Iterator__next]))(var235) /* next on <var235:Iterator[nullable Object]>*/;
}
}
BREAK_label316: (void)0;
CONTINUE_label317: (void)0;
{
((void (*)(val*))(var222->class->vft[COLOR_abstract_collection__Iterator__next]))(var222) /* next on <var222:Iterator[ANode]>*/;
}
}
BREAK_label317: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var320 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var318) on <var318:ToolContext> */
var323 = var318->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var318:ToolContext> */
var321 = var323;
RET_LABEL322:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var321) on <var_errcount:Int> */
var327 = var_errcount == var321;
var328 = !var327;
var325 = var328;
goto RET_LABEL326;
RET_LABEL326:(void)0;
}
var324 = var325;
}
if (var324){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var331 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var331 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
show_backtrace(1);
}
var329 = var331;
RET_LABEL330:(void)0;
}
}
{
var332 = parser_nodes__ANodes__iterator(var329);
}
for(;;) {
{
var333 = ((short int (*)(val*))(var332->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var332) /* is_ok on <var332:Iterator[ANode]>*/;
}
if(!var333) break;
{
var334 = ((val* (*)(val*))(var332->class->vft[COLOR_abstract_collection__Iterator__item]))(var332) /* item on <var332:Iterator[ANode]>*/;
}
var_nclassdef335 = var334;
/* <var_nclassdef335:AClassdef> isa AStdClassdef */
cltype337 = type_parser_nodes__AStdClassdef.color;
idtype338 = type_parser_nodes__AStdClassdef.id;
if(cltype337 >= var_nclassdef335->type->table_size) {
var336 = 0;
} else {
var336 = var_nclassdef335->type->type_table[cltype337] == idtype338;
}
var339 = !var336;
if (var339){
goto CONTINUE_label340;
} else {
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef335) on <var_nclassdef335:AClassdef(AStdClassdef)> */
var343 = var_nclassdef335->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef335:AClassdef(AStdClassdef)> */
var341 = var343;
RET_LABEL342:(void)0;
}
}
if (unlikely(var341 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 363);
show_backtrace(1);
}
var_mclassdef344 = var341;
var345 = NEW_array__Array(&type_array__Arraymodel__MClass);
{
array__Array__init(var345); /* Direct call array#Array#init on <var345:Array[MClass]>*/
}
var_parents = var345;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef344) on <var_mclassdef344:MClassDef> */
var348 = var_mclassdef344->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef344:MClassDef> */
var346 = var348;
RET_LABEL347:(void)0;
}
}
if (var346 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 368);
show_backtrace(1);
} else {
var349 = poset__POSetElement__direct_greaters(var346);
}
{
var350 = ((val* (*)(val*))(var349->class->vft[COLOR_abstract_collection__Collection__iterator]))(var349) /* iterator on <var349:Collection[Object](Collection[MClassDef])>*/;
}
for(;;) {
{
var351 = ((short int (*)(val*))(var350->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var350) /* is_ok on <var350:Iterator[nullable Object]>*/;
}
if(!var351) break;
{
var352 = ((val* (*)(val*))(var350->class->vft[COLOR_abstract_collection__Iterator__item]))(var350) /* item on <var350:Iterator[nullable Object]>*/;
}
var_sup = var352;
{
{ /* Inline model#MClassDef#mclass (var_sup) on <var_sup:MClassDef> */
var355 = var_sup->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_sup:MClassDef> */
if (unlikely(var355 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var353 = var355;
RET_LABEL354:(void)0;
}
}
{
array__Array__add(var_parents, var353); /* Direct call array#Array#add on <var_parents:Array[MClass]>*/
}
CONTINUE_label356: (void)0;
{
((void (*)(val*))(var350->class->vft[COLOR_abstract_collection__Iterator__next]))(var350) /* next on <var350:Iterator[nullable Object]>*/;
}
}
BREAK_label356: (void)0;
var357 = NEW_array__ArrayMap(&type_array__ArrayMapmodel__MClassparser_nodes__AType);
{
array__ArrayMap__init(var357); /* Direct call array#ArrayMap#init on <var357:ArrayMap[MClass, AType]>*/
}
var_seen_parents = var357;
if (varonce358) {
var359 = varonce358;
} else {
var360 = "Object";
var361 = 6;
var362 = string__NativeString__to_s_with_length(var360, var361);
var359 = var362;
varonce358 = var359;
}
{
var363 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_nmodule, var_mmodule, var359);
}
var_objectclass = var363;
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (var_nclassdef335) on <var_nclassdef335:AClassdef(AStdClassdef)> */
var366 = var_nclassdef335->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <var_nclassdef335:AClassdef(AStdClassdef)> */
if (unlikely(var366 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 828);
show_backtrace(1);
}
var364 = var366;
RET_LABEL365:(void)0;
}
}
{
var367 = parser_nodes__ANodes__iterator(var364);
}
for(;;) {
{
var368 = ((short int (*)(val*))(var367->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var367) /* is_ok on <var367:Iterator[ANode]>*/;
}
if(!var368) break;
{
var369 = ((val* (*)(val*))(var367->class->vft[COLOR_abstract_collection__Iterator__item]))(var367) /* item on <var367:Iterator[ANode]>*/;
}
var_nsc370 = var369;
{
var371 = parser_nodes__ASuperclass__n_type(var_nsc370);
}
var_ntype372 = var371;
{
{ /* Inline modelize_class#AType#mtype (var_ntype372) on <var_ntype372:AType> */
var375 = var_ntype372->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_ntype372:AType> */
var373 = var375;
RET_LABEL374:(void)0;
}
}
var_mtype376 = var373;
var377 = NULL;
if (var_mtype376 == NULL) {
var378 = 1; /* is null */
} else {
var378 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype376,var377) on <var_mtype376:nullable MType> */
var_other176 = var377;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype376,var_other176) on <var_mtype376:nullable MType(MType)> */
var383 = var_mtype376 == var_other176;
var381 = var383;
goto RET_LABEL382;
RET_LABEL382:(void)0;
}
}
var379 = var381;
goto RET_LABEL380;
RET_LABEL380:(void)0;
}
var378 = var379;
}
if (var378){
goto CONTINUE_label384;
} else {
}
/* <var_mtype376:nullable MType(MType)> isa MClassType */
cltype386 = type_model__MClassType.color;
idtype387 = type_model__MClassType.id;
if(cltype386 >= var_mtype376->type->table_size) {
var385 = 0;
} else {
var385 = var_mtype376->type->type_table[cltype386] == idtype387;
}
if (unlikely(!var385)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 383);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype376) on <var_mtype376:nullable MType(MClassType)> */
var390 = var_mtype376->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype376:nullable MType(MClassType)> */
if (unlikely(var390 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var388 = var390;
RET_LABEL389:(void)0;
}
}
var_sc = var388;
{
var392 = array__AbstractArrayRead__has(var_parents, var_sc);
}
var393 = !var392;
var_394 = var393;
if (var393){
var391 = var_394;
} else {
{
{ /* Inline kernel#Object#== (var_sc,var_objectclass) on <var_sc:MClass> */
var_other176 = var_objectclass;
{
{ /* Inline kernel#Object#is_same_instance (var_sc,var_other176) on <var_sc:MClass> */
var400 = var_sc == var_other176;
var398 = var400;
goto RET_LABEL399;
RET_LABEL399:(void)0;
}
}
var396 = var398;
goto RET_LABEL397;
RET_LABEL397:(void)0;
}
var395 = var396;
}
var391 = var395;
}
if (var391){
{
var402 = parser_nodes__ANode__location(var_ntype372);
}
{
{ /* Inline location#Location#file (var402) on <var402:Location> */
var405 = var402->attrs[COLOR_location__Location___file].val; /* _file on <var402:Location> */
var403 = var405;
RET_LABEL404:(void)0;
}
}
var406 = NULL;
if (var403 == NULL) {
var407 = 0; /* is null */
} else {
var407 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var403,var406) on <var403:nullable SourceFile> */
var_other = var406;
{
var411 = ((short int (*)(val*, val*))(var403->class->vft[COLOR_kernel__Object___61d_61d]))(var403, var_other) /* == on <var403:nullable SourceFile(SourceFile)>*/;
var410 = var411;
}
var412 = !var410;
var408 = var412;
goto RET_LABEL409;
RET_LABEL409:(void)0;
}
var407 = var408;
}
var_413 = var407;
if (var407){
{
var414 = parser_nodes__ANode__location(var_ntype372);
}
{
{ /* Inline location#Location#file (var414) on <var414:Location> */
var417 = var414->attrs[COLOR_location__Location___file].val; /* _file on <var414:Location> */
var415 = var417;
RET_LABEL416:(void)0;
}
}
if (var415 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 387);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var415) on <var415:nullable SourceFile> */
if (unlikely(var415 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var420 = var415->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var415:nullable SourceFile> */
if (unlikely(var420 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var418 = var420;
RET_LABEL419:(void)0;
}
}
{
var421 = string__Text__is_empty(var418);
}
var422 = !var421;
var401 = var422;
} else {
var401 = var_413;
}
if (var401){
if (varonce423) {
var424 = varonce423;
} else {
var425 = "Warning: superfluous super-class ";
var426 = 33;
var427 = string__NativeString__to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
if (varonce428) {
var429 = varonce428;
} else {
var430 = " in class ";
var431 = 10;
var432 = string__NativeString__to_s_with_length(var430, var431);
var429 = var432;
varonce428 = var429;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef344) on <var_mclassdef344:MClassDef> */
var435 = var_mclassdef344->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef344:MClassDef> */
if (unlikely(var435 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var433 = var435;
RET_LABEL434:(void)0;
}
}
if (varonce436) {
var437 = varonce436;
} else {
var438 = ".";
var439 = 1;
var440 = string__NativeString__to_s_with_length(var438, var439);
var437 = var440;
varonce436 = var437;
}
var441 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var441 = array_instance Array[Object] */
var442 = 5;
var443 = NEW_array__NativeArray(var442, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var443)->values[0] = (val*) var424;
((struct instance_array__NativeArray*)var443)->values[1] = (val*) var_mtype376;
((struct instance_array__NativeArray*)var443)->values[2] = (val*) var429;
((struct instance_array__NativeArray*)var443)->values[3] = (val*) var433;
((struct instance_array__NativeArray*)var443)->values[4] = (val*) var437;
{
((void (*)(val*, val*, long))(var441->class->vft[COLOR_array__Array__with_native]))(var441, var443, var442) /* with_native on <var441:Array[Object]>*/;
}
}
{
var444 = ((val* (*)(val*))(var441->class->vft[COLOR_string__Object__to_s]))(var441) /* to_s on <var441:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(self, var_ntype372, var444); /* Direct call modelbuilder#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
{
var445 = abstract_collection__MapRead__has_key(var_seen_parents, var_sc);
}
var446 = !var445;
if (var446){
{
array__ArrayMap___91d_93d_61d(var_seen_parents, var_sc, var_ntype372); /* Direct call array#ArrayMap#[]= on <var_seen_parents:ArrayMap[MClass, AType]>*/
}
} else {
if (varonce447) {
var448 = varonce447;
} else {
var449 = "Warning: duplicated super-class ";
var450 = 32;
var451 = string__NativeString__to_s_with_length(var449, var450);
var448 = var451;
varonce447 = var448;
}
if (varonce452) {
var453 = varonce452;
} else {
var454 = " in class ";
var455 = 10;
var456 = string__NativeString__to_s_with_length(var454, var455);
var453 = var456;
varonce452 = var453;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef344) on <var_mclassdef344:MClassDef> */
var459 = var_mclassdef344->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef344:MClassDef> */
if (unlikely(var459 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var457 = var459;
RET_LABEL458:(void)0;
}
}
if (varonce460) {
var461 = varonce460;
} else {
var462 = ".";
var463 = 1;
var464 = string__NativeString__to_s_with_length(var462, var463);
var461 = var464;
varonce460 = var461;
}
var465 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var465 = array_instance Array[Object] */
var466 = 5;
var467 = NEW_array__NativeArray(var466, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var467)->values[0] = (val*) var448;
((struct instance_array__NativeArray*)var467)->values[1] = (val*) var_mtype376;
((struct instance_array__NativeArray*)var467)->values[2] = (val*) var453;
((struct instance_array__NativeArray*)var467)->values[3] = (val*) var457;
((struct instance_array__NativeArray*)var467)->values[4] = (val*) var461;
{
((void (*)(val*, val*, long))(var465->class->vft[COLOR_array__Array__with_native]))(var465, var467, var466) /* with_native on <var465:Array[Object]>*/;
}
}
{
var468 = ((val* (*)(val*))(var465->class->vft[COLOR_string__Object__to_s]))(var465) /* to_s on <var465:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(self, var_ntype372, var468); /* Direct call modelbuilder#ModelBuilder#warning on <self:ModelBuilder>*/
}
}
}
CONTINUE_label384: (void)0;
{
((void (*)(val*))(var367->class->vft[COLOR_abstract_collection__Iterator__next]))(var367) /* next on <var367:Iterator[ANode]>*/;
}
}
BREAK_label384: (void)0;
CONTINUE_label340: (void)0;
{
((void (*)(val*))(var332->class->vft[COLOR_abstract_collection__Iterator__next]))(var332) /* next on <var332:Iterator[ANode]>*/;
}
}
BREAK_label340: (void)0;
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_classes for (self: Object, AModule) */
void VIRTUAL_modelize_class__ModelBuilder__build_classes(val* self, val* p0) {
modelize_class__ModelBuilder__build_classes(self, p0); /* Direct call modelize_class#ModelBuilder#build_classes on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef for (self: ModelBuilder): HashMap[MClassDef, AClassdef] */
val* modelize_class__ModelBuilder__mclassdef2nclassdef(val* self) {
val* var /* : HashMap[MClassDef, AClassdef] */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
var1 = self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 399);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef for (self: Object): HashMap[MClassDef, AClassdef] */
val* VIRTUAL_modelize_class__ModelBuilder__mclassdef2nclassdef(val* self) {
val* var /* : HashMap[MClassDef, AClassdef] */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
val* var3 /* : HashMap[MClassDef, AClassdef] */;
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 399);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype_unchecked for (self: ModelBuilder, MModule, nullable MClassDef, AType, Bool): nullable MType */
val* modelize_class__ModelBuilder__resolve_mtype_unchecked(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
short int var_with_virtual /* var with_virtual: Bool */;
val* var1 /* : TClassid */;
val* var2 /* : String */;
val* var_name /* var name: String */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : nullable MProperty */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_prop /* var prop: nullable MVirtualTypeProp */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : ANodes[AType] */;
val* var22 /* : ANodes[AType] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
val* var38 /* : MVirtualType */;
val* var40 /* : MVirtualType */;
val* var_res /* var res: MType */;
val* var41 /* : nullable TKwnullable */;
val* var42 /* : null */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : MType */;
short int var51 /* : Bool */;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var_59 /* var : Bool */;
val* var60 /* : Array[String] */;
val* var62 /* : Array[String] */;
short int var63 /* : Bool */;
val* var64 /* : ANodes[AType] */;
val* var66 /* : ANodes[AType] */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : Array[Object] */;
long var80 /* : Int */;
val* var81 /* : NativeArray[Object] */;
val* var82 /* : String */;
val* var83 /* : Range[Int] */;
long var84 /* : Int */;
val* var85 /* : Array[String] */;
val* var87 /* : Array[String] */;
long var88 /* : Int */;
val* var89 /* : Discrete */;
val* var90 /* : Discrete */;
val* var91 /* : Iterator[Discrete] */;
short int var92 /* : Bool */;
val* var93 /* : nullable Object */;
long var_i /* var i: Int */;
long var94 /* : Int */;
val* var95 /* : Array[String] */;
val* var97 /* : Array[String] */;
val* var98 /* : nullable Object */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : MClass */;
val* var103 /* : MClass */;
val* var104 /* : MClassType */;
val* var106 /* : MClassType */;
val* var107 /* : Array[MType] */;
val* var109 /* : Array[MType] */;
val* var110 /* : nullable Object */;
val* var111 /* : nullable TKwnullable */;
val* var112 /* : null */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
val* var119 /* : MType */;
val* var121 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var122 /* : null */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
val* var129 /* : ANodes[AType] */;
val* var131 /* : ANodes[AType] */;
long var132 /* : Int */;
long var_arity /* var arity: Int */;
long var133 /* : Int */;
long var135 /* : Int */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
long var141 /* : Int */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : FlatString */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
val* var156 /* : Array[Object] */;
long var157 /* : Int */;
val* var158 /* : NativeArray[Object] */;
val* var159 /* : String */;
long var160 /* : Int */;
long var162 /* : Int */;
long var163 /* : Int */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
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
val* var178 /* : Array[Object] */;
long var179 /* : Int */;
val* var180 /* : NativeArray[Object] */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : FlatString */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
long var192 /* : Int */;
long var194 /* : Int */;
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
val* var208 /* : Object */;
val* var209 /* : Object */;
val* var210 /* : String */;
val* var211 /* : null */;
long var212 /* : Int */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
short int var216 /* : Bool */;
val* var217 /* : MClassType */;
val* var219 /* : MClassType */;
val* var220 /* : nullable TKwnullable */;
val* var221 /* : null */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
val* var228 /* : MType */;
val* var230 /* : Array[MType] */;
val* var_mtypes /* var mtypes: Array[MType] */;
val* var231 /* : ANodes[AType] */;
val* var233 /* : ANodes[AType] */;
val* var234 /* : Iterator[ANode] */;
short int var235 /* : Bool */;
val* var236 /* : nullable Object */;
val* var_nt /* var nt: AType */;
val* var237 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
val* var238 /* : null */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
val* var_other242 /* var other: nullable Object */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
val* var246 /* : null */;
val* var248 /* : MClassType */;
val* var249 /* : nullable TKwnullable */;
val* var250 /* : null */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
val* var257 /* : MType */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
long var262 /* : Int */;
val* var263 /* : FlatString */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
long var267 /* : Int */;
val* var268 /* : FlatString */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
long var272 /* : Int */;
val* var273 /* : FlatString */;
val* var274 /* : Array[Object] */;
long var275 /* : Int */;
val* var276 /* : NativeArray[Object] */;
val* var277 /* : String */;
val* var278 /* : null */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
var_with_virtual = p3;
{
var1 = parser_nodes__AType__n_id(var_ntype);
}
{
var2 = lexer_work__Token__text(var1);
}
var_name = var2;
var4 = NULL;
if (var_mclassdef == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,var4) on <var_mclassdef:nullable MClassDef> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_mclassdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mclassdef, var_other) /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var_ = var5;
if (var5){
var3 = var_with_virtual;
} else {
var3 = var_;
}
if (var3){
{
var11 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(self, var_ntype, var_mclassdef, var_name);
}
/* <var11:nullable MProperty> isa nullable MVirtualTypeProp */
cltype = type_nullable_model__MVirtualTypeProp.color;
idtype = type_nullable_model__MVirtualTypeProp.id;
if(var11 == NULL) {
var12 = 1;
} else {
if(cltype >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MVirtualTypeProp", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 414);
show_backtrace(1);
}
var_prop = var11;
var13 = NULL;
if (var_prop == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_prop,var13) on <var_prop:nullable MVirtualTypeProp> */
var_other = var13;
{
var18 = ((short int (*)(val*, val*))(var_prop->class->vft[COLOR_kernel__Object___61d_61d]))(var_prop, var_other) /* == on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)>*/;
var17 = var18;
}
var19 = !var17;
var15 = var19;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var22 = var_ntype->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = parser_nodes__ANodes__is_empty(var20);
}
var24 = !var23;
if (var24){
if (varonce) {
var25 = varonce;
} else {
var26 = "Type error: formal type ";
var27 = 24;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = " cannot have formal parameters.";
var32 = 31;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var30;
{
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var37); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MVirtualTypeProp#mvirtualtype (var_prop) on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
var40 = var_prop->attrs[COLOR_model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1858);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_res = var38;
{
var41 = parser_nodes__AType__n_kwnullable(var_ntype);
}
var42 = NULL;
if (var41 == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var41,var42) on <var41:nullable TKwnullable> */
var_other = var42;
{
var47 = ((short int (*)(val*, val*))(var41->class->vft[COLOR_kernel__Object___61d_61d]))(var41, var_other) /* == on <var41:nullable TKwnullable(TKwnullable)>*/;
var46 = var47;
}
var48 = !var46;
var44 = var48;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
{
var49 = model__MType__as_nullable(var_res);
}
var_res = var49;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL50:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var52 = NULL;
if (var_mclassdef == NULL) {
var53 = 0; /* is null */
} else {
var53 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,var52) on <var_mclassdef:nullable MClassDef> */
var_other = var52;
{
var57 = ((short int (*)(val*, val*))(var_mclassdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mclassdef, var_other) /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
var56 = var57;
}
var58 = !var56;
var54 = var58;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
var_59 = var53;
if (var53){
{
{ /* Inline model#MClassDef#parameter_names (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var62 = var_mclassdef->attrs[COLOR_model__MClassDef___parameter_names].val; /* _parameter_names on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parameter_names");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 489);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = array__AbstractArrayRead__has(var60, var_name);
}
var51 = var63;
} else {
var51 = var_59;
}
if (var51){
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var66 = var_ntype->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = parser_nodes__ANodes__is_empty(var64);
}
var68 = !var67;
if (var68){
if (varonce69) {
var70 = varonce69;
} else {
var71 = "Type error: formal type ";
var72 = 24;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = " cannot have formal parameters.";
var77 = 31;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var79 = array_instance Array[Object] */
var80 = 3;
var81 = NEW_array__NativeArray(var80, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var81)->values[0] = (val*) var70;
((struct instance_array__NativeArray*)var81)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var81)->values[2] = (val*) var75;
{
((void (*)(val*, val*, long))(var79->class->vft[COLOR_array__Array__with_native]))(var79, var81, var80) /* with_native on <var79:Array[Object]>*/;
}
}
{
var82 = ((val* (*)(val*))(var79->class->vft[COLOR_string__Object__to_s]))(var79) /* to_s on <var79:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var82); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
var83 = NEW_range__Range(&type_range__Rangekernel__Int);
var84 = 0;
{
{ /* Inline model#MClassDef#parameter_names (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var87 = var_mclassdef->attrs[COLOR_model__MClassDef___parameter_names].val; /* _parameter_names on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parameter_names");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 489);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
var88 = array__AbstractArrayRead__length(var85);
}
{
var89 = BOX_kernel__Int(var84); /* autobox from Int to Discrete */
var90 = BOX_kernel__Int(var88); /* autobox from Int to Discrete */
range__Range__without_last(var83, var89, var90); /* Direct call range#Range#without_last on <var83:Range[Int]>*/
}
{
var91 = range__Range__iterator(var83);
}
for(;;) {
{
var92 = ((short int (*)(val*))(var91->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var91) /* is_ok on <var91:Iterator[Discrete]>*/;
}
if(!var92) break;
{
var93 = ((val* (*)(val*))(var91->class->vft[COLOR_abstract_collection__Iterator__item]))(var91) /* item on <var91:Iterator[Discrete]>*/;
}
var94 = ((struct instance_kernel__Int*)var93)->value; /* autounbox from nullable Object to Int */;
var_i = var94;
{
{ /* Inline model#MClassDef#parameter_names (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var97 = var_mclassdef->attrs[COLOR_model__MClassDef___parameter_names].val; /* _parameter_names on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parameter_names");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 489);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = array__Array___91d_93d(var95, var_i);
}
{
var100 = string__FlatString___61d_61d(var98, var_name);
var99 = var100;
}
if (var99){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var103 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var101) on <var101:MClass> */
var106 = var101->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var101:MClass> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline model#MClassType#arguments (var104) on <var104:MClassType> */
var109 = var104->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var104:MClassType> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
var110 = array__Array___91d_93d(var107, var_i);
}
var_res = var110;
{
var111 = parser_nodes__AType__n_kwnullable(var_ntype);
}
var112 = NULL;
if (var111 == NULL) {
var113 = 0; /* is null */
} else {
var113 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var111,var112) on <var111:nullable TKwnullable> */
var_other = var112;
{
var117 = ((short int (*)(val*, val*))(var111->class->vft[COLOR_kernel__Object___61d_61d]))(var111, var_other) /* == on <var111:nullable TKwnullable(TKwnullable)>*/;
var116 = var117;
}
var118 = !var116;
var114 = var118;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var113 = var114;
}
if (var113){
{
var119 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MType__as_nullable]))(var_res) /* as_nullable on <var_res:MType>*/;
}
var_res = var119;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL120:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var91->class->vft[COLOR_abstract_collection__Iterator__next]))(var91) /* next on <var91:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 439);
show_backtrace(1);
} else {
}
{
var121 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, var_ntype, var_mmodule, var_name);
}
var_mclass = var121;
var122 = NULL;
if (var_mclass == NULL) {
var123 = 0; /* is null */
} else {
var123 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclass,var122) on <var_mclass:nullable MClass> */
var_other = var122;
{
var127 = ((short int (*)(val*, val*))(var_mclass->class->vft[COLOR_kernel__Object___61d_61d]))(var_mclass, var_other) /* == on <var_mclass:nullable MClass(MClass)>*/;
var126 = var127;
}
var128 = !var126;
var124 = var128;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var123 = var124;
}
if (var123){
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var131 = var_ntype->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
var132 = parser_nodes__ANodes__length(var129);
}
var_arity = var132;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var135 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_arity,var133) on <var_arity:Int> */
var139 = var_arity == var133;
var140 = !var139;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
var136 = var137;
}
if (var136){
var141 = 0;
{
{ /* Inline kernel#Int#== (var_arity,var141) on <var_arity:Int> */
var145 = var_arity == var141;
var143 = var145;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
var142 = var143;
}
if (var142){
if (varonce146) {
var147 = varonce146;
} else {
var148 = "Type error: \'";
var149 = 13;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
if (varonce151) {
var152 = varonce151;
} else {
var153 = "\' is a generic class.";
var154 = 21;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var156 = array_instance Array[Object] */
var157 = 3;
var158 = NEW_array__NativeArray(var157, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var158)->values[0] = (val*) var147;
((struct instance_array__NativeArray*)var158)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var158)->values[2] = (val*) var152;
{
((void (*)(val*, val*, long))(var156->class->vft[COLOR_array__Array__with_native]))(var156, var158, var157) /* with_native on <var156:Array[Object]>*/;
}
}
{
var159 = ((val* (*)(val*))(var156->class->vft[COLOR_string__Object__to_s]))(var156) /* to_s on <var156:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var159); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var162 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var160 = var162;
RET_LABEL161:(void)0;
}
}
var163 = 0;
{
{ /* Inline kernel#Int#== (var160,var163) on <var160:Int> */
var167 = var160 == var163;
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
if (var164){
if (varonce168) {
var169 = varonce168;
} else {
var170 = "Type error: \'";
var171 = 13;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = "\' is not a generic class.";
var176 = 25;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
var178 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var178 = array_instance Array[Object] */
var179 = 3;
var180 = NEW_array__NativeArray(var179, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var180)->values[0] = (val*) var169;
((struct instance_array__NativeArray*)var180)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var180)->values[2] = (val*) var174;
{
((void (*)(val*, val*, long))(var178->class->vft[COLOR_array__Array__with_native]))(var178, var180, var179) /* with_native on <var178:Array[Object]>*/;
}
}
{
var181 = ((val* (*)(val*))(var178->class->vft[COLOR_string__Object__to_s]))(var178) /* to_s on <var178:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var181); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (varonce182) {
var183 = varonce182;
} else {
var184 = "Type error: \'";
var185 = 13;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = "\' has ";
var190 = 6;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var194 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var192 = var194;
RET_LABEL193:(void)0;
}
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = " parameters (";
var198 = 13;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = " are provided).";
var203 = 15;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
var205 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var205 = array_instance Array[Object] */
var206 = 7;
var207 = NEW_array__NativeArray(var206, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var207)->values[0] = (val*) var183;
((struct instance_array__NativeArray*)var207)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var207)->values[2] = (val*) var188;
var208 = BOX_kernel__Int(var192); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var207)->values[3] = (val*) var208;
((struct instance_array__NativeArray*)var207)->values[4] = (val*) var196;
var209 = BOX_kernel__Int(var_arity); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var207)->values[5] = (val*) var209;
((struct instance_array__NativeArray*)var207)->values[6] = (val*) var201;
{
((void (*)(val*, val*, long))(var205->class->vft[COLOR_array__Array__with_native]))(var205, var207, var206) /* with_native on <var205:Array[Object]>*/;
}
}
{
var210 = ((val* (*)(val*))(var205->class->vft[COLOR_string__Object__to_s]))(var205) /* to_s on <var205:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var210); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
}
}
var211 = NULL;
var = var211;
goto RET_LABEL;
} else {
}
var212 = 0;
{
{ /* Inline kernel#Int#== (var_arity,var212) on <var_arity:Int> */
var216 = var_arity == var212;
var214 = var216;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
var213 = var214;
}
if (var213){
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var219 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var219 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
var_res = var217;
{
var220 = parser_nodes__AType__n_kwnullable(var_ntype);
}
var221 = NULL;
if (var220 == NULL) {
var222 = 0; /* is null */
} else {
var222 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var220,var221) on <var220:nullable TKwnullable> */
var_other = var221;
{
var226 = ((short int (*)(val*, val*))(var220->class->vft[COLOR_kernel__Object___61d_61d]))(var220, var_other) /* == on <var220:nullable TKwnullable(TKwnullable)>*/;
var225 = var226;
}
var227 = !var225;
var223 = var227;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
var222 = var223;
}
if (var222){
{
var228 = model__MType__as_nullable(var_res);
}
var_res = var228;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL229:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
var230 = NEW_array__Array(&type_array__Arraymodel__MType);
{
array__Array__init(var230); /* Direct call array#Array#init on <var230:Array[MType]>*/
}
var_mtypes = var230;
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var233 = var_ntype->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
show_backtrace(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
var234 = parser_nodes__ANodes__iterator(var231);
}
for(;;) {
{
var235 = ((short int (*)(val*))(var234->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var234) /* is_ok on <var234:Iterator[ANode]>*/;
}
if(!var235) break;
{
var236 = ((val* (*)(val*))(var234->class->vft[COLOR_abstract_collection__Iterator__item]))(var234) /* item on <var234:Iterator[ANode]>*/;
}
var_nt = var236;
{
var237 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_nt, var_with_virtual);
}
var_mt = var237;
var238 = NULL;
if (var_mt == NULL) {
var239 = 1; /* is null */
} else {
var239 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mt,var238) on <var_mt:nullable MType> */
var_other242 = var238;
{
{ /* Inline kernel#Object#is_same_instance (var_mt,var_other242) on <var_mt:nullable MType(MType)> */
var245 = var_mt == var_other242;
var243 = var245;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
var240 = var243;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
var239 = var240;
}
if (var239){
var246 = NULL;
var = var246;
goto RET_LABEL;
} else {
}
{
array__Array__add(var_mtypes, var_mt); /* Direct call array#Array#add on <var_mtypes:Array[MType]>*/
}
CONTINUE_label247: (void)0;
{
((void (*)(val*))(var234->class->vft[COLOR_abstract_collection__Iterator__next]))(var234) /* next on <var234:Iterator[ANode]>*/;
}
}
BREAK_label247: (void)0;
{
var248 = model__MClass__get_mtype(var_mclass, var_mtypes);
}
var_res = var248;
{
var249 = parser_nodes__AType__n_kwnullable(var_ntype);
}
var250 = NULL;
if (var249 == NULL) {
var251 = 0; /* is null */
} else {
var251 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var249,var250) on <var249:nullable TKwnullable> */
var_other = var250;
{
var255 = ((short int (*)(val*, val*))(var249->class->vft[COLOR_kernel__Object___61d_61d]))(var249, var_other) /* == on <var249:nullable TKwnullable(TKwnullable)>*/;
var254 = var255;
}
var256 = !var254;
var252 = var256;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
var251 = var252;
}
if (var251){
{
var257 = model__MType__as_nullable(var_res);
}
var_res = var257;
} else {
}
{
{ /* Inline modelize_class#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_modelize_class__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL258:(void)0;
}
}
var = var_res;
goto RET_LABEL;
}
} else {
}
if (varonce259) {
var260 = varonce259;
} else {
var261 = "Type error: class ";
var262 = 18;
var263 = string__NativeString__to_s_with_length(var261, var262);
var260 = var263;
varonce259 = var260;
}
if (varonce264) {
var265 = varonce264;
} else {
var266 = " not found in module ";
var267 = 21;
var268 = string__NativeString__to_s_with_length(var266, var267);
var265 = var268;
varonce264 = var265;
}
if (varonce269) {
var270 = varonce269;
} else {
var271 = ".";
var272 = 1;
var273 = string__NativeString__to_s_with_length(var271, var272);
var270 = var273;
varonce269 = var270;
}
var274 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var274 = array_instance Array[Object] */
var275 = 5;
var276 = NEW_array__NativeArray(var275, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var276)->values[0] = (val*) var260;
((struct instance_array__NativeArray*)var276)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var276)->values[2] = (val*) var265;
((struct instance_array__NativeArray*)var276)->values[3] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var276)->values[4] = (val*) var270;
{
((void (*)(val*, val*, long))(var274->class->vft[COLOR_array__Array__with_native]))(var274, var276, var275) /* with_native on <var274:Array[Object]>*/;
}
}
{
var277 = ((val* (*)(val*))(var274->class->vft[COLOR_string__Object__to_s]))(var274) /* to_s on <var274:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_ntype, var277); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
var278 = NULL;
var = var278;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype_unchecked for (self: Object, MModule, nullable MClassDef, AType, Bool): nullable MType */
val* VIRTUAL_modelize_class__ModelBuilder__resolve_mtype_unchecked(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype for (self: ModelBuilder, MModule, nullable MClassDef, AType): nullable MType */
val* modelize_class__ModelBuilder__resolve_mtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable MType */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
val* var25 /* : MClass */;
val* var27 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var28 /* : Range[Int] */;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
val* var33 /* : Discrete */;
val* var34 /* : Discrete */;
val* var35 /* : Iterator[Discrete] */;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
long var_i /* var i: Int */;
long var38 /* : Int */;
val* var39 /* : MClassDef */;
val* var40 /* : MClassType */;
val* var42 /* : MClassType */;
val* var43 /* : Array[MType] */;
val* var45 /* : Array[MType] */;
val* var46 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var47 /* : ANodes[AType] */;
val* var49 /* : ANodes[AType] */;
val* var50 /* : ANode */;
val* var_nt /* var nt: AType */;
val* var51 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : null */;
val* var60 /* : null */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var_other64 /* var other: nullable Object */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var68 /* : MClassType */;
val* var70 /* : MClassType */;
val* var_anchor /* var anchor: nullable Object */;
val* var71 /* : null */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
static val* varonce;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
val* var83 /* : Array[Object] */;
long var84 /* : Int */;
val* var85 /* : NativeArray[Object] */;
val* var86 /* : String */;
val* var87 /* : null */;
short int var88 /* : Bool */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
{
{ /* Inline modelize_class#AType#mtype (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_ntype:AType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
var4 = NULL;
if (var_mtype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var4) on <var_mtype:nullable MType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var10 = var_mtype == var_other;
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
var11 = 1;
{
var12 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, var11);
}
var_mtype = var12;
} else {
}
var13 = NULL;
if (var_mtype == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var13) on <var_mtype:nullable MType> */
var_other = var13;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var19 = var_mtype == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var20 = NULL;
var = var20;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_class#AType#checked_mtype (var_ntype) on <var_ntype:AType> */
var23 = var_ntype->attrs[COLOR_modelize_class__AType___checked_mtype].s; /* _checked_mtype on <var_ntype:AType> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21){
var = var_mtype;
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var24 = 0;
} else {
var24 = var_mtype->type->type_table[cltype] == idtype;
}
if (var24){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MGenericType)> */
var27 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MGenericType)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_mclass = var25;
var28 = NEW_range__Range(&type_range__Rangekernel__Int);
var29 = 0;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:MClass> */
var32 = var_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_mclass:MClass> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = BOX_kernel__Int(var29); /* autobox from Int to Discrete */
var34 = BOX_kernel__Int(var30); /* autobox from Int to Discrete */
range__Range__without_last(var28, var33, var34); /* Direct call range#Range#without_last on <var28:Range[Int]>*/
}
{
var35 = range__Range__iterator(var28);
}
for(;;) {
{
var36 = ((short int (*)(val*))(var35->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var35) /* is_ok on <var35:Iterator[Discrete]>*/;
}
if(!var36) break;
{
var37 = ((val* (*)(val*))(var35->class->vft[COLOR_abstract_collection__Iterator__item]))(var35) /* item on <var35:Iterator[Discrete]>*/;
}
var38 = ((struct instance_kernel__Int*)var37)->value; /* autounbox from nullable Object to Int */;
var_i = var38;
{
var39 = model__MClass__intro(var_mclass);
}
{
{ /* Inline model#MClassDef#bound_mtype (var39) on <var39:MClassDef> */
var42 = var39->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var39:MClassDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MClassType#arguments (var40) on <var40:MClassType> */
var45 = var40->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var40:MClassType> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = array__Array___91d_93d(var43, var_i);
}
var_bound = var46;
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var49 = var_ntype->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = parser_nodes__ANodes___91d_93d(var47, var_i);
}
var_nt = var50;
{
var51 = modelize_class__ModelBuilder__resolve_mtype(self, var_mmodule, var_mclassdef, var_nt);
}
var_mt = var51;
var52 = NULL;
if (var_mt == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mt,var52) on <var_mt:nullable MType> */
var_other = var52;
{
{ /* Inline kernel#Object#is_same_instance (var_mt,var_other) on <var_mt:nullable MType(MType)> */
var58 = var_mt == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
var59 = NULL;
var = var59;
goto RET_LABEL;
} else {
}
var60 = NULL;
if (var_mclassdef == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,var60) on <var_mclassdef:nullable MClassDef> */
var_other64 = var60;
{
var66 = ((short int (*)(val*, val*))(var_mclassdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mclassdef, var_other64) /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
var65 = var66;
}
var67 = !var65;
var62 = var67;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var70 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_anchor = var68;
} else {
var71 = NULL;
var_anchor = var71;
}
{
var72 = model__MType__is_subtype(var_mt, var_mmodule, var_anchor, var_bound);
}
var73 = !var72;
if (var73){
if (varonce) {
var74 = varonce;
} else {
var75 = "Type error: expected ";
var76 = 21;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce = var74;
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = ", got ";
var81 = 6;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var83 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var83 = array_instance Array[Object] */
var84 = 4;
var85 = NEW_array__NativeArray(var84, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var85)->values[0] = (val*) var74;
((struct instance_array__NativeArray*)var85)->values[1] = (val*) var_bound;
((struct instance_array__NativeArray*)var85)->values[2] = (val*) var79;
((struct instance_array__NativeArray*)var85)->values[3] = (val*) var_mt;
{
((void (*)(val*, val*, long))(var83->class->vft[COLOR_array__Array__with_native]))(var83, var85, var84) /* with_native on <var83:Array[Object]>*/;
}
}
{
var86 = ((val* (*)(val*))(var83->class->vft[COLOR_string__Object__to_s]))(var83) /* to_s on <var83:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nt, var86); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
var87 = NULL;
var = var87;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var35->class->vft[COLOR_abstract_collection__Iterator__next]))(var35) /* next on <var35:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
} else {
}
var88 = 1;
{
{ /* Inline modelize_class#AType#checked_mtype= (var_ntype,var88) on <var_ntype:AType> */
var_ntype->attrs[COLOR_modelize_class__AType___checked_mtype].s = var88; /* _checked_mtype on <var_ntype:AType> */
RET_LABEL89:(void)0;
}
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype for (self: Object, MModule, nullable MClassDef, AType): nullable MType */
val* VIRTUAL_modelize_class__ModelBuilder__resolve_mtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = modelize_class__ModelBuilder__resolve_mtype(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done for (self: AModule): Bool */
short int modelize_class__AModule__build_classes_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done for (self: Object): Bool */
short int VIRTUAL_modelize_class__AModule__build_classes_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_class#AModule#build_classes_is_done (self) on <self:Object(AModule)> */
var3 = self->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s; /* _build_classes_is_done on <self:Object(AModule)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done= for (self: AModule, Bool) */
void modelize_class__AModule__build_classes_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s = p0; /* _build_classes_is_done on <self:AModule> */
RET_LABEL:;
}
/* method modelize_class#AModule#build_classes_is_done= for (self: Object, Bool) */
void VIRTUAL_modelize_class__AModule__build_classes_is_done_61d(val* self, short int p0) {
{ /* Inline modelize_class#AModule#build_classes_is_done= (self,p0) on <self:Object(AModule)> */
self->attrs[COLOR_modelize_class__AModule___build_classes_is_done].s = p0; /* _build_classes_is_done on <self:Object(AModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AModule#mclass2nclassdef for (self: AModule): Map[MClass, AClassdef] */
val* modelize_class__AModule__mclass2nclassdef(val* self) {
val* var /* : Map[MClass, AClassdef] */;
val* var1 /* : Map[MClass, AClassdef] */;
var1 = self->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 515);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#mclass2nclassdef for (self: Object): Map[MClass, AClassdef] */
val* VIRTUAL_modelize_class__AModule__mclass2nclassdef(val* self) {
val* var /* : Map[MClass, AClassdef] */;
val* var1 /* : Map[MClass, AClassdef] */;
val* var3 /* : Map[MClass, AClassdef] */;
{ /* Inline modelize_class#AModule#mclass2nclassdef (self) on <self:Object(AModule)> */
var3 = self->attrs[COLOR_modelize_class__AModule___mclass2nclassdef].val; /* _mclass2nclassdef on <self:Object(AModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 515);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass for (self: AClassdef): nullable MClass */
val* modelize_class__AClassdef__mclass(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = self->attrs[COLOR_modelize_class__AClassdef___mclass].val; /* _mclass on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass for (self: Object): nullable MClass */
val* VIRTUAL_modelize_class__AClassdef__mclass(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
val* var3 /* : nullable MClass */;
{ /* Inline modelize_class#AClassdef#mclass (self) on <self:Object(AClassdef)> */
var3 = self->attrs[COLOR_modelize_class__AClassdef___mclass].val; /* _mclass on <self:Object(AClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass= for (self: AClassdef, nullable MClass) */
void modelize_class__AClassdef__mclass_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AClassdef___mclass].val = p0; /* _mclass on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclass= for (self: Object, nullable MClass) */
void VIRTUAL_modelize_class__AClassdef__mclass_61d(val* self, val* p0) {
{ /* Inline modelize_class#AClassdef#mclass= (self,p0) on <self:Object(AClassdef)> */
self->attrs[COLOR_modelize_class__AClassdef___mclass].val = p0; /* _mclass on <self:Object(AClassdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclassdef for (self: AClassdef): nullable MClassDef */
val* modelize_class__AClassdef__mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclassdef for (self: Object): nullable MClassDef */
val* VIRTUAL_modelize_class__AClassdef__mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
val* var3 /* : nullable MClassDef */;
{ /* Inline modelize_class#AClassdef#mclassdef (self) on <self:Object(AClassdef)> */
var3 = self->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <self:Object(AClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclassdef= for (self: AClassdef, nullable MClassDef) */
void modelize_class__AClassdef__mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AClassdef___mclassdef].val = p0; /* _mclassdef on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclassdef= for (self: Object, nullable MClassDef) */
void VIRTUAL_modelize_class__AClassdef__mclassdef_61d(val* self, val* p0) {
{ /* Inline modelize_class#AClassdef#mclassdef= (self,p0) on <self:Object(AClassdef)> */
self->attrs[COLOR_modelize_class__AClassdef___mclassdef].val = p0; /* _mclassdef on <self:Object(AClassdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AClassdef#all_defs for (self: AClassdef): nullable Array[AClassdef] */
val* modelize_class__AClassdef__all_defs(val* self) {
val* var /* : nullable Array[AClassdef] */;
val* var1 /* : nullable Array[AClassdef] */;
var1 = self->attrs[COLOR_modelize_class__AClassdef___all_defs].val; /* _all_defs on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#all_defs for (self: Object): nullable Array[AClassdef] */
val* VIRTUAL_modelize_class__AClassdef__all_defs(val* self) {
val* var /* : nullable Array[AClassdef] */;
val* var1 /* : nullable Array[AClassdef] */;
val* var3 /* : nullable Array[AClassdef] */;
{ /* Inline modelize_class#AClassdef#all_defs (self) on <self:Object(AClassdef)> */
var3 = self->attrs[COLOR_modelize_class__AClassdef___all_defs].val; /* _all_defs on <self:Object(AClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#all_defs= for (self: AClassdef, nullable Array[AClassdef]) */
void modelize_class__AClassdef__all_defs_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AClassdef___all_defs].val = p0; /* _all_defs on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#all_defs= for (self: Object, nullable Array[AClassdef]) */
void VIRTUAL_modelize_class__AClassdef__all_defs_61d(val* self, val* p0) {
{ /* Inline modelize_class#AClassdef#all_defs= (self,p0) on <self:Object(AClassdef)> */
self->attrs[COLOR_modelize_class__AClassdef___all_defs].val = p0; /* _all_defs on <self:Object(AClassdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AConcreteClasskind#mkind for (self: AConcreteClasskind): MClassKind */
val* modelize_class__AConcreteClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = model__Object__concrete_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AConcreteClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AConcreteClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AConcreteClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AAbstractClasskind#mkind for (self: AAbstractClasskind): MClassKind */
val* modelize_class__AAbstractClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = model__Object__abstract_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AAbstractClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AAbstractClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AAbstractClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AInterfaceClasskind#mkind for (self: AInterfaceClasskind): MClassKind */
val* modelize_class__AInterfaceClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = model__Object__interface_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AInterfaceClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AInterfaceClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AInterfaceClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AEnumClasskind#mkind for (self: AEnumClasskind): MClassKind */
val* modelize_class__AEnumClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = model__Object__enum_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AEnumClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AEnumClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AEnumClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AExternClasskind#mkind for (self: AExternClasskind): MClassKind */
val* modelize_class__AExternClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
{
var1 = model__Object__extern_kind(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AExternClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AExternClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AExternClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#mtype= for (self: AFormaldef, nullable MParameterType) */
void modelize_class__AFormaldef__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AFormaldef___mtype].val = p0; /* _mtype on <self:AFormaldef> */
RET_LABEL:;
}
/* method modelize_class#AFormaldef#mtype= for (self: Object, nullable MParameterType) */
void VIRTUAL_modelize_class__AFormaldef__mtype_61d(val* self, val* p0) {
{ /* Inline modelize_class#AFormaldef#mtype= (self,p0) on <self:Object(AFormaldef)> */
self->attrs[COLOR_modelize_class__AFormaldef___mtype].val = p0; /* _mtype on <self:Object(AFormaldef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AFormaldef#bound= for (self: AFormaldef, nullable MType) */
void modelize_class__AFormaldef__bound_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AFormaldef___bound].val = p0; /* _bound on <self:AFormaldef> */
RET_LABEL:;
}
/* method modelize_class#AFormaldef#bound= for (self: Object, nullable MType) */
void VIRTUAL_modelize_class__AFormaldef__bound_61d(val* self, val* p0) {
{ /* Inline modelize_class#AFormaldef#bound= (self,p0) on <self:Object(AFormaldef)> */
self->attrs[COLOR_modelize_class__AFormaldef___bound].val = p0; /* _bound on <self:Object(AFormaldef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AType#mtype for (self: AType): nullable MType */
val* modelize_class__AType__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#mtype for (self: Object): nullable MType */
val* VIRTUAL_modelize_class__AType__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline modelize_class#AType#mtype (self) on <self:Object(AType)> */
var3 = self->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <self:Object(AType)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#mtype= for (self: AType, nullable MType) */
void modelize_class__AType__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AType___mtype].val = p0; /* _mtype on <self:AType> */
RET_LABEL:;
}
/* method modelize_class#AType#mtype= for (self: Object, nullable MType) */
void VIRTUAL_modelize_class__AType__mtype_61d(val* self, val* p0) {
{ /* Inline modelize_class#AType#mtype= (self,p0) on <self:Object(AType)> */
self->attrs[COLOR_modelize_class__AType___mtype].val = p0; /* _mtype on <self:Object(AType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_class#AType#checked_mtype for (self: AType): Bool */
short int modelize_class__AType__checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_class__AType___checked_mtype].s; /* _checked_mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#checked_mtype for (self: Object): Bool */
short int VIRTUAL_modelize_class__AType__checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_class#AType#checked_mtype (self) on <self:Object(AType)> */
var3 = self->attrs[COLOR_modelize_class__AType___checked_mtype].s; /* _checked_mtype on <self:Object(AType)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#checked_mtype= for (self: AType, Bool) */
void modelize_class__AType__checked_mtype_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_class__AType___checked_mtype].s = p0; /* _checked_mtype on <self:AType> */
RET_LABEL:;
}
/* method modelize_class#AType#checked_mtype= for (self: Object, Bool) */
void VIRTUAL_modelize_class__AType__checked_mtype_61d(val* self, short int p0) {
{ /* Inline modelize_class#AType#checked_mtype= (self,p0) on <self:Object(AType)> */
self->attrs[COLOR_modelize_class__AType___checked_mtype].s = p0; /* _checked_mtype on <self:Object(AType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
