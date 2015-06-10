#include "nit__typing.sep.0.h"
/* method typing#ANewExpr#accept_typing for (self: ANewExpr, TypeVisitor) */
void nit__typing___ANewExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AType */;
val* var2 /* : AType */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : NativeArray[String] */;
static val* varonce;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : String */;
val* var25 /* : String */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
val* var57 /* : MClassKind */;
val* var59 /* : MClassKind */;
val* var_kind /* var kind: MClassKind */;
val* var60 /* : nullable TId */;
val* var62 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var_other66 /* var other: nullable Object */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : String */;
val* var_name /* var name: String */;
val* var_node /* var node: ANode */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
val* var74 /* : TKwnew */;
val* var76 /* : TKwnew */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
short int var81 /* : Bool */;
val* var82 /* : Sys */;
val* var83 /* : MClassKind */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : FlatString */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : FlatString */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var105 /* : AExprs */;
val* var107 /* : AExprs */;
val* var108 /* : ANodes[AExpr] */;
val* var110 /* : ANodes[AExpr] */;
short int var111 /* : Bool */;
val* var112 /* : AExprs */;
val* var114 /* : AExprs */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
val* var120 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
val* var127 /* : MMethod */;
val* var129 /* : MMethod */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
val* var134 /* : Sys */;
val* var135 /* : MClassKind */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
val* var141 /* : NativeArray[String] */;
static val* varonce140;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : FlatString */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : FlatString */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : FlatString */;
val* var154 /* : String */;
val* var155 /* : String */;
val* var156 /* : String */;
val* var158 /* : MSignature */;
val* var160 /* : MSignature */;
val* var161 /* : nullable MType */;
val* var163 /* : nullable MType */;
val* var165 /* : nullable MType */;
val* var167 /* : nullable MType */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
val* var174 /* : MMethod */;
val* var176 /* : MMethod */;
val* var177 /* : MClass */;
val* var179 /* : MClass */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
val* var183 /* : NativeArray[String] */;
static val* varonce182;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : FlatString */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : FlatString */;
val* var192 /* : String */;
val* var193 /* : AExprs */;
val* var195 /* : AExprs */;
val* var196 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var197 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ANewExpr#n_type (self) on <self:ANewExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2255);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___resolve_mtype(var_v, var);
}
var_recvtype = var3;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var9 = var_recvtype == var_other;
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
goto RET_LABEL;
} else {
}
/* <var_recvtype:nullable MType(MType)> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_recvtype->type->table_size) {
var10 = 0;
} else {
var10 = var_recvtype->type->type_table[cltype] == idtype;
}
var11 = !var10;
if (var11){
/* <var_recvtype:nullable MType(MType)> isa MNullableType */
cltype13 = type_nit__MNullableType.color;
idtype14 = type_nit__MNullableType.id;
if(cltype13 >= var_recvtype->type->table_size) {
var12 = 0;
} else {
var12 = var_recvtype->type->type_table[cltype13] == idtype14;
}
if (var12){
if (unlikely(varonce==NULL)) {
var15 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Type Error: cannot instantiate the nullable type `";
var19 = standard___standard__NativeString___to_s_with_length(var18, 50l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`.";
var23 = standard___standard__NativeString___to_s_with_length(var22, 2l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
{
var24 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MNullableType)>*/
}
((struct instance_standard__NativeArray*)var15)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var25); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
/* <var_recvtype:nullable MType(MType)> isa MFormalType */
cltype27 = type_nit__MFormalType.color;
idtype28 = type_nit__MFormalType.id;
if(cltype27 >= var_recvtype->type->table_size) {
var26 = 0;
} else {
var26 = var_recvtype->type->type_table[cltype27] == idtype28;
}
if (var26){
if (unlikely(varonce29==NULL)) {
var30 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "Type Error: cannot instantiate the formal type `";
var34 = standard___standard__NativeString___to_s_with_length(var33, 48l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var30)->values[0]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "`.";
var38 = standard___standard__NativeString___to_s_with_length(var37, 2l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var30)->values[2]=var36;
} else {
var30 = varonce29;
varonce29 = NULL;
}
{
var39 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MFormalType)>*/
}
((struct instance_standard__NativeArray*)var30)->values[1]=var39;
{
var40 = ((val*(*)(val* self))(var30->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var40); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
if (unlikely(varonce41==NULL)) {
var42 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "Type Error: cannot instantiate the type `";
var46 = standard___standard__NativeString___to_s_with_length(var45, 41l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var42)->values[0]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "`.";
var50 = standard___standard__NativeString___to_s_with_length(var49, 2l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var42)->values[2]=var48;
} else {
var42 = varonce41;
varonce41 = NULL;
}
{
var51 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var42)->values[1]=var51;
{
var52 = ((val*(*)(val* self))(var42->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var52); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
}
} else {
}
{
{ /* Inline typing#ANewExpr#recvtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__ANewExpr___recvtype].val = var_recvtype; /* _recvtype on <self:ANewExpr> */
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var56 = var_recvtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var54) on <var54:MClass> */
var59 = var54->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var54:MClass> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_kind = var57;
{
{ /* Inline parser_nodes#ANewExpr#n_id (self) on <self:ANewExpr> */
var62 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
var_nid = var60;
if (var_nid == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nid,((val*)NULL)) on <var_nid:nullable TId> */
var_other66 = ((val*)NULL);
{
var67 = ((short int(*)(val* self, val* p0))(var_nid->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nid, var_other66); /* == on <var_nid:nullable TId(TId)>*/
}
var68 = !var67;
var64 = var68;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
{
var69 = nit__lexer_work___Token___text(var_nid);
}
var_name = var69;
var_node = var_nid;
} else {
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "new";
var73 = standard___standard__NativeString___to_s_with_length(var72, 3l);
var71 = var73;
varonce70 = var71;
}
var_name = var71;
{
{ /* Inline parser_nodes#ANewExpr#n_kwnew (self) on <self:ANewExpr> */
var76 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2252);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
var_node = var74;
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "intern";
var80 = standard___standard__NativeString___to_s_with_length(var79, 6l);
var78 = var80;
varonce77 = var78;
}
{
var81 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var78); /* == on <var_name:String>*/
}
if (var81){
var82 = glob_sys;
{
var83 = nit__model___standard__Sys___concrete_kind(var82);
}
{
{ /* Inline kernel#Object#!= (var_kind,var83) on <var_kind:MClassKind> */
var_other66 = var83;
{
var86 = ((short int(*)(val* self, val* p0))(var_kind->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_kind, var_other66); /* == on <var_kind:MClassKind>*/
}
var87 = !var86;
var84 = var87;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
if (var84){
if (unlikely(varonce88==NULL)) {
var89 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "Type Error: cannot instantiate ";
var93 = standard___standard__NativeString___to_s_with_length(var92, 31l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var89)->values[0]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = " ";
var97 = standard___standard__NativeString___to_s_with_length(var96, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_standard__NativeArray*)var89)->values[2]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ".";
var101 = standard___standard__NativeString___to_s_with_length(var100, 1l);
var99 = var101;
varonce98 = var99;
}
((struct instance_standard__NativeArray*)var89)->values[4]=var99;
} else {
var89 = varonce88;
varonce88 = NULL;
}
{
var102 = ((val*(*)(val* self))(var_kind->class->vft[COLOR_standard__string__Object__to_s]))(var_kind); /* to_s on <var_kind:MClassKind>*/
}
((struct instance_standard__NativeArray*)var89)->values[1]=var102;
{
var103 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var89)->values[3]=var103;
{
var104 = ((val*(*)(val* self))(var89->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var104); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var107 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2261);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var105) on <var105:AExprs> */
var110 = var105->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var105:AExprs> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
var111 = standard___standard__Collection___not_empty(var108);
}
if (var111){
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var114 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2261);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "Type Error: the intern constructor expects no arguments.";
var118 = standard___standard__NativeString___to_s_with_length(var117, 56l);
var116 = var118;
varonce115 = var116;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, var112, var116); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_recvtype; /* _mtype on <self:ANewExpr> */
RET_LABEL119:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var120 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, var_node, var_recvtype, var_name, 0);
}
var_callsite = var120;
if (var_callsite == NULL) {
var121 = 1; /* is null */
} else {
var121 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var126 = var_callsite == var_other;
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
var121 = var122;
}
if (var121){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var129 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var127) on <var127:MMethod> */
var132 = var127->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var127:MMethod> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
var133 = !var130;
if (var133){
var134 = glob_sys;
{
var135 = nit__model___standard__Sys___concrete_kind(var134);
}
{
{ /* Inline kernel#Object#!= (var_kind,var135) on <var_kind:MClassKind> */
var_other66 = var135;
{
var138 = ((short int(*)(val* self, val* p0))(var_kind->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_kind, var_other66); /* == on <var_kind:MClassKind>*/
}
var139 = !var138;
var136 = var139;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
if (var136){
if (unlikely(varonce140==NULL)) {
var141 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "Type Error: cannot instantiate ";
var145 = standard___standard__NativeString___to_s_with_length(var144, 31l);
var143 = var145;
varonce142 = var143;
}
((struct instance_standard__NativeArray*)var141)->values[0]=var143;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = " `";
var149 = standard___standard__NativeString___to_s_with_length(var148, 2l);
var147 = var149;
varonce146 = var147;
}
((struct instance_standard__NativeArray*)var141)->values[2]=var147;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "`.";
var153 = standard___standard__NativeString___to_s_with_length(var152, 2l);
var151 = var153;
varonce150 = var151;
}
((struct instance_standard__NativeArray*)var141)->values[4]=var151;
} else {
var141 = varonce140;
varonce140 = NULL;
}
{
var154 = ((val*(*)(val* self))(var_kind->class->vft[COLOR_standard__string__Object__to_s]))(var_kind); /* to_s on <var_kind:MClassKind>*/
}
((struct instance_standard__NativeArray*)var141)->values[1]=var154;
{
var155 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var141)->values[3]=var155;
{
var156 = ((val*(*)(val* self))(var141->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var141); /* native_to_s on <var141:NativeArray[String]>*/
}
varonce140 = var141;
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var156); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_recvtype; /* _mtype on <self:ANewExpr> */
RET_LABEL157:(void)0;
}
}
} else {
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var160 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 631);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var158) on <var158:MSignature> */
var163 = var158->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var158:MSignature> */
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var161) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var161; /* _mtype on <self:ANewExpr> */
RET_LABEL164:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANewExpr> */
var167 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ANewExpr> */
var165 = var167;
RET_LABEL166:(void)0;
}
}
if (var165 == NULL) {
var168 = 0; /* is null */
} else {
var168 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var165,((val*)NULL)) on <var165:nullable MType> */
var_other66 = ((val*)NULL);
{
var171 = ((short int(*)(val* self, val* p0))(var165->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var165, var_other66); /* == on <var165:nullable MType(MType)>*/
}
var172 = !var171;
var169 = var172;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
var168 = var169;
}
if (unlikely(!var168)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 1995);
fatal_exit(1);
}
}
{
{ /* Inline typing#ANewExpr#callsite= (self,var_callsite) on <self:ANewExpr> */
self->attrs[COLOR_nit__typing__ANewExpr___callsite].val = var_callsite; /* _callsite on <self:ANewExpr> */
RET_LABEL173:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var176 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var179 = var_recvtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var179 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
{
var180 = nit___nit__MMethod___is_init_for(var174, var177);
}
var181 = !var180;
if (var181){
if (unlikely(varonce182==NULL)) {
var183 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "Error: `";
var187 = standard___standard__NativeString___to_s_with_length(var186, 8l);
var185 = var187;
varonce184 = var185;
}
((struct instance_standard__NativeArray*)var183)->values[0]=var185;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = "` is not a constructor.";
var191 = standard___standard__NativeString___to_s_with_length(var190, 23l);
var189 = var191;
varonce188 = var189;
}
((struct instance_standard__NativeArray*)var183)->values[2]=var189;
} else {
var183 = varonce182;
varonce182 = NULL;
}
((struct instance_standard__NativeArray*)var183)->values[1]=var_name;
{
var192 = ((val*(*)(val* self))(var183->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var183); /* native_to_s on <var183:NativeArray[String]>*/
}
varonce182 = var183;
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var192); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var195 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2261);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
var196 = nit__typing___AExprs___to_a(var193);
}
var_args = var196;
{
var197 = nit___nit__CallSite___check_signature(var_callsite, var_v, var_args);
}
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty for (self: AAttrFormExpr): nullable MAttribute */
val* nit__typing___AAttrFormExpr___mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty= for (self: AAttrFormExpr, nullable MAttribute) */
void nit__typing___AAttrFormExpr___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val = p0; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type for (self: AAttrFormExpr): nullable MType */
val* nit__typing___AAttrFormExpr___attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type= for (self: AAttrFormExpr, nullable MType) */
void nit__typing___AAttrFormExpr___attr_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val = p0; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: AAttrFormExpr, TypeVisitor) */
void nit__typing___AAttrFormExpr___resolve_property(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : TAttrid */;
val* var12 /* : TAttrid */;
val* var_node /* var node: TAttrid */;
val* var13 /* : String */;
val* var_name /* var name: String */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var15 /* : NativeArray[String] */;
static val* varonce;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : String */;
val* var25 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var26 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : ModelBuilder */;
val* var35 /* : ModelBuilder */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
val* var51 /* : String */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
val* var56 /* : MModule */;
val* var58 /* : MModule */;
val* var59 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MAttributeDef] */;
long var60 /* : Int */;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var67 /* : nullable MType */;
val* var69 /* : nullable MType */;
val* var_attr_type /* var attr_type: nullable MType */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : AExpr */;
val* var78 /* : AExpr */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
val* var82 /* : MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrFormExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
var_recvtype = var3;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var9 = var_recvtype == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_id (self) on <self:AAttrFormExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrFormExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2272);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_node = var10;
{
var13 = nit__lexer_work___Token___text(var_node);
}
var_name = var13;
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var14 = 0;
} else {
var14 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var14){
if (unlikely(varonce==NULL)) {
var15 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Error: attribute `";
var19 = standard___standard__NativeString___to_s_with_length(var18, 18l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "` access on `null`.";
var23 = standard___standard__NativeString___to_s_with_length(var22, 19l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var15)->values[1]=var_name;
{
var24 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nit__typing___nit__typing__TypeVisitor___error(var_v, var_node, var24); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var25 = nit__typing___nit__typing__TypeVisitor___anchor_to(var_v, var_recvtype);
}
var_unsafe_type = var25;
{
var26 = nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, var_node, var_unsafe_type, var_name);
}
var_mproperty = var26;
if (var_mproperty == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var32 = var_mproperty == var_other;
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
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var35 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Error: attribute `";
var41 = standard___standard__NativeString___to_s_with_length(var40, 18l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "` does not exist in `";
var45 = standard___standard__NativeString___to_s_with_length(var44, 21l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var37)->values[2]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "`.";
var49 = standard___standard__NativeString___to_s_with_length(var48, 2l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var37)->values[4]=var47;
} else {
var37 = varonce36;
varonce36 = NULL;
}
((struct instance_standard__NativeArray*)var37)->values[1]=var_name;
{
var50 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var37)->values[3]=var50;
{
var51 = ((val*(*)(val* self))(var37->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nit___nit__ModelBuilder___error(var33, var_node, var51); /* Direct call modelbuilder_base#ModelBuilder#error on <var33:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MAttribute */
cltype53 = type_nit__MAttribute.color;
idtype54 = type_nit__MAttribute.id;
if(cltype53 >= var_mproperty->type->table_size) {
var52 = 0;
} else {
var52 = var_mproperty->type->type_table[cltype53] == idtype54;
}
if (unlikely(!var52)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 2037);
fatal_exit(1);
}
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_mproperty) on <self:AAttrFormExpr> */
self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val = var_mproperty; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL55:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var58 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nit___nit__MProperty___lookup_definitions(var_mproperty, var56, var_unsafe_type);
}
var_mpropdefs = var59;
{
{ /* Inline array#AbstractArrayRead#length (var_mpropdefs) on <var_mpropdefs:Array[MAttributeDef]> */
var62 = var_mpropdefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_mpropdefs:Array[MAttributeDef]> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var60,1l) on <var60:Int> */
var65 = var60 == 1l;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (unlikely(!var63)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 2041);
fatal_exit(1);
}
{
var66 = standard___standard__SequenceRead___Collection__first(var_mpropdefs);
}
var_mpropdef = var66;
{
{ /* Inline model#MAttributeDef#static_mtype (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var69 = var_mpropdef->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var_mpropdef:MAttributeDef> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_attr_type = var67;
if (var_attr_type == NULL) {
var70 = 1; /* is null */
} else {
var70 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_attr_type,((val*)NULL)) on <var_attr_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_attr_type,var_other) on <var_attr_type:nullable MType(MType)> */
var75 = var_attr_type == var_other;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var70 = var71;
}
if (var70){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrFormExpr> */
var78 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
/* <var76:AExpr> isa ASelfExpr */
cltype80 = type_nit__ASelfExpr.color;
idtype81 = type_nit__ASelfExpr.id;
if(cltype80 >= var76->type->table_size) {
var79 = 0;
} else {
var79 = var76->type->type_table[cltype80] == idtype81;
}
{
var82 = nit__typing___nit__typing__TypeVisitor___resolve_for(var_v, var_attr_type, var_recvtype, var79);
}
var_attr_type = var82;
{
{ /* Inline typing#AAttrFormExpr#attr_type= (self,var_attr_type) on <self:AAttrFormExpr> */
self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val = var_attr_type; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL83:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: AAttrExpr, TypeVisitor) */
void nit__typing___AAttrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
nit__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrExpr> */
var2 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:AAttrExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var; /* _mtype on <self:AAttrExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: AAttrAssignExpr, TypeVisitor) */
void nit__typing___AAttrAssignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : nullable MType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
var_v = p0;
{
nit__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrAssignExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrAssignExpr> */
var2 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AAttrAssignExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1995);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var3, var_mtype);
}
if (var_mtype == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
{
{ /* Inline typing#AExpr#is_typed= (self,var7) on <self:AAttrAssignExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var7; /* _is_typed on <self:AAttrAssignExpr> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: AAttrReassignExpr, TypeVisitor) */
void nit__typing___AAttrReassignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_v = p0;
{
nit__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrReassignExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
if (var_mtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var8 = var_mtype == var_other;
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
goto RET_LABEL;
} else {
}
{
var9 = nit__typing___AReassignFormExpr___resolve_reassignment(self, var_v, var_mtype, var_mtype);
}
var_rettype = var9;
if (var_rettype == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,((val*)NULL)) on <var_rettype:nullable MType> */
var_other13 = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rettype, var_other13); /* == on <var_rettype:nullable MType(MType)>*/
}
var15 = !var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
{
{ /* Inline typing#AExpr#is_typed= (self,var10) on <self:AAttrReassignExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var10; /* _is_typed on <self:AAttrReassignExpr> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: AIssetAttrExpr, TypeVisitor) */
void nit__typing___AIssetAttrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AExpr */;
val* var11 /* : AExpr */;
val* var12 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
val* var13 /* : MType */;
val* var_bound /* var bound: MType */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var15 /* : TAttrid */;
val* var17 /* : TAttrid */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : nullable MType */;
var_v = p0;
{
nit__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AIssetAttrExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AIssetAttrExpr> */
var2 = self->attrs[COLOR_nit__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AIssetAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
if (var_mtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var8 = var_mtype == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AIssetAttrExpr> */
var11 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((val*(*)(val* self))(var9->class->vft[COLOR_nit__typing__AExpr__mtype]))(var9); /* mtype on <var9:AExpr>*/
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 2090);
fatal_exit(1);
}
var_recvtype = var12;
{
var13 = nit__typing___nit__typing__TypeVisitor___resolve_for(var_v, var_mtype, var_recvtype, 0);
}
var_bound = var13;
/* <var_bound:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_bound->type->table_size) {
var14 = 0;
} else {
var14 = var_bound->type->type_table[cltype] == idtype;
}
if (var14){
{
{ /* Inline parser_nodes#AAttrFormExpr#n_id (self) on <self:AIssetAttrExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2272);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "Type Error: `isset` on a nullable attribute.";
var20 = standard___standard__NativeString___to_s_with_length(var19, 44l);
var18 = var20;
varonce = var18;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, var15, var18); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
var21 = nit__typing___nit__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var21) on <self:AIssetAttrExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var21; /* _mtype on <self:AIssetAttrExpr> */
RET_LABEL22:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AVarargExpr#accept_typing for (self: AVarargExpr, TypeVisitor) */
void nit__typing___AVarargExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Syntax Error: unexpected `...`.";
var2 = standard___standard__NativeString___to_s_with_length(var1, 31l);
var = var2;
varonce = var;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: ADebugTypeExpr, TypeVisitor) */
void nit__typing___ADebugTypeExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_expr /* var expr: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
val* var_unsafe /* var unsafe: MType */;
val* var11 /* : AType */;
val* var13 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other19 /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : MType */;
val* var_umtype /* var umtype: MType */;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#ADebugTypeExpr#n_expr (self) on <self:ADebugTypeExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2760);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var);
}
var_expr = var3;
if (var_expr == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_expr,((val*)NULL)) on <var_expr:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_expr,var_other) on <var_expr:nullable MType(MType)> */
var9 = var_expr == var_other;
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
goto RET_LABEL;
} else {
}
{
var10 = nit__typing___nit__typing__TypeVisitor___anchor_to(var_v, var_expr);
}
var_unsafe = var10;
{
{ /* Inline parser_nodes#ADebugTypeExpr#n_type (self) on <self:ADebugTypeExpr> */
var13 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2763);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ntype = var11;
{
var14 = nit__typing___nit__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
}
var_mtype = var14;
if (var_mtype == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other19 = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other19); /* == on <var_mtype:nullable MType(MType)>*/
}
var21 = !var20;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
var_ = var16;
if (var16){
{
{ /* Inline kernel#Object#!= (var_mtype,var_expr) on <var_mtype:nullable MType(MType)> */
var_other19 = var_expr;
{
var24 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other19); /* == on <var_mtype:nullable MType(MType)>*/
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var15 = var22;
} else {
var15 = var_;
}
if (var15){
{
var26 = nit__typing___nit__typing__TypeVisitor___anchor_to(var_v, var_mtype);
}
var_umtype = var26;
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var29 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "debug";
var32 = standard___standard__NativeString___to_s_with_length(var31, 5l);
var30 = var32;
varonce = var30;
}
if (unlikely(varonce33==NULL)) {
var34 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Found type ";
var38 = standard___standard__NativeString___to_s_with_length(var37, 11l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var34)->values[0]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " (-> ";
var42 = standard___standard__NativeString___to_s_with_length(var41, 5l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var34)->values[2]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "), expected ";
var46 = standard___standard__NativeString___to_s_with_length(var45, 12l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var34)->values[4]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = " (-> ";
var50 = standard___standard__NativeString___to_s_with_length(var49, 5l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var34)->values[6]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = ")";
var54 = standard___standard__NativeString___to_s_with_length(var53, 1l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var34)->values[8]=var52;
} else {
var34 = varonce33;
varonce33 = NULL;
}
{
var55 = ((val*(*)(val* self))(var_expr->class->vft[COLOR_standard__string__Object__to_s]))(var_expr); /* to_s on <var_expr:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var34)->values[1]=var55;
{
var56 = ((val*(*)(val* self))(var_unsafe->class->vft[COLOR_standard__string__Object__to_s]))(var_unsafe); /* to_s on <var_unsafe:MType>*/
}
((struct instance_standard__NativeArray*)var34)->values[3]=var56;
{
var57 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var34)->values[5]=var57;
{
var58 = ((val*(*)(val* self))(var_umtype->class->vft[COLOR_standard__string__Object__to_s]))(var_umtype); /* to_s on <var_umtype:MType>*/
}
((struct instance_standard__NativeArray*)var34)->values[7]=var58;
{
var59 = ((val*(*)(val* self))(var34->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
nit___nit__ModelBuilder___warning(var27, self, var30, var59); /* Direct call modelbuilder_base#ModelBuilder#warning on <var27:ModelBuilder>*/
}
} else {
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ADebugTypeExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ADebugTypeExpr> */
RET_LABEL60:(void)0;
}
}
RET_LABEL:;
}
